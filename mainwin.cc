#include "discord_rpc.h"
#include "mainwin.hh"

#include <qdiriterator.h>

const QString MainWin::appId = "593277746285903914";

const QString MainWin::commentId = "comment";

const QString MainWin::iconPath = ":/icons/resources/";

const QString MainWin::miscPath = ":/misc/resources/";

const QString MainWin::noneId = "None";

const QString MainWin::statConnected = "Rich Presence update sent!";

const QString MainWin::unknownId = "Unknown";

MainWin::MainWin(QWidget *pParent)
	: QMainWindow(pParent),
	  richPresence{}
{
	ui.setupUi(this);

	// Initialise Discord RPC.
	// TO-DO: Handle errors.
	discord.Initialise(appId.toStdString());

	// Prevent window resizing.
	// TO-DO: See if this can be done in the editor instead!
	setWindowFlags(Qt::MSWindowsFixedSizeDialogHint);

	// Add icon elements to combo list from resource file.
	{
		QDirIterator it(iconPath);

		while (it.hasNext())
		{
			it.next();
			ui.comboIcon->addItem(it.fileInfo().baseName());
		}

		ui.comboIcon->model()->sort(0);

		ui.comboIcon->insertItem(0, unknownId);
		ui.comboIcon->insertItem(0, noneId);
	}

	// Connect signals to functions.
	{
		QObject::connect(ui.checkElapsed, &QCheckBox::clicked, this, &MainWin::FormatTimeRemain);
		QObject::connect(ui.checkPreserve, &QCheckBox::clicked, this, &MainWin::FormatTimeUpdate);
		QObject::connect(ui.butUpdate, &QPushButton::clicked, this, &MainWin::UpdatePresence);
		QObject::connect(ui.lineSmallText, &QLineEdit::textEdited, this, &MainWin::FormatSmallLine);
		QObject::connect(ui.lineLargeText, &QLineEdit::textEdited, this, &MainWin::FormatLargeLine);
		QObject::connect(ui.labelAbout, &ClickableLabel::Clicked, this, &MainWin::OpenAboutDialog);
		QObject::connect(ui.comboIcon, static_cast<void (QComboBox::*)(int)>(&QComboBox::currentIndexChanged), this, &MainWin::SetImageIcon);

	}

	// Configure the "About" label's mouse event stylesheets.
	{
		ui.labelAbout->styleLeave = ui.labelAbout->styleSheet();
		ui.labelAbout->styleEnter = ui.labelAbout->styleSheet() + "color: #000000;";
	}

	// Set the current index, resulting in SetImageIcon being called.
	ui.comboIcon->setCurrentIndex(0);
}

void MainWin::FormatLargeLine()
{
	ui.lineSmallText->setDisabled((ui.lineLargeText->text().length() > 0) ? true : false);
}

void MainWin::FormatSmallLine()
{
	ui.lineLargeText->setDisabled((ui.lineSmallText->text().length() > 0) ? true : false);
}

void MainWin::FormatTimeRemain()
{
	ui.timeRemain->setEnabled((ui.checkElapsed->isChecked() && ui.checkElapsed->isEnabled()) ? true : false);
}

void MainWin::FormatTimeUpdate()
{
	ui.checkElapsed->setDisabled((ui.checkPreserve->isChecked()) ? true : false);

	FormatTimeRemain();
}

void MainWin::OpenAboutDialog()
{
	AboutDialog aboutDialog(this);

	// Set the window flags of the dialog window.
	{
		aboutDialog.setWindowFlag(Qt::WindowContextHelpButtonHint, false);
		aboutDialog.setWindowFlag(Qt::MSWindowsFixedSizeDialogHint, true);
	}

	// Execute the dialog window.
	// NOTE: This will block execution of the main window.
	aboutDialog.exec();
}

void MainWin::SetImageIcon()
{
	// NOTE: The icon count offset takes into account the additional "None" option.
	if (ui.comboIcon->currentIndex() < ui.comboIcon->count())
	{
		// If the user selected "None" for the image icon
		if (ui.comboIcon->currentText() == noneId)
		{
			ui.labelPlayPic->setPixmap(QPixmap(miscPath + unknownId + ".png"));
			ui.labelPlayPic->setDisabled(true);

			// Disable comment lines
			ui.lineSmallText->setDisabled(true);
			ui.lineLargeText->setDisabled(true);
		}
		else
		{
			// If the user has selected "Unknown" for the image icon
			if (ui.comboIcon->currentText() == unknownId)
				ui.labelPlayPic->setPixmap(QPixmap(miscPath + unknownId + ".png"));
			else
				ui.labelPlayPic->setPixmap(QPixmap(iconPath + ui.comboIcon->currentText() + ".png"));

			ui.labelPlayPic->setDisabled(false);

			// Enable commment lines
			FormatSmallLine();
			FormatLargeLine();
		}
	}
}

void MainWin::UpdatePresence()
{
	// State.
	{
		richPresence.details = ui.lineDetails->text().toStdString();
		richPresence.state = ui.lineState->text().toStdString();
	}

	// Timestamp.
	// Set the end timestamp if the "preserve time" checkbox is unchecked.
	if (!ui.checkPreserve->isChecked())
	{
		// Set the timestamps if the "elapsed time" checkbox is checked
		if (ui.checkElapsed->isChecked())
		{
			richPresence.timeStart = std::chrono::duration_cast<std::chrono::seconds>(std::chrono::system_clock::now().time_since_epoch()).count();
			richPresence.timeEnd = (ui.timeRemain->time().hour() * 3600
				+ ui.timeRemain->time().minute() * 60
				+ ui.timeRemain->time().second());

			// If the "remaining time" time list is unused (i.e., the user wants elapsed time instead)
			if (richPresence.timeEnd > 0)
				richPresence.timeEnd += richPresence.timeStart;
		}
		// Set timestamps to 0 to preserve current Rich Presence time on Discord
		else
		{
			richPresence.timeStart = 0;
			richPresence.timeEnd = 0;
		}
	}

	// Party.
	{
		richPresence.partySize = ui.spinPartySize->value();
		richPresence.partyMax = ui.spinPartyMax->value();
	}

	// Small tooltip text.
	richPresence.smallText = (ui.lineSmallText->isEnabled()) ? ui.lineSmallText->text().toStdString() : "";

	// Large tooltip text.
	richPresence.largeText = (ui.lineLargeText->isEnabled()) ? ui.lineLargeText->text().toStdString() : "";

	// Icons.
	// Set comment icon if there is a small text tooltip
	richPresence.smallKey = (richPresence.smallText.length() > 0) ? commentId.toStdString() : "";

	// Replace spaces with underscores and format string to lower-case for Discord icons.
	if (ui.comboIcon->currentText() != noneId)
	{
		QString discordKey = ui.comboIcon->currentText();
		discordKey.replace(" ", "_");

		richPresence.largeKey = discordKey.toLower().toStdString();
	}
	else
	{
		richPresence.largeKey = "";
	}

	// Send Rich Presence update to Discord via Discord RPC.
	// TO-DO: Error checking.
	discord.UpdatePresence(richPresence);

	// Display success message to the user for 3 seconds.
	statusBar()->showMessage(statConnected, 3000);
}

#pragma once

#include <QtWidgets/QMainWindow>
#include <qpointer.h>

#include "aboutdialog.hh"
#include "discord.hh"
#include "ui_mainwin.h"

// The main Qt window of the application.
class MainWin : public QMainWindow
{
	Q_OBJECT

public:
	MainWin(QWidget *pParent = Q_NULLPTR);

protected:
	static const QString appId;

	static const QString commentId;

	static const QString iconPath;

	static const QString miscPath;

	static const QString noneId;

	static const QString statConnected;

	static const QString unknownId;

	// Set the small comment box's disabled state.
	auto FormatLargeLine() -> void;

	// Set the large comment box's disabled state.
	auto FormatSmallLine() -> void;

	// Set the time remaining list's disabled state.
	auto FormatTimeRemain() -> void;

	// Set the elapsed time check box's disabled state.
	auto FormatTimeUpdate() -> void;

	// Open the "About" dialog in the same thread.
	auto OpenAboutDialog() -> void;

	// Update the icon preview image.
	// TO-DO: Make this less hacky in general!
	auto SetImageIcon() -> void;

	// Send a Discord Rich Presence update.
	auto UpdatePresence() -> void;

	// Instance of Discord RPC.
	Discord discord;

	// Discord Rich Presence struct.
	RichPresence richPresence;

	// Qt UI for the main window.
	Ui::MainWinClass ui;
};

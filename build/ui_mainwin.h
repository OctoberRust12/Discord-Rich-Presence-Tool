/********************************************************************************
** Form generated from reading UI file 'mainwin.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWIN_H
#define UI_MAINWIN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "aboutlabel.hh"

QT_BEGIN_NAMESPACE

class Ui_MainWinClass
{
public:
    QAction *actionExit;
    QAction *actionAbout;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionSaveAs;
    QAction *actionNew;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *labelPlaying;
    AboutLabel *labelAbout;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *labelPlayPic;
    QComboBox *comboIcon;
    QVBoxLayout *verticalRich;
    QLineEdit *lineDetails;
    QLineEdit *lineState;
    QHBoxLayout *horizontalLayout_3;
    QSpinBox *spinPartySize;
    QLabel *labelOf;
    QSpinBox *spinPartyMax;
    QHBoxLayout *horizontalLayout_4;
    QCheckBox *checkElapsed;
    QLabel *labelRemain;
    QTimeEdit *timeRemain;
    QLineEdit *lineSmallText;
    QLineEdit *lineLargeText;
    QHBoxLayout *horizontalLayout_5;
    QCheckBox *checkPreserve;
    QPushButton *butUpdate;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWinClass)
    {
        if (MainWinClass->objectName().isEmpty())
            MainWinClass->setObjectName(QString::fromUtf8("MainWinClass"));
        MainWinClass->setWindowModality(Qt::NonModal);
        MainWinClass->setEnabled(true);
        MainWinClass->resize(415, 224);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWinClass->sizePolicy().hasHeightForWidth());
        MainWinClass->setSizePolicy(sizePolicy);
        MainWinClass->setMaximumSize(QSize(16777215, 16777215));
        MainWinClass->setContextMenuPolicy(Qt::NoContextMenu);
        MainWinClass->setAcceptDrops(false);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/misc/Resources/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWinClass->setWindowIcon(icon);
        MainWinClass->setLayoutDirection(Qt::LeftToRight);
        MainWinClass->setAutoFillBackground(false);
        MainWinClass->setDocumentMode(false);
        MainWinClass->setDockOptions(QMainWindow::AllowTabbedDocks|QMainWindow::AnimatedDocks);
        MainWinClass->setUnifiedTitleAndToolBarOnMac(false);
        actionExit = new QAction(MainWinClass);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionExit->setMenuRole(QAction::QuitRole);
        actionExit->setIconVisibleInMenu(true);
        actionExit->setShortcutVisibleInContextMenu(true);
        actionAbout = new QAction(MainWinClass);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionAbout->setCheckable(false);
        actionAbout->setChecked(false);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/dafk/Resources/test.gif"), QSize(), QIcon::Normal, QIcon::Off);
        actionAbout->setIcon(icon1);
        actionAbout->setMenuRole(QAction::AboutRole);
        actionAbout->setShortcutVisibleInContextMenu(true);
        actionOpen = new QAction(MainWinClass);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        actionOpen->setShortcutVisibleInContextMenu(true);
        actionSave = new QAction(MainWinClass);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        actionSave->setShortcutVisibleInContextMenu(true);
        actionSaveAs = new QAction(MainWinClass);
        actionSaveAs->setObjectName(QString::fromUtf8("actionSaveAs"));
        actionSaveAs->setShortcutVisibleInContextMenu(true);
        actionNew = new QAction(MainWinClass);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        actionNew->setShortcutVisibleInContextMenu(true);
        centralWidget = new QWidget(MainWinClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        labelPlaying = new QLabel(centralWidget);
        labelPlaying->setObjectName(QString::fromUtf8("labelPlaying"));
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        labelPlaying->setFont(font);
        labelPlaying->setStyleSheet(QString::fromUtf8("color: #70757C"));
        labelPlaying->setMargin(0);

        horizontalLayout->addWidget(labelPlaying);

        labelAbout = new AboutLabel(centralWidget);
        labelAbout->setObjectName(QString::fromUtf8("labelAbout"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(labelAbout->sizePolicy().hasHeightForWidth());
        labelAbout->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        labelAbout->setFont(font1);
        labelAbout->setStyleSheet(QString::fromUtf8("color: #70757C;"));
        labelAbout->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(labelAbout);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        labelPlayPic = new QLabel(centralWidget);
        labelPlayPic->setObjectName(QString::fromUtf8("labelPlayPic"));
        sizePolicy.setHeightForWidth(labelPlayPic->sizePolicy().hasHeightForWidth());
        labelPlayPic->setSizePolicy(sizePolicy);
        labelPlayPic->setMinimumSize(QSize(128, 128));
        labelPlayPic->setMaximumSize(QSize(128, 128));
        labelPlayPic->setStyleSheet(QString::fromUtf8("background-color: #FFFFFF; border-radius: 4px;"));
        labelPlayPic->setScaledContents(true);
        labelPlayPic->setAlignment(Qt::AlignCenter);
        labelPlayPic->setMargin(8);

        verticalLayout->addWidget(labelPlayPic);

        comboIcon = new QComboBox(centralWidget);
        comboIcon->setObjectName(QString::fromUtf8("comboIcon"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(comboIcon->sizePolicy().hasHeightForWidth());
        comboIcon->setSizePolicy(sizePolicy2);
        comboIcon->setMinimumSize(QSize(128, 0));
        comboIcon->setMaximumSize(QSize(128, 16777215));
        comboIcon->setEditable(false);

        verticalLayout->addWidget(comboIcon);


        horizontalLayout_2->addLayout(verticalLayout);

        verticalRich = new QVBoxLayout();
        verticalRich->setSpacing(0);
        verticalRich->setObjectName(QString::fromUtf8("verticalRich"));
        verticalRich->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalRich->setContentsMargins(0, 0, 0, 0);
        lineDetails = new QLineEdit(centralWidget);
        lineDetails->setObjectName(QString::fromUtf8("lineDetails"));
        sizePolicy2.setHeightForWidth(lineDetails->sizePolicy().hasHeightForWidth());
        lineDetails->setSizePolicy(sizePolicy2);
        lineDetails->setMinimumSize(QSize(255, 0));
        lineDetails->setMaxLength(128);

        verticalRich->addWidget(lineDetails);

        lineState = new QLineEdit(centralWidget);
        lineState->setObjectName(QString::fromUtf8("lineState"));
        sizePolicy2.setHeightForWidth(lineState->sizePolicy().hasHeightForWidth());
        lineState->setSizePolicy(sizePolicy2);
        lineState->setMinimumSize(QSize(255, 0));
        lineState->setMaxLength(128);

        verticalRich->addWidget(lineState);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, -1, -1, 0);
        spinPartySize = new QSpinBox(centralWidget);
        spinPartySize->setObjectName(QString::fromUtf8("spinPartySize"));
        sizePolicy2.setHeightForWidth(spinPartySize->sizePolicy().hasHeightForWidth());
        spinPartySize->setSizePolicy(sizePolicy2);
        spinPartySize->setMaximum(2147483647);

        horizontalLayout_3->addWidget(spinPartySize);

        labelOf = new QLabel(centralWidget);
        labelOf->setObjectName(QString::fromUtf8("labelOf"));
        labelOf->setAlignment(Qt::AlignCenter);
        labelOf->setMargin(4);

        horizontalLayout_3->addWidget(labelOf);

        spinPartyMax = new QSpinBox(centralWidget);
        spinPartyMax->setObjectName(QString::fromUtf8("spinPartyMax"));
        sizePolicy2.setHeightForWidth(spinPartyMax->sizePolicy().hasHeightForWidth());
        spinPartyMax->setSizePolicy(sizePolicy2);
        spinPartyMax->setMinimum(0);
        spinPartyMax->setMaximum(2147483647);

        horizontalLayout_3->addWidget(spinPartyMax);


        verticalRich->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        checkElapsed = new QCheckBox(centralWidget);
        checkElapsed->setObjectName(QString::fromUtf8("checkElapsed"));
        sizePolicy2.setHeightForWidth(checkElapsed->sizePolicy().hasHeightForWidth());
        checkElapsed->setSizePolicy(sizePolicy2);

        horizontalLayout_4->addWidget(checkElapsed);

        labelRemain = new QLabel(centralWidget);
        labelRemain->setObjectName(QString::fromUtf8("labelRemain"));
        sizePolicy2.setHeightForWidth(labelRemain->sizePolicy().hasHeightForWidth());
        labelRemain->setSizePolicy(sizePolicy2);
        labelRemain->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelRemain->setMargin(2);

        horizontalLayout_4->addWidget(labelRemain);

        timeRemain = new QTimeEdit(centralWidget);
        timeRemain->setObjectName(QString::fromUtf8("timeRemain"));
        timeRemain->setEnabled(false);
        sizePolicy.setHeightForWidth(timeRemain->sizePolicy().hasHeightForWidth());
        timeRemain->setSizePolicy(sizePolicy);
        timeRemain->setDateTime(QDateTime(QDate(2000, 1, 1), QTime(0, 0, 0)));

        horizontalLayout_4->addWidget(timeRemain);


        verticalRich->addLayout(horizontalLayout_4);

        lineSmallText = new QLineEdit(centralWidget);
        lineSmallText->setObjectName(QString::fromUtf8("lineSmallText"));
        sizePolicy2.setHeightForWidth(lineSmallText->sizePolicy().hasHeightForWidth());
        lineSmallText->setSizePolicy(sizePolicy2);
        lineSmallText->setMinimumSize(QSize(255, 0));
        lineSmallText->setMaxLength(128);

        verticalRich->addWidget(lineSmallText);

        lineLargeText = new QLineEdit(centralWidget);
        lineLargeText->setObjectName(QString::fromUtf8("lineLargeText"));
        sizePolicy2.setHeightForWidth(lineLargeText->sizePolicy().hasHeightForWidth());
        lineLargeText->setSizePolicy(sizePolicy2);
        lineLargeText->setMinimumSize(QSize(255, 0));
        lineLargeText->setMaxLength(128);

        verticalRich->addWidget(lineLargeText);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        checkPreserve = new QCheckBox(centralWidget);
        checkPreserve->setObjectName(QString::fromUtf8("checkPreserve"));
        checkPreserve->setEnabled(true);
        sizePolicy2.setHeightForWidth(checkPreserve->sizePolicy().hasHeightForWidth());
        checkPreserve->setSizePolicy(sizePolicy2);

        horizontalLayout_5->addWidget(checkPreserve);

        butUpdate = new QPushButton(centralWidget);
        butUpdate->setObjectName(QString::fromUtf8("butUpdate"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(butUpdate->sizePolicy().hasHeightForWidth());
        butUpdate->setSizePolicy(sizePolicy3);
        butUpdate->setMinimumSize(QSize(0, 0));

        horizontalLayout_5->addWidget(butUpdate);


        verticalRich->addLayout(horizontalLayout_5);


        horizontalLayout_2->addLayout(verticalRich);


        verticalLayout_2->addLayout(horizontalLayout_2);


        gridLayout->addLayout(verticalLayout_2, 0, 0, 1, 1);

        MainWinClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWinClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(statusBar->sizePolicy().hasHeightForWidth());
        statusBar->setSizePolicy(sizePolicy4);
        statusBar->setSizeGripEnabled(false);
        MainWinClass->setStatusBar(statusBar);

        retranslateUi(MainWinClass);
        QObject::connect(actionExit, SIGNAL(triggered()), MainWinClass, SLOT(close()));

        comboIcon->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(MainWinClass);
    } // setupUi

    void retranslateUi(QMainWindow *MainWinClass)
    {
        MainWinClass->setWindowTitle(QCoreApplication::translate("MainWinClass", "Discord Rich Presence Tool", nullptr));
        actionExit->setText(QCoreApplication::translate("MainWinClass", "Exit", nullptr));
        actionAbout->setText(QCoreApplication::translate("MainWinClass", "About", nullptr));
#if QT_CONFIG(shortcut)
        actionAbout->setShortcut(QCoreApplication::translate("MainWinClass", "F1", nullptr));
#endif // QT_CONFIG(shortcut)
        actionOpen->setText(QCoreApplication::translate("MainWinClass", "Open", nullptr));
#if QT_CONFIG(shortcut)
        actionOpen->setShortcut(QCoreApplication::translate("MainWinClass", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSave->setText(QCoreApplication::translate("MainWinClass", "Save", nullptr));
#if QT_CONFIG(shortcut)
        actionSave->setShortcut(QCoreApplication::translate("MainWinClass", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSaveAs->setText(QCoreApplication::translate("MainWinClass", "Save As...", nullptr));
#if QT_CONFIG(shortcut)
        actionSaveAs->setShortcut(QCoreApplication::translate("MainWinClass", "Ctrl+Alt+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionNew->setText(QCoreApplication::translate("MainWinClass", "New", nullptr));
#if QT_CONFIG(shortcut)
        actionNew->setShortcut(QCoreApplication::translate("MainWinClass", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        labelPlaying->setText(QCoreApplication::translate("MainWinClass", "PLAYING", nullptr));
        labelAbout->setText(QCoreApplication::translate("MainWinClass", "About", nullptr));
        labelPlayPic->setText(QString());
        lineDetails->setPlaceholderText(QCoreApplication::translate("MainWinClass", "Game/activity name", nullptr));
        lineState->setPlaceholderText(QCoreApplication::translate("MainWinClass", "Details", nullptr));
        spinPartySize->setSuffix(QCoreApplication::translate("MainWinClass", " players", nullptr));
        labelOf->setText(QCoreApplication::translate("MainWinClass", "of", nullptr));
        spinPartyMax->setSuffix(QCoreApplication::translate("MainWinClass", " max", nullptr));
        checkElapsed->setText(QCoreApplication::translate("MainWinClass", "Elapsed time", nullptr));
        labelRemain->setText(QCoreApplication::translate("MainWinClass", "Remaining time:", nullptr));
        timeRemain->setDisplayFormat(QCoreApplication::translate("MainWinClass", "HH:mm:ss", nullptr));
        lineSmallText->setPlaceholderText(QCoreApplication::translate("MainWinClass", "Small icon comment", nullptr));
        lineLargeText->setPlaceholderText(QCoreApplication::translate("MainWinClass", "Large icon comment", nullptr));
        checkPreserve->setText(QCoreApplication::translate("MainWinClass", "Preserve time", nullptr));
        butUpdate->setText(QCoreApplication::translate("MainWinClass", "Update", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWinClass: public Ui_MainWinClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWIN_H

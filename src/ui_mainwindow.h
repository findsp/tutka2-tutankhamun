/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.15
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "clickablelabel.h"
#include "instrumentspinbox.h"
#include "tracker.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionFileNew;
    QAction *actionFileOpen;
    QAction *actionFileSave;
    QAction *actionFileSaveAs;
    QAction *actionPrint;
    QAction *actionFileQuit;
    QAction *actionEditCut;
    QAction *actionEditCopy;
    QAction *actionEditPaste;
    QAction *actionEditClear;
    QAction *actionEditTranspose;
    QAction *actionEditExpandShrink;
    QAction *actionEditChangeInstrument;
    QAction *actionSongSectionList;
    QAction *actionSongTrackVolumes;
    QAction *actionSongTranspose;
    QAction *actionSongExpandShrink;
    QAction *actionSongChangeInstrument;
    QAction *actionSongProperties;
    QAction *actionPlayingSequenceEditCurrent;
    QAction *actionPlayingSequenceList;
    QAction *actionBlockCut;
    QAction *actionBlockCopy;
    QAction *actionBlockPaste;
    QAction *actionBlockClear;
    QAction *actionBlockSelectAll;
    QAction *actionBlockTranspose;
    QAction *actionBlockExpandShrink;
    QAction *actionBlockChangeInstrument;
    QAction *actionBlockList;
    QAction *actionTrackCut;
    QAction *actionTrackCopy;
    QAction *actionTrackPaste;
    QAction *actionTrackClear;
    QAction *actionTrackSelectAll;
    QAction *actionTrackTranspose;
    QAction *actionTrackExpandShrink;
    QAction *actionTrackChangeInstrument;
    QAction *actionMidiKillAllNotes;
    QAction *actionMidiResetPitch;
    QAction *actionMidiMessageList;
    QAction *actionSettingsSendMidiSync;
    QAction *actionSettingsRecordControllers;
    QAction *actionSettingsPreferences;
    QAction *actionHelpAbout;
    QAction *actionExternalSyncOff;
    QAction *actionExternalSyncMidi;
    QAction *actionHelpHelp;
    QAction *actionBlockSplit;
    QAction *actionTrackInsertCurrentBlock;
    QAction *actionTrackInsertAllBlocks;
    QAction *actionTrackDeleteCurrentBlock;
    QAction *actionTrackDeleteAllBlocks;
    QWidget *widgetMain;
    QVBoxLayout *verticalLayout;
    QWidget *widgetTop;
    QHBoxLayout *horizontalLayout;
    QFrame *frameControls;
    QGridLayout *gridLayout;
    QLabel *labelPlaySong;
    QPushButton *buttonPlaySong;
    QPushButton *buttonContinueSong;
    QLabel *labelPlayBlock;
    QPushButton *buttonPlayBlock;
    QPushButton *buttonContinueBlock;
    QPushButton *buttonStop;
    QWidget *widgetInstrument;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBoxInstrument;
    QHBoxLayout *horizontalLayout_4;
    InstrumentSpinBox *spinBoxInstrument;
    QLineEdit *lineEditInstrument;
    QPushButton *buttonInstrumentProperties;
    QWidget *widgetMode;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacerMode;
    QCheckBox *checkBoxEdit;
    QCheckBox *checkBoxChord;
    QLabel *labelSpace;
    QSpinBox *spinBoxSpace;
    QLabel *labelKeyboardOctaves;
    QComboBox *comboBoxKeyboardOctaves;
    QWidget *widgetTracker;
    QGridLayout *gridLayout_2;
    Tracker *tracker;
    QScrollBar *horizontalScrollBarTracker;
    QScrollBar *verticalScrollBarTracker;
    QWidget *widgetStatusBar;
    QHBoxLayout *horizontalLayout_2;
    QFrame *frameStatus1;
    QHBoxLayout *horizontalLayout_8;
    ClickableLabel *labelSection;
    ClickableLabel *labelPlayingSequence;
    ClickableLabel *labelPosition;
    ClickableLabel *labelBlock;
    QLabel *labelCommandPage;
    QFrame *frameStatus2;
    QHBoxLayout *horizontalLayout_6;
    QLabel *labelStatus;
    QFrame *frameTimer;
    QHBoxLayout *horizontalLayout_5;
    QLabel *labelTimer;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuSong;
    QMenu *menuPlayingSequence;
    QMenu *menuBlock;
    QMenu *menuTrack;
    QMenu *menuTrackInsert;
    QMenu *menuTrackDelete;
    QMenu *menuMidi;
    QMenu *menuSettings;
    QMenu *menuSettingsExternalSync;
    QMenu *menuHelp;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(819, 600);
        actionFileNew = new QAction(MainWindow);
        actionFileNew->setObjectName(QString::fromUtf8("actionFileNew"));
        QIcon icon;
        QString iconThemeName = QString::fromUtf8("document-new");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionFileNew->setIcon(icon);
        actionFileOpen = new QAction(MainWindow);
        actionFileOpen->setObjectName(QString::fromUtf8("actionFileOpen"));
        QIcon icon1;
        iconThemeName = QString::fromUtf8("document-open");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon1 = QIcon::fromTheme(iconThemeName);
        } else {
            icon1.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionFileOpen->setIcon(icon1);
        actionFileSave = new QAction(MainWindow);
        actionFileSave->setObjectName(QString::fromUtf8("actionFileSave"));
        QIcon icon2;
        iconThemeName = QString::fromUtf8("document-save");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon2 = QIcon::fromTheme(iconThemeName);
        } else {
            icon2.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionFileSave->setIcon(icon2);
        actionFileSaveAs = new QAction(MainWindow);
        actionFileSaveAs->setObjectName(QString::fromUtf8("actionFileSaveAs"));
        QIcon icon3;
        iconThemeName = QString::fromUtf8("document-save-as");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon3 = QIcon::fromTheme(iconThemeName);
        } else {
            icon3.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionFileSaveAs->setIcon(icon3);
        actionPrint = new QAction(MainWindow);
        actionPrint->setObjectName(QString::fromUtf8("actionPrint"));
        actionFileQuit = new QAction(MainWindow);
        actionFileQuit->setObjectName(QString::fromUtf8("actionFileQuit"));
        QIcon icon4;
        iconThemeName = QString::fromUtf8("application-exit");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon4 = QIcon::fromTheme(iconThemeName);
        } else {
            icon4.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionFileQuit->setIcon(icon4);
        actionEditCut = new QAction(MainWindow);
        actionEditCut->setObjectName(QString::fromUtf8("actionEditCut"));
        QIcon icon5;
        iconThemeName = QString::fromUtf8("edit-cut");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon5 = QIcon::fromTheme(iconThemeName);
        } else {
            icon5.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionEditCut->setIcon(icon5);
        actionEditCopy = new QAction(MainWindow);
        actionEditCopy->setObjectName(QString::fromUtf8("actionEditCopy"));
        QIcon icon6;
        iconThemeName = QString::fromUtf8("edit-copy");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon6 = QIcon::fromTheme(iconThemeName);
        } else {
            icon6.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionEditCopy->setIcon(icon6);
        actionEditPaste = new QAction(MainWindow);
        actionEditPaste->setObjectName(QString::fromUtf8("actionEditPaste"));
        QIcon icon7;
        iconThemeName = QString::fromUtf8("edit-paste");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon7 = QIcon::fromTheme(iconThemeName);
        } else {
            icon7.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionEditPaste->setIcon(icon7);
        actionEditClear = new QAction(MainWindow);
        actionEditClear->setObjectName(QString::fromUtf8("actionEditClear"));
        QIcon icon8;
        iconThemeName = QString::fromUtf8("edit-clear");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon8 = QIcon::fromTheme(iconThemeName);
        } else {
            icon8.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionEditClear->setIcon(icon8);
        actionEditTranspose = new QAction(MainWindow);
        actionEditTranspose->setObjectName(QString::fromUtf8("actionEditTranspose"));
        actionEditExpandShrink = new QAction(MainWindow);
        actionEditExpandShrink->setObjectName(QString::fromUtf8("actionEditExpandShrink"));
        actionEditChangeInstrument = new QAction(MainWindow);
        actionEditChangeInstrument->setObjectName(QString::fromUtf8("actionEditChangeInstrument"));
        actionSongSectionList = new QAction(MainWindow);
        actionSongSectionList->setObjectName(QString::fromUtf8("actionSongSectionList"));
        actionSongTrackVolumes = new QAction(MainWindow);
        actionSongTrackVolumes->setObjectName(QString::fromUtf8("actionSongTrackVolumes"));
        actionSongTranspose = new QAction(MainWindow);
        actionSongTranspose->setObjectName(QString::fromUtf8("actionSongTranspose"));
        actionSongExpandShrink = new QAction(MainWindow);
        actionSongExpandShrink->setObjectName(QString::fromUtf8("actionSongExpandShrink"));
        actionSongChangeInstrument = new QAction(MainWindow);
        actionSongChangeInstrument->setObjectName(QString::fromUtf8("actionSongChangeInstrument"));
        actionSongProperties = new QAction(MainWindow);
        actionSongProperties->setObjectName(QString::fromUtf8("actionSongProperties"));
        QIcon icon9;
        iconThemeName = QString::fromUtf8("document-properties");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon9 = QIcon::fromTheme(iconThemeName);
        } else {
            icon9.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionSongProperties->setIcon(icon9);
        actionPlayingSequenceEditCurrent = new QAction(MainWindow);
        actionPlayingSequenceEditCurrent->setObjectName(QString::fromUtf8("actionPlayingSequenceEditCurrent"));
        actionPlayingSequenceList = new QAction(MainWindow);
        actionPlayingSequenceList->setObjectName(QString::fromUtf8("actionPlayingSequenceList"));
        actionBlockCut = new QAction(MainWindow);
        actionBlockCut->setObjectName(QString::fromUtf8("actionBlockCut"));
        actionBlockCut->setIcon(icon5);
        actionBlockCopy = new QAction(MainWindow);
        actionBlockCopy->setObjectName(QString::fromUtf8("actionBlockCopy"));
        actionBlockCopy->setIcon(icon6);
        actionBlockPaste = new QAction(MainWindow);
        actionBlockPaste->setObjectName(QString::fromUtf8("actionBlockPaste"));
        actionBlockPaste->setIcon(icon7);
        actionBlockClear = new QAction(MainWindow);
        actionBlockClear->setObjectName(QString::fromUtf8("actionBlockClear"));
        actionBlockClear->setIcon(icon8);
        actionBlockSelectAll = new QAction(MainWindow);
        actionBlockSelectAll->setObjectName(QString::fromUtf8("actionBlockSelectAll"));
        QIcon icon10;
        iconThemeName = QString::fromUtf8("edit-select-all");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon10 = QIcon::fromTheme(iconThemeName);
        } else {
            icon10.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionBlockSelectAll->setIcon(icon10);
        actionBlockTranspose = new QAction(MainWindow);
        actionBlockTranspose->setObjectName(QString::fromUtf8("actionBlockTranspose"));
        actionBlockExpandShrink = new QAction(MainWindow);
        actionBlockExpandShrink->setObjectName(QString::fromUtf8("actionBlockExpandShrink"));
        actionBlockChangeInstrument = new QAction(MainWindow);
        actionBlockChangeInstrument->setObjectName(QString::fromUtf8("actionBlockChangeInstrument"));
        actionBlockList = new QAction(MainWindow);
        actionBlockList->setObjectName(QString::fromUtf8("actionBlockList"));
        actionTrackCut = new QAction(MainWindow);
        actionTrackCut->setObjectName(QString::fromUtf8("actionTrackCut"));
        actionTrackCut->setIcon(icon5);
        actionTrackCopy = new QAction(MainWindow);
        actionTrackCopy->setObjectName(QString::fromUtf8("actionTrackCopy"));
        actionTrackCopy->setIcon(icon6);
        actionTrackPaste = new QAction(MainWindow);
        actionTrackPaste->setObjectName(QString::fromUtf8("actionTrackPaste"));
        actionTrackPaste->setIcon(icon7);
        actionTrackClear = new QAction(MainWindow);
        actionTrackClear->setObjectName(QString::fromUtf8("actionTrackClear"));
        actionTrackClear->setIcon(icon8);
        actionTrackSelectAll = new QAction(MainWindow);
        actionTrackSelectAll->setObjectName(QString::fromUtf8("actionTrackSelectAll"));
        actionTrackSelectAll->setIcon(icon10);
        actionTrackTranspose = new QAction(MainWindow);
        actionTrackTranspose->setObjectName(QString::fromUtf8("actionTrackTranspose"));
        actionTrackExpandShrink = new QAction(MainWindow);
        actionTrackExpandShrink->setObjectName(QString::fromUtf8("actionTrackExpandShrink"));
        actionTrackChangeInstrument = new QAction(MainWindow);
        actionTrackChangeInstrument->setObjectName(QString::fromUtf8("actionTrackChangeInstrument"));
        actionMidiKillAllNotes = new QAction(MainWindow);
        actionMidiKillAllNotes->setObjectName(QString::fromUtf8("actionMidiKillAllNotes"));
        actionMidiResetPitch = new QAction(MainWindow);
        actionMidiResetPitch->setObjectName(QString::fromUtf8("actionMidiResetPitch"));
        actionMidiMessageList = new QAction(MainWindow);
        actionMidiMessageList->setObjectName(QString::fromUtf8("actionMidiMessageList"));
        actionSettingsSendMidiSync = new QAction(MainWindow);
        actionSettingsSendMidiSync->setObjectName(QString::fromUtf8("actionSettingsSendMidiSync"));
        actionSettingsSendMidiSync->setCheckable(true);
        actionSettingsRecordControllers = new QAction(MainWindow);
        actionSettingsRecordControllers->setObjectName(QString::fromUtf8("actionSettingsRecordControllers"));
        actionSettingsRecordControllers->setCheckable(true);
        actionSettingsPreferences = new QAction(MainWindow);
        actionSettingsPreferences->setObjectName(QString::fromUtf8("actionSettingsPreferences"));
        actionHelpAbout = new QAction(MainWindow);
        actionHelpAbout->setObjectName(QString::fromUtf8("actionHelpAbout"));
        QIcon icon11;
        iconThemeName = QString::fromUtf8("help-about");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon11 = QIcon::fromTheme(iconThemeName);
        } else {
            icon11.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionHelpAbout->setIcon(icon11);
        actionExternalSyncOff = new QAction(MainWindow);
        actionExternalSyncOff->setObjectName(QString::fromUtf8("actionExternalSyncOff"));
        actionExternalSyncOff->setCheckable(true);
        actionExternalSyncOff->setChecked(true);
        actionExternalSyncMidi = new QAction(MainWindow);
        actionExternalSyncMidi->setObjectName(QString::fromUtf8("actionExternalSyncMidi"));
        actionExternalSyncMidi->setCheckable(true);
        actionHelpHelp = new QAction(MainWindow);
        actionHelpHelp->setObjectName(QString::fromUtf8("actionHelpHelp"));
        actionBlockSplit = new QAction(MainWindow);
        actionBlockSplit->setObjectName(QString::fromUtf8("actionBlockSplit"));
        actionTrackInsertCurrentBlock = new QAction(MainWindow);
        actionTrackInsertCurrentBlock->setObjectName(QString::fromUtf8("actionTrackInsertCurrentBlock"));
        actionTrackInsertAllBlocks = new QAction(MainWindow);
        actionTrackInsertAllBlocks->setObjectName(QString::fromUtf8("actionTrackInsertAllBlocks"));
        actionTrackDeleteCurrentBlock = new QAction(MainWindow);
        actionTrackDeleteCurrentBlock->setObjectName(QString::fromUtf8("actionTrackDeleteCurrentBlock"));
        actionTrackDeleteAllBlocks = new QAction(MainWindow);
        actionTrackDeleteAllBlocks->setObjectName(QString::fromUtf8("actionTrackDeleteAllBlocks"));
        widgetMain = new QWidget(MainWindow);
        widgetMain->setObjectName(QString::fromUtf8("widgetMain"));
        verticalLayout = new QVBoxLayout(widgetMain);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        widgetTop = new QWidget(widgetMain);
        widgetTop->setObjectName(QString::fromUtf8("widgetTop"));
        horizontalLayout = new QHBoxLayout(widgetTop);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(4, 4, 4, 4);
        frameControls = new QFrame(widgetTop);
        frameControls->setObjectName(QString::fromUtf8("frameControls"));
        frameControls->setFrameShape(QFrame::Box);
        frameControls->setFrameShadow(QFrame::Sunken);
        gridLayout = new QGridLayout(frameControls);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(2);
        gridLayout->setVerticalSpacing(4);
        gridLayout->setContentsMargins(4, 4, 4, 4);
        labelPlaySong = new QLabel(frameControls);
        labelPlaySong->setObjectName(QString::fromUtf8("labelPlaySong"));

        gridLayout->addWidget(labelPlaySong, 0, 0, 1, 1);

        buttonPlaySong = new QPushButton(frameControls);
        buttonPlaySong->setObjectName(QString::fromUtf8("buttonPlaySong"));
        buttonPlaySong->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(buttonPlaySong, 0, 1, 1, 1);

        buttonContinueSong = new QPushButton(frameControls);
        buttonContinueSong->setObjectName(QString::fromUtf8("buttonContinueSong"));
        buttonContinueSong->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(buttonContinueSong, 0, 3, 1, 1);

        labelPlayBlock = new QLabel(frameControls);
        labelPlayBlock->setObjectName(QString::fromUtf8("labelPlayBlock"));

        gridLayout->addWidget(labelPlayBlock, 1, 0, 1, 1);

        buttonPlayBlock = new QPushButton(frameControls);
        buttonPlayBlock->setObjectName(QString::fromUtf8("buttonPlayBlock"));
        buttonPlayBlock->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(buttonPlayBlock, 1, 1, 1, 1);

        buttonContinueBlock = new QPushButton(frameControls);
        buttonContinueBlock->setObjectName(QString::fromUtf8("buttonContinueBlock"));
        buttonContinueBlock->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(buttonContinueBlock, 1, 3, 1, 1);

        buttonStop = new QPushButton(frameControls);
        buttonStop->setObjectName(QString::fromUtf8("buttonStop"));
        buttonStop->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(buttonStop, 2, 1, 1, 3);


        horizontalLayout->addWidget(frameControls);

        widgetInstrument = new QWidget(widgetTop);
        widgetInstrument->setObjectName(QString::fromUtf8("widgetInstrument"));
        verticalLayout_3 = new QVBoxLayout(widgetInstrument);
        verticalLayout_3->setSpacing(4);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(4, 4, 4, 4);
        groupBoxInstrument = new QGroupBox(widgetInstrument);
        groupBoxInstrument->setObjectName(QString::fromUtf8("groupBoxInstrument"));
        groupBoxInstrument->setFlat(false);
        groupBoxInstrument->setCheckable(false);
        horizontalLayout_4 = new QHBoxLayout(groupBoxInstrument);
        horizontalLayout_4->setSpacing(4);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        spinBoxInstrument = new InstrumentSpinBox(groupBoxInstrument);
        spinBoxInstrument->setObjectName(QString::fromUtf8("spinBoxInstrument"));
        spinBoxInstrument->setFocusPolicy(Qt::NoFocus);
        spinBoxInstrument->setMinimum(1);
        spinBoxInstrument->setMaximum(255);
        spinBoxInstrument->setValue(1);

        horizontalLayout_4->addWidget(spinBoxInstrument);

        lineEditInstrument = new QLineEdit(groupBoxInstrument);
        lineEditInstrument->setObjectName(QString::fromUtf8("lineEditInstrument"));
        lineEditInstrument->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_4->addWidget(lineEditInstrument);

        buttonInstrumentProperties = new QPushButton(groupBoxInstrument);
        buttonInstrumentProperties->setObjectName(QString::fromUtf8("buttonInstrumentProperties"));
        buttonInstrumentProperties->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_4->addWidget(buttonInstrumentProperties);


        verticalLayout_3->addWidget(groupBoxInstrument);

        widgetMode = new QWidget(widgetInstrument);
        widgetMode->setObjectName(QString::fromUtf8("widgetMode"));
        horizontalLayout_3 = new QHBoxLayout(widgetMode);
        horizontalLayout_3->setSpacing(4);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalSpacerMode = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacerMode);

        checkBoxEdit = new QCheckBox(widgetMode);
        checkBoxEdit->setObjectName(QString::fromUtf8("checkBoxEdit"));
        checkBoxEdit->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_3->addWidget(checkBoxEdit);

        checkBoxChord = new QCheckBox(widgetMode);
        checkBoxChord->setObjectName(QString::fromUtf8("checkBoxChord"));
        checkBoxChord->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_3->addWidget(checkBoxChord);

        labelSpace = new QLabel(widgetMode);
        labelSpace->setObjectName(QString::fromUtf8("labelSpace"));

        horizontalLayout_3->addWidget(labelSpace);

        spinBoxSpace = new QSpinBox(widgetMode);
        spinBoxSpace->setObjectName(QString::fromUtf8("spinBoxSpace"));
        spinBoxSpace->setFocusPolicy(Qt::NoFocus);
        spinBoxSpace->setMaximum(32);
        spinBoxSpace->setValue(1);

        horizontalLayout_3->addWidget(spinBoxSpace);

        labelKeyboardOctaves = new QLabel(widgetMode);
        labelKeyboardOctaves->setObjectName(QString::fromUtf8("labelKeyboardOctaves"));

        horizontalLayout_3->addWidget(labelKeyboardOctaves);

        comboBoxKeyboardOctaves = new QComboBox(widgetMode);
        comboBoxKeyboardOctaves->addItem(QString());
        comboBoxKeyboardOctaves->addItem(QString());
        comboBoxKeyboardOctaves->addItem(QString());
        comboBoxKeyboardOctaves->addItem(QString());
        comboBoxKeyboardOctaves->addItem(QString());
        comboBoxKeyboardOctaves->addItem(QString());
        comboBoxKeyboardOctaves->addItem(QString());
        comboBoxKeyboardOctaves->addItem(QString());
        comboBoxKeyboardOctaves->addItem(QString());
        comboBoxKeyboardOctaves->setObjectName(QString::fromUtf8("comboBoxKeyboardOctaves"));
        comboBoxKeyboardOctaves->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_3->addWidget(comboBoxKeyboardOctaves);


        verticalLayout_3->addWidget(widgetMode);


        horizontalLayout->addWidget(widgetInstrument);


        verticalLayout->addWidget(widgetTop);

        widgetTracker = new QWidget(widgetMain);
        widgetTracker->setObjectName(QString::fromUtf8("widgetTracker"));
        gridLayout_2 = new QGridLayout(widgetTracker);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        tracker = new Tracker(widgetTracker);
        tracker->setObjectName(QString::fromUtf8("tracker"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tracker->sizePolicy().hasHeightForWidth());
        tracker->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(tracker, 0, 0, 1, 1);

        horizontalScrollBarTracker = new QScrollBar(widgetTracker);
        horizontalScrollBarTracker->setObjectName(QString::fromUtf8("horizontalScrollBarTracker"));
        horizontalScrollBarTracker->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(horizontalScrollBarTracker, 1, 0, 1, 1);

        verticalScrollBarTracker = new QScrollBar(widgetTracker);
        verticalScrollBarTracker->setObjectName(QString::fromUtf8("verticalScrollBarTracker"));
        verticalScrollBarTracker->setOrientation(Qt::Vertical);

        gridLayout_2->addWidget(verticalScrollBarTracker, 0, 1, 1, 1);


        verticalLayout->addWidget(widgetTracker);

        widgetStatusBar = new QWidget(widgetMain);
        widgetStatusBar->setObjectName(QString::fromUtf8("widgetStatusBar"));
        horizontalLayout_2 = new QHBoxLayout(widgetStatusBar);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(4, 4, 4, 4);
        frameStatus1 = new QFrame(widgetStatusBar);
        frameStatus1->setObjectName(QString::fromUtf8("frameStatus1"));
        frameStatus1->setFrameShape(QFrame::Box);
        frameStatus1->setFrameShadow(QFrame::Sunken);
        horizontalLayout_8 = new QHBoxLayout(frameStatus1);
        horizontalLayout_8->setSpacing(4);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(4, 4, 4, 4);
        labelSection = new ClickableLabel(frameStatus1);
        labelSection->setObjectName(QString::fromUtf8("labelSection"));

        horizontalLayout_8->addWidget(labelSection);

        labelPlayingSequence = new ClickableLabel(frameStatus1);
        labelPlayingSequence->setObjectName(QString::fromUtf8("labelPlayingSequence"));

        horizontalLayout_8->addWidget(labelPlayingSequence);

        labelPosition = new ClickableLabel(frameStatus1);
        labelPosition->setObjectName(QString::fromUtf8("labelPosition"));

        horizontalLayout_8->addWidget(labelPosition);

        labelBlock = new ClickableLabel(frameStatus1);
        labelBlock->setObjectName(QString::fromUtf8("labelBlock"));

        horizontalLayout_8->addWidget(labelBlock);

        labelCommandPage = new QLabel(frameStatus1);
        labelCommandPage->setObjectName(QString::fromUtf8("labelCommandPage"));

        horizontalLayout_8->addWidget(labelCommandPage);


        horizontalLayout_2->addWidget(frameStatus1);

        frameStatus2 = new QFrame(widgetStatusBar);
        frameStatus2->setObjectName(QString::fromUtf8("frameStatus2"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(frameStatus2->sizePolicy().hasHeightForWidth());
        frameStatus2->setSizePolicy(sizePolicy1);
        frameStatus2->setFrameShape(QFrame::Box);
        frameStatus2->setFrameShadow(QFrame::Sunken);
        horizontalLayout_6 = new QHBoxLayout(frameStatus2);
        horizontalLayout_6->setSpacing(4);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(4, 4, 4, 4);
        labelStatus = new QLabel(frameStatus2);
        labelStatus->setObjectName(QString::fromUtf8("labelStatus"));

        horizontalLayout_6->addWidget(labelStatus);


        horizontalLayout_2->addWidget(frameStatus2);

        frameTimer = new QFrame(widgetStatusBar);
        frameTimer->setObjectName(QString::fromUtf8("frameTimer"));
        sizePolicy1.setHeightForWidth(frameTimer->sizePolicy().hasHeightForWidth());
        frameTimer->setSizePolicy(sizePolicy1);
        frameTimer->setFrameShape(QFrame::Box);
        frameTimer->setFrameShadow(QFrame::Sunken);
        horizontalLayout_5 = new QHBoxLayout(frameTimer);
        horizontalLayout_5->setSpacing(4);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(4, 4, 4, 4);
        labelTimer = new QLabel(frameTimer);
        labelTimer->setObjectName(QString::fromUtf8("labelTimer"));

        horizontalLayout_5->addWidget(labelTimer);


        horizontalLayout_2->addWidget(frameTimer);


        verticalLayout->addWidget(widgetStatusBar);

        MainWindow->setCentralWidget(widgetMain);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 819, 22));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        menuSong = new QMenu(menubar);
        menuSong->setObjectName(QString::fromUtf8("menuSong"));
        menuPlayingSequence = new QMenu(menubar);
        menuPlayingSequence->setObjectName(QString::fromUtf8("menuPlayingSequence"));
        menuBlock = new QMenu(menubar);
        menuBlock->setObjectName(QString::fromUtf8("menuBlock"));
        menuTrack = new QMenu(menubar);
        menuTrack->setObjectName(QString::fromUtf8("menuTrack"));
        menuTrackInsert = new QMenu(menuTrack);
        menuTrackInsert->setObjectName(QString::fromUtf8("menuTrackInsert"));
        menuTrackDelete = new QMenu(menuTrack);
        menuTrackDelete->setObjectName(QString::fromUtf8("menuTrackDelete"));
        menuMidi = new QMenu(menubar);
        menuMidi->setObjectName(QString::fromUtf8("menuMidi"));
        menuSettings = new QMenu(menubar);
        menuSettings->setObjectName(QString::fromUtf8("menuSettings"));
        menuSettingsExternalSync = new QMenu(menuSettings);
        menuSettingsExternalSync->setObjectName(QString::fromUtf8("menuSettingsExternalSync"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menuSong->menuAction());
        menubar->addAction(menuPlayingSequence->menuAction());
        menubar->addAction(menuBlock->menuAction());
        menubar->addAction(menuTrack->menuAction());
        menubar->addAction(menuMidi->menuAction());
        menubar->addAction(menuSettings->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionFileNew);
        menuFile->addAction(actionFileOpen);
        menuFile->addSeparator();
        menuFile->addAction(actionFileSave);
        menuFile->addAction(actionFileSaveAs);
        menuFile->addSeparator();
        menuFile->addAction(actionFileQuit);
        menuEdit->addAction(actionEditCut);
        menuEdit->addAction(actionEditCopy);
        menuEdit->addAction(actionEditPaste);
        menuEdit->addSeparator();
        menuEdit->addAction(actionEditClear);
        menuEdit->addSeparator();
        menuEdit->addAction(actionEditTranspose);
        menuEdit->addAction(actionEditExpandShrink);
        menuEdit->addAction(actionEditChangeInstrument);
        menuSong->addAction(actionSongSectionList);
        menuSong->addAction(actionSongTrackVolumes);
        menuSong->addSeparator();
        menuSong->addAction(actionSongTranspose);
        menuSong->addAction(actionSongExpandShrink);
        menuSong->addAction(actionSongChangeInstrument);
        menuSong->addSeparator();
        menuSong->addAction(actionSongProperties);
        menuPlayingSequence->addAction(actionPlayingSequenceEditCurrent);
        menuPlayingSequence->addSeparator();
        menuPlayingSequence->addAction(actionPlayingSequenceList);
        menuBlock->addAction(actionBlockCut);
        menuBlock->addAction(actionBlockCopy);
        menuBlock->addAction(actionBlockPaste);
        menuBlock->addSeparator();
        menuBlock->addAction(actionBlockClear);
        menuBlock->addSeparator();
        menuBlock->addAction(actionBlockSelectAll);
        menuBlock->addSeparator();
        menuBlock->addAction(actionBlockTranspose);
        menuBlock->addAction(actionBlockExpandShrink);
        menuBlock->addAction(actionBlockChangeInstrument);
        menuBlock->addSeparator();
        menuBlock->addAction(actionBlockSplit);
        menuBlock->addSeparator();
        menuBlock->addAction(actionBlockList);
        menuTrack->addAction(actionTrackCut);
        menuTrack->addAction(actionTrackCopy);
        menuTrack->addAction(actionTrackPaste);
        menuTrack->addSeparator();
        menuTrack->addAction(actionTrackClear);
        menuTrack->addSeparator();
        menuTrack->addAction(actionTrackSelectAll);
        menuTrack->addSeparator();
        menuTrack->addAction(menuTrackInsert->menuAction());
        menuTrack->addAction(menuTrackDelete->menuAction());
        menuTrack->addSeparator();
        menuTrack->addAction(actionTrackTranspose);
        menuTrack->addAction(actionTrackExpandShrink);
        menuTrack->addAction(actionTrackChangeInstrument);
        menuTrackInsert->addAction(actionTrackInsertCurrentBlock);
        menuTrackInsert->addAction(actionTrackInsertAllBlocks);
        menuTrackDelete->addAction(actionTrackDeleteCurrentBlock);
        menuTrackDelete->addAction(actionTrackDeleteAllBlocks);
        menuMidi->addAction(actionMidiKillAllNotes);
        menuMidi->addAction(actionMidiResetPitch);
        menuMidi->addSeparator();
        menuMidi->addAction(actionMidiMessageList);
        menuSettings->addAction(menuSettingsExternalSync->menuAction());
        menuSettings->addAction(actionSettingsSendMidiSync);
        menuSettings->addSeparator();
        menuSettings->addAction(actionSettingsRecordControllers);
        menuSettings->addSeparator();
        menuSettings->addAction(actionSettingsPreferences);
        menuSettingsExternalSync->addAction(actionExternalSyncOff);
        menuSettingsExternalSync->addAction(actionExternalSyncMidi);
        menuHelp->addAction(actionHelpHelp);
        menuHelp->addAction(actionHelpAbout);

        retranslateUi(MainWindow);

        comboBoxKeyboardOctaves->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Tutka", nullptr));
        actionFileNew->setText(QCoreApplication::translate("MainWindow", "&New", nullptr));
#if QT_CONFIG(shortcut)
        actionFileNew->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        actionFileOpen->setText(QCoreApplication::translate("MainWindow", "&Open", nullptr));
#if QT_CONFIG(shortcut)
        actionFileOpen->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        actionFileSave->setText(QCoreApplication::translate("MainWindow", "&Save", nullptr));
#if QT_CONFIG(shortcut)
        actionFileSave->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionFileSaveAs->setText(QCoreApplication::translate("MainWindow", "Save &As", nullptr));
#if QT_CONFIG(shortcut)
        actionFileSaveAs->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPrint->setText(QCoreApplication::translate("MainWindow", "Print", nullptr));
#if QT_CONFIG(shortcut)
        actionPrint->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+P", nullptr));
#endif // QT_CONFIG(shortcut)
        actionFileQuit->setText(QCoreApplication::translate("MainWindow", "&Quit", nullptr));
#if QT_CONFIG(shortcut)
        actionFileQuit->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Q", nullptr));
#endif // QT_CONFIG(shortcut)
        actionEditCut->setText(QCoreApplication::translate("MainWindow", "C&ut", nullptr));
#if QT_CONFIG(shortcut)
        actionEditCut->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+X", nullptr));
#endif // QT_CONFIG(shortcut)
        actionEditCopy->setText(QCoreApplication::translate("MainWindow", "&Copy", nullptr));
#if QT_CONFIG(shortcut)
        actionEditCopy->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+C", nullptr));
#endif // QT_CONFIG(shortcut)
        actionEditPaste->setText(QCoreApplication::translate("MainWindow", "&Paste", nullptr));
#if QT_CONFIG(shortcut)
        actionEditPaste->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+V", nullptr));
#endif // QT_CONFIG(shortcut)
        actionEditClear->setText(QCoreApplication::translate("MainWindow", "&Clear", nullptr));
        actionEditTranspose->setText(QCoreApplication::translate("MainWindow", "&Transpose", nullptr));
        actionEditExpandShrink->setText(QCoreApplication::translate("MainWindow", "&Expand/Shrink", nullptr));
        actionEditChangeInstrument->setText(QCoreApplication::translate("MainWindow", "Change &Instrument", nullptr));
        actionSongSectionList->setText(QCoreApplication::translate("MainWindow", "&Section List", nullptr));
        actionSongTrackVolumes->setText(QCoreApplication::translate("MainWindow", "Track &Volumes", nullptr));
        actionSongTranspose->setText(QCoreApplication::translate("MainWindow", "&Transpose", nullptr));
        actionSongExpandShrink->setText(QCoreApplication::translate("MainWindow", "&Expand/Shrink", nullptr));
        actionSongChangeInstrument->setText(QCoreApplication::translate("MainWindow", "Change &Instrument", nullptr));
        actionSongProperties->setText(QCoreApplication::translate("MainWindow", "&Properties", nullptr));
        actionPlayingSequenceEditCurrent->setText(QCoreApplication::translate("MainWindow", "&Edit Current", nullptr));
        actionPlayingSequenceList->setText(QCoreApplication::translate("MainWindow", "&List", nullptr));
        actionBlockCut->setText(QCoreApplication::translate("MainWindow", "C&ut ", nullptr));
#if QT_CONFIG(shortcut)
        actionBlockCut->setShortcut(QCoreApplication::translate("MainWindow", "Alt+F3", nullptr));
#endif // QT_CONFIG(shortcut)
        actionBlockCopy->setText(QCoreApplication::translate("MainWindow", "&Copy ", nullptr));
#if QT_CONFIG(shortcut)
        actionBlockCopy->setShortcut(QCoreApplication::translate("MainWindow", "Alt+F4", nullptr));
#endif // QT_CONFIG(shortcut)
        actionBlockPaste->setText(QCoreApplication::translate("MainWindow", "&Paste ", nullptr));
#if QT_CONFIG(shortcut)
        actionBlockPaste->setShortcut(QCoreApplication::translate("MainWindow", "Alt+F5", nullptr));
#endif // QT_CONFIG(shortcut)
        actionBlockClear->setText(QCoreApplication::translate("MainWindow", "&Clear", nullptr));
        actionBlockSelectAll->setText(QCoreApplication::translate("MainWindow", "&Select All", nullptr));
        actionBlockTranspose->setText(QCoreApplication::translate("MainWindow", "&Transpose", nullptr));
        actionBlockExpandShrink->setText(QCoreApplication::translate("MainWindow", "&Expand/Shrink", nullptr));
        actionBlockChangeInstrument->setText(QCoreApplication::translate("MainWindow", "Change &Instrument", nullptr));
        actionBlockList->setText(QCoreApplication::translate("MainWindow", "&List", nullptr));
        actionTrackCut->setText(QCoreApplication::translate("MainWindow", "C&ut ", nullptr));
#if QT_CONFIG(shortcut)
        actionTrackCut->setShortcut(QCoreApplication::translate("MainWindow", "Shift+F3", nullptr));
#endif // QT_CONFIG(shortcut)
        actionTrackCopy->setText(QCoreApplication::translate("MainWindow", "&Copy ", nullptr));
#if QT_CONFIG(shortcut)
        actionTrackCopy->setShortcut(QCoreApplication::translate("MainWindow", "Shift+F4", nullptr));
#endif // QT_CONFIG(shortcut)
        actionTrackPaste->setText(QCoreApplication::translate("MainWindow", "&Paste ", nullptr));
#if QT_CONFIG(shortcut)
        actionTrackPaste->setShortcut(QCoreApplication::translate("MainWindow", "Shift+F5", nullptr));
#endif // QT_CONFIG(shortcut)
        actionTrackClear->setText(QCoreApplication::translate("MainWindow", "&Clear", nullptr));
        actionTrackSelectAll->setText(QCoreApplication::translate("MainWindow", "&Select All", nullptr));
        actionTrackTranspose->setText(QCoreApplication::translate("MainWindow", "&Transpose", nullptr));
        actionTrackExpandShrink->setText(QCoreApplication::translate("MainWindow", "&Expand/Shrink", nullptr));
        actionTrackChangeInstrument->setText(QCoreApplication::translate("MainWindow", "Change &Instrument", nullptr));
        actionMidiKillAllNotes->setText(QCoreApplication::translate("MainWindow", "&Kill All Notes", nullptr));
        actionMidiResetPitch->setText(QCoreApplication::translate("MainWindow", "&Reset Pitch", nullptr));
        actionMidiMessageList->setText(QCoreApplication::translate("MainWindow", "&Message List", nullptr));
        actionSettingsSendMidiSync->setText(QCoreApplication::translate("MainWindow", "Send MIDI Sync", nullptr));
        actionSettingsRecordControllers->setText(QCoreApplication::translate("MainWindow", "Record Controllers", nullptr));
        actionSettingsPreferences->setText(QCoreApplication::translate("MainWindow", "&Preferences", nullptr));
        actionHelpAbout->setText(QCoreApplication::translate("MainWindow", "&About", nullptr));
        actionExternalSyncOff->setText(QCoreApplication::translate("MainWindow", "Off", nullptr));
        actionExternalSyncMidi->setText(QCoreApplication::translate("MainWindow", "MIDI", nullptr));
        actionHelpHelp->setText(QCoreApplication::translate("MainWindow", "&Help", nullptr));
        actionBlockSplit->setText(QCoreApplication::translate("MainWindow", "Split", nullptr));
        actionTrackInsertCurrentBlock->setText(QCoreApplication::translate("MainWindow", "Current block", nullptr));
        actionTrackInsertAllBlocks->setText(QCoreApplication::translate("MainWindow", "All blocks", nullptr));
        actionTrackDeleteCurrentBlock->setText(QCoreApplication::translate("MainWindow", "Current block", nullptr));
        actionTrackDeleteAllBlocks->setText(QCoreApplication::translate("MainWindow", "All blocks", nullptr));
        labelPlaySong->setText(QCoreApplication::translate("MainWindow", "Song", nullptr));
        buttonPlaySong->setText(QCoreApplication::translate("MainWindow", "Play", nullptr));
        buttonContinueSong->setText(QCoreApplication::translate("MainWindow", "Continue", nullptr));
        labelPlayBlock->setText(QCoreApplication::translate("MainWindow", "Block", nullptr));
        buttonPlayBlock->setText(QCoreApplication::translate("MainWindow", "Play", nullptr));
        buttonContinueBlock->setText(QCoreApplication::translate("MainWindow", "Continue", nullptr));
        buttonStop->setText(QCoreApplication::translate("MainWindow", "Stop", nullptr));
        groupBoxInstrument->setTitle(QCoreApplication::translate("MainWindow", "Instrument", nullptr));
        buttonInstrumentProperties->setText(QCoreApplication::translate("MainWindow", "Properties", nullptr));
        checkBoxEdit->setText(QCoreApplication::translate("MainWindow", "Edit", nullptr));
        checkBoxChord->setText(QCoreApplication::translate("MainWindow", "Chord", nullptr));
        labelSpace->setText(QCoreApplication::translate("MainWindow", "Space", nullptr));
        labelKeyboardOctaves->setText(QCoreApplication::translate("MainWindow", "Keyboard Octaves", nullptr));
        comboBoxKeyboardOctaves->setItemText(0, QCoreApplication::translate("MainWindow", "1 and 2", nullptr));
        comboBoxKeyboardOctaves->setItemText(1, QCoreApplication::translate("MainWindow", "2 and 3", nullptr));
        comboBoxKeyboardOctaves->setItemText(2, QCoreApplication::translate("MainWindow", "3 and 4", nullptr));
        comboBoxKeyboardOctaves->setItemText(3, QCoreApplication::translate("MainWindow", "4 and 5", nullptr));
        comboBoxKeyboardOctaves->setItemText(4, QCoreApplication::translate("MainWindow", "5 and 6", nullptr));
        comboBoxKeyboardOctaves->setItemText(5, QCoreApplication::translate("MainWindow", "6 and 7", nullptr));
        comboBoxKeyboardOctaves->setItemText(6, QCoreApplication::translate("MainWindow", "7 and 8", nullptr));
        comboBoxKeyboardOctaves->setItemText(7, QCoreApplication::translate("MainWindow", "8 and 9", nullptr));
        comboBoxKeyboardOctaves->setItemText(8, QCoreApplication::translate("MainWindow", "9 and A", nullptr));

        labelSection->setText(QCoreApplication::translate("MainWindow", "Section 1/1", nullptr));
        labelPlayingSequence->setText(QCoreApplication::translate("MainWindow", "Playing Sequence 1/1", nullptr));
        labelPosition->setText(QCoreApplication::translate("MainWindow", "Position 1/1", nullptr));
        labelBlock->setText(QCoreApplication::translate("MainWindow", "Block 1/1", nullptr));
        labelCommandPage->setText(QCoreApplication::translate("MainWindow", "Command Page 1/1", nullptr));
        labelStatus->setText(QCoreApplication::translate("MainWindow", "Stopped", nullptr));
        labelTimer->setText(QCoreApplication::translate("MainWindow", "00:00", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "&File", nullptr));
        menuEdit->setTitle(QCoreApplication::translate("MainWindow", "&Edit", nullptr));
        menuSong->setTitle(QCoreApplication::translate("MainWindow", "S&ong", nullptr));
        menuPlayingSequence->setTitle(QCoreApplication::translate("MainWindow", "&Playing Sequence", nullptr));
        menuBlock->setTitle(QCoreApplication::translate("MainWindow", "&Block", nullptr));
        menuTrack->setTitle(QCoreApplication::translate("MainWindow", "&Track", nullptr));
        menuTrackInsert->setTitle(QCoreApplication::translate("MainWindow", "I&nsert", nullptr));
        menuTrackDelete->setTitle(QCoreApplication::translate("MainWindow", "&Delete", nullptr));
        menuMidi->setTitle(QCoreApplication::translate("MainWindow", "&MIDI", nullptr));
        menuSettings->setTitle(QCoreApplication::translate("MainWindow", "&Settings", nullptr));
        menuSettingsExternalSync->setTitle(QCoreApplication::translate("MainWindow", "External Sync", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("MainWindow", "&Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

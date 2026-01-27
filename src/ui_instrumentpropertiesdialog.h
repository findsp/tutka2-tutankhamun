/********************************************************************************
** Form generated from reading UI file 'instrumentpropertiesdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.15
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INSTRUMENTPROPERTIESDIALOG_H
#define UI_INSTRUMENTPROPERTIESDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include "sliderwithlabel.h"
#include "tracker.h"

QT_BEGIN_NAMESPACE

class Ui_InstrumentPropertiesDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *labelName;
    QLineEdit *lineEditName;
    QLabel *labelMidiInterface;
    QComboBox *comboBoxMidiInterface;
    QLabel *labelMidiChannel;
    SliderWithLabel *horizontalSliderMidiChannel;
    QLabel *labelVolume;
    SliderWithLabel *horizontalSliderVolume;
    QLabel *labelTranspose;
    SliderWithLabel *horizontalSliderTranspose;
    QLabel *labelHold;
    SliderWithLabel *horizontalSliderHold;
    QLabel *arpeggioLabel;
    QFormLayout *formLayoutArpeggio;
    QLabel *labelArpeggio;
    QCheckBox *checkBoxArpeggio;
    QLabel *labelArpeggioBaseNote;
    QComboBox *comboBoxArpeggioBaseNote;
    QLabel *labelArpeggioLength;
    QSpinBox *spinBoxArpeggioLength;
    QLabel *labelArpeggioBlock;
    Tracker *trackerArpeggio;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *InstrumentPropertiesDialog)
    {
        if (InstrumentPropertiesDialog->objectName().isEmpty())
            InstrumentPropertiesDialog->setObjectName(QString::fromUtf8("InstrumentPropertiesDialog"));
        InstrumentPropertiesDialog->resize(400, 340);
        verticalLayout = new QVBoxLayout(InstrumentPropertiesDialog);
        verticalLayout->setSpacing(4);
        verticalLayout->setContentsMargins(4, 4, 4, 4);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelName = new QLabel(InstrumentPropertiesDialog);
        labelName->setObjectName(QString::fromUtf8("labelName"));
        labelName->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(0, QFormLayout::LabelRole, labelName);

        lineEditName = new QLineEdit(InstrumentPropertiesDialog);
        lineEditName->setObjectName(QString::fromUtf8("lineEditName"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEditName);

        labelMidiInterface = new QLabel(InstrumentPropertiesDialog);
        labelMidiInterface->setObjectName(QString::fromUtf8("labelMidiInterface"));
        labelMidiInterface->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(1, QFormLayout::LabelRole, labelMidiInterface);

        comboBoxMidiInterface = new QComboBox(InstrumentPropertiesDialog);
        comboBoxMidiInterface->setObjectName(QString::fromUtf8("comboBoxMidiInterface"));

        formLayout->setWidget(1, QFormLayout::FieldRole, comboBoxMidiInterface);

        labelMidiChannel = new QLabel(InstrumentPropertiesDialog);
        labelMidiChannel->setObjectName(QString::fromUtf8("labelMidiChannel"));
        labelMidiChannel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(2, QFormLayout::LabelRole, labelMidiChannel);

        horizontalSliderMidiChannel = new SliderWithLabel(InstrumentPropertiesDialog);
        horizontalSliderMidiChannel->setObjectName(QString::fromUtf8("horizontalSliderMidiChannel"));
        horizontalSliderMidiChannel->setMinimum(1);
        horizontalSliderMidiChannel->setMaximum(16);
        horizontalSliderMidiChannel->setPageStep(1);
        horizontalSliderMidiChannel->setOrientation(Qt::Horizontal);

        formLayout->setWidget(2, QFormLayout::FieldRole, horizontalSliderMidiChannel);

        labelVolume = new QLabel(InstrumentPropertiesDialog);
        labelVolume->setObjectName(QString::fromUtf8("labelVolume"));
        labelVolume->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(3, QFormLayout::LabelRole, labelVolume);

        horizontalSliderVolume = new SliderWithLabel(InstrumentPropertiesDialog);
        horizontalSliderVolume->setObjectName(QString::fromUtf8("horizontalSliderVolume"));
        horizontalSliderVolume->setMaximum(127);
        horizontalSliderVolume->setPageStep(8);
        horizontalSliderVolume->setOrientation(Qt::Horizontal);

        formLayout->setWidget(3, QFormLayout::FieldRole, horizontalSliderVolume);

        labelTranspose = new QLabel(InstrumentPropertiesDialog);
        labelTranspose->setObjectName(QString::fromUtf8("labelTranspose"));
        labelTranspose->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(4, QFormLayout::LabelRole, labelTranspose);

        horizontalSliderTranspose = new SliderWithLabel(InstrumentPropertiesDialog);
        horizontalSliderTranspose->setObjectName(QString::fromUtf8("horizontalSliderTranspose"));
        horizontalSliderTranspose->setMinimum(-24);
        horizontalSliderTranspose->setMaximum(24);
        horizontalSliderTranspose->setPageStep(2);
        horizontalSliderTranspose->setOrientation(Qt::Horizontal);

        formLayout->setWidget(4, QFormLayout::FieldRole, horizontalSliderTranspose);

        labelHold = new QLabel(InstrumentPropertiesDialog);
        labelHold->setObjectName(QString::fromUtf8("labelHold"));
        labelHold->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(5, QFormLayout::LabelRole, labelHold);

        horizontalSliderHold = new SliderWithLabel(InstrumentPropertiesDialog);
        horizontalSliderHold->setObjectName(QString::fromUtf8("horizontalSliderHold"));
        horizontalSliderHold->setMaximum(255);
        horizontalSliderHold->setPageStep(8);
        horizontalSliderHold->setOrientation(Qt::Horizontal);

        formLayout->setWidget(5, QFormLayout::FieldRole, horizontalSliderHold);

        arpeggioLabel = new QLabel(InstrumentPropertiesDialog);
        arpeggioLabel->setObjectName(QString::fromUtf8("arpeggioLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(arpeggioLabel->sizePolicy().hasHeightForWidth());
        arpeggioLabel->setSizePolicy(sizePolicy);
        arpeggioLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        arpeggioLabel->setMargin(0);
        arpeggioLabel->setIndent(4);

        formLayout->setWidget(6, QFormLayout::LabelRole, arpeggioLabel);

        formLayoutArpeggio = new QFormLayout();
        formLayoutArpeggio->setObjectName(QString::fromUtf8("formLayoutArpeggio"));
        formLayoutArpeggio->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        labelArpeggio = new QLabel(InstrumentPropertiesDialog);
        labelArpeggio->setObjectName(QString::fromUtf8("labelArpeggio"));

        formLayoutArpeggio->setWidget(0, QFormLayout::LabelRole, labelArpeggio);

        checkBoxArpeggio = new QCheckBox(InstrumentPropertiesDialog);
        checkBoxArpeggio->setObjectName(QString::fromUtf8("checkBoxArpeggio"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(checkBoxArpeggio->sizePolicy().hasHeightForWidth());
        checkBoxArpeggio->setSizePolicy(sizePolicy1);

        formLayoutArpeggio->setWidget(0, QFormLayout::FieldRole, checkBoxArpeggio);

        labelArpeggioBaseNote = new QLabel(InstrumentPropertiesDialog);
        labelArpeggioBaseNote->setObjectName(QString::fromUtf8("labelArpeggioBaseNote"));
        labelArpeggioBaseNote->setEnabled(false);

        formLayoutArpeggio->setWidget(1, QFormLayout::LabelRole, labelArpeggioBaseNote);

        comboBoxArpeggioBaseNote = new QComboBox(InstrumentPropertiesDialog);
        comboBoxArpeggioBaseNote->addItem(QString());
        comboBoxArpeggioBaseNote->addItem(QString());
        comboBoxArpeggioBaseNote->addItem(QString());
        comboBoxArpeggioBaseNote->addItem(QString());
        comboBoxArpeggioBaseNote->addItem(QString());
        comboBoxArpeggioBaseNote->addItem(QString());
        comboBoxArpeggioBaseNote->addItem(QString());
        comboBoxArpeggioBaseNote->addItem(QString());
        comboBoxArpeggioBaseNote->addItem(QString());
        comboBoxArpeggioBaseNote->addItem(QString());
        comboBoxArpeggioBaseNote->addItem(QString());
        comboBoxArpeggioBaseNote->addItem(QString());
        comboBoxArpeggioBaseNote->addItem(QString());
        comboBoxArpeggioBaseNote->addItem(QString());
        comboBoxArpeggioBaseNote->addItem(QString());
        comboBoxArpeggioBaseNote->addItem(QString());
        comboBoxArpeggioBaseNote->addItem(QString());
        comboBoxArpeggioBaseNote->addItem(QString());
        comboBoxArpeggioBaseNote->addItem(QString());
        comboBoxArpeggioBaseNote->addItem(QString());
        comboBoxArpeggioBaseNote->addItem(QString());
        comboBoxArpeggioBaseNote->addItem(QString());
        comboBoxArpeggioBaseNote->addItem(QString());
        comboBoxArpeggioBaseNote->addItem(QString());
        comboBoxArpeggioBaseNote->addItem(QString());
        comboBoxArpeggioBaseNote->addItem(QString());
        comboBoxArpeggioBaseNote->addItem(QString());
        comboBoxArpeggioBaseNote->addItem(QString());
        comboBoxArpeggioBaseNote->addItem(QString());
        comboBoxArpeggioBaseNote->addItem(QString());
        comboBoxArpeggioBaseNote->addItem(QString());
        comboBoxArpeggioBaseNote->addItem(QString());
        comboBoxArpeggioBaseNote->addItem(QString());
        comboBoxArpeggioBaseNote->addItem(QString());
        comboBoxArpeggioBaseNote->addItem(QString());
        comboBoxArpeggioBaseNote->addItem(QString());
        comboBoxArpeggioBaseNote->addItem(QString());
        comboBoxArpeggioBaseNote->addItem(QString());
        comboBoxArpeggioBaseNote->addItem(QString());
        comboBoxArpeggioBaseNote->addItem(QString());
        comboBoxArpeggioBaseNote->addItem(QString());
        comboBoxArpeggioBaseNote->addItem(QString());
        comboBoxArpeggioBaseNote->addItem(QString());
        comboBoxArpeggioBaseNote->addItem(QString());
        comboBoxArpeggioBaseNote->addItem(QString());
        comboBoxArpeggioBaseNote->addItem(QString());
        comboBoxArpeggioBaseNote->addItem(QString());
        comboBoxArpeggioBaseNote->addItem(QString());
        comboBoxArpeggioBaseNote->addItem(QString());
        comboBoxArpeggioBaseNote->addItem(QString());
        comboBoxArpeggioBaseNote->addItem(QString());
        comboBoxArpeggioBaseNote->addItem(QString());
        comboBoxArpeggioBaseNote->addItem(QString());
        comboBoxArpeggioBaseNote->addItem(QString());
        comboBoxArpeggioBaseNote->addItem(QString());
        comboBoxArpeggioBaseNote->addItem(QString());
        comboBoxArpeggioBaseNote->addItem(QString());
        comboBoxArpeggioBaseNote->addItem(QString());
        comboBoxArpeggioBaseNote->addItem(QString());
        comboBoxArpeggioBaseNote->addItem(QString());
        comboBoxArpeggioBaseNote->addItem(QString());
        comboBoxArpeggioBaseNote->addItem(QString());
        comboBoxArpeggioBaseNote->addItem(QString());
        comboBoxArpeggioBaseNote->addItem(QString());
        comboBoxArpeggioBaseNote->addItem(QString());
        comboBoxArpeggioBaseNote->addItem(QString());
        comboBoxArpeggioBaseNote->addItem(QString());
        comboBoxArpeggioBaseNote->addItem(QString());
        comboBoxArpeggioBaseNote->addItem(QString());
        comboBoxArpeggioBaseNote->addItem(QString());
        comboBoxArpeggioBaseNote->addItem(QString());
        comboBoxArpeggioBaseNote->addItem(QString());
        comboBoxArpeggioBaseNote->addItem(QString());
        comboBoxArpeggioBaseNote->addItem(QString());
        comboBoxArpeggioBaseNote->addItem(QString());
        comboBoxArpeggioBaseNote->addItem(QString());
        comboBoxArpeggioBaseNote->addItem(QString());
        comboBoxArpeggioBaseNote->addItem(QString());
        comboBoxArpeggioBaseNote->addItem(QString());
        comboBoxArpeggioBaseNote->addItem(QString());
        comboBoxArpeggioBaseNote->addItem(QString());
        comboBoxArpeggioBaseNote->addItem(QString());
        comboBoxArpeggioBaseNote->addItem(QString());
        comboBoxArpeggioBaseNote->addItem(QString());
        comboBoxArpeggioBaseNote->addItem(QString());
        comboBoxArpeggioBaseNote->addItem(QString());
        comboBoxArpeggioBaseNote->addItem(QString());
        comboBoxArpeggioBaseNote->addItem(QString());
        comboBoxArpeggioBaseNote->addItem(QString());
        comboBoxArpeggioBaseNote->addItem(QString());
        comboBoxArpeggioBaseNote->addItem(QString());
        comboBoxArpeggioBaseNote->addItem(QString());
        comboBoxArpeggioBaseNote->addItem(QString());
        comboBoxArpeggioBaseNote->addItem(QString());
        comboBoxArpeggioBaseNote->addItem(QString());
        comboBoxArpeggioBaseNote->addItem(QString());
        comboBoxArpeggioBaseNote->addItem(QString());
        comboBoxArpeggioBaseNote->addItem(QString());
        comboBoxArpeggioBaseNote->addItem(QString());
        comboBoxArpeggioBaseNote->addItem(QString());
        comboBoxArpeggioBaseNote->addItem(QString());
        comboBoxArpeggioBaseNote->addItem(QString());
        comboBoxArpeggioBaseNote->addItem(QString());
        comboBoxArpeggioBaseNote->addItem(QString());
        comboBoxArpeggioBaseNote->addItem(QString());
        comboBoxArpeggioBaseNote->addItem(QString());
        comboBoxArpeggioBaseNote->addItem(QString());
        comboBoxArpeggioBaseNote->addItem(QString());
        comboBoxArpeggioBaseNote->addItem(QString());
        comboBoxArpeggioBaseNote->addItem(QString());
        comboBoxArpeggioBaseNote->addItem(QString());
        comboBoxArpeggioBaseNote->addItem(QString());
        comboBoxArpeggioBaseNote->addItem(QString());
        comboBoxArpeggioBaseNote->addItem(QString());
        comboBoxArpeggioBaseNote->addItem(QString());
        comboBoxArpeggioBaseNote->addItem(QString());
        comboBoxArpeggioBaseNote->addItem(QString());
        comboBoxArpeggioBaseNote->addItem(QString());
        comboBoxArpeggioBaseNote->addItem(QString());
        comboBoxArpeggioBaseNote->addItem(QString());
        comboBoxArpeggioBaseNote->addItem(QString());
        comboBoxArpeggioBaseNote->addItem(QString());
        comboBoxArpeggioBaseNote->addItem(QString());
        comboBoxArpeggioBaseNote->addItem(QString());
        comboBoxArpeggioBaseNote->addItem(QString());
        comboBoxArpeggioBaseNote->addItem(QString());
        comboBoxArpeggioBaseNote->addItem(QString());
        comboBoxArpeggioBaseNote->setObjectName(QString::fromUtf8("comboBoxArpeggioBaseNote"));
        comboBoxArpeggioBaseNote->setEnabled(false);

        formLayoutArpeggio->setWidget(1, QFormLayout::FieldRole, comboBoxArpeggioBaseNote);

        labelArpeggioLength = new QLabel(InstrumentPropertiesDialog);
        labelArpeggioLength->setObjectName(QString::fromUtf8("labelArpeggioLength"));
        labelArpeggioLength->setEnabled(false);

        formLayoutArpeggio->setWidget(2, QFormLayout::LabelRole, labelArpeggioLength);

        spinBoxArpeggioLength = new QSpinBox(InstrumentPropertiesDialog);
        spinBoxArpeggioLength->setObjectName(QString::fromUtf8("spinBoxArpeggioLength"));
        spinBoxArpeggioLength->setEnabled(false);
        spinBoxArpeggioLength->setMinimum(1);
        spinBoxArpeggioLength->setMaximum(65536);
        spinBoxArpeggioLength->setValue(8);

        formLayoutArpeggio->setWidget(2, QFormLayout::FieldRole, spinBoxArpeggioLength);

        labelArpeggioBlock = new QLabel(InstrumentPropertiesDialog);
        labelArpeggioBlock->setObjectName(QString::fromUtf8("labelArpeggioBlock"));
        labelArpeggioBlock->setEnabled(false);

        formLayoutArpeggio->setWidget(3, QFormLayout::LabelRole, labelArpeggioBlock);

        trackerArpeggio = new Tracker(InstrumentPropertiesDialog);
        trackerArpeggio->setObjectName(QString::fromUtf8("trackerArpeggio"));
        trackerArpeggio->setEnabled(false);
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(1);
        sizePolicy2.setHeightForWidth(trackerArpeggio->sizePolicy().hasHeightForWidth());
        trackerArpeggio->setSizePolicy(sizePolicy2);
        trackerArpeggio->setMinimumSize(QSize(0, 30));
        trackerArpeggio->setFocusPolicy(Qt::StrongFocus);

        formLayoutArpeggio->setWidget(3, QFormLayout::FieldRole, trackerArpeggio);


        formLayout->setLayout(6, QFormLayout::FieldRole, formLayoutArpeggio);


        verticalLayout->addLayout(formLayout);

        buttonBox = new QDialogButtonBox(InstrumentPropertiesDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        verticalLayout->addWidget(buttonBox);

#if QT_CONFIG(shortcut)
        labelName->setBuddy(lineEditName);
        labelMidiInterface->setBuddy(comboBoxMidiInterface);
        labelMidiChannel->setBuddy(horizontalSliderMidiChannel);
        labelVolume->setBuddy(horizontalSliderVolume);
        labelTranspose->setBuddy(horizontalSliderTranspose);
        labelHold->setBuddy(horizontalSliderHold);
#endif // QT_CONFIG(shortcut)

        retranslateUi(InstrumentPropertiesDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), InstrumentPropertiesDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), InstrumentPropertiesDialog, SLOT(reject()));

        comboBoxArpeggioBaseNote->setCurrentIndex(48);


        QMetaObject::connectSlotsByName(InstrumentPropertiesDialog);
    } // setupUi

    void retranslateUi(QDialog *InstrumentPropertiesDialog)
    {
        InstrumentPropertiesDialog->setWindowTitle(QCoreApplication::translate("InstrumentPropertiesDialog", "Instrument Properties", nullptr));
        labelName->setText(QCoreApplication::translate("InstrumentPropertiesDialog", "Name", nullptr));
        labelMidiInterface->setText(QCoreApplication::translate("InstrumentPropertiesDialog", "MIDI interface", nullptr));
        labelMidiChannel->setText(QCoreApplication::translate("InstrumentPropertiesDialog", "MIDI channel", nullptr));
        labelVolume->setText(QCoreApplication::translate("InstrumentPropertiesDialog", "Volume", nullptr));
        labelTranspose->setText(QCoreApplication::translate("InstrumentPropertiesDialog", "Transpose", nullptr));
        labelHold->setText(QCoreApplication::translate("InstrumentPropertiesDialog", "Hold", nullptr));
        arpeggioLabel->setText(QCoreApplication::translate("InstrumentPropertiesDialog", "Arpeggio", nullptr));
        labelArpeggio->setText(QCoreApplication::translate("InstrumentPropertiesDialog", "enabled", nullptr));
        labelArpeggioBaseNote->setText(QCoreApplication::translate("InstrumentPropertiesDialog", "Base note", nullptr));
        comboBoxArpeggioBaseNote->setItemText(0, QCoreApplication::translate("InstrumentPropertiesDialog", "C-1", nullptr));
        comboBoxArpeggioBaseNote->setItemText(1, QCoreApplication::translate("InstrumentPropertiesDialog", "C#1", nullptr));
        comboBoxArpeggioBaseNote->setItemText(2, QCoreApplication::translate("InstrumentPropertiesDialog", "D-1", nullptr));
        comboBoxArpeggioBaseNote->setItemText(3, QCoreApplication::translate("InstrumentPropertiesDialog", "D#1", nullptr));
        comboBoxArpeggioBaseNote->setItemText(4, QCoreApplication::translate("InstrumentPropertiesDialog", "E-1", nullptr));
        comboBoxArpeggioBaseNote->setItemText(5, QCoreApplication::translate("InstrumentPropertiesDialog", "F-1", nullptr));
        comboBoxArpeggioBaseNote->setItemText(6, QCoreApplication::translate("InstrumentPropertiesDialog", "F#1", nullptr));
        comboBoxArpeggioBaseNote->setItemText(7, QCoreApplication::translate("InstrumentPropertiesDialog", "G-1", nullptr));
        comboBoxArpeggioBaseNote->setItemText(8, QCoreApplication::translate("InstrumentPropertiesDialog", "G#1", nullptr));
        comboBoxArpeggioBaseNote->setItemText(9, QCoreApplication::translate("InstrumentPropertiesDialog", "A-1", nullptr));
        comboBoxArpeggioBaseNote->setItemText(10, QCoreApplication::translate("InstrumentPropertiesDialog", "A#1", nullptr));
        comboBoxArpeggioBaseNote->setItemText(11, QCoreApplication::translate("InstrumentPropertiesDialog", "B-1", nullptr));
        comboBoxArpeggioBaseNote->setItemText(12, QCoreApplication::translate("InstrumentPropertiesDialog", "C-2", nullptr));
        comboBoxArpeggioBaseNote->setItemText(13, QCoreApplication::translate("InstrumentPropertiesDialog", "C#2", nullptr));
        comboBoxArpeggioBaseNote->setItemText(14, QCoreApplication::translate("InstrumentPropertiesDialog", "D-2", nullptr));
        comboBoxArpeggioBaseNote->setItemText(15, QCoreApplication::translate("InstrumentPropertiesDialog", "D#2", nullptr));
        comboBoxArpeggioBaseNote->setItemText(16, QCoreApplication::translate("InstrumentPropertiesDialog", "E-2", nullptr));
        comboBoxArpeggioBaseNote->setItemText(17, QCoreApplication::translate("InstrumentPropertiesDialog", "F-2", nullptr));
        comboBoxArpeggioBaseNote->setItemText(18, QCoreApplication::translate("InstrumentPropertiesDialog", "F#2", nullptr));
        comboBoxArpeggioBaseNote->setItemText(19, QCoreApplication::translate("InstrumentPropertiesDialog", "G-2", nullptr));
        comboBoxArpeggioBaseNote->setItemText(20, QCoreApplication::translate("InstrumentPropertiesDialog", "G#2", nullptr));
        comboBoxArpeggioBaseNote->setItemText(21, QCoreApplication::translate("InstrumentPropertiesDialog", "A-2", nullptr));
        comboBoxArpeggioBaseNote->setItemText(22, QCoreApplication::translate("InstrumentPropertiesDialog", "A#2", nullptr));
        comboBoxArpeggioBaseNote->setItemText(23, QCoreApplication::translate("InstrumentPropertiesDialog", "B-2", nullptr));
        comboBoxArpeggioBaseNote->setItemText(24, QCoreApplication::translate("InstrumentPropertiesDialog", "C-3", nullptr));
        comboBoxArpeggioBaseNote->setItemText(25, QCoreApplication::translate("InstrumentPropertiesDialog", "C#3", nullptr));
        comboBoxArpeggioBaseNote->setItemText(26, QCoreApplication::translate("InstrumentPropertiesDialog", "D-3", nullptr));
        comboBoxArpeggioBaseNote->setItemText(27, QCoreApplication::translate("InstrumentPropertiesDialog", "D#3", nullptr));
        comboBoxArpeggioBaseNote->setItemText(28, QCoreApplication::translate("InstrumentPropertiesDialog", "E-3", nullptr));
        comboBoxArpeggioBaseNote->setItemText(29, QCoreApplication::translate("InstrumentPropertiesDialog", "F-3", nullptr));
        comboBoxArpeggioBaseNote->setItemText(30, QCoreApplication::translate("InstrumentPropertiesDialog", "F#3", nullptr));
        comboBoxArpeggioBaseNote->setItemText(31, QCoreApplication::translate("InstrumentPropertiesDialog", "G-3", nullptr));
        comboBoxArpeggioBaseNote->setItemText(32, QCoreApplication::translate("InstrumentPropertiesDialog", "G#3", nullptr));
        comboBoxArpeggioBaseNote->setItemText(33, QCoreApplication::translate("InstrumentPropertiesDialog", "A-3", nullptr));
        comboBoxArpeggioBaseNote->setItemText(34, QCoreApplication::translate("InstrumentPropertiesDialog", "A#3", nullptr));
        comboBoxArpeggioBaseNote->setItemText(35, QCoreApplication::translate("InstrumentPropertiesDialog", "B-3", nullptr));
        comboBoxArpeggioBaseNote->setItemText(36, QCoreApplication::translate("InstrumentPropertiesDialog", "C-4", nullptr));
        comboBoxArpeggioBaseNote->setItemText(37, QCoreApplication::translate("InstrumentPropertiesDialog", "C#4", nullptr));
        comboBoxArpeggioBaseNote->setItemText(38, QCoreApplication::translate("InstrumentPropertiesDialog", "D-4", nullptr));
        comboBoxArpeggioBaseNote->setItemText(39, QCoreApplication::translate("InstrumentPropertiesDialog", "D#4", nullptr));
        comboBoxArpeggioBaseNote->setItemText(40, QCoreApplication::translate("InstrumentPropertiesDialog", "E-4", nullptr));
        comboBoxArpeggioBaseNote->setItemText(41, QCoreApplication::translate("InstrumentPropertiesDialog", "F-4", nullptr));
        comboBoxArpeggioBaseNote->setItemText(42, QCoreApplication::translate("InstrumentPropertiesDialog", "F#4", nullptr));
        comboBoxArpeggioBaseNote->setItemText(43, QCoreApplication::translate("InstrumentPropertiesDialog", "G-4", nullptr));
        comboBoxArpeggioBaseNote->setItemText(44, QCoreApplication::translate("InstrumentPropertiesDialog", "G#4", nullptr));
        comboBoxArpeggioBaseNote->setItemText(45, QCoreApplication::translate("InstrumentPropertiesDialog", "A-4", nullptr));
        comboBoxArpeggioBaseNote->setItemText(46, QCoreApplication::translate("InstrumentPropertiesDialog", "A#4", nullptr));
        comboBoxArpeggioBaseNote->setItemText(47, QCoreApplication::translate("InstrumentPropertiesDialog", "B-4", nullptr));
        comboBoxArpeggioBaseNote->setItemText(48, QCoreApplication::translate("InstrumentPropertiesDialog", "C-5", nullptr));
        comboBoxArpeggioBaseNote->setItemText(49, QCoreApplication::translate("InstrumentPropertiesDialog", "C#5", nullptr));
        comboBoxArpeggioBaseNote->setItemText(50, QCoreApplication::translate("InstrumentPropertiesDialog", "D-5", nullptr));
        comboBoxArpeggioBaseNote->setItemText(51, QCoreApplication::translate("InstrumentPropertiesDialog", "D#5", nullptr));
        comboBoxArpeggioBaseNote->setItemText(52, QCoreApplication::translate("InstrumentPropertiesDialog", "E-5", nullptr));
        comboBoxArpeggioBaseNote->setItemText(53, QCoreApplication::translate("InstrumentPropertiesDialog", "F-5", nullptr));
        comboBoxArpeggioBaseNote->setItemText(54, QCoreApplication::translate("InstrumentPropertiesDialog", "F#5", nullptr));
        comboBoxArpeggioBaseNote->setItemText(55, QCoreApplication::translate("InstrumentPropertiesDialog", "G-5", nullptr));
        comboBoxArpeggioBaseNote->setItemText(56, QCoreApplication::translate("InstrumentPropertiesDialog", "G#5", nullptr));
        comboBoxArpeggioBaseNote->setItemText(57, QCoreApplication::translate("InstrumentPropertiesDialog", "A-5", nullptr));
        comboBoxArpeggioBaseNote->setItemText(58, QCoreApplication::translate("InstrumentPropertiesDialog", "A#5", nullptr));
        comboBoxArpeggioBaseNote->setItemText(59, QCoreApplication::translate("InstrumentPropertiesDialog", "B-5", nullptr));
        comboBoxArpeggioBaseNote->setItemText(60, QCoreApplication::translate("InstrumentPropertiesDialog", "C-6", nullptr));
        comboBoxArpeggioBaseNote->setItemText(61, QCoreApplication::translate("InstrumentPropertiesDialog", "C#6", nullptr));
        comboBoxArpeggioBaseNote->setItemText(62, QCoreApplication::translate("InstrumentPropertiesDialog", "D-6", nullptr));
        comboBoxArpeggioBaseNote->setItemText(63, QCoreApplication::translate("InstrumentPropertiesDialog", "D#6", nullptr));
        comboBoxArpeggioBaseNote->setItemText(64, QCoreApplication::translate("InstrumentPropertiesDialog", "E-6", nullptr));
        comboBoxArpeggioBaseNote->setItemText(65, QCoreApplication::translate("InstrumentPropertiesDialog", "F-6", nullptr));
        comboBoxArpeggioBaseNote->setItemText(66, QCoreApplication::translate("InstrumentPropertiesDialog", "F#6", nullptr));
        comboBoxArpeggioBaseNote->setItemText(67, QCoreApplication::translate("InstrumentPropertiesDialog", "G-6", nullptr));
        comboBoxArpeggioBaseNote->setItemText(68, QCoreApplication::translate("InstrumentPropertiesDialog", "G#6", nullptr));
        comboBoxArpeggioBaseNote->setItemText(69, QCoreApplication::translate("InstrumentPropertiesDialog", "A-6", nullptr));
        comboBoxArpeggioBaseNote->setItemText(70, QCoreApplication::translate("InstrumentPropertiesDialog", "A#6", nullptr));
        comboBoxArpeggioBaseNote->setItemText(71, QCoreApplication::translate("InstrumentPropertiesDialog", "B-6", nullptr));
        comboBoxArpeggioBaseNote->setItemText(72, QCoreApplication::translate("InstrumentPropertiesDialog", "C-7", nullptr));
        comboBoxArpeggioBaseNote->setItemText(73, QCoreApplication::translate("InstrumentPropertiesDialog", "C#7", nullptr));
        comboBoxArpeggioBaseNote->setItemText(74, QCoreApplication::translate("InstrumentPropertiesDialog", "D-7", nullptr));
        comboBoxArpeggioBaseNote->setItemText(75, QCoreApplication::translate("InstrumentPropertiesDialog", "D#7", nullptr));
        comboBoxArpeggioBaseNote->setItemText(76, QCoreApplication::translate("InstrumentPropertiesDialog", "E-7", nullptr));
        comboBoxArpeggioBaseNote->setItemText(77, QCoreApplication::translate("InstrumentPropertiesDialog", "F-7", nullptr));
        comboBoxArpeggioBaseNote->setItemText(78, QCoreApplication::translate("InstrumentPropertiesDialog", "F#7", nullptr));
        comboBoxArpeggioBaseNote->setItemText(79, QCoreApplication::translate("InstrumentPropertiesDialog", "G-7", nullptr));
        comboBoxArpeggioBaseNote->setItemText(80, QCoreApplication::translate("InstrumentPropertiesDialog", "G#7", nullptr));
        comboBoxArpeggioBaseNote->setItemText(81, QCoreApplication::translate("InstrumentPropertiesDialog", "A-7", nullptr));
        comboBoxArpeggioBaseNote->setItemText(82, QCoreApplication::translate("InstrumentPropertiesDialog", "A#7", nullptr));
        comboBoxArpeggioBaseNote->setItemText(83, QCoreApplication::translate("InstrumentPropertiesDialog", "B-7", nullptr));
        comboBoxArpeggioBaseNote->setItemText(84, QCoreApplication::translate("InstrumentPropertiesDialog", "C-8", nullptr));
        comboBoxArpeggioBaseNote->setItemText(85, QCoreApplication::translate("InstrumentPropertiesDialog", "C#8", nullptr));
        comboBoxArpeggioBaseNote->setItemText(86, QCoreApplication::translate("InstrumentPropertiesDialog", "D-8", nullptr));
        comboBoxArpeggioBaseNote->setItemText(87, QCoreApplication::translate("InstrumentPropertiesDialog", "D#8", nullptr));
        comboBoxArpeggioBaseNote->setItemText(88, QCoreApplication::translate("InstrumentPropertiesDialog", "E-8", nullptr));
        comboBoxArpeggioBaseNote->setItemText(89, QCoreApplication::translate("InstrumentPropertiesDialog", "F-8", nullptr));
        comboBoxArpeggioBaseNote->setItemText(90, QCoreApplication::translate("InstrumentPropertiesDialog", "F#8", nullptr));
        comboBoxArpeggioBaseNote->setItemText(91, QCoreApplication::translate("InstrumentPropertiesDialog", "G-8", nullptr));
        comboBoxArpeggioBaseNote->setItemText(92, QCoreApplication::translate("InstrumentPropertiesDialog", "G#8", nullptr));
        comboBoxArpeggioBaseNote->setItemText(93, QCoreApplication::translate("InstrumentPropertiesDialog", "A-8", nullptr));
        comboBoxArpeggioBaseNote->setItemText(94, QCoreApplication::translate("InstrumentPropertiesDialog", "A#8", nullptr));
        comboBoxArpeggioBaseNote->setItemText(95, QCoreApplication::translate("InstrumentPropertiesDialog", "B-8", nullptr));
        comboBoxArpeggioBaseNote->setItemText(96, QCoreApplication::translate("InstrumentPropertiesDialog", "C-9", nullptr));
        comboBoxArpeggioBaseNote->setItemText(97, QCoreApplication::translate("InstrumentPropertiesDialog", "C#9", nullptr));
        comboBoxArpeggioBaseNote->setItemText(98, QCoreApplication::translate("InstrumentPropertiesDialog", "D-9", nullptr));
        comboBoxArpeggioBaseNote->setItemText(99, QCoreApplication::translate("InstrumentPropertiesDialog", "D#9", nullptr));
        comboBoxArpeggioBaseNote->setItemText(100, QCoreApplication::translate("InstrumentPropertiesDialog", "E-9", nullptr));
        comboBoxArpeggioBaseNote->setItemText(101, QCoreApplication::translate("InstrumentPropertiesDialog", "F-9", nullptr));
        comboBoxArpeggioBaseNote->setItemText(102, QCoreApplication::translate("InstrumentPropertiesDialog", "F#9", nullptr));
        comboBoxArpeggioBaseNote->setItemText(103, QCoreApplication::translate("InstrumentPropertiesDialog", "G-9", nullptr));
        comboBoxArpeggioBaseNote->setItemText(104, QCoreApplication::translate("InstrumentPropertiesDialog", "G#9", nullptr));
        comboBoxArpeggioBaseNote->setItemText(105, QCoreApplication::translate("InstrumentPropertiesDialog", "A-9", nullptr));
        comboBoxArpeggioBaseNote->setItemText(106, QCoreApplication::translate("InstrumentPropertiesDialog", "A#9", nullptr));
        comboBoxArpeggioBaseNote->setItemText(107, QCoreApplication::translate("InstrumentPropertiesDialog", "B-9", nullptr));
        comboBoxArpeggioBaseNote->setItemText(108, QCoreApplication::translate("InstrumentPropertiesDialog", "C-A", nullptr));
        comboBoxArpeggioBaseNote->setItemText(109, QCoreApplication::translate("InstrumentPropertiesDialog", "C#A", nullptr));
        comboBoxArpeggioBaseNote->setItemText(110, QCoreApplication::translate("InstrumentPropertiesDialog", "D-A", nullptr));
        comboBoxArpeggioBaseNote->setItemText(111, QCoreApplication::translate("InstrumentPropertiesDialog", "D#A", nullptr));
        comboBoxArpeggioBaseNote->setItemText(112, QCoreApplication::translate("InstrumentPropertiesDialog", "E-A", nullptr));
        comboBoxArpeggioBaseNote->setItemText(113, QCoreApplication::translate("InstrumentPropertiesDialog", "F-A", nullptr));
        comboBoxArpeggioBaseNote->setItemText(114, QCoreApplication::translate("InstrumentPropertiesDialog", "F#A", nullptr));
        comboBoxArpeggioBaseNote->setItemText(115, QCoreApplication::translate("InstrumentPropertiesDialog", "G-A", nullptr));
        comboBoxArpeggioBaseNote->setItemText(116, QCoreApplication::translate("InstrumentPropertiesDialog", "G#A", nullptr));
        comboBoxArpeggioBaseNote->setItemText(117, QCoreApplication::translate("InstrumentPropertiesDialog", "A-A", nullptr));
        comboBoxArpeggioBaseNote->setItemText(118, QCoreApplication::translate("InstrumentPropertiesDialog", "A#A", nullptr));
        comboBoxArpeggioBaseNote->setItemText(119, QCoreApplication::translate("InstrumentPropertiesDialog", "B-A", nullptr));
        comboBoxArpeggioBaseNote->setItemText(120, QCoreApplication::translate("InstrumentPropertiesDialog", "C-B", nullptr));
        comboBoxArpeggioBaseNote->setItemText(121, QCoreApplication::translate("InstrumentPropertiesDialog", "C#B", nullptr));
        comboBoxArpeggioBaseNote->setItemText(122, QCoreApplication::translate("InstrumentPropertiesDialog", "D-B", nullptr));
        comboBoxArpeggioBaseNote->setItemText(123, QCoreApplication::translate("InstrumentPropertiesDialog", "D#B", nullptr));
        comboBoxArpeggioBaseNote->setItemText(124, QCoreApplication::translate("InstrumentPropertiesDialog", "E-B", nullptr));
        comboBoxArpeggioBaseNote->setItemText(125, QCoreApplication::translate("InstrumentPropertiesDialog", "F-B", nullptr));
        comboBoxArpeggioBaseNote->setItemText(126, QCoreApplication::translate("InstrumentPropertiesDialog", "F#B", nullptr));

        labelArpeggioLength->setText(QCoreApplication::translate("InstrumentPropertiesDialog", "Length", nullptr));
        labelArpeggioBlock->setText(QCoreApplication::translate("InstrumentPropertiesDialog", "Block", nullptr));
    } // retranslateUi

};

namespace Ui {
    class InstrumentPropertiesDialog: public Ui_InstrumentPropertiesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INSTRUMENTPROPERTIESDIALOG_H

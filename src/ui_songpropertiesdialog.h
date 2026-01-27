/********************************************************************************
** Form generated from reading UI file 'songpropertiesdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.15
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SONGPROPERTIESDIALOG_H
#define UI_SONGPROPERTIESDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>
#include "sliderwithlabel.h"

QT_BEGIN_NAMESPACE

class Ui_SongPropertiesDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *lineEditName;
    QLabel *label_2;
    SliderWithLabel *horizontalSliderTempo;
    QLabel *label_3;
    SliderWithLabel *horizontalSliderTicksPerLine;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SongPropertiesDialog)
    {
        if (SongPropertiesDialog->objectName().isEmpty())
            SongPropertiesDialog->setObjectName(QString::fromUtf8("SongPropertiesDialog"));
        SongPropertiesDialog->resize(366, 150);
        verticalLayout = new QVBoxLayout(SongPropertiesDialog);
        verticalLayout->setSpacing(4);
        verticalLayout->setContentsMargins(4, 4, 4, 4);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label = new QLabel(SongPropertiesDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        lineEditName = new QLineEdit(SongPropertiesDialog);
        lineEditName->setObjectName(QString::fromUtf8("lineEditName"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEditName);

        label_2 = new QLabel(SongPropertiesDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        horizontalSliderTempo = new SliderWithLabel(SongPropertiesDialog);
        horizontalSliderTempo->setObjectName(QString::fromUtf8("horizontalSliderTempo"));
        horizontalSliderTempo->setMinimum(32);
        horizontalSliderTempo->setMaximum(255);
        horizontalSliderTempo->setValue(120);
        horizontalSliderTempo->setOrientation(Qt::Horizontal);
        horizontalSliderTempo->setTickPosition(QSlider::NoTicks);

        formLayout->setWidget(1, QFormLayout::FieldRole, horizontalSliderTempo);

        label_3 = new QLabel(SongPropertiesDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        horizontalSliderTicksPerLine = new SliderWithLabel(SongPropertiesDialog);
        horizontalSliderTicksPerLine->setObjectName(QString::fromUtf8("horizontalSliderTicksPerLine"));
        horizontalSliderTicksPerLine->setMinimum(1);
        horizontalSliderTicksPerLine->setMaximum(32);
        horizontalSliderTicksPerLine->setValue(4);
        horizontalSliderTicksPerLine->setOrientation(Qt::Horizontal);

        formLayout->setWidget(2, QFormLayout::FieldRole, horizontalSliderTicksPerLine);


        verticalLayout->addLayout(formLayout);

        buttonBox = new QDialogButtonBox(SongPropertiesDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        verticalLayout->addWidget(buttonBox);

#if QT_CONFIG(shortcut)
        label->setBuddy(lineEditName);
        label_2->setBuddy(horizontalSliderTempo);
        label_3->setBuddy(horizontalSliderTicksPerLine);
#endif // QT_CONFIG(shortcut)

        retranslateUi(SongPropertiesDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), SongPropertiesDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SongPropertiesDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(SongPropertiesDialog);
    } // setupUi

    void retranslateUi(QDialog *SongPropertiesDialog)
    {
        SongPropertiesDialog->setWindowTitle(QCoreApplication::translate("SongPropertiesDialog", "Song Properties", nullptr));
        label->setText(QCoreApplication::translate("SongPropertiesDialog", "Name", nullptr));
        label_2->setText(QCoreApplication::translate("SongPropertiesDialog", "Tempo", nullptr));
        label_3->setText(QCoreApplication::translate("SongPropertiesDialog", "Ticks per line", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SongPropertiesDialog: public Ui_SongPropertiesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SONGPROPERTIESDIALOG_H

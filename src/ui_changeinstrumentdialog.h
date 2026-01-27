/********************************************************************************
** Form generated from reading UI file 'changeinstrumentdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.15
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGEINSTRUMENTDIALOG_H
#define UI_CHANGEINSTRUMENTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include "instrumentspinbox.h"

QT_BEGIN_NAMESPACE

class Ui_ChangeInstrumentDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QComboBox *comboBoxArea;
    InstrumentSpinBox *spinBoxFrom;
    InstrumentSpinBox *spinBoxTo;
    QHBoxLayout *horizontalLayout;
    QDialogButtonBox *buttonBox;
    QPushButton *pushButtonSwap;
    QPushButton *pushButtonChange;

    void setupUi(QDialog *ChangeInstrumentDialog)
    {
        if (ChangeInstrumentDialog->objectName().isEmpty())
            ChangeInstrumentDialog->setObjectName(QString::fromUtf8("ChangeInstrumentDialog"));
        ChangeInstrumentDialog->resize(273, 173);
        verticalLayout = new QVBoxLayout(ChangeInstrumentDialog);
        verticalLayout->setSpacing(4);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(4, 4, 4, 4);
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label = new QLabel(ChangeInstrumentDialog);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        label_2 = new QLabel(ChangeInstrumentDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        label_3 = new QLabel(ChangeInstrumentDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        comboBoxArea = new QComboBox(ChangeInstrumentDialog);
        comboBoxArea->addItem(QString());
        comboBoxArea->addItem(QString());
        comboBoxArea->addItem(QString());
        comboBoxArea->addItem(QString());
        comboBoxArea->setObjectName(QString::fromUtf8("comboBoxArea"));

        formLayout->setWidget(0, QFormLayout::FieldRole, comboBoxArea);

        spinBoxFrom = new InstrumentSpinBox(ChangeInstrumentDialog);
        spinBoxFrom->setObjectName(QString::fromUtf8("spinBoxFrom"));

        formLayout->setWidget(1, QFormLayout::FieldRole, spinBoxFrom);

        spinBoxTo = new InstrumentSpinBox(ChangeInstrumentDialog);
        spinBoxTo->setObjectName(QString::fromUtf8("spinBoxTo"));

        formLayout->setWidget(2, QFormLayout::FieldRole, spinBoxTo);


        verticalLayout->addLayout(formLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(4);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        buttonBox = new QDialogButtonBox(ChangeInstrumentDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        horizontalLayout->addWidget(buttonBox);

        pushButtonSwap = new QPushButton(ChangeInstrumentDialog);
        pushButtonSwap->setObjectName(QString::fromUtf8("pushButtonSwap"));

        horizontalLayout->addWidget(pushButtonSwap);

        pushButtonChange = new QPushButton(ChangeInstrumentDialog);
        pushButtonChange->setObjectName(QString::fromUtf8("pushButtonChange"));

        horizontalLayout->addWidget(pushButtonChange);


        verticalLayout->addLayout(horizontalLayout);

#if QT_CONFIG(shortcut)
        label->setBuddy(comboBoxArea);
        label_2->setBuddy(spinBoxFrom);
        label_3->setBuddy(spinBoxTo);
#endif // QT_CONFIG(shortcut)

        retranslateUi(ChangeInstrumentDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ChangeInstrumentDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ChangeInstrumentDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(ChangeInstrumentDialog);
    } // setupUi

    void retranslateUi(QDialog *ChangeInstrumentDialog)
    {
        ChangeInstrumentDialog->setWindowTitle(QCoreApplication::translate("ChangeInstrumentDialog", "Change Instrument", nullptr));
        label->setText(QCoreApplication::translate("ChangeInstrumentDialog", "Area", nullptr));
        label_2->setText(QCoreApplication::translate("ChangeInstrumentDialog", "From", nullptr));
        label_3->setText(QCoreApplication::translate("ChangeInstrumentDialog", "To", nullptr));
        comboBoxArea->setItemText(0, QCoreApplication::translate("ChangeInstrumentDialog", "Song", nullptr));
        comboBoxArea->setItemText(1, QCoreApplication::translate("ChangeInstrumentDialog", "Block", nullptr));
        comboBoxArea->setItemText(2, QCoreApplication::translate("ChangeInstrumentDialog", "Track", nullptr));
        comboBoxArea->setItemText(3, QCoreApplication::translate("ChangeInstrumentDialog", "Selection", nullptr));

        pushButtonSwap->setText(QCoreApplication::translate("ChangeInstrumentDialog", "Swap", nullptr));
        pushButtonChange->setText(QCoreApplication::translate("ChangeInstrumentDialog", "Change", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChangeInstrumentDialog: public Ui_ChangeInstrumentDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGEINSTRUMENTDIALOG_H

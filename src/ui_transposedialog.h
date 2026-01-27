/********************************************************************************
** Form generated from reading UI file 'transposedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.15
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRANSPOSEDIALOG_H
#define UI_TRANSPOSEDIALOG_H

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

QT_BEGIN_NAMESPACE

class Ui_TransposeDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QComboBox *comboBoxArea;
    QLabel *label_2;
    QComboBox *comboBoxInstruments;
    QLabel *label_3;
    QComboBox *comboBoxMode;
    QHBoxLayout *horizontalLayout;
    QDialogButtonBox *buttonBox;
    QPushButton *pushButtonTranspose;

    void setupUi(QDialog *TransposeDialog)
    {
        if (TransposeDialog->objectName().isEmpty())
            TransposeDialog->setObjectName(QString::fromUtf8("TransposeDialog"));
        TransposeDialog->resize(333, 163);
        verticalLayout = new QVBoxLayout(TransposeDialog);
        verticalLayout->setSpacing(4);
        verticalLayout->setContentsMargins(4, 4, 4, 4);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label = new QLabel(TransposeDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        comboBoxArea = new QComboBox(TransposeDialog);
        comboBoxArea->addItem(QString());
        comboBoxArea->addItem(QString());
        comboBoxArea->addItem(QString());
        comboBoxArea->addItem(QString());
        comboBoxArea->setObjectName(QString::fromUtf8("comboBoxArea"));

        formLayout->setWidget(0, QFormLayout::FieldRole, comboBoxArea);

        label_2 = new QLabel(TransposeDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        comboBoxInstruments = new QComboBox(TransposeDialog);
        comboBoxInstruments->addItem(QString());
        comboBoxInstruments->addItem(QString());
        comboBoxInstruments->setObjectName(QString::fromUtf8("comboBoxInstruments"));

        formLayout->setWidget(1, QFormLayout::FieldRole, comboBoxInstruments);

        label_3 = new QLabel(TransposeDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        comboBoxMode = new QComboBox(TransposeDialog);
        comboBoxMode->addItem(QString());
        comboBoxMode->addItem(QString());
        comboBoxMode->addItem(QString());
        comboBoxMode->addItem(QString());
        comboBoxMode->setObjectName(QString::fromUtf8("comboBoxMode"));

        formLayout->setWidget(2, QFormLayout::FieldRole, comboBoxMode);


        verticalLayout->addLayout(formLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(4);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        buttonBox = new QDialogButtonBox(TransposeDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        horizontalLayout->addWidget(buttonBox);

        pushButtonTranspose = new QPushButton(TransposeDialog);
        pushButtonTranspose->setObjectName(QString::fromUtf8("pushButtonTranspose"));

        horizontalLayout->addWidget(pushButtonTranspose);


        verticalLayout->addLayout(horizontalLayout);

#if QT_CONFIG(shortcut)
        label->setBuddy(comboBoxArea);
        label_2->setBuddy(comboBoxInstruments);
        label_3->setBuddy(comboBoxMode);
#endif // QT_CONFIG(shortcut)

        retranslateUi(TransposeDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), TransposeDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), TransposeDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(TransposeDialog);
    } // setupUi

    void retranslateUi(QDialog *TransposeDialog)
    {
        TransposeDialog->setWindowTitle(QCoreApplication::translate("TransposeDialog", "Transpose", nullptr));
        label->setText(QCoreApplication::translate("TransposeDialog", "Area to transpose", nullptr));
        comboBoxArea->setItemText(0, QCoreApplication::translate("TransposeDialog", "Song", nullptr));
        comboBoxArea->setItemText(1, QCoreApplication::translate("TransposeDialog", "Block", nullptr));
        comboBoxArea->setItemText(2, QCoreApplication::translate("TransposeDialog", "Track", nullptr));
        comboBoxArea->setItemText(3, QCoreApplication::translate("TransposeDialog", "Selection", nullptr));

        label_2->setText(QCoreApplication::translate("TransposeDialog", "Instruments to transpose", nullptr));
        comboBoxInstruments->setItemText(0, QCoreApplication::translate("TransposeDialog", "All", nullptr));
        comboBoxInstruments->setItemText(1, QCoreApplication::translate("TransposeDialog", "Current", nullptr));

        label_3->setText(QCoreApplication::translate("TransposeDialog", "Transposing mode", nullptr));
        comboBoxMode->setItemText(0, QCoreApplication::translate("TransposeDialog", "Octave up", nullptr));
        comboBoxMode->setItemText(1, QCoreApplication::translate("TransposeDialog", "Halfnote up", nullptr));
        comboBoxMode->setItemText(2, QCoreApplication::translate("TransposeDialog", "Halfnote down", nullptr));
        comboBoxMode->setItemText(3, QCoreApplication::translate("TransposeDialog", "Octave down", nullptr));

        pushButtonTranspose->setText(QCoreApplication::translate("TransposeDialog", "Transpose", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TransposeDialog: public Ui_TransposeDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRANSPOSEDIALOG_H

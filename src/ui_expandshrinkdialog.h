/********************************************************************************
** Form generated from reading UI file 'expandshrinkdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.15
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXPANDSHRINKDIALOG_H
#define UI_EXPANDSHRINKDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ExpandShrinkDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QFormLayout *formLayout_2;
    QLabel *label;
    QLabel *label_2;
    QComboBox *comboBoxArea;
    QSpinBox *spinBoxFactor;
    QCheckBox *checkBoxChangeBlockLength;
    QHBoxLayout *horizontalLayout;
    QDialogButtonBox *buttonBox;
    QPushButton *pushButtonShrink;
    QPushButton *pushButtonExpand;

    void setupUi(QDialog *ExpandShrinkDialog)
    {
        if (ExpandShrinkDialog->objectName().isEmpty())
            ExpandShrinkDialog->setObjectName(QString::fromUtf8("ExpandShrinkDialog"));
        ExpandShrinkDialog->resize(276, 140);
        verticalLayout = new QVBoxLayout(ExpandShrinkDialog);
        verticalLayout->setSpacing(4);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(4, 4, 4, 4);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_2->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label = new QLabel(ExpandShrinkDialog);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label);

        label_2 = new QLabel(ExpandShrinkDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_2);

        comboBoxArea = new QComboBox(ExpandShrinkDialog);
        comboBoxArea->addItem(QString());
        comboBoxArea->addItem(QString());
        comboBoxArea->addItem(QString());
        comboBoxArea->addItem(QString());
        comboBoxArea->setObjectName(QString::fromUtf8("comboBoxArea"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, comboBoxArea);

        spinBoxFactor = new QSpinBox(ExpandShrinkDialog);
        spinBoxFactor->setObjectName(QString::fromUtf8("spinBoxFactor"));
        spinBoxFactor->setMinimum(2);
        spinBoxFactor->setMaximum(32);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, spinBoxFactor);

        checkBoxChangeBlockLength = new QCheckBox(ExpandShrinkDialog);
        checkBoxChangeBlockLength->setObjectName(QString::fromUtf8("checkBoxChangeBlockLength"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, checkBoxChangeBlockLength);


        gridLayout->addLayout(formLayout_2, 0, 0, 1, 1);


        verticalLayout->addLayout(gridLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(4);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        buttonBox = new QDialogButtonBox(ExpandShrinkDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        horizontalLayout->addWidget(buttonBox);

        pushButtonShrink = new QPushButton(ExpandShrinkDialog);
        pushButtonShrink->setObjectName(QString::fromUtf8("pushButtonShrink"));

        horizontalLayout->addWidget(pushButtonShrink);

        pushButtonExpand = new QPushButton(ExpandShrinkDialog);
        pushButtonExpand->setObjectName(QString::fromUtf8("pushButtonExpand"));

        horizontalLayout->addWidget(pushButtonExpand);


        verticalLayout->addLayout(horizontalLayout);

#if QT_CONFIG(shortcut)
        label->setBuddy(comboBoxArea);
        label_2->setBuddy(spinBoxFactor);
#endif // QT_CONFIG(shortcut)

        retranslateUi(ExpandShrinkDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ExpandShrinkDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ExpandShrinkDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(ExpandShrinkDialog);
    } // setupUi

    void retranslateUi(QDialog *ExpandShrinkDialog)
    {
        ExpandShrinkDialog->setWindowTitle(QCoreApplication::translate("ExpandShrinkDialog", "Expand/Shrink", nullptr));
        label->setText(QCoreApplication::translate("ExpandShrinkDialog", "Area", nullptr));
        label_2->setText(QCoreApplication::translate("ExpandShrinkDialog", "Factor", nullptr));
        comboBoxArea->setItemText(0, QCoreApplication::translate("ExpandShrinkDialog", "Song", nullptr));
        comboBoxArea->setItemText(1, QCoreApplication::translate("ExpandShrinkDialog", "Block", nullptr));
        comboBoxArea->setItemText(2, QCoreApplication::translate("ExpandShrinkDialog", "Track", nullptr));
        comboBoxArea->setItemText(3, QCoreApplication::translate("ExpandShrinkDialog", "Selection", nullptr));

        checkBoxChangeBlockLength->setText(QCoreApplication::translate("ExpandShrinkDialog", "Change block length", nullptr));
        pushButtonShrink->setText(QCoreApplication::translate("ExpandShrinkDialog", "Shrink", nullptr));
        pushButtonExpand->setText(QCoreApplication::translate("ExpandShrinkDialog", "Expand", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ExpandShrinkDialog: public Ui_ExpandShrinkDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXPANDSHRINKDIALOG_H

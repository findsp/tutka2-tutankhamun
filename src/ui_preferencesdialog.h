/********************************************************************************
** Form generated from reading UI file 'preferencesdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.15
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PREFERENCESDIALOG_H
#define UI_PREFERENCESDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_PreferencesDialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *label_2;
    QComboBox *comboBoxSchedulingMode;
    QTableView *tableViewOutputMidiInterfaces;
    QTableView *tableViewInputMidiInterfaces;
    QLabel *label_3;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *PreferencesDialog)
    {
        if (PreferencesDialog->objectName().isEmpty())
            PreferencesDialog->setObjectName(QString::fromUtf8("PreferencesDialog"));
        PreferencesDialog->resize(500, 450);
        verticalLayout_3 = new QVBoxLayout(PreferencesDialog);
        verticalLayout_3->setContentsMargins(4, 4, 4, 4);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label = new QLabel(PreferencesDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        label_2 = new QLabel(PreferencesDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(2, QFormLayout::LabelRole, label_2);

        comboBoxSchedulingMode = new QComboBox(PreferencesDialog);
        comboBoxSchedulingMode->setObjectName(QString::fromUtf8("comboBoxSchedulingMode"));

        formLayout->setWidget(2, QFormLayout::FieldRole, comboBoxSchedulingMode);

        tableViewOutputMidiInterfaces = new QTableView(PreferencesDialog);
        tableViewOutputMidiInterfaces->setObjectName(QString::fromUtf8("tableViewOutputMidiInterfaces"));
        tableViewOutputMidiInterfaces->setProperty("showDropIndicator", QVariant(false));
        tableViewOutputMidiInterfaces->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableViewOutputMidiInterfaces->setCornerButtonEnabled(false);
        tableViewOutputMidiInterfaces->horizontalHeader()->setDefaultSectionSize(50);
        tableViewOutputMidiInterfaces->horizontalHeader()->setHighlightSections(false);
        tableViewOutputMidiInterfaces->horizontalHeader()->setStretchLastSection(true);
        tableViewOutputMidiInterfaces->verticalHeader()->setVisible(false);
        tableViewOutputMidiInterfaces->verticalHeader()->setHighlightSections(false);

        formLayout->setWidget(0, QFormLayout::FieldRole, tableViewOutputMidiInterfaces);

        tableViewInputMidiInterfaces = new QTableView(PreferencesDialog);
        tableViewInputMidiInterfaces->setObjectName(QString::fromUtf8("tableViewInputMidiInterfaces"));
        tableViewInputMidiInterfaces->setProperty("showDropIndicator", QVariant(false));
        tableViewInputMidiInterfaces->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableViewInputMidiInterfaces->setCornerButtonEnabled(false);
        tableViewInputMidiInterfaces->horizontalHeader()->setDefaultSectionSize(50);
        tableViewInputMidiInterfaces->horizontalHeader()->setHighlightSections(false);
        tableViewInputMidiInterfaces->horizontalHeader()->setStretchLastSection(true);
        tableViewInputMidiInterfaces->verticalHeader()->setVisible(false);
        tableViewInputMidiInterfaces->verticalHeader()->setHighlightSections(false);

        formLayout->setWidget(1, QFormLayout::FieldRole, tableViewInputMidiInterfaces);

        label_3 = new QLabel(PreferencesDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);


        verticalLayout_3->addLayout(formLayout);

        buttonBox = new QDialogButtonBox(PreferencesDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        verticalLayout_3->addWidget(buttonBox);

#if QT_CONFIG(shortcut)
        label->setBuddy(tableViewOutputMidiInterfaces);
        label_2->setBuddy(comboBoxSchedulingMode);
#endif // QT_CONFIG(shortcut)

        retranslateUi(PreferencesDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), PreferencesDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), PreferencesDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(PreferencesDialog);
    } // setupUi

    void retranslateUi(QDialog *PreferencesDialog)
    {
        PreferencesDialog->setWindowTitle(QCoreApplication::translate("PreferencesDialog", "Preferences", nullptr));
        label->setText(QCoreApplication::translate("PreferencesDialog", "Output MIDI interfaces", nullptr));
        label_2->setText(QCoreApplication::translate("PreferencesDialog", "Scheduling mode", nullptr));
        label_3->setText(QCoreApplication::translate("PreferencesDialog", "Input MIDI interfaces", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PreferencesDialog: public Ui_PreferencesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PREFERENCESDIALOG_H

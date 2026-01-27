/********************************************************************************
** Form generated from reading UI file 'sectionlistdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.15
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECTIONLISTDIALOG_H
#define UI_SECTIONLISTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SectionListDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTableView *tableView;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButtonInsert;
    QPushButton *pushButtonAppend;
    QPushButton *pushButtonDelete;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SectionListDialog)
    {
        if (SectionListDialog->objectName().isEmpty())
            SectionListDialog->setObjectName(QString::fromUtf8("SectionListDialog"));
        SectionListDialog->resize(350, 400);
        verticalLayout = new QVBoxLayout(SectionListDialog);
        verticalLayout->setContentsMargins(4, 4, 4, 4);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tableView = new QTableView(SectionListDialog);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setProperty("showDropIndicator", QVariant(false));
        tableView->setAlternatingRowColors(true);
        tableView->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableView->setCornerButtonEnabled(false);
        tableView->horizontalHeader()->setDefaultSectionSize(150);
        tableView->horizontalHeader()->setHighlightSections(false);
        tableView->horizontalHeader()->setStretchLastSection(true);
        tableView->verticalHeader()->setHighlightSections(false);

        verticalLayout->addWidget(tableView);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(4);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButtonInsert = new QPushButton(SectionListDialog);
        pushButtonInsert->setObjectName(QString::fromUtf8("pushButtonInsert"));

        horizontalLayout->addWidget(pushButtonInsert);

        pushButtonAppend = new QPushButton(SectionListDialog);
        pushButtonAppend->setObjectName(QString::fromUtf8("pushButtonAppend"));

        horizontalLayout->addWidget(pushButtonAppend);

        pushButtonDelete = new QPushButton(SectionListDialog);
        pushButtonDelete->setObjectName(QString::fromUtf8("pushButtonDelete"));

        horizontalLayout->addWidget(pushButtonDelete);


        verticalLayout->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(SectionListDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        verticalLayout->addWidget(buttonBox);

        QWidget::setTabOrder(buttonBox, pushButtonInsert);
        QWidget::setTabOrder(pushButtonInsert, pushButtonAppend);
        QWidget::setTabOrder(pushButtonAppend, pushButtonDelete);
        QWidget::setTabOrder(pushButtonDelete, tableView);

        retranslateUi(SectionListDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), SectionListDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SectionListDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(SectionListDialog);
    } // setupUi

    void retranslateUi(QDialog *SectionListDialog)
    {
        SectionListDialog->setWindowTitle(QCoreApplication::translate("SectionListDialog", "Section List", nullptr));
        pushButtonInsert->setText(QCoreApplication::translate("SectionListDialog", "Insert", nullptr));
        pushButtonAppend->setText(QCoreApplication::translate("SectionListDialog", "Append", nullptr));
        pushButtonDelete->setText(QCoreApplication::translate("SectionListDialog", "Delete", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SectionListDialog: public Ui_SectionListDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECTIONLISTDIALOG_H

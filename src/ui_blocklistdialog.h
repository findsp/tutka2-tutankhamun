/********************************************************************************
** Form generated from reading UI file 'blocklistdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.15
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BLOCKLISTDIALOG_H
#define UI_BLOCKLISTDIALOG_H

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

class Ui_BlockListDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTableView *tableView;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButtonInsertNew;
    QPushButton *pushButtonAppendNew;
    QPushButton *pushButtonDelete;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *BlockListDialog)
    {
        if (BlockListDialog->objectName().isEmpty())
            BlockListDialog->setObjectName(QString::fromUtf8("BlockListDialog"));
        BlockListDialog->resize(350, 400);
        verticalLayout = new QVBoxLayout(BlockListDialog);
        verticalLayout->setSpacing(4);
        verticalLayout->setContentsMargins(4, 4, 4, 4);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tableView = new QTableView(BlockListDialog);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setProperty("showDropIndicator", QVariant(false));
        tableView->setAlternatingRowColors(true);
        tableView->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableView->setCornerButtonEnabled(false);
        tableView->horizontalHeader()->setDefaultSectionSize(50);
        tableView->horizontalHeader()->setHighlightSections(false);
        tableView->horizontalHeader()->setStretchLastSection(true);
        tableView->verticalHeader()->setHighlightSections(false);

        verticalLayout->addWidget(tableView);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(4);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButtonInsertNew = new QPushButton(BlockListDialog);
        pushButtonInsertNew->setObjectName(QString::fromUtf8("pushButtonInsertNew"));
        pushButtonInsertNew->setFocusPolicy(Qt::TabFocus);

        horizontalLayout->addWidget(pushButtonInsertNew);

        pushButtonAppendNew = new QPushButton(BlockListDialog);
        pushButtonAppendNew->setObjectName(QString::fromUtf8("pushButtonAppendNew"));
        pushButtonAppendNew->setFocusPolicy(Qt::TabFocus);

        horizontalLayout->addWidget(pushButtonAppendNew);

        pushButtonDelete = new QPushButton(BlockListDialog);
        pushButtonDelete->setObjectName(QString::fromUtf8("pushButtonDelete"));
        pushButtonDelete->setFocusPolicy(Qt::TabFocus);

        horizontalLayout->addWidget(pushButtonDelete);


        verticalLayout->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(BlockListDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        verticalLayout->addWidget(buttonBox);

        QWidget::setTabOrder(buttonBox, pushButtonInsertNew);
        QWidget::setTabOrder(pushButtonInsertNew, pushButtonAppendNew);
        QWidget::setTabOrder(pushButtonAppendNew, pushButtonDelete);
        QWidget::setTabOrder(pushButtonDelete, tableView);

        retranslateUi(BlockListDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), BlockListDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), BlockListDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(BlockListDialog);
    } // setupUi

    void retranslateUi(QDialog *BlockListDialog)
    {
        BlockListDialog->setWindowTitle(QCoreApplication::translate("BlockListDialog", "Block List", nullptr));
        pushButtonInsertNew->setText(QCoreApplication::translate("BlockListDialog", "Insert new", nullptr));
        pushButtonAppendNew->setText(QCoreApplication::translate("BlockListDialog", "Append new", nullptr));
        pushButtonDelete->setText(QCoreApplication::translate("BlockListDialog", "Delete", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BlockListDialog: public Ui_BlockListDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BLOCKLISTDIALOG_H

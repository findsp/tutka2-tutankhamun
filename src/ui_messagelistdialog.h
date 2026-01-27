/********************************************************************************
** Form generated from reading UI file 'messagelistdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.15
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MESSAGELISTDIALOG_H
#define UI_MESSAGELISTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_MessageListDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTableView *tableView;
    QGridLayout *gridLayout;
    QPushButton *pushButtonInsertNew;
    QPushButton *pushButtonAppendNew;
    QPushButton *pushButtonDelete;
    QPushButton *pushButtonSend;
    QPushButton *pushButtonReceive;
    QPushButton *pushButtonLoad;
    QPushButton *pushButtonSave;
    QLabel *labelStatus;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *MessageListDialog)
    {
        if (MessageListDialog->objectName().isEmpty())
            MessageListDialog->setObjectName(QString::fromUtf8("MessageListDialog"));
        MessageListDialog->resize(350, 400);
        verticalLayout = new QVBoxLayout(MessageListDialog);
        verticalLayout->setSpacing(4);
        verticalLayout->setContentsMargins(4, 4, 4, 4);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tableView = new QTableView(MessageListDialog);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setProperty("showDropIndicator", QVariant(false));
        tableView->setAlternatingRowColors(true);
        tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableView->setCornerButtonEnabled(false);
        tableView->horizontalHeader()->setDefaultSectionSize(50);
        tableView->horizontalHeader()->setHighlightSections(false);
        tableView->horizontalHeader()->setStretchLastSection(true);
        tableView->verticalHeader()->setHighlightSections(false);

        verticalLayout->addWidget(tableView);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(4);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButtonInsertNew = new QPushButton(MessageListDialog);
        pushButtonInsertNew->setObjectName(QString::fromUtf8("pushButtonInsertNew"));

        gridLayout->addWidget(pushButtonInsertNew, 0, 0, 1, 1);

        pushButtonAppendNew = new QPushButton(MessageListDialog);
        pushButtonAppendNew->setObjectName(QString::fromUtf8("pushButtonAppendNew"));

        gridLayout->addWidget(pushButtonAppendNew, 0, 1, 1, 1);

        pushButtonDelete = new QPushButton(MessageListDialog);
        pushButtonDelete->setObjectName(QString::fromUtf8("pushButtonDelete"));

        gridLayout->addWidget(pushButtonDelete, 0, 2, 1, 1);

        pushButtonSend = new QPushButton(MessageListDialog);
        pushButtonSend->setObjectName(QString::fromUtf8("pushButtonSend"));

        gridLayout->addWidget(pushButtonSend, 1, 0, 1, 1);

        pushButtonReceive = new QPushButton(MessageListDialog);
        pushButtonReceive->setObjectName(QString::fromUtf8("pushButtonReceive"));

        gridLayout->addWidget(pushButtonReceive, 1, 1, 1, 1);

        pushButtonLoad = new QPushButton(MessageListDialog);
        pushButtonLoad->setObjectName(QString::fromUtf8("pushButtonLoad"));

        gridLayout->addWidget(pushButtonLoad, 2, 0, 1, 1);

        pushButtonSave = new QPushButton(MessageListDialog);
        pushButtonSave->setObjectName(QString::fromUtf8("pushButtonSave"));

        gridLayout->addWidget(pushButtonSave, 2, 1, 1, 1);

        labelStatus = new QLabel(MessageListDialog);
        labelStatus->setObjectName(QString::fromUtf8("labelStatus"));

        gridLayout->addWidget(labelStatus, 1, 2, 1, 1);


        verticalLayout->addLayout(gridLayout);

        buttonBox = new QDialogButtonBox(MessageListDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        verticalLayout->addWidget(buttonBox);

        QWidget::setTabOrder(buttonBox, pushButtonInsertNew);
        QWidget::setTabOrder(pushButtonInsertNew, pushButtonAppendNew);
        QWidget::setTabOrder(pushButtonAppendNew, pushButtonDelete);
        QWidget::setTabOrder(pushButtonDelete, pushButtonSend);
        QWidget::setTabOrder(pushButtonSend, pushButtonReceive);
        QWidget::setTabOrder(pushButtonReceive, pushButtonLoad);
        QWidget::setTabOrder(pushButtonLoad, pushButtonSave);
        QWidget::setTabOrder(pushButtonSave, tableView);

        retranslateUi(MessageListDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), MessageListDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), MessageListDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(MessageListDialog);
    } // setupUi

    void retranslateUi(QDialog *MessageListDialog)
    {
        MessageListDialog->setWindowTitle(QCoreApplication::translate("MessageListDialog", "Message List", nullptr));
        pushButtonInsertNew->setText(QCoreApplication::translate("MessageListDialog", "Insert new", nullptr));
        pushButtonAppendNew->setText(QCoreApplication::translate("MessageListDialog", "Append new", nullptr));
        pushButtonDelete->setText(QCoreApplication::translate("MessageListDialog", "Delete", nullptr));
        pushButtonSend->setText(QCoreApplication::translate("MessageListDialog", "Send", nullptr));
        pushButtonReceive->setText(QCoreApplication::translate("MessageListDialog", "Receive", nullptr));
        pushButtonLoad->setText(QCoreApplication::translate("MessageListDialog", "Load", nullptr));
        pushButtonSave->setText(QCoreApplication::translate("MessageListDialog", "Save", nullptr));
        labelStatus->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MessageListDialog: public Ui_MessageListDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MESSAGELISTDIALOG_H

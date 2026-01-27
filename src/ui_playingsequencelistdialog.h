/********************************************************************************
** Form generated from reading UI file 'playingsequencelistdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.15
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLAYINGSEQUENCELISTDIALOG_H
#define UI_PLAYINGSEQUENCELISTDIALOG_H

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

class Ui_PlayingSequenceListDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTableView *tableView;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButtonInsertNew;
    QPushButton *pushButtonAppendNew;
    QPushButton *pushButtonDelete;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *PlayingSequenceListDialog)
    {
        if (PlayingSequenceListDialog->objectName().isEmpty())
            PlayingSequenceListDialog->setObjectName(QString::fromUtf8("PlayingSequenceListDialog"));
        PlayingSequenceListDialog->resize(350, 400);
        verticalLayout = new QVBoxLayout(PlayingSequenceListDialog);
        verticalLayout->setContentsMargins(4, 4, 4, 4);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tableView = new QTableView(PlayingSequenceListDialog);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setProperty("showDropIndicator", QVariant(false));
        tableView->setAlternatingRowColors(true);
        tableView->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableView->setCornerButtonEnabled(false);
        tableView->horizontalHeader()->setHighlightSections(false);
        tableView->horizontalHeader()->setStretchLastSection(true);
        tableView->verticalHeader()->setHighlightSections(false);

        verticalLayout->addWidget(tableView);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(4);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButtonInsertNew = new QPushButton(PlayingSequenceListDialog);
        pushButtonInsertNew->setObjectName(QString::fromUtf8("pushButtonInsertNew"));

        horizontalLayout->addWidget(pushButtonInsertNew);

        pushButtonAppendNew = new QPushButton(PlayingSequenceListDialog);
        pushButtonAppendNew->setObjectName(QString::fromUtf8("pushButtonAppendNew"));

        horizontalLayout->addWidget(pushButtonAppendNew);

        pushButtonDelete = new QPushButton(PlayingSequenceListDialog);
        pushButtonDelete->setObjectName(QString::fromUtf8("pushButtonDelete"));

        horizontalLayout->addWidget(pushButtonDelete);


        verticalLayout->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(PlayingSequenceListDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        verticalLayout->addWidget(buttonBox);

        QWidget::setTabOrder(buttonBox, pushButtonInsertNew);
        QWidget::setTabOrder(pushButtonInsertNew, pushButtonAppendNew);
        QWidget::setTabOrder(pushButtonAppendNew, pushButtonDelete);
        QWidget::setTabOrder(pushButtonDelete, tableView);

        retranslateUi(PlayingSequenceListDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), PlayingSequenceListDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), PlayingSequenceListDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(PlayingSequenceListDialog);
    } // setupUi

    void retranslateUi(QDialog *PlayingSequenceListDialog)
    {
        PlayingSequenceListDialog->setWindowTitle(QCoreApplication::translate("PlayingSequenceListDialog", "Playing Sequence List", nullptr));
        pushButtonInsertNew->setText(QCoreApplication::translate("PlayingSequenceListDialog", "Insert new", nullptr));
        pushButtonAppendNew->setText(QCoreApplication::translate("PlayingSequenceListDialog", "Append new", nullptr));
        pushButtonDelete->setText(QCoreApplication::translate("PlayingSequenceListDialog", "Delete", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PlayingSequenceListDialog: public Ui_PlayingSequenceListDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLAYINGSEQUENCELISTDIALOG_H

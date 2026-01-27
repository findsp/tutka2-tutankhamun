/********************************************************************************
** Form generated from reading UI file 'playingsequencedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.15
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLAYINGSEQUENCEDIALOG_H
#define UI_PLAYINGSEQUENCEDIALOG_H

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

class Ui_PlayingSequenceDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTableView *tableView;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButtonInsert;
    QPushButton *pushButtonAppend;
    QPushButton *pushButtonDelete;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *PlayingSequenceDialog)
    {
        if (PlayingSequenceDialog->objectName().isEmpty())
            PlayingSequenceDialog->setObjectName(QString::fromUtf8("PlayingSequenceDialog"));
        PlayingSequenceDialog->resize(350, 400);
        verticalLayout = new QVBoxLayout(PlayingSequenceDialog);
        verticalLayout->setContentsMargins(4, 4, 4, 4);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tableView = new QTableView(PlayingSequenceDialog);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setProperty("showDropIndicator", QVariant(false));
        tableView->setAlternatingRowColors(true);
        tableView->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableView->setCornerButtonEnabled(false);
        tableView->horizontalHeader()->setDefaultSectionSize(90);
        tableView->horizontalHeader()->setHighlightSections(false);
        tableView->horizontalHeader()->setStretchLastSection(true);
        tableView->verticalHeader()->setHighlightSections(false);

        verticalLayout->addWidget(tableView);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(4);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButtonInsert = new QPushButton(PlayingSequenceDialog);
        pushButtonInsert->setObjectName(QString::fromUtf8("pushButtonInsert"));

        horizontalLayout->addWidget(pushButtonInsert);

        pushButtonAppend = new QPushButton(PlayingSequenceDialog);
        pushButtonAppend->setObjectName(QString::fromUtf8("pushButtonAppend"));

        horizontalLayout->addWidget(pushButtonAppend);

        pushButtonDelete = new QPushButton(PlayingSequenceDialog);
        pushButtonDelete->setObjectName(QString::fromUtf8("pushButtonDelete"));

        horizontalLayout->addWidget(pushButtonDelete);


        verticalLayout->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(PlayingSequenceDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        verticalLayout->addWidget(buttonBox);

        QWidget::setTabOrder(buttonBox, pushButtonInsert);
        QWidget::setTabOrder(pushButtonInsert, pushButtonAppend);
        QWidget::setTabOrder(pushButtonAppend, pushButtonDelete);
        QWidget::setTabOrder(pushButtonDelete, tableView);

        retranslateUi(PlayingSequenceDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), PlayingSequenceDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), PlayingSequenceDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(PlayingSequenceDialog);
    } // setupUi

    void retranslateUi(QDialog *PlayingSequenceDialog)
    {
        PlayingSequenceDialog->setWindowTitle(QCoreApplication::translate("PlayingSequenceDialog", "Playing Sequence 1/1", nullptr));
        pushButtonInsert->setText(QCoreApplication::translate("PlayingSequenceDialog", "Insert", nullptr));
        pushButtonAppend->setText(QCoreApplication::translate("PlayingSequenceDialog", "Append", nullptr));
        pushButtonDelete->setText(QCoreApplication::translate("PlayingSequenceDialog", "Delete", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PlayingSequenceDialog: public Ui_PlayingSequenceDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLAYINGSEQUENCEDIALOG_H

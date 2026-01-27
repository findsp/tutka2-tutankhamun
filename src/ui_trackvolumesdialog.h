/********************************************************************************
** Form generated from reading UI file 'trackvolumesdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.15
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRACKVOLUMESDIALOG_H
#define UI_TRACKVOLUMESDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TrackVolumesDialog
{
public:
    QVBoxLayout *verticalLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QHBoxLayout *horizontalLayout_2;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *TrackVolumesDialog)
    {
        if (TrackVolumesDialog->objectName().isEmpty())
            TrackVolumesDialog->setObjectName(QString::fromUtf8("TrackVolumesDialog"));
        TrackVolumesDialog->resize(250, 350);
        verticalLayout = new QVBoxLayout(TrackVolumesDialog);
        verticalLayout->setSpacing(4);
        verticalLayout->setContentsMargins(4, 4, 4, 4);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        scrollArea = new QScrollArea(TrackVolumesDialog);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setFrameShadow(QFrame::Plain);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 238, 310));
        horizontalLayout_2 = new QHBoxLayout(scrollAreaWidgetContents);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

        buttonBox = new QDialogButtonBox(TrackVolumesDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(TrackVolumesDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), TrackVolumesDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), TrackVolumesDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(TrackVolumesDialog);
    } // setupUi

    void retranslateUi(QDialog *TrackVolumesDialog)
    {
        TrackVolumesDialog->setWindowTitle(QCoreApplication::translate("TrackVolumesDialog", "Track Volumes", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TrackVolumesDialog: public Ui_TrackVolumesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRACKVOLUMESDIALOG_H

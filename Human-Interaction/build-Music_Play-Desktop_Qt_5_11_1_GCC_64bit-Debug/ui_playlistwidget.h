/********************************************************************************
** Form generated from reading UI file 'playlistwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLAYLISTWIDGET_H
#define UI_PLAYLISTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListWidget>

QT_BEGIN_NAMESPACE

class Ui_PlayListWidget
{
public:
    QHBoxLayout *horizontalLayout;
    QListWidget *listWidget;

    void setupUi(QDialog *PlayListWidget)
    {
        if (PlayListWidget->objectName().isEmpty())
            PlayListWidget->setObjectName(QStringLiteral("PlayListWidget"));
        PlayListWidget->resize(400, 300);
        horizontalLayout = new QHBoxLayout(PlayListWidget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        listWidget = new QListWidget(PlayListWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));

        horizontalLayout->addWidget(listWidget);


        retranslateUi(PlayListWidget);

        QMetaObject::connectSlotsByName(PlayListWidget);
    } // setupUi

    void retranslateUi(QDialog *PlayListWidget)
    {
        PlayListWidget->setWindowTitle(QApplication::translate("PlayListWidget", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PlayListWidget: public Ui_PlayListWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLAYLISTWIDGET_H

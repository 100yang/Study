/********************************************************************************
** Form generated from reading UI file 'showlyric.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOWLYRIC_H
#define UI_SHOWLYRIC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ShowLyric
{
public:

    void setupUi(QWidget *ShowLyric)
    {
        if (ShowLyric->objectName().isEmpty())
            ShowLyric->setObjectName(QStringLiteral("ShowLyric"));
        ShowLyric->resize(400, 300);

        retranslateUi(ShowLyric);

        QMetaObject::connectSlotsByName(ShowLyric);
    } // setupUi

    void retranslateUi(QWidget *ShowLyric)
    {
        ShowLyric->setWindowTitle(QApplication::translate("ShowLyric", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ShowLyric: public Ui_ShowLyric {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOWLYRIC_H

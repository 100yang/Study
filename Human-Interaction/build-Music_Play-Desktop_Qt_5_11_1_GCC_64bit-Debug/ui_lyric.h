/********************************************************************************
** Form generated from reading UI file 'lyric.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LYRIC_H
#define UI_LYRIC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Lyric
{
public:

    void setupUi(QWidget *Lyric)
    {
        if (Lyric->objectName().isEmpty())
            Lyric->setObjectName(QStringLiteral("Lyric"));
        Lyric->resize(658, 394);

        retranslateUi(Lyric);

        QMetaObject::connectSlotsByName(Lyric);
    } // setupUi

    void retranslateUi(QWidget *Lyric)
    {
        Lyric->setWindowTitle(QApplication::translate("Lyric", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Lyric: public Ui_Lyric {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LYRIC_H

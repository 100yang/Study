/********************************************************************************
** Form generated from reading UI file 'findmvwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINDMVWIDGET_H
#define UI_FINDMVWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FindmvWidget
{
public:

    void setupUi(QWidget *FindmvWidget)
    {
        if (FindmvWidget->objectName().isEmpty())
            FindmvWidget->setObjectName(QStringLiteral("FindmvWidget"));
        FindmvWidget->resize(400, 300);

        retranslateUi(FindmvWidget);

        QMetaObject::connectSlotsByName(FindmvWidget);
    } // setupUi

    void retranslateUi(QWidget *FindmvWidget)
    {
        FindmvWidget->setWindowTitle(QApplication::translate("FindmvWidget", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FindmvWidget: public Ui_FindmvWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINDMVWIDGET_H

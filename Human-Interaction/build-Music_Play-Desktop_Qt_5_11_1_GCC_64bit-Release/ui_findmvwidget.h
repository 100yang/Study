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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FindmvWidget
{
public:
    QHBoxLayout *horizontalLayout;
    QWidget *widget;

    void setupUi(QWidget *FindmvWidget)
    {
        if (FindmvWidget->objectName().isEmpty())
            FindmvWidget->setObjectName(QStringLiteral("FindmvWidget"));
        FindmvWidget->resize(718, 354);
        FindmvWidget->setMinimumSize(QSize(718, 354));
        FindmvWidget->setMaximumSize(QSize(718, 354));
        horizontalLayout = new QHBoxLayout(FindmvWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        widget = new QWidget(FindmvWidget);
        widget->setObjectName(QStringLiteral("widget"));

        horizontalLayout->addWidget(widget);


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

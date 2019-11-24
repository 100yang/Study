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
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FindmvWidget
{
public:
    QHBoxLayout *horizontalLayout;
    QLabel *label;

    void setupUi(QWidget *FindmvWidget)
    {
        if (FindmvWidget->objectName().isEmpty())
            FindmvWidget->setObjectName(QStringLiteral("FindmvWidget"));
        FindmvWidget->resize(400, 300);
        horizontalLayout = new QHBoxLayout(FindmvWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(FindmvWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QStringLiteral("font: 75 italic 28pt \"DejaVu Sans\";"));

        horizontalLayout->addWidget(label);


        retranslateUi(FindmvWidget);

        QMetaObject::connectSlotsByName(FindmvWidget);
    } // setupUi

    void retranslateUi(QWidget *FindmvWidget)
    {
        FindmvWidget->setWindowTitle(QApplication::translate("FindmvWidget", "Form", nullptr));
        label->setText(QApplication::translate("FindmvWidget", "\346\212\261\346\255\211\357\274\214\346\255\244\345\212\237\350\203\275\350\277\230\346\262\241\345\256\214\346\210\220\n"
"\357\274\214\346\225\254\350\257\267\346\234\237\345\276\205", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FindmvWidget: public Ui_FindmvWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINDMVWIDGET_H

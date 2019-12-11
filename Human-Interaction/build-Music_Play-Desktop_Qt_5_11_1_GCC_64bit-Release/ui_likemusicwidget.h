/********************************************************************************
** Form generated from reading UI file 'likemusicwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LIKEMUSICWIDGET_H
#define UI_LIKEMUSICWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LikeMusicWidget
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QTableWidget *tableWidget;

    void setupUi(QWidget *LikeMusicWidget)
    {
        if (LikeMusicWidget->objectName().isEmpty())
            LikeMusicWidget->setObjectName(QStringLiteral("LikeMusicWidget"));
        LikeMusicWidget->resize(718, 354);
        LikeMusicWidget->setMinimumSize(QSize(718, 354));
        LikeMusicWidget->setMaximumSize(QSize(718, 354));
        LikeMusicWidget->setAutoFillBackground(true);
        verticalLayout = new QVBoxLayout(LikeMusicWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(LikeMusicWidget);
        widget->setObjectName(QStringLiteral("widget"));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QStringLiteral("font: 75 18pt \"DejaVu Sans Mono\";"));
        label->setScaledContents(true);

        horizontalLayout_2->addWidget(label);


        verticalLayout->addWidget(widget);

        tableWidget = new QTableWidget(LikeMusicWidget);
        if (tableWidget->columnCount() < 6)
            tableWidget->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setShowGrid(false);
        tableWidget->horizontalHeader()->setDefaultSectionSize(119);
        tableWidget->verticalHeader()->setVisible(false);

        verticalLayout->addWidget(tableWidget);


        retranslateUi(LikeMusicWidget);

        QMetaObject::connectSlotsByName(LikeMusicWidget);
    } // setupUi

    void retranslateUi(QWidget *LikeMusicWidget)
    {
        LikeMusicWidget->setWindowTitle(QApplication::translate("LikeMusicWidget", "Form", nullptr));
        label->setText(QApplication::translate("LikeMusicWidget", "\346\210\221\345\226\234\346\254\242\347\232\204\351\237\263\344\271\220", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem->setText(QApplication::translate("LikeMusicWidget", "\346\223\215\344\275\234", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem1->setText(QApplication::translate("LikeMusicWidget", "\346\255\214\346\233\262\345\220\215\347\247\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem2->setText(QApplication::translate("LikeMusicWidget", "\346\255\214\346\211\213", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem3->setText(QApplication::translate("LikeMusicWidget", "\344\270\223\350\276\221", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem4->setText(QApplication::translate("LikeMusicWidget", "\346\227\266\351\225\277", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LikeMusicWidget: public Ui_LikeMusicWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LIKEMUSICWIDGET_H

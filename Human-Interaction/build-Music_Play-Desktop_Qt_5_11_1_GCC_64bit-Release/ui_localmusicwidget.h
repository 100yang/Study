/********************************************************************************
** Form generated from reading UI file 'localmusicwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOCALMUSICWIDGET_H
#define UI_LOCALMUSICWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LocalMusicWidget
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QPushButton *open;
    QSpacerItem *horizontalSpacer;
    QTableWidget *tableWidget;

    void setupUi(QWidget *LocalMusicWidget)
    {
        if (LocalMusicWidget->objectName().isEmpty())
            LocalMusicWidget->setObjectName(QStringLiteral("LocalMusicWidget"));
        LocalMusicWidget->resize(718, 354);
        LocalMusicWidget->setMinimumSize(QSize(718, 354));
        LocalMusicWidget->setMaximumSize(QSize(718, 354));
        verticalLayout = new QVBoxLayout(LocalMusicWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(LocalMusicWidget);
        widget->setObjectName(QStringLiteral("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QStringLiteral("font: 75 16pt \"DejaVu Serif\";"));

        horizontalLayout->addWidget(label);

        open = new QPushButton(widget);
        open->setObjectName(QStringLiteral("open"));

        horizontalLayout->addWidget(open);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addWidget(widget);

        tableWidget = new QTableWidget(LocalMusicWidget);
        if (tableWidget->columnCount() < 5)
            tableWidget->setColumnCount(5);
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
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setShowGrid(false);
        tableWidget->horizontalHeader()->setDefaultSectionSize(143);
        tableWidget->verticalHeader()->setVisible(false);

        verticalLayout->addWidget(tableWidget);


        retranslateUi(LocalMusicWidget);

        QMetaObject::connectSlotsByName(LocalMusicWidget);
    } // setupUi

    void retranslateUi(QWidget *LocalMusicWidget)
    {
        LocalMusicWidget->setWindowTitle(QApplication::translate("LocalMusicWidget", "Form", nullptr));
        label->setText(QApplication::translate("LocalMusicWidget", "\346\234\254\345\234\260\351\237\263\344\271\220", nullptr));
        open->setText(QApplication::translate("LocalMusicWidget", "\351\200\211\346\213\251\347\233\256\345\275\225", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem->setText(QApplication::translate("LocalMusicWidget", "\346\255\214\346\233\262\345\220\215\347\247\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem1->setText(QApplication::translate("LocalMusicWidget", "\346\255\214\346\211\213", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem2->setText(QApplication::translate("LocalMusicWidget", "\346\227\266\351\225\277", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem3->setText(QApplication::translate("LocalMusicWidget", "\345\244\247\345\260\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LocalMusicWidget: public Ui_LocalMusicWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOCALMUSICWIDGET_H

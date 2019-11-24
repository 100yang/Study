/********************************************************************************
** Form generated from reading UI file 'findmusicwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINDMUSICWIDGET_H
#define UI_FINDMUSICWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <displayresult.h>

QT_BEGIN_NAMESPACE

class Ui_FindMusicWidget
{
public:
    QHBoxLayout *horizontalLayout_3;
    QTabWidget *tabWidget;
    QWidget *Recommend;
    QWidget *MusicTable;
    QWidget *TVWidget;
    QWidget *RankWidget;
    QWidget *SingerWidget;
    QWidget *NewMusicWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer_3;
    QTabWidget *NewSongWidget;
    DisplayResult *ALL;
    DisplayResult *China;
    DisplayResult *English;
    DisplayResult *Korea;
    DisplayResult *Japan;

    void setupUi(QWidget *FindMusicWidget)
    {
        if (FindMusicWidget->objectName().isEmpty())
            FindMusicWidget->setObjectName(QStringLiteral("FindMusicWidget"));
        FindMusicWidget->resize(718, 354);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(FindMusicWidget->sizePolicy().hasHeightForWidth());
        FindMusicWidget->setSizePolicy(sizePolicy);
        FindMusicWidget->setMinimumSize(QSize(718, 354));
        FindMusicWidget->setMaximumSize(QSize(718, 354));
        horizontalLayout_3 = new QHBoxLayout(FindMusicWidget);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        tabWidget = new QTabWidget(FindMusicWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setAutoFillBackground(true);
        tabWidget->setStyleSheet(QLatin1String("QTabWidget::pane{\n"
"	border:none;\n"
"}\n"
"\n"
"QTabBar::tab{\n"
"	width:120px;\n"
"}"));
        tabWidget->setTabPosition(QTabWidget::North);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setElideMode(Qt::ElideNone);
        tabWidget->setUsesScrollButtons(false);
        tabWidget->setDocumentMode(false);
        tabWidget->setTabsClosable(false);
        tabWidget->setMovable(false);
        tabWidget->setTabBarAutoHide(true);
        Recommend = new QWidget();
        Recommend->setObjectName(QStringLiteral("Recommend"));
        tabWidget->addTab(Recommend, QString());
        MusicTable = new QWidget();
        MusicTable->setObjectName(QStringLiteral("MusicTable"));
        tabWidget->addTab(MusicTable, QString());
        TVWidget = new QWidget();
        TVWidget->setObjectName(QStringLiteral("TVWidget"));
        tabWidget->addTab(TVWidget, QString());
        RankWidget = new QWidget();
        RankWidget->setObjectName(QStringLiteral("RankWidget"));
        tabWidget->addTab(RankWidget, QString());
        SingerWidget = new QWidget();
        SingerWidget->setObjectName(QStringLiteral("SingerWidget"));
        tabWidget->addTab(SingerWidget, QString());
        NewMusicWidget = new QWidget();
        NewMusicWidget->setObjectName(QStringLiteral("NewMusicWidget"));
        horizontalLayout = new QHBoxLayout(NewMusicWidget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        widget = new QWidget(NewMusicWidget);
        widget->setObjectName(QStringLiteral("widget"));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(168, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout_2->addWidget(pushButton);

        horizontalSpacer_2 = new QSpacerItem(169, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout_2->addWidget(pushButton_2);

        horizontalSpacer_3 = new QSpacerItem(168, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);


        verticalLayout->addWidget(widget);

        NewSongWidget = new QTabWidget(NewMusicWidget);
        NewSongWidget->setObjectName(QStringLiteral("NewSongWidget"));
        ALL = new DisplayResult();
        ALL->setObjectName(QStringLiteral("ALL"));
        NewSongWidget->addTab(ALL, QString());
        China = new DisplayResult();
        China->setObjectName(QStringLiteral("China"));
        NewSongWidget->addTab(China, QString());
        English = new DisplayResult();
        English->setObjectName(QStringLiteral("English"));
        NewSongWidget->addTab(English, QString());
        Korea = new DisplayResult();
        Korea->setObjectName(QStringLiteral("Korea"));
        NewSongWidget->addTab(Korea, QString());
        Japan = new DisplayResult();
        Japan->setObjectName(QStringLiteral("Japan"));
        NewSongWidget->addTab(Japan, QString());

        verticalLayout->addWidget(NewSongWidget);


        horizontalLayout->addLayout(verticalLayout);

        tabWidget->addTab(NewMusicWidget, QString());

        horizontalLayout_3->addWidget(tabWidget);


        retranslateUi(FindMusicWidget);

        tabWidget->setCurrentIndex(5);
        NewSongWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(FindMusicWidget);
    } // setupUi

    void retranslateUi(QWidget *FindMusicWidget)
    {
        FindMusicWidget->setWindowTitle(QApplication::translate("FindMusicWidget", "Form", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Recommend), QApplication::translate("FindMusicWidget", "\344\270\252\346\200\247\346\216\250\350\215\220", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(MusicTable), QApplication::translate("FindMusicWidget", "\346\255\214\345\215\225", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(TVWidget), QApplication::translate("FindMusicWidget", "\344\270\273\346\222\255\347\224\265\345\217\260", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(RankWidget), QApplication::translate("FindMusicWidget", "\346\216\222\350\241\214\346\246\234", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(SingerWidget), QApplication::translate("FindMusicWidget", "\346\255\214\346\211\213", nullptr));
        pushButton->setText(QApplication::translate("FindMusicWidget", "\346\226\260\346\255\214\344\270\212\346\236\266", nullptr));
        pushButton_2->setText(QApplication::translate("FindMusicWidget", " \346\226\260\347\242\237\344\270\212\346\236\266", nullptr));
        NewSongWidget->setTabText(NewSongWidget->indexOf(ALL), QApplication::translate("FindMusicWidget", "\345\205\250\351\203\250", nullptr));
        NewSongWidget->setTabText(NewSongWidget->indexOf(China), QApplication::translate("FindMusicWidget", "\345\215\216\350\257\255", nullptr));
        NewSongWidget->setTabText(NewSongWidget->indexOf(English), QApplication::translate("FindMusicWidget", "\346\254\247\347\276\216", nullptr));
        NewSongWidget->setTabText(NewSongWidget->indexOf(Korea), QApplication::translate("FindMusicWidget", "\351\237\251\345\233\275", nullptr));
        NewSongWidget->setTabText(NewSongWidget->indexOf(Japan), QApplication::translate("FindMusicWidget", "\346\227\245\346\234\254", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(NewMusicWidget), QApplication::translate("FindMusicWidget", "\346\234\200\346\226\260\351\237\263\344\271\220", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FindMusicWidget: public Ui_FindMusicWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINDMUSICWIDGET_H

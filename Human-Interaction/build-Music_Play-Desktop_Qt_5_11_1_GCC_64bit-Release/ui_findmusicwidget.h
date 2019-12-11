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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
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
    QTabWidget *BaseWidget;
    DisplayResult *Recommend;
    QWidget *MusicTable;
    QGridLayout *gridLayout_2;
    QWidget *widget_6;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_3;
    QLabel *label_4;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLabel *label_2;
    QWidget *TVWidget;
    QWidget *RankWidget;
    QHBoxLayout *horizontalLayout_4;
    QTabWidget *InRankWidget;
    DisplayResult *NewSongRank;
    DisplayResult *HotSongRank;
    DisplayResult *BillboardRank;
    DisplayResult *MelonRank;
    DisplayResult *OriconRank;
    QWidget *SingerWidget;
    QHBoxLayout *horizontalLayout_5;
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
        BaseWidget = new QTabWidget(FindMusicWidget);
        BaseWidget->setObjectName(QStringLiteral("BaseWidget"));
        BaseWidget->setAutoFillBackground(true);
        BaseWidget->setStyleSheet(QLatin1String("QTabWidget::pane{\n"
"	border:none;\n"
"}\n"
"\n"
"QTabBar::tab{\n"
"	width:120px;\n"
"}"));
        BaseWidget->setTabPosition(QTabWidget::North);
        BaseWidget->setTabShape(QTabWidget::Rounded);
        BaseWidget->setElideMode(Qt::ElideNone);
        BaseWidget->setUsesScrollButtons(false);
        BaseWidget->setDocumentMode(false);
        BaseWidget->setTabsClosable(false);
        BaseWidget->setMovable(false);
        BaseWidget->setTabBarAutoHide(true);
        Recommend = new DisplayResult();
        Recommend->setObjectName(QStringLiteral("Recommend"));
        BaseWidget->addTab(Recommend, QString());
        MusicTable = new QWidget();
        MusicTable->setObjectName(QStringLiteral("MusicTable"));
        gridLayout_2 = new QGridLayout(MusicTable);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        widget_6 = new QWidget(MusicTable);
        widget_6->setObjectName(QStringLiteral("widget_6"));
        verticalLayout_7 = new QVBoxLayout(widget_6);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        label_3 = new QLabel(widget_6);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setScaledContents(true);

        verticalLayout_7->addWidget(label_3);

        label_4 = new QLabel(widget_6);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMinimumSize(QSize(0, 15));
        label_4->setMaximumSize(QSize(16777215, 15));
        label_4->setScaledContents(true);

        verticalLayout_7->addWidget(label_4);


        gridLayout_2->addWidget(widget_6, 0, 1, 1, 1);

        widget_2 = new QWidget(MusicTable);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        verticalLayout_2 = new QVBoxLayout(widget_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label = new QLabel(widget_2);
        label->setObjectName(QStringLiteral("label"));
        label->setScaledContents(true);

        verticalLayout_2->addWidget(label);

        label_2 = new QLabel(widget_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(0, 15));
        label_2->setMaximumSize(QSize(16777215, 15));
        label_2->setScaledContents(true);

        verticalLayout_2->addWidget(label_2);


        gridLayout_2->addWidget(widget_2, 0, 0, 1, 1);

        BaseWidget->addTab(MusicTable, QString());
        TVWidget = new QWidget();
        TVWidget->setObjectName(QStringLiteral("TVWidget"));
        BaseWidget->addTab(TVWidget, QString());
        RankWidget = new QWidget();
        RankWidget->setObjectName(QStringLiteral("RankWidget"));
        horizontalLayout_4 = new QHBoxLayout(RankWidget);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        InRankWidget = new QTabWidget(RankWidget);
        InRankWidget->setObjectName(QStringLiteral("InRankWidget"));
        NewSongRank = new DisplayResult();
        NewSongRank->setObjectName(QStringLiteral("NewSongRank"));
        InRankWidget->addTab(NewSongRank, QString());
        HotSongRank = new DisplayResult();
        HotSongRank->setObjectName(QStringLiteral("HotSongRank"));
        InRankWidget->addTab(HotSongRank, QString());
        BillboardRank = new DisplayResult();
        BillboardRank->setObjectName(QStringLiteral("BillboardRank"));
        InRankWidget->addTab(BillboardRank, QString());
        MelonRank = new DisplayResult();
        MelonRank->setObjectName(QStringLiteral("MelonRank"));
        InRankWidget->addTab(MelonRank, QString());
        OriconRank = new DisplayResult();
        OriconRank->setObjectName(QStringLiteral("OriconRank"));
        InRankWidget->addTab(OriconRank, QString());

        horizontalLayout_4->addWidget(InRankWidget);

        BaseWidget->addTab(RankWidget, QString());
        SingerWidget = new QWidget();
        SingerWidget->setObjectName(QStringLiteral("SingerWidget"));
        horizontalLayout_5 = new QHBoxLayout(SingerWidget);
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        BaseWidget->addTab(SingerWidget, QString());
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

        BaseWidget->addTab(NewMusicWidget, QString());

        horizontalLayout_3->addWidget(BaseWidget);


        retranslateUi(FindMusicWidget);

        BaseWidget->setCurrentIndex(5);
        InRankWidget->setCurrentIndex(4);
        NewSongWidget->setCurrentIndex(4);


        QMetaObject::connectSlotsByName(FindMusicWidget);
    } // setupUi

    void retranslateUi(QWidget *FindMusicWidget)
    {
        FindMusicWidget->setWindowTitle(QApplication::translate("FindMusicWidget", "Form", nullptr));
        BaseWidget->setTabText(BaseWidget->indexOf(Recommend), QApplication::translate("FindMusicWidget", "\344\270\252\346\200\247\346\216\250\350\215\220", nullptr));
        label_3->setText(QApplication::translate("FindMusicWidget", "TextLabel", nullptr));
        label_4->setText(QApplication::translate("FindMusicWidget", "TextLabel", nullptr));
        label->setText(QApplication::translate("FindMusicWidget", "TextLabel", nullptr));
        label_2->setText(QApplication::translate("FindMusicWidget", "TextLabel", nullptr));
        BaseWidget->setTabText(BaseWidget->indexOf(MusicTable), QApplication::translate("FindMusicWidget", "\346\255\214\345\215\225", nullptr));
        BaseWidget->setTabText(BaseWidget->indexOf(TVWidget), QApplication::translate("FindMusicWidget", "\344\270\273\346\222\255\347\224\265\345\217\260", nullptr));
        InRankWidget->setTabText(InRankWidget->indexOf(NewSongRank), QApplication::translate("FindMusicWidget", "\346\226\260\346\255\214\346\246\234", nullptr));
        InRankWidget->setTabText(InRankWidget->indexOf(HotSongRank), QApplication::translate("FindMusicWidget", "\347\203\255\346\255\214\346\246\234", nullptr));
        InRankWidget->setTabText(InRankWidget->indexOf(BillboardRank), QApplication::translate("FindMusicWidget", "Billboard\345\221\250\346\246\234", nullptr));
        InRankWidget->setTabText(InRankWidget->indexOf(MelonRank), QApplication::translate("FindMusicWidget", "Melon\345\221\250\346\246\234", nullptr));
        InRankWidget->setTabText(InRankWidget->indexOf(OriconRank), QApplication::translate("FindMusicWidget", "Oricon\345\221\250\346\246\234", nullptr));
        BaseWidget->setTabText(BaseWidget->indexOf(RankWidget), QApplication::translate("FindMusicWidget", "\346\216\222\350\241\214\346\246\234", nullptr));
        BaseWidget->setTabText(BaseWidget->indexOf(SingerWidget), QApplication::translate("FindMusicWidget", "\346\255\214\346\211\213", nullptr));
        pushButton->setText(QApplication::translate("FindMusicWidget", "\346\226\260\346\255\214\344\270\212\346\236\266", nullptr));
        pushButton_2->setText(QApplication::translate("FindMusicWidget", " \346\226\260\347\242\237\344\270\212\346\236\266", nullptr));
        NewSongWidget->setTabText(NewSongWidget->indexOf(ALL), QApplication::translate("FindMusicWidget", "\345\205\250\351\203\250", nullptr));
        NewSongWidget->setTabText(NewSongWidget->indexOf(China), QApplication::translate("FindMusicWidget", "\345\215\216\350\257\255", nullptr));
        NewSongWidget->setTabText(NewSongWidget->indexOf(English), QApplication::translate("FindMusicWidget", "\346\254\247\347\276\216", nullptr));
        NewSongWidget->setTabText(NewSongWidget->indexOf(Korea), QApplication::translate("FindMusicWidget", "\351\237\251\345\233\275", nullptr));
        NewSongWidget->setTabText(NewSongWidget->indexOf(Japan), QApplication::translate("FindMusicWidget", "\346\227\245\346\234\254", nullptr));
        BaseWidget->setTabText(BaseWidget->indexOf(NewMusicWidget), QApplication::translate("FindMusicWidget", "\346\234\200\346\226\260\351\237\263\344\271\220", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FindMusicWidget: public Ui_FindMusicWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINDMUSICWIDGET_H

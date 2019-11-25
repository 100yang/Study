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
    QWidget *widget_8;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_14;
    QLabel *label_13;
    QWidget *widget_9;
    QVBoxLayout *verticalLayout_10;
    QLabel *label_16;
    QLabel *label_15;
    QWidget *widget_6;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_10;
    QLabel *label_9;
    QWidget *widget_4;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_6;
    QLabel *label_5;
    QWidget *widget_5;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_12;
    QLabel *label_11;
    QWidget *widget_10;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_18;
    QLabel *label_17;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_4;
    QLabel *label_3;
    QWidget *widget_7;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_8;
    QLabel *label_7;
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
        widget_8 = new QWidget(MusicTable);
        widget_8->setObjectName(QStringLiteral("widget_8"));
        verticalLayout_9 = new QVBoxLayout(widget_8);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        label_14 = new QLabel(widget_8);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setScaledContents(true);

        verticalLayout_9->addWidget(label_14);

        label_13 = new QLabel(widget_8);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setMinimumSize(QSize(0, 15));
        label_13->setMaximumSize(QSize(16777215, 15));
        label_13->setScaledContents(true);

        verticalLayout_9->addWidget(label_13);


        gridLayout_2->addWidget(widget_8, 2, 0, 1, 1);

        widget_9 = new QWidget(MusicTable);
        widget_9->setObjectName(QStringLiteral("widget_9"));
        verticalLayout_10 = new QVBoxLayout(widget_9);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        label_16 = new QLabel(widget_9);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setScaledContents(true);

        verticalLayout_10->addWidget(label_16);

        label_15 = new QLabel(widget_9);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setMinimumSize(QSize(0, 15));
        label_15->setMaximumSize(QSize(16777215, 15));
        label_15->setScaledContents(true);

        verticalLayout_10->addWidget(label_15);


        gridLayout_2->addWidget(widget_9, 2, 1, 1, 1);

        widget_6 = new QWidget(MusicTable);
        widget_6->setObjectName(QStringLiteral("widget_6"));
        verticalLayout_7 = new QVBoxLayout(widget_6);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        label_10 = new QLabel(widget_6);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setScaledContents(true);

        verticalLayout_7->addWidget(label_10);

        label_9 = new QLabel(widget_6);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setMinimumSize(QSize(0, 15));
        label_9->setMaximumSize(QSize(16777215, 15));
        label_9->setScaledContents(true);

        verticalLayout_7->addWidget(label_9);


        gridLayout_2->addWidget(widget_6, 1, 1, 1, 1);

        widget_4 = new QWidget(MusicTable);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        verticalLayout_4 = new QVBoxLayout(widget_4);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label_6 = new QLabel(widget_4);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setScaledContents(true);

        verticalLayout_4->addWidget(label_6);

        label_5 = new QLabel(widget_4);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setMinimumSize(QSize(0, 15));
        label_5->setMaximumSize(QSize(16777215, 15));
        label_5->setScaledContents(true);

        verticalLayout_4->addWidget(label_5);


        gridLayout_2->addWidget(widget_4, 0, 2, 1, 1);

        widget_5 = new QWidget(MusicTable);
        widget_5->setObjectName(QStringLiteral("widget_5"));
        verticalLayout_6 = new QVBoxLayout(widget_5);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        label_12 = new QLabel(widget_5);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setScaledContents(true);

        verticalLayout_6->addWidget(label_12);

        label_11 = new QLabel(widget_5);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setMinimumSize(QSize(0, 15));
        label_11->setMaximumSize(QSize(16777215, 15));
        label_11->setScaledContents(true);

        verticalLayout_6->addWidget(label_11);


        gridLayout_2->addWidget(widget_5, 1, 0, 1, 1);

        widget_10 = new QWidget(MusicTable);
        widget_10->setObjectName(QStringLiteral("widget_10"));
        verticalLayout_5 = new QVBoxLayout(widget_10);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        label_18 = new QLabel(widget_10);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setScaledContents(true);

        verticalLayout_5->addWidget(label_18);

        label_17 = new QLabel(widget_10);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setMinimumSize(QSize(0, 15));
        label_17->setMaximumSize(QSize(16777215, 15));
        label_17->setScaledContents(true);

        verticalLayout_5->addWidget(label_17);


        gridLayout_2->addWidget(widget_10, 2, 2, 1, 1);

        widget_3 = new QWidget(MusicTable);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        verticalLayout_3 = new QVBoxLayout(widget_3);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_4 = new QLabel(widget_3);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setScaledContents(true);

        verticalLayout_3->addWidget(label_4);

        label_3 = new QLabel(widget_3);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMinimumSize(QSize(0, 15));
        label_3->setMaximumSize(QSize(16777215, 15));
        label_3->setScaledContents(true);

        verticalLayout_3->addWidget(label_3);


        gridLayout_2->addWidget(widget_3, 0, 1, 1, 1);

        widget_7 = new QWidget(MusicTable);
        widget_7->setObjectName(QStringLiteral("widget_7"));
        verticalLayout_8 = new QVBoxLayout(widget_7);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        label_8 = new QLabel(widget_7);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setScaledContents(true);

        verticalLayout_8->addWidget(label_8);

        label_7 = new QLabel(widget_7);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setMinimumSize(QSize(0, 15));
        label_7->setMaximumSize(QSize(16777215, 15));
        label_7->setScaledContents(true);

        verticalLayout_8->addWidget(label_7);


        gridLayout_2->addWidget(widget_7, 1, 2, 1, 1);

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

        BaseWidget->setCurrentIndex(1);
        InRankWidget->setCurrentIndex(2);
        NewSongWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(FindMusicWidget);
    } // setupUi

    void retranslateUi(QWidget *FindMusicWidget)
    {
        FindMusicWidget->setWindowTitle(QApplication::translate("FindMusicWidget", "Form", nullptr));
        BaseWidget->setTabText(BaseWidget->indexOf(Recommend), QApplication::translate("FindMusicWidget", "\344\270\252\346\200\247\346\216\250\350\215\220", nullptr));
        label_14->setText(QApplication::translate("FindMusicWidget", "TextLabel", nullptr));
        label_13->setText(QApplication::translate("FindMusicWidget", "TextLabel", nullptr));
        label_16->setText(QApplication::translate("FindMusicWidget", "TextLabel", nullptr));
        label_15->setText(QApplication::translate("FindMusicWidget", "TextLabel", nullptr));
        label_10->setText(QApplication::translate("FindMusicWidget", "TextLabel", nullptr));
        label_9->setText(QApplication::translate("FindMusicWidget", "TextLabel", nullptr));
        label_6->setText(QApplication::translate("FindMusicWidget", "TextLabel", nullptr));
        label_5->setText(QApplication::translate("FindMusicWidget", "TextLabel", nullptr));
        label_12->setText(QApplication::translate("FindMusicWidget", "TextLabel", nullptr));
        label_11->setText(QApplication::translate("FindMusicWidget", "TextLabel", nullptr));
        label_18->setText(QApplication::translate("FindMusicWidget", "TextLabel", nullptr));
        label_17->setText(QApplication::translate("FindMusicWidget", "TextLabel", nullptr));
        label_4->setText(QApplication::translate("FindMusicWidget", "TextLabel", nullptr));
        label_3->setText(QApplication::translate("FindMusicWidget", "TextLabel", nullptr));
        label_8->setText(QApplication::translate("FindMusicWidget", "TextLabel", nullptr));
        label_7->setText(QApplication::translate("FindMusicWidget", "TextLabel", nullptr));
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

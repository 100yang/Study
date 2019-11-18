/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <showplaylist.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_4;
    QLineEdit *serach_edit;
    QSpacerItem *horizontalSpacer_6;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *verticalSpacer_2;
    QFrame *line_5;
    QHBoxLayout *horizontalLayout;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_2;
    ShowPlayList *PlayList;
    QWidget *widget_5;
    QGridLayout *gridLayout;
    QLabel *SongName;
    QLabel *SingerName;
    QLabel *SongImage;
    QFrame *line_2;
    QFrame *line_3;
    QSpacerItem *horizontalSpacer;
    QFrame *line_6;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_4;
    QStackedWidget *stackedWidget;
    QWidget *serachpage;
    QHBoxLayout *horizontalLayout_5;
    QListWidget *SerachList;
    QWidget *lyricpage;
    QSpacerItem *verticalSpacer;
    QFrame *line;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *PreviousButton;
    QPushButton *PlayButton;
    QPushButton *NextButton;
    QSpacerItem *horizontalSpacer_7;
    QSlider *timeSlider;
    QSpacerItem *horizontalSpacer_3;
    QLabel *TimeLabel;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *loop_one_random;
    QSpacerItem *horizontalSpacer_10;
    QPushButton *LyricPushButton;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *volum;
    QSpacerItem *horizontalSpacer_9;
    QSlider *volum_slider;
    QSpacerItem *horizontalSpacer_11;
    QPushButton *pushButton;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->setWindowModality(Qt::ApplicationModal);
        MainWindow->resize(907, 482);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(907, 482));
        MainWindow->setMaximumSize(QSize(907, 482));
        MainWindow->setAutoFillBackground(true);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        widget_3 = new QWidget(centralWidget);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(5);
        sizePolicy1.setVerticalStretch(5);
        sizePolicy1.setHeightForWidth(widget_3->sizePolicy().hasHeightForWidth());
        widget_3->setSizePolicy(sizePolicy1);
        widget_3->setMinimumSize(QSize(0, 60));
        horizontalLayout_3 = new QHBoxLayout(widget_3);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_4 = new QSpacerItem(241, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        serach_edit = new QLineEdit(widget_3);
        serach_edit->setObjectName(QStringLiteral("serach_edit"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(serach_edit->sizePolicy().hasHeightForWidth());
        serach_edit->setSizePolicy(sizePolicy2);

        horizontalLayout_3->addWidget(serach_edit);

        horizontalSpacer_6 = new QSpacerItem(0, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);

        label_3 = new QLabel(widget_3);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/Images/serach.png")));
        label_3->setScaledContents(true);

        horizontalLayout_3->addWidget(label_3);

        horizontalSpacer_5 = new QSpacerItem(241, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);


        verticalLayout->addWidget(widget_3);

        verticalSpacer_2 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);

        line_5 = new QFrame(centralWidget);
        line_5->setObjectName(QStringLiteral("line_5"));
        line_5->setAutoFillBackground(true);
        line_5->setStyleSheet(QStringLiteral("clor:rgb(0, 0, 0);"));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_5);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 0, -1, 0);
        widget_2 = new QWidget(centralWidget);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(10);
        sizePolicy3.setVerticalStretch(10);
        sizePolicy3.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy3);
        widget_2->setAutoFillBackground(true);
        verticalLayout_2 = new QVBoxLayout(widget_2);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        PlayList = new ShowPlayList(widget_2);
        PlayList->setObjectName(QStringLiteral("PlayList"));
        PlayList->setLineWidth(0);

        verticalLayout_2->addWidget(PlayList);

        widget_5 = new QWidget(widget_2);
        widget_5->setObjectName(QStringLiteral("widget_5"));
        widget_5->setMinimumSize(QSize(0, 80));
        gridLayout = new QGridLayout(widget_5);
        gridLayout->setSpacing(0);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        SongName = new QLabel(widget_5);
        SongName->setObjectName(QStringLiteral("SongName"));

        gridLayout->addWidget(SongName, 0, 2, 1, 1);

        SingerName = new QLabel(widget_5);
        SingerName->setObjectName(QStringLiteral("SingerName"));

        gridLayout->addWidget(SingerName, 1, 2, 1, 1);

        SongImage = new QLabel(widget_5);
        SongImage->setObjectName(QStringLiteral("SongImage"));
        SongImage->setScaledContents(true);

        gridLayout->addWidget(SongImage, 0, 0, 2, 1);

        line_2 = new QFrame(widget_5);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_2, 0, 1, 1, 1);

        line_3 = new QFrame(widget_5);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_3, 1, 1, 1, 1);


        verticalLayout_2->addWidget(widget_5);


        horizontalLayout->addWidget(widget_2);

        horizontalSpacer = new QSpacerItem(13, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        line_6 = new QFrame(centralWidget);
        line_6->setObjectName(QStringLiteral("line_6"));
        line_6->setFrameShape(QFrame::VLine);
        line_6->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line_6);

        widget_4 = new QWidget(centralWidget);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(39);
        sizePolicy4.setVerticalStretch(10);
        sizePolicy4.setHeightForWidth(widget_4->sizePolicy().hasHeightForWidth());
        widget_4->setSizePolicy(sizePolicy4);
        widget_4->setAutoFillBackground(true);
        horizontalLayout_4 = new QHBoxLayout(widget_4);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        stackedWidget = new QStackedWidget(widget_4);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        serachpage = new QWidget();
        serachpage->setObjectName(QStringLiteral("serachpage"));
        horizontalLayout_5 = new QHBoxLayout(serachpage);
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        SerachList = new QListWidget(serachpage);
        SerachList->setObjectName(QStringLiteral("SerachList"));
        SerachList->setLineWidth(0);

        horizontalLayout_5->addWidget(SerachList);

        stackedWidget->addWidget(serachpage);
        lyricpage = new QWidget();
        lyricpage->setObjectName(QStringLiteral("lyricpage"));
        stackedWidget->addWidget(lyricpage);

        horizontalLayout_4->addWidget(stackedWidget);


        horizontalLayout->addWidget(widget_4);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        line = new QFrame(centralWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(50);
        sizePolicy5.setVerticalStretch(10);
        sizePolicy5.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy5);
        widget->setMinimumSize(QSize(0, 10));
        widget->setMaximumSize(QSize(16777215, 60));
        widget->setAutoFillBackground(true);
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        PreviousButton = new QPushButton(widget);
        PreviousButton->setObjectName(QStringLiteral("PreviousButton"));
        PreviousButton->setStyleSheet(QLatin1String("border-image:url(:/Images/Preious.png);\n"
""));

        horizontalLayout_2->addWidget(PreviousButton);

        PlayButton = new QPushButton(widget);
        PlayButton->setObjectName(QStringLiteral("PlayButton"));
        PlayButton->setStyleSheet(QLatin1String("border-image:url(:/Images/play.png);\n"
""));

        horizontalLayout_2->addWidget(PlayButton);

        NextButton = new QPushButton(widget);
        NextButton->setObjectName(QStringLiteral("NextButton"));
        NextButton->setStyleSheet(QStringLiteral("border-image:url(:/Images/Next.png);"));

        horizontalLayout_2->addWidget(NextButton);

        horizontalSpacer_7 = new QSpacerItem(0, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_7);

        timeSlider = new QSlider(widget);
        timeSlider->setObjectName(QStringLiteral("timeSlider"));
        timeSlider->setStyleSheet(QStringLiteral("color:rgb(239, 41, 41);"));
        timeSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(timeSlider);

        horizontalSpacer_3 = new QSpacerItem(0, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        TimeLabel = new QLabel(widget);
        TimeLabel->setObjectName(QStringLiteral("TimeLabel"));

        horizontalLayout_2->addWidget(TimeLabel);

        horizontalSpacer_8 = new QSpacerItem(0, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_8);

        loop_one_random = new QPushButton(widget);
        loop_one_random->setObjectName(QStringLiteral("loop_one_random"));
        loop_one_random->setStyleSheet(QStringLiteral("border-image:url(:/Images/loop.png)"));

        horizontalLayout_2->addWidget(loop_one_random);

        horizontalSpacer_10 = new QSpacerItem(0, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_10);

        LyricPushButton = new QPushButton(widget);
        LyricPushButton->setObjectName(QStringLiteral("LyricPushButton"));
        LyricPushButton->setAutoFillBackground(false);
        LyricPushButton->setStyleSheet(QStringLiteral("border-image:url(:/Images/Lyric_dark.png)"));

        horizontalLayout_2->addWidget(LyricPushButton);

        horizontalSpacer_2 = new QSpacerItem(0, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        volum = new QPushButton(widget);
        volum->setObjectName(QStringLiteral("volum"));
        volum->setStyleSheet(QStringLiteral("border-image:url(:/Images/high_volum.png)"));

        horizontalLayout_2->addWidget(volum);

        horizontalSpacer_9 = new QSpacerItem(0, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_9);

        volum_slider = new QSlider(widget);
        volum_slider->setObjectName(QStringLiteral("volum_slider"));
        volum_slider->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(volum_slider);

        horizontalSpacer_11 = new QSpacerItem(0, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_11);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setAutoFillBackground(true);
        pushButton->setStyleSheet(QStringLiteral("border-image:url(:/Images/PlayList.png);"));
        pushButton->setAutoDefault(true);
        pushButton->setFlat(true);

        horizontalLayout_2->addWidget(pushButton);


        verticalLayout->addWidget(widget);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);
        pushButton->setDefault(true);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Music Player", nullptr));
        label_3->setText(QString());
        SongName->setText(QApplication::translate("MainWindow", "SongName", nullptr));
        SingerName->setText(QApplication::translate("MainWindow", "SingerName", nullptr));
        SongImage->setText(QApplication::translate("MainWindow", "SongImage", nullptr));
        PreviousButton->setText(QString());
        PlayButton->setText(QString());
        NextButton->setText(QString());
        TimeLabel->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        loop_one_random->setText(QString());
        LyricPushButton->setText(QString());
        volum->setText(QString());
        pushButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

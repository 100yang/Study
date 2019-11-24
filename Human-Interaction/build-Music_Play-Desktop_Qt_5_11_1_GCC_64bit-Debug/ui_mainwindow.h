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
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <displayresult.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QWidget *serach_widget;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_5;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_4;
    QLineEdit *serach_edit;
    QSpacerItem *horizontalSpacer_6;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *loginbtn;
    QPushButton *minbtn;
    QPushButton *closebtn;
    QSpacerItem *verticalSpacer_2;
    QFrame *line_5;
    QHBoxLayout *horizontalLayout;
    QWidget *OptionBase;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget_5;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QFrame *line_7;
    QPushButton *findmusicbtn;
    QSpacerItem *verticalSpacer_4;
    QPushButton *findvideobtn;
    QSpacerItem *verticalSpacer_5;
    QFrame *line_4;
    QLabel *label_2;
    QFrame *line_3;
    QPushButton *likemusic;
    QSpacerItem *verticalSpacer_3;
    QPushButton *localmusic;
    QFrame *line_2;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_6;
    QGridLayout *gridLayout;
    QLabel *SongName;
    QLabel *SongImage;
    QLabel *SingerName;
    QSpacerItem *verticalSpacer_6;
    QFrame *line_6;
    QWidget *SerachResultBase;
    QVBoxLayout *verticalLayout_4;
    QStackedWidget *stackedWidget;
    DisplayResult *page0;
    DisplayResult *page1;
    DisplayResult *page2;
    QWidget *ToPageWidget;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *prepagebtn;
    QSpacerItem *horizontalSpacer;
    QLabel *pagelabel;
    QSpacerItem *horizontalSpacer_12;
    QPushButton *nextpagebtn;
    QSpacerItem *verticalSpacer;
    QFrame *line;
    QWidget *playWidget;
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
    QPushButton *listButton;

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
        QIcon icon;
        icon.addFile(QStringLiteral(":/Images/s.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QStringLiteral(""));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        serach_widget = new QWidget(centralWidget);
        serach_widget->setObjectName(QStringLiteral("serach_widget"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(5);
        sizePolicy1.setVerticalStretch(5);
        sizePolicy1.setHeightForWidth(serach_widget->sizePolicy().hasHeightForWidth());
        serach_widget->setSizePolicy(sizePolicy1);
        serach_widget->setMinimumSize(QSize(0, 60));
        serach_widget->setAutoFillBackground(true);
        serach_widget->setStyleSheet(QStringLiteral(""));
        horizontalLayout_3 = new QHBoxLayout(serach_widget);
        horizontalLayout_3->setSpacing(4);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(serach_widget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setMinimumSize(QSize(55, 0));
        label_5->setFrameShape(QFrame::StyledPanel);
        label_5->setPixmap(QPixmap(QString::fromUtf8("Images/Music disc.png")));
        label_5->setScaledContents(true);
        label_5->setMargin(0);

        horizontalLayout_3->addWidget(label_5);

        label_4 = new QLabel(serach_widget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setStyleSheet(QStringLiteral("font: 75 italic 24pt \"DejaVu Sans\";"));
        label_4->setTextFormat(Qt::AutoText);
        label_4->setScaledContents(true);
        label_4->setMargin(5);

        horizontalLayout_3->addWidget(label_4);

        horizontalSpacer_4 = new QSpacerItem(241, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        serach_edit = new QLineEdit(serach_widget);
        serach_edit->setObjectName(QStringLiteral("serach_edit"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(serach_edit->sizePolicy().hasHeightForWidth());
        serach_edit->setSizePolicy(sizePolicy2);

        horizontalLayout_3->addWidget(serach_edit);

        horizontalSpacer_6 = new QSpacerItem(0, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);

        label_3 = new QLabel(serach_widget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setPixmap(QPixmap(QString::fromUtf8("Images/serach.png")));
        label_3->setScaledContents(true);
        label_3->setMargin(8);

        horizontalLayout_3->addWidget(label_3);

        horizontalSpacer_5 = new QSpacerItem(241, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        loginbtn = new QPushButton(serach_widget);
        loginbtn->setObjectName(QStringLiteral("loginbtn"));

        horizontalLayout_3->addWidget(loginbtn);

        minbtn = new QPushButton(serach_widget);
        minbtn->setObjectName(QStringLiteral("minbtn"));
        minbtn->setStyleSheet(QStringLiteral("border-image:url(:/Images/minsize.png)"));
        minbtn->setFlat(true);

        horizontalLayout_3->addWidget(minbtn);

        closebtn = new QPushButton(serach_widget);
        closebtn->setObjectName(QStringLiteral("closebtn"));
        closebtn->setStyleSheet(QStringLiteral("border-image:url(:/Images/close.png);"));

        horizontalLayout_3->addWidget(closebtn);


        verticalLayout->addWidget(serach_widget);

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
        OptionBase = new QWidget(centralWidget);
        OptionBase->setObjectName(QStringLiteral("OptionBase"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(10);
        sizePolicy3.setVerticalStretch(10);
        sizePolicy3.setHeightForWidth(OptionBase->sizePolicy().hasHeightForWidth());
        OptionBase->setSizePolicy(sizePolicy3);
        OptionBase->setAutoFillBackground(false);
        verticalLayout_2 = new QVBoxLayout(OptionBase);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        widget_5 = new QWidget(OptionBase);
        widget_5->setObjectName(QStringLiteral("widget_5"));
        widget_5->setMinimumSize(QSize(0, 80));
        verticalLayout_3 = new QVBoxLayout(widget_5);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label = new QLabel(widget_5);
        label->setObjectName(QStringLiteral("label"));
        label->setMaximumSize(QSize(16777215, 50));

        verticalLayout_3->addWidget(label);

        line_7 = new QFrame(widget_5);
        line_7->setObjectName(QStringLiteral("line_7"));
        line_7->setLineWidth(0);
        line_7->setFrameShape(QFrame::HLine);
        line_7->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line_7);

        findmusicbtn = new QPushButton(widget_5);
        findmusicbtn->setObjectName(QStringLiteral("findmusicbtn"));
        findmusicbtn->setLayoutDirection(Qt::LeftToRight);
        findmusicbtn->setStyleSheet(QLatin1String("background-color:rgb(186, 189, 182);\n"
""));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Images/music.png"), QSize(), QIcon::Normal, QIcon::Off);
        findmusicbtn->setIcon(icon1);
        findmusicbtn->setCheckable(false);
        findmusicbtn->setChecked(false);

        verticalLayout_3->addWidget(findmusicbtn);

        verticalSpacer_4 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_4);

        findvideobtn = new QPushButton(widget_5);
        findvideobtn->setObjectName(QStringLiteral("findvideobtn"));
        findvideobtn->setLayoutDirection(Qt::LeftToRight);
        findvideobtn->setStyleSheet(QLatin1String("background-color:rgb(186, 189, 182);\n"
""));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Images/mv.png"), QSize(), QIcon::Normal, QIcon::Off);
        findvideobtn->setIcon(icon2);
        findvideobtn->setCheckable(false);
        findvideobtn->setChecked(false);
        findvideobtn->setAutoRepeat(false);

        verticalLayout_3->addWidget(findvideobtn);

        verticalSpacer_5 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_5);

        line_4 = new QFrame(widget_5);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setFrameShadow(QFrame::Raised);
        line_4->setLineWidth(0);
        line_4->setFrameShape(QFrame::HLine);

        verticalLayout_3->addWidget(line_4);

        label_2 = new QLabel(widget_5);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMaximumSize(QSize(16777215, 50));

        verticalLayout_3->addWidget(label_2);

        line_3 = new QFrame(widget_5);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setLineWidth(0);
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line_3);

        likemusic = new QPushButton(widget_5);
        likemusic->setObjectName(QStringLiteral("likemusic"));
        likemusic->setStyleSheet(QLatin1String("background-color:rgb(186, 189, 182);\n"
""));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/Images/lovemusic.png"), QSize(), QIcon::Normal, QIcon::Off);
        likemusic->setIcon(icon3);
        likemusic->setCheckable(false);
        likemusic->setChecked(false);

        verticalLayout_3->addWidget(likemusic);

        verticalSpacer_3 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_3);

        localmusic = new QPushButton(widget_5);
        localmusic->setObjectName(QStringLiteral("localmusic"));
        localmusic->setStyleSheet(QLatin1String("background-color:rgb(186, 189, 182);\n"
""));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/Images/localmusic.png"), QSize(), QIcon::Normal, QIcon::Off);
        localmusic->setIcon(icon4);
        localmusic->setCheckable(false);
        localmusic->setChecked(false);

        verticalLayout_3->addWidget(localmusic);

        line_2 = new QFrame(widget_5);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line_2);

        widget_3 = new QWidget(widget_5);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        horizontalLayout_6 = new QHBoxLayout(widget_3);
        horizontalLayout_6->setSpacing(0);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(-1, 0, -1, -1);
        SongName = new QLabel(widget_3);
        SongName->setObjectName(QStringLiteral("SongName"));

        gridLayout->addWidget(SongName, 0, 1, 1, 1);

        SongImage = new QLabel(widget_3);
        SongImage->setObjectName(QStringLiteral("SongImage"));
        SongImage->setScaledContents(true);

        gridLayout->addWidget(SongImage, 0, 0, 3, 1);

        SingerName = new QLabel(widget_3);
        SingerName->setObjectName(QStringLiteral("SingerName"));

        gridLayout->addWidget(SingerName, 2, 1, 1, 1);


        horizontalLayout_6->addLayout(gridLayout);


        verticalLayout_3->addWidget(widget_3);

        verticalSpacer_6 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_6);


        verticalLayout_2->addWidget(widget_5);


        horizontalLayout->addWidget(OptionBase);

        line_6 = new QFrame(centralWidget);
        line_6->setObjectName(QStringLiteral("line_6"));
        line_6->setFrameShape(QFrame::VLine);
        line_6->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line_6);

        SerachResultBase = new QWidget(centralWidget);
        SerachResultBase->setObjectName(QStringLiteral("SerachResultBase"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(39);
        sizePolicy4.setVerticalStretch(10);
        sizePolicy4.setHeightForWidth(SerachResultBase->sizePolicy().hasHeightForWidth());
        SerachResultBase->setSizePolicy(sizePolicy4);
        SerachResultBase->setAutoFillBackground(false);
        verticalLayout_4 = new QVBoxLayout(SerachResultBase);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        stackedWidget = new QStackedWidget(SerachResultBase);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        page0 = new DisplayResult();
        page0->setObjectName(QStringLiteral("page0"));
        stackedWidget->addWidget(page0);
        page1 = new DisplayResult();
        page1->setObjectName(QStringLiteral("page1"));
        stackedWidget->addWidget(page1);
        page2 = new DisplayResult();
        page2->setObjectName(QStringLiteral("page2"));
        stackedWidget->addWidget(page2);

        verticalLayout_4->addWidget(stackedWidget);

        ToPageWidget = new QWidget(SerachResultBase);
        ToPageWidget->setObjectName(QStringLiteral("ToPageWidget"));
        horizontalLayout_4 = new QHBoxLayout(ToPageWidget);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        prepagebtn = new QPushButton(ToPageWidget);
        prepagebtn->setObjectName(QStringLiteral("prepagebtn"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/Images/prepage.png"), QSize(), QIcon::Normal, QIcon::Off);
        prepagebtn->setIcon(icon5);

        horizontalLayout_4->addWidget(prepagebtn);

        horizontalSpacer = new QSpacerItem(319, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        pagelabel = new QLabel(ToPageWidget);
        pagelabel->setObjectName(QStringLiteral("pagelabel"));
        pagelabel->setFrameShape(QFrame::StyledPanel);

        horizontalLayout_4->addWidget(pagelabel);

        horizontalSpacer_12 = new QSpacerItem(318, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_12);

        nextpagebtn = new QPushButton(ToPageWidget);
        nextpagebtn->setObjectName(QStringLiteral("nextpagebtn"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/Images/nextpage.png"), QSize(), QIcon::Normal, QIcon::Off);
        nextpagebtn->setIcon(icon6);

        horizontalLayout_4->addWidget(nextpagebtn);


        verticalLayout_4->addWidget(ToPageWidget);


        horizontalLayout->addWidget(SerachResultBase);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        line = new QFrame(centralWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        playWidget = new QWidget(centralWidget);
        playWidget->setObjectName(QStringLiteral("playWidget"));
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(50);
        sizePolicy5.setVerticalStretch(10);
        sizePolicy5.setHeightForWidth(playWidget->sizePolicy().hasHeightForWidth());
        playWidget->setSizePolicy(sizePolicy5);
        playWidget->setMinimumSize(QSize(0, 10));
        playWidget->setMaximumSize(QSize(16777215, 60));
        playWidget->setAutoFillBackground(false);
        horizontalLayout_2 = new QHBoxLayout(playWidget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        PreviousButton = new QPushButton(playWidget);
        PreviousButton->setObjectName(QStringLiteral("PreviousButton"));
        PreviousButton->setStyleSheet(QLatin1String("border-image:url(:/Images/Preious.png);\n"
""));

        horizontalLayout_2->addWidget(PreviousButton);

        PlayButton = new QPushButton(playWidget);
        PlayButton->setObjectName(QStringLiteral("PlayButton"));
        PlayButton->setStyleSheet(QLatin1String("border-image:url(:/Images/play.png);\n"
""));

        horizontalLayout_2->addWidget(PlayButton);

        NextButton = new QPushButton(playWidget);
        NextButton->setObjectName(QStringLiteral("NextButton"));
        NextButton->setStyleSheet(QStringLiteral("border-image:url(:/Images/Next.png);"));

        horizontalLayout_2->addWidget(NextButton);

        horizontalSpacer_7 = new QSpacerItem(0, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_7);

        timeSlider = new QSlider(playWidget);
        timeSlider->setObjectName(QStringLiteral("timeSlider"));
        timeSlider->setStyleSheet(QStringLiteral("color:rgb(239, 41, 41);"));
        timeSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(timeSlider);

        horizontalSpacer_3 = new QSpacerItem(0, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        TimeLabel = new QLabel(playWidget);
        TimeLabel->setObjectName(QStringLiteral("TimeLabel"));

        horizontalLayout_2->addWidget(TimeLabel);

        horizontalSpacer_8 = new QSpacerItem(0, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_8);

        loop_one_random = new QPushButton(playWidget);
        loop_one_random->setObjectName(QStringLiteral("loop_one_random"));
        loop_one_random->setStyleSheet(QStringLiteral("border-image:url(:/Images/loop.png)"));

        horizontalLayout_2->addWidget(loop_one_random);

        horizontalSpacer_10 = new QSpacerItem(0, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_10);

        LyricPushButton = new QPushButton(playWidget);
        LyricPushButton->setObjectName(QStringLiteral("LyricPushButton"));
        LyricPushButton->setAutoFillBackground(false);
        LyricPushButton->setStyleSheet(QStringLiteral("border-image:url(:/Images/Lyric_dark.png)"));

        horizontalLayout_2->addWidget(LyricPushButton);

        horizontalSpacer_2 = new QSpacerItem(0, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        volum = new QPushButton(playWidget);
        volum->setObjectName(QStringLiteral("volum"));
        volum->setStyleSheet(QStringLiteral("border-image:url(:/Images/high_volum.png)"));

        horizontalLayout_2->addWidget(volum);

        horizontalSpacer_9 = new QSpacerItem(0, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_9);

        volum_slider = new QSlider(playWidget);
        volum_slider->setObjectName(QStringLiteral("volum_slider"));
        volum_slider->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(volum_slider);

        horizontalSpacer_11 = new QSpacerItem(0, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_11);

        listButton = new QPushButton(playWidget);
        listButton->setObjectName(QStringLiteral("listButton"));
        listButton->setAutoFillBackground(false);
        listButton->setStyleSheet(QStringLiteral("border-image:url(:/Images/PlayList.png);"));
        listButton->setAutoDefault(true);
        listButton->setFlat(true);

        horizontalLayout_2->addWidget(listButton);


        verticalLayout->addWidget(playWidget);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        listButton->setDefault(true);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Music Player", nullptr));
        label_5->setText(QString());
        label_4->setText(QApplication::translate("MainWindow", "Music Play", nullptr));
        label_3->setText(QString());
        loginbtn->setText(QApplication::translate("MainWindow", "login", nullptr));
        minbtn->setText(QString());
        closebtn->setText(QString());
        label->setText(QApplication::translate("MainWindow", "\346\216\250\350\215\220", nullptr));
        findmusicbtn->setText(QApplication::translate("MainWindow", "      \345\217\221\347\216\260\351\237\263\344\271\220", nullptr));
        findvideobtn->setText(QApplication::translate("MainWindow", "       \345\217\221\347\216\260\350\247\206\351\242\221", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "\346\210\221\347\232\204\351\237\263\344\271\220", nullptr));
        likemusic->setText(QApplication::translate("MainWindow", "\346\210\221\345\226\234\346\254\242\347\232\204\351\237\263\344\271\220", nullptr));
        localmusic->setText(QApplication::translate("MainWindow", "     \346\234\254\345\234\260\351\237\263\344\271\220", nullptr));
        SongName->setText(QApplication::translate("MainWindow", "SongName", nullptr));
        SongImage->setText(QApplication::translate("MainWindow", "SongImage", nullptr));
        SingerName->setText(QApplication::translate("MainWindow", "SingerName", nullptr));
        prepagebtn->setText(QString());
        pagelabel->setText(QApplication::translate("MainWindow", "1", nullptr));
        nextpagebtn->setText(QString());
        PreviousButton->setText(QString());
        PlayButton->setText(QString());
        NextButton->setText(QString());
        TimeLabel->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        loop_one_random->setText(QString());
        LyricPushButton->setText(QString());
        volum->setText(QString());
        listButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

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
    QHBoxLayout *horizontalLayout;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_2;
    QListWidget *PlayList;
    QSpacerItem *verticalSpacer_3;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer;
    QWidget *widget_4;
    QListWidget *suggestionlistWidget;
    QSpacerItem *verticalSpacer;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *PreviousButton;
    QPushButton *PlayButton;
    QPushButton *NextButton;
    QLabel *label_6;
    QSpacerItem *horizontalSpacer_7;
    QSlider *timeSlider;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_8;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *loop_one_random;
    QSpacerItem *horizontalSpacer_10;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *volum;
    QSpacerItem *horizontalSpacer_9;
    QSlider *volum_slider;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(776, 443);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        widget_3 = new QWidget(centralWidget);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(5);
        sizePolicy.setVerticalStretch(5);
        sizePolicy.setHeightForWidth(widget_3->sizePolicy().hasHeightForWidth());
        widget_3->setSizePolicy(sizePolicy);
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
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(serach_edit->sizePolicy().hasHeightForWidth());
        serach_edit->setSizePolicy(sizePolicy1);

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

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 0, -1, 0);
        widget_2 = new QWidget(centralWidget);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(10);
        sizePolicy2.setVerticalStretch(10);
        sizePolicy2.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy2);
        verticalLayout_2 = new QVBoxLayout(widget_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        PlayList = new QListWidget(widget_2);
        PlayList->setObjectName(QStringLiteral("PlayList"));

        verticalLayout_2->addWidget(PlayList);

        verticalSpacer_3 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_3);

        label_5 = new QLabel(widget_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy3);
        label_5->setMinimumSize(QSize(0, 40));
        label_5->setMaximumSize(QSize(16777215, 50));

        verticalLayout_2->addWidget(label_5);


        horizontalLayout->addWidget(widget_2);

        horizontalSpacer = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        widget_4 = new QWidget(centralWidget);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(39);
        sizePolicy4.setVerticalStretch(10);
        sizePolicy4.setHeightForWidth(widget_4->sizePolicy().hasHeightForWidth());
        widget_4->setSizePolicy(sizePolicy4);
        widget_4->setAutoFillBackground(true);
        suggestionlistWidget = new QListWidget(widget_4);
        suggestionlistWidget->setObjectName(QStringLiteral("suggestionlistWidget"));
        suggestionlistWidget->setGeometry(QRect(60, 20, 256, 192));

        horizontalLayout->addWidget(widget_4);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

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

        label_6 = new QLabel(widget);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_2->addWidget(label_6);

        horizontalSpacer_7 = new QSpacerItem(0, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_7);

        timeSlider = new QSlider(widget);
        timeSlider->setObjectName(QStringLiteral("timeSlider"));
        timeSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(timeSlider);

        horizontalSpacer_3 = new QSpacerItem(0, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        label_8 = new QLabel(widget);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_2->addWidget(label_8);

        horizontalSpacer_8 = new QSpacerItem(0, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_8);

        loop_one_random = new QPushButton(widget);
        loop_one_random->setObjectName(QStringLiteral("loop_one_random"));
        loop_one_random->setStyleSheet(QStringLiteral("border-image:url(:/Images/loop.png)"));

        horizontalLayout_2->addWidget(loop_one_random);

        horizontalSpacer_10 = new QSpacerItem(0, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_10);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setAutoFillBackground(false);
        pushButton->setStyleSheet(QStringLiteral("border-image:url(:/Images/Lyric_dark.png)"));

        horizontalLayout_2->addWidget(pushButton);

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


        verticalLayout->addWidget(widget);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label_3->setText(QString());
        label_5->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        PreviousButton->setText(QString());
        PlayButton->setText(QString());
        NextButton->setText(QString());
        label_6->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        loop_one_random->setText(QString());
        pushButton->setText(QString());
        volum->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

/********************************************************************************
** Form generated from reading UI file 'videoplay.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIDEOPLAY_H
#define UI_VIDEOPLAY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VideoPlay
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QSlider *progressBar;
    QHBoxLayout *horizontalLayout;
    QPushButton *playBtn;
    QPushButton *stopBtn;
    QPushButton *openFileBtn;
    QPushButton *fullScrBtn;

    void setupUi(QWidget *VideoPlay)
    {
        if (VideoPlay->objectName().isEmpty())
            VideoPlay->setObjectName(QStringLiteral("VideoPlay"));
        VideoPlay->resize(551, 396);
        verticalLayout = new QVBoxLayout(VideoPlay);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        widget = new QWidget(VideoPlay);
        widget->setObjectName(QStringLiteral("widget"));

        verticalLayout->addWidget(widget);

        progressBar = new QSlider(VideoPlay);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(progressBar);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        playBtn = new QPushButton(VideoPlay);
        playBtn->setObjectName(QStringLiteral("playBtn"));

        horizontalLayout->addWidget(playBtn);

        stopBtn = new QPushButton(VideoPlay);
        stopBtn->setObjectName(QStringLiteral("stopBtn"));

        horizontalLayout->addWidget(stopBtn);

        openFileBtn = new QPushButton(VideoPlay);
        openFileBtn->setObjectName(QStringLiteral("openFileBtn"));

        horizontalLayout->addWidget(openFileBtn);

        fullScrBtn = new QPushButton(VideoPlay);
        fullScrBtn->setObjectName(QStringLiteral("fullScrBtn"));

        horizontalLayout->addWidget(fullScrBtn);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(VideoPlay);

        QMetaObject::connectSlotsByName(VideoPlay);
    } // setupUi

    void retranslateUi(QWidget *VideoPlay)
    {
        VideoPlay->setWindowTitle(QApplication::translate("VideoPlay", "Form", nullptr));
        playBtn->setText(QApplication::translate("VideoPlay", "play", nullptr));
        stopBtn->setText(QApplication::translate("VideoPlay", "stop", nullptr));
        openFileBtn->setText(QApplication::translate("VideoPlay", "file", nullptr));
        fullScrBtn->setText(QApplication::translate("VideoPlay", "full", nullptr));
    } // retranslateUi

};

namespace Ui {
    class VideoPlay: public Ui_VideoPlay {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIDEOPLAY_H

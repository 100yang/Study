#include "videoplay.h"
#include "ui_videoplay.h"
#include <QMediaPlayer>
#include <QMediaPlaylist>
#include <QPlainTextEdit>
#include <QLineEdit>
#include <QString>
#include <QDebug>
#include <QPicture>
#include <QUrl>
#include <QPushButton>
#include <QLineEdit>
#include <QByteArray>
#include <QStringList>
#include <QNetworkRequest>
#include <QNetworkCookieJar>
#include <QRegularExpression>
#include <QRegularExpressionMatch>
#include <QRegularExpressionMatchIterator>
#include <QNetworkReply>
#include <QJsonArray>
#include <QFileDialog>
#include <QJsonObject>
#include <QJsonValue>
#include <QMessageBox>
#include <QJsonParseError>
#include <QEventLoop>
#include <QMediaPlayer>
#include <QPushButton>
#include <QStandardItemModel>
#include <QStandardItem>
#include <QSound>
#include <QList>
#include <QListWidgetItem>
#include <QTextEdit>
#include <QMultiMap>
#include <QTime>
#include <QHBoxLayout>
#include <QFile>
#include <QFileInfo>
#include <QBoxLayout>
VideoPlay::VideoPlay(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::VideoPlay)
{
    ui->setupUi(this);
    //MainWindow自带layout，所以需要自定义layout并把它设置成中心layout
        //否则将会出现不能设置layout错误
//        QWidget *widget = new QWidget;
      player = new QMediaPlayer;
      playlist = new QMediaPlaylist(player);
      playlist->addMedia(QUrl("http://example.com/myclip1.mp4"));
      playlist->addMedia(QUrl("http://example.com/myclip2.mp4"));

      videoWidget = new QVideoWidget(ui->widget);
      player->setVideoOutput(videoWidget);
      playlist->setCurrentIndex(1);
      player->play();
//        player = new QMediaPlayer;
////        Playlist = new QMediaPlaylist();
////        player->setPlaylist(Playlist);
//        videoWidget = new QVideoWidget(this);
//        player->setVideoOutput(videoWidget);
//        ui->progressBar->setRange(0, player->duration() / 1000);


        //信号槽
//        QObject::connect(ui->openFileBtn,SIGNAL(clicked()),this,SLOT(openFile()));
//        QObject::connect(ui->playBtn,SIGNAL(clicked()),this,SLOT(playVideo()));
//        QObject::connect(ui->stopBtn,SIGNAL(clicked()),this,SLOT(stopVideo()));
//        QObject::connect(ui->fullScrBtn,SIGNAL(clicked()),this,SLOT(fullScr()));

}

VideoPlay::~VideoPlay()
{
    delete ui;
}
void VideoPlay::openFile()
{
    QStringList fileNames = QFileDialog::getOpenFileNames(this, tr("Open Files"));
//    addToPlaylist(fileNames);
}

void VideoPlay::playVideo()
{
    m_playerState = QMediaPlayer::PlayingState;
    player->play();
}

void VideoPlay::stopVideo()
{
    m_playerState = QMediaPlayer::StoppedState;
    player->stop();
}

void VideoPlay::fullScr()
{
    if(m_playerState == QMediaPlayer::PlayingState)
    {
        videoWidget->setFullScreen(true);
    }
    else
    {
        videoWidget->setFullScreen(false);
    }

}


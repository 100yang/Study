#include "findmvwidget.h"
#include "ui_findmvwidget.h"
#include <QMediaPlayer>
#include <QMediaObject>
#include <QVideoWidget>
#include <QVideoFrame>
#include <QMediaPlaylist>
#include <QPlainTextEdit>
#include <QLineEdit>
#include <QString>
#include <QTime>
#include <QDebug>
#include <QMessageBox>
#include <QUrl>
#include <QByteArray>
#include <QStringList>
#include <QNetworkRequest>
#include <QNetworkCookieJar>
#include <QRegularExpression>
#include <QRegularExpressionMatch>
#include <QRegularExpressionMatchIterator>
#include <QNetworkReply>
#include <QJsonArray>
#include <QJsonObject>
#include <QJsonValue>
#include <QJsonParseError>
#include <QEventLoop>
#include <QStringList>
#include <QTextEdit>
#include <QEvent>
#include <QDialog>
#include <QTableWidget>
#include <QHeaderView>
#include <QFile>
#include <QFileInfo>
#include <QHBoxLayout>
FindmvWidget::FindmvWidget(QWidget *parent) :
	QWidget(parent),
	ui(new Ui::FindmvWidget) {
	ui->setupUi(this);
//    QMediaPlayer *play = new QMediaPlayer(this);
//    QVideoWidget *videoWidget = new QVideoWidget(ui->widget);
//    play->setMedia (QUrl("http://vodkgeyttp8.vod.126.net/cloudmusic/MjQ3NDQ3MjUw/89a6a279dc2acfcd068b45ce72b1f560/533e4183a709699d566180ed0cd9abe9.mp4?wsSecret=6c7cb7178bcb3178b58f8499868f324a&wsTime=1574595655"));
//    play->setVideoOutput(videoWidget);
//    play->play();
//    QHBoxLayout *layout = new QHBoxLayout(ui->widget);
//    layout->addWidget (videoWidget);
//    qDebug() << QCoreApplication::libraryPaths() ;
}

FindmvWidget::~FindmvWidget() {
	delete ui;
}

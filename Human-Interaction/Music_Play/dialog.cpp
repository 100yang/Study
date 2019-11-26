#include "dialog.h"
#include<QtDebug>
#include <QMediaPlayer>
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
Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
{
    Url = "";
    SongId = "";
    SingerName = "";
    SongName = "";
    download_Btn=new QPushButton("download");
    stop_Btn=new QPushButton("stop");
    progressBar=new QProgressBar;
    progressBar->show();

    layout=new QVBoxLayout();
    layout->addWidget(progressBar);
    layout->addWidget(download_Btn);
    layout->addWidget(stop_Btn);

    setLayout(layout);
    httpRequestAbort=false;
    connect(download_Btn,&QPushButton::clicked,[this]()mutable{
        httpDownload (Url,SongName,SingerName);
    });
    connect(stop_Btn,SIGNAL(clicked()),this,SLOT(stop()));

}

Dialog::~Dialog()
{

}
void Dialog::httpDownload(QString Url, QString SongName, QString SingerName){
    QUrl url(Url);
    QString FilePath = "/home/onezero/Music/"+SingerName + " - " + SongName + ".mp3";
    qDebug()<<"FilePath"<<FilePath;
    file=new QFile(FilePath);
    qDebug()<<fileInfo;
    file->open(QIODevice::WriteOnly);//只读方式打开文件
    accessManager=new QNetworkAccessManager(this);
    request.setUrl(url);
    reply=accessManager->get(request);//通过发送数据，返回值保存在reply指针里.
    connect(accessManager, SIGNAL(finished(QNetworkReply*)), this, SLOT(replyFinished(QNetworkReply*)));//finish为manager自带的信号，replyFinished是自定义的
    connect(reply, SIGNAL(downloadProgress(qint64,qint64)), this, SLOT( onDownloadProgress(qint64 ,qint64 )));//download文件时进度
    connect((QObject *)reply, SIGNAL(readyRead()),this, SLOT(onReadyRead()));
    progressBar->setValue(0);
    progressBar->show();
}
/***************响应结束**************************/
void Dialog::replyFinished(QNetworkReply *reply){
    //获取响应的信息，状态码为200表示正常
    QVariant status_code = reply->attribute(QNetworkRequest::HttpStatusCodeAttribute);
    QByteArray bytes = reply->readAll();  //获取字节
    QString result(bytes);  //转化为字符串
    qDebug()<<result;

    //无错误返回
    if(reply->error() == QNetworkReply::NoError)
    {
        download_Btn->setText("success");
        QByteArray bytes = reply->readAll();  //获取字节
        QString result(bytes);  //转化为字符串

        qDebug()<<result;
    }
    else
    {
        //处理错误
         download_Btn->setText("failed");
    }

    reply->deleteLater();//要删除reply，但是不能在repyfinished里直接delete，要调用deletelater;

}

/***********更新进度条*************/
void Dialog::onDownloadProgress(qint64 bytesSent, qint64 bytesTotal){
    progressBar->setMaximum(bytesTotal);
    progressBar->setValue(bytesSent);

}

void Dialog::onReadyRead(){

    file->write(reply->readAll());
    download_Btn->setText("downloading");
}

void Dialog::stop(){
    if(!httpRequestAbort)
    {
    reply->abort();//响应终止
    httpRequestAbort=true;
    stop_Btn->setText("start");
}
    else
    {   httpDownload(Url,SongName,SingerName);
        httpRequestAbort=false;
        stop_Btn->setText("stop");
     }


}

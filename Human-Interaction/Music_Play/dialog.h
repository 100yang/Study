#ifndef DIALOG_H
#define DIALOG_H

#include <QNetworkAccessManager>
#include <QFile>
#include <QNetworkReply>
#include <QNetworkRequest>
#include <QPushButton>
#include <QVBoxLayout>
#include <QIODevice>
#include <QFileInfo>
#include <QProgressBar>
#include <QApplication>
#include <QObject>
#include <stdlib.h>
#include <QProcess>
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
/********************HTTP上传数据******************************/
/*************************************************************/
/*************************************************************/
/*************************************************************/
class Dialog : public QDialog {
    Q_OBJECT

  public:
    Dialog(QWidget *parent = 0);
    ~Dialog();
    QString Url;
    QString SongName;
    QString SongId;
    QString SingerName;
  protected slots:
    void httpDownload(QString SongId, QString SongName, QString SingerName);
    void replyFinished(QNetworkReply*reply);
    void onDownloadProgress(qint64 bytesSent, qint64 bytesTotal);
    void onReadyRead();//
    void stop();//暂停，重新下载


  private:
    QPushButton *download_Btn;
    QPushButton *stop_Btn;
    QProgressBar *progressBar;
    QFile *file;
    QFileInfo fileInfo;
    QNetworkAccessManager *accessManager;
    QNetworkRequest request;
    QNetworkReply *reply;
    QVBoxLayout *layout;
    bool httpRequestAbort; //请求停止的标志位,false表示允许请求


};




#endif // DIALOG_H

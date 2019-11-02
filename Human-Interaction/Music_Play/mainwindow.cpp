#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMediaPlayer>
#include <QMediaPlaylist>
#include <QPlainTextEdit>
#include <QLineEdit>
#include <QString>
#include <QDebug>
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
#include <QDialog>
const QString ApiOfGetSuggestionBykeyword = "http://localhost:3000/search?keywords=%1&type=1";
const QString ApiOfGetUrlById = "http://localhost:3000/song/url?id=%1";
const QString ApiOfGetLyricById = "http://localhost:3000/lyric?id=%1";
const QString ApiOfCheckMusic = "http://localhost:3000/check/music?id=%1";
MainWindow::MainWindow(QWidget *parent) :
  QMainWindow(parent),
  ui(new Ui::MainWindow)
{
  Init_Reply ();
  ui->setupUi(this);
}

MainWindow::~MainWindow()
{
  delete ui;
}
void MainWindow::Init_Reply () {
  SerachReply = 0;
  GetLinkReply = 0;
  LyricReply  = 0;
  NumInPlayList = 0;
  CheckReply = 0;
  Player = new QMediaPlayer(this);
  PlayerList = new QMediaPlaylist(this);
  song_url = "";
  Lyric = "";
}
void MainWindow::GetLinkBySongId (QString SongId) {
  if (GetLinkReply) {
    GetLinkReply->deleteLater ();
  }
  QUrl url = QUrl(ApiOfGetUrlById.arg (SongId));
  QNetworkAccessManager *manager = new QNetworkAccessManager(this);
  Request.setUrl (url);
  Request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
  GetLinkReply = manager->get (Request);
  connect (GetLinkReply, &QNetworkReply::finished, [ = ]()mutable{
    if (GetLinkReply->error () == QNetworkReply::NoError) {
      QByteArray array = GetLinkReply->readAll ();
      QJsonParseError jsonError;
      QJsonDocument json = QJsonDocument::fromJson (array, &jsonError);
      if (jsonError.error != QJsonParseError::NoError) {
        qDebug() << "ERROR" << jsonError.errorString ();
      }
      if (json.isObject ()) {
        QJsonObject obj = json.object ();
        QJsonValue val = obj.value ("data");
        QJsonArray obj_1 = obj["data"].toArray ();
        song_url = "";
        for (int row = 0; row < obj_1.size (); ++row) {
          QJsonObject jobj = obj_1[row].toObject();
          for (QJsonObject::Iterator it = jobj.begin(); it != jobj.end(); it++) {
            if (it.key () == "url") {
              song_url = it.value ().toString ();
              break;
            }
          }
          break;
        }
      }
      else {
        qDebug() << "Error" << GetLinkReply->errorString ();
      }
    }
    emit AlreadyGetLink ();
  });
}
void MainWindow::GetSuggestionByKeywords (QString keyword) {
  QUrl url = QUrl(ApiOfGetSuggestionBykeyword.arg (keyword));
  QNetworkAccessManager *manager = new QNetworkAccessManager;
  Request.setUrl (url);
  Request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
  SerachReply = manager->  get (Request);
  connect (SerachReply, &QNetworkReply::finished, [ = ]()mutable{
    if (SerachReply->error () == QNetworkReply::NoError) {
      QByteArray array = SerachReply->readAll ();
      QJsonParseError jsonError;
      QJsonDocument json = QJsonDocument::fromJson (array, &jsonError);
      if (jsonError.error != QJsonParseError::NoError) {qDebug() << "ERROR" << jsonError.errorString ();}
      if (json.isObject ()) {
        QJsonObject obj = json.object ();
//        QStringList keys = obj.keys ();
//        for (int i = 0; i < keys.size (); ++i) {
//          qDebug() << "keys == " << i << " == :" << keys.at (i);
//        }
        if (obj.contains ("result")) {
          QJsonValue result = obj.value ("result");
          QJsonObject obj1_1 = result.toObject ();
//          if (obj1_1.contains ("songs")) {qDebug() << "YES it has";}
          result = obj1_1.value ("songs");
          QJsonArray json_array = obj1_1["songs"].toArray ();
          for (int row = 0; row < json_array.size (); ++row) {
            QJsonObject jobj = json_array[row].toObject();
            for (QJsonObject::Iterator it = jobj.begin(); it != jobj.end(); it++) {
              /*得到的信息 请查看 serachbykeywords.json*/
            }
          }
        }
      }
    }
    else {qDebug() << "Error" << SerachReply->errorString ();}
  });
  emit AlreadyGetSuggestion();
}
void MainWindow::GetLyricBySongId (QString SongId) {
  if (LyricReply) {
    LyricReply->deleteLater ();
  }
  QUrl url = QUrl(ApiOfGetLyricById.arg (SongId));
  QNetworkAccessManager *manager = new QNetworkAccessManager;
  Request.setUrl (url);
  Request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
  LyricReply = manager->  get (Request);
  connect (LyricReply, &QNetworkReply::finished, [ = ]()mutable{
    if (LyricReply->error () == QNetworkReply::NoError) {
      QByteArray array = SerachReply->readAll ();
      QJsonParseError jsonError;
      QJsonDocument json = QJsonDocument::fromJson (array, &jsonError);
      if (jsonError.error != QJsonParseError::NoError) {
        qDebug() << "ERROR" << jsonError.errorString ();
      }
      else {
        if (json.isObject ()) {
          QJsonObject obj = json.object ();
          QJsonValue val = obj.value ("lrc");
          //        qDebug()<<val;
          QJsonObject jobj = val.toObject ();
          for (QJsonObject::Iterator it = jobj.begin(); it != jobj.end(); it++) {
            /*"lyric"     QJsonValue(string,"[00:04.050]\n[00:12.570]难以忘记初次见你\n....*/
//                        qDebug()<<it.key ()<<"   "<<it.value ();
//                        qDebug()<<"\n";
            if (it.key () == "lyric") {
              Lyric = it.value ().toString ();
              break;
            }
          }
        }
      }
    }
    else{
      qDebug() << "Error" << LyricReply->errorString ();
    }
  });
  emit AlreadyGetLyric ();
}
void MainWindow::ShowLyric(QString lyr) {
  lyr = Lyric;
  /*将歌词按行分解为歌词列表*/
  QStringList lines = lyr.split ("\n");
  //这个是时间标签的格式[00:05.54]
  //正则表达式d{2}表示匹配2个数字
  QRegExp rx("\\[\\d{2}:\\d{2}\\.\\d{2}\\]");
  foreach (QString oneline, lines) {
    QString temp = oneline;
    temp.replace(rx, "");//用空字符串替换正则表达式中所匹配的地方,这样就获得了歌词文本
    // 然后依次获取当前行中的所有时间标签，并分别与歌词文本存入QMap中
    //indexIn()为返回第一个匹配的位置，如果返回为-1，则表示没有匹配成功
    //正常情况下pos后面应该对应的是歌词文件
    int pos = rx.indexIn(oneline, 0);
    while (pos != -1) { //表示匹配成功
      QString cap = rx.cap(0);//返回第0个表达式匹配的内容
      // 将时间标签转换为时间数值，以毫秒为单位
      QRegExp regexp;
      regexp.setPattern("\\d{2}(?=:)");
      regexp.indexIn(cap);
      int minute = regexp.cap(0).toInt();
      regexp.setPattern("\\d{2}(?=\\.)");
      regexp.indexIn(cap);
      int second = regexp.cap(0).toInt();
      regexp.setPattern("\\d{2}(?=\\])");
      regexp.indexIn(cap);
      int millisecond = regexp.cap(0).toInt();
      qint64 totalTime = minute * 60000 + second * 1000 + millisecond * 10;
      // 插入到lrc_map中
      lrc_map.insert(totalTime, temp);
      pos += rx.matchedLength();
      pos = rx.indexIn(oneline, pos);//匹配全部
    }
  }
}
void MainWindow::Play_Music (int Index) {
  PlayerList->setCurrentIndex (Index);
  Player->play ();
}
void MainWindow::Add_Music (QString url) {
  if (url == "") {
    return ;
  }
  else {
    PlayerList->addMedia (QUrl(url));
    NumInPlayList++;
  }
}
bool MainWindow::Check_Music (QString SongId) {
  QUrl url = QUrl(ApiOfCheckMusic.arg (SongId));
  QNetworkAccessManager *manager = new QNetworkAccessManager;
  Request.setUrl (url);
  Request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
  CheckReply = manager->  get (Request);
  connect (CheckReply, &QNetworkReply::finished, []() {
    if (CheckReply->error () == QNetworkReply::NoError) {
      QByteArray array = CheckReply->readAll ();
      QJsonParseError jsonError;
      QJsonDocument json = QJsonDocument::fromJson (array, &jsonError);
      if (jsonError.error != QJsonParseError::NoError) {
        qDebug() << "ERROR" << jsonError.errorString ();
      }
      else {
        if (json.isObject ()) {
          QJsonObject obj = json.object ();

        }
      }
    }
    else {
      qDebug() << "Error" << CheckReply->errorString ();
    }
  });
}
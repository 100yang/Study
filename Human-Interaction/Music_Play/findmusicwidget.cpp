#include "findmusicwidget.h"
#include "ui_findmusicwidget.h"
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
#include <QNetworkAccessManager>
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
const QString GetNewSong = "http://localhost:3000/top/song?type=%1";
const QString GetRecommend = "http://localhost:3000/personalized/newsong";
FindMusicWidget::FindMusicWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FindMusicWidget)
{

    ui->setupUi(this);
    GetSerachResult (ui->ALL, "0");
    connect(ui->NewSongWidget, &QTabWidget::currentChanged, [this]()mutable{
        auto NowWidgetIndex = ui->NewSongWidget->currentIndex ();
        if (NowWidgetIndex == 0) {
            GetSerachResult (ui->ALL, "0");
        }
        else if (NowWidgetIndex == 1) {
            GetSerachResult (ui->China, "7");
        }
        else if (NowWidgetIndex == 2) {
            GetSerachResult (ui->English, "96");
        }
        else if (NowWidgetIndex == 3) {
            GetSerachResult (ui->Korea, "16");
        }
        else{
            GetSerachResult (ui->Japan, "8");
        }
    });
    connect(ui->InRankWidget, &QTabWidget::currentChanged, [this]()mutable{
        auto NowWidgetIndex = ui->InRankWidget->currentIndex ();
        if (NowWidgetIndex == 0) {
            GetRankResult (ui->NewSongRank, "0");
        }
        else if (NowWidgetIndex == 1) {
            GetRankResult (ui->HotSongRank, "1");
        }
        else if (NowWidgetIndex == 2) {
            GetRankResult (ui->BillboardRank, "6");
        }
        else if (NowWidgetIndex == 3) {
            GetRankResult (ui->MelonRank, "11");
        }
        else{
            GetRankResult (ui->OriconRank, "10");
        }
    });
    connect (ui->ALL, &DisplayResult::AlreadGetSongId, [this]()mutable{
        SongName  = ui->ALL->SongName;
        SingerName = ui->ALL->SingerName;
        SongId = ui->ALL->SongId;
        emit AlreadyGetSongInfo();
    });
    connect (ui->China, &DisplayResult::AlreadGetSongId, [this]()mutable{
        SongName  = ui->China->SongName;
        SingerName = ui->China->SingerName;
        SongId = ui->China->SongId;
        emit AlreadyGetSongInfo();
    });
    connect (ui->Korea, &DisplayResult::AlreadGetSongId, [this]()mutable{
        SongName  = ui->Korea->SongName;
        SingerName = ui->Korea->SingerName;
        SongId = ui->Korea->SongId;
        emit AlreadyGetSongInfo();
    });
    connect (ui->English, &DisplayResult::AlreadGetSongId, [this]()mutable{
        SongName  = ui->English->SongName;
        SingerName = ui->English->SingerName;
        SongId = ui->English->SongId;
        emit AlreadyGetSongInfo();
    });
    connect (ui->Japan, &DisplayResult::AlreadGetSongId, [this]()mutable{
        SongName  = ui->Japan->SongName;
        SingerName = ui->Japan->SingerName;
        SongId = ui->Japan->SongId;
        emit AlreadyGetSongInfo();
    });
    connect (ui->ALL, &DisplayResult::AlreadyAddLikeMusic, [this]()mutable{
        SongInfo = ui->ALL->SongInfo;
        emit AlreadyAddLikeMusic_Find();
    });
    connect (ui->China, &DisplayResult::AlreadyAddLikeMusic, [this]()mutable{
        SongInfo = ui->China->SongInfo;
        emit AlreadyAddLikeMusic_Find();
    });
    connect (ui->Korea, &DisplayResult::AlreadyAddLikeMusic, [this]()mutable{
        SongInfo = ui->Korea->SongInfo;
        emit AlreadyAddLikeMusic_Find();
    });
    connect (ui->English, &DisplayResult::AlreadyAddLikeMusic, [this]()mutable{
        SongInfo = ui->English->SongInfo;
        emit AlreadyAddLikeMusic_Find();
    });
    connect (ui->Japan, &DisplayResult::AlreadyAddLikeMusic, [this]()mutable{
        SongInfo = ui->Japan->SongInfo;
        emit AlreadyAddLikeMusic_Find();
    });
}

FindMusicWidget::~FindMusicWidget()
{
    delete ui;
}
void FindMusicWidget::init (){
    SongInfo.clear ();
   GetNewSongReply = nullptr;
    GetRecommendReply= nullptr;
    GetTVReply= nullptr;
    GetRankReply= nullptr;
   GetSingerReply= nullptr;
   SerachResult.clear ();
    SongId = "";
    SongName ="";
   SingerName="";
}
void FindMusicWidget::GetSerachResult (DisplayResult *w, QString area) {
    if(GetNewSongReply){
        GetNewSongReply->deleteLater ();
    }

    QUrl url = QUrl(GetNewSong.arg (area));
    GetNewSongReply = Manager.get (QNetworkRequest(url));
    QEventLoop loop;
    connect (GetNewSongReply, &QNetworkReply::finished, &loop, &QEventLoop::quit);
    loop.exec ();
    if (GetNewSongReply->error () == QNetworkReply::NoError) {
        QByteArray Array = GetNewSongReply->readAll ();
        QJsonParseError JsonError;
        QJsonDocument json = QJsonDocument::fromJson (Array, &JsonError);
        if (JsonError.error == QJsonParseError::NoError) {
            QJsonObject Obj = json.object ();
            QJsonArray JsonArray = Obj["data"].toArray ();
            for (int i = 0; i < JsonArray.size (); ++i) {
                QJsonObject jobj = JsonArray[i].toObject();
                auto SongName = jobj["name"].toString ();
                auto SongId = QString::number (jobj["id"].toInt ());
                QJsonArray Artists = jobj["artists"].toArray ();
                auto Singer = GetSingerInfo (Artists);
                QJsonObject album = jobj["album"].toObject ();
                auto albumName = album["name"].toString ();
                auto SongInfo = SongName + "  " + Singer.first;
                auto duration = QString::number (jobj["duration"].toInt ());
//                qDebug() << "SongInfo == " << SongInfo;
                //SingerInfo -- SongId,SingerImage
                /*这样SongId会在第一个*/
                QVector<QString> v;
                v.clear ();
                v.push_back (SongId);
                v.push_back (Singer.second);
                v.push_back (albumName);
                v.push_back (SongName);
                v.push_back (Singer.first);
                v.push_back (duration);
//                SerachResult.insert (SongInfo,v);
                w->Add (v);
            }
        }
        else {qDebug() << "GetSerachReply JSONERROR:" << JsonError.errorString ();}
    }
    else {qDebug() << "GetSerachReply Error" << GetNewSongReply->errorString ();}
    emit AlreadyGetSerachResult ();
}
QPair<QString, QString> FindMusicWidget::GetSingerInfo(QJsonArray array) {
    QString SingerName = "";
    QString SingerImage = "";
    for (int row = 0; row < array.size (); ++row) {
        QJsonObject jobj = array[row].toObject();
        SingerName = jobj["name"].toString ();
        SingerImage = jobj["picUrl"].toString ();
    }
    if (SingerImage == "") SingerImage = "https://p2.music.126.net/6y-UleORITEDbvrOLV0Q8A==/5639395138885805.jpg";
    auto result = qMakePair(SingerName, SingerImage);
    return result;
}
void FindMusicWidget::GetRankResult (DisplayResult *w, QString area){
    if(GetRankReply){
        GetRankReply->deleteLater ();
    }
    QUrl url = QUrl(GetNewSong.arg (area));
    GetRankReply = Manager.get (QNetworkRequest(url));
    QEventLoop loop;
    connect (GetRankReply, &QNetworkReply::finished, &loop, &QEventLoop::quit);
    loop.exec ();
    if (GetRankReply->error () == QNetworkReply::NoError) {
        QByteArray Array = GetRankReply->readAll ();
        QJsonParseError JsonError;
        QJsonDocument json = QJsonDocument::fromJson (Array, &JsonError);
        if (JsonError.error == QJsonParseError::NoError) {
            QJsonObject Obj = json.object ();
            QJsonArray JsonArray = Obj["result"].toArray ();
            for (int i = 0; i < JsonArray.size (); ++i) {
                QJsonObject jobj = JsonArray[i].toObject();
                auto SongName = jobj["name"].toString ();
                auto SongId = QString::number (jobj["id"].toInt ());

                QJsonObject SongObj = jobj["song"].toObject ();
                QJsonArray Artists = SongObj["artists"].toArray ();
                auto Singer = GetSingerInfo (Artists);

                QJsonObject album = jobj["album"].toObject ();
                auto albumName = album["name"].toString ();
                auto SongInfo = SongName + "  " + Singer.first;
                auto duration = QString::number (jobj["duration"].toInt ());
//                qDebug() << "SongInfo == " << SongInfo;
                //SingerInfo -- SongId,SingerImage
                /*这样SongId会在第一个*/
                QVector<QString> v;
                v.clear ();
                v.push_back (SongId);
                v.push_back (Singer.second);
                v.push_back (albumName);
                v.push_back (SongName);
                v.push_back (Singer.first);
                v.push_back (duration);
                w->Add (v);
            }
        }
        else {qDebug() << "GetRankReply JSONERROR:" << JsonError.errorString ();}
    }
    else {qDebug() << "GetRankReply Error" << GetRankReply->errorString ();}
    emit AlreadyGetRecommendResult();
}
void FindMusicWidget::GetSingerResult (){}
void FindMusicWidget::GetSongTableResult (){}
void FindMusicWidget::GetTVResult (){}
void FindMusicWidget::GetRecommendResult (){
    if(GetRecommendReply){
        GetRecommendReply->deleteLater ();
    }
    QUrl url = QUrl(GetRecommend);
    GetRecommendReply = Manager.get (QNetworkRequest(url));
    QEventLoop loop;
    connect (GetRecommendReply, &QNetworkReply::finished, &loop, &QEventLoop::quit);
    loop.exec ();
    if (GetRecommendReply->error () == QNetworkReply::NoError) {
        QByteArray Array = GetRecommendReply->readAll ();
        QJsonParseError JsonError;
        QJsonDocument json = QJsonDocument::fromJson (Array, &JsonError);
        if (JsonError.error == QJsonParseError::NoError) {
            QJsonObject Obj = json.object ();
            QJsonArray JsonArray = Obj["result"].toArray ();
            for (int i = 0; i < JsonArray.size (); ++i) {
                QJsonObject jobj = JsonArray[i].toObject();
                auto SongName = jobj["name"].toString ();
                auto SongId = QString::number (jobj["id"].toInt ());

                QJsonObject SongObj = jobj["song"].toObject ();
                QJsonArray Artists = SongObj["artists"].toArray ();
                auto Singer = GetSingerInfo (Artists);

                QJsonObject album = jobj["album"].toObject ();
                auto albumName = album["name"].toString ();
                auto SongInfo = SongName + "  " + Singer.first;
                auto duration = QString::number (jobj["duration"].toInt ());
//                qDebug() << "SongInfo == " << SongInfo;
                //SingerInfo -- SongId,SingerImage
                /*这样SongId会在第一个*/
                QVector<QString> v;
                v.clear ();
                v.push_back (SongId);
                v.push_back (Singer.second);
                v.push_back (albumName);
                v.push_back (SongName);
                v.push_back (Singer.first);
                v.push_back (duration);
//                SerachResult.insert (SongInfo,v);
                ui->Recommend->Add (v);
            }
        }
        else {qDebug() << "GetRecommendReply JSONERROR:" << JsonError.errorString ();}
    }
    else {qDebug() << "GetRecommendReply Error" << GetRecommendReply->errorString ();}
    emit AlreadyGetRecommendResult();
}

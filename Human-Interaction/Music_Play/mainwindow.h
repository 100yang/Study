#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "MyLyric.h"
#include <QMainWindow>
#include <QMediaPlayer>
#include <QMediaPlaylist>
#include <QPlainTextEdit>
#include <QLineEdit>
#include <QString>
#include <QDebug>
#include <QUrl>
#include <QPair>
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
#include <QMultiMap>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    /* 初始化*/
    Q_INVOKABLE void Init_Reply();
    /**
     * 通过关键词搜索，得到歌曲的信息
     * @param keyword [description]
     */
    /*json 文件 请查看serachbykeywords.json*/
    Q_INVOKABLE void GetSuggestionByKeywords(QString keyword);
    /**
     * 通过id 得到歌曲的播放链接
     * @param SongId [description]
     */
    /*json 文件 请查看GetUrlById.json*/
    Q_INVOKABLE  void GetLinkBySongId(QString SongId);
    /**
     * 通过id获得歌曲的歌词
     * @param SongId [description]
     */
    /*json 文件 请查看 GetLyricById.json*/
    Q_INVOKABLE void GetLyricBySongId(QString SongId);
    Q_INVOKABLE void AddMusicInPlayList(QString SongInfo, QString SongId);
    Q_INVOKABLE void ShowSuggestion(QString SongName, QString SingerInfo, QString SongId);
    Q_INVOKABLE QString GetSingerInfo(QJsonArray array);
    Q_INVOKABLE void resolve_lrc(QString ly);
    Q_INVOKABLE void UpdateTime(qint64 time,qint64 total_time_value);
//    Q_INVOKABLE QString GetSingerImage(QJsonArray array);
signals :
    void AlreadyGetLink();
    void AlreadyGetLyric();
    void AlreadyGetKeyword ();
    void AlreadyToPlay();
    void AlreadyGetSuggestion();
    void IWantKnow();
private:
    Ui::MainWindow *ui;
    int PLayClickNum;/*0 Pause 1 Play*/
    int RandomClickNum;/*点击的次数决定播放方式 循环0 单曲 1 随机 2*/
    int LyricNum;
    /*网络部分*/
    QNetworkAccessManager Manager;
    QNetworkReply *SerachReply;
    QNetworkReply *GetLinkReply;
    QNetworkReply *LyricReply;

    QString SongUrl;
    QString Keyword;
    QString LyricString;

    QMultiMap<QString, QString> SuggestInfo;
    /*音乐播放*/
    MyLyric *lrc;
    /*歌词和时间*/
    QMap<qint64,QString> LyricMap;
    /*歌曲ID对应的歌词*/
    QMap<QString,QString> SongLyric;
    QMap<QString, QString> SongInfoList;
    QMediaPlayer *Player;
    QMediaPlaylist *PlayerList;
};

#endif // MAINWINDOW_H

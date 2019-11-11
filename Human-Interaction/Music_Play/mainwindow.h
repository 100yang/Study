#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
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
    void Init_Reply();
    void GetSerachFinished();
    /**
     * 通过关键词搜索，得到歌曲的信息
     * @param keyword [description]
     */
    /*json 文件 请查看serachbykeywords.json*/
    void GetSuggestionByKeywords(QString keyword);
    /**
     * 通过id 得到歌曲的播放链接
     * @param SongId [description]
     */
    /*json 文件 请查看GetUrlById.json*/
    QString GetLinkBySongId(QString SongId);
    /**
     * 通过id获得歌曲的歌词
     * @param SongId [description]
     */
    /*json 文件 请查看 GetLyricById.json*/
    void GetLyricBySongId(QString SongId);
    void ShowLyric(QString lyr);
    void PlayMusic(int Index);
    void AddMusicInPlayList(QString Song, QString Id);
    void ShowPlayList();
    void ShowSuggestion(QString SongName, QString Singer, QString SongId);
    bool CheckMusic(QString SongId);
    void GetSinger();
signals :
    void AlreadyGetLink();
    void AlreadyGetLyric();
    void AlreadyGetKeyword ();
    void AlreadyToPlay();
    void AlreadyGetSuggestion();
private:
    Ui::MainWindow *ui;


    /*网络部分*/
    QNetworkAccessManager Manager;
    QNetworkRequest Request;
    QNetworkReply *SerachReply;
    QNetworkReply *GetLinkReply;
    QNetworkReply *CheckReply;
    QNetworkReply *LyricReply;


    QString SongUrl;
    QString Keyword;
    QString Lyric;

    QMultiMap<QString, QString> SuggestInfo;
    /*音乐播放*/
    QMap<QString, QString> *WaitToPlay;
    int NumInPlayList;
    QMediaPlayer *Player;
    QMediaPlaylist *PlayerList;
};

#endif // MAINWINDOW_H

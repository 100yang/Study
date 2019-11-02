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
    void GetLinkBySongId(QString SongId);
    /**
     * 通过id获得歌曲的歌词
     * @param SongId [description]
     */
    /*json 文件 请查看 GetLyricById.json*/
    void GetLyricBySongId(QString SongId);
    void ShowLyric(QString lyr);
    void Play_Music(int Index);
    void Add_Music(QString url);
    bool Check_Music(QString SongId);
signals :
    void AlreadyGetLink();
    void AlreadyGetLyric();
    void AlreadyGetSuggestion();
private:
    int NumInPlayList;
    Ui::MainWindow *ui;
    QNetworkAccessManager Manager;
    QNetworkRequest Request;
    QNetworkReply *SerachReply;
    QNetworkReply *GetLinkReply;
    QNetworkReply *CheckReply;
    /*获得歌曲歌词*/
    QNetworkReply *LyricReply;
    /*播放歌曲的链接*/
    QString song_url;
    /*得到的歌词*/
    QString Lyric;
//    QString

    QMediaPlayer *Player;
    QMediaPlaylist *PlayerList;
};

#endif // MAINWINDOW_H

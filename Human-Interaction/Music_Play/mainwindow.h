#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "MyLyric.h"
#include "playlistwidget.h"
#include "displayresult.h"
#include "localmusicwidget.h"
#include "likemusicwidget.h"
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
#include <QListWidget>
#include <QEventLoop>
#include <QStringList>
#include <QMultiMap>
#include <QListWidget>
#include <QEvent>
#include <QPoint>
#include <QTableWidget>
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
    Q_INVOKABLE void GetSerachByKeywords(QString keyword, int page);
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
    /**
     * [AddMusicInPlayList  将歌曲加入到播放队列]
     * @param SongInfo [歌曲信息]
     * @param SongId   [歌曲ID]
     */
    Q_INVOKABLE void AddMusicInPlayList (QString SongInfo, QString SongId);
    /**
     * 得到歌手的信息
     */
    Q_INVOKABLE QPair<QString, QString> GetSingerInfo(QJsonArray array);
    /**
     * [resolve_lrc 歌词显示]
     * @param ly [description]
     */
    Q_INVOKABLE void resolve_lrc(QString ly);
    Q_INVOKABLE void UpdateTime(qint64 time, qint64 total_time_value);
    Q_INVOKABLE void ShowLyric();
    void Test(QString SongId);
    /**
     * [StyleOption 一些样式的设定]
     */
    void StyleOption();
    /**
     * [GetHotSerach 得到热搜列表]
     */
    Q_INVOKABLE void GetHotSerach();
    /**
     * [AddListen 加入监听]
     */
    Q_INVOKABLE void AddListen();

signals :
    void AlreadyGetLink();
    void AlreadyGetLyric();
    void AlreadyGetKeyword ();
    void AlreadyToPlay();
    void AlreadyGetSuggestion();
protected :
    bool eventFilter ( QObject *watched, QEvent *ev );
    // watched:代表被监控的组件  ev:代表要转发的事件
    //返回true,表示该事件也被过滤掉(处理),无需再转发了
    //返回false,则正常转发给watched
public slots:
private:
    Ui::MainWindow *ui;
    int PLayClickNum;/*0 Pause 1 Play*/
    int RandomClickNum;/*点击的次数决定播放方式 循环0 单曲 1 随机 2*/
    int LyricNum;
    int ListButtonClickNum ;
    int ReplyNum;
    QPoint offset;
    QListWidget *ListWidget;
    /*网络部分*/
    QNetworkAccessManager Manager;
    QNetworkReply *SerachReply;
    QNetworkReply *GetLinkReply;
    QNetworkReply *LyricReply;

    QString SongUrl;
    QString Keyword;
    QString LyricString;
    QMap<QString, QVector<QString> > SerachResultInfo;
    /*歌词显示*/
    MyLyric *lrc;
    /*搜索结果显示*/
    QWidget *PageWidget;
    PlayListWidget *playlistwidget;
    LocalMusicWidget *localmusicwidget;
    LikeMusicWidget *likemusicwidget;
    /*歌曲和ID的映射*/
    QMap<QString, QString> SongAndId;
    /*歌词和时间*/
    QMap<qint64, QString> LyricMap;
    /*歌曲ID对应的歌词*/
    QMap<QString, QString> SongLyric;
    /*播放队列中的歌曲的信息  歌曲链接--歌曲名称 歌手 歌手图片*/
    QMap<QString, QVector<QString> > SongInfoList;
    QMediaPlayer *Player;
    QMediaPlaylist *PlayerList;
};

#endif // MAINWINDOW_H

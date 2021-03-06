#ifndef DISPLAYRESULT_H
#define DISPLAYRESULT_H
#include "dialog.h"
#include <QWidget>
#include <QVector>
#include <QString>
#include <QMediaPlayer>
#include <QMediaPlaylist>
#include <QPlainTextEdit>
#include <QLineEdit>
#include <QString>
#include <QTime>
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
#include <QEvent>
#include <QDialog>
namespace Ui {
class DisplayResult;
}

class DisplayResult : public QWidget {
    Q_OBJECT

  public:
    explicit DisplayResult(QWidget *parent = 0);
    ~DisplayResult();
    void Add(QVector<QString> v);
    void GetLinkBySongId (QString SongId);
    QString SongId;
    QString SongName;
    QString SingerName;
    QString SongUrl;
    QVector<QString> SongInfo;
  public slots:
    void AddInPlayList();
    void AddInLikeMusic();
  protected :
    void contextMenuEvent (QContextMenuEvent *event);
  signals:
    void AlreadGetSongId();
    void AlreadyAddLikeMusic();
    void RemoveLikeMusic();
  private:
    Ui::DisplayResult *ui;
    QNetworkAccessManager Manager;
    QNetworkReply *DownloadMusicReply;
    int ClickNum;
    Dialog *DownloadFile;
};

#endif // DISPLAYRESULT_H

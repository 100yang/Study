#ifndef VIDEOPLAY_H
#define VIDEOPLAY_H

#include <QWidget>
#include <QMediaPlayer>
#include <QMediaPlaylist>
#include <QPlainTextEdit>
#include <QLineEdit>
#include <QString>
#include <QDebug>
#include <QPicture>
#include <QUrl>
#include <QPushButton>
#include <QLineEdit>
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
#include <QMessageBox>
#include <QJsonParseError>
#include <QEventLoop>
#include <QMediaPlayer>
#include <QPushButton>
#include <QStandardItemModel>
#include <QStandardItem>
#include <QSound>
#include <QList>
#include <QListWidgetItem>
#include <QTextEdit>
#include <QMultiMap>
#include <QTime>
#include <QHBoxLayout>
#include <QVideoWidget>
namespace Ui {
class VideoPlay;
}

class VideoPlay : public QWidget
{
    Q_OBJECT

public:
    explicit VideoPlay(QWidget *parent = 0);
    ~VideoPlay();
    void addToPlaylist(const QStringList& fileNames);
private:
    Ui::VideoPlay *ui;
    QMediaPlayer *player;
    QVideoWidget *videoWidget;
    QMediaPlaylist *playlist;
    QString m_fileName;
    QMediaPlayer::State  m_playerState;
private slots:
    void openFile();
    void playVideo();
    void stopVideo();
    void fullScr();
};

#endif // VIDEOPLAY_H

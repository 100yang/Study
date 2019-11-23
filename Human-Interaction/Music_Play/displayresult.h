#ifndef DISPLAYRESULT_H
#define DISPLAYRESULT_H

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

class DisplayResult : public QWidget
{
    Q_OBJECT

public:
    explicit DisplayResult(QWidget *parent = 0);
    ~DisplayResult();
    void Add(QVector<QString> v);
    QString SongId;
    QString SongName;
    QString SingerName;
signals:
    void AlreadGetSongId();
private:
    Ui::DisplayResult *ui;

    int ClickNum;
};

#endif // DISPLAYRESULT_H

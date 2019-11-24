#ifndef FINDMUSICWIDGET_H
#define FINDMUSICWIDGET_H

#include <QWidget>
#include "displayresult.h"
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
namespace Ui {
class FindMusicWidget;
}

class FindMusicWidget : public QWidget
{
    Q_OBJECT

public:
    explicit FindMusicWidget(QWidget *parent = 0);
    ~FindMusicWidget();
    /**
     * @brief GetSerachResult
     * @param area
     * 具体的json文件请查看newsong.json
     */
    void GetSerachResult(DisplayResult *w, QString area);
    QPair<QString, QString> GetSingerInfo(QJsonArray array);
    QVector<QString> SongInfo;
    QMap<QString, QVector<QString> > SerachResult;
    QString SongId;
    QString SongName;
    QString SingerName;
signals:
    void AlreadyGetSerachResult ();
    void AlreadyGetSongInfo();
    void AlreadyAddLikeMusic_Find();
private:
    Ui::FindMusicWidget *ui;
};

#endif // FINDMUSICWIDGET_H

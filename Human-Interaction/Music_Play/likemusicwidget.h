#ifndef LIKEMUSICWIDGET_H
#define LIKEMUSICWIDGET_H

#include <QWidget>
#include "dialog.h"
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
#include <QTableWidget>
#include <QHeaderView>
#include <QAction>
#include <QMenu>
#include <QPushButton>
#include <QCursor>
#include <QMessageBox>
namespace Ui {
class LikeMusicWidget;
}

class LikeMusicWidget : public QWidget {
  Q_OBJECT

 public:
  explicit LikeMusicWidget(QWidget *parent = 0);
  ~LikeMusicWidget();
  void Add(QVector<QString> v);
  void AddInLikeList();
  QString SongId;
  QString SongName;
  QString SongUrl;
  QString SingerName;
  QVector<QString> info;
 public slots:
  void AddInList();
  void RemoveSong();
 protected :
  void contextMenuEvent (QContextMenuEvent *event);
 signals:
  void AlreadyGetSongId();
 private:
  Ui::LikeMusicWidget *ui;
};

#endif // LIKEMUSICWIDGET_H

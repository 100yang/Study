#include "showplaylist.h"
#include "mainwindow.h"
#include <QMenu>
#include <QAction>
#include <QActionEvent>
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
#include <QPushButton>
ShowPlayList::ShowPlayList(QWidget *parent) : QListWidget(parent) {

}
ShowPlayList::~ShowPlayList () {}
/*鼠标右击事件*/
void ShowPlayList::contextMenuEvent(QContextMenuEvent *event) {
	QMenu menu;
	QAction *add = new QAction("加入播放队列", this);
	menu.addAction(add);
//    connect (this,&ShowPlayList::)
	QAction *NextPlay = new QAction("下一首播放", this);
	menu.addAction(NextPlay);
	menu.exec (event->globalPos ());
}

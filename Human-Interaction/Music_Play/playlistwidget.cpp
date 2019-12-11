#include "playlistwidget.h"
#include "ui_playlistwidget.h"
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
#include <QMenu>
#include <QAction>
#include <QCursor>
PlayListWidget::PlayListWidget(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PlayListWidget) {
    NowIndex = 0;
    setWindowTitle ("播放列表");
    ListWidget = new QListWidget(this);
    QHBoxLayout *layout = new QHBoxLayout(this);
    layout->addWidget (ListWidget);
}

PlayListWidget::~PlayListWidget() {
    delete ui;
}
void PlayListWidget::contextMenuEvent (QContextMenuEvent *) {
    QMenu *menu = new QMenu(ListWidget);
    QAction *RemoveSong = menu->addAction("移出播放队列");
    connect (RemoveSong, &QAction::triggered, this, &PlayListWidget::RemoveList);
    menu->exec (QCursor::pos ());//在鼠标当前位置显示
}
void PlayListWidget::RemoveList () {
    NowIndex = ListWidget->currentIndex ().row ();
    emit AlreadyRemove();
}

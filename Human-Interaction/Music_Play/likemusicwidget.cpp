#include "likemusicwidget.h"
#include "ui_likemusicwidget.h"
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
LikeMusicWidget::LikeMusicWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LikeMusicWidget)
{
    SongId = "";
    ui->setupUi(this);
    /*整行选择*/
    ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);//只读

}

LikeMusicWidget::~LikeMusicWidget()
{
    delete ui;
}
void LikeMusicWidget::Add (QVector<QString> v) {
    auto Rowindex = ui->tableWidget->rowCount ();
    ui->tableWidget->insertRow (Rowindex);
    QTableWidgetItem *item0 = new QTableWidgetItem;
    item0->setText (v.at (0));
    item0->setTextAlignment(Qt::AlignVCenter | Qt::AlignHCenter);
    ui->tableWidget->setVerticalHeaderItem (Rowindex, item0);
    QString Num = "0%1";
    Num = (Rowindex >= 9) ? QString::number (Rowindex + 1) : Num.arg (Rowindex + 1);
    QTableWidgetItem *item = new QTableWidgetItem;
    item->setText (Num);
    item->setTextAlignment(Qt::AlignVCenter | Qt::AlignHCenter);
    ui->tableWidget->setItem (Rowindex, 0, item);

    QWidget *w = new QWidget;
    QPushButton *likebtn = new QPushButton;
    QPushButton *Downloadbtn = new QPushButton;
    QIcon icon;
    icon.addFile (":/Images/fulllove.png");
    likebtn->setIcon (icon);
    QIcon icon1;
    icon1.addFile (":/Images/download.png");
    Downloadbtn->setIcon (icon1);
    QHBoxLayout *layout = new QHBoxLayout(w);
    layout->addWidget (likebtn);
    layout->addWidget (Downloadbtn);
    layout->setMargin (0);
    ui->tableWidget->setCellWidget (Rowindex, 1, w);


    connect (likebtn, &QPushButton::clicked, [this, likebtn]()mutable{
        likebtn->setIcon (QIcon(":/Images/lovemusic.png"));
        RemoveSong ();
    });
    connect (Downloadbtn, &QPushButton::clicked, [this]()mutable{
        QMessageBox mesg;
        mesg.warning (this, "警告", "此功能还没实现");
    });

    QTableWidgetItem *item2 = new QTableWidgetItem;//歌曲名称
    item2->setText ( v.at (1));
    item2->setTextAlignment(Qt::AlignVCenter | Qt::AlignHCenter);
    ui->tableWidget->setItem (Rowindex, 2, item2);

    QTableWidgetItem *item3 = new QTableWidgetItem;//歌手
    item3->setText (v.at (2));
    item3->setTextAlignment(Qt::AlignVCenter | Qt::AlignHCenter);
    ui->tableWidget->setItem (Rowindex, 3, item3);

    QTableWidgetItem *item4 = new QTableWidgetItem;//专辑
    item4->setText (v.at (3));
    item4->setTextAlignment(Qt::AlignVCenter | Qt::AlignHCenter);
    ui->tableWidget->setItem (Rowindex, 4, item4);

    QString TimeStr = "未知";
    if (v.size () == 6) {
        qint64 tot = v.at (5).toInt ();
        QTime total_time(0, (tot / 60000) % 60, (tot / 1000) % 60);
        TimeStr = total_time.toString("mm:ss");
    }
    QTableWidgetItem *item5 = new QTableWidgetItem;//时长
    item5->setText (TimeStr);
    item5->setTextAlignment(Qt::AlignVCenter | Qt::AlignHCenter);
    ui->tableWidget->setItem (Rowindex, 5, item5);
}
void LikeMusicWidget::AddInList () {
    auto index = ui->tableWidget->currentRow ();
    auto row = ui->tableWidget->verticalHeaderItem (index);
    SongId = row->text ();
    SongName = ui->tableWidget->item (index, 2)->text ();
    SingerName =  ui->tableWidget->item (index, 3)->text ();
    emit AlreadyGetSongId();
}
void LikeMusicWidget::contextMenuEvent (QContextMenuEvent *event) {
    QMenu *menu = new QMenu(ui->tableWidget);
    QAction *addPlayList = menu->addAction("添加到播放队列");
    connect (addPlayList, &QAction::triggered, this, &LikeMusicWidget::AddInList);
    QAction *remove = menu->addAction("移除我喜欢的音乐");
    connect (remove, &QAction::triggered, this, &LikeMusicWidget::RemoveSong);
    menu->exec (QCursor::pos ());//在鼠标当前位置显示
}
void LikeMusicWidget::RemoveSong () {
    auto index = ui->tableWidget->currentRow ();
    ui->tableWidget->removeRow (index);
}

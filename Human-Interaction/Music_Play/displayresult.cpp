#include "displayresult.h"
#include "ui_displayresult.h"
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
#include <QPushButton>
#include <QIcon>
#include <QMenu>
#include <QAction>
#include <QMessageBox>
#include <QCursor>
//const QString ApiOfGetUrlById = "http://localhost:3000/song/url?id=%1";
DisplayResult::DisplayResult(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DisplayResult)
{
    SongId = "";
    SongName = "";
    SingerName = "";
    ui->setupUi(this);

    ClickNum = 0;
    /*整行选择*/
    ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);//只读
    connect (ui->tableWidget, &QTableWidget::doubleClicked, [this]()mutable{
        auto index = ui->tableWidget->currentRow ();
        auto row = ui->tableWidget->verticalHeaderItem (index);
        SongId = row->text ();
        qDebug() << "我被点了" << SongId;
        SongName = ui->tableWidget->item (index, 2)->text ();
        SingerName =  ui->tableWidget->item (index, 3)->text ();
        emit AlreadGetSongId();
    });

}

DisplayResult::~DisplayResult()
{
    delete ui;
}
/*
    v.push_back (SongId); 0
    v.push_back (SingerInfo.second); 歌手图片 1
    v.push_back (albumName); 2
    v.push_back (SongName); 3
    v.push_back (SingerInfo.first); 歌手 4
 */
/**
 * [DisplayResult::Add  添加item]
 * @param v [需要存储的列表集]
 */
void DisplayResult::Add (QVector<QString> v) {
    auto Rowindex = ui->tableWidget->rowCount ();
    ui->tableWidget->insertRow (Rowindex);
    QTableWidgetItem *item0 = new QTableWidgetItem;//歌曲ID
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
    likebtn->setIcon (QIcon(":/Images/lovemusic.png"));
    QIcon icon1;
    icon1.addFile (":/Images/download.png");
    Downloadbtn->setIcon (icon1);
    QHBoxLayout *layout = new QHBoxLayout(w);
    layout->addWidget (likebtn);
    layout->addWidget (Downloadbtn);
    layout->setMargin (0);
    ui->tableWidget->setCellWidget (Rowindex, 1, w);
    connect (likebtn, &QPushButton::clicked, [this, likebtn]()mutable{
        if (ClickNum % 2 == 0) {
            qDebug() << "添加到我喜欢";
            likebtn->setIcon (QIcon(":/Images/fulllove.png"));
            SongInfo.clear ();
            qDebug() << "添加到我喜欢";
            qDebug() << "添加到我喜欢";
            auto index = ui->tableWidget->currentRow ();
            auto row = ui->tableWidget->verticalHeaderItem (index);
            SongInfo.push_back (row->text ());//id
            SongInfo.push_back (ui->tableWidget->item(index, 2)->text ()); //song
            SongInfo.push_back (ui->tableWidget->item(index, 3)->text ()); //singer
            SongInfo.push_back (ui->tableWidget->item(index, 4)->text ()); //ablum
            SongInfo.push_back (ui->tableWidget->item(index,5)->text ());
            emit AlreadyAddLikeMusic();
        }
        else{
            likebtn->setIcon (QIcon(":/Images/lovemusic.png"));
            emit RemoveLikeMusic ();
        }
        ClickNum = (ClickNum + 1 ) % 2;
    });
    connect (Downloadbtn, &QPushButton::clicked, [this]()mutable{
        QMessageBox mesg;
        mesg.warning (this, "警告", "此功能还没实现");
    });
    QTableWidgetItem *item2 = new QTableWidgetItem;//歌曲名称
    item2->setText ( v.at (3));
    item2->setTextAlignment(Qt::AlignVCenter | Qt::AlignHCenter);
    ui->tableWidget->setItem (Rowindex, 2, item2);

    QTableWidgetItem *item3 = new QTableWidgetItem;//歌手
    item3->setText (v.at (4));
    item3->setTextAlignment(Qt::AlignVCenter | Qt::AlignHCenter);
    ui->tableWidget->setItem (Rowindex, 3, item3);

    QTableWidgetItem *item4 = new QTableWidgetItem;//专辑
    item4->setText (v.at (2));
    item4->setTextAlignment(Qt::AlignVCenter | Qt::AlignHCenter);
    ui->tableWidget->setItem (Rowindex, 4, item4);


    QString TimeStr = "未知";
    if(v.size () == 6){
        qint64 tot = v.at (5).toInt ();
        QTime total_time(0, (tot / 60000) % 60, (tot / 1000) % 60);
        TimeStr = total_time.toString("mm:ss");
    }
    QTableWidgetItem *item5 = new QTableWidgetItem;//时长
    item5->setText (TimeStr);
    item5->setTextAlignment(Qt::AlignVCenter | Qt::AlignHCenter);
    ui->tableWidget->setItem (Rowindex, 5, item5);
}
void DisplayResult::contextMenuEvent (QContextMenuEvent *event) {
    QMenu *menu = new QMenu(ui->tableWidget);
    QAction *addPlayList = menu->addAction("添加到播放队列");
    connect (addPlayList, &QAction::triggered, this, &DisplayResult::AddInPlayList);
    QAction *addLikeMusic = menu->addAction("添加到我喜欢");
    connect (addLikeMusic, &QAction::triggered, this, &DisplayResult::AddInLikeMusic);
    menu->exec (QCursor::pos ());//在鼠标当前位置显示
}
void DisplayResult::AddInPlayList () {
    auto index = ui->tableWidget->currentRow ();
    auto row = ui->tableWidget->verticalHeaderItem (index);
    SongId = row->text ();
    SongName = ui->tableWidget->item (index, 2)->text ();
    SingerName =  ui->tableWidget->item (index, 3)->text ();
    emit AlreadGetSongId();
}
void DisplayResult::AddInLikeMusic () {
    auto index = ui->tableWidget->currentRow ();
    auto row = ui->tableWidget->verticalHeaderItem (index);
    SongId = row->text ();
    SongName = ui->tableWidget->item (index, 2)->text ();
    SingerName =  ui->tableWidget->item (index, 3)->text ();
    auto ablum = ui->tableWidget->item (index, 4)->text ();
    SongInfo.clear ();
    SongInfo.push_back (SongId);
    SongInfo.push_back (SongName);
    SongInfo.push_back (SingerName);
    SongInfo.push_back (ablum);
    emit AlreadyAddLikeMusic();
}

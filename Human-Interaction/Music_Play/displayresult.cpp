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
const QString ApiOfGetUrlById = "http://localhost:3000/song/url?id=%1";
extern QString SongIdByDisplay = "";
extern QString SongNameByDisplay = "";
extern QString SingerNameByDisplay = "";
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
    icon.addFile (":/Images/lovemusic.png");
    likebtn->setIcon (icon);
    QIcon icon1;
    icon1.addFile (":/Images/download.png");
    Downloadbtn->setIcon (icon1);
    QHBoxLayout *layout = new QHBoxLayout(w);
    layout->addWidget (likebtn);
    layout->addWidget (Downloadbtn);
    layout->setMargin (0);
    ui->tableWidget->setCellWidget (Rowindex, 1, w);

    QTableWidgetItem *item2 = new QTableWidgetItem;
    item2->setText ( v.at (3));
    item2->setTextAlignment(Qt::AlignVCenter | Qt::AlignHCenter);
    ui->tableWidget->setItem (Rowindex, 2, item2);
    QTableWidgetItem *item3 = new QTableWidgetItem;
    item3->setText (v.at (4));
    item3->setTextAlignment(Qt::AlignVCenter | Qt::AlignHCenter);
    ui->tableWidget->setItem (Rowindex, 3, item3);
    QTableWidgetItem *item4 = new QTableWidgetItem;
    item4->setText (v.at (2));
    item4->setTextAlignment(Qt::AlignVCenter | Qt::AlignHCenter);
    ui->tableWidget->setItem (Rowindex, 4, item4);
    QTableWidgetItem *item5 = new QTableWidgetItem;
    item5->setText ("未知");
    item5->setTextAlignment(Qt::AlignVCenter | Qt::AlignHCenter);
    ui->tableWidget->setItem (Rowindex, 5, item5);
}


#include "likemusicwidget.h"
#include "ui_likemusicwidget.h"

LikeMusicWidget::LikeMusicWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LikeMusicWidget)
{
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
//    ui->tableWidget->setItem (Rowindex,0,new QTableWidgetItem(tr(Num));
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
//    qDebug()<<"没用你吗？？"<<ui->tableWidget->rowCount ();
}

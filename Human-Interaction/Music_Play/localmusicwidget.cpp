#include "localmusicwidget.h"
#include "ui_localmusicwidget.h"

LocalMusicWidget::LocalMusicWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LocalMusicWidget)
{
    ui->setupUi(this);

}

LocalMusicWidget::~LocalMusicWidget()
{
    delete ui;
}
void LocalMusicWidget::Add (QVector<QString> v) {
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
    QTableWidgetItem *item2 = new QTableWidgetItem;
    item2->setText ( v.at (3));
    item2->setTextAlignment(Qt::AlignVCenter | Qt::AlignHCenter);
    ui->tableWidget->setItem (Rowindex, 1, item2);
    QTableWidgetItem *item3 = new QTableWidgetItem;
    item3->setText (v.at (4));
    item3->setTextAlignment(Qt::AlignVCenter | Qt::AlignHCenter);
    ui->tableWidget->setItem (Rowindex, 2, item3);
    QTableWidgetItem *item4 = new QTableWidgetItem;
    item4->setText (v.at (2));
    item4->setTextAlignment(Qt::AlignVCenter | Qt::AlignHCenter);
    ui->tableWidget->setItem (Rowindex, 3, item4);
    QTableWidgetItem *item5 = new QTableWidgetItem;
    item5->setText ("未知");
    item5->setTextAlignment(Qt::AlignVCenter | Qt::AlignHCenter);
    ui->tableWidget->setItem (Rowindex, 4, item5);
}

#include "playlistwidget.h"
#include "ui_playlistwidget.h"

PlayListWidget::PlayListWidget(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PlayListWidget)
{
//    ui->setupUi(this);
    setWindowTitle ("播放列表");
}

PlayListWidget::~PlayListWidget()
{
    delete ui;
}

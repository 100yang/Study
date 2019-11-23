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

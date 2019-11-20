#include "displayresult.h"
#include "ui_displayresult.h"

DisplayResult::DisplayResult(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DisplayResult)
{
    ui->setupUi(this);
}

DisplayResult::~DisplayResult()
{
    delete ui;
}

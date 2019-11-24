#include "findmvwidget.h"
#include "ui_findmvwidget.h"

FindmvWidget::FindmvWidget(QWidget *parent) :
	QWidget(parent),
	ui(new Ui::FindmvWidget)
{
	ui->setupUi(this);
}

FindmvWidget::~FindmvWidget()
{
	delete ui;
}

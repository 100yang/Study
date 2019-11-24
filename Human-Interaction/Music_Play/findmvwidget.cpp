#include "findmvwidget.h"
#include "ui_findmvwidget.h"
#include <QMediaPlayer>
#include <QMediaObject>
#include <QVideoWidget>
#include <QVideoFrame>
#include <QMediaPlaylist>
#include <QPlainTextEdit>
#include <QLineEdit>
#include <QString>
#include <QTime>
#include <QDebug>
#include <QMessageBox>
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
#include <QFile>
#include <QFileInfo>
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

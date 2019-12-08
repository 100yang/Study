#include "localmusicwidget.h"
#include "ui_localmusicwidget.h"
#include <QMediaPlayer>
#include <QMediaPlaylist>
#include <QPlainTextEdit>
#include <QLineEdit>
#include <QString>
#include <QTime>
#include <QAction>
#include <QMenu>
#include <QDebug>
#include <QUrl>
#include <QByteArray>
#include <QStringList>
#include <QRegularExpression>
#include <QRegularExpressionMatch>
#include <QRegularExpressionMatchIterator>
#include <QEventLoop>
#include <QStringList>
#include <QTextEdit>
#include <QEvent>
#include <QDialog>
#include <QTableWidget>
#include <QHeaderView>
#include <QPushButton>
#include <QFile>
#include <QFileInfo>
#include <QFileDevice>
#include <QFileDialog>
#include <QMessageBox>
#include <QCursor>
LocalMusicWidget::LocalMusicWidget(QWidget *parent) :
	QWidget(parent),
	ui(new Ui::LocalMusicWidget)
{
//	filename = "";
	ui->setupUi(this);
	ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
	ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);//只读
	QString filepath = "/home/onezero/Music/";
	connect (ui->open, &QPushButton::clicked, [this, filepath]()mutable{
		qDebug() << "Hello";
		auto filename = QFileDialog::getOpenFileName(this, tr("Open File"),
		filepath,
		tr("MP3 (*.mp3 *.flac *.wav)"));
		/*音乐文件的保存格式默认为 许嵩 - 雨幕.mp3*/
//		qDebug() << "filename::: ===   " << filename;
		if (filename.isEmpty ()) {
			QMessageBox msg;
			msg.warning (this, "警告", "打开文件失败");
		}
		else{
			QFileInfo fileinfo(filename);
//			qDebug() << "文件名称 == " << fileinfo.baseName ();
//			qDebug() << "文件大小为： " << fileinfo.size() << "  " << readableFilesize (fileinfo.size ());
//			qDebug() << "文件的后缀 == " << fileinfo.suffix ();
			QVector<QString> v;
			v.clear ();
			v.push_back (filename);
			auto Val = fileinfo.baseName ().split (" - ");
			foreach (QString var, Val) {
//				qDebug() << "  " << var;
				v.push_back (var);
			}
			v.push_back ("未知");
			v.push_back (readableFilesize (fileinfo.size ()));
			Add(v);
		}
		filename.clear ();
	});
	connect (ui->tableWidget, &QTableWidget::doubleClicked, [this]()mutable{
		auto index = ui->tableWidget->currentRow ();
		auto row = ui->tableWidget->verticalHeaderItem (index);
		FilePath = row->text ();
		emit AlreadyGetFilePath();
	});
}

LocalMusicWidget::~LocalMusicWidget()
{
	delete ui;
}
QString LocalMusicWidget::readableFilesize( quint64 filesize)
{
	QStringList units;
	units << "B" << "KB" << "MB" << "GB" << "TB" << "PB";
	double mod  = 1024.0;
	double size = filesize;
	//qDebug() << size;
	int i = 0;
	long rest = 0;
	while (size >= mod && i < units.count() - 1 )
	{
		rest = (long)size % (long)mod ;
		size /= mod;
		i++;
	}
	QString szResult = QString::number(qRound(size));
	if ( rest > 0)
	{
		szResult += QString(".") + QString::number(rest).left(2);
	}
	szResult += units[i];
	return  szResult;
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

	QTableWidgetItem *item2 = new QTableWidgetItem;//歌曲名称
	item2->setText ( v.at (2));
	item2->setTextAlignment(Qt::AlignVCenter | Qt::AlignHCenter);
	ui->tableWidget->setItem (Rowindex, 1, item2);

	QTableWidgetItem *item3 = new QTableWidgetItem;//歌手
	item3->setText (v.at (1));
	item3->setTextAlignment(Qt::AlignVCenter | Qt::AlignHCenter);
	ui->tableWidget->setItem (Rowindex, 2, item3);

	QTableWidgetItem *item4 = new QTableWidgetItem;//时长
	item4->setText (v.at (3));
	item4->setTextAlignment(Qt::AlignVCenter | Qt::AlignHCenter);
	ui->tableWidget->setItem (Rowindex, 3, item4);

	QTableWidgetItem *item5 = new QTableWidgetItem;//大小
	item5->setText (v.at (4));
	item5->setTextAlignment(Qt::AlignVCenter | Qt::AlignHCenter);
	ui->tableWidget->setItem (Rowindex, 4, item5);
}
void LocalMusicWidget::contextMenuEvent (QContextMenuEvent *event) {
	QMenu *menu = new QMenu(ui->tableWidget);
	QAction *addPlayList = menu->addAction("添加到播放队列");
	connect (addPlayList, &QAction::triggered, this, &LocalMusicWidget::AddInList);
	menu->exec (QCursor::pos ());//在鼠标当前位置显示
}
void LocalMusicWidget::AddInList () {
	auto index = ui->tableWidget->currentRow ();
	auto row = ui->tableWidget->verticalHeaderItem (index);
	FilePath = row->text ();
	emit AlreadyGetFilePath();
}

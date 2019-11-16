#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMediaPlayer>
#include <QMediaPlaylist>
#include <QPlainTextEdit>
#include <QLineEdit>
#include <QString>
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
#include <QDialog>
const QString ApiOfGetSuggestionBykeyword = "http://localhost:3000/search?keywords=%1&type=1";
const QString ApiOfGetUrlById = "http://localhost:3000/song/url?id=%1";
const QString ApiOfGetLyricById = "http://localhost:3000/lyric?id=%1";
const QString ApiOfCheckMusic = "http://localhost:3000/check/music?id=%1";
MainWindow::MainWindow(QWidget *parent) :
	QMainWindow(parent),
	ui(new Ui::MainWindow)
{
    qDebug()<<"??";
    Init_Reply ();
	ui->setupUi(this);
    setWindowTitle ("Music Player");
//    ui->centralWidget->
//    connect (this,&MainWindow::AlreadyGetLink,[this]()mutable{
//        qDebug()<<"Already To Play";
//        Player->setMedia (QUrl(SongUrl));
//        Player->play ();
//    });
    connect (ui->serach_edit, &QLineEdit::editingFinished, [this]()mutable{
        Keyword = ui->serach_edit->text ();
        emit AlreadyGetKeyword ();
    });
    connect (this, &MainWindow::AlreadyGetKeyword, [this]()mutable{
        GetSuggestionByKeywords (Keyword);
    });
    connect(ui->suggestionlistWidget, &QListWidget::doubleClicked, [this]()mutable{
        auto SongInfo = ui->suggestionlistWidget->currentItem ()->text ();
        auto SongId = SuggestInfo.value (SongInfo);
        qDebug() << SongInfo << "   " << SongId;
        AddMusicInPlayList (SongInfo, SongId);
    });
    connect (ui->PlayButton, &QPushButton::clicked, [this]()mutable{
        PLayClickNum = (PLayClickNum + 1) % 2;
        if (PLayClickNum & 1) { /*鼠标点击次数为奇数次*/
            ui->PlayButton->setStyleSheet ("QPushButton{"
            "border-image:url(:/Images/pause.png);"
            "}");
            qDebug() << "Start Play";
            auto index = PlayerList->currentIndex ();
            qDebug() << "Now Index:" << index;
            Player->play ();
        }
        else{
            ui->PlayButton->setStyleSheet ("QPushButton{"
            "border-image:url(:/Images/play.png);"
            "}");
            qDebug() << "Pause";
            Player->stop ();
        }
        emit IWantKnow();
    });
    connect (ui->NextButton, &QPushButton::clicked, [this]()mutable{
        PlayerList->setCurrentIndex (PlayerList->nextIndex ());
        auto index = PlayerList->currentIndex ();
        qDebug() << "Now Index(next):" << index;
        Player->play ();
            ui->PlayButton->setStyleSheet ("QPushButton{"
            "border-image:url(:/Images/pause.png);"
            "}");
        emit IWantKnow();
    });
    connect (ui->PreviousButton, &QPushButton::clicked, [this]()mutable{
        PlayerList->setCurrentIndex (PlayerList->previousIndex ());
        Player->play ();
            ui->PlayButton->setStyleSheet ("QPushButton{"
            "border-image:url(:/Images/pause.png);"
            "}");
        auto index = PlayerList->currentIndex ();
        qDebug() << "Now Index(Previous):" << index;
        emit IWantKnow();
    });
    connect (ui->loop_one_random, &QPushButton::clicked, [this]()mutable{
        RandomClickNum = (RandomClickNum + 1) % 3;
        if (RandomClickNum % 3 == 0) { //loop
            PlayerList->setPlaybackMode (QMediaPlaylist::CurrentItemInLoop);
            ui->loop_one_random->setStyleSheet ("QPushButton{"
            "border-image:url(:/Images/onesong.png);"
            "}");
        }
        else if (RandomClickNum % 3 == 1) { //random
            PlayerList->setPlaybackMode (QMediaPlaylist::Random);
            ui->loop_one_random->setStyleSheet ("QPushButton{"
            "border-image:url(:/Images/random.png);"
            "}");
        }
        else{
            PlayerList->setPlaybackMode (QMediaPlaylist::Sequential);
            ui->loop_one_random->setStyleSheet ("QPushButton{"
            "border-image:url(:/Images/loop.png);"
            "}");
        }
    });
    connect (ui->volum_slider, &QSlider::valueChanged, [this]()mutable{
        auto val = ui->volum_slider->value ();
        Player->setVolume (val);
        if (!val) {
            ui->volum->setStyleSheet ("QPushButton{"
            "border-image:url(:/Images/mute.png);"
            "}");
        }
        else if (val < 50) {
            ui->volum->setStyleSheet ("QPushButton{"
            "border-image:url(:/Images/low_volum.png);"
            "}");
        }
        else{
            ui->volum->setStyleSheet ("QPushButton{"
            "border-image:url(:/Images/high_volum.png);"
            "}");
        }
    });
    connect (this, &MainWindow::IWantKnow, [this]()mutable{
        qDebug() << "MediaNum:" << PlayerList->mediaCount ();
    });
    connect (this, &MainWindow::AlreadyGetLink, [this]()mutable{
        qDebug() << "加入播放队列";
        PlayerList->addMedia (QUrl(SongUrl));
    });
    connect (Player,&QMediaPlayer::volumeChanged,[this]()mutable{
        ui->volum_slider->setValue (Player->volume ());
    });
    Player->setPlaylist (PlayerList);

}
MainWindow::~MainWindow()
{
	delete ui;
}
void MainWindow::Init_Reply () {
    SerachReply =nullptr;
    GetLinkReply = nullptr;
    LyricReply = nullptr;
    Player = new QMediaPlayer;
    PlayerList = new QMediaPlaylist;
    RandomClickNum = 0;
    PLayClickNum = 0;
    Lyric = "";
    SongUrl = "";
    Keyword = "";
}
QString MainWindow::GetSinger(QJsonArray array) {
	QString Name = "";
	for (int row = 0; row < array.size (); ++row) {
		QJsonObject jobj = array[row].toObject();
		Name = jobj["name"].toString ();
	}
	return Name;
}
void MainWindow::GetLinkBySongId (QString SongId) {
    qDebug() << "GetLinkBySongId   1";
	/*删除原来的响应*/
    if (GetLinkReply) {GetLinkReply->deleteLater ();}
	QUrl url = QUrl(ApiOfGetUrlById.arg (SongId));
	qDebug() << "Link Url:" << url;
//    QNetworkAccessManager *manager = new QNetworkAccessManager(this);
//    QNetworkRequest req;
//    req.setUrl (url);
//    QNetworkAccessManager *manager = new QNetworkAccessManager(this);
//    req.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
    GetLinkReply = Manager.get (QNetworkRequest(url));
    connect (GetLinkReply, &QNetworkReply::finished, [this]()mutable{
        if (GetLinkReply->error () == QNetworkReply::NoError) {
            QByteArray Array = GetLinkReply->readAll ();
			QJsonParseError JsonError;
			QJsonDocument json = QJsonDocument::fromJson (Array, &JsonError);
			if (JsonError.error == QJsonParseError::NoError) {
				QJsonObject Obj = json.object ();
				QJsonArray Array_1 = Obj["data"].toArray ();
				for (int i = 0; i < Array_1.size (); ++i) {
					QJsonObject jobj = Array_1[i].toObject ();
					SongUrl = jobj["url"].toString ();
					qDebug() << "歌曲的链接为:" << SongUrl;
				}
			}
			else {qDebug() << "Link JSONERROR:" << JsonError.errorString ();}
		}
		else{
			qDebug() << "GetLinkReply Error" << GetLinkReply->errorString ();
		}
		emit AlreadyGetLink ();
	});
}
void MainWindow::GetSuggestionByKeywords (QString keyword) {
    if(SuggestInfo.isEmpty () == false){
        SuggestInfo.clear ();/*每次清空搜索*/
    }
	ui->suggestionlistWidget->clear ();
	QUrl url = QUrl(ApiOfGetSuggestionBykeyword.arg (keyword));
//    QNetworkRequest req;
//    req.setUrl (url);
//    QNetworkAccessManager *manager = new QNetworkAccessManager(this);
//    req.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
   SerachReply = Manager.get (QNetworkRequest(url));
    connect (SerachReply, &QNetworkReply::finished, [ this ]()mutable{
		if (SerachReply->error () == QNetworkReply::NoError) {
			QByteArray array = SerachReply->readAll ();
			QJsonParseError jsonError;
			QJsonDocument json = QJsonDocument::fromJson (array, &jsonError);
			if (jsonError.error != QJsonParseError::NoError) {qDebug() << "ERROR" << jsonError.errorString ();}
			if (json.isObject ()) {
				QJsonObject obj = json.object ();
				QString SongName = "";
				QString SongId = "";
				QString Singer = "";
				if (obj.contains ("result")) {
					QJsonValue result = obj.value ("result");
					QJsonObject obj1_1 = result.toObject ();
					result = obj1_1.value ("songs");
					QJsonArray json_array = obj1_1["songs"].toArray ();
					for (int row = 0; row < json_array.size (); ++row) {
						QJsonObject jobj = json_array[row].toObject();
						SongName = jobj["name"].toString ();
						SongId = QString::number (jobj["id"].toInt ());
						QJsonArray Artists = jobj["artists"].toArray ();
						Singer = GetSinger (Artists);
						ShowSuggestion (SongName, Singer, SongId);
					}
				}
			}
		}
		else {qDebug() << "Error" << SerachReply->errorString ();}
		emit AlreadyGetSuggestion();
	});
}
void MainWindow::GetLyricBySongId (QString SongId) {
	QUrl url = QUrl(ApiOfGetLyricById.arg (SongId));
    LyricReply = Manager.get (QNetworkRequest(url));
    connect (LyricReply, &QNetworkReply::finished, [ this]()mutable{
		if (LyricReply->error () == QNetworkReply::NoError) {
            QByteArray array = LyricReply->readAll ();
			QJsonParseError jsonError;
			QJsonDocument json = QJsonDocument::fromJson (array, &jsonError);
			if (jsonError.error != QJsonParseError::NoError) {
				qDebug() << "ERROR" << jsonError.errorString ();
			}
			else {
				if (json.isObject ()) {
					QJsonObject obj = json.object ();
					QJsonValue val = obj.value ("lrc");
					QJsonObject jobj = val.toObject ();
					Lyric = jobj["lyric"].toString ();
				}
			}
		}
		else{
			qDebug() << "Error" << LyricReply->errorString ();
		}
		emit AlreadyGetLyric ();
	});
}
void MainWindow::ShowSuggestion(QString SongName, QString Singer, QString SongId) {
	QListWidgetItem *Item = new QListWidgetItem;
	auto SongInfo = SongName + Singer;
	Item->setText (SongInfo);
	ui->suggestionlistWidget->addItem (Item);
    SuggestInfo.insert (SongInfo, SongId);
//	qDebug() << SongInfo << "  " << SongId;
}
void MainWindow::AddMusicInPlayList (QString SongInfo, QString SongId) {
	qDebug() << "AddMusicInPlayList";
	QListWidgetItem *item = new QListWidgetItem;
	item->setText (SongInfo);
	ui->PlayList->addItem (item);
//	qDebug() << "dd";
//	qDebug() << SongId;
	GetLinkBySongId (SongId);
//	qDebug() << "ll";
}

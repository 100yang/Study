#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "MyLyric.h"
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
#include <QDialog>
const QString ApiOfGetSuggestionBykeyword = "http://localhost:3000/search?keywords=%1&type=1";
const QString ApiOfGetUrlById = "http://localhost:3000/song/url?id=%1";
const QString ApiOfGetLyricById = "http://localhost:3000/lyric?id=%1";
const QString ApiOfCheckMusic = "http://localhost:3000/check/music?id=%1";
MainWindow::MainWindow(QWidget *parent) :
	QMainWindow(parent),
	ui(new Ui::MainWindow)
{
	qDebug() << "??";
	Init_Reply ();
	ui->setupUi(this);
	setWindowTitle ("Music Player");
    /*输入关键词进行搜索 并显示得到的搜索*/
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

    /*将搜索得到的歌曲加入到播放队列*/
    connect (this, &MainWindow::AlreadyGetLink, [this]()mutable{
		qDebug() << "加入播放队列";
		PlayerList->addMedia (QUrl(SongUrl));
	});
    connect (Player, &QMediaPlayer::volumeChanged, [this]()mutable{
        ui->volum_slider->setValue (Player->volume ());
    });

//    connect(Player,&QMediaPlayer::)

    connect(this,&MainWindow::AlreadyGetLyric,[this]()mutable{
        SongLyric.insert (SongUrl,LyricString);
//        qDebug() << LyricString;
//        resolve_lrc (LyricString);
    });

    /*将正在播放的歌曲的歌词进行匹配(时间)*/

    /*当播放的歌曲改变时 进行新的歌词匹配*/
    connect(Player,&QMediaPlayer::currentMediaChanged,[this]()mutable{
        auto NowUrl = PlayerList->currentMedia ().canonicalUrl ();
        auto NowUrlStr = NowUrl.toString ();
        auto LyricStr = SongLyric.value (NowUrlStr);
        qDebug()<<"Now Lyric:"<<LyricStr;
        resolve_lrc (LyricStr);
    });
    connect (Player, &QMediaPlayer::positionChanged, [this]()mutable{
        qint64 tot = Player->duration ();
        qint64 now = Player->position ();
        ui->timeSlider->setMaximum (tot);
        ui->timeSlider->setValue (now);
        UpdateTime (now, tot);
    });
    connect(ui->timeSlider,&QSlider::sliderMoved,[this]()mutable{
        qint64 tot = Player->duration ();
        qint64 now = ui->timeSlider->value ();
        Player->setPosition (now);
        UpdateTime (now,tot);
    });


    /*各种图标的显示、变化*/
    connect (ui->LyricPushButton, &QPushButton::clicked, [this]()mutable{
        LyricNum = (LyricNum + 1) % 2;
        if (LyricNum == 1) {
			lrc->show ();
			ui->LyricPushButton->setStyleSheet ("QPushButton{"
			"border-image:url(:/Images/lyric.png);"
			"}");
		}
		else{
			lrc->hide ();
			ui->LyricPushButton->setStyleSheet ("QPushButton{"
			"border-image:url(:/Images/Lyric_dark.png);"
			"}");
		}
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
            qDebug() << Player->duration ();
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
    Player->setPlaylist (PlayerList);
}
MainWindow::~MainWindow()
{
	delete ui;
}
void MainWindow::Init_Reply () {
	SerachReply = nullptr;
	GetLinkReply = nullptr;
	LyricReply = nullptr;
	Player = new QMediaPlayer;
	PlayerList = new QMediaPlaylist;
	RandomClickNum = 0;
	PLayClickNum = 0;
	LyricNum = 0;
	LyricString = "";
	SongUrl = "";
	Keyword = "";
	lrc = new MyLyric(this);
}
QString MainWindow::GetSingerInfo(QJsonArray array) {
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
	if (SuggestInfo.isEmpty () == false) {
		SuggestInfo.clear ();/*每次清空搜索*/
	}
	ui->suggestionlistWidget->clear ();
	QUrl url = QUrl(ApiOfGetSuggestionBykeyword.arg (keyword));
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
                        Singer = GetSingerInfo (Artists);
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
					LyricString = jobj["lyric"].toString ();
				}
			}
		}
		else{
			qDebug() << "Error" << LyricReply->errorString ();
		}
		emit AlreadyGetLyric ();
	});
}
void MainWindow::ShowSuggestion(QString SongName, QString SingerInfo, QString SongId) {
	QListWidgetItem *Item = new QListWidgetItem;
    auto SongInfo = SongName + SingerInfo;
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
	GetLinkBySongId (SongId);
    GetLyricBySongId (SongId);
}
void MainWindow::resolve_lrc(QString ly)
{
	LyricMap.clear();
	QStringList lines = ly.split("\n");

	//这个是时间标签的格式[00:05.54]
	//正则表达式d{2}表示匹配2个数字
    QRegExp rx("\\[\\d{2}:\\d{2}\\.\\d{2}\\]");
	foreach (QString oneline, lines) {
		QString temp = oneline;
		temp.replace(rx, "");//用空字符串替换正则表达式中所匹配的地方,这样就获得了歌词文本
		// 然后依次获取当前行中的所有时间标签，并分别与歌词文本存入QMap中
		//indexIn()为返回第一个匹配的位置，如果返回为-1，则表示没有匹配成功
		//正常情况下pos后面应该对应的是歌词文件
		int pos = rx.indexIn(oneline, 0);
		while (pos != -1) { //表示匹配成功
			QString cap = rx.cap(0);//返回第0个表达式匹配的内容
			// 将时间标签转换为时间数值，以毫秒为单位
			QRegExp regexp;
			regexp.setPattern("\\d{2}(?=:)");
			regexp.indexIn(cap);
			int minute = regexp.cap(0).toInt();


			regexp.setPattern("\\d{2}(?=\\.)");
			regexp.indexIn(cap);
            int second = regexp.cap(0).toInt();

            regexp.setPattern("\\d{2}(?=\\])");
			regexp.indexIn(cap);
			int millisecond = regexp.cap(0).toInt();
			qint64 totalTime = minute * 60000 + second * 1000 + millisecond * 10;
			// 插入到LyricMap中
			LyricMap.insert(totalTime, temp);
			pos += rx.matchedLength();
			pos = rx.indexIn(oneline, pos);//匹配全部
		}
	}
	// 如果LyricMap为空
	if (LyricMap.isEmpty()) {
        lrc->setText(" --- 歌词文件内容错误！");
		return;
	}
}


void MainWindow::UpdateTime(qint64 time, qint64 total_time_value)
{
	//这3个参数分别代表了时，分，秒；60000毫秒为1分钟，所以分钟第二个参数是先除6000,第3个参数是直接除1s
	QTime total_time(0, (total_time_value / 60000) % 60, (total_time_value / 1000) % 60);
	QTime current_time(0, (time / 60000) % 60, (time / 1000) % 60); //传进来的time参数代表了当前的时间
	QString str = current_time.toString("mm:ss") + "/" + total_time.toString("mm:ss");
//    ui->timeSlider->setValue ();
    ui->TimeLabel->setText (str);

	// 获取当期时间对应的歌词
	if (!LyricMap.isEmpty()) {
		// 获取当前时间在歌词中的前后两个时间点
		qint64 previous = 0;
		qint64 later = 0;
		//keys()方法返回LyricMap列表
		foreach (qint64 value, LyricMap.keys()) {
			if (time >= value) {
				previous = value;
			} else {
				later = value;
				break;
			}
		}

		// 达到最后一行,将later设置为歌曲总时间的值
		if (later == 0)
			later = total_time_value;

		// 获取当前时间所对应的歌词内容
		QString current_lrc = LyricMap.value(previous);

//        // 没有内容时
//        if(current_lrc.length() < 2)
//            current_lrc = tr("简易音乐播放器");

		// 如果是新的一行歌词，那么重新开始显示歌词遮罩
		if (current_lrc != lrc->text()) {
			lrc->setText(current_lrc);
//            top_label->setText(current_lrc);
			qint64 interval_time = later - previous;
			lrc->start_lrc_mask(interval_time);
		}
	} else {  // 如果没有歌词文件，则在顶部标签中显示歌曲标题
//        top_label->setText(QFileInfo(media_object->
//                                    currentSource().fileName()).baseName());
	}
}


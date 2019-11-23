#include "mainwindow.h"
#include "videoplay.h"
#include <QApplication>
#include <QObject>
#include <stdlib.h>
#include <QProcess>
int main(int argc, char *argv[])
{
//	QProcess *pro = new QProcess;
//	pro->start ("node /home/onezero/Files/NeteaseCloudMusicApi/app.js");
	QApplication a(argc, argv);
//    VideoPlay w;
//    w.show ();
    MainWindow w;
    w.show();
	a.exec ();
//    SongAndId.clear();
//	pro->close ();
	return 0;
}

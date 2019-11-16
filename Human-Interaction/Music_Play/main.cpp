#include "mainwindow.h"
#include <QApplication>
#include <QObject>
#include <stdlib.h>
#include <QProcess>
int main(int argc, char *argv[])
{
//	QProcess *pro = new QProcess;
//	pro->start ("node /home/onezero/Files/NeteaseCloudMusicApi/app.js");
	QApplication a(argc, argv);
	MainWindow w;
	w.show();
	a.exec ();
//	pro->close ();
	return 0;
}

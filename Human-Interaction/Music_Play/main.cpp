#include "mainwindow.h"
#include <QApplication>
#include <QObject>
#include <stdlib.h>
#include <QProcess>
int main(int argc, char *argv[])
{
    QProcess *pro = new QProcess;
    pro->start ("node /home/onezero/Files/NeteaseCloudMusicApi/app.js");
	QApplication a(argc, argv);
	MainWindow w;
	w.show();
	a.exec ();
//    pro->
//    pro->start ("a=`pidof node`;kill $a");
    pro->close ();
//    system("a=`pidof node`;kill $a");
	return 0;
}

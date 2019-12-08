#include "mainwindow.h"
#include <QApplication>
#include <QObject>
#include <stdlib.h>
#include <QProcess>
int main(int argc, char *argv[])
{

	QApplication a(argc, argv);
	MainWindow w;
	w.show();
	a.exec ();
	return 0;
}

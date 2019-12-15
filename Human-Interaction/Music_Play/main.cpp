/*
* @Author: 100yang
* @Date:   2019-12-07
* @Last Modified by:   100yang
* @Last Modified time: 2019-12-15
*/
#include "mainwindow.h"
#include <QApplication>
#include <QObject>
#include <stdlib.h>
#include <QProcess>
int main(int argc, char *argv[]) {

	QApplication a(argc, argv);
	MainWindow w;
	w.show();
	a.exec ();
	return 0;
}

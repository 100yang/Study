#include "mainwindow.h"
#include "mythread.h"
#include <QApplication>
#include <QObject>
int main(int argc, char *argv[])
{
//    MyThread *thread_1 = new MyThread;
//    thread_1->start ();
	QApplication a(argc, argv);
	MainWindow w;
	w.show();
	a.exec ();
//    thread_1->exit ();
	return 0;
}

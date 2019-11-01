#include "mainwindow.h"
#include <QApplication>
#include <QObject>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MyThread *thread_1 = new MyThread;
    thread_1->start ();
    MainWindow w;
    w.show();
    a.exec ();
    thread_1->exit ();
    return 0;
}

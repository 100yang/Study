#include "showplaylist.h"
#include "mainwindow.h"
#include <QMenu>
#include <QAction>
#include <QActionEvent>
ShowPlayList::ShowPlayList(QWidget *parent) : QListWidget(parent)
{

}
ShowPlayList::~ShowPlayList (){}
/*鼠标右击事件*/
void ShowPlayList::contextMenuEvent(QContextMenuEvent *event){
    QMenu menu;
    QAction *add = new QAction("加入播放队列",this);
    menu.addAction(add);
//    connect (this,&ShowPlayList::)
    QAction *NextPlay = new QAction("下一首播放",this);
    menu.addAction(NextPlay);
    menu.exec (event->globalPos ());
}

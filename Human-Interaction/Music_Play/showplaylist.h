#ifndef SHOWPLAYLIST_H
#define SHOWPLAYLIST_H

#include <QWidget>
#include <QListWidget>
class ShowPlayList : public QListWidget
{
	Q_OBJECT
public:
	explicit ShowPlayList(QWidget *parent = nullptr);
	~ShowPlayList();
protected:
	void contextMenuEvent(QContextMenuEvent *event);
signals:

public slots:
};

#endif // SHOWPLAYLIST_H

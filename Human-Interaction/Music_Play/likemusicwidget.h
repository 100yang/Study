#ifndef LIKEMUSICWIDGET_H
#define LIKEMUSICWIDGET_H

#include <QWidget>

namespace Ui {
class LikeMusicWidget;
}

class LikeMusicWidget : public QWidget
{
    Q_OBJECT

public:
    explicit LikeMusicWidget(QWidget *parent = 0);
    ~LikeMusicWidget();
    void Add(QVector<QString> v);
    QString SongId;
    QString SongName;
    QString SingerName;
public slots:
    void AddInList();
    void RemoveSong();
protected :
    void contextMenuEvent (QContextMenuEvent *event);
signals:
    void AlreadyGetSongId();
private:
    Ui::LikeMusicWidget *ui;
};

#endif // LIKEMUSICWIDGET_H

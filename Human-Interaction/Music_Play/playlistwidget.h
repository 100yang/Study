#ifndef PLAYLISTWIDGET_H
#define PLAYLISTWIDGET_H

#include <QDialog>
#include <QListWidget>
namespace Ui {
class PlayListWidget;
}

class PlayListWidget : public QDialog {
    Q_OBJECT

  public:
    explicit PlayListWidget(QWidget *parent = 0);
    ~PlayListWidget();
    int NowIndex;
    QListWidget *ListWidget;
  protected :
    void contextMenuEvent (QContextMenuEvent *);
  public slots:
    void RemoveList();
  signals :
    void AlreadyRemove();
    void NextPlayIndex();
  private:
    Ui::PlayListWidget *ui;
};

#endif // PLAYLISTWIDGET_H

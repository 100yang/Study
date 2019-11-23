#ifndef LOCALMUSICWIDGET_H
#define LOCALMUSICWIDGET_H

#include <QWidget>

namespace Ui {
class LocalMusicWidget;
}

class LocalMusicWidget : public QWidget
{
    Q_OBJECT

public:
    explicit LocalMusicWidget(QWidget *parent = 0);
    ~LocalMusicWidget();

private:
    Ui::LocalMusicWidget *ui;
};

#endif // LOCALMUSICWIDGET_H

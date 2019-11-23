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
private:
    Ui::LikeMusicWidget *ui;
};

#endif // LIKEMUSICWIDGET_H

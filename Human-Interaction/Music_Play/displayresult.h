#ifndef DISPLAYRESULT_H
#define DISPLAYRESULT_H

#include <QWidget>

namespace Ui {
class DisplayResult;
}

class DisplayResult : public QWidget
{
    Q_OBJECT

public:
    explicit DisplayResult(QWidget *parent = 0);
    ~DisplayResult();

private:
    Ui::DisplayResult *ui;
};

#endif // DISPLAYRESULT_H

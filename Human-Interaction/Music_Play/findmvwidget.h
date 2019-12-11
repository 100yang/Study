#ifndef FINDMVWIDGET_H
#define FINDMVWIDGET_H

#include <QWidget>

namespace Ui {
class FindmvWidget;
}

class FindmvWidget : public QWidget {
	Q_OBJECT

  public:
	explicit FindmvWidget(QWidget *parent = 0);
	~FindmvWidget();

  private:
	Ui::FindmvWidget *ui;
};

#endif // FINDMVWIDGET_H

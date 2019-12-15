#ifndef LOCALMUSICWIDGET_H
#define LOCALMUSICWIDGET_H

#include <QWidget>
#include <QMediaPlayer>
#include <QMediaPlaylist>
#include <QPlainTextEdit>
#include <QLineEdit>
#include <QString>
#include <QTime>
#include <QDebug>
#include <QUrl>
#include <QByteArray>
#include <QStringList>
#include <QNetworkRequest>
#include <QNetworkCookieJar>
#include <QRegularExpression>
#include <QRegularExpressionMatch>
#include <QRegularExpressionMatchIterator>
#include <QNetworkReply>
#include <QJsonArray>
#include <QJsonObject>
#include <QJsonValue>
#include <QJsonParseError>
#include <QEventLoop>
#include <QStringList>
#include <QTextEdit>
#include <QEvent>
#include <QDialog>
#include <QTableWidget>
#include <QHeaderView>
#include <QPushButton>
namespace Ui {
class LocalMusicWidget;
}

class LocalMusicWidget : public QWidget {
	Q_OBJECT

  public:
	explicit LocalMusicWidget(QWidget *parent = 0);
	~LocalMusicWidget();
	void Add (QVector<QString> v);
	/**
	 * @brief      { function_description }
	 *
	 * @param[in]  filesize  The filesize
	 *
	 * @return     The quarter string.
	 */
	QString readableFilesize( quint64 filesize);
	QString FilePath;
  protected :
	void contextMenuEvent (QContextMenuEvent *event);
  signals :
	void AlreadyGetFilePath();
  public slots:
	void AddInList();
  private:
	Ui::LocalMusicWidget *ui;
};

#endif // LOCALMUSICWIDGET_H

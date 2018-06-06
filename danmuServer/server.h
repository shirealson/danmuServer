#pragma once

#include <QObject>
class QTcpServer;
class server : public QObject
{
	Q_OBJECT

public:
	explicit server(QWidget *parent = 0);
	~server();
private:
	QTcpServer * tcpServer;
private slots:
	void getDanmu();
	void confirm();



};

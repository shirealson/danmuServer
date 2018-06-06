#pragma once

#include <QtWidgets/QWidget>
#include <QTimer>
#include <QUdpSocket>
#include "ui_danmuServer.h"
#include"shootingArea.h"
class QTimer;
class danmuServer : public QWidget
{
	Q_OBJECT

public:
	danmuServer(QWidget *parent = Q_NULLPTR);
	~danmuServer();

private:
	Ui::danmuServerClass ui;
	QTimer *Animate;//控制动画时钟
	QTimer *replay;//重播弹幕的时钟
	shootingArea shootingArea;//弹幕池
	QUdpSocket *udpSocket;//UDP连接
	qint16 port;

private slots:
	void replayDanmu();
	void pendingMessage();
protected:
	void paintEvent(QPaintEvent *);//绘图函数
	
	



};

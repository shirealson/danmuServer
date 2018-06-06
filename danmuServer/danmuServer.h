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
	QTimer *Animate;//���ƶ���ʱ��
	QTimer *replay;//�ز���Ļ��ʱ��
	shootingArea shootingArea;//��Ļ��
	QUdpSocket *udpSocket;//UDP����
	qint16 port;//�˿�
	int frame;//֡��
	

private slots:
	void replayDanmu();
	void pendingMessage();
	void changeFrame(int Newframe);
	void changeSAFrame(int Newframe);
	void changeSAPlayTime(int newtime);
protected:
	void paintEvent(QPaintEvent *);//��ͼ����
	
	



};

#include "danmuServer.h"
#include <QPainter>
#include<QDebug>
danmuServer::danmuServer(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	Animate = new QTimer(this);
	replay = new QTimer(this);
	
	setWindowFlags(Qt::FramelessWindowHint);
	setAttribute(Qt::WA_TranslucentBackground);//����͸����Ҫ����

	connect(Animate, SIGNAL(timeout()), this, SLOT(update()));
	connect(replay, SIGNAL(timeout()), this, SLOT(replayDanmu()));
	Animate->start(42);
	replay->start(60 * 1000);//һ����û���������ز�

	udpSocket = new QUdpSocket(this);//����udp
	port = 45454;//�˿�
	udpSocket->bind(port, QUdpSocket::ShareAddress | QUdpSocket::ReuseAddressHint);
	connect(udpSocket, SIGNAL(readyRead()), this, SLOT(pendingMessage()));
	//-------------��������
	
	
}
danmuServer::~danmuServer()
{
	delete Animate;
	delete replay;

}
void danmuServer::replayDanmu()
{
	this->shootingArea.resetDanmuPlayCount();//�ز�
}
void danmuServer::paintEvent(QPaintEvent *)
{
	QPainter painter(this);
	//��������
	painter.setRenderHint(QPainter::Antialiasing);//�����
	danmu *danmu = shootingArea.getDanmu();//��ȡ��Ļ������

	int point = shootingArea.getPoint();//��ȡ���˵�Ļ�±�
	point = (point + 9) % 10;//pointӦ��ȡ���ڵ��ǰһλ
	qDebug() << tr("Now pointer is")<<shootingArea.getPoint();
	painter.fillRect(rect(), QColor(255, 255, 255, 0));//͸��
	for (int i = 0; i < 10; i++)
	{
		if (!danmu[point].null)
		{	
			QFont font = danmu[point].font;
			font.setPixelSize(danmu[point].fontSize);//��������
			painter.setFont(font);
			painter.setPen(danmu[point].color);//��ɫΪ��Ļ�б������ɫ
			painter.drawText(danmu[point].Position, danmu[point].height, danmu[point].content);//���Ƶ�Ļ
			point = (point + 9) % 10;//point����
		}
		else
			continue;//�����յ�����
		
	}
	shootingArea.DanmuMove();//��Ļ����
	delete[] danmu;//�����ڴ�
		


}

void danmuServer::pendingMessage()
{
while (udpSocket->hasPendingDatagrams())
{
QByteArray datagram;
datagram.resize(udpSocket->pendingDatagramSize());
udpSocket->readDatagram(datagram.data(), datagram.size());
QDataStream in(&datagram, QIODevice::ReadOnly);
QString content;
QColor color;
QFont font;
int fontSize;
in >> content >> color>>font>>fontSize;
shootingArea.insertDanmu(content, color,font,fontSize);//�����µ�Ļ
replay->stop();
replay->start(60 * 1000);//����replay������

}
}



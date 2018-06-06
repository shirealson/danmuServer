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
	setAttribute(Qt::WA_TranslucentBackground);//窗体透明必要设置

	connect(Animate, SIGNAL(timeout()), this, SLOT(update()));
	connect(replay, SIGNAL(timeout()), this, SLOT(replayDanmu()));
	Animate->start(42);
	replay->start(60 * 1000);//一分钟没有新内容重播

	udpSocket = new QUdpSocket(this);//启动udp
	port = 45454;//端口
	udpSocket->bind(port, QUdpSocket::ShareAddress | QUdpSocket::ReuseAddressHint);
	connect(udpSocket, SIGNAL(readyRead()), this, SLOT(pendingMessage()));
	//-------------测试数据
	
	
}
danmuServer::~danmuServer()
{
	delete Animate;
	delete replay;

}
void danmuServer::replayDanmu()
{
	this->shootingArea.resetDanmuPlayCount();//重播
}
void danmuServer::paintEvent(QPaintEvent *)
{
	QPainter painter(this);
	//设置字体
	painter.setRenderHint(QPainter::Antialiasing);//抗锯齿
	danmu *danmu = shootingArea.getDanmu();//获取弹幕池内容

	int point = shootingArea.getPoint();//获取顶端弹幕下标
	point = (point + 9) % 10;//point应该取所在点的前一位
	qDebug() << tr("Now pointer is")<<shootingArea.getPoint();
	painter.fillRect(rect(), QColor(255, 255, 255, 0));//透明
	for (int i = 0; i < 10; i++)
	{
		if (!danmu[point].null)
		{	
			QFont font = danmu[point].font;
			font.setPixelSize(danmu[point].fontSize);//设置字体
			painter.setFont(font);
			painter.setPen(danmu[point].color);//颜色为弹幕中保存的颜色
			painter.drawText(danmu[point].Position, danmu[point].height, danmu[point].content);//绘制弹幕
			point = (point + 9) % 10;//point左移
		}
		else
			continue;//遇到空的跳过
		
	}
	shootingArea.DanmuMove();//弹幕左移
	delete[] danmu;//清理内存
		


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
shootingArea.insertDanmu(content, color,font,fontSize);//插入新弹幕
replay->stop();
replay->start(60 * 1000);//重置replay计数器

}
}



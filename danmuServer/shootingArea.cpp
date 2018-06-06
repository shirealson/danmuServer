#include"shootingArea.h"
#include<QTime>

const int frame = 24;//֡��
const int playTime = 16;//һ����Ļ����ʱ��(��)
const int WIDTH = 1920;
shootingArea::shootingArea() 
{
	point = 0;//��ʼ�����Ƶ�Ϊ0
}
void shootingArea::insertDanmu(QString content, QColor color, QFont font, int fontSize)
{
	qsrand(qrand()*QTime(0, 0, 0).secsTo(QTime::currentTime()));//�Ե�ǰʱ���ȡ���������
	danmubase[point].null = false;
	danmubase[point].content = content;
	danmubase[point].color = color;
	danmubase[point].font = font;
	danmubase[point].fontSize = fontSize;
	danmubase[point].Position = danmubase[point].fontSize * danmubase[point].content.length()+WIDTH;
	danmubase[point].height = qrand() % 400+50;//�߶�Ϊ300���ڵ������
	danmubase[point].playCount = 0;//д�뵯Ļ����
	point = (point + 1) % 10;//point ����
}
danmu* shootingArea::getDanmu() const
{
	danmu *content = new danmu[10];
	for (int i = 0; i < 10; i++)
		content[i] = danmubase[i];//����һ���µ����鴢�浯Ļ������,!!!�ǵ��ͷ��ڴ�!!!
	return content;
}
void shootingArea::resetDanmuPlayCount()
{
	for (int i = 0; i < 10; i++)
	{
		danmubase[i].playCount = 0;
	}
}
void shootingArea::DanmuMove()
{
	int speed = WIDTH / playTime / frame;//�ٶȵ��ڿ�ȳ��Բ���ʱ��
	for (int i = 0; i < 10; i++)
	{
		if (danmubase[i].playCount < 3 && !danmubase[i].null)//���Ŵ���С�ڵ���3�ĵ�Ļ�Ҳ�Ϊ�յĵ�Ļ
			if (danmubase[i].Position > -(danmubase[i].content.length() * danmubase[i].fontSize))//�����Ļû�в��ŵ��ײ�
				danmubase[i].Position -= speed;//�������
			else
			{
				danmubase[i].Position = WIDTH + danmubase[i].content.length() * danmubase[i].fontSize;//���õ����ұ�
				danmubase[i].playCount++;//���Ŵ���+1
			}
				

	}
		
}

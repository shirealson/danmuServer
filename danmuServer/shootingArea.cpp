#include"shootingArea.h"
#include<QTime>

const int frame = 24;//帧数
const int playTime = 16;//一条弹幕播放时间(秒)
const int WIDTH = 1920;
shootingArea::shootingArea() 
{
	point = 0;//初始化控制点为0
}
void shootingArea::insertDanmu(QString content, QColor color, QFont font, int fontSize)
{
	qsrand(qrand()*QTime(0, 0, 0).secsTo(QTime::currentTime()));//以当前时间获取随机数种子
	danmubase[point].null = false;
	danmubase[point].content = content;
	danmubase[point].color = color;
	danmubase[point].font = font;
	danmubase[point].fontSize = fontSize;
	danmubase[point].Position = danmubase[point].fontSize * danmubase[point].content.length()+WIDTH;
	danmubase[point].height = qrand() % 400+50;//高度为300以内的随机数
	danmubase[point].playCount = 0;//写入弹幕数据
	point = (point + 1) % 10;//point 后移
}
danmu* shootingArea::getDanmu() const
{
	danmu *content = new danmu[10];
	for (int i = 0; i < 10; i++)
		content[i] = danmubase[i];//创建一个新的数组储存弹幕并返回,!!!记得释放内存!!!
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
	int speed = WIDTH / playTime / frame;//速度等于宽度除以播放时间
	for (int i = 0; i < 10; i++)
	{
		if (danmubase[i].playCount < 3 && !danmubase[i].null)//播放次数小于等于3的弹幕且不为空的弹幕
			if (danmubase[i].Position > -(danmubase[i].content.length() * danmubase[i].fontSize))//如果弹幕没有播放到底部
				danmubase[i].Position -= speed;//向左滚动
			else
			{
				danmubase[i].Position = WIDTH + danmubase[i].content.length() * danmubase[i].fontSize;//重置到最右边
				danmubase[i].playCount++;//播放次数+1
			}
				

	}
		
}

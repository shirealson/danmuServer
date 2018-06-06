#pragma once
#include<danmu.h>

class shootingArea
{
public:
	shootingArea();
	void insertDanmu(QString content, QColor color,QFont font,int fontSize);//插入弹幕
	int getPoint() { return point; };//得到控制点，从而得到最新的弹幕序号
	danmu *getDanmu() const;//将储存的弹幕输出
	void resetDanmuPlayCount();//重置弹幕播放次数
	void DanmuMove();//弹幕移动
	void changeFrame(int newFrame);
	void changePlayTime(int time);
	

private:
	danmu danmubase[10];//队列结构
	int point;//队列控制，初始为0
	int PlayTime;//播放时间
	int frame;//帧数
	
};
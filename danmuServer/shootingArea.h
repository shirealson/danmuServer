#pragma once
#include<danmu.h>

class shootingArea
{
public:
	shootingArea();
	void insertDanmu(QString content, QColor color,QFont font,int fontSize);//���뵯Ļ
	int getPoint() { return point; };//�õ����Ƶ㣬�Ӷ��õ����µĵ�Ļ���
	danmu *getDanmu() const;//������ĵ�Ļ���
	void resetDanmuPlayCount();//���õ�Ļ���Ŵ���
	void DanmuMove();//��Ļ�ƶ�
	void changeFrame(int newFrame);
	void changePlayTime(int time);
	

private:
	danmu danmubase[10];//���нṹ
	int point;//���п��ƣ���ʼΪ0
	int PlayTime;//����ʱ��
	int frame;//֡��
	
};
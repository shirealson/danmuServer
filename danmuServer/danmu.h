#pragma once
#include<QString>
#include<QColor>
#include<QFont>
struct danmu
{	
	bool null;
	QString content;
	QColor color;
	QFont font;
	int fontSize;
	int Position;
	int height;
	int playCount;
};
//弹幕数据结构 是否为空 内容 颜色 字体 大小 位置 播放次数
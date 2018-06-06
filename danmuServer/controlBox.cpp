#include "controlBox.h"

controlBox::controlBox(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	setWindowFlags(Qt::CustomizeWindowHint | Qt::WindowMinimizeButtonHint | Qt::WindowMaximizeButtonHint);//取消关闭按钮
	setFixedSize(259,304);
}

controlBox::~controlBox()
{
}
void controlBox::on_changePlayTime_clicked()
{
	int newtime;
	newtime = ui.spinBox->value();
	emit SGchangePlayTime(newtime);//发射信号

	
}
void controlBox::on_changeFrame_clicked()
{
	int newFrame;
	newFrame = ui.spinBox_2->value();
	emit SGchangeFrame(newFrame);//发射信号
}
void controlBox::on_exit_clicked()
{
	emit exit();
	close();

}

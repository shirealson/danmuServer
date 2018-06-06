#pragma once

#include <QDialog>
#include "ui_controlBox.h"

class controlBox : public QDialog
{
	Q_OBJECT

public:
	controlBox(QWidget *parent = Q_NULLPTR);
	~controlBox();

private:
	Ui::controlBox ui;

signals:
	void SGchangePlayTime(int value);
	void SGchangeFrame(int value);
	void exit();
private slots:
	void on_changePlayTime_clicked();
	void on_changeFrame_clicked();
	void on_exit_clicked();
};

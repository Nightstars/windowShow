#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_windowshow.h"

class windowshow : public QMainWindow
{
	Q_OBJECT

public:
	windowshow(QWidget *parent = Q_NULLPTR);

private:
	Ui::windowshowClass ui;
};

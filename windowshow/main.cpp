#include "windowshow.h"
#include <QtWidgets/QApplication>
#include <QPushbutton>
int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QWidget *window = new QWidget();
	window->resize(600, 450);
	window->show();
	QPushButton *button = new QPushButton(QStringLiteral("µã»÷ÎÒ Press me"), window);
	button->move(250, 175);
	button->resize(100, 50);
	button->show();
	return a.exec();
}

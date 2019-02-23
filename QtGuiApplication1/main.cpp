#include "QtGuiApplication1.h"
#include <QtWidgets/QApplication>
#include <QString>
#include <iostream>
#include <string>


int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QtGuiApplication1 w;

	w.show();
	return a.exec();
}

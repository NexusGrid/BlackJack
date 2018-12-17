//Copyright [main.cpp] [NexusGrid] Licensed under the Apache License, Version 2.0 (the «License»);


#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	MainWindow w;
	w.show();

	return a.exec();
}

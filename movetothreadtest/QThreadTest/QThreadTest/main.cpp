#include "threadtest.h"
#include <QtGui/QApplication>
#include <QDebug>
#include <QThread>

int main(int argc, char *argv[])
{
	qDebug() << "mainFunc ThreadID:" << QThread::currentThreadId();

	QApplication a(argc, argv);
	ThreadTest w;
	w.show();
	return a.exec();
}

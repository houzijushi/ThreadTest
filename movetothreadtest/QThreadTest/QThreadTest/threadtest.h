#ifndef QTHREADTEST_H
#define QTHREADTEST_H

#include <QtGui/QMainWindow>
#include "ui_threadtest.h"
#include "childthreadobj.h"

class ThreadTest : public QMainWindow
{
	Q_OBJECT

public:
	ThreadTest(QWidget *parent = 0, Qt::WFlags flags = 0);
	~ThreadTest();

protected:

private:
	Ui::QThreadTestClass ui;
	ChildThreadObj *childthreadobj;
	QThread *childthread;

public slots:

signals:
	void requested();
};

#endif // QTHREADTEST_H

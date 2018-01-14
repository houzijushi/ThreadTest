#ifndef QTHREADTEST_H
#define QTHREADTEST_H

#include <QtGui/QMainWindow>
#include "ui_qthreadtest.h"

#include <QDebug>
#include <QThread>

#include "childthread.h"

class QThreadTest : public QMainWindow
{
	Q_OBJECT

public:
	QThreadTest(QWidget *parent = 0, Qt::WFlags flags = 0);
	~QThreadTest();

private:
	Ui::QThreadTestClass ui;
	ChildThread *childThread;

signals:
	void requested();

public slots:
	void slotShowMessage();
	void onPushButtonShow();

};

#endif // QTHREADTEST_H

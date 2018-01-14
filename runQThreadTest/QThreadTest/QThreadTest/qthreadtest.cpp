#include "qthreadtest.h"

QThreadTest::QThreadTest(QWidget *parent, Qt::WFlags flags)
	: QMainWindow(parent, flags)
{
	childThread = new ChildThread(this);
	ui.setupUi(this);

	connect(ui.pushButtonShow, SIGNAL(clicked()), this, SLOT(onPushButtonShow()));

	//1、信号与槽在同一个线程中，使用Qt::DirectConnection方式、Qt::QueuedConnection方式连接都一样，默认Qt::DirectConnection方式；
	//2、信号与槽在不同线程中，如果使用Qt::DirectConnection方式连接，则槽函数在发信号的线程中运行；
	//3、信号与槽在不同线程中，如果使用Qt::QueuedConnection方式连接，则槽函数在槽函数所在线程中运行；

	connect(this, SIGNAL(requested()), childThread, SLOT(slotShowMessage()), Qt::DirectConnection);
	connect(childThread, SIGNAL(requested()), this, SLOT(slotShowMessage()), Qt::DirectConnection);

	childThread->start();

}

QThreadTest::~QThreadTest()
{

}

void QThreadTest::slotShowMessage()
{
	qDebug() << "slot main ThreadID:" << QThread::currentThreadId();
}

void QThreadTest::onPushButtonShow()
{
	qDebug() << "main ThreadID:" << QThread::currentThreadId();
	emit requested();
}
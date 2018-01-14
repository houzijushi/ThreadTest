#include "threadtest.h"
#include <QDebug>
#include <QThread>
#include "childthreadobj.h"

ThreadTest::ThreadTest(QWidget *parent, Qt::WFlags flags)
	: QMainWindow(parent, flags)
{
	ui.setupUi(this);
	qDebug() << "mainwindow ThreadID:" << QThread::currentThreadId();

	childthreadobj = new ChildThreadObj(NULL);
	childthread = new QThread;
	childthreadobj->moveToThread(childthread);
	childthread->start();
	
	//**********如果是Qt::QueuedConnection连接方式，则槽函数showMessage是在子线程运行
	connect(this, SIGNAL(requested()), childthreadobj, SLOT(showMessage()), Qt::QueuedConnection);
	//**********如果是Qt::DirectConnection连接方式，则槽函数showMessage是在主线程运行
	//connect(this, SIGNAL(requested()), childthreadobj, SLOT(showMessage()), Qt::DirectConnection);
	//**********如果Qt::QueuedConnection和Qt::DirectConnection两种连接方式都存在，则
	//槽函数showMessage执行两遍，分别在“主线程”和“子线程”执行，执行顺序跟connect连接顺序会不同；

	emit requested();
}

ThreadTest::~ThreadTest()
{

}

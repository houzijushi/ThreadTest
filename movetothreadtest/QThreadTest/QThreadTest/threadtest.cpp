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
	
	//**********�����Qt::QueuedConnection���ӷ�ʽ����ۺ���showMessage�������߳�����
	connect(this, SIGNAL(requested()), childthreadobj, SLOT(showMessage()), Qt::QueuedConnection);
	//**********�����Qt::DirectConnection���ӷ�ʽ����ۺ���showMessage�������߳�����
	//connect(this, SIGNAL(requested()), childthreadobj, SLOT(showMessage()), Qt::DirectConnection);
	//**********���Qt::QueuedConnection��Qt::DirectConnection�������ӷ�ʽ�����ڣ���
	//�ۺ���showMessageִ�����飬�ֱ��ڡ����̡߳��͡����̡߳�ִ�У�ִ��˳���connect����˳��᲻ͬ��

	emit requested();
}

ThreadTest::~ThreadTest()
{

}

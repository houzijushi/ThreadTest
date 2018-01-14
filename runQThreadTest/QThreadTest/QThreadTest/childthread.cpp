#include "childthread.h"

ChildThread::ChildThread(QObject *parent)
	: QThread(parent)
{

}

ChildThread::~ChildThread()
{

}

void ChildThread::run()
{
	qDebug() << "runfunc child ThreadID:" << QThread::currentThreadId();
	emit requested();
	//exec();
	//while(1)
	//{
	//	//qDebug() << "child thread run function is running";
	//}
}

void ChildThread::slotShowMessage()
{
	qDebug() << "slot child ThreadID:" << QThread::currentThreadId();

}

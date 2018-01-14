#include "childthreadobj.h"
#include <QDebug>
#include <QThread>

ChildThreadObj::ChildThreadObj(QObject *parent)
	: QObject(parent)
{

}

ChildThreadObj::~ChildThreadObj()
{

}

void ChildThreadObj::showMessage()
{
	qDebug() << "slotfuncChildThread ThreadID:" << QThread::currentThreadId();
}
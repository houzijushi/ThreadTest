#include "qthreadtest.h"

QThreadTest::QThreadTest(QWidget *parent, Qt::WFlags flags)
	: QMainWindow(parent, flags)
{
	childThread = new ChildThread(this);
	ui.setupUi(this);

	connect(ui.pushButtonShow, SIGNAL(clicked()), this, SLOT(onPushButtonShow()));

	//1���ź������ͬһ���߳��У�ʹ��Qt::DirectConnection��ʽ��Qt::QueuedConnection��ʽ���Ӷ�һ����Ĭ��Qt::DirectConnection��ʽ��
	//2���ź�����ڲ�ͬ�߳��У����ʹ��Qt::DirectConnection��ʽ���ӣ���ۺ����ڷ��źŵ��߳������У�
	//3���ź�����ڲ�ͬ�߳��У����ʹ��Qt::QueuedConnection��ʽ���ӣ���ۺ����ڲۺ��������߳������У�

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
#ifndef CHILDTHREAD_H
#define CHILDTHREAD_H

#include <QThread>
#include <QDebug>

class ChildThread : public QThread
{
	Q_OBJECT

public:
	ChildThread(QObject *parent);
	~ChildThread();

protected:
	void run();

private:

signals:
	void requested();

public slots:
	void slotShowMessage();

};

#endif // CHILDTHREAD_H

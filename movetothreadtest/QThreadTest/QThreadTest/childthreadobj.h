#ifndef CHILDTHREADOBJ_H
#define CHILDTHREADOBJ_H

#include <QObject>

class ChildThreadObj : public QObject
{
	Q_OBJECT

public:
	ChildThreadObj(QObject *parent);
	~ChildThreadObj();

private:

public slots:
	void showMessage();

	
};

#endif // CHILDTHREADOBJ_H

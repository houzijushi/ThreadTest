/********************************************************************************
** Form generated from reading UI file 'qthreadtest.ui'
**
** Created: Thu Aug 24 10:43:40 2017
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTHREADTEST_H
#define UI_QTHREADTEST_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QThreadTestClass
{
public:
    QWidget *centralWidget;
    QPushButton *pushButtonShow;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QThreadTestClass)
    {
        if (QThreadTestClass->objectName().isEmpty())
            QThreadTestClass->setObjectName(QString::fromUtf8("QThreadTestClass"));
        QThreadTestClass->resize(358, 179);
        centralWidget = new QWidget(QThreadTestClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        pushButtonShow = new QPushButton(centralWidget);
        pushButtonShow->setObjectName(QString::fromUtf8("pushButtonShow"));
        pushButtonShow->setGeometry(QRect(60, 40, 93, 28));
        QThreadTestClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(QThreadTestClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        QThreadTestClass->setStatusBar(statusBar);

        retranslateUi(QThreadTestClass);

        QMetaObject::connectSlotsByName(QThreadTestClass);
    } // setupUi

    void retranslateUi(QMainWindow *QThreadTestClass)
    {
        QThreadTestClass->setWindowTitle(QApplication::translate("QThreadTestClass", "QThreadTest", 0, QApplication::UnicodeUTF8));
        pushButtonShow->setText(QApplication::translate("QThreadTestClass", "\346\230\276\347\244\272", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QThreadTestClass: public Ui_QThreadTestClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTHREADTEST_H

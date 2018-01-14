/********************************************************************************
** Form generated from reading UI file 'threadtest.ui'
**
** Created: Thu Aug 24 09:32:39 2017
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_THREADTEST_H
#define UI_THREADTEST_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QThreadTestClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QThreadTestClass)
    {
        if (QThreadTestClass->objectName().isEmpty())
            QThreadTestClass->setObjectName(QString::fromUtf8("QThreadTestClass"));
        QThreadTestClass->resize(600, 400);
        menuBar = new QMenuBar(QThreadTestClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        QThreadTestClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QThreadTestClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        QThreadTestClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(QThreadTestClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        QThreadTestClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(QThreadTestClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        QThreadTestClass->setStatusBar(statusBar);

        retranslateUi(QThreadTestClass);

        QMetaObject::connectSlotsByName(QThreadTestClass);
    } // setupUi

    void retranslateUi(QMainWindow *QThreadTestClass)
    {
        QThreadTestClass->setWindowTitle(QApplication::translate("QThreadTestClass", "ThreadTest", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QThreadTestClass: public Ui_QThreadTestClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THREADTEST_H

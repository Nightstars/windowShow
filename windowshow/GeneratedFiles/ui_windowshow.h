/********************************************************************************
** Form generated from reading UI file 'windowshow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOWSHOW_H
#define UI_WINDOWSHOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_windowshowClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *windowshowClass)
    {
        if (windowshowClass->objectName().isEmpty())
            windowshowClass->setObjectName(QStringLiteral("windowshowClass"));
        windowshowClass->resize(600, 400);
        menuBar = new QMenuBar(windowshowClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        windowshowClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(windowshowClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        windowshowClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(windowshowClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        windowshowClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(windowshowClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        windowshowClass->setStatusBar(statusBar);

        retranslateUi(windowshowClass);

        QMetaObject::connectSlotsByName(windowshowClass);
    } // setupUi

    void retranslateUi(QMainWindow *windowshowClass)
    {
        windowshowClass->setWindowTitle(QApplication::translate("windowshowClass", "windowshow", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class windowshowClass: public Ui_windowshowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOWSHOW_H

/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>
#include "pendulumwidget.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLineEdit *lineEdit_T1;
    QLineEdit *lineEdit_T2;
    QLineEdit *lineEdit_a1;
    QLineEdit *lineEdit_a2;
    QPushButton *pushButton_calc;
    QLabel *label_result;
    PendulumWidget *openGLView;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        lineEdit_T1 = new QLineEdit(centralwidget);
        lineEdit_T1->setObjectName("lineEdit_T1");
        lineEdit_T1->setGeometry(QRect(670, 20, 113, 28));
        lineEdit_T2 = new QLineEdit(centralwidget);
        lineEdit_T2->setObjectName("lineEdit_T2");
        lineEdit_T2->setGeometry(QRect(670, 60, 113, 28));
        lineEdit_a1 = new QLineEdit(centralwidget);
        lineEdit_a1->setObjectName("lineEdit_a1");
        lineEdit_a1->setGeometry(QRect(670, 100, 113, 28));
        lineEdit_a2 = new QLineEdit(centralwidget);
        lineEdit_a2->setObjectName("lineEdit_a2");
        lineEdit_a2->setGeometry(QRect(670, 140, 113, 28));
        pushButton_calc = new QPushButton(centralwidget);
        pushButton_calc->setObjectName("pushButton_calc");
        pushButton_calc->setGeometry(QRect(680, 190, 83, 29));
        label_result = new QLabel(centralwidget);
        label_result->setObjectName("label_result");
        label_result->setGeometry(QRect(370, 10, 63, 20));
        openGLView = new PendulumWidget(centralwidget);
        openGLView->setObjectName("openGLView");
        openGLView->setEnabled(true);
        openGLView->setGeometry(QRect(30, 50, 611, 491));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton_calc->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        label_result->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

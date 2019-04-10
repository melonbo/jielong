/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Tue Feb 5 12:06:44 2019
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QTextEdit>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton_button;
    QTextEdit *textEdit_input;
    QLabel *label;
    QLabel *label_pinyin;
    QPushButton *pushButton_exit;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(400, 300);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        pushButton_button = new QPushButton(centralWidget);
        pushButton_button->setObjectName(QString::fromUtf8("pushButton_button"));
        pushButton_button->setGeometry(QRect(70, 110, 75, 23));
        textEdit_input = new QTextEdit(centralWidget);
        textEdit_input->setObjectName(QString::fromUtf8("textEdit_input"));
        textEdit_input->setGeometry(QRect(60, 60, 104, 31));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 70, 54, 12));
        label_pinyin = new QLabel(centralWidget);
        label_pinyin->setObjectName(QString::fromUtf8("label_pinyin"));
        label_pinyin->setGeometry(QRect(190, 62, 201, 31));
        label_pinyin->setFrameShape(QFrame::NoFrame);
        pushButton_exit = new QPushButton(centralWidget);
        pushButton_exit->setObjectName(QString::fromUtf8("pushButton_exit"));
        pushButton_exit->setGeometry(QRect(190, 110, 75, 23));
        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        pushButton_button->setText(QApplication::translate("MainWindow", "\345\274\200\345\247\213\346\220\234\347\264\242", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "\350\276\223\345\205\245\357\274\232", 0, QApplication::UnicodeUTF8));
        label_pinyin->setText(QString());
        pushButton_exit->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

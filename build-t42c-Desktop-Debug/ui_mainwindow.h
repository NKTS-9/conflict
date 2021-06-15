/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
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
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpinBox>
#include <QtGui/QStatusBar>
#include <QtGui/QTableView>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTableView *tableView;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEditName;
    QPushButton *pushButtonAdd;
    QPushButton *pushButtonRem;
    QPushButton *allDataViewButton;
    QPushButton *filtrDataButton;
    QPushButton *filtrData2Button;
    QLineEdit *lineEditRating;
    QLabel *label_4;
    QSpinBox *spinBoxyear;
    QLineEdit *lineEditID;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(654, 601);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        tableView = new QTableView(centralWidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(90, 90, 256, 192));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(80, 350, 41, 16));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(100, 310, 21, 21));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(90, 390, 31, 16));
        lineEditName = new QLineEdit(centralWidget);
        lineEditName->setObjectName(QString::fromUtf8("lineEditName"));
        lineEditName->setGeometry(QRect(130, 350, 113, 22));
        pushButtonAdd = new QPushButton(centralWidget);
        pushButtonAdd->setObjectName(QString::fromUtf8("pushButtonAdd"));
        pushButtonAdd->setGeometry(QRect(270, 310, 121, 22));
        pushButtonRem = new QPushButton(centralWidget);
        pushButtonRem->setObjectName(QString::fromUtf8("pushButtonRem"));
        pushButtonRem->setGeometry(QRect(270, 350, 111, 22));
        allDataViewButton = new QPushButton(centralWidget);
        allDataViewButton->setObjectName(QString::fromUtf8("allDataViewButton"));
        allDataViewButton->setGeometry(QRect(270, 390, 101, 22));
        filtrDataButton = new QPushButton(centralWidget);
        filtrDataButton->setObjectName(QString::fromUtf8("filtrDataButton"));
        filtrDataButton->setGeometry(QRect(270, 420, 91, 22));
        filtrData2Button = new QPushButton(centralWidget);
        filtrData2Button->setObjectName(QString::fromUtf8("filtrData2Button"));
        filtrData2Button->setGeometry(QRect(270, 450, 91, 22));
        lineEditRating = new QLineEdit(centralWidget);
        lineEditRating->setObjectName(QString::fromUtf8("lineEditRating"));
        lineEditRating->setGeometry(QRect(130, 420, 113, 22));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(60, 420, 59, 14));
        spinBoxyear = new QSpinBox(centralWidget);
        spinBoxyear->setObjectName(QString::fromUtf8("spinBoxyear"));
        spinBoxyear->setGeometry(QRect(137, 390, 101, 23));
        spinBoxyear->setMaximum(3000);
        lineEditID = new QLineEdit(centralWidget);
        lineEditID->setObjectName(QString::fromUtf8("lineEditID"));
        lineEditID->setGeometry(QRect(140, 310, 113, 22));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 654, 19));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "Name", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "ID", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "Year", 0, QApplication::UnicodeUTF8));
        pushButtonAdd->setText(QApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\267\320\260\320\277\320\270\321\201\321\214", 0, QApplication::UnicodeUTF8));
        pushButtonRem->setText(QApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \320\267\320\260\320\277\320\270\321\201\321\214", 0, QApplication::UnicodeUTF8));
        allDataViewButton->setText(QApplication::translate("MainWindow", "\320\222\321\213\320\262\320\265\321\201\321\202\320\270 \320\262\321\201\320\265", 0, QApplication::UnicodeUTF8));
        filtrDataButton->setText(QApplication::translate("MainWindow", "\320\263\320\276\320\264 > 2010", 0, QApplication::UnicodeUTF8));
        filtrData2Button->setText(QApplication::translate("MainWindow", "\320\263\320\276\320\264 < 2011", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindow", "Rating", 0, QApplication::UnicodeUTF8));
        lineEditID->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

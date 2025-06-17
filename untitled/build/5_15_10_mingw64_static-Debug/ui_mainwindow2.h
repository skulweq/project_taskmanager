/********************************************************************************
** Form generated from reading UI file 'mainwindow2.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW2_H
#define UI_MAINWINDOW2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow2
{
public:
    QWidget *centralwidget;
    QPushButton *deleteButton;
    QPushButton *pushButton_2;
    QListWidget *listWidget;
    QPushButton *sortAlphabetButton;
    QPushButton *sortDateButton;
    QPushButton *filterWorkButton;
    QPushButton *filterPersonalButton;
    QPushButton *filterNoCategoryButton;

    void setupUi(QMainWindow *MainWindow2)
    {
        if (MainWindow2->objectName().isEmpty())
            MainWindow2->setObjectName("MainWindow2");
        MainWindow2->resize(800, 742);
        MainWindow2->setStyleSheet(QString::fromUtf8("background-color: #252525;"));
        centralwidget = new QWidget(MainWindow2);
        centralwidget->setObjectName("centralwidget");
        deleteButton = new QPushButton(centralwidget);
        deleteButton->setObjectName("deleteButton");
        deleteButton->setGeometry(QRect(50, 160, 91, 51));
        QFont font;
        font.setPointSize(11);
        deleteButton->setFont(font);
        deleteButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: #383838;\n"
"	color: white;\n"
"	background-color: #CC0000;\n"
"}\n"
"\n"
"QPushButton::pressed {\n"
"	background-color: #424242;\n"
"}"));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(170, 160, 161, 51));
        pushButton_2->setFont(font);
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: #383838;\n"
"	color: white;\n"
"	background-color: #00BB00;\n"
"}\n"
"\n"
"QPushButton::pressed {\n"
"	background-color: #424242;\n"
"}"));
        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(40, 240, 721, 481));
        QFont font1;
        font1.setPointSize(17);
        listWidget->setFont(font1);
        listWidget->setStyleSheet(QString::fromUtf8("QListWidget {\n"
"	color: white;\n"
"}"));
        sortAlphabetButton = new QPushButton(centralwidget);
        sortAlphabetButton->setObjectName("sortAlphabetButton");
        sortAlphabetButton->setGeometry(QRect(420, 40, 161, 71));
        sortAlphabetButton->setFont(font);
        sortAlphabetButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: #383838;\n"
"	color: white;\n"
"	background-color: #333333;\n"
"}\n"
"\n"
"QPushButton::pressed {\n"
"	background-color: #424242;\n"
"}"));
        sortDateButton = new QPushButton(centralwidget);
        sortDateButton->setObjectName("sortDateButton");
        sortDateButton->setGeometry(QRect(610, 40, 161, 71));
        sortDateButton->setFont(font);
        sortDateButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: #383838;\n"
"	color: white;\n"
"	background-color: #333333;\n"
"}\n"
"\n"
"QPushButton::pressed {\n"
"	background-color: #424242;\n"
"}"));
        filterWorkButton = new QPushButton(centralwidget);
        filterWorkButton->setObjectName("filterWorkButton");
        filterWorkButton->setGeometry(QRect(420, 130, 161, 71));
        filterWorkButton->setFont(font);
        filterWorkButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: #383838;\n"
"	color: white;\n"
"	background-color: #333333;\n"
"}\n"
"\n"
"QPushButton::pressed {\n"
"	background-color: #424242;\n"
"}"));
        filterPersonalButton = new QPushButton(centralwidget);
        filterPersonalButton->setObjectName("filterPersonalButton");
        filterPersonalButton->setGeometry(QRect(610, 130, 161, 71));
        filterPersonalButton->setFont(font);
        filterPersonalButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: #383838;\n"
"	color: white;\n"
"	background-color: #333333;\n"
"}\n"
"\n"
"QPushButton::pressed {\n"
"	background-color: #424242;\n"
"}"));
        filterNoCategoryButton = new QPushButton(centralwidget);
        filterNoCategoryButton->setObjectName("filterNoCategoryButton");
        filterNoCategoryButton->setGeometry(QRect(190, 40, 201, 71));
        filterNoCategoryButton->setFont(font);
        filterNoCategoryButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: #383838;\n"
"	color: white;\n"
"	background-color: #333333;\n"
"}\n"
"\n"
"QPushButton::pressed {\n"
"	background-color: #424242;\n"
"}"));
        MainWindow2->setCentralWidget(centralwidget);

        retranslateUi(MainWindow2);

        QMetaObject::connectSlotsByName(MainWindow2);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow2)
    {
        MainWindow2->setWindowTitle(QCoreApplication::translate("MainWindow2", "MainWindow", nullptr));
        deleteButton->setText(QCoreApplication::translate("MainWindow2", "\321\203\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow2", "\321\201\320\276\320\267\320\264\320\260\321\202\321\214 \320\267\320\260\320\264\320\260\321\207\321\203", nullptr));
        sortAlphabetButton->setText(QCoreApplication::translate("MainWindow2", "\321\204\320\270\320\273\321\214\321\202\321\200 \320\277\320\276 \320\260\320\273\321\204\320\260\320\262\320\270\321\202\321\203", nullptr));
        sortDateButton->setText(QCoreApplication::translate("MainWindow2", "\321\204\320\270\320\273\321\214\321\202\321\200 \320\277\320\276 \320\264\320\260\321\202\320\265", nullptr));
        filterWorkButton->setText(QCoreApplication::translate("MainWindow2", "\321\204\320\270\320\273\321\214\321\202\321\200 \320\277\320\276 #\321\200\320\260\320\261\320\276\321\202\320\260", nullptr));
        filterPersonalButton->setText(QCoreApplication::translate("MainWindow2", "\321\204\320\270\320\273\321\214\321\202\321\200 \320\277\320\276 #\320\273\320\270\321\207\320\275\320\276\320\265", nullptr));
        filterNoCategoryButton->setText(QCoreApplication::translate("MainWindow2", "\321\204\320\270\320\273\321\214\321\202\321\200 \320\277\320\276 \"\320\221\320\265\320\267 \320\272\320\260\321\202\320\265\320\263\320\276\321\200\320\270\320\270\"", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow2: public Ui_MainWindow2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW2_H

/********************************************************************************
** Form generated from reading UI file 'registration.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTRATION_H
#define UI_REGISTRATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_registration
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton_2;
    QLabel *label_2;
    QPushButton *pushButton;
    QLineEdit *lineEdit_3;
    QLabel *label_3;
    QLineEdit *lineEdit_2;

    void setupUi(QMainWindow *registration)
    {
        if (registration->objectName().isEmpty())
            registration->setObjectName("registration");
        registration->resize(800, 600);
        registration->setStyleSheet(QString::fromUtf8("background-color: #252525;"));
        centralwidget = new QWidget(registration);
        centralwidget->setObjectName("centralwidget");
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(300, 330, 181, 41));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: #383838;\n"
"	color: white;\n"
"	background-color: #333333;\n"
"}\n"
"\n"
"QPushButton::pressed {\n"
"	background-color: #424242;\n"
"}\n"
""));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(270, 120, 71, 21));
        QFont font;
        font.setPointSize(11);
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("color: white;"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(340, 460, 101, 41));
        pushButton->setFont(font);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: #383838;\n"
"	color: white;\n"
"	background-color: #333333;\n"
"}\n"
"\n"
"QPushButton::pressed {\n"
"	background-color: #424242;\n"
"}\n"
""));
        lineEdit_3 = new QLineEdit(centralwidget);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(270, 240, 241, 41));
        lineEdit_3->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	border: #383838;\n"
"	color: white;\n"
"	background-color: #333333;\n"
"}\n"
""));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(270, 210, 71, 21));
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("color: white;"));
        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(270, 150, 241, 41));
        lineEdit_2->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	border: #383838;\n"
"	color: white;\n"
"	background-color: #333333;\n"
"}\n"
""));
        registration->setCentralWidget(centralwidget);

        retranslateUi(registration);

        QMetaObject::connectSlotsByName(registration);
    } // setupUi

    void retranslateUi(QMainWindow *registration)
    {
        registration->setWindowTitle(QCoreApplication::translate("registration", "MainWindow", nullptr));
        pushButton_2->setText(QCoreApplication::translate("registration", "\320\267\320\260\321\200\320\265\320\263\320\270\321\201\321\202\321\200\320\270\321\200\320\276\320\262\320\260\321\202\321\214\321\201\321\217", nullptr));
        label_2->setText(QCoreApplication::translate("registration", "\320\273\320\276\320\263\320\270\320\275", nullptr));
        pushButton->setText(QCoreApplication::translate("registration", "\320\262\321\205\320\276\320\264", nullptr));
        label_3->setText(QCoreApplication::translate("registration", "\320\277\320\260\321\200\320\276\320\273\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class registration: public Ui_registration {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTRATION_H

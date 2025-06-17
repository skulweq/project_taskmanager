/********************************************************************************
** Form generated from reading UI file 'profile.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROFILE_H
#define UI_PROFILE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_profile
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *pushButton_3;

    void setupUi(QMainWindow *profile)
    {
        if (profile->objectName().isEmpty())
            profile->setObjectName("profile");
        profile->resize(800, 600);
        profile->setStyleSheet(QString::fromUtf8("background-color: #252525;"));
        centralwidget = new QWidget(profile);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(310, 300, 151, 31));
        QFont font;
        font.setPointSize(11);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	margin-left: 50%;\n"
"	color: white;\n"
"}"));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(670, 40, 81, 51));
        pushButton_3->setFont(font);
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: #383838;\n"
"	color: white;\n"
"	background-color: #333333;\n"
"}\n"
"\n"
"QPushButton::pressed {\n"
"	background-color: #424242;\n"
"}"));
        profile->setCentralWidget(centralwidget);

        retranslateUi(profile);

        QMetaObject::connectSlotsByName(profile);
    } // setupUi

    void retranslateUi(QMainWindow *profile)
    {
        profile->setWindowTitle(QCoreApplication::translate("profile", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("profile", "\320\230\320\262\320\260\320\275 \320\230\320\262\320\260\320\275\320\276\320\262", nullptr));
        pushButton_3->setText(QCoreApplication::translate("profile", "\320\274\320\265\320\275\321\216", nullptr));
    } // retranslateUi

};

namespace Ui {
    class profile: public Ui_profile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROFILE_H

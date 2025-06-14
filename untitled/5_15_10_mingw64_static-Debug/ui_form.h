/********************************************************************************
** Form generated from reading UI file 'form.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM_H
#define UI_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QTextEdit *textEdit;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName("Form");
        Form->resize(574, 448);
        Form->setStyleSheet(QString::fromUtf8("background-color: #252525;"));
        pushButton = new QPushButton(Form);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(210, 320, 141, 41));
        QFont font;
        font.setPointSize(11);
        pushButton->setFont(font);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: #383838;\n"
"	color: white;\n"
"	background-color: #333333;\n"
"}\n"
"\n"
"QPushButton::pressed {\n"
"	background-color: #424242;\n"
"}"));
        lineEdit = new QLineEdit(Form);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(150, 110, 271, 41));
        lineEdit->setFont(font);
        lineEdit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	border: #383838;\n"
"	color: white;\n"
"	background-color: #333333;\n"
"}"));
        textEdit = new QTextEdit(Form);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(150, 210, 271, 41));
        textEdit->setFont(font);
        textEdit->setStyleSheet(QString::fromUtf8("QTextEdit {\n"
"	border: #383838;\n"
"	color: white;\n"
"	background-color: #333333;\n"
"}"));
        label = new QLabel(Form);
        label->setObjectName("label");
        label->setGeometry(QRect(150, 80, 131, 21));
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: white;\n"
"}"));
        label_2 = new QLabel(Form);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(150, 180, 71, 21));
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: white;\n"
"}"));

        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QCoreApplication::translate("Form", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("Form", "\321\201\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
        label->setText(QCoreApplication::translate("Form", "\320\275\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \320\267\320\260\320\264\320\260\321\207\320\270", nullptr));
        label_2->setText(QCoreApplication::translate("Form", "\320\276\320\277\320\270\321\201\320\260\320\275\320\270\320\265", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM_H

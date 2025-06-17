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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
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
    QLabel *label_3;
    QDateEdit *dateEdit;
    QLabel *label_4;
    QComboBox *categoryComboBox;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName("Form");
        Form->resize(574, 551);
        Form->setStyleSheet(QString::fromUtf8("background-color: #252525;"));
        pushButton = new QPushButton(Form);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(200, 460, 161, 51));
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
        lineEdit->setGeometry(QRect(150, 80, 271, 41));
        lineEdit->setFont(font);
        lineEdit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	border: #383838;\n"
"	color: white;\n"
"	background-color: #333333;\n"
"}"));
        textEdit = new QTextEdit(Form);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(150, 180, 271, 41));
        textEdit->setFont(font);
        textEdit->setStyleSheet(QString::fromUtf8("QTextEdit {\n"
"	border: #383838;\n"
"	color: white;\n"
"	background-color: #333333;\n"
"}"));
        label = new QLabel(Form);
        label->setObjectName("label");
        label->setGeometry(QRect(150, 50, 131, 21));
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: white;\n"
"}"));
        label_2 = new QLabel(Form);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(150, 150, 71, 21));
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: white;\n"
"}"));
        label_3 = new QLabel(Form);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(150, 350, 71, 21));
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: white;\n"
"}"));
        dateEdit = new QDateEdit(Form);
        dateEdit->setObjectName("dateEdit");
        dateEdit->setGeometry(QRect(150, 370, 271, 51));
        dateEdit->setFont(font);
        dateEdit->setStyleSheet(QString::fromUtf8("QDateEdit {\n"
"	border: #383838;\n"
"	color: white;\n"
"	background-color: #333333;\n"
"}"));
        label_4 = new QLabel(Form);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(150, 250, 71, 21));
        label_4->setFont(font);
        label_4->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: white;\n"
"}"));
        categoryComboBox = new QComboBox(Form);
        categoryComboBox->setObjectName("categoryComboBox");
        categoryComboBox->setGeometry(QRect(150, 270, 271, 41));
        categoryComboBox->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"	color: white !important;\n"
"	border: #383838;\n"
"	background-color: #333333;\n"
"}"));
        categoryComboBox->setEditable(false);

        retranslateUi(Form);

        categoryComboBox->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QCoreApplication::translate("Form", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("Form", "\321\201\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
        label->setText(QCoreApplication::translate("Form", "\320\275\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \320\267\320\260\320\264\320\260\321\207\320\270", nullptr));
        label_2->setText(QCoreApplication::translate("Form", "\320\276\320\277\320\270\321\201\320\260\320\275\320\270\320\265", nullptr));
        label_3->setText(QCoreApplication::translate("Form", "\321\201\321\200\320\276\320\272", nullptr));
        label_4->setText(QCoreApplication::translate("Form", "\320\272\320\260\321\202\320\265\320\263\320\276\321\200\320\270\321\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM_H

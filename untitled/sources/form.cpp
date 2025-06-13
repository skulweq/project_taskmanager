#include "form.h"
#include "ui_form.h"
#include "profile.h"
#include "mainwindow2.h"

Form::Form(QWidget *parent)
    : QWidget(parent),
    ui(new Ui::Form),
    mainwindow2(nullptr)
{
    ui->setupUi(this);
    connect(ui->pushButton, &QPushButton::clicked, this, &Form::on_pushButton_clicked);
}

Form::~Form()
{
    delete ui;
    delete mainwindow2;
}

void Form::on_pushButton_clicked()
{
    QString title = ui->lineEdit->text();
    QString description = ui->textEdit->toPlainText();

    if (!title.isEmpty()) {
        emit taskCreated(title, description);
        this->close();
    }

    if (!mainwindow2) {
        mainwindow2 = new MainWindow2(this); // Указываем родителя
    }
    mainwindow2->show();
    this->hide(); // Или close(), но тогда нужно изменить логику
}


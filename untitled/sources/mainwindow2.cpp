#include "mainwindow2.h"
#include "ui_mainwindow2.h"
#include "form.h"

MainWindow2::MainWindow2(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow2),
    form(nullptr)
{
    ui->setupUi(this);
}

MainWindow2::~MainWindow2()
{
    delete ui;
}

void MainWindow2::on_pushButton_3_clicked()
{
    if (!form) {
        form = new Form(this);  // Указываем родителя
    }
    form->show();
    this->hide();  // Скрываем, но не удаляем
}


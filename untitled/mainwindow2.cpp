#include "mainwindow2.h"
#include "form.h"
#include "ui_mainwindow2.h"

MainWindow2::MainWindow2(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow2)
{
    ui->setupUi(this);
    menuForm = new Form(this);
    menuForm->hide();
}

MainWindow2::~MainWindow2()
{
    delete ui;
}

void MainWindow2::on_pushButton_3_clicked()
{
    menuForm->show();
    this->close();
}


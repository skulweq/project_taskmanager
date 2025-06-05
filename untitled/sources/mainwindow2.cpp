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
    if (form) delete form;

}

void MainWindow2::on_pushButton_2_clicked()
{
    if (!form) {
        form = new Form();
    }
    form->show();
    this->hide();
}

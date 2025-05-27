#include "registration.h"
#include "ui_registration.h"
#include "mainwindow.h"

registration::registration(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::registration), mainwindow(nullptr) {
    ui->setupUi(this);
}

registration::~registration()
{
    delete ui;
    if (mainwindow) delete mainwindow;
}

void registration::on_pushButton_clicked()
{
    if (!mainwindow) {
        mainwindow = new MainWindow();
    }
    mainwindow->show();
    this->hide();
}



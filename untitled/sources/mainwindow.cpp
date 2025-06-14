#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "mainwindow2.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent),
    ui(new Ui::MainWindow),
    mainwindow2(nullptr)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
    if (mainwindow2) delete mainwindow2;


}

void MainWindow::on_pushButton_clicked()
{
    if (!mainwindow2) {
        mainwindow2 = new MainWindow2(this); // Указываем родителя
    }
    mainwindow2->show();
    this->hide(); // Или close(), но тогда нужно изменить логику
}






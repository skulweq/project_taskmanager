#include "form.h"
#include "mainwindow2.h"
#include "profile.h"
#include "ui_form.h"

Form::Form(QWidget *parent)
    : QWidget(parent), ui(new Ui::Form)
{
    ui->setupUi(this);
    profile = new class profile(this);  // Передаём this (Form) в profile
}

Form::~Form()
{
    delete ui;
}

void Form::on_pushButton_clicked()
{
    profile->show();
    this->hide();
}


void Form::on_pushButton_2_clicked()
{
    mainwindow2->show();
    this->hide();
}


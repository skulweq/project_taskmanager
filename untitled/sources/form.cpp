#include "form.h"
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


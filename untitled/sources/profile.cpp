#include "profile.h"
#include "ui_profile.h"
#include "form.h"

profile::profile(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::profile)
{
    ui->setupUi(this);
    form = new Form(nullptr);
    form->close();
}

profile::~profile()
{
    delete ui;
}

void profile::on_pushButton_3_clicked()
{
    form->show();
    this->close();
}


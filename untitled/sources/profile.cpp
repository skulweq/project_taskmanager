#include "profile.h"
#include "ui_profile.h"
#include "form.h"

profile::profile(Form *form, QWidget *parent)
    : QMainWindow(parent), ui(new Ui::profile), form(form)  // Сохраняем переданный form
{
    ui->setupUi(this);
}

profile::~profile()
{
    delete ui;
}

void profile::on_pushButton_3_clicked()
{
    if (form) {
        form->show();
        this->hide();
    }
}

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
    // Устанавливаем минимальную дату - текущий день
    ui->dateEdit->setMinimumDate(QDate::currentDate());
    // Можно также установить текущую дату по умолчанию
    ui->dateEdit->setDate(QDate::currentDate());
    connect(ui->pushButton, &QPushButton::clicked, this, &Form::on_pushButton_clicked);

    ui->categoryComboBox->addItem("#работа");
    ui->categoryComboBox->addItem("#личное");
    ui->categoryComboBox->addItem("Без категории");

    ui->categoryComboBox->setStyleSheet(
        "QComboBox { padding: 3px; border-radius: 4px; }"
        );
}

Form::~Form()
{
    delete ui;
    delete mainwindow2;
}

QString Form::getSelectedCategory() const {
    return ui->categoryComboBox->currentText();
}

void Form::on_pushButton_clicked()
{
    QString title = ui->lineEdit->text();
    QString description = ui->textEdit->toPlainText();
    QDate dueDate = ui->dateEdit->date();
    QString category = ui->categoryComboBox->currentText();

    if (!title.isEmpty()) {
        emit taskCreated(title, description, dueDate);
        this->close();
    }

    if (!mainwindow2) {
        mainwindow2 = new MainWindow2(this); // Указываем родителя
    }
    mainwindow2->show();
    this->hide(); // Или close(), но тогда нужно изменить логику
}

QDate Form::dueDate() const {
    return ui->dateEdit->date();
}

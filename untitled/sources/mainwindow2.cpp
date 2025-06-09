#include "mainwindow2.h"
#include "ui_mainwindow2.h"
#include "form.h"
#include "task.h"
#include <QFile>
#include <QDir>
#include <QTextStream>
#include "task2.txt"

MainWindow2::MainWindow2(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow2),
    form(nullptr)
{
    ui->setupUi(this);
    loadTasks();
    displayTasks();
}

MainWindow2::~MainWindow2()
{
    saveTasks();
    delete ui;
    if (form) delete form;

}

void MainWindow2::on_pushButton_2_clicked() {
    Form *form = new Form();
    connect(form, &Form::taskCreated, this, &MainWindow2::handleTaskCreated);
    form->show();
    this->hide();
}

void MainWindow2::handleTaskCreated(const QString &title, const QString &description) {
    m_tasks.append(Task(title, description));
    saveTasks();     // Сохраняем в файл
    displayTasks();  // Обновляем список
}

void MainWindow2::loadTasks()
{

    QString filePath = ("task2.txt");

    QFile file(filePath);
    if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream in(&file);
        while (!in.atEnd()) {
            QString line = in.readLine();
            Task task = Task::fromString(line);
            if (!task.getTitle().isEmpty()) {
                m_tasks.append(task);
            }
        }
        file.close();
    }
}

void MainWindow2::saveTasks()
{
    QFile file("task2.txt");
    qDebug() << "Полный путь к файлу:" << QFileInfo(file).absoluteFilePath();
    if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        QTextStream out(&file);
        for (const Task &task : m_tasks) {
            out << task.toString() << "\n";
        }
        file.close();
        qDebug() << "Файл сохранён:" << "task2.txt";
    } else {
        qDebug() << "Ошибка записи в файл:" << file.errorString();
    }
}

void MainWindow2::displayTasks()
{
    ui->listWidget->clear();
    for (const Task &task : m_tasks) {
        QString taskText = task.getTitle();
        ui->listWidget->addItem(taskText);
    }
}

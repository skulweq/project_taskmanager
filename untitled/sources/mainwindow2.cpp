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
    qDebug() << "Добавление новой задачи...";

    Task newTask(title, description);
    m_tasks.append(newTask);

    // Сохраняем ВЕСЬ список задач (перезаписываем файл)
    saveAllTasks();

    displayTasks();
}

void MainWindow2::saveAllTasks() {
    QFile file("task2.txt");
    if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        QTextStream out(&file);
        for (const Task &task : m_tasks) {
            out << task.toString() << "\n";
        }
        file.close();
        qDebug() << "Все задачи сохранены (" << m_tasks.size() << "шт)";
    }
}

void MainWindow2::loadTasks() {
    m_tasks.clear();

    QFile file("task2.txt");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qDebug() << "Файл не существует или недоступен";
        return;
    }

    QTextStream in(&file);
    while (!in.atEnd()) {
        Task task = Task::fromString(in.readLine());
        if (!task.getTitle().isEmpty()) {
            m_tasks.append(task);
        }
    }
    file.close();

    qDebug() << "Загружено задач:" << m_tasks.size();
}

void MainWindow2::saveTasks() {
    QFile file("task2.txt");
    if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {  // Затираем файл
        QTextStream out(&file);
        for (const Task &task : m_tasks) {
            out << task.toString() << "\n";
        }
        file.close();
    }
}


void MainWindow2::displayTasks()
{
    qDebug() << "Отображение задач. Всего:" << m_tasks.size();

    ui->listWidget->clear();

    if (m_tasks.isEmpty()) {
        qDebug() << "Список задач пуст!";
        ui->listWidget->addItem("Список задач пуст"); // Временная заглушка
        return;
    }

    for (const Task &task : m_tasks) {
        QListWidgetItem *item = new QListWidgetItem(task.getTitle());

        // Сохраняем полное описание в данных элемента
        item->setData(Qt::UserRole, task.getDescription());

        // Устанавливаем подсказку с описанием
        item->setToolTip(task.getDescription());

        ui->listWidget->addItem(item);
    }
}

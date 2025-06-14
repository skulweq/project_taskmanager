#include "mainwindow2.h"
#include "ui_mainwindow2.h"
#include "form.h"
#include "task.h"
#include <QFile>
#include <QDir>
#include <QTextStream>
#include "task2.txt"
#include <QFont>

MainWindow2::MainWindow2(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow2),
    form(nullptr)
{


    ui->setupUi(this);

    connect(ui->deleteButton, &QPushButton::clicked,
            this, &MainWindow2::onDeleteButtonClicked);

    // Подключаем выбор элемента
    connect(ui->listWidget, &QListWidget::itemClicked,
            this, &MainWindow2::onTaskSelected);

    connect(ui->listWidget, &QListWidget::itemClicked,
            this, &MainWindow2::toggleTaskStatus);

    loadTasks();
    displayTasks();

    ui->listWidget->setStyleSheet(
        "QListWidget {"
        "   background: transparent;"
        "   color: white;"
        "}"
        "QListWidget::item {"
        "   padding: 8px;"
        "   margin: 4px;"
        "   border-radius: 4px;"
        "   background: rgba(255, 255, 255, 30);"
        "}"
        "QListWidget::item:hover {"
        "   background: rgba(255, 255, 255, 50);"
        "}"
        "QListWidget::item:selected {"
        "   background: rgba(255, 255, 255, 80);"
        "}"
        );
}

void MainWindow2::toggleTaskStatus(QListWidgetItem* item)
{
    if (!item) {
        qDebug() << "Invalid item pointer";
        return;
    }

    // Получаем индекс задачи
    int row = ui->listWidget->row(item);
    if (row < 0 || row >= m_tasks.size()) {
        qDebug() << "Invalid row index:" << row;
        return;
    }

    // Изменяем статус напрямую в списке задач
    m_tasks[row].setCompleted(!m_tasks[row].isCompleted());

    // Сохраняем и обновляем
    saveAllTasks();
    displayTasks();

    qDebug() << "Task status toggled. New status:" << m_tasks[row].isCompleted();
}

// Новый метод для удаления
void MainWindow2::onDeleteButtonClicked()
{
    if (m_currentSelectedRow >= 0 && m_currentSelectedRow < m_tasks.size()) {
        // Удаляем из списка
        m_tasks.removeAt(m_currentSelectedRow);

        // Обновляем файл
        saveAllTasks();

        // Обновляем отображение
        displayTasks();

        m_currentSelectedRow = -1;  // Сбрасываем выбор
    }
}

// Обработчик выбора задачи
void MainWindow2::onTaskSelected(QListWidgetItem* item)
{
    m_currentSelectedRow = ui->listWidget->row(item);

    // Устанавливаем стиль для всех элементов
    for (int i = 0; i < ui->listWidget->count(); ++i) {
        QListWidgetItem* currentItem = ui->listWidget->item(i);

        if (currentItem == item) {
            // Выбранный элемент - подсвеченный
            currentItem->setBackground(Qt::lightGray);  // Серый фон
            currentItem->setForeground(Qt::white);      // Черный текст
        } else {
            // Невыбранные элементы - полупрозрачные
            QColor semiTransparent(255, 255, 255, 80);  // Полупрозрачный белый фон
            currentItem->setBackground(semiTransparent);

            // Белый непрозрачный текст
            currentItem->setForeground(Qt::white);      // Изменено на белый
        }
    }
}

void MainWindow2::saveAllTasks()
{
    QFile file("task2.txt");
    if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        QTextStream out(&file);
        for (const Task &task : m_tasks) {
            out << task.toString() << "\n";
        }
        file.close();
    }
}

MainWindow2::~MainWindow2()
{
    //saveTasks();
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
        QListWidgetItem *item = new QListWidgetItem();

        QString prefix = task.isCompleted() ? "✓ " : "";
        item->setText(prefix + task.getTitle());

        if (task.isCompleted()) {
            item->setForeground(Qt::gray);

            // Правильный способ установки зачеркнутого шрифта:
            QFont font = item->font();  // Получаем текущий шрифт
            font.setStrikeOut(true);    // Модифицируем его
            item->setFont(font);        // Устанавливаем обратно
        }

        item->setData(Qt::UserRole, QVariant::fromValue(task));
        ui->listWidget->addItem(item);
    }
}

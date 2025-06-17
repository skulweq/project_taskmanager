#ifndef MAINWINDOW2_H
#define MAINWINDOW2_H

#include "qlistwidget.h"
#include "task.h"
#include <QMainWindow>

class Form;

namespace Ui {
class MainWindow2;
}

class MainWindow2 : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow2(QWidget *parent = nullptr);
    ~MainWindow2();

    void loadTasks();
    void saveTasks();
    void displayTasks();
    void saveAllTasks();
    void filterOverdueTasks();
    void displayFilteredTasks(const QList<Task>& tasks);


private slots:
    void on_pushButton_2_clicked();
    void handleTaskCreated(const QString &title, const QString &description,
                           const QString &category, const QDate &dueDate);

    void onDeleteButtonClicked();  // Новый слот для удаления
    void onTaskSelected(QListWidgetItem* item);  // Для выделения задач

    void toggleTaskStatus(QListWidgetItem* item);  // Новый слот для переключения статуса

    void sortTasksByAlphabet();
    void sortTasksByDate();

    void filterByWork();
    void filterByPersonal();
    void filterByNoCategory();

private:
    Ui::MainWindow2 *ui;
    Form *form = nullptr;
    QList<Task> m_tasks;
    QString m_tasksFile = "task2.txt";

    int m_currentSelectedRow = -1;

    void applyFilter(const QString& categoryFilter);

};

#endif // MAINWINDOW2_H

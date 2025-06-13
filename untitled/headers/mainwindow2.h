#ifndef MAINWINDOW2_H
#define MAINWINDOW2_H

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


private slots:
    void on_pushButton_2_clicked();
    void handleTaskCreated(const QString &title, const QString &description);

private:
    Ui::MainWindow2 *ui;
    Form *form = nullptr;
    QList<Task> m_tasks;
    QString m_tasksFile = "task2.txt";

};

#endif // MAINWINDOW2_H


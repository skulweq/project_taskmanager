#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "registration.h"
#include <QMainWindow>

class MainWindow2;
class registration;

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::MainWindow *ui;
    MainWindow2 *mainwindow2;
    registration *registration;
};
#endif // MAINWINDOW_H

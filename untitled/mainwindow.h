#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <mainwindow2.h>

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
    void switchToPage(QWidget *newPage);

private slots:
    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    MainWindow2 mainwindow2;
};
#endif // MAINWINDOW_H

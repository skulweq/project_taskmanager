#ifndef MAINWINDOW2_H
#define MAINWINDOW2_H

#include <QMainWindow>

class Form;

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow2;
}
QT_END_NAMESPACE

class MainWindow2 : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow2(QWidget *parent = nullptr);
    ~MainWindow2();

private slots:
    void on_pushButton_3_clicked();

private:
    Ui::MainWindow2 *ui;
    Form *menuForm;
};

#endif // MAINWINDOW2_H

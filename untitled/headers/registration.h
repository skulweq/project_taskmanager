#ifndef REGISTRATION_H
#define REGISTRATION_H

#include <QMainWindow>

class MainWindow;

namespace Ui {
class registration;
}

class registration : public QMainWindow
{
    Q_OBJECT

public:
    explicit registration(QWidget *parent = nullptr);
    ~registration();
    
private slots:
    void on_pushButton_clicked();
    
private:
    Ui::registration *ui;
    MainWindow *mainwindow;
};

#endif // REGISTRATION_H

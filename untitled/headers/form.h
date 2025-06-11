#ifndef FORM_H
#define FORM_H

class MainWindow2;

#include <QWidget>

namespace Ui {
class Form;
}

class Form : public QWidget
{
    Q_OBJECT

public:
    explicit Form(QWidget *parent = nullptr);
    ~Form();

signals:
    void taskCreated(const QString &title, const QString &description);

private slots:
    void on_pushButton_clicked();

private:
    Ui::Form *ui;
    MainWindow2 *mainwindow2 = nullptr;
};

#endif // FORM_H

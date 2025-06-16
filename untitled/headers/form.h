#ifndef FORM_H
#define FORM_H

#include "ui_form.h"
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
    QDate dueDate() const;
    QString getSelectedCategory() const;

signals:
    void taskCreated(const QString &title, const QString &description,
                     const QString& category, const QDate &dueDate);

private slots:
    void on_pushButton_clicked();

private:
    Ui::Form *ui;
    MainWindow2 *mainwindow2 = nullptr;
};

#endif // FORM_H

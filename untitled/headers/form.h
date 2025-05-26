#ifndef FORM_H
#define FORM_H

#include <QWidget>

class profile;

namespace Ui {
class Form;
}

class Form : public QWidget
{
    Q_OBJECT

public:
    explicit Form(QWidget *parent = nullptr);
    ~Form();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Form *ui;
    profile *profile;

signals:
    void openProfile();  // Сигнал для открытия профиля
};

#endif // FORM_H

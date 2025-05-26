#ifndef PROFILE_H
#define PROFILE_H

#include <QMainWindow>

class Form;

namespace Ui {
class profile;
}

class profile : public QMainWindow
{
    Q_OBJECT

public:
    explicit profile(Form *form = nullptr, QWidget *parent = nullptr);  // Добавляем Form*
    ~profile();

private slots:
    void on_pushButton_3_clicked();

private:
    Ui::profile *ui;
    Form *form;
};

#endif // PROFILE_H

#ifndef TASK_H
#define TASK_H

#include <QString>
#include <QDate>

class Task {
public:
    Task(const QString &title, const QString &description);

    QString getTitle() const;
    QString getDescription() const;

    QString toString() const;
    static Task fromString(const QString &str);

    bool isCompleted() const;
    void setCompleted(bool completed);

    QDate dueDate() const;
    void setDueDate(const QDate &date);



private:
    QString m_title;
    QString m_description;

    bool m_completed = false;

    QDate m_dueDate;
};

#endif // TASK_H

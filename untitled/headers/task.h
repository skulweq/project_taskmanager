#ifndef TASK_H
#define TASK_H

#include <QString>

class Task {
public:
    Task(const QString &title, const QString &description);

    QString getTitle() const;
    QString getDescription() const;

    QString toString() const;
    static Task fromString(const QString &str);

private:
    QString m_title;
    QString m_description;
};

#endif // TASK_H

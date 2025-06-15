#include "task.h"
#include <QStringList>

Task::Task(const QString &title, const QString &description)
    : m_title(title), m_description(description) {}

QString Task::getTitle() const { return m_title; }
QString Task::getDescription() const { return m_description; }

QString Task::toString() const {
    return QString("%1|%2|%3|%4")
    .arg(m_title)
        .arg(m_description)
        .arg(m_completed ? "1" : "0")
        .arg(m_dueDate.toString(Qt::ISODate));  // Формат "yyyy-MM-dd"
}

Task Task::fromString(const QString &str) {
    QStringList parts = str.split("|");
    if (parts.size() >= 4) {
        Task task(parts[0], parts[1]);
        task.setCompleted(parts[2] == "1");
        task.setDueDate(QDate::fromString(parts[3], Qt::ISODate));
        return task;
    }
    return Task("", "");
}

bool Task::isCompleted() const {
    return m_completed;
}

void Task::setCompleted(bool completed) {
    m_completed = completed;
}

QDate Task::dueDate() const {
    return m_dueDate;
}

void Task::setDueDate(const QDate &date) {
    m_dueDate = date;
}

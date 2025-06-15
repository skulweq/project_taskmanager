#include "task.h"
#include <QStringList>

Task::Task(const QString &title, const QString &description, const QString &category)
    : m_title(title), m_description(description), m_category(category) {}

QString Task::getTitle() const { return m_title; }
QString Task::getDescription() const { return m_description; }

QString Task::toString() const {
    return QString("%1|%2|%3|%4|%5")
    .arg(m_title)
        .arg(m_description)
        .arg(m_category)
        .arg(m_completed ? "1" : "0")
        .arg(m_dueDate.toString(Qt::ISODate));  // Формат "yyyy-MM-dd"
}

Task Task::fromString(const QString &str) {
    QStringList parts = str.split("|");
    if (parts.size() == 4) {
        Task task(parts[0], parts[1], ""); // Категория пустая
        task.setCompleted(parts[2] == "1");
        task.setDueDate(QDate::fromString(parts[3], Qt::ISODate));
        return task;
    }
    if (parts.size() >= 5) {
        Task task(parts[0], parts[1], parts[2]);
        task.setCompleted(parts[3] == "1");
        task.setDueDate(QDate::fromString(parts[4], Qt::ISODate));
        return task;
    }
    return Task("", "", "");
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

QString Task::category() const {
    return m_category;
}

void Task::setCategory(const QString& category) {
    m_category = category;
}

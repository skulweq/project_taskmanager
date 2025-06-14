#include "task.h"
#include <QStringList>

Task::Task(const QString &title, const QString &description)
    : m_title(title), m_description(description) {}

QString Task::getTitle() const { return m_title; }
QString Task::getDescription() const { return m_description; }

QString Task::toString() const {
    return QString("%1|%2|%3")
    .arg(m_title)
        .arg(m_description)
        .arg(m_completed ? "1" : "0");
}

Task Task::fromString(const QString &str) {
    QStringList parts = str.split("|");
    if (parts.size() >= 3) {
        Task task(parts[0], parts[1]);
        task.setCompleted(parts[2] == "1");
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


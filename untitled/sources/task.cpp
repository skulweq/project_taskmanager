#include "task.h"
#include <QStringList>

Task::Task(const QString &title, const QString &description)
    : m_title(title), m_description(description) {}

QString Task::getTitle() const { return m_title; }
QString Task::getDescription() const { return m_description; }

QString Task::toString() const {
    return m_title + "|" + m_description;
}

Task Task::fromString(const QString &str) {
    QStringList parts = str.split("|");
    if (parts.size() >= 3) {
        return Task(parts[0], parts[1]);
    }
    return Task("", "");
}

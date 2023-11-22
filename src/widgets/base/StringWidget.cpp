#include "widgets/base/StringWidget.h"

#include "stores/TopicStore.h"

StringWidget::StringWidget(const QString &defaultValue)
{
    m_value = defaultValue;
}

StringWidget::~StringWidget() {
    TopicStore::unsubscribe(m_entry, this);
}

void StringWidget::update() {
    std::string value = m_entry->GetString(m_value.toStdString());

    m_value = QString::fromStdString(value);
}

QJsonObject StringWidget::saveObject() {
    QJsonObject object = BaseWidget::saveObject();

    object.insert("value", m_value);

    return object;
}

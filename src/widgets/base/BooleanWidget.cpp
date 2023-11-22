#include "widgets/base/BooleanWidget.h"

#include "stores/TopicStore.h"

BooleanWidget::BooleanWidget(const bool &defaultValue)
{
    m_value = defaultValue;
}

BooleanWidget::~BooleanWidget() {
    TopicStore::unsubscribe(m_entry, this);
}

void BooleanWidget::update() {
    bool value = m_entry->GetBoolean(m_value);

    m_value = value;
}

QJsonObject BooleanWidget::saveObject() {
    QJsonObject object = BaseWidget::saveObject();

    object.insert("value", m_value);

    return object;
}

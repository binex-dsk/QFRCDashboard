#include "widgets/base/IntegerWidget.h"

#include "stores/TopicStore.h"

IntegerWidget::IntegerWidget(const int &defaultValue)
{
    m_value = defaultValue;
}

IntegerWidget::~IntegerWidget() {
    TopicStore::unsubscribe(m_entry, this);
}

void IntegerWidget::update() {
    int value = m_entry->GetInteger(m_value);

    m_value = value;
}

QJsonObject IntegerWidget::saveObject() {
    QJsonObject object = BaseWidget::saveObject();

    object.insert("value", m_value);

    return object;
}

#include "widgets/base/DoubleWidget.h"

#include "stores/TopicStore.h"

DoubleWidget::DoubleWidget(const double &defaultValue)
{
    m_value = defaultValue;
}

DoubleWidget::~DoubleWidget() {
    TopicStore::unsubscribe(m_entry, this);
}

void DoubleWidget::update() {
    double value = m_entry->GetDouble(m_value);

    m_value = value;
}

QJsonObject DoubleWidget::saveObject() {
    QJsonObject object = BaseWidget::saveObject();

    object.insert("value", m_value);

    return object;
}

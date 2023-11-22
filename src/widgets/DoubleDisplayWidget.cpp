#include "widgets/DoubleDisplayWidget.h"
#include "stores/TopicStore.h"

#include <QKeyEvent>
#include <QApplication>

DoubleDisplayWidget::DoubleDisplayWidget(const QString &title, const double &defaultValue, const QString &topic) :     BaseWidget(WidgetTypes::DoubleDisplay, title, topic),
TextWidget(QString::number(defaultValue)),
    DoubleWidget(defaultValue)
{
}

DoubleDisplayWidget::~DoubleDisplayWidget() {
    TopicStore::unsubscribe(m_entry, this);
}

void DoubleDisplayWidget::update() {
    if (!m_text->hasFocus()) {
        DoubleWidget::update();

        TextWidget::setText(QString::number(m_value));
    }
}

QJsonObject DoubleDisplayWidget::saveObject() {
    QJsonObject textObject = TextWidget::saveObject();
    QJsonObject doubleObject = DoubleWidget::saveObject();

    QVariantMap combined = textObject.toVariantMap();
    combined.insert(doubleObject.toVariantMap());

    return QJsonObject::fromVariantMap(combined);
}

BaseWidget * DoubleDisplayWidget::fromJson(QJsonObject obj) {
    DoubleDisplayWidget *widget = new DoubleDisplayWidget(
        obj.value("title").toString(""),
        obj.value("value").toDouble(0.),
        obj.value("topic").toString(""));

    QFont font;
    font.fromString(obj.value("textFont").toString(qApp->font().toString()));
    widget->setTextFont(font);

    return (TextWidget *) widget;
}

void DoubleDisplayWidget::keyPressEvent(QKeyEvent *event) {
    if (m_text->hasFocus()) {
        m_entry->SetDouble(m_text->text().toDouble());
        m_value = m_text->text().toDouble();
    }
}


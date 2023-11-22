#include "widgets/base/TextWidget.h"
#include "stores/TopicStore.h"

#include <QAction>
#include <QMenu>
#include <QFontDialog>

TextWidget::TextWidget(const QString &defaultText)
{
    m_text = new QLineEdit(defaultText, this);

    m_layout->addWidget(m_text, 1, 0, 3, 1);

    m_text->setStyleSheet("border: none; border-bottom: 1px solid white;");
    m_text->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
}

TextWidget::~TextWidget() {
    TopicStore::unsubscribe(m_entry, this);
}

QString TextWidget::text() {
    return m_text->text();
}

void TextWidget::setText(const QString &text) {
    m_text->setText(text);
}

QFont TextWidget::textFont() {
    return m_text->font();
}

void TextWidget::setTextFont(const QFont &font) {
    m_text->setFont(font);
    m_text->setMinimumWidth(m_text->fontMetrics().maxWidth());
}

QMenu *TextWidget::constructContextMenu(WidgetData data) {
    QMenu *menu = BaseWidget::constructContextMenu(data);

    QAction *textFontAction = new QAction("Text Font", menu);
    menu->addAction(textFontAction);

    connect(textFontAction, &QAction::triggered, this, [this](bool) {
        setTextFont(QFontDialog::getFont(0, textFont(), this, "Set Text Font"));
    });

    return menu;
}

QJsonObject TextWidget::saveObject() {
    QJsonObject object = BaseWidget::saveObject();

    object.insert("textFont", textFont().toString());
    object.insert("text", text());

    return object;
}

void TextWidget::update() {

}

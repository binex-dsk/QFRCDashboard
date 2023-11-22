#pragma once

#include "widgets/base/BaseWidget.h"

#include <QLineEdit>

class BaseWidget;

class TextWidget : virtual public BaseWidget
{
    Q_OBJECT
protected:
    QLineEdit *m_text;
public:
    TextWidget(const QString &defaultText);
    ~TextWidget();
    
    QString text();
    void setText(const QString &text);

    QFont textFont();
    void setTextFont(const QFont &font);

    QMenu *constructContextMenu(WidgetData data) override;

    virtual QJsonObject saveObject() override;
    static BaseWidget * fromJson(QJsonObject obj);

    void update() override;
};

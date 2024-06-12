#pragma once

#include "BaseWidget.h"

#include <QLineEdit>

class TextWidget : public BaseWidget
{
protected:
    QLineEdit *m_text;
public:
    TextWidget(const QString &title, const QString &defaultText, const QString &topic, const NT_Type &type);
    virtual ~TextWidget();
    
    QString text();
    void setText(const QString &text);

    QFont font();
    void setFont(const QFont &font);
};

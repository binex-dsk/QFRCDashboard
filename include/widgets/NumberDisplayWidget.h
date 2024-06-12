#pragma once

#include "TextWidget.h"

class NumberDisplayWidget : public TextWidget
{
protected:
    double m_value;
public:
    NumberDisplayWidget(const QString &title, const double &defaultValue, const QString &topic);
    virtual ~NumberDisplayWidget();

    void update();
};

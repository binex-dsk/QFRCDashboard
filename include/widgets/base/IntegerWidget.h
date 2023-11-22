#ifndef INTEGERWIDGET_H
#define INTEGERWIDGET_H

#include "widgets/base/BaseWidget.h"

class IntegerWidget : public virtual BaseWidget
{
    Q_OBJECT

    Q_PROPERTY(int value MEMBER m_value)
protected:
    int m_value = 0;
public:
    IntegerWidget(const int &defaultValue);
    virtual ~IntegerWidget();

    virtual void update() override;
    virtual QJsonObject saveObject() override;
};

#endif // INTEGERWIDGET_H

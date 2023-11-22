#ifndef BOOLEANWIDGET_H
#define BOOLEANWIDGET_H

#include "widgets/base/BaseWidget.h"

class BooleanWidget : public virtual BaseWidget
{
    Q_OBJECT

    Q_PROPERTY(bool value MEMBER m_value)
protected:
    bool m_value = false;
public:
    BooleanWidget(const bool &defaultValue);
    virtual ~BooleanWidget();

    virtual void update() override;
    virtual QJsonObject saveObject() override;
};

#endif // BOOLEANWIDGET_H

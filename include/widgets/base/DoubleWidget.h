#ifndef DOUBLEWIDGET_H
#define DOUBLEWIDGET_H

#include "widgets/base/BaseWidget.h"

class DoubleWidget : public virtual BaseWidget
{
    Q_OBJECT

    Q_PROPERTY(double value MEMBER m_value)
protected:
    double m_value = 0.;
public:
    DoubleWidget(const double &defaultValue);
    virtual ~DoubleWidget();

    virtual void update() override;
    virtual QJsonObject saveObject() override;
};

#endif // DOUBLEWIDGET_H

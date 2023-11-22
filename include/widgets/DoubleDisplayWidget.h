#pragma once

#include "widgets/base/TextWidget.h"
#include "widgets/base/DoubleWidget.h"

class BaseWidget;

class DoubleDisplayWidget : public virtual TextWidget, public virtual DoubleWidget, public BaseWidget
{
    Q_OBJECT
protected:
    void keyPressEvent(QKeyEvent *event) override;
public:
    DoubleDisplayWidget(const QString &title, const double &defaultValue, const QString &topic);
    ~DoubleDisplayWidget();

    QJsonObject saveObject() override;
    static BaseWidget * fromJson(QJsonObject obj);

    void update() override;
};

#ifndef STRINGWIDGET_H
#define STRINGWIDGET_H

#include "widgets/base/BaseWidget.h"

class StringWidget : public virtual BaseWidget
{
    Q_OBJECT

    Q_PROPERTY(QString value MEMBER m_value)
protected:
    QString m_value = "";
public:
    StringWidget(const QString &defaultValue);
    virtual ~StringWidget();

    virtual void update() override;
    virtual QJsonObject saveObject() override;
};

#endif // STRINGWIDGET_H

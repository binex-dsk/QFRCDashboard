#ifndef BOOLEANCHECKBOXWIDGET_H
#define BOOLEANCHECKBOXWIDGET_H

#include <QCheckBox>
#include "widgets/base/BooleanWidget.h"

class BooleanCheckboxWidget : public BooleanWidget, public BaseWidget
{
    Q_OBJECT

    Q_PROPERTY(int Checkbox_Size READ checkboxSize WRITE setCheckboxSize REQUIRED)
protected:
    int m_checkboxSize = 30;

    QCheckBox *m_checkbox;
public:
    BooleanCheckboxWidget(const QString &title, const bool &defaultValue, const QString &topic);
    ~BooleanCheckboxWidget();

    int checkboxSize();
    void setCheckboxSize(int size);

    QJsonObject saveObject() override;
    static BaseWidget * fromJson(QJsonObject obj);

    void update() override;
};

#endif // BOOLEANCHECKBOXWIDGET_H

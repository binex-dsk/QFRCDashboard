#ifndef BOOLEANCHECKBOXWIDGET_H
#define BOOLEANCHECKBOXWIDGET_H

#include <QCheckBox>
#include "widgets/BaseWidget.h"

class BooleanCheckboxWidget : public BaseWidget
{
    Q_OBJECT

    Q_PROPERTY(bool value MEMBER m_value)
    Q_PROPERTY(QString Topic READ topic WRITE setTopic REQUIRED)
    Q_PROPERTY(int Checkbox_Size READ checkboxSize WRITE setCheckboxSize REQUIRED)
protected:
    bool m_value = false;

    int m_checkboxSize = 30;

    QCheckBox *m_checkbox;
public:
    BooleanCheckboxWidget(const QString &topic = "", const bool &defaultValue = false, const QString &title = "");
    ~BooleanCheckboxWidget();

    int checkboxSize();
    void setCheckboxSize(int size);

    void setTopic(const QString &topic) override;
    void setValue(const nt::Value &value, QString label = "", bool force = false) override;

    inline static WidgetTypes WidgetType = WidgetTypes::BooleanCheckbox;
    inline static TopicTypes TopicType = TopicTypes::Boolean;
    inline static QString SendableName = "";
    inline static QString DisplayName = "Checkbox";
};

#endif // BOOLEANCHECKBOXWIDGET_H

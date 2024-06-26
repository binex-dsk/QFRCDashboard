#ifndef CommandWidget_H
#define CommandWidget_H

#include <QPushButton>
#include "widgets/BaseWidget.h"

class CommandWidget : public BaseWidget
{
    Q_OBJECT
protected:
    QPushButton *m_button;

    Q_PROPERTY(QString Topic READ topic WRITE setTopic REQUIRED)

    nt::NetworkTableEntry m_name;
    nt::NetworkTableEntry m_running;
public:
    CommandWidget(const QString &topic = "", const QString &title = "");
    ~CommandWidget();

    void setTopic(const QString &topic) override;

    void setValue(const nt::Value &value, QString label = "", bool force = false) override;

    inline static WidgetTypes WidgetType = WidgetTypes::Command;
    inline static TopicTypes TopicType = TopicTypes::Command;
    inline static QString SendableName = "Command";
    inline static QString DisplayName = "Command";
};

#endif // CommandWidget_H

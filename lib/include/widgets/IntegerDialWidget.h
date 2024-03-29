#ifndef IntegerDialWIDGET_H
#define IntegerDialWIDGET_H

#include "widgets/IntegerDisplayWidget.h"
#include "misc/BetterDial.h"

class BaseWidget;

class IntegerDialWidget : public IntegerDisplayWidget
{
    Q_OBJECT

    Q_PROPERTY(int value MEMBER m_value)
    Q_PROPERTY(int Maximum READ max WRITE setMax REQUIRED)
    Q_PROPERTY(int Minimum READ min WRITE setMin REQUIRED)
    Q_PROPERTY(double Starting_Angle READ startingAngle WRITE setStartingAngle REQUIRED)
protected:
    BetterDial *m_dial;

    int m_min = 0;
    int m_max = 1000.;

    double m_startingAngle = 180.;

    void keyPressEvent(QKeyEvent *event) override;
public:
    IntegerDialWidget(const QString &topic = "", const int &defaultValue = 0, const QString &title = "");
    ~IntegerDialWidget();

    int min();
    void setMin(int min);

    int max();
    void setMax(int max);

    double startingAngle();
    // input degrees
    void setStartingAngle(double angle);

    void setTopic(const QString &topic) override;
    void setValue(const nt::Value &value, QString label = "", bool force = false) override;

    inline static WidgetTypes WidgetType = WidgetTypes::IntegerDial;
    inline static TopicTypes TopicType = TopicTypes::Int;
    inline static QString SendableName = "";
    inline static QString DisplayName = "Dial";
};

#endif // IntegerDialWIDGET_H

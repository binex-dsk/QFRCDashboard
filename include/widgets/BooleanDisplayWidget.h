#pragma once

#include "widgets/base/BooleanWidget.h"
#include "misc/ShapedFrame.h"

class BooleanDisplayWidget : public BooleanWidget, public BaseWidget
{
    Q_OBJECT

    Q_PROPERTY(QColor True_Color READ trueColor WRITE setTrueColor REQUIRED)
    Q_PROPERTY(QColor False_Color READ falseColor WRITE setFalseColor REQUIRED)
    Q_PROPERTY(Globals::FrameShape Shape READ shape WRITE setShape REQUIRED)
protected:
    ShapedFrame *m_colorWidget;

    QColor m_trueColor = Qt::green;
    QColor m_falseColor = Qt::red;
    Globals::FrameShape m_shape;
public:
    BooleanDisplayWidget(const QString &title, const bool &defaultValue, const QString &topic);
    ~BooleanDisplayWidget();

    QColor trueColor();
    void setTrueColor(const QColor &color);

    QColor falseColor();
    void setFalseColor(const QColor &color);

    Globals::FrameShape shape();
    void setShape(Globals::FrameShape shape);

    QJsonObject saveObject() override;
    static BaseWidget * fromJson(QJsonObject obj);

    void update() override;
};

#pragma once

#include "widgets/BaseWidget.h"

#include "misc/FieldImage.h"

class FieldWidget : public BaseWidget
{
    Q_OBJECT

    Q_PROPERTY(QVariantList value MEMBER m_value)
    Q_PROPERTY(QString Topic READ topic WRITE setTopic REQUIRED)
    Q_PROPERTY(Globals::File Image READ image WRITE setImage REQUIRED)
    Q_PROPERTY(double Robot_Width READ robotWidth WRITE setRobotWidth REQUIRED)
    Q_PROPERTY(double Robot_Length READ robotLength WRITE setRobotLength REQUIRED)
    // TODO: possibly different robot shapes? eh not worth it.
protected:
    QVariantList m_value{};

    FieldImage *m_imageLabel;
    Globals::File m_image{":/2024Field.png"};

    double m_width = 0.5;
    double m_length = 0.5;
public:
    FieldWidget(const QString &topic = "", QVariantList defaultValue = QVariantList{}, const QString &title = "");
    ~FieldWidget();

    double robotWidth();
    void setRobotWidth(double width);

    double robotLength();
    void setRobotLength(double length);

    Globals::File &image();
    void setImage(Globals::File image);

    void setTopic(const QString &topic) override;
    void setValue(const nt::Value &value, QString label = "", bool force = false) override;

    void resizeEvent(QResizeEvent *event) override;

    inline static WidgetTypes WidgetType = WidgetTypes::Field;
    inline static TopicTypes TopicType = TopicTypes::DoubleArray;
    inline static QString SendableName = "";
    inline static QString DisplayName = "Field2d";
};


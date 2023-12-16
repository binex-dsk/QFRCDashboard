#ifndef GRAPHWIDGET_H
#define GRAPHWIDGET_H

#include "widgets/BaseWidget.h"

#include <QLineSeries>
#include <QChartView>
#include <QChart>
#include <QTimer>
#include <QElapsedTimer>

#include <QValueAxis>

class GraphWidget : public BaseWidget
{
    Q_OBJECT
    Q_PROPERTY(QList<Globals::Topic> Topics READ topics WRITE setTopics REQUIRED)
    Q_PROPERTY(double Update_Frequency_Seconds READ updateFrequency WRITE setUpdateFrequency REQUIRED)
    Q_PROPERTY(double Time_Scale_Seconds READ maxTimeScale WRITE setMaxTimeScale REQUIRED)
    Q_PROPERTY(double Max_Y_Value READ maxYValue WRITE setMaxYValue REQUIRED)
    Q_PROPERTY(double Min_Y_Value READ minYValue WRITE setMinYValue REQUIRED)
private:
    QList<Globals::Topic> m_topics{};

    QHash<Globals::Topic, nt::NetworkTableEntry *> m_entryMap;
    QHash<Globals::Topic, QLineSeries *> m_seriesMap;

    QTimer *m_timer;
    QElapsedTimer m_elapsed;
    QChartView *m_chart;

    QValueAxis *m_xAxis;
    QValueAxis *m_yAxis;

    double m_maxTimeScale = 0.;
    double m_updateFrequency = 0.;

    double m_maxYValue;
    double m_minYValue;

public:
    GraphWidget(const QString &topic = "", const QString &title = "");

    QList<Globals::Topic> topics();
    void setTopics(QList<Globals::Topic> topics);

    double maxTimeScale();
    void setMaxTimeScale(double maxTimeScale);

    double updateFrequency();
    void setUpdateFrequency(double frequency);

    double maxYValue();
    void setMaxYValue(double max);

    double minYValue();
    void setMinYValue(double min);

    void setValue(const nt::Value &value) override;

public slots:
    void updateGraph();
};

#endif // GRAPHWIDGET_H

#pragma once

// #include "CentralWidget.h"

#include "widgets/BaseWidget.h"
#include "widgets/TabWidget.h"

#include <QMainWindow>
#include <QLabel>
#include <QGridLayout>
#include <QMap>
#include <QMouseEvent>
#include <QJsonDocument>
#include <QTabWidget>

#include "Globals.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT
private:
    QTabWidget *m_centralWidget;

    QToolBar *m_toolbar;
    QMenuBar *m_menubar;

    QList<TabWidget *> m_tabs;

    QString m_filename{};

    void makeNewWidget(WidgetTypes type);
public:
    MainWindow();
    virtual ~MainWindow();

    TabWidget *currentTab();

    // File I/O
    QJsonDocument saveObject();
    void loadObject(const QJsonDocument &doc);

public slots:
    // NT Settings
    void ntSettingsPopup();
    void setNtSettings(ServerData data);

    // File Actions
    void save();
    void saveAs();
    void openDialog();
    void open(QFile &file);

    // Tab Actions
    void newTab();
    void closeTab();
    void setMaxSize();
    void renameTab();

    // New Widget
    void newWidgetPopup();
    void configNewWidget(BaseWidget *widget, WidgetData data);
    void beginNewWidgetDrag(BaseWidget *widget, WidgetData data);

    // About Menu
    void aboutDialog();
};

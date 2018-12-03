#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "QAction"
#include "QMdiArea"
#include "QMdiSubWindow"

#include "./widgets/timagedisplaywidget.h"
#include "./widgets/tfunctiontoolbar.h"


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    void updateMenus();
    void createActions();
    ~MainWindow();
public:
    QMdiArea* tcv_mdiArea_p;
    QAction*  tcv_newAct_p;
    QAction*  tcv_newImageProcessAct_p;

    TFunctionToolBar* tcv_functionToolBar_p;

public slots:
    void newImageFile();
    void newImageProcessFile();
};

#endif // MAINWINDOW_H

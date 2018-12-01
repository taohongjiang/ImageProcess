#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "QAction"
#include "QMdiArea"
#include "QMdiSubWindow"

#include "./widgets/timagedisplaywidget.h"

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

public slots:
    void newImageFile();
};

#endif // MAINWINDOW_H

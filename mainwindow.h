#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "QAction"
#include "QMdiArea"
#include "QMdiSubWindow"

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
    void newFile();
};

#endif // MAINWINDOW_H

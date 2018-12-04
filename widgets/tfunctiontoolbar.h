#ifndef TFUNCTIONTOOLBAR_H
#define TFUNCTIONTOOLBAR_H

#include <QWidget>
#include <QToolBar>
#include <QGroupBox>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QLabel>
#include "../controllers/timageselectwidget.h"

class TFunctionToolBar : public QToolBar
{
    Q_OBJECT
public:
    explicit TFunctionToolBar(QWidget *parent = 0);
    explicit TFunctionToolBar(const QString &title, QWidget *parent = 0);
    void createUi();
public:
    TImageSelectWidget* tcv_imageSelectWidgetLeft_p;
    TImageSelectWidget* tcv_imageSelectWidgetRight_p;

signals:

public slots:
};

#endif // TFUNCTIONTOOLBAR_H

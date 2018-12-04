#ifndef TIMAGESELECTWIDGET_H
#define TIMAGESELECTWIDGET_H

#include <QWidget>
#include <QLabel>
#include "./controllers/timageselectwidget.h"

class TImageSelectWidget : public QLabel
{
    Q_OBJECT
public:
    explicit TImageSelectWidget(QWidget *parent = 0);
    explicit TImageSelectWidget(const QString &text, QWidget *parent = 0);
    virtual void dropEvent(QDropEvent *event);

public:
    QLabel* tcv_imageSub_p;
signals:

public slots:
};

#endif // TIMAGESELECTWIDGET_H

#ifndef TIMAGESELECTWIDGET_H
#define TIMAGESELECTWIDGET_H

#include <QWidget>
#include <QLabel>
#include <QDragMoveEvent>
#include "./controllers/timageselectwidget.h"

QT_BEGIN_NAMESPACE
class QDragEnterEvent;
class QDropEvent;
class QMouseEvent;
QT_END_NAMESPACE

class TImageSelectWidget : public QLabel
{
    Q_OBJECT
public:
    explicit TImageSelectWidget(QWidget *parent = 0);
    explicit TImageSelectWidget(const QString &text, QWidget *parent = 0);
    virtual void dropEvent(QDropEvent *event);
    virtual void dragMoveEvent(QDragMoveEvent *event);

public:
    QLabel* tcv_imageSub_p;
signals:

public slots:
};

#endif // TIMAGESELECTWIDGET_H

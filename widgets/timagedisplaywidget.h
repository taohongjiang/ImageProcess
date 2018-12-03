#ifndef TIMAGEDISPLAYWIDGET_H
#define TIMAGEDISPLAYWIDGET_H

#include <QWidget>
#include <QLabel>
#include <QImage>
#include <QScrollArea>
#include <QMouseEvent>

class TImageDisplayWidget : public QWidget
{
    Q_OBJECT
public:
    explicit TImageDisplayWidget(QWidget *parent = 0);
    bool openAImage(QString imageFileName);
public:
    QLabel* tcv_label_p;
    QImage* tcv_image_p;
    QScrollArea* tcv_scrollAera_p;

protected:
    virtual void resizeEvent(QResizeEvent *event);
    virtual void mousePressEvent(QMouseEvent *event);
signals:

public slots:
};

#endif // TIMAGEDISPLAYWIDGET_H

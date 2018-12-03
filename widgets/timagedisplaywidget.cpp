#include "timagedisplaywidget.h"
#include <QHBoxLayout>
#include <QPixmap>
#include <QDrag>
#include <QMimeData>
#include <QPainter>


TImageDisplayWidget::TImageDisplayWidget(QWidget *parent) : QWidget(parent)
{
    tcv_image_p = NULL;
    QHBoxLayout* tv_hBox_p = new QHBoxLayout();
    tcv_scrollAera_p = new QScrollArea();
    tcv_label_p = new QLabel(tcv_scrollAera_p);
    tcv_scrollAera_p->setWidget(tcv_label_p);
    tcv_scrollAera_p->setWidgetResizable(true);
    tcv_scrollAera_p->setAlignment(Qt::AlignVCenter | Qt::AlignHCenter);
    tcv_label_p->setAlignment(Qt::AlignVCenter | Qt::AlignHCenter);
    //tcv_label_p->setScaledContents(true);
    tv_hBox_p->addWidget(tcv_scrollAera_p);
    this->setLayout(tv_hBox_p);
}

bool TImageDisplayWidget::openAImage(QString imageFileName) {
    tcv_image_p = new QImage(imageFileName);
    if(tcv_image_p != NULL) {
        //tcv_label_p->setPixmap(QPixmap::fromImage(*tcv_image_p).scaled(tcv_label_p->size(), Qt::KeepAspectRatio));
        tcv_label_p->setPixmap(QPixmap::fromImage(*tcv_image_p));
        tcv_scrollAera_p->setAlignment(Qt::AlignVCenter | Qt::AlignHCenter);
        return true;
    }
    else {
        return false;
    }
}

void TImageDisplayWidget::resizeEvent(QResizeEvent *event) {
    QWidget::resizeEvent(event);
    //tcv_label_p->setPixmap(QPixmap::fromImage(*tcv_image_p).scaled(tcv_label_p->size(), Qt::KeepAspectRatioByExpanding));
}

void TImageDisplayWidget::mousePressEvent(QMouseEvent *event) {
    Qt::MouseButtons btn = event->buttons();
    if(btn == Qt::LeftButton){

        QDrag* drag = new QDrag(this);

        QMimeData* data = new QMimeData();
        drag->setMimeData(data);

        QPixmap pixmap(":/icon/image.png");
        QPainter painter(&pixmap);

        drag->setPixmap(pixmap);
        drag->setHotSpot(QPoint(15,15));

        drag->exec();
        #ifdef Q_WS_WIN
             delete drag;
         #endif
  }

}


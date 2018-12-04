#include "timageselectwidget.h"
#include <QHBoxLayout>
#include <QDropEvent>
#include <QDebug>

TImageSelectWidget::TImageSelectWidget(QWidget *parent) : QLabel(parent)
{
    /*
    QHBoxLayout* tv_hLayout_p = new QHBoxLayout();
    tcv_imageSub_p = new QLabel(tr("Empty"));
    tcv_imageSub_p->setFrameShape(QFrame::Box);
    tcv_imageSub_p->setFixedSize(QSize(60, 60));
    tcv_imageSub_p->setAlignment(Qt::AlignHCenter | Qt::AlignVCenter);

    tv_hLayout_p->addWidget(tcv_imageSub_p);
    this->setLayout(tv_hLayout_p);*/

    this->setAcceptDrops(true);
}

TImageSelectWidget::TImageSelectWidget(const QString &text, QWidget *parent) : QLabel(text, parent){
    this->setAcceptDrops(true);
}

void TImageSelectWidget::dropEvent(QDropEvent *event) {
    qDebug() << event->mimeData();
}

void TImageSelectWidget::dragMoveEvent(QDragMoveEvent *event) {
    event->setDropAction(Qt::MoveAction);
    event->accept();
}

#include "tfunctiontoolbar.h"

TFunctionToolBar::TFunctionToolBar(QWidget *parent) : QToolBar(parent)
{

}

TFunctionToolBar::TFunctionToolBar(const QString &title, QWidget *parent) : QToolBar(title, parent) {
    createUi();
}

void TFunctionToolBar::createUi() {
    QGroupBox* tv_group1_p = new QGroupBox(tr("ImageSelect"));
    QVBoxLayout* tv_tempV1_p = new QVBoxLayout();
    QLabel* tv_ImageDiscreption_p = new QLabel(tr("Image1"));
    tv_ImageDiscreption_p->setAlignment(Qt::AlignHCenter);
    tv_tempV1_p->addWidget(tv_ImageDiscreption_p);
    QLabel* tv_imageSub_p = new QLabel(tr("Empty"));
    tv_imageSub_p->setFrameShape(QFrame::Box);
    tv_imageSub_p->setFixedSize(QSize(60, 60));
    tv_imageSub_p->setAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
    tv_tempV1_p->addWidget(tv_imageSub_p);
    QVBoxLayout* tv_tempV2_p = new QVBoxLayout();
    tv_ImageDiscreption_p = new QLabel(tr("Image2"));
    tv_ImageDiscreption_p->setAlignment(Qt::AlignHCenter);
    tv_tempV2_p->addWidget(tv_ImageDiscreption_p);
    tv_imageSub_p = new QLabel(tr("Empty"));
    tv_imageSub_p->setFrameShape(QFrame::Box);
    tv_imageSub_p->setFixedSize(QSize(60, 60));
    tv_imageSub_p->setAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
    tv_tempV2_p->addWidget(tv_imageSub_p);

    QHBoxLayout* tv_tempH1_p = new QHBoxLayout;
    tv_tempH1_p->addLayout(tv_tempV1_p);
    tv_tempH1_p->addLayout(tv_tempV2_p);
    tv_group1_p->setLayout(tv_tempH1_p);
    this->addWidget(tv_group1_p);

}

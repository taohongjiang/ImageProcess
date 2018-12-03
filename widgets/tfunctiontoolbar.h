#ifndef TFUNCTIONTOOLBAR_H
#define TFUNCTIONTOOLBAR_H

#include <QWidget>
#include <QToolBar>
#include <QGroupBox>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QLabel>


class TFunctionToolBar : public QToolBar
{
    Q_OBJECT
public:
    explicit TFunctionToolBar(QWidget *parent = 0);
    explicit TFunctionToolBar(const QString &title, QWidget *parent = 0);
    void createUi();

signals:

public slots:
};

#endif // TFUNCTIONTOOLBAR_H

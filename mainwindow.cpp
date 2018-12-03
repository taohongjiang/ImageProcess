#include "mainwindow.h"
#include "QMenuBar"
#include "QToolBar"
#include <QTextEdit>
#include <QFileDialog>
#include <QGroupBox>
#include <QHBoxLayout>
#include <QVBoxLayout>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    tcv_mdiArea_p = new QMdiArea();
    this->setCentralWidget(tcv_mdiArea_p);
    this->createActions();

    tcv_functionToolBar_p = NULL;
}

MainWindow::~MainWindow()
{
    ;
}

void MainWindow::createActions()
{
    QMenu *fileMenu = menuBar()->addMenu(tr("&File"));
    QToolBar *fileToolBar = addToolBar(tr("File"));
    QToolBar *tv_leftToolBar_p = addToolBar(tr("Operate"));
    this->addToolBar(Qt::LeftToolBarArea, tv_leftToolBar_p);
    tcv_functionToolBar_p = new TFunctionToolBar(tr("Function"));
    addToolBar(tcv_functionToolBar_p);
    this->addToolBar(Qt::RightToolBarArea, tcv_functionToolBar_p);


    QIcon newIcon = QIcon::fromTheme("document-new", QIcon(":/icon/open.png"));
    tcv_newAct_p = new QAction(newIcon, tr("&Open a new image file"), this);
    tcv_newAct_p->setShortcuts(QKeySequence::Open);
    tcv_newAct_p->setStatusTip(tr("Open a new image file"));
    connect(tcv_newAct_p, &QAction::triggered, this, &MainWindow::newImageFile);
    fileMenu->addAction(tcv_newAct_p);
    fileToolBar->addAction(tcv_newAct_p);

    newIcon = QIcon::fromTheme("document-new", QIcon(":/icon/imageProcess.png"));
    tcv_newImageProcessAct_p = new QAction(newIcon, tr("Create a new image process file"), this);
    tcv_newImageProcessAct_p->setStatusTip(tr("Create a new image process file"));
    connect(tcv_newImageProcessAct_p, &QAction::triggered, this, &MainWindow::newImageFile);
    fileMenu->addAction(tcv_newImageProcessAct_p);
    fileToolBar->addAction(tcv_newImageProcessAct_p);
}

void MainWindow::updateMenus()
{
    /*
    bool hasMdiChild = (activeMdiChild() != 0);
    saveAct->setEnabled(hasMdiChild);
    saveAsAct->setEnabled(hasMdiChild);
#ifndef QT_NO_CLIPBOARD
    pasteAct->setEnabled(hasMdiChild);
#endif
    closeAct->setEnabled(hasMdiChild);
    closeAllAct->setEnabled(hasMdiChild);
    tileAct->setEnabled(hasMdiChild);
    cascadeAct->setEnabled(hasMdiChild);
    nextAct->setEnabled(hasMdiChild);
    previousAct->setEnabled(hasMdiChild);
    windowMenuSeparatorAct->setVisible(hasMdiChild);

#ifndef QT_NO_CLIPBOARD
    bool hasSelection = (activeMdiChild() &&
                         activeMdiChild()->textCursor().hasSelection());
    cutAct->setEnabled(hasSelection);
    copyAct->setEnabled(hasSelection);
#endif
*/
}

void MainWindow::newImageFile() {
    QString tv_fileName = QFileDialog::getOpenFileName(this, tr("Open Image"), "", tr("Image Files (*.png *.jpg *.bmp)"));

    if(tv_fileName != NULL) {
        TImageDisplayWidget *tv_child = new TImageDisplayWidget();
        tv_child->openAImage(tv_fileName);
        tcv_mdiArea_p->addSubWindow(tv_child);

        tv_child->show();

    #ifndef QT_NO_CLIPBOARD
        //connect(tv_child, &QTextEdit::copyAvailable, cutAct, &QAction::setEnabled);
        //connect(tv_child, &QTextEdit::copyAvailable, copyAct, &QAction::setEnabled);
    #endif
    }
}

void MainWindow::newImageProcessFile() {
}


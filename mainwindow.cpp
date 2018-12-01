#include "mainwindow.h"
#include "QMenuBar"
#include "QToolBar"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    tcv_mdiArea_p = new QMdiArea();
    this->setCentralWidget(tcv_mdiArea_p);
    this->createActions();
    ;
}

MainWindow::~MainWindow()
{
    ;
}

void MainWindow::createActions()
{
    QMenu *fileMenu = menuBar()->addMenu(tr("&File"));
    QToolBar *fileToolBar = addToolBar(tr("File"));

    const QIcon newIcon = QIcon::fromTheme("document-new", QIcon(":/icon/open.png"));
    tcv_newAct_p = new QAction(newIcon, tr("&Open"), this);
    tcv_newAct_p->setShortcuts(QKeySequence::New);
    tcv_newAct_p->setStatusTip(tr("Create a new file"));
    connect(tcv_newAct_p, &QAction::triggered, this, &MainWindow::newFile);
    fileMenu->addAction(tcv_newAct_p);
    fileToolBar->addAction(tcv_newAct_p);

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

void MainWindow::newFile() {
    ;
}

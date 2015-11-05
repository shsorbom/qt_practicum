#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    mainWidget = new QWidget(parent);

    myPanel = new  QDialogButtonBox(QDialogButtonBox::Ok | QDialogButtonBox::Cancel);
    mainLay = new QHBoxLayout (parent);
    mainLay->addWidget(myPanel);
    mainWidget ->setLayout(mainLay);
    this->setCentralWidget(mainWidget);
    connect(myPanel, SIGNAL(accepted()), this, SLOT (on_accepted()));
    connect(myPanel, SIGNAL(rejected()), this, SLOT (close()));
    mainWidget->show();
}

void MainWindow::on_accepted()
{
    QMessageBox blurb;
    blurb.setText("Hello World");
    blurb.exec();
}
/*void MainWindow::on_rejected()
{

}
*/
MainWindow::~MainWindow()
{
    delete myPanel;

}

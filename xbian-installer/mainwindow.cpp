#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // connect to version mirror (or init version checker module)
    // ask for versions
    emit requestVersionList();


    // connect to storage media module
    // ask for versions
    emit requestStorageList();
}

MainWindow::~MainWindow()
{
    delete ui;
}

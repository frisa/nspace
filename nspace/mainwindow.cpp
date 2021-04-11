#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "datamodel.h"
#include "logger.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    _dm = new DataModel();
    Logger2::getInstance()->log("Start %d , [%c]", 123, 'a');
}

MainWindow::~MainWindow()
{
    delete ui;
}


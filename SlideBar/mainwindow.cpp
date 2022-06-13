#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->horizontalSlider->setValue(0);
    ui->progressBar->setValue(0);
    ui->menubar->setWindowTitle("Slide Bar");
}

MainWindow::~MainWindow()
{
    delete ui;
}




#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("Label");
    ui->label->setText("<h2>Hello <font color=red<i>World</i></font></h2> ");
    ui->label->show();
}

MainWindow::~MainWindow()
{
    delete ui;
}


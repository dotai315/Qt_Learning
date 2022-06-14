#include "dialog.h"
#include "./ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
    setWindowTitle("ListWidget");
}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::on_pushButton_2_clicked()
{
    QString line = ui->lineEdit->text();
    ui->listWidget->addItem(line);
}


void Dialog::on_listWidget_itemDoubleClicked(QListWidgetItem *item)
{
    QMessageBox::information(this, item->text(), "Hello!");
}


void Dialog::on_pushButton_clicked()
{
    close();
}


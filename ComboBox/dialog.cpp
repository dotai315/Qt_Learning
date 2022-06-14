#include "dialog.h"
#include "./ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::on_pushButton_2_clicked()
{
    QString line = ui->lineEdit->text();
    if (line.isEmpty())
    {
        QMessageBox::information(this, "Warning", "You must enter a string for line edit");
    }

    ui->comboBox->addItem(line);
}


void Dialog::on_pushButton_clicked()
{
    QMessageBox::information(this, "Congratulation", ui->comboBox->currentText());
}


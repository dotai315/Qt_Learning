#include "dialog.h"
#include "./ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
    ui->treeWidget->setColumnCount(2);
    addRoot("1 Hello", "World");
    addRoot("2 Hello", "World");
    addRoot("3 Hello", "World");
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::addRoot(QString name, QString Description)
{
    QTreeWidgetItem *item = new QTreeWidgetItem(ui->treeWidget);
    item->setText(0, name);
    item->setText(1, Description);
    //ui->treeWidget->addTopLevelItem(item);
    addChild(item, "one", "hello");
    addChild(item, "two", "world");
}
void Dialog::addChild(QTreeWidgetItem *parent, QString name, QString Description)
{
    QTreeWidgetItem *item = new QTreeWidgetItem();
    item->setText(0, name);
    item->setText(1, Description);
    parent->addChild(item);
}

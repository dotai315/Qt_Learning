#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QTreeWidgetItem>

QT_BEGIN_NAMESPACE
namespace Ui { class Dialog; }
QT_END_NAMESPACE

class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = nullptr);
    ~Dialog();
    void addRoot(QString name, QString Description);
    void addChild(QTreeWidgetItem *parent, QString name, QString Description);
private:
    Ui::Dialog *ui;
};
#endif // DIALOG_H

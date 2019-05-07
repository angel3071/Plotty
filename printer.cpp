#include "printer.h"
#include "ui_printer.h"

Printer::Printer(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Printer)
{
    ui->setupUi(this);
    QListWidgetItem *item = new QListWidgetItem();
    item->setText(tr("192.168.1.10\nSoftware Version 1.0\tConnected"));
    item->setIcon(QIcon(":/icons/Raspberry_Pi.png"));
    ui->plotterList->insertItem(0, item);
}

Printer::~Printer()
{
    delete ui;
}

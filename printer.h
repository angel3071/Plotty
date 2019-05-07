#ifndef PRINTER_H
#define PRINTER_H

#include <QMainWindow>

namespace Ui {
class Printer;
}

class Printer : public QMainWindow
{
    Q_OBJECT

public:
    explicit Printer(QWidget *parent = 0);
    ~Printer();

private:
    Ui::Printer *ui;
};

#endif // PRINTER_H

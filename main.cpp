#include "printer.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Printer w;
    w.show();

    return a.exec();
}

#include "cliente.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    cliente w;
    w.show();
    return a.exec();
}

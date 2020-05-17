#include "opciones.h"
#include "inicio.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    opciones b;
    b.show();
    return a.exec();
}

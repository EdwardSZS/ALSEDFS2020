#include "opciones_deusr.h"
#include "datosentrada_sesion_usr.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    opciones_deusr b;
    datosentrada_sesion_usr c;
    c.show();
    c.exec()
    return a.exec();
}

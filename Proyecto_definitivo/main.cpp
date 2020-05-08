#include "ventana_de_juego.h"
#include "datosentrada_sesion_usr.h"
#include "inicio_o_crear_usr.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ventana_de_juego w;
    //inicio_o_crear_usr d;

    w.show();
    return a.exec();
}

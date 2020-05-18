#include "opciones.h"
#include "inicio.h"
#include <QApplication>

/*!
 * \brief main
 * La aplicacion se debe realizar a travez de una ventana de QMainWindow, pero esta funcion de main permite emitir el inicio
 * de toda la aplicacion, si bien puede controlar cualquier cosa que se especifique dentro de ella, lo cierto es que por simplesa
 * es mejor dejar que el programa fluya paso por paso sin necesidad de activarlo todo en un mismo lugar.
 *
 * \return A la misma QAplication, que en pocas palabras nos explica que la aplicacion jamas se cierra hasta que todos sus procesos
 * internos se hallan acabado; para nuestro caso el cerrar la ventana de opciones (quien es la principal) cerrara el main y por tanto
 * toda la aplicacion.
 */

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    opciones b;
    b.show();
    return a.exec();
}

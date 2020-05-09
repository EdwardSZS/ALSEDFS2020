#include "opciones_deusr.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    opciones_deusr w;
    w.show();
    return a.exec();
}

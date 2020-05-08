#include "ventana_de_juego.h"
#include "ui_ventana_de_juego.h"
#include "datosentrada_sesion_usr.h"

#include <iostream>

ventana_de_juego::ventana_de_juego(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ventana_de_juego)
{
    ui->setupUi(this);
   conectar_ventana();
}

ventana_de_juego::~ventana_de_juego()
{
    delete ui;
}
//Como creo una funcion que permita conectar la ventana de "inicio_o_crear_usr" con esta, si la qmainwindow
//no tiene acceso directo a esa carpeta?


void ventana_de_juego::recibirdatos(bool clka)
{ bool c=false;
   if( clka==true)
    c=clka;
   emit enlace(c);
}

void ventana_de_juego::conectar_ventana()
{
     datosentrada_sesion_usr a(this);
    a.setModal( true );

    //connect(&a,&datosentrada_sesion_usr::pasardatos, this, &ventana_de_juego::recibirdatos);
    //connect(&b,&datosentrada_sesion_usr::pasardatos, this, &ventana_de_juego::recibirdatos);
    a.show();
    a.exec();
    std::cout << "ventana" << std::endl;
    show();
}

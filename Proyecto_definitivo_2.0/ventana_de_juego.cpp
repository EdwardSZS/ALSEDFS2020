#include "ventana_de_juego.h"
#include "ui_ventana_de_juego.h"
#include "datosentrada_sesion_usr.h"

#include <iostream>

ventana_de_juego::ventana_de_juego(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ventana_de_juego)
{
    ui->setupUi(this);
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


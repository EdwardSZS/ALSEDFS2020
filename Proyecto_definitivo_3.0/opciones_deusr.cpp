#include "opciones_deusr.h"
#include "ui_opciones_deusr.h"
#include "filtro1_ni.h"
#include "crear_pac.h"
#include "datosentrada_sesion_usr.h"
#include <iostream>
#include <sstream>

opciones_deusr::opciones_deusr(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::opciones_deusr)
{
    ui->setupUi(this);
    conectar_ventana();
}

opciones_deusr::~opciones_deusr()
{
    delete ui;
}

void opciones_deusr::on_Reg_paciente_clicked()
{
    crear_pac d(this);
    d.setModal(true);
    this->close();
    d.show();
    d.exec();
}

void opciones_deusr::conectar_ventana()
{

         datosentrada_sesion_usr a(this);
        a.setModal( true );

        //connect(&a,&datosentrada_sesion_usr::pasardatos, this, &ventana_de_juego::recibirdatos);
        //connect(&b,&datosentrada_sesion_usr::pasardatos, this, &ventana_de_juego::recibirdatos);
        a.show();
        a.exec();
        std::cout << "ventana" << std::endl;
        close();


}

void opciones_deusr::on_Real_prueba_clicked()
{
    filtro1_NI b(this);
    b.setModal( true );
    this->close();
    b.show();
    b.exec();
}


void opciones_deusr::on_Edit_usr_clicked()
{
    filtro1_NI b(this);
    b.setModal( true );
    this->close();
    b.show();
    b.exec();
}


#include "datosentrada_sesion_usr.h"
#include "ui_datosentrada_sesion_usr.h"
#include "ventana_de_juego.h"
#include "crear_usr.h"
#include "qmessagebox.h"
#include "opciones_deusr.h"
datosentrada_sesion_usr::datosentrada_sesion_usr(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::datosentrada_sesion_usr)
{
    ui->setupUi(this);
}

datosentrada_sesion_usr::~datosentrada_sesion_usr()
{
    //this->parent()->deleteLater();
    delete ui;
}

void datosentrada_sesion_usr::on_ir_clicked()
{
    bool x=false;
    emit pasardatos(x);
   opciones_deusr c(this);
   c.setModal( true );
   c.show();
   c.exec();
   this -> close();

}

void datosentrada_sesion_usr::conect_ventana()
{

}

void datosentrada_sesion_usr::on_Registrar2_clicked()
{   Crear_usr b(this);
    b.setModal( true );
    b.show();
    b.exec();
    this -> close();
}

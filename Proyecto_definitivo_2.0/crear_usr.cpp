#include "crear_usr.h"
#include "ui_crear_usr.h"
#include "datosentrada_sesion_usr.h"
#include "qmessagebox.h"
#include "base_de_datos.h"
#include "crear_usr.h"
#include <sstream>
#include <iostream>


using namespace std;

Crear_usr::Crear_usr(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Crear_usr)
{
    ui->setupUi(this);


}

Crear_usr::~Crear_usr()
{
    delete ui;

}

void Crear_usr::on_Ok_clicked()
{ string  prn,pru,prc,prap,prfn;
     Base_de_datos db;
    db.abrirDB("formulario_usr");
    Crear_usr d(this);
    QMessageBox msg;
   prn = ui->lineEdit_nombre->text().toStdString();
   pru = ui->lineEdit_apellido->text().toStdString();
   prc = ui->lineEdit_fn->text().toStdString();
   prap = ui->lineEdit_fn->text().toStdString();
   int ni = ui->lineEdit_ni->text().toFloat();
   prfn = ui->lineEdit_apellido->text().toStdString();

    if(prn.empty() == true || pru.empty() == true || ni == 0 || prc.empty() == true || prap.empty() == true
       || prfn.empty() == true)
    {
        msg.setText("Datos incompletos o mal llenados, por favor intente nuevamente.");
        msg.exec();
    }
         else
        {    datosentrada_sesion_usr b(this);
             b.setModal( true );
             db.cargar_usrs(d);
             this->close();
             b.show();
             b.exec();
         }
    db.cerrarDB();

}

string Crear_usr::getFecha_nac() const
{
    return ui->lineEdit_fn->text().toStdString();
}

string Crear_usr::getApellido() const
{
    return  ui->lineEdit_nombre->text().toStdString();
}

string Crear_usr::getPass() const
{
    return ui->lineEdit_ctr->text().toStdString();
}

float Crear_usr::getNi() const
{
    return ui->lineEdit_ni->text().toFloat();
}

string Crear_usr::getUsuario() const
{
    return ui->lineEdit_usr->text().toStdString();
}

string Crear_usr::getNombre() const
{
    return ui->lineEdit_nombre->text().toStdString();
}

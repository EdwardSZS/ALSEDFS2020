#include "registro_usr.h"
#include "ui_registro_usr.h"
#include "opciones.h"
#include "conectardb.h"
#include <string>
#include <sstream>
#include <iostream>


#include "QMessageBox"

using namespace std;

registro_usr::registro_usr(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::registro_usr)
{
    ui->setupUi(this);
}


registro_usr::~registro_usr()
{
    delete ui;
    cout<<"llamando dest_FORMULARIO_USR"<<endl;
}

void registro_usr::on_Ok_clicked()
{
   QMessageBox msg;

   name = ui->lineEdit_nombre->text().toStdString();
   ape = ui->lineEdit_apellido->text().toStdString();
   pass = ui->lineEdit_ctr->text().toStdString();
   f_nac = ui->lineEdit_fn->text().toStdString();
   n_id = ui->lineEdit_ni->text().toInt();
   usr = ui->lineEdit_usr->text().toStdString();

    if(name.empty() == true || ape.empty() == true || n_id == 0 || pass.empty() == true || f_nac.empty() == true
       || usr.empty() == true)
    {
        msg.setText("Datos incompletos o mal llenados, por favor intente nuevamente.");
        msg.exec();
    }
         else
        {   //b.cargar_usrs(this);


            //CONEXION CON BD PARA GUARDAR INFO USR
            close();
        }
}

int registro_usr::getN_id() const
{
    return n_id;
}

void registro_usr::setN_id(int value)
{
    n_id = value;
}

string registro_usr::getF_nac() const
{
    return f_nac;
}

void registro_usr::setF_nac(const string &value)
{
    f_nac = value;
}

string registro_usr::getApe() const
{
    return ape;
}

void registro_usr::setApe(const string &value)
{
    ape = value;
}

string registro_usr::getPass() const
{
    return pass;
}

void registro_usr::setPass(const string &value)
{
    pass = value;
}

string registro_usr::getUsr() const
{
    return usr;
}

void registro_usr::setUsr(const string &value)
{
    usr = value;
}

string registro_usr::getName() const
{
    return name;
}

void registro_usr::setName(const string &value)
{
    name = value;
}









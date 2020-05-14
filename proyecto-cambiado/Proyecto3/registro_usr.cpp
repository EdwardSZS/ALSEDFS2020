#include "registro_usr.h"
#include "ui_registro_usr.h"
#include "opciones.h"

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
        {
            //CONEXION CON BD PARA GUARDAR INFO USR
            close();
        }
}






    
    

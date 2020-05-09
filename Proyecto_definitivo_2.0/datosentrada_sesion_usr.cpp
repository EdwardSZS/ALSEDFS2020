#include "datosentrada_sesion_usr.h"
#include "ui_datosentrada_sesion_usr.h"
#include "ventana_de_juego.h"
#include "crear_usr.h"
#include "qmessagebox.h"
#include "opciones_deusr.h"
#include "sstream"
#include "iostream"

using namespace std;


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
   string usr,ctr;
   QMessageBox msg;

   emit pasardatos(x);
   datosentrada_sesion_usr c(this);

   usr = ui->lineEdit_usr->text().toStdString();
   ctr = ui->lineEdit_ctr->text().toStdString();

   if(usr.empty() == true || ctr.empty() == true)
   {
       msg.setText("Datos incompletos o mal llenados, por favor intente nuevamente.");
       msg.exec();
   }
   else
        {
            this->close();
    }

}

void datosentrada_sesion_usr::conect_ventana()
{

}

void datosentrada_sesion_usr::on_Registrar2_clicked()
{   Crear_usr b(this);
    b.setModal( true );
    this->close();
    b.show();
    b.exec();
    this -> close();
}

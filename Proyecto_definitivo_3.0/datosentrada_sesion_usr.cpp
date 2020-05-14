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
    delete ui;
}

void datosentrada_sesion_usr::on_ir_clicked()
{
            //bool x=false; //por el momento no lo usamos
   string usr,ctr;
   QMessageBox msg;

            //emit pasardatos(x); //por el momento no lo usamos
            //datosentrada_sesion_usr c(this); //HACER ESTO ES PELIGROS, TENGA LA IDEA FIJA DE QUE ESTO PROCESA UNA NUEVA VENTANA
                                            //MAS NO MANIPULA LA ACTUAL

   usr = ui->lineEdit_usr->text().toStdString();
   ctr = ui->lineEdit_ctr->text().toStdString();

   if(usr.empty() == true || ctr.empty() == true)
   {
       msg.setText("Datos incompletos o mal llenados, por favor intente nuevamente.");
       msg.exec();
   }
   else
   {
       // CONEXION CON LA BD E INCLUIR EL COMANDO EXIST DE PARA VERIFICACION DE LA EXISTECNIA DEL USUSARIo
       //this->close();
   }

}

void datosentrada_sesion_usr::conect_ventana()
{
}

void datosentrada_sesion_usr::on_Registrar2_clicked()
{
    Crear_usr b(this);
    b.setModal( true );
    this->close();
    b.show();
    b.exec();
    //close(); //es posibile que se necesite
    this -> close(); // PORQUE CARAJOS FUE PUESTO AQUI? al parecer no hace nada aqui
}

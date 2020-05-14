#include "inicio.h"
#include "ui_inicio.h"
#include "opciones.h"
#include "registro_usr.h"

#include "QMessageBox"

#include <sstream>
#include <iostream>


using namespace std;

inicio::inicio(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::inicio)
{
    ui->setupUi(this);
}

inicio::~inicio()
{
    delete ui;
    cout<<"llamando destr_INICIO"<<endl;
}

void inicio::on_Registrarse_clicked()
{
    //ingresar al formulario del USR para ello se debe ABRIR una ventana nueva y no olvidar que esta SIGUE ABIERTA
    registro_usr a (this);
    a.show();
    a.exec();
}

void inicio::on_ingreso_clicked()
{
    QMessageBox msg;
    string usr = ui->lineEdit_usr->text().toStdString();
    string ctr = ui->lineEdit_ctr->text().toStdString();

    if(usr.empty() == true || ctr.empty() == true)
    {
        msg.setText("Datos incompletos o mal llenados, por favor intente nuevamente.");
        msg.exec();

    }
    else
    {
        //AQUI VA LA VERIFICACION "EXIST" DE LA BASE
        close();
    }

}


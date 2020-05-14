#include "crear_pac.h"
#include "ui_crear_pac.h"
#include "qmessagebox.h"
#include <sstream>
#include <iostream>
#include "opciones_deusr.h"

using namespace  std;

crear_pac::crear_pac(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::crear_pac)
{
    ui->setupUi(this);
}

crear_pac::~crear_pac()
{
    delete ui;
}

void crear_pac::on_Registra_paci_clicked()
{
    string  prn,pra,prfn,pret;

    crear_pac a(this);
    QMessageBox msg;

    prn = ui->lineEdit_nombre->text().toStdString();
    pra = ui->lineEdit_apellido->text().toStdString();
    int ed = ui->lineEdit_edad->text().toFloat();
    prfn = ui->lineEdit_fn->text().toStdString();
    int ni = ui->lineEdit_ni->text().toFloat();
    pret = ui->lineEdit_apellido->text().toStdString();

    if(prn.empty() == true || pra.empty() == true || ed == 0 || prfn.empty() == true || ni == 0 || prfn.empty() == true )
    {
        msg.setText("Datos incompletos o mal llenados, por favor intente nuevamente.");
        msg.exec();
        //crear_pac a(this);
        a.exec();
    }
     else
        {
        opciones_deusr b(this);
        b.show();
        }

}
/*
string crear_pac::nombre() const
{
    return _nombre;
}

void crear_pac::setNombre(const string &nombre)
{
    _nombre = nombre;
}
*/

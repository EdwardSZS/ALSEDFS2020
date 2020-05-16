#include "registro_paci.h"
#include "ui_registro_paci.h"


#include <sstream>
#include <iostream>

#include "QMessageBox"

using namespace std;

registro_paci::registro_paci(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::registro_paci)
{
    ui->setupUi(this);
}

registro_paci::~registro_paci()
{
    delete ui;
    cout<<"llamando al desct_REGISTRO_PACI"<<endl;
}

void registro_paci::on_Registra_paci_clicked()
{
    QMessageBox msg;

    string prn = ui->lineEdit_nombre->text().toStdString();
    string pra = ui->lineEdit_apellido->text().toStdString();
    int ed = ui->lineEdit_edad->text().toInt();
    string prfn = ui->lineEdit_fn->text().toStdString();
    int ni = ui->lineEdit_ni->text().toInt();
    string pret = ui->lineEdit_etnia->text().toStdString();
    float ing = ui->lineEdit_ingresos->text().toFloat();

    if(prn.empty() == true || pra.empty() == true || ed == 0 || prfn.empty() == true ||
       ni == 0 || prfn.empty() == true|| ing == 0||pret.empty() == true)
    {
        msg.setText("Datos incompletos o mal llenados, por favor intente nuevamente.");
        msg.exec();
    }
    else
    {   //CONEXION A LA DB PARA ENVIAL AL FORMULARIO PACI
        close();
    }

}


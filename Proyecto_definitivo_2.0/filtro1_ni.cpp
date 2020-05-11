#include "filtro1_ni.h"
#include "ui_filtro1_ni.h"
#include "opciones_deusr.h"
#include "qmessagebox.h"
#include "sstream"
#include "iostream"
#include "ven_crono.h"

using namespace std;

filtro1_NI::filtro1_NI(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::filtro1_NI)
{
    ui->setupUi(this);
}

filtro1_NI::~filtro1_NI()
{
    delete ui;
}

void filtro1_NI::on_Continuar_clicked()
{
    //Base_de_datos db;
    //db.abrirDB("formulario_usr");
    QMessageBox msg;
    int prni = ui->lineEdit_NI->text().toFloat();

    if(prni == 0)
    {
        msg.setText("Datos incompletos o mal llenados, por favor intente nuevamente.");
        msg.exec();
        filtro1_NI a (this);
        a.show();
    }
         else
        {    ven_crono b(this);
             b.setModal( true );
             this->close();
             b.show();
             b.exec();
         }
    //db.cerrarDB();

}

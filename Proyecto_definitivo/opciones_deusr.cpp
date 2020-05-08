#include "opciones_deusr.h"
#include "ui_opciones_deusr.h"
#include "crear_pac.h"

opciones_deusr::opciones_deusr(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::opciones_deusr)
{
    ui->setupUi(this);
}

opciones_deusr::~opciones_deusr()
{
    delete ui;
}

void opciones_deusr::on_Reg_paciente_clicked()
{ crear_pac d(this);
    d.setModal(true);
    d.show();
    d.exec();


}

void opciones_deusr::on_Real_prueba_clicked()
{

}

void opciones_deusr::on_Edit_usr_clicked()
{

}

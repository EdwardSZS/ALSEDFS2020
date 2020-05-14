#include "opciones.h"
#include "ui_opciones.h"

#include "registro_paci.h"
#include "inicio.h"

opciones::opciones(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::opciones)
{
    ui->setupUi(this);
    inicio a(this);
    a.setModal( true );
    a.show();
    a.exec();
    show();
}

opciones::~opciones()
{
    delete ui;
}

void opciones::on_Reg_paciente_clicked()
{
    registro_paci a (this);
    a.setModal (true);
    //close->(this);
    a.show();
    a.exec();
}

void opciones::on_Real_prueba_clicked()
{

}

void opciones::on_Edit_usr_clicked()
{

}

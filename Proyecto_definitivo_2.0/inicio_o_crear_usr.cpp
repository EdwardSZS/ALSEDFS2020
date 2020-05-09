#include "inicio_o_crear_usr.h"
#include "ui_inicio_o_crear_usr.h"
#include "datosentrada_sesion_usr.h"
#include <qmessagebox.h>

inicio_o_crear_usr::inicio_o_crear_usr(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::inicio_o_crear_usr)
{
    ui->setupUi(this);
}

inicio_o_crear_usr::~inicio_o_crear_usr()
{
    //this->parent()->deleteLater();
    delete ui;
}

void inicio_o_crear_usr::on_inicio_s_clicked()
{
    datosentrada_sesion_usr b(this);
    b.setModal( true );
    b.show();
    b.exec();
    this->close();
}

void inicio_o_crear_usr::con_recibir(bool cx)
{

}

void inicio_o_crear_usr::on_crear_s_clicked()
{

}

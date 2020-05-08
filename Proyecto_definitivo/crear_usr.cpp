#include "crear_usr.h"
#include "ui_crear_usr.h"
#include "datosentrada_sesion_usr.h"

Crear_usr::Crear_usr(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Crear_usr)
{
    ui->setupUi(this);

}

Crear_usr::~Crear_usr()
{
    delete ui;
}

void Crear_usr::on_Ok_clicked()
{
    datosentrada_sesion_usr b(this);
        b.setModal( true );
        b.show();
        b.exec();


}

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
{ string  pr;
    QMessageBox msg;
   pr = ui->lineEdit_2 ->text().toStdString();
    if(pr.empty() == true  ){
        msg.setText("Digite su nombre");
         msg.exec();}
         else {         opciones_deusr b(this);
             b.setModal( true );
             b.show();
             b.exec();
             this->close();
         }





}

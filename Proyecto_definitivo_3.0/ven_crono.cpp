#include "ven_crono.h"
#include "ui_ven_crono.h"
#include "ven_game.h"
#include "qmessagebox.h"
#include "sstream"
#include "iostream"
#include "qtimer.h"

using namespace std;

ven_crono::ven_crono(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ven_crono)
{
    ui->setupUi(this);
}

ven_crono::~ven_crono()
{
    delete ui;
}

void ven_crono::on_push30s_clicked()
{
    int cont1 = 30;
    emit pasatiempos (cont1);
    close();
    //ven_game d(this);
    /*d.setModal(true);
    this->close();
    d.showMaximized();
    d.exec();*/
}

void ven_crono::on_push1min_clicked()
{
    int cont2 = 60;
    emit pasatiempos (cont2);
    close();
    /*ven_game d(this);
    d.setModal(true);
    this->close();
    d.showMaximized();
    d.exec();*/
}

void ven_crono::on_push5min_clicked()
{
    int cont3 = 300 ;
    emit pasatiempos (cont3);
    //ven_game d(this);
    close();
    /*d.setModal(true);
    this->close();
    d.showMaximized();
    d.exec();*/
}

void ven_crono::on_pushok_clicked()
{
    QMessageBox msg;
    int prclk = ui->lineEdit_comodin->text().toFloat();

    if(prclk == 0)
    {
        msg.setText("Dato incompleto o mal llenado, por favor digite en formato de hora.");
        msg.exec();
        ven_crono a (this);
        a.show();
    }
        else
            {
                emit pasatiempos ( prclk );
                ven_game d(this);
                d.setModal(true);
                this->close();
                d.showMaximized();
                d.exec();
            }
}


#include "juego.h"
#include "ui_juego.h"

#include <iostream>
#include <sstream>
#include <stdlib.h>

#include "resultados.h"
#include <QTimer>
#include "QMessageBox"

using namespace std;

juego::juego(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::juego)
{    
    contador=0;
    activo=1;

    ui->setupUi(this);
    ui->cronos->display( contador );

    cronometro = new QTimer(this);
    connect(cronometro, &QTimer::timeout, this, &juego::ontime);
    cronometro->setInterval(1000);
}

juego::~juego()
{
    delete ui;
    cout<<"llamando al desct_JUEGO"<<endl;
}

void juego::ontime()
{
    ui->cronos->display( --contador );
    activo = rand() %9;

    ui->b1->setDisabled( true );
    ui->b2->setDisabled( true );
    ui->b3->setDisabled( true );
    ui->b4->setDisabled( true );
    ui->b5->setDisabled( true );
    ui->b6->setDisabled( true );
    ui->b7->setDisabled( true );
    ui->b8->setDisabled( true );

    mecanismoA();


    if( contador == 0 )
    {
        resultados a (this);
        a.setModal(true);
        close();
        a.show();
        a.exec();
    }
    else
        cronometro->start();
}

void juego::on_push30s_clicked()
{
    contador = 30;
    cronometro->start();
}

void juego::on_push1min_clicked()
{
    contador = 60;
    cronometro->start();
}

void juego::on_push5min_clicked()
{
    contador = 300;
    cronometro->start();
}

void juego::on_pushok_clicked()
{
    QMessageBox msg;
    int tiempo = ui->lineEdit_comodin->text().toInt();

    contador = tiempo;
    cronometro->start();

    if(tiempo == 0)
    {
        msg.setText("Dato mal llenado, recuerde que debe digitar su tiempo en segundos, gracias.");
        msg.exec();
        contador=0;
    }
}

void juego::mecanismoA()
{
    switch ( activo ) {
    case 1:
        activo = 1;
        ui->b1->setEnabled( true );
        break;
    case 2:
        activo = 2;
        ui->b2->setEnabled( true );
        break;
    case 3:
        activo = 3;
        ui->b3->setEnabled( true );
        break;
    case 4:
        activo = 4;
        ui->b4->setEnabled( true );
        break;
    case 5:
        activo = 5;
        ui->b5->setEnabled( true );
        break;
    case 6:
        activo = 6;
        ui->b6->setEnabled( true );
        break;
    case 7:
        activo = 7;
        ui->b7->setEnabled( true );
        break;
    case 8:
        activo = 8;
        ui->b8->setEnabled( true );
        break;
    default:
        break;
    }
}

void juego::on_b1_clicked()
{
    if(activo==1)
    {
        ui->b1->setDisabled(true);
        ontime();
    }

}

void juego::on_b2_clicked()
{
    if(activo==2)
    {
        ui->b2->setDisabled(true);
        ontime();
    }
}

void juego::on_b3_clicked()
{
    if(activo==3)
    {
        ui->b3->setDisabled(true);
        ontime();
    }
}

void juego::on_b4_clicked()
{
    if(activo==4)
    {
        ui->b4->setDisabled(true);
        ontime();
    }
}

void juego::on_b5_clicked()
{
    if(activo==5)
    {
        ui->b5->setDisabled(true);
        ontime();
    }
}

void juego::on_b6_clicked()
{
    if(activo==6)
    {
        ui->b6->setDisabled(true);
        ontime();
    }
}

void juego::on_b7_clicked()
{
    if(activo==7)
    {
        ui->b7->setDisabled(true);
        ontime();
    }
}

void juego::on_b8_clicked()
{
    if(activo==8)
    {
        ui->b8->setDisabled(true);
        ontime();
    }
}

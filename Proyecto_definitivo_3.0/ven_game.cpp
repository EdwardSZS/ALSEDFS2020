#include "ven_game.h"
#include "ui_ven_game.h"
#include <QTimer>
#include "iostream"
#include "scores.h"
#include "qtimer.h"
#include "QMessageBox"

using namespace std;
ven_game::ven_game(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ven_game)
{
    contador=0;

    ui->setupUi(this);
    ui->cronos->display( contador );

    cronometro = new QTimer(this);
    connect(cronometro, &QTimer::timeout, this, &ven_game::ontime);
    cronometro->setInterval(1000);
}

ven_game::~ven_game()
{
    delete ui;
}

void ven_game::ontime(){
    ui->cronos->display( --contador );

    if( contador == 0 )
    {
        scores a (this);
        cout<<"ventana"<<endl;
        a.setModal(true);
        //this->close();
        a.show();
        a.exec();
    }
    else
        cronometro->start();

    cout<<contador<<endl;
}

void ven_game::on_push30s_clicked()
{
    contador = 30;
    cronometro->start();
}

void ven_game::on_push1min_clicked()
{
    contador = 60;
    cronometro->start();

    cout<<contador<<endl;
}

void ven_game::on_push5min_clicked()
{
    contador=300;
    cronometro->start();

    cout<<contador<<endl;
}

void ven_game::on_pushok_clicked()
{
    QMessageBox msg;
    int tiempo = ui->lineEdit_comodin->text().toInt();

    contador = tiempo;
    ui->cronos->display( contador++);
    cronometro->start();

    cout<<contador<<endl;

    if(tiempo == 0)
    {
        msg.setText("Dato mal llenado, recuerde que debe digitar su tiempo en segundos, gracias.");
        msg.exec();
        contador=0;
        ven_game b (this);
        b.show();
    }
}

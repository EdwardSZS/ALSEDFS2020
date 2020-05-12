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
    ui->cronos->display( contador++);

    cronometro = new QTimer(this);
    cronometro1 = new QTimer(this);
    cronometro2 = new QTimer(this);
    cronometro3 = new QTimer(this);

    connect(cronometro, &QTimer::timeout, this, &ven_game::on_push30s_clicked);
    connect(cronometro1, &QTimer::timeout, this, &ven_game::on_push1min_clicked);
    connect(cronometro2, &QTimer::timeout, this, &ven_game::on_push5min_clicked);
    connect(cronometro3, &QTimer::timeout, this, &ven_game::on_pushok_clicked);


    cronometro->setInterval(1000);
    cronometro1->setInterval(1000);
    cronometro2->setInterval(1000);
    cronometro3->setInterval(1000);

    cronometro->stop();
    cronometro1->stop();
    cronometro2->stop();
    cronometro3->stop();
}

ven_game::~ven_game()
{
    delete ui;
}

void ven_game::on_push30s_clicked()
{
    ui->cronos->display( contador++);
    cronometro->start();

    cout<<contador<<endl;

    scores a (this);

    if(contador==30)
    {
        cout<<"ventana"<<endl;
        a.setModal(true);
        //this->close();
        a.show();
        a.exec();
    }
}

void ven_game::on_push1min_clicked()
{
    ui->cronos->display( contador++);
    cronometro1->start();

    cout<<contador<<endl;

    scores a (this);

    if(contador==60)
    {
        cout<<"ventana"<<endl;
        a.setModal(true);
        //this->close();
        a.show();
        a.exec();
    }
}

void ven_game::on_push5min_clicked()
{
    ui->cronos->display( contador++);
    cronometro2->start();

    cout<<contador<<endl;

    scores a (this);

    if(contador==300)
    {
        cout<<"ventana"<<endl;
        a.setModal(true);
        //this->close();
        a.show();
        a.exec();
    }
}

void ven_game::on_pushok_clicked()
{
    QMessageBox msg;
    int tiempo = ui->lineEdit_comodin->text().toInt();

    ui->cronos->display( contador++);
    cronometro3->start();

    cout<<contador<<endl;

    scores a (this);

    if(tiempo == 0)
    {
        msg.setText("Dato mal llenado, recuerde que debe digitar su tiempo en segundos, gracias.");
        msg.exec();
        contador=0;
        ven_game b (this);
        b.show();
    }
    else
    {
        if(contador==tiempo)
            {
                contador=0;
                cout<<"ventana"<<endl;
                a.setModal(true);
                //this->close();
                a.show();
                a.exec();
            }
    }
}


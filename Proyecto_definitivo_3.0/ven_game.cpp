#include "ven_game.h"
#include "ui_ven_game.h"
#include <QTimer>
#include "ven_crono.h"
#include "iostream"
#include "scores.h"

using namespace std;
ven_game::ven_game(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ven_game)
{
    ui->setupUi(this);

    ven_crono j (this);
    connect(&j,&ven_crono::pasatiempos,this,&ven_game::perdertiempo);
    cronometro = new QTimer(this);
    connect(cronometro, &QTimer::timeout, this, &ven_game::ontime);

    ui->cronos->display( contador-- );

    cronometro->setInterval(1000);
    cronometro->start();
}

ven_game::~ven_game()
{
    delete ui;
}

void ven_game::ontime()
{
    ui->cronos->display(contador-- );
    cronometro->start();
    cout<< contador<<endl;
    if (cronometro == 0)
    {
        scores a (this);
        a.setModal(true);
        this->close();
        a.show();
        a.exec();
    }

}

void ven_game::perdertiempo(int contador_out)
{
 contador=contador_out;
 cout<< contador_out<<endl;

}


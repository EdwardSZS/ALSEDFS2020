#include "resultados.h"
#include "ui_resultados.h"
#include "juego.h"


#include <iostream>
#include <sstream>

using namespace std;

resultados::resultados(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::resultados)
{
    ui->setupUi(this);
    //juego();
}

resultados::~resultados()
{
    delete ui;
    cout<<"llamando al desct_RESULTADOS"<<endl;

}

void resultados::on_pushButton_clicked()
{
    close();
}

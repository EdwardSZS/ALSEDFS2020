#include "filtro.h"
#include "ui_filtro.h"
#include "juego.h"

#include "QMessageBox"

#include <sstream>
#include <iostream>

using namespace std;

filtro::filtro(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::filtro)
{
    ui->setupUi(this);
}

filtro::~filtro()
{
    delete ui;
    cout<<"llamando destr_FILTRO"<<endl;
}

void filtro::on_Continuar_clicked()
{
    QMessageBox msg;
    int ni = ui->lineEdit_NI->text().toInt();
    //DEBEMOS AÑADIR EL EXIST DE LA BD, PARA SABER SI SE REGISTRÓ

    if(ni == 0) //O NO ESTA
    {
        msg.setText("Dato vacio o inexistente en nuestros archivos, por favor intente nuevamente.");
        msg.exec();
    }
    else
    {
        // SI EL EXIST ARROJÓ UN VALOR, ni==
        juego a (this);
        a.showMaximized();
        a.exec();
        close();
    }
}

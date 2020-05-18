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

/*!
 * \brief filtro::on_Continuar_clicked
 * Se usa si y solo si se oprime el boton Ok para poder continuar en el flujo del programa.
 */

void filtro::on_Continuar_clicked()
{
    QMessageBox msg; /*! <es aguella variable que gracias a la libreria QMessageBox nos permitira emitir una ventana
                        emergente indicando error en los datos*/

    int ni = ui->lineEdit_NI->text().toInt(); /*! <es la variable en la cual recae la traduccion del sector grafico
                                                de la ventana (casilla de entrada) a una variable de tipo entero*/

    if(ni == 0) //O NO ESTA
    {
        msg.setText("Dato vacio o inexistente en nuestros archivos, por favor intente nuevamente.");
        msg.exec();
    }
    else
    {
        // SI EL SELEC ARROJÓ UN VALOR, ni==
        juego a (this); /*! <nos describe que cuando un valor fue exitosamente verificado y existente, nos remitimos
                            a la apertura del panel de juegos*/
        a.showMaximized();
        a.exec();
        close();
    }
}

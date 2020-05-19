#include "inicio.h"
#include "ui_inicio.h"
#include "opciones.h"
#include "registro_usr.h"

#include "QMessageBox"

#include <sstream>
#include <iostream>


using namespace std;

inicio::inicio(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::inicio)
{
    ui->setupUi(this);
}

inicio::~inicio()
{
    delete ui;
    cout<<"llamando destr_INICIO"<<endl;
}

/*!
* \brief inicio::on_Registrarse_clicked
* Esta funcion permite ingresar al formulario del USR y sus funciones, al igual que otras que veremos mas adelante
* es un tanto especial, ya que no se terminará de ejecutar (destruirse) hasta que el hilo de ventanas subsiguinetes
* no terminen sus procesos.
*/

void inicio::on_Registrarse_clicked()
{

    registro_usr a (this);
    db.abrirDB("formulario_usr"); /*! <como se habia mencionado en los atributos de esta clase, la conexion a
                                    la base de datos se refleja en la apertura de la misma.*/
    a.show();
    a.exec();
    db.cargar_usrs(a); /*! <la cual tomara los valores de la proxima ventana emergente y los guardará en la BD*/
    db.cerrarDB();
}

/*!
 * \brief inicio::on_ingreso_clicked
 * En esta parte de codigo, se busca con los datos ya almacenados ingresar a la aplicacion pasado el proceso de verificacion,
 * los cuales utiliza \param usr , \param ctr .
 */

void inicio::on_ingreso_clicked()
{
    QMessageBox msg;
    string usr = ui->lineEdit_usr->text().toStdString();  ///son las variables traducidas de la interfaz grafica a carater string
    string ctr = ui->lineEdit_ctr->text().toStdString();  ///para el proceso de verificacion.


    if(usr.empty() == true || ctr.empty() == true)
    {
        msg.setText("Datos incompletos o mal llenados, por favor intente nuevamente.");
        msg.exec();
    }
    else
    {
        db.abrirDB("formulario_usr");
        if(db.autenticar_usr(usr,ctr) == true); /*! <Este condicional ejecuta la comparacion boleana de la existencia
                                                   de los datos de usuario y contraseña para asi poder acceder al menu principal.*/
        db.cerrarDB();
        close();
    }

}


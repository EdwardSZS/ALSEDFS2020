#include "registro_paci.h"
#include "ui_registro_paci.h"


#include <sstream>
#include <iostream>

#include "QMessageBox"

using namespace std;

registro_paci::registro_paci(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::registro_paci)
{
    ui->setupUi(this);
}

registro_paci::~registro_paci()
{
    delete ui;
    cout<<"llamando al desct_REGISTRO_PACI"<<endl;
}

/*!
 * \brief registro_paci::on_Registra_paci_clicked
 * Buscando interconectar la clase de la base de datos con los datos introducidos en la interfaz grafica que se diseñó para el
 * Paciente, esta funcion nace para interpretar aquellos valores intruducidos, y pasandolos a los atributos privados
 * de esta clase.
 */

void registro_paci::on_Registra_paci_clicked()
{
    QMessageBox msg;

    nom = ui->lineEdit_nombre->text().toStdString();
    ape = ui->lineEdit_apellido->text().toStdString();
    edad = ui->lineEdit_edad->text().toInt();
    fn = ui->lineEdit_fn->text().toStdString();
    ni = ui->lineEdit_ni->text().toInt();
    etnia = ui->lineEdit_etnia->text().toStdString();
    ing = ui->lineEdit_ingresos->text().toFloat();
    gen = ui->lineEdit_Gen->text().toStdString();
    dir = ui->lineEdit_Dir->text().toStdString();

    if(nom.empty() == true || ape.empty() == true || edad == 0 || fn.empty() == true ||
       ni == 0 || etnia.empty() == true )
    {
        msg.setText("Datos incompletos o mal llenados, por favor intente nuevamente.");
        msg.exec();
    }
    else
    {   //CONEXION A LA DB PARA ENVIAR AL FORMULARIO PACI
        close();
    }
}

/*!
 * \brief registro_paci::getDir
 * Esta pequeña funcion se puede entender como aquella que le da poder al atributo privado de poder ser admitida por la clase
 * externa de la BD, y asi poder guardarla en los porceso que realiza dicha clase BD.
 * Esto sucede analogamente para cada valor intriducido por el paciente en el formulario grafico.
 *
 * \return la variable privada que gracias a las funciones get-set nos permiten enviarlas a una clase diferente.
 */
string registro_paci::getDir() const
{
    return dir;
}

void registro_paci::setDir(const string &value)
{
    dir = value;
}

string registro_paci::getGen() const
{
    return gen;
}

void registro_paci::setGen(const string &value)
{
    gen = value;
}

string registro_paci::getEtnia() const
{
    return etnia;
}

void registro_paci::setEtnia(const string &value)
{
    etnia = value;
}

float registro_paci::getIng() const
{
    return ing;
}

void registro_paci::setIng(float value)
{
    ing = value;
}

int registro_paci::getNi() const
{
    return ni;
}

void registro_paci::setNi(int value)
{
    ni = value;
}

string registro_paci::getFn() const
{
    return fn;
}

void registro_paci::setFn(const string &value)
{
    fn = value;
}

int registro_paci::getEdad() const
{
    return edad;
}

void registro_paci::setEdad(const int &value)
{
    edad = value;
}

string registro_paci::getApe() const
{
    return ape;
}

void registro_paci::setApe(const string &value)
{
    ape = value;
}

string registro_paci::getNom() const
{
    return nom;
}

void registro_paci::setNom(const string &value)
{
    nom = value;
}


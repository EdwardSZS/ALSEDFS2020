#include "juego.h"
#include "ui_juego.h"

#include <iostream>
#include <sstream>
#include <stdlib.h>

#include "resultados.h"
#include <QTimer>
#include "QMessageBox"

using namespace std;

/*!
 * \brief juego::juego
 * \param parent
 * En este constructor se realizan unas acciones muy utiles para el proceso correcto de la ventana en si; debido a que se proyecta
 * como aquella que procesa y cuenta los tiempos de la prubea junto con los puntajes, el constructor se encarga de inicializar, contar
 * y llamar al temporizador y su clase, para porder mostrarlo al publico por medio de un display, esto es permitido gracias a QTimer quien
 * nos ayuda con funciones de conteos y todo quello relacionado con tiempos y cronometros.
 */

juego::juego(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::juego)
{    
    contador=0; /*!< Debemos inicializar el contador en cero para hacer de cuenta que al inicion del contador este se encuentra en cero.*/
    ui->setupUi(this);
    ui->cronos->display( contador ); /*!< esta funcion toma el valor actual de la variable \param contador y la muestra en el display.*/

    cronometro = new QTimer(this); /*!< Inicializacion del \param conometro quien es el que se encragara
                                    de el tiempo de duracion entre conteos.*/

    connect(cronometro, &QTimer::timeout, this, &juego::ontime); /*!< Utilizamos un connect "especial", quein nos conecta con las funciones de QTimer
                                                                  y las redirijimos a la funcion ontime.*/

    cronometro->setInterval(1000); /*!< aqui es donde definimos el intervalo de duracion en milisegundos,
                                    que para nuestro caso es el equivalente a 1s.*/
}

juego::~juego()
{
    delete ui;
    cout<<"llamando al desct_JUEGO"<<endl;
}

/*!
 * \brief juego::ontime
 * En la funcion de ontime buscamos realizar todos los procesos aquellos que requieran directa o indirectamente los procesos
 * del temporizador a usar, como por ejemplo realizar la operacion de decenso del mismo, control de los estados de los botones
 * a encender y el detector del final del mismo, que nos abre una nueva ventana donde se mostrarán los resultados.
 */

void juego::ontime()
{
    ui->cronos->display( --contador ); /*!< en esta linea se muestra en el display la cuenta regresiva desde el valor inicializado hasta 0*/

    activo = 1 + rand() %8; /*!< Generacion de un numero aleatorio entre 1 y 8, quienes seran los estados que abilitaran los 8 botones */

    ui->b1->setDisabled( true );    ///////////////////////////////////////////////////////////////
    ui->b1->setVisible(false);      ///
    ui->b2->setDisabled( true );    ///
    ui->b2->setVisible(false);      ///
    ui->b3->setDisabled( true );    ///
    ui->b3->setVisible(false);      ///
    ui->b4->setDisabled( true );    /// En este acumulado de lineas buscamos ocultar y deshabilitar
    ui->b4->setVisible(false);      /// todos los botones antes de entrar a elejir uno especifico
    ui->b5->setDisabled( true );    /// definido por el valor aleatorio de estdos en la vriable
    ui->b5->setVisible(false);      /// \param activo.
    ui->b6->setDisabled( true );    ///
    ui->b6->setVisible(false);      ///
    ui->b7->setDisabled( true );    ///
    ui->b7->setVisible(false);      ///
    ui->b8->setDisabled( true );    ///
    ui->b8->setVisible(false);      ///////////////////////////////////////////////////////////////

    mecanismoA(); /*!< Cuando el valor aleatorio halla sido seleciconado y los botones deshabilitados e invisibles, entramos
                       a seleccionar cual unico boton se encenderá*/

    c++;
    p++;

    cout<<c<<endl;

    if( contador == 0 )
    {
        resultados a (this);
        a.setModal(true);
        close();
        a.show();
        a.exec();
    }
    else
        cronometro->start(); /*!< Damos luz verde para que la variable \param cronometro pase al siguiente valor en decenso*/
}

void juego::on_push30s_clicked()    /////////////////////////////////////////////
{                                   ///
    contador = 30;                  ///
    cronometro->start();            ///
}                                   ///
                                    ///
void juego::on_push1min_clicked()   /// \brief juego::on_push30s_clicked
{                                   /// \brief juego::on_push1min_clicked
    contador = 60;                  /// \brief juego::on_push5min_clicked
    cronometro->start();            ///
}                                   /// Aquellas funciones permiten darle valor inicial
                                    /// al la variable \param contador y asi empezar a contar
void juego::on_push5min_clicked()   /// en la funcion ontime.
{                                   ///
    contador = 300;                 ///
    cronometro->start();            ///
}                                   ///
                                    ///////////////////////////////////////////////

/*!
 * \brief juego::on_pushok_clicked
 * A diferencia de las funciones anteriroes de inicializacion del \param contador , esta funcion toma de la entrada grafica
 * el valor del tiempo y lo traduce para poder inicializar el contador a gusto del usuario.
 */

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
/*!
 * \brief juego::mecanismoA
 * Cuando se desabilitaron los botones en ontime, la funcion de mecanismoA tiene el trabajo de mostrar solo un boton, al azar,
 * durando un segundo en accion hasta cambiar a otro.
 */
void juego::mecanismoA()
{
    switch ( activo ) {
    case 1:
        activo = 1;
        ui->b1->setEnabled( true );
        ui->b1->setVisible( true );
        if(ui->b1->isChecked() == true)
        {
            s[c] = p;
            st[c] = contador;
            cout<<"si"<<endl;
        }
        else
        {
            n[c] = p;
            nt[c] = contador;
            cout<<"no"<<endl;
        }
        break;
    case 2:
        activo = 2;
        ui->b2->setEnabled( true );
        ui->b2->setVisible(true);
        break;
    case 3:
        activo = 3;
        ui->b3->setEnabled( true );
        ui->b3->setVisible(true);
        break;
    case 4:
        activo = 4;
        ui->b4->setEnabled( true );
        ui->b4->setVisible(true);
        break;
    case 5:
        activo = 5;
        ui->b5->setEnabled( true );
        ui->b5->setVisible(true);
        break;
    case 6:
        activo = 6;
        ui->b6->setEnabled( true );
        ui->b6->setVisible(true);
        break;
    case 7:
        activo = 7;
        ui->b7->setEnabled( true );
        ui->b7->setVisible(true);
        break;
    case 8:
        activo = 8;
        ui->b8->setEnabled( true );
        ui->b8->setVisible(true);
        break;
    default:
        break;
    }
}

/*!
 * \brief juego::on_b1_clicked
 * Cada botón que se encienda en un detemrinado momento debe ser enparejado con una accion, esa accion la tomamos como el click
 * que se le debe hacer al mismo, ese es el propocito por el cual se genreraron funciones de accion Clicked por cada uno.
 */
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

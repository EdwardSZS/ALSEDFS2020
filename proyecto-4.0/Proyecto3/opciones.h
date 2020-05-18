#ifndef OPCIONES_H
#define OPCIONES_H

#include <QMainWindow>
#include "base_da.h"

namespace Ui {
class opciones;
}

/*!
 * \brief The opciones class
 * Aquella clase que contiene a la ventana principal QMainWindow, esta resulta ser la clase que nos permite generar un flujo
 * ciclico en la aplicacion. Sin importar dodne se esté dentro de de la aplicacio volvermeos a esta clase y a nivel visual
 * estaremos de regreso a aquella ventana que fue diseñada para sus procesos, la clase principal es importante para entender
 * que la forma en como se diseñan este tipo de aplicaciones son en principio acciones de retorno, extenciones de acciones que
 * nos conducen al menu principal una vez estas se acaben.
 */

class opciones : public QMainWindow
{
    Q_OBJECT

public:
    base_da da;
    explicit opciones(QWidget *parent = 0);
    ~opciones();

private slots:
    void on_Reg_paciente_clicked();

    void on_Real_prueba_clicked();

    void on_Edit_usr_clicked();

private:
    Ui::opciones *ui;
};

#endif // OPCIONES_H

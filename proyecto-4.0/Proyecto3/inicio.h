#ifndef INICIO_H
#define INICIO_H

#include <QWidget>
#include <QDialog>
#include "base_da.h"


namespace Ui {
class inicio;
}

/*!
 * \brief The inicio class
 * Aquellos procesos en donde se verifican los primeros datos, auqellos referidos a los usuarios; la creacion de
 * algunos nuevos y por tanto el acceso al panel principal de opciones, todo aquello condensado en una ventana
 * que abre otras auxiliares.
 * \details
 */

class inicio : public QDialog
{
    Q_OBJECT

public:
    base_da db; /*! <uso de la BD, a partir de caracter publico puedo viajar afurea de la clase para acceder
                a otras variables*/

    explicit inicio(QWidget *parent = 0);
    ~inicio();

private slots:
    void on_Registrarse_clicked();

    void on_ingreso_clicked();

private:
    Ui::inicio *ui;
};

#endif // INICIO_H

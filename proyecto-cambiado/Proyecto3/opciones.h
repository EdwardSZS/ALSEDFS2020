#ifndef OPCIONES_H
#define OPCIONES_H

#include <QMainWindow>
#include "base_da.h"
namespace Ui {
class opciones;
}

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

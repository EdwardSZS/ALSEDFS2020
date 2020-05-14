#ifndef OPCIONES_H
#define OPCIONES_H

#include <QMainWindow>

namespace Ui {
class opciones;
}

class opciones : public QMainWindow
{
    Q_OBJECT

public:
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

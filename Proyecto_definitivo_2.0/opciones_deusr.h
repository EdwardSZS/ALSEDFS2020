#ifndef OPCIONES_DEUSR_H
#define OPCIONES_DEUSR_H

#include <QMainWindow>

namespace Ui {
class opciones_deusr;
}

class opciones_deusr : public QMainWindow
{
    Q_OBJECT

public:
    explicit opciones_deusr(QWidget *parent = 0);
    ~opciones_deusr();


private slots:
    void on_Edit_usr_clicked();
    void on_Real_prueba_clicked();
    void on_Reg_paciente_clicked();
    void conectar_ventana();

private:
    Ui::opciones_deusr *ui;
};

#endif // OPCIONES_DEUSR_H

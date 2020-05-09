#ifndef DATOSENTRADA_SESION_USR_H
#define DATOSENTRADA_SESION_USR_H

#include <QDialog>

namespace Ui {
class datosentrada_sesion_usr;
}

class datosentrada_sesion_usr : public QDialog
{
    Q_OBJECT

public:
    explicit datosentrada_sesion_usr(QWidget *parent = 0);
    ~datosentrada_sesion_usr();
  signals:
     void pasardatos (bool clik);
private slots:
     void on_Registrar2_clicked();

private slots:
    void on_ir_clicked();
    void conect_ventana();

private:
    Ui::datosentrada_sesion_usr *ui;
};

#endif // DATOSENTRADA_SESION_USR_H

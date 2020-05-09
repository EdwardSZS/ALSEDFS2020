#ifndef INICIO_O_CREAR_USR_H
#define INICIO_O_CREAR_USR_H

#include <QDialog>


namespace Ui {
class inicio_o_crear_usr;
}

class inicio_o_crear_usr : public QDialog
{
    Q_OBJECT

public:
    explicit inicio_o_crear_usr(QWidget *parent = 0);
    ~inicio_o_crear_usr();
signals:
    void pasardatosa (bool click);
public slots:
    void con_recibir(bool cx);
private slots:
    void on_inicio_s_clicked();


    void on_crear_s_clicked();

private:
    Ui::inicio_o_crear_usr *ui;
};

#endif // INICIO_O_CREAR_USR_H

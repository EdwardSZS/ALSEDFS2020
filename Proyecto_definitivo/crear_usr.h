#ifndef CREAR_USR_H
#define CREAR_USR_H

#include <QDialog>

namespace Ui {
class Crear_usr;
}

class Crear_usr : public QDialog
{
    Q_OBJECT

public:
    explicit Crear_usr(QWidget *parent = 0);
    ~Crear_usr();
signals:
   void conecct_db(bool pass);

private slots:
    void on_Ok_clicked();

private:
    Ui::Crear_usr *ui;
};

#endif // CREAR_USR_H

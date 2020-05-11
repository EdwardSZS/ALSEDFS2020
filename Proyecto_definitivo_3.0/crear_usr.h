#ifndef CREAR_USR_H
#define CREAR_USR_H

#include <QDialog>
//#include <db>
#include <string>
using namespace  std;

namespace Ui {
class Crear_usr;
}

class Crear_usr : public QDialog
{
    Q_OBJECT

public:
    //Base_de_datos db;
    explicit Crear_usr(QWidget *parent = 0);
    //void conectar_db();
    ~Crear_usr();
//signals:


   string getNombre() const;

   string getUsuario() const;

   float getNi() const;

   string getPass() const;

   string getApellido() const;

   string getFecha_nac() const;

private slots:
   void on_Ok_clicked();

private:
    Ui::Crear_usr *ui;
    string nombre;
    string usuario;
    float     ni;
    string pass;
    string apellido;
    string fecha_nac;
};

#endif // CREAR_USR_H

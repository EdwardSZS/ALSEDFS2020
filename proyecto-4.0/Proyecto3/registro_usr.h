#ifndef REGISTRO_USR_H
#define REGISTRO_USR_H

#include <QDialog>
#include <string>

using namespace std;

namespace Ui {
class registro_usr;
}

/*!
 * \brief The registro_usr class
 * De manera muy similar a la clase de el registro para el paciente, esta clase permite a las variables retomadas de la interfaz
 * grafica, viajar hacia la BD, para poder ser almacenadas y en casos algunos procesadas, como ocurre con la edad. Todo esto
 * a travez de un proceso de ventana (Gui) para hacer el procesos no tan tosco para una persona que no tenega conociminetos en
 * programacion.
 */
class registro_usr : public QDialog
{
    Q_OBJECT

public:

    explicit registro_usr(QWidget *parent = 0);
    ~registro_usr();

    string getName() const;
    void setName(const string &value);

    string getUsr() const;
    void setUsr(const string &value);

    string getPass() const;
    void setPass(const string &value);

    string getApe() const;
    void setApe(const string &value);

    string getF_nac() const;
    void setF_nac(const string &value);

    int getN_id() const;
    void setN_id(int value);

private slots:
    void on_Ok_clicked();

private:
    Ui::registro_usr *ui;
    string name;
    string usr;
    string pass;
    string ape;
    string f_nac;
    int n_id;
};

#endif // REGISTRO_USR_H

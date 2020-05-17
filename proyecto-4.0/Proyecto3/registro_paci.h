#ifndef REGISTRO_PACI_H
#define REGISTRO_PACI_H

#include <QDialog>
#include <string>

using namespace std;

namespace Ui {
class registro_paci;
}

class registro_paci : public QDialog
{
    Q_OBJECT

public:
    explicit registro_paci(QWidget *parent = 0);
    ~registro_paci();

    string getNom() const;
    void setNom(const string &value);

    string getApe() const;
    void setApe(const string &value);

    int getEdad() const;
    void setEdad(const int &value);

    string getFn() const;
    void setFn(const string &value);

    int getNi() const;
    void setNi(int value);

    float getIng() const;
    void setIng(float value);

    string getEtnia() const;
    void setEtnia(const string &value);

    string getGen() const;
    void setGen(const string &value);

    string getDir() const;
    void setDir(const string &value);

private slots:
    void on_Registra_paci_clicked();

private:
    Ui::registro_paci *ui;
    string nom;
    string ape;
    int edad;
    string fn;
    int ni;
    float ing;
    string etnia;
    string gen;
    string dir;

};

#endif // REGISTRO_PACI_H


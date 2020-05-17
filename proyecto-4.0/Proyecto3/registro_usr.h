#ifndef REGISTRO_USR_H
#define REGISTRO_USR_H

#include <QDialog>
#include <string>

using namespace std;

namespace Ui {
class registro_usr;
}

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

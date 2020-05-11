#ifndef CREAR_PAC_H
#define CREAR_PAC_H

#include <QDialog>
#include <string>

using namespace std;
namespace Ui {
class crear_pac;
}

class crear_pac : public QDialog
{
    Q_OBJECT

public:
    explicit crear_pac(QWidget *parent = 0);
    ~crear_pac();
signals:

    string nombre() const;
    void setNombre(const string &nombre);

private slots:
    void on_Registra_paci_clicked();

private:
    Ui::crear_pac *ui;
    string _nombre;
};

#endif // CREAR_PAC_H

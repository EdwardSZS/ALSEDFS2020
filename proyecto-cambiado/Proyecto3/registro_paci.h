#ifndef REGISTRO_PACI_H
#define REGISTRO_PACI_H

#include <QDialog>

namespace Ui {
class registro_paci;
}

class registro_paci : public QDialog
{
    Q_OBJECT

public:
    explicit registro_paci(QWidget *parent = 0);
    ~registro_paci();

private slots:
    void on_Registra_paci_clicked();

private:
    Ui::registro_paci *ui;
};

#endif // REGISTRO_PACI_H

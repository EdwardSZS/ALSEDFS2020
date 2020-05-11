#ifndef FILTRO1_NI_H
#define FILTRO1_NI_H

#include <QDialog>

namespace Ui {
class filtro1_NI;
}

class filtro1_NI : public QDialog
{
    Q_OBJECT

public:
    explicit filtro1_NI(QWidget *parent = 0);
    ~filtro1_NI();

private slots:
    void on_Continuar_clicked();

private:
    Ui::filtro1_NI *ui;
};

#endif // FILTRO1_NI_H

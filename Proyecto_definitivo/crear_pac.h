#ifndef CREAR_PAC_H
#define CREAR_PAC_H

#include <QDialog>


namespace Ui {
class crear_pac;
}

class crear_pac : public QDialog
{
    Q_OBJECT

public:
    explicit crear_pac(QWidget *parent = 0);
    ~crear_pac();

private slots:
    void on_Registra_paci_clicked();

private:
    Ui::crear_pac *ui;
};

#endif // CREAR_PAC_H

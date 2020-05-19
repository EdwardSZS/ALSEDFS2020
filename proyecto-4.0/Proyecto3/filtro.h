#ifndef FILTRO_H
#define FILTRO_H

#include <QDialog>

/*!
 * \brief The filtro class
 * Diseñado para poder verificar si un usuario ha sido registrado para poder introducirlo
 * a la ventana del juego.
 * \details
 */
namespace Ui {
class filtro;
}

class filtro : public QDialog
{
    Q_OBJECT

public:
    explicit filtro(QWidget *parent = 0);
    ~filtro();

private slots:
    void on_Continuar_clicked();

private:
    Ui::filtro *ui;
};

#endif // FILTRO_H

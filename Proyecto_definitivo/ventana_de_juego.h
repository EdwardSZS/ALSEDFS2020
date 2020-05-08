#ifndef VENTANA_DE_JUEGO_H
#define VENTANA_DE_JUEGO_H

#include <QMainWindow>

namespace Ui {
class ventana_de_juego;
}

class ventana_de_juego : public QMainWindow
{
    Q_OBJECT

public:
    explicit ventana_de_juego(QWidget *parent = 0);
    ~ventana_de_juego();
signals:
  void enlace (bool x1);
private slots:
    void recibirdatos (bool clka);
    void conectar_ventana();

private:
    Ui::ventana_de_juego *ui;
};

#endif // VENTANA_DE_JUEGO_H

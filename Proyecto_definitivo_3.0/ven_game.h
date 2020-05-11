#ifndef VEN_GAME_H
#define VEN_GAME_H

#include <QDialog>
#include <QTimer>

namespace Ui {
class ven_game;
}

class ven_game : public QDialog
{
    Q_OBJECT

public:
    explicit ven_game(QWidget *parent = 0);
    ~ven_game();

private slots:
    void ontime();
    void perdertiempo (int contador_out);

private:
    int contador;
    Ui::ven_game *ui;
    QTimer *cronometro;
};

#endif // VEN_GAME_H

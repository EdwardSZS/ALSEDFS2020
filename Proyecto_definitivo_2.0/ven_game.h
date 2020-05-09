#ifndef VEN_GAME_H
#define VEN_GAME_H

#include <QWidget>

namespace Ui {
class ven_game;
}

class ven_game : public QWidget
{
    Q_OBJECT

public:
    explicit ven_game(QWidget *parent = 0);
    ~ven_game();

private:
    Ui::ven_game *ui;
};

#endif // VEN_GAME_H

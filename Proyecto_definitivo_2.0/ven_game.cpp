#include "ven_game.h"
#include "ui_ven_game.h"

ven_game::ven_game(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ven_game)
{
    ui->setupUi(this);
}

ven_game::~ven_game()
{
    delete ui;
}

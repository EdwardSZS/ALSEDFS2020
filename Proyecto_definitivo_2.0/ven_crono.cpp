#include "ven_crono.h"
#include "ui_ven_crono.h"

ven_crono::ven_crono(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ven_crono)
{
    ui->setupUi(this);
}

ven_crono::~ven_crono()
{
    delete ui;
}

void ven_crono::on_push30s_clicked()
{

}

void ven_crono::on_push1min_clicked()
{

}

void ven_crono::on_push5min_clicked()
{

}

void ven_crono::on_pushok_clicked()
{

}

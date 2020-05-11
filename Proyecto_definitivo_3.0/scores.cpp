#include "scores.h"
#include "ui_scores.h"
#include "opciones_deusr.h"

scores::scores(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::scores)
{
    ui->setupUi(this);
}

scores::~scores()
{
    delete ui;
}

void scores::on_pushButton_clicked()
{
    opciones_deusr a (this);
    this->close();
    a.show();
}

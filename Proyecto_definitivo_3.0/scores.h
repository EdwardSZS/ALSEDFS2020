#ifndef SCORES_H
#define SCORES_H

#include <QDialog>

namespace Ui {
class scores;
}

class scores : public QDialog
{
    Q_OBJECT

public:
    explicit scores(QWidget *parent = 0);
    ~scores();

private slots:
    void on_pushButton_clicked();

private:
    Ui::scores *ui;
};

#endif // SCORES_H

#ifndef VEN_CRONO_H
#define VEN_CRONO_H

#include <QDialog>

namespace Ui {
class ven_crono;
}

class ven_crono : public QDialog
{
    Q_OBJECT

public:
    explicit ven_crono(QWidget *parent = 0);
    ~ven_crono();

private slots:
    void on_pushok_clicked();

private slots:
    void on_push5min_clicked();

private slots:
    void on_push1min_clicked();

private slots:
    void on_push30s_clicked();

private:
    Ui::ven_crono *ui;
};

#endif // VEN_CRONO_H

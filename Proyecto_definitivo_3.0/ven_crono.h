#ifndef VEN_CRONO_H
#define VEN_CRONO_H

#include <QDialog>
#include <QTimer>

namespace Ui {
class ven_crono;
}

class ven_crono : public QDialog
{
    Q_OBJECT

public:
    explicit ven_crono(QWidget *parent = 0);
    ~ven_crono();

signals:
    void pasatiempos(int contador_in);

private slots:
    void on_pushok_clicked();
    void on_push5min_clicked();
    void on_push1min_clicked();
    void on_push30s_clicked();

private:
    Ui::ven_crono *ui;
};

#endif // VEN_CRONO_H

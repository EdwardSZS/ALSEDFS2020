#ifndef JUEGO_H
#define JUEGO_H

#include <QDialog>
#include <QTimer>
#include <vector>

using namespace std;

namespace Ui {
class juego;
}

class juego : public QDialog
{
    Q_OBJECT

public:
    explicit juego(QWidget *parent = 0);
    ~juego();

private slots:

    void mecanismoA();

    void ontime();

    void on_push30s_clicked();

    void on_push1min_clicked();

    void on_push5min_clicked();

    void on_pushok_clicked();

    void on_b1_clicked();

    void on_b2_clicked();

    void on_b3_clicked();

    void on_b4_clicked();

    void on_b5_clicked();

    void on_b6_clicked();

    void on_b7_clicked();

    void on_b8_clicked();

private:
    int s[30], n[30], st[30], nt[30], c=0, p=1;
    Ui::juego *ui;
    int contador;
    char activo;
    QTimer *cronometro;
};

#endif // JUEGO_H

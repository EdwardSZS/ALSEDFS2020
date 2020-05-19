/********************************************************************************
** Form generated from reading UI file 'juego.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JUEGO_H
#define UI_JUEGO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_juego
{
public:
    QGroupBox *groupBox;
    QPushButton *b8;
    QPushButton *b2;
    QPushButton *b4;
    QPushButton *b1;
    QPushButton *b6;
    QPushButton *b5;
    QPushButton *b7;
    QPushButton *b3;
    QLCDNumber *cronos;
    QTextBrowser *textBrowser;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLabel *label;
    QPushButton *pushok;
    QPushButton *push5min;
    QLineEdit *lineEdit_comodin;
    QPushButton *push1min;
    QPushButton *push30s;
    QSpacerItem *horizontalSpacer;
    QTableWidget *tableWidget;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QTableView *tableView;
    QPushButton *Listo;

    void setupUi(QDialog *juego)
    {
        if (juego->objectName().isEmpty())
            juego->setObjectName(QStringLiteral("juego"));
        juego->resize(1320, 639);
        juego->setStyleSheet(QStringLiteral("background-color: rgb(46, 52, 54);"));
        groupBox = new QGroupBox(juego);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(430, 10, 561, 461));
        groupBox->setStyleSheet(QStringLiteral("background-color: rgb(211, 215, 207);"));
        b8 = new QPushButton(groupBox);
        b8->setObjectName(QStringLiteral("b8"));
        b8->setEnabled(false);
        b8->setGeometry(QRect(490, 400, 61, 51));
        b8->setStyleSheet(QStringLiteral("background-color: rgb(138, 226, 52);"));
        b2 = new QPushButton(groupBox);
        b2->setObjectName(QStringLiteral("b2"));
        b2->setEnabled(false);
        b2->setGeometry(QRect(490, 30, 61, 51));
        b2->setStyleSheet(QStringLiteral("background-color: rgb(138, 226, 52);"));
        b4 = new QPushButton(groupBox);
        b4->setObjectName(QStringLiteral("b4"));
        b4->setEnabled(false);
        b4->setGeometry(QRect(140, 220, 61, 51));
        b4->setStyleSheet(QStringLiteral("background-color: rgb(138, 226, 52);"));
        b1 = new QPushButton(groupBox);
        b1->setObjectName(QStringLiteral("b1"));
        b1->setEnabled(false);
        b1->setGeometry(QRect(10, 30, 61, 51));
        b1->setStyleSheet(QStringLiteral("background-color: rgb(138, 226, 52);"));
        b1->setCheckable(false);
        b1->setChecked(false);
        b6 = new QPushButton(groupBox);
        b6->setObjectName(QStringLiteral("b6"));
        b6->setEnabled(false);
        b6->setGeometry(QRect(250, 330, 61, 51));
        b6->setStyleSheet(QStringLiteral("background-color: rgb(138, 226, 52);"));
        b5 = new QPushButton(groupBox);
        b5->setObjectName(QStringLiteral("b5"));
        b5->setEnabled(false);
        b5->setGeometry(QRect(360, 220, 61, 51));
        b5->setStyleSheet(QStringLiteral("background-color: rgb(138, 226, 52);"));
        b7 = new QPushButton(groupBox);
        b7->setObjectName(QStringLiteral("b7"));
        b7->setEnabled(false);
        b7->setGeometry(QRect(10, 400, 61, 51));
        b7->setStyleSheet(QStringLiteral("background-color: rgb(138, 226, 52);"));
        b3 = new QPushButton(groupBox);
        b3->setObjectName(QStringLiteral("b3"));
        b3->setEnabled(false);
        b3->setGeometry(QRect(250, 110, 61, 51));
        b3->setStyleSheet(QStringLiteral("background-color: rgb(138, 226, 52);"));
        cronos = new QLCDNumber(groupBox);
        cronos->setObjectName(QStringLiteral("cronos"));
        cronos->setGeometry(QRect(250, 420, 81, 41));
        cronos->setStyleSheet(QLatin1String("background-color: rgb(136, 138, 133);\n"
"background-color: rgb(46, 52, 54);"));
        textBrowser = new QTextBrowser(juego);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(10, 10, 391, 271));
        textBrowser->setStyleSheet(QStringLiteral("background-color: rgb(186, 189, 182);"));
        textBrowser->setReadOnly(true);
        layoutWidget = new QWidget(juego);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 310, 291, 161));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QStringLiteral("background-color: rgb(238, 238, 236);"));

        gridLayout->addWidget(label_2, 0, 2, 1, 1);

        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QStringLiteral("background-color: rgb(238, 238, 236);"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        pushok = new QPushButton(layoutWidget);
        pushok->setObjectName(QStringLiteral("pushok"));
        pushok->setStyleSheet(QStringLiteral("background-color: rgb(114, 159, 207);"));

        gridLayout->addWidget(pushok, 2, 2, 1, 1);

        push5min = new QPushButton(layoutWidget);
        push5min->setObjectName(QStringLiteral("push5min"));
        push5min->setStyleSheet(QStringLiteral("background-color: rgb(136, 138, 133);"));

        gridLayout->addWidget(push5min, 3, 0, 1, 1);

        lineEdit_comodin = new QLineEdit(layoutWidget);
        lineEdit_comodin->setObjectName(QStringLiteral("lineEdit_comodin"));
        lineEdit_comodin->setStyleSheet(QStringLiteral("background-color: rgb(186, 189, 182);"));

        gridLayout->addWidget(lineEdit_comodin, 1, 2, 1, 1);

        push1min = new QPushButton(layoutWidget);
        push1min->setObjectName(QStringLiteral("push1min"));
        push1min->setStyleSheet(QStringLiteral("background-color: rgb(136, 138, 133);"));

        gridLayout->addWidget(push1min, 2, 0, 1, 1);

        push30s = new QPushButton(layoutWidget);
        push30s->setObjectName(QStringLiteral("push30s"));
        push30s->setStyleSheet(QStringLiteral("background-color: rgb(136, 138, 133);"));

        gridLayout->addWidget(push30s, 1, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 1, 1, 1);

        tableWidget = new QTableWidget(juego);
        if (tableWidget->columnCount() < 1)
            tableWidget->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        if (tableWidget->rowCount() < 1)
            tableWidget->setRowCount(1);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setItem(0, 0, __qtablewidgetitem2);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(760, 500, 256, 192));
        widget = new QWidget(juego);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(1010, 10, 291, 611));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        tableView = new QTableView(widget);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setEnabled(false);
        tableView->setStyleSheet(QStringLiteral("background-color: rgb(186, 189, 182);"));

        verticalLayout->addWidget(tableView);

        Listo = new QPushButton(widget);
        Listo->setObjectName(QStringLiteral("Listo"));
        Listo->setStyleSheet(QStringLiteral("background-color: rgb(114, 159, 207);"));

        verticalLayout->addWidget(Listo);


        retranslateUi(juego);

        QMetaObject::connectSlotsByName(juego);
    } // setupUi

    void retranslateUi(QDialog *juego)
    {
        juego->setWindowTitle(QApplication::translate("juego", "Panel de juego", Q_NULLPTR));
        groupBox->setTitle(QString());
        b8->setText(QApplication::translate("juego", "8", Q_NULLPTR));
        b2->setText(QApplication::translate("juego", "2", Q_NULLPTR));
        b4->setText(QApplication::translate("juego", "4", Q_NULLPTR));
        b1->setText(QApplication::translate("juego", "1", Q_NULLPTR));
        b6->setText(QApplication::translate("juego", "6", Q_NULLPTR));
        b5->setText(QApplication::translate("juego", "5", Q_NULLPTR));
        b7->setText(QApplication::translate("juego", "7", Q_NULLPTR));
        b3->setText(QApplication::translate("juego", "3", Q_NULLPTR));
        textBrowser->setHtml(QApplication::translate("juego", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">Antes de jugar, debe elegir un tiempo,al seleccionar o digitar el valor del conteo este inicia inmediatamente, recuerde que entre mayor sea su edad su motricidad deciende; por lo que recomentamos tiempos de juego un poco mas cortos para evitar fatiga:</span></p>\n"
"<p align=\"justify\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt;\"><br /></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bott"
                        "om:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">1) Reglas: el juego de reaccion es simple, por cada segundo en el panel mostrado se iluminar\303\241 un solo boton de color amarillo, los encendidos son aleatorios, por lo que debe ser bastante rapido con el rat\303\263n para desplazarce por toda la ventana, al ser un test medico usted como paciente no podr\303\241 cancelar la prueba asi que preparese para dar su mejor intento. </span></p>\n"
"<p align=\"justify\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt;\"><br /></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">2)Conforme a que esta es una aplicacion medica, se le permitira mostrar al final de su prueba un compilado de errores y aciertos.</span></p>\n"
"<"
                        "p align=\"justify\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt;\"><br /></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">Buen juego.</span></p></body></html>", Q_NULLPTR));
        label_2->setText(QApplication::translate("juego", "A su gusto (segundos):", Q_NULLPTR));
        label->setText(QApplication::translate("juego", "Pre-Cargados:", Q_NULLPTR));
        pushok->setText(QApplication::translate("juego", "Ok", Q_NULLPTR));
        push5min->setText(QApplication::translate("juego", "5min", Q_NULLPTR));
        push1min->setText(QApplication::translate("juego", "1min", Q_NULLPTR));
        push30s->setText(QApplication::translate("juego", "30s", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("juego", "New Column", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem1->setText(QApplication::translate("juego", "New Row", Q_NULLPTR));

        const bool __sortingEnabled = tableWidget->isSortingEnabled();
        tableWidget->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->item(0, 0);
        ___qtablewidgetitem2->setText(QApplication::translate("juego", "uu", Q_NULLPTR));
        tableWidget->setSortingEnabled(__sortingEnabled);

        Listo->setText(QApplication::translate("juego", "Listo", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class juego: public Ui_juego {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JUEGO_H

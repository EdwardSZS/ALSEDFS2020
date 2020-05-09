/********************************************************************************
** Form generated from reading UI file 'ven_crono.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VEN_CRONO_H
#define UI_VEN_CRONO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ven_crono
{
public:
    QTextBrowser *textBrowser;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLabel *label;
    QPushButton *pushok;
    QPushButton *push5min;
    QLineEdit *lineEdit_comodin;
    QPushButton *push1min;
    QPushButton *push30s;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *ven_crono)
    {
        if (ven_crono->objectName().isEmpty())
            ven_crono->setObjectName(QStringLiteral("ven_crono"));
        ven_crono->resize(357, 438);
        textBrowser = new QTextBrowser(ven_crono);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(10, 10, 341, 271));
        textBrowser->setReadOnly(true);
        widget = new QWidget(ven_crono);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 300, 331, 115));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 0, 2, 1, 1);

        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        pushok = new QPushButton(widget);
        pushok->setObjectName(QStringLiteral("pushok"));

        gridLayout->addWidget(pushok, 2, 2, 1, 1);

        push5min = new QPushButton(widget);
        push5min->setObjectName(QStringLiteral("push5min"));

        gridLayout->addWidget(push5min, 3, 0, 1, 1);

        lineEdit_comodin = new QLineEdit(widget);
        lineEdit_comodin->setObjectName(QStringLiteral("lineEdit_comodin"));

        gridLayout->addWidget(lineEdit_comodin, 1, 2, 1, 1);

        push1min = new QPushButton(widget);
        push1min->setObjectName(QStringLiteral("push1min"));

        gridLayout->addWidget(push1min, 2, 0, 1, 1);

        push30s = new QPushButton(widget);
        push30s->setObjectName(QStringLiteral("push30s"));

        gridLayout->addWidget(push30s, 1, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 1, 1, 1);


        retranslateUi(ven_crono);

        QMetaObject::connectSlotsByName(ven_crono);
    } // setupUi

    void retranslateUi(QWidget *ven_crono)
    {
        ven_crono->setWindowTitle(QApplication::translate("ven_crono", "Form", Q_NULLPTR));
        textBrowser->setHtml(QApplication::translate("ven_crono", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Antes de jugar, debe elegir un tiempo, recuerde que entre mayor sea su edad su motricidad deciende; por lo que recomentamos tiempos de juego un poco mas cortos:</p>\n"
"<p align=\"justify\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">1) Reglas: el juego de reaccion es simple, por cada segundo en el"
                        " panel mostrado se iluminar\303\241 un solo boton de color rojo, los encendidos son aleatorios, por lo que debe ser bastante rapido con el rat\303\263n para desplazarce por toda la ventana. </p>\n"
"<p align=\"justify\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">2)Con forme a que esta es una aplicacion medica, se le permitira mostrar al final de su prueba un compilado de errores y aciertos.</p>\n"
"<p align=\"justify\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Buen juego.</p></body></html>", Q_NULLPTR));
        label_2->setText(QApplication::translate("ven_crono", "A su gusto:", Q_NULLPTR));
        label->setText(QApplication::translate("ven_crono", "Pre-Cargados:", Q_NULLPTR));
        pushok->setText(QApplication::translate("ven_crono", "Ok", Q_NULLPTR));
        push5min->setText(QApplication::translate("ven_crono", "5min", Q_NULLPTR));
        push1min->setText(QApplication::translate("ven_crono", "1min", Q_NULLPTR));
        push30s->setText(QApplication::translate("ven_crono", "30s", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ven_crono: public Ui_ven_crono {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VEN_CRONO_H

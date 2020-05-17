/********************************************************************************
** Form generated from reading UI file 'filtro.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILTRO_H
#define UI_FILTRO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_filtro
{
public:
    QPushButton *Continuar;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *lineEdit_NI;

    void setupUi(QDialog *filtro)
    {
        if (filtro->objectName().isEmpty())
            filtro->setObjectName(QStringLiteral("filtro"));
        filtro->resize(250, 125);
        filtro->setMinimumSize(QSize(250, 125));
        filtro->setMaximumSize(QSize(250, 125));
        Continuar = new QPushButton(filtro);
        Continuar->setObjectName(QStringLiteral("Continuar"));
        Continuar->setGeometry(QRect(130, 80, 89, 20));
        Continuar->setStyleSheet(QStringLiteral("background-color: rgb(78, 154, 6);"));
        widget = new QWidget(filtro);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 20, 211, 50));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        lineEdit_NI = new QLineEdit(widget);
        lineEdit_NI->setObjectName(QStringLiteral("lineEdit_NI"));

        verticalLayout->addWidget(lineEdit_NI);


        retranslateUi(filtro);

        QMetaObject::connectSlotsByName(filtro);
    } // setupUi

    void retranslateUi(QDialog *filtro)
    {
        filtro->setWindowTitle(QApplication::translate("filtro", "Dialog", Q_NULLPTR));
        Continuar->setText(QApplication::translate("filtro", "Continuar", Q_NULLPTR));
        label->setText(QApplication::translate("filtro", "Por favor, digite su NI:", Q_NULLPTR));
        lineEdit_NI->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class filtro: public Ui_filtro {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILTRO_H

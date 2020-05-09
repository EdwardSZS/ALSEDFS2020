/********************************************************************************
** Form generated from reading UI file 'filtro1_ni.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILTRO1_NI_H
#define UI_FILTRO1_NI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_filtro1_NI
{
public:
    QLabel *label;
    QLineEdit *lineEdit_NI;
    QPushButton *Continuar;

    void setupUi(QDialog *filtro1_NI)
    {
        if (filtro1_NI->objectName().isEmpty())
            filtro1_NI->setObjectName(QStringLiteral("filtro1_NI"));
        filtro1_NI->resize(390, 83);
        label = new QLabel(filtro1_NI);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 10, 161, 21));
        lineEdit_NI = new QLineEdit(filtro1_NI);
        lineEdit_NI->setObjectName(QStringLiteral("lineEdit_NI"));
        lineEdit_NI->setGeometry(QRect(20, 40, 221, 21));
        Continuar = new QPushButton(filtro1_NI);
        Continuar->setObjectName(QStringLiteral("Continuar"));
        Continuar->setGeometry(QRect(290, 50, 89, 25));
        Continuar->setStyleSheet(QStringLiteral("background-color: rgb(78, 154, 6);"));

        retranslateUi(filtro1_NI);

        QMetaObject::connectSlotsByName(filtro1_NI);
    } // setupUi

    void retranslateUi(QDialog *filtro1_NI)
    {
        filtro1_NI->setWindowTitle(QApplication::translate("filtro1_NI", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("filtro1_NI", "Por favor, digite su NI:", Q_NULLPTR));
        lineEdit_NI->setText(QString());
        Continuar->setText(QApplication::translate("filtro1_NI", "Continuar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class filtro1_NI: public Ui_filtro1_NI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILTRO1_NI_H

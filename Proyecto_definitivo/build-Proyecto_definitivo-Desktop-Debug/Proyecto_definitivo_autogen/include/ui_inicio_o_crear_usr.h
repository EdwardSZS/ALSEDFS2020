/********************************************************************************
** Form generated from reading UI file 'inicio_o_crear_usr.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INICIO_O_CREAR_USR_H
#define UI_INICIO_O_CREAR_USR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_inicio_o_crear_usr
{
public:
    QGroupBox *groupBox;
    QPushButton *inicio_s;
    QPushButton *crear_s;

    void setupUi(QWidget *inicio_o_crear_usr)
    {
        if (inicio_o_crear_usr->objectName().isEmpty())
            inicio_o_crear_usr->setObjectName(QStringLiteral("inicio_o_crear_usr"));
        inicio_o_crear_usr->resize(315, 343);
        groupBox = new QGroupBox(inicio_o_crear_usr);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(60, 50, 201, 201));
        groupBox->setTabletTracking(false);
        inicio_s = new QPushButton(groupBox);
        inicio_s->setObjectName(QStringLiteral("inicio_s"));
        inicio_s->setGeometry(QRect(50, 50, 91, 31));
        crear_s = new QPushButton(groupBox);
        crear_s->setObjectName(QStringLiteral("crear_s"));
        crear_s->setGeometry(QRect(50, 130, 91, 31));

        retranslateUi(inicio_o_crear_usr);

        QMetaObject::connectSlotsByName(inicio_o_crear_usr);
    } // setupUi

    void retranslateUi(QWidget *inicio_o_crear_usr)
    {
        inicio_o_crear_usr->setWindowTitle(QApplication::translate("inicio_o_crear_usr", "Entrada de usuario", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("inicio_o_crear_usr", "\302\241Welcome!", Q_NULLPTR));
        inicio_s->setText(QApplication::translate("inicio_o_crear_usr", "Iniciar sesion", Q_NULLPTR));
        crear_s->setText(QApplication::translate("inicio_o_crear_usr", "Crear sesion", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class inicio_o_crear_usr: public Ui_inicio_o_crear_usr {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INICIO_O_CREAR_USR_H

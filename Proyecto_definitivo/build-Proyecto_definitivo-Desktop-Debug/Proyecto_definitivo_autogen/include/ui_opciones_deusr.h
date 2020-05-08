/********************************************************************************
** Form generated from reading UI file 'opciones_deusr.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPCIONES_DEUSR_H
#define UI_OPCIONES_DEUSR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_opciones_deusr
{
public:
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QRadioButton *Real_prueba;
    QLabel *label;
    QRadioButton *Edit_usr;
    QRadioButton *Reg_paciente;

    void setupUi(QDialog *opciones_deusr)
    {
        if (opciones_deusr->objectName().isEmpty())
            opciones_deusr->setObjectName(QStringLiteral("opciones_deusr"));
        opciones_deusr->resize(400, 300);
        groupBox = new QGroupBox(opciones_deusr);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(50, 0, 271, 231));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(40, 30, 209, 178));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        Real_prueba = new QRadioButton(layoutWidget);
        Real_prueba->setObjectName(QStringLiteral("Real_prueba"));

        gridLayout->addWidget(Real_prueba, 5, 0, 1, 1);

        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        Edit_usr = new QRadioButton(layoutWidget);
        Edit_usr->setObjectName(QStringLiteral("Edit_usr"));

        gridLayout->addWidget(Edit_usr, 6, 0, 1, 1);

        Reg_paciente = new QRadioButton(layoutWidget);
        Reg_paciente->setObjectName(QStringLiteral("Reg_paciente"));

        gridLayout->addWidget(Reg_paciente, 4, 0, 1, 1);


        retranslateUi(opciones_deusr);

        QMetaObject::connectSlotsByName(opciones_deusr);
    } // setupUi

    void retranslateUi(QDialog *opciones_deusr)
    {
        opciones_deusr->setWindowTitle(QApplication::translate("opciones_deusr", "Dialog", Q_NULLPTR));
        groupBox->setTitle(QString());
        Real_prueba->setText(QApplication::translate("opciones_deusr", "Realizar Prueba", Q_NULLPTR));
        label->setText(QApplication::translate("opciones_deusr", "Seleccione una opci\303\263n a hacer:", Q_NULLPTR));
        Edit_usr->setText(QApplication::translate("opciones_deusr", "Editar info de usuario", Q_NULLPTR));
        Reg_paciente->setText(QApplication::translate("opciones_deusr", "Registrar Paciente", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class opciones_deusr: public Ui_opciones_deusr {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPCIONES_DEUSR_H

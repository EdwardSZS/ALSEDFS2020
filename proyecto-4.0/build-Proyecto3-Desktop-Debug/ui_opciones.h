/********************************************************************************
** Form generated from reading UI file 'opciones.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPCIONES_H
#define UI_OPCIONES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_opciones
{
public:
    QWidget *centralWidget;
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QRadioButton *Real_prueba;
    QLabel *label;
    QRadioButton *Edit_usr;
    QRadioButton *Reg_paciente;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *opciones)
    {
        if (opciones->objectName().isEmpty())
            opciones->setObjectName(QStringLiteral("opciones"));
        opciones->resize(415, 390);
        centralWidget = new QWidget(opciones);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(70, 30, 281, 241));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 30, 261, 201));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setSpacing(10);
        gridLayout->setContentsMargins(11, 11, 11, 11);
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

        opciones->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(opciones);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 415, 22));
        opciones->setMenuBar(menuBar);
        mainToolBar = new QToolBar(opciones);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        opciones->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(opciones);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        opciones->setStatusBar(statusBar);

        retranslateUi(opciones);

        QMetaObject::connectSlotsByName(opciones);
    } // setupUi

    void retranslateUi(QMainWindow *opciones)
    {
        opciones->setWindowTitle(QApplication::translate("opciones", "opciones", Q_NULLPTR));
        groupBox->setTitle(QString());
        Real_prueba->setText(QApplication::translate("opciones", "Realizar Prueba", Q_NULLPTR));
        label->setText(QApplication::translate("opciones", "Seleccione una opci\303\263n a hacer:", Q_NULLPTR));
        Edit_usr->setText(QApplication::translate("opciones", "Editar info de Paciente", Q_NULLPTR));
        Reg_paciente->setText(QApplication::translate("opciones", "Registrar Paciente", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class opciones: public Ui_opciones {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPCIONES_H

/********************************************************************************
** Form generated from reading UI file 'crear_usr.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREAR_USR_H
#define UI_CREAR_USR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Crear_usr
{
public:
    QGroupBox *groupBox;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_2;
    QLineEdit *lineEdit_3;
    QLabel *label_4;
    QLineEdit *lineEdit_5;
    QLabel *label_6;
    QLineEdit *lineEdit_2;
    QLabel *label_3;
    QLabel *label_2;
    QLineEdit *lineEdit_6;
    QLabel *label_5;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_4;
    QLabel *label;
    QPushButton *Ok;

    void setupUi(QDialog *Crear_usr)
    {
        if (Crear_usr->objectName().isEmpty())
            Crear_usr->setObjectName(QStringLiteral("Crear_usr"));
        Crear_usr->resize(523, 373);
        groupBox = new QGroupBox(Crear_usr);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(40, 10, 426, 226));
        gridLayout_3 = new QGridLayout(groupBox);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        lineEdit_3 = new QLineEdit(groupBox);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        gridLayout_2->addWidget(lineEdit_3, 3, 1, 1, 2);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_2->addWidget(label_4, 4, 0, 1, 1);

        lineEdit_5 = new QLineEdit(groupBox);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));

        gridLayout_2->addWidget(lineEdit_5, 4, 1, 1, 2);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_2->addWidget(label_6, 5, 0, 1, 2);

        lineEdit_2 = new QLineEdit(groupBox);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        gridLayout_2->addWidget(lineEdit_2, 1, 1, 1, 2);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_2->addWidget(label_3, 1, 0, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_2->addWidget(label_2, 3, 0, 1, 1);

        lineEdit_6 = new QLineEdit(groupBox);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));

        gridLayout_2->addWidget(lineEdit_6, 5, 2, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setEnabled(true);

        gridLayout_2->addWidget(label_5, 0, 0, 1, 1);

        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        gridLayout_2->addWidget(lineEdit, 0, 1, 1, 2);

        lineEdit_4 = new QLineEdit(groupBox);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));

        gridLayout_2->addWidget(lineEdit_4, 2, 1, 1, 2);

        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_2->addWidget(label, 2, 0, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 0, 0, 1, 1);

        Ok = new QPushButton(Crear_usr);
        Ok->setObjectName(QStringLiteral("Ok"));
        Ok->setGeometry(QRect(380, 260, 89, 25));

        retranslateUi(Crear_usr);

        QMetaObject::connectSlotsByName(Crear_usr);
    } // setupUi

    void retranslateUi(QDialog *Crear_usr)
    {
        Crear_usr->setWindowTitle(QApplication::translate("Crear_usr", "Formulario_usr", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("Crear_usr", "Formulario de usuario", Q_NULLPTR));
        label_4->setText(QApplication::translate("Crear_usr", "Numero de identificacion", Q_NULLPTR));
        label_6->setText(QApplication::translate("Crear_usr", "Fecha de Nacimiento (AAAA-MM-DD)", Q_NULLPTR));
        label_3->setText(QApplication::translate("Crear_usr", "Contrase\303\261a", Q_NULLPTR));
        label_2->setText(QApplication::translate("Crear_usr", "Apellido", Q_NULLPTR));
        label_5->setText(QApplication::translate("Crear_usr", "Usuario", Q_NULLPTR));
        label->setText(QApplication::translate("Crear_usr", "Nombre ", Q_NULLPTR));
        Ok->setText(QApplication::translate("Crear_usr", "Ok", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Crear_usr: public Ui_Crear_usr {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREAR_USR_H

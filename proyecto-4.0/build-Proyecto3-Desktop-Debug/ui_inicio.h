/********************************************************************************
** Form generated from reading UI file 'inicio.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INICIO_H
#define UI_INICIO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_inicio
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_usr;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_ctr;
    QPushButton *ingreso;
    QPushButton *Registrarse;

    void setupUi(QWidget *inicio)
    {
        if (inicio->objectName().isEmpty())
            inicio->setObjectName(QStringLiteral("inicio"));
        inicio->resize(357, 336);
        gridLayout = new QGridLayout(inicio);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        groupBox = new QGroupBox(inicio);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setMinimumSize(QSize(100, 100));
        groupBox->setTabletTracking(false);
        horizontalLayoutWidget = new QWidget(groupBox);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(20, 30, 291, 70));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        lineEdit_usr = new QLineEdit(horizontalLayoutWidget);
        lineEdit_usr->setObjectName(QStringLiteral("lineEdit_usr"));

        horizontalLayout->addWidget(lineEdit_usr);

        horizontalLayoutWidget_2 = new QWidget(groupBox);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(20, 120, 291, 70));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(horizontalLayoutWidget_2);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lineEdit_ctr = new QLineEdit(horizontalLayoutWidget_2);
        lineEdit_ctr->setObjectName(QStringLiteral("lineEdit_ctr"));
        lineEdit_ctr->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(lineEdit_ctr);


        gridLayout->addWidget(groupBox, 0, 0, 1, 2);

        ingreso = new QPushButton(inicio);
        ingreso->setObjectName(QStringLiteral("ingreso"));

        gridLayout->addWidget(ingreso, 1, 0, 1, 1);

        Registrarse = new QPushButton(inicio);
        Registrarse->setObjectName(QStringLiteral("Registrarse"));

        gridLayout->addWidget(Registrarse, 1, 1, 1, 1);


        retranslateUi(inicio);

        QMetaObject::connectSlotsByName(inicio);
    } // setupUi

    void retranslateUi(QWidget *inicio)
    {
        inicio->setWindowTitle(QApplication::translate("inicio", "Form", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("inicio", "Ingreso de usuario", Q_NULLPTR));
        label->setText(QApplication::translate("inicio", "Usuario:", Q_NULLPTR));
        label_2->setText(QApplication::translate("inicio", "Contrase\303\261a:", Q_NULLPTR));
        ingreso->setText(QApplication::translate("inicio", "Ingreso", Q_NULLPTR));
        Registrarse->setText(QApplication::translate("inicio", "Registrarse", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class inicio: public Ui_inicio {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INICIO_H

/********************************************************************************
** Form generated from reading UI file 'datosentrada_sesion_usr.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATOSENTRADA_SESION_USR_H
#define UI_DATOSENTRADA_SESION_USR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_datosentrada_sesion_usr
{
public:
    QPushButton *ir;
    QGroupBox *groupBox;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_usr;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_ctr;
    QPushButton *Registrar2;

    void setupUi(QWidget *datosentrada_sesion_usr)
    {
        if (datosentrada_sesion_usr->objectName().isEmpty())
            datosentrada_sesion_usr->setObjectName(QStringLiteral("datosentrada_sesion_usr"));
        datosentrada_sesion_usr->resize(353, 330);
        ir = new QPushButton(datosentrada_sesion_usr);
        ir->setObjectName(QStringLiteral("ir"));
        ir->setGeometry(QRect(70, 270, 89, 25));
        groupBox = new QGroupBox(datosentrada_sesion_usr);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(60, 30, 221, 221));
        groupBox->setMinimumSize(QSize(100, 100));
        groupBox->setTabletTracking(false);
        horizontalLayoutWidget = new QWidget(groupBox);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(20, 30, 160, 70));
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
        horizontalLayoutWidget_2->setGeometry(QRect(20, 120, 160, 70));
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

        Registrar2 = new QPushButton(datosentrada_sesion_usr);
        Registrar2->setObjectName(QStringLiteral("Registrar2"));
        Registrar2->setGeometry(QRect(190, 270, 89, 25));

        retranslateUi(datosentrada_sesion_usr);

        QMetaObject::connectSlotsByName(datosentrada_sesion_usr);
    } // setupUi

    void retranslateUi(QWidget *datosentrada_sesion_usr)
    {
        datosentrada_sesion_usr->setWindowTitle(QApplication::translate("datosentrada_sesion_usr", "Confirmar sesion", Q_NULLPTR));
        ir->setText(QApplication::translate("datosentrada_sesion_usr", "Ingreso", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("datosentrada_sesion_usr", "Ingreso de usuario", Q_NULLPTR));
        label->setText(QApplication::translate("datosentrada_sesion_usr", "Usuario:", Q_NULLPTR));
        label_2->setText(QApplication::translate("datosentrada_sesion_usr", "Contrase\303\261a:", Q_NULLPTR));
        Registrar2->setText(QApplication::translate("datosentrada_sesion_usr", "Registrarse", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class datosentrada_sesion_usr: public Ui_datosentrada_sesion_usr {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATOSENTRADA_SESION_USR_H

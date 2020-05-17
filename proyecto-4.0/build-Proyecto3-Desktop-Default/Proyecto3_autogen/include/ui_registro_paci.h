/********************************************************************************
** Form generated from reading UI file 'registro_paci.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTRO_PACI_H
#define UI_REGISTRO_PACI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_registro_paci
{
public:
    QPushButton *Registra_paci;
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_6;
    QSpacerItem *horizontalSpacer_6;
    QLineEdit *lineEdit_ingresos;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_9;
    QSpacerItem *horizontalSpacer_8;
    QLineEdit *lineEdit_Gen;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *lineEdit_apellido;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_8;
    QSpacerItem *horizontalSpacer_3;
    QLineEdit *lineEdit_edad;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_7;
    QLineEdit *lineEdit_fn;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_4;
    QLineEdit *lineEdit_ni;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_5;
    QLineEdit *lineEdit_etnia;
    QHBoxLayout *horizontalLayout;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer;
    QLineEdit *lineEdit_nombre;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_10;
    QSpacerItem *horizontalSpacer_9;
    QLineEdit *lineEdit_Dir;

    void setupUi(QDialog *registro_paci)
    {
        if (registro_paci->objectName().isEmpty())
            registro_paci->setObjectName(QStringLiteral("registro_paci"));
        registro_paci->resize(590, 449);
        Registra_paci = new QPushButton(registro_paci);
        Registra_paci->setObjectName(QStringLiteral("Registra_paci"));
        Registra_paci->setGeometry(QRect(480, 410, 89, 25));
        groupBox = new QGroupBox(registro_paci);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(20, 20, 551, 381));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 40, 531, 331));
        gridLayout_2 = new QGridLayout(layoutWidget);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_7->addWidget(label_6);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_6);

        lineEdit_ingresos = new QLineEdit(layoutWidget);
        lineEdit_ingresos->setObjectName(QStringLiteral("lineEdit_ingresos"));
        lineEdit_ingresos->setReadOnly(false);

        horizontalLayout_7->addWidget(lineEdit_ingresos);


        gridLayout_2->addLayout(horizontalLayout_7, 7, 0, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout_8->addWidget(label_9);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_8);

        lineEdit_Gen = new QLineEdit(layoutWidget);
        lineEdit_Gen->setObjectName(QStringLiteral("lineEdit_Gen"));
        lineEdit_Gen->setReadOnly(false);

        horizontalLayout_8->addWidget(lineEdit_Gen);


        gridLayout_2->addLayout(horizontalLayout_8, 6, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        lineEdit_apellido = new QLineEdit(layoutWidget);
        lineEdit_apellido->setObjectName(QStringLiteral("lineEdit_apellido"));
        lineEdit_apellido->setReadOnly(false);

        horizontalLayout_2->addWidget(lineEdit_apellido);


        gridLayout_2->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_3->addWidget(label_8);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        lineEdit_edad = new QLineEdit(layoutWidget);
        lineEdit_edad->setObjectName(QStringLiteral("lineEdit_edad"));
        lineEdit_edad->setReadOnly(false);

        horizontalLayout_3->addWidget(lineEdit_edad);


        gridLayout_2->addLayout(horizontalLayout_3, 2, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_4->addWidget(label_3);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_7);

        lineEdit_fn = new QLineEdit(layoutWidget);
        lineEdit_fn->setObjectName(QStringLiteral("lineEdit_fn"));
        lineEdit_fn->setReadOnly(false);

        horizontalLayout_4->addWidget(lineEdit_fn);


        gridLayout_2->addLayout(horizontalLayout_4, 3, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_5->addWidget(label_4);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);

        lineEdit_ni = new QLineEdit(layoutWidget);
        lineEdit_ni->setObjectName(QStringLiteral("lineEdit_ni"));
        lineEdit_ni->setReadOnly(false);

        horizontalLayout_5->addWidget(lineEdit_ni);


        gridLayout_2->addLayout(horizontalLayout_5, 4, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_6->addWidget(label_5);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_5);

        lineEdit_etnia = new QLineEdit(layoutWidget);
        lineEdit_etnia->setObjectName(QStringLiteral("lineEdit_etnia"));
        lineEdit_etnia->setReadOnly(false);

        horizontalLayout_6->addWidget(lineEdit_etnia);


        gridLayout_2->addLayout(horizontalLayout_6, 5, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout->addWidget(label_7);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        lineEdit_nombre = new QLineEdit(layoutWidget);
        lineEdit_nombre->setObjectName(QStringLiteral("lineEdit_nombre"));
        lineEdit_nombre->setReadOnly(false);

        horizontalLayout->addWidget(lineEdit_nombre);


        gridLayout_2->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_10 = new QLabel(layoutWidget);
        label_10->setObjectName(QStringLiteral("label_10"));

        horizontalLayout_9->addWidget(label_10);

        horizontalSpacer_9 = new QSpacerItem(198, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_9);

        lineEdit_Dir = new QLineEdit(layoutWidget);
        lineEdit_Dir->setObjectName(QStringLiteral("lineEdit_Dir"));
        lineEdit_Dir->setReadOnly(false);

        horizontalLayout_9->addWidget(lineEdit_Dir);


        gridLayout_2->addLayout(horizontalLayout_9, 8, 0, 1, 1);


        retranslateUi(registro_paci);

        QMetaObject::connectSlotsByName(registro_paci);
    } // setupUi

    void retranslateUi(QDialog *registro_paci)
    {
        registro_paci->setWindowTitle(QApplication::translate("registro_paci", "Dialog", Q_NULLPTR));
        Registra_paci->setText(QApplication::translate("registro_paci", "Registrar", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("registro_paci", "Informacion que se debe completar:", Q_NULLPTR));
        label_6->setText(QApplication::translate("registro_paci", "Ingresos (opcional)", Q_NULLPTR));
        label_9->setText(QApplication::translate("registro_paci", "G\303\251nero ", Q_NULLPTR));
        label_2->setText(QApplication::translate("registro_paci", "Apellido", Q_NULLPTR));
        label_8->setText(QApplication::translate("registro_paci", "Edad", Q_NULLPTR));
        label_3->setText(QApplication::translate("registro_paci", "Fecha de nacimiento (AAAA-MM-DD)", Q_NULLPTR));
        label_4->setText(QApplication::translate("registro_paci", "N.I", Q_NULLPTR));
        label_5->setText(QApplication::translate("registro_paci", "Etnia", Q_NULLPTR));
        label_7->setText(QApplication::translate("registro_paci", "Nombre", Q_NULLPTR));
        label_10->setText(QApplication::translate("registro_paci", "Direcci\303\263n", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class registro_paci: public Ui_registro_paci {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTRO_PACI_H

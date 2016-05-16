/********************************************************************************
** Form generated from reading UI file 'admin.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_H
#define UI_ADMIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Admin
{
public:
    QLabel *label;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_NewPerson;
    QPushButton *pushButton_NewSensor;
    QPushButton *pushButton_CheckSensors;

    void setupUi(QWidget *Admin)
    {
        if (Admin->objectName().isEmpty())
            Admin->setObjectName(QStringLiteral("Admin"));
        Admin->resize(400, 300);
        label = new QLabel(Admin);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(80, 40, 271, 20));
        widget = new QWidget(Admin);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(110, 100, 185, 120));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_2->addWidget(label_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        pushButton_NewPerson = new QPushButton(widget);
        pushButton_NewPerson->setObjectName(QStringLiteral("pushButton_NewPerson"));

        verticalLayout->addWidget(pushButton_NewPerson);

        pushButton_NewSensor = new QPushButton(widget);
        pushButton_NewSensor->setObjectName(QStringLiteral("pushButton_NewSensor"));

        verticalLayout->addWidget(pushButton_NewSensor);

        pushButton_CheckSensors = new QPushButton(widget);
        pushButton_CheckSensors->setObjectName(QStringLiteral("pushButton_CheckSensors"));

        verticalLayout->addWidget(pushButton_CheckSensors);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(Admin);

        QMetaObject::connectSlotsByName(Admin);
    } // setupUi

    void retranslateUi(QWidget *Admin)
    {
        Admin->setWindowTitle(QApplication::translate("Admin", "Form", 0));
        label->setText(QApplication::translate("Admin", "Welcome to the ProtoLab admin page!", 0));
        label_2->setText(QApplication::translate("Admin", "What would you like to do?", 0));
        pushButton_NewPerson->setText(QApplication::translate("Admin", "New Person", 0));
        pushButton_NewSensor->setText(QApplication::translate("Admin", "New Sensor", 0));
        pushButton_CheckSensors->setText(QApplication::translate("Admin", "Check Sensors", 0));
    } // retranslateUi

};

namespace Ui {
    class Admin: public Ui_Admin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_H

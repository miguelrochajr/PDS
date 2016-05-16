/********************************************************************************
** Form generated from reading UI file 'Admin.ui'
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
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QLabel *label_welcome;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_WhaTtoDo;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_CheckSensors;
    QPushButton *pushButton_NewPerson;
    QPushButton *pushButton_NewSensor;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(400, 300);
        label_welcome = new QLabel(Dialog);
        label_welcome->setObjectName(QStringLiteral("label_welcome"));
        label_welcome->setGeometry(QRect(70, 30, 261, 17));
        widget = new QWidget(Dialog);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(90, 99, 213, 151));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_WhaTtoDo = new QLabel(widget);
        label_WhaTtoDo->setObjectName(QStringLiteral("label_WhaTtoDo"));

        verticalLayout_2->addWidget(label_WhaTtoDo);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        pushButton_CheckSensors = new QPushButton(widget);
        pushButton_CheckSensors->setObjectName(QStringLiteral("pushButton_CheckSensors"));

        verticalLayout->addWidget(pushButton_CheckSensors);

        pushButton_NewPerson = new QPushButton(widget);
        pushButton_NewPerson->setObjectName(QStringLiteral("pushButton_NewPerson"));

        verticalLayout->addWidget(pushButton_NewPerson);

        pushButton_NewSensor = new QPushButton(widget);
        pushButton_NewSensor->setObjectName(QStringLiteral("pushButton_NewSensor"));

        verticalLayout->addWidget(pushButton_NewSensor);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", 0));
        label_welcome->setText(QApplication::translate("Dialog", "Welcome to the ProtoLab admin page!", 0));
        label_WhaTtoDo->setText(QApplication::translate("Dialog", "    What would you like to do?", 0));
        pushButton_CheckSensors->setText(QApplication::translate("Dialog", "Check Sensors", 0));
        pushButton_NewPerson->setText(QApplication::translate("Dialog", "New Person", 0));
        pushButton_NewSensor->setText(QApplication::translate("Dialog", "New Sensor", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_H

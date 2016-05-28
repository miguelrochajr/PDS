/********************************************************************************
** Form generated from reading UI file 'newsensor.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWSENSOR_H
#define UI_NEWSENSOR_H

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

class Ui_NewSensor
{
public:
    QLabel *label;
    QLineEdit *lineEdit_name;
    QLineEdit *lineEdit_type;
    QLineEdit *lineEdit_level;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButton;
    QLabel *label_5;

    void setupUi(QDialog *NewSensor)
    {
        if (NewSensor->objectName().isEmpty())
            NewSensor->setObjectName(QStringLiteral("NewSensor"));
        NewSensor->resize(400, 339);
        label = new QLabel(NewSensor);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(60, 10, 261, 61));
        lineEdit_name = new QLineEdit(NewSensor);
        lineEdit_name->setObjectName(QStringLiteral("lineEdit_name"));
        lineEdit_name->setGeometry(QRect(50, 120, 291, 27));
        lineEdit_type = new QLineEdit(NewSensor);
        lineEdit_type->setObjectName(QStringLiteral("lineEdit_type"));
        lineEdit_type->setGeometry(QRect(230, 170, 113, 27));
        lineEdit_level = new QLineEdit(NewSensor);
        lineEdit_level->setObjectName(QStringLiteral("lineEdit_level"));
        lineEdit_level->setGeometry(QRect(50, 170, 113, 27));
        label_2 = new QLabel(NewSensor);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(50, 100, 67, 17));
        label_3 = new QLabel(NewSensor);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(50, 150, 67, 17));
        pushButton = new QPushButton(NewSensor);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(130, 270, 121, 41));
        label_5 = new QLabel(NewSensor);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(230, 150, 67, 17));

        retranslateUi(NewSensor);

        QMetaObject::connectSlotsByName(NewSensor);
    } // setupUi

    void retranslateUi(QDialog *NewSensor)
    {
        NewSensor->setWindowTitle(QApplication::translate("NewSensor", "Dialog", 0));
        label->setText(QApplication::translate("NewSensor", "Enter a new sensor into the Database ", 0));
        label_2->setText(QApplication::translate("NewSensor", "Name:", 0));
        label_3->setText(QApplication::translate("NewSensor", "Level", 0));
        pushButton->setText(QApplication::translate("NewSensor", "Save sensor", 0));
        label_5->setText(QApplication::translate("NewSensor", "Tipo", 0));
    } // retranslateUi

};

namespace Ui {
    class NewSensor: public Ui_NewSensor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWSENSOR_H

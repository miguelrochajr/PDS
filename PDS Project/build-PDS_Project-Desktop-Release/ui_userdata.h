/********************************************************************************
** Form generated from reading UI file 'userdata.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERDATA_H
#define UI_USERDATA_H

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

class Ui_UserData
{
public:
    QLineEdit *lineEdit_username;
    QLineEdit *lineEdit_name;
    QLabel *label_email;
    QLineEdit *lineEdit_zip;
    QLineEdit *lineEdit_address;
    QLabel *label_13;
    QLineEdit *lineEdit_birthdate;
    QLabel *label_6;
    QLabel *label_5;
    QLineEdit *lineEdit_city;
    QLineEdit *lineEdit_email;
    QLabel *label_7;
    QLineEdit *lineEdit_telephone;
    QLineEdit *lineEdit_state;
    QLabel *label_4;
    QLabel *label_12;
    QLabel *label_9;
    QLabel *label_8;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton;

    void setupUi(QDialog *UserData)
    {
        if (UserData->objectName().isEmpty())
            UserData->setObjectName(QStringLiteral("UserData"));
        UserData->resize(593, 682);
        lineEdit_username = new QLineEdit(UserData);
        lineEdit_username->setObjectName(QStringLiteral("lineEdit_username"));
        lineEdit_username->setGeometry(QRect(100, 200, 141, 27));
        lineEdit_name = new QLineEdit(UserData);
        lineEdit_name->setObjectName(QStringLiteral("lineEdit_name"));
        lineEdit_name->setGeometry(QRect(100, 270, 401, 27));
        label_email = new QLabel(UserData);
        label_email->setObjectName(QStringLiteral("label_email"));
        label_email->setGeometry(QRect(100, 490, 67, 17));
        lineEdit_zip = new QLineEdit(UserData);
        lineEdit_zip->setObjectName(QStringLiteral("lineEdit_zip"));
        lineEdit_zip->setGeometry(QRect(100, 390, 111, 27));
        lineEdit_address = new QLineEdit(UserData);
        lineEdit_address->setObjectName(QStringLiteral("lineEdit_address"));
        lineEdit_address->setGeometry(QRect(100, 330, 401, 27));
        label_13 = new QLabel(UserData);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(370, 370, 67, 17));
        lineEdit_birthdate = new QLineEdit(UserData);
        lineEdit_birthdate->setObjectName(QStringLiteral("lineEdit_birthdate"));
        lineEdit_birthdate->setGeometry(QRect(230, 450, 111, 27));
        label_6 = new QLabel(UserData);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(100, 370, 67, 17));
        label_5 = new QLabel(UserData);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(100, 310, 67, 17));
        lineEdit_city = new QLineEdit(UserData);
        lineEdit_city->setObjectName(QStringLiteral("lineEdit_city"));
        lineEdit_city->setGeometry(QRect(370, 390, 131, 27));
        lineEdit_email = new QLineEdit(UserData);
        lineEdit_email->setObjectName(QStringLiteral("lineEdit_email"));
        lineEdit_email->setGeometry(QRect(100, 510, 401, 31));
        label_7 = new QLabel(UserData);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(100, 430, 81, 17));
        lineEdit_telephone = new QLineEdit(UserData);
        lineEdit_telephone->setObjectName(QStringLiteral("lineEdit_telephone"));
        lineEdit_telephone->setGeometry(QRect(100, 450, 111, 27));
        lineEdit_state = new QLineEdit(UserData);
        lineEdit_state->setObjectName(QStringLiteral("lineEdit_state"));
        lineEdit_state->setGeometry(QRect(230, 390, 111, 27));
        label_4 = new QLabel(UserData);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(100, 250, 67, 17));
        label_12 = new QLabel(UserData);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(230, 370, 67, 17));
        label_9 = new QLabel(UserData);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(100, 180, 81, 17));
        label_8 = new QLabel(UserData);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(230, 430, 67, 17));
        label = new QLabel(UserData);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(230, 30, 141, 51));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        label_2 = new QLabel(UserData);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(190, 90, 231, 41));
        pushButton = new QPushButton(UserData);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(240, 600, 99, 27));

        retranslateUi(UserData);
        QObject::connect(pushButton, SIGNAL(clicked()), UserData, SLOT(close()));

        QMetaObject::connectSlotsByName(UserData);
    } // setupUi

    void retranslateUi(QDialog *UserData)
    {
        UserData->setWindowTitle(QApplication::translate("UserData", "Dialog", 0));
#ifndef QT_NO_STATUSTIP
        lineEdit_username->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
        label_email->setText(QApplication::translate("UserData", "email:", 0));
        label_13->setText(QApplication::translate("UserData", "City:", 0));
#ifndef QT_NO_STATUSTIP
        lineEdit_birthdate->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
        label_6->setText(QApplication::translate("UserData", "ZIP Code:", 0));
        label_5->setText(QApplication::translate("UserData", "Address:", 0));
#ifndef QT_NO_STATUSTIP
        lineEdit_email->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
        label_7->setText(QApplication::translate("UserData", "Telephone", 0));
        label_4->setText(QApplication::translate("UserData", "Name:", 0));
        label_12->setText(QApplication::translate("UserData", "State:", 0));
        label_9->setText(QApplication::translate("UserData", "Username:", 0));
        label_8->setText(QApplication::translate("UserData", "Birth date:", 0));
        label->setText(QApplication::translate("UserData", "Hey, dude!", 0));
        label_2->setText(QApplication::translate("UserData", "Be careful! This is sensitive data", 0));
        pushButton->setText(QApplication::translate("UserData", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class UserData: public Ui_UserData {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERDATA_H

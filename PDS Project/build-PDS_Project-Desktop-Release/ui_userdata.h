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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_UserData
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QTableView *tableView;

    void setupUi(QDialog *UserData)
    {
        if (UserData->objectName().isEmpty())
            UserData->setObjectName(QStringLiteral("UserData"));
        UserData->resize(593, 389);
        label = new QLabel(UserData);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(170, 20, 261, 51));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        pushButton = new QPushButton(UserData);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(240, 340, 99, 27));
        tableView = new QTableView(UserData);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(20, 90, 551, 221));

        retranslateUi(UserData);
        QObject::connect(pushButton, SIGNAL(clicked()), UserData, SLOT(close()));

        QMetaObject::connectSlotsByName(UserData);
    } // setupUi

    void retranslateUi(QDialog *UserData)
    {
        UserData->setWindowTitle(QApplication::translate("UserData", "Dialog", 0));
        label->setText(QApplication::translate("UserData", "Sensor Informations", 0));
        pushButton->setText(QApplication::translate("UserData", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class UserData: public Ui_UserData {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERDATA_H

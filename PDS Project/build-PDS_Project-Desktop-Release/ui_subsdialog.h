/********************************************************************************
** Form generated from reading UI file 'subsdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUBSDIALOG_H
#define UI_SUBSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SubsDialog
{
public:
    QLabel *label_header;
    QLineEdit *lineEdit_name;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *lineEdit_address;
    QLabel *label_6;
    QLineEdit *lineEdit_zip;
    QLabel *label_7;
    QLineEdit *lineEdit_telephone;
    QLabel *label_8;
    QLineEdit *lineEdit_birthdate;
    QLabel *label_9;
    QLineEdit *lineEdit_username;
    QLabel *label_email;
    QLineEdit *lineEdit_email;
    QLabel *label_11;
    QLineEdit *lineEdit_password;
    QLabel *label_12;
    QLineEdit *lineEdit_state;
    QLabel *label_13;
    QLineEdit *lineEdit_city;
    QPushButton *pushButton_Signup;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit_photo;
    QLabel *label_10;

    void setupUi(QDialog *SubsDialog)
    {
        if (SubsDialog->objectName().isEmpty())
            SubsDialog->setObjectName(QStringLiteral("SubsDialog"));
        SubsDialog->resize(620, 650);
        label_header = new QLabel(SubsDialog);
        label_header->setObjectName(QStringLiteral("label_header"));
        label_header->setGeometry(QRect(260, 20, 101, 51));
        QFont font;
        font.setPointSize(20);
        label_header->setFont(font);
        lineEdit_name = new QLineEdit(SubsDialog);
        lineEdit_name->setObjectName(QStringLiteral("lineEdit_name"));
        lineEdit_name->setGeometry(QRect(100, 290, 401, 27));
        label_4 = new QLabel(SubsDialog);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(100, 270, 67, 17));
        label_5 = new QLabel(SubsDialog);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(100, 330, 67, 17));
        lineEdit_address = new QLineEdit(SubsDialog);
        lineEdit_address->setObjectName(QStringLiteral("lineEdit_address"));
        lineEdit_address->setGeometry(QRect(100, 350, 401, 27));
        label_6 = new QLabel(SubsDialog);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(100, 390, 67, 17));
        lineEdit_zip = new QLineEdit(SubsDialog);
        lineEdit_zip->setObjectName(QStringLiteral("lineEdit_zip"));
        lineEdit_zip->setGeometry(QRect(100, 410, 111, 27));
        label_7 = new QLabel(SubsDialog);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(100, 450, 81, 17));
        lineEdit_telephone = new QLineEdit(SubsDialog);
        lineEdit_telephone->setObjectName(QStringLiteral("lineEdit_telephone"));
        lineEdit_telephone->setGeometry(QRect(100, 470, 111, 27));
        label_8 = new QLabel(SubsDialog);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(230, 450, 67, 17));
        lineEdit_birthdate = new QLineEdit(SubsDialog);
        lineEdit_birthdate->setObjectName(QStringLiteral("lineEdit_birthdate"));
        lineEdit_birthdate->setGeometry(QRect(230, 470, 111, 27));
        label_9 = new QLabel(SubsDialog);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(100, 160, 81, 17));
        lineEdit_username = new QLineEdit(SubsDialog);
        lineEdit_username->setObjectName(QStringLiteral("lineEdit_username"));
        lineEdit_username->setGeometry(QRect(100, 180, 141, 27));
        label_email = new QLabel(SubsDialog);
        label_email->setObjectName(QStringLiteral("label_email"));
        label_email->setGeometry(QRect(100, 510, 67, 17));
        lineEdit_email = new QLineEdit(SubsDialog);
        lineEdit_email->setObjectName(QStringLiteral("lineEdit_email"));
        lineEdit_email->setGeometry(QRect(100, 530, 401, 31));
        label_11 = new QLabel(SubsDialog);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(340, 160, 81, 17));
        lineEdit_password = new QLineEdit(SubsDialog);
        lineEdit_password->setObjectName(QStringLiteral("lineEdit_password"));
        lineEdit_password->setGeometry(QRect(340, 180, 161, 27));
        lineEdit_password->setEchoMode(QLineEdit::PasswordEchoOnEdit);
        label_12 = new QLabel(SubsDialog);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(230, 390, 67, 17));
        lineEdit_state = new QLineEdit(SubsDialog);
        lineEdit_state->setObjectName(QStringLiteral("lineEdit_state"));
        lineEdit_state->setGeometry(QRect(230, 410, 111, 27));
        label_13 = new QLabel(SubsDialog);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(370, 390, 67, 17));
        lineEdit_city = new QLineEdit(SubsDialog);
        lineEdit_city->setObjectName(QStringLiteral("lineEdit_city"));
        lineEdit_city->setGeometry(QRect(370, 410, 131, 27));
        pushButton_Signup = new QPushButton(SubsDialog);
        pushButton_Signup->setObjectName(QStringLiteral("pushButton_Signup"));
        pushButton_Signup->setGeometry(QRect(220, 590, 161, 41));
        QFont font1;
        font1.setPointSize(18);
        font1.setBold(true);
        font1.setWeight(75);
        font1.setStrikeOut(false);
        font1.setKerning(true);
        pushButton_Signup->setFont(font1);
        pushButton_Signup->setFlat(false);
        layoutWidget = new QWidget(SubsDialog);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(170, 70, 289, 42));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAcceptDrops(false);

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);

        lineEdit_photo = new QLineEdit(SubsDialog);
        lineEdit_photo->setObjectName(QStringLiteral("lineEdit_photo"));
        lineEdit_photo->setGeometry(QRect(100, 230, 401, 27));
        label_10 = new QLabel(SubsDialog);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(100, 210, 161, 17));
        QWidget::setTabOrder(lineEdit_username, lineEdit_password);
        QWidget::setTabOrder(lineEdit_password, lineEdit_name);
        QWidget::setTabOrder(lineEdit_name, lineEdit_address);
        QWidget::setTabOrder(lineEdit_address, lineEdit_zip);
        QWidget::setTabOrder(lineEdit_zip, lineEdit_state);
        QWidget::setTabOrder(lineEdit_state, lineEdit_city);
        QWidget::setTabOrder(lineEdit_city, lineEdit_telephone);
        QWidget::setTabOrder(lineEdit_telephone, lineEdit_birthdate);
        QWidget::setTabOrder(lineEdit_birthdate, lineEdit_email);
        QWidget::setTabOrder(lineEdit_email, pushButton_Signup);

        retranslateUi(SubsDialog);

        QMetaObject::connectSlotsByName(SubsDialog);
    } // setupUi

    void retranslateUi(QDialog *SubsDialog)
    {
        SubsDialog->setWindowTitle(QApplication::translate("SubsDialog", "Dialog", 0));
        label_header->setText(QApplication::translate("SubsDialog", "Sign up!", 0));
        label_4->setText(QApplication::translate("SubsDialog", "Name:", 0));
        label_5->setText(QApplication::translate("SubsDialog", "Address:", 0));
        label_6->setText(QApplication::translate("SubsDialog", "ZIP Code:", 0));
        label_7->setText(QApplication::translate("SubsDialog", "Telephone", 0));
        label_8->setText(QApplication::translate("SubsDialog", "Birth date:", 0));
#ifndef QT_NO_STATUSTIP
        lineEdit_birthdate->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
        label_9->setText(QApplication::translate("SubsDialog", "Username:", 0));
#ifndef QT_NO_STATUSTIP
        lineEdit_username->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
        label_email->setText(QApplication::translate("SubsDialog", "email:", 0));
#ifndef QT_NO_STATUSTIP
        lineEdit_email->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
        label_11->setText(QApplication::translate("SubsDialog", "Password:", 0));
#ifndef QT_NO_STATUSTIP
        lineEdit_password->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
        label_12->setText(QApplication::translate("SubsDialog", "State:", 0));
        label_13->setText(QApplication::translate("SubsDialog", "City:", 0));
        pushButton_Signup->setText(QApplication::translate("SubsDialog", "Sign me up!", 0));
        label_2->setText(QApplication::translate("SubsDialog", "And get access to your home informations", 0));
        label_3->setText(QApplication::translate("SubsDialog", "               from wherever you are!", 0));
        lineEdit_photo->setText(QString());
        label_10->setText(QApplication::translate("SubsDialog", "Photo(Path to the file):", 0));
    } // retranslateUi

};

namespace Ui {
    class SubsDialog: public Ui_SubsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUBSDIALOG_H

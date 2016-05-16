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
    QLabel *label_5;
    QLineEdit *lineEdit_level;
    QLabel *label_9;
    QLineEdit *lineEdit_username;
    QLabel *label_11;
    QLineEdit *lineEdit_password;
    QPushButton *pushButton_Signup;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_10;
    QLabel *label_db_status;

    void setupUi(QDialog *SubsDialog)
    {
        if (SubsDialog->objectName().isEmpty())
            SubsDialog->setObjectName(QStringLiteral("SubsDialog"));
        SubsDialog->resize(620, 671);
        label_header = new QLabel(SubsDialog);
        label_header->setObjectName(QStringLiteral("label_header"));
        label_header->setGeometry(QRect(260, 20, 101, 51));
        QFont font;
        font.setPointSize(20);
        label_header->setFont(font);
        label_5 = new QLabel(SubsDialog);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(110, 280, 67, 17));
        lineEdit_level = new QLineEdit(SubsDialog);
        lineEdit_level->setObjectName(QStringLiteral("lineEdit_level"));
        lineEdit_level->setGeometry(QRect(110, 310, 401, 27));
        label_9 = new QLabel(SubsDialog);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(100, 160, 81, 17));
        lineEdit_username = new QLineEdit(SubsDialog);
        lineEdit_username->setObjectName(QStringLiteral("lineEdit_username"));
        lineEdit_username->setGeometry(QRect(100, 180, 141, 27));
        label_11 = new QLabel(SubsDialog);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(340, 160, 81, 17));
        lineEdit_password = new QLineEdit(SubsDialog);
        lineEdit_password->setObjectName(QStringLiteral("lineEdit_password"));
        lineEdit_password->setGeometry(QRect(340, 180, 161, 27));
        lineEdit_password->setEchoMode(QLineEdit::PasswordEchoOnEdit);
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
        pushButton_Signup->setDefault(true);
        pushButton_Signup->setFlat(true);
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

        label_10 = new QLabel(SubsDialog);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(100, 210, 161, 17));
        label_db_status = new QLabel(SubsDialog);
        label_db_status->setObjectName(QStringLiteral("label_db_status"));
        label_db_status->setGeometry(QRect(10, 650, 241, 17));
        QWidget::setTabOrder(lineEdit_username, lineEdit_password);
        QWidget::setTabOrder(lineEdit_password, lineEdit_level);
        QWidget::setTabOrder(lineEdit_level, pushButton_Signup);

        retranslateUi(SubsDialog);

        QMetaObject::connectSlotsByName(SubsDialog);
    } // setupUi

    void retranslateUi(QDialog *SubsDialog)
    {
        SubsDialog->setWindowTitle(QApplication::translate("SubsDialog", "Dialog", 0));
        label_header->setText(QApplication::translate("SubsDialog", "Sign up!", 0));
        label_5->setText(QApplication::translate("SubsDialog", "Nivel", 0));
        label_9->setText(QApplication::translate("SubsDialog", "Username:", 0));
#ifndef QT_NO_STATUSTIP
        lineEdit_username->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
        label_11->setText(QApplication::translate("SubsDialog", "Password:", 0));
#ifndef QT_NO_STATUSTIP
        lineEdit_password->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
        pushButton_Signup->setText(QApplication::translate("SubsDialog", "Sign me up!", 0));
        label_2->setText(QApplication::translate("SubsDialog", "And get access to your home informations", 0));
        label_3->setText(QApplication::translate("SubsDialog", "               from wherever you are!", 0));
        label_10->setText(QApplication::translate("SubsDialog", "Photo(Path to the file):", 0));
        label_db_status->setText(QApplication::translate("SubsDialog", "[+]DB Status", 0));
    } // retranslateUi

};

namespace Ui {
    class SubsDialog: public Ui_SubsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUBSDIALOG_H

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
#include <QtWidgets/QGridLayout>
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
    QLabel *label_db_status;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label_9;
    QLabel *label_11;
    QLineEdit *lineEdit_username;
    QLineEdit *lineEdit_password;
    QLabel *label_5;
    QLineEdit *lineEdit_level;
    QPushButton *pushButton_Signup;

    void setupUi(QDialog *SubsDialog)
    {
        if (SubsDialog->objectName().isEmpty())
            SubsDialog->setObjectName(QStringLiteral("SubsDialog"));
        SubsDialog->resize(585, 403);
        label_header = new QLabel(SubsDialog);
        label_header->setObjectName(QStringLiteral("label_header"));
        label_header->setGeometry(QRect(180, 50, 231, 51));
        QFont font;
        font.setPointSize(20);
        label_header->setFont(font);
        label_db_status = new QLabel(SubsDialog);
        label_db_status->setObjectName(QStringLiteral("label_db_status"));
        label_db_status->setGeometry(QRect(30, 360, 241, 17));
        widget = new QWidget(SubsDialog);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(140, 160, 302, 154));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_9 = new QLabel(widget);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout->addWidget(label_9, 0, 0, 1, 1);

        label_11 = new QLabel(widget);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout->addWidget(label_11, 0, 1, 1, 1);

        lineEdit_username = new QLineEdit(widget);
        lineEdit_username->setObjectName(QStringLiteral("lineEdit_username"));

        gridLayout->addWidget(lineEdit_username, 1, 0, 1, 1);

        lineEdit_password = new QLineEdit(widget);
        lineEdit_password->setObjectName(QStringLiteral("lineEdit_password"));
        lineEdit_password->setEchoMode(QLineEdit::PasswordEchoOnEdit);

        gridLayout->addWidget(lineEdit_password, 1, 1, 1, 1);

        label_5 = new QLabel(widget);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 2, 0, 1, 1);

        lineEdit_level = new QLineEdit(widget);
        lineEdit_level->setObjectName(QStringLiteral("lineEdit_level"));

        gridLayout->addWidget(lineEdit_level, 3, 0, 1, 2);


        verticalLayout->addLayout(gridLayout);

        pushButton_Signup = new QPushButton(widget);
        pushButton_Signup->setObjectName(QStringLiteral("pushButton_Signup"));
        QFont font1;
        font1.setPointSize(18);
        font1.setBold(true);
        font1.setWeight(75);
        font1.setStrikeOut(false);
        font1.setKerning(true);
        pushButton_Signup->setFont(font1);
        pushButton_Signup->setDefault(true);
        pushButton_Signup->setFlat(true);

        verticalLayout->addWidget(pushButton_Signup);

        QWidget::setTabOrder(lineEdit_username, lineEdit_password);
        QWidget::setTabOrder(lineEdit_password, lineEdit_level);
        QWidget::setTabOrder(lineEdit_level, pushButton_Signup);

        retranslateUi(SubsDialog);

        QMetaObject::connectSlotsByName(SubsDialog);
    } // setupUi

    void retranslateUi(QDialog *SubsDialog)
    {
        SubsDialog->setWindowTitle(QApplication::translate("SubsDialog", "Dialog", 0));
        label_header->setText(QApplication::translate("SubsDialog", "Add a new Person", 0));
        label_db_status->setText(QApplication::translate("SubsDialog", "[+]DB Status", 0));
        label_9->setText(QApplication::translate("SubsDialog", "Username:", 0));
        label_11->setText(QApplication::translate("SubsDialog", "Password:", 0));
#ifndef QT_NO_STATUSTIP
        lineEdit_username->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_STATUSTIP
        lineEdit_password->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
        label_5->setText(QApplication::translate("SubsDialog", "Nivel", 0));
        pushButton_Signup->setText(QApplication::translate("SubsDialog", "Save it!", 0));
    } // retranslateUi

};

namespace Ui {
    class SubsDialog: public Ui_SubsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUBSDIALOG_H

#include "admin.h"
#include "ui_admin.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "subsdialog.h"
#include "userdata.h"
#include "newsensor.h"

Admin::Admin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Admin)
{
    ui->setupUi(this);
QWidget:setGeometry(
    QStyle::alignedRect(
        Qt::LeftToRight,
        Qt::AlignCenter,
        QWidget::size(),
        qApp->desktop()->availableGeometry())
            );
    QWidget::setWindowTitle("ProtoLAB Admin page");
}

Admin::~Admin()
{
    delete ui;
}

void Admin::on_pushButton_NewPerson_clicked()
{
    SubsDialog mDialog(this);
    this->hide();
    mDialog.setModal(true);
    mDialog.exec();
    this->show();
}

void Admin::on_pushButton_NewSensor_clicked()
{
    NewSensor mDialog(this);
    this->hide();
    mDialog.setModal(true);
    mDialog.exec();
    this->show();
}

void Admin::on_pushButton_CheckSensors_clicked()
{
    UserData mDialog(this);
    this->hide();
    //mDialog.setModal(true);
    mDialog.exec();
    this->show();
}

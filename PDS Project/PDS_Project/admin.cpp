#include "admin.h"
#include "ui_admin.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "subsdialog.h"
#include "userdata.h"

Admin::Admin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Admin)
{
    ui->setupUi(this);
}

Admin::~Admin()
{
    delete ui;
}

void Admin::on_pushButton_NewPerson_clicked()
{
    SubsDialog mDialog;
    this->hide();
    mDialog.setModal(true);
    mDialog.exec();
    this->show();
}

void Admin::on_pushButton_NewSensor_clicked()
{

}

void Admin::on_pushButton_CheckSensors_clicked()
{
    UserData mDialog(this);
    mDialog.setModal(true);
    mDialog.exec();
}

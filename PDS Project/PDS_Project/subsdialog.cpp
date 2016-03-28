#include "subsdialog.h"
#include "ui_subsdialog.h"
#include <QtCore>
#include <QtGui>
#include <QDialog>
#include <QtCore/QCoreApplication>
#include <QFile>
#include <QString>
#include <QDebug>
#include <QTextStream>
#include <QIODevice>
#include <QtWidgets>



SubsDialog::SubsDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SubsDialog)
{
    ui->setupUi(this);
}

SubsDialog::~SubsDialog()
{
    delete ui;
}

bool SubsDialog::AlreadyInserted(QString Filename, QString username){

    bool flag = 0;
    QFile mFile(Filename);
    QTextStream stream(&mFile);
    QString line;

    if(!mFile.open(QFile::ReadOnly | QFile::Text)){
        return 1;
    }

    do
    {
        line = stream.readLine();
        QStringList parts = line.split("*");
        if (parts[0] == username){
            flag = 1;
            break;
        }

    }while (!line.isNull());
    mFile.flush();
    mFile.close();

    return flag;
}

void SubsDialog::on_pushButton_Signup_clicked()
{
    QString username, password, name, address, zip, state, city, telephone, birthdate, email;

    /*Assigning current entitites*/
    username = ui->lineEdit_username->text();
    password = ui->lineEdit_password->text();
    name = ui->lineEdit_name->text();
    address = ui->lineEdit_address->text();
    zip = ui->lineEdit_zip->text();
    state = ui->lineEdit_state->text();
    city = ui->lineEdit_state->text();
    telephone  = ui->lineEdit_telephone->text();
    birthdate  = ui->lineEdit_birthdate->text();
    email  = ui->lineEdit_email->text();

    if(!AlreadyInserted(mFilename, username))
    {
        SubsDialog::Write(mFilename,username, password, name, address, zip, state, city, telephone, birthdate, email);
    }
    else{
        QMessageBox::warning(this, "Woops!","Username already exists! Try another one." );
    }
    SubsDialog::Read(mFilename);
}

void SubsDialog::Write(QString Filename,QString username,QString password,QString name,QString address,QString zip,QString state,QString city,QString telephone,QString birthdate,QString email)
{
    QFile mFile(Filename);
    QString myData;

    myData = username + "*" + password + "*" + name + "*" + address + "*" + zip + "*" + state
            + "*" + city + "*" + telephone + "*" + birthdate + "*" + email + " \n";

    mFile.open(QIODevice::Append); //inserts at the last line

    if(!mFile.isOpen()){
        qDebug() << "Could not open the file for writing.\n";
        return;
    }

    QTextStream out(&mFile);
    out << myData;

    mFile.flush();
    mFile.close();
}

void SubsDialog::Read(QString Filename)
{
    QFile mFile(Filename);

    if(!mFile.open(QFile::ReadOnly | QFile::Text)){
        qDebug() << "Could not open the file for reading.\n";
        return;
    }

    QTextStream in(&mFile);
    QString mText = in.readAll();

    qDebug() << mText;

}

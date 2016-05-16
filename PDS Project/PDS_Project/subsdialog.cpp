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
#include <iostream>
#include <stdlib.h>
#include <opencv2/opencv.hpp>
#include <opencv/cv.h>
#include <highgui.h>



SubsDialog::SubsDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SubsDialog)
{
    ui->setupUi(this);
    MainWindow conn;
    if(conn.connOpen())
        ui->label_db_status->setText("Database is connected!");
    else
        ui->label_db_status->setText("Fail to open database!");
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
    MainWindow conn;
    QString username, password, name, address, zip, state, city, telephone, birthdate, email, photo;

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
    photo = ui->lineEdit_photo->text();

    if(!conn.connOpen()){
        qDebug() << "Fail to open database! \n";
        return;
    }

    conn.connOpen(); //Opens the object
    QSqlQuery qry;
    qry.prepare("insert into Login (Name, Username, Password, Address, ZIP, City, State, BirthDay, Telephone, email, picture) values('"+name+"','"+username+"','"+password+"','"+address+"','"+zip+"','"+city+"','"+state+"','"+birthdate+"','"+telephone+"','"+email+"','"+photo+"')");
    //qry.prepare("insert into Login (Name, username) values ('"+name++"','"+username+"')");
    if(qry.exec())
    {
        QMessageBox::critical(this, "Congratulations!","The informations have been Saved!" );
        conn.connClose();
        this->close();
    }
    else{
        QMessageBox::warning(this, "Error", qry.lastError().text());
    }
}

void SubsDialog::Write(QString Filename,QString username,QString password,QString name,QString address,QString zip,QString state,QString city,QString telephone,QString birthdate,QString email, QString photo)
{
    QFile mFile(Filename);
    QString myData;

    myData = username + "*" + password + "*" + name + "*" + address + "*" + zip + "*" + state
            + "*" + city + "*" + telephone + "*" + birthdate + "*" + email + "*" + photo +"*\n";

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

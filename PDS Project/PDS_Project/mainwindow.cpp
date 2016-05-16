#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "subsdialog.h"
#include "userdata.h"

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


bool MainWindow::AlreadyInserted(QString Filename, QString username){

    bool flag = 0; //assume the name does not exists
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
        if (parts[0] == username)//found the username
        {
            flag = 1;
            break;
        }

    }while (!line.isNull());
    mFile.flush();
    mFile.close();

    return flag; //if flag =1, the name exists
}

bool MainWindow::Check_Password(QString Filename, QString username, QString password){

    bool flag = 0; // First assume the password is wrong

    QFile mFile(Filename);
    QTextStream stream(&mFile);
    QString line;
    QStringList parts;

    if(!mFile.open(QFile::ReadOnly | QFile::Text)){
        return 1;
    }

    do
    {
        line = stream.readLine();
        parts = line.split("*");
        if (parts[0] == username)//Found a line for that username
        {
            break;
        }
    }while (!line.isNull());

    if(parts[1]==password){
        flag=1; //The password matches!
    }
    else{
        flag=0;
    }
    mFile.flush();
    mFile.close();

    return flag;
}

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    if(connOpen())
        ui->label_dbstatus->setText("Database is connected!");
    else
        ui->label_dbstatus->setText("Fail to open database!");
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_signup_clicked()
{
    SubsDialog mDialog;
    this->hide();
    mDialog.setModal(true);
    mDialog.exec();
    this->show();
}

void MainWindow::on_pushButton_signin_clicked()
{
    QString username, password;
    username = ui->lineEdit_username->text();
    password = ui->lineEdit_password->text();

    if(!connOpen()){
        qDebug() << "Failed to open database" << endl;
        return;
    }

    connOpen(); //Opens the object
    QSqlQuery qry;
    qry.prepare("select * from Login where username='" + username +"' and password='"+password+"'");

    if(qry.exec())
    {
        int count=0;
        while(qry.next())
        {
            count++;
        }
        if(count==1)
        {
            connClose();//close the connection to the database
            this->hide();
            UserData mDialog(this, username);
            mDialog.setModal(true);
            mDialog.exec();
        }
        else if(count<1 || count>1)
        {
            QMessageBox::warning(this, "Woops!","The password or the username does not match!" );
        }
    }
}

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
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_signup_clicked()
{
    SubsDialog mDialog;
    mDialog.setModal(true);
    mDialog.exec();
}

void MainWindow::on_pushButton_signin_clicked()
{
    QString username, password;
    username = ui->lineEdit_username->text();
    password = ui->lineEdit_password->text();
    bool flag = 0;

    if(!AlreadyInserted(mFilename, username))
    {
        QMessageBox::warning(this, "Woops!","Username does not exists!" );
    }
    else if(Check_Password(mFilename, username, password))
    {
        UserData mDialog(0,username);
        mDialog.setModal(true);
        mDialog.exec();
    }
    else{
        QMessageBox::warning(this, "Woops!","The password or the username does not match!" );
    }
}

#include "newsensor.h"
#include "ui_newsensor.h"
#include "mainwindow.h"
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


NewSensor::NewSensor(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NewSensor)
{
    ui->setupUi(this);
}

NewSensor::~NewSensor()
{
    delete ui;
}

void NewSensor::on_pushButton_clicked()
{
    MainWindow conn;
    QString type, level, name;

    /*Assigning current entitites*/
    type = ui->lineEdit_type->text();
    level = ui->lineEdit_level->text();
    name = ui->lineEdit_name->text();

    if(!conn.connOpen()){
        qDebug() << "Fail to open database! \n";
        return;
    }

    conn.connOpen(); //Opens the object
    QSqlQuery qry;
    qry.prepare("insert into Sensor (name, tipo, level) values ('"+name+"', '"+level+"', '"+type+"')");
    if(qry.exec())
    {
        QMessageBox::information(this, "Congratulations!","The informations have been Saved!" );
        conn.connClose();
        this->close();
    }
    else{
        QMessageBox::warning(this, "Error", qry.lastError().text());
    }
}

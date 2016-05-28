#include "userdata.h"
#include "ui_userdata.h"
#include "mainwindow.h"

UserData::UserData(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::UserData)
{
    ui->setupUi(this);
    MainWindow conn;
    QString username = "msrj";
    QSqlQueryModel *modal = new QSqlQueryModel();
    QSqlQueryModel *modal2 = new QSqlQueryModel();

    conn.connOpen();
    QSqlQuery* qry = new QSqlQuery(conn.mydb);
    QSqlQuery* qry2 = new QSqlQuery(conn.mydb);
    qry->prepare("select * from Sensor");
    qry->exec();
    modal->setQuery(*qry);
    ui->tableView->setModel(modal);

//    QString photo = modal->record(0).value(10).toString(); //get the image path
//    QPixmap pix(photo);
//    pix = pix.scaled(QSize(120,120), Qt::KeepAspectRatio);
//    ui->label_picture->setPixmap(pix);
    conn.close();
}

UserData::~UserData()
{
    delete ui;
}

void UserData::on_pushButton_clicked()
{

}

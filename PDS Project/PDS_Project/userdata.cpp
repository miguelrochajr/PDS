#include "userdata.h"
#include "ui_userdata.h"

UserData::UserData(QWidget *parent, QString usrname) :
    QDialog(parent),
    ui(new Ui::UserData)
{
    ui->setupUi(this);
    username = usrname;

    QFile mFile(mFilename);
    QTextStream stream(&mFile);
    QString line;
    QStringList parts;

    if(!mFile.open(QFile::ReadOnly | QFile::Text)){
        qDebug() << "Could not open the file";
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

    mFile.flush();
    mFile.close();

    qDebug() << parts[10];

    QPixmap pix(parts[10]);
    pix = pix.scaled(QSize(120,120), Qt::KeepAspectRatio);

    ui->lineEdit_username->setText(parts[0]);
    ui->lineEdit_name->setText(parts[2]);
    ui->lineEdit_address->setText(parts[3]);
    ui->lineEdit_zip->setText(parts[4]);
    ui->lineEdit_state->setText(parts[5]);
    ui->lineEdit_city->setText(parts[6]);
    ui->lineEdit_telephone->setText(parts[7]);
    ui->lineEdit_birthdate->setText(parts[8]);
    ui->lineEdit_email->setText(parts[9]);
    ui->label_picture->setPixmap(pix);
}

UserData::~UserData()
{
    delete ui;
}



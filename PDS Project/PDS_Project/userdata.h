#ifndef USERDATA_H
#define USERDATA_H

#include <QDialog>
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

namespace Ui {
class UserData;
}

class UserData : public QDialog
{
    Q_OBJECT

public:
    explicit UserData(QWidget *parent = 0, QString usrname = "none");
    ~UserData();
private:
    Ui::UserData *ui;
    QString username, password, name, address, zip, state, city, telephone, birthdate, email;
    QString mFilename = "/home/msrj/Documents/PDS Project/PDS_Project/database.txt";
};

#endif // USERDATA_H

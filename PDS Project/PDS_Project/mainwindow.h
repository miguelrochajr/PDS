#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtSql>
#include <QDebug>
#include <QFileInfo>
#include "subsdialog.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    QSqlDatabase mydb;
    void connClose()
    {
        mydb.close();
        mydb.removeDatabase(QSqlDatabase::defaultConnection);
    }
    bool connOpen()
    {
        mydb= QSqlDatabase::addDatabase("QSQLITE");
        mydb.setDatabaseName("/home/msrj/Documents/login.sqlite");
        if(mydb.open())
        {
            qDebug() << "Database is connected! \n";
            return true;
        }
        else
        {
            qDebug() << "Fail to open database! \n";
            return false;
        }
    }

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void Read(QString Filename);
    bool AlreadyInserted(QString Filename, QString name);
    bool Check_Password(QString Filename, QString name, QString password);

private slots:

    void on_pushButton_signin_clicked();

private:
    Ui::MainWindow *ui;
    QString mFilename = "/home/msrj/Documents/PDS Project/PDS_Project/database.txt";
};

#endif // MAINWINDOW_H

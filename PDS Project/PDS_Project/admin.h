#ifndef ADMIN_H
#define ADMIN_H

#include <QWidget>
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
class Admin;
}

class Admin : public QDialog
{
    Q_OBJECT

public:
    explicit Admin(QWidget *parent = 0);
    ~Admin();

private slots:
    void on_pushButton_NewPerson_clicked();

    void on_pushButton_NewSensor_clicked();

    void on_pushButton_CheckSensors_clicked();

private:
    Ui::Admin *ui;
};

#endif // ADMIN_H

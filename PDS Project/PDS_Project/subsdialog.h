#ifndef SUBSDIALOG_H
#define SUBSDIALOG_H

#include <QtCore>
#include <QtGui>
#include <QDialog>
#include <QtCore/QCoreApplication>
#include <QFile>
#include <QString>
#include <QDebug>
#include <QTextStream>

namespace Ui {
class SubsDialog;
}

class SubsDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SubsDialog(QWidget *parent = 0);
    ~SubsDialog();
    void Write(QString Filename,QString username,QString password,QString name,QString address,QString zip,QString state,QString city,QString telephone,QString birthdate,QString email, QString photo);
    void Read(QString Filename);
    bool AlreadyInserted(QString Filename, QString name);

private slots:
    void on_pushButton_Signup_clicked();

private:
    Ui::SubsDialog *ui;
    QString mFilename = "/home/msrj/Documents/PDS Project/PDS_Project/database.txt";
};

#endif // SUBSDIALOG_H

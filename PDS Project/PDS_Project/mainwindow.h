#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "subsdialog.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void Read(QString Filename);
    bool AlreadyInserted(QString Filename, QString name);
    bool Check_Password(QString Filename, QString name, QString password);

private slots:

    void on_pushButton_signup_clicked();

    void on_pushButton_signin_clicked();

private:
    Ui::MainWindow *ui;
    SubsDialog *mDialog;
    QString mFilename = "/home/msrj/Documents/PDS Project/PDS_Project/database.txt";
};

#endif // MAINWINDOW_H

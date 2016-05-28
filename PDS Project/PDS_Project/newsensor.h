#ifndef NEWSENSOR_H
#define NEWSENSOR_H

#include <QDialog>

namespace Ui {
class NewSensor;
}

class NewSensor : public QDialog
{
    Q_OBJECT

public:
    explicit NewSensor(QWidget *parent = 0);
    ~NewSensor();

private slots:
    void on_pushButton_clicked();

private:
    Ui::NewSensor *ui;
};

#endif // NEWSENSOR_H

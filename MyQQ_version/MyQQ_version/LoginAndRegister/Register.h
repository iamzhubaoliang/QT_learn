#ifndef REGISTER_H
#define REGISTER_H

#include <QWidget>


QT_BEGIN_NAMESPACE
namespace  Ui{

class Register;

}
QT_END_NAMESPACE

class Register:public QWidget
{
    Q_OBJECT
public:
    Register(QWidget *parent=nullptr);
    void setHideWindow(QWidget *widget);
    QWidget *willHide;

    ~Register();
private slots:
    void on_pushButton_clicked();



    void on_selectBtn_clicked();

    void on_regBtn_clicked();

private:
    Ui::Register *ui;
    QString pictureName;

};




#endif // REGISTER_H




#ifndef LOGIN_H
#define LOGIN_H

#include <QWidget>
#include <QSqlDatabase>

QT_BEGIN_NAMESPACE
namespace Ui {
class Login;
             }
QT_END_NAMESPACE

class Register;

class Login : public QWidget
{
    Q_OBJECT

public:
    Login(QWidget *parent = nullptr);
    ~Login();

private:
    Ui::Login *ui;
    Register *uiRegister;



    QPoint m_mousePoin;
    QPoint movePoint;
    bool mousePress;
    QSqlDatabase db;

    void ConnectDatabase();
    int userLogin();


protected:
    void mouseMoveEvent(QMouseEvent *event) ;
    void mousePressEvent(QMouseEvent *event) ;
    void mouseReleaseEvent(QMouseEvent *event) ;

private slots:
    void on_login_clicked();
    void on_pushButton_clicked();
};
#endif // LOGIN_H
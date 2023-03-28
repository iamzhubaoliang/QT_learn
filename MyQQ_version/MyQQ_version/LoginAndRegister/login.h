#ifndef LOGIN_H
#define LOGIN_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlQuery>

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
    QSqlQuery loginRes;

    void ConnectDatabase();
    int userLogin();
    void createUsernameFile();


protected:
    void mouseMoveEvent(QMouseEvent *event) ;
    void mousePressEvent(QMouseEvent *event) ;
    void mouseReleaseEvent(QMouseEvent *event) ;

private slots:
    void on_login_clicked();
    void on_pushButton_clicked();
};
#endif // LOGIN_H

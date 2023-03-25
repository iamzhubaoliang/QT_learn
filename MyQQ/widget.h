#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QSqlDatabase>
QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private:
    Ui::Widget *ui;
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
};
#endif // WIDGET_H

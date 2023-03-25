#include "widget.h"
#include "ui_widget.h"
#include <QPalette>
#include <QStyleFactory>
#include <QFile>

#include <QGraphicsDropShadowEffect>
#include <QColor>
#include <QMouseEvent>
#include <QtDebug>

#include <QtSql/QSqlDatabase>
#include <QMessageBox>
#include <QSqlError>


Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    ui->avatar->setGeometry((ui->topframe->x()+ui->topframe->width())/2-ui->topframe->height()*2/6,
                            (ui->topframe->y()+ui->topframe->height())/2-ui->topframe->height()*2/6,ui->topframe->height()*2/3,ui->topframe->height()*2/3);
    ui->avatar->setStyleSheet(QString("border-radius:%1px;background-color:red;").arg(ui->topframe->height()*2/6));

    this->setWindowFlags(Qt::FramelessWindowHint/*|Qt::WindowStaysOnTopHint*/);
    QFile topFrameStyle(":/qss/topframe.qss");
    topFrameStyle.open(QFile::ReadOnly);
    ui->topframe->setStyleSheet(topFrameStyle.readAll());
    topFrameStyle.close();

    QFile bottomFrameStyle(":/qss/bottomframe.qss");
    bottomFrameStyle.open(QFile::ReadOnly);
    ui->bottomframe->setStyleSheet(bottomFrameStyle.readAll());
    bottomFrameStyle.close();
    ConnectDatabase();


}

/****************************************
 * 鼠标拖动窗口事件开始
 * **************************************
 */
void Widget::mousePressEvent(QMouseEvent *event)
{
    if(event->button()==Qt::LeftButton)
    {
        mousePress=true;
    }
    movePoint=event->globalPos()-pos();
    qDebug()<<"移动";

}


void Widget::mouseMoveEvent(QMouseEvent *event)
{
    if(mousePress)
    {
        QPoint movePos=event->globalPos();
        move(movePos-movePoint);
    }

}

void Widget::mouseReleaseEvent(QMouseEvent *event)
{
    Q_UNUSED(event);
    mousePress=false;

}
/*****************鼠标拖动事件end************************
 * ****************************************************/

/******************连接数据库***************************
 **************************************************/

void Widget::ConnectDatabase()
{
        QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
        db.setHostName("127.0.0.1");
        db.setPort(3306);
        db.setDatabaseName("qq");
        db.setUserName("root");
        db.setPassword("1234");
        bool ok = db.open();
        if (ok){
//            QMessageBox::information(this, "infor", "success");
             qDebug() <<"数据库连接成功";
        }
        else {
            QMessageBox::information(this, "infor", "open failed");
            qDebug() << db.lastError().text();
        }
}

void Widget::queryUser()
{


}


Widget::~Widget()
{
    delete ui;
}


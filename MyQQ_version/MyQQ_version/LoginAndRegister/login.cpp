#include "login.h"
#include "ui_login.h"
#include "Register.h"
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
#include <QSqlQuery>
#include <QCompleter>
#include <fstream>
#include "mani_file.h"
#include <string>
#include <QBuffer>
#include <QImageReader>
//#include


Login::Login(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Login)
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



    ui->minsize->setIcon( QIcon(QApplication::style()->standardIcon(QStyle::SP_TitleBarMinButton)));
    ui->close->setIcon( QIcon(QApplication::style()->standardIcon(QStyle::SP_TitleBarCloseButton)));
    ui->username->setValidator(new QRegExpValidator(QRegExp("[0-9]+$")));//设置id框只能输入数字




    //自动补全
    QStringList wordlist;
    wordlist<<"1"<<"12"<<"113"<<"24";//这里会用本地文件存储
    QCompleter *completer=new QCompleter(wordlist,this);
    completer->setCaseSensitivity(Qt::CaseInsensitive);
    ui->username->setCompleter(completer);
    createUsernameFile();



}

/****************************************
 * 鼠标拖动窗口事件开始
 * **************************************
 */
void Login::mousePressEvent(QMouseEvent *event)
{
    if(event->button()==Qt::LeftButton)
    {
        mousePress=true;
    }
    movePoint=event->globalPos()-pos();
//    qDebug()<<"移动";

}


void Login::mouseMoveEvent(QMouseEvent *event)
{
    if(mousePress)
    {
        QPoint movePos=event->globalPos();
        move(movePos-movePoint);
    }

}

void Login::mouseReleaseEvent(QMouseEvent *event)
{
    Q_UNUSED(event);
    mousePress=false;

}
/*****************鼠标拖动事件end************************
 * ****************************************************/

/******************连接数据库***************************
 **************************************************/

void Login::ConnectDatabase()
{
        db = QSqlDatabase::addDatabase("QMYSQL");
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

/**
 * 这里的数据库全部使用prepare来防止sql注入
 */
int Login::userLogin()
{
    QSqlQuery query;
    query.prepare("select qqid,qqpassword,avatar from appuser where qqid=:qqid and qqpassword=:qqpassword ");
    query.bindValue(":qqid",ui->username->text());
    query.bindValue(":qqpassword",ui->password->text());
    query.exec();
    loginRes=query;
    return query.size();

}


void Login::on_login_clicked()
{
    int res=userLogin();
    if(res==1)
    {
        QMessageBox::information(this,"提示","成功登录");
        //设置头像
        loginRes.first();
        QVariant tmp=loginRes.value(2);

        QByteArray img=tmp.value<QByteArray>();
        QBuffer buffer(&img);
        buffer.open(QIODevice::ReadOnly);
        QImageReader reader(&buffer,"png");
        QImage picture=reader.read();
        ui->avatar->setScaledContents(true);
        ui->avatar->setPixmap(QPixmap::fromImage(picture));


    }else if(res==0){
        QMessageBox::warning(this,"提示","登录失败");
    }else if (res==-1)
    {

        QMessageBox::warning(this,"提示","数据库拒绝提供信息");
    }

}


void Login::on_pushButton_clicked()
{
    uiRegister=new Register;
    uiRegister->show();
    uiRegister->setHideWindow(this);
}

/**
 * 创建候选框文件
 */
void Login::createUsernameFile()
{

//   std::printf("aaa");

   mani_file*  mani=new mani_file();
   mani->createFile("name.txt");

}



Login::~Login()
{
    delete ui;
}





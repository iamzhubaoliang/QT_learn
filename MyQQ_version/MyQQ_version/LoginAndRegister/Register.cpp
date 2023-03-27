#include "ui_regist.h"
#include "Register.h"
#include <QFileDialog>
#include <QDebug>
#include <QBuffer>
#include <QSqlError>
#include <QSqlQuery>
#include <QVariant>
Register::Register(QWidget *parent)
    :QWidget(parent)
    ,ui(new Ui::Register)
{
    ui->setupUi(this);

}

void Register::setHideWindow(QWidget *widget)
{
    willHide=widget;
    willHide->hide();

}



Register::~Register()
{
    delete ui;
}


void Register::on_pushButton_clicked()
{
    this->close();
    willHide->show();

}



//void Register::on_selectBtn_clicked()
//{
//    QString fileName = QFileDialog::getOpenFileName(
//            this,
//            tr("open a file."),
//            "D:/",
//            tr("images(*.png *jpeg *bmp);;video files(*.avi *.mp4 *.wmv);;All files(*.*)"));

//    qDebug()<<fileName;
//}


void Register::on_selectBtn_clicked()
{
        QString fileName = QFileDialog::getOpenFileName(
                this,
                tr("open a file."),
                "D:/",
                tr("images(*.png *jpeg *bmp);;video files(*.avi *.mp4 *.wmv);;All files(*.*)"));
        qDebug()<<fileName;
        QImage *img=new QImage;
        img->load(fileName);
        ui->picture->setScaledContents(true);
        ui->picture->setPixmap(QPixmap::fromImage(*img));
        Register::pictureName=fileName;

}


void Register::on_regBtn_clicked()
{
    QByteArray bytes;

    QBuffer buffer(&bytes);

    buffer.open(QIODevice::WriteOnly);


    QByteArray data;

    QSqlQuery query;
    QString path = Register::pictureName;

    QFile* file=new QFile(path); //fileName为二进制数据文件名

    file->open(QIODevice::ReadOnly);
    data = file->readAll();

     file->close();

    QVariant var(data);

    QString sql = "insert into appuser(qqid,qqpassword,avatar) values(:qqid,:qqpassword,:avatar)";
    query.prepare(sql);
    query.bindValue(":qqid",ui->username->text());
    query.bindValue(":qqpassword",ui->password->text());
    query.bindValue(":avatar",var);



    if(!query.exec())

    {

    qDebug()<<query.lastError().text().toLocal8Bit().data();

    }

     else

    {

    qDebug()<<"Insert success";
    }
}


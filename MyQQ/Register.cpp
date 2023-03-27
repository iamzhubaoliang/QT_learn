#include "ui_regist.h"
#include "Register.h"

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

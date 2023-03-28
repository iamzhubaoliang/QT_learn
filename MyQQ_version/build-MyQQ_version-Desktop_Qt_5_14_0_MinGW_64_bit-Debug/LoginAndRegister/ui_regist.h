/********************************************************************************
** Form generated from reading UI file 'regist.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGIST_H
#define UI_REGIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Register
{
public:
    QPushButton *pushButton;
    QLabel *picture;
    QPushButton *selectBtn;
    QLineEdit *username;
    QLineEdit *password;
    QPushButton *regBtn;

    void setupUi(QWidget *Register)
    {
        if (Register->objectName().isEmpty())
            Register->setObjectName(QString::fromUtf8("Register"));
        Register->resize(587, 401);
        pushButton = new QPushButton(Register);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(40, 350, 80, 20));
        picture = new QLabel(Register);
        picture->setObjectName(QString::fromUtf8("picture"));
        picture->setGeometry(QRect(110, 50, 161, 111));
        selectBtn = new QPushButton(Register);
        selectBtn->setObjectName(QString::fromUtf8("selectBtn"));
        selectBtn->setGeometry(QRect(460, 340, 80, 24));
        username = new QLineEdit(Register);
        username->setObjectName(QString::fromUtf8("username"));
        username->setGeometry(QRect(150, 200, 113, 24));
        password = new QLineEdit(Register);
        password->setObjectName(QString::fromUtf8("password"));
        password->setGeometry(QRect(150, 240, 113, 24));
        regBtn = new QPushButton(Register);
        regBtn->setObjectName(QString::fromUtf8("regBtn"));
        regBtn->setGeometry(QRect(200, 330, 80, 24));

        retranslateUi(Register);

        QMetaObject::connectSlotsByName(Register);
    } // setupUi

    void retranslateUi(QWidget *Register)
    {
        Register->setWindowTitle(QCoreApplication::translate("Register", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("Register", "PushButton", nullptr));
        picture->setText(QCoreApplication::translate("Register", "select picture", nullptr));
        selectBtn->setText(QCoreApplication::translate("Register", "select", nullptr));
        regBtn->setText(QCoreApplication::translate("Register", "regBtn", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Register: public Ui_Register {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGIST_H

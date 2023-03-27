/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QFrame *topframe;
    QLabel *avatar;
    QPushButton *minsize;
    QPushButton *close;
    QFrame *bottomframe;
    QComboBox *selectNum;
    QLineEdit *username;
    QLineEdit *password;
    QPushButton *login;
    QPushButton *pushButton;

    void setupUi(QWidget *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QString::fromUtf8("Login"));
        Login->resize(543, 362);
        topframe = new QFrame(Login);
        topframe->setObjectName(QString::fromUtf8("topframe"));
        topframe->setGeometry(QRect(-10, 0, 561, 181));
        topframe->setStyleSheet(QString::fromUtf8(""));
        topframe->setFrameShape(QFrame::StyledPanel);
        topframe->setFrameShadow(QFrame::Raised);
        avatar = new QLabel(topframe);
        avatar->setObjectName(QString::fromUtf8("avatar"));
        avatar->setGeometry(QRect(340, 80, 50, 50));
        avatar->setCursor(QCursor(Qt::ArrowCursor));
        avatar->setFrameShadow(QFrame::Plain);
        avatar->setAlignment(Qt::AlignCenter);
        minsize = new QPushButton(topframe);
        minsize->setObjectName(QString::fromUtf8("minsize"));
        minsize->setGeometry(QRect(400, 0, 71, 20));
        close = new QPushButton(topframe);
        close->setObjectName(QString::fromUtf8("close"));
        close->setGeometry(QRect(470, 0, 71, 20));
        bottomframe = new QFrame(Login);
        bottomframe->setObjectName(QString::fromUtf8("bottomframe"));
        bottomframe->setGeometry(QRect(-1, 182, 551, 181));
        bottomframe->setFrameShape(QFrame::StyledPanel);
        bottomframe->setFrameShadow(QFrame::Raised);
        selectNum = new QComboBox(bottomframe);
        selectNum->setObjectName(QString::fromUtf8("selectNum"));
        selectNum->setGeometry(QRect(140, 30, 271, 31));
        username = new QLineEdit(bottomframe);
        username->setObjectName(QString::fromUtf8("username"));
        username->setGeometry(QRect(140, 30, 251, 31));
        username->setEchoMode(QLineEdit::Normal);
        password = new QLineEdit(bottomframe);
        password->setObjectName(QString::fromUtf8("password"));
        password->setGeometry(QRect(140, 70, 271, 31));
        password->setEchoMode(QLineEdit::Password);
        login = new QPushButton(bottomframe);
        login->setObjectName(QString::fromUtf8("login"));
        login->setGeometry(QRect(140, 110, 271, 31));
        pushButton = new QPushButton(bottomframe);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(20, 150, 80, 20));

        retranslateUi(Login);
        QObject::connect(close, SIGNAL(clicked()), Login, SLOT(close()));
        QObject::connect(minsize, SIGNAL(clicked()), Login, SLOT(showMinimized()));

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QWidget *Login)
    {
        Login->setWindowTitle(QApplication::translate("Login", "Widget", nullptr));
        avatar->setText(QApplication::translate("Login", "TextLabel", nullptr));
        minsize->setText(QString());
        close->setText(QString());
        username->setPlaceholderText(QApplication::translate("Login", "\350\276\223\345\205\245ID", nullptr));
        password->setPlaceholderText(QApplication::translate("Login", "\350\276\223\345\205\245\345\257\206\347\240\201", nullptr));
        login->setText(QApplication::translate("Login", "\347\231\273\345\275\225", nullptr));
        pushButton->setText(QApplication::translate("Login", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H

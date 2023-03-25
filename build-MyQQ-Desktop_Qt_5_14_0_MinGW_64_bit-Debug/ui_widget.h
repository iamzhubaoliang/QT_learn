/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
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

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(543, 362);
        topframe = new QFrame(Widget);
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
        bottomframe = new QFrame(Widget);
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

        retranslateUi(Widget);
        QObject::connect(close, SIGNAL(clicked()), Widget, SLOT(close()));
        QObject::connect(minsize, SIGNAL(clicked()), Widget, SLOT(showMinimized()));

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        avatar->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
        minsize->setText(QCoreApplication::translate("Widget", "\346\234\200\345\260\217\345\214\226", nullptr));
        close->setText(QCoreApplication::translate("Widget", "\345\205\263\351\227\255", nullptr));
        username->setPlaceholderText(QCoreApplication::translate("Widget", "\350\276\223\345\205\245ID", nullptr));
        password->setPlaceholderText(QCoreApplication::translate("Widget", "\350\276\223\345\205\245\345\257\206\347\240\201", nullptr));
        login->setText(QCoreApplication::translate("Widget", "\347\231\273\345\275\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H

/********************************************************************************
** Form generated from reading UI file 'traywidget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRAYWIDGET_H
#define UI_TRAYWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Traywidget
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QToolButton *toolButton;
    QWidget *widget;
    QGridLayout *gridLayout;
    QListWidget *listWidget;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_2;

    void setupUi(QWidget *Traywidget)
    {
        if (Traywidget->objectName().isEmpty())
            Traywidget->setObjectName(QString::fromUtf8("Traywidget"));
        Traywidget->resize(229, 153);
        Traywidget->setMaximumSize(QSize(229, 16777215));
        QFont font;
        font.setFamily(QString::fromUtf8("Microsoft YaHei"));
        Traywidget->setFont(font);
        Traywidget->setStyleSheet(QString::fromUtf8("*{font-family:Microsoft YaHei;}\n"
"#Traywidget{\n"
"background-color: rgb(255, 255, 255);\n"
"}"));
        verticalLayout = new QVBoxLayout(Traywidget);
        verticalLayout->setSpacing(1);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(2, 5, 2, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(8, -1, 8, -1);
        label = new QLabel(Traywidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Microsoft YaHei"));
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        font1.setStyleStrategy(QFont::PreferAntialias);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_2->addWidget(label);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        toolButton = new QToolButton(Traywidget);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Microsoft YaHei"));
        font2.setStyleStrategy(QFont::PreferAntialias);
        toolButton->setFont(font2);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/lib/setting.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton->setIcon(icon);
        toolButton->setAutoRaise(true);

        horizontalLayout_2->addWidget(toolButton);


        verticalLayout->addLayout(horizontalLayout_2);

        widget = new QWidget(Traywidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setFont(font2);
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        listWidget = new QListWidget(widget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setMaximumSize(QSize(16777215, 16777215));
        listWidget->setFont(font2);
        listWidget->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));

        gridLayout->addWidget(listWidget, 0, 0, 1, 1);


        verticalLayout->addWidget(widget);

        widget_2 = new QWidget(Traywidget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setStyleSheet(QString::fromUtf8("border-style:solid;\n"
"border-width:1px;\n"
"border-top-color:rgb(161, 161, 161);"));
        horizontalLayout = new QHBoxLayout(widget_2);
        horizontalLayout->setSpacing(2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton = new QPushButton(widget_2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMaximumSize(QSize(55, 20));
        pushButton->setFont(font2);
        pushButton->setStyleSheet(QString::fromUtf8("color: rgb(44, 164, 255);"));
        pushButton->setAutoDefault(false);
        pushButton->setFlat(true);

        horizontalLayout->addWidget(pushButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_2 = new QPushButton(widget_2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setMaximumSize(QSize(55, 80));
        pushButton_2->setFont(font2);
        pushButton_2->setStyleSheet(QString::fromUtf8("color: rgb(44, 164, 255);"));
        pushButton_2->setFlat(true);

        horizontalLayout->addWidget(pushButton_2);


        verticalLayout->addWidget(widget_2);


        retranslateUi(Traywidget);

        QMetaObject::connectSlotsByName(Traywidget);
    } // setupUi

    void retranslateUi(QWidget *Traywidget)
    {
        Traywidget->setWindowTitle(QCoreApplication::translate("Traywidget", "Form", nullptr));
        label->setText(QCoreApplication::translate("Traywidget", "\350\212\261\347\213\227Fdog", nullptr));
        toolButton->setText(QCoreApplication::translate("Traywidget", "...", nullptr));
        pushButton->setText(QCoreApplication::translate("Traywidget", "\345\277\275\347\225\245\345\205\250\351\203\250", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Traywidget", "\346\237\245\347\234\213\345\205\250\351\203\250", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Traywidget: public Ui_Traywidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRAYWIDGET_H

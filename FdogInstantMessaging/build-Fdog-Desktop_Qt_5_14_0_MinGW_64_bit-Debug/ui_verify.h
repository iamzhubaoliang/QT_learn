/********************************************************************************
** Form generated from reading UI file 'verify.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VERIFY_H
#define UI_VERIFY_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Verify
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget_2;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer;
    QToolButton *toolButton;
    QToolButton *toolButton_2;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QTabWidget *tabWidget;
    QWidget *tab;
    QLabel *label_3;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QWidget *tab_2;

    void setupUi(QWidget *Verify)
    {
        if (Verify->objectName().isEmpty())
            Verify->setObjectName(QString::fromUtf8("Verify"));
        Verify->resize(568, 445);
        Verify->setStyleSheet(QString::fromUtf8("*{font-family:Microsoft YaHei;}\n"
"#Verify{\n"
"background-color: rgb(116, 195, 255);\n"
"}"));
        verticalLayout = new QVBoxLayout(Verify);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        widget_2 = new QWidget(Verify);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setStyleSheet(QString::fromUtf8("background-color: rgb(187, 255, 155);"));
        gridLayout = new QGridLayout(widget_2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(6, 0, 6, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(widget_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(20, 20));
        label->setMaximumSize(QSize(20, 20));
        QFont font;
        font.setFamily(QString::fromUtf8("Microsoft YaHei"));
        font.setStyleStrategy(QFont::PreferAntialias);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("border-image: url(:/lib/yinshenim.png);"));

        horizontalLayout->addWidget(label);

        label_2 = new QLabel(widget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        horizontalLayout->addWidget(label_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        toolButton = new QToolButton(widget_2);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));
        toolButton->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/lib/zuixiaohua.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton->setIcon(icon);
        toolButton->setIconSize(QSize(20, 20));
        toolButton->setAutoRaise(true);

        horizontalLayout->addWidget(toolButton);

        toolButton_2 = new QToolButton(widget_2);
        toolButton_2->setObjectName(QString::fromUtf8("toolButton_2"));
        toolButton_2->setFont(font);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/lib/guanbi.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_2->setIcon(icon1);
        toolButton_2->setIconSize(QSize(20, 20));
        toolButton_2->setAutoRaise(true);

        horizontalLayout->addWidget(toolButton_2);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);


        verticalLayout->addWidget(widget_2);

        widget = new QWidget(Verify);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setMinimumSize(QSize(0, 417));
        widget->setFont(font);
        widget->setStyleSheet(QString::fromUtf8("background-color: rgb(179, 255, 250);"));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        tabWidget = new QTabWidget(widget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setFont(font);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        label_3 = new QLabel(tab);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 10, 54, 12));
        label_3->setFont(font);
        label_5 = new QLabel(tab);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(100, 32, 54, 20));
        label_5->setFont(font);
        label_6 = new QLabel(tab);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(100, 60, 54, 16));
        label_6->setFont(font);
        label_7 = new QLabel(tab);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(100, 80, 54, 21));
        label_7->setFont(font);
        pushButton = new QPushButton(tab);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(400, 70, 81, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Microsoft YaHei"));
        font1.setPointSize(10);
        font1.setStyleStrategy(QFont::PreferAntialias);
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QString::fromUtf8("#pushButton{\n"
"background-color: rgb(99, 188, 255);\n"
"color: rgb(255, 255, 255);\n"
"border-radius: 5px;\n"
"}\n"
"#pushButton:hover{\n"
"background-color: rgb(99, 170, 255);\n"
"color: rgb(255, 255, 255);\n"
"border-radius: 5px;\n"
"\n"
"}\n"
"#pushButton:pressed{\n"
"background-color: rgb(99, 188, 255);\n"
"color: rgb(255, 255, 255);\n"
"border-radius: 5px;\n"
"padding-left:2px;\n"
"padding-top:2px;\n"
"}\n"
""));
        pushButton_3 = new QPushButton(tab);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(20, 40, 61, 61));
        pushButton_3->setFont(font);
        pushButton_3->setIconSize(QSize(55, 55));
        pushButton_3->setAutoDefault(false);
        pushButton_3->setFlat(true);
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tabWidget->addTab(tab_2, QString());

        gridLayout_2->addWidget(tabWidget, 0, 0, 1, 1);


        verticalLayout->addWidget(widget);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 12);

        retranslateUi(Verify);

        tabWidget->setCurrentIndex(0);
        pushButton_3->setDefault(false);


        QMetaObject::connectSlotsByName(Verify);
    } // setupUi

    void retranslateUi(QWidget *Verify)
    {
        Verify->setWindowTitle(QCoreApplication::translate("Verify", "Form", nullptr));
        label->setText(QString());
        label_2->setText(QCoreApplication::translate("Verify", "\351\252\214\350\257\201\344\277\241\346\201\257", nullptr));
        toolButton->setText(QCoreApplication::translate("Verify", "...", nullptr));
        toolButton_2->setText(QCoreApplication::translate("Verify", "...", nullptr));
        label_3->setText(QCoreApplication::translate("Verify", "4\346\234\21028\346\227\245", nullptr));
        label_5->setText(QString());
        label_6->setText(QString());
        label_7->setText(QString());
        pushButton->setText(QCoreApplication::translate("Verify", "\346\267\273\345\212\240/\346\213\222\347\273\235", nullptr));
        pushButton_3->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("Verify", "\345\245\275\345\217\213\351\252\214\350\257\201", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("Verify", "\347\276\244\351\252\214\350\257\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Verify: public Ui_Verify {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VERIFY_H

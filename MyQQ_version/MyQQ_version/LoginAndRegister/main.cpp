#include "login.h"

#include <QApplication>
#include <QtCore>

int main(int argc, char *argv[])
{

//    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
//    QCoreApplication::setAttribute(Qt::AA_UseHighDpiPixmaps);
    QApplication a(argc, argv);
    Login w;
    w.show();
    return a.exec();
}
#include "login.h"

#include <QApplication>
#include <QtCore>
#include "spdlog/spdlog.h"
#include "commonvarible.h"

int main(int argc, char *argv[])
{

//    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
//    QCoreApplication::setAttribute(Qt::AA_UseHighDpiPixmaps);
    spdlog::set_level(CommonVarible::logFlag);
    QApplication a(argc, argv);
    Login w;
    w.show();

    return a.exec();
}

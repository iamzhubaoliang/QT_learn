#include "login.h"

#include <QApplication>
#include <QtCore>
#include "spdlog/spdlog.h"

int main(int argc, char *argv[])
{

//    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
//    QCoreApplication::setAttribute(Qt::AA_UseHighDpiPixmaps);
    QApplication a(argc, argv);
    Login w;
    w.show();
    spdlog::set_level(spdlog::level::debug);
    return a.exec();
}

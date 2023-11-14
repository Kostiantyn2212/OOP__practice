#include "mainwindow.h"
#include "Logger.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    Logger::init();
    QApplication a(argc, argv);
    DBManager* dbManager = SqliteDBManager::getInstance();
    MainWindow window(dbManager);
    window.show();
    bool ret = a.exec();
    Logger::clean();
    return ret;
}

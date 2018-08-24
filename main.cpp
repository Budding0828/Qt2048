#include "mainwindow.h"
#include <QApplication>
#include <QKeyEvent>
#include "ui_mainwindow.h"
#include <ctime>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    w.showbroad();
    srand((unsigned int)time(0));
    w.game.CreatNumber();
    w.game.CreatNumber();
    Sleep(100);
    w.showbroad();

    //w.startgame();


    return a.exec();
}

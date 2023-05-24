#include "GameOfLife.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    GameOfLife w;
    w.show();
    return a.exec();
}

#include "clonepurifier.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ClonePurifier w;
    w.show();

    return a.exec();
}

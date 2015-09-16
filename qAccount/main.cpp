#include "mainaccount.h"
#include "checkingaccount.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainAccount w;
    w.show();

    return a.exec();
}

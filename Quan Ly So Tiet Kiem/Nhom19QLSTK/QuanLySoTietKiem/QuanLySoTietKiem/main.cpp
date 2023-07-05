#include "mainwindow.h"
#include "loginsrceen.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    LoginSrceen w;
    w.show();
    return a.exec();
}

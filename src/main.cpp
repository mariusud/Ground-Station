#include "mainwindow.h"
#include "network.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    QString test = "testing";
    Network network;

    QObject::connect(&network,SIGNAL( sendTextToUI(const QString, const QString)), &w, SLOT( display_message(const QString, const QString)));
    emit network.sendTextToUI(test,test);
    //w.display_message(test,test);
    w.showFullScreen();
    return a.exec();
}

#include "mainwindow.h"
#include "network.h"

#include <QApplication>
#include "parser.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    Network network;

    QObject::connect(&network, SIGNAL(sendPayloadToUI(const QList<QString>)), &w, SLOT(display_payload(const QList<QString>)));
    QObject::connect(&network, SIGNAL( sendTextToUI(const QString, const QString)), &w, SLOT( display_message(const QString, const QString)));

    network.initConnection();
    network.startBroadcasting();
    w.showFullScreen();
    return a.exec();
}

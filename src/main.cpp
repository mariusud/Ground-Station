#include "mainwindow.h"
#include "network.h"

#include <QApplication>
#include "parser.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    //QString test = "testing";
    //Network network;

    //QObject::connect(&network,SIGNAL( sendTextToUI(const QString, const QString)), &w, SLOT( display_message(const QString, const QString)));
    //QObject::connect(&network,SIGNAL( sendPayloadToUI(const QString)), &w, SLOT( display_payload));

    //QObject::connect(&network, SIGNAL( sendPayloadToUI(const QString &sensorData)), &w, SLOT( display_payload(const QString sensorData)));
    //emit network.sendPayloadToUI("TEST");


    //network.listen();
    //network.startBroadcasting();
/*
    float string, string2;
    QByteArray datagram = "[0.123, 1.15, 21.3, 3,4]";
    string = getPart(datagram,1);
    string2 = getPart(datagram,2);
    QList<float> listen = {string, string2};
    qDebug() << string;
    //emit network.sendTextToUI(test,test);
    */
    //w.display_message(test,test);
    w.showFullScreen();
    return a.exec();
}

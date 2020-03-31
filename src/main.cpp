#include "mainwindow.h"
#include "network.h"

#include <QApplication>
#include "dataprocessing.h"
#include <QFontDatabase>
#include <QFile>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    Network network;
    a.setApplicationName("PGSS");
    a.setOrganizationName("Propulse NTNU");
    a.setOrganizationDomain("www.propulsentnu.no");

    QFontDatabase::addApplicationFont(":/../res/fonts/spaceage.ttf");
    QFile file("qrc:/new/res/fonts/spaceage.ttf");
    qDebug() << file.exists();

    QObject::connect(&network, SIGNAL(sendPayloadToUI(const QList<QString>)), &w, SLOT(display_payload(const QList<QString>)));
    QObject::connect(&network, SIGNAL( sendTextToUI(const QString, const QString)), &w, SLOT( display_message(const QString, const QString)));

    QObject::connect(&network, SIGNAL( newMaxAcceleration(const double)), &w, SLOT( update_maxacceleration(const double)));
    QObject::connect(&network, SIGNAL( newMaxAltitude(const double)), &w, SLOT( update_maxaltitude(const double)));

    network.initConnection();
    network.startBroadcasting();
    w.showFullScreen();
    return a.exec();
}

#include "network.h"

#include <QtNetwork>
#include <QDebug>

Network::Network(QObject *parent) : QObject(parent)
{

    emit sendTextToUI("ROCKET","TITS");
}


#include "network.h"
#include "dataprocessing.h"
#include "globals.h"

#include <QtNetwork>
#include <QDebug>
Network::Network(QObject *parent) : QObject(parent)
{
udpSocket = new QUdpSocket(this);
udpSocket->bind(QHostAddress::LocalHost, g_port);
//udpSocket->bind(QHostAddress("10.19.37.136"),20000); //1);
//udpSocket->bind(45454, QUdpSocket::ShareAddress); //Allow other services to bind to the same address and port

qDebug() << "Socket bound to port: " << g_port;
maxAccel = 0;
maxAltitude = 0;
}


void Network::initConnection(){
    emit sendTextToUI("console","Initializing connection: writing to port");
    QByteArray datagram = "starting UDP";
    udpSocket->writeDatagram(datagram, QHostAddress::LocalHost,g_port);
}

void Network::processPayloadPendingDatagrams()
{
    while (udpSocket->hasPendingDatagrams()) { // this function is blocking if there is a constant stream of data...
        datagram.resize(int(udpSocket->pendingDatagramSize()));
        udpSocket->readDatagram(datagram.data(), datagram.size(), &sender,&senderPort);
        processDatagram(datagram, sender, senderPort);
        try {
            write_to_file(datagram.data());
        } catch (...) {
            emit sendTextToUI("console","Could not open file for writing.");
        }
    }
}

void Network::processDatagram(QNetworkDatagram datagram,QHostAddress sender, quint16 senderPort){
    QString sender1 = sender.toString();
    QString senderport = QString::number(senderPort);
    buffer = datagram.data();
    quint16 crc = qChecksum(buffer, buffer.size()); //check_sum here
    QList<QString> sensorDataList;

    //if((sender1 == "10.0.0.113") and (senderPort == 8001)){ //this should be globally, port and address of sender
    if (true){
        for (int i=1; i < g_numSensors; i++){
            float sensorData = getPart(buffer,i);
            sensorDataList << QString::number(sensorData);
            emit sendPayloadToUI(sensorDataList);

            if ((i == 8) and (sensorData > maxAltitude)) { // new max altitude
                emit newMaxAltitude(sensorData);
                qDebug() << "new maxalt" << sensorData;
            }

            if ((i == 9) and (sensorData > maxAccel)) { // new maaxacceleration
                emit newMaxAcceleration(sensorData);
                qDebug() << "new maxaccel" << sensorData;
            }
        }
    }
}



void Network::startReading(){

    connect(udpSocket, SIGNAL(readyRead()), this, SLOT(processPayloadPendingDatagrams()));
    emit sendTextToUI("console","Now reading network data");

}







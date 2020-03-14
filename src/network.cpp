#include "network.h"
#include "parser.h"

#include <QtNetwork>
#include <QDebug>
Network::Network(QObject *parent) : QObject(parent)
{

}


void Network::listen(){
    emit Network::sendTextToUI("console","listening for messages");
    //udpSocket->bind(45454, QUdpSocket::ShareAddress); //Allow other services to bind to the same address and port
    //udpSocket->bind(QHostAddress("10.19.37.136"),20000); //1);
    //QByteArray datagram = "startingUDP";
    //udpSocket->writeDatagram(datagram, QHostAddress("10.19.37.136"), 20000);
    //udpSocket->bind(QHostAddress::LocalHost, 8000);
    udpSocket = new QUdpSocket(this);
    QObject::connect(udpSocket, SIGNAL(readyRead()), this, SLOT(processPayloadPendingDatagrams()));
}


void Network::processPayloadPendingDatagrams()
{
    QByteArray datagram;
//! [2]
    while (udpSocket->hasPendingDatagrams()) {
        datagram.resize(int(udpSocket->pendingDatagramSize()));
        QHostAddress sender;
        quint16 senderPort;
        udpSocket->readDatagram(datagram.data(), datagram.size(), &sender,&senderPort);
        qDebug() << "Message receive: " << datagram.data();
        processDatagram(datagram, sender, senderPort);
        emit sendTextToUI("console",datagram.constData());
    }
//! [2]
}

void Network::processDatagram(QNetworkDatagram datagram,QHostAddress sender, quint16 senderPort){
    QString sender1 = sender.toString();
    QString senderport = QString::number(senderPort);
    buffer = datagram.data();
    quint16 crc = qChecksum(buffer, buffer.size());
    QList<QString> sensorDataList;
    qDebug("Sensor data received");

    int numSensors = 5; //should be declared as global
    //if((sender1 == "10.0.0.113") and (senderPort == 8001)){ //this should be globally, port and address of sender
    if (true){
        qDebug("true");

        for (int i=0; i < numSensors;i++){
            float sensorData = getPart(buffer,i);
            QString b = QString::number(sensorData);
            sensorDataList << QString::number(sensorData);
            emit sendPayloadToUI(sensorDataList);

        }
    }    
}

void Network::startBroadcasting()
{
    //startButton->setEnabled(false); //create button that starts udp broadcasting
    //timer.start(1000);
    this->broadcastDatagram();
}

void Network::broadcastDatagram()
{
//! [1]
    QByteArray datagram = "Broadcast message " + QByteArray::number(69);
    emit sendTextToUI("console","Now broadcasting datagram");
    udpSocket->writeDatagram(datagram, QHostAddress("10.19.37.136"), 20000);
//! [1]
    //++messageNo;
}




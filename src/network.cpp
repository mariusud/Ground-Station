#include "network.h"
#include "parser.h"
#include "globals.h"

#include <QtNetwork>
#include <QDebug>
Network::Network(QObject *parent) : QObject(parent)
{
udpSocket = new QUdpSocket(this);
udpSocket->bind(QHostAddress::LocalHost, g_port);
//udpSocket->bind(QHostAddress("10.19.37.136"),20000); //1);
//udpSocket->bind(45454, QUdpSocket::ShareAddress); //Allow other services to bind to the same address and port

connect(udpSocket, SIGNAL(readyRead()), this, SLOT(processPayloadPendingDatagrams()));
qDebug() << "Socket bound to port 8000";
}


void Network::initConnection(){
    emit Network::sendTextToUI("console","Writing to port");
    QByteArray datagram = "starting UDP";
    udpSocket->writeDatagram(datagram, QHostAddress::LocalHost,g_port);
}


void Network::processPayloadPendingDatagrams()
{
    while (udpSocket->hasPendingDatagrams()) { // this function is blocking if there is a constant stream of data...
        datagram.resize(int(udpSocket->pendingDatagramSize()));
        udpSocket->readDatagram(datagram.data(), datagram.size(), &sender,&senderPort);
        processDatagram(datagram, sender, senderPort);
        //emit sendTextToUI("console",datagram.constData());
    }
}

void Network::processDatagram(QNetworkDatagram datagram,QHostAddress sender, quint16 senderPort){
    QString sender1 = sender.toString();
    QString senderport = QString::number(senderPort);
    buffer = datagram.data();
    quint16 crc = qChecksum(buffer, buffer.size());
    qDebug() << "crc: " << crc;
    QList<QString> sensorDataList;

    int numSensors = 10; //should be declared as global
    //if((sender1 == "10.0.0.113") and (senderPort == 8001)){ //this should be globally, port and address of sender
    if (true){
        for (int i=1; i < numSensors; i++){
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
    //udpSocket->writeDatagram(datagram, QHostAddress("10.19.37.136"), 20000);
    udpSocket->writeDatagram(datagram, QHostAddress::LocalHost, g_port);
//! [1]
    //++messageNo;
}




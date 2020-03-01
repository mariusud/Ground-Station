#include "network.h"

#include <QtNetwork>
#include <QDebug>

Network::Network(QObject *parent) : QObject(parent)
{

}

void Network::listen(){
    qDebug("network receiver");

    emit sendTextToUI("console","listening for broadcast msg");
    udpSocket = new QUdpSocket(this);
    //udpSocket->bind(45454, QUdpSocket::ShareAddress); //Allow other services to bind to the same address and port
    udpSocket->bind(QHostAddress::LocalHost,8001); //1);

    //! [1]
        connect(udpSocket, SIGNAL(readyRead()),
                this, SLOT(processPayloadPendingDatagrams()));
    //! [1]
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
        processDatagram(datagram,sender,senderPort);
        emit sendTextToUI("console","new message");
        emit sendTextToUI("console",datagram.constData());

    }
//! [2]
}

void Network::processDatagram(QNetworkDatagram datagram,QHostAddress sender, quint16 senderPort){
    QString sender1 = sender.toString();
    QString senderport = QString::number(senderPort);
    qDebug("sender: "+ sender1.toLatin1());
    qDebug("senderPort: " + senderport.toLatin1());

    QString str2 = "10.0.0.113";
    if((sender1 == "10.0.0.113") and (senderPort == 8001)){
        qDebug("Sensor data received");
        QByteArray data = datagram. data();
        qDebug("data: " + data);
        emit sendPayloadToUI(data);

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

    udpSocket->writeDatagram(datagram, QHostAddress::Broadcast, 8001);
//! [1]
    //++messageNo;
}




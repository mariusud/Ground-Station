#include "network.h"
#include "parser.h"

#include <QtNetwork>
#include <QDebug>
Network::Network(QObject *parent) : QObject(parent)
{
    sensorData = new float[sensorData::NUM_TYPES] {};


}

void Network::init(){
    //send empty message to port
}

void Network::listen(){
    emit sendTextToUI("console","listening for messages");
    udpSocket = new QUdpSocket(this);
    //udpSocket->bind(45454, QUdpSocket::ShareAddress); //Allow other services to bind to the same address and port
    //udpSocket->bind(QHostAddress("10.19.37.136"),20000); //1);
    //udpSocket->bind()
    QByteArray datagram = "startingUDP";
    udpSocket->writeDatagram(datagram, QHostAddress("10.19.37.136"), 20000);

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
        qDebug() << "Message receive: " << datagram.data();
        //processDatagram(datagram,sender,senderPort);
        emit sendTextToUI("console","new message recv");
        emit sendTextToUI("console",datagram.constData());


    }
//! [2]
}

void Network::processDatagram(QNetworkDatagram datagram,QHostAddress sender, quint16 senderPort){
    QString sender1 = sender.toString();
    QString senderport = QString::number(senderPort);
    qDebug("sender: "+ sender1.toLatin1());
    qDebug("senderPort: " + senderport.toLatin1());

    buffer = datagram.data();
    quint16 crc = qChecksum(buffer, buffer.size());


    QString str2 = "10.0.0.113";
    if((sender1 == "10.0.0.113") and (senderPort == 8001)){
        qDebug("Sensor data received");
        QByteArray data = datagram. data();
        qDebug("data: " + data);
        emit sendPayloadToUI(data);

    }

    buffer = datagram.data();
    read_buffer(buffer, (uint8_t*)sensorData, (sensorData::NUM_TYPES)*sizeof(float), &packageNumber);
    for (int i = 0; i < sensorData::NUM_TYPES; i++) {
        qDebug() << "printing sensorData";
        qDebug() << " " << qPrintable(QString::number((sensorData[i])));

        qDebug() << " " << qPrintable(QString::number((buffer[i])));
        qDebug() << " " << qPrintable(QString::number((sensorData[i])));
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




#ifndef NETWORK_H
#define NETWORK_H

#include <QObject>

#include <QNetworkDatagram>

QT_BEGIN_NAMESPACE
class QLabel;
class QUdpSocket;
QT_END_NAMESPACE

class Network : public QObject
{
    Q_OBJECT
public:
    explicit Network(QObject *parent = nullptr);
    void sendMessage(const QString &message);
    void listen();
    void startBroadcasting();


signals:
    void sendTextToUI( const QString &from, const QString &message);
    void sendPayloadToUI(QByteArray data =);

private slots:
    void processPayloadPendingDatagrams(); // for reading udp message byte for byte
    void broadcastDatagram();



private:
    void processDatagram(QNetworkDatagram datagram, QHostAddress sender, quint16 senderPort);
    QLabel *statusLabel = nullptr;
    QUdpSocket *udpSocket;
};

#endif // NETWORK_H

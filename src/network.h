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
    void sendPayloadToUI(const QList<QString> &sensorDataList);
    void sendTextToUI( const QString &from, const QString &message);

private slots:
    void processPayloadPendingDatagrams(); // for reading udp message byte for byte
    void broadcastDatagram();



private:
    void processDatagram(QNetworkDatagram datagram, QHostAddress sender, quint16 senderPort);
    QLabel *statusLabel = nullptr;
    QUdpSocket *udpSocket;
    QString StringBuffer;

    quint16 crc;
    const QString *address;
    QByteArray buffer;

};

#endif // NETWORK_H

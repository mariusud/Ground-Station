#ifndef NETWORK_H
#define NETWORK_H

#include <QObject>

#include <QNetworkDatagram>

//forward declaration of classes in use
QT_BEGIN_NAMESPACE
class QLabel;
class QUdpSocket;
QT_END_NAMESPACE

class Network : public QObject
{
    Q_OBJECT
    QByteArray datagram;
    QHostAddress sender;
    quint16 senderPort;
public:
    explicit Network(QObject *parent = nullptr);
    void sendMessage(const QString &message);

public slots:
    void startReading();
    void initConnection();

signals:
    void sendPayloadToUI(const QList<QString> &sensorDataList);
    void sendTextToUI( const QString &from, const QString &message);
    void newMaxAcceleration(const double value);
    void newMaxAltitude(const double value);

private slots:
    void processPayloadPendingDatagrams(); // for reading udp message byte for byte



private:
    void processDatagram(QNetworkDatagram datagram, QHostAddress sender, quint16 senderPort);
    QLabel *statusLabel = nullptr;
    QUdpSocket *udpSocket;
    QString StringBuffer;
    quint16 crc;
    const QString *address;
    QByteArray buffer;
    double maxAccel;
    double maxAltitude;

};

#endif // NETWORK_H

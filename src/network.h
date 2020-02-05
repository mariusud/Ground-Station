#ifndef NETWORK_H
#define NETWORK_H

#include <QObject>


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
    void receiveMessage();

signals:
    void sendTextToUI( const QString &from, const QString &message);

private:
    QLabel *statusLabel = nullptr;
    QUdpSocket *udpSocket;

};

#endif // NETWORK_H

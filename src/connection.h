#ifndef CONNECTION_H
#define CONNECTION_H

#include <QObject>
#include <QtNetwork>

class connection : public QUdpSocket
{
    Q_OBJECT
public:
    explicit connection(QObject *parent = nullptr);



signals:
    void readyForUse();


};

#endif // CONNECTION_H

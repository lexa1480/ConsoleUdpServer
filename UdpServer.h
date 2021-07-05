#ifndef SERVERUDP_H
#define SERVERUDP_H

#include <QObject>
#include <QUdpSocket>

class UdpServer : public QObject
{
    Q_OBJECT

private:
    QUdpSocket* pudp;

public:
    UdpServer(QObject* pwgt = 0);

public slots:
    void slotSendData();


};

#endif // SERVERUDP_H

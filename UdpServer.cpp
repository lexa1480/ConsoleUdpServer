#include "UdpServer.h"
#include <QTimer>
#include <QTime>

UdpServer::UdpServer(QObject* pwgt) : QObject(pwgt){

    pudp = new QUdpSocket(this);

    QTimer* ptimer = new QTimer(this);
    ptimer->setInterval(1000);
    ptimer->start();

    connect(ptimer, SIGNAL(timeout()), SLOT(slotSendData()));
}

void UdpServer::slotSendData(){

    QTime time = QTime::currentTime();

    QTextStream cout(stdout);
    cout << "Send Time: " << time.toString() << endl;

    QByteArray baData;
    QDataStream out(&baData, QIODevice::WriteOnly);
    out << time;
    pudp->writeDatagram(baData, QHostAddress::LocalHost, 2021);

}

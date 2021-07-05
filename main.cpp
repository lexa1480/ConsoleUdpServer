#include <QCoreApplication>
#include "UdpServer.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QTextStream cout(stdout);
    cout << "!Server!" << endl;
    //Aboba
    UdpServer server;

    return a.exec();
}

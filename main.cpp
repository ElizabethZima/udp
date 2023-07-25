#include <QByteArray>
#include <QCoreApplication>
#include <QHostAddress>
#include <QUdpSocket>
#include <iostream>
#include "udpreceiver.h"
#include "udpserver.h"

extern const quint16 PORT = 2333;


int main(int argc, char *argv[]){

    QCoreApplication a(argc, argv);

    UdpReceiver ur;

    udpserver udpserver(2333);
    udpserver.write();



    std::cout << "--- Recevier ---" << std::endl;

    return a.exec();

}
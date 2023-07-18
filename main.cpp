#include <QByteArray>
#include <QCoreApplication>
#include <QHostAddress>
#include <QUdpSocket>
#include <iostream>
#include "udpreceiver.h"
const quint16 PORT = 2333;


int main(int argc, char *argv[]){

    QCoreApplication a(argc, argv);


    UdpReceiver ur;

    QUdpSocket qus;

    qus.bind(QHostAddress("127.0.0.1"), PORT+1);

    QByteArray msg = "Hello world!";

    std::cout << "--- Sender ---" << std::endl;

    for(int i = 0; i < 10; ++i)
        qus.writeDatagram(msg, QHostAddress("127.0.0.1"), PORT);


    std::cout << "--- Recevier ---" << std::endl;

    return a.exec();

}
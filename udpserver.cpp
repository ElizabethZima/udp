//
// Created by Студент on 25.07.2023.
//

#include "udpserver.h"

void udpserver::write() {

    qint16 PORT = 2333;
    QUdpSocket* serv = new QUdpSocket();

    QByteArray msg = "Hello world!";

    std::cout << "--- Sender ---" << std::endl;


        serv->writeDatagram(msg, QHostAddress("127.0.0.1"), PORT);

}

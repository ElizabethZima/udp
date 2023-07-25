//
// Created by Студент on 25.07.2023.
//

#include "udpserver.h"

void udpserver::write() {

    qint16 PORT = 2333;
    QUdpSocket* serv = new QUdpSocket();

    QByteArray msg = "Hello world!";

    std::cout << "--- Sender ---" << std::endl;

    for (int i = 0; i < 10; ++i)
        serv->writeDatagram(msg, QHostAddress("127.0.0.1"), PORT);

}

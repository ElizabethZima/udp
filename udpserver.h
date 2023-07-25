#ifndef UDP_UDPSERVER_H
#define UDP_UDPSERVER_H

#include <QUdpSocket>
#include <iostream>

class udpserver{

public:

    udpserver(qint16 _PORT) : PORT(_PORT){};

    void write();




private:


    qint16 PORT;
};



#endif //UDP_UDPSERVER_H

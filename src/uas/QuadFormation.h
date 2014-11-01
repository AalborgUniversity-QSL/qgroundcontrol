#ifndef QUADFORMATION_H
#define QUADFORMATION_H

#include "UAS.h"

class QuadFormation : public UAS
{
    Q_OBJECT
    Q_INTERFACES(UASInterface)
public:
    QuadFormation(MAVLinkProtocol* mavlink, QThread* thread, int id);

public slots:
    /** @brief Receive a MAVLink message from this MAV */
    void receiveMessage(LinkInterface* link, mavlink_message_t message);

};
#endif // QUADFORMATION_H
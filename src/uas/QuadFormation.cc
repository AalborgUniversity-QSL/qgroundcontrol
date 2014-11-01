#include "QuadFormation.h"

QuadFormation::QuadFormation(MAVLinkProtocol* mavlink, QThread* thread, int id) :
    UAS(mavlink, thread, id)
{
}

/**
 * This function is called by MAVLink once a complete, uncorrupted (CRC check valid)
 * mavlink packet is received.
 *
 * @param link Hardware link the message came from (e.g. /dev/ttyUSB0 or UDP port).
 *             messages can be sent back to the system via this link
 * @param message MAVLink message, as received from the MAVLink protocol stack
 */
void QuadFormation::receiveMessage(LinkInterface* link, mavlink_message_t message)
{
    UAS::receiveMessage(link, message);
}


#include <linux/rpmsg.h>

#define RPMSG_TTY_ENPT          127
#define RPMSG_PROXY_ENDPOINT    126
#define ETHERNET_ENDPOINT       125
#define MAX_RPMSG_BUFF_SIZE     (496)
//MAC ADDRESS is 6 (DEST MAC ADDRESS) +6 (SORUCE MAC ADDRESS) +2 (EtherTYPE)
//Next release will remove the MAC ADDRESS info, it is not needed
#define ETHERNET_PDU_SIZE       (MAX_RPMSG_BUFF_SIZE)
#define ETHERNET_MTU_SIZE       ((MAX_RPMSG_BUFF_SIZE) - (12 +2))



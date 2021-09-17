#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef struct sockaddr_vns {
    u_short sin_family;
    u_char net_address[4];
    u_char subnet_addr[2];
    u_char port[2];
    u_char hops;
    u_char filler[5];
} SOCKADDR_VNS, *PSOCKADDR_VNS, FAR *LPSOCKADDR_VNS;
#endif
#pragma endregion

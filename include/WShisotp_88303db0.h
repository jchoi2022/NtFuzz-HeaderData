#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef struct sockaddr_tp {
   u_short tp_family;
   u_short tp_addr_type;
   u_short tp_taddr_len;
   u_short tp_tsel_len;
   u_char tp_addr[ISO_MAX_ADDR_LENGTH];
} SOCKADDR_TP, *PSOCKADDR_TP, *LPSOCKADDR_TP;
            (sa_tp)->tp_family = AF_ISO; \
            (sa_tp)->tp_addr_type = ISO_HIERARCHICAL; \
            (sa_tp)->tp_tsel_len = (portlen); \
            (sa_tp)->tp_taddr_len = (portlen) + (nodelen); \
            memcpy(&(sa_tp)->tp_addr, (port), (portlen)); \
            memcpy(&(sa_tp)->tp_addr[portlen], (node), (nodelen));
#endif
#pragma endregion

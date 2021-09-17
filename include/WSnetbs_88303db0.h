#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef struct sockaddr_nb {
    short snb_family;
    u_short snb_type;
    char snb_name[NETBIOS_NAME_LENGTH];
} SOCKADDR_NB, *PSOCKADDR_NB,FAR *LPSOCKADDR_NB;
    { \
        int _i; \
        (_snb)->snb_family = AF_NETBIOS; \
        (_snb)->snb_type = (_type); \
        for (_i=0; _i<NETBIOS_NAME_LENGTH-1; _i++) { \
            (_snb)->snb_name[_i] = ' '; \
        } \
        for (_i=0; *((_name)+_i) != '\0' && _i<NETBIOS_NAME_LENGTH-1; _i++) { \
            (_snb)->snb_name[_i] = *((_name)+_i); \
        } \
        (_snb)->snb_name[NETBIOS_NAME_LENGTH-1] = (_port); \
    }
#endif
#pragma endregion

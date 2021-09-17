       
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include <windot11.h>
extern "C" {
typedef struct _DOT11_ADAPTER {
    GUID gAdapterId;
    [string] LPWSTR pszDescription;
    DOT11_CURRENT_OPERATION_MODE Dot11CurrentOpMode;
} DOT11_ADAPTER, * PDOT11_ADAPTER;
typedef struct _DOT11_BSS_LIST {
    ULONG uNumOfBytes;
    [size_is(uNumOfBytes)] PUCHAR pucBuffer;
} DOT11_BSS_LIST, * PDOT11_BSS_LIST;
typedef struct _DOT11_PORT_STATE {
    DOT11_MAC_ADDRESS PeerMacAddress;
    ULONG uSessionId;
    BOOL bPortControlled;
    BOOL bPortAuthorized;
} DOT11_PORT_STATE, * PDOT11_PORT_STATE;
#include <packon.h>
typedef struct _DOT11_SECURITY_PACKET_HEADER {
    DOT11_MAC_ADDRESS PeerMac;
    USHORT usEtherType;
    UCHAR Data[1];
} DOT11_SECURITY_PACKET_HEADER, * PDOT11_SECURITY_PACKET_HEADER;
#include <packoff.h>
}
#endif
#pragma endregion

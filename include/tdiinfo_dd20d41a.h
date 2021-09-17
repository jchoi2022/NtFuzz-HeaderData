       
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef unsigned long ulong;
typedef unsigned short ushort;
typedef unsigned char uchar;
typedef unsigned int uint;
typedef struct TDIEntityID {
 ulong tei_entity;
 ulong tei_instance;
} TDIEntityID;
typedef struct TDIObjectID {
 TDIEntityID toi_entity;
 ulong toi_class;
 ulong toi_type;
 ulong toi_id;
} TDIObjectID;
typedef struct tcp_request_query_information_ex_xp {
    TDIObjectID ID;
    ULONG_PTR Context[CONTEXT_SIZE/sizeof(ULONG_PTR)];
} TCP_REQUEST_QUERY_INFORMATION_EX_XP, *PTCP_REQUEST_QUERY_INFORMATION_EX_XP;
typedef struct tcp_request_query_information_ex32_xp {
    TDIObjectID ID;
    ULONG32 Context[CONTEXT_SIZE/sizeof(ULONG32)];
} TCP_REQUEST_QUERY_INFORMATION_EX32_XP, *PTCP_REQUEST_QUERY_INFORMATION_EX32_XP;
typedef struct tcp_request_query_information_ex_w2k {
    TDIObjectID ID;
    uchar Context[CONTEXT_SIZE];
} TCP_REQUEST_QUERY_INFORMATION_EX_W2K, *PTCP_REQUEST_QUERY_INFORMATION_EX_W2K;
typedef TCP_REQUEST_QUERY_INFORMATION_EX_XP TCP_REQUEST_QUERY_INFORMATION_EX;
typedef TCP_REQUEST_QUERY_INFORMATION_EX* PTCP_REQUEST_QUERY_INFORMATION_EX;
typedef TCP_REQUEST_QUERY_INFORMATION_EX32_XP TCP_REQUEST_QUERY_INFORMATION_EX32;
typedef TCP_REQUEST_QUERY_INFORMATION_EX32* PTCP_REQUEST_QUERY_INFORMATION_EX32;
typedef struct tcp_request_set_information_ex {
 TDIObjectID ID;
 unsigned int BufferSize;
 unsigned char Buffer[1];
} TCP_REQUEST_SET_INFORMATION_EX, *PTCP_REQUEST_SET_INFORMATION_EX;
typedef enum {
    EndpointIoControlType,
    SetSockOptIoControlType,
    GetSockOptIoControlType,
    SocketIoControlType,
} TDI_TL_IO_CONTROL_TYPE, *PTDI_TL_IO_CONTROL_TYPE;
typedef struct _TDI_TL_IO_CONTROL_ENDPOINT {
    TDI_TL_IO_CONTROL_TYPE Type;
    ULONG Level;
    union {
        ULONG IoControlCode;
        ULONG OptionName;
    };
    _Field_size_bytes_(InputBufferLength) PVOID InputBuffer;
    ULONG InputBufferLength;
    _Field_size_bytes_(OutputBufferLength) PVOID OutputBuffer;
    ULONG OutputBufferLength;
} TDI_TL_IO_CONTROL_ENDPOINT, *PTDI_TL_IO_CONTROL_ENDPOINT;
    CTL_CODE(FILE_DEVICE_TRANSPORT, 14, METHOD_BUFFERED, FILE_ANY_ACCESS)
#endif
#pragma endregion

#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#pragma warning(disable:4201)
    #pragma message("CTL_CODE undefined. Include winioctl.h or wdm.h")
                                     (id), \
                                     METHOD_BUFFERED, \
                                     FILE_ANY_ACCESS)
                                     (id), \
                                     METHOD_NEITHER, \
                                     FILE_ANY_ACCESS)
                                            BTH_CTL(BTH_IOCTL_BASE+0x84)
#include <PSHPACK1.H>
typedef struct _BTH_DEVICE_INFO_LIST {
    ULONG numOfDevices;
    BTH_DEVICE_INFO deviceList[1];
} BTH_DEVICE_INFO_LIST, *PBTH_DEVICE_INFO_LIST;
typedef struct _BTH_RADIO_INFO {
    ULONGLONG lmpSupportedFeatures;
    USHORT mfg;
    USHORT lmpSubversion;
    UCHAR lmpVersion;
} BTH_RADIO_INFO, *PBTH_RADIO_INFO;
typedef struct _BTH_LOCAL_RADIO_INFO {
    BTH_DEVICE_INFO localInfo;
    ULONG flags;
    USHORT hciRevision;
    UCHAR hciVersion;
    BTH_RADIO_INFO radioInfo;
} BTH_LOCAL_RADIO_INFO, *PBTH_LOCAL_RADIO_INFO;
typedef ULONGLONG HANDLE_SDP, *PHANDLE_SDP;
typedef struct _BTH_SDP_CONNECT {
    BTH_ADDR bthAddress;
    ULONG fSdpConnect;
    HANDLE_SDP_TYPE HANDLE_SDP_FIELD_NAME;
    UCHAR requestTimeout;
} BTH_SDP_CONNECT, *PBTH_SDP_CONNECT;
typedef struct _BTH_SDP_DISCONNECT {
    HANDLE_SDP_TYPE HANDLE_SDP_FIELD_NAME;
} BTH_SDP_DISCONNECT, *PBTH_SDP_DISCONNECT;
typedef struct _BTH_SDP_RECORD {
    ULONG fSecurity;
    ULONG fOptions;
    ULONG fCodService;
    ULONG recordLength;
    UCHAR record[1];
} BTH_SDP_RECORD, *PBTH_SDP_RECORD;
typedef struct _BTH_SDP_SERVICE_SEARCH_REQUEST {
    HANDLE_SDP_TYPE HANDLE_SDP_FIELD_NAME;
    SdpQueryUuid uuids[MAX_UUIDS_IN_QUERY];
} BTH_SDP_SERVICE_SEARCH_REQUEST, *PBTH_SDP_SERVICE_SEARCH_REQUEST;
typedef struct _BTH_SDP_ATTRIBUTE_SEARCH_REQUEST {
    HANDLE_SDP_TYPE HANDLE_SDP_FIELD_NAME;
    ULONG searchFlags;
    ULONG recordHandle;
    SdpAttributeRange range[1];
} BTH_SDP_ATTRIBUTE_SEARCH_REQUEST, *PBTH_SDP_ATTRIBUTE_SEARCH_REQUEST;
typedef struct _BTH_SDP_SERVICE_ATTRIBUTE_SEARCH_REQUEST {
    HANDLE_SDP_TYPE HANDLE_SDP_FIELD_NAME;
    ULONG searchFlags;
    SdpQueryUuid uuids[MAX_UUIDS_IN_QUERY];
    SdpAttributeRange range[1];
} BTH_SDP_SERVICE_ATTRIBUTE_SEARCH_REQUEST,
  *PBTH_SDP_SERVICE_ATTRIBUTE_SEARCH_REQUEST;
typedef struct _BTH_SDP_STREAM_RESPONSE {
    ULONG requiredSize;
    ULONG responseSize;
    UCHAR response[1];
} BTH_SDP_STREAM_RESPONSE, *PBTH_SDP_STREAM_RESPONSE;
typedef struct _BTH_HOST_FEATURE_MASK {
    ULONGLONG Mask;
    ULONGLONG Reserved1;
    ULONGLONG Reserved2;
} BTH_HOST_FEATURE_MASK, *PBTH_HOST_FEATURE_MASK;
#include <POPPACK.H>
#pragma warning(default:4201)
#endif
#pragma endregion

       
typedef
HRESULT
(NTAPI *QUERY_COMPANION_DRIVER_INTERFACE)(
    _In_ UINT CompanionDriverInterfaceVersion,
    _In_ UINT cbCompanionDriverInterface,
    _Out_writes_bytes_(cbCompanionDriverInterface) void* pCompanionDriverInterface
    );
typedef enum COMPANION_STREAMING_STATUS
{
    COMPANION_STREAMING_STATUS_OK = 0,
    COMPANION_STREAMING_STATUS_DISCONNECT = 1,
} COMPANION_STREAMING_STATUS;
typedef
VOID
(NTAPI *PFN_SET_STREAMING_STATUS)(
    _In_ void const* pOSContext,
    _In_ COMPANION_STREAMING_STATUS eStatus
    );
typedef
HRESULT
(NTAPI *PFN_NOTIFY_START_MIRACAST_SESSION)(
    _In_ void const* pOSContext,
    _In_ const sockaddr_storage* pSockaddr,
    _In_ PFN_SET_STREAMING_STATUS pfnSetStreamingStatus,
    _Out_ void** ppSessionContext
    );
typedef
HRESULT
(NTAPI *PFN_GET_WAIT_IMAGE)(
    _In_ void const* pSessionContext,
    _In_ UINT unTimeoutInMs,
    _Out_ UINT* punWidth,
    _Out_ UINT* punHeight,
    _Outptr_result_buffer_((*punWidth) * (*punHeight) * 4) BYTE** ppbImage
    );
typedef
HRESULT
(NTAPI *PFN_GET_M3_REQUEST_PAYLOAD)(
    _In_ void const* pSessionContext,
    _Outptr_result_z_ PSTR* pszM3RequestPayload
    );
typedef
HRESULT
(NTAPI *PFN_SET_M3_RESPONSE_PAYLOAD)(
    _In_ void const* pSessionContext,
    _In_reads_(cbM3ResponsePayload) BYTE const* pbM3ResponsePayload,
    _In_ UINT cbM3ResponsePayload
    );
typedef
HRESULT
(NTAPI *PFN_GET_M4_REQUEST_PAYLOAD)(
    _In_ void const* pSessionContext,
    _In_ BOOL fModeChange,
    _Outptr_result_z_ PSTR* pszM4RequestPayload
    );
typedef
HRESULT
(NTAPI *PFN_SET_M4_RESPONSE)(
    _In_ void const* pSessionContext,
    _In_reads_(cbResponse) BYTE* pbResponse,
    _In_ UINT cbResponse
    );
typedef
HRESULT
(NTAPI *PFN_NOTIFY_STOP_MIRACAST_SESSION)(
    _In_ void const* pSessionContext
    );
typedef struct COMPANION_DRIVER_INTERFACE
{
    UINT cbSize;
    PFN_NOTIFY_START_MIRACAST_SESSION NotifyStartMiracastSession;
    PFN_GET_WAIT_IMAGE GetWaitImage;
    PFN_GET_M3_REQUEST_PAYLOAD GetM3RequestPayload;
    PFN_SET_M3_RESPONSE_PAYLOAD SetM3ResponsePayload;
    PFN_GET_M4_REQUEST_PAYLOAD GetM4RequestPayload;
    PFN_SET_M4_RESPONSE SetM4Response;
    PFN_NOTIFY_STOP_MIRACAST_SESSION NotifyStopMiracastSession;
} COMPANION_DRIVER_INTERFACE;

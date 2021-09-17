       
typedef struct _TR_SERVICE_INFORMATION_V1 {
    ULONG InterfaceVersion;
    ULONG ServiceMajorVersion;
    ULONG ServiceMinorVersion;
} TR_SERVICE_INFORMATION_V1, *PTR_SERVICE_INFORMATION_V1;
typedef TR_SERVICE_INFORMATION_V1 TR_SERVICE_INFORMATION,
                                  *PTR_SERVICE_INFORMATION;
typedef struct _TR_SERVICE_REQUEST_V1 {
    ULONG InterfaceVersion;
    ULONG ServiceMajorVersion;
    ULONG ServiceMinorVersion;
    ULONG FunctionCode;
    _Field_size_bytes_(InputBufferSize) PVOID64 InputBuffer;
    ULONG64 InputBufferSize;
    _Field_size_bytes_(OutputBufferSize) PVOID64 OutputBuffer;
    ULONG64 OutputBufferSize;
} TR_SERVICE_REQUEST_V1, *PTR_SERVICE_REQUEST_V1;
typedef TR_SERVICE_REQUEST_V1 TR_SERVICE_REQUEST, *PTR_SERVICE_REQUEST;
typedef struct _TR_SERVICE_REQUEST_RESPONSE_V1 {
    ULONG InterfaceVersion;
    ULONG64 BytesWritten;
} TR_SERVICE_REQUEST_RESPONSE_V1, *PTR_SERVICE_REQUEST_RESPONSE_V1;
typedef TR_SERVICE_REQUEST_RESPONSE_V1 TR_SERVICE_REQUEST_RESPONSE,
                                       *PTR_SERVICE_REQUEST_RESPONSE;

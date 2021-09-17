#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef interface ITransaction ITransaction;
typedef struct tag_inner_PROPVARIANT tagMQPROPVARIANT;
typedef tagMQPROPVARIANT MQPROPVARIANT;
typedef struct tagMQPROPERTYRESTRICTION
    {
    ULONG rel;
    PROPID prop;
    MQPROPVARIANT prval;
    } MQPROPERTYRESTRICTION;
typedef struct tagMQRESTRICTION
    {
                  ULONG cRes;
                    MQPROPERTYRESTRICTION *paPropRes;
    } MQRESTRICTION;
typedef struct tagMQCOLUMNSET
    {
                  ULONG cCol;
                    PROPID *aCol;
    } MQCOLUMNSET;
typedef struct tagMQSORTKEY
    {
    PROPID propColumn;
    ULONG dwOrder;
    } MQSORTKEY;
typedef struct tagMQSORTSET
    {
                  ULONG cCol;
                    MQSORTKEY *aCol;
    } MQSORTSET;
typedef HANDLE QUEUEHANDLE;
typedef PROPID MSGPROPID;
typedef struct tagMQMSGPROPS
{
    DWORD cProp;
    _Field_size_(cProp) MSGPROPID* aPropID;
    _Field_size_(cProp) MQPROPVARIANT* aPropVar;
    _Field_size_opt_(cProp) HRESULT* aStatus;
} MQMSGPROPS;
typedef PROPID QUEUEPROPID;
typedef struct tagMQQUEUEPROPS
{
    DWORD cProp;
    _Field_size_(cProp) QUEUEPROPID* aPropID;
    _Field_size_(cProp) MQPROPVARIANT* aPropVar;
    _Field_size_opt_(cProp) HRESULT* aStatus;
} MQQUEUEPROPS;
typedef PROPID QMPROPID;
typedef struct tagMQQMPROPS
{
    DWORD cProp;
    _Field_size_(cProp) QMPROPID* aPropID;
    _Field_size_(cProp) MQPROPVARIANT* aPropVar;
    _Field_size_opt_(cProp) HRESULT* aStatus;
} MQQMPROPS;
typedef struct tagMQPRIVATEPROPS
{
    DWORD cProp;
    _Field_size_(cProp) QMPROPID* aPropID;
    _Field_size_(cProp) MQPROPVARIANT* aPropVar;
    _Field_size_opt_(cProp) HRESULT* aStatus;
} MQPRIVATEPROPS;
typedef PROPID MGMTPROPID;
typedef struct tagMQMGMTPROPS
{
    DWORD cProp;
    _Field_size_(cProp) MGMTPROPID* aPropID;
    _Field_size_(cProp) MQPROPVARIANT* aPropVar;
    _Field_size_opt_(cProp) HRESULT* aStatus;
} MQMGMTPROPS;
typedef struct tagSEQUENCE_INFO
{
    LONGLONG SeqID;
    ULONG SeqNo;
    ULONG PrevNo;
} SEQUENCE_INFO;
typedef enum tagMQConnectionState
{
 MQCONN_NOFAILURE = 0,
 MQCONN_ESTABLISH_PACKET_RECEIVED,
 MQCONN_READY,
 MQCONN_UNKNOWN_FAILURE = 0x80000000,
 MQCONN_PING_FAILURE,
 MQCONN_CREATE_SOCKET_FAILURE,
 MQCONN_BIND_SOCKET_FAILURE,
 MQCONN_CONNECT_SOCKET_FAILURE,
 MQCONN_TCP_NOT_ENABLED,
 MQCONN_SEND_FAILURE,
 MQCONN_NOT_READY,
 MQCONN_NAME_RESOLUTION_FAILURE,
 MQCONN_INVALID_SERVER_CERT,
 MQCONN_LIMIT_REACHED,
 MQCONN_REFUSED_BY_OTHER_SIDE,
 MQCONN_ROUTING_FAILURE,
 MQCONN_OUT_OF_MEMORY,
} MQConnectionState;
            MQMSG_ACKNOWLEDGMENT_NEG_ARRIVAL ))
            MQMSG_ACKNOWLEDGMENT_NEG_ARRIVAL | \
            MQMSG_ACKNOWLEDGMENT_POS_ARRIVAL ))
            MQMSG_ACKNOWLEDGMENT_NEG_ARRIVAL | \
            MQMSG_ACKNOWLEDGMENT_NEG_RECEIVE ))
            MQMSG_ACKNOWLEDGMENT_NEG_ARRIVAL | \
            MQMSG_ACKNOWLEDGMENT_NEG_RECEIVE | \
            MQMSG_ACKNOWLEDGMENT_POS_RECEIVE ))
                        {0xb1, 0x8, 0x0, 0x20, 0xaf, 0xd6, 0x1c, 0xe9}}
                        {0xb1, 0x8, 0x0, 0x20, 0xaf, 0xd6, 0x1c, 0xe9}}
                                             MQSEC_PEEK_MESSAGE)
                                             MQSEC_PEEK_MESSAGE)
                                             MQSEC_GET_QUEUE_PERMISSIONS | \
                                             MQSEC_RECEIVE_MESSAGE | \
                                             MQSEC_RECEIVE_JOURNAL_MESSAGE)
                                             MQSEC_GET_QUEUE_PERMISSIONS | \
                                             MQSEC_WRITE_MESSAGE)
                                             MQSEC_RECEIVE_JOURNAL_MESSAGE | \
                                             MQSEC_WRITE_MESSAGE | \
                                             MQSEC_SET_QUEUE_PROPERTIES | \
                                             MQSEC_GET_QUEUE_PROPERTIES | \
                                             MQSEC_DELETE_QUEUE | \
                                             MQSEC_GET_QUEUE_PERMISSIONS | \
                                             MQSEC_CHANGE_QUEUE_PERMISSIONS | \
                                             MQSEC_TAKE_QUEUE_OWNERSHIP)
extern "C"
{
typedef
VOID
(APIENTRY *PMQRECEIVECALLBACK)(
    HRESULT hrStatus,
    QUEUEHANDLE hSource,
    DWORD dwTimeout,
    DWORD dwAction,
    MQMSGPROPS* pMessageProps,
    LPOVERLAPPED lpOverlapped,
    HANDLE hCursor
    );
HRESULT
APIENTRY
MQCreateQueue(
    _In_opt_ PSECURITY_DESCRIPTOR pSecurityDescriptor,
    _Inout_ MQQUEUEPROPS* pQueueProps,
    _Out_writes_opt_(*lpdwFormatNameLength)LPWSTR lpwcsFormatName,
    _Inout_ LPDWORD lpdwFormatNameLength
    );
HRESULT
APIENTRY
MQDeleteQueue(
    _In_ LPCWSTR lpwcsFormatName
    );
HRESULT
APIENTRY
MQLocateBegin(
    _In_opt_ LPCWSTR lpwcsContext,
    _In_opt_ MQRESTRICTION* pRestriction,
    _In_ MQCOLUMNSET* pColumns,
    _In_ MQSORTSET* pSort,
    _Out_ PHANDLE phEnum
    );
HRESULT
APIENTRY
MQLocateNext(
    _In_ HANDLE hEnum,
    _Inout_ DWORD* pcProps,
    _Out_ MQPROPVARIANT aPropVar[]
    );
HRESULT
APIENTRY
MQLocateEnd(
    _In_ HANDLE hEnum
    );
HRESULT
APIENTRY
MQOpenQueue(
    _In_ LPCWSTR lpwcsFormatName,
    _In_ DWORD dwAccess,
    _In_ DWORD dwShareMode,
    _Out_ QUEUEHANDLE* phQueue
    );
HRESULT
APIENTRY
MQSendMessage(
    _In_ QUEUEHANDLE hDestinationQueue,
    _In_ MQMSGPROPS* pMessageProps,
    _In_opt_ ITransaction *pTransaction
    );
HRESULT
APIENTRY
MQReceiveMessage(
    _In_ QUEUEHANDLE hSource,
    _In_ DWORD dwTimeout,
    _In_ DWORD dwAction,
    _Inout_opt_ MQMSGPROPS* pMessageProps,
    _Inout_opt_ LPOVERLAPPED lpOverlapped,
    _In_opt_ PMQRECEIVECALLBACK fnReceiveCallback,
    _In_opt_ HANDLE hCursor,
    _In_opt_ ITransaction* pTransaction
    );
HRESULT
APIENTRY
MQReceiveMessageByLookupId(
    _In_ QUEUEHANDLE hSource,
    _In_ ULONGLONG ullLookupId,
    _In_ DWORD dwLookupAction,
    _Inout_opt_ MQMSGPROPS* pMessageProps,
    _Inout_opt_ LPOVERLAPPED lpOverlapped,
    _In_opt_ PMQRECEIVECALLBACK fnReceiveCallback,
    _In_opt_ ITransaction *pTransaction
    );
HRESULT
APIENTRY
MQCreateCursor(
    _In_ QUEUEHANDLE hQueue,
    _Out_ PHANDLE phCursor
    );
HRESULT
APIENTRY
MQCloseCursor(
    _In_ HANDLE hCursor
    );
HRESULT
APIENTRY
MQCloseQueue(
    _In_ QUEUEHANDLE hQueue
    );
HRESULT
APIENTRY
MQSetQueueProperties(
    _In_ LPCWSTR lpwcsFormatName,
    _Inout_ MQQUEUEPROPS* pQueueProps
    );
HRESULT
APIENTRY
MQGetQueueProperties(
    _In_ LPCWSTR lpwcsFormatName,
    _Inout_ MQQUEUEPROPS* pQueueProps
    );
HRESULT
APIENTRY
MQGetQueueSecurity(
    _In_ LPCWSTR lpwcsFormatName,
    _In_ SECURITY_INFORMATION RequestedInformation,
    _Out_writes_bytes_(nLength) PSECURITY_DESCRIPTOR pSecurityDescriptor,
    _In_ DWORD nLength,
    _Out_ LPDWORD lpnLengthNeeded
    );
HRESULT
APIENTRY
MQSetQueueSecurity(
    _In_ LPCWSTR lpwcsFormatName,
    _In_ SECURITY_INFORMATION SecurityInformation,
    _In_opt_ PSECURITY_DESCRIPTOR pSecurityDescriptor
    );
HRESULT
APIENTRY
MQPathNameToFormatName(
    _In_ LPCWSTR lpwcsPathName,
    _Out_writes_(*lpdwFormatNameLength) LPWSTR lpwcsFormatName,
    _Inout_ LPDWORD lpdwFormatNameLength
    );
HRESULT
APIENTRY
MQHandleToFormatName(
    _In_ QUEUEHANDLE hQueue,
    _Out_writes_(*lpdwFormatNameLength) LPWSTR lpwcsFormatName,
    _Inout_ LPDWORD lpdwFormatNameLength
    );
HRESULT
APIENTRY
MQInstanceToFormatName(
    _In_ GUID* pGuid,
    _Out_writes_(*lpdwFormatNameLength) LPWSTR lpwcsFormatName,
    _Inout_ LPDWORD lpdwFormatNameLength
    );
HRESULT
APIENTRY
MQADsPathToFormatName(
    _In_ LPCWSTR lpwcsADsPath,
    _Out_writes_(*lpdwFormatNameLength) LPWSTR lpwcsFormatName,
    _Inout_ LPDWORD lpdwFormatNameLength
    );
VOID
APIENTRY
MQFreeMemory(
    _In_ PVOID pvMemory
    );
HRESULT
APIENTRY
MQGetMachineProperties(
    _In_opt_ LPCWSTR lpwcsMachineName,
    _In_opt_ const GUID* pguidMachineId,
    _Inout_ MQQMPROPS* pQMProps
    );
HRESULT
APIENTRY
MQGetSecurityContext(
    _In_reads_bytes_opt_(dwCertBufferLength) PVOID lpCertBuffer,
    _In_ DWORD dwCertBufferLength,
    _Out_ HANDLE* phSecurityContext
    );
HRESULT
APIENTRY
MQGetSecurityContextEx(
    _In_reads_bytes_opt_(dwCertBufferLength) PVOID lpCertBuffer,
    _In_ DWORD dwCertBufferLength,
    _Out_ HANDLE* phSecurityContext
    );
VOID
APIENTRY
MQFreeSecurityContext(
    _In_ HANDLE hSecurityContext
    );
HRESULT
APIENTRY
MQRegisterCertificate(
    _In_ DWORD dwFlags,
    _In_ PVOID lpCertBuffer,
    _In_ DWORD dwCertBufferLength
    );
HRESULT
APIENTRY
MQBeginTransaction(
    _Out_ ITransaction **ppTransaction
    );
HRESULT
APIENTRY
MQGetOverlappedResult(
    _In_ LPOVERLAPPED lpOverlapped
    );
HRESULT
APIENTRY
MQGetPrivateComputerInformation(
    _In_opt_ LPCWSTR lpwcsComputerName,
    _Inout_ MQPRIVATEPROPS* pPrivateProps
    );
HRESULT
APIENTRY
MQPurgeQueue(
    _In_ QUEUEHANDLE hQueue
    );
HRESULT
APIENTRY
MQMgmtGetInfo(
    _In_opt_ LPCWSTR pComputerName,
    _In_ LPCWSTR pObjectName,
    _Inout_ MQMGMTPROPS* pMgmtProps
    );
HRESULT
APIENTRY
MQMgmtAction(
    _In_opt_ LPCWSTR pComputerName,
    _In_ LPCWSTR pObjectName,
    _In_ LPCWSTR pAction
    );
HRESULT
APIENTRY
MQMarkMessageRejected(
    _In_ HANDLE hQueue,
    _In_ ULONGLONG ullLookupId
    );
HRESULT
APIENTRY
MQMoveMessage(
    _In_ QUEUEHANDLE hSourceQueue,
    _In_ QUEUEHANDLE hDestinationQueue,
    _In_ ULONGLONG ullLookupId,
    _In_opt_ ITransaction *pTransaction
    );
}
#endif
#pragma endregion

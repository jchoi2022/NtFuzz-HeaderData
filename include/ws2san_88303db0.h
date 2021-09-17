       
extern "C" {
typedef struct _WSPUPCALLTABLEEX {
    LPWPUCLOSEEVENT lpWPUCloseEvent;
    LPWPUCLOSESOCKETHANDLE lpWPUCloseSocketHandle;
    LPWPUCREATEEVENT lpWPUCreateEvent;
    LPWPUCREATESOCKETHANDLE lpWPUCreateSocketHandle;
    LPWPUFDISSET lpWPUFDIsSet;
    LPWPUGETPROVIDERPATH lpWPUGetProviderPath;
    LPWPUMODIFYIFSHANDLE lpWPUModifyIFSHandle;
    LPWPUPOSTMESSAGE lpWPUPostMessage;
    LPWPUQUERYBLOCKINGCALLBACK lpWPUQueryBlockingCallback;
    LPWPUQUERYSOCKETHANDLECONTEXT lpWPUQuerySocketHandleContext;
    LPWPUQUEUEAPC lpWPUQueueApc;
    LPWPURESETEVENT lpWPUResetEvent;
    LPWPUSETEVENT lpWPUSetEvent;
    LPWPUOPENCURRENTTHREAD lpWPUOpenCurrentThread;
    LPWPUCLOSETHREAD lpWPUCloseThread;
    LPWPUCOMPLETEOVERLAPPEDREQUEST lpWPUCompleteOverlappedRequest;
} WSPUPCALLTABLEEX, FAR * LPWSPUPCALLTABLEEX;
typedef struct _WSABUFEX {
    u_long len;
    _Field_size_bytes_(len) char FAR * buf;
    HANDLE handle;
} WSABUFEX, FAR * LPWSABUFEX;
_Must_inspect_result_
int
WSPAPI
WSPStartupEx(
    _In_ WORD wVersionRequested,
    _Out_ LPWSPDATA lpWSPData,
    _In_ LPWSAPROTOCOL_INFOW lpProtocolInfo,
    _In_ LPWSPUPCALLTABLEEX lpUpcallTable,
    _Out_ LPWSPPROC_TABLE lpProcTable
    );
typedef
_Must_inspect_result_
int
(WSPAPI * LPWSPSTARTUPEX)(
    _In_ WORD wVersionRequested,
    _Out_ LPWSPDATA lpWSPData,
    _In_ LPWSAPROTOCOL_INFOW lpProtocolInfo,
    _In_ LPWSPUPCALLTABLEEX lpUpcallTable,
    _Out_ LPWSPPROC_TABLE lpProcTable
    );
        {0xC0B422F5,0xF58C,0x11d1,{0xAD,0x6C,0x00,0xC0,0x4F,0xA3,0x4A,0x2D}}
        {0xC0B422F6,0xF58C,0x11d1,{0xAD,0x6C,0x00,0xC0,0x4F,0xA3,0x4A,0x2D}}
        {0xC0B422F7,0xF58C,0x11d1,{0xAD,0x6C,0x00,0xC0,0x4F,0xA3,0x4A,0x2D}}
        {0xC0B422F8,0xF58C,0x11d1,{0xAD,0x6C,0x00,0xC0,0x4F,0xA3,0x4A,0x2D}}
        {0xC0B422F9,0xF58C,0x11d1,{0xAD,0x6C,0x00,0xC0,0x4F,0xA3,0x4A,0x2D}}
        {0xC0B422FA,0xF58C,0x11d1,{0xAD,0x6C,0x00,0xC0,0x4F,0xA3,0x4A,0x2D}}
        {0xE5DA4AF8,0xD824,0x48CD,{0xA7,0x99,0x63,0x37,0xA9,0x8E,0xD2,0xAF}}
_Must_inspect_result_
HANDLE WSPAPI
WSPRegisterMemory(
    _In_ SOCKET s,
    _In_reads_bytes_(dwBufferLength) PVOID lpBuffer,
    _In_ DWORD dwBufferLength,
    _In_ DWORD dwFlags,
    _Out_ LPINT lpErrno
    );
int WSPAPI
WSPDeregisterMemory(
    _In_ SOCKET s,
    _In_ HANDLE handle,
    _Out_ LPINT lpErrno
    );
_Must_inspect_result_
int WSPAPI
WSPRegisterRdmaMemory(
    _In_ SOCKET s,
    _In_reads_bytes_(dwBufferLength) PVOID lpBuffer,
    _In_ DWORD dwBufferLength,
    _In_ DWORD dwFlags,
    _Out_writes_bytes_(*lpdwDescriptorLength) LPVOID lpRdmaBufferDescriptor,
    _Inout_ LPDWORD lpdwDescriptorLength,
    _Out_ LPINT lpErrno
    );
int WSPAPI
WSPDeregisterRdmaMemory(
    _In_ SOCKET s,
    _In_reads_bytes_(dwDescriptorLength) LPVOID lpRdmaBufferDescriptor,
    _In_ DWORD dwDescriptorLength,
    _Out_ LPINT lpErrno
    );
int WSPAPI
WSPRdmaWrite(
    _In_ SOCKET s,
    _In_reads_(dwBufferCount) LPWSABUFEX lpBuffers,
    _In_ DWORD dwBufferCount,
    _In_reads_bytes_(dwTargetDescriptorLength) LPVOID lpTargetBufferDescriptor,
    _In_ DWORD dwTargetDescriptorLength,
    _In_ DWORD dwTargetBufferOffset,
    _Out_ LPDWORD lpdwNumberOfBytesWritten,
    _In_ DWORD dwFlags,
    _In_opt_ LPWSAOVERLAPPED lpOverlapped,
    _In_opt_ LPWSAOVERLAPPED_COMPLETION_ROUTINE lpCompletionRoutine,
    _In_ LPWSATHREADID lpThreadId,
    _Out_ LPINT lpErrno
    );
int WSPAPI
WSPRdmaRead(
    _In_ SOCKET s,
    _In_reads_(dwBufferCount) LPWSABUFEX lpBuffers,
    _In_ DWORD dwBufferCount,
    _In_reads_bytes_(dwTargetDescriptorLength) LPVOID lpTargetBufferDescriptor,
    _In_ DWORD dwTargetDescriptorLength,
    _In_ DWORD dwTargetBufferOffset,
    _Out_ LPDWORD lpdwNumberOfBytesRead,
    _In_ DWORD dwFlags,
    _In_opt_ LPWSAOVERLAPPED lpOverlapped,
    _In_opt_ LPWSAOVERLAPPED_COMPLETION_ROUTINE lpCompletionRoutine,
    _In_ LPWSATHREADID lpThreadId,
    _Out_ LPINT lpErrno
    );
_Must_inspect_result_
int WSPAPI
WSPMemoryRegistrationCacheCallback(
    _In_reads_bytes_(Size) LPVOID lpvAddress,
    _In_ SIZE_T Size,
    _Out_ LPINT lpErrno
    );
typedef
_Must_inspect_result_
HANDLE
(WSPAPI * LPFN_WSPREGISTERMEMORY)(
    _In_ SOCKET s,
    _In_reads_bytes_(dwBufferLength) PVOID lpBuffer,
    _In_ DWORD dwBufferLength,
    _In_ DWORD dwFlags,
    _Out_ LPINT lpErrno
    );
typedef
int
(WSPAPI * LPFN_WSPDEREGISTERMEMORY)(
    _In_ SOCKET s,
    _In_ HANDLE handle,
    _Out_ LPINT lpErrno
    );
typedef
_Must_inspect_result_
BOOL
(WSPAPI * LPFN_WSPREGISTERRDMAMEMORY)(
    _In_ SOCKET s,
    _In_reads_bytes_(dwBufferLength) PVOID lpBuffer,
    _In_ DWORD dwBufferLength,
    _In_ DWORD dwFlags,
    _Out_writes_bytes_(*lpdwDescriptorLength) LPVOID lpRdmaBufferDescriptor,
    _Inout_ LPDWORD lpdwDescriptorLength,
    _Out_ LPINT lpErrno
    );
typedef
int
(WSPAPI * LPFN_WSPDEREGISTERRDMAMEMORY)(
    _In_ SOCKET s,
    _In_reads_bytes_(dwDescriptorLength) LPVOID lpRdmaBufferDescriptor,
    _In_ DWORD dwDescriptorLength,
    _Out_ LPINT lpErrno
    );
typedef
int
(WSPAPI * LPFN_WSPRDMAWRITE)(
    _In_ SOCKET s,
    _In_reads_(dwBufferCount) LPWSABUFEX lpBuffers,
    _In_ DWORD dwBufferCount,
    _In_reads_bytes_(dwTargetDescriptorLength) LPVOID lpTargetBufferDescriptor,
    _In_ DWORD dwTargetDescriptorLength,
    _In_ DWORD dwTargetBufferOffset,
    _Out_ LPDWORD lpdwNumberOfBytesWritten,
    _In_ DWORD dwFlags,
    _In_opt_ LPWSAOVERLAPPED lpOverlapped,
    _In_opt_ LPWSAOVERLAPPED_COMPLETION_ROUTINE lpCompletionRoutine,
    _In_ LPWSATHREADID lpThreadId,
    _Out_ LPINT lpErrno
    );
typedef
int
(WSPAPI * LPFN_WSPRDMAREAD)(
    _In_ SOCKET s,
    _In_reads_(dwBufferCount) LPWSABUFEX lpBuffers,
    _In_ DWORD dwBufferCount,
    _In_reads_bytes_(dwTargetDescriptorLength) LPVOID lpTargetBufferDescriptor,
    _In_ DWORD dwTargetDescriptorLength,
    _In_ DWORD dwTargetBufferOffset,
    _Out_ LPDWORD lpdwNumberOfBytesRead,
    _In_ DWORD dwFlags,
    _In_opt_ LPWSAOVERLAPPED lpOverlapped,
    _In_opt_ LPWSAOVERLAPPED_COMPLETION_ROUTINE lpCompletionRoutine,
    _In_ LPWSATHREADID lpThreadId,
    _Out_ LPINT lpErrno
    );
typedef
_Must_inspect_result_
int
(WSPAPI * LPFN_WSPMEMORYREGISTRATIONCACHECALLBACK)(
    _In_reads_bytes_(Size) LPVOID lpvAddress,
    _In_ SIZE_T Size,
    _Out_ LPINT lpErrno
    );
}

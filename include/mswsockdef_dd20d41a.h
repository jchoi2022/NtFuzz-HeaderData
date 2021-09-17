#include <winapifamily.h>
extern "C" {
extern CONST UCHAR sockaddr_size[AF_MAX];
MSWSOCKDEF_INLINE
UCHAR
SOCKADDR_SIZE(_In_ ADDRESS_FAMILY af)
{
    return (UCHAR)((af < AF_MAX) ? sockaddr_size[af]
                                 : sockaddr_size[AF_UNSPEC]);
}
MSWSOCKDEF_INLINE
SCOPE_LEVEL
ScopeLevel(
    _In_ SCOPE_ID ScopeId
    )
{
    return (SCOPE_LEVEL)ScopeId.Level;
}
typedef enum _WSA_COMPATIBILITY_BEHAVIOR_ID {
    WsaBehaviorAll = 0,
    WsaBehaviorReceiveBuffering,
    WsaBehaviorAutoTuning
} WSA_COMPATIBILITY_BEHAVIOR_ID, *PWSA_COMPATIBILITY_BEHAVIOR_ID;
typedef struct _WSA_COMPATIBILITY_MODE {
    WSA_COMPATIBILITY_BEHAVIOR_ID BehaviorId;
    ULONG TargetOsVersion;
} WSA_COMPATIBILITY_MODE, *PWSA_COMPATIBILITY_MODE;
typedef struct RIO_BUFFERID_t *RIO_BUFFERID, **PRIO_BUFFERID;
typedef struct RIO_CQ_t *RIO_CQ, **PRIO_CQ;
typedef struct RIO_RQ_t *RIO_RQ, **PRIO_RQ;
typedef struct _RIORESULT {
    LONG Status;
    ULONG BytesTransferred;
    ULONGLONG SocketContext;
    ULONGLONG RequestContext;
} RIORESULT, *PRIORESULT;
typedef struct _RIO_BUF {
    RIO_BUFFERID BufferId;
    ULONG Offset;
    ULONG Length;
} RIO_BUF, *PRIO_BUF;
typedef struct _RIO_CMSG_BUFFER {
    ULONG TotalLength;
} RIO_CMSG_BUFFER, *PRIO_CMSG_BUFFER;
    (((buffer)->TotalLength >= RIO_CMSG_BASE_SIZE) \
        ? ((((buffer)->TotalLength - RIO_CMSG_BASE_SIZE) >= \
                sizeof(WSACMSGHDR)) \
            ? (PWSACMSGHDR)((PUCHAR)(buffer) + \
                RIO_CMSG_BASE_SIZE) \
            : (PWSACMSGHDR)NULL) \
        : (PWSACMSGHDR)NULL)
    ((cmsg) == NULL \
        ? RIO_CMSG_FIRSTHDR(buffer) \
        : (((PUCHAR)(cmsg) + \
                    WSA_CMSGHDR_ALIGN((cmsg)->cmsg_len) + \
                    sizeof(WSACMSGHDR) > \
                (PUCHAR)(buffer) + \
                    (buffer)->TotalLength) \
            ? (PWSACMSGHDR)NULL \
            : (PWSACMSGHDR)((PUCHAR)(cmsg) + \
                WSA_CMSGHDR_ALIGN((cmsg)->cmsg_len))))
}

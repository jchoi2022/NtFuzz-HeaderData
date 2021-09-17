typedef struct _MRX_NORMAL_NODE_HEADER {
   NODE_TYPE_CODE NodeTypeCode;
   NODE_BYTE_SIZE NodeByteSize;
   __volatile ULONG NodeReferenceCount;
} MRX_NORMAL_NODE_HEADER;
typedef struct _MRX_SRV_CALL_ : public MRX_NORMAL_NODE_HEADER {
    PVOID Context;
    PVOID Context2;
    PRDBSS_DEVICE_OBJECT RxDeviceObject;
    PUNICODE_STRING pSrvCallName;
    PUNICODE_STRING pPrincipalName;
    PUNICODE_STRING pDomainName;
    ULONG Flags;
    LONG MaximumNumberOfCloseDelayedFiles;
    NTSTATUS Status;
} MRX_SRV_CALL, *PMRX_SRV_CALL;
typedef UCHAR NET_ROOT_TYPE, *PNET_ROOT_TYPE;
typedef UCHAR MRX_NET_ROOT_STATE, *PMRX_NET_ROOT_STATE;
typedef UCHAR MRX_PURGE_RELATIONSHIP, *PMRX_PURGE_RELATIONSHIP;
typedef UCHAR MRX_PURGE_SYNCLOCATION, *PMRX_PURGE_SYNCLOCATION;
typedef struct _NETROOT_THROTTLING_PARAMETERS {
    ULONG Increment;
    ULONG MaximumDelay;
} NETROOT_THROTTLING_PARAMETERS, *PNETROOT_THROTTLING_PARAMETERS;
       PNETROOT_THROTTLING_PARAMETERS tp = (__tp); \
       tp->Increment = (__incr); \
       tp->MaximumDelay = (__maxdelay); \
}
typedef struct _MRX_NET_ROOT_ : public MRX_NORMAL_NODE_HEADER {
    PMRX_SRV_CALL pSrvCall;
    PVOID Context;
    PVOID Context2;
    ULONG Flags;
    __volatile ULONG NumberOfFcbs;
    __volatile ULONG NumberOfSrvOpens;
    MRX_NET_ROOT_STATE MRxNetRootState;
    NET_ROOT_TYPE Type;
    MRX_PURGE_RELATIONSHIP PurgeRelationship;
    MRX_PURGE_SYNCLOCATION PurgeSyncLocation;
    DEVICE_TYPE DeviceType;
    PUNICODE_STRING pNetRootName;
    UNICODE_STRING InnerNamePrefix;
    ULONG ParameterValidationStamp;
    union {
      struct {
         ULONG DataCollectionSize;
         NETROOT_THROTTLING_PARAMETERS PipeReadThrottlingParameters;
      } NamedPipeParameters;
      struct {
         ULONG ClusterSize;
         ULONG ReadAheadGranularity;
         NETROOT_THROTTLING_PARAMETERS LockThrottlingParameters;
         ULONG RenameInfoOverallocationSize;
         GUID VolumeId;
      } DiskParameters;
    };
} MRX_NET_ROOT, *PMRX_NET_ROOT;
typedef struct _MRX_V_NET_ROOT_ : public MRX_NORMAL_NODE_HEADER {
    PMRX_NET_ROOT pNetRoot;
    PVOID Context;
    PVOID Context2;
    ULONG Flags;
    ULONG NumberOfOpens;
    __volatile ULONG NumberOfFobxs;
    LUID LogonId;
    PUNICODE_STRING pUserDomainName;
    PUNICODE_STRING pUserName;
    PUNICODE_STRING pPassword;
    ULONG SessionId;
    NTSTATUS ConstructionStatus;
    BOOLEAN IsExplicitConnection;
} MRX_V_NET_ROOT, *PMRX_V_NET_ROOT;
typedef struct _MRX_FCB_ {
    FSRTL_ADVANCED_FCB_HEADER Header;
    PMRX_NET_ROOT pNetRoot;
    PVOID Context;
    PVOID Context2;
    __volatile ULONG NodeReferenceCount;
    ULONG FcbState;
    __volatile CLONG UncleanCount;
    CLONG UncachedUncleanCount;
    __volatile CLONG OpenCount;
    __volatile ULONG OutstandingLockOperationsCount;
    ULONGLONG ActualAllocationLength;
    ULONG Attributes;
    BOOLEAN IsFileWritten;
    BOOLEAN fShouldBeOrphaned;
    BOOLEAN fMiniInited;
    UCHAR CachedNetRootType;
    LIST_ENTRY SrvOpenList;
    ULONG SrvOpenListVersion;
} MRX_FCB, *PMRX_FCB;
typedef
NTSTATUS
(NTAPI *PMRX_SHADOW_CALLDOWN) (
    IN OUT struct _RX_CONTEXT * RxContext
    );
typedef struct {
    PFILE_OBJECT UnderlyingFileObject;
    PDEVICE_OBJECT UnderlyingDeviceObject;
    ULONG LockKey;
    PFAST_IO_READ FastIoRead;
    PFAST_IO_WRITE FastIoWrite;
    PMRX_SHADOW_CALLDOWN DispatchRoutine;
} MRXSHADOW_SRV_OPEN, *PMRXSHADOW_SRV_OPEN;
typedef struct _MRX_SRV_OPEN_ : public MRX_NORMAL_NODE_HEADER {
    PMRX_FCB pFcb;
    PMRX_V_NET_ROOT pVNetRoot;
    PVOID Context;
    PVOID Context2;
    PMRXSHADOW_SRV_OPEN ShadowContext;
    ULONG Flags;
    PUNICODE_STRING pAlreadyPrefixedName;
    CLONG UncleanFobxCount;
    CLONG OpenCount;
    PVOID Key;
    ACCESS_MASK DesiredAccess;
    ULONG ShareAccess;
    ULONG CreateOptions;
    ULONG BufferingFlags;
    ULONG ulFileSizeVersion;
    LIST_ENTRY SrvOpenQLinks;
} MRX_SRV_OPEN, *PMRX_SRV_OPEN;
typedef struct _MRX_PIPE_HANDLE_INFORMATION {
    ULONG TypeOfPipe;
    ULONG ReadMode;
    ULONG CompletionMode;
} MRX_PIPE_HANDLE_INFORMATION, *PMRX_PIPE_HANDLE_INFORMATION;
typedef struct _MRX_FOBX_ : public MRX_NORMAL_NODE_HEADER {
    PMRX_SRV_OPEN pSrvOpen;
    PFILE_OBJECT AssociatedFileObject;
    PVOID Context;
    PVOID Context2;
    ULONG Flags;
    union {
        struct {
            UNICODE_STRING UnicodeQueryTemplate;
        };
        PMRX_PIPE_HANDLE_INFORMATION PipeHandleInformation;
    };
    ULONG OffsetOfNextEaToReturn;
} MRX_FOBX, *PMRX_FOBX;
NTSTATUS
RxAcquireExclusiveFcbResourceInMRx (
    _Inout_ PMRX_FCB Fcb
    );
NTSTATUS
RxAcquireSharedFcbResourceInMRx (
    _Inout_ PMRX_FCB Fcb
    );
NTSTATUS
RxAcquireSharedFcbResourceInMRxEx (
    IN PRX_CONTEXT pRxContext,
    PMRX_FCB Fcb
    );
VOID
RxReleaseFcbResourceInMRx (
    PMRX_FCB Fcb
    );
extern VOID
RxReleaseFcbResourceForThreadInMRx(
    IN PRX_CONTEXT pRxContext,
    IN OUT PMRX_FCB MrxFcb,
    IN ERESOURCE_THREAD ResourceThreadId);

typedef struct _RX_FCB_TABLE_ENTRY {
    NODE_TYPE_CODE NodeTypeCode;
    NODE_BYTE_SIZE NodeByteSize;
    ULONG HashValue;
    UNICODE_STRING Path;
    LIST_ENTRY HashLinks;
    LONG Lookups;
} RX_FCB_TABLE_ENTRY, *PRX_FCB_TABLE_ENTRY;
typedef struct _RX_FCB_TABLE {
    NODE_TYPE_CODE NodeTypeCode;
    NODE_BYTE_SIZE NodeByteSize;
    __volatile ULONG Version;
    BOOLEAN CaseInsensitiveMatch;
    USHORT NumberOfBuckets;
    __volatile LONG Lookups;
    __volatile LONG FailedLookups;
    __volatile LONG Compares;
    ERESOURCE TableLock;
    PRX_FCB_TABLE_ENTRY TableEntryForNull;
    LIST_ENTRY HashBuckets[RX_FCB_TABLE_NUMBER_OF_HASH_BUCKETS];
} RX_FCB_TABLE, *PRX_FCB_TABLE;
extern
VOID
RxInitializeFcbTable (
    IN OUT PRX_FCB_TABLE FcbTable,
    IN BOOLEAN CaseInsensitiveMatch
    );
extern
VOID
RxFinalizeFcbTable (
    IN OUT PRX_FCB_TABLE FcbTable
    );
extern
PFCB
RxFcbTableLookupFcb (
    IN PRX_FCB_TABLE FcbTable,
    IN PUNICODE_STRING Path
    );
extern
NTSTATUS
RxFcbTableInsertFcb (
    IN OUT PRX_FCB_TABLE FcbTable,
    IN OUT PFCB Fcb
    );
extern
NTSTATUS
RxFcbTableRemoveFcb (
    IN OUT PRX_FCB_TABLE FcbTable,
    IN OUT PFCB Fcb
    );
        ExAcquireResourceSharedLite( &(TABLE)->TableLock, WAIT )
        ExAcquireResourceExclusiveLite( &(TABLE)->TableLock, WAIT )
        ExReleaseResourceLite( &(TABLE)->TableLock )
                                          ExIsResourceAcquiredExclusiveLite( &(TABLE)->TableLock ) )

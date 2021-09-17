typedef struct _RX_CONNECTION_ID {
    union {
        ULONG SessionID;
        LUID Luid;
    };
} RX_CONNECTION_ID, *PRX_CONNECTION_ID;
ULONG
RxTableComputeHashValue (
    IN PUNICODE_STRING Name
    );
PVOID
RxPrefixTableLookupName (
    IN PRX_PREFIX_TABLE ThisTable,
    IN PUNICODE_STRING CanonicalName,
    OUT PUNICODE_STRING RemainingName,
    IN PRX_CONNECTION_ID ConnectionId
    );
PRX_PREFIX_ENTRY
RxPrefixTableInsertName (
    IN OUT PRX_PREFIX_TABLE ThisTable,
    IN OUT PRX_PREFIX_ENTRY ThisEntry,
    IN PVOID Container,
    IN PULONG ContainerRefCount,
    IN USHORT CaseInsensitiveLength,
    IN PRX_CONNECTION_ID ConnectionId
    );
VOID
RxRemovePrefixTableEntry (
    IN OUT PRX_PREFIX_TABLE ThisTable,
    IN OUT PRX_PREFIX_ENTRY Entry
    );
VOID
RxInitializePrefixTable (
    IN OUT PRX_PREFIX_TABLE ThisTable,
    IN ULONG TableSize OPTIONAL,
    IN BOOLEAN CaseInsensitiveMatch
    );
VOID
RxFinalizePrefixTable (
    IN OUT PRX_PREFIX_TABLE ThisTable
    );
typedef struct _RX_PREFIX_ENTRY {
    NODE_TYPE_CODE NodeTypeCode;
    NODE_BYTE_SIZE NodeByteSize;
    USHORT CaseInsensitiveLength;
    USHORT Spare1;
    ULONG SavedHashValue;
    LIST_ENTRY HashLinks;
    LIST_ENTRY MemberQLinks;
    UNICODE_STRING Prefix;
    PULONG ContainerRefCount;
    PVOID ContainingRecord;
    PVOID Context;
    RX_CONNECTION_ID ConnectionId;
} RX_PREFIX_ENTRY, *PRX_PREFIX_ENTRY;
typedef
PVOID
(*PRX_TABLE_LOOKUPNAME) (
    IN PRX_PREFIX_TABLE ThisTable,
    IN PUNICODE_STRING CanonicalName,
    OUT PUNICODE_STRING RemainingName
    );
typedef
PRX_PREFIX_ENTRY
(*PRX_TABLE_INSERTENTRY) (
    IN OUT PRX_PREFIX_TABLE ThisTable,
    IN OUT PRX_PREFIX_ENTRY ThisEntry
    );
typedef
VOID
(*PRX_TABLE_REMOVEENTRY) (
    IN OUT PRX_PREFIX_TABLE ThisTable,
    IN OUT PRX_PREFIX_ENTRY Entry
    );
typedef struct _RX_PREFIX_TABLE {
    NODE_TYPE_CODE NodeTypeCode;
    NODE_BYTE_SIZE NodeByteSize;
    ULONG Version;
    LIST_ENTRY MemberQueue;
    ERESOURCE TableLock;
    PRX_PREFIX_ENTRY TableEntryForNull;
    BOOLEAN CaseInsensitiveMatch;
    BOOLEAN IsNetNameTable;
    ULONG TableSize;
    LIST_ENTRY HashBuckets[RX_PREFIX_TABLE_DEFAULT_LENGTH];
} RX_PREFIX_TABLE, *PRX_PREFIX_TABLE;
#if 0
        RxpAcquirePrefixTableLockShared((PrefixTable),(Wait),TRUE, __FILE__,__LINE__ )
        RxpAcquirePrefixTableLockExclusive((PrefixTable),(Wait),TRUE, __FILE__,__LINE__ )
        RxpReleasePrefixTableLock((PrefixTable),TRUE, __FILE__,__LINE__ )
extern
BOOLEAN
RxpAcquirePrefixTableLockShared (
   PRX_PREFIX_TABLE pTable,
   BOOLEAN Wait,
   BOOLEAN ProcessBufferingStateChangeRequests,
   PSZ FileName,
   ULONG LineNumber );
extern
BOOLEAN
RxpAcquirePrefixTableLockExclusive (
   PRX_PREFIX_TABLE pTable,
   BOOLEAN Wait,
   BOOLEAN ProcessBufferingStateChangeRequests,
   PSZ FileName,
   ULONG LineNumber
   );
extern
VOID
RxpReleasePrefixTableLock (
   PRX_PREFIX_TABLE pTable,
   BOOLEAN ProcessBufferingStateChangeRequests,
   PSZ FileName,
   ULONG LineNumber
   );
#else
#endif
extern
VOID
RxExclusivePrefixTableLockToShared (
    PRX_PREFIX_TABLE Table
    );
                                              ExIsResourceAcquiredExclusiveLite(&(TABLE)->TableLock) )

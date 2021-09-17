typedef struct _MRX_NAME_CACHE_ : public MRX_NORMAL_NODE_HEADER {
    ULONG Context;
    PVOID ContextExtension;
    NTSTATUS PriorStatus;
} MRX_NAME_CACHE, *PMRX_NAME_CACHE;
typedef struct _NAME_CACHE : public MRX_NAME_CACHE {
    LARGE_INTEGER ExpireTime;
    LIST_ENTRY Link;
    UNICODE_STRING Name;
    ULONG HashValue;
    BOOLEAN CaseInsensitive;
} NAME_CACHE, *PNAME_CACHE;
typedef struct _NAME_CACHE_CONTROL_ {
    FAST_MUTEX NameCacheLock;
    LIST_ENTRY ActiveList;
    LIST_ENTRY FreeList;
    __volatile ULONG EntryCount;
    ULONG MaximumEntries;
    ULONG MRxNameCacheSize;
    ULONG NumberActivates;
    ULONG NumberChecks;
    ULONG NumberNameHits;
    ULONG NumberNetOpsSaved;
    ULONG Spare[4];
} NAME_CACHE_CONTROL, *PNAME_CACHE_CONTROL;
typedef enum _RX_NC_CHECK_STATUS {
    RX_NC_SUCCESS = 0,
    RX_NC_TIME_EXPIRED,
    RX_NC_MRXCTX_FAIL
} RX_NC_CHECK_STATUS;
VOID
RxNameCacheInitialize(
    IN PNAME_CACHE_CONTROL NameCacheCtl,
    IN ULONG MRxNameCacheSize,
    IN ULONG MaximumEntries
    );
PNAME_CACHE
RxNameCacheCreateEntry (
    IN PNAME_CACHE_CONTROL NameCacheCtl,
    IN PUNICODE_STRING Name,
    IN BOOLEAN CaseInsensitive
    );
PNAME_CACHE
RxNameCacheFetchEntry (
    IN PNAME_CACHE_CONTROL NameCacheCtl,
    IN PUNICODE_STRING Name
    );
RX_NC_CHECK_STATUS
RxNameCacheCheckEntry (
    IN PNAME_CACHE NameCache,
    IN ULONG MRxContext
    );
VOID
RxNameCacheActivateEntry (
    IN PNAME_CACHE_CONTROL NameCacheCtl,
    IN PNAME_CACHE NameCache,
    IN ULONG LifeTime,
    IN ULONG MRxContext
    );
VOID
RxNameCacheExpireEntry (
    IN PNAME_CACHE_CONTROL NameCacheCtl,
    IN PNAME_CACHE NameCache
    );
VOID
RxNameCacheExpireEntryWithShortName (
    IN PNAME_CACHE_CONTROL NameCacheCtl,
    IN PUNICODE_STRING Name
    );
VOID
RxNameCacheFreeEntry (
    IN PNAME_CACHE_CONTROL NameCacheCtl,
    IN PNAME_CACHE NameCache
    );
VOID
RxNameCacheFinalize (
    IN PNAME_CACHE_CONTROL NameCacheCtl
    );

#include <winapifamily.h>
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
extern "C" {
typedef [v1_enum] enum _DFS_TARGET_PRIORITY_CLASS {
    DfsInvalidPriorityClass = -1,
    DfsSiteCostNormalPriorityClass = 0,
    DfsGlobalHighPriorityClass,
    DfsSiteCostHighPriorityClass,
    DfsSiteCostLowPriorityClass,
    DfsGlobalLowPriorityClass
} DFS_TARGET_PRIORITY_CLASS;
typedef struct _DFS_TARGET_PRIORITY {
    DFS_TARGET_PRIORITY_CLASS TargetPriorityClass;
    USHORT TargetPriorityRank;
    USHORT Reserved;
} DFS_TARGET_PRIORITY, *PDFS_TARGET_PRIORITY;
typedef struct _DFS_INFO_1 {
    LPWSTR EntryPath;
} DFS_INFO_1, *PDFS_INFO_1, *LPDFS_INFO_1;
typedef struct _DFS_INFO_1_32 {
    ULONG EntryPath;
} DFS_INFO_1_32, *PDFS_INFO_1_32, *LPDFS_INFO_1_32;
typedef struct _DFS_INFO_2 {
    LPWSTR EntryPath;
    LPWSTR Comment;
    DWORD State;
    DWORD NumberOfStorages;
} DFS_INFO_2, *PDFS_INFO_2, *LPDFS_INFO_2;
typedef struct _DFS_INFO_2_32 {
    ULONG EntryPath;
    ULONG Comment;
    DWORD State;
    DWORD NumberOfStorages;
} DFS_INFO_2_32, *PDFS_INFO_2_32, *LPDFS_INFO_2_32;
typedef struct _DFS_STORAGE_INFO {
    ULONG State;
    LPWSTR ServerName;
    LPWSTR ShareName;
} DFS_STORAGE_INFO, *PDFS_STORAGE_INFO, *LPDFS_STORAGE_INFO;
typedef struct _DFS_STORAGE_INFO_0_32 {
    ULONG State;
    ULONG ServerName;
    ULONG ShareName;
} DFS_STORAGE_INFO_0_32, *PDFS_STORAGE_INFO_0_32, *LPDFS_STORAGE_INFO_0_32;
typedef struct _DFS_STORAGE_INFO_1 {
    ULONG State;
    LPWSTR ServerName;
    LPWSTR ShareName;
    DFS_TARGET_PRIORITY TargetPriority;
} DFS_STORAGE_INFO_1, *PDFS_STORAGE_INFO_1, *LPDFS_STORAGE_INFO_1;
typedef struct _DFS_INFO_3 {
    LPWSTR EntryPath;
    LPWSTR Comment;
    DWORD State;
    DWORD NumberOfStorages;
    [size_is(NumberOfStorages)] LPDFS_STORAGE_INFO Storage;
} DFS_INFO_3, *PDFS_INFO_3, *LPDFS_INFO_3;
typedef struct _DFS_INFO_3_32 {
    ULONG EntryPath;
    ULONG Comment;
    DWORD State;
    DWORD NumberOfStorages;
    ULONG Storage;
} DFS_INFO_3_32, *PDFS_INFO_3_32, *LPDFS_INFO_3_32;
typedef struct _DFS_INFO_4 {
    LPWSTR EntryPath;
    LPWSTR Comment;
    DWORD State;
    ULONG Timeout;
    GUID Guid;
    DWORD NumberOfStorages;
    [size_is(NumberOfStorages)] LPDFS_STORAGE_INFO Storage;
} DFS_INFO_4, *PDFS_INFO_4, *LPDFS_INFO_4;
typedef struct _DFS_INFO_4_32 {
    ULONG EntryPath;
    ULONG Comment;
    DWORD State;
    ULONG Timeout;
    GUID Guid;
    DWORD NumberOfStorages;
    ULONG Storage;
} DFS_INFO_4_32, *PDFS_INFO_4_32, *LPDFS_INFO_4_32;
typedef struct _DFS_INFO_5 {
    LPWSTR EntryPath;
    LPWSTR Comment;
    DWORD State;
    ULONG Timeout;
    GUID Guid;
    ULONG PropertyFlags;
    ULONG MetadataSize;
    DWORD NumberOfStorages;
} DFS_INFO_5, *PDFS_INFO_5, *LPDFS_INFO_5;
typedef struct _DFS_INFO_6 {
    LPWSTR EntryPath;
    LPWSTR Comment;
    DWORD State;
    ULONG Timeout;
    GUID Guid;
    ULONG PropertyFlags;
    ULONG MetadataSize;
    DWORD NumberOfStorages;
    [size_is(NumberOfStorages)] LPDFS_STORAGE_INFO_1 Storage;
} DFS_INFO_6, *PDFS_INFO_6, *LPDFS_INFO_6;
typedef struct _DFS_INFO_7 {
    GUID GenerationGuid;
} DFS_INFO_7, *PDFS_INFO_7, *LPDFS_INFO_7;
typedef struct _DFS_INFO_8 {
    LPWSTR EntryPath;
    LPWSTR Comment;
    DWORD State;
    ULONG Timeout;
    GUID Guid;
    ULONG PropertyFlags;
    ULONG MetadataSize;
    ULONG SecurityDescriptorLength;
    [size_is(SecurityDescriptorLength)] PUCHAR pSecurityDescriptor;
    DWORD NumberOfStorages;
} DFS_INFO_8, *PDFS_INFO_8, *LPDFS_INFO_8;
typedef struct _DFS_INFO_9 {
    LPWSTR EntryPath;
    LPWSTR Comment;
    DWORD State;
    ULONG Timeout;
    GUID Guid;
    ULONG PropertyFlags;
    ULONG MetadataSize;
    ULONG SecurityDescriptorLength;
    [size_is(SecurityDescriptorLength)] PUCHAR pSecurityDescriptor;
    DWORD NumberOfStorages;
    [size_is(NumberOfStorages)] LPDFS_STORAGE_INFO_1 Storage;
} DFS_INFO_9, *PDFS_INFO_9, *LPDFS_INFO_9;
                                        DFS_PROPERTY_FLAG_ROOT_SCALABILITY | \
                                        DFS_PROPERTY_FLAG_SITE_COSTING | \
                                        DFS_PROPERTY_FLAG_TARGET_FAILBACK | \
                                        DFS_PROPERTY_FLAG_CLUSTER_ENABLED | \
                                        DFS_PROPERTY_FLAG_ABDE)
typedef struct _DFS_INFO_50 {
    ULONG NamespaceMajorVersion;
    ULONG NamespaceMinorVersion;
    ULONGLONG NamespaceCapabilities;
} DFS_INFO_50, *PDFS_INFO_50, *LPDFS_INFO_50;
typedef struct _DFS_INFO_100 {
    LPWSTR Comment;
} DFS_INFO_100, *PDFS_INFO_100, *LPDFS_INFO_100;
typedef struct _DFS_INFO_101 {
    DWORD State;
} DFS_INFO_101, *PDFS_INFO_101, *LPDFS_INFO_101;
typedef struct _DFS_INFO_102 {
    ULONG Timeout;
} DFS_INFO_102, *PDFS_INFO_102, *LPDFS_INFO_102;
typedef struct _DFS_INFO_103 {
    ULONG PropertyFlagMask;
    ULONG PropertyFlags;
} DFS_INFO_103, *PDFS_INFO_103, *LPDFS_INFO_103;
typedef struct _DFS_INFO_104 {
    DFS_TARGET_PRIORITY TargetPriority;
} DFS_INFO_104, *PDFS_INFO_104, *LPDFS_INFO_104;
typedef struct _DFS_INFO_105 {
    LPWSTR Comment;
    DWORD State;
    ULONG Timeout;
    ULONG PropertyFlagMask;
    ULONG PropertyFlags;
} DFS_INFO_105, *PDFS_INFO_105, *LPDFS_INFO_105;
typedef struct _DFS_INFO_106 {
    DWORD State;
    DFS_TARGET_PRIORITY TargetPriority;
} DFS_INFO_106, *PDFS_INFO_106, *LPDFS_INFO_106;
typedef struct _DFS_INFO_107 {
    LPWSTR Comment;
    DWORD State;
    ULONG Timeout;
    ULONG PropertyFlagMask;
    ULONG PropertyFlags;
    ULONG SecurityDescriptorLength;
    [size_is(SecurityDescriptorLength)] PUCHAR pSecurityDescriptor;
} DFS_INFO_107, *PDFS_INFO_107, *LPDFS_INFO_107;
typedef struct _DFS_INFO_150 {
    ULONG SecurityDescriptorLength;
    [size_is(SecurityDescriptorLength)] PUCHAR pSecurityDescriptor;
} DFS_INFO_150, *PDFS_INFO_150, *LPDFS_INFO_150;
typedef struct _DFS_INFO_200 {
    LPWSTR FtDfsName;
} DFS_INFO_200, *PDFS_INFO_200, *LPDFS_INFO_200;
typedef struct _DFS_INFO_300 {
    DWORD Flags;
    LPWSTR DfsName;
} DFS_INFO_300, *PDFS_INFO_300, *LPDFS_INFO_300;
NET_API_STATUS NET_API_FUNCTION
NetDfsAdd(
    _In_ LPWSTR DfsEntryPath,
    _In_ LPWSTR ServerName,
    _In_ LPWSTR ShareName,
    _In_opt_ LPWSTR Comment,
    _In_ DWORD Flags
);
NET_API_STATUS NET_API_FUNCTION
NetDfsAddStdRoot(
    _In_ LPWSTR ServerName,
    _In_ LPWSTR RootShare,
    _In_opt_ LPWSTR Comment,
    _In_ DWORD Flags
);
NET_API_STATUS NET_API_FUNCTION
NetDfsRemoveStdRoot(
    _In_ LPWSTR ServerName,
    _In_ LPWSTR RootShare,
    _Reserved_ DWORD Flags
);
NET_API_STATUS NET_API_FUNCTION
NetDfsAddFtRoot(
    _In_ LPWSTR ServerName,
    _In_ LPWSTR RootShare,
    _In_ LPWSTR FtDfsName,
    _In_opt_ LPWSTR Comment,
    _In_ DWORD Flags
);
NET_API_STATUS NET_API_FUNCTION
NetDfsRemoveFtRoot(
    _In_ LPWSTR ServerName,
    _In_ LPWSTR RootShare,
    _In_ LPWSTR FtDfsName,
    _Reserved_ DWORD Flags
);
NET_API_STATUS NET_API_FUNCTION
NetDfsRemoveFtRootForced(
    _In_ LPWSTR DomainName,
    _In_ LPWSTR ServerName,
    _In_ LPWSTR RootShare,
    _In_ LPWSTR FtDfsName,
    _Reserved_ DWORD Flags
);
typedef struct {
    ULONG SiteFlags;
    [string,unique] LPWSTR SiteName;
} DFS_SITENAME_INFO, *PDFS_SITENAME_INFO, *LPDFS_SITENAME_INFO;
typedef struct {
    ULONG cSites;
    [size_is(cSites)] DFS_SITENAME_INFO Site[];
} DFS_SITELIST_INFO, *PDFS_SITELIST_INFO, *LPDFS_SITELIST_INFO;
NET_API_STATUS NET_API_FUNCTION
NetDfsRemove(
    _In_ LPWSTR DfsEntryPath,
    _In_opt_ LPWSTR ServerName,
    _In_opt_ LPWSTR ShareName
);
_When_(Level == 1, _At_(Buffer, _Outptr_result_bytebuffer_(*EntriesRead * sizeof(DFS_INFO_1))))
_When_(Level == 2, _At_(Buffer, _Outptr_result_bytebuffer_(*EntriesRead * sizeof(DFS_INFO_2))))
_When_(Level == 3, _At_(Buffer, _Outptr_result_bytebuffer_(*EntriesRead * sizeof(DFS_INFO_3))))
_When_(Level == 4, _At_(Buffer, _Outptr_result_bytebuffer_(*EntriesRead * sizeof(DFS_INFO_4))))
_When_(Level == 5, _At_(Buffer, _Outptr_result_bytebuffer_(*EntriesRead * sizeof(DFS_INFO_5))))
_When_(Level == 6, _At_(Buffer, _Outptr_result_bytebuffer_(*EntriesRead * sizeof(DFS_INFO_6))))
_When_(Level == 8, _At_(Buffer, _Outptr_result_bytebuffer_(*EntriesRead * sizeof(DFS_INFO_8))))
_When_(Level == 9, _At_(Buffer, _Outptr_result_bytebuffer_(*EntriesRead * sizeof(DFS_INFO_9))))
_When_(Level == 200, _At_(Buffer, _Outptr_result_bytebuffer_(*EntriesRead * sizeof(DFS_INFO_200))))
_When_(Level == 300, _At_(Buffer, _Outptr_result_bytebuffer_(*EntriesRead * sizeof(DFS_INFO_300))))
NET_API_STATUS NET_API_FUNCTION
NetDfsEnum(
    _In_ LPWSTR DfsName,
    _In_ DWORD Level,
    _In_ DWORD PrefMaxLen,
    _Out_ LPBYTE *Buffer,
    _Out_ LPDWORD EntriesRead,
    _Inout_ LPDWORD ResumeHandle
);
_When_(Level == 1, _At_(Buffer, _Outptr_result_bytebuffer_(sizeof(DFS_INFO_1))))
_When_(Level == 2, _At_(Buffer, _Outptr_result_bytebuffer_(sizeof(DFS_INFO_2))))
_When_(Level == 3, _At_(Buffer, _Outptr_result_bytebuffer_(sizeof(DFS_INFO_3))))
_When_(Level == 4, _At_(Buffer, _Outptr_result_bytebuffer_(sizeof(DFS_INFO_4))))
_When_(Level == 5, _At_(Buffer, _Outptr_result_bytebuffer_(sizeof(DFS_INFO_5))))
_When_(Level == 6, _At_(Buffer, _Outptr_result_bytebuffer_(sizeof(DFS_INFO_6))))
_When_(Level == 7, _At_(Buffer, _Outptr_result_bytebuffer_(sizeof(DFS_INFO_7))))
_When_(Level == 8, _At_(Buffer, _Outptr_result_bytebuffer_(sizeof(DFS_INFO_8))))
_When_(Level == 9, _At_(Buffer, _Outptr_result_bytebuffer_(sizeof(DFS_INFO_9))))
_When_(Level == 50, _At_(Buffer, _Outptr_result_bytebuffer_(sizeof(DFS_INFO_50))))
_When_(Level == 100, _At_(Buffer, _Outptr_result_bytebuffer_(sizeof(DFS_INFO_100))))
_When_(Level == 150, _At_(Buffer, _Outptr_result_bytebuffer_(sizeof(DFS_INFO_150))))
NET_API_STATUS NET_API_FUNCTION
NetDfsGetInfo(
    _In_ LPWSTR DfsEntryPath,
    _In_opt_ LPWSTR ServerName,
    _In_opt_ LPWSTR ShareName,
    _In_ DWORD Level,
    _Out_ LPBYTE *Buffer
);
_When_(Level == 101, _At_(Buffer, _In_reads_bytes_(sizeof(DFS_INFO_101))))
NET_API_STATUS NET_API_FUNCTION
NetDfsSetInfo(
    _In_ LPWSTR DfsEntryPath,
    _In_opt_ LPWSTR ServerName,
    _In_opt_ LPWSTR ShareName,
    _In_ DWORD Level,
    _In_ LPBYTE Buffer
);
NET_API_STATUS NET_API_FUNCTION
NetDfsGetClientInfo(
    _In_ LPWSTR DfsEntryPath,
    _In_opt_ LPWSTR ServerName,
    _In_opt_ LPWSTR ShareName,
    _In_ DWORD Level,
    _Out_ LPBYTE *Buffer
);
_When_(Level == 101, _At_(Buffer, _In_reads_bytes_(sizeof(DFS_INFO_101))))
NET_API_STATUS NET_API_FUNCTION
NetDfsSetClientInfo(
    _In_ LPWSTR DfsEntryPath,
    _In_opt_ LPWSTR ServerName,
    _In_opt_ LPWSTR ShareName,
    _In_ DWORD Level,
    _In_ LPBYTE Buffer
);
NET_API_STATUS NET_API_FUNCTION
NetDfsMove(
    _In_ LPWSTR OldDfsEntryPath,
    _In_ LPWSTR NewDfsEntryPath,
    _In_ ULONG Flags
);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
NET_API_STATUS NET_API_FUNCTION
NetDfsRename(
    _In_ LPWSTR Path,
    _In_ LPWSTR NewPath
);
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
NET_API_STATUS NET_API_FUNCTION
NetDfsAddRootTarget(
    _In_ LPWSTR pDfsPath,
    _In_opt_ LPWSTR pTargetPath,
    _In_ ULONG MajorVersion,
    _In_opt_ LPWSTR pComment,
    _In_ ULONG Flags
    );
NET_API_STATUS NET_API_FUNCTION
NetDfsRemoveRootTarget(
    _In_ LPWSTR pDfsPath,
    _In_opt_ LPWSTR pTargetPath,
    _In_ ULONG Flags
    );
NET_API_STATUS NET_API_FUNCTION
NetDfsGetSecurity(
    _In_ LPWSTR DfsEntryPath,
    _In_ SECURITY_INFORMATION SecurityInformation,
    _Outptr_result_bytebuffer_(*lpcbSecurityDescriptor) PSECURITY_DESCRIPTOR *ppSecurityDescriptor,
    _Out_ LPDWORD lpcbSecurityDescriptor
);
NET_API_STATUS NET_API_FUNCTION
NetDfsSetSecurity(
    _In_ LPWSTR DfsEntryPath,
    _In_ SECURITY_INFORMATION SecurityInformation,
    _In_ PSECURITY_DESCRIPTOR pSecurityDescriptor
);
NET_API_STATUS NET_API_FUNCTION
NetDfsGetStdContainerSecurity(
    _In_ LPWSTR MachineName,
    _In_ SECURITY_INFORMATION SecurityInformation,
    _Outptr_result_bytebuffer_(*lpcbSecurityDescriptor) PSECURITY_DESCRIPTOR *ppSecurityDescriptor,
    _Out_ LPDWORD lpcbSecurityDescriptor
);
NET_API_STATUS NET_API_FUNCTION
NetDfsSetStdContainerSecurity(
    _In_ LPWSTR MachineName,
    _In_ SECURITY_INFORMATION SecurityInformation,
    _In_ PSECURITY_DESCRIPTOR pSecurityDescriptor
);
NET_API_STATUS NET_API_FUNCTION
NetDfsGetFtContainerSecurity(
    _In_ LPWSTR DomainName,
    _In_ SECURITY_INFORMATION SecurityInformation,
    _Outptr_result_bytebuffer_(*lpcbSecurityDescriptor) PSECURITY_DESCRIPTOR *ppSecurityDescriptor,
    _Out_ LPDWORD lpcbSecurityDescriptor
);
NET_API_STATUS NET_API_FUNCTION
NetDfsSetFtContainerSecurity(
    _In_ LPWSTR DomainName,
    _In_ SECURITY_INFORMATION SecurityInformation,
    _In_ PSECURITY_DESCRIPTOR pSecurityDescriptor
);
typedef enum {
    DFS_NAMESPACE_VERSION_ORIGIN_COMBINED = 0,
    DFS_NAMESPACE_VERSION_ORIGIN_SERVER,
    DFS_NAMESPACE_VERSION_ORIGIN_DOMAIN
} DFS_NAMESPACE_VERSION_ORIGIN, *PDFS_NAMESPACE_VERSION_ORIGIN;
typedef struct _DFS_SUPPORTED_NAMESPACE_VERSION_INFO {
    ULONG DomainDfsMajorVersion;
    ULONG DomainDfsMinorVersion;
    ULONGLONG DomainDfsCapabilities;
    ULONG StandaloneDfsMajorVersion;
    ULONG StandaloneDfsMinorVersion;
    ULONGLONG StandaloneDfsCapabilities;
} DFS_SUPPORTED_NAMESPACE_VERSION_INFO, *PDFS_SUPPORTED_NAMESPACE_VERSION_INFO;
NET_API_STATUS NET_API_FUNCTION
NetDfsGetSupportedNamespaceVersion(
    _In_ DFS_NAMESPACE_VERSION_ORIGIN Origin,
    _In_opt_ PWSTR pName,
    _Outptr_ PDFS_SUPPORTED_NAMESPACE_VERSION_INFO *ppVersionInfo
    );
typedef struct {
    USHORT DfsEntryPathLen;
    USHORT ServerNameLen;
    USHORT ShareNameLen;
    ULONG Level;
    WCHAR Buffer[1];
} DFS_GET_PKT_ENTRY_STATE_ARG, *PDFS_GET_PKT_ENTRY_STATE_ARG;
}
#endif
#pragma endregion

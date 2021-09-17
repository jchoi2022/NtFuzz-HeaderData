#error Compiler version not supported by Windows DDK
#pragma warning(disable:4115)
#pragma warning(disable:4201)
#pragma warning(disable:4214)
#pragma warning(disable:4365)
#pragma warning(disable:4668)
#pragma warning(disable:4820)
#include <excpt.h>
#include <ntdef.h>
#include <ntstatus.h>
#include <bugcodes.h>
#include <ntiologc.h>
#include <winapifamily.h>
_Analysis_mode_(_Analysis_internal_kernel_driver_)
_Analysis_mode_(_Analysis_local_leak_checks_)
__drv_Mode_impl(WDM_INCLUDED)
extern "C" {
typedef struct _ACCESS_STATE *PACCESS_STATE;
typedef struct _CALLBACK_OBJECT *PCALLBACK_OBJECT;
typedef struct _EPROCESS *PEPROCESS;
typedef struct _ETHREAD *PETHREAD;
typedef struct _IO_TIMER *PIO_TIMER;
typedef struct _KINTERRUPT *PKINTERRUPT;
typedef struct _KTHREAD *PKTHREAD, *PRKTHREAD;
typedef struct _KPROCESS *PKPROCESS, *PRKPROCESS;
typedef struct _OBJECT_TYPE *POBJECT_TYPE;
typedef struct _SECURITY_QUALITY_OF_SERVICE *PSECURITY_QUALITY_OF_SERVICE;
typedef struct _CONTEXT *PCONTEXT;
typedef struct _IO_STACK_LOCATION *PIO_STACK_LOCATION;
typedef struct _VPB *PVPB;
typedef struct _FILE_GET_QUOTA_INFORMATION *PFILE_GET_QUOTA_INFORMATION;
#include <mce.h>
extern NTSYSAPI volatile CCHAR KeNumberProcessors;
typedef struct _KSYSTEM_TIME {
    ULONG LowPart;
    LONG High1Time;
    LONG High2Time;
} KSYSTEM_TIME, *PKSYSTEM_TIME;
typedef LONG KPRIORITY;
typedef ULONG_PTR KSPIN_LOCK;
typedef KSPIN_LOCK *PKSPIN_LOCK;
typedef ULONG64 KSPIN_LOCK_QUEUE_NUMBER;
typedef struct _KSPIN_LOCK_QUEUE {
    struct _KSPIN_LOCK_QUEUE * volatile Next;
    PKSPIN_LOCK volatile Lock;
} KSPIN_LOCK_QUEUE, *PKSPIN_LOCK_QUEUE;
typedef struct _KLOCK_QUEUE_HANDLE {
    KSPIN_LOCK_QUEUE LockQueue;
    KIRQL OldIrql;
} KLOCK_QUEUE_HANDLE, *PKLOCK_QUEUE_HANDLE;
typedef enum _KPROFILE_SOURCE {
    ProfileTime,
    ProfileAlignmentFixup,
    ProfileTotalIssues,
    ProfilePipelineDry,
    ProfileLoadInstructions,
    ProfilePipelineFrozen,
    ProfileBranchInstructions,
    ProfileTotalNonissues,
    ProfileDcacheMisses,
    ProfileIcacheMisses,
    ProfileCacheMisses,
    ProfileBranchMispredictions,
    ProfileStoreInstructions,
    ProfileFpInstructions,
    ProfileIntegerInstructions,
    Profile2Issue,
    Profile3Issue,
    Profile4Issue,
    ProfileSpecialInstructions,
    ProfileTotalCycles,
    ProfileIcacheIssues,
    ProfileDcacheAccesses,
    ProfileMemoryBarrierCycles,
    ProfileLoadLinkedIssues,
    ProfileMaximum
} KPROFILE_SOURCE;
        RTL_SIZEOF_THROUGH_FIELD(DPC_WATCHDOG_GLOBAL_TRIAGE_BLOCK, DpcWatchdogProfileLength)
typedef struct _DPC_WATCHDOG_GLOBAL_TRIAGE_BLOCK {
    ULONG Signature;
    USHORT Revision;
    USHORT Size;
    USHORT DpcWatchdogProfileOffset;
    ULONG DpcWatchdogProfileLength;
} DPC_WATCHDOG_GLOBAL_TRIAGE_BLOCK, *PDPC_WATCHDOG_GLOBAL_TRIAGE_BLOCK;
typedef struct  _M128A {
    ULONGLONG Low;
    LONGLONG High;
} M128A, *PM128A;
typedef struct  _XSAVE_FORMAT {
    USHORT ControlWord;
    USHORT StatusWord;
    UCHAR TagWord;
    UCHAR Reserved1;
    USHORT ErrorOpcode;
    ULONG ErrorOffset;
    USHORT ErrorSelector;
    USHORT Reserved2;
    ULONG DataOffset;
    USHORT DataSelector;
    USHORT Reserved3;
    ULONG MxCsr;
    ULONG MxCsr_Mask;
    M128A FloatRegisters[8];
    M128A XmmRegisters[16];
    UCHAR Reserved4[96];
} XSAVE_FORMAT, *PXSAVE_FORMAT;
typedef struct _XSAVE_CET_U_FORMAT {
    ULONG64 Ia32CetUMsr;
    ULONG64 Ia32Pl3SspMsr;
} XSAVE_CET_U_FORMAT, *PXSAVE_CET_U_FORMAT;
typedef struct  _XSAVE_AREA_HEADER {
    ULONG64 Mask;
    ULONG64 CompactionMask;
    ULONG64 Reserved2[6];
} XSAVE_AREA_HEADER, *PXSAVE_AREA_HEADER;
typedef struct  _XSAVE_AREA {
    XSAVE_FORMAT LegacyState;
    XSAVE_AREA_HEADER Header;
} XSAVE_AREA, *PXSAVE_AREA;
typedef struct _XSTATE_CONTEXT {
    ULONG64 Mask;
    ULONG Length;
    ULONG Reserved1;
    _Field_size_bytes_opt_(Length) PXSAVE_AREA Area;
    PVOID Buffer;
} XSTATE_CONTEXT, *PXSTATE_CONTEXT;
#pragma warning( default:4164 )
C_ASSERT(sizeof(XSAVE_FORMAT) == MAXIMUM_SUPPORTED_EXTENSION);
typedef XSAVE_FORMAT XMM_SAVE_AREA32, *PXMM_SAVE_AREA32;
FORCEINLINE
CHAR
ReadRaw8 (
    _In_ _Interlocked_operand_ CHAR const volatile *Source
    )
{
    CHAR Value;
    Value = *(CHAR *)Source;
    return Value;
}
FORCEINLINE
VOID
WriteRaw8 (
    _Out_ _Interlocked_operand_ CHAR volatile *Destination,
    _In_ CHAR Value
    )
{
    *(CHAR *)Destination = Value;
    return;
}
FORCEINLINE
SHORT
ReadRaw16 (
    _In_ _Interlocked_operand_ SHORT const volatile *Source
    )
{
    SHORT Value;
    Value = *(SHORT *)Source;
    return Value;
}
FORCEINLINE
VOID
WriteRaw16 (
    _Out_ _Interlocked_operand_ SHORT volatile *Destination,
    _In_ SHORT Value
    )
{
    *(SHORT *)Destination = Value;
    return;
}
FORCEINLINE
LONG
ReadRaw (
    _In_ _Interlocked_operand_ LONG const volatile *Source
    )
{
    LONG Value;
    Value = *(LONG *)Source;
    return Value;
}
CFORCEINLINE
VOID
WriteRaw (
    _Out_ _Interlocked_operand_ LONG volatile *Destination,
    _In_ LONG Value
    )
{
    *(LONG *)Destination = Value;
    return;
}
FORCEINLINE
LONG64
ReadRaw64 (
    _In_ _Interlocked_operand_ LONG64 const volatile *Source
    )
{
    LONG64 Value;
    Value = *(LONG64 *)Source;
    return Value;
}
FORCEINLINE
VOID
WriteRaw64 (
    _Out_ _Interlocked_operand_ LONG64 volatile *Destination,
    _In_ LONG64 Value
    )
{
    *(LONG64 *)Destination = Value;
    return;
}
FORCEINLINE
UCHAR
ReadUCharAcquire (
    _In_ _Interlocked_operand_ UCHAR const volatile *Source
    )
{
    return (UCHAR)ReadAcquire8((PCHAR)Source);
}
FORCEINLINE
UCHAR
ReadUCharNoFence (
    _In_ _Interlocked_operand_ UCHAR const volatile *Source
    )
{
    return (UCHAR)ReadNoFence8((PCHAR)Source);
}
FORCEINLINE
UCHAR
ReadBooleanAcquire (
    _In_ _Interlocked_operand_ BOOLEAN const volatile *Source
    )
{
    return (BOOLEAN)ReadAcquire8((PCHAR)Source);
}
FORCEINLINE
UCHAR
ReadBooleanNoFence (
    _In_ _Interlocked_operand_ BOOLEAN const volatile *Source
    )
{
    return (BOOLEAN)ReadNoFence8((PCHAR)Source);
}
FORCEINLINE
UCHAR
ReadUCharRaw (
    _In_ _Interlocked_operand_ UCHAR const volatile *Source
    )
{
    return (UCHAR)ReadRaw8((PCHAR)Source);
}
FORCEINLINE
VOID
WriteUCharRelease (
    _Out_ _Interlocked_operand_ UCHAR volatile *Destination,
    _In_ UCHAR Value
    )
{
    WriteRelease8((PCHAR)Destination, (CHAR)Value);
    return;
}
FORCEINLINE
VOID
WriteUCharNoFence (
    _Out_ _Interlocked_operand_ UCHAR volatile *Destination,
    _In_ UCHAR Value
    )
{
    WriteNoFence8((PCHAR)Destination, (CHAR)Value);
    return;
}
FORCEINLINE
VOID
WriteBooleanRelease (
    _Out_ _Interlocked_operand_ BOOLEAN volatile *Destination,
    _In_ BOOLEAN Value
    )
{
    WriteRelease8((PCHAR)Destination, (CHAR)Value);
    return;
}
FORCEINLINE
VOID
WriteBooleanNoFence (
    _Out_ _Interlocked_operand_ BOOLEAN volatile *Destination,
    _In_ BOOLEAN Value
    )
{
    WriteNoFence8((PCHAR)Destination, (CHAR)Value);
    return;
}
FORCEINLINE
VOID
WriteUCharRaw (
    _Out_ _Interlocked_operand_ UCHAR volatile *Destination,
    _In_ UCHAR Value
    )
{
    WriteRaw8((PCHAR)Destination, (CHAR)Value);
    return;
}
FORCEINLINE
USHORT
ReadUShortAcquire (
    _In_ _Interlocked_operand_ USHORT const volatile *Source
    )
{
    return (USHORT)ReadAcquire16((PSHORT)Source);
}
FORCEINLINE
USHORT
ReadUShortNoFence (
    _In_ _Interlocked_operand_ USHORT const volatile *Source
    )
{
    return (USHORT)ReadNoFence16((PSHORT)Source);
}
FORCEINLINE
USHORT
ReadUShortRaw (
    _In_ _Interlocked_operand_ USHORT const volatile *Source
    )
{
    return (USHORT)ReadRaw16((PSHORT)Source);
}
FORCEINLINE
VOID
WriteUShortRelease (
    _Out_ _Interlocked_operand_ USHORT volatile *Destination,
    _In_ USHORT Value
    )
{
    WriteRelease16((PSHORT)Destination, (SHORT)Value);
    return;
}
FORCEINLINE
VOID
WriteUShortNoFence (
    _Out_ _Interlocked_operand_ USHORT volatile *Destination,
    _In_ USHORT Value
    )
{
    WriteNoFence16((PSHORT)Destination, (SHORT)Value);
    return;
}
FORCEINLINE
VOID
WriteUShortRaw (
    _Out_ _Interlocked_operand_ USHORT volatile *Destination,
    _In_ USHORT Value
    )
{
    WriteRaw16((PSHORT)Destination, (SHORT)Value);
    return;
}
FORCEINLINE
ULONG
ReadULongAcquire (
    _In_ _Interlocked_operand_ ULONG const volatile *Source
    )
{
    return (ULONG)ReadAcquire((PLONG)Source);
}
FORCEINLINE
ULONG
ReadULongNoFence (
    _In_ _Interlocked_operand_ ULONG const volatile *Source
    )
{
    return (ULONG)ReadNoFence((PLONG)Source);
}
FORCEINLINE
ULONG
ReadULongRaw (
    _In_ _Interlocked_operand_ ULONG const volatile *Source
    )
{
    return (ULONG)ReadRaw((PLONG)Source);
}
CFORCEINLINE
VOID
WriteULongRelease (
    _Out_ _Interlocked_operand_ ULONG volatile *Destination,
    _In_ ULONG Value
    )
{
    WriteRelease((PLONG)Destination, (LONG)Value);
    return;
}
FORCEINLINE
VOID
WriteULongNoFence (
    _Out_ _Interlocked_operand_ ULONG volatile *Destination,
    _In_ ULONG Value
    )
{
    WriteNoFence((PLONG)Destination, (LONG)Value);
    return;
}
FORCEINLINE
VOID
WriteULongRaw (
    _Out_ _Interlocked_operand_ ULONG volatile *Destination,
    _In_ ULONG Value
    )
{
    WriteRaw((PLONG)Destination, (LONG)Value);
    return;
}
FORCEINLINE
ULONG64
ReadULong64Acquire (
    _In_ _Interlocked_operand_ ULONG64 const volatile *Source
    )
{
    return (ULONG64)ReadAcquire64((PLONG64)Source);
}
FORCEINLINE
ULONG64
ReadULong64NoFence (
    _In_ _Interlocked_operand_ ULONG64 const volatile *Source
    )
{
    return (ULONG64)ReadNoFence64((PLONG64)Source);
}
FORCEINLINE
ULONG64
ReadULong64Raw (
    _In_ _Interlocked_operand_ ULONG64 const volatile *Source
    )
{
    return (ULONG64)ReadRaw64((PLONG64)Source);
}
CFORCEINLINE
VOID
WriteULong64Release (
    _Out_ _Interlocked_operand_ ULONG64 volatile *Destination,
    _In_ ULONG64 Value
    )
{
    WriteRelease64((PLONG64)Destination, (LONG64)Value);
    return;
}
FORCEINLINE
VOID
WriteULong64NoFence (
    _Out_ _Interlocked_operand_ ULONG64 volatile *Destination,
    _In_ ULONG64 Value
    )
{
    WriteNoFence64((PLONG64)Destination, (LONG64)Value);
    return;
}
FORCEINLINE
VOID
WriteULong64Raw (
    _Out_ _Interlocked_operand_ ULONG64 volatile *Destination,
    _In_ ULONG64 Value
    )
{
    WriteRaw64((PLONG64)Destination, (LONG64)Value);
    return;
}
FORCEINLINE
PVOID
ReadPointerAcquire (
    _In_ _Interlocked_operand_ PVOID const volatile *Source
    )
{
    return (PVOID)ReadAcquire64((PLONG64)Source);
}
CFORCEINLINE
PVOID
ReadPointerNoFence (
    _In_ _Interlocked_operand_ PVOID const volatile *Source
    )
{
    return (PVOID)ReadNoFence64((PLONG64)Source);
}
FORCEINLINE
PVOID
ReadPointerRaw (
    _In_ _Interlocked_operand_ PVOID const volatile *Source
    )
{
    return (PVOID)ReadRaw64((PLONG64)Source);
}
FORCEINLINE
VOID
WritePointerRelease (
    _Out_ _Interlocked_operand_ PVOID volatile *Destination,
    _In_ PVOID Value
    )
{
    WriteRelease64((PLONG64)Destination, (LONG64)Value);
    return;
}
FORCEINLINE
VOID
WritePointerNoFence (
    _Out_ _Interlocked_operand_ PVOID volatile *Destination,
    _In_ PVOID Value
    )
{
    WriteNoFence64((PLONG64)Destination, (LONG64)Value);
    return;
}
FORCEINLINE
VOID
WritePointerRaw (
    _Out_ _Interlocked_operand_ PVOID volatile *Destination,
    _In_ PVOID Value
    )
{
    WriteRaw64((PLONG64)Destination, (LONG64)Value);
    return;
}
extern "C" {
}
typedef PVOID PACCESS_TOKEN;
typedef PVOID PSECURITY_DESCRIPTOR;
typedef PVOID PSID;
typedef PVOID PCLAIMS_BLOB;
typedef ULONG ACCESS_MASK;
typedef ACCESS_MASK *PACCESS_MASK;
typedef struct _GENERIC_MAPPING {
    ACCESS_MASK GenericRead;
    ACCESS_MASK GenericWrite;
    ACCESS_MASK GenericExecute;
    ACCESS_MASK GenericAll;
} GENERIC_MAPPING;
typedef GENERIC_MAPPING *PGENERIC_MAPPING;
#include <pshpack4.h>
typedef struct _LUID_AND_ATTRIBUTES {
    LUID Luid;
    ULONG Attributes;
    } LUID_AND_ATTRIBUTES, * PLUID_AND_ATTRIBUTES;
typedef LUID_AND_ATTRIBUTES LUID_AND_ATTRIBUTES_ARRAY[ANYSIZE_ARRAY];
typedef LUID_AND_ATTRIBUTES_ARRAY *PLUID_AND_ATTRIBUTES_ARRAY;
#include <poppack.h>
typedef struct _ACL {
    UCHAR AclRevision;
    UCHAR Sbz1;
    USHORT AclSize;
    USHORT AceCount;
    USHORT Sbz2;
} ACL;
typedef ACL *PACL;



typedef struct _PRIVILEGE_SET {
    ULONG PrivilegeCount;
    ULONG Control;
    LUID_AND_ATTRIBUTES Privilege[ANYSIZE_ARRAY];
    } PRIVILEGE_SET, * PPRIVILEGE_SET;
typedef enum _SECURITY_IMPERSONATION_LEVEL {
    SecurityAnonymous,
    SecurityIdentification,
    SecurityImpersonation,
    SecurityDelegation
    } SECURITY_IMPERSONATION_LEVEL, * PSECURITY_IMPERSONATION_LEVEL;
typedef BOOLEAN SECURITY_CONTEXT_TRACKING_MODE,
                    * PSECURITY_CONTEXT_TRACKING_MODE;
typedef struct _SECURITY_QUALITY_OF_SERVICE {
    ULONG Length;
    SECURITY_IMPERSONATION_LEVEL ImpersonationLevel;
    SECURITY_CONTEXT_TRACKING_MODE ContextTrackingMode;
    BOOLEAN EffectiveOnly;
    } SECURITY_QUALITY_OF_SERVICE, * PSECURITY_QUALITY_OF_SERVICE;
typedef struct _SE_IMPERSONATION_STATE {
    PACCESS_TOKEN Token;
    BOOLEAN CopyOnOpen;
    BOOLEAN EffectiveOnly;
    SECURITY_IMPERSONATION_LEVEL Level;
} SE_IMPERSONATION_STATE, *PSE_IMPERSONATION_STATE;
typedef ULONG SECURITY_INFORMATION, *PSECURITY_INFORMATION;
typedef enum _SE_ADT_PARAMETER_TYPE {
    SeAdtParmTypeNone = 0,
    SeAdtParmTypeString,
    SeAdtParmTypeFileSpec,
    SeAdtParmTypeUlong,
    SeAdtParmTypeSid,
    SeAdtParmTypeLogonId,
    SeAdtParmTypeNoLogonId,
    SeAdtParmTypeAccessMask,
    SeAdtParmTypePrivs,
    SeAdtParmTypeObjectTypes,
    SeAdtParmTypeHexUlong,
    SeAdtParmTypePtr,
    SeAdtParmTypeTime,
    SeAdtParmTypeGuid,
    SeAdtParmTypeLuid,
    SeAdtParmTypeHexInt64,
    SeAdtParmTypeStringList,
    SeAdtParmTypeSidList,
    SeAdtParmTypeDuration,
    SeAdtParmTypeUserAccountControl,
    SeAdtParmTypeNoUac,
    SeAdtParmTypeMessage,
    SeAdtParmTypeDateTime,
    SeAdtParmTypeSockAddr,
    SeAdtParmTypeSD,
    SeAdtParmTypeLogonHours,
    SeAdtParmTypeLogonIdNoSid,
    SeAdtParmTypeUlongNoConv,
    SeAdtParmTypeSockAddrNoPort,
    SeAdtParmTypeAccessReason,
    SeAdtParmTypeStagingReason,
    SeAdtParmTypeResourceAttribute,
    SeAdtParmTypeClaims,
    SeAdtParmTypeLogonIdAsSid,
    SeAdtParmTypeMultiSzString,
    SeAdtParmTypeLogonIdEx,
} SE_ADT_PARAMETER_TYPE, *PSE_ADT_PARAMETER_TYPE;
#include <guiddef.h>
typedef struct _SE_ADT_OBJECT_TYPE {
    GUID ObjectType;
    USHORT Flags;
    USHORT Level;
    ACCESS_MASK AccessMask;
} SE_ADT_OBJECT_TYPE, *PSE_ADT_OBJECT_TYPE;
typedef struct _SE_ADT_PARAMETER_ARRAY_ENTRY {
    SE_ADT_PARAMETER_TYPE Type;
    ULONG Length;
    ULONG_PTR Data[2];
    PVOID Address;
} SE_ADT_PARAMETER_ARRAY_ENTRY, *PSE_ADT_PARAMETER_ARRAY_ENTRY;
typedef struct _SE_ADT_ACCESS_REASON{
    ACCESS_MASK AccessMask;
    ULONG AccessReasons[32];
    ULONG ObjectTypeIndex;
    ULONG AccessGranted;
    PSECURITY_DESCRIPTOR SecurityDescriptor;
} SE_ADT_ACCESS_REASON, *PSE_ADT_ACCESS_REASON;
typedef struct _SE_ADT_CLAIMS {
    ULONG Length;
    PCLAIMS_BLOB Claims;
} SE_ADT_CLAIMS, *PSE_ADT_CLAIMS;
typedef struct _SE_ADT_PARAMETER_ARRAY {
    ULONG CategoryId;
    ULONG AuditId;
    ULONG ParameterCount;
    ULONG Length;
    USHORT FlatSubCategoryId;
    USHORT Type;
    ULONG Flags;
    SE_ADT_PARAMETER_ARRAY_ENTRY Parameters[ SE_MAX_AUDIT_PARAMETERS ];
} SE_ADT_PARAMETER_ARRAY, *PSE_ADT_PARAMETER_ARRAY;
typedef struct _SE_ADT_PARAMETER_ARRAY_EX {
    ULONG CategoryId;
    ULONG AuditId;
    ULONG Version;
    ULONG ParameterCount;
    ULONG Length;
    USHORT FlatSubCategoryId;
    USHORT Type;
    ULONG Flags;
    SE_ADT_PARAMETER_ARRAY_ENTRY Parameters[ SE_MAX_AUDIT_PARAMETERS ];
} SE_ADT_PARAMETER_ARRAY_EX, *PSE_ADT_PARAMETER_ARRAY_EX;

















typedef struct _IO_STATUS_BLOCK {
    union {
        NTSTATUS Status;
        PVOID Pointer;
    } DUMMYUNIONNAME;
    ULONG_PTR Information;
} IO_STATUS_BLOCK, *PIO_STATUS_BLOCK;
typedef struct _IO_STATUS_BLOCK32 {
    NTSTATUS Status;
    ULONG Information;
} IO_STATUS_BLOCK32, *PIO_STATUS_BLOCK32;
typedef
VOID
(NTAPI *PIO_APC_ROUTINE) (
    _In_ PVOID ApcContext,
    _In_ PIO_STATUS_BLOCK IoStatusBlock,
    _In_ ULONG Reserved
    );
typedef enum _IO_SESSION_EVENT {
    IoSessionEventIgnore = 0,
    IoSessionEventCreated,
    IoSessionEventTerminated,
    IoSessionEventConnected,
    IoSessionEventDisconnected,
    IoSessionEventLogon,
    IoSessionEventLogoff,
    IoSessionEventMax
} IO_SESSION_EVENT, *PIO_SESSION_EVENT;
typedef enum _IO_SESSION_STATE {
    IoSessionStateCreated = 1,
    IoSessionStateInitialized,
    IoSessionStateConnected,
    IoSessionStateDisconnected,
    IoSessionStateDisconnectedLoggedOn,
    IoSessionStateLoggedOn,
    IoSessionStateLoggedOff,
    IoSessionStateTerminated,
    IoSessionStateMax
} IO_SESSION_STATE, *PIO_SESSION_STATE;
typedef struct _IO_SESSION_CONNECT_INFO {
    ULONG SessionId;
    BOOLEAN LocalSession;
} IO_SESSION_CONNECT_INFO, *PIO_SESSION_CONNECT_INFO;
typedef enum _FILE_INFORMATION_CLASS {
    FileDirectoryInformation = 1,
    FileFullDirectoryInformation,
    FileBothDirectoryInformation,
    FileBasicInformation,
    FileStandardInformation,
    FileInternalInformation,
    FileEaInformation,
    FileAccessInformation,
    FileNameInformation,
    FileRenameInformation,
    FileLinkInformation,
    FileNamesInformation,
    FileDispositionInformation,
    FilePositionInformation,
    FileFullEaInformation,
    FileModeInformation,
    FileAlignmentInformation,
    FileAllInformation,
    FileAllocationInformation,
    FileEndOfFileInformation,
    FileAlternateNameInformation,
    FileStreamInformation,
    FilePipeInformation,
    FilePipeLocalInformation,
    FilePipeRemoteInformation,
    FileMailslotQueryInformation,
    FileMailslotSetInformation,
    FileCompressionInformation,
    FileObjectIdInformation,
    FileCompletionInformation,
    FileMoveClusterInformation,
    FileQuotaInformation,
    FileReparsePointInformation,
    FileNetworkOpenInformation,
    FileAttributeTagInformation,
    FileTrackingInformation,
    FileIdBothDirectoryInformation,
    FileIdFullDirectoryInformation,
    FileValidDataLengthInformation,
    FileShortNameInformation,
    FileIoCompletionNotificationInformation,
    FileIoStatusBlockRangeInformation,
    FileIoPriorityHintInformation,
    FileSfioReserveInformation,
    FileSfioVolumeInformation,
    FileHardLinkInformation,
    FileProcessIdsUsingFileInformation,
    FileNormalizedNameInformation,
    FileNetworkPhysicalNameInformation,
    FileIdGlobalTxDirectoryInformation,
    FileIsRemoteDeviceInformation,
    FileUnusedInformation,
    FileNumaNodeInformation,
    FileStandardLinkInformation,
    FileRemoteProtocolInformation,
    FileRenameInformationBypassAccessCheck,
    FileLinkInformationBypassAccessCheck,
    FileVolumeNameInformation,
    FileIdInformation,
    FileIdExtdDirectoryInformation,
    FileReplaceCompletionInformation,
    FileHardLinkFullIdInformation,
    FileIdExtdBothDirectoryInformation,
    FileDispositionInformationEx,
    FileRenameInformationEx,
    FileRenameInformationExBypassAccessCheck,
    FileDesiredStorageClassInformation,
    FileStatInformation,
    FileMemoryPartitionInformation,
    FileStatLxInformation,
    FileCaseSensitiveInformation,
    FileLinkInformationEx,
    FileLinkInformationExBypassAccessCheck,
    FileStorageReserveIdInformation,
    FileCaseSensitiveInformationForceAccessCheck,
    FileMaximumInformation
} FILE_INFORMATION_CLASS, *PFILE_INFORMATION_CLASS;
typedef enum _DIRECTORY_NOTIFY_INFORMATION_CLASS {
    DirectoryNotifyInformation = 1,
    DirectoryNotifyExtendedInformation
} DIRECTORY_NOTIFY_INFORMATION_CLASS, *PDIRECTORY_NOTIFY_INFORMATION_CLASS;
typedef struct _FILE_BASIC_INFORMATION {
    LARGE_INTEGER CreationTime;
    LARGE_INTEGER LastAccessTime;
    LARGE_INTEGER LastWriteTime;
    LARGE_INTEGER ChangeTime;
    ULONG FileAttributes;
} FILE_BASIC_INFORMATION, *PFILE_BASIC_INFORMATION;
typedef struct _FILE_STANDARD_INFORMATION {
    LARGE_INTEGER AllocationSize;
    LARGE_INTEGER EndOfFile;
    ULONG NumberOfLinks;
    BOOLEAN DeletePending;
    BOOLEAN Directory;
} FILE_STANDARD_INFORMATION, *PFILE_STANDARD_INFORMATION;
typedef struct _FILE_STANDARD_INFORMATION_EX {
    LARGE_INTEGER AllocationSize;
    LARGE_INTEGER EndOfFile;
    ULONG NumberOfLinks;
    BOOLEAN DeletePending;
    BOOLEAN Directory;
    BOOLEAN AlternateStream;
    BOOLEAN MetadataAttribute;
} FILE_STANDARD_INFORMATION_EX, *PFILE_STANDARD_INFORMATION_EX;
typedef struct _FILE_POSITION_INFORMATION {
    LARGE_INTEGER CurrentByteOffset;
} FILE_POSITION_INFORMATION, *PFILE_POSITION_INFORMATION;
typedef struct _FILE_NETWORK_OPEN_INFORMATION {
    LARGE_INTEGER CreationTime;
    LARGE_INTEGER LastAccessTime;
    LARGE_INTEGER LastWriteTime;
    LARGE_INTEGER ChangeTime;
    LARGE_INTEGER AllocationSize;
    LARGE_INTEGER EndOfFile;
    ULONG FileAttributes;
} FILE_NETWORK_OPEN_INFORMATION, *PFILE_NETWORK_OPEN_INFORMATION;
typedef struct _FILE_FULL_EA_INFORMATION {
    ULONG NextEntryOffset;
    UCHAR Flags;
    UCHAR EaNameLength;
    USHORT EaValueLength;
    CHAR EaName[1];
} FILE_FULL_EA_INFORMATION, *PFILE_FULL_EA_INFORMATION;
typedef struct _FILE_SFIO_RESERVE_INFORMATION {
    ULONG RequestsPerPeriod;
    ULONG Period;
    BOOLEAN RetryFailures;
    BOOLEAN Discardable;
    ULONG RequestSize;
    ULONG NumOutstandingRequests;
} FILE_SFIO_RESERVE_INFORMATION, *PFILE_SFIO_RESERVE_INFORMATION;
typedef struct _FILE_SFIO_VOLUME_INFORMATION {
    ULONG MaximumRequestsPerPeriod;
    ULONG MinimumPeriod;
    ULONG MinimumTransferSize;
} FILE_SFIO_VOLUME_INFORMATION, *PFILE_SFIO_VOLUME_INFORMATION;
typedef enum _IO_PRIORITY_HINT {
    IoPriorityVeryLow = 0,
    IoPriorityLow,
    IoPriorityNormal,
    IoPriorityHigh,
    IoPriorityCritical,
    MaxIoPriorityTypes
} IO_PRIORITY_HINT;
typedef struct _FILE_IO_PRIORITY_HINT_INFORMATION {
    IO_PRIORITY_HINT PriorityHint;
} FILE_IO_PRIORITY_HINT_INFORMATION, *PFILE_IO_PRIORITY_HINT_INFORMATION;
typedef struct _FILE_IO_PRIORITY_HINT_INFORMATION_EX {
    IO_PRIORITY_HINT PriorityHint;
    BOOLEAN BoostOutstanding;
} FILE_IO_PRIORITY_HINT_INFORMATION_EX, *PFILE_IO_PRIORITY_HINT_INFORMATION_EX;
typedef struct _FILE_IO_COMPLETION_NOTIFICATION_INFORMATION {
    ULONG Flags;
} FILE_IO_COMPLETION_NOTIFICATION_INFORMATION, *PFILE_IO_COMPLETION_NOTIFICATION_INFORMATION;
typedef struct _FILE_PROCESS_IDS_USING_FILE_INFORMATION {
    ULONG NumberOfProcessIdsInList;
    ULONG_PTR ProcessIdList[1];
} FILE_PROCESS_IDS_USING_FILE_INFORMATION, *PFILE_PROCESS_IDS_USING_FILE_INFORMATION;
typedef struct _FILE_IS_REMOTE_DEVICE_INFORMATION {
    BOOLEAN IsRemote;
} FILE_IS_REMOTE_DEVICE_INFORMATION, *PFILE_IS_REMOTE_DEVICE_INFORMATION;
typedef struct _FILE_NUMA_NODE_INFORMATION {
    USHORT NodeNumber;
} FILE_NUMA_NODE_INFORMATION, *PFILE_NUMA_NODE_INFORMATION;
typedef struct _FILE_IOSTATUSBLOCK_RANGE_INFORMATION {
    PUCHAR IoStatusBlockRange;
    ULONG Length;
} FILE_IOSTATUSBLOCK_RANGE_INFORMATION, *PFILE_IOSTATUSBLOCK_RANGE_INFORMATION;
typedef struct _FILE_MEMORY_PARTITION_INFORMATION {
    ULONG_PTR OwnerPartitionHandle;
    union {
        struct {
            UCHAR NoCrossPartitionAccess;
            UCHAR Spare[3];
        } DUMMYSTRUCTNAME;
        ULONG AllFlags;
    } Flags;
} FILE_MEMORY_PARTITION_INFORMATION, *PFILE_MEMORY_PARTITION_INFORMATION;
typedef enum _FSINFOCLASS {
    FileFsVolumeInformation = 1,
    FileFsLabelInformation,
    FileFsSizeInformation,
    FileFsDeviceInformation,
    FileFsAttributeInformation,
    FileFsControlInformation,
    FileFsFullSizeInformation,
    FileFsObjectIdInformation,
    FileFsDriverPathInformation,
    FileFsVolumeFlagsInformation,
    FileFsSectorSizeInformation,
    FileFsDataCopyInformation,
    FileFsMetadataSizeInformation,
    FileFsFullSizeInformationEx,
    FileFsMaximumInformation
} FS_INFORMATION_CLASS, *PFS_INFORMATION_CLASS;
typedef struct _FILE_FS_DEVICE_INFORMATION {
    DEVICE_TYPE DeviceType;
    ULONG Characteristics;
} FILE_FS_DEVICE_INFORMATION, *PFILE_FS_DEVICE_INFORMATION;
typedef union _FILE_SEGMENT_ELEMENT {
    PVOID64 Buffer;
    ULONGLONG Alignment;
}FILE_SEGMENT_ELEMENT, *PFILE_SEGMENT_ELEMENT;
typedef enum _INTERFACE_TYPE {
    InterfaceTypeUndefined = -1,
    Internal,
    Isa,
    Eisa,
    MicroChannel,
    TurboChannel,
    PCIBus,
    VMEBus,
    NuBus,
    PCMCIABus,
    CBus,
    MPIBus,
    MPSABus,
    ProcessorInternal,
    InternalPowerBus,
    PNPISABus,
    PNPBus,
    Vmcs,
    ACPIBus,
    MaximumInterfaceType
}INTERFACE_TYPE, *PINTERFACE_TYPE;
typedef enum _DMA_WIDTH {
    Width8Bits,
    Width16Bits,
    Width32Bits,
    Width64Bits,
    WidthNoWrap,
    MaximumDmaWidth
}DMA_WIDTH, *PDMA_WIDTH;
typedef enum _DMA_SPEED {
    Compatible,
    TypeA,
    TypeB,
    TypeC,
    TypeF,
    MaximumDmaSpeed
}DMA_SPEED, *PDMA_SPEED;
typedef VOID (*PINTERFACE_REFERENCE)(PVOID Context);
typedef VOID (*PINTERFACE_DEREFERENCE)(PVOID Context);
typedef struct _IO_ERROR_LOG_PACKET {
    UCHAR MajorFunctionCode;
    UCHAR RetryCount;
    USHORT DumpDataSize;
    USHORT NumberOfStrings;
    USHORT StringOffset;
    USHORT EventCategory;
    NTSTATUS ErrorCode;
    ULONG UniqueErrorValue;
    NTSTATUS FinalStatus;
    ULONG SequenceNumber;
    ULONG IoControlCode;
    LARGE_INTEGER DeviceOffset;
    ULONG DumpData[1];
}IO_ERROR_LOG_PACKET, *PIO_ERROR_LOG_PACKET;
typedef struct _IO_ERROR_LOG_MESSAGE {
    USHORT Type;
    USHORT Size;
    USHORT DriverNameLength;
    LARGE_INTEGER TimeStamp;
    ULONG DriverNameOffset;
    IO_ERROR_LOG_PACKET EntryData;
}IO_ERROR_LOG_MESSAGE, *PIO_ERROR_LOG_MESSAGE;










































typedef struct _KEY_BASIC_INFORMATION {
    LARGE_INTEGER LastWriteTime;
    ULONG TitleIndex;
    ULONG NameLength;
    WCHAR Name[1];
} KEY_BASIC_INFORMATION, *PKEY_BASIC_INFORMATION;
typedef struct _KEY_NODE_INFORMATION {
    LARGE_INTEGER LastWriteTime;
    ULONG TitleIndex;
    ULONG ClassOffset;
    ULONG ClassLength;
    ULONG NameLength;
    WCHAR Name[1];
} KEY_NODE_INFORMATION, *PKEY_NODE_INFORMATION;
typedef struct _KEY_FULL_INFORMATION {
    LARGE_INTEGER LastWriteTime;
    ULONG TitleIndex;
    ULONG ClassOffset;
    ULONG ClassLength;
    ULONG SubKeys;
    ULONG MaxNameLen;
    ULONG MaxClassLen;
    ULONG Values;
    ULONG MaxValueNameLen;
    ULONG MaxValueDataLen;
    WCHAR Class[1];
} KEY_FULL_INFORMATION, *PKEY_FULL_INFORMATION;
typedef enum _KEY_INFORMATION_CLASS {
    KeyBasicInformation,
    KeyNodeInformation,
    KeyFullInformation,
    KeyNameInformation,
    KeyCachedInformation,
    KeyFlagsInformation,
    KeyVirtualizationInformation,
    KeyHandleTagsInformation,
    KeyTrustInformation,
    KeyLayerInformation,
    MaxKeyInfoClass
} KEY_INFORMATION_CLASS;
typedef struct _KEY_WRITE_TIME_INFORMATION {
    LARGE_INTEGER LastWriteTime;
} KEY_WRITE_TIME_INFORMATION, *PKEY_WRITE_TIME_INFORMATION;
typedef struct _KEY_WOW64_FLAGS_INFORMATION {
    ULONG UserFlags;
} KEY_WOW64_FLAGS_INFORMATION, *PKEY_WOW64_FLAGS_INFORMATION;
typedef struct _KEY_CONTROL_FLAGS_INFORMATION {
    ULONG ControlFlags;
} KEY_CONTROL_FLAGS_INFORMATION, *PKEY_CONTROL_FLAGS_INFORMATION;
typedef struct _KEY_SET_VIRTUALIZATION_INFORMATION {
    ULONG VirtualTarget : 1;
    ULONG VirtualStore : 1;
    ULONG VirtualSource : 1;
    ULONG Reserved : 29;
} KEY_SET_VIRTUALIZATION_INFORMATION, *PKEY_SET_VIRTUALIZATION_INFORMATION;
typedef enum _KEY_SET_INFORMATION_CLASS {
    KeyWriteTimeInformation,
    KeyWow64FlagsInformation,
    KeyControlFlagsInformation,
    KeySetVirtualizationInformation,
    KeySetDebugInformation,
    KeySetHandleTagsInformation,
    KeySetLayerInformation,
    MaxKeySetInfoClass
} KEY_SET_INFORMATION_CLASS;
typedef struct _KEY_VALUE_BASIC_INFORMATION {
    ULONG TitleIndex;
    ULONG Type;
    ULONG NameLength;
    WCHAR Name[1];
} KEY_VALUE_BASIC_INFORMATION, *PKEY_VALUE_BASIC_INFORMATION;
typedef struct _KEY_VALUE_FULL_INFORMATION {
    ULONG TitleIndex;
    ULONG Type;
    ULONG DataOffset;
    ULONG DataLength;
    ULONG NameLength;
    WCHAR Name[1];
} KEY_VALUE_FULL_INFORMATION, *PKEY_VALUE_FULL_INFORMATION;
typedef struct _KEY_VALUE_PARTIAL_INFORMATION {
    ULONG TitleIndex;
    ULONG Type;
    ULONG DataLength;
    _Field_size_bytes_(DataLength) UCHAR Data[1];
} KEY_VALUE_PARTIAL_INFORMATION, *PKEY_VALUE_PARTIAL_INFORMATION;
typedef struct _KEY_VALUE_PARTIAL_INFORMATION_ALIGN64 {
    ULONG Type;
    ULONG DataLength;
    _Field_size_bytes_(DataLength) UCHAR Data[1];
} KEY_VALUE_PARTIAL_INFORMATION_ALIGN64, *PKEY_VALUE_PARTIAL_INFORMATION_ALIGN64;
typedef struct _KEY_VALUE_LAYER_INFORMATION {
    ULONG IsTombstone : 1;
    ULONG Reserved : 31;
} KEY_VALUE_LAYER_INFORMATION, *PKEY_VALUE_LAYER_INFORMATION;
typedef struct _KEY_VALUE_ENTRY {
    PUNICODE_STRING ValueName;
    ULONG DataLength;
    ULONG DataOffset;
    ULONG Type;
} KEY_VALUE_ENTRY, *PKEY_VALUE_ENTRY;
typedef enum _KEY_VALUE_INFORMATION_CLASS {
    KeyValueBasicInformation,
    KeyValueFullInformation,
    KeyValuePartialInformation,
    KeyValueFullInformationAlign64,
    KeyValuePartialInformationAlign64,
    KeyValueLayerInformation,
    MaxKeyValueInfoClass
} KEY_VALUE_INFORMATION_CLASS;
typedef struct _KEY_TRUST_INFORMATION {
    ULONG TrustedKey : 1;
    ULONG Reserved : 31;
} KEY_TRUST_INFORMATION, *PKEY_TRUST_INFORMATION;
typedef struct _OBJECT_NAME_INFORMATION {
    UNICODE_STRING Name;
} OBJECT_NAME_INFORMATION, *POBJECT_NAME_INFORMATION;
typedef enum _SECTION_INHERIT {
    ViewShare = 1,
    ViewUnmap = 2
} SECTION_INHERIT;






typedef struct _MEM_ADDRESS_REQUIREMENTS {
    PVOID LowestStartingAddress;
    PVOID HighestEndingAddress;
    SIZE_T Alignment;
} MEM_ADDRESS_REQUIREMENTS, *PMEM_ADDRESS_REQUIREMENTS;
typedef enum MEM_EXTENDED_PARAMETER_TYPE {
    MemExtendedParameterInvalidType = 0,
    MemExtendedParameterAddressRequirements,
    MemExtendedParameterNumaNode,
    MemExtendedParameterPartitionHandle,
    MemExtendedParameterUserPhysicalHandle,
    MemExtendedParameterAttributeFlags,
    MemExtendedParameterMax
} MEM_EXTENDED_PARAMETER_TYPE, *PMEM_EXTENDED_PARAMETER_TYPE;
typedef struct  MEM_EXTENDED_PARAMETER {
    struct {
        ULONG64 Type : MEM_EXTENDED_PARAMETER_TYPE_BITS;
        ULONG64 Reserved : 64 - MEM_EXTENDED_PARAMETER_TYPE_BITS;
    } DUMMYSTRUCTNAME;
    union {
        ULONG64 ULong64;
        PVOID Pointer;
        SIZE_T Size;
        HANDLE Handle;
        ULONG ULong;
    } DUMMYUNIONNAME;
} MEM_EXTENDED_PARAMETER, *PMEM_EXTENDED_PARAMETER;
typedef enum MEM_SECTION_EXTENDED_PARAMETER_TYPE {
    MemSectionExtendedParameterInvalidType = 0,
    MemSectionExtendedParameterUserPhysicalFlags,
    MemSectionExtendedParameterNumaNode,
    MemSectionExtendedParameterMax
} MEM_SECTION_EXTENDED_PARAMETER_TYPE, *PMEM_SECTION_EXTENDED_PARAMETER_TYPE;
                                   0xFFFF)
                                   0xFFFF)
typedef struct _CLIENT_ID {
    HANDLE UniqueProcess;
    HANDLE UniqueThread;
} CLIENT_ID;
typedef CLIENT_ID *PCLIENT_ID;
DEFINE_GUID( GUID_MAX_POWER_SAVINGS, 0xA1841308, 0x3541, 0x4FAB, 0xBC, 0x81, 0xF7, 0x15, 0x56, 0xF2, 0x0B, 0x4A );
DEFINE_GUID( GUID_MIN_POWER_SAVINGS, 0x8C5E7FDA, 0xE8BF, 0x4A96, 0x9A, 0x85, 0xA6, 0xE2, 0x3A, 0x8C, 0x63, 0x5C );
DEFINE_GUID( GUID_TYPICAL_POWER_SAVINGS, 0x381B4222, 0xF694, 0x41F0, 0x96, 0x85, 0xFF, 0x5B, 0xB2, 0x60, 0xDF, 0x2E );
DEFINE_GUID( NO_SUBGROUP_GUID, 0xFEA3413E, 0x7E05, 0x4911, 0x9A, 0x71, 0x70, 0x03, 0x31, 0xF1, 0xC2, 0x94 );
DEFINE_GUID( ALL_POWERSCHEMES_GUID, 0x68A1E95E, 0x13EA, 0x41E1, 0x80, 0x11, 0x0C, 0x49, 0x6C, 0xA4, 0x90, 0xB0 );
DEFINE_GUID( GUID_POWERSCHEME_PERSONALITY, 0x245D8541, 0x3943, 0x4422, 0xB0, 0x25, 0x13, 0xA7, 0x84, 0xF6, 0x79, 0xB7 );
DEFINE_GUID( GUID_ACTIVE_POWERSCHEME, 0x31F9F286, 0x5084, 0x42FE, 0xB7, 0x20, 0x2B, 0x02, 0x64, 0x99, 0x37, 0x63 );
DEFINE_GUID(GUID_IDLE_RESILIENCY_SUBGROUP, 0x2e601130, 0x5351, 0x4d9d, 0x8e, 0x4, 0x25, 0x29, 0x66, 0xba, 0xd0, 0x54);
DEFINE_GUID(GUID_IDLE_RESILIENCY_PERIOD, 0xc42b79aa, 0xaa3a, 0x484b, 0xa9, 0x8f, 0x2c, 0xf3, 0x2a, 0xa9, 0xa, 0x28);
DEFINE_GUID(GUID_DEEP_SLEEP_ENABLED, 0xd502f7ee, 0x1dc7, 0x4efd, 0xa5, 0x5d, 0xf0, 0x4b, 0x6f, 0x5c, 0x5, 0x45);
DEFINE_GUID(GUID_DEEP_SLEEP_PLATFORM_STATE, 0xd23f2fb8, 0x9536, 0x4038, 0x9c, 0x94, 0x1c, 0xe0, 0x2e, 0x5c, 0x21, 0x52);
DEFINE_GUID(GUID_DISK_COALESCING_POWERDOWN_TIMEOUT, 0xc36f0eb4, 0x2988, 0x4a70, 0x8e, 0xee, 0x8, 0x84, 0xfc, 0x2c, 0x24, 0x33);
DEFINE_GUID(GUID_EXECUTION_REQUIRED_REQUEST_TIMEOUT, 0x3166bc41, 0x7e98, 0x4e03, 0xb3, 0x4e, 0xec, 0xf, 0x5f, 0x2b, 0x21, 0x8e);
DEFINE_GUID( GUID_VIDEO_SUBGROUP, 0x7516B95F, 0xF776, 0x4464, 0x8C, 0x53, 0x06, 0x16, 0x7F, 0x40, 0xCC, 0x99 );
DEFINE_GUID( GUID_VIDEO_POWERDOWN_TIMEOUT, 0x3C0BC021, 0xC8A8, 0x4E07, 0xA9, 0x73, 0x6B, 0x14, 0xCB, 0xCB, 0x2B, 0x7E );
DEFINE_GUID( GUID_VIDEO_ANNOYANCE_TIMEOUT, 0x82DBCF2D, 0xCD67, 0x40C5, 0xBF, 0xDC, 0x9F, 0x1A, 0x5C, 0xCD, 0x46, 0x63 );
DEFINE_GUID( GUID_VIDEO_ADAPTIVE_PERCENT_INCREASE, 0xEED904DF, 0xB142, 0x4183, 0xB1, 0x0B, 0x5A, 0x11, 0x97, 0xA3, 0x78, 0x64 );
DEFINE_GUID( GUID_VIDEO_DIM_TIMEOUT, 0x17aaa29b, 0x8b43, 0x4b94, 0xaa, 0xfe, 0x35, 0xf6, 0x4d, 0xaa, 0xf1, 0xee);
DEFINE_GUID( GUID_VIDEO_ADAPTIVE_POWERDOWN, 0x90959D22, 0xD6A1, 0x49B9, 0xAF, 0x93, 0xBC, 0xE8, 0x85, 0xAD, 0x33, 0x5B );
DEFINE_GUID( GUID_MONITOR_POWER_ON, 0x02731015, 0x4510, 0x4526, 0x99, 0xE6, 0xE5, 0xA1, 0x7E, 0xBD, 0x1A, 0xEA );
DEFINE_GUID(GUID_DEVICE_POWER_POLICY_VIDEO_BRIGHTNESS, 0xaded5e82L, 0xb909, 0x4619, 0x99, 0x49, 0xf5, 0xd7, 0x1d, 0xac, 0x0b, 0xcb);
DEFINE_GUID(GUID_DEVICE_POWER_POLICY_VIDEO_DIM_BRIGHTNESS, 0xf1fbfde2, 0xa960, 0x4165, 0x9f, 0x88, 0x50, 0x66, 0x79, 0x11, 0xce, 0x96);
DEFINE_GUID(GUID_VIDEO_CURRENT_MONITOR_BRIGHTNESS, 0x8ffee2c6, 0x2d01, 0x46be, 0xad, 0xb9, 0x39, 0x8a, 0xdd, 0xc5, 0xb4, 0xff);
DEFINE_GUID(GUID_VIDEO_ADAPTIVE_DISPLAY_BRIGHTNESS, 0xFBD9AA66, 0x9553, 0x4097, 0xBA, 0x44, 0xED, 0x6E, 0x9D, 0x65, 0xEA, 0xB8);
DEFINE_GUID(GUID_CONSOLE_DISPLAY_STATE, 0x6fe69556, 0x704a, 0x47a0, 0x8f, 0x24, 0xc2, 0x8d, 0x93, 0x6f, 0xda, 0x47);
DEFINE_GUID( GUID_ALLOW_DISPLAY_REQUIRED, 0xA9CEB8DA, 0xCD46, 0x44FB, 0xA9, 0x8B, 0x02, 0xAF, 0x69, 0xDE, 0x46, 0x23 );
DEFINE_GUID(GUID_VIDEO_CONSOLE_LOCK_TIMEOUT, 0x8ec4b3a5, 0x6868, 0x48c2, 0xbe, 0x75, 0x4f, 0x30, 0x44, 0xbe, 0x88, 0xa7);
DEFINE_GUID(GUID_ADVANCED_COLOR_QUALITY_BIAS, 0x684c3e69, 0xa4f7, 0x4014, 0x87, 0x54, 0xd4, 0x51, 0x79, 0xa5, 0x61, 0x67);
DEFINE_GUID(GUID_ADAPTIVE_POWER_BEHAVIOR_SUBGROUP, 0x8619b916, 0xe004, 0x4dd8, 0x9b, 0x66, 0xda, 0xe8, 0x6f, 0x80, 0x66, 0x98);
DEFINE_GUID(GUID_NON_ADAPTIVE_INPUT_TIMEOUT, 0x5adbbfbc, 0x74e, 0x4da1, 0xba, 0x38, 0xdb, 0x8b, 0x36, 0xb2, 0xc8, 0xf3);
DEFINE_GUID(GUID_ADAPTIVE_INPUT_CONTROLLER_STATE, 0xe98fae9, 0xf45a, 0x4de1, 0xa7, 0x57, 0x60, 0x31, 0xf1, 0x97, 0xf6, 0xea);
DEFINE_GUID( GUID_DISK_SUBGROUP, 0x0012EE47, 0x9041, 0x4B5D, 0x9B, 0x77, 0x53, 0x5F, 0xBA, 0x8B, 0x14, 0x42 );
DEFINE_GUID(GUID_DISK_MAX_POWER, 0x51dea550, 0xbb38, 0x4bc4, 0x99, 0x1b, 0xea, 0xcf, 0x37, 0xbe, 0x5e, 0xc8);
DEFINE_GUID( GUID_DISK_POWERDOWN_TIMEOUT, 0x6738E2C4, 0xE8A5, 0x4A42, 0xB1, 0x6A, 0xE0, 0x40, 0xE7, 0x69, 0x75, 0x6E );
DEFINE_GUID( GUID_DISK_IDLE_TIMEOUT, 0x58E39BA8, 0xB8E6, 0x4EF6, 0x90, 0xD0, 0x89, 0xAE, 0x32, 0xB2, 0x58, 0xD6 );
DEFINE_GUID( GUID_DISK_BURST_IGNORE_THRESHOLD, 0x80e3c60e, 0xbb94, 0x4ad8, 0xbb, 0xe0, 0x0d, 0x31, 0x95, 0xef, 0xc6, 0x63 );
DEFINE_GUID( GUID_DISK_ADAPTIVE_POWERDOWN, 0x396A32E1, 0x499A, 0x40B2, 0x91, 0x24, 0xA9, 0x6A, 0xFE, 0x70, 0x76, 0x67 );
DEFINE_GUID( GUID_SLEEP_SUBGROUP, 0x238C9FA8, 0x0AAD, 0x41ED, 0x83, 0xF4, 0x97, 0xBE, 0x24, 0x2C, 0x8F, 0x20 );
DEFINE_GUID( GUID_SLEEP_IDLE_THRESHOLD, 0x81cd32e0, 0x7833, 0x44f3, 0x87, 0x37, 0x70, 0x81, 0xf3, 0x8d, 0x1f, 0x70 );
DEFINE_GUID( GUID_STANDBY_TIMEOUT, 0x29F6C1DB, 0x86DA, 0x48C5, 0x9F, 0xDB, 0xF2, 0xB6, 0x7B, 0x1F, 0x44, 0xDA );
DEFINE_GUID( GUID_UNATTEND_SLEEP_TIMEOUT, 0x7bc4a2f9, 0xd8fc, 0x4469, 0xb0, 0x7b, 0x33, 0xeb, 0x78, 0x5a, 0xac, 0xa0 );
DEFINE_GUID( GUID_HIBERNATE_TIMEOUT, 0x9D7815A6, 0x7EE4, 0x497E, 0x88, 0x88, 0x51, 0x5A, 0x05, 0xF0, 0x23, 0x64 );
DEFINE_GUID( GUID_HIBERNATE_FASTS4_POLICY, 0x94AC6D29, 0x73CE, 0x41A6, 0x80, 0x9F, 0x63, 0x63, 0xBA, 0x21, 0xB4, 0x7E );
DEFINE_GUID( GUID_CRITICAL_POWER_TRANSITION, 0xB7A27025, 0xE569, 0x46c2, 0xA5, 0x04, 0x2B, 0x96, 0xCA, 0xD2, 0x25, 0xA1);
DEFINE_GUID( GUID_SYSTEM_AWAYMODE, 0x98A7F580, 0x01F7, 0x48AA, 0x9C, 0x0F, 0x44, 0x35, 0x2C, 0x29, 0xE5, 0xC0 );
DEFINE_GUID( GUID_ALLOW_AWAYMODE, 0x25dfa149, 0x5dd1, 0x4736, 0xb5, 0xab, 0xe8, 0xa3, 0x7b, 0x5b, 0x81, 0x87 );
DEFINE_GUID( GUID_USER_PRESENCE_PREDICTION, 0x82011705, 0xfb95, 0x4d46, 0x8d, 0x35, 0x40, 0x42, 0xb1, 0xd2, 0xd, 0xef );
DEFINE_GUID( GUID_STANDBY_BUDGET_GRACE_PERIOD, 0x60c07fe1, 0x0556, 0x45cf, 0x99, 0x03, 0xd5, 0x6e, 0x32, 0x21, 0x2, 0x42 );
DEFINE_GUID( GUID_STANDBY_BUDGET_PERCENT, 0x9fe527be, 0x1b70, 0x48da, 0x93, 0x0d, 0x7b, 0xcf, 0x17, 0xb4, 0x49, 0x90 );
DEFINE_GUID( GUID_STANDBY_RESERVE_GRACE_PERIOD, 0xc763ee92, 0x71e8, 0x4127, 0x84, 0xeb, 0xf6, 0xed, 0x04, 0x3a, 0x3e, 0x3d );
DEFINE_GUID( GUID_STANDBY_RESERVE_TIME, 0x468FE7E5, 0x1158, 0x46EC, 0x88, 0xbc, 0x5b, 0x96, 0xc9, 0xe4, 0x4f, 0xd0 );
DEFINE_GUID(GUID_STANDBY_RESET_PERCENT, 0x49cb11a5, 0x56e2, 0x4afb, 0x9d, 0x38, 0x3d, 0xf4, 0x78, 0x72, 0xe2, 0x1b);
DEFINE_GUID( GUID_ALLOW_STANDBY_STATES, 0xabfc2519, 0x3608, 0x4c2a, 0x94, 0xea, 0x17, 0x1b, 0x0e, 0xd5, 0x46, 0xab );
DEFINE_GUID( GUID_ALLOW_RTC_WAKE, 0xBD3B718A, 0x0680, 0x4D9D, 0x8A, 0xB2, 0xE1, 0xD2, 0xB4, 0xAC, 0x80, 0x6D );
DEFINE_GUID( GUID_LEGACY_RTC_MITIGATION, 0x1A34BDC3, 0x7E6B, 0x442E, 0xA9, 0xD0, 0x64, 0xB6, 0xEF, 0x37, 0x8E, 0x84 );
DEFINE_GUID( GUID_ALLOW_SYSTEM_REQUIRED, 0xA4B195F5, 0x8225, 0x47D8, 0x80, 0x12, 0x9D, 0x41, 0x36, 0x97, 0x86, 0xE2 );
DEFINE_GUID( GUID_POWER_SAVING_STATUS, 0xe00958c0, 0xc213, 0x4ace, 0xac, 0x77, 0xfe, 0xcc, 0xed, 0x2e, 0xee, 0xa5);
DEFINE_GUID( GUID_ENERGY_SAVER_SUBGROUP, 0xDE830923, 0xA562, 0x41AF, 0xA0, 0x86, 0xE3, 0xA2, 0xC6, 0xBA, 0xD2, 0xDA );
DEFINE_GUID( GUID_ENERGY_SAVER_BATTERY_THRESHOLD, 0xE69653CA, 0xCF7F, 0x4F05, 0xAA, 0x73, 0xCB, 0x83, 0x3F, 0xA9, 0x0A, 0xD4 );
DEFINE_GUID( GUID_ENERGY_SAVER_BRIGHTNESS, 0x13D09884, 0xF74E, 0x474A, 0xA8, 0x52, 0xB6, 0xBD, 0xE8, 0xAD, 0x03, 0xA8 );
DEFINE_GUID( GUID_ENERGY_SAVER_POLICY, 0x5c5bb349, 0xad29, 0x4ee2, 0x9d, 0xb, 0x2b, 0x25, 0x27, 0xf, 0x7a, 0x81 );
DEFINE_GUID( GUID_SYSTEM_BUTTON_SUBGROUP, 0x4F971E89, 0xEEBD, 0x4455, 0xA8, 0xDE, 0x9E, 0x59, 0x04, 0x0E, 0x73, 0x47 );
DEFINE_GUID( GUID_POWERBUTTON_ACTION, 0x7648EFA3, 0xDD9C, 0x4E3E, 0xB5, 0x66, 0x50, 0xF9, 0x29, 0x38, 0x62, 0x80 );
DEFINE_GUID( GUID_SLEEPBUTTON_ACTION, 0x96996BC0, 0xAD50, 0x47EC, 0x92, 0x3B, 0x6F, 0x41, 0x87, 0x4D, 0xD9, 0xEB );
DEFINE_GUID( GUID_USERINTERFACEBUTTON_ACTION, 0xA7066653, 0x8D6C, 0x40A8, 0x91, 0x0E, 0xA1, 0xF5, 0x4B, 0x84, 0xC7, 0xE5 );
DEFINE_GUID( GUID_LIDCLOSE_ACTION, 0x5CA83367, 0x6E45, 0x459F, 0xA2, 0x7B, 0x47, 0x6B, 0x1D, 0x01, 0xC9, 0x36 );
DEFINE_GUID( GUID_LIDOPEN_POWERSTATE, 0x99FF10E7, 0x23B1, 0x4C07, 0xA9, 0xD1, 0x5C, 0x32, 0x06, 0xD7, 0x41, 0xB4 );
DEFINE_GUID( GUID_BATTERY_SUBGROUP, 0xE73A048D, 0xBF27, 0x4F12, 0x97, 0x31, 0x8B, 0x20, 0x76, 0xE8, 0x89, 0x1F );
DEFINE_GUID( GUID_BATTERY_DISCHARGE_ACTION_0, 0x637EA02F, 0xBBCB, 0x4015, 0x8E, 0x2C, 0xA1, 0xC7, 0xB9, 0xC0, 0xB5, 0x46 );
DEFINE_GUID( GUID_BATTERY_DISCHARGE_LEVEL_0, 0x9A66D8D7, 0x4FF7, 0x4EF9, 0xB5, 0xA2, 0x5A, 0x32, 0x6C, 0xA2, 0xA4, 0x69 );
DEFINE_GUID( GUID_BATTERY_DISCHARGE_FLAGS_0, 0x5dbb7c9f, 0x38e9, 0x40d2, 0x97, 0x49, 0x4f, 0x8a, 0x0e, 0x9f, 0x64, 0x0f );
DEFINE_GUID( GUID_BATTERY_DISCHARGE_ACTION_1, 0xD8742DCB, 0x3E6A, 0x4B3C, 0xB3, 0xFE, 0x37, 0x46, 0x23, 0xCD, 0xCF, 0x06 );
DEFINE_GUID( GUID_BATTERY_DISCHARGE_LEVEL_1, 0x8183BA9A, 0xE910, 0x48DA, 0x87, 0x69, 0x14, 0xAE, 0x6D, 0xC1, 0x17, 0x0A );
DEFINE_GUID( GUID_BATTERY_DISCHARGE_FLAGS_1, 0xbcded951, 0x187b, 0x4d05, 0xbc, 0xcc, 0xf7, 0xe5, 0x19, 0x60, 0xc2, 0x58 );
DEFINE_GUID( GUID_BATTERY_DISCHARGE_ACTION_2, 0x421CBA38, 0x1A8E, 0x4881, 0xAC, 0x89, 0xE3, 0x3A, 0x8B, 0x04, 0xEC, 0xE4 );
DEFINE_GUID( GUID_BATTERY_DISCHARGE_LEVEL_2, 0x07A07CA2, 0xADAF, 0x40D7, 0xB0, 0x77, 0x53, 0x3A, 0xAD, 0xED, 0x1B, 0xFA );
DEFINE_GUID( GUID_BATTERY_DISCHARGE_FLAGS_2, 0x7fd2f0c4, 0xfeb7, 0x4da3, 0x81, 0x17, 0xe3, 0xfb, 0xed, 0xc4, 0x65, 0x82 );
DEFINE_GUID( GUID_BATTERY_DISCHARGE_ACTION_3, 0x80472613, 0x9780, 0x455E, 0xB3, 0x08, 0x72, 0xD3, 0x00, 0x3C, 0xF2, 0xF8 );
DEFINE_GUID( GUID_BATTERY_DISCHARGE_LEVEL_3, 0x58AFD5A6, 0xC2DD, 0x47D2, 0x9F, 0xBF, 0xEF, 0x70, 0xCC, 0x5C, 0x59, 0x65 );
DEFINE_GUID( GUID_BATTERY_DISCHARGE_FLAGS_3, 0x73613ccf, 0xdbfa, 0x4279, 0x83, 0x56, 0x49, 0x35, 0xf6, 0xbf, 0x62, 0xf3 );
DEFINE_GUID( GUID_PROCESSOR_SETTINGS_SUBGROUP, 0x54533251, 0x82BE, 0x4824, 0x96, 0xC1, 0x47, 0xB6, 0x0B, 0x74, 0x0D, 0x00 );
DEFINE_GUID( GUID_PROCESSOR_THROTTLE_POLICY, 0x57027304, 0x4AF6, 0x4104, 0x92, 0x60, 0xE3, 0xD9, 0x52, 0x48, 0xFC, 0x36 );
DEFINE_GUID( GUID_PROCESSOR_THROTTLE_MAXIMUM, 0xBC5038F7, 0x23E0, 0x4960, 0x96, 0xDA, 0x33, 0xAB, 0xAF, 0x59, 0x35, 0xEC );
DEFINE_GUID( GUID_PROCESSOR_THROTTLE_MAXIMUM_1, 0xBC5038F7, 0x23E0, 0x4960, 0x96, 0xDA, 0x33, 0xAB, 0xAF, 0x59, 0x35, 0xED );
DEFINE_GUID( GUID_PROCESSOR_THROTTLE_MINIMUM, 0x893DEE8E, 0x2BEF, 0x41E0, 0x89, 0xC6, 0xB5, 0x5D, 0x09, 0x29, 0x96, 0x4C );
DEFINE_GUID( GUID_PROCESSOR_THROTTLE_MINIMUM_1, 0x893DEE8E, 0x2BEF, 0x41E0, 0x89, 0xC6, 0xB5, 0x5D, 0x09, 0x29, 0x96, 0x4D );
DEFINE_GUID(GUID_PROCESSOR_FREQUENCY_LIMIT,
0x75b0ae3f, 0xbce0, 0x45a7, 0x8c, 0x89, 0xc9, 0x61, 0x1c, 0x25, 0xe1, 0x00);
DEFINE_GUID(GUID_PROCESSOR_FREQUENCY_LIMIT_1,
0x75b0ae3f, 0xbce0, 0x45a7, 0x8c, 0x89, 0xc9, 0x61, 0x1c, 0x25, 0xe1, 0x01);
DEFINE_GUID( GUID_PROCESSOR_ALLOW_THROTTLING, 0x3b04d4fd, 0x1cc7, 0x4f23, 0xab, 0x1c, 0xd1, 0x33, 0x78, 0x19, 0xc4, 0xbb );
DEFINE_GUID( GUID_PROCESSOR_IDLESTATE_POLICY, 0x68f262a7, 0xf621, 0x4069, 0xb9, 0xa5, 0x48, 0x74, 0x16, 0x9b, 0xe2, 0x3c);
DEFINE_GUID( GUID_PROCESSOR_PERFSTATE_POLICY, 0xBBDC3814, 0x18E9, 0x4463, 0x8A, 0x55, 0xD1, 0x97, 0x32, 0x7C, 0x45, 0xC0);
DEFINE_GUID( GUID_PROCESSOR_PERF_INCREASE_THRESHOLD, 0x06cadf0e, 0x64ed, 0x448a, 0x89, 0x27, 0xce, 0x7b, 0xf9, 0x0e, 0xb3, 0x5d );
DEFINE_GUID( GUID_PROCESSOR_PERF_INCREASE_THRESHOLD_1, 0x06cadf0e, 0x64ed, 0x448a, 0x89, 0x27, 0xce, 0x7b, 0xf9, 0x0e, 0xb3, 0x5e );
DEFINE_GUID( GUID_PROCESSOR_PERF_DECREASE_THRESHOLD, 0x12a0ab44, 0xfe28, 0x4fa9, 0xb3, 0xbd, 0x4b, 0x64, 0xf4, 0x49, 0x60, 0xa6 );
DEFINE_GUID( GUID_PROCESSOR_PERF_DECREASE_THRESHOLD_1, 0x12a0ab44, 0xfe28, 0x4fa9, 0xb3, 0xbd, 0x4b, 0x64, 0xf4, 0x49, 0x60, 0xa7 );
DEFINE_GUID( GUID_PROCESSOR_PERF_INCREASE_POLICY, 0x465e1f50, 0xb610, 0x473a, 0xab, 0x58, 0x0, 0xd1, 0x7, 0x7d, 0xc4, 0x18);
DEFINE_GUID( GUID_PROCESSOR_PERF_INCREASE_POLICY_1, 0x465e1f50, 0xb610, 0x473a, 0xab, 0x58, 0x0, 0xd1, 0x7, 0x7d, 0xc4, 0x19);
DEFINE_GUID( GUID_PROCESSOR_PERF_DECREASE_POLICY, 0x40fbefc7, 0x2e9d, 0x4d25, 0xa1, 0x85, 0xc, 0xfd, 0x85, 0x74, 0xba, 0xc6);
DEFINE_GUID( GUID_PROCESSOR_PERF_DECREASE_POLICY_1, 0x40fbefc7, 0x2e9d, 0x4d25, 0xa1, 0x85, 0xc, 0xfd, 0x85, 0x74, 0xba, 0xc7);
DEFINE_GUID( GUID_PROCESSOR_PERF_INCREASE_TIME, 0x984cf492, 0x3bed, 0x4488, 0xa8, 0xf9, 0x42, 0x86, 0xc9, 0x7b, 0xf5, 0xaa);
DEFINE_GUID( GUID_PROCESSOR_PERF_INCREASE_TIME_1, 0x984cf492, 0x3bed, 0x4488, 0xa8, 0xf9, 0x42, 0x86, 0xc9, 0x7b, 0xf5, 0xab);
DEFINE_GUID( GUID_PROCESSOR_PERF_DECREASE_TIME, 0xd8edeb9b, 0x95cf, 0x4f95, 0xa7, 0x3c, 0xb0, 0x61, 0x97, 0x36, 0x93, 0xc8);
DEFINE_GUID( GUID_PROCESSOR_PERF_DECREASE_TIME_1, 0xd8edeb9b, 0x95cf, 0x4f95, 0xa7, 0x3c, 0xb0, 0x61, 0x97, 0x36, 0x93, 0xc9);
DEFINE_GUID( GUID_PROCESSOR_PERF_TIME_CHECK, 0x4d2b0152, 0x7d5c, 0x498b, 0x88, 0xe2, 0x34, 0x34, 0x53, 0x92, 0xa2, 0xc5);
DEFINE_GUID(GUID_PROCESSOR_PERF_BOOST_POLICY,
0x45bcc044, 0xd885, 0x43e2, 0x86, 0x5, 0xee, 0xe, 0xc6, 0xe9, 0x6b, 0x59);
DEFINE_GUID(GUID_PROCESSOR_PERF_BOOST_MODE,
0xbe337238, 0xd82, 0x4146, 0xa9, 0x60, 0x4f, 0x37, 0x49, 0xd4, 0x70, 0xc7);
DEFINE_GUID(GUID_PROCESSOR_PERF_AUTONOMOUS_MODE,
0x8baa4a8a, 0x14c6, 0x4451, 0x8e, 0x8b, 0x14, 0xbd, 0xbd, 0x19, 0x75, 0x37);
DEFINE_GUID(GUID_PROCESSOR_PERF_ENERGY_PERFORMANCE_PREFERENCE,
0x36687f9e, 0xe3a5, 0x4dbf, 0xb1, 0xdc, 0x15, 0xeb, 0x38, 0x1c, 0x68, 0x63);
DEFINE_GUID(GUID_PROCESSOR_PERF_ENERGY_PERFORMANCE_PREFERENCE_1,
0x36687f9e, 0xe3a5, 0x4dbf, 0xb1, 0xdc, 0x15, 0xeb, 0x38, 0x1c, 0x68, 0x64);
DEFINE_GUID(GUID_PROCESSOR_PERF_AUTONOMOUS_ACTIVITY_WINDOW,
0xcfeda3d0, 0x7697, 0x4566, 0xa9, 0x22, 0xa9, 0x8, 0x6c, 0xd4, 0x9d, 0xfa);
DEFINE_GUID(GUID_PROCESSOR_DUTY_CYCLING,
0x4e4450b3, 0x6179, 0x4e91, 0xb8, 0xf1, 0x5b, 0xb9, 0x93, 0x8f, 0x81, 0xa1);
DEFINE_GUID( GUID_PROCESSOR_IDLE_ALLOW_SCALING, 0x6c2993b0, 0x8f48, 0x481f, 0xbc, 0xc6, 0x0, 0xdd, 0x27, 0x42, 0xaa, 0x6);
DEFINE_GUID( GUID_PROCESSOR_IDLE_DISABLE, 0x5d76a2ca, 0xe8c0, 0x402f, 0xa1, 0x33, 0x21, 0x58, 0x49, 0x2d, 0x58, 0xad);
DEFINE_GUID( GUID_PROCESSOR_IDLE_STATE_MAXIMUM, 0x9943e905, 0x9a30, 0x4ec1, 0x9b, 0x99, 0x44, 0xdd, 0x3b, 0x76, 0xf7, 0xa2);
DEFINE_GUID( GUID_PROCESSOR_IDLE_TIME_CHECK, 0xc4581c31, 0x89ab, 0x4597, 0x8e, 0x2b, 0x9c, 0x9c, 0xab, 0x44, 0xe, 0x6b);
DEFINE_GUID( GUID_PROCESSOR_IDLE_DEMOTE_THRESHOLD, 0x4b92d758, 0x5a24, 0x4851, 0xa4, 0x70, 0x81, 0x5d, 0x78, 0xae, 0xe1, 0x19);
DEFINE_GUID( GUID_PROCESSOR_IDLE_PROMOTE_THRESHOLD, 0x7b224883, 0xb3cc, 0x4d79, 0x81, 0x9f, 0x83, 0x74, 0x15, 0x2c, 0xbe, 0x7c);
DEFINE_GUID( GUID_PROCESSOR_CORE_PARKING_INCREASE_THRESHOLD, 0xdf142941, 0x20f3, 0x4edf, 0x9a, 0x4a, 0x9c, 0x83, 0xd3, 0xd7, 0x17, 0xd1 );
DEFINE_GUID( GUID_PROCESSOR_CORE_PARKING_DECREASE_THRESHOLD, 0x68dd2f27, 0xa4ce, 0x4e11, 0x84, 0x87, 0x37, 0x94, 0xe4, 0x13, 0x5d, 0xfa);
DEFINE_GUID( GUID_PROCESSOR_CORE_PARKING_INCREASE_POLICY, 0xc7be0679, 0x2817, 0x4d69, 0x9d, 0x02, 0x51, 0x9a, 0x53, 0x7e, 0xd0, 0xc6);
DEFINE_GUID( GUID_PROCESSOR_CORE_PARKING_DECREASE_POLICY, 0x71021b41, 0xc749, 0x4d21, 0xbe, 0x74, 0xa0, 0x0f, 0x33, 0x5d, 0x58, 0x2b);
DEFINE_GUID( GUID_PROCESSOR_CORE_PARKING_MAX_CORES, 0xea062031, 0x0e34, 0x4ff1, 0x9b, 0x6d, 0xeb, 0x10, 0x59, 0x33, 0x40, 0x28);
DEFINE_GUID( GUID_PROCESSOR_CORE_PARKING_MAX_CORES_1, 0xea062031, 0x0e34, 0x4ff1, 0x9b, 0x6d, 0xeb, 0x10, 0x59, 0x33, 0x40, 0x29);
DEFINE_GUID( GUID_PROCESSOR_CORE_PARKING_MIN_CORES, 0x0cc5b647, 0xc1df, 0x4637, 0x89, 0x1a, 0xde, 0xc3, 0x5c, 0x31, 0x85, 0x83);
DEFINE_GUID( GUID_PROCESSOR_CORE_PARKING_MIN_CORES_1, 0x0cc5b647, 0xc1df, 0x4637, 0x89, 0x1a, 0xde, 0xc3, 0x5c, 0x31, 0x85, 0x84);
DEFINE_GUID( GUID_PROCESSOR_CORE_PARKING_INCREASE_TIME, 0x2ddd5a84, 0x5a71, 0x437e, 0x91, 0x2a, 0xdb, 0x0b, 0x8c, 0x78, 0x87, 0x32);
DEFINE_GUID( GUID_PROCESSOR_CORE_PARKING_DECREASE_TIME, 0xdfd10d17, 0xd5eb, 0x45dd, 0x87, 0x7a, 0x9a, 0x34, 0xdd, 0xd1, 0x5c, 0x82);
DEFINE_GUID( GUID_PROCESSOR_CORE_PARKING_AFFINITY_HISTORY_DECREASE_FACTOR, 0x8f7b45e3, 0xc393, 0x480a, 0x87, 0x8c, 0xf6, 0x7a, 0xc3, 0xd0, 0x70, 0x82);
DEFINE_GUID( GUID_PROCESSOR_CORE_PARKING_AFFINITY_HISTORY_THRESHOLD, 0x5b33697b, 0xe89d, 0x4d38, 0xaa, 0x46, 0x9e, 0x7d, 0xfb, 0x7c, 0xd2, 0xf9);
DEFINE_GUID( GUID_PROCESSOR_CORE_PARKING_AFFINITY_WEIGHTING, 0xe70867f1, 0xfa2f, 0x4f4e, 0xae, 0xa1, 0x4d, 0x8a, 0x0b, 0xa2, 0x3b, 0x20);
DEFINE_GUID( GUID_PROCESSOR_CORE_PARKING_OVER_UTILIZATION_HISTORY_DECREASE_FACTOR, 0x1299023c, 0xbc28, 0x4f0a, 0x81, 0xec, 0xd3, 0x29, 0x5a, 0x8d, 0x81, 0x5d);
DEFINE_GUID( GUID_PROCESSOR_CORE_PARKING_OVER_UTILIZATION_HISTORY_THRESHOLD, 0x9ac18e92, 0xaa3c, 0x4e27, 0xb3, 0x07, 0x01, 0xae, 0x37, 0x30, 0x71, 0x29);
DEFINE_GUID( GUID_PROCESSOR_CORE_PARKING_OVER_UTILIZATION_WEIGHTING, 0x8809c2d8, 0xb155, 0x42d4, 0xbc, 0xda, 0x0d, 0x34, 0x56, 0x51, 0xb1, 0xdb);
DEFINE_GUID( GUID_PROCESSOR_CORE_PARKING_OVER_UTILIZATION_THRESHOLD, 0x943c8cb6, 0x6f93, 0x4227, 0xad, 0x87, 0xe9, 0xa3, 0xfe, 0xec, 0x08, 0xd1);
DEFINE_GUID( GUID_PROCESSOR_PARKING_CORE_OVERRIDE, 0xa55612aa, 0xf624, 0x42c6, 0xa4, 0x43, 0x73, 0x97, 0xd0, 0x64, 0xc0, 0x4f);
DEFINE_GUID( GUID_PROCESSOR_PARKING_PERF_STATE, 0x447235c7, 0x6a8d, 0x4cc0, 0x8e, 0x24, 0x9e, 0xaf, 0x70, 0xb9, 0x6e, 0x2b);
DEFINE_GUID( GUID_PROCESSOR_PARKING_PERF_STATE_1, 0x447235c7, 0x6a8d, 0x4cc0, 0x8e, 0x24, 0x9e, 0xaf, 0x70, 0xb9, 0x6e, 0x2c);
DEFINE_GUID( GUID_PROCESSOR_PARKING_CONCURRENCY_THRESHOLD, 0x2430ab6f, 0xa520, 0x44a2, 0x96, 0x01, 0xf7, 0xf2, 0x3b, 0x51, 0x34, 0xb1);
DEFINE_GUID( GUID_PROCESSOR_PARKING_HEADROOM_THRESHOLD, 0xf735a673, 0x2066, 0x4f80, 0xa0, 0xc5, 0xdd, 0xee, 0x0c, 0xf1, 0xbf, 0x5d);
DEFINE_GUID( GUID_PROCESSOR_PARKING_DISTRIBUTION_THRESHOLD, 0x4bdaf4e9, 0xd103, 0x46d7, 0xa5, 0xf0, 0x62, 0x80, 0x12, 0x16, 0x16, 0xef);
DEFINE_GUID( GUID_PROCESSOR_PERF_HISTORY, 0x7d24baa7, 0x0b84, 0x480f, 0x84, 0x0c, 0x1b, 0x07, 0x43, 0xc0, 0x0f, 0x5f);
DEFINE_GUID( GUID_PROCESSOR_PERF_HISTORY_1, 0x7d24baa7, 0x0b84, 0x480f, 0x84, 0x0c, 0x1b, 0x07, 0x43, 0xc0, 0x0f, 0x60);
DEFINE_GUID( GUID_PROCESSOR_PERF_INCREASE_HISTORY, 0x99b3ef01, 0x752f, 0x46a1, 0x80, 0xfb, 0x77, 0x30, 0x1, 0x1f, 0x23, 0x54);
DEFINE_GUID( GUID_PROCESSOR_PERF_DECREASE_HISTORY, 0x300f6f8, 0xabd6, 0x45a9, 0xb7, 0x4f, 0x49, 0x8, 0x69, 0x1a, 0x40, 0xb5);
DEFINE_GUID( GUID_PROCESSOR_PERF_CORE_PARKING_HISTORY, 0x77d7f282, 0x8f1a, 0x42cd, 0x85, 0x37, 0x45, 0x45, 0xa, 0x83, 0x9b, 0xe8);
DEFINE_GUID( GUID_PROCESSOR_PERF_LATENCY_HINT, 0x0822df31, 0x9c83, 0x441c, 0xa0, 0x79, 0x0d, 0xe4, 0xcf, 0x00, 0x9c, 0x7b);
DEFINE_GUID( GUID_PROCESSOR_PERF_LATENCY_HINT_PERF, 0x619b7505, 0x3b, 0x4e82, 0xb7, 0xa6, 0x4d, 0xd2, 0x9c, 0x30, 0x9, 0x71);
DEFINE_GUID( GUID_PROCESSOR_PERF_LATENCY_HINT_PERF_1, 0x619b7505, 0x3b, 0x4e82, 0xb7, 0xa6, 0x4d, 0xd2, 0x9c, 0x30, 0x9, 0x72);
DEFINE_GUID( GUID_PROCESSOR_LATENCY_HINT_MIN_UNPARK, 0x616cdaa5, 0x695e, 0x4545, 0x97, 0xad, 0x97, 0xdc, 0x2d, 0x1b, 0xdd, 0x88);
DEFINE_GUID( GUID_PROCESSOR_LATENCY_HINT_MIN_UNPARK_1, 0x616cdaa5, 0x695e, 0x4545, 0x97, 0xad, 0x97, 0xdc, 0x2d, 0x1b, 0xdd, 0x89);
DEFINE_GUID( GUID_PROCESSOR_DISTRIBUTE_UTILITY, 0xe0007330, 0xf589, 0x42ed, 0xa4, 0x01, 0x5d, 0xdb, 0x10, 0xe7, 0x85, 0xd3);
DEFINE_GUID( GUID_PROCESSOR_HETEROGENEOUS_POLICY, 0x7f2f5cfa, 0xf10c, 0x4823, 0xb5, 0xe1, 0xe9, 0x3a, 0xe8, 0x5f, 0x46, 0xb5);
DEFINE_GUID( GUID_PROCESSOR_HETERO_DECREASE_TIME, 0x7f2492b6, 0x60b1, 0x45e5, 0xae, 0x55, 0x77, 0x3f, 0x8c, 0xd5, 0xca, 0xec);
DEFINE_GUID( GUID_PROCESSOR_HETERO_INCREASE_TIME, 0x4009efa7, 0xe72d, 0x4cba, 0x9e, 0xdf, 0x91, 0x08, 0x4e, 0xa8, 0xcb, 0xc3);
DEFINE_GUID( GUID_PROCESSOR_HETERO_DECREASE_THRESHOLD, 0xf8861c27, 0x95e7, 0x475c, 0x86, 0x5b, 0x13, 0xc0, 0xcb, 0x3f, 0x9d, 0x6b);
DEFINE_GUID( GUID_PROCESSOR_HETERO_INCREASE_THRESHOLD, 0xb000397d, 0x9b0b, 0x483d, 0x98, 0xc9, 0x69, 0x2a, 0x60, 0x60, 0xcf, 0xbf);
DEFINE_GUID( GUID_PROCESSOR_CLASS0_FLOOR_PERF, 0xfddc842b, 0x8364, 0x4edc, 0x94, 0xcf, 0xc1, 0x7f, 0x60, 0xde, 0x1c, 0x80);
DEFINE_GUID( GUID_PROCESSOR_CLASS1_INITIAL_PERF, 0x1facfc65, 0xa930, 0x4bc5, 0x9f, 0x38, 0x50, 0x4e, 0xc0, 0x97, 0xbb, 0xc0);
DEFINE_GUID( GUID_PROCESSOR_THREAD_SCHEDULING_POLICY,
0x93b8b6dc, 0x698, 0x4d1c, 0x9e, 0xe4, 0x6, 0x44, 0xe9, 0x0, 0xc8, 0x5d);
DEFINE_GUID( GUID_PROCESSOR_SHORT_THREAD_SCHEDULING_POLICY,
0xbae08b81, 0x2d5e, 0x4688, 0xad, 0x6a, 0x13, 0x24, 0x33, 0x56, 0x65, 0x4b);
DEFINE_GUID( GUID_SYSTEM_COOLING_POLICY, 0x94D3A615, 0xA899, 0x4AC5, 0xAE, 0x2B, 0xE4, 0xD8, 0xF6, 0x34, 0x36, 0x7F);
DEFINE_GUID(GUID_PROCESSOR_RESPONSIVENESS_DISABLE_THRESHOLD,
0x38b8383d, 0xcce0, 0x4c79, 0x9e, 0x3e, 0x56, 0xa4, 0xf1, 0x7c, 0xc4, 0x80);
DEFINE_GUID(GUID_PROCESSOR_RESPONSIVENESS_DISABLE_THRESHOLD_1,
0x38b8383d, 0xcce0, 0x4c79, 0x9e, 0x3e, 0x56, 0xa4, 0xf1, 0x7c, 0xc4, 0x81);
DEFINE_GUID(GUID_PROCESSOR_RESPONSIVENESS_ENABLE_THRESHOLD,
0x3d44e256, 0x7222, 0x4415, 0xa9, 0xed, 0x9c, 0x45, 0xfa, 0x3d, 0xd8, 0x30);
DEFINE_GUID(GUID_PROCESSOR_RESPONSIVENESS_ENABLE_THRESHOLD_1,
0x3d44e256, 0x7222, 0x4415, 0xa9, 0xed, 0x9c, 0x45, 0xfa, 0x3d, 0xd8, 0x31);
DEFINE_GUID(GUID_PROCESSOR_RESPONSIVENESS_DISABLE_TIME,
0xf565999f, 0x3fb0, 0x411a, 0xa2, 0x26, 0x3f, 0x1, 0x98, 0xde, 0xc1, 0x30);
DEFINE_GUID(GUID_PROCESSOR_RESPONSIVENESS_DISABLE_TIME_1,
0xf565999f, 0x3fb0, 0x411a, 0xa2, 0x26, 0x3f, 0x1, 0x98, 0xde, 0xc1, 0x31);
DEFINE_GUID(GUID_PROCESSOR_RESPONSIVENESS_ENABLE_TIME,
0x3d915188, 0x7830, 0x49ae, 0xa7, 0x9a, 0xf, 0xb0, 0xa1, 0xe5, 0xa2, 0x0);
DEFINE_GUID(GUID_PROCESSOR_RESPONSIVENESS_ENABLE_TIME_1,
0x3d915188, 0x7830, 0x49ae, 0xa7, 0x9a, 0xf, 0xb0, 0xa1, 0xe5, 0xa2, 0x1);
DEFINE_GUID(GUID_PROCESSOR_RESPONSIVENESS_EPP_CEILING,
0x4427c73b, 0x9756, 0x4a5c, 0xb8, 0x4b, 0xc7, 0xbd, 0xa7, 0x9c, 0x73, 0x20);
DEFINE_GUID(GUID_PROCESSOR_RESPONSIVENESS_EPP_CEILING_1,
0x4427c73b, 0x9756, 0x4a5c, 0xb8, 0x4b, 0xc7, 0xbd, 0xa7, 0x9c, 0x73, 0x21);
DEFINE_GUID(GUID_PROCESSOR_RESPONSIVENESS_PERF_FLOOR,
0xce8e92ee, 0x6a86, 0x4572, 0xbf, 0xe0, 0x20, 0xc2, 0x1d, 0x3, 0xcd, 0x40);
DEFINE_GUID(GUID_PROCESSOR_RESPONSIVENESS_PERF_FLOOR_1,
0xce8e92ee, 0x6a86, 0x4572, 0xbf, 0xe0, 0x20, 0xc2, 0x1d, 0x3, 0xcd, 0x41);
DEFINE_GUID( GUID_LOCK_CONSOLE_ON_WAKE, 0x0E796BDB, 0x100D, 0x47D6, 0xA2, 0xD5, 0xF7, 0xD2, 0xDA, 0xA5, 0x1F, 0x51 );
DEFINE_GUID( GUID_DEVICE_IDLE_POLICY, 0x4faab71a, 0x92e5, 0x4726, 0xb5, 0x31, 0x22, 0x45, 0x59, 0x67, 0x2d, 0x19 );
DEFINE_GUID( GUID_CONNECTIVITY_IN_STANDBY, 0xF15576E8, 0x98B7, 0x4186, 0xB9, 0x44, 0xEA, 0xFA, 0x66, 0x44, 0x02, 0xD9 );
DEFINE_GUID( GUID_DISCONNECTED_STANDBY_MODE, 0x68AFB2D9, 0xEE95, 0x47A8, 0x8F, 0x50, 0x41, 0x15, 0x08, 0x80, 0x73, 0xB1 );
DEFINE_GUID( GUID_ACDC_POWER_SOURCE, 0x5D3E9A59, 0xE9D5, 0x4B00, 0xA6, 0xBD, 0xFF, 0x34, 0xFF, 0x51, 0x65, 0x48 );
DEFINE_GUID( GUID_LIDSWITCH_STATE_CHANGE, 0xBA3E0F4D, 0xB817, 0x4094, 0xA2, 0xD1, 0xD5, 0x63, 0x79, 0xE6, 0xA0, 0xF3 );
DEFINE_GUID( GUID_BATTERY_PERCENTAGE_REMAINING, 0xA7AD8041, 0xB45A, 0x4CAE, 0x87, 0xA3, 0xEE, 0xCB, 0xB4, 0x68, 0xA9, 0xE1 );
DEFINE_GUID( GUID_BATTERY_COUNT, 0x7d263f15, 0xfca4, 0x49e5, 0x85, 0x4b, 0xa9, 0xf2, 0xbf, 0xbd, 0x5c, 0x24 );
DEFINE_GUID( GUID_GLOBAL_USER_PRESENCE, 0x786e8a1d, 0xb427, 0x4344, 0x92, 0x7, 0x9, 0xe7, 0xb, 0xdc, 0xbe, 0xa9 );
DEFINE_GUID( GUID_SESSION_DISPLAY_STATUS, 0x2b84c20e, 0xad23, 0x4ddf, 0x93, 0xdb, 0x5, 0xff, 0xbd, 0x7e, 0xfc, 0xa5 );
DEFINE_GUID( GUID_SESSION_USER_PRESENCE, 0x3c0f4548, 0xc03f, 0x4c4d, 0xb9, 0xf2, 0x23, 0x7e, 0xde, 0x68, 0x63, 0x76 );
DEFINE_GUID( GUID_IDLE_BACKGROUND_TASK, 0x515C31D8, 0xF734, 0x163D, 0xA0, 0xFD, 0x11, 0xA0, 0x8C, 0x91, 0xE8, 0xF1 );
DEFINE_GUID( GUID_BACKGROUND_TASK_NOTIFICATION, 0xCF23F240, 0x2A54, 0x48D8, 0xB1, 0x14, 0xDE, 0x15, 0x18, 0xFF, 0x05, 0x2E );
DEFINE_GUID( GUID_APPLAUNCH_BUTTON, 0x1A689231, 0x7399, 0x4E9A, 0x8F, 0x99, 0xB7, 0x1F, 0x99, 0x9D, 0xB3, 0xFA );
DEFINE_GUID( GUID_PCIEXPRESS_SETTINGS_SUBGROUP, 0x501a4d13, 0x42af,0x4429, 0x9f, 0xd1, 0xa8, 0x21, 0x8c, 0x26, 0x8e, 0x20 );
DEFINE_GUID( GUID_PCIEXPRESS_ASPM_POLICY, 0xee12f906, 0xd277, 0x404b, 0xb6, 0xda, 0xe5, 0xfa, 0x1a, 0x57, 0x6d, 0xf5 );
DEFINE_GUID( GUID_ENABLE_SWITCH_FORCED_SHUTDOWN, 0x833a6b62, 0xdfa4, 0x46d1, 0x82, 0xf8, 0xe0, 0x9e, 0x34, 0xd0, 0x29, 0xd6 );
DEFINE_GUID(GUID_INTSTEER_SUBGROUP,
0x48672f38, 0x7a9a, 0x4bb2, 0x8b, 0xf8, 0x3d, 0x85, 0xbe, 0x19, 0xde, 0x4e);
DEFINE_GUID(GUID_INTSTEER_MODE,
0x2bfc24f9, 0x5ea2, 0x4801, 0x82, 0x13, 0x3d, 0xba, 0xe0, 0x1a, 0xa3, 0x9d);
DEFINE_GUID(GUID_INTSTEER_LOAD_PER_PROC_TRIGGER,
0x73cde64d, 0xd720, 0x4bb2, 0xa8, 0x60, 0xc7, 0x55, 0xaf, 0xe7, 0x7e, 0xf2);
DEFINE_GUID(GUID_INTSTEER_TIME_UNPARK_TRIGGER,
0xd6ba4903, 0x386f, 0x4c2c, 0x8a, 0xdb, 0x5c, 0x21, 0xb3, 0x32, 0x8d, 0x25);
DEFINE_GUID(GUID_GRAPHICS_SUBGROUP, 0x5fb4938d, 0x1ee8, 0x4b0f, 0x9a, 0x3c, 0x50, 0x36, 0xb0, 0xab, 0x99, 0x5c);
DEFINE_GUID(GUID_GPU_PREFERENCE_POLICY, 0xdd848b2a, 0x8a5d, 0x4451, 0x9a, 0xe2, 0x39, 0xcd, 0x41, 0x65, 0x8f, 0x6c);
DEFINE_GUID(GUID_MIXED_REALITY_MODE,
0x1e626b4e, 0xcf04, 0x4f8d, 0x9c, 0xc7, 0xc9, 0x7c, 0x5b, 0xf, 0x23, 0x91);
DEFINE_GUID(GUID_SPR_ACTIVE_SESSION_CHANGE,
0xe24ce38, 0xc393, 0x4742, 0xbd, 0xb1, 0x74, 0x4f, 0x4b, 0x9e, 0xe0, 0x8e);
typedef enum _SYSTEM_POWER_STATE {
    PowerSystemUnspecified = 0,
    PowerSystemWorking = 1,
    PowerSystemSleeping1 = 2,
    PowerSystemSleeping2 = 3,
    PowerSystemSleeping3 = 4,
    PowerSystemHibernate = 5,
    PowerSystemShutdown = 6,
    PowerSystemMaximum = 7
} SYSTEM_POWER_STATE, *PSYSTEM_POWER_STATE;
typedef enum {
    PowerActionNone = 0,
    PowerActionReserved,
    PowerActionSleep,
    PowerActionHibernate,
    PowerActionShutdown,
    PowerActionShutdownReset,
    PowerActionShutdownOff,
    PowerActionWarmEject,
    PowerActionDisplayOff
} POWER_ACTION, *PPOWER_ACTION;
typedef enum _DEVICE_POWER_STATE {
    PowerDeviceUnspecified = 0,
    PowerDeviceD0,
    PowerDeviceD1,
    PowerDeviceD2,
    PowerDeviceD3,
    PowerDeviceMaximum
} DEVICE_POWER_STATE, *PDEVICE_POWER_STATE;
typedef enum _MONITOR_DISPLAY_STATE {
    PowerMonitorOff = 0,
    PowerMonitorOn,
    PowerMonitorDim
} MONITOR_DISPLAY_STATE, *PMONITOR_DISPLAY_STATE;
typedef enum _USER_ACTIVITY_PRESENCE {
    PowerUserPresent = 0,
    PowerUserNotPresent,
    PowerUserInactive,
    PowerUserMaximum,
    PowerUserInvalid = PowerUserMaximum
} USER_ACTIVITY_PRESENCE, *PUSER_ACTIVITY_PRESENCE;
typedef union _POWER_STATE {
    SYSTEM_POWER_STATE SystemState;
    DEVICE_POWER_STATE DeviceState;
} POWER_STATE, *PPOWER_STATE;
typedef enum _POWER_STATE_TYPE {
    SystemPowerState = 0,
    DevicePowerState
} POWER_STATE_TYPE, *PPOWER_STATE_TYPE;
typedef struct _SYSTEM_POWER_STATE_CONTEXT {
    union {
        struct {
            ULONG Reserved1 : 8;
            ULONG TargetSystemState : 4;
            ULONG EffectiveSystemState : 4;
            ULONG CurrentSystemState : 4;
            ULONG IgnoreHibernationPath : 1;
            ULONG PseudoTransition : 1;
            ULONG KernelSoftReboot : 1;
            ULONG DirectedDripsTransition : 1;
            ULONG Reserved2 : 8;
        } DUMMYSTRUCTNAME;
        ULONG ContextAsUlong;
    } DUMMYUNIONNAME;
} SYSTEM_POWER_STATE_CONTEXT, *PSYSTEM_POWER_STATE_CONTEXT;
typedef struct _COUNTED_REASON_CONTEXT {
    ULONG Version;
    ULONG Flags;
    union {
        struct {
            UNICODE_STRING ResourceFileName;
            USHORT ResourceReasonId;
            ULONG StringCount;
            _Field_size_(StringCount) PUNICODE_STRING ReasonStrings;
        } DUMMYSTRUCTNAME;
        UNICODE_STRING SimpleString;
    } DUMMYUNIONNAME;
} COUNTED_REASON_CONTEXT, *PCOUNTED_REASON_CONTEXT;
        CTL_CODE(FILE_DEVICE_BATTERY, 0x0, METHOD_BUFFERED, FILE_READ_ACCESS)
        CTL_CODE(FILE_DEVICE_BATTERY, 0x1, METHOD_BUFFERED, FILE_WRITE_ACCESS)
        CTL_CODE(FILE_DEVICE_BATTERY, 0x2, METHOD_BUFFERED, FILE_WRITE_ACCESS)
typedef ULONG EXECUTION_STATE, *PEXECUTION_STATE;
typedef enum {
    LT_DONT_CARE,
    LT_LOWEST_LATENCY
} LATENCY_TIME;
typedef enum _POWER_REQUEST_TYPE {
    PowerRequestDisplayRequired,
    PowerRequestSystemRequired,
    PowerRequestAwayModeRequired,
    PowerRequestExecutionRequired
} POWER_REQUEST_TYPE, *PPOWER_REQUEST_TYPE;
typedef struct CM_Power_Data_s {
    ULONG PD_Size;
    DEVICE_POWER_STATE PD_MostRecentPowerState;
    ULONG PD_Capabilities;
    ULONG PD_D1Latency;
    ULONG PD_D2Latency;
    ULONG PD_D3Latency;
    DEVICE_POWER_STATE PD_PowerStateMapping[POWER_SYSTEM_MAXIMUM];
    SYSTEM_POWER_STATE PD_DeepestSystemWake;
} CM_POWER_DATA, *PCM_POWER_DATA;
typedef enum {
    SystemPowerPolicyAc,
    SystemPowerPolicyDc,
    VerifySystemPolicyAc,
    VerifySystemPolicyDc,
    SystemPowerCapabilities,
    SystemBatteryState,
    SystemPowerStateHandler,
    ProcessorStateHandler,
    SystemPowerPolicyCurrent,
    AdministratorPowerPolicy,
    SystemReserveHiberFile,
    ProcessorInformation,
    SystemPowerInformation,
    ProcessorStateHandler2,
    LastWakeTime,
    LastSleepTime,
    SystemExecutionState,
    SystemPowerStateNotifyHandler,
    ProcessorPowerPolicyAc,
    ProcessorPowerPolicyDc,
    VerifyProcessorPowerPolicyAc,
    VerifyProcessorPowerPolicyDc,
    ProcessorPowerPolicyCurrent,
    SystemPowerStateLogging,
    SystemPowerLoggingEntry,
    SetPowerSettingValue,
    NotifyUserPowerSetting,
    PowerInformationLevelUnused0,
    SystemMonitorHiberBootPowerOff,
    SystemVideoState,
    TraceApplicationPowerMessage,
    TraceApplicationPowerMessageEnd,
    ProcessorPerfStates,
    ProcessorIdleStates,
    ProcessorCap,
    SystemWakeSource,
    SystemHiberFileInformation,
    TraceServicePowerMessage,
    ProcessorLoad,
    PowerShutdownNotification,
    MonitorCapabilities,
    SessionPowerInit,
    SessionDisplayState,
    PowerRequestCreate,
    PowerRequestAction,
    GetPowerRequestList,
    ProcessorInformationEx,
    NotifyUserModeLegacyPowerEvent,
    GroupPark,
    ProcessorIdleDomains,
    WakeTimerList,
    SystemHiberFileSize,
    ProcessorIdleStatesHv,
    ProcessorPerfStatesHv,
    ProcessorPerfCapHv,
    ProcessorSetIdle,
    LogicalProcessorIdling,
    UserPresence,
    PowerSettingNotificationName,
    GetPowerSettingValue,
    IdleResiliency,
    SessionRITState,
    SessionConnectNotification,
    SessionPowerCleanup,
    SessionLockState,
    SystemHiberbootState,
    PlatformInformation,
    PdcInvocation,
    MonitorInvocation,
    FirmwareTableInformationRegistered,
    SetShutdownSelectedTime,
    SuspendResumeInvocation,
    PlmPowerRequestCreate,
    ScreenOff,
    CsDeviceNotification,
    PlatformRole,
    LastResumePerformance,
    DisplayBurst,
    ExitLatencySamplingPercentage,
    RegisterSpmPowerSettings,
    PlatformIdleStates,
    ProcessorIdleVeto,
    PlatformIdleVeto,
    SystemBatteryStatePrecise,
    ThermalEvent,
    PowerRequestActionInternal,
    BatteryDeviceState,
    PowerInformationInternal,
    ThermalStandby,
    SystemHiberFileType,
    PhysicalPowerButtonPress,
    QueryPotentialDripsConstraint,
    EnergyTrackerCreate,
    EnergyTrackerQuery,
    UpdateBlackBoxRecorder,
    PowerInformationLevelMaximum
} POWER_INFORMATION_LEVEL;
typedef enum {
    UserNotPresent = 0,
    UserPresent = 1,
    UserUnknown = 0xff
} POWER_USER_PRESENCE_TYPE, *PPOWER_USER_PRESENCE_TYPE;
typedef struct _POWER_USER_PRESENCE {
    POWER_USER_PRESENCE_TYPE UserPresence;
} POWER_USER_PRESENCE, *PPOWER_USER_PRESENCE;
typedef struct _POWER_SESSION_CONNECT {
    BOOLEAN Connected;
    BOOLEAN Console;
} POWER_SESSION_CONNECT, *PPOWER_SESSION_CONNECT;
typedef struct _POWER_SESSION_TIMEOUTS {
    ULONG InputTimeout;
    ULONG DisplayTimeout;
} POWER_SESSION_TIMEOUTS, *PPOWER_SESSION_TIMEOUTS;
typedef struct _POWER_SESSION_RIT_STATE {
    BOOLEAN Active;
    ULONG LastInputTime;
} POWER_SESSION_RIT_STATE, *PPOWER_SESSION_RIT_STATE;
typedef struct _POWER_SESSION_WINLOGON {
    ULONG SessionId;
    BOOLEAN Console;
    BOOLEAN Locked;
} POWER_SESSION_WINLOGON, *PPOWER_SESSION_WINLOGON;
typedef struct _POWER_IDLE_RESILIENCY {
    ULONG CoalescingTimeout;
    ULONG IdleResiliencyPeriod;
} POWER_IDLE_RESILIENCY, *PPOWER_IDLE_RESILIENCY;
typedef enum {
    MonitorRequestReasonUnknown,
    MonitorRequestReasonPowerButton,
    MonitorRequestReasonRemoteConnection,
    MonitorRequestReasonScMonitorpower,
    MonitorRequestReasonUserInput,
    MonitorRequestReasonAcDcDisplayBurst,
    MonitorRequestReasonUserDisplayBurst,
    MonitorRequestReasonPoSetSystemState,
    MonitorRequestReasonSetThreadExecutionState,
    MonitorRequestReasonFullWake,
    MonitorRequestReasonSessionUnlock,
    MonitorRequestReasonScreenOffRequest,
    MonitorRequestReasonIdleTimeout,
    MonitorRequestReasonPolicyChange,
    MonitorRequestReasonSleepButton,
    MonitorRequestReasonLid,
    MonitorRequestReasonBatteryCountChange,
    MonitorRequestReasonGracePeriod,
    MonitorRequestReasonPnP,
    MonitorRequestReasonDP,
    MonitorRequestReasonSxTransition,
    MonitorRequestReasonSystemIdle,
    MonitorRequestReasonNearProximity,
    MonitorRequestReasonThermalStandby,
    MonitorRequestReasonResumePdc,
    MonitorRequestReasonResumeS4,
    MonitorRequestReasonTerminal,
    MonitorRequestReasonPdcSignal,
    MonitorRequestReasonAcDcDisplayBurstSuppressed,
    MonitorRequestReasonSystemStateEntered,
    MonitorRequestReasonWinrt,
    MonitorRequestReasonUserInputKeyboard,
    MonitorRequestReasonUserInputMouse,
    MonitorRequestReasonUserInputTouch,
    MonitorRequestReasonUserInputPen,
    MonitorRequestReasonUserInputAccelerometer,
    MonitorRequestReasonUserInputHid,
    MonitorRequestReasonUserInputPoUserPresent,
    MonitorRequestReasonUserInputSessionSwitch,
    MonitorRequestReasonUserInputInitialization,
    MonitorRequestReasonPdcSignalWindowsMobilePwrNotif,
    MonitorRequestReasonPdcSignalWindowsMobileShell,
    MonitorRequestReasonPdcSignalHeyCortana,
    MonitorRequestReasonPdcSignalHolographicShell,
    MonitorRequestReasonPdcSignalFingerprint,
    MonitorRequestReasonDirectedDrips,
    MonitorRequestReasonMax
} POWER_MONITOR_REQUEST_REASON;
typedef enum _POWER_MONITOR_REQUEST_TYPE {
    MonitorRequestTypeOff,
    MonitorRequestTypeOnAndPresent,
    MonitorRequestTypeToggleOn
} POWER_MONITOR_REQUEST_TYPE;
typedef struct _POWER_MONITOR_INVOCATION {
    BOOLEAN Console;
    POWER_MONITOR_REQUEST_REASON RequestReason;
} POWER_MONITOR_INVOCATION, *PPOWER_MONITOR_INVOCATION;
typedef struct _RESUME_PERFORMANCE {
    ULONG PostTimeMs;
    ULONGLONG TotalResumeTimeMs;
    ULONGLONG ResumeCompleteTimestamp;
} RESUME_PERFORMANCE, *PRESUME_PERFORMANCE;
typedef enum {
    PoAc,
    PoDc,
    PoHot,
    PoConditionMaximum
} SYSTEM_POWER_CONDITION;
typedef struct {
    ULONG Version;
    GUID Guid;
    SYSTEM_POWER_CONDITION PowerCondition;
    ULONG DataLength;
    UCHAR Data[ANYSIZE_ARRAY];
} SET_POWER_SETTING_VALUE, *PSET_POWER_SETTING_VALUE;
typedef struct {
    GUID Guid;
} NOTIFY_USER_POWER_SETTING, *PNOTIFY_USER_POWER_SETTING;
typedef struct _APPLICATIONLAUNCH_SETTING_VALUE {
    LARGE_INTEGER ActivationTime;
    ULONG Flags;
    ULONG ButtonInstanceID;
} APPLICATIONLAUNCH_SETTING_VALUE, *PAPPLICATIONLAUNCH_SETTING_VALUE;
typedef enum _POWER_PLATFORM_ROLE {
    PlatformRoleUnspecified = 0,
    PlatformRoleDesktop,
    PlatformRoleMobile,
    PlatformRoleWorkstation,
    PlatformRoleEnterpriseServer,
    PlatformRoleSOHOServer,
    PlatformRoleAppliancePC,
    PlatformRolePerformanceServer,
    PlatformRoleSlate,
    PlatformRoleMaximum
} POWER_PLATFORM_ROLE, *PPOWER_PLATFORM_ROLE;
typedef struct _POWER_PLATFORM_INFORMATION {
    BOOLEAN AoAc;
} POWER_PLATFORM_INFORMATION, *PPOWER_PLATFORM_INFORMATION;
typedef struct {
    ULONG Granularity;
    ULONG Capacity;
} BATTERY_REPORTING_SCALE, *PBATTERY_REPORTING_SCALE;
_IRQL_requires_max_(APC_LEVEL)
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtPowerInformation(
    _In_ POWER_INFORMATION_LEVEL InformationLevel,
    _In_reads_bytes_opt_(InputBufferLength) PVOID InputBuffer,
    _In_ ULONG InputBufferLength,
    _Out_writes_bytes_opt_(OutputBufferLength) PVOID OutputBuffer,
    _In_ ULONG OutputBufferLength
    );











typedef enum _CM_SERVICE_NODE_TYPE {
    DriverType = SERVICE_KERNEL_DRIVER,
    FileSystemType = SERVICE_FILE_SYSTEM_DRIVER,
    Win32ServiceOwnProcess = SERVICE_WIN32_OWN_PROCESS,
    Win32ServiceShareProcess = SERVICE_WIN32_SHARE_PROCESS,
    AdapterType = SERVICE_ADAPTER,
    RecognizerType = SERVICE_RECOGNIZER_DRIVER
} SERVICE_NODE_TYPE;
typedef enum _CM_SERVICE_LOAD_TYPE {
    BootLoad = SERVICE_BOOT_START,
    SystemLoad = SERVICE_SYSTEM_START,
    AutoLoad = SERVICE_AUTO_START,
    DemandLoad = SERVICE_DEMAND_START,
    DisableLoad = SERVICE_DISABLED
} SERVICE_LOAD_TYPE;
typedef enum _CM_ERROR_CONTROL_TYPE {
    IgnoreError = SERVICE_ERROR_IGNORE,
    NormalError = SERVICE_ERROR_NORMAL,
    SevereError = SERVICE_ERROR_SEVERE,
    CriticalError = SERVICE_ERROR_CRITICAL
} SERVICE_ERROR_TYPE;








typedef int CM_RESOURCE_TYPE;
typedef enum _CM_SHARE_DISPOSITION {
    CmResourceShareUndetermined = 0,
    CmResourceShareDeviceExclusive,
    CmResourceShareDriverExclusive,
    CmResourceShareShared
} CM_SHARE_DISPOSITION;
#include "pshpack4.h"
typedef struct _CM_PARTIAL_RESOURCE_DESCRIPTOR {
    UCHAR Type;
    UCHAR ShareDisposition;
    USHORT Flags;
    union {
        struct {
            PHYSICAL_ADDRESS Start;
            ULONG Length;
        } Generic;
        struct {
            PHYSICAL_ADDRESS Start;
            ULONG Length;
        } Port;
        struct {
            ULONG Level;
            ULONG Vector;
            KAFFINITY Affinity;
        } Interrupt;
        struct {
            union {
               struct {
                   USHORT Reserved;
                   USHORT MessageCount;
                   ULONG Vector;
                   KAFFINITY Affinity;
               } Raw;
               struct {
                   ULONG Level;
                   ULONG Vector;
                   KAFFINITY Affinity;
               } Translated;
            } DUMMYUNIONNAME;
        } MessageInterrupt;
        struct {
            PHYSICAL_ADDRESS Start;
            ULONG Length;
        } Memory;
        struct {
            ULONG Channel;
            ULONG Port;
            ULONG Reserved1;
        } Dma;
        struct {
            ULONG Channel;
            ULONG RequestLine;
            UCHAR TransferWidth;
            UCHAR Reserved1;
            UCHAR Reserved2;
            UCHAR Reserved3;
        } DmaV3;
        struct {
            ULONG Data[3];
        } DevicePrivate;
        struct {
            ULONG Start;
            ULONG Length;
            ULONG Reserved;
        } BusNumber;
        struct {
            ULONG DataSize;
            ULONG Reserved1;
            ULONG Reserved2;
        } DeviceSpecificData;
        struct {
            PHYSICAL_ADDRESS Start;
            ULONG Length40;
        } Memory40;
        struct {
            PHYSICAL_ADDRESS Start;
            ULONG Length48;
        } Memory48;
        struct {
            PHYSICAL_ADDRESS Start;
            ULONG Length64;
        } Memory64;
        struct {
            UCHAR Class;
            UCHAR Type;
            UCHAR Reserved1;
            UCHAR Reserved2;
            ULONG IdLowPart;
            ULONG IdHighPart;
        } Connection;
    } u;
} CM_PARTIAL_RESOURCE_DESCRIPTOR, *PCM_PARTIAL_RESOURCE_DESCRIPTOR;
#include "poppack.h"
typedef struct _CM_PARTIAL_RESOURCE_LIST {
    USHORT Version;
    USHORT Revision;
    ULONG Count;
    CM_PARTIAL_RESOURCE_DESCRIPTOR PartialDescriptors[1];
} CM_PARTIAL_RESOURCE_LIST, *PCM_PARTIAL_RESOURCE_LIST;
typedef struct _CM_FULL_RESOURCE_DESCRIPTOR {
    INTERFACE_TYPE InterfaceType;
    ULONG BusNumber;
    CM_PARTIAL_RESOURCE_LIST PartialResourceList;
} CM_FULL_RESOURCE_DESCRIPTOR, *PCM_FULL_RESOURCE_DESCRIPTOR;
typedef struct _CM_RESOURCE_LIST {
    ULONG Count;
    CM_FULL_RESOURCE_DESCRIPTOR List[1];
} CM_RESOURCE_LIST, *PCM_RESOURCE_LIST;
typedef struct _DEVICE_FLAGS {
    ULONG Failed : 1;
    ULONG ReadOnly : 1;
    ULONG Removable : 1;
    ULONG ConsoleIn : 1;
    ULONG ConsoleOut : 1;
    ULONG Input : 1;
    ULONG Output : 1;
} DEVICE_FLAGS, *PDEVICE_FLAGS;
typedef struct _CM_COMPONENT_INFORMATION {
    DEVICE_FLAGS Flags;
    ULONG Version;
    ULONG Key;
    KAFFINITY AffinityMask;
} CM_COMPONENT_INFORMATION, *PCM_COMPONENT_INFORMATION;
typedef struct _CM_ROM_BLOCK {
    ULONG Address;
    ULONG Size;
} CM_ROM_BLOCK, *PCM_ROM_BLOCK;
#include "pshpack1.h"
typedef struct _CM_INT13_DRIVE_PARAMETER {
    USHORT DriveSelect;
    ULONG MaxCylinders;
    USHORT SectorsPerTrack;
    USHORT MaxHeads;
    USHORT NumberDrives;
} CM_INT13_DRIVE_PARAMETER, *PCM_INT13_DRIVE_PARAMETER;
typedef struct _CM_MCA_POS_DATA {
    USHORT AdapterId;
    UCHAR PosData1;
    UCHAR PosData2;
    UCHAR PosData3;
    UCHAR PosData4;
} CM_MCA_POS_DATA, *PCM_MCA_POS_DATA;
typedef struct _EISA_MEMORY_TYPE {
    UCHAR ReadWrite: 1;
    UCHAR Cached : 1;
    UCHAR Reserved0 :1;
    UCHAR Type:2;
    UCHAR Shared:1;
    UCHAR Reserved1 :1;
    UCHAR MoreEntries : 1;
} EISA_MEMORY_TYPE, *PEISA_MEMORY_TYPE;
typedef struct _EISA_MEMORY_CONFIGURATION {
    EISA_MEMORY_TYPE ConfigurationByte;
    UCHAR DataSize;
    USHORT AddressLowWord;
    UCHAR AddressHighByte;
    USHORT MemorySize;
} EISA_MEMORY_CONFIGURATION, *PEISA_MEMORY_CONFIGURATION;
typedef struct _EISA_IRQ_DESCRIPTOR {
    UCHAR Interrupt : 4;
    UCHAR Reserved :1;
    UCHAR LevelTriggered :1;
    UCHAR Shared : 1;
    UCHAR MoreEntries : 1;
} EISA_IRQ_DESCRIPTOR, *PEISA_IRQ_DESCRIPTOR;
typedef struct _EISA_IRQ_CONFIGURATION {
    EISA_IRQ_DESCRIPTOR ConfigurationByte;
    UCHAR Reserved;
} EISA_IRQ_CONFIGURATION, *PEISA_IRQ_CONFIGURATION;
typedef struct _DMA_CONFIGURATION_BYTE0 {
    UCHAR Channel : 3;
    UCHAR Reserved : 3;
    UCHAR Shared :1;
    UCHAR MoreEntries :1;
} DMA_CONFIGURATION_BYTE0;
typedef struct _DMA_CONFIGURATION_BYTE1 {
    UCHAR Reserved0 : 2;
    UCHAR TransferSize : 2;
    UCHAR Timing : 2;
    UCHAR Reserved1 : 2;
} DMA_CONFIGURATION_BYTE1;
typedef struct _EISA_DMA_CONFIGURATION {
    DMA_CONFIGURATION_BYTE0 ConfigurationByte0;
    DMA_CONFIGURATION_BYTE1 ConfigurationByte1;
} EISA_DMA_CONFIGURATION, *PEISA_DMA_CONFIGURATION;
typedef struct _EISA_PORT_DESCRIPTOR {
    UCHAR NumberPorts : 5;
    UCHAR Reserved :1;
    UCHAR Shared :1;
    UCHAR MoreEntries : 1;
} EISA_PORT_DESCRIPTOR, *PEISA_PORT_DESCRIPTOR;
typedef struct _EISA_PORT_CONFIGURATION {
    EISA_PORT_DESCRIPTOR Configuration;
    USHORT PortAddress;
} EISA_PORT_CONFIGURATION, *PEISA_PORT_CONFIGURATION;
typedef struct _CM_EISA_SLOT_INFORMATION {
    UCHAR ReturnCode;
    UCHAR ReturnFlags;
    UCHAR MajorRevision;
    UCHAR MinorRevision;
    USHORT Checksum;
    UCHAR NumberFunctions;
    UCHAR FunctionInformation;
    ULONG CompressedId;
} CM_EISA_SLOT_INFORMATION, *PCM_EISA_SLOT_INFORMATION;
typedef struct _CM_EISA_FUNCTION_INFORMATION {
    ULONG CompressedId;
    UCHAR IdSlotFlags1;
    UCHAR IdSlotFlags2;
    UCHAR MinorRevision;
    UCHAR MajorRevision;
    UCHAR Selections[26];
    UCHAR FunctionFlags;
    UCHAR TypeString[80];
    EISA_MEMORY_CONFIGURATION EisaMemory[9];
    EISA_IRQ_CONFIGURATION EisaIrq[7];
    EISA_DMA_CONFIGURATION EisaDma[4];
    EISA_PORT_CONFIGURATION EisaPort[20];
    UCHAR InitializationData[60];
} CM_EISA_FUNCTION_INFORMATION, *PCM_EISA_FUNCTION_INFORMATION;
typedef struct _CM_PNP_BIOS_DEVICE_NODE {
    USHORT Size;
    UCHAR Node;
    ULONG ProductId;
    UCHAR DeviceType[3];
    USHORT DeviceAttributes;
} CM_PNP_BIOS_DEVICE_NODE,*PCM_PNP_BIOS_DEVICE_NODE;
typedef struct _CM_PNP_BIOS_INSTALLATION_CHECK {
    UCHAR Signature[4];
    UCHAR Revision;
    UCHAR Length;
    USHORT ControlField;
    UCHAR Checksum;
    ULONG EventFlagAddress;
    USHORT RealModeEntryOffset;
    USHORT RealModeEntrySegment;
    USHORT ProtectedModeEntryOffset;
    ULONG ProtectedModeCodeBaseAddress;
    ULONG OemDeviceId;
    USHORT RealModeDataBaseAddress;
    ULONG ProtectedModeDataBaseAddress;
} CM_PNP_BIOS_INSTALLATION_CHECK, *PCM_PNP_BIOS_INSTALLATION_CHECK;
#include "poppack.h"




typedef struct _CM_SCSI_DEVICE_DATA {
    USHORT Version;
    USHORT Revision;
    UCHAR HostIdentifier;
} CM_SCSI_DEVICE_DATA, *PCM_SCSI_DEVICE_DATA;
typedef struct _CM_VIDEO_DEVICE_DATA {
    USHORT Version;
    USHORT Revision;
    ULONG VideoClock;
} CM_VIDEO_DEVICE_DATA, *PCM_VIDEO_DEVICE_DATA;
typedef struct _CM_SONIC_DEVICE_DATA {
    USHORT Version;
    USHORT Revision;
    USHORT DataConfigurationRegister;
    UCHAR EthernetAddress[8];
} CM_SONIC_DEVICE_DATA, *PCM_SONIC_DEVICE_DATA;
typedef struct _CM_SERIAL_DEVICE_DATA {
    USHORT Version;
    USHORT Revision;
    ULONG BaudClock;
} CM_SERIAL_DEVICE_DATA, *PCM_SERIAL_DEVICE_DATA;
typedef struct _CM_MONITOR_DEVICE_DATA {
    USHORT Version;
    USHORT Revision;
    USHORT HorizontalScreenSize;
    USHORT VerticalScreenSize;
    USHORT HorizontalResolution;
    USHORT VerticalResolution;
    USHORT HorizontalDisplayTimeLow;
    USHORT HorizontalDisplayTime;
    USHORT HorizontalDisplayTimeHigh;
    USHORT HorizontalBackPorchLow;
    USHORT HorizontalBackPorch;
    USHORT HorizontalBackPorchHigh;
    USHORT HorizontalFrontPorchLow;
    USHORT HorizontalFrontPorch;
    USHORT HorizontalFrontPorchHigh;
    USHORT HorizontalSyncLow;
    USHORT HorizontalSync;
    USHORT HorizontalSyncHigh;
    USHORT VerticalBackPorchLow;
    USHORT VerticalBackPorch;
    USHORT VerticalBackPorchHigh;
    USHORT VerticalFrontPorchLow;
    USHORT VerticalFrontPorch;
    USHORT VerticalFrontPorchHigh;
    USHORT VerticalSyncLow;
    USHORT VerticalSync;
    USHORT VerticalSyncHigh;
} CM_MONITOR_DEVICE_DATA, *PCM_MONITOR_DEVICE_DATA;
typedef struct _CM_FLOPPY_DEVICE_DATA {
    USHORT Version;
    USHORT Revision;
    CHAR Size[8];
    ULONG MaxDensity;
    ULONG MountDensity;
    UCHAR StepRateHeadUnloadTime;
    UCHAR HeadLoadTime;
    UCHAR MotorOffTime;
    UCHAR SectorLengthCode;
    UCHAR SectorPerTrack;
    UCHAR ReadWriteGapLength;
    UCHAR DataTransferLength;
    UCHAR FormatGapLength;
    UCHAR FormatFillCharacter;
    UCHAR HeadSettleTime;
    UCHAR MotorSettleTime;
    UCHAR MaximumTrackValue;
    UCHAR DataTransferRate;
} CM_FLOPPY_DEVICE_DATA, *PCM_FLOPPY_DEVICE_DATA;
typedef struct _CM_KEYBOARD_DEVICE_DATA {
    USHORT Version;
    USHORT Revision;
    UCHAR Type;
    UCHAR Subtype;
    USHORT KeyboardFlags;
} CM_KEYBOARD_DEVICE_DATA, *PCM_KEYBOARD_DEVICE_DATA;
typedef struct _CM_DISK_GEOMETRY_DEVICE_DATA {
    ULONG BytesPerSector;
    ULONG NumberOfCylinders;
    ULONG SectorsPerTrack;
    ULONG NumberOfHeads;
} CM_DISK_GEOMETRY_DEVICE_DATA, *PCM_DISK_GEOMETRY_DEVICE_DATA;
typedef enum _IRQ_DEVICE_POLICY {
    IrqPolicyMachineDefault = 0,
    IrqPolicyAllCloseProcessors,
    IrqPolicyOneCloseProcessor,
    IrqPolicyAllProcessorsInMachine,
    IrqPolicySpecifiedProcessors,
    IrqPolicySpreadMessagesAcrossAllProcessors,
    IrqPolicyAllProcessorsInMachineWhenSteered
} IRQ_DEVICE_POLICY, *PIRQ_DEVICE_POLICY;
typedef enum _IRQ_PRIORITY {
    IrqPriorityUndefined = 0,
    IrqPriorityLow,
    IrqPriorityNormal,
    IrqPriorityHigh
} IRQ_PRIORITY, *PIRQ_PRIORITY;
typedef enum _IRQ_GROUP_POLICY {
    GroupAffinityAllGroupZero = 0,
    GroupAffinityDontCare
} IRQ_GROUP_POLICY, *PIRQ_GROUP_POLICY;
typedef struct _IO_RESOURCE_DESCRIPTOR {
    UCHAR Option;
    UCHAR Type;
    UCHAR ShareDisposition;
    UCHAR Spare1;
    USHORT Flags;
    USHORT Spare2;
    union {
        struct {
            ULONG Length;
            ULONG Alignment;
            PHYSICAL_ADDRESS MinimumAddress;
            PHYSICAL_ADDRESS MaximumAddress;
        } Port;
        struct {
            ULONG Length;
            ULONG Alignment;
            PHYSICAL_ADDRESS MinimumAddress;
            PHYSICAL_ADDRESS MaximumAddress;
        } Memory;
        struct {
            ULONG MinimumVector;
            ULONG MaximumVector;
            IRQ_DEVICE_POLICY AffinityPolicy;
            IRQ_PRIORITY PriorityPolicy;
            KAFFINITY TargetedProcessors;
        } Interrupt;
        struct {
            ULONG MinimumChannel;
            ULONG MaximumChannel;
        } Dma;
        struct {
            ULONG RequestLine;
            ULONG Reserved;
            ULONG Channel;
            ULONG TransferWidth;
        } DmaV3;
        struct {
            ULONG Length;
            ULONG Alignment;
            PHYSICAL_ADDRESS MinimumAddress;
            PHYSICAL_ADDRESS MaximumAddress;
        } Generic;
        struct {
            ULONG Data[3];
        } DevicePrivate;
        struct {
            ULONG Length;
            ULONG MinBusNumber;
            ULONG MaxBusNumber;
            ULONG Reserved;
        } BusNumber;
        struct {
            ULONG Priority;
            ULONG Reserved1;
            ULONG Reserved2;
        } ConfigData;
        struct {
            ULONG Length40;
            ULONG Alignment40;
            PHYSICAL_ADDRESS MinimumAddress;
            PHYSICAL_ADDRESS MaximumAddress;
        } Memory40;
        struct {
            ULONG Length48;
            ULONG Alignment48;
            PHYSICAL_ADDRESS MinimumAddress;
            PHYSICAL_ADDRESS MaximumAddress;
        } Memory48;
        struct {
            ULONG Length64;
            ULONG Alignment64;
            PHYSICAL_ADDRESS MinimumAddress;
            PHYSICAL_ADDRESS MaximumAddress;
        } Memory64;
        struct {
            UCHAR Class;
            UCHAR Type;
            UCHAR Reserved1;
            UCHAR Reserved2;
            ULONG IdLowPart;
            ULONG IdHighPart;
        } Connection;
    } u;
} IO_RESOURCE_DESCRIPTOR, *PIO_RESOURCE_DESCRIPTOR;
typedef struct _IO_RESOURCE_LIST {
    USHORT Version;
    USHORT Revision;
    ULONG Count;
    IO_RESOURCE_DESCRIPTOR Descriptors[1];
} IO_RESOURCE_LIST, *PIO_RESOURCE_LIST;
typedef struct _IO_RESOURCE_REQUIREMENTS_LIST {
    ULONG ListSize;
    INTERFACE_TYPE InterfaceType;
    ULONG BusNumber;
    ULONG SlotNumber;
    ULONG Reserved[3];
    ULONG AlternativeLists;
    IO_RESOURCE_LIST List[1];
} IO_RESOURCE_REQUIREMENTS_LIST, *PIO_RESOURCE_REQUIREMENTS_LIST;
#include <string.h>
#pragma warning(push)
#pragma warning(disable:4324)
typedef struct  _SLIST_ENTRY {
    struct _SLIST_ENTRY *Next;
} SLIST_ENTRY, *PSLIST_ENTRY;
#pragma warning(pop)
typedef union  _SLIST_HEADER {
    struct {
        ULONGLONG Alignment;
        ULONGLONG Region;
    } DUMMYSTRUCTNAME;
    struct {
        ULONGLONG Depth:16;
        ULONGLONG Sequence:48;
        ULONGLONG Reserved:4;
        ULONGLONG NextEntry:60;
    } HeaderX64;
} SLIST_HEADER, *PSLIST_HEADER;
NTSYSAPI
__analysis_noreturn
VOID
NTAPI
RtlAssert(
    _In_ PVOID VoidFailedAssertion,
    _In_ PVOID VoidFileName,
    _In_ ULONG LineNumber,
    _In_opt_ PSTR MutableMessage
    );
#pragma warning(push)
#pragma warning(disable:4714)
#pragma warning(disable:4793)
#include <specstrings.h>
    (ListHead)->Flink = (ListHead)->Blink = PtrToUlong((ListHead)))
FORCEINLINE
VOID
InitializeListHead(
    _Out_ PLIST_ENTRY ListHead
    )
{
    ListHead->Flink = ListHead->Blink = ListHead;
    return;
}
_Must_inspect_result_
BOOLEAN
CFORCEINLINE
IsListEmpty(
    _In_ const LIST_ENTRY * ListHead
    )
{
    return (BOOLEAN)(ListHead->Flink == ListHead);
}
FORCEINLINE
BOOLEAN
RemoveEntryListUnsafe(
    _In_ PLIST_ENTRY Entry
    )
{
    PLIST_ENTRY Blink;
    PLIST_ENTRY Flink;
    Flink = Entry->Flink;
    Blink = Entry->Blink;
    Blink->Flink = Flink;
    Flink->Blink = Blink;
    return (BOOLEAN)(Flink == Blink);
}
FORCEINLINE
BOOLEAN
RemoveEntryList(
    _In_ PLIST_ENTRY Entry
    )
{
    PLIST_ENTRY Blink;
    PLIST_ENTRY Flink;
    Flink = Entry->Flink;
    Blink = Entry->Blink;
    Blink->Flink = Flink;
    Flink->Blink = Blink;
    return (BOOLEAN)(Flink == Blink);
}
FORCEINLINE
PLIST_ENTRY
RemoveHeadList(
    _Inout_ PLIST_ENTRY ListHead
    )
{
    PLIST_ENTRY Flink;
    PLIST_ENTRY Entry;
    Entry = ListHead->Flink;
    Flink = Entry->Flink;
    ListHead->Flink = Flink;
    Flink->Blink = ListHead;
    return Entry;
}
FORCEINLINE
PLIST_ENTRY
RemoveTailList(
    _Inout_ PLIST_ENTRY ListHead
    )
{
    PLIST_ENTRY Blink;
    PLIST_ENTRY Entry;
    Entry = ListHead->Blink;
    Blink = Entry->Blink;
    ListHead->Blink = Blink;
    Blink->Flink = ListHead;
    return Entry;
}
FORCEINLINE
VOID
InsertTailList(
    _Inout_ PLIST_ENTRY ListHead,
    _Inout_ __drv_aliasesMem PLIST_ENTRY Entry
    )
{
    PLIST_ENTRY Blink;
    Blink = ListHead->Blink;
    Entry->Flink = ListHead;
    Entry->Blink = Blink;
    Blink->Flink = Entry;
    ListHead->Blink = Entry;
    return;
}
FORCEINLINE
VOID
InsertHeadList(
    _Inout_ PLIST_ENTRY ListHead,
    _Inout_ __drv_aliasesMem PLIST_ENTRY Entry
    )
{
    PLIST_ENTRY Flink;
    Flink = ListHead->Flink;
    Entry->Flink = Flink;
    Entry->Blink = ListHead;
    Flink->Blink = Entry;
    ListHead->Flink = Entry;
    return;
}
FORCEINLINE
VOID
AppendTailList(
    _Inout_ PLIST_ENTRY ListHead,
    _Inout_ PLIST_ENTRY ListToAppend
    )
{
    PLIST_ENTRY ListEnd = ListHead->Blink;
    ListHead->Blink->Flink = ListToAppend;
    ListHead->Blink = ListToAppend->Blink;
    ListToAppend->Blink->Flink = ListHead;
    ListToAppend->Blink = ListEnd;
    return;
}
FORCEINLINE
PSINGLE_LIST_ENTRY
PopEntryList(
    _Inout_ PSINGLE_LIST_ENTRY ListHead
    )
{
    PSINGLE_LIST_ENTRY FirstEntry;
    FirstEntry = ListHead->Next;
    if (FirstEntry != NULL) {
        ListHead->Next = FirstEntry->Next;
    }
    return FirstEntry;
}
FORCEINLINE
VOID
PushEntryList(
    _Inout_ PSINGLE_LIST_ENTRY ListHead,
    _Inout_ __drv_aliasesMem PSINGLE_LIST_ENTRY Entry
    )
{
    Entry->Next = ListHead->Next;
    ListHead->Next = Entry;
    return;
}
#pragma warning(pop)
_IRQL_requires_max_(PASSIVE_LEVEL)
_At_(String->MaximumLength, _Const_)
NTSYSAPI
NTSTATUS
NTAPI
RtlIntegerToUnicodeString (
    _In_ ULONG Value,
    _In_opt_ ULONG Base,
    _Inout_ PUNICODE_STRING String
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
_At_(String->MaximumLength, _Const_)
NTSYSAPI
NTSTATUS
NTAPI
RtlInt64ToUnicodeString (
    _In_ ULONGLONG Value,
    _In_opt_ ULONG Base,
    _Inout_ PUNICODE_STRING String
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
RtlUnicodeStringToInteger (
    _In_ PCUNICODE_STRING String,
    _In_opt_ ULONG Base,
    _Out_ PULONG Value
    );
NTSTATUS
RtlUnicodeStringToInt64 (
    _In_ PCUNICODE_STRING String,
    _In_opt_ ULONG Base,
    _Out_ PLONG64 Number,
    _Out_opt_ PWSTR *EndPointer
    );
extern BOOLEAN NLS_MB_CODE_PAGE_TAG;
extern BOOLEAN NLS_MB_OEM_CODE_PAGE_TAG;
_IRQL_requires_max_(DISPATCH_LEVEL)
NTSYSAPI
VOID
NTAPI
RtlInitString(
    _Out_ PSTRING DestinationString,
    _In_opt_z_ __drv_aliasesMem PCSZ SourceString
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTSYSAPI
VOID
NTAPI
RtlInitAnsiString(
    _Out_ PANSI_STRING DestinationString,
    _In_opt_z_ __drv_aliasesMem PCSZ SourceString
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
_At_(DestinationString->Buffer, _Post_equal_to_(SourceString))
_At_(DestinationString->Length, _Post_equal_to_(_String_length_(SourceString) * sizeof(WCHAR)))
_At_(DestinationString->MaximumLength, _Post_equal_to_((_String_length_(SourceString)+1) * sizeof(WCHAR)))
NTSYSAPI
VOID
NTAPI
RtlInitUnicodeString(
    _Out_ PUNICODE_STRING DestinationString,
    _In_opt_z_ __drv_aliasesMem PCWSTR SourceString
    );
FORCEINLINE
VOID
RtlSanitizeUnicodeStringPadding(
    _Out_ PUNICODE_STRING String
    )
{
    ULONG PaddingSize;
    ULONG PaddingStart;
    PaddingStart = FIELD_OFFSET(UNICODE_STRING, MaximumLength) +
                   sizeof(String->MaximumLength);
    PaddingSize = FIELD_OFFSET(UNICODE_STRING, Buffer) - PaddingStart;
    memset((PVOID)((ULONG_PTR)String + PaddingStart), 0, PaddingSize);
}
_At_(UnicodeString->Buffer, _Post_equal_to_(Buffer))
_At_(UnicodeString->Length, _Post_equal_to_(0))
_At_(UnicodeString->MaximumLength, _Post_equal_to_(BufferSize))
FORCEINLINE
VOID
RtlInitEmptyUnicodeString(
    _Out_ PUNICODE_STRING UnicodeString,
    _Writable_bytes_(BufferSize)
    _When_(BufferSize != 0, _Notnull_)
    __drv_aliasesMem PWCHAR Buffer,
    _In_ USHORT BufferSize
    )
{
    memset(UnicodeString, 0, sizeof(*UnicodeString));
    UnicodeString->MaximumLength = BufferSize;
    UnicodeString->Buffer = Buffer;
}
_At_(AnsiString->Buffer, _Post_equal_to_(Buffer))
_At_(AnsiString->Length, _Post_equal_to_(0))
_At_(AnsiString->MaximumLength, _Post_equal_to_(BufferSize))
FORCEINLINE
VOID
RtlInitEmptyAnsiString(
    _Out_ PANSI_STRING AnsiString,
    _Pre_maybenull_ _Pre_readable_size_(BufferSize) __drv_aliasesMem PCHAR Buffer,
    _In_ USHORT BufferSize
    )
{
    memset(AnsiString, 0, sizeof(*AnsiString));
    AnsiString->MaximumLength = BufferSize;
    AnsiString->Buffer = Buffer;
}
typedef
_Function_class_(RTL_QUERY_REGISTRY_ROUTINE)
_IRQL_requires_max_(PASSIVE_LEVEL)
_IRQL_requires_same_
NTSTATUS
NTAPI
RTL_QUERY_REGISTRY_ROUTINE(
    _In_z_ PWSTR ValueName,
    _In_ ULONG ValueType,
    _In_reads_bytes_opt_(ValueLength) PVOID ValueData,
    _In_ ULONG ValueLength,
    _In_opt_ PVOID Context,
    _In_opt_ PVOID EntryContext
    );
typedef RTL_QUERY_REGISTRY_ROUTINE *PRTL_QUERY_REGISTRY_ROUTINE;
typedef struct _RTL_QUERY_REGISTRY_TABLE {
    PRTL_QUERY_REGISTRY_ROUTINE QueryRoutine;
    ULONG Flags;
    PWSTR Name;
    PVOID EntryContext;
    ULONG DefaultType;
    PVOID DefaultData;
    ULONG DefaultLength;
} RTL_QUERY_REGISTRY_TABLE, *PRTL_QUERY_REGISTRY_TABLE;
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
RtlQueryRegistryValues(
    _In_ ULONG RelativeTo,
    _In_ PCWSTR Path,
    _Inout_ _At_(*(*QueryTable).EntryContext, _Pre_unknown_)
        PRTL_QUERY_REGISTRY_TABLE QueryTable,
    _In_opt_ PVOID Context,
    _In_opt_ PVOID Environment
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
DECLSPEC_IMPORT
PVOID
NTAPI
MmGetSystemRoutineAddress (
    _In_ PUNICODE_STRING SystemRoutineName
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
FORCEINLINE
NTSTATUS
RtlxQueryRegistryValues(
    _In_ ULONG RelativeTo,
    _In_ PCWSTR Path,
    _Inout_ _At_(*(*QueryTable).EntryContext, _Pre_unknown_)
        PRTL_QUERY_REGISTRY_TABLE QueryTable,
    _In_opt_ PVOID Context,
    _In_opt_ PVOID Environment
    )
{
    typedef NTSTATUS NTAPI QUERYFN(
        ULONG, PCWSTR, PRTL_QUERY_REGISTRY_TABLE, PVOID, PVOID);
    UNICODE_STRING FunctionName;
    QUERYFN* QueryRoutine;
    RtlInitUnicodeString(&FunctionName, L"RtlQueryRegistryValuesEx");
#pragma warning(push)
#pragma warning(disable: 4055)
    QueryRoutine = (QUERYFN*)MmGetSystemRoutineAddress(&FunctionName);
#pragma warning(pop)
    if (QueryRoutine == NULL) {
        QueryRoutine = &RtlQueryRegistryValues;
    }
    return QueryRoutine(RelativeTo,
                        Path,
                        QueryTable,
                        Context,
                        Environment);
}
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
RtlWriteRegistryValue(
    _In_ ULONG RelativeTo,
    _In_ PCWSTR Path,
    _In_z_ PCWSTR ValueName,
    _In_ ULONG ValueType,
    _In_reads_bytes_opt_(ValueLength) PVOID ValueData,
    _In_ ULONG ValueLength
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
RtlDeleteRegistryValue(
    _In_ ULONG RelativeTo,
    _In_ PCWSTR Path,
    _In_z_ PCWSTR ValueName
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
RtlCreateRegistryKey(
    _In_ ULONG RelativeTo,
    _In_ PWSTR Path
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
_Must_inspect_result_
NTSYSAPI
NTSTATUS
NTAPI
RtlCheckRegistryKey(
    _In_ ULONG RelativeTo,
    _In_ PWSTR Path
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
RtlInitAnsiStringEx(
    _Out_ PANSI_STRING DestinationString,
    _In_opt_z_ __drv_aliasesMem PCSZ SourceString
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
RtlInitStringEx(
    _Out_ PSTRING DestinationString,
    _In_opt_z_ __drv_aliasesMem PCSZ SourceString
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
_Must_inspect_result_
NTSYSAPI
NTSTATUS
NTAPI
RtlAnsiStringToUnicodeString(
    _When_(AllocateDestinationString, _Out_ _At_(DestinationString->Buffer, __drv_allocatesMem(Mem)))
    _When_(!AllocateDestinationString, _Inout_)
        PUNICODE_STRING DestinationString,
    _In_ PCANSI_STRING SourceString,
    _In_ BOOLEAN AllocateDestinationString
    );
_When_(AllocateDestinationString,
       _At_(DestinationString->MaximumLength,
            _Out_range_(<=, (SourceString->MaximumLength / sizeof(WCHAR)))))
_When_(!AllocateDestinationString,
       _At_(DestinationString->Buffer, _Const_)
       _At_(DestinationString->MaximumLength, _Const_))
_IRQL_requires_max_(PASSIVE_LEVEL)
_When_(AllocateDestinationString, _Must_inspect_result_)
NTSYSAPI
NTSTATUS
NTAPI
RtlUnicodeStringToAnsiString(
    _When_(AllocateDestinationString, _Out_ _At_(DestinationString->Buffer, __drv_allocatesMem(Mem)))
    _When_(!AllocateDestinationString, _Inout_)
        PANSI_STRING DestinationString,
    _In_ PCUNICODE_STRING SourceString,
    _In_ BOOLEAN AllocateDestinationString
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
_Must_inspect_result_
NTSYSAPI
LONG
NTAPI
RtlCompareUnicodeStrings(
    _In_reads_(String1Length) PCWCH String1,
    _In_ SIZE_T String1Length,
    _In_reads_(String2Length) PCWCH String2,
    _In_ SIZE_T String2Length,
    _In_ BOOLEAN CaseInSensitive
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
_Must_inspect_result_
NTSYSAPI
LONG
NTAPI
RtlCompareUnicodeString(
    _In_ PCUNICODE_STRING String1,
    _In_ PCUNICODE_STRING String2,
    _In_ BOOLEAN CaseInSensitive
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
_Must_inspect_result_
NTSYSAPI
BOOLEAN
NTAPI
RtlEqualUnicodeString(
    _In_ PCUNICODE_STRING String1,
    _In_ PCUNICODE_STRING String2,
    _In_ BOOLEAN CaseInSensitive
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
RtlHashUnicodeString(
    _In_ PCUNICODE_STRING String,
    _In_ BOOLEAN CaseInSensitive,
    _In_ ULONG HashAlgorithm,
    _Out_ PULONG HashValue
    );
_Unchanged_(DestinationString->Buffer)
_Unchanged_(DestinationString->MaximumLength)
_At_(DestinationString->Length,
    _When_(SourceString->Length > DestinationString->MaximumLength,
        _Post_equal_to_(DestinationString->MaximumLength))
    _When_(SourceString->Length <= DestinationString->MaximumLength,
        _Post_equal_to_(SourceString->Length)))
NTSYSAPI
VOID
NTAPI
RtlCopyUnicodeString(
    _Inout_ PUNICODE_STRING DestinationString,
    _In_opt_ PCUNICODE_STRING SourceString
    );
_Success_(1)
_Unchanged_(Destination->MaximumLength)
_Unchanged_(Destination->Buffer)
_When_(_Old_(Destination->Length) + Source->Length <= Destination->MaximumLength,
    _At_(Destination->Length,
         _Post_equal_to_(_Old_(Destination->Length) + Source->Length))
    _At_(return, _Out_range_(==, 0)))
_When_(_Old_(Destination->Length) + Source->Length > Destination->MaximumLength,
    _Unchanged_(Destination->Length)
    _At_(return, _Out_range_(<, 0)))
NTSYSAPI
NTSTATUS
NTAPI
RtlAppendUnicodeStringToString (
    _Inout_ PUNICODE_STRING Destination,
    _In_ PCUNICODE_STRING Source
    );
_Success_(1)
_Unchanged_(Destination->MaximumLength)
_Unchanged_(Destination->Buffer)
_When_(_Old_(Destination->Length) + _String_length_(Source) * sizeof(WCHAR) <= Destination->MaximumLength,
    _At_(Destination->Length,
         _Post_equal_to_(_Old_(Destination->Length) + _String_length_(Source) * sizeof(WCHAR)))
    _At_(return, _Out_range_(==, 0)))
_When_(_Old_(Destination->Length) + _String_length_(Source) * sizeof(WCHAR) > Destination->MaximumLength,
    _Unchanged_(Destination->Length)
    _At_(return, _Out_range_(<, 0)))
NTSYSAPI
NTSTATUS
NTAPI
RtlAppendUnicodeToString (
    _Inout_ PUNICODE_STRING Destination,
    _In_opt_z_ PCWSTR Source
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
WCHAR
NTAPI
RtlUpcaseUnicodeChar(
    _In_ WCHAR SourceCharacter
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
WCHAR
NTAPI
RtlDowncaseUnicodeChar(
    _In_ WCHAR SourceCharacter
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
VOID
NTAPI
RtlFreeUnicodeString(
    _Inout_ _At_(UnicodeString->Buffer, _Frees_ptr_opt_)
        PUNICODE_STRING UnicodeString
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
VOID
NTAPI
RtlFreeAnsiString(
    _Inout_ _At_(AnsiString->Buffer, _Frees_ptr_opt_)
        PANSI_STRING AnsiString
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
ULONG
NTAPI
RtlxUnicodeStringToAnsiSize(
    _In_ PCUNICODE_STRING UnicodeString
    );


_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
ULONG
NTAPI
RtlxAnsiStringToUnicodeSize(
    _In_ PCANSI_STRING AnsiString
    );


_IRQL_requires_max_(PASSIVE_LEVEL)
_Must_inspect_result_
NTSYSAPI
NTSTATUS
NTAPI
RtlUnicodeToUTF8N(
    _Out_writes_bytes_to_(UTF8StringMaxByteCount, *UTF8StringActualByteCount) PCHAR UTF8StringDestination,
    _In_ ULONG UTF8StringMaxByteCount,
    _Out_ PULONG UTF8StringActualByteCount,
    _In_reads_bytes_(UnicodeStringByteCount) PCWCH UnicodeStringSource,
    _In_ ULONG UnicodeStringByteCount
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
_Must_inspect_result_
NTSYSAPI
NTSTATUS
NTAPI
RtlUTF8ToUnicodeN(
    _Out_writes_bytes_to_(UnicodeStringMaxByteCount, *UnicodeStringActualByteCount) PWSTR UnicodeStringDestination,
    _In_ ULONG UnicodeStringMaxByteCount,
    _Out_ PULONG UnicodeStringActualByteCount,
    _In_reads_bytes_(UTF8StringByteCount) PCCH UTF8StringSource,
    _In_ ULONG UTF8StringByteCount
    );
#include <guiddef.h>
    #define DEFINE_GUIDEX(name) EXTERN_C const CDECL GUID name
    #define STATICGUIDOF(guid) STATIC_##guid
    #define __IID_ALIGNED__
        inline int IsEqualGUIDAligned(REFGUID guid1, REFGUID guid2)
        {
            return ((*(PLONGLONG)(&guid1) == *(PLONGLONG)(&guid2)) && (*((PLONGLONG)(&guid1) + 1) == *((PLONGLONG)(&guid2) + 1)));
        }
_IRQL_requires_max_(PASSIVE_LEVEL)
_Must_inspect_result_
NTSYSAPI
NTSTATUS
NTAPI
RtlStringFromGUID(
    _In_ REFGUID Guid,
    _Out_ _At_(GuidString->Buffer, __drv_allocatesMem(Mem))
        PUNICODE_STRING GuidString
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
_Must_inspect_result_
NTSYSAPI
NTSTATUS
NTAPI
RtlGUIDFromString(
    _In_ PCUNICODE_STRING GuidString,
    _Out_ GUID* Guid
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
_Must_inspect_result_
NTSYSAPI
NTSTATUS
NTAPI
RtlGenerateClass5Guid(
    _In_ REFGUID NamespaceGuid,
    _In_reads_bytes_(BufferSize) PVOID Buffer,
    _In_ ULONG BufferSize,
    _Out_ GUID* Guid
    );
FORCEINLINE
PVOID
RtlSecureZeroMemory(
    _Out_writes_bytes_all_(cnt) PVOID ptr,
    _In_ SIZE_T cnt
    )
{
    volatile char *vptr = (volatile char *)ptr;
    while (cnt) {
        *vptr = 0;
        vptr++;
        cnt--;
    }
    return ptr;
}
NTSYSAPI
VOID
FASTCALL
RtlPrefetchMemoryNonTemporal(
    _In_ PVOID Source,
    _In_ SIZE_T Length
    );
__analysis_noreturn
VOID
NTAPI
DbgBreakPoint(
    VOID
    );
__analysis_noreturn
NTSYSAPI
VOID
NTAPI
DbgBreakPointWithStatus(
    _In_ ULONG Status
    );
ULONG
__cdecl
DbgPrint (
    _In_z_ _Printf_format_string_ PCSTR Format,
    ...
    );
NTSYSAPI
ULONG
__cdecl
DbgPrintEx (
    _In_ ULONG ComponentId,
    _In_ ULONG Level,
    _In_z_ _Printf_format_string_ PCSTR Format,
    ...
    );
NTSYSAPI
ULONG
NTAPI
vDbgPrintEx(
    _In_ ULONG ComponentId,
    _In_ ULONG Level,
    _In_z_ PCCH Format,
    _In_ va_list arglist
    );
NTSYSAPI
ULONG
NTAPI
vDbgPrintExWithPrefix (
    _In_z_ PCCH Prefix,
    _In_ ULONG ComponentId,
    _In_ ULONG Level,
    _In_z_ PCCH Format,
    _In_ va_list arglist
    );
NTSYSAPI
ULONG
__cdecl
DbgPrintReturnControlC (
    _In_z_ _Printf_format_string_ PCCH Format,
    ...
    );
NTSYSAPI
NTSTATUS
NTAPI
DbgQueryDebugFilterState (
    _In_ ULONG ComponentId,
    _In_ ULONG Level
    );
NTSYSAPI
NTSTATUS
NTAPI
DbgSetDebugFilterState (
    _In_ ULONG ComponentId,
    _In_ ULONG Level,
    _In_ BOOLEAN State
    );
typedef
VOID
(*PDEBUG_PRINT_CALLBACK) (
    _In_ PSTRING Output,
    _In_ ULONG ComponentId,
    _In_ ULONG Level
    );
NTSYSAPI
NTSTATUS
NTAPI
DbgSetDebugPrintCallback (
    _In_ PDEBUG_PRINT_CALLBACK DebugPrintCallback,
    _In_ BOOLEAN Enable
    );
DECLSPEC_DEPRECATED_DDK
__drv_preferredFunction("compiler support for 64 bit", "Obsolete")
__inline
LARGE_INTEGER
NTAPI_INLINE
RtlLargeIntegerAdd (
    _In_ LARGE_INTEGER Addend1,
    _In_ LARGE_INTEGER Addend2
    )
{
    LARGE_INTEGER Sum;
    Sum.QuadPart = Addend1.QuadPart + Addend2.QuadPart;
    return Sum;
}
DECLSPEC_DEPRECATED_DDK
__drv_preferredFunction("compiler support for 64 bit", "Obsolete")
__inline
LARGE_INTEGER
NTAPI_INLINE
RtlEnlargedIntegerMultiply (
    _In_ LONG Multiplicand,
    _In_ LONG Multiplier
    )
{
    LARGE_INTEGER Product;
    Product.QuadPart = (LONGLONG)Multiplicand * (ULONGLONG)Multiplier;
    return Product;
}
DECLSPEC_DEPRECATED_DDK
__drv_preferredFunction("compiler support for 64 bit", "Obsolete")
__inline
LARGE_INTEGER
NTAPI_INLINE
RtlEnlargedUnsignedMultiply (
    _In_ ULONG Multiplicand,
    _In_ ULONG Multiplier
    )
{
    LARGE_INTEGER Product;
    Product.QuadPart = (ULONGLONG)Multiplicand * (ULONGLONG)Multiplier;
    return Product;
}
DECLSPEC_DEPRECATED_DDK
__drv_preferredFunction("compiler support for 64 bit", "Obsolete")
__inline
ULONG
NTAPI_INLINE
RtlEnlargedUnsignedDivide (
    _In_ ULARGE_INTEGER Dividend,
    _In_ ULONG Divisor,
    _Out_opt_ PULONG Remainder
    )
{
    ULONG Quotient;
    Quotient = (ULONG)(Dividend.QuadPart / Divisor);
    if (ARGUMENT_PRESENT(Remainder)) {
        *Remainder = (ULONG)(Dividend.QuadPart % Divisor);
    }
    return Quotient;
}
DECLSPEC_DEPRECATED_DDK
__drv_preferredFunction("compiler support for 64 bit", "Obsolete")
__inline
LARGE_INTEGER
NTAPI_INLINE
RtlLargeIntegerNegate (
    _In_ LARGE_INTEGER Subtrahend
    )
{
    LARGE_INTEGER Difference;
    Difference.QuadPart = -Subtrahend.QuadPart;
    return Difference;
}
DECLSPEC_DEPRECATED_DDK
__drv_preferredFunction("compiler support for 64 bit", "Obsolete")
__inline
LARGE_INTEGER
NTAPI_INLINE
RtlLargeIntegerSubtract (
    _In_ LARGE_INTEGER Minuend,
    _In_ LARGE_INTEGER Subtrahend
    )
{
    LARGE_INTEGER Difference;
    Difference.QuadPart = Minuend.QuadPart - Subtrahend.QuadPart;
    return Difference;
}
DECLSPEC_DEPRECATED_DDK
__drv_preferredFunction("compiler support for 64 bit", "Obsolete")
__inline
LARGE_INTEGER
NTAPI_INLINE
RtlExtendedMagicDivide (
    _In_ LARGE_INTEGER Dividend,
    _In_ LARGE_INTEGER MagicDivisor,
    _In_ CCHAR ShiftCount
    )
{
    LARGE_INTEGER Quotient;
    if (Dividend.QuadPart >= 0) {
        Quotient.QuadPart = UnsignedMultiplyHigh(Dividend.QuadPart,
                                                 (ULONG64)MagicDivisor.QuadPart);
    } else {
        Quotient.QuadPart = UnsignedMultiplyHigh(-Dividend.QuadPart,
                                                 (ULONG64)MagicDivisor.QuadPart);
    }
    Quotient.QuadPart = (ULONG64)Quotient.QuadPart >> ShiftCount;
    if (Dividend.QuadPart < 0) {
        Quotient.QuadPart = - Quotient.QuadPart;
    }
    return Quotient;
}
DECLSPEC_DEPRECATED_DDK
__drv_preferredFunction("compiler support for 64 bit", "Obsolete")
__inline
LARGE_INTEGER
NTAPI_INLINE
RtlExtendedLargeIntegerDivide (
    _In_ LARGE_INTEGER Dividend,
    _In_ ULONG Divisor,
    _Out_opt_ PULONG Remainder
    )
{
    LARGE_INTEGER Quotient;
    Quotient.QuadPart = (ULONG64)Dividend.QuadPart / Divisor;
    if (ARGUMENT_PRESENT(Remainder)) {
        *Remainder = (ULONG)((ULONG64)Dividend.QuadPart % Divisor);
    }
    return Quotient;
}
DECLSPEC_DEPRECATED_DDK
__drv_preferredFunction("compiler support for 64 bit", "Obsolete")
__inline
LARGE_INTEGER
NTAPI_INLINE
RtlExtendedIntegerMultiply (
    _In_ LARGE_INTEGER Multiplicand,
    _In_ LONG Multiplier
    )
{
    LARGE_INTEGER Product;
    Product.QuadPart = Multiplicand.QuadPart * Multiplier;
    return Product;
}

DECLSPEC_DEPRECATED_DDK_WINXP
__inline
LARGE_INTEGER
NTAPI_INLINE
RtlConvertLongToLargeInteger (
    _In_ LONG SignedInteger
    )
{
    LARGE_INTEGER Result;
    Result.QuadPart = SignedInteger;
    return Result;
}
DECLSPEC_DEPRECATED_DDK_WINXP
__inline
LARGE_INTEGER
NTAPI_INLINE
RtlConvertUlongToLargeInteger (
    _In_ ULONG UnsignedInteger
    )
{
    LARGE_INTEGER Result;
    Result.QuadPart = UnsignedInteger;
    return Result;
}
DECLSPEC_DEPRECATED_DDK_WINXP
__drv_preferredFunction("compiler support for 64 bit", "Obsolete")
__inline
LARGE_INTEGER
NTAPI_INLINE
RtlLargeIntegerShiftLeft (
    _In_ LARGE_INTEGER LargeInteger,
    _In_ CCHAR ShiftCount
    )
{
    LARGE_INTEGER Result;
    Result.QuadPart = LargeInteger.QuadPart << ShiftCount;
    return Result;
}
DECLSPEC_DEPRECATED_DDK_WINXP
__drv_preferredFunction("compiler support for 64 bit", "Obsolete")
__inline
LARGE_INTEGER
NTAPI_INLINE
RtlLargeIntegerShiftRight (
    _In_ LARGE_INTEGER LargeInteger,
    _In_ CCHAR ShiftCount
    )
{
    LARGE_INTEGER Result;
    Result.QuadPart = (ULONG64)LargeInteger.QuadPart >> ShiftCount;
    return Result;
}
DECLSPEC_DEPRECATED_DDK_WINXP
__drv_preferredFunction("compiler support for 64 bit", "Obsolete")
__inline
LARGE_INTEGER
NTAPI_INLINE
RtlLargeIntegerArithmeticShift (
    _In_ LARGE_INTEGER LargeInteger,
    _In_ CCHAR ShiftCount
    )
{
    LARGE_INTEGER Result;
    Result.QuadPart = LargeInteger.QuadPart >> ShiftCount;
    return Result;
}





























typedef struct _TIME_FIELDS {
    CSHORT Year;
    CSHORT Month;
    CSHORT Day;
    CSHORT Hour;
    CSHORT Minute;
    CSHORT Second;
    CSHORT Milliseconds;
    CSHORT Weekday;
} TIME_FIELDS;
typedef TIME_FIELDS *PTIME_FIELDS;
NTSYSAPI
VOID
NTAPI
RtlTimeToTimeFields (
    _In_ PLARGE_INTEGER Time,
    _Out_ PTIME_FIELDS TimeFields
    );
_Success_(return != 0)
NTSYSAPI
BOOLEAN
NTAPI
RtlTimeFieldsToTime (
    _In_ PTIME_FIELDS TimeFields,
    _Out_ PLARGE_INTEGER Time
    );






typedef struct _RTL_BITMAP {
    ULONG SizeOfBitMap;
    PULONG Buffer;
} RTL_BITMAP;
typedef RTL_BITMAP *PRTL_BITMAP;
NTSYSAPI
VOID
NTAPI
RtlInitializeBitMap (
    _Out_ PRTL_BITMAP BitMapHeader,
    _In_opt_ __drv_aliasesMem PULONG BitMapBuffer,
    _In_opt_ ULONG SizeOfBitMap
    );
NTSYSAPI
VOID
NTAPI
RtlClearBit (
    _In_ PRTL_BITMAP BitMapHeader,
    _In_range_(<, BitMapHeader->SizeOfBitMap) ULONG BitNumber
    );
NTSYSAPI
VOID
NTAPI
RtlSetBit (
    _In_ PRTL_BITMAP BitMapHeader,
    _In_range_(<, BitMapHeader->SizeOfBitMap) ULONG BitNumber
    );
_Must_inspect_result_
NTSYSAPI
BOOLEAN
NTAPI
RtlTestBit (
    _In_ PRTL_BITMAP BitMapHeader,
    _In_range_(<, BitMapHeader->SizeOfBitMap) ULONG BitNumber
    );
NTSYSAPI
VOID
NTAPI
RtlClearAllBits (
    _In_ PRTL_BITMAP BitMapHeader
    );
NTSYSAPI
VOID
NTAPI
RtlSetAllBits (
    _In_ PRTL_BITMAP BitMapHeader
    );
_Success_(return != -1)
_Must_inspect_result_
NTSYSAPI
ULONG
NTAPI
RtlFindClearBits (
    _In_ PRTL_BITMAP BitMapHeader,
    _In_ ULONG NumberToFind,
    _In_ ULONG HintIndex
    );
_Success_(return != -1)
_Must_inspect_result_
NTSYSAPI
ULONG
NTAPI
RtlFindSetBits (
    _In_ PRTL_BITMAP BitMapHeader,
    _In_ ULONG NumberToFind,
    _In_ ULONG HintIndex
    );
_Success_(return != -1)
NTSYSAPI
ULONG
NTAPI
RtlFindClearBitsAndSet (
    _In_ PRTL_BITMAP BitMapHeader,
    _In_ ULONG NumberToFind,
    _In_ ULONG HintIndex
    );
_Success_(return != -1)
NTSYSAPI
ULONG
NTAPI
RtlFindSetBitsAndClear (
    _In_ PRTL_BITMAP BitMapHeader,
    _In_ ULONG NumberToFind,
    _In_ ULONG HintIndex
    );
NTSYSAPI
VOID
NTAPI
RtlClearBits (
    _In_ PRTL_BITMAP BitMapHeader,
    _In_range_(0, BitMapHeader->SizeOfBitMap - NumberToClear) ULONG StartingIndex,
    _In_range_(0, BitMapHeader->SizeOfBitMap - StartingIndex) ULONG NumberToClear
    );
NTSYSAPI
VOID
NTAPI
RtlSetBits (
    _In_ PRTL_BITMAP BitMapHeader,
    _In_range_(0, BitMapHeader->SizeOfBitMap - NumberToSet) ULONG StartingIndex,
    _In_range_(0, BitMapHeader->SizeOfBitMap - StartingIndex) ULONG NumberToSet
    );
typedef struct _RTL_BITMAP_RUN {
    ULONG StartingIndex;
    ULONG NumberOfBits;
} RTL_BITMAP_RUN;
typedef RTL_BITMAP_RUN *PRTL_BITMAP_RUN;
NTSYSAPI
ULONG
NTAPI
RtlFindClearRuns (
    _In_ PRTL_BITMAP BitMapHeader,
    _Out_writes_to_(SizeOfRunArray, return) PRTL_BITMAP_RUN RunArray,
    _In_range_(>, 0) ULONG SizeOfRunArray,
    _In_ BOOLEAN LocateLongestRuns
    );
NTSYSAPI
ULONG
NTAPI
RtlFindLongestRunClear (
    _In_ PRTL_BITMAP BitMapHeader,
    _Out_ PULONG StartingIndex
    );
NTSYSAPI
ULONG
NTAPI
RtlFindFirstRunClear (
    _In_ PRTL_BITMAP BitMapHeader,
    _Out_ PULONG StartingIndex
    );
NTSYSAPI
ULONG
NTAPI
RtlNumberOfClearBitsInRange (
    _In_ PRTL_BITMAP BitMapHeader,
    _In_ ULONG StartingIndex,
    _In_ ULONG Length
    );
NTSYSAPI
ULONG
NTAPI
RtlNumberOfSetBitsInRange (
    _In_ PRTL_BITMAP BitMapHeader,
    _In_ ULONG StartingIndex,
    _In_ ULONG Length
    );
NTSYSAPI
ULONG
NTAPI
RtlNumberOfClearBits (
    _In_ PRTL_BITMAP BitMapHeader
    );
NTSYSAPI
ULONG
NTAPI
RtlNumberOfSetBits (
    _In_ PRTL_BITMAP BitMapHeader
    );
_Must_inspect_result_
NTSYSAPI
BOOLEAN
NTAPI
RtlAreBitsClear (
    _In_ PRTL_BITMAP BitMapHeader,
    _In_ ULONG StartingIndex,
    _In_ ULONG Length
    );
_Must_inspect_result_
NTSYSAPI
BOOLEAN
NTAPI
RtlAreBitsSet (
    _In_ PRTL_BITMAP BitMapHeader,
    _In_ ULONG StartingIndex,
    _In_ ULONG Length
    );
NTSYSAPI
ULONG
NTAPI
RtlFindNextForwardRunClear (
    _In_ PRTL_BITMAP BitMapHeader,
    _In_ ULONG FromIndex,
    _Out_ PULONG StartingRunIndex
    );
NTSYSAPI
ULONG
NTAPI
RtlFindLastBackwardRunClear (
    _In_ PRTL_BITMAP BitMapHeader,
    _In_ ULONG FromIndex,
    _Out_ PULONG StartingRunIndex
    );
_Success_(return != -1)
_Must_inspect_result_
NTSYSAPI
CCHAR
NTAPI
RtlFindLeastSignificantBit (
    _In_ ULONGLONG Set
    );
_Success_(return != -1)
_Must_inspect_result_
NTSYSAPI
CCHAR
NTAPI
RtlFindMostSignificantBit (
    _In_ ULONGLONG Set
    );
NTSYSAPI
ULONG
NTAPI
RtlNumberOfSetBitsUlongPtr (
    _In_ ULONG_PTR Target
    );
NTSYSAPI
VOID
NTAPI
RtlCopyBitMap (
    _In_ PRTL_BITMAP Source,
    _In_ PRTL_BITMAP Destination,
    _In_range_(0, Destination->SizeOfBitMap - 1) ULONG TargetBit
    );
NTSYSAPI
VOID
NTAPI
RtlExtractBitMap (
    _In_ PRTL_BITMAP Source,
    _In_ PRTL_BITMAP Destination,
    _In_range_(0, Source->SizeOfBitMap - 1) ULONG TargetBit,
    _In_range_(0, Source->SizeOfBitMap) ULONG NumberOfBits
    );
                              ((L1)->HighPart == (L2)->HighPart))
_IRQL_requires_max_(APC_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
RtlCreateSecurityDescriptor (
    _Out_ PSECURITY_DESCRIPTOR SecurityDescriptor,
    _In_ ULONG Revision
    );
_IRQL_requires_max_(APC_LEVEL)
_Must_inspect_result_
NTSYSAPI
BOOLEAN
NTAPI
RtlValidSecurityDescriptor (
    _In_ PSECURITY_DESCRIPTOR SecurityDescriptor
    );
_IRQL_requires_max_(APC_LEVEL)
NTSYSAPI
ULONG
NTAPI
RtlLengthSecurityDescriptor (
    _In_ PSECURITY_DESCRIPTOR SecurityDescriptor
    );
_IRQL_requires_max_(APC_LEVEL)
_Must_inspect_result_
NTSYSAPI
BOOLEAN
NTAPI
RtlValidRelativeSecurityDescriptor (
    _In_reads_bytes_(SecurityDescriptorLength) PSECURITY_DESCRIPTOR SecurityDescriptorInput,
    _In_ ULONG SecurityDescriptorLength,
    _In_ SECURITY_INFORMATION RequiredInformation
    );
_IRQL_requires_max_(APC_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
RtlSetDaclSecurityDescriptor (
    _Inout_ PSECURITY_DESCRIPTOR SecurityDescriptor,
    _In_ BOOLEAN DaclPresent,
    _In_opt_ PACL Dacl,
    _In_ BOOLEAN DaclDefaulted
    );


NTSYSAPI
USHORT
FASTCALL
RtlUshortByteSwap(
    _In_ USHORT Source
    );
NTSYSAPI
ULONG
FASTCALL
RtlUlongByteSwap(
    _In_ ULONG Source
    );
NTSYSAPI
ULONGLONG
FASTCALL
RtlUlonglongByteSwap(
    _In_ ULONGLONG Source
    );
typedef struct _OSVERSIONINFOA {
    ULONG dwOSVersionInfoSize;
    ULONG dwMajorVersion;
    ULONG dwMinorVersion;
    ULONG dwBuildNumber;
    ULONG dwPlatformId;
    CHAR szCSDVersion[ 128 ];
} OSVERSIONINFOA, *POSVERSIONINFOA, *LPOSVERSIONINFOA;
typedef struct _OSVERSIONINFOW {
    ULONG dwOSVersionInfoSize;
    ULONG dwMajorVersion;
    ULONG dwMinorVersion;
    ULONG dwBuildNumber;
    ULONG dwPlatformId;
    WCHAR szCSDVersion[ 128 ];
} OSVERSIONINFOW, *POSVERSIONINFOW, *LPOSVERSIONINFOW, RTL_OSVERSIONINFOW, *PRTL_OSVERSIONINFOW;
typedef OSVERSIONINFOW OSVERSIONINFO;
typedef POSVERSIONINFOW POSVERSIONINFO;
typedef LPOSVERSIONINFOW LPOSVERSIONINFO;
typedef struct _OSVERSIONINFOEXA {
    ULONG dwOSVersionInfoSize;
    ULONG dwMajorVersion;
    ULONG dwMinorVersion;
    ULONG dwBuildNumber;
    ULONG dwPlatformId;
    CHAR szCSDVersion[ 128 ];
    USHORT wServicePackMajor;
    USHORT wServicePackMinor;
    USHORT wSuiteMask;
    UCHAR wProductType;
    UCHAR wReserved;
} OSVERSIONINFOEXA, *POSVERSIONINFOEXA, *LPOSVERSIONINFOEXA;
typedef struct _OSVERSIONINFOEXW {
    ULONG dwOSVersionInfoSize;
    ULONG dwMajorVersion;
    ULONG dwMinorVersion;
    ULONG dwBuildNumber;
    ULONG dwPlatformId;
    WCHAR szCSDVersion[ 128 ];
    USHORT wServicePackMajor;
    USHORT wServicePackMinor;
    USHORT wSuiteMask;
    UCHAR wProductType;
    UCHAR wReserved;
} OSVERSIONINFOEXW, *POSVERSIONINFOEXW, *LPOSVERSIONINFOEXW, RTL_OSVERSIONINFOEXW, *PRTL_OSVERSIONINFOEXW;
typedef OSVERSIONINFOEXW OSVERSIONINFOEX;
typedef POSVERSIONINFOEXW POSVERSIONINFOEX;
typedef LPOSVERSIONINFOEXW LPOSVERSIONINFOEX;
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
        ((_m_)=VerSetConditionMask((_m_),(_t_),(_c_)))
NTSYSAPI
ULONGLONG
NTAPI
VerSetConditionMask(
    _In_ ULONGLONG ConditionMask,
    _In_ ULONG TypeMask,
    _In_ UCHAR Condition
    );
#endif
#pragma endregion
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
RtlGetVersion(
    _Out_
    _At_(lpVersionInformation->dwOSVersionInfoSize, _Pre_ _Valid_)
    _When_(lpVersionInformation->dwOSVersionInfoSize == sizeof(RTL_OSVERSIONINFOEXW),
        _At_((PRTL_OSVERSIONINFOEXW)lpVersionInformation, _Out_))
        PRTL_OSVERSIONINFOW lpVersionInformation
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
_Must_inspect_result_
NTSYSAPI
NTSTATUS
NTAPI
RtlVerifyVersionInfo(
    _In_ PRTL_OSVERSIONINFOEXW VersionInfo,
    _In_ ULONG TypeMask,
    _In_ ULONGLONG ConditionMask
    );
typedef BOOLEAN (*PFN_RTL_IS_NTDDI_VERSION_AVAILABLE)(
    _In_ ULONG Version
    );
typedef BOOLEAN (*PFN_RTL_IS_SERVICE_PACK_VERSION_INSTALLED)(
    _In_ ULONG Version
    );
BOOLEAN
RtlIsNtDdiVersionAvailable (
    _In_ ULONG Version
    );
BOOLEAN
RtlIsServicePackVersionInstalled (
    _In_ ULONG Version
    );
    InterlockedOr((PLONG)(Flags), Flag)
    InterlockedAnd((PLONG)(Flags), Flag)
    RtlInterlockedAndBits(Flags, ~(Flag))
    InterlockedXor(Flags, Flag)
    (VOID) RtlInterlockedSetBits(Flags, Flag)
    (VOID) RtlInterlockedAndBits(Flags, Flag)
    RtlInterlockedAndBitsDiscardReturn(Flags, ~(Flag))
#include <dpfilter.h>
NTSYSAPI
NTSTATUS
NTAPI
RtlIoEncodeMemIoResource (
    _In_ PIO_RESOURCE_DESCRIPTOR Descriptor,
    _In_ UCHAR Type,
    _In_ ULONGLONG Length,
    _In_ ULONGLONG Alignment,
    _In_ ULONGLONG MinimumAddress,
    _In_ ULONGLONG MaximumAddress
    );
NTSYSAPI
NTSTATUS
NTAPI
RtlCmEncodeMemIoResource (
    _In_ PCM_PARTIAL_RESOURCE_DESCRIPTOR Descriptor,
    _In_ UCHAR Type,
    _In_ ULONGLONG Length,
    _In_ ULONGLONG Start
    );
NTSYSAPI
ULONGLONG
NTAPI
RtlIoDecodeMemIoResource (
    _In_ PIO_RESOURCE_DESCRIPTOR Descriptor,
    _Out_opt_ PULONGLONG Alignment,
    _Out_opt_ PULONGLONG MinimumAddress,
    _Out_opt_ PULONGLONG MaximumAddress
    );
NTSYSAPI
ULONGLONG
NTAPI
RtlCmDecodeMemIoResource (
    _In_ PCM_PARTIAL_RESOURCE_DESCRIPTOR Descriptor,
    _Out_opt_ PULONGLONG Start
    );
NTSYSAPI
NTSTATUS
NTAPI
RtlFindClosestEncodableLength (
    _In_ ULONGLONG SourceLength,
    _Out_ PULONGLONG TargetLength
    );
NTSYSAPI
NTSTATUS
NTAPI
RtlIsUntrustedObject (
    _In_opt_ HANDLE Handle,
    _In_opt_ PVOID Object,
    _Out_ PBOOLEAN UntrustedObject
    );
NTSYSAPI
ULONG
NTAPI
RtlQueryValidationRunlevel (
    _In_opt_ PCUNICODE_STRING ComponentName
    );
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
NTSYSAPI
ULONG
NTAPI
RtlCrc32(
    _In_reads_bytes_(Size) const void *Buffer,
    _In_ size_t Size,
    _In_ ULONG InitialCrc
    );
NTSYSAPI
ULONGLONG
NTAPI
RtlCrc64(
    _In_reads_bytes_(Size) const void *Buffer,
    _In_ size_t Size,
    _In_ ULONGLONG InitialCrc
    );
#endif
#pragma endregion
typedef enum _OS_DEPLOYEMENT_STATE_VALUES {
    OS_DEPLOYMENT_STANDARD = 1,
    OS_DEPLOYMENT_COMPACT
} OS_DEPLOYEMENT_STATE_VALUES;
NTSYSAPI
OS_DEPLOYEMENT_STATE_VALUES
NTAPI
RtlOsDeploymentState(
    _In_ ULONG Flags
    );
typedef enum _IMAGE_POLICY_ENTRY_TYPE {
    ImagePolicyEntryTypeNone = 0,
    ImagePolicyEntryTypeBool,
    ImagePolicyEntryTypeInt8,
    ImagePolicyEntryTypeUInt8,
    ImagePolicyEntryTypeInt16,
    ImagePolicyEntryTypeUInt16,
    ImagePolicyEntryTypeInt32,
    ImagePolicyEntryTypeUInt32,
    ImagePolicyEntryTypeInt64,
    ImagePolicyEntryTypeUInt64,
    ImagePolicyEntryTypeAnsiString,
    ImagePolicyEntryTypeUnicodeString,
    ImagePolicyEntryTypeOverride,
    ImagePolicyEntryTypeMaximum
} IMAGE_POLICY_ENTRY_TYPE;
typedef enum _IMAGE_POLICY_ID {
    ImagePolicyIdNone = 0,
    ImagePolicyIdEtw,
    ImagePolicyIdDebug,
    ImagePolicyIdCrashDump,
    ImagePolicyIdCrashDumpKey,
    ImagePolicyIdCrashDumpKeyGuid,
    ImagePolicyIdParentSd,
    ImagePolicyIdParentSdRev,
    ImagePolicyIdSvn,
    ImagePolicyIdDeviceId,
    ImagePolicyIdCapability,
    ImagePolicyIdScenarioId,
    ImagePolicyIdMaximum
} IMAGE_POLICY_ID;
typedef struct _IMAGE_POLICY_ENTRY {
    IMAGE_POLICY_ENTRY_TYPE Type;
    IMAGE_POLICY_ID PolicyId;
    union {
        const VOID* None;
        BOOLEAN BoolValue;
        INT8 Int8Value;
        UINT8 UInt8Value;
        INT16 Int16Value;
        UINT16 UInt16Value;
        INT32 Int32Value;
        UINT32 UInt32Value;
        INT64 Int64Value;
        UINT64 UInt64Value;
        PCSTR AnsiStringValue;
        PCWSTR UnicodeStringValue;
    } u;
} IMAGE_POLICY_ENTRY;
typedef const IMAGE_POLICY_ENTRY* PCIMAGE_POLICY_ENTRY;
#pragma warning(push)
#pragma warning(disable:4200)
typedef struct _IMAGE_POLICY_METADATA {
    UCHAR Version;
    UCHAR Reserved0[7];
    ULONGLONG ApplicationId;
    IMAGE_POLICY_ENTRY Policies[];
} IMAGE_POLICY_METADATA;
typedef const IMAGE_POLICY_METADATA* PCIMAGE_POLICY_METADATA;
#pragma warning(pop)
__pragma(const_seg(push, IMAGE_POLICY_SECTION_NAME)); \
EXTERN_C __declspec(dllexport) const \
IMAGE_POLICY_METADATA IMAGE_POLICY_METADATA_NAME = { \
    IMAGE_POLICY_METADATA_VERSION, \
    {0}, \
    _ApplicationId_, \
    {
        {ImagePolicyEntryTypeNone, ImagePolicyIdNone, NULL} \
    } \
}; \
__pragma(const_seg(pop))
    {ImagePolicyEntryTypeBool, _PolicyId_, (const VOID*)_Value_},
    {ImagePolicyEntryTypeInt8, _PolicyId_, (const VOID*)_Value_},
    {ImagePolicyEntryTypeUInt8, _PolicyId_, (const VOID*)_Value_},
    {ImagePolicyEntryTypeInt16, _PolicyId_, (const VOID*)_Value_},
    {ImagePolicyEntryTypeUInt16, _PolicyId_, (const VOID*)_Value_},
    {ImagePolicyEntryTypeInt32, _PolicyId_, (const VOID*)_Value_},
    {ImagePolicyEntryTypeUInt32, _PolicyId_, (const VOID*)_Value_},
    {ImagePolicyEntryTypeInt64, _PolicyId_, (const VOID*)_Value_},
    {ImagePolicyEntryTypeUInt64, _PolicyId_, (const VOID*)_Value_},
    {ImagePolicyEntryTypeAnsiString, _PolicyId_, _Value_},
    {ImagePolicyEntryTypeUnicodeString, _PolicyId_, _Value_},
    {ImagePolicyEntryTypeOverride, _PolicyId_, 0},
#include <apiset.h>
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
_Check_return_
NTSYSAPI
SIZE_T
NTAPI
RtlCompareMemory(
    _In_ const VOID* Source1,
    _In_ const VOID* Source2,
    _In_ SIZE_T Length
    );
#endif
#pragma endregion
extern "C" {
#include <ktmtypes.h>

























































typedef enum _TRANSACTION_OUTCOME {
    TransactionOutcomeUndetermined = 1,
    TransactionOutcomeCommitted,
    TransactionOutcomeAborted,
} TRANSACTION_OUTCOME;
typedef enum _TRANSACTION_STATE {
    TransactionStateNormal = 1,
    TransactionStateIndoubt,
    TransactionStateCommittedNotify,
} TRANSACTION_STATE;
typedef struct _TRANSACTION_BASIC_INFORMATION {
    GUID TransactionId;
    ULONG State;
    ULONG Outcome;
} TRANSACTION_BASIC_INFORMATION, *PTRANSACTION_BASIC_INFORMATION;
typedef struct _TRANSACTIONMANAGER_BASIC_INFORMATION {
    GUID TmIdentity;
    LARGE_INTEGER VirtualClock;
} TRANSACTIONMANAGER_BASIC_INFORMATION, *PTRANSACTIONMANAGER_BASIC_INFORMATION;
typedef struct _TRANSACTIONMANAGER_LOG_INFORMATION {
    GUID LogIdentity;
} TRANSACTIONMANAGER_LOG_INFORMATION, *PTRANSACTIONMANAGER_LOG_INFORMATION;
typedef struct _TRANSACTIONMANAGER_LOGPATH_INFORMATION {
    ULONG LogPathLength;
    _Field_size_(LogPathLength) WCHAR LogPath[1];
} TRANSACTIONMANAGER_LOGPATH_INFORMATION, *PTRANSACTIONMANAGER_LOGPATH_INFORMATION;
typedef struct _TRANSACTIONMANAGER_RECOVERY_INFORMATION {
    ULONGLONG LastRecoveredLsn;
} TRANSACTIONMANAGER_RECOVERY_INFORMATION, *PTRANSACTIONMANAGER_RECOVERY_INFORMATION;
typedef struct _TRANSACTION_PROPERTIES_INFORMATION {
    ULONG IsolationLevel;
    ULONG IsolationFlags;
    LARGE_INTEGER Timeout;
    ULONG Outcome;
    ULONG DescriptionLength;
    WCHAR Description[1];
} TRANSACTION_PROPERTIES_INFORMATION, *PTRANSACTION_PROPERTIES_INFORMATION;
typedef struct _TRANSACTION_BIND_INFORMATION {
    HANDLE TmHandle;
} TRANSACTION_BIND_INFORMATION, *PTRANSACTION_BIND_INFORMATION;
typedef struct _TRANSACTION_ENLISTMENT_PAIR {
    GUID EnlistmentId;
    GUID ResourceManagerId;
} TRANSACTION_ENLISTMENT_PAIR, *PTRANSACTION_ENLISTMENT_PAIR;
typedef struct _TRANSACTION_ENLISTMENTS_INFORMATION {
    ULONG NumberOfEnlistments;
    TRANSACTION_ENLISTMENT_PAIR EnlistmentPair[1];
} TRANSACTION_ENLISTMENTS_INFORMATION, *PTRANSACTION_ENLISTMENTS_INFORMATION;
typedef struct _TRANSACTION_SUPERIOR_ENLISTMENT_INFORMATION {
    TRANSACTION_ENLISTMENT_PAIR SuperiorEnlistmentPair;
} TRANSACTION_SUPERIOR_ENLISTMENT_INFORMATION, *PTRANSACTION_SUPERIOR_ENLISTMENT_INFORMATION;
typedef struct _RESOURCEMANAGER_BASIC_INFORMATION {
    GUID ResourceManagerId;
    ULONG DescriptionLength;
    WCHAR Description[1];
} RESOURCEMANAGER_BASIC_INFORMATION, *PRESOURCEMANAGER_BASIC_INFORMATION;
typedef struct _RESOURCEMANAGER_COMPLETION_INFORMATION {
    HANDLE IoCompletionPortHandle;
    ULONG_PTR CompletionKey;
} RESOURCEMANAGER_COMPLETION_INFORMATION, *PRESOURCEMANAGER_COMPLETION_INFORMATION;
typedef enum _TRANSACTION_INFORMATION_CLASS {
    TransactionBasicInformation,
    TransactionPropertiesInformation,
    TransactionEnlistmentInformation,
    TransactionSuperiorEnlistmentInformation
} TRANSACTION_INFORMATION_CLASS;
typedef enum _TRANSACTIONMANAGER_INFORMATION_CLASS {
    TransactionManagerBasicInformation,
    TransactionManagerLogInformation,
    TransactionManagerLogPathInformation,
    TransactionManagerRecoveryInformation = 4
} TRANSACTIONMANAGER_INFORMATION_CLASS;
typedef enum _RESOURCEMANAGER_INFORMATION_CLASS {
    ResourceManagerBasicInformation,
    ResourceManagerCompletionInformation,
} RESOURCEMANAGER_INFORMATION_CLASS;
typedef struct _ENLISTMENT_BASIC_INFORMATION {
    GUID EnlistmentId;
    GUID TransactionId;
    GUID ResourceManagerId;
} ENLISTMENT_BASIC_INFORMATION, *PENLISTMENT_BASIC_INFORMATION;
typedef struct _ENLISTMENT_CRM_INFORMATION {
    GUID CrmTransactionManagerId;
    GUID CrmResourceManagerId;
    GUID CrmEnlistmentId;
} ENLISTMENT_CRM_INFORMATION, *PENLISTMENT_CRM_INFORMATION;
typedef enum _ENLISTMENT_INFORMATION_CLASS {
    EnlistmentBasicInformation,
    EnlistmentRecoveryInformation,
    EnlistmentCrmInformation
} ENLISTMENT_INFORMATION_CLASS;
typedef struct _TRANSACTION_LIST_ENTRY {
    UOW UOW;
} TRANSACTION_LIST_ENTRY, *PTRANSACTION_LIST_ENTRY;
typedef struct _TRANSACTION_LIST_INFORMATION {
    ULONG NumberOfTransactions;
    TRANSACTION_LIST_ENTRY TransactionInformation[1];
} TRANSACTION_LIST_INFORMATION, *PTRANSACTION_LIST_INFORMATION;
typedef enum _KTMOBJECT_TYPE {
    KTMOBJECT_TRANSACTION,
    KTMOBJECT_TRANSACTION_MANAGER,
    KTMOBJECT_RESOURCE_MANAGER,
    KTMOBJECT_ENLISTMENT,
    KTMOBJECT_INVALID
} KTMOBJECT_TYPE, *PKTMOBJECT_TYPE;
typedef struct _KTMOBJECT_CURSOR {
    GUID LastQuery;
    ULONG ObjectIdCount;
    GUID ObjectIds[1];
} KTMOBJECT_CURSOR, *PKTMOBJECT_CURSOR;
_Must_inspect_result_
_IRQL_requires_max_ (APC_LEVEL)
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtCreateTransactionManager (
    _Out_ PHANDLE TmHandle,
    _In_ ACCESS_MASK DesiredAccess,
    _In_opt_ POBJECT_ATTRIBUTES ObjectAttributes,
    _In_opt_ PUNICODE_STRING LogFileName,
    _In_opt_ ULONG CreateOptions,
    _In_opt_ ULONG CommitStrength
    );
_Must_inspect_result_
_IRQL_requires_max_ (APC_LEVEL)
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtOpenTransactionManager (
    _Out_ PHANDLE TmHandle,
    _In_ ACCESS_MASK DesiredAccess,
    _In_opt_ POBJECT_ATTRIBUTES ObjectAttributes,
    _In_opt_ PUNICODE_STRING LogFileName,
    _In_opt_ LPGUID TmIdentity,
    _In_opt_ ULONG OpenOptions
    );
_Must_inspect_result_
_IRQL_requires_max_ (APC_LEVEL)
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtRenameTransactionManager (
    _In_ PUNICODE_STRING LogFileName,
    _In_ LPGUID ExistingTransactionManagerGuid
    );
_Must_inspect_result_
_IRQL_requires_max_ (APC_LEVEL)
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtRollforwardTransactionManager (
    _In_ HANDLE TransactionManagerHandle,
    _In_opt_ PLARGE_INTEGER TmVirtualClock
    );
_Must_inspect_result_
_IRQL_requires_max_ (APC_LEVEL)
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtRecoverTransactionManager (
    _In_ HANDLE TransactionManagerHandle
    );
_Must_inspect_result_
_IRQL_requires_max_ (APC_LEVEL)
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtQueryInformationTransactionManager (
    _In_ HANDLE TransactionManagerHandle,
    _In_ TRANSACTIONMANAGER_INFORMATION_CLASS TransactionManagerInformationClass,
    _Out_writes_bytes_(TransactionManagerInformationLength) PVOID TransactionManagerInformation,
    _In_ ULONG TransactionManagerInformationLength,
    _Out_ PULONG ReturnLength
    );
_Must_inspect_result_
_IRQL_requires_max_ (APC_LEVEL)
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtSetInformationTransactionManager (
    _In_opt_ HANDLE TmHandle,
    _In_ TRANSACTIONMANAGER_INFORMATION_CLASS TransactionManagerInformationClass,
    _In_reads_bytes_(TransactionManagerInformationLength) PVOID TransactionManagerInformation,
    _In_ ULONG TransactionManagerInformationLength
    );
_Must_inspect_result_
_IRQL_requires_max_ (APC_LEVEL)
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtEnumerateTransactionObject (
    _In_opt_ HANDLE RootObjectHandle,
    _In_ KTMOBJECT_TYPE QueryType,
    _Inout_updates_bytes_(ObjectCursorLength) PKTMOBJECT_CURSOR ObjectCursor,
    _In_ ULONG ObjectCursorLength,
    _Out_ PULONG ReturnLength
    );
typedef NTSTATUS (NTAPI * PFN_NT_CREATE_TRANSACTION)(
    _Out_ PHANDLE TransactionHandle,
    _In_ ACCESS_MASK DesiredAccess,
    _In_opt_ POBJECT_ATTRIBUTES ObjectAttributes,
    _In_opt_ LPGUID Uow,
    _In_opt_ HANDLE TmHandle,
    _In_opt_ ULONG CreateOptions,
    _In_opt_ ULONG IsolationLevel,
    _In_opt_ ULONG IsolationFlags,
    _In_opt_ PLARGE_INTEGER Timeout,
    _In_opt_ PUNICODE_STRING Description
    );
_Must_inspect_result_
_IRQL_requires_max_ (APC_LEVEL)
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtCreateTransaction (
    _Out_ PHANDLE TransactionHandle,
    _In_ ACCESS_MASK DesiredAccess,
    _In_opt_ POBJECT_ATTRIBUTES ObjectAttributes,
    _In_opt_ LPGUID Uow,
    _In_opt_ HANDLE TmHandle,
    _In_opt_ ULONG CreateOptions,
    _In_opt_ ULONG IsolationLevel,
    _In_opt_ ULONG IsolationFlags,
    _In_opt_ PLARGE_INTEGER Timeout,
    _In_opt_ PUNICODE_STRING Description
    );
typedef NTSTATUS (NTAPI *PFN_NT_OPEN_TRANSACTION)(
    _Out_ PHANDLE TransactionHandle,
    _In_ ACCESS_MASK DesiredAccess,
    _In_ POBJECT_ATTRIBUTES ObjectAttributes,
    _In_opt_ LPGUID Uow,
    _In_opt_ HANDLE TmHandle
    );
_Must_inspect_result_
_IRQL_requires_max_ (APC_LEVEL)
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtOpenTransaction (
    _Out_ PHANDLE TransactionHandle,
    _In_ ACCESS_MASK DesiredAccess,
    _In_ POBJECT_ATTRIBUTES ObjectAttributes,
    _In_ LPGUID Uow,
    _In_opt_ HANDLE TmHandle
    );
typedef NTSTATUS (NTAPI * PFN_NT_QUERY_INFORMATION_TRANSACTION)(
    _In_ HANDLE TransactionHandle,
    _In_ TRANSACTION_INFORMATION_CLASS TransactionInformationClass,
    _Out_writes_bytes_(TransactionInformationLength) PVOID TransactionInformation,
    _In_ ULONG TransactionInformationLength,
    _Out_opt_ PULONG ReturnLength
    );
_Must_inspect_result_
_IRQL_requires_max_ (APC_LEVEL)
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtQueryInformationTransaction (
    _In_ HANDLE TransactionHandle,
    _In_ TRANSACTION_INFORMATION_CLASS TransactionInformationClass,
    _Out_writes_bytes_(TransactionInformationLength) PVOID TransactionInformation,
    _In_ ULONG TransactionInformationLength,
    _Out_opt_ PULONG ReturnLength
    );
typedef NTSTATUS (NTAPI * PFN_NT_SET_INFORMATION_TRANSACTION)(
    _In_ HANDLE TransactionHandle,
    _In_ TRANSACTION_INFORMATION_CLASS TransactionInformationClass,
    _In_ PVOID TransactionInformation,
    _In_ ULONG TransactionInformationLength
    );
_Must_inspect_result_
_IRQL_requires_max_ (APC_LEVEL)
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtSetInformationTransaction (
    _In_ HANDLE TransactionHandle,
    _In_ TRANSACTION_INFORMATION_CLASS TransactionInformationClass,
    _In_reads_bytes_(TransactionInformationLength) PVOID TransactionInformation,
    _In_ ULONG TransactionInformationLength
    );
typedef NTSTATUS (NTAPI * PFN_NT_COMMIT_TRANSACTION)(
    _In_ HANDLE TransactionHandle,
    _In_ BOOLEAN Wait
    );
_IRQL_requires_max_ (APC_LEVEL)
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtCommitTransaction (
    _In_ HANDLE TransactionHandle,
    _In_ BOOLEAN Wait
    );
typedef NTSTATUS (NTAPI * PFN_NT_ROLLBACK_TRANSACTION)(
    _In_ HANDLE TransactionHandle,
    _In_ BOOLEAN Wait
    );
_IRQL_requires_max_ (APC_LEVEL)
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtRollbackTransaction (
    _In_ HANDLE TransactionHandle,
    _In_ BOOLEAN Wait
    );
_Must_inspect_result_
_IRQL_requires_max_ (APC_LEVEL)
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtCreateEnlistment (
    _Out_ PHANDLE EnlistmentHandle,
    _In_ ACCESS_MASK DesiredAccess,
    _In_ HANDLE ResourceManagerHandle,
    _In_ HANDLE TransactionHandle,
    _In_opt_ POBJECT_ATTRIBUTES ObjectAttributes,
    _In_opt_ ULONG CreateOptions,
    _In_ NOTIFICATION_MASK NotificationMask,
    _In_opt_ PVOID EnlistmentKey
    );
_Must_inspect_result_
_IRQL_requires_max_ (APC_LEVEL)
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtOpenEnlistment (
    _Out_ PHANDLE EnlistmentHandle,
    _In_ ACCESS_MASK DesiredAccess,
    _In_ HANDLE ResourceManagerHandle,
    _In_ LPGUID EnlistmentGuid,
    _In_opt_ POBJECT_ATTRIBUTES ObjectAttributes
    );
_Must_inspect_result_
_IRQL_requires_max_ (APC_LEVEL)
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtQueryInformationEnlistment (
    _In_ HANDLE EnlistmentHandle,
    _In_ ENLISTMENT_INFORMATION_CLASS EnlistmentInformationClass,
    _Out_writes_bytes_(EnlistmentInformationLength) PVOID EnlistmentInformation,
    _In_ ULONG EnlistmentInformationLength,
    _Out_ PULONG ReturnLength
    );
_Must_inspect_result_
_IRQL_requires_max_ (APC_LEVEL)
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtSetInformationEnlistment (
    _In_opt_ HANDLE EnlistmentHandle,
    _In_ ENLISTMENT_INFORMATION_CLASS EnlistmentInformationClass,
    _In_reads_bytes_(EnlistmentInformationLength) PVOID EnlistmentInformation,
    _In_ ULONG EnlistmentInformationLength
    );
_Must_inspect_result_
_IRQL_requires_max_ (APC_LEVEL)
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtRecoverEnlistment (
    _In_ HANDLE EnlistmentHandle,
    _In_opt_ PVOID EnlistmentKey
    );
_Must_inspect_result_
_IRQL_requires_max_ (APC_LEVEL)
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtPrePrepareEnlistment (
    _In_ HANDLE EnlistmentHandle,
    _In_opt_ PLARGE_INTEGER TmVirtualClock
    );
_Must_inspect_result_
_IRQL_requires_max_ (APC_LEVEL)
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtPrepareEnlistment (
    _In_ HANDLE EnlistmentHandle,
    _In_opt_ PLARGE_INTEGER TmVirtualClock
    );
_Must_inspect_result_
_IRQL_requires_max_ (APC_LEVEL)
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtCommitEnlistment (
    _In_ HANDLE EnlistmentHandle,
    _In_opt_ PLARGE_INTEGER TmVirtualClock
    );
_IRQL_requires_max_ (APC_LEVEL)
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtRollbackEnlistment (
    _In_ HANDLE EnlistmentHandle,
    _In_opt_ PLARGE_INTEGER TmVirtualClock
    );
_IRQL_requires_max_ (APC_LEVEL)
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtPrePrepareComplete (
    _In_ HANDLE EnlistmentHandle,
    _In_opt_ PLARGE_INTEGER TmVirtualClock
    );
_IRQL_requires_max_ (APC_LEVEL)
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtPrepareComplete (
    _In_ HANDLE EnlistmentHandle,
    _In_opt_ PLARGE_INTEGER TmVirtualClock
    );
_IRQL_requires_max_ (APC_LEVEL)
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtCommitComplete (
    _In_ HANDLE EnlistmentHandle,
    _In_opt_ PLARGE_INTEGER TmVirtualClock
    );
_IRQL_requires_max_ (APC_LEVEL)
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtReadOnlyEnlistment (
    _In_ HANDLE EnlistmentHandle,
    _In_opt_ PLARGE_INTEGER TmVirtualClock
    );
_IRQL_requires_max_ (APC_LEVEL)
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtRollbackComplete (
    _In_ HANDLE EnlistmentHandle,
    _In_opt_ PLARGE_INTEGER TmVirtualClock
    );
_IRQL_requires_max_ (APC_LEVEL)
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtSinglePhaseReject (
    _In_ HANDLE EnlistmentHandle,
    _In_opt_ PLARGE_INTEGER TmVirtualClock
    );
_Must_inspect_result_
_IRQL_requires_max_ (APC_LEVEL)
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtCreateResourceManager (
    _Out_ PHANDLE ResourceManagerHandle,
    _In_ ACCESS_MASK DesiredAccess,
    _In_ HANDLE TmHandle,
    _In_ LPGUID RmGuid,
    _In_opt_ POBJECT_ATTRIBUTES ObjectAttributes,
    _In_opt_ ULONG CreateOptions,
    _In_opt_ PUNICODE_STRING Description
    );
_Must_inspect_result_
_IRQL_requires_max_ (APC_LEVEL)
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtOpenResourceManager (
    _Out_ PHANDLE ResourceManagerHandle,
    _In_ ACCESS_MASK DesiredAccess,
    _In_ HANDLE TmHandle,
    _In_opt_ LPGUID ResourceManagerGuid,
    _In_opt_ POBJECT_ATTRIBUTES ObjectAttributes
    );
_Must_inspect_result_
_IRQL_requires_max_ (APC_LEVEL)
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtRecoverResourceManager (
    _In_ HANDLE ResourceManagerHandle
    );
_Must_inspect_result_
_IRQL_requires_max_ (APC_LEVEL)
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtGetNotificationResourceManager (
    _In_ HANDLE ResourceManagerHandle,
    _Out_ PTRANSACTION_NOTIFICATION TransactionNotification,
    _In_ ULONG NotificationLength,
    _In_opt_ PLARGE_INTEGER Timeout,
    _Out_opt_ PULONG ReturnLength,
    _In_ ULONG Asynchronous,
    _In_opt_ ULONG_PTR AsynchronousContext
    );
_Must_inspect_result_
_IRQL_requires_max_ (APC_LEVEL)
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtQueryInformationResourceManager (
    _In_ HANDLE ResourceManagerHandle,
    _In_ RESOURCEMANAGER_INFORMATION_CLASS ResourceManagerInformationClass,
    _Out_writes_bytes_(ResourceManagerInformationLength) PVOID ResourceManagerInformation,
    _In_ ULONG ResourceManagerInformationLength,
    _Out_opt_ PULONG ReturnLength
    );
_Must_inspect_result_
_IRQL_requires_max_ (APC_LEVEL)
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtSetInformationResourceManager (
    _In_ HANDLE ResourceManagerHandle,
    _In_ RESOURCEMANAGER_INFORMATION_CLASS ResourceManagerInformationClass,
    _In_reads_bytes_(ResourceManagerInformationLength) PVOID ResourceManagerInformation,
    _In_ ULONG ResourceManagerInformationLength
    );
_Must_inspect_result_
_IRQL_requires_max_ (APC_LEVEL)
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtRegisterProtocolAddressInformation(
    _In_ HANDLE ResourceManager,
    _In_ PCRM_PROTOCOL_ID ProtocolId,
    _In_ ULONG ProtocolInformationSize,
    _In_ PVOID ProtocolInformation,
    _In_opt_ ULONG CreateOptions
    );
_IRQL_requires_max_ (APC_LEVEL)
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtPropagationComplete(
    _In_ HANDLE ResourceManagerHandle,
    _In_ ULONG RequestCookie,
    _In_ ULONG BufferLength,
    _In_ PVOID Buffer
    );
_IRQL_requires_max_ (APC_LEVEL)
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtPropagationFailed(
    _In_ HANDLE ResourceManagerHandle,
    _In_ ULONG RequestCookie,
    _In_ NTSTATUS PropStatus
    );
}
    ((ULONG_PTR)(length) & ~((ULONG_PTR)(alignment) - 1))
    (ALIGN_DOWN_BY(((ULONG_PTR)(length) + (alignment) - 1), alignment))
    ((PVOID)((ULONG_PTR)(address) & ~((ULONG_PTR)(alignment) - 1)))
    (ALIGN_DOWN_POINTER_BY(((ULONG_PTR)(address) + (alignment) - 1), alignment))
    ALIGN_DOWN_BY(length, sizeof(type))
    ALIGN_UP_BY(length, sizeof(type))
    ALIGN_DOWN_POINTER_BY(address, sizeof(type))
    ALIGN_UP_POINTER_BY(address, sizeof(type))
extern ULONG NtGlobalFlag;
extern ULONG NtGlobalFlag2;
#pragma warning(push)
#pragma warning(disable:4471)
typedef _Enum_is_bitflag_ enum _POOL_TYPE POOL_TYPE;
#pragma warning(pop)
typedef
_IRQL_requires_same_
_Function_class_(ALLOCATE_FUNCTION)
PVOID
ALLOCATE_FUNCTION (
    _In_ POOL_TYPE PoolType,
    _In_ SIZE_T NumberOfBytes,
    _In_ ULONG Tag
    );
typedef ALLOCATE_FUNCTION *PALLOCATE_FUNCTION;
typedef
_IRQL_requires_same_
_Function_class_(FREE_FUNCTION)
VOID
FREE_FUNCTION (
    _In_ __drv_freesMem(Mem) PVOID Buffer
    );
typedef FREE_FUNCTION *PFREE_FUNCTION;
typedef struct _LOOKASIDE_LIST_EX *PLOOKASIDE_LIST_EX;
typedef
_IRQL_requires_same_
_Function_class_(ALLOCATE_FUNCTION_EX)
PVOID
ALLOCATE_FUNCTION_EX (
    _In_ POOL_TYPE PoolType,
    _In_ SIZE_T NumberOfBytes,
    _In_ ULONG Tag,
    _Inout_ PLOOKASIDE_LIST_EX Lookaside
    );
typedef ALLOCATE_FUNCTION_EX *PALLOCATE_FUNCTION_EX;
typedef
_IRQL_requires_same_
_Function_class_(FREE_FUNCTION_EX)
VOID
FREE_FUNCTION_EX (
    _In_ __drv_freesMem(Mem) PVOID Buffer,
    _Inout_ PLOOKASIDE_LIST_EX Lookaside
    );
typedef FREE_FUNCTION_EX *PFREE_FUNCTION_EX;
    union { \
        SLIST_HEADER ListHead; \
        SINGLE_LIST_ENTRY SingleListHead; \
    } DUMMYUNIONNAME; \
    USHORT Depth; \
    USHORT MaximumDepth; \
    ULONG TotalAllocates; \
    union { \
        ULONG AllocateMisses; \
        ULONG AllocateHits; \
    } DUMMYUNIONNAME2; \
                                                \
    ULONG TotalFrees; \
    union { \
        ULONG FreeMisses; \
        ULONG FreeHits; \
    } DUMMYUNIONNAME3; \
                                                \
    POOL_TYPE Type; \
    ULONG Tag; \
    ULONG Size; \
    union { \
        PALLOCATE_FUNCTION_EX AllocateEx; \
        PALLOCATE_FUNCTION Allocate; \
    } DUMMYUNIONNAME4; \
                                                \
    union { \
        PFREE_FUNCTION_EX FreeEx; \
        PFREE_FUNCTION Free; \
    } DUMMYUNIONNAME5; \
                                                \
    LIST_ENTRY ListEntry; \
    ULONG LastTotalAllocates; \
    union { \
        ULONG LastAllocateMisses; \
        ULONG LastAllocateHits; \
    } DUMMYUNIONNAME6; \
    ULONG Future[2];
typedef struct LOOKASIDE_ALIGN _GENERAL_LOOKASIDE {
    GENERAL_LOOKASIDE_LAYOUT
} GENERAL_LOOKASIDE;
typedef GENERAL_LOOKASIDE *PGENERAL_LOOKASIDE;
typedef struct _GENERAL_LOOKASIDE_POOL {
    GENERAL_LOOKASIDE_LAYOUT
} GENERAL_LOOKASIDE_POOL, *PGENERAL_LOOKASIDE_POOL;
    C_ASSERT(FIELD_OFFSET(GENERAL_LOOKASIDE,f)==FIELD_OFFSET(GENERAL_LOOKASIDE_POOL,f))
LOOKASIDE_CHECK(TotalFrees);
LOOKASIDE_CHECK(Tag);
LOOKASIDE_CHECK(Future);
typedef CCHAR KPROCESSOR_MODE;
typedef enum _MODE {
    KernelMode,
    UserMode,
    MaximumMode
} MODE;
typedef
_Function_class_(KSYNCHRONIZE_ROUTINE)
_IRQL_requires_(HIGH_LEVEL)
_IRQL_requires_same_
BOOLEAN
KSYNCHRONIZE_ROUTINE (
    _In_opt_ PVOID SynchronizeContext
    );
typedef KSYNCHRONIZE_ROUTINE *PKSYNCHRONIZE_ROUTINE;
typedef struct _KAPC {
    UCHAR Type;
    UCHAR SpareByte0;
    UCHAR Size;
    UCHAR SpareByte1;
    ULONG SpareLong0;
    struct _KTHREAD *Thread;
    LIST_ENTRY ApcListEntry;
    PVOID Reserved[3];
    PVOID NormalContext;
    PVOID SystemArgument1;
    PVOID SystemArgument2;
    CCHAR ApcStateIndex;
    KPROCESSOR_MODE ApcMode;
    BOOLEAN Inserted;
} KAPC, *PKAPC, *PRKAPC;
struct _KDPC;
_Function_class_(KDEFERRED_ROUTINE)
_IRQL_requires_max_(DISPATCH_LEVEL)
_IRQL_requires_min_(DISPATCH_LEVEL)
_IRQL_requires_(DISPATCH_LEVEL)
_IRQL_requires_same_
typedef
VOID
KDEFERRED_ROUTINE (
    _In_ struct _KDPC *Dpc,
    _In_opt_ PVOID DeferredContext,
    _In_opt_ PVOID SystemArgument1,
    _In_opt_ PVOID SystemArgument2
    );
typedef KDEFERRED_ROUTINE *PKDEFERRED_ROUTINE;
typedef enum _KDPC_IMPORTANCE {
    LowImportance,
    MediumImportance,
    HighImportance,
    MediumHighImportance
} KDPC_IMPORTANCE;



typedef struct _KDPC {
    union {
        ULONG TargetInfoAsUlong;
        struct {
            UCHAR Type;
            UCHAR Importance;
            volatile USHORT Number;
        } DUMMYSTRUCTNAME;
    } DUMMYUNIONNAME;
    SINGLE_LIST_ENTRY DpcListEntry;
    KAFFINITY ProcessorHistory;
    PKDEFERRED_ROUTINE DeferredRoutine;
    PVOID DeferredContext;
    PVOID SystemArgument1;
    PVOID SystemArgument2;
    __volatile PVOID DpcData;
} KDPC, *PKDPC, *PRKDPC;
typedef
    _Struct_size_bytes_(_Inexpressible_(sizeof(struct _MDL) +
       (ByteOffset + ByteCount + PAGE_SIZE-1) / PAGE_SIZE * sizeof(PFN_NUMBER)))
  struct _MDL {
    struct _MDL *Next;
    CSHORT Size;
    CSHORT MdlFlags;
    struct _EPROCESS *Process;
    PVOID MappedSystemVa;
    PVOID StartVa;
    ULONG ByteCount;
    ULONG ByteOffset;
} MDL, *PMDL;
typedef _Readable_bytes_(_Inexpressible_(polymorphism)) MDL *PMDLX;






typedef struct _DISPATCHER_HEADER {
    union {
        union {
            volatile LONG Lock;
            LONG LockNV;
        } DUMMYUNIONNAME;
        struct {
            UCHAR Type;
            UCHAR Signalling;
            UCHAR Size;
            UCHAR Reserved1;
        } DUMMYSTRUCTNAME;
        struct {
            UCHAR TimerType;
            union {
                UCHAR TimerControlFlags;
                struct {
                    UCHAR Absolute : 1;
                    UCHAR Wake : 1;
                    UCHAR EncodedTolerableDelay : TIMER_TOLERABLE_DELAY_BITS;
                } DUMMYSTRUCTNAME;
            };
            UCHAR Hand;
            union {
                UCHAR TimerMiscFlags;
                struct {
                    UCHAR Index : TIMER_EXPIRED_INDEX_BITS;
                    UCHAR Inserted : 1;
                    volatile UCHAR Expired : 1;
                } DUMMYSTRUCTNAME;
            } DUMMYUNIONNAME;
        } DUMMYSTRUCTNAME2;
        struct {
            UCHAR Timer2Type;
            union {
                UCHAR Timer2Flags;
                struct {
                    UCHAR Timer2Inserted : 1;
                    UCHAR Timer2Expiring : 1;
                    UCHAR Timer2CancelPending : 1;
                    UCHAR Timer2SetPending : 1;
                    UCHAR Timer2Running : 1;
                    UCHAR Timer2Disabled : 1;
                    UCHAR Timer2ReservedFlags : 2;
                } DUMMYSTRUCTNAME;
            } DUMMYUNIONNAME;
            UCHAR Timer2ComponentId;
            UCHAR Timer2RelativeId;
        } DUMMYSTRUCTNAME3;
        struct {
            UCHAR QueueType;
            union {
                UCHAR QueueControlFlags;
                struct {
                    UCHAR Abandoned : 1;
                    UCHAR DisableIncrement : 1;
                    UCHAR QueueReservedControlFlags : 6;
                } DUMMYSTRUCTNAME;
            } DUMMYUNIONNAME;
            UCHAR QueueSize;
            UCHAR QueueReserved;
        } DUMMYSTRUCTNAME4;
        struct {
            UCHAR ThreadType;
            UCHAR ThreadReserved;
            union {
                UCHAR ThreadControlFlags;
                struct {
                    UCHAR CycleProfiling : 1;
                    UCHAR CounterProfiling : 1;
                    UCHAR GroupScheduling : 1;
                    UCHAR AffinitySet : 1;
                    UCHAR Tagged : 1;
                    UCHAR EnergyProfiling: 1;
                    UCHAR SchedulerAssist: 1;
                    UCHAR ThreadReservedControlFlags : 1;
                } DUMMYSTRUCTNAME;
            } DUMMYUNIONNAME;
            union {
                UCHAR DebugActive;
                struct {
                    BOOLEAN ActiveDR7 : 1;
                    BOOLEAN Instrumented : 1;
                    BOOLEAN Minimal : 1;
                    BOOLEAN Reserved4 : 3;
                    BOOLEAN UmsScheduled : 1;
                    BOOLEAN UmsPrimary : 1;
                } DUMMYSTRUCTNAME;
            } DUMMYUNIONNAME2;
        } DUMMYSTRUCTNAME5;
        struct {
            UCHAR MutantType;
            UCHAR MutantSize;
            BOOLEAN DpcActive;
            UCHAR MutantReserved;
        } DUMMYSTRUCTNAME6;
    } DUMMYUNIONNAME;
    LONG SignalState;
    LIST_ENTRY WaitListHead;
} DISPATCHER_HEADER, *PDISPATCHER_HEADER;
typedef struct _KEVENT {
    DISPATCHER_HEADER Header;
} KEVENT, *PKEVENT, *PRKEVENT;
typedef struct _KGATE {
    DISPATCHER_HEADER Header;
} KGATE, *PKGATE;
typedef struct _KTIMER {
    DISPATCHER_HEADER Header;
    ULARGE_INTEGER DueTime;
    LIST_ENTRY TimerListEntry;
    struct _KDPC *Dpc;
    ULONG Processor;
    ULONG Period;
} KTIMER, *PKTIMER, *PRKTIMER;
    (FIELD_OFFSET(KTIMER, Period) + sizeof(LONG))
typedef enum _LOCK_OPERATION {
    IoReadAccess,
    IoWriteAccess,
    IoModifyAccess
} LOCK_OPERATION;
typedef struct _FAST_MUTEX {
    LONG Count;
    PVOID Owner;
    ULONG Contention;
    KEVENT Event;
    ULONG OldIrql;
} FAST_MUTEX, *PFAST_MUTEX, KGUARDED_MUTEX, *PKGUARDED_MUTEX;
typedef ULONG PFN_COUNT;
typedef LONG64 SPFN_NUMBER, *PSPFN_NUMBER;
typedef ULONG64 PFN_NUMBER, *PPFN_NUMBER;
extern "C" {
_IRQL_requires_max_(HIGH_LEVEL)
_IRQL_saves_
ULONG64
__readcr8 (
    VOID
    );
_IRQL_requires_max_(HIGH_LEVEL)
_IRQL_raises_(Data)
VOID
__writecr8 (
    _In_ ULONG64 Data
    );
#pragma intrinsic(__readcr8)
#pragma intrinsic(__writecr8)
}
extern "C" {
__forceinline
UCHAR
READ_REGISTER_UCHAR (
    _In_ _Notliteral_ volatile UCHAR *Register
    )
{
    _ReadWriteBarrier();
    return *Register;
}
__forceinline
USHORT
READ_REGISTER_USHORT (
    _In_ _Notliteral_ volatile USHORT *Register
    )
{
    _ReadWriteBarrier();
    return *Register;
}
__forceinline
ULONG
READ_REGISTER_ULONG (
    _In_ _Notliteral_ volatile ULONG *Register
    )
{
    _ReadWriteBarrier();
    return *Register;
}
__forceinline
ULONG64
READ_REGISTER_ULONG64 (
    _In_ _Notliteral_ volatile ULONG64 *Register
    )
{
    _ReadWriteBarrier();
    return *Register;
}
__forceinline
VOID
READ_REGISTER_BUFFER_UCHAR (
    _In_reads_(Count) _Notliteral_ volatile UCHAR *Register,
    _Out_writes_all_(Count) PUCHAR Buffer,
    _In_ ULONG Count
    )
{
    _ReadWriteBarrier();
    __movsb(Buffer, (PUCHAR)Register, Count);
    return;
}
__forceinline
VOID
READ_REGISTER_BUFFER_USHORT (
    _In_reads_(Count) _Notliteral_ volatile USHORT *Register,
    _Out_writes_all_(Count) PUSHORT Buffer,
    _In_ ULONG Count
    )
{
    _ReadWriteBarrier();
    __movsw(Buffer, (PUSHORT)Register, Count);
    return;
}
__forceinline
VOID
READ_REGISTER_BUFFER_ULONG (
    _In_reads_(Count) _Notliteral_ volatile ULONG *Register,
    _Out_writes_all_(Count) PULONG Buffer,
    _In_ ULONG Count
    )
{
    _ReadWriteBarrier();
    __movsd(Buffer, (PULONG)Register, Count);
    return;
}
__forceinline
VOID
READ_REGISTER_BUFFER_ULONG64 (
    _In_reads_(Count) _Notliteral_ volatile ULONG64 *Register,
    _Out_writes_all_(Count) PULONG64 Buffer,
    _In_ ULONG Count
    )
{
    _ReadWriteBarrier();
    __movsq(Buffer, (PULONG64)Register, Count);
    return;
}
__forceinline
VOID
WRITE_REGISTER_UCHAR (
    _In_ _Notliteral_ volatile UCHAR *Register,
    _In_ UCHAR Value
    )
{
    *Register = Value;
    FastFence();
    return;
}
__forceinline
VOID
WRITE_REGISTER_USHORT (
    _In_ _Notliteral_ volatile USHORT *Register,
    _In_ USHORT Value
    )
{
    *Register = Value;
    FastFence();
    return;
}
__forceinline
VOID
WRITE_REGISTER_ULONG (
    _In_ _Notliteral_ volatile ULONG *Register,
    _In_ ULONG Value
    )
{
    *Register = Value;
    FastFence();
    return;
}
__forceinline
VOID
WRITE_REGISTER_ULONG64 (
    _In_ _Notliteral_ volatile ULONG64 *Register,
    _In_ ULONG64 Value
    )
{
    *Register = Value;
    FastFence();
    return;
}
__forceinline
VOID
WRITE_REGISTER_BUFFER_UCHAR (
    _Out_writes_(Count) _Notliteral_ volatile UCHAR *Register,
    _In_reads_(Count) PUCHAR Buffer,
    _In_ ULONG Count
    )
{
    __movsb((PUCHAR)Register, Buffer, Count);
    FastFence();
    return;
}
__forceinline
VOID
WRITE_REGISTER_BUFFER_USHORT (
    _Out_writes_(Count) _Notliteral_ volatile USHORT *Register,
    _In_reads_(Count) PUSHORT Buffer,
    _In_ ULONG Count
    )
{
    __movsw((PUSHORT)Register, Buffer, Count);
    FastFence();
    return;
}
__forceinline
VOID
WRITE_REGISTER_BUFFER_ULONG (
    _Out_writes_(Count) _Notliteral_ volatile ULONG *Register,
    _In_reads_(Count) PULONG Buffer,
    _In_ ULONG Count
    )
{
    __movsd((PULONG)Register, Buffer, Count);
    FastFence();
    return;
}
__forceinline
VOID
WRITE_REGISTER_BUFFER_ULONG64 (
    _Out_writes_(Count) _Notliteral_ volatile ULONG64 *Register,
    _In_reads_(Count) PULONG64 Buffer,
    _In_ ULONG Count
    )
{
    __movsq((PULONG64)Register, Buffer, Count);
    FastFence();
    return;
}
__forceinline
UCHAR
READ_PORT_UCHAR (
    _In_ _Notliteral_ PUCHAR Port
    )
{
    UCHAR Result;
    _ReadWriteBarrier();
    Result = __inbyte((USHORT)((ULONG_PTR)Port));
    _ReadWriteBarrier();
    return Result;
}
__forceinline
USHORT
READ_PORT_USHORT (
    _In_ _Notliteral_ PUSHORT Port
    )
{
    USHORT Result;
    _ReadWriteBarrier();
    Result = __inword((USHORT)((ULONG_PTR)Port));
    _ReadWriteBarrier();
    return Result;
}
__forceinline
ULONG
READ_PORT_ULONG (
    _In_ _Notliteral_ PULONG Port
    )
{
    ULONG Result;
    _ReadWriteBarrier();
    Result = __indword((USHORT)((ULONG_PTR)Port));
    _ReadWriteBarrier();
    return Result;
}
__forceinline
VOID
READ_PORT_BUFFER_UCHAR (
    _In_ _Notliteral_ PUCHAR Port,
    _Out_writes_all_(Count) PUCHAR Buffer,
    _In_ ULONG Count
    )
{
    _ReadWriteBarrier();
    __inbytestring((USHORT)((ULONG_PTR)Port), Buffer, Count);
    _ReadWriteBarrier();
    return;
}
__forceinline
VOID
READ_PORT_BUFFER_USHORT (
    _In_ _Notliteral_ PUSHORT Port,
    _Out_writes_all_(Count) PUSHORT Buffer,
    _In_ ULONG Count
    )
{
    _ReadWriteBarrier();
    __inwordstring((USHORT)((ULONG_PTR)Port), Buffer, Count);
    _ReadWriteBarrier();
    return;
}
__forceinline
VOID
READ_PORT_BUFFER_ULONG (
    _In_ _Notliteral_ PULONG Port,
    _Out_writes_all_(Count) PULONG Buffer,
    _In_ ULONG Count
    )
{
    _ReadWriteBarrier();
    __indwordstring((USHORT)((ULONG_PTR)Port), Buffer, Count);
    _ReadWriteBarrier();
    return;
}
__forceinline
VOID
WRITE_PORT_UCHAR (
    _In_ _Notliteral_ PUCHAR Port,
    _In_ UCHAR Value
    )
{
    _ReadWriteBarrier();
    __outbyte((USHORT)((ULONG_PTR)Port), Value);
    _ReadWriteBarrier();
    return;
}
__forceinline
VOID
WRITE_PORT_USHORT (
    _In_ _Notliteral_ PUSHORT Port,
    _In_ USHORT Value
    )
{
    _ReadWriteBarrier();
    __outword((USHORT)((ULONG_PTR)Port), Value);
    _ReadWriteBarrier();
    return;
}
__forceinline
VOID
WRITE_PORT_ULONG (
    _In_ _Notliteral_ PULONG Port,
    _In_ ULONG Value
    )
{
    _ReadWriteBarrier();
    __outdword((USHORT)((ULONG_PTR)Port), Value);
    _ReadWriteBarrier();
    return;
}
__forceinline
VOID
WRITE_PORT_BUFFER_UCHAR (
    _In_ _Notliteral_ PUCHAR Port,
    _In_reads_(Count) PUCHAR Buffer,
    _In_ ULONG Count
    )
{
    _ReadWriteBarrier();
    __outbytestring((USHORT)((ULONG_PTR)Port), Buffer, Count);
    _ReadWriteBarrier();
    return;
}
__forceinline
VOID
WRITE_PORT_BUFFER_USHORT (
    _In_ _Notliteral_ PUSHORT Port,
    _In_reads_(Count) PUSHORT Buffer,
    _In_ ULONG Count
    )
{
    _ReadWriteBarrier();
    __outwordstring((USHORT)((ULONG_PTR)Port), Buffer, Count);
    _ReadWriteBarrier();
    return;
}
__forceinline
VOID
WRITE_PORT_BUFFER_ULONG (
    _In_ _Notliteral_ PULONG Port,
    _In_reads_(Count) PULONG Buffer,
    _In_ ULONG Count
    )
{
    _ReadWriteBarrier();
    __outdwordstring((USHORT)((ULONG_PTR)Port), Buffer, Count);
    _ReadWriteBarrier();
    return;
}
}
VOID
KeFlushIoBuffers (
    _In_ PMDL Mdl,
    _In_ BOOLEAN ReadOperation,
    _In_ BOOLEAN DmaOperation
    );
typedef struct _KFLOATING_SAVE {
    ULONG Dummy;
} KFLOATING_SAVE, *PKFLOATING_SAVE;
__forceinline
ULONG
KeGetCurrentProcessorIndex (
    VOID
    )
{
    return __readgsdword(0x1a4);
}
CFORCEINLINE
VOID
KeMemoryBarrier (
    VOID
    )
{
    FastFence();
    return;
}
#pragma warning(push)
#pragma warning(suppress:28104 28161 6001 6101)
_Must_inspect_result_
_IRQL_requires_max_(DISPATCH_LEVEL)
_When_(return>=0, _Kernel_float_saved_)
_At_(*FloatSave, _When_(return>=0, _Kernel_acquires_resource_(FloatState)))
__forceinline
NTSTATUS
KeSaveFloatingPointState (
    _Out_ PKFLOATING_SAVE FloatSave
    )
{
    UNREFERENCED_PARAMETER(FloatSave);
    return STATUS_SUCCESS;
}
#pragma warning(pop)
#pragma warning(push)
#pragma warning (suppress:28103 28162)
_Success_(1)
_IRQL_requires_max_(DISPATCH_LEVEL)
_Kernel_float_restored_
_At_(*FloatSave, _Kernel_requires_resource_held_(FloatState) _Kernel_releases_resource_(FloatState))
__forceinline
NTSTATUS
KeRestoreFloatingPointState (
    _In_ PKFLOATING_SAVE FloatSave
    )
{
    UNREFERENCED_PARAMETER(FloatSave);
    return STATUS_SUCCESS;
}
#pragma warning(pop)
_IRQL_requires_max_(HIGH_LEVEL)
_IRQL_saves_
CFORCEINLINE
KIRQL
KeGetCurrentIrql (
    VOID
    )
{
    return (KIRQL)ReadCR8();
}
_IRQL_requires_max_(HIGH_LEVEL)
NTKERNELAPI
VOID
KeLowerIrql (
    _In_ _Notliteral_ _IRQL_restores_ KIRQL NewIrql
   );
_IRQL_requires_max_(HIGH_LEVEL)
_IRQL_raises_(NewIrql)
_IRQL_saves_
NTKERNELAPI
KIRQL
KfRaiseIrql (
    _In_ KIRQL NewIrql
    );
typedef enum _FIRMWARE_TYPE {
    FirmwareTypeUnknown,
    FirmwareTypeBios,
    FirmwareTypeUefi,
    FirmwareTypeMax
} FIRMWARE_TYPE, *PFIRMWARE_TYPE;
typedef enum _LOGICAL_PROCESSOR_RELATIONSHIP {
    RelationProcessorCore,
    RelationNumaNode,
    RelationCache,
    RelationProcessorPackage,
    RelationGroup,
    RelationAll = 0xffff
} LOGICAL_PROCESSOR_RELATIONSHIP;
typedef enum _PROCESSOR_CACHE_TYPE {
    CacheUnified,
    CacheInstruction,
    CacheData,
    CacheTrace
} PROCESSOR_CACHE_TYPE;
typedef struct _CACHE_DESCRIPTOR {
    UCHAR Level;
    UCHAR Associativity;
    USHORT LineSize;
    ULONG Size;
    PROCESSOR_CACHE_TYPE Type;
} CACHE_DESCRIPTOR, *PCACHE_DESCRIPTOR;
typedef struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION {
    ULONG_PTR ProcessorMask;
    LOGICAL_PROCESSOR_RELATIONSHIP Relationship;
    union {
        struct {
            UCHAR Flags;
        } ProcessorCore;
        struct {
            ULONG NodeNumber;
        } NumaNode;
        CACHE_DESCRIPTOR Cache;
        ULONGLONG Reserved[2];
    } DUMMYUNIONNAME;
} SYSTEM_LOGICAL_PROCESSOR_INFORMATION, *PSYSTEM_LOGICAL_PROCESSOR_INFORMATION;
typedef struct _PROCESSOR_RELATIONSHIP {
    UCHAR Flags;
    UCHAR EfficiencyClass;
    UCHAR Reserved[20];
    USHORT GroupCount;
    _Field_size_(GroupCount) GROUP_AFFINITY GroupMask[ANYSIZE_ARRAY];
} PROCESSOR_RELATIONSHIP, *PPROCESSOR_RELATIONSHIP;
typedef struct _NUMA_NODE_RELATIONSHIP {
    ULONG NodeNumber;
    UCHAR Reserved[20];
    GROUP_AFFINITY GroupMask;
} NUMA_NODE_RELATIONSHIP, *PNUMA_NODE_RELATIONSHIP;
typedef struct _CACHE_RELATIONSHIP {
    UCHAR Level;
    UCHAR Associativity;
    USHORT LineSize;
    ULONG CacheSize;
    PROCESSOR_CACHE_TYPE Type;
    UCHAR Reserved[20];
    GROUP_AFFINITY GroupMask;
} CACHE_RELATIONSHIP, *PCACHE_RELATIONSHIP;
typedef struct _PROCESSOR_GROUP_INFO {
    UCHAR MaximumProcessorCount;
    UCHAR ActiveProcessorCount;
    UCHAR Reserved[38];
    KAFFINITY ActiveProcessorMask;
} PROCESSOR_GROUP_INFO, *PPROCESSOR_GROUP_INFO;
typedef struct _GROUP_RELATIONSHIP {
    USHORT MaximumGroupCount;
    USHORT ActiveGroupCount;
    UCHAR Reserved[20];
    PROCESSOR_GROUP_INFO GroupInfo[ANYSIZE_ARRAY];
} GROUP_RELATIONSHIP, *PGROUP_RELATIONSHIP;
_Struct_size_bytes_(Size) struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX {
    LOGICAL_PROCESSOR_RELATIONSHIP Relationship;
    ULONG Size;
    union {
        PROCESSOR_RELATIONSHIP Processor;
        NUMA_NODE_RELATIONSHIP NumaNode;
        CACHE_RELATIONSHIP Cache;
        GROUP_RELATIONSHIP Group;
    } DUMMYUNIONNAME;
};
typedef struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX, *PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX;
typedef enum _CPU_SET_INFORMATION_TYPE {
    CpuSetInformation
} CPU_SET_INFORMATION_TYPE, *PCPU_SET_INFORMATION_TYPE;
_Struct_size_bytes_(Size) struct _SYSTEM_CPU_SET_INFORMATION {
    ULONG Size;
    CPU_SET_INFORMATION_TYPE Type;
    union {
        struct {
            ULONG Id;
            USHORT Group;
            UCHAR LogicalProcessorIndex;
            UCHAR CoreIndex;
            UCHAR LastLevelCacheIndex;
            UCHAR NumaNodeIndex;
            UCHAR EfficiencyClass;
            union {
                UCHAR AllFlags;
                struct {
                    UCHAR Parked : 1;
                    UCHAR Allocated : 1;
                    UCHAR AllocatedToTargetProcess : 1;
                    UCHAR RealTime : 1;
                    UCHAR ReservedFlags : 4;
                } DUMMYSTRUCTNAME;
            } DUMMYUNIONNAME2;
            union {
                ULONG Reserved;
                UCHAR SchedulingClass;
            };
            ULONG64 AllocationTag;
        } CpuSet;
    } DUMMYUNIONNAME;
};
typedef struct _SYSTEM_CPU_SET_INFORMATION SYSTEM_CPU_SET_INFORMATION, *PSYSTEM_CPU_SET_INFORMATION;
typedef enum _ALTERNATIVE_ARCHITECTURE_TYPE {
    StandardDesign,
    NEC98x86,
    EndAlternatives
} ALTERNATIVE_ARCHITECTURE_TYPE;
                          EXCEPTION_TARGET_UNWIND | EXCEPTION_COLLIDED_UNWIND)
typedef struct _EXCEPTION_RECORD {
    NTSTATUS ExceptionCode;
    ULONG ExceptionFlags;
    struct _EXCEPTION_RECORD *ExceptionRecord;
    PVOID ExceptionAddress;
    ULONG NumberParameters;
    ULONG_PTR ExceptionInformation[EXCEPTION_MAXIMUM_PARAMETERS];
    } EXCEPTION_RECORD;
typedef EXCEPTION_RECORD *PEXCEPTION_RECORD;
typedef struct _EXCEPTION_RECORD32 {
    NTSTATUS ExceptionCode;
    ULONG ExceptionFlags;
    ULONG ExceptionRecord;
    ULONG ExceptionAddress;
    ULONG NumberParameters;
    ULONG ExceptionInformation[EXCEPTION_MAXIMUM_PARAMETERS];
} EXCEPTION_RECORD32, *PEXCEPTION_RECORD32;
typedef struct _EXCEPTION_RECORD64 {
    NTSTATUS ExceptionCode;
    ULONG ExceptionFlags;
    ULONG64 ExceptionRecord;
    ULONG64 ExceptionAddress;
    ULONG NumberParameters;
    ULONG __unusedAlignment;
    ULONG64 ExceptionInformation[EXCEPTION_MAXIMUM_PARAMETERS];
} EXCEPTION_RECORD64, *PEXCEPTION_RECORD64;
typedef struct _EXCEPTION_POINTERS {
    PEXCEPTION_RECORD ExceptionRecord;
    PCONTEXT ContextRecord;
} EXCEPTION_POINTERS, *PEXCEPTION_POINTERS;
typedef enum _KINTERRUPT_MODE {
    LevelSensitive,
    Latched
} KINTERRUPT_MODE;
typedef enum _KINTERRUPT_POLARITY {
    InterruptPolarityUnknown,
    InterruptActiveHigh,
    InterruptRisingEdge = InterruptActiveHigh,
    InterruptActiveLow,
    InterruptFallingEdge = InterruptActiveLow,
    InterruptActiveBoth,
    InterruptActiveBothTriggerLow = InterruptActiveBoth,
    InterruptActiveBothTriggerHigh,
} KINTERRUPT_POLARITY, *PKINTERRUPT_POLARITY;
typedef enum _KWAIT_REASON {
    Executive,
    FreePage,
    PageIn,
    PoolAllocation,
    DelayExecution,
    Suspended,
    UserRequest,
    WrExecutive,
    WrFreePage,
    WrPageIn,
    WrPoolAllocation,
    WrDelayExecution,
    WrSuspended,
    WrUserRequest,
    WrSpare0,
    WrQueue,
    WrLpcReceive,
    WrLpcReply,
    WrVirtualMemory,
    WrPageOut,
    WrRendezvous,
    WrKeyedEvent,
    WrTerminated,
    WrProcessInSwap,
    WrCpuRateControl,
    WrCalloutStack,
    WrKernel,
    WrResource,
    WrPushLock,
    WrMutex,
    WrQuantumEnd,
    WrDispatchInt,
    WrPreempted,
    WrYieldExecution,
    WrFastMutex,
    WrGuardedMutex,
    WrRundown,
    WrAlertByThreadId,
    WrDeferredPreempt,
    WrPhysicalFault,
    MaximumWaitReason
} KWAIT_REASON;
typedef struct _KWAIT_BLOCK {
    LIST_ENTRY WaitListEntry;
    UCHAR WaitType;
    volatile UCHAR BlockState;
    USHORT WaitKey;
    LONG SpareLong;
    union {
        struct _KTHREAD *Thread;
        struct _KQUEUE *NotificationQueue;
    };
    PVOID Object;
    PVOID SparePtr;
} KWAIT_BLOCK, *PKWAIT_BLOCK, *PRKWAIT_BLOCK;
typedef
_IRQL_requires_same_
_Function_class_(KSTART_ROUTINE)
VOID
KSTART_ROUTINE (
    _In_ PVOID StartContext
    );
typedef KSTART_ROUTINE *PKSTART_ROUTINE;
typedef struct _KDEVICE_QUEUE {
    CSHORT Type;
    CSHORT Size;
    LIST_ENTRY DeviceListHead;
    KSPIN_LOCK Lock;
    union {
        BOOLEAN Busy;
        struct {
            LONG64 Reserved : 8;
            LONG64 Hint : 56;
        };
    };
} KDEVICE_QUEUE, *PKDEVICE_QUEUE, *PRKDEVICE_QUEUE;
typedef struct _KDEVICE_QUEUE_ENTRY {
    LIST_ENTRY DeviceListEntry;
    ULONG SortKey;
    BOOLEAN Inserted;
} KDEVICE_QUEUE_ENTRY, *PKDEVICE_QUEUE_ENTRY, *PRKDEVICE_QUEUE_ENTRY;
typedef
_Function_class_(KSERVICE_ROUTINE)
_IRQL_requires_(HIGH_LEVEL)
_IRQL_requires_same_
BOOLEAN
KSERVICE_ROUTINE (
    _In_ struct _KINTERRUPT *Interrupt,
    _In_opt_ PVOID ServiceContext
    );
typedef KSERVICE_ROUTINE *PKSERVICE_ROUTINE;
typedef
_Function_class_(KMESSAGE_SERVICE_ROUTINE)
_IRQL_requires_same_
BOOLEAN
KMESSAGE_SERVICE_ROUTINE (
    _In_ struct _KINTERRUPT *Interrupt,
    _In_ PVOID ServiceContext,
    _In_ ULONG MessageID
    );
typedef KMESSAGE_SERVICE_ROUTINE *PKMESSAGE_SERVICE_ROUTINE;
typedef struct _KMUTANT {
    DISPATCHER_HEADER Header;
    LIST_ENTRY MutantListEntry;
    struct _KTHREAD *OwnerThread;
    union {
        UCHAR MutantFlags;
        struct {
            UCHAR Abandoned : 1;
            UCHAR Spare1 : 7;
        } DUMMYSTRUCTNAME;
    } DUMMYUNIONNAME;
    UCHAR ApcDisable;
} KMUTANT, *PKMUTANT, *PRKMUTANT, KMUTEX, *PKMUTEX, *PRKMUTEX;
typedef struct _KSEMAPHORE {
    DISPATCHER_HEADER Header;
    LONG Limit;
} KSEMAPHORE, *PKSEMAPHORE, *PRKSEMAPHORE;
    (FIELD_OFFSET(KSEMAPHORE, Limit) + sizeof(LONG))
NTKERNELAPI
VOID
KeInitializeDpc (
    _Out_ __drv_aliasesMem PRKDPC Dpc,
    _In_ PKDEFERRED_ROUTINE DeferredRoutine,
    _In_opt_ __drv_aliasesMem PVOID DeferredContext
    );
NTKERNELAPI
VOID
KeInitializeThreadedDpc (
    _Out_ PRKDPC Dpc,
    _In_ PKDEFERRED_ROUTINE DeferredRoutine,
    _In_opt_ PVOID DeferredContext
    );
NTKERNELAPI
BOOLEAN
KeInsertQueueDpc (
    _Inout_ PRKDPC Dpc,
    _In_opt_ PVOID SystemArgument1,
    _In_opt_ __drv_aliasesMem PVOID SystemArgument2
    );
_IRQL_requires_max_(HIGH_LEVEL)
NTKERNELAPI
BOOLEAN
KeRemoveQueueDpc (
    _Inout_ PRKDPC Dpc
    );
_IRQL_requires_max_(HIGH_LEVEL)
NTKERNELAPI
BOOLEAN
KeRemoveQueueDpcEx (
    _Inout_ PRKDPC Dpc,
    _In_ BOOLEAN WaitIfActive
    );
NTKERNELAPI
NTSTATUS
KeInitializeCrashDumpHeader(
    _In_ ULONG DumpType,
    _In_ ULONG Flags,
    _Out_writes_bytes_(BufferSize) PVOID Buffer,
    _In_ ULONG BufferSize,
    _Out_opt_ PULONG BufferNeeded
    );
NTKERNELAPI
VOID
KeSetImportanceDpc (
    _Inout_ PRKDPC Dpc,
    _In_ KDPC_IMPORTANCE Importance
    );
NTKERNELAPI
VOID
KeSetTargetProcessorDpc (
    _Inout_ PRKDPC Dpc,
    _In_ CCHAR Number
    );
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
VOID
KeFlushQueuedDpcs (
    VOID
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
VOID
KeInitializeDeviceQueue (
    _Out_ PKDEVICE_QUEUE DeviceQueue
    );
_IRQL_requires_(DISPATCH_LEVEL)
NTKERNELAPI
BOOLEAN
KeInsertDeviceQueue (
    _Inout_ PKDEVICE_QUEUE DeviceQueue,
    _Inout_ PKDEVICE_QUEUE_ENTRY DeviceQueueEntry
    );
_IRQL_requires_(DISPATCH_LEVEL)
NTKERNELAPI
BOOLEAN
KeInsertByKeyDeviceQueue (
    _Inout_ PKDEVICE_QUEUE DeviceQueue,
    _Inout_ PKDEVICE_QUEUE_ENTRY DeviceQueueEntry,
    _In_ ULONG SortKey
    );
_IRQL_requires_(DISPATCH_LEVEL)
NTKERNELAPI
PKDEVICE_QUEUE_ENTRY
KeRemoveDeviceQueue (
    _Inout_ PKDEVICE_QUEUE DeviceQueue
    );
_IRQL_requires_(DISPATCH_LEVEL)
NTKERNELAPI
PKDEVICE_QUEUE_ENTRY
KeRemoveByKeyDeviceQueue (
    _Inout_ PKDEVICE_QUEUE DeviceQueue,
    _In_ ULONG SortKey
    );
_IRQL_requires_(DISPATCH_LEVEL)
NTKERNELAPI
PKDEVICE_QUEUE_ENTRY
KeRemoveByKeyDeviceQueueIfBusy (
    _Inout_ PKDEVICE_QUEUE DeviceQueue,
    _In_ ULONG SortKey
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
BOOLEAN
KeRemoveEntryDeviceQueue (
    _Inout_ PKDEVICE_QUEUE DeviceQueue,
    _Inout_ PKDEVICE_QUEUE_ENTRY DeviceQueueEntry
    );
_IRQL_requires_max_(HIGH_LEVEL)
NTKERNELAPI
BOOLEAN
KeSynchronizeExecution (
    _Inout_ PKINTERRUPT Interrupt,
    _In_ PKSYNCHRONIZE_ROUTINE SynchronizeRoutine,
    _In_opt_ __drv_aliasesMem PVOID SynchronizeContext
    );
_Requires_lock_not_held_(*Interrupt->ActualLock)
_Acquires_lock_(*Interrupt->ActualLock)
_IRQL_requires_max_(HIGH_LEVEL)
_IRQL_saves_
_IRQL_raises_(HIGH_LEVEL)
NTKERNELAPI
KIRQL
KeAcquireInterruptSpinLock (
    _Inout_ PKINTERRUPT Interrupt
    );
_Requires_lock_held_(*Interrupt->ActualLock)
_Releases_lock_(*Interrupt->ActualLock)
_IRQL_requires_(HIGH_LEVEL)
NTKERNELAPI
VOID
KeReleaseInterruptSpinLock (
    _Inout_ PKINTERRUPT Interrupt,
    _In_ _IRQL_restores_ KIRQL OldIrql
    );
NTKERNELAPI
VOID
KeInitializeEvent (
    _Out_ PRKEVENT Event,
    _In_ EVENT_TYPE Type,
    _In_ BOOLEAN State
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
VOID
KeClearEvent (
    _Inout_ PRKEVENT Event
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
LONG
KeReadStateEvent (
    _In_ PRKEVENT Event
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
LONG
KeResetEvent (
    _Inout_ PRKEVENT Event
    );
_When_(Wait==0, _IRQL_requires_max_(DISPATCH_LEVEL))
_When_(Wait==1, _IRQL_requires_max_(APC_LEVEL))
_When_(Wait==1, __drv_reportError("Caution: 'Wait' argument does not provide"
                                      " any synchronization guarantees, only a hint"
                                      " to the system that the thread will immediately"
                                      " issue a wait operation"))
NTKERNELAPI
LONG
KeSetEvent (
    _Inout_ PRKEVENT Event,
    _In_ KPRIORITY Increment,
    _In_ _Literal_ BOOLEAN Wait
    );
NTKERNELAPI
VOID
KeInitializeMutex (
    _Out_ PRKMUTEX Mutex,
    _In_ ULONG Level
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
LONG
KeReadStateMutex (
    _In_ PRKMUTEX Mutex
    );
_When_(Wait==0, _IRQL_requires_max_(DISPATCH_LEVEL))
_When_(Wait==1, _IRQL_requires_max_(APC_LEVEL))
_When_(Wait==1, __drv_reportError("Caution: 'Wait' argument does not provide"
                                      " any synchronization guarantees, only a hint"
                                      " to the system that the thread will immediately"
                                      " issue a wait operation"))
NTKERNELAPI
LONG
KeReleaseMutex (
    _Inout_ PRKMUTEX Mutex,
    _In_ BOOLEAN Wait
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
VOID
KeInitializeSemaphore (
    _Out_ PRKSEMAPHORE Semaphore,
    _In_ LONG Count,
    _In_ LONG Limit
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
LONG
KeReadStateSemaphore (
    _In_ PRKSEMAPHORE Semaphore
    );
_When_(Wait==0, _IRQL_requires_max_(DISPATCH_LEVEL))
_When_(Wait==1, _IRQL_requires_max_(APC_LEVEL))
_When_(Wait==1, __drv_reportError("Caution: 'Wait' argument does not provide"
                                      " any synchronization guarantees, only a hint"
                                      " to the system that the thread will immediately"
                                      " issue a wait operation"))
NTKERNELAPI
LONG
KeReleaseSemaphore (
    _Inout_ PRKSEMAPHORE Semaphore,
    _In_ KPRIORITY Increment,
    _In_ LONG Adjustment,
    _In_ _Literal_ BOOLEAN Wait
    );
_IRQL_requires_min_(PASSIVE_LEVEL)
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
NTSTATUS
KeDelayExecutionThread (
    _In_ KPROCESSOR_MODE WaitMode,
    _In_ BOOLEAN Alertable,
    _In_ PLARGE_INTEGER Interval
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTKERNELAPI
KPRIORITY
KeQueryPriorityThread (
    _In_ PKTHREAD Thread
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTKERNELAPI
ULONG
KeQueryRuntimeThread (
    _In_ PKTHREAD Thread,
    _Out_ PULONG UserTime
    );
_IRQL_requires_max_(APC_LEVEL)
_IRQL_requires_min_(PASSIVE_LEVEL)
_IRQL_requires_same_
ULONG64
KeQueryTotalCycleTimeThread (
    _Inout_ PKTHREAD Thread,
    _Out_ PULONG64 CycleTimeStamp
    );
_Must_inspect_result_
NTKERNELAPI
NTSTATUS
KeSetTargetProcessorDpcEx (
    _Inout_ PKDPC Dpc,
    _In_ PPROCESSOR_NUMBER ProcNumber
    );
_IRQL_requires_min_(PASSIVE_LEVEL)
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
VOID
KeRevertToUserAffinityThread (
    VOID
    );
_IRQL_requires_min_(PASSIVE_LEVEL)
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
VOID
KeSetSystemAffinityThread (
    _In_ KAFFINITY Affinity
    );
_IRQL_requires_min_(PASSIVE_LEVEL)
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
VOID
KeRevertToUserAffinityThreadEx (
    _In_ KAFFINITY Affinity
    );
_IRQL_requires_min_(PASSIVE_LEVEL)
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
VOID
KeSetSystemGroupAffinityThread (
    _In_ PGROUP_AFFINITY Affinity,
    _Out_opt_ PGROUP_AFFINITY PreviousAffinity
    );
_IRQL_requires_min_(PASSIVE_LEVEL)
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
VOID
KeRevertToUserGroupAffinityThread (
    _In_ PGROUP_AFFINITY PreviousAffinity
    );
_IRQL_requires_min_(PASSIVE_LEVEL)
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
KAFFINITY
KeSetSystemAffinityThreadEx (
    _In_ KAFFINITY Affinity
    );
_IRQL_requires_min_(PASSIVE_LEVEL)
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
KPRIORITY
KeSetPriorityThread (
    _Inout_ PKTHREAD Thread,
    _In_ KPRIORITY Priority
    );
_Acquires_lock_(_Global_critical_region_)
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
VOID
KeEnterCriticalRegion (
    VOID
    );
_Releases_lock_(_Global_critical_region_)
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
VOID
KeLeaveCriticalRegion (
    VOID
    );
_Acquires_lock_(_Global_critical_region_)
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
VOID
KeEnterGuardedRegion (
    VOID
    );
_Releases_lock_(_Global_critical_region_)
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
VOID
KeLeaveGuardedRegion (
    VOID
    );
_IRQL_requires_min_(PASSIVE_LEVEL)
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
BOOLEAN
KeAreApcsDisabled (
    VOID
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
VOID
KeInitializeTimer (
    _Out_ PKTIMER Timer
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
VOID
KeInitializeTimerEx (
    _Out_ PKTIMER Timer,
    _In_ TIMER_TYPE Type
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
BOOLEAN
KeCancelTimer (
    _Inout_ PKTIMER
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
BOOLEAN
KeReadStateTimer (
    _In_ PKTIMER Timer
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
BOOLEAN
KeSetTimer (
    _Inout_ PKTIMER Timer,
    _In_ LARGE_INTEGER DueTime,
    _In_opt_ PKDPC Dpc
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
BOOLEAN
KeSetTimerEx (
    _Inout_ PKTIMER Timer,
    _In_ LARGE_INTEGER DueTime,
    _In_ LONG Period,
    _In_opt_ PKDPC Dpc
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
BOOLEAN
KeSetCoalescableTimer (
    _Inout_ PKTIMER Timer,
    _In_ LARGE_INTEGER DueTime,
    _In_ ULONG Period,
    _In_ ULONG TolerableDelay,
    _In_opt_ PKDPC Dpc
    );
_IRQL_requires_min_(PASSIVE_LEVEL)
_When_((Timeout==NULL || Timeout->QuadPart!=0), _IRQL_requires_max_(APC_LEVEL))
_When_((Timeout!=NULL && Timeout->QuadPart==0), _IRQL_requires_max_(DISPATCH_LEVEL))
NTKERNELAPI
NTSTATUS
KeWaitForMultipleObjects (
    _In_ ULONG Count,
    _In_reads_(Count) PVOID Object[],
    _In_ _Strict_type_match_ WAIT_TYPE WaitType,
    _In_ _Strict_type_match_ KWAIT_REASON WaitReason,
    _In_ __drv_strictType(KPROCESSOR_MODE/enum _MODE,__drv_typeConst) KPROCESSOR_MODE WaitMode,
    _In_ BOOLEAN Alertable,
    _In_opt_ PLARGE_INTEGER Timeout,
    _Out_opt_ PKWAIT_BLOCK WaitBlockArray
    );
_IRQL_requires_min_(PASSIVE_LEVEL)
_When_((Timeout==NULL || Timeout->QuadPart!=0), _IRQL_requires_max_(APC_LEVEL))
_When_((Timeout!=NULL && Timeout->QuadPart==0), _IRQL_requires_max_(DISPATCH_LEVEL))
NTKERNELAPI
NTSTATUS
KeWaitForSingleObject (
    _In_ _Points_to_data_ PVOID Object,
    _In_ _Strict_type_match_ KWAIT_REASON WaitReason,
    _In_ __drv_strictType(KPROCESSOR_MODE/enum _MODE,__drv_typeConst) KPROCESSOR_MODE WaitMode,
    _In_ BOOLEAN Alertable,
    _In_opt_ PLARGE_INTEGER Timeout
    );
typedef
_IRQL_requires_same_
_Function_class_(KIPI_BROADCAST_WORKER)
_IRQL_requires_(IPI_LEVEL)
ULONG_PTR
KIPI_BROADCAST_WORKER (
    _In_ ULONG_PTR Argument
    );
typedef KIPI_BROADCAST_WORKER *PKIPI_BROADCAST_WORKER;
_IRQL_requires_min_(PASSIVE_LEVEL)
_IRQL_requires_max_(IPI_LEVEL-1)
NTKERNELAPI
ULONG_PTR
KeIpiGenericCall (
    _In_ PKIPI_BROADCAST_WORKER BroadcastFunction,
    _In_ ULONG_PTR Context
    );
CFORCEINLINE
VOID
NTAPI
KzInitializeSpinLock (
    _Out_ PKSPIN_LOCK SpinLock
    )
{
    *SpinLock = 0;
    return;
}
_Must_inspect_result_
NTKERNELAPI
BOOLEAN
FASTCALL
KeTestSpinLock (
    _In_ PKSPIN_LOCK SpinLock
    );
_Must_inspect_result_
_IRQL_requires_min_(DISPATCH_LEVEL)
_Post_satisfies_(return == 1 || return == 0)
NTKERNELAPI
BOOLEAN
FASTCALL
KeTryToAcquireSpinLockAtDpcLevel (
    _Inout_ _Requires_lock_not_held_(*_Curr_)
    _When_(return!=0, _Acquires_lock_(*_Curr_))
    PKSPIN_LOCK SpinLock
    );
    *(OldIrql) = KeAcquireSpinLockRaiseToDpc(SpinLock)
_Requires_lock_not_held_(*SpinLock)
_Acquires_lock_(*SpinLock)
_IRQL_requires_min_(DISPATCH_LEVEL)
NTKERNELAPI
VOID
KeAcquireSpinLockAtDpcLevel (
    _Inout_ PKSPIN_LOCK SpinLock
    );
_Requires_lock_not_held_(*SpinLock)
_Acquires_lock_(*SpinLock)
_IRQL_requires_max_(DISPATCH_LEVEL)
_IRQL_saves_
_IRQL_raises_(DISPATCH_LEVEL)
NTKERNELAPI
KIRQL
KeAcquireSpinLockRaiseToDpc (
    _Inout_ PKSPIN_LOCK SpinLock
    );
_Requires_lock_held_(*SpinLock)
_Releases_lock_(*SpinLock)
_IRQL_requires_(DISPATCH_LEVEL)
NTKERNELAPI
VOID
KeReleaseSpinLock (
    _Inout_ PKSPIN_LOCK SpinLock,
    _In_ _IRQL_restores_ KIRQL NewIrql
    );
_Requires_lock_held_(*SpinLock)
_Releases_lock_(*SpinLock)
_IRQL_requires_min_(DISPATCH_LEVEL)
NTKERNELAPI
VOID
KeReleaseSpinLockFromDpcLevel (
    _Inout_ PKSPIN_LOCK SpinLock
    );
_Requires_lock_not_held_(*SpinLock)
_Acquires_lock_(*SpinLock)
_IRQL_requires_max_(DISPATCH_LEVEL)
_IRQL_saves_
NTKERNELAPI
KIRQL
FASTCALL
KeAcquireSpinLockForDpc (
    _Inout_ PKSPIN_LOCK SpinLock
    );
_Requires_lock_held_(*SpinLock)
_Releases_lock_(*SpinLock)
_IRQL_requires_(DISPATCH_LEVEL)
NTKERNELAPI
VOID
FASTCALL
KeReleaseSpinLockForDpc (
    _Inout_ PKSPIN_LOCK SpinLock,
    _In_ _IRQL_restores_ KIRQL OldIrql
    );
_Requires_lock_not_held_(*LockHandle)
_Acquires_lock_(*LockHandle)
_Post_same_lock_(*SpinLock, *LockHandle)
_IRQL_requires_max_(DISPATCH_LEVEL)
_IRQL_saves_global_(QueuedSpinLock,LockHandle)
_IRQL_raises_(DISPATCH_LEVEL)
NTKERNELAPI
VOID
FASTCALL
KeAcquireInStackQueuedSpinLock (
    _Inout_ PKSPIN_LOCK SpinLock,
    _Out_ PKLOCK_QUEUE_HANDLE LockHandle
    );
_Requires_lock_held_(*LockHandle)
_Releases_lock_(*LockHandle)
_IRQL_requires_(DISPATCH_LEVEL)
_IRQL_restores_global_(QueuedSpinLock,LockHandle)
NTKERNELAPI
VOID
FASTCALL
KeReleaseInStackQueuedSpinLock (
    _In_ PKLOCK_QUEUE_HANDLE LockHandle
    );
_Requires_lock_not_held_(*LockHandle)
_Acquires_lock_(*LockHandle)
_Post_same_lock_(*SpinLock, *LockHandle)
_IRQL_requires_min_(DISPATCH_LEVEL)
NTKERNELAPI
VOID
FASTCALL
KeAcquireInStackQueuedSpinLockAtDpcLevel (
    _Inout_ PKSPIN_LOCK SpinLock,
    _Out_ PKLOCK_QUEUE_HANDLE LockHandle
    );
_Requires_lock_held_(*LockHandle)
_Releases_lock_(*LockHandle)
_IRQL_requires_(DISPATCH_LEVEL)
NTKERNELAPI
VOID
FASTCALL
KeReleaseInStackQueuedSpinLockFromDpcLevel (
    _In_ PKLOCK_QUEUE_HANDLE LockHandle
    );
_Requires_lock_not_held_(*LockHandle)
_Acquires_lock_(*LockHandle)
_Post_same_lock_(*SpinLock, *LockHandle)
_IRQL_requires_max_(DISPATCH_LEVEL)
_IRQL_saves_global_(QueuedSpinLock,LockHandle)
NTKERNELAPI
VOID
FASTCALL
KeAcquireInStackQueuedSpinLockForDpc (
    _Inout_ PKSPIN_LOCK SpinLock,
    _Out_ PKLOCK_QUEUE_HANDLE LockHandle
    );
_Requires_lock_held_(*LockHandle)
_Releases_lock_(*LockHandle)
_IRQL_requires_(DISPATCH_LEVEL)
_IRQL_restores_global_(QueuedSpinLock,LockHandle)
NTKERNELAPI
VOID
FASTCALL
KeReleaseInStackQueuedSpinLockForDpc (
    _In_ PKLOCK_QUEUE_HANDLE LockHandle
    );
typedef struct _KDPC_WATCHDOG_INFORMATION {
    ULONG DpcTimeLimit;
    ULONG DpcTimeCount;
    ULONG DpcWatchdogLimit;
    ULONG DpcWatchdogCount;
    ULONG Reserved;
} KDPC_WATCHDOG_INFORMATION, *PKDPC_WATCHDOG_INFORMATION;
_IRQL_requires_min_(DISPATCH_LEVEL)
NTKERNELAPI
NTSTATUS
KeQueryDpcWatchdogInformation (
    _Out_ PKDPC_WATCHDOG_INFORMATION WatchdogInformation
    );
NTKERNELAPI
_IRQL_requires_same_
LOGICAL
KeIsExecutingDpc (
    VOID
    );
typedef enum _KBUGCHECK_BUFFER_DUMP_STATE {
    BufferEmpty,
    BufferInserted,
    BufferStarted,
    BufferFinished,
    BufferIncomplete
} KBUGCHECK_BUFFER_DUMP_STATE;
typedef
_Function_class_(KBUGCHECK_CALLBACK_ROUTINE)
_IRQL_requires_same_
VOID
KBUGCHECK_CALLBACK_ROUTINE (
    IN PVOID Buffer,
    IN ULONG Length
    );
typedef KBUGCHECK_CALLBACK_ROUTINE *PKBUGCHECK_CALLBACK_ROUTINE;
typedef struct _KBUGCHECK_CALLBACK_RECORD {
    LIST_ENTRY Entry;
    PKBUGCHECK_CALLBACK_ROUTINE CallbackRoutine;
    _Field_size_bytes_opt_(Length) PVOID Buffer;
    ULONG Length;
    PUCHAR Component;
    ULONG_PTR Checksum;
    UCHAR State;
} KBUGCHECK_CALLBACK_RECORD, *PKBUGCHECK_CALLBACK_RECORD;
    (CallbackRecord)->State = BufferEmpty
_Must_inspect_result_
NTKERNELAPI
BOOLEAN
KeDeregisterBugCheckCallback (
    _Inout_ PKBUGCHECK_CALLBACK_RECORD CallbackRecord
    );
_Must_inspect_result_
NTKERNELAPI
BOOLEAN
KeRegisterBugCheckCallback (
    _Out_ PKBUGCHECK_CALLBACK_RECORD CallbackRecord,
    _In_ PKBUGCHECK_CALLBACK_ROUTINE CallbackRoutine,
    _In_reads_bytes_opt_(Length) PVOID Buffer,
    _In_ ULONG Length,
    _In_ PUCHAR Component
    );
typedef enum _KBUGCHECK_CALLBACK_REASON {
    KbCallbackInvalid,
    KbCallbackReserved1,
    KbCallbackSecondaryDumpData,
    KbCallbackDumpIo,
    KbCallbackAddPages,
    KbCallbackSecondaryMultiPartDumpData,
    KbCallbackRemovePages,
    KbCallbackTriageDumpData
} KBUGCHECK_CALLBACK_REASON;
typedef
_Function_class_(KBUGCHECK_REASON_CALLBACK_ROUTINE)
_IRQL_requires_same_
VOID
KBUGCHECK_REASON_CALLBACK_ROUTINE (
    _In_ KBUGCHECK_CALLBACK_REASON Reason,
    _In_ struct _KBUGCHECK_REASON_CALLBACK_RECORD* Record,
    _Inout_ PVOID ReasonSpecificData,
    _In_ ULONG ReasonSpecificDataLength
    );
typedef KBUGCHECK_REASON_CALLBACK_ROUTINE *PKBUGCHECK_REASON_CALLBACK_ROUTINE;
KBUGCHECK_REASON_CALLBACK_ROUTINE BugCheckSecondaryMultiPartDumpDataCallback;
typedef struct _KBUGCHECK_REASON_CALLBACK_RECORD {
    LIST_ENTRY Entry;
    PKBUGCHECK_REASON_CALLBACK_ROUTINE CallbackRoutine;
    PUCHAR Component;
    ULONG_PTR Checksum;
    KBUGCHECK_CALLBACK_REASON Reason;
    UCHAR State;
} KBUGCHECK_REASON_CALLBACK_RECORD, *PKBUGCHECK_REASON_CALLBACK_RECORD;
typedef struct _KBUGCHECK_SECONDARY_DUMP_DATA {
    IN PVOID InBuffer;
    IN ULONG InBufferLength;
    IN ULONG MaximumAllowed;
    OUT GUID Guid;
    OUT PVOID OutBuffer;
    OUT ULONG OutBufferLength;
} KBUGCHECK_SECONDARY_DUMP_DATA, *PKBUGCHECK_SECONDARY_DUMP_DATA;
typedef struct _KBUGCHECK_SECONDARY_DUMP_DATA_EX {
    _In_ PVOID InBuffer;
    _In_ ULONG InBufferLength;
    _In_ ULONG MaximumAllowed;
    _Out_ GUID Guid;
    _Inout_ PVOID OutBuffer;
    _Inout_ ULONG OutBufferLength;
    _Inout_ PVOID Context;
    _Inout_ ULONG Flags;
    _In_ ULONG DumpType;
    _In_ ULONG BugCheckCode;
    _In_ ULONG_PTR BugCheckParameter1;
    _In_ ULONG_PTR BugCheckParameter2;
    _In_ ULONG_PTR BugCheckParameter3;
    _In_ ULONG_PTR BugCheckParameter4;
} KBUGCHECK_SECONDARY_DUMP_DATA_EX, *PKBUGCHECK_SECONDARY_DUMP_DATA_EX;
typedef enum _KBUGCHECK_DUMP_IO_TYPE {
    KbDumpIoInvalid,
    KbDumpIoHeader,
    KbDumpIoBody,
    KbDumpIoSecondaryData,
    KbDumpIoComplete
} KBUGCHECK_DUMP_IO_TYPE;
typedef struct _KBUGCHECK_DUMP_IO {
    IN ULONG64 Offset;
    IN PVOID Buffer;
    IN ULONG BufferLength;
    IN KBUGCHECK_DUMP_IO_TYPE Type;
} KBUGCHECK_DUMP_IO, *PKBUGCHECK_DUMP_IO;
typedef struct _KBUGCHECK_ADD_PAGES {
    _Inout_ PVOID Context;
    _Inout_ ULONG Flags;
    _In_ ULONG BugCheckCode;
    _Out_ ULONG_PTR Address;
    _Out_ ULONG_PTR Count;
} KBUGCHECK_ADD_PAGES, *PKBUGCHECK_ADD_PAGES;
typedef struct _KBUGCHECK_REMOVE_PAGES {
    _Inout_ PVOID Context;
    _Inout_ ULONG Flags;
    _In_ ULONG BugCheckCode;
    _Out_ ULONG_PTR Address;
    _Out_ ULONG_PTR Count;
} KBUGCHECK_REMOVE_PAGES, *PKBUGCHECK_REMOVE_PAGES;
typedef struct _KADDRESS_RANGE {
    _Field_size_bytes_(Size) PVOID Address;
    SIZE_T Size;
} KADDRESS_RANGE, *PKADDRESS_RANGE;
typedef struct _KADDRESS_RANGE_DESCRIPTOR {
    _Field_size_(AddressRangeCount) CONST KADDRESS_RANGE *AddressRanges;
    SIZE_T AddressRangeCount;
} KADDRESS_RANGE_DESCRIPTOR, *PKADDRESS_RANGE_DESCRIPTOR;
typedef
_Struct_size_bytes_(FIELD_OFFSET(KTRIAGE_DUMP_DATA_ARRAY, Blocks) +
                    NumBlocksTotal * sizeof(KADDRESS_RANGE))
struct _KTRIAGE_DUMP_DATA_ARRAY {
    LIST_ENTRY List;
    ULONG NumBlocksUsed;
    ULONG NumBlocksTotal;
    ULONG DataSize;
    ULONG MaxDataSize;
    ULONG ComponentNameBufferLength;
    PUCHAR ComponentName;
    _Field_size_(NumBlocksUsed)
    KADDRESS_RANGE Blocks[ANYSIZE_ARRAY];
} KTRIAGE_DUMP_DATA_ARRAY, *PKTRIAGE_DUMP_DATA_ARRAY;
typedef struct _KBUGCHECK_TRIAGE_DUMP_DATA {
    _Out_opt_ PKTRIAGE_DUMP_DATA_ARRAY DataArray;
    _In_ ULONG Flags;
    _In_ ULONG MaxVirtMemSize;
    _In_ ULONG BugCheckCode;
    _In_ ULONG_PTR BugCheckParameter1;
    _In_ ULONG_PTR BugCheckParameter2;
    _In_ ULONG_PTR BugCheckParameter3;
    _In_ ULONG_PTR BugCheckParameter4;
} KBUGCHECK_TRIAGE_DUMP_DATA, *PKBUGCHECK_TRIAGE_DUMP_DATA;
_Success_(NT_SUCCESS(return))
_IRQL_requires_same_
NTSTATUS
KeInitializeTriageDumpDataArray (
    _Out_writes_bytes_(Size) PKTRIAGE_DUMP_DATA_ARRAY KtriageDumpDataArray,
    _In_ ULONG Size
    );
_Success_(NT_SUCCESS(return))
_IRQL_requires_same_
NTSTATUS
KeAddTriageDumpDataBlock (
    _Inout_ PKTRIAGE_DUMP_DATA_ARRAY KtriageDumpDataArray,
    _In_ PVOID Address,
    _In_ SIZE_T Size
    );
_Must_inspect_result_
NTKERNELAPI
BOOLEAN
KeDeregisterBugCheckReasonCallback (
    _Inout_ PKBUGCHECK_REASON_CALLBACK_RECORD CallbackRecord
    );
_Must_inspect_result_
NTKERNELAPI
BOOLEAN
KeRegisterBugCheckReasonCallback (
    _Out_ PKBUGCHECK_REASON_CALLBACK_RECORD CallbackRecord,
    _In_ PKBUGCHECK_REASON_CALLBACK_ROUTINE CallbackRoutine,
    _In_ KBUGCHECK_CALLBACK_REASON Reason,
    _In_ PUCHAR Component
    );
typedef
_Function_class_(NMI_CALLBACK)
_IRQL_requires_same_
BOOLEAN
NMI_CALLBACK(
    _In_opt_ PVOID Context,
    _In_ BOOLEAN Handled
    );
typedef NMI_CALLBACK *PNMI_CALLBACK;
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
PVOID
KeRegisterNmiCallback (
    _In_ PNMI_CALLBACK CallbackRoutine,
    _In_opt_ PVOID Context
    );
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
NTSTATUS
KeDeregisterNmiCallback (
    _In_ PVOID Handle
    );
typedef enum _BOUND_CALLBACK_STATUS {
    BoundExceptionContinueSearch = 0,
    BoundExceptionHandled,
    BoundExceptionError,
    BoundExceptionMaximum
} BOUND_CALLBACK_STATUS, *PBOUND_CALLBACK_STATUS;
typedef
_IRQL_requires_same_
BOUND_CALLBACK_STATUS
BOUND_CALLBACK(
    VOID
    );
typedef BOUND_CALLBACK *PBOUND_CALLBACK;
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
PVOID
KeRegisterBoundCallback (
    _In_ PBOUND_CALLBACK CallbackRoutine
    );
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
NTSTATUS
KeDeregisterBoundCallback (
    _In_ PVOID Handle
    );
__drv_preferredFunction("error logging or driver shutdown",
    "Whenever possible, all kernel-mode components should log an error and "
    "continue to run, rather than calling KeBugCheckEx")
NTKERNELAPI
DECLSPEC_NORETURN
VOID
NTAPI
KeBugCheckEx(
    _In_ ULONG BugCheckCode,
    _In_ ULONG_PTR BugCheckParameter1,
    _In_ ULONG_PTR BugCheckParameter2,
    _In_ ULONG_PTR BugCheckParameter3,
    _In_ ULONG_PTR BugCheckParameter4
    );
NTKERNELAPI
VOID
KeQuerySystemTimePrecise (
    _Out_ PLARGE_INTEGER CurrentTime
    );
_IRQL_requires_same_
ULONG64
KeQueryInterruptTimePrecise (
    _Out_ PULONG64 QpcTimeStamp
    );
_IRQL_requires_same_
ULONG64
KeQueryUnbiasedInterruptTimePrecise (
    _Out_ PULONG64 QpcTimeStamp
    );
NTKERNELAPI
ULONG
KeQueryTimeIncrement (
    VOID
    );
NTKERNELAPI
ULONGLONG
KeQueryUnbiasedInterruptTime (
    VOID
    );
NTKERNELAPI
ULONG
KeGetRecommendedSharedDataAlignment (
    VOID
    );
NTKERNELAPI
KAFFINITY
KeQueryActiveProcessors (
    VOID
    );
NTKERNELAPI
ULONG
KeQueryActiveProcessorCount (
    _Out_opt_ PKAFFINITY ActiveProcessors
    );
NTKERNELAPI
ULONG
KeQueryActiveProcessorCountEx (
    _In_ USHORT GroupNumber
    );
NTKERNELAPI
ULONG
KeQueryMaximumProcessorCount (
    VOID
    );
NTKERNELAPI
ULONG
KeQueryMaximumProcessorCountEx (
    _In_ USHORT GroupNumber
    );
NTKERNELAPI
USHORT
KeQueryActiveGroupCount (
    VOID
    );
NTKERNELAPI
USHORT
KeQueryMaximumGroupCount (
    VOID
    );
NTKERNELAPI
KAFFINITY
KeQueryGroupAffinity (
    _In_ USHORT GroupNumber
    );
NTKERNELAPI
ULONG
KeGetCurrentProcessorNumberEx (
    _Out_opt_ PPROCESSOR_NUMBER ProcNumber
    );
NTKERNELAPI
VOID
KeQueryNodeActiveAffinity (
    _In_ USHORT NodeNumber,
    _Out_opt_ PGROUP_AFFINITY Affinity,
    _Out_opt_ PUSHORT Count
    );
NTKERNELAPI
USHORT
KeQueryNodeMaximumProcessorCount (
    _In_ USHORT NodeNumber
    );
NTKERNELAPI
USHORT
KeQueryHighestNodeNumber (
    VOID
    );
NTKERNELAPI
USHORT
KeGetCurrentNodeNumber (
    VOID
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
_When_(_Old_(*Length) == 0, _Post_satisfies_(return < 0))
NTKERNELAPI
NTSTATUS
KeQueryLogicalProcessorRelationship (
    _In_opt_ PPROCESSOR_NUMBER ProcessorNumber,
    _In_ LOGICAL_PROCESSOR_RELATIONSHIP RelationshipType,
    _Out_writes_bytes_opt_(*Length) PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX Information,
    _Always_(_Inout_) PULONG Length
    );
_IRQL_requires_min_(DISPATCH_LEVEL)
NTKERNELAPI
LOGICAL
KeShouldYieldProcessor (
    VOID
    );
typedef enum _MEMORY_CACHING_TYPE_ORIG {
    MmFrameBufferCached = 2
} MEMORY_CACHING_TYPE_ORIG;
typedef enum _MEMORY_CACHING_TYPE {
    MmNonCached = FALSE,
    MmCached = TRUE,
    MmWriteCombined = MmFrameBufferCached,
    MmHardwareCoherentCached,
    MmNonCachedUnordered,
    MmUSWCCached,
    MmMaximumCacheType,
    MmNotMapped = -1
} MEMORY_CACHING_TYPE;
_IRQL_requires_min_(PASSIVE_LEVEL)
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
BOOLEAN
KeAreAllApcsDisabled (
    VOID
    );
_IRQL_requires_max_(APC_LEVEL)
_IRQL_requires_min_(PASSIVE_LEVEL)
NTKERNELAPI
VOID
FASTCALL
KeInitializeGuardedMutex (
    _Out_ PKGUARDED_MUTEX Mutex
    );
_Acquires_lock_(_Global_critical_region_)
_Requires_lock_not_held_(*Mutex)
_Acquires_lock_(*Mutex)
_IRQL_requires_max_(APC_LEVEL)
_IRQL_requires_min_(PASSIVE_LEVEL)
NTKERNELAPI
VOID
FASTCALL
KeAcquireGuardedMutex (
    _Inout_ PKGUARDED_MUTEX Mutex
    );
_Releases_lock_(_Global_critical_region_)
_Requires_lock_held_(*Mutex)
_Releases_lock_(*Mutex)
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
VOID
FASTCALL
KeReleaseGuardedMutex (
    _Inout_ PKGUARDED_MUTEX Mutex
    );
_Must_inspect_result_
_Success_(return != FALSE)
_IRQL_requires_max_(APC_LEVEL)
_Post_satisfies_(return == 1 || return == 0)
NTKERNELAPI
BOOLEAN
FASTCALL
KeTryToAcquireGuardedMutex (
    _When_ (return, _Acquires_exclusive_lock_(*_Curr_)) _Acquires_lock_(_Global_critical_region_)
    _Inout_ PKGUARDED_MUTEX Mutex
    );
_Requires_lock_not_held_(*FastMutex)
_Acquires_lock_(*FastMutex)
_IRQL_requires_max_(APC_LEVEL)
_IRQL_requires_min_(PASSIVE_LEVEL)
NTKERNELAPI
VOID
FASTCALL
KeAcquireGuardedMutexUnsafe (
    _Inout_ PKGUARDED_MUTEX FastMutex
    );
_Requires_lock_held_(*FastMutex)
_Releases_lock_(*FastMutex)
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
VOID
FASTCALL
KeReleaseGuardedMutexUnsafe (
    _Inout_ PKGUARDED_MUTEX FastMutex
    );
typedef enum {
    KeProcessorAddStartNotify = 0,
    KeProcessorAddCompleteNotify,
    KeProcessorAddFailureNotify
} KE_PROCESSOR_CHANGE_NOTIFY_STATE;
typedef struct _KE_PROCESSOR_CHANGE_NOTIFY_CONTEXT {
    KE_PROCESSOR_CHANGE_NOTIFY_STATE State;
    ULONG NtNumber;
    NTSTATUS Status;
    PROCESSOR_NUMBER ProcNumber;
} KE_PROCESSOR_CHANGE_NOTIFY_CONTEXT, *PKE_PROCESSOR_CHANGE_NOTIFY_CONTEXT;
typedef
_IRQL_requires_same_
_Function_class_(PROCESSOR_CALLBACK_FUNCTION)
VOID
PROCESSOR_CALLBACK_FUNCTION (
    _In_ PVOID CallbackContext,
    _In_ PKE_PROCESSOR_CHANGE_NOTIFY_CONTEXT ChangeContext,
    _Inout_ PNTSTATUS OperationStatus
    );
typedef PROCESSOR_CALLBACK_FUNCTION *PPROCESSOR_CALLBACK_FUNCTION;
_IRQL_requires_max_(APC_LEVEL)
PVOID
KeRegisterProcessorChangeCallback (
    _In_ PPROCESSOR_CALLBACK_FUNCTION CallbackFunction,
    _In_opt_ PVOID CallbackContext,
    _In_ ULONG Flags
    );
_IRQL_requires_max_(APC_LEVEL)
VOID
KeDeregisterProcessorChangeCallback (
    _In_ PVOID CallbackHandle
    );
NTSTATUS
KeGetProcessorNumberFromIndex (
    _In_ ULONG ProcIndex,
    _Out_ PPROCESSOR_NUMBER ProcNumber
    );
ULONG
KeGetProcessorIndexFromNumber (
    _In_ PPROCESSOR_NUMBER ProcNumber
    );
typedef struct _XSTATE_SAVE {
    struct _XSTATE_SAVE* Prev;
    struct _KTHREAD* Thread;
    UCHAR Level;
    XSTATE_CONTEXT XStateContext;
} XSTATE_SAVE, *PXSTATE_SAVE;
_Must_inspect_result_
_IRQL_requires_max_(DISPATCH_LEVEL)
_When_(return>=0, _Kernel_float_saved_)
_At_(*XStateSave, _When_(return>=0, _Kernel_acquires_resource_(FloatState)))
NTKERNELAPI
NTSTATUS
NTAPI
KeSaveExtendedProcessorState (
    _In_ ULONG64 Mask,
    _Out_ PXSTATE_SAVE XStateSave
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
_Kernel_float_restored_
_At_(*XStateSave, _Kernel_requires_resource_held_(FloatState) _Kernel_releases_resource_(FloatState))
NTKERNELAPI
VOID
NTAPI
KeRestoreExtendedProcessorState (
    _In_ PXSTATE_SAVE XStateSave
    );
typedef struct _EXT_SET_PARAMETERS_V0 {
    ULONG Version;
    ULONG Reserved;
    LONGLONG NoWakeTolerance;
} EXT_SET_PARAMETERS, *PEXT_SET_PARAMETERS;
typedef EXT_SET_PARAMETERS KT2_SET_PARAMETERS, *PKT2_SET_PARAMETERS;
FORCEINLINE
VOID
KeInitializeTimer2SetParameters (
    _Out_ PKT2_SET_PARAMETERS Parameters
    )
{
    RtlZeroMemory(Parameters, sizeof(*Parameters));
    NT_ASSERT(Parameters->Version == 0);
    return;
}
NTSTATUS
KeConvertAuxiliaryCounterToPerformanceCounter (
    _In_ ULONG64 AuxiliaryCounterValue,
    _Out_ PULONG64 PerformanceCounterValue,
    _Out_opt_ PULONG64 ConversionError
    );
NTSTATUS
KeConvertPerformanceCounterToAuxiliaryCounter (
    _In_ ULONG64 PerformanceCounterValue,
    _Out_ PULONG64 AuxiliaryCounterValue,
    _Out_opt_ PULONG64 ConversionError
    );
NTSTATUS
KeQueryAuxiliaryCounterFrequency (
    _Out_opt_ PULONG64 AuxiliaryCounterFrequency
    );
typedef struct _KWAIT_CHAIN {
    PVOID Head;
} KWAIT_CHAIN, *PKWAIT_CHAIN;
extern PBOOLEAN KdDebuggerNotPresent;
extern PBOOLEAN KdDebuggerEnabled;
NTKERNELAPI
NTSTATUS
KdDisableDebugger(
    VOID
    );
NTKERNELAPI
NTSTATUS
KdEnableDebugger(
    VOID
    );
NTKERNELAPI
BOOLEAN
KdRefreshDebuggerNotPresent(
    VOID
    );
typedef enum _KD_OPTION {
    KD_OPTION_SET_BLOCK_ENABLE,
} KD_OPTION;
NTSTATUS
KdChangeOption(
    _In_ KD_OPTION Option,
    _In_ ULONG InBufferBytes OPTIONAL,
    _In_ PVOID InBuffer,
    _In_ ULONG OutBufferBytes OPTIONAL,
    _Out_ PVOID OutBuffer,
    _Out_ PULONG OutBufferNeeded OPTIONAL
    );
typedef _Enum_is_bitflag_ enum _POOL_TYPE {
    NonPagedPool,
    NonPagedPoolExecute = NonPagedPool,
    PagedPool,
    NonPagedPoolMustSucceed = NonPagedPool + 2,
    DontUseThisType,
    NonPagedPoolCacheAligned = NonPagedPool + 4,
    PagedPoolCacheAligned,
    NonPagedPoolCacheAlignedMustS = NonPagedPool + 6,
    MaxPoolType,
    NonPagedPoolBase = 0,
    NonPagedPoolBaseMustSucceed = NonPagedPoolBase + 2,
    NonPagedPoolBaseCacheAligned = NonPagedPoolBase + 4,
    NonPagedPoolBaseCacheAlignedMustS = NonPagedPoolBase + 6,
    NonPagedPoolSession = 32,
    PagedPoolSession = NonPagedPoolSession + 1,
    NonPagedPoolMustSucceedSession = PagedPoolSession + 1,
    DontUseThisTypeSession = NonPagedPoolMustSucceedSession + 1,
    NonPagedPoolCacheAlignedSession = DontUseThisTypeSession + 1,
    PagedPoolCacheAlignedSession = NonPagedPoolCacheAlignedSession + 1,
    NonPagedPoolCacheAlignedMustSSession = PagedPoolCacheAlignedSession + 1,
    NonPagedPoolNx = 512,
    NonPagedPoolNxCacheAligned = NonPagedPoolNx + 4,
    NonPagedPoolSessionNx = NonPagedPoolNx + 32,
} _Enum_is_bitflag_ POOL_TYPE;
DECLSPEC_DEPRECATED_DDK
__drv_preferredFunction("ExAllocatePoolWithTag",
                        "No tag interferes with debugging.")
__drv_allocatesMem(Mem)
_When_((PoolType & PagedPool) != 0, _IRQL_requires_max_(APC_LEVEL))
_When_((PoolType & PagedPool) == 0, _IRQL_requires_max_(DISPATCH_LEVEL))
_When_((PoolType & NonPagedPoolMustSucceed) != 0,
       __drv_reportError("Must succeed pool allocations are forbidden. "
                         "Allocation failures cause a system crash"))
_When_((PoolType & (NonPagedPoolMustSucceed |
                    POOL_RAISE_IF_ALLOCATION_FAILURE)) == 0,
       _Post_maybenull_ _Must_inspect_result_)
_When_((PoolType & (NonPagedPoolMustSucceed |
                    POOL_RAISE_IF_ALLOCATION_FAILURE)) != 0,
       _Post_notnull_)
_Post_writable_byte_size_(NumberOfBytes)
NTKERNELAPI
PVOID
ExAllocatePool (
    __drv_strictTypeMatch(__drv_typeExpr) _In_ POOL_TYPE PoolType,
    _In_ SIZE_T NumberOfBytes
    );
DECLSPEC_DEPRECATED_DDK
__drv_preferredFunction("ExAllocatePoolWithQuotaTag",
                        "No tag interferes with debugging.")
__drv_allocatesMem(Mem)
_When_((PoolType & PagedPool) != 0, _IRQL_requires_max_(APC_LEVEL))
_When_((PoolType & PagedPool) == 0, _IRQL_requires_max_(DISPATCH_LEVEL))
_When_((PoolType & NonPagedPoolMustSucceed) != 0,
       __drv_reportError("Must succeed pool allocations are forbidden. "
                         "Allocation failures cause a system crash"))
_When_((PoolType & POOL_QUOTA_FAIL_INSTEAD_OF_RAISE) != 0,
       _Post_maybenull_ _Must_inspect_result_)
_When_((PoolType & POOL_QUOTA_FAIL_INSTEAD_OF_RAISE) == 0, _Post_notnull_)
_Post_writable_byte_size_(NumberOfBytes)
NTKERNELAPI
PVOID
ExAllocatePoolWithQuota (
    __drv_strictTypeMatch(__drv_typeExpr) _In_ POOL_TYPE PoolType,
    _In_ SIZE_T NumberOfBytes
    );
__drv_allocatesMem(Mem)
_When_((PoolType & PagedPool) != 0, _IRQL_requires_max_(APC_LEVEL))
_When_((PoolType & PagedPool) == 0, _IRQL_requires_max_(DISPATCH_LEVEL))
_When_((PoolType & NonPagedPoolMustSucceed) != 0,
       __drv_reportError("Must succeed pool allocations are forbidden. "
                         "Allocation failures cause a system crash"))
_When_((PoolType & (NonPagedPoolMustSucceed |
                    POOL_RAISE_IF_ALLOCATION_FAILURE)) == 0,
       _Post_maybenull_ _Must_inspect_result_)
_When_((PoolType & (NonPagedPoolMustSucceed |
                    POOL_RAISE_IF_ALLOCATION_FAILURE)) != 0,
       _Post_notnull_)
_Post_writable_byte_size_(NumberOfBytes)
NTKERNELAPI
PVOID
NTAPI
ExAllocatePoolWithTag (
    _In_ __drv_strictTypeMatch(__drv_typeExpr) POOL_TYPE PoolType,
    _In_ SIZE_T NumberOfBytes,
    _In_ ULONG Tag
    );
typedef _Enum_is_bitflag_ enum _EX_POOL_PRIORITY {
    LowPoolPriority,
    LowPoolPrioritySpecialPoolOverrun = 8,
    LowPoolPrioritySpecialPoolUnderrun = 9,
    NormalPoolPriority = 16,
    NormalPoolPrioritySpecialPoolOverrun = 24,
    NormalPoolPrioritySpecialPoolUnderrun = 25,
    HighPoolPriority = 32,
    HighPoolPrioritySpecialPoolOverrun = 40,
    HighPoolPrioritySpecialPoolUnderrun = 41
} EX_POOL_PRIORITY;
__drv_allocatesMem(Mem)
_When_((PoolType & PagedPool) != 0, _IRQL_requires_max_(APC_LEVEL))
_When_((PoolType & PagedPool) == 0, _IRQL_requires_max_(DISPATCH_LEVEL))
_When_((PoolType & NonPagedPoolMustSucceed) != 0,
       __drv_reportError("Must succeed pool allocations are forbidden. "
                         "Allocation failures cause a system crash"))
_When_((PoolType & (NonPagedPoolMustSucceed |
                    POOL_RAISE_IF_ALLOCATION_FAILURE)) == 0,
       _Post_maybenull_ _Must_inspect_result_)
_When_((PoolType & (NonPagedPoolMustSucceed |
                    POOL_RAISE_IF_ALLOCATION_FAILURE)) != 0,
       _Post_notnull_)
_Post_writable_byte_size_(NumberOfBytes)
NTKERNELAPI
PVOID
NTAPI
ExAllocatePoolWithTagPriority (
    _In_ __drv_strictTypeMatch(__drv_typeCond) POOL_TYPE PoolType,
    _In_ SIZE_T NumberOfBytes,
    _In_ ULONG Tag,
    _In_ __drv_strictTypeMatch(__drv_typeExpr) EX_POOL_PRIORITY Priority
    );
__drv_allocatesMem(Mem)
_When_((PoolType & PagedPool) != 0, _IRQL_requires_max_(APC_LEVEL))
_When_((PoolType & PagedPool) == 0, _IRQL_requires_max_(DISPATCH_LEVEL))
_When_((PoolType & NonPagedPoolMustSucceed) != 0,
       __drv_reportError("Must succeed pool allocations are forbidden. "
                         "Allocation failures cause a system crash"))
_When_((PoolType & POOL_QUOTA_FAIL_INSTEAD_OF_RAISE) != 0,
       _Post_maybenull_ _Must_inspect_result_)
_When_((PoolType & POOL_QUOTA_FAIL_INSTEAD_OF_RAISE) == 0, _Post_notnull_)
_Post_writable_byte_size_(NumberOfBytes)
NTKERNELAPI
PVOID
ExAllocatePoolWithQuotaTag (
    _In_ __drv_strictTypeMatch(__drv_typeExpr) POOL_TYPE PoolType,
    _In_ SIZE_T NumberOfBytes,
    _In_ ULONG Tag
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
VOID
NTAPI
ExFreePool (
    _Pre_notnull_ __drv_freesMem(Mem) PVOID P
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
VOID
ExFreePoolWithTag (
    _Pre_notnull_ __drv_freesMem(Mem) PVOID P,
    _In_ ULONG Tag
    );
FORCEINLINE
VOID
ExInitializeFastMutex (
    _Out_ PFAST_MUTEX FastMutex
    )
{
    WriteRaw(&FastMutex->Count, FM_LOCK_BIT);
    FastMutex->Owner = NULL;
    FastMutex->Contention = 0;
    KeInitializeEvent(&FastMutex->Event, SynchronizationEvent, FALSE);
    return;
}
_IRQL_requires_max_(APC_LEVEL)
_Requires_lock_held_(_Global_critical_region_)
NTKERNELAPI
VOID
FASTCALL
ExAcquireFastMutexUnsafe(
    _Inout_ _Requires_lock_not_held_(*_Curr_) _Acquires_lock_(*_Curr_)
    PFAST_MUTEX FastMutex
    );
_IRQL_requires_max_(APC_LEVEL)
_Requires_lock_held_(_Global_critical_region_)
NTKERNELAPI
VOID
FASTCALL
ExReleaseFastMutexUnsafe(
    _Inout_ _Requires_lock_held_(*_Curr_) _Releases_lock_(*_Curr_)
    PFAST_MUTEX FastMutex
    );
_IRQL_raises_(APC_LEVEL)
_IRQL_saves_global_(OldIrql, FastMutex)
NTKERNELAPI
VOID
FASTCALL
ExAcquireFastMutex (
    _Inout_ _Requires_lock_not_held_(*_Curr_) _Acquires_lock_(*_Curr_)
    PFAST_MUTEX FastMutex
    );
_IRQL_requires_(APC_LEVEL)
_IRQL_restores_global_(OldIrql, FastMutex)
NTKERNELAPI
VOID
FASTCALL
ExReleaseFastMutex (
    _Inout_ _Requires_lock_held_(*_Curr_) _Releases_lock_(*_Curr_)
    PFAST_MUTEX FastMutex
    );
_Must_inspect_result_
_Success_(return!=FALSE)
_IRQL_raises_(APC_LEVEL)
_IRQL_saves_global_(OldIrql, FastMutex)
NTKERNELAPI
BOOLEAN
FASTCALL
ExTryToAcquireFastMutex (
    _Inout_ _Requires_lock_not_held_(*_Curr_) _Acquires_lock_(*_Curr_)
    PFAST_MUTEX FastMutex
    );
    (VOID)InterlockedAddNoFence64(&(Addend)->QuadPart, Increment)
NTKERNELAPI
LARGE_INTEGER
ExInterlockedAddLargeInteger (
    _Inout_ PLARGE_INTEGER Addend,
    _In_ LARGE_INTEGER Increment,
    _Inout_ _Requires_lock_not_held_(*_Curr_) PKSPIN_LOCK Lock
    );
NTKERNELAPI
ULONG
FASTCALL
ExInterlockedAddUlong (
    _Inout_ PULONG Addend,
    _In_ ULONG Increment,
    _Inout_ _Requires_lock_not_held_(*_Curr_) PKSPIN_LOCK Lock
    );
    InterlockedCompareExchange64(Destination, *(Exchange), *(Comperand))
NTKERNELAPI
PLIST_ENTRY
FASTCALL
ExInterlockedInsertHeadList (
    _Inout_ PLIST_ENTRY ListHead,
    _Inout_ __drv_aliasesMem PLIST_ENTRY ListEntry,
    _Inout_ _Requires_lock_not_held_(*_Curr_) PKSPIN_LOCK Lock
    );
NTKERNELAPI
PLIST_ENTRY
FASTCALL
ExInterlockedInsertTailList (
    _Inout_ PLIST_ENTRY ListHead,
    _Inout_ __drv_aliasesMem PLIST_ENTRY ListEntry,
    _Inout_ _Requires_lock_not_held_(*_Curr_) PKSPIN_LOCK Lock
    );
NTKERNELAPI
PLIST_ENTRY
FASTCALL
ExInterlockedRemoveHeadList (
    _Inout_ PLIST_ENTRY ListHead,
    _Inout_ _Requires_lock_not_held_(*_Curr_) PKSPIN_LOCK Lock
    );
NTKERNELAPI
PSINGLE_LIST_ENTRY
FASTCALL
ExInterlockedPopEntryList (
    _Inout_ PSINGLE_LIST_ENTRY ListHead,
    _Inout_ _Requires_lock_not_held_(*_Curr_) PKSPIN_LOCK Lock
    );
NTKERNELAPI
PSINGLE_LIST_ENTRY
FASTCALL
ExInterlockedPushEntryList (
    _Inout_ PSINGLE_LIST_ENTRY ListHead,
    _Inout_ __drv_aliasesMem PSINGLE_LIST_ENTRY ListEntry,
    _Inout_ _Requires_lock_not_held_(*_Curr_) PKSPIN_LOCK Lock
    );
NTKERNELAPI
VOID
InitializeSListHead (
    _Out_ PSLIST_HEADER SListHead
    );
NTKERNELAPI
PSLIST_ENTRY
FirstEntrySList (
    _In_ PSLIST_HEADER SListHead
    );
NTKERNELAPI
USHORT
ExQueryDepthSList (
    _In_ PSLIST_HEADER SListHead
    );
    ExQueryDepthSList(Head)
    ExpInterlockedPopEntrySList(Head)
    ExpInterlockedPushEntrySList(Head, Entry)
    ExpInterlockedFlushSList(Head)
    ExpInterlockedPopEntrySList(Head)
    ExpInterlockedPushEntrySList(Head, Entry)
    ExpInterlockedFlushSList(Head)
NTKERNELAPI
PSLIST_ENTRY
ExpInterlockedPopEntrySList (
    _Inout_ PSLIST_HEADER ListHead
    );
NTKERNELAPI
PSLIST_ENTRY
ExpInterlockedPushEntrySList (
    _Inout_ PSLIST_HEADER ListHead,
    _Inout_ __drv_aliasesMem PSLIST_ENTRY ListEntry
    );
NTKERNELAPI
PSLIST_ENTRY
ExpInterlockedFlushSList (
    _Inout_ PSLIST_HEADER ListHead
    );
typedef struct _LOOKASIDE_LIST_EX {
    GENERAL_LOOKASIDE_POOL L;
} LOOKASIDE_LIST_EX, *PLOOKASIDE_LIST_EX;
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
NTSTATUS
ExInitializeLookasideListEx (
    _Out_ PLOOKASIDE_LIST_EX Lookaside,
    _In_opt_ PALLOCATE_FUNCTION_EX Allocate,
    _In_opt_ PFREE_FUNCTION_EX Free,
    _In_ POOL_TYPE PoolType,
    _In_ ULONG Flags,
    _In_ SIZE_T Size,
    _In_ ULONG Tag,
    _In_ USHORT Depth
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
VOID
ExDeleteLookasideListEx (
    _Inout_ PLOOKASIDE_LIST_EX Lookaside
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
VOID
ExFlushLookasideListEx (
    _Inout_ PLOOKASIDE_LIST_EX Lookaside
    );
__drv_allocatesMem(Mem)
_Must_inspect_result_
_IRQL_requires_max_(DISPATCH_LEVEL)
FORCEINLINE
PVOID
#pragma warning(suppress: 28195)
ExAllocateFromLookasideListEx (
    _Inout_ PLOOKASIDE_LIST_EX Lookaside
    )
{
    PVOID Entry;
    Lookaside->L.TotalAllocates += 1;
    Entry = InterlockedPopEntrySList(&Lookaside->L.ListHead);
    if (Entry == NULL) {
        Lookaside->L.AllocateMisses += 1;
        Entry = (Lookaside->L.AllocateEx)(Lookaside->L.Type,
                                          Lookaside->L.Size,
                                          Lookaside->L.Tag,
                                          Lookaside);
    }
    return Entry;
}
_IRQL_requires_max_(DISPATCH_LEVEL)
FORCEINLINE
VOID
ExFreeToLookasideListEx (
    _Inout_ PLOOKASIDE_LIST_EX Lookaside,
    _In_ __drv_freesMem(Entry) PVOID Entry
    )
{
    Lookaside->L.TotalFrees += 1;
    if (ExQueryDepthSList(&Lookaside->L.ListHead) >= Lookaside->L.Depth) {
        Lookaside->L.FreeMisses += 1;
        (Lookaside->L.FreeEx)(Entry, Lookaside);
    } else {
        InterlockedPushEntrySList(&Lookaside->L.ListHead, (PSLIST_ENTRY)Entry);
    }
    return;
}
typedef struct LOOKASIDE_ALIGN _NPAGED_LOOKASIDE_LIST {
    GENERAL_LOOKASIDE L;
} NPAGED_LOOKASIDE_LIST, *PNPAGED_LOOKASIDE_LIST;
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
VOID
ExInitializeNPagedLookasideList (
    _Out_ PNPAGED_LOOKASIDE_LIST Lookaside,
    _In_opt_ PALLOCATE_FUNCTION Allocate,
    _In_opt_ PFREE_FUNCTION Free,
    _In_ ULONG Flags,
    _In_ SIZE_T Size,
    _In_ ULONG Tag,
    _In_ USHORT Depth
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
VOID
ExDeleteNPagedLookasideList (
    _Inout_ PNPAGED_LOOKASIDE_LIST Lookaside
    );
__drv_allocatesMem(Mem)
_IRQL_requires_max_(DISPATCH_LEVEL)
__inline
_Ret_maybenull_
_Post_writable_byte_size_(Lookaside->L.Size)
PVOID
#pragma warning(suppress: 28195)
ExAllocateFromNPagedLookasideList (
    _Inout_ PNPAGED_LOOKASIDE_LIST Lookaside
    )
{
    PVOID Entry;
    Lookaside->L.TotalAllocates += 1;
    Entry = InterlockedPopEntrySList(&Lookaside->L.ListHead);
    if (Entry == NULL) {
        Lookaside->L.AllocateMisses += 1;
        Entry = (Lookaside->L.Allocate)(Lookaside->L.Type,
                                        Lookaside->L.Size,
                                        Lookaside->L.Tag);
    }
    return Entry;
}
_IRQL_requires_max_(DISPATCH_LEVEL)
__inline
VOID
ExFreeToNPagedLookasideList (
    _Inout_ PNPAGED_LOOKASIDE_LIST Lookaside,
    _In_ __drv_freesMem(Mem) PVOID Entry
    )
{
    Lookaside->L.TotalFrees += 1;
    if (ExQueryDepthSList(&Lookaside->L.ListHead) >= Lookaside->L.Depth) {
        Lookaside->L.FreeMisses += 1;
        (Lookaside->L.Free)(Entry);
    } else {
        InterlockedPushEntrySList(&Lookaside->L.ListHead, (PSLIST_ENTRY)Entry);
    }
    return;
}
typedef struct LOOKASIDE_ALIGN _PAGED_LOOKASIDE_LIST {
    GENERAL_LOOKASIDE L;
} PAGED_LOOKASIDE_LIST, *PPAGED_LOOKASIDE_LIST;
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
VOID
ExInitializePagedLookasideList (
    _Out_ PPAGED_LOOKASIDE_LIST Lookaside,
    _In_opt_ PALLOCATE_FUNCTION Allocate,
    _In_opt_ PFREE_FUNCTION Free,
    _In_ ULONG Flags,
    _In_ SIZE_T Size,
    _In_ ULONG Tag,
    _In_ USHORT Depth
    );
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
VOID
ExDeletePagedLookasideList (
    _Inout_ PPAGED_LOOKASIDE_LIST Lookaside
    );
#pragma warning(push)
#pragma warning(disable: 28195)
__drv_allocatesMem(Mem)
_IRQL_requires_max_(APC_LEVEL)
__inline
PVOID
ExAllocateFromPagedLookasideList (
    _Inout_ PPAGED_LOOKASIDE_LIST Lookaside
    )
{
    PVOID Entry;
    Lookaside->L.TotalAllocates += 1;
    Entry = InterlockedPopEntrySList(&Lookaside->L.ListHead);
    if (Entry == NULL) {
        Lookaside->L.AllocateMisses += 1;
        Entry = (Lookaside->L.Allocate)(Lookaside->L.Type,
                                        Lookaside->L.Size,
                                        Lookaside->L.Tag);
    }
    return Entry;
}
#pragma warning(pop)
_IRQL_requires_max_(APC_LEVEL)
__inline
VOID
ExFreeToPagedLookasideList (
    _Inout_ PPAGED_LOOKASIDE_LIST Lookaside,
    _In_ __drv_freesMem(Mem) PVOID Entry
    )
{
    Lookaside->L.TotalFrees += 1;
    if (ExQueryDepthSList(&Lookaside->L.ListHead) >= Lookaside->L.Depth) {
        Lookaside->L.FreeMisses += 1;
        (Lookaside->L.Free)(Entry);
    } else {
        InterlockedPushEntrySList(&Lookaside->L.ListHead,
                                  (PSLIST_ENTRY)Entry);
    }
    return;
}
_Maybe_raises_SEH_exception_
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
VOID
NTAPI
ProbeForRead (
    __in_data_source(USER_MODE) _In_reads_bytes_(Length) volatile VOID *Address,
    _In_ SIZE_T Length,
    _In_ ULONG Alignment
    );
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
DECLSPEC_NORETURN
VOID
NTAPI
ExRaiseStatus (
    _In_ NTSTATUS Status
    );
_Maybe_raises_SEH_exception_
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
VOID
NTAPI
ProbeForWrite (
    __in_data_source(USER_MODE) _Inout_updates_bytes_(Length) volatile VOID *Address,
    _In_ SIZE_T Length,
    _In_ ULONG Alignment
    );
typedef _Enum_is_bitflag_ enum _WORK_QUEUE_TYPE {
    CriticalWorkQueue,
    DelayedWorkQueue,
    HyperCriticalWorkQueue,
    NormalWorkQueue,
    BackgroundWorkQueue,
    RealTimeWorkQueue,
    SuperCriticalWorkQueue,
    MaximumWorkQueue,
    CustomPriorityWorkQueue = 32
} WORK_QUEUE_TYPE;
typedef
_IRQL_requires_max_(PASSIVE_LEVEL)
_IRQL_requires_same_
_Function_class_(WORKER_THREAD_ROUTINE)
VOID
WORKER_THREAD_ROUTINE (
    _In_ PVOID Parameter
    );
typedef WORKER_THREAD_ROUTINE *PWORKER_THREAD_ROUTINE;
typedef struct _WORK_QUEUE_ITEM {
    LIST_ENTRY List;
    PWORKER_THREAD_ROUTINE WorkerRoutine;
    __volatile PVOID Parameter;
} WORK_QUEUE_ITEM, *PWORK_QUEUE_ITEM;
DECLSPEC_DEPRECATED_DDK
CFORCEINLINE
VOID
ExInitializeWorkItem (
    _Out_ PWORK_QUEUE_ITEM Item,
    _In_opt_ PWORKER_THREAD_ROUTINE Routine,
    _In_opt_ PVOID Context
    )
{
    Item->WorkerRoutine = Routine;
    Item->Parameter = Context;
    Item->List.Flink = NULL;
}
_When_( (!__drv_defined(_DRIVER_TYPE_FILESYSTEM)
    && !__drv_defined(_DRIVER_TYPE_FILESYSTEM_FILTER))
    || NTDDI_VERSION >= NTDDI_VISTA,
    __drv_preferredFunction("IoQueueWorkItem[Ex]",
    "Obsolete in all drivers for Vista. Obsolete downlevel except for limited "
    "use in IFS. See the documentation"))
_IRQL_requires_max_(DISPATCH_LEVEL)
DECLSPEC_DEPRECATED_DDK
NTKERNELAPI
VOID
ExQueueWorkItem(
    _Inout_ __drv_aliasesMem PWORK_QUEUE_ITEM WorkItem,
    _In_ WORK_QUEUE_TYPE QueueType
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
__drv_preferredFunction("nothing",
    "Drivers should not be dependent on processor features")
NTKERNELAPI
BOOLEAN
ExIsProcessorFeaturePresent(
    _In_ ULONG ProcessorFeature
    );
typedef ULONG_PTR ERESOURCE_THREAD;
typedef ERESOURCE_THREAD *PERESOURCE_THREAD;
typedef struct _OWNER_ENTRY {
    ERESOURCE_THREAD OwnerThread;
    union {
        struct {
            ULONG IoPriorityBoosted : 1;
            ULONG OwnerReferenced : 1;
            ULONG IoQoSPriorityBoosted : 1;
            ULONG OwnerCount : 29;
        };
        ULONG TableSize;
    };
} OWNER_ENTRY, *POWNER_ENTRY;
typedef struct _ERESOURCE {
    LIST_ENTRY SystemResourcesList;
    POWNER_ENTRY OwnerTable;
    SHORT ActiveCount;
    union {
        USHORT Flag;
        struct {
            UCHAR ReservedLowFlags;
            UCHAR WaiterPriority;
        };
    };
    PVOID SharedWaiters;
    PVOID ExclusiveWaiters;
    OWNER_ENTRY OwnerEntry;
    ULONG ActiveEntries;
    ULONG ContentionCount;
    ULONG NumberOfSharedWaiters;
    ULONG NumberOfExclusiveWaiters;
    PVOID Reserved2;
    union {
        PVOID Address;
        ULONG_PTR CreatorBackTraceIndex;
    };
    KSPIN_LOCK SpinLock;
} ERESOURCE, *PERESOURCE;
typedef struct _RESOURCE_HASH_ENTRY {
    LIST_ENTRY ListEntry;
    PVOID Address;
    ULONG ContentionCount;
    ULONG Number;
} RESOURCE_HASH_ENTRY, *PRESOURCE_HASH_ENTRY;
typedef struct _RESOURCE_PERFORMANCE_DATA {
    ULONG ActiveResourceCount;
    ULONG TotalResourceCount;
    ULONG ExclusiveAcquire;
    ULONG SharedFirstLevel;
    ULONG SharedSecondLevel;
    ULONG StarveFirstLevel;
    ULONG StarveSecondLevel;
    ULONG WaitForExclusive;
    ULONG OwnerTableExpands;
    ULONG MaximumTableExpand;
    LIST_ENTRY HashTable[RESOURCE_HASH_TABLE_SIZE];
} RESOURCE_PERFORMANCE_DATA, *PRESOURCE_PERFORMANCE_DATA;
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
NTSTATUS
ExInitializeResourceLite (
    _Out_ PERESOURCE Resource
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
NTSTATUS
ExReinitializeResourceLite (
    _Inout_ PERESOURCE Resource
    );
_IRQL_requires_max_(APC_LEVEL)
_Requires_lock_held_(_Global_critical_region_)
_When_(Wait!=0, _Post_satisfies_(return == 1))
_When_(Wait==0, _Post_satisfies_(return == 0 || return == 1) _Must_inspect_result_)
NTKERNELAPI
BOOLEAN
ExAcquireResourceSharedLite (
    _Inout_ _Requires_lock_not_held_(*_Curr_)
    _When_(return!=0, _Acquires_shared_lock_(*_Curr_))
    PERESOURCE Resource,
    _In_ BOOLEAN Wait
    );
_IRQL_requires_max_(APC_LEVEL)
_Acquires_lock_(_Global_critical_region_)
NTKERNELAPI
PVOID
ExEnterCriticalRegionAndAcquireResourceShared (
    _Inout_ _Requires_lock_not_held_(*_Curr_) _Acquires_shared_lock_(*_Curr_)
    PERESOURCE Resource
    );
_IRQL_requires_max_(APC_LEVEL)
_Requires_lock_held_(_Global_critical_region_)
_When_(Wait!=0, _Post_satisfies_(return == 1))
_When_(Wait==0, _Post_satisfies_(return == 0 || return == 1) _Must_inspect_result_)
NTKERNELAPI
BOOLEAN
ExAcquireResourceExclusiveLite (
    _Inout_ _Requires_lock_not_held_(*_Curr_)
    _When_(return!=0, _Acquires_exclusive_lock_(*_Curr_))
    PERESOURCE Resource,
    _In_ _Literal_ BOOLEAN Wait
    );
_IRQL_requires_max_(APC_LEVEL)
_Acquires_lock_(_Global_critical_region_)
NTKERNELAPI
PVOID
ExEnterCriticalRegionAndAcquireResourceExclusive (
    _Inout_ _Requires_lock_not_held_(*_Curr_) _Acquires_exclusive_lock_(*_Curr_)
    PERESOURCE Resource
    );
_IRQL_requires_max_(APC_LEVEL)
_Requires_lock_held_(_Global_critical_region_)
_When_(Wait!=0, _Post_satisfies_(return == 1))
_When_(Wait==0, _Post_satisfies_(return == 0 || return == 1) _Must_inspect_result_)
NTKERNELAPI
BOOLEAN
ExAcquireSharedStarveExclusive(
    _Inout_ _Requires_lock_not_held_(*_Curr_)
    _When_(return!=0, _Acquires_shared_lock_(*_Curr_))
    PERESOURCE Resource,
    _In_ BOOLEAN Wait
    );
_IRQL_requires_max_(APC_LEVEL)
_Requires_lock_held_(_Global_critical_region_)
_When_(Wait!=0, _Post_satisfies_(return == 1))
_When_(Wait==0, _Post_satisfies_(return == 0 || return == 1) _Must_inspect_result_)
NTKERNELAPI
BOOLEAN
ExAcquireSharedWaitForExclusive(
    _Inout_ _Requires_lock_not_held_(*_Curr_)
    _When_(return!=0, _Acquires_lock_(*_Curr_))
    PERESOURCE Resource,
    _In_ BOOLEAN Wait
    );
_IRQL_requires_max_(APC_LEVEL)
_Acquires_lock_(_Global_critical_region_)
NTKERNELAPI
PVOID
ExEnterCriticalRegionAndAcquireSharedWaitForExclusive (
    _Inout_ _Requires_lock_not_held_(*_Curr_) _Acquires_lock_(*_Curr_)
    PERESOURCE Resource
    );
_Requires_lock_held_(_Global_critical_region_)
_Requires_lock_held_(*Resource)
_Releases_lock_(*Resource)
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
VOID
FASTCALL
ExReleaseResourceLite(
    _Inout_ PERESOURCE Resource
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
_Releases_lock_(_Global_critical_region_)
NTKERNELAPI
VOID
FASTCALL
ExReleaseResourceAndLeaveCriticalRegion(
    _Inout_ _Requires_lock_held_(*_Curr_) _Releases_lock_(*_Curr_)
    PERESOURCE Resource
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
_Requires_lock_held_(_Global_critical_region_)
NTKERNELAPI
VOID
ExReleaseResourceForThreadLite(
    _Inout_ _Requires_lock_held_(*_Curr_) _Releases_lock_(*_Curr_)
    PERESOURCE Resource,
    _In_ ERESOURCE_THREAD ResourceThreadId
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
VOID
ExSetResourceOwnerPointer(
    _Inout_ PERESOURCE Resource,
    _In_ PVOID OwnerPointer
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
VOID
ExSetResourceOwnerPointerEx(
    _Inout_ PERESOURCE Resource,
    _In_ PVOID OwnerPointer,
    _In_ ULONG Flags
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
VOID
ExConvertExclusiveToSharedLite(
    _Inout_ _Requires_lock_held_(*_Curr_) PERESOURCE Resource
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
NTSTATUS
ExDeleteResourceLite (
    _Inout_ PERESOURCE Resource
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
ULONG
ExGetExclusiveWaiterCount (
    _In_ PERESOURCE Resource
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
ULONG
ExGetSharedWaiterCount (
    _In_ PERESOURCE Resource
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
BOOLEAN
ExIsResourceAcquiredExclusiveLite (
    _In_ PERESOURCE Resource
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
ULONG
ExIsResourceAcquiredSharedLite (
    _In_ PERESOURCE Resource
    );
typedef struct _EX_RUNDOWN_REF {
    union {
        __volatile ULONG_PTR Count;
        __volatile PVOID Ptr;
    };
} EX_RUNDOWN_REF, *PEX_RUNDOWN_REF;
typedef struct _EX_RUNDOWN_REF_CACHE_AWARE *PEX_RUNDOWN_REF_CACHE_AWARE;
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
KPROCESSOR_MODE
ExGetPreviousMode(
    VOID
    );
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
ULONG
ExSetTimerResolution (
    _In_ ULONG DesiredTime,
    _In_ BOOLEAN SetResolution
    );
NTKERNELAPI
VOID
ExQueryTimerResolution (
    _Out_ PULONG MaximumTime,
    _Out_ PULONG MinimumTime,
    _Out_ PULONG CurrentTime
    );
NTKERNELAPI
VOID
ExSystemTimeToLocalTime (
    _In_ PLARGE_INTEGER SystemTime,
    _Out_ PLARGE_INTEGER LocalTime
    );
NTKERNELAPI
VOID
ExLocalTimeToSystemTime (
    _In_ PLARGE_INTEGER LocalTime,
    _Out_ PLARGE_INTEGER SystemTime
    );
typedef struct _EX_TIMER *PEX_TIMER;
_Function_class_(EXT_CALLBACK)
_IRQL_requires_(DISPATCH_LEVEL)
_IRQL_requires_same_
typedef
VOID
EXT_CALLBACK (
    _In_ PEX_TIMER Timer,
    _In_opt_ PVOID Context
    );
typedef EXT_CALLBACK *PEXT_CALLBACK;
_Function_class_(EXT_DELETE_CALLBACK)
_IRQL_requires_(DISPATCH_LEVEL)
_IRQL_requires_same_
typedef
VOID
EXT_DELETE_CALLBACK (
    _In_opt_ PVOID Context
    );
typedef EXT_DELETE_CALLBACK *PEXT_DELETE_CALLBACK;
typedef PVOID PEXT_CANCEL_PARAMETERS;
typedef struct _EXT_DELETE_PARAMETERS {
    ULONG Version;
    ULONG Reserved;
    PEXT_DELETE_CALLBACK DeleteCallback;
    PVOID DeleteContext;
} EXT_DELETE_PARAMETERS, *PEXT_DELETE_PARAMETERS;
NTKERNELAPI
PEX_TIMER
ExAllocateTimer (
    _In_opt_ PEXT_CALLBACK Callback,
    _In_opt_ PVOID CallbackContext,
    _In_ ULONG Attributes
    );
NTKERNELAPI
BOOLEAN
ExSetTimer (
    _In_ PEX_TIMER Timer,
    _In_ LONGLONG DueTime,
    _In_ LONGLONG Period,
    _In_opt_ PEXT_SET_PARAMETERS Parameters
    );
NTKERNELAPI
BOOLEAN
ExCancelTimer (
    _Inout_ PEX_TIMER Timer,
    _In_opt_ PEXT_CANCEL_PARAMETERS Parameters
    );
NTKERNELAPI
BOOLEAN
ExDeleteTimer (
    _In_ PEX_TIMER Timer,
    _In_ BOOLEAN Cancel,
    _In_ BOOLEAN Wait,
    _In_opt_ PEXT_DELETE_PARAMETERS Parameters
    );
FORCEINLINE
VOID
ExInitializeSetTimerParameters (
    _Out_ PEXT_SET_PARAMETERS Parameters
    )
{
    KeInitializeTimer2SetParameters(Parameters);
    return;
}
FORCEINLINE
VOID
ExInitializeDeleteTimerParameters (
    _Out_ PEXT_DELETE_PARAMETERS Parameters
    )
{
    RtlZeroMemory(Parameters, sizeof(*Parameters));
    NT_ASSERT(Parameters->Version == 0);
    return;
}
typedef struct _CALLBACK_OBJECT *PCALLBACK_OBJECT;
typedef
_IRQL_requires_same_
_Function_class_(CALLBACK_FUNCTION)
VOID
CALLBACK_FUNCTION (
    _In_opt_ PVOID CallbackContext,
    _In_opt_ PVOID Argument1,
    _In_opt_ PVOID Argument2
    );
typedef CALLBACK_FUNCTION *PCALLBACK_FUNCTION;
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
NTSTATUS
ExCreateCallback (
    _Outptr_ PCALLBACK_OBJECT *CallbackObject,
    _In_ POBJECT_ATTRIBUTES ObjectAttributes,
    _In_ BOOLEAN Create,
    _In_ BOOLEAN AllowMultipleCallbacks
    );
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
PVOID
ExRegisterCallback (
    _Inout_ PCALLBACK_OBJECT CallbackObject,
    _In_ PCALLBACK_FUNCTION CallbackFunction,
    _In_opt_ PVOID CallbackContext
    );
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
VOID
ExUnregisterCallback (
    _Inout_ PVOID CallbackRegistration
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
VOID
ExNotifyCallback (
    _In_ PVOID CallbackObject,
    _In_opt_ PVOID Argument1,
    _In_opt_ PVOID Argument2
    );
NTKERNELAPI
BOOLEAN
ExVerifySuite(
    __drv_strictTypeMatch(__drv_typeExpr) _In_ SUITE_TYPE SuiteType
    );
NTKERNELAPI
VOID
FASTCALL
ExInitializeRundownProtection (
    _Out_ PEX_RUNDOWN_REF RunRef
    );
NTKERNELAPI
VOID
FASTCALL
ExReInitializeRundownProtection (
    _Inout_ PEX_RUNDOWN_REF RunRef
    );
_Must_inspect_result_
_Post_satisfies_(return == 0 || return == 1)
NTKERNELAPI
BOOLEAN
FASTCALL
ExAcquireRundownProtection (
    _Inout_ PEX_RUNDOWN_REF RunRef
    );
_Must_inspect_result_
_Post_satisfies_(return == 0 || return == 1)
NTKERNELAPI
BOOLEAN
FASTCALL
ExAcquireRundownProtectionEx (
    _Inout_ PEX_RUNDOWN_REF RunRef,
    _In_ ULONG Count
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
VOID
FASTCALL
ExReleaseRundownProtection (
    _Inout_ PEX_RUNDOWN_REF RunRef
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
VOID
FASTCALL
ExReleaseRundownProtectionEx (
    _Inout_ PEX_RUNDOWN_REF RunRef,
    _In_ ULONG Count
    );
NTKERNELAPI
VOID
FASTCALL
ExRundownCompleted (
    _Out_ PEX_RUNDOWN_REF RunRef
    );
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
VOID
FASTCALL
ExWaitForRundownProtectionRelease (
    _Inout_ PEX_RUNDOWN_REF RunRef
    );
_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
PEX_RUNDOWN_REF_CACHE_AWARE
ExAllocateCacheAwareRundownProtection(
    __drv_strictTypeMatch(__drv_typeExpr) _In_ POOL_TYPE PoolType,
    _In_ ULONG PoolTag
    );
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
SIZE_T
ExSizeOfRundownProtectionCacheAware(
    VOID
    );
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
VOID
ExInitializeRundownProtectionCacheAware(
    _Out_ PEX_RUNDOWN_REF_CACHE_AWARE RunRefCacheAware,
    _In_ SIZE_T RunRefSize
    );
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
VOID
ExFreeCacheAwareRundownProtection(
    _Inout_ PEX_RUNDOWN_REF_CACHE_AWARE RunRefCacheAware
    );
_Must_inspect_result_
_Post_satisfies_(return == 0 || return == 1)
NTKERNELAPI
BOOLEAN
FASTCALL
ExAcquireRundownProtectionCacheAware (
    _Inout_ PEX_RUNDOWN_REF_CACHE_AWARE RunRefCacheAware
    );
NTKERNELAPI
VOID
FASTCALL
ExReleaseRundownProtectionCacheAware (
    _Inout_ PEX_RUNDOWN_REF_CACHE_AWARE RunRefCacheAware
    );
_Must_inspect_result_
_Post_satisfies_(return == 0 || return == 1)
NTKERNELAPI
BOOLEAN
FASTCALL
ExAcquireRundownProtectionCacheAwareEx (
    _Inout_ PEX_RUNDOWN_REF_CACHE_AWARE RunRefCacheAware,
    _In_ ULONG Count
    );
NTKERNELAPI
VOID
FASTCALL
ExReleaseRundownProtectionCacheAwareEx (
    _Inout_ PEX_RUNDOWN_REF_CACHE_AWARE RunRef,
    _In_ ULONG Count
    );
NTKERNELAPI
VOID
FASTCALL
ExWaitForRundownProtectionReleaseCacheAware (
    _Inout_ PEX_RUNDOWN_REF_CACHE_AWARE RunRef
    );
NTKERNELAPI
VOID
FASTCALL
ExReInitializeRundownProtectionCacheAware (
    _Inout_ PEX_RUNDOWN_REF_CACHE_AWARE RunRefCacheAware
    );
NTKERNELAPI
VOID
FASTCALL
ExRundownCompletedCacheAware (
    _Inout_ PEX_RUNDOWN_REF_CACHE_AWARE RunRefCacheAware
    );
                                             EX_CARR_DISABLE_EXPANSION)
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
VOID
ExInitializeRundownProtectionCacheAwareEx (
    _Out_ PEX_RUNDOWN_REF_CACHE_AWARE RunRefCacheAware,
    _In_ ULONG Flags
    );
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
VOID
ExCleanupRundownProtectionCacheAware (
    _Inout_ PEX_RUNDOWN_REF_CACHE_AWARE RunRefCacheAware
    );
VOID
ExInitializePushLock (
    _Out_ PEX_PUSH_LOCK PushLock
    );
_IRQL_requires_max_(APC_LEVEL)
_Requires_lock_held_(_Global_critical_region_)
NTKERNELAPI
VOID
FASTCALL
ExAcquirePushLockExclusiveEx (
    _Inout_ _Requires_lock_not_held_(*_Curr_) _Acquires_lock_(*_Curr_)
    PEX_PUSH_LOCK PushLock,
    _In_ ULONG Flags
    );
_IRQL_requires_max_(APC_LEVEL)
_Requires_lock_held_(_Global_critical_region_)
NTKERNELAPI
VOID
FASTCALL
ExAcquirePushLockSharedEx (
    _Inout_ _Requires_lock_not_held_(*_Curr_) _Acquires_lock_(*_Curr_)
    PEX_PUSH_LOCK PushLock,
    _In_ ULONG Flags
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
_Requires_lock_held_(_Global_critical_region_)
NTKERNELAPI
VOID
FASTCALL
ExReleasePushLockExclusiveEx (
    _Inout_ _Requires_lock_held_(*_Curr_) _Releases_lock_(*_Curr_)
    PEX_PUSH_LOCK PushLock,
    _In_ ULONG Flags
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
_Requires_lock_held_(_Global_critical_region_)
NTKERNELAPI
VOID
FASTCALL
ExReleasePushLockSharedEx (
    _Inout_ _Requires_lock_held_(*_Curr_) _Releases_lock_(*_Curr_)
    PEX_PUSH_LOCK PushLock,
    _In_ ULONG Flags
    );
        ExAcquirePushLockExclusiveEx(Lock, EX_DEFAULT_PUSH_LOCK_FLAGS)
        ExAcquirePushLockSharedEx(Lock, EX_DEFAULT_PUSH_LOCK_FLAGS)
        ExReleasePushLockExclusiveEx(Lock, EX_DEFAULT_PUSH_LOCK_FLAGS)
        ExReleasePushLockSharedEx(Lock, EX_DEFAULT_PUSH_LOCK_FLAGS)
typedef volatile LONG EX_SPIN_LOCK, *PEX_SPIN_LOCK;
_IRQL_requires_min_(DISPATCH_LEVEL)
NTKERNELAPI
VOID
ExAcquireSpinLockSharedAtDpcLevel (
    _Inout_ _Requires_lock_not_held_(*_Curr_) _Acquires_lock_(*_Curr_)
    PEX_SPIN_LOCK SpinLock
    );
_IRQL_saves_
_IRQL_raises_(DISPATCH_LEVEL)
NTKERNELAPI
KIRQL
ExAcquireSpinLockShared (
    _Inout_ _Requires_lock_not_held_(*_Curr_) _Acquires_lock_(*_Curr_)
    PEX_SPIN_LOCK SpinLock
    );
_IRQL_requires_min_(DISPATCH_LEVEL)
NTKERNELAPI
VOID
ExReleaseSpinLockSharedFromDpcLevel (
    _Inout_ _Requires_lock_held_(*_Curr_) _Releases_lock_(*_Curr_)
    PEX_SPIN_LOCK SpinLock
    );
_IRQL_requires_(DISPATCH_LEVEL)
NTKERNELAPI
VOID
ExReleaseSpinLockShared (
    _Inout_ _Requires_lock_held_(*_Curr_) _Releases_lock_(*_Curr_)
    PEX_SPIN_LOCK SpinLock,
    _In_ _IRQL_restores_ KIRQL OldIrql
    );
_Must_inspect_result_
_IRQL_requires_(DISPATCH_LEVEL)
_Post_satisfies_(return == 0 || return == 1)
NTKERNELAPI
LOGICAL
ExTryConvertSharedSpinLockExclusive (
    _Inout_ PEX_SPIN_LOCK SpinLock
    );
_IRQL_requires_min_(DISPATCH_LEVEL)
NTKERNELAPI
VOID
ExAcquireSpinLockExclusiveAtDpcLevel (
    _Inout_ _Requires_lock_not_held_(*_Curr_) _Acquires_lock_(*_Curr_)
    PEX_SPIN_LOCK SpinLock
    );
_IRQL_saves_
_IRQL_raises_(DISPATCH_LEVEL)
NTKERNELAPI
KIRQL
ExAcquireSpinLockExclusive (
    _Inout_ _Requires_lock_not_held_(*_Curr_) _Acquires_lock_(*_Curr_)
    PEX_SPIN_LOCK SpinLock
    );
_IRQL_requires_min_(DISPATCH_LEVEL)
NTKERNELAPI
VOID
ExReleaseSpinLockExclusiveFromDpcLevel (
    _Inout_ _Requires_lock_held_(*_Curr_) _Releases_lock_(*_Curr_)
    PEX_SPIN_LOCK SpinLock
    );
_IRQL_requires_(DISPATCH_LEVEL)
NTKERNELAPI
VOID
ExReleaseSpinLockExclusive (
    _Inout_ _Requires_lock_held_(*_Curr_) _Releases_lock_(*_Curr_)
    PEX_SPIN_LOCK SpinLock,
    _In_ _IRQL_restores_ KIRQL OldIrql
    );
_Must_inspect_result_
LOGICAL
ExTryAcquireSpinLockSharedAtDpcLevel (
    _When_ (return!=FALSE, _Requires_lock_not_held_ (*_Curr_) _Acquires_lock_ (*_Curr_))
    _Inout_
    PEX_SPIN_LOCK SpinLock
    );
_Must_inspect_result_
LOGICAL
ExTryAcquireSpinLockExclusiveAtDpcLevel (
    _When_ (return!=FALSE, _Requires_lock_not_held_ (*_Curr_) _Acquires_lock_ (*_Curr_))
    _Inout_
    PEX_SPIN_LOCK SpinLock
    );
typedef
_IRQL_requires_same_
_Function_class_(EX_CALLBACK_FUNCTION)
NTSTATUS
EX_CALLBACK_FUNCTION (
    _In_ PVOID CallbackContext,
    _In_opt_ PVOID Argument1,
    _In_opt_ PVOID Argument2
    );
typedef EX_CALLBACK_FUNCTION *PEX_CALLBACK_FUNCTION;
NTKERNELAPI
NTSTATUS
ExGetFirmwareEnvironmentVariable (
    _In_ PUNICODE_STRING VariableName,
    _In_ LPGUID VendorGuid,
    _Out_writes_bytes_opt_(*ValueLength) PVOID Value,
    _Inout_ PULONG ValueLength,
    _Out_opt_ PULONG Attributes
    );
NTKERNELAPI
NTSTATUS
ExSetFirmwareEnvironmentVariable (
    _In_ PUNICODE_STRING VariableName,
    _In_ LPGUID VendorGuid,
    _In_reads_bytes_opt_(ValueLength) PVOID Value,
    _In_ ULONG ValueLength,
    _In_ ULONG Attributes
    );
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
BOOLEAN
ExIsManufacturingModeEnabled (
    VOID
    );
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
BOOLEAN
ExIsSoftBoot (
    VOID
    );
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
FIRMWARE_TYPE
ExGetFirmwareType (
    VOID
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTKERNELAPI
NTSTATUS
ExEnumerateSystemFirmwareTables(
    _In_ ULONG FirmwareTableProviderSignature,
    _Out_writes_bytes_to_opt_(BufferLength, *ReturnLength) PVOID FirmwareTableBuffer,
    _In_ ULONG BufferLength,
    _Out_opt_ PULONG ReturnLength
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTKERNELAPI
NTSTATUS
ExGetSystemFirmwareTable(
    _In_ ULONG FirmwareTableProviderSignature,
    _In_ ULONG FirmwareTableID,
    _Out_writes_bytes_to_opt_(BufferLength, *ReturnLength) PVOID FirmwareTableBuffer,
    _In_ ULONG BufferLength,
    _Out_opt_ PULONG ReturnLength
    );
typedef enum _REG_NOTIFY_CLASS {
    RegNtDeleteKey,
    RegNtPreDeleteKey = RegNtDeleteKey,
    RegNtSetValueKey,
    RegNtPreSetValueKey = RegNtSetValueKey,
    RegNtDeleteValueKey,
    RegNtPreDeleteValueKey = RegNtDeleteValueKey,
    RegNtSetInformationKey,
    RegNtPreSetInformationKey = RegNtSetInformationKey,
    RegNtRenameKey,
    RegNtPreRenameKey = RegNtRenameKey,
    RegNtEnumerateKey,
    RegNtPreEnumerateKey = RegNtEnumerateKey,
    RegNtEnumerateValueKey,
    RegNtPreEnumerateValueKey = RegNtEnumerateValueKey,
    RegNtQueryKey,
    RegNtPreQueryKey = RegNtQueryKey,
    RegNtQueryValueKey,
    RegNtPreQueryValueKey = RegNtQueryValueKey,
    RegNtQueryMultipleValueKey,
    RegNtPreQueryMultipleValueKey = RegNtQueryMultipleValueKey,
    RegNtPreCreateKey,
    RegNtPostCreateKey,
    RegNtPreOpenKey,
    RegNtPostOpenKey,
    RegNtKeyHandleClose,
    RegNtPreKeyHandleClose = RegNtKeyHandleClose,
    RegNtPostDeleteKey,
    RegNtPostSetValueKey,
    RegNtPostDeleteValueKey,
    RegNtPostSetInformationKey,
    RegNtPostRenameKey,
    RegNtPostEnumerateKey,
    RegNtPostEnumerateValueKey,
    RegNtPostQueryKey,
    RegNtPostQueryValueKey,
    RegNtPostQueryMultipleValueKey,
    RegNtPostKeyHandleClose,
    RegNtPreCreateKeyEx,
    RegNtPostCreateKeyEx,
    RegNtPreOpenKeyEx,
    RegNtPostOpenKeyEx,
    RegNtPreFlushKey,
    RegNtPostFlushKey,
    RegNtPreLoadKey,
    RegNtPostLoadKey,
    RegNtPreUnLoadKey,
    RegNtPostUnLoadKey,
    RegNtPreQueryKeySecurity,
    RegNtPostQueryKeySecurity,
    RegNtPreSetKeySecurity,
    RegNtPostSetKeySecurity,
    RegNtCallbackObjectContextCleanup,
    RegNtPreRestoreKey,
    RegNtPostRestoreKey,
    RegNtPreSaveKey,
    RegNtPostSaveKey,
    RegNtPreReplaceKey,
    RegNtPostReplaceKey,
    RegNtPreQueryKeyName,
    RegNtPostQueryKeyName,
    MaxRegNtNotifyClass
} REG_NOTIFY_CLASS;
typedef struct _REG_DELETE_KEY_INFORMATION {
    PVOID Object;
    PVOID CallContext;
    PVOID ObjectContext;
    PVOID Reserved;
} REG_DELETE_KEY_INFORMATION, *PREG_DELETE_KEY_INFORMATION
, REG_FLUSH_KEY_INFORMATION, *PREG_FLUSH_KEY_INFORMATION
;
typedef struct _REG_SET_VALUE_KEY_INFORMATION {
    PVOID Object;
    PUNICODE_STRING ValueName;
    ULONG TitleIndex;
    ULONG Type;
    PVOID Data;
    ULONG DataSize;
    PVOID CallContext;
    PVOID ObjectContext;
    PVOID Reserved;
} REG_SET_VALUE_KEY_INFORMATION, *PREG_SET_VALUE_KEY_INFORMATION;
typedef struct _REG_DELETE_VALUE_KEY_INFORMATION {
    PVOID Object;
    PUNICODE_STRING ValueName;
    PVOID CallContext;
    PVOID ObjectContext;
    PVOID Reserved;
} REG_DELETE_VALUE_KEY_INFORMATION, *PREG_DELETE_VALUE_KEY_INFORMATION;
typedef struct _REG_SET_INFORMATION_KEY_INFORMATION {
    PVOID Object;
    KEY_SET_INFORMATION_CLASS KeySetInformationClass;
    PVOID KeySetInformation;
    ULONG KeySetInformationLength;
    PVOID CallContext;
    PVOID ObjectContext;
    PVOID Reserved;
} REG_SET_INFORMATION_KEY_INFORMATION, *PREG_SET_INFORMATION_KEY_INFORMATION;
typedef struct _REG_ENUMERATE_KEY_INFORMATION {
    PVOID Object;
    ULONG Index;
    KEY_INFORMATION_CLASS KeyInformationClass;
    PVOID KeyInformation;
    ULONG Length;
    PULONG ResultLength;
    PVOID CallContext;
    PVOID ObjectContext;
    PVOID Reserved;
} REG_ENUMERATE_KEY_INFORMATION, *PREG_ENUMERATE_KEY_INFORMATION;
typedef struct _REG_ENUMERATE_VALUE_KEY_INFORMATION {
    PVOID Object;
    ULONG Index;
    KEY_VALUE_INFORMATION_CLASS KeyValueInformationClass;
    PVOID KeyValueInformation;
    ULONG Length;
    PULONG ResultLength;
    PVOID CallContext;
    PVOID ObjectContext;
    PVOID Reserved;
} REG_ENUMERATE_VALUE_KEY_INFORMATION, *PREG_ENUMERATE_VALUE_KEY_INFORMATION;
typedef struct _REG_QUERY_KEY_INFORMATION {
    PVOID Object;
    KEY_INFORMATION_CLASS KeyInformationClass;
    PVOID KeyInformation;
    ULONG Length;
    PULONG ResultLength;
    PVOID CallContext;
    PVOID ObjectContext;
    PVOID Reserved;
} REG_QUERY_KEY_INFORMATION, *PREG_QUERY_KEY_INFORMATION;
typedef struct _REG_QUERY_VALUE_KEY_INFORMATION {
    PVOID Object;
    PUNICODE_STRING ValueName;
    KEY_VALUE_INFORMATION_CLASS KeyValueInformationClass;
    PVOID KeyValueInformation;
    ULONG Length;
    PULONG ResultLength;
    PVOID CallContext;
    PVOID ObjectContext;
    PVOID Reserved;
} REG_QUERY_VALUE_KEY_INFORMATION, *PREG_QUERY_VALUE_KEY_INFORMATION;
typedef struct _REG_QUERY_MULTIPLE_VALUE_KEY_INFORMATION {
    PVOID Object;
    PKEY_VALUE_ENTRY ValueEntries;
    ULONG EntryCount;
    PVOID ValueBuffer;
    PULONG BufferLength;
    PULONG RequiredBufferLength;
    PVOID CallContext;
    PVOID ObjectContext;
    PVOID Reserved;
} REG_QUERY_MULTIPLE_VALUE_KEY_INFORMATION, *PREG_QUERY_MULTIPLE_VALUE_KEY_INFORMATION;
typedef struct _REG_RENAME_KEY_INFORMATION {
    PVOID Object;
    PUNICODE_STRING NewName;
    PVOID CallContext;
    PVOID ObjectContext;
    PVOID Reserved;
} REG_RENAME_KEY_INFORMATION, *PREG_RENAME_KEY_INFORMATION;
typedef struct _REG_KEY_HANDLE_CLOSE_INFORMATION {
    PVOID Object;
    PVOID CallContext;
    PVOID ObjectContext;
    PVOID Reserved;
} REG_KEY_HANDLE_CLOSE_INFORMATION, *PREG_KEY_HANDLE_CLOSE_INFORMATION;
typedef struct _REG_CREATE_KEY_INFORMATION {
    PUNICODE_STRING CompleteName;
    PVOID RootObject;
    PVOID ObjectType;
    ULONG CreateOptions;
    PUNICODE_STRING Class;
    PVOID SecurityDescriptor;
    PVOID SecurityQualityOfService;
    ACCESS_MASK DesiredAccess;
    ACCESS_MASK GrantedAccess;
    PULONG Disposition;
    PVOID *ResultObject;
    PVOID CallContext;
    PVOID RootObjectContext;
    PVOID Transaction;
    PVOID Reserved;
} REG_CREATE_KEY_INFORMATION, REG_OPEN_KEY_INFORMATION,*PREG_CREATE_KEY_INFORMATION, *PREG_OPEN_KEY_INFORMATION;
typedef struct _REG_CREATE_KEY_INFORMATION_V1 {
    PUNICODE_STRING CompleteName;
    PVOID RootObject;
    PVOID ObjectType;
    ULONG Options;
    PUNICODE_STRING Class;
    PVOID SecurityDescriptor;
    PVOID SecurityQualityOfService;
    ACCESS_MASK DesiredAccess;
    ACCESS_MASK GrantedAccess;
    PULONG Disposition;
    PVOID *ResultObject;
    PVOID CallContext;
    PVOID RootObjectContext;
    PVOID Transaction;
    ULONG_PTR Version;
    PUNICODE_STRING RemainingName;
    ULONG Wow64Flags;
    ULONG Attributes;
    KPROCESSOR_MODE CheckAccessMode;
} REG_CREATE_KEY_INFORMATION_V1, REG_OPEN_KEY_INFORMATION_V1,*PREG_CREATE_KEY_INFORMATION_V1, *PREG_OPEN_KEY_INFORMATION_V1;
typedef struct _REG_POST_OPERATION_INFORMATION {
    PVOID Object;
    NTSTATUS Status;
    PVOID PreInformation;
    NTSTATUS ReturnStatus;
    PVOID CallContext;
    PVOID ObjectContext;
    PVOID Reserved;
} REG_POST_OPERATION_INFORMATION,*PREG_POST_OPERATION_INFORMATION;
typedef struct _REG_PRE_CREATE_KEY_INFORMATION {
    PUNICODE_STRING CompleteName;
} REG_PRE_CREATE_KEY_INFORMATION, REG_PRE_OPEN_KEY_INFORMATION,*PREG_PRE_CREATE_KEY_INFORMATION, *PREG_PRE_OPEN_KEY_INFORMATION;;
typedef struct _REG_POST_CREATE_KEY_INFORMATION {
    PUNICODE_STRING CompleteName;
    PVOID Object;
    NTSTATUS Status;
} REG_POST_CREATE_KEY_INFORMATION,REG_POST_OPEN_KEY_INFORMATION, *PREG_POST_CREATE_KEY_INFORMATION, *PREG_POST_OPEN_KEY_INFORMATION;
typedef struct _REG_LOAD_KEY_INFORMATION {
    PVOID Object;
    PUNICODE_STRING KeyName;
    PUNICODE_STRING SourceFile;
    ULONG Flags;
    PVOID TrustClassObject;
    PVOID UserEvent;
    ACCESS_MASK DesiredAccess;
    PHANDLE RootHandle;
    PVOID CallContext;
    PVOID ObjectContext;
    PVOID Reserved;
} REG_LOAD_KEY_INFORMATION, *PREG_LOAD_KEY_INFORMATION;
typedef struct _REG_UNLOAD_KEY_INFORMATION {
    PVOID Object;
    PVOID UserEvent;
    PVOID CallContext;
    PVOID ObjectContext;
    PVOID Reserved;
} REG_UNLOAD_KEY_INFORMATION, *PREG_UNLOAD_KEY_INFORMATION;
typedef struct _REG_CALLBACK_CONTEXT_CLEANUP_INFORMATION {
    PVOID Object;
    PVOID ObjectContext;
    PVOID Reserved;
} REG_CALLBACK_CONTEXT_CLEANUP_INFORMATION, *PREG_CALLBACK_CONTEXT_CLEANUP_INFORMATION;
typedef struct _REG_QUERY_KEY_SECURITY_INFORMATION {
    PVOID Object;
    PSECURITY_INFORMATION SecurityInformation;
    PSECURITY_DESCRIPTOR SecurityDescriptor;
    PULONG Length;
    PVOID CallContext;
    PVOID ObjectContext;
    PVOID Reserved;
} REG_QUERY_KEY_SECURITY_INFORMATION, *PREG_QUERY_KEY_SECURITY_INFORMATION;
typedef struct _REG_SET_KEY_SECURITY_INFORMATION {
    PVOID Object;
    PSECURITY_INFORMATION SecurityInformation;
    PSECURITY_DESCRIPTOR SecurityDescriptor;
    PVOID CallContext;
    PVOID ObjectContext;
    PVOID Reserved;
} REG_SET_KEY_SECURITY_INFORMATION, *PREG_SET_KEY_SECURITY_INFORMATION;
typedef struct _REG_RESTORE_KEY_INFORMATION {
    PVOID Object;
    HANDLE FileHandle;
    ULONG Flags;
    PVOID CallContext;
    PVOID ObjectContext;
    PVOID Reserved;
} REG_RESTORE_KEY_INFORMATION, *PREG_RESTORE_KEY_INFORMATION;
typedef struct _REG_SAVE_KEY_INFORMATION {
    PVOID Object;
    HANDLE FileHandle;
    ULONG Format;
    PVOID CallContext;
    PVOID ObjectContext;
    PVOID Reserved;
} REG_SAVE_KEY_INFORMATION, *PREG_SAVE_KEY_INFORMATION;
typedef struct _REG_REPLACE_KEY_INFORMATION {
    PVOID Object;
    PUNICODE_STRING OldFileName;
    PUNICODE_STRING NewFileName;
    PVOID CallContext;
    PVOID ObjectContext;
    PVOID Reserved;
} REG_REPLACE_KEY_INFORMATION, *PREG_REPLACE_KEY_INFORMATION;
typedef struct _REG_QUERY_KEY_NAME {
    PVOID Object;
    POBJECT_NAME_INFORMATION ObjectNameInfo;
    ULONG Length;
    PULONG ReturnLength;
    PVOID CallContext;
    PVOID ObjectContext;
    PVOID Reserved;
} REG_QUERY_KEY_NAME, *PREG_QUERY_KEY_NAME;
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
NTSTATUS
CmRegisterCallback(_In_ PEX_CALLBACK_FUNCTION Function,
                   _In_opt_ PVOID Context,
                   _Out_ PLARGE_INTEGER Cookie
                    );
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
NTSTATUS
CmUnRegisterCallback(_In_ LARGE_INTEGER Cookie);
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
NTSTATUS
CmRegisterCallbackEx ( _In_ PEX_CALLBACK_FUNCTION Function,
                        _In_ PCUNICODE_STRING Altitude,
                        _In_ PVOID Driver,
                        _In_opt_ PVOID Context,
                        _Out_ PLARGE_INTEGER Cookie,
                        _Reserved_ PVOID Reserved
                    );
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
VOID
CmGetCallbackVersion ( _Out_opt_ PULONG Major,
                        _Out_opt_ PULONG Minor
                        );
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
NTSTATUS
CmSetCallbackObjectContext (_Inout_ PVOID Object,
                            _In_ PLARGE_INTEGER Cookie,
                            _In_ PVOID NewContext,
                            _Out_opt_ PVOID *OldContext
                           );
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
NTSTATUS
CmCallbackGetKeyObjectID ( _In_ PLARGE_INTEGER Cookie,
                            _In_ PVOID Object,
                            _Out_opt_ PULONG_PTR ObjectID,
                            _Outptr_opt_ PCUNICODE_STRING *ObjectName
                           );
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
PVOID
CmGetBoundTransaction(_In_ PLARGE_INTEGER Cookie,
                      _In_ PVOID Object );
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
NTSTATUS
CmCallbackGetKeyObjectIDEx (
    _In_ PLARGE_INTEGER Cookie,
    _In_ PVOID Object,
    _Out_opt_ PULONG_PTR ObjectID,
    _Outptr_opt_ PCUNICODE_STRING *ObjectName,
    _In_ ULONG Flags
    );
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
VOID
CmCallbackReleaseKeyObjectIDEx (
    _In_ PCUNICODE_STRING ObjectName
    );
extern PBOOLEAN Mm64BitPhysicalAddress;
extern PVOID MmBadPointer;





#pragma deprecated(MmBadPointer)
                               (((Size) & (PAGE_SIZE - 1)) != 0))
    ((BYTE_OFFSET (Va) + ((SIZE_T) (Size)) + (PAGE_SIZE - 1)) >> PAGE_SHIFT)
    ((PVOID) ((PCHAR) ((Mdl)->StartVa) + (Mdl)->ByteOffset))
typedef enum _MM_SYSTEM_SIZE {
    MmSmallSystem,
    MmMediumSystem,
    MmLargeSystem
} MM_SYSTEMSIZE;
NTKERNELAPI
MM_SYSTEMSIZE
MmQuerySystemSize (
    VOID
    );
_IRQL_requires_max_ (APC_LEVEL)
NTKERNELAPI
NTSTATUS
MmIsVerifierEnabled (
    _Out_ PULONG VerifierFlags
    );
_IRQL_requires_max_ (APC_LEVEL)
NTKERNELAPI
NTSTATUS
MmAddVerifierThunks (
    _In_reads_bytes_ (ThunkBufferSize) PVOID ThunkBuffer,
    _In_ ULONG ThunkBufferSize
    );
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
NTSTATUS
MmAddVerifierSpecialThunks(
    _In_ ULONG_PTR EntryRoutine,
    _In_reads_bytes_(ThunkBufferSize) PVOID ThunkBuffer,
    _In_ ULONG ThunkBufferSize
    );
_IRQL_requires_max_ (APC_LEVEL)
NTKERNELAPI
VOID
MmProbeAndLockSelectedPages (
    _Inout_ PMDL MemoryDescriptorList,
    _In_ PFILE_SEGMENT_ELEMENT SegmentArray,
    _In_ KPROCESSOR_MODE AccessMode,
    _In_ LOCK_OPERATION Operation
    );
_IRQL_requires_max_ (APC_LEVEL)
NTKERNELAPI
VOID
MmProbeAndLockProcessPages (
    _Inout_ PMDL MemoryDescriptorList,
    _In_ PEPROCESS Process,
    _In_ KPROCESSOR_MODE AccessMode,
    _In_ LOCK_OPERATION Operation
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
_At_(MemoryDescriptorList->StartVa + MemoryDescriptorList->ByteOffset,
    _Field_size_bytes_opt_(MemoryDescriptorList->ByteCount))
NTKERNELAPI
VOID
MmProbeAndLockPages (
    _Inout_ PMDL MemoryDescriptorList,
    _In_ KPROCESSOR_MODE AccessMode,
    _In_ LOCK_OPERATION Operation
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
VOID
MmUnlockPages (
    _Inout_ PMDL MemoryDescriptorList
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
VOID
MmBuildMdlForNonPagedPool (
    _Inout_ PMDL MemoryDescriptorList
    );
typedef struct _MM_PHYSICAL_ADDRESS_LIST {
    PHYSICAL_ADDRESS PhysicalAddress;
    SIZE_T NumberOfBytes;
} MM_PHYSICAL_ADDRESS_LIST, *PMM_PHYSICAL_ADDRESS_LIST;
_IRQL_requires_max_ (DISPATCH_LEVEL)
NTKERNELAPI
NTSTATUS
MmAllocateMdlForIoSpace (
    _In_reads_ (NumberOfEntries) PMM_PHYSICAL_ADDRESS_LIST PhysicalAddressList,
    _In_ SIZE_T NumberOfEntries,
    _Out_ PMDL *NewMdl
    );
_IRQL_requires_max_ (DISPATCH_LEVEL)
NTKERNELAPI
LOGICAL
MmAreMdlPagesCached (
     _In_ PMDL MemoryDescriptorList
     );
_IRQL_requires_max_ (PASSIVE_LEVEL)
NTKERNELAPI
NTSTATUS
MmSetPermanentCacheAttribute (
    _In_ PHYSICAL_ADDRESS StartAddress,
    _In_ LARGE_INTEGER NumberOfBytes,
    _In_ MEMORY_CACHING_TYPE CacheType,
    _In_ ULONG Flags
    );
_Must_inspect_result_
__drv_preferredFunction("MmMapLockedPagesSpecifyCache",
    "Obsolete except on Windows 98.  Use MmGetSystemAddressForMdlSafe if this "
 "is a call to MmGetSystemAddressForMdl.")
_When_(AccessMode==0, _IRQL_requires_max_(DISPATCH_LEVEL))
_When_(AccessMode==1, _Maybe_raises_SEH_exception_ _IRQL_requires_max_(APC_LEVEL))
DECLSPEC_DEPRECATED_DDK
NTKERNELAPI
PVOID
MmMapLockedPages (
    _Inout_ PMDL MemoryDescriptorList,
    _In_ __drv_strictType(KPROCESSOR_MODE/enum _MODE,__drv_typeConst)
    KPROCESSOR_MODE AccessMode
    );
typedef
VOID
MM_MDL_ROUTINE (
    _In_opt_ PVOID DriverContext,
    _In_ PVOID MappedVa
    );
typedef MM_MDL_ROUTINE *PMM_MDL_ROUTINE;
_Must_inspect_result_
_Success_(return != NULL)
_IRQL_requires_max_ (DISPATCH_LEVEL)
NTKERNELAPI
NTSTATUS
MmMapMdl (
    _Inout_ PMDL MemoryDescriptorList,
    _In_ ULONG Protection,
    _In_ PMM_MDL_ROUTINE DriverRoutine,
    _In_opt_ PVOID DriverContext
    );
_IRQL_requires_max_ (DISPATCH_LEVEL)
NTKERNELAPI
LOGICAL
MmIsIoSpaceActive (
    _In_ PHYSICAL_ADDRESS StartAddress,
    _In_ SIZE_T NumberOfBytes
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTKERNELAPI
PVOID
NTAPI
MmGetSystemRoutineAddress (
    _In_ PUNICODE_STRING SystemRoutineName
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
NTSTATUS
MmAdvanceMdl (
    _Inout_ PMDL Mdl,
    _In_ ULONG NumberOfBytes
    );
_Must_inspect_result_
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
NTSTATUS
MmProtectMdlSystemAddress (
    _In_ PMDL MemoryDescriptorList,
    _In_ ULONG NewProtect
    );
typedef enum _MM_PAGE_PRIORITY {
    LowPagePriority,
    NormalPagePriority = 16,
    HighPagePriority = 32
} MM_PAGE_PRIORITY;
_Post_writable_byte_size_(MemoryDescriptorList->ByteCount)
_When_(AccessMode==KernelMode, _IRQL_requires_max_(DISPATCH_LEVEL))
_When_(AccessMode==UserMode, _Maybe_raises_SEH_exception_ _IRQL_requires_max_(APC_LEVEL) _Post_notnull_)
_At_(MemoryDescriptorList->MappedSystemVa,
    _Post_writable_byte_size_(MemoryDescriptorList->ByteCount))
_Must_inspect_result_
_Success_(return != NULL)
NTKERNELAPI
PVOID
MmMapLockedPagesSpecifyCache (
    _Inout_ PMDL MemoryDescriptorList,
    _In_ __drv_strictType(KPROCESSOR_MODE/enum _MODE,__drv_typeConst)
            KPROCESSOR_MODE AccessMode,
    _In_ __drv_strictTypeMatch(__drv_typeCond) MEMORY_CACHING_TYPE CacheType,
    _In_opt_ PVOID RequestedAddress,
    _In_ ULONG BugCheckOnFailure,
    _In_ ULONG Priority
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
VOID
MmUnmapLockedPages (
    _In_ PVOID BaseAddress,
    _Inout_ PMDL MemoryDescriptorList
    );
_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
_When_ (return != NULL, _Out_writes_bytes_opt_ (NumberOfBytes)) PVOID
MmAllocateMappingAddress (
     _In_ SIZE_T NumberOfBytes,
     _In_ ULONG PoolTag
     );
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
VOID
MmFreeMappingAddress (
     _In_ PVOID BaseAddress,
     _In_ ULONG PoolTag
     );
_Post_writable_byte_size_(MemoryDescriptorList->ByteCount)
_IRQL_requires_max_(DISPATCH_LEVEL)
_At_(
    MemoryDescriptorList->MappedSystemVa + MemoryDescriptorList->ByteOffset,
    _Post_writable_byte_size_(MemoryDescriptorList->ByteCount))
_Must_inspect_result_
_Success_(return != NULL)
NTKERNELAPI
PVOID
MmMapLockedPagesWithReservedMapping (
    _In_ PVOID MappingAddress,
    _In_ ULONG PoolTag,
    _Inout_ PMDL MemoryDescriptorList,
    _In_ __drv_strictTypeMatch(__drv_typeCond) MEMORY_CACHING_TYPE CacheType
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
VOID
MmUnmapReservedMapping (
     _In_ PVOID BaseAddress,
     _In_ ULONG PoolTag,
     _Inout_ PMDL MemoryDescriptorList
     );
_Must_inspect_result_
_IRQL_requires_max_ (DISPATCH_LEVEL)
NTKERNELAPI
PMDL
MmAllocateNodePagesForMdlEx (
    _In_ PHYSICAL_ADDRESS LowAddress,
    _In_ PHYSICAL_ADDRESS HighAddress,
    _In_ PHYSICAL_ADDRESS SkipBytes,
    _In_ SIZE_T TotalBytes,
    _In_ MEMORY_CACHING_TYPE CacheType,
    _In_ ULONG IdealNode,
    _In_ ULONG Flags
    );
typedef ULONG MM_NODE_NUMBER_ZERO_BASED;
typedef ULONG MM_NODE_NUMBER_ONE_BASED;
_Must_inspect_result_
_IRQL_requires_max_ (DISPATCH_LEVEL)
NTKERNELAPI
PMDL
MmAllocatePartitionNodePagesForMdlEx (
    _In_ PHYSICAL_ADDRESS LowAddress,
    _In_ PHYSICAL_ADDRESS HighAddress,
    _In_ PHYSICAL_ADDRESS SkipBytes,
    _In_ SIZE_T TotalBytes,
    _In_ MEMORY_CACHING_TYPE CacheType,
    _In_ MM_NODE_NUMBER_ZERO_BASED IdealNode,
    _In_ ULONG Flags,
    _In_opt_ PVOID PartitionObject
    );
_Must_inspect_result_
_IRQL_requires_max_ (DISPATCH_LEVEL)
NTKERNELAPI
PMDL
MmAllocatePagesForMdlEx (
    _In_ PHYSICAL_ADDRESS LowAddress,
    _In_ PHYSICAL_ADDRESS HighAddress,
    _In_ PHYSICAL_ADDRESS SkipBytes,
    _In_ SIZE_T TotalBytes,
    _In_ MEMORY_CACHING_TYPE CacheType,
    _In_ ULONG Flags
    );
_Must_inspect_result_
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
PMDL
MmAllocatePagesForMdl (
    _In_ PHYSICAL_ADDRESS LowAddress,
    _In_ PHYSICAL_ADDRESS HighAddress,
    _In_ PHYSICAL_ADDRESS SkipBytes,
    _In_ SIZE_T TotalBytes
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
VOID
MmFreePagesFromMdlEx (
    _Inout_ PMDL MemoryDescriptorList,
    _In_ ULONG Flags
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
VOID
MmFreePagesFromMdl (
    _Inout_ PMDL MemoryDescriptorList
    );
_Must_inspect_result_
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
_Out_writes_bytes_opt_ (NumberOfBytes)
PVOID
MmMapIoSpace (
    _In_ PHYSICAL_ADDRESS PhysicalAddress,
    _In_ SIZE_T NumberOfBytes,
    _In_ MEMORY_CACHING_TYPE CacheType
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
VOID
MmUnmapIoSpace (
    _In_reads_bytes_ (NumberOfBytes) PVOID BaseAddress,
    _In_ SIZE_T NumberOfBytes
    );
_Must_inspect_result_
_IRQL_requires_max_ (DISPATCH_LEVEL)
NTKERNELAPI
_Out_writes_bytes_opt_ (NumberOfBytes)
PVOID
MmMapIoSpaceEx (
    _In_ PHYSICAL_ADDRESS PhysicalAddress,
    _In_ SIZE_T NumberOfBytes,
    _In_ ULONG Protect
    );
_Must_inspect_result_
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
_When_ (return != NULL, _Post_writable_byte_size_ (NumberOfBytes)) PVOID
MmAllocateContiguousMemory (
    _In_ SIZE_T NumberOfBytes,
    _In_ PHYSICAL_ADDRESS HighestAcceptableAddress
    );
_Must_inspect_result_
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
_When_ (return != NULL, _Post_writable_byte_size_ (NumberOfBytes)) PVOID
MmAllocateContiguousMemorySpecifyCache (
    _In_ SIZE_T NumberOfBytes,
    _In_ PHYSICAL_ADDRESS LowestAcceptableAddress,
    _In_ PHYSICAL_ADDRESS HighestAcceptableAddress,
    _In_opt_ PHYSICAL_ADDRESS BoundaryAddressMultiple,
    _In_ MEMORY_CACHING_TYPE CacheType
    );
typedef ULONG NODE_REQUIREMENT;
_Must_inspect_result_
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
_When_ (return != NULL, _Post_writable_byte_size_ (NumberOfBytes)) PVOID
MmAllocateContiguousMemorySpecifyCacheNode (
    _In_ SIZE_T NumberOfBytes,
    _In_ PHYSICAL_ADDRESS LowestAcceptableAddress,
    _In_ PHYSICAL_ADDRESS HighestAcceptableAddress,
    _In_opt_ PHYSICAL_ADDRESS BoundaryAddressMultiple,
    _In_ MEMORY_CACHING_TYPE CacheType,
    _In_ NODE_REQUIREMENT PreferredNode
    );
_Must_inspect_result_
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
_When_ (return != NULL, _Post_writable_byte_size_ (NumberOfBytes)) PVOID
MmAllocateContiguousNodeMemory (
    _In_ SIZE_T NumberOfBytes,
    _In_ PHYSICAL_ADDRESS LowestAcceptableAddress,
    _In_ PHYSICAL_ADDRESS HighestAcceptableAddress,
    _In_opt_ PHYSICAL_ADDRESS BoundaryAddressMultiple,
    _In_ ULONG Protect,
    _In_ NODE_REQUIREMENT PreferredNode
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
VOID
MmFreeContiguousMemory (
    _In_ PVOID BaseAddress
    );
_IRQL_requires_max_ (DISPATCH_LEVEL)
NTKERNELAPI
VOID
MmFreeContiguousMemorySpecifyCache (
    _In_reads_bytes_ (NumberOfBytes) PVOID BaseAddress,
    _In_ SIZE_T NumberOfBytes,
    _In_ MEMORY_CACHING_TYPE CacheType
    );
NTKERNELAPI
SIZE_T
MmSizeOfMdl (
    _In_reads_bytes_opt_ (Length) PVOID Base,
    _In_ SIZE_T Length
    );
DECLSPEC_DEPRECATED_DDK
__drv_preferredFunction("IoAllocateMdl","Obsolete")
NTKERNELAPI
PMDL
MmCreateMdl (
    _Out_writes_bytes_opt_ (sizeof (MDL) + (sizeof (PFN_NUMBER) * ADDRESS_AND_SIZE_TO_SPAN_PAGES (Base, Length))) PMDL MemoryDescriptorList,
    _In_reads_bytes_opt_ (Length) PVOID Base,
    _In_ SIZE_T Length
    );
typedef enum _MM_MDL_PAGE_CONTENTS_STATE {
    MmMdlPageContentsDynamic,
    MmMdlPageContentsInvariant,
    MmMdlPageContentsQuery
} MM_MDL_PAGE_CONTENTS_STATE, PMM_MDL_PAGE_CONTENTS_STATE;
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
MM_MDL_PAGE_CONTENTS_STATE
MmMdlPageContentsState (
    _Inout_ PMDL MemoryDescriptorList,
    _In_ MM_MDL_PAGE_CONTENTS_STATE State
    );
_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
PVOID
MmLockPagableDataSection (
    _In_ PVOID AddressWithinSection
    );
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
VOID
MmResetDriverPaging (
    _In_ PVOID AddressWithinSection
    );
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
PVOID
MmPageEntireDriver (
    _In_ PVOID AddressWithinSection
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
VOID
MmUnlockPagableImageSection (
    _In_ PVOID ImageSectionHandle
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
FORCEINLINE
VOID
MmInitializeMdl (
    _Out_writes_bytes_(sizeof(MDL)+(sizeof(PFN_NUMBER)*ADDRESS_AND_SIZE_TO_SPAN_PAGES(BaseVa,Length)))
             PMDL MemoryDescriptorList,
    _In_opt_ PVOID BaseVa,
    _In_ SIZE_T Length
    )
{
    MemoryDescriptorList->Next = (PMDL) NULL;
    MemoryDescriptorList->Size = (CSHORT)(sizeof(MDL) +
            (sizeof(PFN_NUMBER) * ADDRESS_AND_SIZE_TO_SPAN_PAGES(BaseVa, Length)));
    MemoryDescriptorList->MdlFlags = 0;
    MemoryDescriptorList->StartVa = (PVOID) PAGE_ALIGN(BaseVa);
    MemoryDescriptorList->ByteOffset = BYTE_OFFSET(BaseVa);
    MemoryDescriptorList->ByteCount = (ULONG)Length;
}
_IRQL_requires_max_(DISPATCH_LEVEL)
_Post_writable_byte_size_(Mdl->ByteCount)
_At_(Mdl->MappedSystemVa,
    _Post_writable_byte_size_(Mdl->ByteCount))
_Check_return_
_Success_(return != NULL)
FORCEINLINE
PVOID
MmGetSystemAddressForMdlSafe (
    _Inout_ PMDL Mdl,
    _In_ ULONG Priority
    )
{
    if (Mdl->MdlFlags & (MDL_MAPPED_TO_SYSTEM_VA | MDL_SOURCE_IS_NONPAGED_POOL)) {
        return Mdl->MappedSystemVa;
    } else {
        return MmMapLockedPagesSpecifyCache(Mdl, KernelMode, MmCached,
                                            NULL, FALSE, Priority);
    }
}
     (((MDL)->MdlFlags & (MDL_MAPPED_TO_SYSTEM_VA | \
                        MDL_SOURCE_IS_NONPAGED_POOL)) ? \
                             ((MDL)->MappedSystemVa) : \
                             (MmMapLockedPages((MDL),KernelMode)))
_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
FORCEINLINE
MmPrepareMdlForReuse (
    _Inout_ PMDL MDL
    )
{
    if ((MDL->MdlFlags & MDL_PARTIAL_HAS_BEEN_MAPPED) != 0) {
        NT_ASSERT((MDL->MdlFlags & MDL_PARTIAL) != 0);
        MmUnmapLockedPages( MDL->MappedSystemVa, MDL );
    } else if ((MDL->MdlFlags & MDL_PARTIAL) == 0) {
        NT_ASSERT((MDL->MdlFlags & MDL_MAPPED_TO_SYSTEM_VA) == 0);
    }
}
typedef NTSTATUS (*PMM_DLL_INITIALIZE) (
    _In_ PUNICODE_STRING RegistryPath
    );
typedef NTSTATUS (*PMM_DLL_UNLOAD) (
    VOID
    );
struct _DRIVER_OBJECT;
NTKERNELAPI
LOGICAL
MmIsDriverSuspectForVerifier (
    _In_ struct _DRIVER_OBJECT *DriverObject
    );
NTKERNELAPI
LOGICAL
MmIsDriverVerifying (
    _In_ struct _DRIVER_OBJECT *DriverObject
    );
_IRQL_requires_max_ (APC_LEVEL)
NTKERNELAPI
LOGICAL
MmIsDriverVerifyingByAddress (
    _In_ PVOID AddressWithinSection
    );
typedef enum _SECURITY_OPERATION_CODE {
    SetSecurityDescriptor,
    QuerySecurityDescriptor,
    DeleteSecurityDescriptor,
    AssignSecurityDescriptor
} SECURITY_OPERATION_CODE, *PSECURITY_OPERATION_CODE;
typedef struct _SECURITY_SUBJECT_CONTEXT {
    PACCESS_TOKEN ClientToken;
    SECURITY_IMPERSONATION_LEVEL ImpersonationLevel;
    PACCESS_TOKEN PrimaryToken;
    PVOID ProcessAuditId;
} SECURITY_SUBJECT_CONTEXT, *PSECURITY_SUBJECT_CONTEXT;
typedef struct _INITIAL_PRIVILEGE_SET {
    ULONG PrivilegeCount;
    ULONG Control;
    LUID_AND_ATTRIBUTES Privilege[INITIAL_PRIVILEGE_COUNT];
} INITIAL_PRIVILEGE_SET, *PINITIAL_PRIVILEGE_SET;
typedef struct _ACCESS_STATE {
   LUID OperationID;
   BOOLEAN SecurityEvaluated;
   BOOLEAN GenerateAudit;
   BOOLEAN GenerateOnClose;
   BOOLEAN PrivilegesAllocated;
   ULONG Flags;
   ACCESS_MASK RemainingDesiredAccess;
   ACCESS_MASK PreviouslyGrantedAccess;
   ACCESS_MASK OriginalDesiredAccess;
   SECURITY_SUBJECT_CONTEXT SubjectSecurityContext;
   PSECURITY_DESCRIPTOR SecurityDescriptor;
   PVOID AuxData;
   union {
      INITIAL_PRIVILEGE_SET InitialPrivilegeSet;
      PRIVILEGE_SET PrivilegeSet;
      } Privileges;
   BOOLEAN AuditPrivileges;
   UNICODE_STRING ObjectName;
   UNICODE_STRING ObjectTypeName;
} ACCESS_STATE, *PACCESS_STATE;
typedef
VOID
NTFS_DEREF_EXPORTED_SECURITY_DESCRIPTOR(
    _In_ PVOID Vcb,
    _In_ PSECURITY_DESCRIPTOR SecurityDescriptor);
typedef NTFS_DEREF_EXPORTED_SECURITY_DESCRIPTOR *PNTFS_DEREF_EXPORTED_SECURITY_DESCRIPTOR;
NTKERNELAPI
VOID
SeCaptureSubjectContext (
    _Out_ PSECURITY_SUBJECT_CONTEXT SubjectContext
    );
NTKERNELAPI
VOID
SeLockSubjectContext(
    _In_ PSECURITY_SUBJECT_CONTEXT SubjectContext
    );
NTKERNELAPI
VOID
SeUnlockSubjectContext(
    _In_ PSECURITY_SUBJECT_CONTEXT SubjectContext
    );
NTKERNELAPI
VOID
SeReleaseSubjectContext (
    _Inout_ PSECURITY_SUBJECT_CONTEXT SubjectContext
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTKERNELAPI
NTSTATUS
SeAssignSecurity (
    _In_opt_ PSECURITY_DESCRIPTOR ParentDescriptor,
    _In_opt_ PSECURITY_DESCRIPTOR ExplicitDescriptor,
    _Out_ PSECURITY_DESCRIPTOR *NewDescriptor,
    _In_ BOOLEAN IsDirectoryObject,
    _In_ PSECURITY_SUBJECT_CONTEXT SubjectContext,
    _In_ PGENERIC_MAPPING GenericMapping,
    _In_ POOL_TYPE PoolType
    );
NTKERNELAPI
ULONG
SeComputeAutoInheritByObjectType(
    _In_ PVOID ObjectType,
    _In_opt_ PSECURITY_DESCRIPTOR SecurityDescriptor,
    _In_opt_ PSECURITY_DESCRIPTOR ParentSecurityDescriptor
    );
NTKERNELAPI
NTSTATUS
SeAssignSecurityEx (
    _In_opt_ PSECURITY_DESCRIPTOR ParentDescriptor,
    _In_opt_ PSECURITY_DESCRIPTOR ExplicitDescriptor,
    _Out_ PSECURITY_DESCRIPTOR *NewDescriptor,
    _In_opt_ GUID *ObjectType,
    _In_ BOOLEAN IsDirectoryObject,
    _In_ ULONG AutoInheritFlags,
    _In_ PSECURITY_SUBJECT_CONTEXT SubjectContext,
    _In_ PGENERIC_MAPPING GenericMapping,
    _In_ POOL_TYPE PoolType
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTKERNELAPI
NTSTATUS
SeDeassignSecurity (
    _Inout_ PSECURITY_DESCRIPTOR *SecurityDescriptor
    );
NTKERNELAPI
ULONG
SeObjectCreateSaclAccessBits(
    _In_ PSECURITY_DESCRIPTOR SecurityDescriptor
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTKERNELAPI
BOOLEAN
SeAccessCheck (
    _In_ PSECURITY_DESCRIPTOR SecurityDescriptor,
    _In_ PSECURITY_SUBJECT_CONTEXT SubjectSecurityContext,
    _In_ BOOLEAN SubjectContextLocked,
    _In_ ACCESS_MASK DesiredAccess,
    _In_ ACCESS_MASK PreviouslyGrantedAccess,
    _Outptr_opt_ PPRIVILEGE_SET *Privileges,
    _In_ PGENERIC_MAPPING GenericMapping,
    _In_ KPROCESSOR_MODE AccessMode,
    _Out_ PACCESS_MASK GrantedAccess,
    _Out_ PNTSTATUS AccessStatus
    );
VOID
SeGetWorldRights (
    _In_ PSECURITY_DESCRIPTOR SecurityDescriptor,
    _In_ PGENERIC_MAPPING GenericMapping,
    _Out_ PACCESS_MASK GrantedAccess
    );
_At_(AuditParameters->ParameterCount, _Const_)
NTSTATUS
SeSetAuditParameter(
    _Inout_ PSE_ADT_PARAMETER_ARRAY AuditParameters,
    _In_ SE_ADT_PARAMETER_TYPE Type,
    _In_range_(<,SE_MAX_AUDIT_PARAMETERS) ULONG Index,
    _In_reads_(_Inexpressible_("depends on SE_ADT_PARAMETER_TYPE")) PVOID Data
    );
NTSTATUS
SeReportSecurityEvent(
    _In_ ULONG Flags,
    _In_ PUNICODE_STRING SourceName,
    _In_opt_ PSID UserSid,
    _In_ PSE_ADT_PARAMETER_ARRAY AuditParameters
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTKERNELAPI
BOOLEAN
SeValidSecurityDescriptor(
    _In_ ULONG Length,
    _In_reads_bytes_(Length) PSECURITY_DESCRIPTOR SecurityDescriptor
    );
typedef enum _SE_IMAGE_TYPE
{
  SeImageTypeElamDriver = 0,
  SeImageTypeDriver,
  SeImageTypePlatformSecureFile,
  SeImageTypeDynamicCodeFile,
  SeImageTypeMax
} SE_IMAGE_TYPE, *PSE_IMAGE_TYPE;
typedef struct _BDCB_IMAGE_INFORMATION *PBDCB_IMAGE_INFORMATION;
typedef
_IRQL_requires_same_
_Function_class_(SE_IMAGE_VERIFICATION_CALLBACK_FUNCTION)
VOID
SE_IMAGE_VERIFICATION_CALLBACK_FUNCTION (
    _In_opt_ PVOID CallbackContext,
    _In_ SE_IMAGE_TYPE ImageType,
    _Inout_ PBDCB_IMAGE_INFORMATION ImageInformation
    );
typedef SE_IMAGE_VERIFICATION_CALLBACK_FUNCTION *PSE_IMAGE_VERIFICATION_CALLBACK_FUNCTION;
typedef enum _SE_IMAGE_VERIFICATION_CALLBACK_TYPE {
    SeImageVerificationCallbackInformational = 0
} SE_IMAGE_VERIFICATION_CALLBACK_TYPE, *PSE_IMAGE_VERIFICATION_CALLBACK_TYPE;
typedef PVOID SE_IMAGE_VERIFICATION_CALLBACK_TOKEN, *PSE_IMAGE_VERIFICATION_CALLBACK_TOKEN;
_IRQL_requires_max_(PASSIVE_LEVEL)
NTKERNELAPI
NTSTATUS
SeRegisterImageVerificationCallback(
    _In_ SE_IMAGE_TYPE ImageType,
    _In_ SE_IMAGE_VERIFICATION_CALLBACK_TYPE CallbackType,
    _In_ PSE_IMAGE_VERIFICATION_CALLBACK_FUNCTION CallbackFunction,
    _In_opt_ PVOID CallbackContext,
    _Reserved_ SE_IMAGE_VERIFICATION_CALLBACK_TOKEN Token,
    _Out_ PVOID* CallbackHandle
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTKERNELAPI
VOID
SeUnregisterImageVerificationCallback (
    _In_ PVOID CallbackHandle
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
CFORCEINLINE
PETHREAD
PsGetCurrentThread (
    VOID
    )
{
    return (PETHREAD)KeGetCurrentThread();
}
_IRQL_requires_max_(PASSIVE_LEVEL)
NTKERNELAPI
_Must_inspect_result_
NTSTATUS
PsCreateSystemThread(
    _Out_ PHANDLE ThreadHandle,
    _In_ ULONG DesiredAccess,
    _In_opt_ POBJECT_ATTRIBUTES ObjectAttributes,
    _In_opt_ HANDLE ProcessHandle,
    _Out_opt_ PCLIENT_ID ClientId,
    _In_ PKSTART_ROUTINE StartRoutine,
    _In_opt_ _When_(return >= 0, __drv_aliasesMem) PVOID StartContext
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTKERNELAPI
NTSTATUS
PsTerminateSystemThread(
    _In_ NTSTATUS ExitStatus
    );
NTKERNELAPI
NTSTATUS
PsWrapApcWow64Thread (
    _Inout_ PVOID *ApcContext,
    _Inout_ PVOID *ApcRoutine);
_IRQL_requires_max_(PASSIVE_LEVEL)
__drv_preferredFunction("RtlGetVersion", "Obsolete")
NTKERNELAPI
BOOLEAN
PsGetVersion(
    _Out_opt_ PULONG MajorVersion,
    _Out_opt_ PULONG MinorVersion,
    _Out_opt_ PULONG BuildNumber,
    _Out_opt_ PUNICODE_STRING CSDVersion
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
ULONG64
PsQueryTotalCycleTimeProcess (
    _Inout_ PEPROCESS Process,
    _Out_ PULONG64 CycleTimeStamp
    );
typedef enum _CREATE_FILE_TYPE {
    CreateFileTypeNone,
    CreateFileTypeNamedPipe,
    CreateFileTypeMailslot
} CREATE_FILE_TYPE;
typedef struct _NAMED_PIPE_CREATE_PARAMETERS {
    ULONG NamedPipeType;
    ULONG ReadMode;
    ULONG CompletionMode;
    ULONG MaximumInstances;
    ULONG InboundQuota;
    ULONG OutboundQuota;
    LARGE_INTEGER DefaultTimeout;
    BOOLEAN TimeoutSpecified;
} NAMED_PIPE_CREATE_PARAMETERS, *PNAMED_PIPE_CREATE_PARAMETERS;
typedef struct _MAILSLOT_CREATE_PARAMETERS {
    ULONG MailslotQuota;
    ULONG MaximumMessageSize;
    LARGE_INTEGER ReadTimeout;
    BOOLEAN TimeoutSpecified;
} MAILSLOT_CREATE_PARAMETERS, *PMAILSLOT_CREATE_PARAMETERS;
struct _DEVICE_DESCRIPTION;
struct _DEVICE_OBJECT;
struct _DMA_ADAPTER;
struct _DRIVER_OBJECT;
struct _DRIVE_LAYOUT_INFORMATION;
struct _DISK_PARTITION;
struct _FILE_OBJECT;
struct  _IRP;
struct _SCSI_REQUEST_BLOCK;
struct _SCATTER_GATHER_LIST;
_Function_class_(IO_DPC_ROUTINE)
_IRQL_always_function_min_(DISPATCH_LEVEL)
_IRQL_requires_(DISPATCH_LEVEL)
_IRQL_requires_same_
typedef
VOID
IO_DPC_ROUTINE (
    _In_ PKDPC Dpc,
    _In_ struct _DEVICE_OBJECT *DeviceObject,
    _Inout_ struct _IRP *Irp,
    _In_opt_ PVOID Context
    );
typedef IO_DPC_ROUTINE *PIO_DPC_ROUTINE;
_Function_class_(IO_TIMER_ROUTINE)
_IRQL_requires_same_
typedef
VOID
IO_TIMER_ROUTINE (
    _In_ struct _DEVICE_OBJECT *DeviceObject,
    _In_opt_ PVOID Context
    );
typedef IO_TIMER_ROUTINE *PIO_TIMER_ROUTINE;
_Function_class_(DRIVER_INITIALIZE)
_IRQL_requires_same_
_IRQL_requires_(PASSIVE_LEVEL)
typedef
NTSTATUS
DRIVER_INITIALIZE (
    _In_ struct _DRIVER_OBJECT *DriverObject,
    _In_ PUNICODE_STRING RegistryPath
    );
typedef DRIVER_INITIALIZE *PDRIVER_INITIALIZE;
_Function_class_(DRIVER_CANCEL)
_Requires_lock_held_(_Global_cancel_spin_lock_)
_Releases_lock_(_Global_cancel_spin_lock_)
_IRQL_requires_min_(DISPATCH_LEVEL)
_IRQL_requires_(DISPATCH_LEVEL)
typedef
VOID
DRIVER_CANCEL (
    _Inout_ struct _DEVICE_OBJECT *DeviceObject,
    _Inout_ _IRQL_uses_cancel_ struct _IRP *Irp
    );
typedef DRIVER_CANCEL *PDRIVER_CANCEL;
_Function_class_(DRIVER_DISPATCH)
_IRQL_requires_max_(DISPATCH_LEVEL)
_IRQL_requires_same_
typedef
NTSTATUS
DRIVER_DISPATCH (
    _In_ struct _DEVICE_OBJECT *DeviceObject,
    _Inout_ struct _IRP *Irp
    );
typedef DRIVER_DISPATCH *PDRIVER_DISPATCH;
typedef DRIVER_DISPATCH DRIVER_DISPATCH_RAISED;
_Function_class_(DRIVER_DISPATCH)
_IRQL_requires_max_(PASSIVE_LEVEL)
_IRQL_requires_same_
typedef
NTSTATUS
DRIVER_DISPATCH_PAGED (
    _In_ struct _DEVICE_OBJECT *DeviceObject,
    _Inout_ struct _IRP *Irp
    );
typedef DRIVER_DISPATCH_PAGED *PDRIVER_DISPATCH_PAGED;
_Function_class_(DRIVER_STARTIO)
_IRQL_always_function_min_(DISPATCH_LEVEL)
_IRQL_requires_(DISPATCH_LEVEL)
_IRQL_requires_same_
typedef
VOID
DRIVER_STARTIO (
    _Inout_ struct _DEVICE_OBJECT *DeviceObject,
    _Inout_ struct _IRP *Irp
    );
typedef DRIVER_STARTIO *PDRIVER_STARTIO;
_Function_class_(DRIVER_UNLOAD)
_IRQL_requires_(PASSIVE_LEVEL)
_IRQL_requires_same_
typedef
VOID
DRIVER_UNLOAD (
    _In_ struct _DRIVER_OBJECT *DriverObject
    );
typedef DRIVER_UNLOAD *PDRIVER_UNLOAD;
_Function_class_(DRIVER_ADD_DEVICE)
_IRQL_requires_(PASSIVE_LEVEL)
_IRQL_requires_same_
_When_(return>=0, _Kernel_clear_do_init_(__yes))
typedef
NTSTATUS
DRIVER_ADD_DEVICE (
    _In_ struct _DRIVER_OBJECT *DriverObject,
    _In_ struct _DEVICE_OBJECT *PhysicalDeviceObject
    );
typedef DRIVER_ADD_DEVICE *PDRIVER_ADD_DEVICE;
_Function_class_(FAST_IO_CHECK_IF_POSSIBLE)
_IRQL_requires_same_
_Success_(return != FALSE)
typedef
BOOLEAN
FAST_IO_CHECK_IF_POSSIBLE (
    _In_ struct _FILE_OBJECT *FileObject,
    _In_ PLARGE_INTEGER FileOffset,
    _In_ ULONG Length,
    _In_ BOOLEAN Wait,
    _In_ ULONG LockKey,
    _In_ BOOLEAN CheckForReadOperation,
    _Pre_notnull_
    _When_(return != FALSE, _Post_equal_to_(_Old_(IoStatus)))
    _When_(return == FALSE, _Post_valid_)
    PIO_STATUS_BLOCK IoStatus,
    _In_ struct _DEVICE_OBJECT *DeviceObject
    );
typedef FAST_IO_CHECK_IF_POSSIBLE *PFAST_IO_CHECK_IF_POSSIBLE;
_Function_class_(FAST_IO_READ)
_IRQL_requires_same_
typedef
BOOLEAN
FAST_IO_READ (
    _In_ struct _FILE_OBJECT *FileObject,
    _In_ PLARGE_INTEGER FileOffset,
    _In_ ULONG Length,
    _In_ BOOLEAN Wait,
    _In_ ULONG LockKey,
    _Out_ PVOID Buffer,
    _Out_ PIO_STATUS_BLOCK IoStatus,
    _In_ struct _DEVICE_OBJECT *DeviceObject
    );
typedef FAST_IO_READ *PFAST_IO_READ;
_Function_class_(FAST_IO_WRITE)
_IRQL_requires_same_
typedef
BOOLEAN
FAST_IO_WRITE (
    _In_ struct _FILE_OBJECT *FileObject,
    _In_ PLARGE_INTEGER FileOffset,
    _In_ ULONG Length,
    _In_ BOOLEAN Wait,
    _In_ ULONG LockKey,
    _In_ PVOID Buffer,
    _Out_ PIO_STATUS_BLOCK IoStatus,
    _In_ struct _DEVICE_OBJECT *DeviceObject
    );
typedef FAST_IO_WRITE *PFAST_IO_WRITE;
_Function_class_(FAST_IO_QUERY_BASIC_INFO)
_IRQL_requires_same_
_Success_(return != FALSE)
typedef
BOOLEAN
FAST_IO_QUERY_BASIC_INFO (
    _In_ struct _FILE_OBJECT *FileObject,
    _In_ BOOLEAN Wait,
    _Out_ PFILE_BASIC_INFORMATION Buffer,
    _Out_ PIO_STATUS_BLOCK IoStatus,
    _In_ struct _DEVICE_OBJECT *DeviceObject
    );
typedef FAST_IO_QUERY_BASIC_INFO *PFAST_IO_QUERY_BASIC_INFO;
_Function_class_(FAST_IO_QUERY_STANDARD_INFO)
_IRQL_requires_same_
_Success_(return != FALSE)
typedef
BOOLEAN
FAST_IO_QUERY_STANDARD_INFO (
    _In_ struct _FILE_OBJECT *FileObject,
    _In_ BOOLEAN Wait,
    _Out_ PFILE_STANDARD_INFORMATION Buffer,
    _Out_ PIO_STATUS_BLOCK IoStatus,
    _In_ struct _DEVICE_OBJECT *DeviceObject
    );
typedef FAST_IO_QUERY_STANDARD_INFO *PFAST_IO_QUERY_STANDARD_INFO;
_Function_class_(FAST_IO_LOCK)
_IRQL_requires_same_
typedef
BOOLEAN
FAST_IO_LOCK (
    _In_ struct _FILE_OBJECT *FileObject,
    _In_ PLARGE_INTEGER FileOffset,
    _In_ PLARGE_INTEGER Length,
    _In_ PEPROCESS ProcessId,
    _In_ ULONG Key,
    _In_ BOOLEAN FailImmediately,
    _In_ BOOLEAN ExclusiveLock,
    _Out_ PIO_STATUS_BLOCK IoStatus,
    _In_ struct _DEVICE_OBJECT *DeviceObject
    );
typedef FAST_IO_LOCK *PFAST_IO_LOCK;
_Function_class_(FAST_IO_UNLOCK_SINGLE)
_IRQL_requires_same_
typedef
BOOLEAN
FAST_IO_UNLOCK_SINGLE (
    _In_ struct _FILE_OBJECT *FileObject,
    _In_ PLARGE_INTEGER FileOffset,
    _In_ PLARGE_INTEGER Length,
    _In_ PEPROCESS ProcessId,
    _In_ ULONG Key,
    _Out_ PIO_STATUS_BLOCK IoStatus,
    _In_ struct _DEVICE_OBJECT *DeviceObject
    );
typedef FAST_IO_UNLOCK_SINGLE *PFAST_IO_UNLOCK_SINGLE;
_Function_class_(FAST_IO_UNLOCK_ALL)
_IRQL_requires_same_
typedef
BOOLEAN
FAST_IO_UNLOCK_ALL (
    _In_ struct _FILE_OBJECT *FileObject,
    _In_ PEPROCESS ProcessId,
    _Out_ PIO_STATUS_BLOCK IoStatus,
    _In_ struct _DEVICE_OBJECT *DeviceObject
    );
typedef FAST_IO_UNLOCK_ALL *PFAST_IO_UNLOCK_ALL;
_Function_class_(FAST_IO_UNLOCK_ALL_BY_KEY)
_IRQL_requires_same_
typedef
BOOLEAN
FAST_IO_UNLOCK_ALL_BY_KEY (
    _In_ struct _FILE_OBJECT *FileObject,
    _In_ PVOID ProcessId,
    _In_ ULONG Key,
    _Out_ PIO_STATUS_BLOCK IoStatus,
    _In_ struct _DEVICE_OBJECT *DeviceObject
    );
typedef FAST_IO_UNLOCK_ALL_BY_KEY *PFAST_IO_UNLOCK_ALL_BY_KEY;
_Function_class_(FAST_IO_DEVICE_CONTROL)
_IRQL_requires_same_
typedef
BOOLEAN
FAST_IO_DEVICE_CONTROL (
    _In_ struct _FILE_OBJECT *FileObject,
    _In_ BOOLEAN Wait,
    _In_opt_ PVOID InputBuffer,
    _In_ ULONG InputBufferLength,
    _Out_opt_ PVOID OutputBuffer,
    _In_ ULONG OutputBufferLength,
    _In_ ULONG IoControlCode,
    _Out_ PIO_STATUS_BLOCK IoStatus,
    _In_ struct _DEVICE_OBJECT *DeviceObject
    );
typedef FAST_IO_DEVICE_CONTROL *PFAST_IO_DEVICE_CONTROL;
_Function_class_(FAST_IO_ACQUIRE_FILE)
_IRQL_requires_same_
typedef
VOID
FAST_IO_ACQUIRE_FILE (
    _In_ struct _FILE_OBJECT *FileObject
    );
typedef FAST_IO_ACQUIRE_FILE *PFAST_IO_ACQUIRE_FILE;
_Function_class_(FAST_IO_RELEASE_FILE)
_IRQL_requires_same_
typedef
VOID
FAST_IO_RELEASE_FILE (
    _In_ struct _FILE_OBJECT *FileObject
    );
typedef FAST_IO_RELEASE_FILE *PFAST_IO_RELEASE_FILE;
_Function_class_(FAST_IO_DETACH_DEVICE)
_IRQL_requires_same_
typedef
VOID
FAST_IO_DETACH_DEVICE (
    _In_ struct _DEVICE_OBJECT *SourceDevice,
    _In_ struct _DEVICE_OBJECT *TargetDevice
    );
typedef FAST_IO_DETACH_DEVICE *PFAST_IO_DETACH_DEVICE;
_Function_class_(FAST_IO_QUERY_NETWORK_OPEN_INFO)
_IRQL_requires_same_
_Success_(return != FALSE)
typedef
BOOLEAN
FAST_IO_QUERY_NETWORK_OPEN_INFO (
    _In_ struct _FILE_OBJECT *FileObject,
    _In_ BOOLEAN Wait,
    _Out_ struct _FILE_NETWORK_OPEN_INFORMATION *Buffer,
    _Out_ struct _IO_STATUS_BLOCK *IoStatus,
    _In_ struct _DEVICE_OBJECT *DeviceObject
    );
typedef FAST_IO_QUERY_NETWORK_OPEN_INFO *PFAST_IO_QUERY_NETWORK_OPEN_INFO;
_Function_class_(FAST_IO_MDL_READ)
_IRQL_requires_same_
typedef
BOOLEAN
FAST_IO_MDL_READ (
    _In_ struct _FILE_OBJECT *FileObject,
    _In_ PLARGE_INTEGER FileOffset,
    _In_ ULONG Length,
    _In_ ULONG LockKey,
    _Out_ PMDL *MdlChain,
    _Out_ PIO_STATUS_BLOCK IoStatus,
    _In_ struct _DEVICE_OBJECT *DeviceObject
    );
typedef FAST_IO_MDL_READ *PFAST_IO_MDL_READ;
_Function_class_(FAST_IO_MDL_READ_COMPLETE)
_IRQL_requires_same_
typedef
BOOLEAN
FAST_IO_MDL_READ_COMPLETE (
    _In_ struct _FILE_OBJECT *FileObject,
    _In_ PMDL MdlChain,
    _In_ struct _DEVICE_OBJECT *DeviceObject
    );
typedef FAST_IO_MDL_READ_COMPLETE *PFAST_IO_MDL_READ_COMPLETE;
_Function_class_(FAST_IO_PREPARE_MDL_WRITE)
_IRQL_requires_same_
typedef
BOOLEAN
FAST_IO_PREPARE_MDL_WRITE (
    _In_ struct _FILE_OBJECT *FileObject,
    _In_ PLARGE_INTEGER FileOffset,
    _In_ ULONG Length,
    _In_ ULONG LockKey,
    _Out_ PMDL *MdlChain,
    _Out_ PIO_STATUS_BLOCK IoStatus,
    _In_ struct _DEVICE_OBJECT *DeviceObject
    );
typedef FAST_IO_PREPARE_MDL_WRITE *PFAST_IO_PREPARE_MDL_WRITE;
_Function_class_(FAST_IO_MDL_WRITE_COMPLETE)
_IRQL_requires_same_
typedef
BOOLEAN
FAST_IO_MDL_WRITE_COMPLETE (
    _In_ struct _FILE_OBJECT *FileObject,
    _In_ PLARGE_INTEGER FileOffset,
    _In_ PMDL MdlChain,
    _In_ struct _DEVICE_OBJECT *DeviceObject
    );
typedef FAST_IO_MDL_WRITE_COMPLETE *PFAST_IO_MDL_WRITE_COMPLETE;
_Function_class_(FAST_IO_ACQUIRE_FOR_MOD_WRITE)
_IRQL_requires_same_
typedef
NTSTATUS
FAST_IO_ACQUIRE_FOR_MOD_WRITE (
    _In_ struct _FILE_OBJECT *FileObject,
    _In_ PLARGE_INTEGER EndingOffset,
    _Out_ struct _ERESOURCE **ResourceToRelease,
    _In_ struct _DEVICE_OBJECT *DeviceObject
             );
typedef FAST_IO_ACQUIRE_FOR_MOD_WRITE *PFAST_IO_ACQUIRE_FOR_MOD_WRITE;
_Function_class_(FAST_IO_RELEASE_FOR_MOD_WRITE)
_IRQL_requires_same_
typedef
NTSTATUS
FAST_IO_RELEASE_FOR_MOD_WRITE (
    _In_ struct _FILE_OBJECT *FileObject,
    _In_ struct _ERESOURCE *ResourceToRelease,
    _In_ struct _DEVICE_OBJECT *DeviceObject
             );
typedef FAST_IO_RELEASE_FOR_MOD_WRITE *PFAST_IO_RELEASE_FOR_MOD_WRITE;
_Function_class_(FAST_IO_ACQUIRE_FOR_CCFLUSH)
_IRQL_requires_same_
typedef
NTSTATUS
FAST_IO_ACQUIRE_FOR_CCFLUSH (
    _In_ struct _FILE_OBJECT *FileObject,
    _In_ struct _DEVICE_OBJECT *DeviceObject
             );
typedef FAST_IO_ACQUIRE_FOR_CCFLUSH *PFAST_IO_ACQUIRE_FOR_CCFLUSH;
_Function_class_(FAST_IO_RELEASE_FOR_CCFLUSH)
_IRQL_requires_same_
typedef
NTSTATUS
FAST_IO_RELEASE_FOR_CCFLUSH (
    _In_ struct _FILE_OBJECT *FileObject,
    _In_ struct _DEVICE_OBJECT *DeviceObject
             );
typedef FAST_IO_RELEASE_FOR_CCFLUSH *PFAST_IO_RELEASE_FOR_CCFLUSH;
_Function_class_(FAST_IO_READ_COMPRESSED)
_IRQL_requires_same_
typedef
BOOLEAN
FAST_IO_READ_COMPRESSED (
    _In_ struct _FILE_OBJECT *FileObject,
    _In_ PLARGE_INTEGER FileOffset,
    _In_ ULONG Length,
    _In_ ULONG LockKey,
    _Out_ PVOID Buffer,
    _Out_ PMDL *MdlChain,
    _Out_ PIO_STATUS_BLOCK IoStatus,
    _Out_writes_bytes_(CompressedDataInfoLength) struct _COMPRESSED_DATA_INFO *CompressedDataInfo,
    _In_ ULONG CompressedDataInfoLength,
    _In_ struct _DEVICE_OBJECT *DeviceObject
    );
typedef FAST_IO_READ_COMPRESSED *PFAST_IO_READ_COMPRESSED;
_Function_class_(FAST_IO_WRITE_COMPRESSED)
_IRQL_requires_same_
typedef
BOOLEAN
FAST_IO_WRITE_COMPRESSED (
    _In_ struct _FILE_OBJECT *FileObject,
    _In_ PLARGE_INTEGER FileOffset,
    _In_ ULONG Length,
    _In_ ULONG LockKey,
    _In_ PVOID Buffer,
    _Out_ PMDL *MdlChain,
    _Out_ PIO_STATUS_BLOCK IoStatus,
    _In_reads_bytes_(CompressedDataInfoLength) struct _COMPRESSED_DATA_INFO *CompressedDataInfo,
    _In_ ULONG CompressedDataInfoLength,
    _In_ struct _DEVICE_OBJECT *DeviceObject
    );
typedef FAST_IO_WRITE_COMPRESSED *PFAST_IO_WRITE_COMPRESSED;
_Function_class_(FAST_IO_MDL_READ_COMPLETE_COMPRESSED)
_IRQL_requires_same_
typedef
BOOLEAN
FAST_IO_MDL_READ_COMPLETE_COMPRESSED (
    _In_ struct _FILE_OBJECT *FileObject,
    _In_ PMDL MdlChain,
    _In_ struct _DEVICE_OBJECT *DeviceObject
    );
typedef FAST_IO_MDL_READ_COMPLETE_COMPRESSED *PFAST_IO_MDL_READ_COMPLETE_COMPRESSED;
_Function_class_(FAST_IO_MDL_WRITE_COMPLETE_COMPRESSED)
_IRQL_requires_same_
typedef
BOOLEAN
FAST_IO_MDL_WRITE_COMPLETE_COMPRESSED (
    _In_ struct _FILE_OBJECT *FileObject,
    _In_ PLARGE_INTEGER FileOffset,
    _In_ PMDL MdlChain,
    _In_ struct _DEVICE_OBJECT *DeviceObject
    );
typedef FAST_IO_MDL_WRITE_COMPLETE_COMPRESSED *PFAST_IO_MDL_WRITE_COMPLETE_COMPRESSED;
_Function_class_(FAST_IO_QUERY_OPEN)
_IRQL_requires_same_
typedef
BOOLEAN
FAST_IO_QUERY_OPEN (
    _Inout_ struct _IRP *Irp,
    _Out_ PFILE_NETWORK_OPEN_INFORMATION NetworkInformation,
    _In_ struct _DEVICE_OBJECT *DeviceObject
    );
typedef FAST_IO_QUERY_OPEN *PFAST_IO_QUERY_OPEN;
typedef struct _FAST_IO_DISPATCH {
    ULONG SizeOfFastIoDispatch;
    PFAST_IO_CHECK_IF_POSSIBLE FastIoCheckIfPossible;
    PFAST_IO_READ FastIoRead;
    PFAST_IO_WRITE FastIoWrite;
    PFAST_IO_QUERY_BASIC_INFO FastIoQueryBasicInfo;
    PFAST_IO_QUERY_STANDARD_INFO FastIoQueryStandardInfo;
    PFAST_IO_LOCK FastIoLock;
    PFAST_IO_UNLOCK_SINGLE FastIoUnlockSingle;
    PFAST_IO_UNLOCK_ALL FastIoUnlockAll;
    PFAST_IO_UNLOCK_ALL_BY_KEY FastIoUnlockAllByKey;
    PFAST_IO_DEVICE_CONTROL FastIoDeviceControl;
    PFAST_IO_ACQUIRE_FILE AcquireFileForNtCreateSection;
    PFAST_IO_RELEASE_FILE ReleaseFileForNtCreateSection;
    PFAST_IO_DETACH_DEVICE FastIoDetachDevice;
    PFAST_IO_QUERY_NETWORK_OPEN_INFO FastIoQueryNetworkOpenInfo;
    PFAST_IO_ACQUIRE_FOR_MOD_WRITE AcquireForModWrite;
    PFAST_IO_MDL_READ MdlRead;
    PFAST_IO_MDL_READ_COMPLETE MdlReadComplete;
    PFAST_IO_PREPARE_MDL_WRITE PrepareMdlWrite;
    PFAST_IO_MDL_WRITE_COMPLETE MdlWriteComplete;
    PFAST_IO_READ_COMPRESSED FastIoReadCompressed;
    PFAST_IO_WRITE_COMPRESSED FastIoWriteCompressed;
    PFAST_IO_MDL_READ_COMPLETE_COMPRESSED MdlReadCompleteCompressed;
    PFAST_IO_MDL_WRITE_COMPLETE_COMPRESSED MdlWriteCompleteCompressed;
    PFAST_IO_QUERY_OPEN FastIoQueryOpen;
    PFAST_IO_RELEASE_FOR_MOD_WRITE ReleaseForModWrite;
    PFAST_IO_ACQUIRE_FOR_CCFLUSH AcquireForCcFlush;
    PFAST_IO_RELEASE_FOR_CCFLUSH ReleaseForCcFlush;
} FAST_IO_DISPATCH, *PFAST_IO_DISPATCH;
typedef enum _IO_ALLOCATION_ACTION {
    KeepObject = 1,
    DeallocateObject,
    DeallocateObjectKeepRegisters
} IO_ALLOCATION_ACTION, *PIO_ALLOCATION_ACTION;
typedef
_Function_class_(DRIVER_CONTROL)
_IRQL_requires_same_
IO_ALLOCATION_ACTION
DRIVER_CONTROL (
    _In_ struct _DEVICE_OBJECT *DeviceObject,
    _Inout_ struct _IRP *Irp,
    _In_ PVOID MapRegisterBase,
    _In_ PVOID Context
    );
typedef DRIVER_CONTROL *PDRIVER_CONTROL;
typedef struct _IO_SECURITY_CONTEXT {
    PSECURITY_QUALITY_OF_SERVICE SecurityQos;
    PACCESS_STATE AccessState;
    ACCESS_MASK DesiredAccess;
    ULONG FullCreateOptions;
} IO_SECURITY_CONTEXT, *PIO_SECURITY_CONTEXT;
typedef struct _VPB {
    CSHORT Type;
    CSHORT Size;
    USHORT Flags;
    USHORT VolumeLabelLength;
    struct _DEVICE_OBJECT *DeviceObject;
    struct _DEVICE_OBJECT *RealDevice;
    ULONG SerialNumber;
    ULONG ReferenceCount;
    WCHAR VolumeLabel[MAXIMUM_VOLUME_LABEL_LENGTH / sizeof(WCHAR)];
} VPB, *PVPB;
typedef struct _DMA_ADAPTER *PADAPTER_OBJECT;
typedef struct _WAIT_CONTEXT_BLOCK {
    union {
        KDEVICE_QUEUE_ENTRY WaitQueueEntry;
        struct {
            LIST_ENTRY DmaWaitEntry;
            ULONG NumberOfChannels;
            ULONG SyncCallback : 1;
            ULONG DmaContext : 1;
            ULONG ZeroMapRegisters : 1;
            ULONG Reserved : 9;
            ULONG NumberOfRemapPages : 20;
        };
    };
    PDRIVER_CONTROL DeviceRoutine;
    PVOID DeviceContext;
    ULONG NumberOfMapRegisters;
    PVOID DeviceObject;
    PVOID CurrentIrp;
    PKDPC BufferChainingDpc;
} WAIT_CONTEXT_BLOCK, *PWAIT_CONTEXT_BLOCK;
typedef struct  _DEVICE_OBJECT {
    CSHORT Type;
    USHORT Size;
    LONG ReferenceCount;
    struct _DRIVER_OBJECT *DriverObject;
    struct _DEVICE_OBJECT *NextDevice;
    struct _DEVICE_OBJECT *AttachedDevice;
    struct _IRP *CurrentIrp;
    PIO_TIMER Timer;
    ULONG Flags;
    ULONG Characteristics;
    __volatile PVPB Vpb;
    PVOID DeviceExtension;
    DEVICE_TYPE DeviceType;
    CCHAR StackSize;
    union {
        LIST_ENTRY ListEntry;
        WAIT_CONTEXT_BLOCK Wcb;
    } Queue;
    ULONG AlignmentRequirement;
    KDEVICE_QUEUE DeviceQueue;
    KDPC Dpc;
    ULONG ActiveThreadCount;
    PSECURITY_DESCRIPTOR SecurityDescriptor;
    KEVENT DeviceLock;
    USHORT SectorSize;
    USHORT Spare1;
    struct _DEVOBJ_EXTENSION *DeviceObjectExtension;
    PVOID Reserved;
} DEVICE_OBJECT;
typedef struct _DEVICE_OBJECT *PDEVICE_OBJECT;
struct _DEVICE_OBJECT_POWER_EXTENSION;
typedef struct _DEVOBJ_EXTENSION {
    CSHORT Type;
    USHORT Size;
    PDEVICE_OBJECT DeviceObject;
    ULONG PowerFlags;
    struct _DEVICE_OBJECT_POWER_EXTENSION *Dope;
    ULONG ExtensionFlags;
    PVOID DeviceNode;
    PDEVICE_OBJECT AttachedTo;
    __volatile LONG StartIoCount;
    LONG StartIoKey;
    ULONG StartIoFlags;
    PVPB Vpb;
    PVOID DependencyNode;
    PVOID InterruptContext;
    __volatile PVOID VerifierContext;
} DEVOBJ_EXTENSION, *PDEVOBJ_EXTENSION;
typedef struct _DRIVER_EXTENSION {
    struct _DRIVER_OBJECT *DriverObject;
    PDRIVER_ADD_DEVICE AddDevice;
    ULONG Count;
    UNICODE_STRING ServiceKeyName;
} DRIVER_EXTENSION, *PDRIVER_EXTENSION;
typedef struct _DRIVER_OBJECT {
    CSHORT Type;
    CSHORT Size;
    PDEVICE_OBJECT DeviceObject;
    ULONG Flags;
    PVOID DriverStart;
    ULONG DriverSize;
    PVOID DriverSection;
    PDRIVER_EXTENSION DriverExtension;
    UNICODE_STRING DriverName;
    PUNICODE_STRING HardwareDatabase;
    PFAST_IO_DISPATCH FastIoDispatch;
    PDRIVER_INITIALIZE DriverInit;
    PDRIVER_STARTIO DriverStartIo;
    PDRIVER_UNLOAD DriverUnload;
    PDRIVER_DISPATCH MajorFunction[IRP_MJ_MAXIMUM_FUNCTION + 1];
} DRIVER_OBJECT;
typedef struct _DRIVER_OBJECT *PDRIVER_OBJECT;
typedef struct _SECTION_OBJECT_POINTERS {
    PVOID DataSectionObject;
    PVOID SharedCacheMap;
    PVOID ImageSectionObject;
} SECTION_OBJECT_POINTERS;
typedef SECTION_OBJECT_POINTERS *PSECTION_OBJECT_POINTERS;
typedef struct _IO_COMPLETION_CONTEXT {
    PVOID Port;
    PVOID Key;
} IO_COMPLETION_CONTEXT, *PIO_COMPLETION_CONTEXT;
typedef struct _FILE_OBJECT {
    CSHORT Type;
    CSHORT Size;
    PDEVICE_OBJECT DeviceObject;
    PVPB Vpb;
    PVOID FsContext;
    PVOID FsContext2;
    PSECTION_OBJECT_POINTERS SectionObjectPointer;
    PVOID PrivateCacheMap;
    NTSTATUS FinalStatus;
    struct _FILE_OBJECT *RelatedFileObject;
    BOOLEAN LockOperation;
    BOOLEAN DeletePending;
    BOOLEAN ReadAccess;
    BOOLEAN WriteAccess;
    BOOLEAN DeleteAccess;
    BOOLEAN SharedRead;
    BOOLEAN SharedWrite;
    BOOLEAN SharedDelete;
    ULONG Flags;
    UNICODE_STRING FileName;
    LARGE_INTEGER CurrentByteOffset;
    __volatile ULONG Waiters;
    __volatile ULONG Busy;
    PVOID LastLock;
    KEVENT Lock;
    KEVENT Event;
    __volatile PIO_COMPLETION_CONTEXT CompletionContext;
    KSPIN_LOCK IrpListLock;
    LIST_ENTRY IrpList;
    __volatile PVOID FileObjectExtension;
} FILE_OBJECT;
typedef struct _FILE_OBJECT *PFILE_OBJECT;
typedef struct  _IRP {
    CSHORT Type;
    USHORT Size;
    PMDL MdlAddress;
    ULONG Flags;
    union {
        struct _IRP *MasterIrp;
        __volatile LONG IrpCount;
        PVOID SystemBuffer;
    } AssociatedIrp;
    LIST_ENTRY ThreadListEntry;
    IO_STATUS_BLOCK IoStatus;
    KPROCESSOR_MODE RequestorMode;
    BOOLEAN PendingReturned;
    CHAR StackCount;
    CHAR CurrentLocation;
    BOOLEAN Cancel;
    KIRQL CancelIrql;
    CCHAR ApcEnvironment;
    UCHAR AllocationFlags;
    PIO_STATUS_BLOCK UserIosb;
    PKEVENT UserEvent;
    union {
        struct {
            union {
                PIO_APC_ROUTINE UserApcRoutine;
                PVOID IssuingProcess;
            };
            PVOID UserApcContext;
        } AsynchronousParameters;
        LARGE_INTEGER AllocationSize;
    } Overlay;
    __volatile PDRIVER_CANCEL CancelRoutine;
    PVOID UserBuffer;
    union {
        struct {
            union {
                KDEVICE_QUEUE_ENTRY DeviceQueueEntry;
                struct {
                    PVOID DriverContext[4];
                } ;
            } ;
            PETHREAD Thread;
            PCHAR AuxiliaryBuffer;
            struct {
                LIST_ENTRY ListEntry;
                union {
                    struct _IO_STACK_LOCATION *CurrentStackLocation;
                    ULONG PacketType;
                };
            };
            PFILE_OBJECT OriginalFileObject;
        } Overlay;
        KAPC Apc;
        PVOID CompletionKey;
    } Tail;
} IRP;
typedef IRP *PIRP;
_Function_class_(IO_COMPLETION_ROUTINE)
_IRQL_requires_same_
_IRQL_requires_max_(DISPATCH_LEVEL)
typedef
NTSTATUS
IO_COMPLETION_ROUTINE (
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ PIRP Irp,
    _In_reads_opt_(_Inexpressible_("varies")) PVOID Context
    );
typedef IO_COMPLETION_ROUTINE *PIO_COMPLETION_ROUTINE;
typedef enum _DEVICE_RELATION_TYPE {
    BusRelations,
    EjectionRelations,
    PowerRelations,
    RemovalRelations,
    TargetDeviceRelation,
    SingleBusRelations,
    TransportRelations
} DEVICE_RELATION_TYPE, *PDEVICE_RELATION_TYPE;
typedef struct _DEVICE_RELATIONS {
    ULONG Count;
    _Field_size_(Count) PDEVICE_OBJECT Objects[1];
} DEVICE_RELATIONS, *PDEVICE_RELATIONS;
typedef enum _DEVICE_USAGE_NOTIFICATION_TYPE {
    DeviceUsageTypeUndefined,
    DeviceUsageTypePaging,
    DeviceUsageTypeHibernation,
    DeviceUsageTypeDumpFile,
    DeviceUsageTypeBoot,
    DeviceUsageTypePostDisplay,
    DeviceUsageTypeGuestAssigned
} DEVICE_USAGE_NOTIFICATION_TYPE;
typedef struct _INTERFACE {
    USHORT Size;
    USHORT Version;
    PVOID Context;
    PINTERFACE_REFERENCE InterfaceReference;
    PINTERFACE_DEREFERENCE InterfaceDereference;
} INTERFACE, *PINTERFACE;
typedef _Struct_size_bytes_(Size) struct _DEVICE_CAPABILITIES {
    _Field_range_(==, sizeof(struct _DEVICE_CAPABILITIES)) USHORT Size;
    USHORT Version;
    ULONG DeviceD1:1;
    ULONG DeviceD2:1;
    ULONG LockSupported:1;
    ULONG EjectSupported:1;
    ULONG Removable:1;
    ULONG DockDevice:1;
    ULONG UniqueID:1;
    ULONG SilentInstall:1;
    ULONG RawDeviceOK:1;
    ULONG SurpriseRemovalOK:1;
    ULONG WakeFromD0:1;
    ULONG WakeFromD1:1;
    ULONG WakeFromD2:1;
    ULONG WakeFromD3:1;
    ULONG HardwareDisabled:1;
    ULONG NonDynamic:1;
    ULONG WarmEjectSupported:1;
    ULONG NoDisplayInUI:1;
    ULONG Reserved1:1;
    ULONG WakeFromInterrupt:1;
    ULONG SecureDevice:1;
    ULONG ChildOfVgaEnabledBridge:1;
    ULONG DecodeIoOnBoot:1;
    ULONG Reserved:9;
    ULONG Address;
    ULONG UINumber;
    DEVICE_POWER_STATE DeviceState[POWER_SYSTEM_MAXIMUM];
    _Field_range_(PowerSystemUnspecified, PowerSystemHibernate) SYSTEM_POWER_STATE SystemWake;
    _Field_range_(PowerDeviceUnspecified, PowerDeviceD3) DEVICE_POWER_STATE DeviceWake;
    ULONG D1Latency;
    ULONG D2Latency;
    ULONG D3Latency;
} DEVICE_CAPABILITIES, *PDEVICE_CAPABILITIES;
typedef struct _POWER_SEQUENCE {
    ULONG SequenceD1;
    ULONG SequenceD2;
    ULONG SequenceD3;
} POWER_SEQUENCE, *PPOWER_SEQUENCE;
typedef enum {
    BusQueryDeviceID = 0,
    BusQueryHardwareIDs = 1,
    BusQueryCompatibleIDs = 2,
    BusQueryInstanceID = 3,
    BusQueryDeviceSerialNumber = 4,
    BusQueryContainerID = 5
} BUS_QUERY_ID_TYPE, *PBUS_QUERY_ID_TYPE;
typedef ULONG PNP_DEVICE_STATE, *PPNP_DEVICE_STATE;
typedef enum {
    DeviceTextDescription = 0,
    DeviceTextLocationInformation = 1
} DEVICE_TEXT_TYPE, *PDEVICE_TEXT_TYPE;
typedef struct _IO_STACK_LOCATION {
    UCHAR MajorFunction;
    UCHAR MinorFunction;
    UCHAR Flags;
    UCHAR Control;
    union {
        struct {
            PIO_SECURITY_CONTEXT SecurityContext;
            ULONG Options;
            USHORT POINTER_ALIGNMENT FileAttributes;
            USHORT ShareAccess;
            ULONG POINTER_ALIGNMENT EaLength;
        } Create;
        struct {
            PIO_SECURITY_CONTEXT SecurityContext;
            ULONG Options;
            USHORT POINTER_ALIGNMENT Reserved;
            USHORT ShareAccess;
            PNAMED_PIPE_CREATE_PARAMETERS Parameters;
        } CreatePipe;
        struct {
            PIO_SECURITY_CONTEXT SecurityContext;
            ULONG Options;
            USHORT POINTER_ALIGNMENT Reserved;
            USHORT ShareAccess;
            PMAILSLOT_CREATE_PARAMETERS Parameters;
        } CreateMailslot;
        struct {
            ULONG Length;
            ULONG POINTER_ALIGNMENT Key;
            ULONG Flags;
            LARGE_INTEGER ByteOffset;
        } Read;
        struct {
            ULONG Length;
            ULONG POINTER_ALIGNMENT Key;
            ULONG Flags;
            LARGE_INTEGER ByteOffset;
        } Write;
        struct {
            ULONG Length;
            PUNICODE_STRING FileName;
            FILE_INFORMATION_CLASS FileInformationClass;
            ULONG POINTER_ALIGNMENT FileIndex;
        } QueryDirectory;
        struct {
            ULONG Length;
            ULONG POINTER_ALIGNMENT CompletionFilter;
        } NotifyDirectory;
        struct {
            ULONG Length;
            ULONG POINTER_ALIGNMENT CompletionFilter;
            DIRECTORY_NOTIFY_INFORMATION_CLASS POINTER_ALIGNMENT DirectoryNotifyInformationClass;
        } NotifyDirectoryEx;
        struct {
            ULONG Length;
            FILE_INFORMATION_CLASS POINTER_ALIGNMENT FileInformationClass;
        } QueryFile;
        struct {
            ULONG Length;
            FILE_INFORMATION_CLASS POINTER_ALIGNMENT FileInformationClass;
            PFILE_OBJECT FileObject;
            union {
                struct {
                    BOOLEAN ReplaceIfExists;
                    BOOLEAN AdvanceOnly;
                };
                ULONG ClusterCount;
                HANDLE DeleteHandle;
            };
        } SetFile;
        struct {
            ULONG Length;
            PVOID EaList;
            ULONG EaListLength;
            ULONG POINTER_ALIGNMENT EaIndex;
        } QueryEa;
        struct {
            ULONG Length;
        } SetEa;
        struct {
            ULONG Length;
            FS_INFORMATION_CLASS POINTER_ALIGNMENT FsInformationClass;
        } QueryVolume;
        struct {
            ULONG Length;
            FS_INFORMATION_CLASS POINTER_ALIGNMENT FsInformationClass;
        } SetVolume;
        struct {
            ULONG OutputBufferLength;
            ULONG POINTER_ALIGNMENT InputBufferLength;
            ULONG POINTER_ALIGNMENT FsControlCode;
            PVOID Type3InputBuffer;
        } FileSystemControl;
        struct {
            PLARGE_INTEGER Length;
            ULONG POINTER_ALIGNMENT Key;
            LARGE_INTEGER ByteOffset;
        } LockControl;
        struct {
            ULONG OutputBufferLength;
            ULONG POINTER_ALIGNMENT InputBufferLength;
            ULONG POINTER_ALIGNMENT IoControlCode;
            PVOID Type3InputBuffer;
        } DeviceIoControl;
        struct {
            SECURITY_INFORMATION SecurityInformation;
            ULONG POINTER_ALIGNMENT Length;
        } QuerySecurity;
        struct {
            SECURITY_INFORMATION SecurityInformation;
            PSECURITY_DESCRIPTOR SecurityDescriptor;
        } SetSecurity;
        struct {
            PVPB Vpb;
            PDEVICE_OBJECT DeviceObject;
        } MountVolume;
        struct {
            PVPB Vpb;
            PDEVICE_OBJECT DeviceObject;
        } VerifyVolume;
        struct {
            struct _SCSI_REQUEST_BLOCK *Srb;
        } Scsi;
        struct {
            ULONG Length;
            PSID StartSid;
            PFILE_GET_QUOTA_INFORMATION SidList;
            ULONG SidListLength;
        } QueryQuota;
        struct {
            ULONG Length;
        } SetQuota;
        struct {
            DEVICE_RELATION_TYPE Type;
        } QueryDeviceRelations;
        struct {
            CONST GUID *InterfaceType;
            USHORT Size;
            USHORT Version;
            PINTERFACE Interface;
            PVOID InterfaceSpecificData;
        } QueryInterface;
        struct {
            PDEVICE_CAPABILITIES Capabilities;
        } DeviceCapabilities;
        struct {
            PIO_RESOURCE_REQUIREMENTS_LIST IoResourceRequirementList;
        } FilterResourceRequirements;
        struct {
            ULONG WhichSpace;
            PVOID Buffer;
            ULONG Offset;
            ULONG POINTER_ALIGNMENT Length;
        } ReadWriteConfig;
        struct {
            BOOLEAN Lock;
        } SetLock;
        struct {
            BUS_QUERY_ID_TYPE IdType;
        } QueryId;
        struct {
            DEVICE_TEXT_TYPE DeviceTextType;
            LCID POINTER_ALIGNMENT LocaleId;
        } QueryDeviceText;
        struct {
            BOOLEAN InPath;
            BOOLEAN Reserved[3];
            DEVICE_USAGE_NOTIFICATION_TYPE POINTER_ALIGNMENT Type;
        } UsageNotification;
        struct {
            SYSTEM_POWER_STATE PowerState;
        } WaitWake;
        struct {
            PPOWER_SEQUENCE PowerSequence;
        } PowerSequence;
        struct {
            union {
                ULONG SystemContext;
                SYSTEM_POWER_STATE_CONTEXT SystemPowerStateContext;
            };
            POWER_STATE_TYPE POINTER_ALIGNMENT Type;
            POWER_STATE POINTER_ALIGNMENT State;
            POWER_ACTION POINTER_ALIGNMENT ShutdownType;
        } Power;
        struct {
            PCM_RESOURCE_LIST AllocatedResources;
            PCM_RESOURCE_LIST AllocatedResourcesTranslated;
        } StartDevice;
        struct {
            ULONG_PTR ProviderId;
            PVOID DataPath;
            ULONG BufferSize;
            PVOID Buffer;
        } WMI;
        struct {
            PVOID Argument1;
            PVOID Argument2;
            PVOID Argument3;
            PVOID Argument4;
        } Others;
    } Parameters;
    PDEVICE_OBJECT DeviceObject;
    PFILE_OBJECT FileObject;
    PIO_COMPLETION_ROUTINE CompletionRoutine;
    PVOID Context;
} IO_STACK_LOCATION, *PIO_STACK_LOCATION;
typedef struct _SHARE_ACCESS {
    ULONG OpenCount;
    ULONG Readers;
    ULONG Writers;
    ULONG Deleters;
    ULONG SharedRead;
    ULONG SharedWrite;
    ULONG SharedDelete;
} SHARE_ACCESS, *PSHARE_ACCESS;
typedef struct _LINK_SHARE_ACCESS {
    ULONG OpenCount;
    ULONG Deleters;
    ULONG SharedDelete;
} LINK_SHARE_ACCESS, *PLINK_SHARE_ACCESS;
_Acquires_lock_(_Global_cancel_spin_lock_)
_Requires_lock_not_held_(_Global_cancel_spin_lock_)
_IRQL_requires_max_(DISPATCH_LEVEL)
_IRQL_raises_(DISPATCH_LEVEL)
NTKERNELAPI
VOID
IoAcquireCancelSpinLock(
    _Out_ _At_(*Irql, _IRQL_saves_) PKIRQL Irql
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
_Ret_range_(<=, 0)
NTKERNELAPI
NTSTATUS
IoAllocateDriverObjectExtension(
    _In_ PDRIVER_OBJECT DriverObject,
    _In_ PVOID ClientIdentificationAddress,
    _In_ ULONG DriverObjectExtensionSize,
    _Post_ _At_(*DriverObjectExtension, _When_(return==0,
    __drv_aliasesMem __drv_allocatesMem(Mem) _Post_notnull_))
    _When_(return == 0, _Outptr_result_bytebuffer_(DriverObjectExtensionSize))
    PVOID *DriverObjectExtension
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
PVOID
IoAllocateErrorLogEntry(
    _In_ PVOID IoObject,
    _In_ UCHAR EntrySize
    );
_Must_inspect_result_
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
PIRP
IoAllocateIrp(
    _In_ CCHAR StackSize,
    _In_ BOOLEAN ChargeQuota
    );
_Must_inspect_result_
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
PIRP
IoAllocateIrpEx(
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ CCHAR StackSize,
    _In_ BOOLEAN ChargeQuota
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
PMDL
IoAllocateMdl(
    _In_opt_ __drv_aliasesMem PVOID VirtualAddress,
    _In_ ULONG Length,
    _In_ BOOLEAN SecondaryBuffer,
    _In_ BOOLEAN ChargeQuota,
    _Inout_opt_ PIRP Irp
    );
typedef enum _IO_PAGING_PRIORITY {
    IoPagingPriorityInvalid,
    IoPagingPriorityNormal,
    IoPagingPriorityHigh,
    IoPagingPriorityReserved1,
    IoPagingPriorityReserved2
} IO_PAGING_PRIORITY;
_IRQL_requires_max_(APC_LEVEL)
_Ret_range_(<=, 0)
NTKERNELAPI
NTSTATUS
IoAttachDevice(
    _In_ _When_(return==0, __drv_aliasesMem)
    PDEVICE_OBJECT SourceDevice,
    _In_ PUNICODE_STRING TargetDevice,
    _Out_ PDEVICE_OBJECT *AttachedDevice
    );
_Must_inspect_result_
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
PDEVICE_OBJECT
IoAttachDeviceToDeviceStack(
    _In_ _When_(return!=0, __drv_aliasesMem)
    PDEVICE_OBJECT SourceDevice,
    _In_ PDEVICE_OBJECT TargetDevice
    );
_Must_inspect_result_
__drv_aliasesMem
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
PIRP
IoBuildAsynchronousFsdRequest(
    _In_ ULONG MajorFunction,
    _In_ PDEVICE_OBJECT DeviceObject,
    _Inout_opt_ PVOID Buffer,
    _In_opt_ ULONG Length,
    _In_opt_ PLARGE_INTEGER StartingOffset,
    _In_opt_ PIO_STATUS_BLOCK IoStatusBlock
    );
_Must_inspect_result_
__drv_aliasesMem
_IRQL_requires_max_(PASSIVE_LEVEL)
NTKERNELAPI
PIRP
IoBuildDeviceIoControlRequest(
    _In_ ULONG IoControlCode,
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_opt_ PVOID InputBuffer,
    _In_ ULONG InputBufferLength,
    _Out_opt_ PVOID OutputBuffer,
    _In_ ULONG OutputBufferLength,
    _In_ BOOLEAN InternalDeviceIoControl,
    _In_opt_ PKEVENT Event,
    _Out_ PIO_STATUS_BLOCK IoStatusBlock
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
VOID
IoBuildPartialMdl(
    _In_ PMDL SourceMdl,
    _Inout_ PMDL TargetMdl,
    _Inout_ PVOID VirtualAddress,
    _In_ ULONG Length
    );
typedef struct _BOOTDISK_INFORMATION {
    LONGLONG BootPartitionOffset;
    LONGLONG SystemPartitionOffset;
    ULONG BootDeviceSignature;
    ULONG SystemDeviceSignature;
} BOOTDISK_INFORMATION, *PBOOTDISK_INFORMATION;
typedef struct _BOOTDISK_INFORMATION_EX {
    LONGLONG BootPartitionOffset;
    LONGLONG SystemPartitionOffset;
    ULONG BootDeviceSignature;
    ULONG SystemDeviceSignature;
    GUID BootDeviceGuid;
    GUID SystemDeviceGuid;
    BOOLEAN BootDeviceIsGpt;
    BOOLEAN SystemDeviceIsGpt;
} BOOTDISK_INFORMATION_EX, *PBOOTDISK_INFORMATION_EX;
typedef struct _LOADER_PARTITION_INFORMATION_EX {
    ULONG PartitionStyle;
    ULONG PartitionNumber;
    union {
        ULONG Signature;
        GUID DeviceId;
    };
    ULONG Flags;
} LOADER_PARTITION_INFORMATION_EX, *PLOADER_PARTITION_INFORMATION_EX;
typedef struct _BOOTDISK_INFORMATION_LITE {
    ULONG NumberEntries;
    LOADER_PARTITION_INFORMATION_EX Entries[1];
} BOOTDISK_INFORMATION_LITE, *PBOOTDISK_INFORMATION_LITE;
NTKERNELAPI
NTSTATUS
IoGetBootDiskInformation(
    _Inout_ PBOOTDISK_INFORMATION BootDiskInformation,
    _In_ ULONG Size
    );
NTKERNELAPI
NTSTATUS
IoGetBootDiskInformationLite(
    _Outptr_ PBOOTDISK_INFORMATION_LITE *BootDiskInformation
    );
_When_(MajorFunction == IRP_MJ_WRITE, _At_(Buffer, _In_))
_When_(MajorFunction == IRP_MJ_READ, _At_(Buffer, _Out_))
_When_(MajorFunction != IRP_MJ_READ && MajorFunction != IRP_MJ_WRITE, _At_(Buffer, _Pre_null_))
_Must_inspect_result_
__drv_aliasesMem
_IRQL_requires_max_(PASSIVE_LEVEL)
NTKERNELAPI
PIRP
IoBuildSynchronousFsdRequest(
    _In_ ULONG MajorFunction,
    _In_ PDEVICE_OBJECT DeviceObject,
    PVOID Buffer,
    _In_ ULONG Length,
    _In_opt_ PLARGE_INTEGER StartingOffset,
    _In_ PKEVENT Event,
    _Out_ PIO_STATUS_BLOCK IoStatusBlock
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
_Success_(TRUE)
NTKERNELAPI
NTSTATUS
FASTCALL
IofCallDriver(
    _In_ PDEVICE_OBJECT DeviceObject,
    _Inout_ __drv_aliasesMem PIRP Irp
    );
        IofCallDriver(a,b)
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
BOOLEAN
IoCancelIrp(
    _In_ PIRP Irp
    );
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
NTSTATUS
IoCheckShareAccess(
    _In_ ACCESS_MASK DesiredAccess,
    _In_ ULONG DesiredShareAccess,
    _Inout_ PFILE_OBJECT FileObject,
    _Inout_ PSHARE_ACCESS ShareAccess,
    _In_ BOOLEAN Update
    );
NTKERNELAPI
NTSTATUS
IoCheckShareAccessEx(
    _In_ ACCESS_MASK DesiredAccess,
    _In_ ULONG DesiredShareAccess,
    _Inout_ PFILE_OBJECT FileObject,
    _Inout_ PSHARE_ACCESS ShareAccess,
    _In_ BOOLEAN Update,
    _In_opt_ PBOOLEAN WritePermission
    );
NTKERNELAPI
NTSTATUS
IoCheckLinkShareAccess(
    _In_ ACCESS_MASK DesiredAccess,
    _In_ ULONG DesiredShareAccess,
    _Inout_opt_ PFILE_OBJECT FileObject,
    _Inout_opt_ PSHARE_ACCESS ShareAccess,
    _Inout_opt_ PLINK_SHARE_ACCESS LinkShareAccess,
    _In_ ULONG IoShareAccessFlags
    );
typedef enum _IO_COMPLETION_ROUTINE_RESULT {
    ContinueCompletion = STATUS_CONTINUE_COMPLETION,
    StopCompletion = STATUS_MORE_PROCESSING_REQUIRED
} IO_COMPLETION_ROUTINE_RESULT, *PIO_COMPLETION_ROUTINE_RESULT;
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
VOID
FASTCALL
IofCompleteRequest(
    _In_ PIRP Irp,
    _In_ CCHAR PriorityBoost
    );
        IofCompleteRequest(a,b)
_IRQL_requires_max_(PASSIVE_LEVEL)
NTKERNELAPI
NTSTATUS
IoConnectInterrupt(
    _Out_ PKINTERRUPT *InterruptObject,
    _In_ PKSERVICE_ROUTINE ServiceRoutine,
    _In_opt_ PVOID ServiceContext,
    _In_opt_ PKSPIN_LOCK SpinLock,
    _In_ ULONG Vector,
    _In_ KIRQL Irql,
    _In_ KIRQL SynchronizeIrql,
    _In_ KINTERRUPT_MODE InterruptMode,
    _In_ BOOLEAN ShareVector,
    _In_ KAFFINITY ProcessorEnableMask,
    _In_ BOOLEAN FloatingSave
    );
typedef struct _IO_INTERRUPT_MESSAGE_INFO_ENTRY {
    PHYSICAL_ADDRESS MessageAddress;
    KAFFINITY TargetProcessorSet;
    PKINTERRUPT InterruptObject;
    ULONG MessageData;
    ULONG Vector;
    KIRQL Irql;
    KINTERRUPT_MODE Mode;
    KINTERRUPT_POLARITY Polarity;
} IO_INTERRUPT_MESSAGE_INFO_ENTRY, *PIO_INTERRUPT_MESSAGE_INFO_ENTRY;
typedef struct _IO_INTERRUPT_MESSAGE_INFO {
    KIRQL UnifiedIrql;
    ULONG MessageCount;
    IO_INTERRUPT_MESSAGE_INFO_ENTRY MessageInfo[1];
} IO_INTERRUPT_MESSAGE_INFO, *PIO_INTERRUPT_MESSAGE_INFO;
typedef struct _IO_CONNECT_INTERRUPT_FULLY_SPECIFIED_PARAMETERS {
    _In_ PDEVICE_OBJECT PhysicalDeviceObject;
    _Out_ PKINTERRUPT *InterruptObject;
    _In_ PKSERVICE_ROUTINE ServiceRoutine;
    _In_ PVOID ServiceContext;
    _In_opt_ PKSPIN_LOCK SpinLock;
    _In_ KIRQL SynchronizeIrql;
    _In_ BOOLEAN FloatingSave;
    _In_ BOOLEAN ShareVector;
    _In_ ULONG Vector;
    _In_ KIRQL Irql;
    _In_ KINTERRUPT_MODE InterruptMode;
    _In_ KAFFINITY ProcessorEnableMask;
    _In_ USHORT Group;
} IO_CONNECT_INTERRUPT_FULLY_SPECIFIED_PARAMETERS,
  *PIO_CONNECT_INTERRUPT_FULLY_SPECIFIED_PARAMETERS;
typedef struct _IO_CONNECT_INTERRUPT_LINE_BASED_PARAMETERS {
    _In_ PDEVICE_OBJECT PhysicalDeviceObject;
    _Out_ PKINTERRUPT *InterruptObject;
    _In_ PKSERVICE_ROUTINE ServiceRoutine;
    _In_ PVOID ServiceContext;
    _In_opt_ PKSPIN_LOCK SpinLock;
    _In_opt_ KIRQL SynchronizeIrql;
    _In_ BOOLEAN FloatingSave;
} IO_CONNECT_INTERRUPT_LINE_BASED_PARAMETERS,
  *PIO_CONNECT_INTERRUPT_LINE_BASED_PARAMETERS;
typedef struct _IO_CONNECT_INTERRUPT_MESSAGE_BASED_PARAMETERS {
    _In_ PDEVICE_OBJECT PhysicalDeviceObject;
    union {
        _Out_ PVOID *Generic;
        _Out_ PIO_INTERRUPT_MESSAGE_INFO *InterruptMessageTable;
        _Out_ PKINTERRUPT *InterruptObject;
    } ConnectionContext;
    _In_ PKMESSAGE_SERVICE_ROUTINE MessageServiceRoutine;
    _In_ PVOID ServiceContext;
    _In_opt_ PKSPIN_LOCK SpinLock;
    _In_opt_ KIRQL SynchronizeIrql;
    _In_ BOOLEAN FloatingSave;
    _In_opt_ PKSERVICE_ROUTINE FallBackServiceRoutine;
} IO_CONNECT_INTERRUPT_MESSAGE_BASED_PARAMETERS,
  *PIO_CONNECT_INTERRUPT_MESSAGE_BASED_PARAMETERS;
typedef struct _IO_CONNECT_INTERRUPT_PARAMETERS {
    _Inout_ ULONG Version;
    union {
        IO_CONNECT_INTERRUPT_FULLY_SPECIFIED_PARAMETERS FullySpecified;
        IO_CONNECT_INTERRUPT_LINE_BASED_PARAMETERS LineBased;
        IO_CONNECT_INTERRUPT_MESSAGE_BASED_PARAMETERS MessageBased;
    };
} IO_CONNECT_INTERRUPT_PARAMETERS, *PIO_CONNECT_INTERRUPT_PARAMETERS;
NTKERNELAPI
NTSTATUS
IoConnectInterruptEx (
    _Inout_ PIO_CONNECT_INTERRUPT_PARAMETERS Parameters
    );
_IRQL_requires_max_(APC_LEVEL)
_Ret_range_(<=, 0)
NTKERNELAPI
NTSTATUS
IoCreateDevice(
    _In_ PDRIVER_OBJECT DriverObject,
    _In_ ULONG DeviceExtensionSize,
    _In_opt_ PUNICODE_STRING DeviceName,
    _In_ DEVICE_TYPE DeviceType,
    _In_ ULONG DeviceCharacteristics,
    _In_ BOOLEAN Exclusive,
    _Outptr_result_nullonfailure_
    _At_(*DeviceObject,
        __drv_allocatesMem(Mem)
        _When_((((_In_function_class_(DRIVER_INITIALIZE))
               ||(_In_function_class_(DRIVER_DISPATCH)))),
             __drv_aliasesMem))
    PDEVICE_OBJECT *DeviceObject
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
__drv_preferredFunction("RtlIsNtDdiVersionAvailable","Preferred")
NTKERNELAPI
BOOLEAN
IoIsWdmVersionAvailable(
    _When_(MajorVersion!=1&&MajorVersion!=6,
    _In_ __drv_reportError("MajorVersion must be 1 or 6")) UCHAR MajorVersion,
    _In_ _When_(MinorVersion!=0 && MinorVersion!=5 && MinorVersion!=16
                    && MinorVersion!=32 && MinorVersion!=48,
    __drv_reportError("MinorVersion must be 0, 0x5, 0x10, 0x20, or 0x30"))
    UCHAR MinorVersion
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTKERNELAPI
NTSTATUS
IoCreateFile(
    _Out_ PHANDLE FileHandle,
    _In_ ACCESS_MASK DesiredAccess,
    _In_ POBJECT_ATTRIBUTES ObjectAttributes,
    _Out_ PIO_STATUS_BLOCK IoStatusBlock,
    _In_opt_ PLARGE_INTEGER AllocationSize,
    _In_ ULONG FileAttributes,
    _In_ ULONG ShareAccess,
    _In_ ULONG Disposition,
    _In_ ULONG CreateOptions,
    _In_opt_ PVOID EaBuffer,
    _In_ ULONG EaLength,
    _In_ CREATE_FILE_TYPE CreateFileType,
    _In_opt_ PVOID InternalParameters,
    _In_ ULONG Options
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTKERNELAPI
PKEVENT
IoCreateNotificationEvent(
    _In_ PUNICODE_STRING EventName,
    _Out_ PHANDLE EventHandle
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTKERNELAPI
NTSTATUS
IoCreateSymbolicLink(
    _In_ PUNICODE_STRING SymbolicLinkName,
    _In_ PUNICODE_STRING DeviceName
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTKERNELAPI
PKEVENT
IoCreateSynchronizationEvent(
    _In_ PUNICODE_STRING EventName,
    _Out_ PHANDLE EventHandle
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTKERNELAPI
NTSTATUS
IoCreateUnprotectedSymbolicLink(
    _In_ PUNICODE_STRING SymbolicLinkName,
    _In_ PUNICODE_STRING DeviceName
    );
_IRQL_requires_max_(APC_LEVEL)
_Kernel_clear_do_init_(__yes)
NTKERNELAPI
VOID
IoDeleteDevice(
    _In_ __drv_freesMem(Mem) PDEVICE_OBJECT DeviceObject
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTKERNELAPI
NTSTATUS
IoDeleteSymbolicLink(
    _In_ PUNICODE_STRING SymbolicLinkName
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTKERNELAPI
VOID
IoDetachDevice(
    _Inout_ PDEVICE_OBJECT TargetDevice
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTKERNELAPI
VOID
IoDisconnectInterrupt(
    _In_ PKINTERRUPT InterruptObject
    );
typedef struct _IO_DISCONNECT_INTERRUPT_PARAMETERS {
    _In_ ULONG Version;
    union {
        _In_ PVOID Generic;
        _In_ PKINTERRUPT InterruptObject;
        _In_ PIO_INTERRUPT_MESSAGE_INFO InterruptMessageTable;
    } ConnectionContext;
} IO_DISCONNECT_INTERRUPT_PARAMETERS, *PIO_DISCONNECT_INTERRUPT_PARAMETERS;
NTKERNELAPI
VOID
IoDisconnectInterruptEx (
    _In_ PIO_DISCONNECT_INTERRUPT_PARAMETERS Parameters
    );
typedef struct _IO_REPORT_INTERRUPT_ACTIVE_STATE_PARAMETERS {
    _In_ ULONG Version;
    union {
        _In_ PVOID Generic;
        _In_ PKINTERRUPT InterruptObject;
        _In_ PIO_INTERRUPT_MESSAGE_INFO InterruptMessageTable;
    } ConnectionContext;
} IO_REPORT_INTERRUPT_ACTIVE_STATE_PARAMETERS,
  *PIO_REPORT_INTERRUPT_ACTIVE_STATE_PARAMETERS;
NTKERNELAPI
VOID
IoReportInterruptActive (
    _In_ PIO_REPORT_INTERRUPT_ACTIVE_STATE_PARAMETERS Parameters
    );
VOID
IoReportInterruptInactive (
    _In_ PIO_REPORT_INTERRUPT_ACTIVE_STATE_PARAMETERS Parameters
    );
NTKERNELAPI
NTSTATUS
IoGetAffinityInterrupt (
    _In_ PKINTERRUPT InterruptObject,
    _Out_ PGROUP_AFFINITY GroupAffinity
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
VOID
IoFreeIrp(
    _In_ __drv_freesMem(Mem) PIRP Irp
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
VOID
IoFreeMdl(
    PMDL Mdl
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
PDEVICE_OBJECT
IoGetAttachedDeviceReference(
    _In_ PDEVICE_OBJECT DeviceObject
    );
FORCEINLINE
__drv_aliasesMem
PIO_STACK_LOCATION
IoGetCurrentIrpStackLocation(
    _In_ PIRP Irp
)
{
    NT_ASSERT(Irp->CurrentLocation <= Irp->StackCount + 1);
    return Irp->Tail.Overlay.CurrentStackLocation;
}
__drv_aliasesMem
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
PVOID
IoGetDriverObjectExtension(
    _In_ PDRIVER_OBJECT DriverObject,
    _In_ PVOID ClientIdentificationAddress
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
PEPROCESS
IoGetCurrentProcess(
    VOID
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTKERNELAPI
NTSTATUS
IoGetDeviceObjectPointer(
    _In_ PUNICODE_STRING ObjectName,
    _In_ ACCESS_MASK DesiredAccess,
    _Out_ PFILE_OBJECT *FileObject,
    _Out_ PDEVICE_OBJECT *DeviceObject
    );
_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTKERNELAPI
struct _DMA_ADAPTER *
IoGetDmaAdapter(
    _In_opt_ PDEVICE_OBJECT PhysicalDeviceObject,
    _In_ struct _DEVICE_DESCRIPTION *DeviceDescription,
    _Out_ _When_(return!=0, _Kernel_IoGetDmaAdapter_ _At_(*NumberOfMapRegisters, _Must_inspect_result_))
    PULONG NumberOfMapRegisters
    );
typedef struct _DMA_IOMMU_INTERFACE DMA_IOMMU_INTERFACE, *PDMA_IOMMU_INTERFACE;
_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTKERNELAPI
NTSTATUS
IoGetIommuInterface (
    _In_ ULONG Version,
    _Out_ PDMA_IOMMU_INTERFACE InterfaceOut
    );
NTKERNELAPI
BOOLEAN
IoForwardIrpSynchronously(
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ PIRP Irp
    );
NTKERNELAPI
NTSTATUS
IoSynchronousCallDriver(
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ PIRP Irp
    );
    ( ControlCode >> 2) & 0x00000FFF )
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
PVOID
IoGetInitialStack(
    VOID
    );
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
VOID
IoGetStackLimits (
    _Out_ PULONG_PTR LowLimit,
    _Out_ PULONG_PTR HighLimit
    );
LOGICAL
IoWithinStackLimits(
    _In_ ULONG_PTR RegionStart,
    _In_ SIZE_T RegionSize
    );
_IRQL_requires_max_(APC_LEVEL)
FORCEINLINE
ULONG_PTR
IoGetRemainingStackSize (
    VOID
    )
{
    ULONG_PTR Top;
    ULONG_PTR Bottom;
    IoGetStackLimits( &Bottom, &Top );
    return((ULONG_PTR)(&Top) - Bottom );
}
FORCEINLINE
__drv_aliasesMem
PIO_STACK_LOCATION
IoGetNextIrpStackLocation(
    _In_ PIRP Irp
    )
{
    NT_ASSERT(Irp->CurrentLocation > 0);
    return ((Irp)->Tail.Overlay.CurrentStackLocation - 1 );
}
NTKERNELAPI
PDEVICE_OBJECT
IoGetRelatedDeviceObject(
    _In_ PFILE_OBJECT FileObject
    );
NTKERNELAPI
PIRP
IoGetTopLevelIrp(
    VOID
    );
VOID
FORCEINLINE
IoInitializeDpcRequest(
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ PIO_DPC_ROUTINE DpcRoutine
    )
{
    KeInitializeDpc( &DeviceObject->Dpc,
#pragma warning (suppress: 28024)
                     (PKDEFERRED_ROUTINE) DpcRoutine,
                     DeviceObject );
}
VOID
FORCEINLINE
IoInitializeThreadedDpcRequest(
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ PIO_DPC_ROUTINE DpcRoutine
    )
{
#pragma warning (suppress: 28128)
    KeInitializeThreadedDpc( &DeviceObject->Dpc,
#pragma warning (suppress: 28165 28024)
                             (PKDEFERRED_ROUTINE) DpcRoutine,
                             DeviceObject );
}
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
VOID
IoInitializeIrp(
    _Inout_ PIRP Irp,
    _In_ USHORT PacketSize,
    _In_ CCHAR StackSize
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
VOID
IoCleanupIrp(
    _Inout_ PIRP Irp
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
VOID
IoInitializeIrpEx(
    _Inout_ PIRP Irp,
    _In_opt_ PDEVICE_OBJECT DeviceObject,
    _In_ USHORT PacketSize,
    _In_ CCHAR StackSize
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTKERNELAPI
NTSTATUS
IoInitializeTimer(
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ PIO_TIMER_ROUTINE TimerRoutine,
    _In_opt_ __drv_aliasesMem PVOID Context
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
VOID
IoReuseIrp(
    _Inout_ PIRP Irp,
    _In_ NTSTATUS Iostatus
    );
    (((Status) == STATUS_DEVICE_NOT_READY) || \
     ((Status) == STATUS_IO_TIMEOUT) || \
     ((Status) == STATUS_MEDIA_WRITE_PROTECTED) || \
     ((Status) == STATUS_NO_MEDIA_IN_DEVICE) || \
     ((Status) == STATUS_VERIFY_REQUIRED) || \
     ((Status) == STATUS_UNRECOGNIZED_MEDIA) || \
     ((Status) == STATUS_WRONG_VOLUME)))
FORCEINLINE
VOID
IoMarkIrpPending(
    _Inout_ PIRP Irp
)
{
    IoGetCurrentIrpStackLocation( (Irp) )->Control |= SL_PENDING_RETURNED;
}
_IRQL_requires_max_(PASSIVE_LEVEL)
NTKERNELAPI
NTSTATUS
IoRegisterShutdownNotification(
    _In_ PDEVICE_OBJECT DeviceObject
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTKERNELAPI
NTSTATUS
IoRegisterLastChanceShutdownNotification(
    _In_ PDEVICE_OBJECT DeviceObject
    );
_Requires_lock_held_(_Global_cancel_spin_lock_)
_Releases_lock_(_Global_cancel_spin_lock_)
_IRQL_requires_max_(DISPATCH_LEVEL)
_IRQL_requires_min_(DISPATCH_LEVEL)
NTKERNELAPI
VOID
IoReleaseCancelSpinLock(
    _In_ _IRQL_restores_ _IRQL_uses_cancel_ KIRQL Irql
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTKERNELAPI
VOID
IoRemoveShareAccess(
    _In_ PFILE_OBJECT FileObject,
    _Inout_ PSHARE_ACCESS ShareAccess
    );
NTKERNELAPI
VOID
IoRemoveLinkShareAccess(
    _In_ PFILE_OBJECT FileObject,
    _Inout_ PSHARE_ACCESS ShareAccess,
    _Inout_opt_ PLINK_SHARE_ACCESS LinkShareAccess
    );
NTKERNELAPI
VOID
IoRemoveLinkShareAccessEx(
    _In_ PFILE_OBJECT FileObject,
    _Inout_ PSHARE_ACCESS ShareAccess,
    _Inout_opt_ PLINK_SHARE_ACCESS LinkShareAccess,
    _In_ ULONG IoShareAccessFlags
    );
FORCEINLINE
VOID
IoRequestDpc(
    _Inout_ PDEVICE_OBJECT DeviceObject,
    _In_opt_ PIRP Irp,
    _In_opt_ __drv_aliasesMem PVOID Context
    )
{
    KeInsertQueueDpc( &DeviceObject->Dpc, Irp, Context );
}
_IRQL_requires_max_(DISPATCH_LEVEL)
_Ret_maybenull_
FORCEINLINE
PDRIVER_CANCEL
IoSetCancelRoutine(
    _Inout_ PIRP Irp,
    _In_opt_ PDRIVER_CANCEL CancelRoutine
    )
{
    return (PDRIVER_CANCEL)(ULONG_PTR) InterlockedExchangePointer((PVOID *)&(Irp)->CancelRoutine, (PVOID)(ULONG_PTR)(CancelRoutine) );
}
_IRQL_requires_max_(DISPATCH_LEVEL)
FORCEINLINE
VOID
IoSetCompletionRoutine(
    _In_ PIRP Irp,
    _In_opt_ PIO_COMPLETION_ROUTINE CompletionRoutine,
    _In_opt_ __drv_aliasesMem PVOID Context,
    _In_ BOOLEAN InvokeOnSuccess,
    _In_ BOOLEAN InvokeOnError,
    _In_ BOOLEAN InvokeOnCancel
    )
{
    PIO_STACK_LOCATION irpSp;
    NT_ASSERT( (InvokeOnSuccess || InvokeOnError || InvokeOnCancel) ? (CompletionRoutine != NULL) : TRUE );
    irpSp = IoGetNextIrpStackLocation(Irp);
    irpSp->CompletionRoutine = CompletionRoutine;
    irpSp->Context = Context;
    irpSp->Control = 0;
    if (InvokeOnSuccess) {
        irpSp->Control = SL_INVOKE_ON_SUCCESS;
    }
    if (InvokeOnError) {
        irpSp->Control |= SL_INVOKE_ON_ERROR;
    }
    if (InvokeOnCancel) {
        irpSp->Control |= SL_INVOKE_ON_CANCEL;
    }
}
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
_Must_inspect_result_
NTSTATUS
IoSetCompletionRoutineEx(
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ PIRP Irp,
    _In_ PIO_COMPLETION_ROUTINE CompletionRoutine,
    _In_opt_ PVOID Context,
    _In_ BOOLEAN InvokeOnSuccess,
    _In_ BOOLEAN InvokeOnError,
    _In_ BOOLEAN InvokeOnCancel
    );
FORCEINLINE
VOID
IoSetNextIrpStackLocation (
   _Inout_ PIRP Irp
    )
{
    NT_ASSERT(Irp->CurrentLocation > 0);
    Irp->CurrentLocation--;
    Irp->Tail.Overlay.CurrentStackLocation--;
}
FORCEINLINE
VOID
IoCopyCurrentIrpStackLocationToNext(
    _Inout_ PIRP Irp
)
{
    PIO_STACK_LOCATION irpSp;
    PIO_STACK_LOCATION nextIrpSp;
    irpSp = IoGetCurrentIrpStackLocation(Irp);
    nextIrpSp = IoGetNextIrpStackLocation(Irp);
    RtlCopyMemory( nextIrpSp, irpSp, FIELD_OFFSET(IO_STACK_LOCATION, CompletionRoutine));
    nextIrpSp->Control = 0;
}
FORCEINLINE
VOID
IoSkipCurrentIrpStackLocation (
    _Inout_ PIRP Irp
)
{
    NT_ASSERT(Irp->CurrentLocation <= Irp->StackCount);
    Irp->CurrentLocation++;
    Irp->Tail.Overlay.CurrentStackLocation++;
}
NTKERNELAPI
VOID
IoSetShareAccess(
    _In_ ACCESS_MASK DesiredAccess,
    _In_ ULONG DesiredShareAccess,
    _Inout_ PFILE_OBJECT FileObject,
    _Out_ PSHARE_ACCESS ShareAccess
    );
NTKERNELAPI
VOID
IoSetShareAccessEx(
    _In_ ACCESS_MASK DesiredAccess,
    _In_ ULONG DesiredShareAccess,
    _Inout_ PFILE_OBJECT FileObject,
    _Out_ PSHARE_ACCESS ShareAccess,
    _In_opt_ PBOOLEAN WritePermission
    );
NTKERNELAPI
VOID
IoSetLinkShareAccess(
    _In_ ACCESS_MASK DesiredAccess,
    _In_ ULONG DesiredShareAccess,
    _Inout_ PFILE_OBJECT FileObject,
    _Out_ PSHARE_ACCESS ShareAccess,
    _Out_opt_ PLINK_SHARE_ACCESS LinkShareAccess,
    _In_ ULONG IoShareAccessFlags
    );
NTKERNELAPI
VOID
IoSetTopLevelIrp(
    _In_opt_ PIRP Irp
    );
typedef struct _IO_REMOVE_LOCK_TRACKING_BLOCK * PIO_REMOVE_LOCK_TRACKING_BLOCK;
typedef struct _IO_REMOVE_LOCK_COMMON_BLOCK {
    BOOLEAN Removed;
    BOOLEAN Reserved [3];
    __volatile LONG IoCount;
    KEVENT RemoveEvent;
} IO_REMOVE_LOCK_COMMON_BLOCK;
typedef struct _IO_REMOVE_LOCK_DBG_BLOCK {
    LONG Signature;
    ULONG HighWatermark;
    LONGLONG MaxLockedTicks;
    LONG AllocateTag;
    LIST_ENTRY LockList;
    KSPIN_LOCK Spin;
    __volatile LONG LowMemoryCount;
    ULONG Reserved1[4];
    PVOID Reserved2;
    PIO_REMOVE_LOCK_TRACKING_BLOCK Blocks;
} IO_REMOVE_LOCK_DBG_BLOCK;
typedef struct _IO_REMOVE_LOCK {
    IO_REMOVE_LOCK_COMMON_BLOCK Common;
} IO_REMOVE_LOCK, *PIO_REMOVE_LOCK;
        IoInitializeRemoveLockEx (Lock, Tag, Maxmin, HighWater, sizeof (IO_REMOVE_LOCK))
_IRQL_requires_max_(PASSIVE_LEVEL)
NTKERNELAPI
VOID
NTAPI
IoInitializeRemoveLockEx(
    _Out_ PIO_REMOVE_LOCK Lock,
    _In_ ULONG AllocateTag,
    _In_ ULONG MaxLockedMinutes,
    _In_ ULONG HighWatermark,
    _In_ ULONG RemlockSize
    );
        IoAcquireRemoveLockEx(RemoveLock, Tag, "", 1, sizeof (IO_REMOVE_LOCK))
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
NTSTATUS
NTAPI
IoAcquireRemoveLockEx (
    _Inout_ PIO_REMOVE_LOCK RemoveLock,
    _In_opt_ PVOID Tag,
    _In_ PCSTR File,
    _In_ ULONG Line,
    _In_ ULONG RemlockSize
    );
        IoReleaseRemoveLockEx(RemoveLock, Tag, sizeof (IO_REMOVE_LOCK))
NTKERNELAPI
VOID
NTAPI
IoReleaseRemoveLockEx(
    _Inout_ PIO_REMOVE_LOCK RemoveLock,
    _In_opt_ PVOID Tag,
    _In_ ULONG RemlockSize
    );
        IoReleaseRemoveLockAndWaitEx(RemoveLock, Tag, sizeof (IO_REMOVE_LOCK))
_IRQL_requires_max_(PASSIVE_LEVEL)
NTKERNELAPI
VOID
NTAPI
IoReleaseRemoveLockAndWaitEx(
    _Inout_ PIO_REMOVE_LOCK RemoveLock,
    _In_opt_ PVOID Tag,
    _In_ ULONG RemlockSize
    );
    ((USHORT) (sizeof( IRP ) + ((StackSize) * (sizeof( IO_STACK_LOCATION )))))
_IRQL_requires_max_(DISPATCH_LEVEL) _IRQL_requires_min_(DISPATCH_LEVEL)
NTKERNELAPI
USHORT
IoSizeOfIrpEx(
    _In_opt_ PDEVICE_OBJECT DeviceObject,
    _In_ CCHAR StackSize
    );
_IRQL_requires_max_(DISPATCH_LEVEL) _IRQL_requires_min_(DISPATCH_LEVEL)
NTKERNELAPI
VOID
IoStartNextPacket(
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ BOOLEAN Cancelable
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
VOID
IoStartNextPacketByKey(
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ BOOLEAN Cancelable,
    _In_ ULONG Key
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
VOID
IoStartPacket(
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ PIRP Irp,
    _In_opt_ PULONG Key,
    _In_opt_ PDRIVER_CANCEL CancelFunction
    );
VOID
IoSetStartIoAttributes(
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ BOOLEAN DeferredStartIo,
    _In_ BOOLEAN NonCancelable
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
VOID
IoStartTimer(
    _In_ PDEVICE_OBJECT DeviceObject
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
VOID
IoStopTimer(
    _In_ PDEVICE_OBJECT DeviceObject
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTKERNELAPI
VOID
IoUnregisterShutdownNotification(
    _In_ PDEVICE_OBJECT DeviceObject
    );
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
VOID
IoUpdateShareAccess(
    _In_ PFILE_OBJECT FileObject,
    _Inout_ PSHARE_ACCESS ShareAccess
    );
NTKERNELAPI
VOID
IoUpdateLinkShareAccess(
    _In_ PFILE_OBJECT FileObject,
    _Inout_ PSHARE_ACCESS ShareAccess,
    _Inout_opt_ PLINK_SHARE_ACCESS LinkShareAccess
    );
NTKERNELAPI
VOID
IoUpdateLinkShareAccessEx(
    _In_ PFILE_OBJECT FileObject,
    _Inout_ PSHARE_ACCESS ShareAccess,
    _Inout_opt_ PLINK_SHARE_ACCESS LinkShareAccess,
    _In_ ULONG IoShareAccessFlags
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
VOID
IoWriteErrorLogEntry(
    _In_ PVOID ElEntry
    );
_IRQL_requires_same_
_IRQL_requires_(PASSIVE_LEVEL)
_Must_inspect_result_
NTSTATUS
IoCreateSystemThread(
    _Inout_ PVOID IoObject,
    _Out_ PHANDLE ThreadHandle,
    _In_ ULONG DesiredAccess,
    _In_opt_ POBJECT_ATTRIBUTES ObjectAttributes,
    _In_opt_ HANDLE ProcessHandle,
    _Out_opt_ PCLIENT_ID ClientId,
    _In_ PKSTART_ROUTINE StartRoutine,
    _In_opt_ PVOID StartContext
    );
typedef struct _IO_WORKITEM *PIO_WORKITEM;
_Function_class_(IO_WORKITEM_ROUTINE)
_IRQL_requires_(PASSIVE_LEVEL)
_IRQL_requires_same_
typedef
VOID
IO_WORKITEM_ROUTINE (
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_opt_ PVOID Context
    );
typedef IO_WORKITEM_ROUTINE *PIO_WORKITEM_ROUTINE;
__drv_allocatesMem(Mem)
_IRQL_requires_max_(DISPATCH_LEVEL)
_Must_inspect_result_
NTKERNELAPI
PIO_WORKITEM
IoAllocateWorkItem(
    _In_ PDEVICE_OBJECT DeviceObject
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
VOID
IoFreeWorkItem(
    _In_ __drv_freesMem(Mem) PIO_WORKITEM IoWorkItem
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
VOID
IoQueueWorkItem(
    _Inout_ __drv_aliasesMem PIO_WORKITEM IoWorkItem,
    _In_ PIO_WORKITEM_ROUTINE WorkerRoutine,
    _In_ WORK_QUEUE_TYPE QueueType,
    _In_opt_ __drv_aliasesMem PVOID Context
    );
_Function_class_(IO_WORKITEM_ROUTINE_EX)
_IRQL_requires_(PASSIVE_LEVEL)
_IRQL_requires_same_
typedef
VOID
IO_WORKITEM_ROUTINE_EX (
    _In_ PVOID IoObject,
    _In_opt_ PVOID Context,
    _In_ PIO_WORKITEM IoWorkItem
    );
typedef IO_WORKITEM_ROUTINE_EX *PIO_WORKITEM_ROUTINE_EX;
_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
IoQueueWorkItemEx(
    _Inout_ __drv_aliasesMem PIO_WORKITEM IoWorkItem,
    _In_ PIO_WORKITEM_ROUTINE_EX WorkerRoutine,
    _In_ WORK_QUEUE_TYPE QueueType,
    _In_opt_ __drv_aliasesMem PVOID Context
    );
ULONG
IoSizeofWorkItem(
    VOID
    );
VOID
IoInitializeWorkItem(
    _In_ PVOID IoObject,
    _Out_ PIO_WORKITEM IoWorkItem
    );
VOID
IoUninitializeWorkItem(
    _Inout_ PIO_WORKITEM IoWorkItem
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
BOOLEAN
IoTryQueueWorkItem(
    _Inout_ __drv_when(return != 0, __drv_aliasesMem) PIO_WORKITEM IoWorkItem,
    _In_ PIO_WORKITEM_ROUTINE_EX WorkerRoutine,
    _In_ WORK_QUEUE_TYPE QueueType,
    _In_opt_ __drv_aliasesMem PVOID Context
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTKERNELAPI
NTSTATUS
IoWMIRegistrationControl(
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ ULONG Action
);
_IRQL_requires_max_(PASSIVE_LEVEL)
NTKERNELAPI
NTSTATUS
IoWMIAllocateInstanceIds(
    _In_ LPCGUID Guid,
    _In_ ULONG InstanceCount,
    _Out_ ULONG *FirstInstanceId
    );
NTKERNELAPI
NTSTATUS
IoWMISuggestInstanceName(
    _In_opt_ PDEVICE_OBJECT PhysicalDeviceObject,
    _In_opt_ PUNICODE_STRING SymbolicLinkName,
    _In_ BOOLEAN CombineNames,
    _Out_ PUNICODE_STRING SuggestedInstanceName
    );
_Must_inspect_result_
_IRQL_requires_max_(DISPATCH_LEVEL)
_Ret_range_(<=, 0)
NTKERNELAPI
NTSTATUS
IoWMIWriteEvent(
    _Inout_ _When_(return==0, __drv_aliasesMem) PVOID WnodeEventItem
    );
NTKERNELAPI
ULONG
IoWMIDeviceObjectToProviderId(
    _In_ PDEVICE_OBJECT DeviceObject
    );
NTKERNELAPI
NTSTATUS
IoWMIOpenBlock (
    _In_ LPCGUID Guid,
    _In_ ULONG DesiredAccess,
    _Out_ PVOID *DataBlockObject
    );
NTKERNELAPI
NTSTATUS
IoWMIQueryAllData (
    _In_ PVOID DataBlockObject,
    _Inout_ PULONG InOutBufferSize,
    _Out_writes_bytes_opt_(*InOutBufferSize) PVOID OutBuffer
    );
NTKERNELAPI
NTSTATUS
IoWMIQueryAllDataMultiple (
    _In_reads_(ObjectCount) PVOID *DataBlockObjectList,
    _In_ ULONG ObjectCount,
    _Inout_ PULONG InOutBufferSize,
    _Out_writes_bytes_opt_(*InOutBufferSize) PVOID OutBuffer
    );
NTKERNELAPI
NTSTATUS
IoWMIQuerySingleInstance (
    _In_ PVOID DataBlockObject,
    _In_ PUNICODE_STRING InstanceName,
    _Inout_ PULONG InOutBufferSize,
    _Out_writes_bytes_opt_(*InOutBufferSize) PVOID OutBuffer
    );
NTKERNELAPI
NTSTATUS
IoWMIQuerySingleInstanceMultiple (
    _In_reads_(ObjectCount) PVOID *DataBlockObjectList,
    _In_reads_(ObjectCount) PUNICODE_STRING InstanceNames,
    _In_ ULONG ObjectCount,
    _Inout_ PULONG InOutBufferSize,
    _Out_writes_bytes_opt_(*InOutBufferSize) PVOID OutBuffer
    );
NTKERNELAPI
NTSTATUS
IoWMISetSingleInstance(
    _In_ PVOID DataBlockObject,
    _In_ PUNICODE_STRING InstanceName,
    _In_ ULONG Version,
    _In_ ULONG ValueBufferSize,
    _In_reads_bytes_(ValueBufferSize) PVOID ValueBuffer
    );
NTKERNELAPI
NTSTATUS
IoWMISetSingleItem(
    _In_ PVOID DataBlockObject,
    _In_ PUNICODE_STRING InstanceName,
    _In_ ULONG DataItemId,
    _In_ ULONG Version,
    _In_ ULONG ValueBufferSize,
    _In_reads_bytes_(ValueBufferSize) PVOID ValueBuffer
    );
NTKERNELAPI
NTSTATUS
IoWMIExecuteMethod(
    _In_ PVOID DataBlockObject,
    _In_ PUNICODE_STRING InstanceName,
    _In_ ULONG MethodId,
    _In_ ULONG InBufferSize,
    _Inout_ PULONG OutBufferSize,
    _Inout_updates_bytes_to_opt_(*OutBufferSize, InBufferSize) PUCHAR InOutBuffer
    );
typedef
_Function_class_(WMI_NOTIFICATION_CALLBACK)
_IRQL_requires_same_
VOID FWMI_NOTIFICATION_CALLBACK (
    PVOID Wnode,
    PVOID Context
    );
typedef FWMI_NOTIFICATION_CALLBACK *WMI_NOTIFICATION_CALLBACK;
NTKERNELAPI
NTSTATUS
IoWMISetNotificationCallback(
    _Inout_ PVOID Object,
    _In_ WMI_NOTIFICATION_CALLBACK Callback,
    _In_opt_ PVOID Context
    );
NTKERNELAPI
NTSTATUS
IoWMIHandleToInstanceName(
    _In_ PVOID DataBlockObject,
    _In_ HANDLE FileHandle,
    _Out_ PUNICODE_STRING InstanceName
    );
NTKERNELAPI
NTSTATUS
IoWMIDeviceObjectToInstanceName(
    _In_ PVOID DataBlockObject,
    _In_ PDEVICE_OBJECT DeviceObject,
    _Out_ PUNICODE_STRING InstanceName
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
BOOLEAN
IoIs32bitProcess(
    _In_opt_ PIRP Irp
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
BOOLEAN
IoIsInitiator32bitProcess(
    _In_ PIRP Irp
    );
NTKERNELAPI
VOID
IoFreeErrorLogEntry(
    _In_ PVOID ElEntry
    );
typedef struct _IO_CSQ IO_CSQ, *PIO_CSQ;
typedef struct _IO_CSQ_IRP_CONTEXT {
    ULONG Type;
    PIRP Irp;
    PIO_CSQ Csq;
} IO_CSQ_IRP_CONTEXT, *PIO_CSQ_IRP_CONTEXT;
typedef VOID
IO_CSQ_INSERT_IRP (
    _In_ struct _IO_CSQ *Csq,
    _In_ PIRP Irp
    );
typedef IO_CSQ_INSERT_IRP *PIO_CSQ_INSERT_IRP;
typedef NTSTATUS
IO_CSQ_INSERT_IRP_EX (
    _In_ struct _IO_CSQ *Csq,
    _In_ PIRP Irp,
    _In_ PVOID InsertContext
    );
typedef IO_CSQ_INSERT_IRP_EX *PIO_CSQ_INSERT_IRP_EX;
typedef VOID
IO_CSQ_REMOVE_IRP (
    _In_ PIO_CSQ Csq,
    _In_ PIRP Irp
    );
typedef IO_CSQ_REMOVE_IRP *PIO_CSQ_REMOVE_IRP;
typedef PIRP
IO_CSQ_PEEK_NEXT_IRP (
    _In_ PIO_CSQ Csq,
    _In_ PIRP Irp,
    _In_ PVOID PeekContext
    );
typedef IO_CSQ_PEEK_NEXT_IRP *PIO_CSQ_PEEK_NEXT_IRP;
typedef VOID
IO_CSQ_ACQUIRE_LOCK (
     _In_ PIO_CSQ Csq,
     _Out_ PKIRQL Irql
     );
typedef IO_CSQ_ACQUIRE_LOCK *PIO_CSQ_ACQUIRE_LOCK;
typedef VOID
IO_CSQ_RELEASE_LOCK (
     _In_ PIO_CSQ Csq,
     _In_ KIRQL Irql
     );
typedef IO_CSQ_RELEASE_LOCK *PIO_CSQ_RELEASE_LOCK;
typedef VOID
IO_CSQ_COMPLETE_CANCELED_IRP (
    _In_ PIO_CSQ Csq,
    _In_ PIRP Irp
    );
typedef IO_CSQ_COMPLETE_CANCELED_IRP *PIO_CSQ_COMPLETE_CANCELED_IRP;
typedef struct _IO_CSQ {
    ULONG Type;
    PIO_CSQ_INSERT_IRP CsqInsertIrp;
    PIO_CSQ_REMOVE_IRP CsqRemoveIrp;
    PIO_CSQ_PEEK_NEXT_IRP CsqPeekNextIrp;
    PIO_CSQ_ACQUIRE_LOCK CsqAcquireLock;
    PIO_CSQ_RELEASE_LOCK CsqReleaseLock;
    PIO_CSQ_COMPLETE_CANCELED_IRP CsqCompleteCanceledIrp;
    PVOID ReservePointer;
} IO_CSQ, *PIO_CSQ;
NTKERNELAPI
NTSTATUS
IoCsqInitialize(
    _Out_ PIO_CSQ Csq,
    _In_ PIO_CSQ_INSERT_IRP CsqInsertIrp,
    _In_ PIO_CSQ_REMOVE_IRP CsqRemoveIrp,
    _In_ PIO_CSQ_PEEK_NEXT_IRP CsqPeekNextIrp,
    _In_ PIO_CSQ_ACQUIRE_LOCK CsqAcquireLock,
    _In_ PIO_CSQ_RELEASE_LOCK CsqReleaseLock,
    _In_ PIO_CSQ_COMPLETE_CANCELED_IRP CsqCompleteCanceledIrp
    );
NTKERNELAPI
NTSTATUS
IoCsqInitializeEx(
    _Out_ PIO_CSQ Csq,
    _In_ PIO_CSQ_INSERT_IRP_EX CsqInsertIrp,
    _In_ PIO_CSQ_REMOVE_IRP CsqRemoveIrp,
    _In_ PIO_CSQ_PEEK_NEXT_IRP CsqPeekNextIrp,
    _In_ PIO_CSQ_ACQUIRE_LOCK CsqAcquireLock,
    _In_ PIO_CSQ_RELEASE_LOCK CsqReleaseLock,
    _In_ PIO_CSQ_COMPLETE_CANCELED_IRP CsqCompleteCanceledIrp
    );
NTKERNELAPI
VOID
IoCsqInsertIrp(
    _Inout_ PIO_CSQ Csq,
    _Inout_ PIRP Irp,
    _Out_opt_ PIO_CSQ_IRP_CONTEXT Context
    );
NTKERNELAPI
NTSTATUS
IoCsqInsertIrpEx(
    _Inout_ PIO_CSQ Csq,
    _Inout_ PIRP Irp,
    _Out_opt_ PIO_CSQ_IRP_CONTEXT Context,
    _In_opt_ PVOID InsertContext
    );
NTKERNELAPI
PIRP
IoCsqRemoveNextIrp(
    _Inout_ PIO_CSQ Csq,
    _In_opt_ PVOID PeekContext
    );
NTKERNELAPI
PIRP
IoCsqRemoveIrp(
    _Inout_ PIO_CSQ Csq,
    _Inout_ PIO_CSQ_IRP_CONTEXT Context
    );
NTKERNELAPI
NTSTATUS
IoValidateDeviceIoControlAccess(
    _In_ PIRP Irp,
    _In_ ULONG RequiredAccess
    );
IO_PRIORITY_HINT
IoGetIoPriorityHint(
    _In_ PIRP Irp
    );
NTSTATUS
IoSetIoPriorityHint(
    _In_ PIRP Irp,
    _In_ IO_PRIORITY_HINT PriorityHint
    );
NTSTATUS
IoAllocateSfioStreamIdentifier(
    _In_ PFILE_OBJECT FileObject,
    _In_ ULONG Length,
    _In_ PVOID Signature,
    _Out_ PVOID *StreamIdentifier
    );
PVOID
IoGetSfioStreamIdentifier(
    _In_ PFILE_OBJECT FileObject,
    _In_ PVOID Signature
    );
NTSTATUS
IoFreeSfioStreamIdentifier(
    _In_ PFILE_OBJECT FileObject,
    _In_ PVOID Signature
    );
NTSTATUS
IoGetIoAttributionHandle (
    _In_ PIRP Irp,
    _Out_ PVOID* IoAttributionHandle
    );
typedef struct _IO_ATTRIBUTION_INFORMATION {
    ULONG Version;
    union {
        struct {
            ULONG MajorCode : 8;
            ULONG IoStart : 1;
            ULONG QueueOnly : 1;
            ULONG IoFailed : 1;
            ULONG VirtualDevice : 1;
            ULONG Spare : 20;
        };
        ULONG AllFlags;
    } Flags;
    ULONG Length;
    ULONGLONG ServiceStartTime;
    ULONGLONG CurrentTime;
} IO_ATTRIBUTION_INFORMATION, *PIO_ATTRIBUTION_INFORMATION;
NTSTATUS
IoRecordIoAttribution (
    _Inout_ PVOID OpaqueHandle,
    _In_ IO_ATTRIBUTION_INFORMATION* AttributionInformation
    );
NTSTATUS
IoSetIoAttributionIrp (
    _Inout_ PIRP Irp,
    _In_ PVOID AttributionSource,
    _In_ ULONG Flags
    );
typedef enum _IO_ACCESS_TYPE {
    ReadAccess,
    WriteAccess,
    ModifyAccess
} IO_ACCESS_TYPE;
typedef enum _IO_ACCESS_MODE {
    SequentialAccess,
    RandomAccess
} IO_ACCESS_MODE;
typedef enum _IO_CONTAINER_NOTIFICATION_CLASS {
    IoSessionStateNotification,
    IoMaxContainerNotificationClass
} IO_CONTAINER_NOTIFICATION_CLASS;
typedef struct _IO_SESSION_STATE_NOTIFICATION {
    ULONG Size;
    ULONG Flags;
    PVOID IoObject;
    ULONG EventMask;
    PVOID Context;
} IO_SESSION_STATE_NOTIFICATION, *PIO_SESSION_STATE_NOTIFICATION;
typedef enum _IO_CONTAINER_INFORMATION_CLASS {
    IoSessionStateInformation,
    IoMaxContainerInformationClass
} IO_CONTAINER_INFORMATION_CLASS;
typedef struct _IO_SESSION_STATE_INFORMATION {
    ULONG SessionId;
    IO_SESSION_STATE SessionState;
    BOOLEAN LocalSession;
} IO_SESSION_STATE_INFORMATION, *PIO_SESSION_STATE_INFORMATION;
NTSTATUS
IoGetContainerInformation (
    _In_ IO_CONTAINER_INFORMATION_CLASS InformationClass,
    _In_opt_ PVOID ContainerObject,
    _Inout_updates_bytes_opt_(BufferLength) PVOID Buffer,
    _In_ ULONG BufferLength
    );
typedef NTSTATUS (*PIO_CONTAINER_NOTIFICATION_FUNCTION)(VOID);
typedef
NTSTATUS
IO_SESSION_NOTIFICATION_FUNCTION (
    _In_ PVOID SessionObject,
    _In_ PVOID IoObject,
    _In_ ULONG Event,
    _In_ PVOID Context,
    _In_reads_bytes_opt_(PayloadLength) PVOID NotificationPayload,
    _In_ ULONG PayloadLength
    );
typedef IO_SESSION_NOTIFICATION_FUNCTION *PIO_SESSION_NOTIFICATION_FUNCTION;
NTSTATUS
IoRegisterContainerNotification(
    _In_ IO_CONTAINER_NOTIFICATION_CLASS NotificationClass,
    _In_ PIO_CONTAINER_NOTIFICATION_FUNCTION CallbackFunction,
    _In_reads_bytes_opt_(NotificationInformationLength) PVOID NotificationInformation,
    _In_ ULONG NotificationInformationLength,
    _Out_ PVOID CallbackRegistration
    );
VOID
IoUnregisterContainerNotification(
    _In_ PVOID CallbackRegistration
    );
#include <evntrace.h>
#include <stdarg.h>
typedef ULONG64 TRACEHANDLE, *PTRACEHANDLE;
NTKERNELAPI
_IRQL_requires_max_(HIGH_LEVEL)
NTSTATUS
WmiTraceMessage (
    _In_ TRACEHANDLE LoggerHandle,
    _In_ ULONG MessageFlags,
    _In_ LPCGUID MessageGuid,
    _In_ USHORT MessageNumber,
    ...
    );
NTKERNELAPI
_IRQL_requires_max_(HIGH_LEVEL)
NTSTATUS
WmiTraceMessageVa (
    _In_ TRACEHANDLE LoggerHandle,
    _In_ ULONG MessageFlags,
    _In_ LPCGUID MessageGuid,
    _In_ USHORT MessageNumber,
    _In_ va_list MessageArgList
    );
typedef struct _ETW_TRACE_SESSION_SETTINGS {
    ULONG Version;
    ULONG BufferSize;
    ULONG MinimumBuffers;
    ULONG MaximumBuffers;
    ULONG LoggerMode;
    ULONG FlushTimer;
    ULONG FlushThreshold;
    ULONG ClockType;
} ETW_TRACE_SESSION_SETTINGS, *PETW_TRACE_SESSION_SETTINGS;
typedef enum _TRACE_INFORMATION_CLASS {
    TraceIdClass,
    TraceHandleClass,
    TraceEnableFlagsClass,
    TraceEnableLevelClass,
    GlobalLoggerHandleClass,
    EventLoggerHandleClass,
    AllLoggerHandlesClass,
    TraceHandleByNameClass,
    LoggerEventsLostClass,
    TraceSessionSettingsClass,
    LoggerEventsLoggedClass,
    DiskIoNotifyRoutinesClass,
    TraceInformationClassReserved1,
    FltIoNotifyRoutinesClass,
    TraceInformationClassReserved2,
    WdfNotifyRoutinesClass,
    MaxTraceInformationClass
} TRACE_INFORMATION_CLASS;
NTKERNELAPI
_IRQL_requires_max_(APC_LEVEL)
NTSTATUS
WmiQueryTraceInformation (
    _In_ TRACE_INFORMATION_CLASS TraceInformationClass,
    _Out_writes_bytes_(TraceInformationLength) PVOID TraceInformation,
    _In_ ULONG TraceInformationLength,
    _Out_opt_ PULONG RequiredLength,
    _In_opt_ PVOID Buffer
    );
#include <evntprov.h>
typedef
_IRQL_requires_max_(PASSIVE_LEVEL)
_IRQL_requires_same_
VOID
NTAPI
ETWENABLECALLBACK (
    _In_ LPCGUID SourceId,
    _In_ ULONG ControlCode,
    _In_ UCHAR Level,
    _In_ ULONGLONG MatchAnyKeyword,
    _In_ ULONGLONG MatchAllKeyword,
    _In_opt_ PEVENT_FILTER_DESCRIPTOR FilterData,
    _Inout_opt_ PVOID CallbackContext
    );
typedef ETWENABLECALLBACK *PETWENABLECALLBACK;
NTKERNELAPI
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
EtwRegister (
    _In_ LPCGUID ProviderId,
    _In_opt_ PETWENABLECALLBACK EnableCallback,
    _In_opt_ PVOID CallbackContext,
    _Out_ PREGHANDLE RegHandle
    );
NTKERNELAPI
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
EtwUnregister (
    _In_ REGHANDLE RegHandle
    );
NTKERNELAPI
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
EtwSetInformation(
    _In_ REGHANDLE RegHandle,
    _In_ EVENT_INFO_CLASS InformationClass,
    _In_reads_bytes_opt_(InformationLength) PVOID EventInformation,
    _In_ ULONG InformationLength
    );
NTKERNELAPI
_IRQL_requires_max_(HIGH_LEVEL)
BOOLEAN
EtwEventEnabled (
    _In_ REGHANDLE RegHandle,
    _In_ PCEVENT_DESCRIPTOR EventDescriptor
    );
NTKERNELAPI
_IRQL_requires_max_(HIGH_LEVEL)
BOOLEAN
EtwProviderEnabled (
    _In_ REGHANDLE RegHandle,
    _In_ UCHAR Level,
    _In_ ULONGLONG Keyword
    );
NTKERNELAPI
_When_(ControlCode==EVENT_ACTIVITY_CTRL_CREATE_ID, _IRQL_requires_max_(HIGH_LEVEL) _At_(ActivityId, _Out_))
_When_(ControlCode==EVENT_ACTIVITY_CTRL_GET_ID, _IRQL_requires_max_(APC_LEVEL) _At_(ActivityId, _Out_))
_When_(ControlCode==EVENT_ACTIVITY_CTRL_SET_ID, _IRQL_requires_max_(APC_LEVEL) _At_(ActivityId, _In_))
_When_(ControlCode==EVENT_ACTIVITY_CTRL_GET_SET_ID, _IRQL_requires_max_(APC_LEVEL) _At_(ActivityId, _Inout_))
_When_(ControlCode==EVENT_ACTIVITY_CTRL_CREATE_SET_ID, _IRQL_requires_max_(APC_LEVEL) _At_(ActivityId, _Out_))
NTSTATUS
EtwActivityIdControl (
    _In_ ULONG ControlCode,
    _Inout_updates_bytes_(sizeof(GUID)) LPGUID ActivityId
    );
NTKERNELAPI
_IRQL_requires_max_(HIGH_LEVEL)
NTSTATUS
EtwWrite (
    _In_ REGHANDLE RegHandle,
    _In_ PCEVENT_DESCRIPTOR EventDescriptor,
    _In_opt_ LPCGUID ActivityId,
    _In_ ULONG UserDataCount,
    _In_reads_opt_(UserDataCount) PEVENT_DATA_DESCRIPTOR UserData
    );
NTKERNELAPI
_IRQL_requires_max_(HIGH_LEVEL)
NTSTATUS
EtwWriteTransfer (
    _In_ REGHANDLE RegHandle,
    _In_ PCEVENT_DESCRIPTOR EventDescriptor,
    _In_opt_ LPCGUID ActivityId,
    _In_opt_ LPCGUID RelatedActivityId,
    _In_ ULONG UserDataCount,
    _In_reads_opt_(UserDataCount) PEVENT_DATA_DESCRIPTOR UserData
    );
NTKERNELAPI
_IRQL_requires_max_(HIGH_LEVEL)
NTSTATUS
EtwWriteString (
    _In_ REGHANDLE RegHandle,
    _In_ UCHAR Level,
    _In_ ULONGLONG Keyword,
    _In_opt_ LPCGUID ActivityId,
    _In_ PCWSTR String
    );
NTKERNELAPI
_IRQL_requires_max_(HIGH_LEVEL)
NTSTATUS
EtwWriteEx (
    _In_ REGHANDLE RegHandle,
    _In_ PCEVENT_DESCRIPTOR EventDescriptor,
    _In_ ULONG64 Filter,
    _In_ ULONG Flags,
    _In_opt_ LPCGUID ActivityId,
    _In_opt_ LPCGUID RelatedActivityId,
    _In_ ULONG UserDataCount,
    _In_reads_opt_(UserDataCount) PEVENT_DATA_DESCRIPTOR UserData
    );
NTKERNELAPI
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
SeEtwWriteKMCveEvent (
    _In_ PCUNICODE_STRING CveId,
    _In_opt_ PCUNICODE_STRING AdditionalDetails
    );
typedef enum {
    DevicePropertyDeviceDescription = 0x0 | __string_type,
    DevicePropertyHardwareID = 0x1 | __multiString_type,
    DevicePropertyCompatibleIDs = 0x2 | __multiString_type,
    DevicePropertyBootConfiguration = 0x3,
    DevicePropertyBootConfigurationTranslated = 0x4,
    DevicePropertyClassName = 0x5 | __string_type,
    DevicePropertyClassGuid = 0x6 | __string_type,
    DevicePropertyDriverKeyName = 0x7 | __string_type,
    DevicePropertyManufacturer = 0x8 | __string_type,
    DevicePropertyFriendlyName = 0x9 | __string_type,
    DevicePropertyLocationInformation = 0xa | __string_type,
    DevicePropertyPhysicalDeviceObjectName = 0xb | __string_type,
    DevicePropertyBusTypeGuid = 0xc | __guid_type,
    DevicePropertyLegacyBusType = 0xd,
    DevicePropertyBusNumber = 0xe,
    DevicePropertyEnumeratorName = 0xf | __string_type,
    DevicePropertyAddress = 0x10,
    DevicePropertyUINumber = 0x11,
    DevicePropertyInstallState = 0x12,
    DevicePropertyRemovalPolicy = 0x13,
    DevicePropertyResourceRequirements = 0x14,
    DevicePropertyAllocatedResources = 0x15,
    DevicePropertyContainerID = 0x16 | __string_type
} DEVICE_REGISTRY_PROPERTY;
typedef
_Function_class_(TRANSLATE_BUS_ADDRESS)
_IRQL_requires_same_
_Success_(return)
BOOLEAN TRANSLATE_BUS_ADDRESS(
    _Inout_opt_ PVOID Context,
    _In_ PHYSICAL_ADDRESS BusAddress,
    _In_ ULONG Length,
    _Out_ PULONG AddressSpace,
    _Out_ PPHYSICAL_ADDRESS TranslatedAddress
    );
typedef TRANSLATE_BUS_ADDRESS *PTRANSLATE_BUS_ADDRESS;
typedef
_Function_class_(GET_DMA_ADAPTER)
_IRQL_requires_same_
struct _DMA_ADAPTER *GET_DMA_ADAPTER(
    _Inout_opt_ PVOID Context,
    _In_ struct _DEVICE_DESCRIPTION *DeviceDescriptor,
    _Out_ PULONG NumberOfMapRegisters
    );
typedef GET_DMA_ADAPTER *PGET_DMA_ADAPTER;
typedef
_Function_class_(GET_SET_DEVICE_DATA)
_IRQL_requires_same_
ULONG GET_SET_DEVICE_DATA (
    _Inout_opt_ PVOID Context,
    _In_ ULONG DataType,
    _Inout_updates_bytes_(Length) PVOID Buffer,
    _In_ ULONG Offset,
    _In_range_(!=,0) ULONG Length
    );
typedef GET_SET_DEVICE_DATA *PGET_SET_DEVICE_DATA;
typedef enum _DEVICE_INSTALL_STATE {
    InstallStateInstalled,
    InstallStateNeedsReinstall,
    InstallStateFailedInstall,
    InstallStateFinishInstall
} DEVICE_INSTALL_STATE, *PDEVICE_INSTALL_STATE;
typedef struct _PNP_BUS_INFORMATION {
    GUID BusTypeGuid;
    INTERFACE_TYPE LegacyBusType;
    ULONG BusNumber;
} PNP_BUS_INFORMATION, *PPNP_BUS_INFORMATION;
typedef struct _LEGACY_BUS_INFORMATION {
    GUID BusTypeGuid;
    INTERFACE_TYPE LegacyBusType;
    ULONG BusNumber;
} LEGACY_BUS_INFORMATION, *PLEGACY_BUS_INFORMATION;
typedef enum _DEVICE_REMOVAL_POLICY {
    RemovalPolicyExpectNoRemoval = 1,
    RemovalPolicyExpectOrderlyRemoval = 2,
    RemovalPolicyExpectSurpriseRemoval = 3
} DEVICE_REMOVAL_POLICY, *PDEVICE_REMOVAL_POLICY;
typedef struct _BUS_INTERFACE_STANDARD {
    USHORT Size;
    USHORT Version;
    PVOID Context;
    PINTERFACE_REFERENCE InterfaceReference;
    PINTERFACE_DEREFERENCE InterfaceDereference;
    PTRANSLATE_BUS_ADDRESS TranslateBusAddress;
    PGET_DMA_ADAPTER GetDmaAdapter;
    PGET_SET_DEVICE_DATA SetBusData;
    PGET_SET_DEVICE_DATA GetBusData;
} BUS_INTERFACE_STANDARD, *PBUS_INTERFACE_STANDARD;
typedef
_Function_class_(GET_VIRTUAL_DEVICE_DATA)
_IRQL_requires_same_
_IRQL_requires_max_(DISPATCH_LEVEL)
ULONG GET_VIRTUAL_DEVICE_DATA (
    _Inout_ PVOID Context,
    _In_ USHORT VirtualFunction,
    _Out_writes_bytes_(Length) PVOID Buffer,
    _In_ ULONG Offset,
    _In_ ULONG Length
    );
typedef GET_VIRTUAL_DEVICE_DATA *PGET_VIRTUAL_DEVICE_DATA;
typedef
_Function_class_(SET_VIRTUAL_DEVICE_DATA)
_IRQL_requires_same_
_IRQL_requires_max_(DISPATCH_LEVEL)
ULONG SET_VIRTUAL_DEVICE_DATA (
    _Inout_ PVOID Context,
    _In_ USHORT VirtualFunction,
    _In_reads_bytes_(Length) PVOID Buffer,
    _In_ ULONG Offset,
    _In_ ULONG Length
    );
typedef SET_VIRTUAL_DEVICE_DATA *PSET_VIRTUAL_DEVICE_DATA;
typedef
_Function_class_(GET_VIRTUAL_DEVICE_LOCATION)
_IRQL_requires_same_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS GET_VIRTUAL_DEVICE_LOCATION (
    _Inout_ PVOID Context,
    _In_ USHORT VirtualFunction,
    _Out_ PUINT16 SegmentNumber,
    _Out_ PUINT8 BusNumber,
    _Out_ PUINT8 FunctionNumber
    );
typedef GET_VIRTUAL_DEVICE_LOCATION *PGET_VIRTUAL_DEVICE_LOCATION;
typedef
_Function_class_(GET_VIRTUAL_DEVICE_RESOURCES)
_IRQL_requires_same_
_IRQL_requires_max_(PASSIVE_LEVEL)
VOID GET_VIRTUAL_DEVICE_RESOURCES (
    _Inout_ PVOID Context,
    _Out_ PUINT8 CapturedBusNumbers
    );
typedef GET_VIRTUAL_DEVICE_RESOURCES *PGET_VIRTUAL_DEVICE_RESOURCES;
typedef
_Function_class_(ENABLE_VIRTUALIZATION)
_IRQL_requires_same_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS ENABLE_VIRTUALIZATION (
    _Inout_ PVOID Context,
    _In_ UINT16 NumVFs,
    _In_ BOOLEAN EnableVfMigration,
    _In_ BOOLEAN EnableMigrationInterrupt,
    _In_ BOOLEAN EnableVirtualization
    );
typedef ENABLE_VIRTUALIZATION *PENABLE_VIRTUALIZATION;
typedef
_Function_class_(GET_VIRTUAL_FUNCTION_PROBED_BARS)
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
GET_VIRTUAL_FUNCTION_PROBED_BARS(
    _Inout_ PVOID Context,
    _Out_writes_(6) PULONG BaseRegisterValues
    ) ;
typedef GET_VIRTUAL_FUNCTION_PROBED_BARS *PGET_VIRTUAL_FUNCTION_PROBED_BARS;
typedef struct _PCI_VIRTUALIZATION_INTERFACE {
    USHORT Size;
    USHORT Version;
    PVOID Context;
    PINTERFACE_REFERENCE InterfaceReference;
    PINTERFACE_DEREFERENCE InterfaceDereference;
    PSET_VIRTUAL_DEVICE_DATA SetVirtualFunctionData;
    PGET_VIRTUAL_DEVICE_DATA GetVirtualFunctionData;
    PGET_VIRTUAL_DEVICE_LOCATION GetLocation;
    PGET_VIRTUAL_DEVICE_RESOURCES GetResources;
    PENABLE_VIRTUALIZATION EnableVirtualization;
    PGET_VIRTUAL_FUNCTION_PROBED_BARS GetVirtualFunctionProbedBars;
} PCI_VIRTUALIZATION_INTERFACE, *PPCI_VIRTUALIZATION_INTERFACE;
typedef enum _PCI_ACS_BIT {
    PciAcsReserved = 0,
    PciAcsBitEnable,
    PciAcsBitDisable,
    PciAcsBitDontCare
} PCI_ACS_BIT, *PPCI_ACS_BIT;
typedef
_Function_class_(PCI_SET_ACS)
_IRQL_requires_same_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS PCI_SET_ACS (
    _Inout_ PVOID Context,
    _In_ PCI_ACS_BIT EnableSourceValidation,
    _In_ PCI_ACS_BIT EnableTranslationBlocking,
    _In_ PCI_ACS_BIT EnableP2PRequestRedirect,
    _In_ PCI_ACS_BIT EnableCompletionRedirect,
    _In_ PCI_ACS_BIT EnableUpstreamForwarding,
    _In_ PCI_ACS_BIT EnableEgressControl,
    _In_ PCI_ACS_BIT EnableDirectTranslatedP2P
    );
typedef PCI_SET_ACS *PPCI_SET_ACS;
typedef struct _PCI_SECURITY_INTERFACE {
    USHORT Size;
    USHORT Version;
    PVOID Context;
    PINTERFACE_REFERENCE InterfaceReference;
    PINTERFACE_DEREFERENCE InterfaceDereference;
    PPCI_SET_ACS SetAccessControlServices;
} PCI_SECURITY_INTERFACE, *PPCI_SECURITY_INTERFACE;
typedef
VOID
(*PREENUMERATE_SELF)(
    _In_ PVOID Context
    );
typedef struct _REENUMERATE_SELF_INTERFACE_STANDARD {
    USHORT Size;
    USHORT Version;
    PVOID Context;
    PINTERFACE_REFERENCE InterfaceReference;
    PINTERFACE_DEREFERENCE InterfaceDereference;
    PREENUMERATE_SELF SurpriseRemoveAndReenumerateSelf;
} REENUMERATE_SELF_INTERFACE_STANDARD, *PREENUMERATE_SELF_INTERFACE_STANDARD;
typedef
VOID
(*PQUERYEXTENDEDADDRESS)(
    _In_ PVOID Context,
    _Out_ PULONG64 ExtendedAddress
    );
typedef struct _PNP_EXTENDED_ADDRESS_INTERFACE {
    USHORT Size;
    USHORT Version;
    PVOID Context;
    PINTERFACE_REFERENCE InterfaceReference;
    PINTERFACE_DEREFERENCE InterfaceDereference;
    PQUERYEXTENDEDADDRESS QueryExtendedAddress;
} PNP_EXTENDED_ADDRESS_INTERFACE, *PPNP_EXTENDED_ADDRESS_INTERFACE;
typedef
_Function_class_(SET_D3COLD_SUPPORT)
_IRQL_requires_(PASSIVE_LEVEL)
VOID
SET_D3COLD_SUPPORT (
    _In_reads_opt_(_Inexpressible_("varies")) PVOID Context,
    _In_ BOOLEAN D3ColdSupport
    );
typedef SET_D3COLD_SUPPORT *PSET_D3COLD_SUPPORT;
typedef enum _DEVICE_WAKE_DEPTH {
    DeviceWakeDepthNotWakeable = 0,
    DeviceWakeDepthD0,
    DeviceWakeDepthD1,
    DeviceWakeDepthD2,
    DeviceWakeDepthD3hot,
    DeviceWakeDepthD3cold,
    DeviceWakeDepthMaximum
} DEVICE_WAKE_DEPTH, *PDEVICE_WAKE_DEPTH;
FORCEINLINE
DEVICE_POWER_STATE
MapWakeDepthToDstate(
    _In_ DEVICE_WAKE_DEPTH WakeDepth
    )
{
    const DEVICE_POWER_STATE dstateMap[DeviceWakeDepthMaximum] =
    {
        PowerDeviceD0,
        PowerDeviceD0,
        PowerDeviceD1,
        PowerDeviceD2,
        PowerDeviceD3,
        PowerDeviceD3
    };
    if (WakeDepth < 0 || WakeDepth >= DeviceWakeDepthMaximum) {
        return PowerDeviceUnspecified;
    } else {
        return dstateMap[WakeDepth];
    }
}
typedef
_Function_class_(GET_IDLE_WAKE_INFO)
_IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
GET_IDLE_WAKE_INFO (
    _In_reads_opt_(_Inexpressible_("varies")) PVOID Context,
    _In_ SYSTEM_POWER_STATE SystemPowerState,
    _Out_ PDEVICE_WAKE_DEPTH DeepestWakeableDstate
    );
typedef GET_IDLE_WAKE_INFO *PGET_IDLE_WAKE_INFO;
typedef
_Function_class_(GET_D3COLD_CAPABILITY)
_IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
GET_D3COLD_CAPABILITY (
    _In_reads_opt_(_Inexpressible_("varies")) PVOID Context,
    _Out_ PBOOLEAN D3ColdSupported
    );
typedef GET_D3COLD_CAPABILITY *PGET_D3COLD_CAPABILITY;
typedef enum _D3COLD_LAST_TRANSITION_STATUS {
    LastDStateTransitionStatusUnknown = 0,
    LastDStateTransitionD3hot,
    LastDStateTransitionD3cold
} D3COLD_LAST_TRANSITION_STATUS, *PD3COLD_LAST_TRANSITION_STATUS;
typedef
_Function_class_(GET_D3COLD_LAST_TRANSITION_STATUS)
_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
GET_D3COLD_LAST_TRANSITION_STATUS (
    _In_reads_opt_(_Inexpressible_("varies")) PVOID Context,
    _Out_ PD3COLD_LAST_TRANSITION_STATUS LastTransitionStatus
    );
typedef GET_D3COLD_LAST_TRANSITION_STATUS *PGET_D3COLD_LAST_TRANSITION_STATUS;
typedef struct _D3COLD_SUPPORT_INTERFACE {
    USHORT Size;
    USHORT Version;
    PVOID Context;
    PINTERFACE_REFERENCE InterfaceReference;
    PINTERFACE_DEREFERENCE InterfaceDereference;
    PSET_D3COLD_SUPPORT SetD3ColdSupport;
    PGET_IDLE_WAKE_INFO GetIdleWakeInfo;
    PGET_D3COLD_CAPABILITY GetD3ColdCapability;
    PGET_D3COLD_CAPABILITY GetBusDriverD3ColdSupport;
    PGET_D3COLD_LAST_TRANSITION_STATUS GetLastTransitionStatus;
} D3COLD_SUPPORT_INTERFACE, *PD3COLD_SUPPORT_INTERFACE;
typedef
_Function_class_(D3COLD_REQUEST_CORE_POWER_RAIL)
_IRQL_requires_(PASSIVE_LEVEL)
VOID
D3COLD_REQUEST_CORE_POWER_RAIL (
    _In_reads_opt_(_Inexpressible_("varies")) PVOID Context,
    _In_ BOOLEAN CorePowerRailNeeded
    );
typedef D3COLD_REQUEST_CORE_POWER_RAIL *PD3COLD_REQUEST_CORE_POWER_RAIL;
typedef
_Function_class_(D3COLD_REQUEST_AUX_POWER)
_IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
D3COLD_REQUEST_AUX_POWER (
    _In_reads_opt_(_Inexpressible_("varies")) PVOID Context,
    _In_ ULONG AuxPowerInMilliWatts,
    _Out_ PULONG RetryInSeconds
    );
typedef D3COLD_REQUEST_AUX_POWER *PD3COLD_REQUEST_AUX_POWER;
typedef
_Function_class_(D3COLD_REQUEST_PERST_DELAY)
_IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
D3COLD_REQUEST_PERST_DELAY (
    _In_reads_opt_(_Inexpressible_("varies")) PVOID Context,
    _In_ ULONG DelayInMicroSeconds
    );
typedef D3COLD_REQUEST_PERST_DELAY *PD3COLD_REQUEST_PERST_DELAY;
typedef struct _D3COLD_AUX_POWER_AND_TIMING_INTERFACE {
    USHORT Size;
    USHORT Version;
    PVOID Context;
    PINTERFACE_REFERENCE InterfaceReference;
    PINTERFACE_DEREFERENCE InterfaceDereference;
    PD3COLD_REQUEST_CORE_POWER_RAIL RequestCorePowerRail;
    PD3COLD_REQUEST_AUX_POWER RequestAuxPower;
    PD3COLD_REQUEST_PERST_DELAY RequestPerstDelay;
} D3COLD_AUX_POWER_AND_TIMING_INTERFACE, *PD3COLD_AUX_POWER_AND_TIMING_INTERFACE;
typedef
_Function_class_(FPGA_BUS_SCAN)
_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
FPGA_BUS_SCAN (
    _In_reads_opt_(_Inexpressible_("varies")) PVOID Context
    );
typedef FPGA_BUS_SCAN *PFPGA_BUS_SCAN;
typedef
_Function_class_(FPGA_CONTROL_LINK)
_IRQL_requires_max_(DISPATCH_LEVEL)
NTSTATUS
FPGA_CONTROL_LINK (
    _In_reads_opt_(_Inexpressible_("varies")) PVOID Context,
    _In_ BOOLEAN Enable
    );
typedef FPGA_CONTROL_LINK *PFPGA_CONTROL_LINK;
typedef
_Function_class_(FPGA_CONTROL_CONFIG_SPACE)
_IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
FPGA_CONTROL_CONFIG_SPACE (
    _In_reads_opt_(_Inexpressible_("varies")) PVOID Context,
    _In_ BOOLEAN Enable
    );
typedef FPGA_CONTROL_CONFIG_SPACE *PFPGA_CONTROL_CONFIG_SPACE;
typedef
_Function_class_(FPGA_CONTROL_ERROR_REPORTING)
_IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
FPGA_CONTROL_ERROR_REPORTING (
    _In_reads_opt_(_Inexpressible_("varies")) PVOID Context,
    _In_ ULONG UncorrectableMask,
    _In_ ULONG CorrectableMask,
    _In_ BOOLEAN DisableErrorReporting
    );
typedef FPGA_CONTROL_ERROR_REPORTING *PFPGA_CONTROL_ERROR_REPORTING;
typedef struct _FPGA_CONTROL_INTERFACE {
    USHORT Size;
    USHORT Version;
    PVOID Context;
    PINTERFACE_REFERENCE InterfaceReference;
    PINTERFACE_DEREFERENCE InterfaceDereference;
    PFPGA_BUS_SCAN BusScan;
    PFPGA_CONTROL_LINK ControlLink;
    PFPGA_CONTROL_CONFIG_SPACE ControlConfigSpace;
    PFPGA_CONTROL_ERROR_REPORTING ControlErrorReporting;
} FPGA_CONTROL_INTERFACE, *PFPGA_CONTROL_INTERFACE;
typedef
_Function_class_(PTM_DEVICE_QUERY_GRANULARITY)
_IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
PTM_DEVICE_QUERY_GRANULARITY (
    _In_ PVOID Context,
    _Out_ PUCHAR Granularity
    );
typedef PTM_DEVICE_QUERY_GRANULARITY *PPTM_DEVICE_QUERY_GRANULARITY;
typedef
_Function_class_(PTM_DEVICE_QUERY_TIME_SOURCE)
_IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
PTM_DEVICE_QUERY_TIME_SOURCE (
    _In_ PVOID Context,
    _Out_ PULONG TimeSource
    );
typedef PTM_DEVICE_QUERY_TIME_SOURCE *PPTM_DEVICE_QUERY_TIME_SOURCE;
typedef
_Function_class_(PTM_DEVICE_ENABLE)
_IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
PTM_DEVICE_ENABLE (
    _In_ PVOID Context
    );
typedef PTM_DEVICE_ENABLE *PPTM_DEVICE_ENABLE;
typedef
_Function_class_(PTM_DEVICE_DISABLE)
_IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
PTM_DEVICE_DISABLE (
    _In_ PVOID Context
    );
typedef PTM_DEVICE_DISABLE *PPTM_DEVICE_DISABLE;
typedef struct _PTM_CONTROL_INTERFACE {
    USHORT Size;
    USHORT Version;
    PVOID Context;
    PINTERFACE_REFERENCE InterfaceReference;
    PINTERFACE_DEREFERENCE InterfaceDereference;
    PPTM_DEVICE_QUERY_GRANULARITY QueryGranularity;
    PPTM_DEVICE_QUERY_TIME_SOURCE QueryTimeSource;
    PPTM_DEVICE_ENABLE Enable;
    PPTM_DEVICE_DISABLE Disable;
} PTM_CONTROL_INTERFACE, *PPTM_CONTROL_INTERFACE;
typedef
_Function_class_(GET_UPDATED_BUS_RESOURCE)
_IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
GET_UPDATED_BUS_RESOURCE (
    _In_reads_opt_(_Inexpressible_("varies")) PVOID Context,
    _Out_ PCM_RESOURCE_LIST *UpdatedResourceList,
    _Out_ PCM_RESOURCE_LIST *UpdatedTranslatedResourceList
    );
typedef GET_UPDATED_BUS_RESOURCE *PGET_UPDATED_BUS_RESOURCE;
typedef struct _BUS_RESOURCE_UPDATE_INTERFACE {
    USHORT Size;
    USHORT Version;
    PVOID Context;
    PINTERFACE_REFERENCE InterfaceReference;
    PINTERFACE_DEREFERENCE InterfaceDereference;
    PGET_UPDATED_BUS_RESOURCE GetUpdatedBusResource;
} BUS_RESOURCE_UPDATE_INTERFACE, *PBUS_RESOURCE_UPDATE_INTERFACE;
typedef BOOLEAN (* PGPE_SERVICE_ROUTINE) (
                            PVOID,
                            PVOID);
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
_Must_inspect_result_
NTSTATUS (* PGPE_CONNECT_VECTOR) (
                            PDEVICE_OBJECT,
                            ULONG,
                            KINTERRUPT_MODE,
                            BOOLEAN,
                            PGPE_SERVICE_ROUTINE,
                            PVOID,
                            PVOID);
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
_Must_inspect_result_
NTSTATUS (* PGPE_DISCONNECT_VECTOR) (
                            PVOID);
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
_Must_inspect_result_
NTSTATUS (* PGPE_ENABLE_EVENT) (
                            PDEVICE_OBJECT,
                            PVOID);
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
_Must_inspect_result_
NTSTATUS (* PGPE_DISABLE_EVENT) (
                            PDEVICE_OBJECT,
                            PVOID);
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
_Must_inspect_result_
NTSTATUS (* PGPE_CLEAR_STATUS) (
                            PDEVICE_OBJECT,
                            PVOID);
typedef
VOID (* PDEVICE_NOTIFY_CALLBACK) (
                            PVOID,
                            ULONG);
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
_Must_inspect_result_
NTSTATUS (* PREGISTER_FOR_DEVICE_NOTIFICATIONS) (
                            PDEVICE_OBJECT,
                            PDEVICE_NOTIFY_CALLBACK,
                            PVOID);
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
void (* PUNREGISTER_FOR_DEVICE_NOTIFICATIONS) (
                            PDEVICE_OBJECT,
                            PDEVICE_NOTIFY_CALLBACK);
typedef struct _ACPI_INTERFACE_STANDARD {
    USHORT Size;
    USHORT Version;
    PVOID Context;
    PINTERFACE_REFERENCE InterfaceReference;
    PINTERFACE_DEREFERENCE InterfaceDereference;
    PGPE_CONNECT_VECTOR GpeConnectVector;
    PGPE_DISCONNECT_VECTOR GpeDisconnectVector;
    PGPE_ENABLE_EVENT GpeEnableEvent;
    PGPE_DISABLE_EVENT GpeDisableEvent;
    PGPE_CLEAR_STATUS GpeClearStatus;
    PREGISTER_FOR_DEVICE_NOTIFICATIONS RegisterForDeviceNotifications;
    PUNREGISTER_FOR_DEVICE_NOTIFICATIONS UnregisterForDeviceNotifications;
} ACPI_INTERFACE_STANDARD, *PACPI_INTERFACE_STANDARD;
typedef
BOOLEAN
(*PGPE_SERVICE_ROUTINE2) (
    PVOID ObjectContext,
    PVOID ServiceContext
    );
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
_Must_inspect_result_
NTSTATUS
(*PGPE_CONNECT_VECTOR2) (
    PVOID Context,
    ULONG GpeNumber,
    KINTERRUPT_MODE Mode,
    BOOLEAN Shareable,
    PGPE_SERVICE_ROUTINE ServiceRoutine,
    PVOID ServiceContext,
    PVOID *ObjectContext
    );
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
_Must_inspect_result_
NTSTATUS
(*PGPE_DISCONNECT_VECTOR2) (
    PVOID Context,
    PVOID ObjectContext
    );
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
_Must_inspect_result_
NTSTATUS
(*PGPE_ENABLE_EVENT2) (
    PVOID Context,
    PVOID ObjectContext
    );
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
_Must_inspect_result_
NTSTATUS
(*PGPE_DISABLE_EVENT2) (
    PVOID Context,
    PVOID ObjectContext
    );
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
_Must_inspect_result_
NTSTATUS
(*PGPE_CLEAR_STATUS2) (
    PVOID Context,
    PVOID ObjectContext
    );
typedef
_IRQL_requires_max_(PASSIVE_LEVEL)
VOID
(*PDEVICE_NOTIFY_CALLBACK2) (
    PVOID NotificationContext,
    ULONG NotifyCode
    );
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
_Must_inspect_result_
NTSTATUS
(*PREGISTER_FOR_DEVICE_NOTIFICATIONS2) (
    PVOID Context,
    PDEVICE_NOTIFY_CALLBACK2 NotificationHandler,
    PVOID NotificationContext
    );
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
(*PUNREGISTER_FOR_DEVICE_NOTIFICATIONS2) (
    PVOID Context
    );
typedef struct {
    USHORT Size;
    USHORT Version;
    PVOID Context;
    PINTERFACE_REFERENCE InterfaceReference;
    PINTERFACE_DEREFERENCE InterfaceDereference;
    PGPE_CONNECT_VECTOR2 GpeConnectVector;
    PGPE_DISCONNECT_VECTOR2 GpeDisconnectVector;
    PGPE_ENABLE_EVENT2 GpeEnableEvent;
    PGPE_DISABLE_EVENT2 GpeDisableEvent;
    PGPE_CLEAR_STATUS2 GpeClearStatus;
    PREGISTER_FOR_DEVICE_NOTIFICATIONS2 RegisterForDeviceNotifications;
    PUNREGISTER_FOR_DEVICE_NOTIFICATIONS2 UnregisterForDeviceNotifications;
} ACPI_INTERFACE_STANDARD2, *PACPI_INTERFACE_STANDARD2;
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
VOID
IoInvalidateDeviceRelations(
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ DEVICE_RELATION_TYPE Type
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
VOID
IoRequestDeviceEject(
    _In_ PDEVICE_OBJECT PhysicalDeviceObject
    );
typedef VOID (*PIO_DEVICE_EJECT_CALLBACK)(
    _In_ NTSTATUS Status,
    _Inout_opt_ PVOID Context
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
_Must_inspect_result_
NTKERNELAPI
NTSTATUS
IoRequestDeviceEjectEx(
    _In_ PDEVICE_OBJECT PhysicalDeviceObject,
    _In_opt_ PIO_DEVICE_EJECT_CALLBACK Callback,
    _In_opt_ PVOID Context,
    _In_opt_ PDRIVER_OBJECT DriverObject
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
_When_((DeviceProperty & __string_type),
    _At_(PropertyBuffer,
        _Post_z_)
    )
_When_((DeviceProperty & __multiString_type),
    _At_(PropertyBuffer,
        _Post_ _NullNull_terminated_)
    )
NTKERNELAPI
NTSTATUS
IoGetDeviceProperty(
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ DEVICE_REGISTRY_PROPERTY DeviceProperty,
    _In_ ULONG BufferLength,
    _Out_writes_bytes_opt_(BufferLength) PVOID PropertyBuffer,
    _Out_ _Deref_out_range_(<=, BufferLength) PULONG ResultLength
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
_Must_inspect_result_
NTKERNELAPI
NTSTATUS
IoOpenDeviceRegistryKey(
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ ULONG DevInstKeyType,
    _In_ ACCESS_MASK DesiredAccess,
    _Out_ PHANDLE DeviceRegKey
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
_Must_inspect_result_
NTKERNELAPI
NTSTATUS
NTAPI
IoRegisterDeviceInterface(
    _In_ PDEVICE_OBJECT PhysicalDeviceObject,
    _In_ CONST GUID *InterfaceClassGuid,
    _In_opt_ PUNICODE_STRING ReferenceString,
    _Out_ _When_(return==0,
                     _At_(SymbolicLinkName->Buffer, __drv_allocatesMem(Mem)))
    PUNICODE_STRING SymbolicLinkName
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
_Must_inspect_result_
NTKERNELAPI
NTSTATUS
IoOpenDeviceInterfaceRegistryKey(
    _In_ PUNICODE_STRING SymbolicLinkName,
    _In_ ACCESS_MASK DesiredAccess,
    _Out_ PHANDLE DeviceInterfaceRegKey
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
_Must_inspect_result_
NTKERNELAPI
NTSTATUS
IoSetDeviceInterfaceState(
    _In_ PUNICODE_STRING SymbolicLinkName,
    _In_ BOOLEAN Enable
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
_Must_inspect_result_
NTKERNELAPI
NTSTATUS
NTAPI
IoGetDeviceInterfaces(
    _In_ CONST GUID *InterfaceClassGuid,
    _In_opt_ PDEVICE_OBJECT PhysicalDeviceObject,
    _In_ ULONG Flags,
    _Outptr_result_nullonfailure_
    _At_(*SymbolicLinkList,
        _When_(return==0, __drv_allocatesMem(Mem)))
    PZZWSTR *SymbolicLinkList
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
_Must_inspect_result_
NTKERNELAPI
NTSTATUS
NTAPI
IoGetDeviceInterfaceAlias(
    _In_ PUNICODE_STRING SymbolicLinkName,
    _In_ CONST GUID *AliasInterfaceClassGuid,
    _Out_
    _When_(return==0,
               _At_(AliasSymbolicLinkName->Buffer, __drv_allocatesMem(Mem)))
    PUNICODE_STRING AliasSymbolicLinkName
    );
typedef enum _IO_NOTIFICATION_EVENT_CATEGORY {
    EventCategoryReserved,
    EventCategoryHardwareProfileChange,
    EventCategoryDeviceInterfaceChange,
    EventCategoryTargetDeviceChange,
    EventCategoryKernelSoftRestart,
} IO_NOTIFICATION_EVENT_CATEGORY;
typedef
_Function_class_(DRIVER_NOTIFICATION_CALLBACK_ROUTINE)
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
DRIVER_NOTIFICATION_CALLBACK_ROUTINE (
    _In_ PVOID NotificationStructure,
    _Inout_opt_ PVOID Context
);
typedef DRIVER_NOTIFICATION_CALLBACK_ROUTINE
    *PDRIVER_NOTIFICATION_CALLBACK_ROUTINE;
_IRQL_requires_max_(PASSIVE_LEVEL)
_Must_inspect_result_
NTKERNELAPI
NTSTATUS
IoRegisterPlugPlayNotification(
    _In_ IO_NOTIFICATION_EVENT_CATEGORY EventCategory,
    _In_ ULONG EventCategoryFlags,
    _In_opt_ PVOID EventCategoryData,
    _In_ PDRIVER_OBJECT DriverObject,
    _In_ PDRIVER_NOTIFICATION_CALLBACK_ROUTINE CallbackRoutine,
    _Inout_opt_ __drv_aliasesMem PVOID Context,
    _Outptr_result_nullonfailure_
    _At_(*NotificationEntry,
        _When_(return==0, __drv_allocatesMem(Mem)))
    PVOID *NotificationEntry
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTKERNELAPI
NTSTATUS
IoUnregisterPlugPlayNotification(
    _In_ __drv_freesMem(Pool) PVOID NotificationEntry
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTKERNELAPI
NTSTATUS
IoUnregisterPlugPlayNotificationEx(
    _In_ __drv_freesMem(Pool) PVOID NotificationEntry
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTKERNELAPI
NTSTATUS
IoReportTargetDeviceChange(
    _In_ PDEVICE_OBJECT PhysicalDeviceObject,
    _In_ PVOID NotificationStructure
    );
typedef
_Function_class_(DEVICE_CHANGE_COMPLETE_CALLBACK)
_IRQL_requires_same_
VOID
DEVICE_CHANGE_COMPLETE_CALLBACK(
    _Inout_opt_ PVOID Context
    );
typedef DEVICE_CHANGE_COMPLETE_CALLBACK *PDEVICE_CHANGE_COMPLETE_CALLBACK;
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
VOID
IoInvalidateDeviceState(
    _In_ PDEVICE_OBJECT PhysicalDeviceObject
    );
    if (_paging_) { \
        InterlockedIncrement(_count_); \
    } else { \
        InterlockedDecrement(_count_); \
    } \
}
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
NTSTATUS
IoReportTargetDeviceChangeAsynchronous(
    _In_ PDEVICE_OBJECT PhysicalDeviceObject,
    _In_ PVOID NotificationStructure,
    _In_opt_ PDEVICE_CHANGE_COMPLETE_CALLBACK Callback,
    _In_opt_ PVOID Context
    );
typedef enum _DRIVER_DIRECTORY_TYPE {
    DriverDirectoryImage = 0,
    DriverDirectoryData = 1,
} DRIVER_DIRECTORY_TYPE, *PDRIVER_DIRECTORY_TYPE;
_IRQL_requires_max_(PASSIVE_LEVEL)
_Must_inspect_result_
NTKERNELAPI
NTSTATUS
IoGetDriverDirectory(
    _In_ PDRIVER_OBJECT DriverObject,
    _In_ DRIVER_DIRECTORY_TYPE DirectoryType,
    _In_ ULONG Flags,
    _Out_ PHANDLE DriverDirectoryHandle
    );
typedef enum _DEVICE_DIRECTORY_TYPE {
    DeviceDirectoryData = 0,
} DEVICE_DIRECTORY_TYPE, *PDEVICE_DIRECTORY_TYPE;
_IRQL_requires_max_(PASSIVE_LEVEL)
_Must_inspect_result_
NTKERNELAPI
NTSTATUS
IoGetDeviceDirectory(
    _In_ PDEVICE_OBJECT PhysicalDeviceObject,
    _In_ DEVICE_DIRECTORY_TYPE DirectoryType,
    _In_ ULONG Flags,
    _In_ PVOID Reserved,
    _Out_ PHANDLE DeviceDirectoryHandle
    );
typedef enum _DRIVER_REGKEY_TYPE {
    DriverRegKeyParameters = 0,
    DriverRegKeyPersistentState = 1,
} DRIVER_REGKEY_TYPE, *PDRIVER_REGKEY_TYPE;
_IRQL_requires_max_(PASSIVE_LEVEL)
_Must_inspect_result_
NTKERNELAPI
NTSTATUS
IoOpenDriverRegistryKey(
    _In_ PDRIVER_OBJECT DriverObject,
    _In_ DRIVER_REGKEY_TYPE RegKeyType,
    _In_ ACCESS_MASK DesiredAccess,
    _In_ ULONG Flags,
    _Out_ PHANDLE DriverRegKey
    );
typedef struct _PLUGPLAY_NOTIFICATION_HEADER {
    USHORT Version;
    USHORT Size;
    GUID Event;
} PLUGPLAY_NOTIFICATION_HEADER, *PPLUGPLAY_NOTIFICATION_HEADER;
typedef struct _HWPROFILE_CHANGE_NOTIFICATION {
    USHORT Version;
    USHORT Size;
    GUID Event;
} HWPROFILE_CHANGE_NOTIFICATION, *PHWPROFILE_CHANGE_NOTIFICATION;
typedef struct _DEVICE_INTERFACE_CHANGE_NOTIFICATION {
    USHORT Version;
    USHORT Size;
    GUID Event;
    GUID InterfaceClassGuid;
    PUNICODE_STRING SymbolicLinkName;
} DEVICE_INTERFACE_CHANGE_NOTIFICATION, *PDEVICE_INTERFACE_CHANGE_NOTIFICATION;
typedef struct _TARGET_DEVICE_REMOVAL_NOTIFICATION {
    USHORT Version;
    USHORT Size;
    GUID Event;
    PFILE_OBJECT FileObject;
} TARGET_DEVICE_REMOVAL_NOTIFICATION, *PTARGET_DEVICE_REMOVAL_NOTIFICATION;
typedef struct _KERNEL_SOFT_RESTART_NOTIFICATION {
    USHORT Version;
    USHORT Size;
    GUID Event;
} KERNEL_SOFT_RESTART_NOTIFICATION, *PKERNEL_SOFT_RESTART_NOTIFICATION;
typedef struct _TARGET_DEVICE_CUSTOM_NOTIFICATION {
    USHORT Version;
    USHORT Size;
    GUID Event;
    PFILE_OBJECT FileObject;
    LONG NameBufferOffset;
    UCHAR CustomDataBuffer[1];
} TARGET_DEVICE_CUSTOM_NOTIFICATION, *PTARGET_DEVICE_CUSTOM_NOTIFICATION;
#include <devpropdef.h>
_IRQL_requires_max_(PASSIVE_LEVEL)
_Must_inspect_result_
NTKERNELAPI
NTSTATUS
IoSetDevicePropertyData (
    _In_ PDEVICE_OBJECT Pdo,
    _In_ CONST DEVPROPKEY *PropertyKey,
    _In_ LCID Lcid,
    _In_ ULONG Flags,
    _In_ DEVPROPTYPE Type,
    _In_ ULONG Size,
    _In_reads_bytes_opt_(Size)
         PVOID Data
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
_Must_inspect_result_
NTKERNELAPI
NTSTATUS
IoGetDevicePropertyData (
    _In_ PDEVICE_OBJECT Pdo,
    _In_ CONST DEVPROPKEY *PropertyKey,
    _In_ LCID Lcid,
    _Reserved_ ULONG Flags,
    _In_ ULONG Size,
    _Out_writes_bytes_to_(Size, *RequiredSize)
          PVOID Data,
    _Out_ PULONG RequiredSize,
    _Out_ PDEVPROPTYPE Type
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
_Must_inspect_result_
NTKERNELAPI
NTSTATUS
IoSetDeviceInterfacePropertyData (
    _In_ PUNICODE_STRING SymbolicLinkName,
    _In_ CONST DEVPROPKEY *PropertyKey,
    _In_ LCID Lcid,
    _In_ ULONG Flags,
    _In_ DEVPROPTYPE Type,
    _In_ ULONG Size,
    _In_reads_bytes_opt_(Size)
         PVOID Data
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
_Must_inspect_result_
NTKERNELAPI
NTSTATUS
IoGetDeviceInterfacePropertyData (
    _In_ PUNICODE_STRING SymbolicLinkName,
    _In_ CONST DEVPROPKEY *PropertyKey,
    _In_ LCID Lcid,
    _Reserved_ ULONG Flags,
    _In_ ULONG Size,
    _Out_writes_bytes_to_(Size, *RequiredSize)
          PVOID Data,
    _Out_ PULONG RequiredSize,
    _Out_ PDEVPROPTYPE Type
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
_Must_inspect_result_
NTKERNELAPI
NTSTATUS
IoGetDeviceNumaNode (
    _In_ PDEVICE_OBJECT Pdo,
    _Out_ PUSHORT NodeNumber
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
_Must_inspect_result_
NTKERNELAPI
NTSTATUS
NTAPI
IoReplacePartitionUnit (
    _In_ PDEVICE_OBJECT TargetPdo,
    _In_ PDEVICE_OBJECT SparePdo,
    _In_ ULONG Flags
    );
typedef struct _PNP_REPLACE_DRIVER_INTERFACE *PPNP_REPLACE_DRIVER_INTERFACE;
typedef
_Must_inspect_result_
NTSTATUS
(*PREPLACE_DRIVER_INIT) (
    _Inout_ PPNP_REPLACE_DRIVER_INTERFACE Interface,
    _In_ PVOID Unused
    );
typedef
_Must_inspect_result_
NTSTATUS
(*PREPLACE_MAP_MEMORY) (
    _In_ PHYSICAL_ADDRESS TargetPhysicalAddress,
    _In_ PHYSICAL_ADDRESS SparePhysicalAddress,
    _Inout_ PLARGE_INTEGER NumberOfBytes,
    _Outptr_ PVOID *TargetAddress,
    _Outptr_ PVOID *SpareAddress
    );
typedef struct _PNP_REPLACE_MEMORY_LIST {
    ULONG AllocatedCount;
    ULONG Count;
    ULONGLONG TotalLength;
    struct {
        PHYSICAL_ADDRESS Address;
        ULONGLONG Length;
    } Ranges[ANYSIZE_ARRAY];
} PNP_REPLACE_MEMORY_LIST, *PPNP_REPLACE_MEMORY_LIST;
typedef struct _PNP_REPLACE_PROCESSOR_LIST {
    PKAFFINITY Affinity;
    ULONG GroupCount;
    ULONG AllocatedCount;
    ULONG Count;
    ULONG ApicIds[ANYSIZE_ARRAY];
} PNP_REPLACE_PROCESSOR_LIST, *PPNP_REPLACE_PROCESSOR_LIST;
typedef struct _PNP_REPLACE_PROCESSOR_LIST_V1 {
    KAFFINITY AffinityMask;
    ULONG AllocatedCount;
    ULONG Count;
    ULONG ApicIds[ANYSIZE_ARRAY];
} PNP_REPLACE_PROCESSOR_LIST_V1, *PPNP_REPLACE_PROCESSOR_LIST_V1;
typedef struct _PNP_REPLACE_PARAMETERS {
    ULONG Size;
    ULONG Version;
    ULONG64 Target;
    ULONG64 Spare;
    PPNP_REPLACE_PROCESSOR_LIST TargetProcessors;
    PPNP_REPLACE_PROCESSOR_LIST SpareProcessors;
    PPNP_REPLACE_MEMORY_LIST TargetMemory;
    PPNP_REPLACE_MEMORY_LIST SpareMemory;
    PREPLACE_MAP_MEMORY MapMemory;
} PNP_REPLACE_PARAMETERS, *PPNP_REPLACE_PARAMETERS;
typedef
VOID
(*PREPLACE_UNLOAD) (
    VOID
    );
typedef
_Must_inspect_result_
NTSTATUS
(*PREPLACE_BEGIN) (
    _In_ PPNP_REPLACE_PARAMETERS Parameters,
    _Outptr_ PVOID *Context
);
typedef
_Must_inspect_result_
NTSTATUS
(*PREPLACE_END) (
    _In_ PVOID Context
    );
typedef
_Must_inspect_result_
NTSTATUS
(*PREPLACE_MIRROR_PHYSICAL_MEMORY) (
    _In_ PVOID Context,
    _In_ PHYSICAL_ADDRESS PhysicalAddress,
    _In_ LARGE_INTEGER ByteCount
    );
typedef
_Must_inspect_result_
NTSTATUS
(*PREPLACE_SET_PROCESSOR_ID) (
    _In_ PVOID Context,
    _In_ ULONG ApicId,
    _In_ BOOLEAN Target
    );
typedef
_Must_inspect_result_
NTSTATUS
(*PREPLACE_SWAP) (
    _In_ PVOID Context
    );
typedef
_Must_inspect_result_
NTSTATUS
(*PREPLACE_INITIATE_HARDWARE_MIRROR) (
    _In_ PVOID Context
    );
typedef
_Must_inspect_result_
NTSTATUS
(*PREPLACE_MIRROR_PLATFORM_MEMORY) (
    _In_ PVOID Context
    );
typedef
_Must_inspect_result_
NTSTATUS
(*PREPLACE_GET_MEMORY_DESTINATION) (
    _In_ PVOID Context,
    _In_ PHYSICAL_ADDRESS SourceAddress,
    _Out_ PPHYSICAL_ADDRESS DestinationAddress
    );
typedef
_Must_inspect_result_ NTSTATUS
(*PREPLACE_ENABLE_DISABLE_HARDWARE_QUIESCE) (
    _In_ PVOID Context,
    _In_ BOOLEAN Enable
    );
             UFIELD_OFFSET(PNP_REPLACE_DRIVER_INTERFACE, InitiateHardwareMirror)
typedef struct _PNP_REPLACE_DRIVER_INTERFACE {
    ULONG Size;
    ULONG Version;
    ULONG Flags;
    PREPLACE_UNLOAD Unload;
    PREPLACE_BEGIN BeginReplace;
    PREPLACE_END EndReplace;
    PREPLACE_MIRROR_PHYSICAL_MEMORY MirrorPhysicalMemory;
    PREPLACE_SET_PROCESSOR_ID SetProcessorId;
    PREPLACE_SWAP Swap;
    PREPLACE_INITIATE_HARDWARE_MIRROR InitiateHardwareMirror;
    PREPLACE_MIRROR_PLATFORM_MEMORY MirrorPlatformMemory;
    PREPLACE_GET_MEMORY_DESTINATION GetMemoryDestination;
    PREPLACE_ENABLE_DISABLE_HARDWARE_QUIESCE EnableDisableHardwareQuiesce;
} PNP_REPLACE_DRIVER_INTERFACE, *PPNP_REPLACE_DRIVER_INTERFACE;
typedef
NTSTATUS
(*PCRASHDUMP_POWER_ON)(
    _In_opt_ PVOID Context
    );
typedef struct _CRASHDUMP_FUNCTIONS_INTERFACE {
    USHORT Size;
    USHORT Version;
    PVOID Context;
    PINTERFACE_REFERENCE InterfaceReference;
    PINTERFACE_DEREFERENCE InterfaceDereference;
    PCRASHDUMP_POWER_ON PowerOn;
} CRASHDUMP_FUNCTIONS_INTERFACE, *PCRASHDUMP_FUNCTIONS_INTERFACE;
typedef enum _DEVICE_RESET_TYPE
{
    FunctionLevelDeviceReset,
    PlatformLevelDeviceReset
} DEVICE_RESET_TYPE;
typedef
VOID
(DEVICE_RESET_COMPLETION)(
    _In_ NTSTATUS Status,
    _Inout_opt_ PVOID Context
    );
typedef DEVICE_RESET_COMPLETION *PDEVICE_RESET_COMPLETION;
typedef struct _FUNCTION_LEVEL_DEVICE_RESET_PARAMETERS {
    ULONG Size;
    PDEVICE_RESET_COMPLETION DeviceResetCompletion;
    PVOID CompletionContext;
} FUNCTION_LEVEL_DEVICE_RESET_PARAMETERS, *PFUNCTION_LEVEL_DEVICE_RESET_PARAMETERS;
typedef
NTSTATUS
(*PDEVICE_RESET_HANDLER)(
    _In_ PVOID InterfaceContext,
    _In_ DEVICE_RESET_TYPE ResetType,
    _In_ ULONG Flags,
    _In_opt_ PVOID ResetParameters
    );
typedef struct _DEVICE_RESET_INTERFACE_STANDARD {
    USHORT Size;
    USHORT Version;
    PVOID Context;
    PINTERFACE_REFERENCE InterfaceReference;
    PINTERFACE_DEREFERENCE InterfaceDereference;
    PDEVICE_RESET_HANDLER DeviceReset;
    ULONG SupportedResetTypes;
    PVOID Reserved;
} DEVICE_RESET_INTERFACE_STANDARD, *PDEVICE_RESET_INTERFACE_STANDARD;
typedef
_IRQL_requires_same_
_IRQL_requires_max_(PASSIVE_LEVEL)
_Function_class_(SECURE_DRIVER_PROCESS_REFERENCE)
PEPROCESS
SECURE_DRIVER_PROCESS_REFERENCE (
    _In_ PVOID InterfaceContext
    );
typedef SECURE_DRIVER_PROCESS_REFERENCE *PSECURE_DRIVER_PROCESS_REFERENCE;
typedef
_IRQL_requires_same_
_IRQL_requires_max_(PASSIVE_LEVEL)
_Function_class_(SECURE_DRIVER_PROCESS_DEREFERENCE)
VOID
SECURE_DRIVER_PROCESS_DEREFERENCE (
    _In_ PVOID InterfaceContext,
    _In_ PEPROCESS Process
    );
typedef SECURE_DRIVER_PROCESS_DEREFERENCE *PSECURE_DRIVER_PROCESS_DEREFERENCE;
typedef struct _SECURE_DRIVER_INTERFACE {
    INTERFACE InterfaceHeader;
    PSECURE_DRIVER_PROCESS_REFERENCE ProcessReference;
    PSECURE_DRIVER_PROCESS_DEREFERENCE ProcessDereference;
    ULONG Reserved;
} SECURE_DRIVER_INTERFACE, *PSECURE_DRIVER_INTERFACE;
typedef
_IRQL_requires_same_
_IRQL_requires_max_(PASSIVE_LEVEL)
_Function_class_(GET_SDEV_IDENTIFIER)
ULONGLONG
GET_SDEV_IDENTIFIER (
    _In_ PVOID InterfaceContext
    );
typedef GET_SDEV_IDENTIFIER *PGET_SDEV_IDENTIFIER;
typedef struct _SDEV_IDENTIFIER_INTERFACE {
    INTERFACE InterfaceHeader;
    PGET_SDEV_IDENTIFIER GetIdentifier;
} SDEV_IDENTIFIER_INTERFACE, *PSDEV_IDENTIFIER_INTERFACE;
typedef struct _DEVICE_DESCRIPTION {
    ULONG Version;
    BOOLEAN Master;
    BOOLEAN ScatterGather;
    BOOLEAN DemandMode;
    BOOLEAN AutoInitialize;
    BOOLEAN Dma32BitAddresses;
    BOOLEAN IgnoreCount;
    BOOLEAN Reserved1;
    BOOLEAN Dma64BitAddresses;
    ULONG BusNumber;
    ULONG DmaChannel;
    INTERFACE_TYPE InterfaceType;
    DMA_WIDTH DmaWidth;
    DMA_SPEED DmaSpeed;
    ULONG MaximumLength;
    ULONG DmaPort;
    ULONG DmaAddressWidth;
    ULONG DmaControllerInstance;
    ULONG DmaRequestLine;
    PHYSICAL_ADDRESS DeviceAddress;
} DEVICE_DESCRIPTION, *PDEVICE_DESCRIPTION;
typedef struct _DMA_ADAPTER_INFO_V1 {
    ULONG ReadDmaCounterAvailable;
    ULONG ScatterGatherLimit;
    ULONG DmaAddressWidth;
    ULONG Flags;
    ULONG MinimumTransferUnit;
} DMA_ADAPTER_INFO_V1, *PDMA_ADAPTER_INFO_V1;
typedef struct _DMA_ADAPTER_INFO {
    ULONG Version;
    union {
        DMA_ADAPTER_INFO_V1 V1;
    };
} DMA_ADAPTER_INFO, *PDMA_ADAPTER_INFO;
typedef struct _DMA_TRANSFER_INFO_V1 {
    ULONG MapRegisterCount;
    ULONG ScatterGatherElementCount;
    ULONG ScatterGatherListSize;
} DMA_TRANSFER_INFO_V1, *PDMA_TRANSFER_INFO_V1;
typedef struct _DMA_TRANSFER_INFO_V2 {
    ULONG MapRegisterCount;
    ULONG ScatterGatherElementCount;
    ULONG ScatterGatherListSize;
    ULONG LogicalPageCount;
} DMA_TRANSFER_INFO_V2, *PDMA_TRANSFER_INFO_V2;
typedef struct _DMA_TRANSFER_INFO {
    ULONG Version;
    union {
        DMA_TRANSFER_INFO_V1 V1;
        DMA_TRANSFER_INFO_V2 V2;
    };
} DMA_TRANSFER_INFO, *PDMA_TRANSFER_INFO;
NTHALAPI
VOID
KeFlushWriteBuffer (
    VOID
    );
NTHALAPI
LARGE_INTEGER
KeQueryPerformanceCounter (
   _Out_opt_ PLARGE_INTEGER PerformanceFrequency
   );
NTHALAPI
VOID
KeStallExecutionProcessor (
    _In_ ULONG MicroSeconds
    );
typedef
NTSTATUS
PROCESSOR_HALT_ROUTINE (
    _Inout_opt_ PVOID Context
    );
typedef PROCESSOR_HALT_ROUTINE *PPROCESSOR_HALT_ROUTINE;
typedef struct _SCATTER_GATHER_ELEMENT {
    PHYSICAL_ADDRESS Address;
    ULONG Length;
    ULONG_PTR Reserved;
} SCATTER_GATHER_ELEMENT, *PSCATTER_GATHER_ELEMENT;
struct _SCATTER_GATHER_LIST;
typedef struct _SCATTER_GATHER_LIST SCATTER_GATHER_LIST, *PSCATTER_GATHER_LIST;
typedef struct _DMA_OPERATIONS *PDMA_OPERATIONS;
typedef struct _DMA_ADAPTER {
    USHORT Version;
    USHORT Size;
    PDMA_OPERATIONS DmaOperations;
} DMA_ADAPTER, *PDMA_ADAPTER;
typedef enum {
    DmaComplete,
    DmaAborted,
    DmaError,
    DmaCancelled
} DMA_COMPLETION_STATUS;
typedef VOID (*PPUT_DMA_ADAPTER)(
    PDMA_ADAPTER DmaAdapter
    );
typedef PVOID (*PALLOCATE_COMMON_BUFFER)(
    _In_ PDMA_ADAPTER DmaAdapter,
    _In_ ULONG Length,
    _Out_ PPHYSICAL_ADDRESS LogicalAddress,
    _In_ BOOLEAN CacheEnabled
    );
typedef VOID (*PFREE_COMMON_BUFFER)(
    _In_ PDMA_ADAPTER DmaAdapter,
    _In_ ULONG Length,
    _In_ PHYSICAL_ADDRESS LogicalAddress,
    _In_ PVOID VirtualAddress,
    _In_ BOOLEAN CacheEnabled
    );
typedef NTSTATUS (*PALLOCATE_ADAPTER_CHANNEL)(
    _In_ PDMA_ADAPTER DmaAdapter,
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ ULONG NumberOfMapRegisters,
    _In_ PDRIVER_CONTROL ExecutionRoutine,
    _In_ PVOID Context
    );
typedef BOOLEAN (*PFLUSH_ADAPTER_BUFFERS)(
    _In_ PDMA_ADAPTER DmaAdapter,
    _In_ PMDL Mdl,
    _In_ PVOID MapRegisterBase,
    _In_ PVOID CurrentVa,
    _In_ ULONG Length,
    _In_ BOOLEAN WriteToDevice
    );
typedef VOID (*PFREE_ADAPTER_CHANNEL)(
    _In_ PDMA_ADAPTER DmaAdapter
    );
typedef VOID (*PFREE_ADAPTER_OBJECT)(
    _In_ PDMA_ADAPTER DmaAdapter,
    _In_ IO_ALLOCATION_ACTION AllocationAction
    );
typedef VOID (*PFREE_MAP_REGISTERS)(
    _In_ PDMA_ADAPTER DmaAdapter,
    PVOID MapRegisterBase,
    ULONG NumberOfMapRegisters
    );
typedef PHYSICAL_ADDRESS (*PMAP_TRANSFER)(
    _In_ PDMA_ADAPTER DmaAdapter,
    _In_ PMDL Mdl,
    _In_ PVOID MapRegisterBase,
    _In_ PVOID CurrentVa,
    _Inout_ PULONG Length,
    _In_ BOOLEAN WriteToDevice
    );
typedef ULONG (*PGET_DMA_ALIGNMENT)(
    _In_ PDMA_ADAPTER DmaAdapter
    );
typedef ULONG (*PREAD_DMA_COUNTER)(
    _In_ PDMA_ADAPTER DmaAdapter
    );
typedef
_Function_class_(DRIVER_LIST_CONTROL)
_IRQL_requires_same_
VOID
DRIVER_LIST_CONTROL(
    _In_ struct _DEVICE_OBJECT *DeviceObject,
    _In_ struct _IRP *Irp,
    _In_ PSCATTER_GATHER_LIST ScatterGather,
    _In_ PVOID Context
    );
typedef DRIVER_LIST_CONTROL *PDRIVER_LIST_CONTROL;
typedef NTSTATUS
(*PGET_SCATTER_GATHER_LIST)(
    _In_ PDMA_ADAPTER DmaAdapter,
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ PMDL Mdl,
    _In_ PVOID CurrentVa,
    _In_ ULONG Length,
    _In_ PDRIVER_LIST_CONTROL ExecutionRoutine,
    _In_ PVOID Context,
    _In_ BOOLEAN WriteToDevice
    );
typedef VOID
(*PPUT_SCATTER_GATHER_LIST)(
    _In_ PDMA_ADAPTER DmaAdapter,
    _In_ PSCATTER_GATHER_LIST ScatterGather,
    _In_ BOOLEAN WriteToDevice
    );
typedef NTSTATUS
(*PCALCULATE_SCATTER_GATHER_LIST_SIZE)(
     _In_ PDMA_ADAPTER DmaAdapter,
     _In_ OPTIONAL PMDL Mdl,
     _In_ PVOID CurrentVa,
     _In_ ULONG Length,
     _Out_ PULONG ScatterGatherListSize,
     _Out_ OPTIONAL PULONG pNumberOfMapRegisters
     );
typedef NTSTATUS
(*PBUILD_SCATTER_GATHER_LIST)(
     _In_ PDMA_ADAPTER DmaAdapter,
     _In_ PDEVICE_OBJECT DeviceObject,
     _In_ PMDL Mdl,
     _In_ PVOID CurrentVa,
     _In_ ULONG Length,
     _In_ PDRIVER_LIST_CONTROL ExecutionRoutine,
     _In_ PVOID Context,
     _In_ BOOLEAN WriteToDevice,
     _In_ PVOID ScatterGatherBuffer,
     _In_ ULONG ScatterGatherLength
     );
typedef NTSTATUS
(*PBUILD_MDL_FROM_SCATTER_GATHER_LIST)(
    _In_ PDMA_ADAPTER DmaAdapter,
    _In_ PSCATTER_GATHER_LIST ScatterGather,
    _In_ PMDL OriginalMdl,
    _Out_ PMDL *TargetMdl
    );
typedef NTSTATUS
(*PGET_DMA_ADAPTER_INFO)(
    _In_ PDMA_ADAPTER DmaAdapter,
    _Inout_ PDMA_ADAPTER_INFO AdapterInfo
    );
typedef NTSTATUS
(*PGET_DMA_TRANSFER_INFO)(
    _In_ PDMA_ADAPTER DmaAdapter,
    _In_ PMDL Mdl,
    _In_ ULONGLONG Offset,
    _In_ ULONG Length,
    _In_ BOOLEAN WriteOnly,
    _Inout_ PDMA_TRANSFER_INFO TransferInfo
    );
typedef NTSTATUS
(*PCONFIGURE_ADAPTER_CHANNEL)(
    _In_ PDMA_ADAPTER DmaAdapter,
    _In_ ULONG FunctionNumber,
    _In_ PVOID Context
    );
typedef NTSTATUS
(*PINITIALIZE_DMA_TRANSFER_CONTEXT)(
    _In_ PDMA_ADAPTER DmaAdapter,
    _Out_ PVOID DmaTransferContext
    );
typedef PVOID
(*PALLOCATE_COMMON_BUFFER_EX)(
    _In_ PDMA_ADAPTER DmaAdapter,
    _In_opt_ PPHYSICAL_ADDRESS MaximumAddress,
    _In_ ULONG Length,
    _Out_ PPHYSICAL_ADDRESS LogicalAddress,
    _In_ BOOLEAN CacheEnabled,
    _In_ NODE_REQUIREMENT PreferredNode
    );
typedef NTSTATUS
(*PALLOCATE_ADAPTER_CHANNEL_EX)(
    _In_ PDMA_ADAPTER DmaAdapter,
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ PVOID DmaTransferContext,
    _In_ ULONG NumberOfMapRegisters,
    _In_ ULONG Flags,
    _In_opt_ PDRIVER_CONTROL ExecutionRoutine,
    _In_opt_ PVOID ExecutionContext,
    _Out_opt_ PVOID *MapRegisterBase
    );
typedef VOID
_Function_class_(DMA_COMPLETION_ROUTINE)
_IRQL_requires_max_(DISPATCH_LEVEL)
_IRQL_requires_min_(DISPATCH_LEVEL)
DMA_COMPLETION_ROUTINE(
    _In_ PDMA_ADAPTER DmaAdapter,
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ PVOID CompletionContext,
    _In_ DMA_COMPLETION_STATUS Status
    );
typedef DMA_COMPLETION_ROUTINE *PDMA_COMPLETION_ROUTINE;
typedef NTSTATUS
(*PMAP_TRANSFER_EX)(
    _In_ PDMA_ADAPTER DmaAdapter,
    _In_ PMDL Mdl,
    _In_ PVOID MapRegisterBase,
    _In_ ULONGLONG Offset,
    _In_ ULONG DeviceOffset,
    _Inout_ PULONG Length,
    _In_ BOOLEAN WriteToDevice,
    _Out_writes_bytes_opt_(ScatterGatherBufferLength) PSCATTER_GATHER_LIST ScatterGatherBuffer,
    _In_ ULONG ScatterGatherBufferLength,
    _In_opt_ PDMA_COMPLETION_ROUTINE DmaCompletionRoutine,
    _In_opt_ PVOID CompletionContext
    );
typedef BOOLEAN
(*PCANCEL_ADAPTER_CHANNEL)(
    _In_ PDMA_ADAPTER DmaAdapter,
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ PVOID DmaTransferContext
    );
typedef NTSTATUS
(*PCANCEL_MAPPED_TRANSFER)(
    _In_ PDMA_ADAPTER DmaAdapter,
    _In_ PVOID DmaTransferContext
    );
typedef NTSTATUS
(*PFLUSH_ADAPTER_BUFFERS_EX)(
    _In_ PDMA_ADAPTER DmaAdapter,
    _In_ PMDL Mdl,
    _In_ PVOID MapRegisterBase,
    _In_ ULONGLONG Offset,
    _In_ ULONG Length,
    _In_ BOOLEAN WriteToDevice
    );
typedef NTSTATUS
(*PGET_SCATTER_GATHER_LIST_EX)(
    _In_ PDMA_ADAPTER DmaAdapter,
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ PVOID DmaTransferContext,
    _In_ PMDL Mdl,
    _In_ ULONGLONG Offset,
    _In_ ULONG Length,
    _In_ ULONG Flags,
    _In_opt_ PDRIVER_LIST_CONTROL ExecutionRoutine,
    _In_opt_ PVOID Context,
    _In_ BOOLEAN WriteToDevice,
    _In_opt_ PDMA_COMPLETION_ROUTINE DmaCompletionRoutine,
    _In_opt_ PVOID CompletionContext,
    _Out_opt_ PSCATTER_GATHER_LIST *ScatterGatherList
    );
typedef NTSTATUS
(*PBUILD_SCATTER_GATHER_LIST_EX)(
    _In_ PDMA_ADAPTER DmaAdapter,
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ PVOID DmaTransferContext,
    _In_ PMDL Mdl,
    _In_ ULONGLONG Offset,
    _In_ ULONG Length,
    _In_ ULONG Flags,
    _In_opt_ PDRIVER_LIST_CONTROL ExecutionRoutine,
    _In_opt_ PVOID Context,
    _In_ BOOLEAN WriteToDevice,
    _In_ PVOID ScatterGatherBuffer,
    _In_ ULONG ScatterGatherLength,
    _In_opt_ PDMA_COMPLETION_ROUTINE DmaCompletionRoutine,
    _In_opt_ PVOID CompletionContext,
    _Out_opt_ PVOID ScatterGatherList
    );
typedef NTSTATUS
(*PALLOCATE_DOMAIN_COMMON_BUFFER)(
    _In_ PDMA_ADAPTER DmaAdapter,
    _In_ HANDLE DomainHandle,
    _In_opt_ PPHYSICAL_ADDRESS MaximumAddress,
    _In_ ULONG Length,
    _In_ ULONG Flags,
    _In_opt_ MEMORY_CACHING_TYPE *CacheType,
    _In_ NODE_REQUIREMENT PreferredNode,
    _Out_ PPHYSICAL_ADDRESS LogicalAddress,
    _Out_ PVOID *VirtualAddress
    );
typedef PVOID
(*PALLOCATE_COMMON_BUFFER_WITH_BOUNDS)(
    _In_ PDMA_ADAPTER DmaAdapter,
    _In_opt_ PPHYSICAL_ADDRESS MinimumAddress,
    _In_opt_ PPHYSICAL_ADDRESS MaximumAddress,
    _In_ ULONG Length,
    _In_ ULONG Flags,
    _In_opt_ MEMORY_CACHING_TYPE *CacheType,
    _In_ NODE_REQUIREMENT PreferredNode,
    _Out_ PPHYSICAL_ADDRESS LogicalAddress
    );
typedef struct _DMA_COMMON_BUFFER_VECTOR DMA_COMMON_BUFFER_VECTOR,
                                         *PDMA_COMMON_BUFFER_VECTOR;
typedef NTSTATUS
(*PALLOCATE_COMMON_BUFFER_VECTOR)(
    _In_ PDMA_ADAPTER DmaAdapter,
    _In_ PHYSICAL_ADDRESS LowAddress,
    _In_ PHYSICAL_ADDRESS HighAddress,
    _In_ MEMORY_CACHING_TYPE CacheType,
    _In_ ULONG IdealNode,
    _In_ ULONG Flags,
    _In_ ULONG NumberOfElements,
    _In_ ULONGLONG SizeOfElements,
    _Out_ PDMA_COMMON_BUFFER_VECTOR *VectorOut
    );
typedef VOID
(*PGET_COMMON_BUFFER_FROM_VECTOR_BY_INDEX)(
    _In_ PDMA_ADAPTER DmaAdapter,
    _In_ PDMA_COMMON_BUFFER_VECTOR Vector,
    _In_ ULONG Index,
    _Out_ PVOID *VirtualAddressOut,
    _Out_ PPHYSICAL_ADDRESS LogicalAddressOut
    );
typedef VOID
(*PFREE_COMMON_BUFFER_FROM_VECTOR)(
    _In_ PDMA_ADAPTER DmaAdapter,
    _In_ PDMA_COMMON_BUFFER_VECTOR Vector,
    _In_ ULONG Index
    );
typedef VOID
(*PFREE_COMMON_BUFFER_VECTOR)(
    _In_ PDMA_ADAPTER DmaAdapter,
    _In_ PDMA_COMMON_BUFFER_VECTOR Vector
    );
typedef NTSTATUS
(*PFLUSH_DMA_BUFFER)(
    _In_ PDMA_ADAPTER DmaAdapter,
    _In_ PMDL Mdl,
    _In_ BOOLEAN ReadOperation
);
typedef NTSTATUS
(*PJOIN_DMA_DOMAIN)(
    _In_ PDMA_ADAPTER DmaAdapter,
    _In_ HANDLE DomainHandle
);
typedef NTSTATUS
(*PLEAVE_DMA_DOMAIN)(
    _In_ PDMA_ADAPTER DmaAdapter
);
typedef HANDLE
(*PGET_DMA_DOMAIN)(
    _In_ PDMA_ADAPTER DmaAdapter
);
typedef struct _DMA_OPERATIONS {
    ULONG Size;
    PPUT_DMA_ADAPTER PutDmaAdapter;
    PALLOCATE_COMMON_BUFFER AllocateCommonBuffer;
    PFREE_COMMON_BUFFER FreeCommonBuffer;
    PALLOCATE_ADAPTER_CHANNEL AllocateAdapterChannel;
    PFLUSH_ADAPTER_BUFFERS FlushAdapterBuffers;
    PFREE_ADAPTER_CHANNEL FreeAdapterChannel;
    PFREE_MAP_REGISTERS FreeMapRegisters;
    PMAP_TRANSFER MapTransfer;
    PGET_DMA_ALIGNMENT GetDmaAlignment;
    PREAD_DMA_COUNTER ReadDmaCounter;
    PGET_SCATTER_GATHER_LIST GetScatterGatherList;
    PPUT_SCATTER_GATHER_LIST PutScatterGatherList;
    PCALCULATE_SCATTER_GATHER_LIST_SIZE CalculateScatterGatherList;
    PBUILD_SCATTER_GATHER_LIST BuildScatterGatherList;
    PBUILD_MDL_FROM_SCATTER_GATHER_LIST BuildMdlFromScatterGatherList;
    PGET_DMA_ADAPTER_INFO GetDmaAdapterInfo;
    PGET_DMA_TRANSFER_INFO GetDmaTransferInfo;
    PINITIALIZE_DMA_TRANSFER_CONTEXT InitializeDmaTransferContext;
    PALLOCATE_COMMON_BUFFER_EX AllocateCommonBufferEx;
    PALLOCATE_ADAPTER_CHANNEL_EX AllocateAdapterChannelEx;
    PCONFIGURE_ADAPTER_CHANNEL ConfigureAdapterChannel;
    PCANCEL_ADAPTER_CHANNEL CancelAdapterChannel;
    PMAP_TRANSFER_EX MapTransferEx;
    PGET_SCATTER_GATHER_LIST_EX GetScatterGatherListEx;
    PBUILD_SCATTER_GATHER_LIST_EX BuildScatterGatherListEx;
    PFLUSH_ADAPTER_BUFFERS_EX FlushAdapterBuffersEx;
    PFREE_ADAPTER_OBJECT FreeAdapterObject;
    PCANCEL_MAPPED_TRANSFER CancelMappedTransfer;
    PALLOCATE_DOMAIN_COMMON_BUFFER AllocateDomainCommonBuffer;
    PFLUSH_DMA_BUFFER FlushDmaBuffer;
    PJOIN_DMA_DOMAIN JoinDmaDomain;
    PLEAVE_DMA_DOMAIN LeaveDmaDomain;
    PGET_DMA_DOMAIN GetDmaDomain;
    PALLOCATE_COMMON_BUFFER_WITH_BOUNDS AllocateCommonBufferWithBounds;
    PALLOCATE_COMMON_BUFFER_VECTOR AllocateCommonBufferVector;
    PGET_COMMON_BUFFER_FROM_VECTOR_BY_INDEX GetCommonBufferFromVectorByIndex;
    PFREE_COMMON_BUFFER_FROM_VECTOR FreeCommonBufferFromVector;
    PFREE_COMMON_BUFFER_VECTOR FreeCommonBufferVector;
} DMA_OPERATIONS;
DECLSPEC_DEPRECATED_DDK
__drv_preferredFunction("AllocateCommonBuffer","Obsolete")
FORCEINLINE
PVOID
HalAllocateCommonBuffer(
    _In_ PDMA_ADAPTER DmaAdapter,
    _In_ ULONG Length,
    _Out_ PPHYSICAL_ADDRESS LogicalAddress,
    _In_ BOOLEAN CacheEnabled
    ){
    PALLOCATE_COMMON_BUFFER allocateCommonBuffer;
    PVOID commonBuffer;
    allocateCommonBuffer = *(DmaAdapter)->DmaOperations->AllocateCommonBuffer;
    NT_ASSERT( allocateCommonBuffer != NULL );
    commonBuffer = allocateCommonBuffer( DmaAdapter,
                                         Length,
                                         LogicalAddress,
                                         CacheEnabled );
    return commonBuffer;
}
DECLSPEC_DEPRECATED_DDK
__drv_preferredFunction("FreeCommonBuffer","Obsolete")
FORCEINLINE
VOID
HalFreeCommonBuffer(
    _In_ PDMA_ADAPTER DmaAdapter,
    _In_ ULONG Length,
    _In_ PHYSICAL_ADDRESS LogicalAddress,
    _In_ PVOID VirtualAddress,
    _In_ BOOLEAN CacheEnabled
    ){
    PFREE_COMMON_BUFFER freeCommonBuffer;
    freeCommonBuffer = *(DmaAdapter)->DmaOperations->FreeCommonBuffer;
    NT_ASSERT( freeCommonBuffer != NULL );
    freeCommonBuffer( DmaAdapter,
                      Length,
                      LogicalAddress,
                      VirtualAddress,
                      CacheEnabled );
}
DECLSPEC_DEPRECATED_DDK
_IRQL_requires_max_(DISPATCH_LEVEL)
_IRQL_requires_min_(DISPATCH_LEVEL)
__drv_preferredFunction("AllocateAdapterChannel","obsolete")
FORCEINLINE
NTSTATUS
IoAllocateAdapterChannel(
    _In_ PDMA_ADAPTER DmaAdapter,
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ ULONG NumberOfMapRegisters,
    _In_ PDRIVER_CONTROL ExecutionRoutine,
    _In_ PVOID Context
    ){
    PALLOCATE_ADAPTER_CHANNEL allocateAdapterChannel;
    NTSTATUS status;
    allocateAdapterChannel =
        *(DmaAdapter)->DmaOperations->AllocateAdapterChannel;
    NT_ASSERT( allocateAdapterChannel != NULL );
    status = allocateAdapterChannel( DmaAdapter,
                                     DeviceObject,
                                     NumberOfMapRegisters,
                                     ExecutionRoutine,
                                     Context );
    return status;
}
DECLSPEC_DEPRECATED_DDK
__drv_preferredFunction("FlushAdapterBuffers","Obsolete")
FORCEINLINE
BOOLEAN
IoFlushAdapterBuffers(
    _In_ PDMA_ADAPTER DmaAdapter,
    _In_ PMDL Mdl,
    _In_ PVOID MapRegisterBase,
    _In_ PVOID CurrentVa,
    _In_ ULONG Length,
    _In_ BOOLEAN WriteToDevice
    ){
    PFLUSH_ADAPTER_BUFFERS flushAdapterBuffers;
    BOOLEAN result;
    flushAdapterBuffers = *(DmaAdapter)->DmaOperations->FlushAdapterBuffers;
    NT_ASSERT( flushAdapterBuffers != NULL );
    result = flushAdapterBuffers( DmaAdapter,
                                  Mdl,
                                  MapRegisterBase,
                                  CurrentVa,
                                  Length,
                                  WriteToDevice );
    return result;
}
DECLSPEC_DEPRECATED_DDK
__drv_preferredFunction("FreeAdapterChannel","Obsolete")
FORCEINLINE
VOID
IoFreeAdapterChannel(
    _In_ PDMA_ADAPTER DmaAdapter
    ){
    PFREE_ADAPTER_CHANNEL freeAdapterChannel;
    freeAdapterChannel = *(DmaAdapter)->DmaOperations->FreeAdapterChannel;
    NT_ASSERT( freeAdapterChannel != NULL );
    freeAdapterChannel( DmaAdapter );
}
DECLSPEC_DEPRECATED_DDK
__drv_preferredFunction("FreeMapRegisters","Obsolete")
FORCEINLINE
VOID
IoFreeMapRegisters(
    _In_ PDMA_ADAPTER DmaAdapter,
    _In_ PVOID MapRegisterBase,
    _In_ ULONG NumberOfMapRegisters
    ){
    PFREE_MAP_REGISTERS freeMapRegisters;
    freeMapRegisters = *(DmaAdapter)->DmaOperations->FreeMapRegisters;
    NT_ASSERT( freeMapRegisters != NULL );
    freeMapRegisters( DmaAdapter,
                      MapRegisterBase,
                      NumberOfMapRegisters );
}
DECLSPEC_DEPRECATED_DDK
__drv_preferredFunction("MapTransfer","Obsolete")
FORCEINLINE
PHYSICAL_ADDRESS
IoMapTransfer(
    _In_ PDMA_ADAPTER DmaAdapter,
    _In_ PMDL Mdl,
    _In_ PVOID MapRegisterBase,
    _In_ PVOID CurrentVa,
    _Inout_ PULONG Length,
    _In_ BOOLEAN WriteToDevice
    ){
    PHYSICAL_ADDRESS physicalAddress;
    PMAP_TRANSFER mapTransfer;
    mapTransfer = *(DmaAdapter)->DmaOperations->MapTransfer;
    NT_ASSERT( mapTransfer != NULL );
    physicalAddress = mapTransfer( DmaAdapter,
                                   Mdl,
                                   MapRegisterBase,
                                   CurrentVa,
                                   Length,
                                   WriteToDevice );
    return physicalAddress;
}
DECLSPEC_DEPRECATED_DDK
FORCEINLINE
ULONG
HalGetDmaAlignment(
    _In_ PDMA_ADAPTER DmaAdapter
    )
{
    PGET_DMA_ALIGNMENT getDmaAlignment;
    ULONG alignment;
    getDmaAlignment = *(DmaAdapter)->DmaOperations->GetDmaAlignment;
    NT_ASSERT( getDmaAlignment != NULL );
    alignment = getDmaAlignment( DmaAdapter );
    return alignment;
}
DECLSPEC_DEPRECATED_DDK
__drv_preferredFunction("ReadDmaCounter","Obsolete")
FORCEINLINE
ULONG
HalReadDmaCounter(
    _In_ PDMA_ADAPTER DmaAdapter
    )
{
    PREAD_DMA_COUNTER readDmaCounter;
    ULONG counter;
    readDmaCounter = *(DmaAdapter)->DmaOperations->ReadDmaCounter;
    NT_ASSERT( readDmaCounter != NULL );
    counter = readDmaCounter( DmaAdapter );
    return counter;
}
typedef struct _IOMMU_DMA_DOMAIN IOMMU_DMA_DOMAIN, *PIOMMU_DMA_DOMAIN;
typedef enum _FAULT_INFORMATION_ARCH {
    FaultInformationInvalid,
    FaultInformationArm64,
} FAULT_INFORMATION_ARCH, *PFAULT_INFORMATION_ARCH;
typedef enum _FAULT_INFORMATION_ARM64_TYPE {
    UnsupportedUpstreamTransaction,
    AddressSizeFault,
    TlbMatchConflict,
    ExternalFault,
    PermissionFault,
    AccessFlagFault,
    TranslationFault,
    MaxFaultType
} FAULT_INFORMATION_ARM64_TYPE, *PFAULT_INFORMATION_ARM64_TYPE;
typedef struct _FAULT_INFORMATION_ARM64_FLAGS {
    ULONG WriteNotRead : 1;
    ULONG InstructionNotData : 1;
    ULONG Privileged : 1;
    ULONG FaultAddressValid : 1;
    ULONG Reserved : 28;
} FAULT_INFORMATION_ARM64_FLAGS, *PFAULT_INFORMATION_ARM64_FLAGS;
typedef struct _FAULT_INFORMATION_ARM64 {
    PVOID DomainHandle;
    PVOID FaultAddress;
    PDEVICE_OBJECT PhysicalDeviceObject;
    ULONG InputMappingId;
    FAULT_INFORMATION_ARM64_FLAGS Flags;
    FAULT_INFORMATION_ARM64_TYPE Type;
} FAULT_INFORMATION_ARM64, *PFAULT_INFORMATION_ARM64;
typedef struct _FAULT_INFORMATION {
    FAULT_INFORMATION_ARCH Type;
    union {
        FAULT_INFORMATION_ARM64 Arm64;
    };
} FAULT_INFORMATION, *PFAULT_INFORMATION;
typedef enum _DOMAIN_CONFIGURATION_ARCH {
    DomainConfigurationArm64,
    DomainConfigurationInvalid,
} DOMAIN_CONFIGURATION_ARCH, *PDOMAIN_CONFIGURATION_ARCH;
typedef struct _DOMAIN_CONFIGURATION_ARM64 {
    PHYSICAL_ADDRESS Ttbr0;
    PHYSICAL_ADDRESS Ttbr1;
    ULONG Mair0;
    ULONG Mair1;
    UCHAR InputSize0;
    UCHAR InputSize1;
    BOOLEAN CoherentTableWalks;
    BOOLEAN TranslationEnabled;
} DOMAIN_CONFIGURATION_ARM64, *PDOMAIN_CONFIGURATION_ARM64;
typedef struct _DOMAIN_CONFIGURATION {
    DOMAIN_CONFIGURATION_ARCH Type;
    union {
        DOMAIN_CONFIGURATION_ARM64 Arm64;
    };
} DOMAIN_CONFIGURATION, *PDOMAIN_CONFIGURATION;
typedef VOID IOMMU_DEVICE_FAULT_HANDLER(
    PVOID Context,
    PFAULT_INFORMATION FaultInformation
    );
typedef IOMMU_DEVICE_FAULT_HANDLER *PIOMMU_DEVICE_FAULT_HANDLER;
typedef struct _DEVICE_FAULT_CONFIGURATION {
    PIOMMU_DEVICE_FAULT_HANDLER FaultHandler;
    PVOID FaultContext;
} DEVICE_FAULT_CONFIGURATION, *PDEVICE_FAULT_CONFIGURATION;
typedef _Function_class_(IOMMU_DOMAIN_CREATE)
NTSTATUS
IOMMU_DOMAIN_CREATE (
    _In_ BOOLEAN OsManagedPageTable,
    _Out_ PIOMMU_DMA_DOMAIN *DomainOut
    );
typedef IOMMU_DOMAIN_CREATE *PIOMMU_DOMAIN_CREATE;
typedef _Function_class_(IOMMU_DOMAIN_DELETE)
NTSTATUS
IOMMU_DOMAIN_DELETE (
    _In_ PIOMMU_DMA_DOMAIN Domain
    );
typedef IOMMU_DOMAIN_DELETE *PIOMMU_DOMAIN_DELETE;
typedef _Function_class_(IOMMU_DOMAIN_ATTACH_DEVICE)
NTSTATUS
IOMMU_DOMAIN_ATTACH_DEVICE (
    _In_ PIOMMU_DMA_DOMAIN Domain,
    _In_ PDEVICE_OBJECT PhysicalDeviceObject,
    _In_ ULONG InputMappingIdBase,
    _In_ ULONG MappingCount
    );
typedef IOMMU_DOMAIN_ATTACH_DEVICE *PIOMMU_DOMAIN_ATTACH_DEVICE;
typedef _Function_class_(IOMMU_DOMAIN_DETACH_DEVICE)
NTSTATUS
IOMMU_DOMAIN_DETACH_DEVICE (
    _In_ PIOMMU_DMA_DOMAIN Domain,
    _In_ PDEVICE_OBJECT PhysicalDeviceObject,
    _In_ ULONG InputMappingId
    );
typedef IOMMU_DOMAIN_DETACH_DEVICE *PIOMMU_DOMAIN_DETACH_DEVICE;
typedef _Function_class_(IOMMU_SET_DEVICE_FAULT_REPORTING)
NTSTATUS
IOMMU_SET_DEVICE_FAULT_REPORTING (
    _In_ PDEVICE_OBJECT PhysicalDeviceObject,
    _In_ ULONG InputMappingIdBase,
    _In_ BOOLEAN Enable,
    _In_opt_ PDEVICE_FAULT_CONFIGURATION FaultConfig
    );
typedef IOMMU_SET_DEVICE_FAULT_REPORTING *PIOMMU_SET_DEVICE_FAULT_REPORTING;
typedef _Function_class_(IOMMU_DOMAIN_CONFIGURE)
NTSTATUS
IOMMU_DOMAIN_CONFIGURE (
    _In_ PIOMMU_DMA_DOMAIN Domain,
    _In_ PDOMAIN_CONFIGURATION Configuration
    );
typedef IOMMU_DOMAIN_CONFIGURE *PIOMMU_DOMAIN_CONFIGURE;
typedef _Function_class_(IOMMU_FLUSH_DOMAIN)
_IRQL_requires_max_(HIGH_LEVEL)
NTSTATUS
IOMMU_FLUSH_DOMAIN (
    _In_ PIOMMU_DMA_DOMAIN Domain
    );
typedef IOMMU_FLUSH_DOMAIN *PIOMMU_FLUSH_DOMAIN;
typedef _Function_class_(IOMMU_FLUSH_DOMAIN_VA_LIST)
NTSTATUS
IOMMU_FLUSH_DOMAIN_VA_LIST (
    _In_ PIOMMU_DMA_DOMAIN Domain,
    _In_ BOOLEAN LastLevel,
    _In_ ULONG Number,
    _In_ PVOID VaList
    );
typedef IOMMU_FLUSH_DOMAIN_VA_LIST *PIOMMU_FLUSH_DOMAIN_VA_LIST;
typedef struct _INPUT_MAPPING_ELEMENT {
    ULONG InputMappingId;
} INPUT_MAPPING_ELEMENT, *PINPUT_MAPPING_ELEMENT;
typedef _Function_class_(IOMMU_QUERY_INPUT_MAPPINGS)
NTSTATUS
IOMMU_QUERY_INPUT_MAPPINGS (
    _In_ PDEVICE_OBJECT PhysicalDeviceObject,
    _Inout_ PINPUT_MAPPING_ELEMENT Buffer,
    _In_ ULONG BufferLength,
    _Out_opt_ PULONG ReturnLength
    );
typedef IOMMU_QUERY_INPUT_MAPPINGS *PIOMMU_QUERY_INPUT_MAPPINGS;
typedef _Function_class_(IOMMU_MAP_LOGICAL_RANGE)
NTSTATUS
IOMMU_MAP_LOGICAL_RANGE (
    _In_ PIOMMU_DMA_DOMAIN Domain,
    _In_ ULONG Permissions,
    _In_ PMDL Mdl,
    _In_ ULONGLONG LogicalAddress
    );
typedef IOMMU_MAP_LOGICAL_RANGE *PIOMMU_MAP_LOGICAL_RANGE;
typedef _Function_class_(IOMMU_UNMAP_LOGICAL_RANGE)
NTSTATUS
IOMMU_UNMAP_LOGICAL_RANGE (
    _In_ PIOMMU_DMA_DOMAIN Domain,
    _In_ ULONGLONG LogicalAddress,
    _In_ ULONGLONG NumberOfPages
    );
typedef IOMMU_UNMAP_LOGICAL_RANGE *PIOMMU_UNMAP_LOGICAL_RANGE;
typedef _Function_class_(IOMMU_MAP_IDENTITY_RANGE)
NTSTATUS
IOMMU_MAP_IDENTITY_RANGE (
    _In_ PIOMMU_DMA_DOMAIN Domain,
    _In_ ULONG Permissions,
    _In_ PMDL Mdl
    );
typedef IOMMU_MAP_IDENTITY_RANGE *PIOMMU_MAP_IDENTITY_RANGE;
typedef _Function_class_(IOMMU_UNMAP_IDENTITY_RANGE)
NTSTATUS
IOMMU_UNMAP_IDENTITY_RANGE (
    _In_ PIOMMU_DMA_DOMAIN Domain,
    _In_ PMDL Mdl
    );
typedef IOMMU_UNMAP_IDENTITY_RANGE *PIOMMU_UNMAP_IDENTITY_RANGE;
typedef struct _DMA_IOMMU_INTERFACE {
    ULONG Version;
    PIOMMU_DOMAIN_CREATE CreateDomain;
    PIOMMU_DOMAIN_DELETE DeleteDomain;
    PIOMMU_DOMAIN_ATTACH_DEVICE AttachDevice;
    PIOMMU_DOMAIN_DETACH_DEVICE DetachDevice;
    PIOMMU_FLUSH_DOMAIN FlushDomain;
    PIOMMU_FLUSH_DOMAIN_VA_LIST FlushDomainByVaList;
    PIOMMU_QUERY_INPUT_MAPPINGS QueryInputMappings;
    PIOMMU_MAP_LOGICAL_RANGE MapLogicalRange;
    PIOMMU_UNMAP_LOGICAL_RANGE UnmapLogicalRange;
    PIOMMU_MAP_IDENTITY_RANGE MapIdentityRange;
    PIOMMU_UNMAP_IDENTITY_RANGE UnmapIdentityRange;
    PIOMMU_SET_DEVICE_FAULT_REPORTING SetDeviceFaultReporting;
    PIOMMU_DOMAIN_CONFIGURE ConfigureDomain;
} DMA_IOMMU_INTERFACE, *PDMA_IOMMU_INTERFACE;
NTKERNELAPI
VOID
PoSetHiberRange (
    _In_opt_ PVOID MemoryMap,
    _In_ ULONG Flags,
    _In_ PVOID Address,
    _In_ ULONG_PTR Length,
    _In_ ULONG Tag
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
VOID
PoSetSystemState (
    _In_ EXECUTION_STATE Flags
    );
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
PVOID
PoRegisterSystemState (
    _Inout_opt_ PVOID StateHandle,
    _In_ EXECUTION_STATE Flags
    );
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
NTSTATUS
PoCreatePowerRequest (
    _Outptr_ PVOID *PowerRequest,
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_opt_ PCOUNTED_REASON_CONTEXT Context
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
NTSTATUS
PoSetPowerRequest (
    _Inout_ PVOID PowerRequest,
    _In_ POWER_REQUEST_TYPE Type
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
NTSTATUS
PoClearPowerRequest (
    _Inout_ PVOID PowerRequest,
    _In_ POWER_REQUEST_TYPE Type
    );
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
VOID
PoDeletePowerRequest (
    _Inout_ PVOID PowerRequest
    );
typedef
_Function_class_(REQUEST_POWER_COMPLETE)
_IRQL_requires_max_(DISPATCH_LEVEL)
_IRQL_requires_same_
VOID
REQUEST_POWER_COMPLETE (
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ UCHAR MinorFunction,
    _In_ POWER_STATE PowerState,
    _In_opt_ PVOID Context,
    _In_ PIO_STATUS_BLOCK IoStatus
    );
typedef REQUEST_POWER_COMPLETE *PREQUEST_POWER_COMPLETE;
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
NTSTATUS
PoRequestPowerIrp (
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ UCHAR MinorFunction,
    _In_ POWER_STATE PowerState,
    _In_opt_ PREQUEST_POWER_COMPLETE CompletionFunction,
    _In_opt_ __drv_aliasesMem PVOID Context,
    _Outptr_opt_ PIRP *Irp
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
VOID
PoSetSystemWake (
    _Inout_ PIRP Irp
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
BOOLEAN
PoGetSystemWake (
    _In_ PIRP Irp
    );
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
VOID
PoUnregisterSystemState (
    _Inout_ PVOID StateHandle
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
POWER_STATE
PoSetPowerState (
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ POWER_STATE_TYPE Type,
    _In_ POWER_STATE State
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
NTSTATUS
PoCallDriver (
    _In_ PDEVICE_OBJECT DeviceObject,
    _Inout_ __drv_aliasesMem PIRP Irp
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
VOID
PoStartNextPowerIrp(
    _Inout_ PIRP Irp
    );
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
PULONG
PoRegisterDeviceForIdleDetection (
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ ULONG ConservationIdleTime,
    _In_ ULONG PerformanceIdleTime,
    _In_ DEVICE_POWER_STATE State
    );
    *IdlePointer = 0
NTKERNELAPI
VOID
PoSetDeviceBusyEx (
    _Inout_ PULONG IdlePointer
    );
NTKERNELAPI
VOID
PoStartDeviceBusy (
    _Inout_ PULONG IdlePointer
    );
NTKERNELAPI
VOID
PoEndDeviceBusy (
    _Inout_ PULONG IdlePointer
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
BOOLEAN
PoQueryWatchdogTime (
    _In_ PDEVICE_OBJECT Pdo,
    _Out_ PULONG SecondsRemaining
    );
typedef
_Function_class_(POWER_SETTING_CALLBACK)
_IRQL_requires_same_
NTSTATUS
POWER_SETTING_CALLBACK (
    _In_ LPCGUID SettingGuid,
    _In_reads_bytes_(ValueLength) PVOID Value,
    _In_ ULONG ValueLength,
    _Inout_opt_ PVOID Context
);
typedef POWER_SETTING_CALLBACK *PPOWER_SETTING_CALLBACK;
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
NTSTATUS
PoRegisterPowerSettingCallback (
    _In_opt_ PDEVICE_OBJECT DeviceObject,
    _In_ LPCGUID SettingGuid,
    _In_ PPOWER_SETTING_CALLBACK Callback,
    _In_opt_ PVOID Context,
    _Outptr_opt_ PVOID *Handle
    );
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
NTSTATUS
PoUnregisterPowerSettingCallback (
    _Inout_ PVOID Handle
    );
DECLARE_HANDLE(POHANDLE);
typedef
_Function_class_(PO_FX_COMPONENT_ACTIVE_CONDITION_CALLBACK)
_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
PO_FX_COMPONENT_ACTIVE_CONDITION_CALLBACK (
    _In_ PVOID Context,
    _In_ ULONG Component
    );
typedef PO_FX_COMPONENT_ACTIVE_CONDITION_CALLBACK
    *PPO_FX_COMPONENT_ACTIVE_CONDITION_CALLBACK;
typedef
_Function_class_(PO_FX_COMPONENT_IDLE_CONDITION_CALLBACK)
_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
PO_FX_COMPONENT_IDLE_CONDITION_CALLBACK (
    _In_ PVOID Context,
    _In_ ULONG Component
    );
typedef PO_FX_COMPONENT_IDLE_CONDITION_CALLBACK
    *PPO_FX_COMPONENT_IDLE_CONDITION_CALLBACK;
typedef
_Function_class_(PO_FX_COMPONENT_IDLE_STATE_CALLBACK)
_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
PO_FX_COMPONENT_IDLE_STATE_CALLBACK (
    _In_ PVOID Context,
    _In_ ULONG Component,
    _In_ ULONG State
    );
typedef PO_FX_COMPONENT_IDLE_STATE_CALLBACK
    *PPO_FX_COMPONENT_IDLE_STATE_CALLBACK;
typedef
_Function_class_(PO_FX_DEVICE_POWER_REQUIRED_CALLBACK)
_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
PO_FX_DEVICE_POWER_REQUIRED_CALLBACK (
    _In_ PVOID Context
    );
typedef PO_FX_DEVICE_POWER_REQUIRED_CALLBACK
    *PPO_FX_DEVICE_POWER_REQUIRED_CALLBACK;
typedef
_Function_class_(PO_FX_DEVICE_POWER_NOT_REQUIRED_CALLBACK)
_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
PO_FX_DEVICE_POWER_NOT_REQUIRED_CALLBACK (
    _In_ PVOID Context
    );
typedef PO_FX_DEVICE_POWER_NOT_REQUIRED_CALLBACK
    *PPO_FX_DEVICE_POWER_NOT_REQUIRED_CALLBACK;
typedef
_Function_class_(PO_FX_POWER_CONTROL_CALLBACK)
_IRQL_requires_max_(DISPATCH_LEVEL)
NTSTATUS
PO_FX_POWER_CONTROL_CALLBACK (
    _In_ PVOID DeviceContext,
    _In_ LPCGUID PowerControlCode,
    _In_reads_bytes_opt_(InBufferSize) PVOID InBuffer,
    _In_ SIZE_T InBufferSize,
    _Out_writes_bytes_opt_(OutBufferSize) PVOID OutBuffer,
    _In_ SIZE_T OutBufferSize,
    _Out_opt_ PSIZE_T BytesReturned
    );
typedef PO_FX_POWER_CONTROL_CALLBACK *PPO_FX_POWER_CONTROL_CALLBACK;
typedef
_Function_class_(PO_FX_COMPONENT_CRITICAL_TRANSITION_CALLBACK)
_IRQL_requires_max_(HIGH_LEVEL)
VOID
PO_FX_COMPONENT_CRITICAL_TRANSITION_CALLBACK (
    _In_ PVOID Context,
    _In_ ULONG Component,
    _In_ BOOLEAN Active
    );
typedef PO_FX_COMPONENT_CRITICAL_TRANSITION_CALLBACK
    *PPO_FX_COMPONENT_CRITICAL_TRANSITION_CALLBACK;
typedef struct _PO_FX_COMPONENT_IDLE_STATE {
    ULONGLONG TransitionLatency;
    ULONGLONG ResidencyRequirement;
    ULONG NominalPower;
} PO_FX_COMPONENT_IDLE_STATE, *PPO_FX_COMPONENT_IDLE_STATE;
typedef struct _PO_FX_COMPONENT_V1 {
    GUID Id;
    ULONG IdleStateCount;
    ULONG DeepestWakeableIdleState;
    _Field_size_full_(IdleStateCount) PPO_FX_COMPONENT_IDLE_STATE IdleStates;
} PO_FX_COMPONENT_V1, *PPO_FX_COMPONENT_V1;
typedef struct _PO_FX_DEVICE_V1 {
    ULONG Version;
    ULONG ComponentCount;
    PPO_FX_COMPONENT_ACTIVE_CONDITION_CALLBACK ComponentActiveConditionCallback;
    PPO_FX_COMPONENT_IDLE_CONDITION_CALLBACK ComponentIdleConditionCallback;
    PPO_FX_COMPONENT_IDLE_STATE_CALLBACK ComponentIdleStateCallback;
    PPO_FX_DEVICE_POWER_REQUIRED_CALLBACK DevicePowerRequiredCallback;
    PPO_FX_DEVICE_POWER_NOT_REQUIRED_CALLBACK DevicePowerNotRequiredCallback;
    PPO_FX_POWER_CONTROL_CALLBACK PowerControlCallback;
    PVOID DeviceContext;
    _Field_size_full_(ComponentCount) PO_FX_COMPONENT_V1 Components[ANYSIZE_ARRAY];
} PO_FX_DEVICE_V1, *PPO_FX_DEVICE_V1;
typedef struct _PO_FX_COMPONENT_V2 {
    GUID Id;
    ULONGLONG Flags;
    ULONG DeepestWakeableIdleState;
    ULONG IdleStateCount;
    _Field_size_full_(IdleStateCount) PPO_FX_COMPONENT_IDLE_STATE IdleStates;
    ULONG ProviderCount;
    _Field_size_full_(ProviderCount) PULONG Providers;
} PO_FX_COMPONENT_V2, *PPO_FX_COMPONENT_V2;
typedef struct _PO_FX_DEVICE_V2 {
    ULONG Version;
    ULONGLONG Flags;
    PPO_FX_COMPONENT_ACTIVE_CONDITION_CALLBACK ComponentActiveConditionCallback;
    PPO_FX_COMPONENT_IDLE_CONDITION_CALLBACK ComponentIdleConditionCallback;
    PPO_FX_COMPONENT_IDLE_STATE_CALLBACK ComponentIdleStateCallback;
    PPO_FX_DEVICE_POWER_REQUIRED_CALLBACK DevicePowerRequiredCallback;
    PPO_FX_DEVICE_POWER_NOT_REQUIRED_CALLBACK DevicePowerNotRequiredCallback;
    PPO_FX_POWER_CONTROL_CALLBACK PowerControlCallback;
    PVOID DeviceContext;
    ULONG ComponentCount;
    _Field_size_full_(ComponentCount) PO_FX_COMPONENT_V2 Components[ANYSIZE_ARRAY];
} PO_FX_DEVICE_V2, *PPO_FX_DEVICE_V2;
            (PO_FX_DEVICE_FLAG_DFX_DIRECT_CHILDREN_OPTIONAL | \
             PO_FX_DEVICE_FLAG_DFX_POWER_CHILDREN_OPTIONAL)
typedef
_Function_class_(PO_FX_DIRECTED_POWER_UP_CALLBACK)
_IRQL_requires_max_(DISPATCH_LEVEL)
_IRQL_requires_same_
VOID
PO_FX_DIRECTED_POWER_UP_CALLBACK (
    _In_ PVOID Context,
    _In_ ULONG Flags
    );
typedef PO_FX_DIRECTED_POWER_UP_CALLBACK *PPO_FX_DIRECTED_POWER_UP_CALLBACK;
typedef
_Function_class_(PO_FX_DIRECTED_POWER_DOWN_CALLBACK)
_IRQL_requires_max_(DISPATCH_LEVEL)
_IRQL_requires_same_
VOID
PO_FX_DIRECTED_POWER_DOWN_CALLBACK (
    _In_ PVOID Context,
    _In_ ULONG Flags
    );
typedef PO_FX_DIRECTED_POWER_DOWN_CALLBACK *PPO_FX_DIRECTED_POWER_DOWN_CALLBACK;
typedef struct _PO_FX_DEVICE_V3 {
    ULONG Version;
    ULONGLONG Flags;
    PPO_FX_COMPONENT_ACTIVE_CONDITION_CALLBACK ComponentActiveConditionCallback;
    PPO_FX_COMPONENT_IDLE_CONDITION_CALLBACK ComponentIdleConditionCallback;
    PPO_FX_COMPONENT_IDLE_STATE_CALLBACK ComponentIdleStateCallback;
    PPO_FX_DEVICE_POWER_REQUIRED_CALLBACK DevicePowerRequiredCallback;
    PPO_FX_DEVICE_POWER_NOT_REQUIRED_CALLBACK DevicePowerNotRequiredCallback;
    PPO_FX_POWER_CONTROL_CALLBACK PowerControlCallback;
    PPO_FX_DIRECTED_POWER_UP_CALLBACK DirectedPowerUpCallback;
    PPO_FX_DIRECTED_POWER_DOWN_CALLBACK DirectedPowerDownCallback;
    ULONG DirectedFxTimeoutInSeconds;
    PVOID DeviceContext;
    ULONG ComponentCount;
    _Field_size_full_(ComponentCount) PO_FX_COMPONENT_V2 Components[ANYSIZE_ARRAY];
} PO_FX_DEVICE_V3, *PPO_FX_DEVICE_V3;
typedef PO_FX_COMPONENT_V1 PO_FX_COMPONENT, *PPO_FX_COMPONENT;
typedef PO_FX_DEVICE_V1 PO_FX_DEVICE, *PPO_FX_DEVICE;
typedef enum _PO_FX_PERF_STATE_UNIT {
    PoFxPerfStateUnitOther,
    PoFxPerfStateUnitFrequency,
    PoFxPerfStateUnitBandwidth,
    PoFxPerfStateUnitMaximum
} PO_FX_PERF_STATE_UNIT, *PPO_FX_PERF_STATE_UNIT;
typedef enum _PO_FX_PERF_STATE_TYPE {
    PoFxPerfStateTypeDiscrete,
    PoFxPerfStateTypeRange,
    PoFxPerfStateTypeMaximum
} PO_FX_PERF_STATE_TYPE, *PPO_FX_PERF_STATE_TYPE;
typedef struct _PO_FX_PERF_STATE {
    ULONGLONG Value;
    PVOID Context;
} PO_FX_PERF_STATE, *PPO_FX_PERF_STATE;
typedef struct _PO_FX_COMPONENT_PERF_SET {
    UNICODE_STRING Name;
    ULONGLONG Flags;
    PO_FX_PERF_STATE_UNIT Unit;
    PO_FX_PERF_STATE_TYPE Type;
    union {
        struct {
            ULONG Count;
            _Field_size_full_(Count) PPO_FX_PERF_STATE States;
        } Discrete;
        struct {
            ULONGLONG Minimum;
            ULONGLONG Maximum;
        } Range;
    };
} PO_FX_COMPONENT_PERF_SET, *PPO_FX_COMPONENT_PERF_SET;
typedef struct _PO_FX_COMPONENT_PERF_INFO {
    ULONG PerfStateSetsCount;
    PO_FX_COMPONENT_PERF_SET PerfStateSets[ANYSIZE_ARRAY];
} PO_FX_COMPONENT_PERF_INFO, *PPO_FX_COMPONENT_PERF_INFO;
typedef struct _PO_FX_PERF_STATE_CHANGE {
    ULONG Set;
    union {
        ULONG StateIndex;
        ULONGLONG StateValue;
    };
} PO_FX_PERF_STATE_CHANGE, *PPO_FX_PERF_STATE_CHANGE;
_IRQL_requires_max_(PASSIVE_LEVEL)
NTKERNELAPI
NTSTATUS
PoFxRegisterDevice (
    _In_ PDEVICE_OBJECT Pdo,
    _In_ PPO_FX_DEVICE Device,
    _Out_ POHANDLE *Handle
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTKERNELAPI
VOID
PoFxStartDevicePowerManagement (
    _In_ POHANDLE Handle
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTKERNELAPI
VOID
PoFxUnregisterDevice (
    _In_ POHANDLE Handle
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTKERNELAPI
NTSTATUS
PoFxRegisterCrashdumpDevice (
    _In_ POHANDLE Handle
    );
_IRQL_requires_max_(HIGH_LEVEL)
NTKERNELAPI
NTSTATUS
PoFxPowerOnCrashdumpDevice(
    _In_ POHANDLE Handle,
    _In_opt_ PVOID Context
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
VOID
PoFxActivateComponent (
    _In_ POHANDLE Handle,
    _In_ ULONG Component,
    _In_ ULONG Flags
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
VOID
PoFxCompleteDevicePowerNotRequired (
    _In_ POHANDLE Handle
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
VOID
PoFxCompleteIdleCondition (
    _In_ POHANDLE Handle,
    _In_ ULONG Component
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
VOID
PoFxCompleteIdleState (
    _In_ POHANDLE Handle,
    _In_ ULONG Component
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
VOID
PoFxIdleComponent (
    _In_ POHANDLE Handle,
    _In_ ULONG Component,
    _In_ ULONG Flags
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
VOID
PoFxSetComponentLatency (
    _In_ POHANDLE Handle,
    _In_ ULONG Component,
    _In_ ULONGLONG Latency
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
VOID
PoFxSetComponentResidency (
    _In_ POHANDLE Handle,
    _In_ ULONG Component,
    _In_ ULONGLONG Residency
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
VOID
PoFxSetComponentWake (
    _In_ POHANDLE Handle,
    _In_ ULONG Component,
    _In_ BOOLEAN WakeHint
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
VOID
PoFxSetDeviceIdleTimeout (
    _In_ POHANDLE Handle,
    _In_ ULONGLONG IdleTimeout
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
VOID
PoFxReportDevicePoweredOn (
    _In_ POHANDLE Handle
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
NTSTATUS
PoFxPowerControl (
    _In_ POHANDLE Handle,
    _In_ LPCGUID PowerControlCode,
    _In_opt_ PVOID InBuffer,
    _In_ SIZE_T InBufferSize,
    _Out_opt_ PVOID OutBuffer,
    _In_ SIZE_T OutBufferSize,
    _Out_opt_ PSIZE_T BytesReturned
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
VOID
PoFxNotifySurprisePowerOn(
      _In_ PDEVICE_OBJECT Pdo
     );
typedef
_Function_class_(PO_FX_COMPONENT_PERF_STATE_CALLBACK)
VOID
PO_FX_COMPONENT_PERF_STATE_CALLBACK(
    _In_ PVOID Context,
    _In_ ULONG Component,
    _In_ BOOLEAN Succeeded,
    _In_ PVOID RequestContext
    );
typedef PO_FX_COMPONENT_PERF_STATE_CALLBACK
    *PPO_FX_COMPONENT_PERF_STATE_CALLBACK;
_IRQL_requires_max_(PASSIVE_LEVEL)
NTKERNELAPI
NTSTATUS
PoFxRegisterComponentPerfStates (
    _In_ POHANDLE Handle,
    _In_ ULONG Component,
    _In_ ULONGLONG Flags,
    _In_ PPO_FX_COMPONENT_PERF_STATE_CALLBACK ComponentPerfStateCallback,
    _In_ PPO_FX_COMPONENT_PERF_INFO InputStateInfo,
    _Out_ PPO_FX_COMPONENT_PERF_INFO* OutputStateInfo
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
VOID
PoFxIssueComponentPerfStateChange (
    _In_ POHANDLE Handle,
    _In_ ULONG Flags,
    _In_ ULONG Component,
    _In_ PPO_FX_PERF_STATE_CHANGE PerfChange,
    _In_ PVOID Context
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
VOID
PoFxIssueComponentPerfStateChangeMultiple (
    _In_ POHANDLE Handle,
    _In_ ULONG Flags,
    _In_ ULONG Component,
    _In_ ULONG PerfChangesCount,
    _In_ PO_FX_PERF_STATE_CHANGE PerfChanges[],
    _In_ PVOID Context
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
NTSTATUS
PoFxQueryCurrentComponentPerfState (
    _In_ POHANDLE Handle,
    _In_ ULONG Flags,
    _In_ ULONG Component,
    _In_ ULONG SetIndex,
    _Out_ PULONGLONG CurrentPerf
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTKERNELAPI
NTSTATUS
PoFxSetTargetDripsDevicePowerState(
    _In_ POHANDLE Handle,
    _In_ DEVICE_POWER_STATE TargetState
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
VOID
PoFxCompleteDirectedPowerDown (
    _In_ POHANDLE Handle
    );
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
NTSTATUS
PoCreateThermalRequest (
    _Outptr_ PVOID *ThermalRequest,
    _In_ PDEVICE_OBJECT TargetDeviceObject,
    _In_ PDEVICE_OBJECT PolicyDeviceObject,
    _In_ PCOUNTED_REASON_CONTEXT Context,
    _In_ ULONG Flags
    );
typedef enum _PO_THERMAL_REQUEST_TYPE {
    PoThermalRequestPassive,
    PoThermalRequestActive,
} PO_THERMAL_REQUEST_TYPE, *PPO_THERMAL_REQUEST_TYPE;
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
BOOLEAN
PoGetThermalRequestSupport (
    _In_ PVOID ThermalRequest,
    _In_ PO_THERMAL_REQUEST_TYPE Type
    );
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
NTSTATUS
PoSetThermalPassiveCooling (
    _Inout_ PVOID ThermalRequest,
    _In_ UCHAR Throttle
    );
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
NTSTATUS
PoSetThermalActiveCooling (
    _Inout_ PVOID ThermalRequest,
    _In_ BOOLEAN Engaged
    );
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
VOID
PoDeleteThermalRequest (
    _Inout_ PVOID ThermalRequest
    );
typedef
_Function_class_(PO_FX_DRIPS_WATCHDOG_CALLBACK)
_IRQL_requires_max_(APC_LEVEL)
VOID
PO_FX_DRIPS_WATCHDOG_CALLBACK (
    _In_ PVOID Context,
    _In_ PDEVICE_OBJECT PhysicalDeviceObject,
    _In_ ULONG UniqueId
);
typedef PO_FX_DRIPS_WATCHDOG_CALLBACK
    *PPO_FX_DRIPS_WATCHDOG_CALLBACK;
_IRQL_requires_max_(PASSIVE_LEVEL)
NTKERNELAPI
VOID
PoFxRegisterDripsWatchdogCallback (
    _In_ POHANDLE Handle,
    _In_ PPO_FX_DRIPS_WATCHDOG_CALLBACK Callback,
    _In_ BOOLEAN IncludeChildDevices,
    _In_opt_ PDRIVER_OBJECT MatchingDriverObject
    );
typedef struct _OBJECT_HANDLE_INFORMATION {
    ULONG HandleAttributes;
    ACCESS_MASK GrantedAccess;
} OBJECT_HANDLE_INFORMATION, *POBJECT_HANDLE_INFORMATION;
_IRQL_requires_max_(PASSIVE_LEVEL)
NTKERNELAPI
NTSTATUS
ObReferenceObjectByHandle(
    _In_ HANDLE Handle,
    _In_ ACCESS_MASK DesiredAccess,
    _In_opt_ POBJECT_TYPE ObjectType,
    _In_ KPROCESSOR_MODE AccessMode,
    _Out_ PVOID *Object,
    _Out_opt_ POBJECT_HANDLE_INFORMATION HandleInformation
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTKERNELAPI
NTSTATUS
ObReferenceObjectByHandleWithTag(
    _In_ HANDLE Handle,
    _In_ ACCESS_MASK DesiredAccess,
    _In_opt_ POBJECT_TYPE ObjectType,
    _In_ KPROCESSOR_MODE AccessMode,
    _In_ ULONG Tag,
    _Out_ PVOID *Object,
    _Out_opt_ POBJECT_HANDLE_INFORMATION HandleInformation
    );
NTKERNELAPI
BOOLEAN
FASTCALL
ObReferenceObjectSafe (
    _In_ PVOID Object
    );
NTKERNELAPI
BOOLEAN
FASTCALL
ObReferenceObjectSafeWithTag (
    _In_ PVOID Object,
    _In_ ULONG Tag
    );
NTKERNELAPI
NTSTATUS
ObCloseHandle (
    _In_ _Post_ptr_invalid_ HANDLE Handle,
    _In_ KPROCESSOR_MODE PreviousMode
    );
        ObfDereferenceObject(a)
        ObfDereferenceObjectWithTag(a, t)
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
LONG_PTR
FASTCALL
ObfReferenceObject(
    _In_ PVOID Object
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
LONG_PTR
FASTCALL
ObfReferenceObjectWithTag(
    _In_ PVOID Object,
    _In_ ULONG Tag
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
NTSTATUS
ObReferenceObjectByPointer(
    _In_ PVOID Object,
    _In_ ACCESS_MASK DesiredAccess,
    _In_opt_ POBJECT_TYPE ObjectType,
    _In_ KPROCESSOR_MODE AccessMode
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
NTSTATUS
ObReferenceObjectByPointerWithTag(
    _In_ PVOID Object,
    _In_ ACCESS_MASK DesiredAccess,
    _In_opt_ POBJECT_TYPE ObjectType,
    _In_ KPROCESSOR_MODE AccessMode,
    _In_ ULONG Tag
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
LONG_PTR
FASTCALL
ObfDereferenceObject(
    _In_ PVOID Object
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
LONG_PTR
FASTCALL
ObfDereferenceObjectWithTag(
    _In_ PVOID Object,
    _In_ ULONG Tag
    );
NTKERNELAPI
VOID
ObDereferenceObjectDeferDelete(
    _In_ PVOID Object
    );
NTKERNELAPI
VOID
ObDereferenceObjectDeferDeleteWithTag(
    _In_ PVOID Object,
    _In_ ULONG Tag
    );
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
NTSTATUS
ObGetObjectSecurity(
    _In_ PVOID Object,
    _Out_ PSECURITY_DESCRIPTOR *SecurityDescriptor,
    _Out_ PBOOLEAN MemoryAllocated
    );
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
VOID
ObReleaseObjectSecurity(
    _In_ PSECURITY_DESCRIPTOR SecurityDescriptor,
    _In_ BOOLEAN MemoryAllocated
    );
typedef ULONG OB_OPERATION;
typedef struct _OB_PRE_CREATE_HANDLE_INFORMATION {
    _Inout_ ACCESS_MASK DesiredAccess;
    _In_ ACCESS_MASK OriginalDesiredAccess;
} OB_PRE_CREATE_HANDLE_INFORMATION, *POB_PRE_CREATE_HANDLE_INFORMATION;
typedef struct _OB_PRE_DUPLICATE_HANDLE_INFORMATION {
    _Inout_ ACCESS_MASK DesiredAccess;
    _In_ ACCESS_MASK OriginalDesiredAccess;
    _In_ PVOID SourceProcess;
    _In_ PVOID TargetProcess;
} OB_PRE_DUPLICATE_HANDLE_INFORMATION, * POB_PRE_DUPLICATE_HANDLE_INFORMATION;
typedef union _OB_PRE_OPERATION_PARAMETERS {
    _Inout_ OB_PRE_CREATE_HANDLE_INFORMATION CreateHandleInformation;
    _Inout_ OB_PRE_DUPLICATE_HANDLE_INFORMATION DuplicateHandleInformation;
} OB_PRE_OPERATION_PARAMETERS, *POB_PRE_OPERATION_PARAMETERS;
typedef struct _OB_PRE_OPERATION_INFORMATION {
    _In_ OB_OPERATION Operation;
    union {
        _In_ ULONG Flags;
        struct {
            _In_ ULONG KernelHandle:1;
            _In_ ULONG Reserved:31;
        };
    };
    _In_ PVOID Object;
    _In_ POBJECT_TYPE ObjectType;
    _Out_ PVOID CallContext;
    _In_ POB_PRE_OPERATION_PARAMETERS Parameters;
} OB_PRE_OPERATION_INFORMATION, *POB_PRE_OPERATION_INFORMATION;
typedef struct _OB_POST_CREATE_HANDLE_INFORMATION {
    _In_ ACCESS_MASK GrantedAccess;
} OB_POST_CREATE_HANDLE_INFORMATION, *POB_POST_CREATE_HANDLE_INFORMATION;
typedef struct _OB_POST_DUPLICATE_HANDLE_INFORMATION {
    _In_ ACCESS_MASK GrantedAccess;
} OB_POST_DUPLICATE_HANDLE_INFORMATION, * POB_POST_DUPLICATE_HANDLE_INFORMATION;
typedef union _OB_POST_OPERATION_PARAMETERS {
    _In_ OB_POST_CREATE_HANDLE_INFORMATION CreateHandleInformation;
    _In_ OB_POST_DUPLICATE_HANDLE_INFORMATION DuplicateHandleInformation;
} OB_POST_OPERATION_PARAMETERS, *POB_POST_OPERATION_PARAMETERS;
typedef struct _OB_POST_OPERATION_INFORMATION {
    _In_ OB_OPERATION Operation;
    union {
        _In_ ULONG Flags;
        struct {
            _In_ ULONG KernelHandle:1;
            _In_ ULONG Reserved:31;
        };
    };
    _In_ PVOID Object;
    _In_ POBJECT_TYPE ObjectType;
    _In_ PVOID CallContext;
    _In_ NTSTATUS ReturnStatus;
    _In_ POB_POST_OPERATION_PARAMETERS Parameters;
} OB_POST_OPERATION_INFORMATION,*POB_POST_OPERATION_INFORMATION;
typedef enum _OB_PREOP_CALLBACK_STATUS {
    OB_PREOP_SUCCESS
} OB_PREOP_CALLBACK_STATUS, *POB_PREOP_CALLBACK_STATUS;
typedef OB_PREOP_CALLBACK_STATUS
(*POB_PRE_OPERATION_CALLBACK) (
    _In_ PVOID RegistrationContext,
    _Inout_ POB_PRE_OPERATION_INFORMATION OperationInformation
    );
typedef VOID
(*POB_POST_OPERATION_CALLBACK) (
    _In_ PVOID RegistrationContext,
    _In_ POB_POST_OPERATION_INFORMATION OperationInformation
    );
typedef struct _OB_OPERATION_REGISTRATION {
    _In_ POBJECT_TYPE *ObjectType;
    _In_ OB_OPERATION Operations;
    _In_ POB_PRE_OPERATION_CALLBACK PreOperation;
    _In_ POB_POST_OPERATION_CALLBACK PostOperation;
} OB_OPERATION_REGISTRATION, *POB_OPERATION_REGISTRATION;
typedef struct _OB_CALLBACK_REGISTRATION {
    _In_ USHORT Version;
    _In_ USHORT OperationRegistrationCount;
    _In_ UNICODE_STRING Altitude;
    _In_ PVOID RegistrationContext;
    _In_ OB_OPERATION_REGISTRATION *OperationRegistration;
} OB_CALLBACK_REGISTRATION, *POB_CALLBACK_REGISTRATION;
NTKERNELAPI
NTSTATUS
ObRegisterCallbacks (
    _In_ POB_CALLBACK_REGISTRATION CallbackRegistration,
    _Outptr_ PVOID *RegistrationHandle
    );
NTKERNELAPI
VOID
ObUnRegisterCallbacks (
    _In_ PVOID RegistrationHandle
    );
NTKERNELAPI
USHORT
ObGetFilterVersion (
    VOID
    );
typedef struct _PCI_SLOT_NUMBER {
    union {
        struct {
            ULONG DeviceNumber:5;
            ULONG FunctionNumber:3;
            ULONG Reserved:24;
        } bits;
        ULONG AsULONG;
    } u;
} PCI_SLOT_NUMBER, *PPCI_SLOT_NUMBER;
typedef struct _PCI_COMMON_HEADER {
    USHORT VendorID;
    USHORT DeviceID;
    USHORT Command;
    USHORT Status;
    UCHAR RevisionID;
    UCHAR ProgIf;
    UCHAR SubClass;
    UCHAR BaseClass;
    UCHAR CacheLineSize;
    UCHAR LatencyTimer;
    UCHAR HeaderType;
    UCHAR BIST;
    union {
        struct _PCI_HEADER_TYPE_0 {
            ULONG BaseAddresses[PCI_TYPE0_ADDRESSES];
            ULONG CIS;
            USHORT SubVendorID;
            USHORT SubSystemID;
            ULONG ROMBaseAddress;
            UCHAR CapabilitiesPtr;
            UCHAR Reserved1[3];
            ULONG Reserved2;
            UCHAR InterruptLine;
            UCHAR InterruptPin;
            UCHAR MinimumGrant;
            UCHAR MaximumLatency;
        } type0;
        struct _PCI_HEADER_TYPE_1 {
            ULONG BaseAddresses[PCI_TYPE1_ADDRESSES];
            UCHAR PrimaryBus;
            UCHAR SecondaryBus;
            UCHAR SubordinateBus;
            UCHAR SecondaryLatency;
            UCHAR IOBase;
            UCHAR IOLimit;
            USHORT SecondaryStatus;
            USHORT MemoryBase;
            USHORT MemoryLimit;
            USHORT PrefetchBase;
            USHORT PrefetchLimit;
            ULONG PrefetchBaseUpper32;
            ULONG PrefetchLimitUpper32;
            USHORT IOBaseUpper16;
            USHORT IOLimitUpper16;
            UCHAR CapabilitiesPtr;
            UCHAR Reserved1[3];
            ULONG ROMBaseAddress;
            UCHAR InterruptLine;
            UCHAR InterruptPin;
            USHORT BridgeControl;
        } type1;
        struct _PCI_HEADER_TYPE_2 {
            ULONG SocketRegistersBaseAddress;
            UCHAR CapabilitiesPtr;
            UCHAR Reserved;
            USHORT SecondaryStatus;
            UCHAR PrimaryBus;
            UCHAR SecondaryBus;
            UCHAR SubordinateBus;
            UCHAR SecondaryLatency;
            struct {
                ULONG Base;
                ULONG Limit;
            } Range[PCI_TYPE2_ADDRESSES-1];
            UCHAR InterruptLine;
            UCHAR InterruptPin;
            USHORT BridgeControl;
        } type2;
    } u;
} PCI_COMMON_HEADER, *PPCI_COMMON_HEADER;
typedef struct _PCI_COMMON_CONFIG : PCI_COMMON_HEADER {
    UCHAR DeviceSpecific[192];
} PCI_COMMON_CONFIG, *PPCI_COMMON_CONFIG;
    (((PPCI_COMMON_CONFIG)(PciData))->HeaderType & ~PCI_MULTIFUNCTION)
    ((((PPCI_COMMON_CONFIG)(PciData))->HeaderType & PCI_MULTIFUNCTION) != 0)
typedef struct _PCI_CAPABILITIES_HEADER {
    UCHAR CapabilityID;
    UCHAR Next;
} PCI_CAPABILITIES_HEADER, *PPCI_CAPABILITIES_HEADER;
typedef struct _PCI_PMC {
    UCHAR Version:3;
    UCHAR PMEClock:1;
    UCHAR Rsvd1:1;
    UCHAR DeviceSpecificInitialization:1;
    UCHAR Rsvd2:2;
    struct _PM_SUPPORT {
        UCHAR Rsvd2:1;
        UCHAR D1:1;
        UCHAR D2:1;
        UCHAR PMED0:1;
        UCHAR PMED1:1;
        UCHAR PMED2:1;
        UCHAR PMED3Hot:1;
        UCHAR PMED3Cold:1;
    } Support;
} PCI_PMC, *PPCI_PMC;
typedef struct _PCI_PMCSR {
    USHORT PowerState:2;
    USHORT Rsvd1:1;
    USHORT NoSoftReset:1;
    USHORT Rsvd2:4;
    USHORT PMEEnable:1;
    USHORT DataSelect:4;
    USHORT DataScale:2;
    USHORT PMEStatus:1;
} PCI_PMCSR, *PPCI_PMCSR;
typedef struct _PCI_PMCSR_BSE {
    UCHAR Rsvd1:6;
    UCHAR D3HotSupportsStopClock:1;
    UCHAR BusPowerClockControlEnabled:1;
} PCI_PMCSR_BSE, *PPCI_PMCSR_BSE;
typedef struct _PCI_PM_CAPABILITY {
    PCI_CAPABILITIES_HEADER Header;
    union {
        PCI_PMC Capabilities;
        USHORT AsUSHORT;
    } PMC;
    union {
        PCI_PMCSR ControlStatus;
        USHORT AsUSHORT;
    } PMCSR;
    union {
        PCI_PMCSR_BSE BridgeSupport;
        UCHAR AsUCHAR;
    } PMCSR_BSE;
    UCHAR Data;
} PCI_PM_CAPABILITY, *PPCI_PM_CAPABILITY;
typedef struct {
    PCI_CAPABILITIES_HEADER Header;
    union {
        struct {
            USHORT DataParityErrorRecoveryEnable:1;
            USHORT EnableRelaxedOrdering:1;
            USHORT MaxMemoryReadByteCount:2;
            USHORT MaxOutstandingSplitTransactions:3;
            USHORT Reserved:9;
        } bits;
        USHORT AsUSHORT;
    } Command;
    union {
        struct {
            ULONG FunctionNumber:3;
            ULONG DeviceNumber:5;
            ULONG BusNumber:8;
            ULONG Device64Bit:1;
            ULONG Capable133MHz:1;
            ULONG SplitCompletionDiscarded:1;
            ULONG UnexpectedSplitCompletion:1;
            ULONG DeviceComplexity:1;
            ULONG DesignedMaxMemoryReadByteCount:2;
            ULONG DesignedMaxOutstandingSplitTransactions:3;
            ULONG DesignedMaxCumulativeReadSize:3;
            ULONG ReceivedSplitCompletionErrorMessage:1;
            ULONG CapablePCIX266:1;
            ULONG CapablePCIX533:1;
        } bits;
        ULONG AsULONG;
    } Status;
} PCI_X_CAPABILITY, *PPCI_X_CAPABILITY;
typedef struct _PCI_EXPRESS_ENHANCED_CAPABILITY_HEADER {
    USHORT CapabilityID;
    USHORT Version:4;
    USHORT Next:12;
} PCI_EXPRESS_ENHANCED_CAPABILITY_HEADER, *PPCI_EXPRESS_ENHANCED_CAPABILITY_HEADER;
typedef struct _PCI_EXPRESS_VENDOR_SPECIFIC_CAPABILITY {
    PCI_EXPRESS_ENHANCED_CAPABILITY_HEADER Header;
    USHORT VsecId;
    USHORT VsecRev:4;
    USHORT VsecLength:12;
} PCI_EXPRESS_VENDOR_SPECIFIC_CAPABILITY, *PPCI_EXPRESS_VENDOR_SPECIFIC_CAPABILITY;
typedef struct _PCI_EXPRESS_SERIAL_NUMBER_CAPABILITY {
    PCI_EXPRESS_ENHANCED_CAPABILITY_HEADER Header;
    ULONG LowSerialNumber;
    ULONG HighSerialNumber;
} PCI_EXPRESS_SERIAL_NUMBER_CAPABILITY, *PPCI_EXPRESS_SERIAL_NUMBER_CAPABILITY;
typedef struct _PCI_EXPRESS_ARI_CAPABILITY_REGISTER {
    USHORT MfvcFunctionGroupsCapability:1;
    USHORT AcsFunctionGroupsCapability:1;
    USHORT Reserved:6;
    USHORT NextFunctionNumber:8;
} PCI_EXPRESS_ARI_CAPABILITY_REGISTER, *PPCI_EXPRESS_ARI_CAPABILITY_REGISTER;
typedef struct _PCI_EXPRESS_ARI_CONTROL_REGISTER {
    USHORT MfvcFunctionGroupsEnable:1;
    USHORT AcsFunctionGroupsEnable:1;
    USHORT Reserved1:2;
    USHORT FunctionGroup:3;
    USHORT Reserved2:9;
} PCI_EXPRESS_ARI_CONTROL_REGISTER, *PPCI_EXPRESS_ARI_CONTROL_REGISTER;
typedef struct _PCI_EXPRESS_ARI_CAPABILITY {
    PCI_EXPRESS_ENHANCED_CAPABILITY_HEADER Header;
    PCI_EXPRESS_ARI_CAPABILITY_REGISTER Capability;
    PCI_EXPRESS_ARI_CONTROL_REGISTER Control;
} PCI_EXPRESS_ARI_CAPABILITY, *PPCI_EXPRESS_ARI_CAPABILITY;
typedef union _VIRTUAL_CHANNEL_CAPABILITIES1 {
    struct {
        ULONG ExtendedVCCount:3;
        ULONG RsvdP1:1;
        ULONG LowPriorityExtendedVCCount:3;
        ULONG RsvdP2:1;
        ULONG ReferenceClock:2;
        ULONG PortArbitrationTableEntrySize:2;
        ULONG RsvdP3:20;
    };
    ULONG AsULONG;
} VIRTUAL_CHANNEL_CAPABILITIES1, *PVIRTUAL_CHANNEL_CAPABILITIES1;
typedef union _VIRTUAL_CHANNEL_CAPABILITIES2 {
    struct {
        ULONG VCArbitrationCapability:8;
        ULONG RsvdP:16;
        ULONG VCArbitrationTableOffset:8;
    };
    ULONG AsULONG;
} VIRTUAL_CHANNEL_CAPABILITIES2, *PVIRTUAL_CHANNEL_CAPABILITIES2;
typedef union _VIRTUAL_CHANNEL_CONTROL {
    struct {
        USHORT LoadVCArbitrationTable:1;
        USHORT VCArbitrationSelect:3;
        USHORT RsvdP:12;
    };
    USHORT AsUSHORT;
} VIRTUAL_CHANNEL_CONTROL, *PVIRTUAL_CHANNEL_CONTROL;
typedef union _VIRTUAL_CHANNEL_STATUS {
    struct {
        USHORT VCArbitrationTableStatus:1;
        USHORT RsvdZ:15;
    };
    USHORT AsUSHORT;
} VIRTUAL_CHANNEL_STATUS, *PVIRTUAL_CHANNEL_STATUS;
typedef union _VIRTUAL_RESOURCE_CAPABILITY {
    struct {
        ULONG PortArbitrationCapability:8;
        ULONG RsvdP1:6;
        ULONG Undefined:1;
        ULONG RejectSnoopTransactions:1;
        ULONG MaximumTimeSlots:7;
        ULONG RsvdP2:1;
        ULONG PortArbitrationTableOffset:8;
    };
    ULONG AsULONG;
} VIRTUAL_RESOURCE_CAPABILITY, *PVIRTUAL_RESOURCE_CAPABILITY;
typedef union _VIRTUAL_RESOURCE_CONTROL {
    struct {
        ULONG TcVcMap:8;
        ULONG RsvdP1:8;
        ULONG LoadPortArbitrationTable:1;
        ULONG PortArbitrationSelect:3;
        ULONG RsvdP2:4;
        ULONG VcID:3;
        ULONG RsvdP3:4;
        ULONG VcEnable:1;
    };
    ULONG AsULONG;
} VIRTUAL_RESOURCE_CONTROL, *PVIRTUAL_RESOURCE_CONTROL;
typedef union _VIRTUAL_RESOURCE_STATUS {
    struct {
        USHORT PortArbitrationTableStatus:1;
        USHORT VcNegotiationPending:1;
        USHORT RsvdZ:14;
    };
    USHORT AsUSHORT;
} VIRTUAL_RESOURCE_STATUS, *PVIRTUAL_RESOURCE_STATUS;
typedef struct _VIRTUAL_RESOURCE {
    VIRTUAL_RESOURCE_CAPABILITY Capability;
    VIRTUAL_RESOURCE_CONTROL Control;
    USHORT RsvdP;
    VIRTUAL_RESOURCE_STATUS Status;
} VIRTUAL_RESOURCE, *PVIRTUAL_RESOURCE;
typedef struct _PCI_EXPRESS_VIRTUAL_CHANNEL_CAPABILITY {
    PCI_EXPRESS_ENHANCED_CAPABILITY_HEADER Header;
    VIRTUAL_CHANNEL_CAPABILITIES1 Capabilities1;
    VIRTUAL_CHANNEL_CAPABILITIES2 Capabilities2;
    VIRTUAL_CHANNEL_CONTROL Control;
    VIRTUAL_CHANNEL_STATUS Status;
    VIRTUAL_RESOURCE Resource[8];
} PCI_EXPRESS_VIRTUAL_CHANNEL_CAPABILITY, *PPCI_EXPRESS_VIRTUAL_CHANNEL_CAPABILITY;
typedef struct _PCI_EXPRESS_ATS_CAPABILITY_REGISTER {
    USHORT InvalidateQueueDepth:5;
    USHORT PageAlignedRequest:1;
    USHORT GlobalInvalidateSupported:1;
    USHORT Reserved:9;
} PCI_EXPRESS_ATS_CAPABILITY_REGISTER, *PPCI_EXPRESS_ATS_CAPABILITY_REGISTER;
typedef struct _PCI_EXPRESS_ATS_CONTROL_REGISTER {
    USHORT SmallestTransactionUnit:5;
    USHORT Reserved:10;
    USHORT Enable:1;
} PCI_EXPRESS_ATS_CONTROL_REGISTER, *PPCI_EXPRESS_ATS_CONTROL_REGISTER;
typedef struct _PCI_EXPRESS_ATS_CAPABILITY {
    PCI_EXPRESS_ENHANCED_CAPABILITY_HEADER Header;
    PCI_EXPRESS_ATS_CAPABILITY_REGISTER Capability;
    PCI_EXPRESS_ATS_CONTROL_REGISTER Control;
} PCI_EXPRESS_ATS_CAPABILITY, *PPCI_EXPRESS_ATS_CAPABILITY;
typedef union _PCI_EXPRESS_PASID_CAPABILITY_REGISTER {
    struct {
        USHORT Rsvd:1;
        USHORT ExecutePermissionSupported:1;
        USHORT PrivilegedModeSupported:1;
        USHORT Rsvd2:5;
        USHORT MaxPASIDWidth:5;
        USHORT Rsvd3:3;
    } DUMMYSTRUCTNAME;
    USHORT AsUSHORT;
} PCI_EXPRESS_PASID_CAPABILITY_REGISTER, *PPCI_EXPRESS_PASID_CAPABILITY_REGISTER;
typedef union _PCI_EXPRESS_PASID_CONTROL_REGISTER {
    struct {
        USHORT PASIDEnable:1;
        USHORT ExecutePermissionEnable:1;
        USHORT PrivilegedModeEnable:1;
        USHORT Rsvd:13;
    } DUMMYSTRUCTNAME;
    USHORT AsUSHORT;
} PCI_EXPRESS_PASID_CONTROL_REGISTER, *PPCI_EXPRESS_PASID_CONTROL_REGISTER;
typedef struct _PCI_EXPRESS_PASID_CAPABILITY {
    PCI_EXPRESS_ENHANCED_CAPABILITY_HEADER Header;
    PCI_EXPRESS_PASID_CAPABILITY_REGISTER Capability;
    PCI_EXPRESS_PASID_CONTROL_REGISTER Control;
} PCI_EXPRESS_PASID_CAPABILITY, *PPCI_EXPRESS_PASID_CAPABILITY;
typedef union _PCI_EXPRESS_PRI_STATUS_REGISTER {
    struct {
        USHORT ResponseFailure:1;
        USHORT UnexpectedPageRequestGroupIndex:1;
        USHORT Rsvd:6;
        USHORT Stopped:1;
        USHORT Rsvd2:6;
        USHORT PrgResponsePasidRequired:1;
    } DUMMYSTRUCTNAME;
    USHORT AsUSHORT;
} PCI_EXPRESS_PRI_STATUS_REGISTER, *PPCI_EXPRESS_PRI_STATUS_REGISTER;
typedef union _PCI_EXPRESS_PRI_CONTROL_REGISTER {
    struct {
        USHORT Enable:1;
        USHORT Reset:1;
        USHORT Rsvd:14;
    } DUMMYSTRUCTNAME;
    USHORT AsUSHORT;
} PCI_EXPRESS_PRI_CONTROL_REGISTER, *PPCI_EXPRESS_PRI_CONTROL_REGISTER;
typedef struct _PCI_EXPRESS_PRI_CAPABILITY {
    PCI_EXPRESS_ENHANCED_CAPABILITY_HEADER Header;
    PCI_EXPRESS_PRI_CONTROL_REGISTER Control;
    PCI_EXPRESS_PRI_STATUS_REGISTER Status;
    ULONG PRCapacity;
    ULONG PRAllocation;
} PCI_EXPRESS_PRI_CAPABILITY, *PPCI_EXPRESS_PRI_CAPABILITY;
typedef union _PCI_EXPRESS_PTM_CAPABILITY_REGISTER {
    struct {
        ULONG RequesterCapable:1;
        ULONG ResponderCapable:1;
        ULONG RootCapable:1;
        ULONG Rsvd:5;
        ULONG LocalGranularity:8;
        ULONG Rsvd2:16;
    } DUMMYSTRUCTNAME;
    ULONG AsULONG;
} PCI_EXPRESS_PTM_CAPABILITY_REGISTER, *PPCI_EXPRESS_PTM_CAPABILITY_REGISTER;
typedef union _PCI_EXPRESS_PTM_CONTROL_REGISTER {
    struct {
        ULONG Enable:1;
        ULONG RootSelect:1;
        ULONG Rsvd:6;
        ULONG EffectiveGranularity:8;
        ULONG Rsvd2:16;
    } DUMMYSTRUCTNAME;
    ULONG AsULONG;
} PCI_EXPRESS_PTM_CONTROL_REGISTER, *PPCI_EXPRESS_PTM_CONTROL_REGISTER;
typedef struct _PCI_EXPRESS_PTM_CAPABILITY {
    PCI_EXPRESS_ENHANCED_CAPABILITY_HEADER Header;
    PCI_EXPRESS_PTM_CAPABILITY_REGISTER PtmCapability;
    PCI_EXPRESS_PTM_CONTROL_REGISTER PtmControl;
} PCI_EXPRESS_PTM_CAPABILITY, *PPCI_EXPRESS_PTM_CAPABILITY;
typedef union _PCI_EXPRESS_UNCORRECTABLE_ERROR_STATUS {
    struct {
        ULONG Undefined:1;
        ULONG Reserved1:3;
        ULONG DataLinkProtocolError:1;
        ULONG SurpriseDownError:1;
        ULONG Reserved2:6;
        ULONG PoisonedTLP:1;
        ULONG FlowControlProtocolError:1;
        ULONG CompletionTimeout:1;
        ULONG CompleterAbort:1;
        ULONG UnexpectedCompletion:1;
        ULONG ReceiverOverflow:1;
        ULONG MalformedTLP:1;
        ULONG ECRCError:1;
        ULONG UnsupportedRequestError:1;
        ULONG AcsViolation:1;
        ULONG UncorrectableInternalError:1;
        ULONG MCBlockedTlp:1;
        ULONG AtomicOpEgressBlocked:1;
        ULONG TlpPrefixBlocked:1;
        ULONG Reserved3:6;
    } DUMMYSTRUCTNAME;
    ULONG AsULONG;
} PCI_EXPRESS_UNCORRECTABLE_ERROR_STATUS, *PPCI_EXPRESS_UNCORRECTABLE_ERROR_STATUS;
typedef union _PCI_EXPRESS_UNCORRECTABLE_ERROR_MASK {
    struct {
        ULONG Undefined:1;
        ULONG Reserved1:3;
        ULONG DataLinkProtocolError:1;
        ULONG SurpriseDownError:1;
        ULONG Reserved2:6;
        ULONG PoisonedTLP:1;
        ULONG FlowControlProtocolError:1;
        ULONG CompletionTimeout:1;
        ULONG CompleterAbort:1;
        ULONG UnexpectedCompletion:1;
        ULONG ReceiverOverflow:1;
        ULONG MalformedTLP:1;
        ULONG ECRCError:1;
        ULONG UnsupportedRequestError:1;
        ULONG AcsViolation:1;
        ULONG UncorrectableInternalError:1;
        ULONG MCBlockedTlp:1;
        ULONG AtomicOpEgressBlocked:1;
        ULONG TlpPrefixBlocked:1;
        ULONG Reserved3:6;
    } DUMMYSTRUCTNAME;
    ULONG AsULONG;
} PCI_EXPRESS_UNCORRECTABLE_ERROR_MASK, *PPCI_EXPRESS_UNCORRECTABLE_ERROR_MASK;
typedef union _PCI_EXPRESS_UNCORRECTABLE_ERROR_SEVERITY {
    struct {
        ULONG Undefined:1;
        ULONG Reserved1:3;
        ULONG DataLinkProtocolError:1;
        ULONG SurpriseDownError:1;
        ULONG Reserved2:6;
        ULONG PoisonedTLP:1;
        ULONG FlowControlProtocolError:1;
        ULONG CompletionTimeout:1;
        ULONG CompleterAbort:1;
        ULONG UnexpectedCompletion:1;
        ULONG ReceiverOverflow:1;
        ULONG MalformedTLP:1;
        ULONG ECRCError:1;
        ULONG UnsupportedRequestError:1;
        ULONG AcsViolation:1;
        ULONG UncorrectableInternalError:1;
        ULONG MCBlockedTlp:1;
        ULONG AtomicOpEgressBlocked:1;
        ULONG TlpPrefixBlocked:1;
        ULONG Reserved3:6;
    } DUMMYSTRUCTNAME;
    ULONG AsULONG;
} PCI_EXPRESS_UNCORRECTABLE_ERROR_SEVERITY, *PPCI_EXPRESS_UNCORRECTABLE_ERROR_SEVERITY;
typedef union _PCI_EXPRESS_CORRECTABLE_ERROR_STATUS {
    struct {
        ULONG ReceiverError:1;
        ULONG Reserved1:5;
        ULONG BadTLP:1;
        ULONG BadDLLP:1;
        ULONG ReplayNumRollover:1;
        ULONG Reserved2:3;
        ULONG ReplayTimerTimeout:1;
        ULONG AdvisoryNonFatalError:1;
        ULONG CorrectedInternalError:1;
        ULONG HeaderLogOverflow:1;
        ULONG Reserved3:16;
    } DUMMYSTRUCTNAME;
    ULONG AsULONG;
} PCI_EXPRESS_CORRECTABLE_ERROR_STATUS, *PPCI_CORRECTABLE_ERROR_STATUS;
typedef union _PCI_EXPRESS_CORRECTABLE_ERROR_MASK {
    struct {
        ULONG ReceiverError:1;
        ULONG Reserved1:5;
        ULONG BadTLP:1;
        ULONG BadDLLP:1;
        ULONG ReplayNumRollover:1;
        ULONG Reserved2:3;
        ULONG ReplayTimerTimeout:1;
        ULONG AdvisoryNonFatalError:1;
        ULONG CorrectedInternalError:1;
        ULONG HeaderLogOverflow:1;
        ULONG Reserved3:16;
    } DUMMYSTRUCTNAME;
    ULONG AsULONG;
} PCI_EXPRESS_CORRECTABLE_ERROR_MASK, *PPCI_CORRECTABLE_ERROR_MASK;
typedef union _PCI_EXPRESS_AER_CAPABILITIES {
    struct {
        ULONG FirstErrorPointer:5;
        ULONG ECRCGenerationCapable:1;
        ULONG ECRCGenerationEnable:1;
        ULONG ECRCCheckCapable:1;
        ULONG ECRCCheckEnable:1;
        ULONG MultipleHeaderRecordingCapable:1;
        ULONG MultipleHeaderRecordingEnable:1;
        ULONG TlpPrefixLogPresent:1;
        ULONG Reserved:20;
    } DUMMYSTRUCTNAME;
    ULONG AsULONG;
} PCI_EXPRESS_AER_CAPABILITIES, *PPCI_EXPRESS_AER_CAPABILITIES;
typedef union _PCI_EXPRESS_ROOT_ERROR_COMMAND {
    struct {
        ULONG CorrectableErrorReportingEnable:1;
        ULONG NonFatalErrorReportingEnable:1;
        ULONG FatalErrorReportingEnable:1;
        ULONG Reserved:29;
    } DUMMYSTRUCTNAME;
    ULONG AsULONG;
} PCI_EXPRESS_ROOT_ERROR_COMMAND, *PPCI_EXPRESS_ROOT_ERROR_COMMAND;
typedef union _PCI_EXPRESS_ROOT_ERROR_STATUS {
    struct {
        ULONG CorrectableErrorReceived:1;
        ULONG MultipleCorrectableErrorsReceived:1;
        ULONG UncorrectableErrorReceived:1;
        ULONG MultipleUncorrectableErrorsReceived:1;
        ULONG FirstUncorrectableFatal:1;
        ULONG NonFatalErrorMessagesReceived:1;
        ULONG FatalErrorMessagesReceived:1;
        ULONG Reserved:20;
        ULONG AdvancedErrorInterruptMessageNumber:5;
    } DUMMYSTRUCTNAME;
    ULONG AsULONG;
} PCI_EXPRESS_ROOT_ERROR_STATUS, *PPCI_EXPRESS_ROOT_ERROR_STATUS;
typedef union _PCI_EXPRESS_ERROR_SOURCE_ID {
    struct {
        USHORT CorrectableSourceIdFun:3;
        USHORT CorrectableSourceIdDev:5;
        USHORT CorrectableSourceIdBus:8;
        USHORT UncorrectableSourceIdFun:3;
        USHORT UncorrectableSourceIdDev:5;
        USHORT UncorrectableSourceIdBus:8;
    } DUMMYSTRUCTNAME;
    ULONG AsULONG;
} PCI_EXPRESS_ERROR_SOURCE_ID, *PPCI_EXPRESS_ERROR_SOURCE_ID;
typedef union _PCI_EXPRESS_SEC_UNCORRECTABLE_ERROR_STATUS {
    struct {
        ULONG TargetAbortOnSplitCompletion:1;
        ULONG MasterAbortOnSplitCompletion:1;
        ULONG ReceivedTargetAbort:1;
        ULONG ReceivedMasterAbort:1;
        ULONG RsvdZ:1;
        ULONG UnexpectedSplitCompletionError:1;
        ULONG UncorrectableSplitCompletion:1;
        ULONG UncorrectableDataError:1;
        ULONG UncorrectableAttributeError:1;
        ULONG UncorrectableAddressError:1;
        ULONG DelayedTransactionDiscardTimerExpired:1;
        ULONG PERRAsserted:1;
        ULONG SERRAsserted:1;
        ULONG InternalBridgeError:1;
        ULONG Reserved:18;
    } DUMMYSTRUCTNAME;
    ULONG AsULONG;
} PCI_EXPRESS_SEC_UNCORRECTABLE_ERROR_STATUS,
  *PPCI_EXPRESS_SEC_UNCORRECTABLE_ERROR_STATUS;
typedef union _PCI_EXPRESS_SEC_UNCORRECTABLE_ERROR_MASK {
    struct {
        ULONG TargetAbortOnSplitCompletion:1;
        ULONG MasterAbortOnSplitCompletion:1;
        ULONG ReceivedTargetAbort:1;
        ULONG ReceivedMasterAbort:1;
        ULONG RsvdZ:1;
        ULONG UnexpectedSplitCompletionError:1;
        ULONG UncorrectableSplitCompletion:1;
        ULONG UncorrectableDataError:1;
        ULONG UncorrectableAttributeError:1;
        ULONG UncorrectableAddressError:1;
        ULONG DelayedTransactionDiscardTimerExpired:1;
        ULONG PERRAsserted:1;
        ULONG SERRAsserted:1;
        ULONG InternalBridgeError:1;
        ULONG Reserved:18;
    } DUMMYSTRUCTNAME;
    ULONG AsULONG;
} PCI_EXPRESS_SEC_UNCORRECTABLE_ERROR_MASK,
  *PPCI_EXPRESS_SEC_UNCORRECTABLE_ERROR_MASK;
typedef union _PCI_EXPRESS_SEC_UNCORRECTABLE_ERROR_SEVERITY {
    struct {
        ULONG TargetAbortOnSplitCompletion:1;
        ULONG MasterAbortOnSplitCompletion:1;
        ULONG ReceivedTargetAbort:1;
        ULONG ReceivedMasterAbort:1;
        ULONG RsvdZ:1;
        ULONG UnexpectedSplitCompletionError:1;
        ULONG UncorrectableSplitCompletion:1;
        ULONG UncorrectableDataError:1;
        ULONG UncorrectableAttributeError:1;
        ULONG UncorrectableAddressError:1;
        ULONG DelayedTransactionDiscardTimerExpired:1;
        ULONG PERRAsserted:1;
        ULONG SERRAsserted:1;
        ULONG InternalBridgeError:1;
        ULONG Reserved:18;
    } DUMMYSTRUCTNAME;
    ULONG AsULONG;
} PCI_EXPRESS_SEC_UNCORRECTABLE_ERROR_SEVERITY,
  *PPCI_EXPRESS_SEC_UNCORRECTABLE_ERROR_SEVERITY;
typedef union _PCI_EXPRESS_SEC_AER_CAPABILITIES {
    struct {
        ULONG SecondaryUncorrectableFirstErrorPtr:5;
        ULONG Reserved:27;
    } DUMMYSTRUCTNAME;
    ULONG AsULONG;
} PCI_EXPRESS_SEC_AER_CAPABILITIES, *PPCI_EXPRESS_SEC_AER_CAPABILITIES;
    (ROOT_CMD_ENABLE_FATAL_ERROR_REPORTING | \
     ROOT_CMD_ENABLE_NONFATAL_ERROR_REPORTING | \
     ROOT_CMD_ENABLE_CORRECTABLE_ERROR_REPORTING)
typedef struct _PCI_EXPRESS_AER_CAPABILITY {
    PCI_EXPRESS_ENHANCED_CAPABILITY_HEADER Header;
    PCI_EXPRESS_UNCORRECTABLE_ERROR_STATUS UncorrectableErrorStatus;
    PCI_EXPRESS_UNCORRECTABLE_ERROR_MASK UncorrectableErrorMask;
    PCI_EXPRESS_UNCORRECTABLE_ERROR_SEVERITY UncorrectableErrorSeverity;
    PCI_EXPRESS_CORRECTABLE_ERROR_STATUS CorrectableErrorStatus;
    PCI_EXPRESS_CORRECTABLE_ERROR_MASK CorrectableErrorMask;
    PCI_EXPRESS_AER_CAPABILITIES CapabilitiesAndControl;
    ULONG HeaderLog[4];
    PCI_EXPRESS_SEC_UNCORRECTABLE_ERROR_STATUS SecUncorrectableErrorStatus;
    PCI_EXPRESS_SEC_UNCORRECTABLE_ERROR_MASK SecUncorrectableErrorMask;
    PCI_EXPRESS_SEC_UNCORRECTABLE_ERROR_SEVERITY SecUncorrectableErrorSeverity;
    PCI_EXPRESS_SEC_AER_CAPABILITIES SecCapabilitiesAndControl;
    ULONG SecHeaderLog[4];
} PCI_EXPRESS_AER_CAPABILITY, *PPCI_EXPRESS_AER_CAPABILITY;
typedef struct _PCI_EXPRESS_ROOTPORT_AER_CAPABILITY {
    PCI_EXPRESS_ENHANCED_CAPABILITY_HEADER Header;
    PCI_EXPRESS_UNCORRECTABLE_ERROR_STATUS UncorrectableErrorStatus;
    PCI_EXPRESS_UNCORRECTABLE_ERROR_MASK UncorrectableErrorMask;
    PCI_EXPRESS_UNCORRECTABLE_ERROR_SEVERITY UncorrectableErrorSeverity;
    PCI_EXPRESS_CORRECTABLE_ERROR_STATUS CorrectableErrorStatus;
    PCI_EXPRESS_CORRECTABLE_ERROR_MASK CorrectableErrorMask;
    PCI_EXPRESS_AER_CAPABILITIES CapabilitiesAndControl;
    ULONG HeaderLog[4];
    PCI_EXPRESS_ROOT_ERROR_COMMAND RootErrorCommand;
    PCI_EXPRESS_ROOT_ERROR_STATUS RootErrorStatus;
    PCI_EXPRESS_ERROR_SOURCE_ID ErrorSourceId;
} PCI_EXPRESS_ROOTPORT_AER_CAPABILITY, *PPCI_EXPRESS_ROOTPORT_AER_CAPABILITY;
typedef struct _PCI_EXPRESS_BRIDGE_AER_CAPABILITY {
    PCI_EXPRESS_ENHANCED_CAPABILITY_HEADER Header;
    PCI_EXPRESS_UNCORRECTABLE_ERROR_STATUS UncorrectableErrorStatus;
    PCI_EXPRESS_UNCORRECTABLE_ERROR_MASK UncorrectableErrorMask;
    PCI_EXPRESS_UNCORRECTABLE_ERROR_SEVERITY UncorrectableErrorSeverity;
    PCI_EXPRESS_CORRECTABLE_ERROR_STATUS CorrectableErrorStatus;
    PCI_EXPRESS_CORRECTABLE_ERROR_MASK CorrectableErrorMask;
    PCI_EXPRESS_AER_CAPABILITIES CapabilitiesAndControl;
    ULONG HeaderLog[4];
    PCI_EXPRESS_SEC_UNCORRECTABLE_ERROR_STATUS SecUncorrectableErrorStatus;
    PCI_EXPRESS_SEC_UNCORRECTABLE_ERROR_MASK SecUncorrectableErrorMask;
    PCI_EXPRESS_SEC_UNCORRECTABLE_ERROR_SEVERITY SecUncorrectableErrorSeverity;
    PCI_EXPRESS_SEC_AER_CAPABILITIES SecCapabilitiesAndControl;
    ULONG SecHeaderLog[4];
} PCI_EXPRESS_BRIDGE_AER_CAPABILITY, *PPCI_EXPRESS_BRIDGE_AER_CAPABILITY;
typedef union _PCI_EXPRESS_ACS_CAPABILITY_REGISTER {
    struct {
        USHORT SourceValidation:1;
        USHORT TranslationBlocking:1;
        USHORT RequestRedirect:1;
        USHORT CompletionRedirect:1;
        USHORT UpstreamForwarding:1;
        USHORT EgressControl:1;
        USHORT DirectTranslation:1;
        USHORT Reserved:1;
        USHORT EgressControlVectorSize:8;
    } DUMMYSTRUCTNAME;
    USHORT AsUSHORT;
} PCI_EXPRESS_ACS_CAPABILITY_REGISTER, *PPCI_EXPRESS_ACS_CAPABILITY_REGISTER;
typedef union _PCI_EXPRESS_ACS_CONTROL {
    struct {
        USHORT SourceValidation:1;
        USHORT TranslationBlocking:1;
        USHORT RequestRedirect:1;
        USHORT CompletionRedirect:1;
        USHORT UpstreamForwarding:1;
        USHORT EgressControl:1;
        USHORT DirectTranslation:1;
        USHORT Reserved:9;
    } DUMMYSTRUCTNAME;
    USHORT AsUSHORT;
} PCI_EXPRESS_ACS_CONTROL, *PPCI_EXPRESS_ACS_CONTROL;
typedef struct _PCI_EXPRESS_ACS_CAPABILITY {
    PCI_EXPRESS_ENHANCED_CAPABILITY_HEADER Header;
    PCI_EXPRESS_ACS_CAPABILITY_REGISTER Capability;
    PCI_EXPRESS_ACS_CONTROL Control;
    ULONG EgressControl[1];
} PCI_EXPRESS_ACS_CAPABILITY, *PPCI_EXPRESS_ACS_CAPABILITY ;
typedef union _PCI_EXPRESS_SRIOV_CAPS {
    struct {
        ULONG VFMigrationCapable:1;
        ULONG Reserved1:20;
        ULONG VFMigrationInterruptNumber:11;
    } DUMMYSTRUCTNAME;
    ULONG AsULONG;
} PCI_EXPRESS_SRIOV_CAPS, *PPCI_EXPRESS_SRIOV_CAPS;
typedef union _PCI_EXPRESS_SRIOV_CONTROL {
    struct {
        USHORT VFEnable:1;
        USHORT VFMigrationEnable:1;
        USHORT VFMigrationInterruptEnable:1;
        USHORT VFMemorySpaceEnable:1;
        USHORT ARICapableHierarchy:1;
        USHORT Reserved1:11;
    } DUMMYSTRUCTNAME;
    USHORT AsUSHORT;
} PCI_EXPRESS_SRIOV_CONTROL, *PPCI_EXPRESS_SRIOV_CONTROL;
typedef union _PCI_EXPRESS_SRIOV_STATUS {
    struct {
        USHORT VFMigrationStatus:1;
        USHORT Reserved1:15;
    } DUMMYSTRUCTNAME;
    USHORT AsUSHORT;
} PCI_EXPRESS_SRIOV_STATUS, *PPCI_EXPRESS_SRIOV_STATUS;
typedef union _PCI_EXPRESS_SRIOV_MIGRATION_STATE_ARRAY {
    struct {
        ULONG VFMigrationStateBIR:3;
        ULONG VFMigrationStateOffset:29;
    } DUMMYSTRUCTNAME;
    ULONG AsULONG;
} PCI_EXPRESS_SRIOV_MIGRATION_STATE_ARRAY, *PPCI_EXPRESS_SRIOV_MIGRATION_STATE_ARRAY;
typedef struct _PCI_EXPRESS_SRIOV_CAPABILITY {
    PCI_EXPRESS_ENHANCED_CAPABILITY_HEADER Header;
    PCI_EXPRESS_SRIOV_CAPS SRIOVCapabilities;
    PCI_EXPRESS_SRIOV_CONTROL SRIOVControl;
    PCI_EXPRESS_SRIOV_STATUS SRIOVStatus;
    USHORT InitialVFs;
    USHORT TotalVFs;
    USHORT NumVFs;
    UCHAR FunctionDependencyLink;
    UCHAR RsvdP1;
    USHORT FirstVFOffset;
    USHORT VFStride;
    USHORT RsvdP2;
    USHORT VFDeviceId;
    ULONG SupportedPageSizes;
    ULONG SystemPageSize;
    ULONG BaseAddresses[PCI_TYPE0_ADDRESSES];
    PCI_EXPRESS_SRIOV_MIGRATION_STATE_ARRAY VFMigrationStateArrayOffset;
} PCI_EXPRESS_SRIOV_CAPABILITY, *PPCI_EXPRESS_SRIOV_CAPABILITY;
typedef struct _PCI_DEVICE_PRESENCE_PARAMETERS {
    ULONG Size;
    ULONG Flags;
    USHORT VendorID;
    USHORT DeviceID;
    UCHAR RevisionID;
    USHORT SubVendorID;
    USHORT SubSystemID;
    UCHAR BaseClass;
    UCHAR SubClass;
    UCHAR ProgIf;
} PCI_DEVICE_PRESENCE_PARAMETERS, *PPCI_DEVICE_PRESENCE_PARAMETERS;
_IRQL_requires_max_(PASSIVE_LEVEL)
_Must_inspect_result_
typedef
BOOLEAN
PCI_IS_DEVICE_PRESENT (
    _In_ USHORT VendorID,
    _In_ USHORT DeviceID,
    _In_ UCHAR RevisionID,
    _In_ USHORT SubVendorID,
    _In_ USHORT SubSystemID,
    _In_ ULONG Flags
);
typedef PCI_IS_DEVICE_PRESENT *PPCI_IS_DEVICE_PRESENT;
_IRQL_requires_max_(PASSIVE_LEVEL)
_Must_inspect_result_
typedef
BOOLEAN
PCI_IS_DEVICE_PRESENT_EX (
    _In_ PVOID Context,
    _In_ PPCI_DEVICE_PRESENCE_PARAMETERS Parameters
    );
typedef PCI_IS_DEVICE_PRESENT_EX *PPCI_IS_DEVICE_PRESENT_EX;
typedef struct _PCI_DEVICE_PRESENT_INTERFACE {
    USHORT Size;
    USHORT Version;
    PVOID Context;
    PINTERFACE_REFERENCE InterfaceReference;
    PINTERFACE_DEREFERENCE InterfaceDereference;
    PPCI_IS_DEVICE_PRESENT IsDevicePresent;
    PPCI_IS_DEVICE_PRESENT_EX IsDevicePresentEx;
} PCI_DEVICE_PRESENT_INTERFACE, *PPCI_DEVICE_PRESENT_INTERFACE;
_IRQL_requires_max_(PASSIVE_LEVEL)
_Must_inspect_result_
typedef
NTSTATUS
PCI_EXPRESS_ENTER_LINK_QUIESCENT_MODE (
    _Inout_ PVOID Context
    );
typedef PCI_EXPRESS_ENTER_LINK_QUIESCENT_MODE *PPCI_EXPRESS_ENTER_LINK_QUIESCENT_MODE;
_IRQL_requires_max_(PASSIVE_LEVEL)
_Must_inspect_result_
typedef
NTSTATUS
PCI_EXPRESS_EXIT_LINK_QUIESCENT_MODE (
    _Inout_ PVOID Context
    );
typedef PCI_EXPRESS_EXIT_LINK_QUIESCENT_MODE *PPCI_EXPRESS_EXIT_LINK_QUIESCENT_MODE;
typedef struct _PCI_EXPRESS_LINK_QUIESCENT_INTERFACE {
    USHORT Size;
    USHORT Version;
    PVOID Context;
    PINTERFACE_REFERENCE InterfaceReference;
    PINTERFACE_DEREFERENCE InterfaceDereference;
    PPCI_EXPRESS_ENTER_LINK_QUIESCENT_MODE PciExpressEnterLinkQuiescentMode;
    PPCI_EXPRESS_EXIT_LINK_QUIESCENT_MODE PciExpressExitLinkQuiescentMode;
} PCI_EXPRESS_LINK_QUIESCENT_INTERFACE, *PPCI_EXPRESS_LINK_QUIESCENT_INTERFACE;
typedef
ULONG
(*PPCI_EXPRESS_ROOT_PORT_READ_CONFIG_SPACE) (
    _In_ PVOID Context,
    _Out_writes_bytes_(Length) PVOID Buffer,
    _In_ ULONG Offset,
    _In_ ULONG Length
    );
typedef
ULONG
(*PPCI_EXPRESS_ROOT_PORT_WRITE_CONFIG_SPACE) (
    _In_ PVOID Context,
    _In_reads_bytes_(Length) PVOID Buffer,
    _In_ ULONG Offset,
    _In_ ULONG Length
    );
typedef struct _PCI_EXPRESS_ROOT_PORT_INTERFACE {
    USHORT Size;
    USHORT Version;
    PVOID Context;
    PINTERFACE_REFERENCE InterfaceReference;
    PINTERFACE_DEREFERENCE InterfaceDereference;
    PPCI_EXPRESS_ROOT_PORT_READ_CONFIG_SPACE ReadConfigSpace;
    PPCI_EXPRESS_ROOT_PORT_WRITE_CONFIG_SPACE WriteConfigSpace;
} PCI_EXPRESS_ROOT_PORT_INTERFACE, *PPCI_EXPRESS_ROOT_PORT_INTERFACE;
_Must_inspect_result_
typedef
NTSTATUS
PCI_MSIX_SET_ENTRY (
    _In_ PVOID Context,
    _In_ ULONG TableEntry,
    _In_ ULONG MessageNumber
    );
typedef PCI_MSIX_SET_ENTRY *PPCI_MSIX_SET_ENTRY;
_Must_inspect_result_
typedef
NTSTATUS
PCI_MSIX_MASKUNMASK_ENTRY (
    _In_ PVOID Context,
    _In_ ULONG TableEntry
    );
typedef PCI_MSIX_MASKUNMASK_ENTRY *PPCI_MSIX_MASKUNMASK_ENTRY;
_Must_inspect_result_
typedef
NTSTATUS
PCI_MSIX_GET_ENTRY (
    _In_ PVOID Context,
    _In_ ULONG TableEntry,
    _Out_ PULONG MessageNumber,
    _Out_ PBOOLEAN Masked
    );
typedef PCI_MSIX_GET_ENTRY *PPCI_MSIX_GET_ENTRY;
_Must_inspect_result_
typedef
NTSTATUS
PCI_MSIX_GET_TABLE_SIZE (
    _In_ PVOID Context,
    _Out_ PULONG TableSize
    );
typedef PCI_MSIX_GET_TABLE_SIZE *PPCI_MSIX_GET_TABLE_SIZE;
typedef struct _PCI_MSIX_TABLE_CONFIG_INTERFACE {
    USHORT Size;
    USHORT Version;
    PVOID Context;
    PINTERFACE_REFERENCE InterfaceReference;
    PINTERFACE_DEREFERENCE InterfaceDereference;
    PPCI_MSIX_SET_ENTRY SetTableEntry;
    PPCI_MSIX_MASKUNMASK_ENTRY MaskTableEntry;
    PPCI_MSIX_MASKUNMASK_ENTRY UnmaskTableEntry;
    PPCI_MSIX_GET_ENTRY GetTableEntry;
    PPCI_MSIX_GET_TABLE_SIZE GetTableSize;
} PCI_MSIX_TABLE_CONFIG_INTERFACE, *PPCI_MSIX_TABLE_CONFIG_INTERFACE;
        RTL_SIZEOF_THROUGH_FIELD(PCI_MSIX_TABLE_CONFIG_INTERFACE, UnmaskTableEntry)
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwCreateFile(
    _Out_ PHANDLE FileHandle,
    _In_ ACCESS_MASK DesiredAccess,
    _In_ POBJECT_ATTRIBUTES ObjectAttributes,
    _Out_ PIO_STATUS_BLOCK IoStatusBlock,
    _In_opt_ PLARGE_INTEGER AllocationSize,
    _In_ ULONG FileAttributes,
    _In_ ULONG ShareAccess,
    _In_ ULONG CreateDisposition,
    _In_ ULONG CreateOptions,
    _In_reads_bytes_opt_(EaLength) PVOID EaBuffer,
    _In_ ULONG EaLength
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwOpenFile(
    _Out_ PHANDLE FileHandle,
    _In_ ACCESS_MASK DesiredAccess,
    _In_ POBJECT_ATTRIBUTES ObjectAttributes,
    _Out_ PIO_STATUS_BLOCK IoStatusBlock,
    _In_ ULONG ShareAccess,
    _In_ ULONG OpenOptions
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwLoadDriver(
    _In_ PUNICODE_STRING DriverServiceName
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwUnloadDriver(
    _In_ PUNICODE_STRING DriverServiceName
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwQueryInformationFile(
    _In_ HANDLE FileHandle,
    _Out_ PIO_STATUS_BLOCK IoStatusBlock,
    _Out_writes_bytes_(Length) PVOID FileInformation,
    _In_ ULONG Length,
    _In_ FILE_INFORMATION_CLASS FileInformationClass
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwSetInformationFile(
    _In_ HANDLE FileHandle,
    _Out_ PIO_STATUS_BLOCK IoStatusBlock,
    _In_reads_bytes_(Length) PVOID FileInformation,
    _In_ ULONG Length,
    _In_ FILE_INFORMATION_CLASS FileInformationClass
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwReadFile(
    _In_ HANDLE FileHandle,
    _In_opt_ HANDLE Event,
    _In_opt_ PIO_APC_ROUTINE ApcRoutine,
    _In_opt_ PVOID ApcContext,
    _Out_ PIO_STATUS_BLOCK IoStatusBlock,
    _Out_writes_bytes_(Length) PVOID Buffer,
    _In_ ULONG Length,
    _In_opt_ PLARGE_INTEGER ByteOffset,
    _In_opt_ PULONG Key
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwWriteFile(
    _In_ HANDLE FileHandle,
    _In_opt_ HANDLE Event,
    _In_opt_ PIO_APC_ROUTINE ApcRoutine,
    _In_opt_ PVOID ApcContext,
    _Out_ PIO_STATUS_BLOCK IoStatusBlock,
    _In_reads_bytes_(Length) PVOID Buffer,
    _In_ ULONG Length,
    _In_opt_ PLARGE_INTEGER ByteOffset,
    _In_opt_ PULONG Key
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwClose(
    _In_ HANDLE Handle
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwCreateDirectoryObject(
    _Out_ PHANDLE DirectoryHandle,
    _In_ ACCESS_MASK DesiredAccess,
    _In_ POBJECT_ATTRIBUTES ObjectAttributes
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwMakeTemporaryObject(
    _In_ HANDLE Handle
    );
_IRQL_requires_max_(APC_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwCreateSection (
    _Out_ PHANDLE SectionHandle,
    _In_ ACCESS_MASK DesiredAccess,
    _In_opt_ POBJECT_ATTRIBUTES ObjectAttributes,
    _In_opt_ PLARGE_INTEGER MaximumSize,
    _In_ ULONG SectionPageProtection,
    _In_ ULONG AllocationAttributes,
    _In_opt_ HANDLE FileHandle
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwOpenSection(
    _Out_ PHANDLE SectionHandle,
    _In_ ACCESS_MASK DesiredAccess,
    _In_ POBJECT_ATTRIBUTES ObjectAttributes
    );
_Must_inspect_result_
_Post_satisfies_(*ViewSize >= _Old_(*ViewSize))
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwMapViewOfSection(
    _In_ HANDLE SectionHandle,
    _In_ HANDLE ProcessHandle,
    _Outptr_result_bytebuffer_(*ViewSize) PVOID *BaseAddress,
    _In_ ULONG_PTR ZeroBits,
    _In_ SIZE_T CommitSize,
    _Inout_opt_ PLARGE_INTEGER SectionOffset,
    _Inout_ PSIZE_T ViewSize,
    _In_ SECTION_INHERIT InheritDisposition,
    _In_ ULONG AllocationType,
    _In_ ULONG Win32Protect
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwUnmapViewOfSection(
    _In_ HANDLE ProcessHandle,
    _In_opt_ PVOID BaseAddress
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwCreateKey(
    _Out_ PHANDLE KeyHandle,
    _In_ ACCESS_MASK DesiredAccess,
    _In_ POBJECT_ATTRIBUTES ObjectAttributes,
    _Reserved_ ULONG TitleIndex,
    _In_opt_ PUNICODE_STRING Class,
    _In_ ULONG CreateOptions,
    _Out_opt_ PULONG Disposition
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
ZwCreateKeyTransacted(
    _Out_ PHANDLE KeyHandle,
    _In_ ACCESS_MASK DesiredAccess,
    _In_ POBJECT_ATTRIBUTES ObjectAttributes,
    _Reserved_ ULONG TitleIndex,
    _In_opt_ PUNICODE_STRING Class,
    _In_ ULONG CreateOptions,
    _In_ HANDLE TransactionHandle,
    _Out_opt_ PULONG Disposition
    );
_Must_inspect_result_
_IRQL_requires_max_ (PASSIVE_LEVEL)
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
ZwCreateRegistryTransaction (
    _Out_ PHANDLE TransactionHandle,
    _In_ ACCESS_MASK DesiredAccess,
    _In_opt_ POBJECT_ATTRIBUTES ObjectAttributes,
    _In_opt_ ULONG CreateOptions
    );
_Must_inspect_result_
_IRQL_requires_max_ (PASSIVE_LEVEL)
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtOpenRegistryTransaction (
    _Out_ PHANDLE TransactionHandle,
    _In_ ACCESS_MASK DesiredAccess,
    _In_ POBJECT_ATTRIBUTES ObjectAttributes
    );
_IRQL_requires_max_ (PASSIVE_LEVEL)
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
ZwCommitRegistryTransaction (
    _In_ HANDLE TransactionHandle,
    _In_ ULONG Flags
    );
_IRQL_requires_max_ (PASSIVE_LEVEL)
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtRollbackRegistryTransaction (
    _In_ HANDLE TransactionHandle,
    _In_ ULONG Flags
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwOpenKey(
    _Out_ PHANDLE KeyHandle,
    _In_ ACCESS_MASK DesiredAccess,
    _In_ POBJECT_ATTRIBUTES ObjectAttributes
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwOpenKeyEx(
    _Out_ PHANDLE KeyHandle,
    _In_ ACCESS_MASK DesiredAccess,
    _In_ POBJECT_ATTRIBUTES ObjectAttributes,
    _In_ ULONG OpenOptions
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwOpenKeyTransacted(
    _Out_ PHANDLE KeyHandle,
    _In_ ACCESS_MASK DesiredAccess,
    _In_ POBJECT_ATTRIBUTES ObjectAttributes,
    _In_ HANDLE TransactionHandle
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwOpenKeyTransactedEx(
    _Out_ PHANDLE KeyHandle,
    _In_ ACCESS_MASK DesiredAccess,
    _In_ POBJECT_ATTRIBUTES ObjectAttributes,
    _In_ ULONG OpenOptions,
    _In_ HANDLE TransactionHandle
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwDeleteKey(
    _In_ HANDLE KeyHandle
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwDeleteValueKey(
    _In_ HANDLE KeyHandle,
    _In_ PUNICODE_STRING ValueName
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
_When_(Length == 0, _Post_satisfies_(return < 0))
_When_(Length > 0, _Post_satisfies_(return <= 0))
_Success_(return == STATUS_SUCCESS)
_On_failure_(_When_(return == STATUS_BUFFER_OVERFLOW || return == STATUS_BUFFER_TOO_SMALL, _Post_satisfies_(*ResultLength > Length)))
NTSYSAPI
NTSTATUS
NTAPI
ZwEnumerateKey(
    _In_ HANDLE KeyHandle,
    _In_ ULONG Index,
    _In_ KEY_INFORMATION_CLASS KeyInformationClass,
    _Out_writes_bytes_to_opt_(Length, *ResultLength) PVOID KeyInformation,
    _In_ ULONG Length,
    _Out_ PULONG ResultLength
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
_When_(Length == 0, _Post_satisfies_(return < 0))
_When_(Length > 0, _Post_satisfies_(return <= 0))
_Success_(return == STATUS_SUCCESS)
_On_failure_(_When_(return == STATUS_BUFFER_OVERFLOW || return == STATUS_BUFFER_TOO_SMALL, _Post_satisfies_(*ResultLength > Length)))
NTSYSAPI
NTSTATUS
NTAPI
ZwEnumerateValueKey(
    _In_ HANDLE KeyHandle,
    _In_ ULONG Index,
    _In_ KEY_VALUE_INFORMATION_CLASS KeyValueInformationClass,
    _Out_writes_bytes_to_opt_(Length, *ResultLength) PVOID KeyValueInformation,
    _In_ ULONG Length,
    _Out_ PULONG ResultLength
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwFlushKey(
    _In_ HANDLE KeyHandle
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
_When_(Length == 0, _Post_satisfies_(return < 0))
_When_(Length > 0, _Post_satisfies_(return <= 0))
_Success_(return == STATUS_SUCCESS)
_On_failure_(_When_(return == STATUS_BUFFER_OVERFLOW || return == STATUS_BUFFER_TOO_SMALL, _Post_satisfies_(*ResultLength > Length)))
NTSYSAPI
NTSTATUS
NTAPI
ZwQueryKey(
    _In_ HANDLE KeyHandle,
    _In_ KEY_INFORMATION_CLASS KeyInformationClass,
    _Out_writes_bytes_to_opt_(Length, *ResultLength) PVOID KeyInformation,
    _In_ ULONG Length,
    _Out_ PULONG ResultLength
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
_When_(Length == 0, _Post_satisfies_(return < 0))
_When_(Length > 0, _Post_satisfies_(return <= 0))
_Success_(return == STATUS_SUCCESS)
_On_failure_(_When_(return == STATUS_BUFFER_OVERFLOW || return == STATUS_BUFFER_TOO_SMALL, _Post_satisfies_(*ResultLength > Length)))
NTSYSAPI
NTSTATUS
NTAPI
ZwQueryValueKey(
    _In_ HANDLE KeyHandle,
    _In_ PUNICODE_STRING ValueName,
    _In_ KEY_VALUE_INFORMATION_CLASS KeyValueInformationClass,
    _Out_writes_bytes_to_opt_(Length, *ResultLength) PVOID KeyValueInformation,
    _In_ ULONG Length,
    _Out_ PULONG ResultLength
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwRenameKey(
    _In_ HANDLE KeyHandle,
    _In_ PUNICODE_STRING NewName
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwSaveKey (
    _In_ HANDLE KeyHandle,
    _In_ HANDLE FileHandle
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwSaveKeyEx (
    _In_ HANDLE KeyHandle,
    _In_ HANDLE FileHandle,
    _In_ ULONG Format
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwRestoreKey (
    _In_ HANDLE KeyHandle,
    _In_opt_ HANDLE FileHandle,
    _In_ ULONG Flags
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwSetInformationKey (
    _In_ HANDLE KeyHandle,
    _In_ __drv_strictTypeMatch(__drv_typeConst)
        KEY_SET_INFORMATION_CLASS KeySetInformationClass,
    _In_reads_bytes_(KeySetInformationLength) PVOID KeySetInformation,
    _In_ ULONG KeySetInformationLength
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwSetValueKey(
    _In_ HANDLE KeyHandle,
    _In_ PUNICODE_STRING ValueName,
    _In_opt_ ULONG TitleIndex,
    _In_ ULONG Type,
    _In_reads_bytes_opt_(DataSize) PVOID Data,
    _In_ ULONG DataSize
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwOpenSymbolicLinkObject(
    _Out_ PHANDLE LinkHandle,
    _In_ ACCESS_MASK DesiredAccess,
    _In_ POBJECT_ATTRIBUTES ObjectAttributes
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwQuerySymbolicLinkObject(
    _In_ HANDLE LinkHandle,
    _Inout_ PUNICODE_STRING LinkTarget,
    _Out_opt_ PULONG ReturnedLength
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSCALLAPI
NTSTATUS
NTAPI
ZwCreateTransactionManager (
    _Out_ PHANDLE TmHandle,
    _In_ ACCESS_MASK DesiredAccess,
    _In_opt_ POBJECT_ATTRIBUTES ObjectAttributes,
    _In_opt_ PUNICODE_STRING LogFileName,
    _In_opt_ ULONG CreateOptions,
    _In_opt_ ULONG CommitStrength
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSCALLAPI
NTSTATUS
NTAPI
ZwOpenTransactionManager (
    _Out_ PHANDLE TmHandle,
    _In_ ACCESS_MASK DesiredAccess,
    _In_opt_ POBJECT_ATTRIBUTES ObjectAttributes,
    _In_opt_ PUNICODE_STRING LogFileName,
    _In_opt_ LPGUID TmIdentity,
    _In_opt_ ULONG OpenOptions
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSCALLAPI
NTSTATUS
NTAPI
ZwRollforwardTransactionManager (
    _In_ HANDLE TransactionManagerHandle,
    _In_opt_ PLARGE_INTEGER TmVirtualClock
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSCALLAPI
NTSTATUS
NTAPI
ZwRecoverTransactionManager (
    _In_ HANDLE TransactionManagerHandle
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSCALLAPI
NTSTATUS
NTAPI
ZwQueryInformationTransactionManager (
    _In_ HANDLE TransactionManagerHandle,
    _In_ TRANSACTIONMANAGER_INFORMATION_CLASS TransactionManagerInformationClass,
    _Out_writes_bytes_(TransactionManagerInformationLength) PVOID TransactionManagerInformation,
    _In_ ULONG TransactionManagerInformationLength,
    _Out_opt_ PULONG ReturnLength
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSCALLAPI
NTSTATUS
NTAPI
ZwSetInformationTransactionManager (
    _In_ HANDLE TmHandle,
    _In_ TRANSACTIONMANAGER_INFORMATION_CLASS TransactionManagerInformationClass,
    _In_ PVOID TransactionManagerInformation,
    _In_ ULONG TransactionManagerInformationLength
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSCALLAPI
NTSTATUS
NTAPI
ZwEnumerateTransactionObject (
    _In_opt_ HANDLE RootObjectHandle,
    _In_ KTMOBJECT_TYPE QueryType,
    _Inout_updates_bytes_(ObjectCursorLength) PKTMOBJECT_CURSOR ObjectCursor,
    _In_ ULONG ObjectCursorLength,
    _Out_ PULONG ReturnLength
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSCALLAPI
NTSTATUS
NTAPI
ZwCreateTransaction (
    _Out_ PHANDLE TransactionHandle,
    _In_ ACCESS_MASK DesiredAccess,
    _In_opt_ POBJECT_ATTRIBUTES ObjectAttributes,
    _In_opt_ LPGUID Uow,
    _In_opt_ HANDLE TmHandle,
    _In_opt_ ULONG CreateOptions,
    _In_opt_ ULONG IsolationLevel,
    _In_opt_ ULONG IsolationFlags,
    _In_opt_ PLARGE_INTEGER Timeout,
    _In_opt_ PUNICODE_STRING Description
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSCALLAPI
NTSTATUS
NTAPI
ZwOpenTransaction (
    _Out_ PHANDLE TransactionHandle,
    _In_ ACCESS_MASK DesiredAccess,
    _In_opt_ POBJECT_ATTRIBUTES ObjectAttributes,
    _In_ LPGUID Uow,
    _In_opt_ HANDLE TmHandle
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSCALLAPI
NTSTATUS
NTAPI
ZwQueryInformationTransaction (
    _In_ HANDLE TransactionHandle,
    _In_ TRANSACTION_INFORMATION_CLASS TransactionInformationClass,
    _Out_writes_bytes_(TransactionInformationLength) PVOID TransactionInformation,
    _In_ ULONG TransactionInformationLength,
    _Out_opt_ PULONG ReturnLength
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSCALLAPI
NTSTATUS
NTAPI
ZwSetInformationTransaction (
    _In_ HANDLE TransactionHandle,
    _In_ TRANSACTION_INFORMATION_CLASS TransactionInformationClass,
    _In_ PVOID TransactionInformation,
    _In_ ULONG TransactionInformationLength
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSCALLAPI
NTSTATUS
NTAPI
ZwCommitTransaction (
    _In_ HANDLE TransactionHandle,
    _In_ BOOLEAN Wait
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSCALLAPI
NTSTATUS
NTAPI
ZwRollbackTransaction (
    _In_ HANDLE TransactionHandle,
    _In_ BOOLEAN Wait
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSCALLAPI
NTSTATUS
NTAPI
ZwCreateResourceManager (
    _Out_ PHANDLE ResourceManagerHandle,
    _In_ ACCESS_MASK DesiredAccess,
    _In_ HANDLE TmHandle,
    _In_opt_ LPGUID ResourceManagerGuid,
    _In_opt_ POBJECT_ATTRIBUTES ObjectAttributes,
    _In_opt_ ULONG CreateOptions,
    _In_opt_ PUNICODE_STRING Description
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSCALLAPI
NTSTATUS
NTAPI
ZwOpenResourceManager (
    _Out_ PHANDLE ResourceManagerHandle,
    _In_ ACCESS_MASK DesiredAccess,
    _In_ HANDLE TmHandle,
    _In_ LPGUID ResourceManagerGuid,
    _In_opt_ POBJECT_ATTRIBUTES ObjectAttributes
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSCALLAPI
NTSTATUS
NTAPI
ZwRecoverResourceManager (
    _In_ HANDLE ResourceManagerHandle
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSCALLAPI
NTSTATUS
NTAPI
ZwGetNotificationResourceManager (
    _In_ HANDLE ResourceManagerHandle,
    _Out_ PTRANSACTION_NOTIFICATION TransactionNotification,
    _In_ ULONG NotificationLength,
    _In_ PLARGE_INTEGER Timeout,
    _Out_opt_ PULONG ReturnLength,
    _In_ ULONG Asynchronous,
    _In_opt_ ULONG_PTR AsynchronousContext
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSCALLAPI
NTSTATUS
NTAPI
ZwQueryInformationResourceManager (
    _In_ HANDLE ResourceManagerHandle,
    _In_ RESOURCEMANAGER_INFORMATION_CLASS ResourceManagerInformationClass,
    _Out_writes_bytes_(ResourceManagerInformationLength) PVOID ResourceManagerInformation,
    _In_ ULONG ResourceManagerInformationLength,
    _Out_opt_ PULONG ReturnLength
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSCALLAPI
NTSTATUS
NTAPI
ZwSetInformationResourceManager (
    _In_ HANDLE ResourceManagerHandle,
    _In_ RESOURCEMANAGER_INFORMATION_CLASS ResourceManagerInformationClass,
    _In_reads_bytes_(ResourceManagerInformationLength) PVOID ResourceManagerInformation,
    _In_ ULONG ResourceManagerInformationLength
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSCALLAPI
NTSTATUS
NTAPI
ZwCreateEnlistment (
    _Out_ PHANDLE EnlistmentHandle,
    _In_ ACCESS_MASK DesiredAccess,
    _In_ HANDLE ResourceManagerHandle,
    _In_ HANDLE TransactionHandle,
    _In_opt_ POBJECT_ATTRIBUTES ObjectAttributes,
    _In_opt_ ULONG CreateOptions,
    _In_ NOTIFICATION_MASK NotificationMask,
    _In_opt_ PVOID EnlistmentKey
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSCALLAPI
NTSTATUS
NTAPI
ZwOpenEnlistment (
    _Out_ PHANDLE EnlistmentHandle,
    _In_ ACCESS_MASK DesiredAccess,
    _In_ HANDLE RmHandle,
    _In_ LPGUID EnlistmentGuid,
    _In_opt_ POBJECT_ATTRIBUTES ObjectAttributes
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSCALLAPI
NTSTATUS
NTAPI
ZwQueryInformationEnlistment (
    _In_ HANDLE EnlistmentHandle,
    _In_ ENLISTMENT_INFORMATION_CLASS EnlistmentInformationClass,
    _Out_writes_bytes_(EnlistmentInformationLength) PVOID EnlistmentInformation,
    _In_ ULONG EnlistmentInformationLength,
    _Out_opt_ PULONG ReturnLength
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSCALLAPI
NTSTATUS
NTAPI
ZwSetInformationEnlistment (
    _In_ HANDLE EnlistmentHandle,
    _In_ ENLISTMENT_INFORMATION_CLASS EnlistmentInformationClass,
    _In_reads_bytes_(EnlistmentInformationLength) PVOID EnlistmentInformation,
    _In_ ULONG EnlistmentInformationLength
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSCALLAPI
NTSTATUS
NTAPI
ZwRecoverEnlistment (
    _In_ HANDLE EnlistmentHandle,
    _In_opt_ PVOID EnlistmentKey
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSCALLAPI
NTSTATUS
NTAPI
ZwPrePrepareEnlistment (
    _In_ HANDLE EnlistmentHandle,
    _In_opt_ PLARGE_INTEGER TmVirtualClock
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSCALLAPI
NTSTATUS
NTAPI
ZwPrepareEnlistment (
    _In_ HANDLE EnlistmentHandle,
    _In_opt_ PLARGE_INTEGER TmVirtualClock
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSCALLAPI
NTSTATUS
NTAPI
ZwCommitEnlistment (
    _In_ HANDLE EnlistmentHandle,
    _In_opt_ PLARGE_INTEGER TmVirtualClock
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSCALLAPI
NTSTATUS
NTAPI
ZwRollbackEnlistment (
    _In_ HANDLE EnlistmentHandle,
    _In_opt_ PLARGE_INTEGER TmVirtualClock
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSCALLAPI
NTSTATUS
NTAPI
ZwPrePrepareComplete (
    _In_ HANDLE EnlistmentHandle,
    _In_opt_ PLARGE_INTEGER TmVirtualClock
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSCALLAPI
NTSTATUS
NTAPI
ZwPrepareComplete (
    _In_ HANDLE EnlistmentHandle,
    _In_opt_ PLARGE_INTEGER TmVirtualClock
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSCALLAPI
NTSTATUS
NTAPI
ZwCommitComplete (
    _In_ HANDLE EnlistmentHandle,
    _In_opt_ PLARGE_INTEGER TmVirtualClock
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSCALLAPI
NTSTATUS
NTAPI
ZwReadOnlyEnlistment (
    _In_ HANDLE EnlistmentHandle,
    _In_opt_ PLARGE_INTEGER TmVirtualClock
    );
NTSYSCALLAPI
NTSTATUS
NTAPI
ZwRollbackComplete (
    _In_ HANDLE EnlistmentHandle,
    _In_opt_ PLARGE_INTEGER TmVirtualClock
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSCALLAPI
NTSTATUS
NTAPI
ZwSinglePhaseReject (
    _In_ HANDLE EnlistmentHandle,
    _In_opt_ PLARGE_INTEGER TmVirtualClock
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSCALLAPI
NTSTATUS
NTAPI
ZwOpenEvent (
    _Out_ PHANDLE EventHandle,
    _In_ ACCESS_MASK DesiredAccess,
    _In_ POBJECT_ATTRIBUTES ObjectAttributes
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwQueryInformationByName (
    _In_ POBJECT_ATTRIBUTES ObjectAttributes,
    _Out_ PIO_STATUS_BLOCK IoStatusBlock,
    _Out_writes_bytes_(Length) PVOID FileInformation,
    _In_ ULONG Length,
    _In_ FILE_INFORMATION_CLASS FileInformationClass
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwQueryFullAttributesFile(
    _In_ POBJECT_ATTRIBUTES ObjectAttributes,
    _Out_ PFILE_NETWORK_OPEN_INFORMATION FileInformation
    );
typedef ULONG CLFS_CONTAINER_ID;
typedef CLFS_CONTAINER_ID *PCLFS_CONTAINER_ID;
typedef CLFS_CONTAINER_ID **PPCLFS_CONTAINER_ID;
#include <clfslsn.h>
typedef CLS_LSN CLFS_LSN;
typedef CLFS_LSN *PCLFS_LSN, **PPCLFS_LSN;
extern "C"
{
extern __declspec(dllimport) const CLFS_LSN CLFS_LSN_INVALID;
extern __declspec(dllimport) const CLFS_LSN CLFS_LSN_NULL;
}
const UCHAR ClfsNullRecord = 0x00;
const UCHAR ClfsDataRecord = 0x01;
const UCHAR ClfsRestartRecord = 0x02;
const UCHAR ClfsClientRecord = 0x03;
const LPCWSTR CLFS_CONTAINER_STREAM_PREFIX = L"%BLF%:"
const LPCWSTR CLFS_CONTAINER_RELATIVE_PREFIX = L"%BLF%\\"
typedef UCHAR CLS_RECORD_TYPE, *PCLS_RECORD_TYPE, **PPCLS_RECORD_TYPE;
typedef CLS_RECORD_TYPE CLFS_RECORD_TYPE, *PCLFS_RECORD_TYPE, **PPCLFS_RECORD_TYPE;
typedef enum _CLS_CONTEXT_MODE
{
    ClsContextNone = 0x00,
    ClsContextUndoNext,
    ClsContextPrevious,
    ClsContextForward
} CLS_CONTEXT_MODE, *PCLS_CONTEXT_MODE, **PPCLS_CONTEXT_MODE;
typedef enum _CLFS_CONTEXT_MODE
{
    ClfsContextNone = 0x00,
    ClfsContextUndoNext,
    ClfsContextPrevious,
    ClfsContextForward
} CLFS_CONTEXT_MODE, *PCLFS_CONTEXT_MODE, **PPCLFS_CONTEXT_MODE;
typedef struct _CLFS_NODE_ID
{
    ULONG cType;
    ULONG cbNode;
} CLFS_NODE_ID, *PCLFS_NODE_ID;
typedef struct _CLS_WRITE_ENTRY
{
    PVOID Buffer;
    ULONG ByteLength;
} CLS_WRITE_ENTRY, *PCLS_WRITE_ENTRY, **PPCLS_WRITE_ENTRY;
typedef CLS_WRITE_ENTRY CLFS_WRITE_ENTRY;
typedef CLFS_WRITE_ENTRY *PCLFS_WRITE_ENTRY, **PPCLFS_WRITE_ENTRY;
typedef GUID CLFS_LOG_ID;
typedef struct _CLS_INFORMATION
{
    LONGLONG TotalAvailable;
    LONGLONG CurrentAvailable;
    LONGLONG TotalReservation;
    ULONGLONG BaseFileSize;
    ULONGLONG ContainerSize;
    ULONG TotalContainers;
    ULONG FreeContainers;
    ULONG TotalClients;
    ULONG Attributes;
    ULONG FlushThreshold;
    ULONG SectorSize;
    CLS_LSN MinArchiveTailLsn;
    CLS_LSN BaseLsn;
    CLS_LSN LastFlushedLsn;
    CLS_LSN LastLsn;
    CLS_LSN RestartLsn;
    GUID Identity;
} CLS_INFORMATION, *PCLS_INFORMATION, *PPCLS_INFORMATION;
typedef CLS_INFORMATION CLFS_INFORMATION;
typedef CLFS_INFORMATION *PCLFS_INFORMATION, *PPCLFS_INFORMATION;
typedef struct _CLFS_LOG_NAME_INFORMATION
{
    USHORT NameLengthInBytes;
    WCHAR Name[1];
} CLFS_LOG_NAME_INFORMATION, *PCLFS_LOG_NAME_INFORMATION, **PPCLFS_LOG_NAME_INFORMATION;
typedef struct _CLFS_STREAM_ID_INFORMATION
{
    UCHAR StreamIdentifier;
} CLFS_STREAM_ID_INFORMATION, *PCLFS_STREAM_ID_INFORMATION, **PPCLFS_STREAM_ID_INFORMATION;
#pragma pack(push,8)
typedef struct _CLFS_PHYSICAL_LSN_INFORMATION
{
    UCHAR StreamIdentifier;
    CLFS_LSN VirtualLsn;
    CLFS_LSN PhysicalLsn;
} CLFS_PHYSICAL_LSN_INFORMATION, *PCLFS_PHYSICAL_LSN_INFORMATION;
#pragma pack(pop)
typedef UINT32 CLS_CONTAINER_STATE, *PCLS_CONTAINER_STATE, *PPCLS_CONTAINER_STATE;
typedef CLS_CONTAINER_STATE CLFS_CONTAINER_STATE, *PCLFS_CONTAINER_STATE, *PPCLFS_CONTAINER_STATE;
const CLFS_CONTAINER_STATE ClsContainerInitializing = 0x01;
const CLFS_CONTAINER_STATE ClsContainerInactive = 0x02;
const CLFS_CONTAINER_STATE ClsContainerActive = 0x04;
const CLFS_CONTAINER_STATE ClsContainerActivePendingDelete = 0x08;
const CLFS_CONTAINER_STATE ClsContainerPendingArchive = 0x10;
const CLFS_CONTAINER_STATE ClsContainerPendingArchiveAndDelete = 0x20;
const CLFS_CONTAINER_STATE ClfsContainerInitializing = 0x01;
const CLFS_CONTAINER_STATE ClfsContainerInactive = 0x02;
const CLFS_CONTAINER_STATE ClfsContainerActive = 0x04;
const CLFS_CONTAINER_STATE ClfsContainerActivePendingDelete = 0x08;
const CLFS_CONTAINER_STATE ClfsContainerPendingArchive = 0x10;
const CLFS_CONTAINER_STATE ClfsContainerPendingArchiveAndDelete= 0x20;
const ULONG CLFS_MAX_CONTAINER_INFO = (256);
typedef struct _CLS_CONTAINER_INFORMATION
{
    ULONG FileAttributes;
    ULONGLONG CreationTime;
    ULONGLONG LastAccessTime;
    ULONGLONG LastWriteTime;
    LONGLONG ContainerSize;
    ULONG FileNameActualLength;
    ULONG FileNameLength;
    WCHAR FileName [CLFS_MAX_CONTAINER_INFO];
    CLFS_CONTAINER_STATE State;
    CLFS_CONTAINER_ID PhysicalContainerId;
    CLFS_CONTAINER_ID LogicalContainerId;
} CLS_CONTAINER_INFORMATION, *PCLS_CONTAINER_INFORMATION, **PPCLS_CONTAINER_INFORMATION;
typedef CLS_CONTAINER_INFORMATION CLFS_CONTAINER_INFORMATION;
typedef CLFS_CONTAINER_INFORMATION *PCLFS_CONTAINER_INFORMATION, **PPCLFS_CONTAINER_INFORMATION;
typedef enum _CLS_LOG_INFORMATION_CLASS
{
    ClfsLogBasicInformation = 0x00,
    ClfsLogBasicInformationPhysical,
    ClfsLogPhysicalNameInformation,
    ClfsLogStreamIdentifierInformation,
    ClfsLogSystemMarkingInformation,
    ClfsLogPhysicalLsnInformation
} CLS_LOG_INFORMATION_CLASS, *PCLS_LOG_INFORMATION_CLASS, **PPCLS_LOG_INFORMATION_CLASS;
typedef CLS_LOG_INFORMATION_CLASS CLFS_LOG_INFORMATION_CLASS;
typedef CLFS_LOG_INFORMATION_CLASS *PCLFS_LOG_INFORMATION_CLASS, **PPCLFS_LOG_INFORMATION_CLASS;
typedef enum _CLS_IOSTATS_CLASS
{
    ClsIoStatsDefault = 0x0000,
    ClsIoStatsMax = 0xFFFF
} CLS_IOSTATS_CLASS, *PCLS_IOSTATS_CLASS, **PPCLS_IOSTATS_CLASS;
typedef enum _CLFS_IOSTATS_CLASS
{
    ClfsIoStatsDefault = 0x0000,
    ClfsIoStatsMax = 0xFFFF
} CLFS_IOSTATS_CLASS, *PCLFS_IOSTATS_CLASS, **PPCLFS_IOSTATS_CLASS;
typedef struct _CLS_IO_STATISTICS_HEADER
{
    UCHAR ubMajorVersion;
    UCHAR ubMinorVersion;
    CLFS_IOSTATS_CLASS eStatsClass;
    USHORT cbLength;
    ULONG coffData;
} CLS_IO_STATISTICS_HEADER, *PCLS_IO_STATISTICS_HEADER, **PPCLS_IO_STATISTICS_HEADER;
typedef CLS_IO_STATISTICS_HEADER CLFS_IO_STATISTICS_HEADER;
typedef CLFS_IO_STATISTICS_HEADER *PCLFS_IO_STATISTICS_HEADER, **PPCLFS_IO_STATISTICS_HEADER;
typedef struct _CLS_IO_STATISTICS
{
    CLS_IO_STATISTICS_HEADER hdrIoStats;
    ULONGLONG cFlush;
    ULONGLONG cbFlush;
    ULONGLONG cMetaFlush;
    ULONGLONG cbMetaFlush;
} CLS_IO_STATISTICS, *PCLS_IO_STATISTICS, **PPCLS_IO_STATISTICS;
typedef CLS_IO_STATISTICS CLFS_IO_STATISTICS;
typedef CLFS_IO_STATISTICS *PCLFS_IO_STATISTICS, **PPCLFS_IO_STATISTICS;
const UCHAR CLFS_SCAN_INIT = 0x01;
const UCHAR CLFS_SCAN_FORWARD = 0x02;
const UCHAR CLFS_SCAN_BACKWARD = 0x04;
const UCHAR CLFS_SCAN_CLOSE = 0x08;
const UCHAR CLFS_SCAN_INITIALIZED = 0x10;
const UCHAR CLFS_SCAN_BUFFERED = 0x20;
typedef UCHAR CLFS_SCAN_MODE, *PCLFS_SCAN_MODE;
typedef FILE_OBJECT LOG_FILE_OBJECT, *PLOG_FILE_OBJECT, **PPLOG_FILE_OBJECT;
typedef struct _CLS_SCAN_CONTEXT
{
    CLFS_NODE_ID cidNode;
    PLOG_FILE_OBJECT plfoLog;
    __declspec(align(8)) ULONG cIndex;
    __declspec(align(8)) ULONG cContainers;
    __declspec(align(8)) ULONG cContainersReturned;
    __declspec(align(8)) CLFS_SCAN_MODE eScanMode;
    __declspec(align(8)) PCLS_CONTAINER_INFORMATION pinfoContainer;
} CLS_SCAN_CONTEXT, *PCLS_SCAN_CONTEXT, **PPCLS_SCAN_CONTEXT;
typedef CLS_SCAN_CONTEXT CLFS_SCAN_CONTEXT;
typedef CLFS_SCAN_CONTEXT *PCLFS_SCAN_CONTEXT, **PPCLFS_SCAN_CONTEXT;
typedef struct _CLS_ARCHIVE_DESCRIPTOR
{
    ULONGLONG coffLow;
    ULONGLONG coffHigh;
    CLS_CONTAINER_INFORMATION infoContainer;
} CLS_ARCHIVE_DESCRIPTOR, *PCLS_ARCHIVE_DESCRIPTOR, **PPCLS_ARCHIVE_DESCRIPTOR;
typedef CLS_ARCHIVE_DESCRIPTOR CLFS_ARCHIVE_DESCRIPTOR;
typedef CLFS_ARCHIVE_DESCRIPTOR *PCLFS_ARCHIVE_DESCRIPTOR, **PPCLFS_ARCHIVE_DESCRIPTOR;
typedef PVOID (* CLFS_BLOCK_ALLOCATION) (ULONG cbBufferLength, PVOID pvUserContext);
typedef void (* CLFS_BLOCK_DEALLOCATION) (PVOID pvBuffer, PVOID pvUserContext);
typedef enum _CLFS_LOG_ARCHIVE_MODE
{
    ClfsLogArchiveEnabled = 0x01,
    ClfsLogArchiveDisabled = 0x02
} CLFS_LOG_ARCHIVE_MODE, *PCLFS_LOG_ARCHIVE_MODE;
extern "C"
{
CLFSUSER_API BOOLEAN NTAPI
ClfsLsnEqual
(
    _In_ const CLFS_LSN* plsn1,
    _In_ const CLFS_LSN* plsn2
);
CLFSUSER_API BOOLEAN NTAPI
ClfsLsnLess
(
    _In_ const CLFS_LSN* plsn1,
    _In_ const CLFS_LSN* plsn2
);
CLFSUSER_API BOOLEAN NTAPI
ClfsLsnGreater
(
    _In_ const CLFS_LSN* plsn1,
    _In_ const CLFS_LSN* plsn2
);
CLFSUSER_API BOOLEAN NTAPI
ClfsLsnNull
(
    _In_ const CLFS_LSN* plsn
);
CLFSUSER_API CLFS_CONTAINER_ID NTAPI
ClfsLsnContainer
(
  _In_ const CLFS_LSN* plsn
);
CLFSUSER_API CLFS_LSN NTAPI
ClfsLsnCreate
(
    _In_ CLFS_CONTAINER_ID cidContainer,
    _In_ ULONG offBlock,
    _In_ ULONG cRecord
);
CLFSUSER_API ULONG NTAPI
ClfsLsnBlockOffset
(
  _In_ const CLFS_LSN* plsn
);
CLFSUSER_API ULONG NTAPI
ClfsLsnRecordSequence
(
    _In_ const CLFS_LSN* plsn
);
CLFSUSER_API BOOLEAN NTAPI
ClfsLsnInvalid
(
    _In_ const CLFS_LSN* plsn
);
CLFSUSER_API CLFS_LSN NTAPI
ClfsLsnIncrement (_In_ PCLFS_LSN plsn);
}
inline CLFS_LSN
operator++
(
    _Inout_ CLFS_LSN& refLsn
)
{
    refLsn = ClfsLsnIncrement (&refLsn);
    return refLsn;
}
inline BOOLEAN
operator<
(
    _In_ const CLFS_LSN& refLsn1,
    _In_ const CLFS_LSN& refLsn2
)
{
    return (ClfsLsnLess ((PCLFS_LSN) &refLsn1, (PCLFS_LSN) &refLsn2));
}
inline BOOLEAN
operator>
(
    _In_ const CLFS_LSN& refLsn1,
    _In_ const CLFS_LSN& refLsn2
)
{
    return (ClfsLsnGreater ((PCLFS_LSN) &refLsn1, (PCLFS_LSN) &refLsn2));
}
inline BOOLEAN
operator==
(
    _In_ const CLFS_LSN& refLsn1,
    _In_ const CLFS_LSN& refLsn2
)
{
    return (ClfsLsnEqual ((PCLFS_LSN) &refLsn1, (PCLFS_LSN) &refLsn2));
}
inline BOOLEAN
operator!=
(
    _In_ const CLFS_LSN& refLsn1,
    _In_ const CLFS_LSN& refLsn2
)
{
    return (!ClfsLsnEqual ((PCLFS_LSN) &refLsn1, (PCLFS_LSN) &refLsn2));
}
inline BOOLEAN
operator<=
(
    _In_ const CLFS_LSN& refLsn1,
    _In_ const CLFS_LSN& refLsn2
)
{
    return (!ClfsLsnGreater ((PCLFS_LSN) &refLsn1, (PCLFS_LSN) &refLsn2));
}
inline BOOLEAN
operator>=
(
    _In_ const CLFS_LSN& refLsn1,
    _In_ const CLFS_LSN& refLsn2
)
{
    return (!ClfsLsnLess ((PCLFS_LSN) &refLsn1, (PCLFS_LSN) &refLsn2));
}
extern "C" {
typedef enum _CLFS_MGMT_POLICY_TYPE {
    ClfsMgmtPolicyMaximumSize = 0x0,
    ClfsMgmtPolicyMinimumSize,
    ClfsMgmtPolicyNewContainerSize,
    ClfsMgmtPolicyGrowthRate,
    ClfsMgmtPolicyLogTail,
    ClfsMgmtPolicyAutoShrink,
    ClfsMgmtPolicyAutoGrow,
    ClfsMgmtPolicyNewContainerPrefix,
    ClfsMgmtPolicyNewContainerSuffix,
    ClfsMgmtPolicyNewContainerExtension,
    ClfsMgmtPolicyInvalid
} CLFS_MGMT_POLICY_TYPE, *PCLFS_MGMT_POLICY_TYPE;
typedef struct _CLFS_MGMT_POLICY {
    ULONG Version;
    ULONG LengthInBytes;
    ULONG PolicyFlags;
    CLFS_MGMT_POLICY_TYPE PolicyType;
    union {
        struct {
            ULONG Containers;
        } MaximumSize;
        struct {
            ULONG Containers;
        } MinimumSize;
        struct {
            ULONG SizeInBytes;
        } NewContainerSize;
        struct {
            ULONG AbsoluteGrowthInContainers;
            ULONG RelativeGrowthPercentage;
        } GrowthRate;
        struct {
            ULONG MinimumAvailablePercentage;
            ULONG MinimumAvailableContainers;
        } LogTail;
        struct {
            ULONG Percentage;
        } AutoShrink;
        struct {
            ULONG Enabled;
        } AutoGrow;
        struct {
            USHORT PrefixLengthInBytes;
            WCHAR PrefixString[1];
        } NewContainerPrefix;
        struct {
            ULONGLONG NextContainerSuffix;
        } NewContainerSuffix;
        struct {
            USHORT ExtensionLengthInBytes;
            WCHAR ExtensionString[1];
        } NewContainerExtension;
    } PolicyParameters;
} CLFS_MGMT_POLICY, *PCLFS_MGMT_POLICY;
typedef enum _CLFS_MGMT_NOTIFICATION_TYPE
{
    ClfsMgmtAdvanceTailNotification = 0,
    ClfsMgmtLogFullHandlerNotification,
    ClfsMgmtLogUnpinnedNotification,
    ClfsMgmtLogWriteNotification
} CLFS_MGMT_NOTIFICATION_TYPE, *PCLFS_MGMT_NOTIFICATION_TYPE;
typedef struct _CLFS_MGMT_NOTIFICATION
{
    CLFS_MGMT_NOTIFICATION_TYPE Notification;
    CLFS_LSN Lsn;
    USHORT LogIsPinned;
} CLFS_MGMT_NOTIFICATION, *PCLFS_MGMT_NOTIFICATION;
typedef
NTSTATUS
(*PCLFS_CLIENT_ADVANCE_TAIL_CALLBACK) (
    _In_ PLOG_FILE_OBJECT LogFile,
    _In_ PCLFS_LSN TargetLsn,
    _In_ PVOID ClientData
    );
typedef
VOID
(*PCLFS_CLIENT_LFF_HANDLER_COMPLETE_CALLBACK) (
    _In_ PLOG_FILE_OBJECT LogFile,
    _In_ NTSTATUS OperationStatus,
    _In_ BOOLEAN LogIsPinned,
    _In_ PVOID ClientData
    );
typedef
VOID
(*PCLFS_CLIENT_LOG_UNPINNED_CALLBACK) (
    _In_ PLOG_FILE_OBJECT LogFile,
    _In_ PVOID ClientData
    );
typedef
VOID
(*PCLFS_SET_LOG_SIZE_COMPLETE_CALLBACK) (
    _In_ PLOG_FILE_OBJECT LogFile,
    _In_ NTSTATUS OperationStatus,
    _In_ PVOID ClientData
    );
typedef struct _CLFS_MGMT_CLIENT_REGISTRATION {
    ULONG Version;
    PCLFS_CLIENT_ADVANCE_TAIL_CALLBACK AdvanceTailCallback;
    PVOID AdvanceTailCallbackData;
    PCLFS_CLIENT_LFF_HANDLER_COMPLETE_CALLBACK LogGrowthCompleteCallback;
    PVOID LogGrowthCompleteCallbackData;
    PCLFS_CLIENT_LOG_UNPINNED_CALLBACK LogUnpinnedCallback;
    PVOID LogUnpinnedCallbackData;
} CLFS_MGMT_CLIENT_REGISTRATION, *PCLFS_MGMT_CLIENT_REGISTRATION;
typedef PVOID CLFS_MGMT_CLIENT, *PCLFS_MGMT_CLIENT;
CLFSUSER_API
NTSTATUS
ClfsMgmtRegisterManagedClient(
    _In_ PLOG_FILE_OBJECT LogFile,
    _In_ PCLFS_MGMT_CLIENT_REGISTRATION RegistrationData,
    _Out_ PCLFS_MGMT_CLIENT ClientCookie
    );
CLFSUSER_API
NTSTATUS
ClfsMgmtDeregisterManagedClient(
    _In_ CLFS_MGMT_CLIENT ClientCookie
    );
CLFSUSER_API
NTSTATUS
ClfsMgmtTailAdvanceFailure(
    _In_ CLFS_MGMT_CLIENT Client,
    _In_ NTSTATUS Reason
    );
CLFSUSER_API
NTSTATUS
ClfsMgmtHandleLogFileFull(
    _In_ CLFS_MGMT_CLIENT Client
    );
CLFSUSER_API
NTSTATUS
ClfsMgmtInstallPolicy(
    _In_ PLOG_FILE_OBJECT LogFile,
    _In_reads_bytes_(PolicyLength) PCLFS_MGMT_POLICY Policy,
    _In_ ULONG PolicyLength
    );
CLFSUSER_API
NTSTATUS
ClfsMgmtQueryPolicy(
    _In_ PLOG_FILE_OBJECT LogFile,
    _In_ CLFS_MGMT_POLICY_TYPE PolicyType,
    _Out_writes_bytes_(*PolicyLength) PCLFS_MGMT_POLICY Policy,
    _Out_ PULONG PolicyLength
    );
CLFSUSER_API
NTSTATUS
ClfsMgmtRemovePolicy(
    _In_ PLOG_FILE_OBJECT LogFile,
    _In_ CLFS_MGMT_POLICY_TYPE PolicyType
    );
CLFSUSER_API
NTSTATUS
ClfsMgmtSetLogFileSize(
    _In_ PLOG_FILE_OBJECT LogFile,
    _In_ PULONGLONG NewSizeInContainers,
    _Out_opt_ PULONGLONG ResultingSizeInContainers,
    _In_opt_ PCLFS_SET_LOG_SIZE_COMPLETE_CALLBACK CompletionRoutine,
    _In_opt_ PVOID CompletionRoutineData
    );
CLFSUSER_API
NTSTATUS
ClfsMgmtSetLogFileSizeAsClient(
    _In_ PLOG_FILE_OBJECT LogFile,
    _In_opt_ PCLFS_MGMT_CLIENT ClientCookie,
    _In_ PULONGLONG NewSizeInContainers,
    _Out_opt_ PULONGLONG ResultingSizeInContainers,
    _In_opt_ PCLFS_SET_LOG_SIZE_COMPLETE_CALLBACK CompletionRoutine,
    _In_opt_ PVOID CompletionRoutineData
    );
}
extern "C"
{
CLFSUSER_API
NTSTATUS ClfsInitialize (void);
CLFSUSER_API
void ClfsFinalize (void);
CLFSUSER_API
NTSTATUS ClfsCreateLogFile (
                    _Out_ PPLOG_FILE_OBJECT pplfoLog,
                    _In_ PUNICODE_STRING puszLogFileName,
                    _In_ ACCESS_MASK fDesiredAccess,
                    _In_ ULONG dwShareMode,
                    _In_opt_ PSECURITY_DESCRIPTOR psdLogFile,
                    _In_ ULONG fCreateDisposition,
                    _In_ ULONG fCreateOptions,
                    _In_ ULONG fFlagsAndAttributes,
                    _In_ ULONG fLogOptionFlag,
                    _In_reads_bytes_opt_(cbContext) PVOID pvContext,
                    _In_ ULONG cbContext
                    );
CLFSUSER_API
NTSTATUS ClfsDeleteLogByPointer (_In_ PLOG_FILE_OBJECT plfoLog);
CLFSUSER_API
NTSTATUS ClfsDeleteLogFile (
                    _In_ PUNICODE_STRING puszLogFileName,
                    _In_opt_ PVOID pvReserved,
                    _In_ ULONG fLogOptionFlag,
                    _In_reads_bytes_opt_(cbContext) PVOID pvContext,
                    _In_ ULONG cbContext
                    );
CLFSUSER_API
NTSTATUS ClfsAddLogContainer (
                    _In_ PLOG_FILE_OBJECT plfoLog,
                    _In_ PULONGLONG pcbContainer,
                    _In_ PUNICODE_STRING puszContainerPath
                    );
CLFSUSER_API
NTSTATUS ClfsAddLogContainerSet (
                    _In_ PLOG_FILE_OBJECT plfoLog,
                    _In_ USHORT cContainers,
                    _In_opt_ PULONGLONG pcbContainer,
                    _In_reads_(cContainers) PUNICODE_STRING rguszContainerPath
                    );
CLFSUSER_API
NTSTATUS ClfsRemoveLogContainer (
                    _In_ PLOG_FILE_OBJECT plfoLog,
                    _In_ PUNICODE_STRING puszContainerPath,
                    _In_ BOOLEAN fForce
                    );
CLFSUSER_API
NTSTATUS ClfsRemoveLogContainerSet (
                    _In_ PLOG_FILE_OBJECT plfoLog,
                    _In_ USHORT cContainers,
                    _In_reads_(cContainers) PUNICODE_STRING rgwszContainerPath,
                    _In_ BOOLEAN fForce
                    );
CLFSUSER_API
NTSTATUS ClfsSetArchiveTail (
                    _In_ PLOG_FILE_OBJECT plfoLog,
                    _In_ PCLFS_LSN plsnArchiveTail
                    );
CLFSUSER_API
NTSTATUS ClfsSetEndOfLog (
                    _In_ PLOG_FILE_OBJECT plfoLog,
                    _In_ PCLFS_LSN plsnEnd
                    );
CLFSUSER_API
NTSTATUS ClfsCreateScanContext (
                    _In_ PLOG_FILE_OBJECT plfoLog,
                    _In_ ULONG cFromContainer,
                    _In_ ULONG cContainers,
                    _In_ CLFS_SCAN_MODE eScanMode,
                    _Inout_ PCLFS_SCAN_CONTEXT pcxScan
                    );
CLFSUSER_API
NTSTATUS ClfsScanLogContainers (
                    _Inout_ PCLFS_SCAN_CONTEXT pcxScan,
                    _In_ CLFS_SCAN_MODE eScanMode
                    );
CLFSUSER_API
NTSTATUS ClfsGetContainerName (
                    _In_ PLOG_FILE_OBJECT plfoLog,
                    _In_ CLFS_CONTAINER_ID cidLogicalContainer,
                    _Inout_ PUNICODE_STRING puszContainerName,
                    _Out_opt_ PULONG pcActualLenContainerName
                    );
CLFSUSER_API
NTSTATUS ClfsGetLogFileInformation (
                    _In_ PLOG_FILE_OBJECT plfoLog,
                    _Out_writes_bytes_to_(*pcbInfoBuffer, *pcbInfoBuffer) PCLFS_INFORMATION pinfoBuffer,
                    _Inout_ PULONG pcbInfoBuffer
                    );
CLFSUSER_API
NTSTATUS ClfsQueryLogFileInformation (
                    _In_ PLOG_FILE_OBJECT plfoLog,
                    _In_ CLFS_LOG_INFORMATION_CLASS eInformationClass,
                    _In_reads_bytes_opt_(cbinfoInputBuffer) PVOID pinfoInputBuffer,
                    _In_opt_ ULONG cbinfoInputBuffer,
                    _Out_writes_bytes_(*pcbInfoBuffer) PVOID pinfoBuffer,
                    _Inout_ PULONG pcbInfoBuffer
                    );
CLFSUSER_API
NTSTATUS ClfsSetLogFileInformation (
                    _In_ PLOG_FILE_OBJECT plfoLog,
                    _In_ CLFS_LOG_INFORMATION_CLASS eInformationClass,
                    _In_reads_bytes_(cbBuffer) PVOID pinfoBuffer,
                    _In_ ULONG cbBuffer
                    );
CLFSUSER_API
NTSTATUS ClfsReadRestartArea (
                    _Inout_ PVOID pvMarshalContext,
                    _Outptr_result_bytebuffer_(*pcbRestartBuffer) PVOID *ppvRestartBuffer,
                    _Out_ PULONG pcbRestartBuffer,
                    _Out_ PCLFS_LSN plsn,
                    _Outptr_ PVOID *ppvReadContext
                    );
CLFSUSER_API
NTSTATUS ClfsReadPreviousRestartArea (
                    _In_ PVOID pvReadContext,
                    _Outptr_result_bytebuffer_(*pcbRestartBuffer) PVOID *ppvRestartBuffer,
                    _Out_ PULONG pcbRestartBuffer,
                    _Out_ PCLFS_LSN plsnRestart
                    );
CLFSUSER_API
NTSTATUS ClfsWriteRestartArea (
                    _Inout_ PVOID pvMarshalContext,
                    _In_reads_bytes_(cbRestartBuffer) PVOID pvRestartBuffer,
                    _In_ ULONG cbRestartBuffer,
                    _In_opt_ PCLFS_LSN plsnBase,
                    _In_ ULONG fFlags,
                    _Out_opt_ PULONG pcbWritten,
                    _Out_opt_ PCLFS_LSN plsnNext
                    );
CLFSUSER_API
NTSTATUS ClfsAdvanceLogBase (
                    _Inout_ PVOID pvMarshalContext,
                    _In_ PCLFS_LSN plsnBase,
                    _In_ ULONG fFlags
                    );
CLFSUSER_API
NTSTATUS ClfsCloseAndResetLogFile (_In_ PLOG_FILE_OBJECT plfoLog);
CLFSUSER_API
NTSTATUS ClfsCloseLogFileObject (_In_ PLOG_FILE_OBJECT plfoLog);
CLFSUSER_API
NTSTATUS ClfsCreateMarshallingArea (
                    _In_ PLOG_FILE_OBJECT plfoLog,
                    _In_ POOL_TYPE ePoolType,
                    _In_opt_ PALLOCATE_FUNCTION pfnAllocBuffer,
                    _In_opt_ PFREE_FUNCTION pfnFreeBuffer,
                    _In_ ULONG cbMarshallingBuffer,
                    _In_ ULONG cMaxWriteBuffers,
                    _In_ ULONG cMaxReadBuffers,
                    _Outptr_ PVOID *ppvMarshalContext
                    );
CLFSUSER_API
NTSTATUS ClfsCreateMarshallingAreaEx (
                    _In_ PLOG_FILE_OBJECT plfoLog,
                    _In_ POOL_TYPE ePoolType,
                    _In_opt_ PALLOCATE_FUNCTION pfnAllocBuffer,
                    _In_opt_ PFREE_FUNCTION pfnFreeBuffer,
                    _In_ ULONG cbMarshallingBuffer,
                    _In_ ULONG cMaxWriteBuffers,
                    _In_ ULONG cMaxReadBuffers,
                    _In_ ULONG cAlignmentSize,
                    _In_ ULONGLONG fFlags,
                    _Outptr_ PVOID *ppvMarshalContext
                    );
CLFSUSER_API
NTSTATUS ClfsDeleteMarshallingArea (_In_ PVOID pvMarshalContext);
CLFSUSER_API
NTSTATUS ClfsReserveAndAppendLog (
                    _In_ PVOID pvMarshalContext,
                    _In_reads_opt_(cWriteEntries) PCLFS_WRITE_ENTRY rgWriteEntries,
                    _In_ ULONG cWriteEntries,
                    _In_opt_ PCLFS_LSN plsnUndoNext,
                    _In_opt_ PCLFS_LSN plsnPrevious,
                    _In_ ULONG cReserveRecords,
                    _Inout_updates_opt_(cReserveRecords) PLONGLONG rgcbReservation,
                    _In_ ULONG fFlags,
                    _Out_opt_ PCLFS_LSN plsn
                    );
CLFSUSER_API
NTSTATUS ClfsReserveAndAppendLogAligned (
                    _In_ PVOID pvMarshalContext,
                    _In_reads_opt_(cWriteEntries) PCLFS_WRITE_ENTRY rgWriteEntries,
                    _In_ ULONG cWriteEntries,
                    _In_ ULONG cbEntryAlignment,
                    _In_opt_ PCLFS_LSN plsnUndoNext,
                    _In_opt_ PCLFS_LSN plsnPrevious,
                    _In_ ULONG cReserveRecords,
                    _Inout_updates_opt_(cReserveRecords) PLONGLONG rgcbReservation,
                    _In_ ULONG fFlags,
                    _Out_opt_ PCLFS_LSN plsn
                    );
CLFSUSER_API
NTSTATUS ClfsAlignReservedLog (
                    _In_ PVOID pvMarshalContext,
                    _In_ ULONG cRecords,
                    _In_reads_(cRecords) LONGLONG rgcbReservation [],
                    _Out_ PLONGLONG pcbAlignReservation
                    );
CLFSUSER_API
NTSTATUS ClfsAllocReservedLog (
                    _In_ PVOID pvMarshalContext,
                    _In_ ULONG cRecords,
                    _In_reads_(cRecords) PLONGLONG pcbAdjustment
                    );
CLFSUSER_API
NTSTATUS ClfsFreeReservedLog (
                    _In_ PVOID pvMarshalContext,
                    _In_ ULONG cRecords,
                    _In_reads_(cRecords) PLONGLONG pcbAdjustment
                    );
CLFSUSER_API
NTSTATUS ClfsFlushBuffers (_In_ PVOID pvMarshalContext);
CLFSUSER_API
NTSTATUS ClfsFlushToLsn (
                    _In_ PVOID pvMarshalContext,
                    _In_ PCLFS_LSN plsnFlush,
                    _Out_opt_ PCLFS_LSN plsnLastFlushed
                    );
CLFSUSER_API
NTSTATUS ClfsReadLogRecord (
                    _In_ PVOID pvMarshalContext,
                    _Inout_ PCLFS_LSN plsnFirst,
                    _In_ CLFS_CONTEXT_MODE peContextMode,
                    _Outptr_result_bytebuffer_(*pcbReadBuffer) PVOID *ppvReadBuffer,
                    _Out_ PULONG pcbReadBuffer,
                    _Out_ PCLFS_RECORD_TYPE peRecordType,
                    _Out_ PCLFS_LSN plsnUndoNext,
                    _Out_ PCLFS_LSN plsnPrevious,
                    _Outptr_ PVOID* ppvReadContext
                    );
CLFSUSER_API
NTSTATUS ClfsReadNextLogRecord (
                    _Inout_ PVOID pvReadContext,
                    _Outptr_result_bytebuffer_(*pcbBuffer) PVOID *ppvBuffer,
                    _Out_ PULONG pcbBuffer,
                    _Inout_ PCLFS_RECORD_TYPE peRecordType,
                    _In_opt_ PCLFS_LSN plsnUser,
                    _Out_ PCLFS_LSN plsnUndoNext,
                    _Out_ PCLFS_LSN plsnPrevious,
                    _Out_ PCLFS_LSN plsnRecord
                    );
CLFSUSER_API
NTSTATUS ClfsTerminateReadLog (_In_ PVOID pvCursorContext);
CLFSUSER_API
NTSTATUS ClfsGetLastLsn (
                    _In_ PLOG_FILE_OBJECT plfoLog,
                    _Out_ PCLFS_LSN plsnLast
                    );
CLFSUSER_API
NTSTATUS ClfsGetIoStatistics (
                    _In_ PLOG_FILE_OBJECT plfoLog,
                    _Inout_updates_bytes_(cbStatsBuffer) PVOID pvStatsBuffer,
                    _In_ ULONG cbStatsBuffer,
                    _In_ CLFS_IOSTATS_CLASS eStatsClass,
                    _Out_opt_ PULONG pcbStatsWritten
                    );
CLFSUSER_API
CLFS_LSN
ClfsLaterLsn (_In_ PCLFS_LSN plsn);
CLFSUSER_API
CLFS_LSN
ClfsEarlierLsn (_In_ PCLFS_LSN plsn);
CLFSUSER_API
NTSTATUS
ClfsLsnDifference (
    _In_ PCLFS_LSN plsnStart,
    _In_ PCLFS_LSN plsnFinish,
    _In_ ULONG cbContainer,
    _In_ ULONG cbMaxBlock,
    _Out_ PLONGLONG pcbDifference
    );
CLFSUSER_API
BOOLEAN
ClfsValidTopLevelContext (_In_ PIRP pirpTopLevelContext);
}
typedef struct _KTRANSACTION KTRANSACTION, *PKTRANSACTION, *RESTRICTED_POINTER PRKTRANSACTION;
typedef struct _KENLISTMENT KENLISTMENT, *PKENLISTMENT, *RESTRICTED_POINTER PRKENLISTMENT;
typedef struct _KRESOURCEMANAGER KRESOURCEMANAGER, *PKRESOURCEMANAGER, *RESTRICTED_POINTER PRKRESOURCEMANAGER;
typedef struct _KTM KTM, *PKTM, *RESTRICTED_POINTER PRKTM;
typedef GUID UOW, *PUOW;
typedef GUID *PGUID;
typedef
NTSTATUS
(NTAPI *PTM_RM_NOTIFICATION) (
    _In_ PKENLISTMENT EnlistmentObject,
    _In_ PVOID RMContext,
    _In_ PVOID TransactionContext,
    _In_ ULONG TransactionNotification,
    _Inout_ PLARGE_INTEGER TmVirtualClock,
    _In_ ULONG ArgumentLength,
    _In_ PVOID Argument
    );
typedef GUID KCRM_PROTOCOL_ID, *PKCRM_PROTOCOL_ID;
typedef
NTSTATUS
(NTAPI *PTM_PROPAGATE_ROUTINE) (
    _In_ PVOID PropagationCookie,
    _In_ PVOID CallbackData,
    _In_ NTSTATUS PropagationStatus,
    _In_ GUID TransactionGuid
    );
_Must_inspect_result_
_IRQL_requires_max_ (APC_LEVEL)
NTKERNELAPI
NTSTATUS
NTAPI
TmInitializeTransactionManager (
    _In_ PRKTM TransactionManager,
    _In_opt_ PCUNICODE_STRING LogFileName,
    _In_opt_ PGUID TmId,
    _In_ ULONG CreateOptions
    );
_Must_inspect_result_
_IRQL_requires_max_ (APC_LEVEL)
NTKERNELAPI
NTSTATUS
NTAPI
TmRenameTransactionManager (
    _In_ PUNICODE_STRING LogFileName,
    _In_ LPGUID ExistingTransactionManagerGuid
    );
_Must_inspect_result_
_IRQL_requires_max_ (APC_LEVEL)
NTKERNELAPI
NTSTATUS
NTAPI
TmRecoverTransactionManager (
    _In_ PKTM Tm,
    _In_ PLARGE_INTEGER TargetVirtualClock
    );
_IRQL_requires_max_ (APC_LEVEL)
NTKERNELAPI
NTSTATUS
NTAPI
TmCommitTransaction (
    _In_ PKTRANSACTION Transaction,
    _In_ BOOLEAN Wait
    );
_IRQL_requires_max_ (APC_LEVEL)
NTKERNELAPI
NTSTATUS
NTAPI
TmRollbackTransaction (
    _In_ PKTRANSACTION Transaction,
    _In_ BOOLEAN Wait
    );
_Must_inspect_result_
_IRQL_requires_max_ (APC_LEVEL)
NTKERNELAPI
NTSTATUS
NTAPI
TmCreateEnlistment (
    _Out_ PHANDLE EnlistmentHandle,
    _In_ KPROCESSOR_MODE PreviousMode,
    _In_ ACCESS_MASK DesiredAccess,
    _In_ POBJECT_ATTRIBUTES ObjectAttributes,
    _In_ PRKRESOURCEMANAGER ResourceManager,
    _In_ PKTRANSACTION Transaction,
    _In_opt_ ULONG CreateOptions,
    _In_ NOTIFICATION_MASK NotificationMask,
    _In_opt_ PVOID EnlistmentKey
    );
_Must_inspect_result_
_IRQL_requires_max_ (APC_LEVEL)
NTKERNELAPI
NTSTATUS
NTAPI
TmRecoverEnlistment (
    _In_ PKENLISTMENT Enlistment,
    _In_ PVOID EnlistmentKey
    );
_Must_inspect_result_
_IRQL_requires_max_ (APC_LEVEL)
NTKERNELAPI
NTSTATUS
NTAPI
TmPrePrepareEnlistment (
    _In_ PKENLISTMENT Enlistment,
    _In_ PLARGE_INTEGER TmVirtualClock
    );
_Must_inspect_result_
_IRQL_requires_max_ (APC_LEVEL)
NTKERNELAPI
NTSTATUS
NTAPI
TmPrepareEnlistment (
    _In_ PKENLISTMENT Enlistment,
    _In_ PLARGE_INTEGER TmVirtualClock
    );
_Must_inspect_result_
_IRQL_requires_max_ (APC_LEVEL)
NTKERNELAPI
NTSTATUS
NTAPI
TmCommitEnlistment (
    _In_ PKENLISTMENT Enlistment,
    _In_ PLARGE_INTEGER TmVirtualClock
    );
_IRQL_requires_max_ (APC_LEVEL)
NTKERNELAPI
NTSTATUS
NTAPI
TmRollbackEnlistment (
    _In_ PKENLISTMENT Enlistment,
    _In_opt_ PLARGE_INTEGER TmVirtualClock
    );
_IRQL_requires_max_ (APC_LEVEL)
NTKERNELAPI
NTSTATUS
NTAPI
TmPrePrepareComplete (
    _In_ PKENLISTMENT Enlistment,
    _In_ PLARGE_INTEGER TmVirtualClock
    );
_IRQL_requires_max_ (APC_LEVEL)
NTKERNELAPI
NTSTATUS
NTAPI
TmPrepareComplete (
    _In_ PKENLISTMENT Enlistment,
    _In_opt_ PLARGE_INTEGER TmVirtualClock
    );
_IRQL_requires_max_ (APC_LEVEL)
NTKERNELAPI
NTSTATUS
NTAPI
TmReadOnlyEnlistment (
    _In_ PKENLISTMENT Enlistment,
    _In_opt_ PLARGE_INTEGER TmVirtualClock
    );
_IRQL_requires_max_ (APC_LEVEL)
NTKERNELAPI
NTSTATUS
NTAPI
TmCommitComplete (
    _In_ PKENLISTMENT Enlistment,
    _In_opt_ PLARGE_INTEGER TmVirtualClock
    );
_IRQL_requires_max_ (APC_LEVEL)
NTKERNELAPI
NTSTATUS
NTAPI
TmRollbackComplete (
    _In_ PKENLISTMENT Enlistment,
    _In_opt_ PLARGE_INTEGER TmVirtualClock
    );
_Must_inspect_result_
_IRQL_requires_max_ (APC_LEVEL)
NTKERNELAPI
NTSTATUS
NTAPI
TmReferenceEnlistmentKey (
    _In_ PKENLISTMENT Enlistment,
    _Out_ PVOID *Key
    );
_Must_inspect_result_
_IRQL_requires_max_ (APC_LEVEL)
NTKERNELAPI
NTSTATUS
NTAPI
TmDereferenceEnlistmentKey (
    _In_ PKENLISTMENT Enlistment,
    _Out_opt_ PBOOLEAN LastReference
    );
_IRQL_requires_max_ (APC_LEVEL)
NTKERNELAPI
NTSTATUS
NTAPI
TmSinglePhaseReject (
    _In_ PKENLISTMENT Enlistment,
    _In_ PLARGE_INTEGER TmVirtualClock
    );
_IRQL_requires_max_ (APC_LEVEL)
NTKERNELAPI
NTSTATUS
NTAPI
TmRequestOutcomeEnlistment (
    _In_ PKENLISTMENT Enlistment,
    _In_ PLARGE_INTEGER TmVirtualClock
    );
_Must_inspect_result_
_IRQL_requires_max_ (APC_LEVEL)
NTKERNELAPI
NTSTATUS
NTAPI
TmEnableCallbacks (
    _In_ PKRESOURCEMANAGER ResourceManager,
    _In_ PTM_RM_NOTIFICATION CallbackRoutine,
    _In_opt_ PVOID RMKey
    );
_Must_inspect_result_
_IRQL_requires_max_ (APC_LEVEL)
NTKERNELAPI
NTSTATUS
NTAPI
TmRecoverResourceManager (
    _In_ PKRESOURCEMANAGER ResourceManager
    );
_IRQL_requires_max_ (APC_LEVEL)
NTKERNELAPI
NTSTATUS
NTAPI
TmPropagationComplete(
    _In_ PKRESOURCEMANAGER ResourceManager,
    _In_ ULONG RequestCookie,
    _In_ ULONG BufferLength,
    _In_ PVOID Buffer
    );
_IRQL_requires_max_ (APC_LEVEL)
NTKERNELAPI
NTSTATUS
NTAPI
TmPropagationFailed(
    _In_ PKRESOURCEMANAGER ResourceManager,
    _In_ ULONG RequestCookie,
    _In_ NTSTATUS Status
    );
_IRQL_requires_max_ (APC_LEVEL)
NTKERNELAPI
VOID
NTAPI
TmGetTransactionId(
    _In_ PKTRANSACTION Transaction,
    _Out_ PUOW TransactionId
    );
_Must_inspect_result_
_IRQL_requires_max_ (APC_LEVEL)
NTKERNELAPI
BOOLEAN
NTAPI
TmIsTransactionActive (
    _In_ PKTRANSACTION Transaction
    );
typedef struct _PCW_INSTANCE *PPCW_INSTANCE;
typedef struct _PCW_REGISTRATION *PPCW_REGISTRATION;
typedef struct _PCW_BUFFER *PPCW_BUFFER;
typedef struct _PCW_COUNTER_DESCRIPTOR {
    USHORT Id;
    USHORT StructIndex;
    USHORT Offset;
    USHORT Size;
} PCW_COUNTER_DESCRIPTOR, *PPCW_COUNTER_DESCRIPTOR;
typedef struct _PCW_DATA {
    _In_reads_bytes_(Size) const VOID *Data;
    _In_ ULONG Size;
} PCW_DATA, *PPCW_DATA;
typedef struct _PCW_COUNTER_INFORMATION {
    ULONG64 CounterMask;
    PCUNICODE_STRING InstanceMask;
} PCW_COUNTER_INFORMATION, *PPCW_COUNTER_INFORMATION;
typedef struct _PCW_MASK_INFORMATION {
    ULONG64 CounterMask;
    PCUNICODE_STRING InstanceMask;
    ULONG InstanceId;
    BOOLEAN CollectMultiple;
    PPCW_BUFFER Buffer;
    PKEVENT CancelEvent;
} PCW_MASK_INFORMATION, *PPCW_MASK_INFORMATION;
typedef union _PCW_CALLBACK_INFORMATION {
    PCW_COUNTER_INFORMATION AddCounter;
    PCW_COUNTER_INFORMATION RemoveCounter;
    PCW_MASK_INFORMATION EnumerateInstances;
    PCW_MASK_INFORMATION CollectData;
} PCW_CALLBACK_INFORMATION, *PPCW_CALLBACK_INFORMATION;
typedef enum _PCW_CALLBACK_TYPE {
    PcwCallbackAddCounter = 0,
    PcwCallbackRemoveCounter,
    PcwCallbackEnumerateInstances,
    PcwCallbackCollectData,
} PCW_CALLBACK_TYPE, *PPCW_CALLBACK_TYPE;
typedef
NTSTATUS NTAPI
PCW_CALLBACK(
    _In_ PCW_CALLBACK_TYPE Type,
    _In_ PPCW_CALLBACK_INFORMATION Info,
    _In_opt_ PVOID Context
    );
typedef PCW_CALLBACK *PPCW_CALLBACK;
typedef struct _PCW_REGISTRATION_INFORMATION {
    _In_ ULONG Version;
    _In_ PCUNICODE_STRING Name;
    _In_ ULONG CounterCount;
    _In_reads_(CounterCount) PPCW_COUNTER_DESCRIPTOR Counters;
    _In_opt_ PPCW_CALLBACK Callback;
    _In_opt_ PVOID CallbackContext;
} PCW_REGISTRATION_INFORMATION, *PPCW_REGISTRATION_INFORMATION;
_IRQL_requires_max_(APC_LEVEL)
NTSTATUS
NTAPI
PcwRegister(
    _Outptr_ PPCW_REGISTRATION *Registration,
    _In_ PPCW_REGISTRATION_INFORMATION Info
    );
_IRQL_requires_max_(APC_LEVEL)
VOID
NTAPI
PcwUnregister(
    _In_ PPCW_REGISTRATION Registration
    );
_IRQL_requires_max_(APC_LEVEL)
NTSTATUS
NTAPI
PcwCreateInstance(
    _Outptr_ PPCW_INSTANCE *Instance,
    _In_ PPCW_REGISTRATION Registration,
    _In_ PCUNICODE_STRING Name,
    _In_ ULONG Count,
    _In_reads_(Count) PPCW_DATA Data
    );
_IRQL_requires_max_(APC_LEVEL)
VOID
NTAPI
PcwCloseInstance(
    _In_ PPCW_INSTANCE Instance
    );
_IRQL_requires_max_(APC_LEVEL)
NTSTATUS
NTAPI
PcwAddInstance(
    _In_ PPCW_BUFFER Buffer,
    _In_ PCUNICODE_STRING Name,
    _In_ ULONG Id,
    _In_ ULONG Count,
    _In_reads_(Count) PPCW_DATA Data
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
VslCreateSecureSection (
    _Out_ PHANDLE Handle,
    _In_ PEPROCESS TargetProcess,
    _In_ PMDL Mdl,
    _In_ ULONG DevicePageProtection,
    _In_ ULONG Attributes
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
VslDeleteSecureSection (
    _In_ HANDLE GlobalHandle
    );
typedef enum _DRIVER_RUNTIME_INIT_FLAGS {
    DrvRtPoolNxOptIn = 0x00000001,
    LastDrvRtFlag
} DRIVER_RUNTIME_INIT_FLAGS, * PDRIVER_RUNTIME_INIT_FLAGS;
typedef const enum _DRIVER_RUNTIME_INIT_FLAGS * PCDRIVER_RUNTIME_INIT_FLAGS;
FORCEINLINE
VOID
ExInitializeDriverRuntime(
    _In_ ULONG RuntimeFlags
    )
{
    UNREFERENCED_PARAMETER (RuntimeFlags);
}
extern POBJECT_TYPE *CmKeyObjectType;
extern POBJECT_TYPE *IoFileObjectType;
extern POBJECT_TYPE *ExEventObjectType;
extern POBJECT_TYPE *ExSemaphoreObjectType;
extern POBJECT_TYPE *TmTransactionManagerObjectType;
extern POBJECT_TYPE *TmResourceManagerObjectType;
extern POBJECT_TYPE *TmEnlistmentObjectType;
extern POBJECT_TYPE *TmTransactionObjectType;
extern POBJECT_TYPE *PsProcessType;
extern POBJECT_TYPE *PsThreadType;
extern POBJECT_TYPE *PsJobType;
extern POBJECT_TYPE *SeTokenObjectType;
extern POBJECT_TYPE *ExDesktopObjectType;
}
#pragma warning(default:4115)
#pragma warning(default:4201)
#pragma warning(default:4214)

#error Compiler version not supported by Windows DDK
#pragma warning(disable:4115)
#pragma warning(disable:4201)
#pragma warning(disable:4214)
#pragma warning(disable:4625)
#pragma warning(disable:4626)
#pragma warning(disable:4668)
#pragma warning(disable:4820)
#include <wdm.h>
#include <excpt.h>
#include <ntdef.h>
#include <ntstatus.h>
#include <bugcodes.h>
#include <ntiologc.h>
extern "C" {
typedef struct _BUS_HANDLER *PBUS_HANDLER;
typedef struct _CALLBACK_OBJECT *PCALLBACK_OBJECT;
typedef struct _DEVICE_HANDLER_OBJECT *PDEVICE_HANDLER_OBJECT;
typedef struct _EPROCESS *PEPROCESS;
typedef struct _ETHREAD *PETHREAD;
typedef struct _EJOB *PEJOB;
typedef struct _EJOB *PESILO;
typedef struct _SILO_MONITOR *PSILO_MONITOR;
typedef struct _IO_TIMER *PIO_TIMER;
typedef struct _KINTERRUPT *PKINTERRUPT;
typedef struct _KTHREAD *PKTHREAD, *PRKTHREAD;
typedef struct _OBJECT_TYPE *POBJECT_TYPE;
typedef struct _PEB *PPEB;
typedef struct _IMAGE_NT_HEADERS *PIMAGE_NT_HEADERS32;
typedef struct _IMAGE_NT_HEADERS64 *PIMAGE_NT_HEADERS64;
typedef PIMAGE_NT_HEADERS64 PIMAGE_NT_HEADERS;
extern NTSYSAPI volatile CCHAR KeNumberProcessors;
extern POBJECT_TYPE *PsProcessType;
extern POBJECT_TYPE *PsThreadType;
extern POBJECT_TYPE *PsJobType;
extern POBJECT_TYPE *PsSiloContextPagedType;
extern POBJECT_TYPE *PsSiloContextNonPagedType;
#include <mce.h>
#pragma warning( default:4164 )
                      CONTEXT_SEGMENTS)
                                 CONTEXT_FLOATING_POINT | CONTEXT_DEBUG_REGISTERS | \
                                 CONTEXT_EXTENDED_REGISTERS)
typedef struct _FLOATING_SAVE_AREA {
    ULONG ControlWord;
    ULONG StatusWord;
    ULONG TagWord;
    ULONG ErrorOffset;
    ULONG ErrorSelector;
    ULONG DataOffset;
    ULONG DataSelector;
    UCHAR RegisterArea[SIZE_OF_80387_REGISTERS];
    ULONG Spare0;
} FLOATING_SAVE_AREA;
typedef FLOATING_SAVE_AREA *PFLOATING_SAVE_AREA;
#include "pshpack4.h"
typedef struct DECLSPEC_NOINITALL _CONTEXT {
    ULONG ContextFlags;
    ULONG Dr0;
    ULONG Dr1;
    ULONG Dr2;
    ULONG Dr3;
    ULONG Dr6;
    ULONG Dr7;
    FLOATING_SAVE_AREA FloatSave;
    ULONG SegGs;
    ULONG SegFs;
    ULONG SegEs;
    ULONG SegDs;
    ULONG Edi;
    ULONG Esi;
    ULONG Ebx;
    ULONG Edx;
    ULONG Ecx;
    ULONG Eax;
    ULONG Ebp;
    ULONG Eip;
    ULONG SegCs;
    ULONG EFlags;
    ULONG Esp;
    ULONG SegSs;
    UCHAR ExtendedRegisters[MAXIMUM_SUPPORTED_EXTENSION];
} CONTEXT;
typedef CONTEXT *PCONTEXT;
#include "poppack.h"
                                 CONTEXT_FLOATING_POINT)
                                 CONTEXT_SEGMENTS | CONTEXT_FLOATING_POINT | \
                                 CONTEXT_DEBUG_REGISTERS)
typedef struct  DECLSPEC_NOINITALL _CONTEXT {
    ULONG64 P1Home;
    ULONG64 P2Home;
    ULONG64 P3Home;
    ULONG64 P4Home;
    ULONG64 P5Home;
    ULONG64 P6Home;
    ULONG ContextFlags;
    ULONG MxCsr;
    USHORT SegCs;
    USHORT SegDs;
    USHORT SegEs;
    USHORT SegFs;
    USHORT SegGs;
    USHORT SegSs;
    ULONG EFlags;
    ULONG64 Dr0;
    ULONG64 Dr1;
    ULONG64 Dr2;
    ULONG64 Dr3;
    ULONG64 Dr6;
    ULONG64 Dr7;
    ULONG64 Rax;
    ULONG64 Rcx;
    ULONG64 Rdx;
    ULONG64 Rbx;
    ULONG64 Rsp;
    ULONG64 Rbp;
    ULONG64 Rsi;
    ULONG64 Rdi;
    ULONG64 R8;
    ULONG64 R9;
    ULONG64 R10;
    ULONG64 R11;
    ULONG64 R12;
    ULONG64 R13;
    ULONG64 R14;
    ULONG64 R15;
    ULONG64 Rip;
    union {
        XMM_SAVE_AREA32 FltSave;
        struct {
            M128A Header[2];
            M128A Legacy[8];
            M128A Xmm0;
            M128A Xmm1;
            M128A Xmm2;
            M128A Xmm3;
            M128A Xmm4;
            M128A Xmm5;
            M128A Xmm6;
            M128A Xmm7;
            M128A Xmm8;
            M128A Xmm9;
            M128A Xmm10;
            M128A Xmm11;
            M128A Xmm12;
            M128A Xmm13;
            M128A Xmm14;
            M128A Xmm15;
        } DUMMYSTRUCTNAME;
    } DUMMYUNIONNAME;
    M128A VectorRegister[26];
    ULONG64 VectorControl;
    ULONG64 DebugControl;
    ULONG64 LastBranchToRip;
    ULONG64 LastBranchFromRip;
    ULONG64 LastExceptionToRip;
    ULONG64 LastExceptionFromRip;
} CONTEXT, *PCONTEXT;
typedef struct _NEON128 {
    ULONGLONG Low;
    LONGLONG High;
} NEON128, *PNEON128;
typedef struct  DECLSPEC_NOINITALL _CONTEXT {
    ULONG ContextFlags;
    ULONG R0;
    ULONG R1;
    ULONG R2;
    ULONG R3;
    ULONG R4;
    ULONG R5;
    ULONG R6;
    ULONG R7;
    ULONG R8;
    ULONG R9;
    ULONG R10;
    ULONG R11;
    ULONG R12;
    ULONG Sp;
    ULONG Lr;
    ULONG Pc;
    ULONG Cpsr;
    ULONG Fpscr;
    ULONG Padding;
    union {
        NEON128 Q[16];
        ULONGLONG D[32];
        ULONG S[32];
    } DUMMYUNIONNAME;
    ULONG Bvr[ARM_MAX_BREAKPOINTS];
    ULONG Bcr[ARM_MAX_BREAKPOINTS];
    ULONG Wvr[ARM_MAX_WATCHPOINTS];
    ULONG Wcr[ARM_MAX_WATCHPOINTS];
    ULONG Padding2[2];
} CONTEXT, *PCONTEXT;
typedef union _ARM64_NT_NEON128 {
    struct {
        ULONGLONG Low;
        LONGLONG High;
    } DUMMYSTRUCTNAME;
    double D[2];
    float S[4];
    USHORT H[8];
    UCHAR B[16];
} ARM64_NT_NEON128, *PARM64_NT_NEON128;
typedef struct  DECLSPEC_NOINITALL _ARM64_NT_CONTEXT {
                 ULONG ContextFlags;
                 ULONG Cpsr;
                 union {
                    struct {
                        ULONG64 X0;
                        ULONG64 X1;
                        ULONG64 X2;
                        ULONG64 X3;
                        ULONG64 X4;
                        ULONG64 X5;
                        ULONG64 X6;
                        ULONG64 X7;
                        ULONG64 X8;
                        ULONG64 X9;
                        ULONG64 X10;
                        ULONG64 X11;
                        ULONG64 X12;
                        ULONG64 X13;
                        ULONG64 X14;
                        ULONG64 X15;
                        ULONG64 X16;
                        ULONG64 X17;
                        ULONG64 X18;
                        ULONG64 X19;
                        ULONG64 X20;
                        ULONG64 X21;
                        ULONG64 X22;
                        ULONG64 X23;
                        ULONG64 X24;
                        ULONG64 X25;
                        ULONG64 X26;
                        ULONG64 X27;
                        ULONG64 X28;
                        ULONG64 Fp;
                        ULONG64 Lr;
                    } DUMMYSTRUCTNAME;
                    ULONG64 X[31];
                 } DUMMYUNIONNAME;
                 ULONG64 Sp;
                 ULONG64 Pc;
                 ARM64_NT_NEON128 V[32];
                 ULONG Fpcr;
                 ULONG Fpsr;
                 ULONG Bcr[ARM64_MAX_BREAKPOINTS];
                 ULONG64 Bvr[ARM64_MAX_BREAKPOINTS];
                 ULONG Wcr[ARM64_MAX_WATCHPOINTS];
                 ULONG64 Wvr[ARM64_MAX_WATCHPOINTS];
} ARM64_NT_CONTEXT, *PARM64_NT_CONTEXT;
typedef enum {
    WinNullSid = 0,
    WinWorldSid = 1,
    WinLocalSid = 2,
    WinCreatorOwnerSid = 3,
    WinCreatorGroupSid = 4,
    WinCreatorOwnerServerSid = 5,
    WinCreatorGroupServerSid = 6,
    WinNtAuthoritySid = 7,
    WinDialupSid = 8,
    WinNetworkSid = 9,
    WinBatchSid = 10,
    WinInteractiveSid = 11,
    WinServiceSid = 12,
    WinAnonymousSid = 13,
    WinProxySid = 14,
    WinEnterpriseControllersSid = 15,
    WinSelfSid = 16,
    WinAuthenticatedUserSid = 17,
    WinRestrictedCodeSid = 18,
    WinTerminalServerSid = 19,
    WinRemoteLogonIdSid = 20,
    WinLogonIdsSid = 21,
    WinLocalSystemSid = 22,
    WinLocalServiceSid = 23,
    WinNetworkServiceSid = 24,
    WinBuiltinDomainSid = 25,
    WinBuiltinAdministratorsSid = 26,
    WinBuiltinUsersSid = 27,
    WinBuiltinGuestsSid = 28,
    WinBuiltinPowerUsersSid = 29,
    WinBuiltinAccountOperatorsSid = 30,
    WinBuiltinSystemOperatorsSid = 31,
    WinBuiltinPrintOperatorsSid = 32,
    WinBuiltinBackupOperatorsSid = 33,
    WinBuiltinReplicatorSid = 34,
    WinBuiltinPreWindows2000CompatibleAccessSid = 35,
    WinBuiltinRemoteDesktopUsersSid = 36,
    WinBuiltinNetworkConfigurationOperatorsSid = 37,
    WinAccountAdministratorSid = 38,
    WinAccountGuestSid = 39,
    WinAccountKrbtgtSid = 40,
    WinAccountDomainAdminsSid = 41,
    WinAccountDomainUsersSid = 42,
    WinAccountDomainGuestsSid = 43,
    WinAccountComputersSid = 44,
    WinAccountControllersSid = 45,
    WinAccountCertAdminsSid = 46,
    WinAccountSchemaAdminsSid = 47,
    WinAccountEnterpriseAdminsSid = 48,
    WinAccountPolicyAdminsSid = 49,
    WinAccountRasAndIasServersSid = 50,
    WinNTLMAuthenticationSid = 51,
    WinDigestAuthenticationSid = 52,
    WinSChannelAuthenticationSid = 53,
    WinThisOrganizationSid = 54,
    WinOtherOrganizationSid = 55,
    WinBuiltinIncomingForestTrustBuildersSid = 56,
    WinBuiltinPerfMonitoringUsersSid = 57,
    WinBuiltinPerfLoggingUsersSid = 58,
    WinBuiltinAuthorizationAccessSid = 59,
    WinBuiltinTerminalServerLicenseServersSid = 60,
    WinBuiltinDCOMUsersSid = 61,
    WinBuiltinIUsersSid = 62,
    WinIUserSid = 63,
    WinBuiltinCryptoOperatorsSid = 64,
    WinUntrustedLabelSid = 65,
    WinLowLabelSid = 66,
    WinMediumLabelSid = 67,
    WinHighLabelSid = 68,
    WinSystemLabelSid = 69,
    WinWriteRestrictedCodeSid = 70,
    WinCreatorOwnerRightsSid = 71,
    WinCacheablePrincipalsGroupSid = 72,
    WinNonCacheablePrincipalsGroupSid = 73,
    WinEnterpriseReadonlyControllersSid = 74,
    WinAccountReadonlyControllersSid = 75,
    WinBuiltinEventLogReadersGroup = 76,
    WinNewEnterpriseReadonlyControllersSid = 77,
    WinBuiltinCertSvcDComAccessGroup = 78,
    WinMediumPlusLabelSid = 79,
    WinLocalLogonSid = 80,
    WinConsoleLogonSid = 81,
    WinThisOrganizationCertificateSid = 82,
    WinApplicationPackageAuthoritySid = 83,
    WinBuiltinAnyPackageSid = 84,
    WinCapabilityInternetClientSid = 85,
    WinCapabilityInternetClientServerSid = 86,
    WinCapabilityPrivateNetworkClientServerSid = 87,
    WinCapabilityPicturesLibrarySid = 88,
    WinCapabilityVideosLibrarySid = 89,
    WinCapabilityMusicLibrarySid = 90,
    WinCapabilityDocumentsLibrarySid = 91,
    WinCapabilitySharedUserCertificatesSid = 92,
    WinCapabilityEnterpriseAuthenticationSid = 93,
    WinCapabilityRemovableStorageSid = 94,
    WinBuiltinRDSRemoteAccessServersSid = 95,
    WinBuiltinRDSEndpointServersSid = 96,
    WinBuiltinRDSManagementServersSid = 97,
    WinUserModeDriversSid = 98,
    WinBuiltinHyperVAdminsSid = 99,
    WinAccountCloneableControllersSid = 100,
    WinBuiltinAccessControlAssistanceOperatorsSid = 101,
    WinBuiltinRemoteManagementUsersSid = 102,
    WinAuthenticationAuthorityAssertedSid = 103,
    WinAuthenticationServiceAssertedSid = 104,
    WinLocalAccountSid = 105,
    WinLocalAccountAndAdministratorSid = 106,
    WinAccountProtectedUsersSid = 107,
    WinCapabilityAppointmentsSid = 108,
    WinCapabilityContactsSid = 109,
    WinAccountDefaultSystemManagedSid = 110,
    WinBuiltinDefaultSystemManagedGroupSid = 111,
    WinBuiltinStorageReplicaAdminsSid = 112,
    WinAccountKeyAdminsSid = 113,
    WinAccountEnterpriseKeyAdminsSid = 114,
    WinAuthenticationKeyTrustSid = 115,
    WinAuthenticationKeyPropertyMFASid = 116,
    WinAuthenticationKeyPropertyAttestationSid = 117,
    WinAuthenticationFreshKeyAuthSid = 118,
    WinBuiltinDeviceOwnersSid = 119,
} WELL_KNOWN_SID_TYPE;
typedef UCHAR SE_SIGNING_LEVEL, *PSE_SIGNING_LEVEL;
typedef enum _SE_IMAGE_SIGNATURE_TYPE
{
    SeImageSignatureNone = 0,
    SeImageSignatureEmbedded,
    SeImageSignatureCache,
    SeImageSignatureCatalogCached,
    SeImageSignatureCatalogNotCached,
    SeImageSignatureCatalogHint,
    SeImageSignaturePackageCatalog,
} SE_IMAGE_SIGNATURE_TYPE, *PSE_IMAGE_SIGNATURE_TYPE;
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
     ( sizeof(SE_ADT_PARAMETER_ARRAY) - \
       sizeof(SE_ADT_PARAMETER_ARRAY_ENTRY) * \
       (SE_MAX_AUDIT_PARAMETERS - AuditParameters->ParameterCount) )
typedef union _RTL_RUN_ONCE {
    PVOID Ptr;
} RTL_RUN_ONCE, *PRTL_RUN_ONCE;
typedef
_Function_class_(RTL_RUN_ONCE_INIT_FN)
_IRQL_requires_same_
ULONG
NTAPI
RTL_RUN_ONCE_INIT_FN (
    _Inout_ PRTL_RUN_ONCE RunOnce,
    _Inout_opt_ PVOID Parameter,
    _Inout_opt_ PVOID *Context
    );
typedef RTL_RUN_ONCE_INIT_FN *PRTL_RUN_ONCE_INIT_FN;
_IRQL_requires_max_(APC_LEVEL)
NTSYSAPI
VOID
NTAPI
RtlRunOnceInitialize (
    _Out_ PRTL_RUN_ONCE RunOnce
    );
_IRQL_requires_max_(APC_LEVEL)
_Maybe_raises_SEH_exception_
NTSYSAPI
NTSTATUS
NTAPI
RtlRunOnceExecuteOnce (
    _Inout_ PRTL_RUN_ONCE RunOnce,
    _In_ __callback PRTL_RUN_ONCE_INIT_FN InitFn,
    _Inout_opt_ PVOID Parameter,
    _Outptr_opt_result_maybenull_ PVOID *Context
    );
_IRQL_requires_max_(APC_LEVEL)
_Must_inspect_result_
NTSYSAPI
NTSTATUS
NTAPI
RtlRunOnceBeginInitialize (
    _Inout_ PRTL_RUN_ONCE RunOnce,
    _In_ ULONG Flags,
    _Outptr_opt_result_maybenull_ PVOID *Context
    );
_IRQL_requires_max_(APC_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
RtlRunOnceComplete (
    _Inout_ PRTL_RUN_ONCE RunOnce,
    _In_ ULONG Flags,
    _In_opt_ PVOID Context
    );
typedef enum _TABLE_SEARCH_RESULT{
    TableEmptyTree,
    TableFoundNode,
    TableInsertAsLeft,
    TableInsertAsRight
} TABLE_SEARCH_RESULT;
typedef enum _RTL_GENERIC_COMPARE_RESULTS {
    GenericLessThan,
    GenericGreaterThan,
    GenericEqual
} RTL_GENERIC_COMPARE_RESULTS;
struct _RTL_AVL_TABLE;
typedef
_IRQL_requires_same_
_Function_class_(RTL_AVL_COMPARE_ROUTINE)
RTL_GENERIC_COMPARE_RESULTS
NTAPI
RTL_AVL_COMPARE_ROUTINE (
    _In_ struct _RTL_AVL_TABLE *Table,
    _In_ PVOID FirstStruct,
    _In_ PVOID SecondStruct
    );
typedef RTL_AVL_COMPARE_ROUTINE *PRTL_AVL_COMPARE_ROUTINE;
typedef
_IRQL_requires_same_
_Function_class_(RTL_AVL_ALLOCATE_ROUTINE)
__drv_allocatesMem(Mem)
PVOID
NTAPI
RTL_AVL_ALLOCATE_ROUTINE (
    _In_ struct _RTL_AVL_TABLE *Table,
    _In_ CLONG ByteSize
    );
typedef RTL_AVL_ALLOCATE_ROUTINE *PRTL_AVL_ALLOCATE_ROUTINE;
typedef
_IRQL_requires_same_
_Function_class_(RTL_AVL_FREE_ROUTINE)
VOID
NTAPI
RTL_AVL_FREE_ROUTINE (
    _In_ struct _RTL_AVL_TABLE *Table,
    _In_ __drv_freesMem(Mem) _Post_invalid_ PVOID Buffer
    );
typedef RTL_AVL_FREE_ROUTINE *PRTL_AVL_FREE_ROUTINE;
typedef
_IRQL_requires_same_
_Function_class_(RTL_AVL_MATCH_FUNCTION)
NTSTATUS
NTAPI
RTL_AVL_MATCH_FUNCTION (
    _In_ struct _RTL_AVL_TABLE *Table,
    _In_ PVOID UserData,
    _In_ PVOID MatchData
    );
typedef RTL_AVL_MATCH_FUNCTION *PRTL_AVL_MATCH_FUNCTION;
typedef struct _RTL_BALANCED_LINKS {
    struct _RTL_BALANCED_LINKS *Parent;
    struct _RTL_BALANCED_LINKS *LeftChild;
    struct _RTL_BALANCED_LINKS *RightChild;
    CHAR Balance;
    UCHAR Reserved[3];
} RTL_BALANCED_LINKS;
typedef RTL_BALANCED_LINKS *PRTL_BALANCED_LINKS;
typedef struct _RTL_AVL_TABLE {
    RTL_BALANCED_LINKS BalancedRoot;
    PVOID OrderedPointer;
    ULONG WhichOrderedElement;
    ULONG NumberGenericTableElements;
    ULONG DepthOfTree;
    PRTL_BALANCED_LINKS RestartKey;
    ULONG DeleteCount;
    PRTL_AVL_COMPARE_ROUTINE CompareRoutine;
    PRTL_AVL_ALLOCATE_ROUTINE AllocateRoutine;
    PRTL_AVL_FREE_ROUTINE FreeRoutine;
    PVOID TableContext;
} RTL_AVL_TABLE;
typedef RTL_AVL_TABLE *PRTL_AVL_TABLE;
NTSYSAPI
VOID
NTAPI
RtlInitializeGenericTableAvl (
    _Out_ PRTL_AVL_TABLE Table,
    _In_ PRTL_AVL_COMPARE_ROUTINE CompareRoutine,
    _In_ PRTL_AVL_ALLOCATE_ROUTINE AllocateRoutine,
    _In_ PRTL_AVL_FREE_ROUTINE FreeRoutine,
    _In_opt_ PVOID TableContext
    );
NTSYSAPI
PVOID
NTAPI
RtlInsertElementGenericTableAvl (
    _In_ PRTL_AVL_TABLE Table,
    _In_reads_bytes_(BufferSize) PVOID Buffer,
    _In_ CLONG BufferSize,
    _Out_opt_ PBOOLEAN NewElement
    );
NTSYSAPI
PVOID
NTAPI
RtlInsertElementGenericTableFullAvl (
    _In_ PRTL_AVL_TABLE Table,
    _In_reads_bytes_(BufferSize) PVOID Buffer,
    _In_ CLONG BufferSize,
    _Out_opt_ PBOOLEAN NewElement,
    _In_ PVOID NodeOrParent,
    _In_ TABLE_SEARCH_RESULT SearchResult
    );
NTSYSAPI
BOOLEAN
NTAPI
RtlDeleteElementGenericTableAvl (
    _In_ PRTL_AVL_TABLE Table,
    _In_ PVOID Buffer
    );
NTSYSAPI
VOID
NTAPI
RtlDeleteElementGenericTableAvlEx (
    _In_ PRTL_AVL_TABLE Table,
    _In_ PVOID NodeOrParent
    );
_Must_inspect_result_
NTSYSAPI
PVOID
NTAPI
RtlLookupElementGenericTableAvl (
    _In_ PRTL_AVL_TABLE Table,
    _In_ PVOID Buffer
    );
NTSYSAPI
PVOID
NTAPI
RtlLookupElementGenericTableFullAvl (
    _In_ PRTL_AVL_TABLE Table,
    _In_ PVOID Buffer,
    _Out_ PVOID *NodeOrParent,
    _Out_ TABLE_SEARCH_RESULT *SearchResult
    );
_Must_inspect_result_
NTSYSAPI
PVOID
NTAPI
RtlEnumerateGenericTableAvl (
    _In_ PRTL_AVL_TABLE Table,
    _In_ BOOLEAN Restart
    );
_Must_inspect_result_
NTSYSAPI
PVOID
NTAPI
RtlEnumerateGenericTableWithoutSplayingAvl (
    _In_ PRTL_AVL_TABLE Table,
    _Inout_ PVOID *RestartKey
    );
_Must_inspect_result_
NTSYSAPI
PVOID
NTAPI
RtlLookupFirstMatchingElementGenericTableAvl (
    _In_ PRTL_AVL_TABLE Table,
    _In_ PVOID Buffer,
    _Out_ PVOID *RestartKey
    );
_Must_inspect_result_
NTSYSAPI
PVOID
NTAPI
RtlEnumerateGenericTableLikeADirectory (
    _In_ PRTL_AVL_TABLE Table,
    _In_opt_ PRTL_AVL_MATCH_FUNCTION MatchFunction,
    _In_opt_ PVOID MatchData,
    _In_ ULONG NextFlag,
    _Inout_ PVOID *RestartKey,
    _Inout_ PULONG DeleteCount,
    _In_ PVOID Buffer
    );
_Must_inspect_result_
NTSYSAPI
PVOID
NTAPI
RtlGetElementGenericTableAvl (
    _In_ PRTL_AVL_TABLE Table,
    _In_ ULONG I
    );
NTSYSAPI
ULONG
NTAPI
RtlNumberGenericTableElementsAvl (
    _In_ PRTL_AVL_TABLE Table
    );
_Must_inspect_result_
NTSYSAPI
BOOLEAN
NTAPI
RtlIsGenericTableEmptyAvl (
    _In_ PRTL_AVL_TABLE Table
    );
typedef struct _RTL_SPLAY_LINKS {
    struct _RTL_SPLAY_LINKS *Parent;
    struct _RTL_SPLAY_LINKS *LeftChild;
    struct _RTL_SPLAY_LINKS *RightChild;
} RTL_SPLAY_LINKS;
typedef RTL_SPLAY_LINKS *PRTL_SPLAY_LINKS;
FORCEINLINE
VOID
RtlInitializeSplayLinks (
    _Out_ PRTL_SPLAY_LINKS Links
    )
{
    Links->Parent = Links;
    Links->LeftChild = NULL;
    Links->RightChild = NULL;
}
    (PRTL_SPLAY_LINKS)(Links)->Parent \
    )
    (PRTL_SPLAY_LINKS)(Links)->LeftChild \
    )
    (PRTL_SPLAY_LINKS)(Links)->RightChild \
    )
    (RtlParent(Links) == (PRTL_SPLAY_LINKS)(Links)) \
    )
    (RtlLeftChild(RtlParent(Links)) == (PRTL_SPLAY_LINKS)(Links)) \
    )
    (RtlRightChild(RtlParent(Links)) == (PRTL_SPLAY_LINKS)(Links)) \
    )
FORCEINLINE
VOID
RtlInsertAsLeftChild (
    _Inout_ PRTL_SPLAY_LINKS ParentLinks,
    _Inout_ PRTL_SPLAY_LINKS ChildLinks
    )
{
    ParentLinks->LeftChild = ChildLinks;
    ChildLinks->Parent = ParentLinks;
}
FORCEINLINE
VOID
RtlInsertAsRightChild (
    _Inout_ PRTL_SPLAY_LINKS ParentLinks,
    _Inout_ PRTL_SPLAY_LINKS ChildLinks
    )
{
    ParentLinks->RightChild = ChildLinks;
    ChildLinks->Parent = ParentLinks;
}
NTSYSAPI
PRTL_SPLAY_LINKS
NTAPI
RtlSplay (
    _Inout_ PRTL_SPLAY_LINKS Links
    );
NTSYSAPI
PRTL_SPLAY_LINKS
NTAPI
RtlDelete (
    _In_ PRTL_SPLAY_LINKS Links
    );
NTSYSAPI
VOID
NTAPI
RtlDeleteNoSplay (
    _In_ PRTL_SPLAY_LINKS Links,
    _Inout_ PRTL_SPLAY_LINKS *Root
    );
_Must_inspect_result_
NTSYSAPI
PRTL_SPLAY_LINKS
NTAPI
RtlSubtreeSuccessor (
    _In_ PRTL_SPLAY_LINKS Links
    );
_Must_inspect_result_
NTSYSAPI
PRTL_SPLAY_LINKS
NTAPI
RtlSubtreePredecessor (
    _In_ PRTL_SPLAY_LINKS Links
    );
_Must_inspect_result_
NTSYSAPI
PRTL_SPLAY_LINKS
NTAPI
RtlRealSuccessor (
    _In_ PRTL_SPLAY_LINKS Links
    );
_Must_inspect_result_
NTSYSAPI
PRTL_SPLAY_LINKS
NTAPI
RtlRealPredecessor (
    _In_ PRTL_SPLAY_LINKS Links
    );
struct _RTL_GENERIC_TABLE;
typedef
_IRQL_requires_same_
_Function_class_(RTL_GENERIC_COMPARE_ROUTINE)
RTL_GENERIC_COMPARE_RESULTS
NTAPI
RTL_GENERIC_COMPARE_ROUTINE (
    _In_ struct _RTL_GENERIC_TABLE *Table,
    _In_ PVOID FirstStruct,
    _In_ PVOID SecondStruct
    );
typedef RTL_GENERIC_COMPARE_ROUTINE *PRTL_GENERIC_COMPARE_ROUTINE;
typedef
_IRQL_requires_same_
_Function_class_(RTL_GENERIC_ALLOCATE_ROUTINE)
__drv_allocatesMem(Mem)
PVOID
NTAPI
RTL_GENERIC_ALLOCATE_ROUTINE (
    _In_ struct _RTL_GENERIC_TABLE *Table,
    _In_ CLONG ByteSize
    );
typedef RTL_GENERIC_ALLOCATE_ROUTINE *PRTL_GENERIC_ALLOCATE_ROUTINE;
typedef
_IRQL_requires_same_
_Function_class_(RTL_GENERIC_FREE_ROUTINE)
VOID
NTAPI
RTL_GENERIC_FREE_ROUTINE (
    _In_ struct _RTL_GENERIC_TABLE *Table,
    _In_ __drv_freesMem(Mem) _Post_invalid_ PVOID Buffer
    );
typedef RTL_GENERIC_FREE_ROUTINE *PRTL_GENERIC_FREE_ROUTINE;
typedef struct _RTL_GENERIC_TABLE {
    PRTL_SPLAY_LINKS TableRoot;
    LIST_ENTRY InsertOrderList;
    PLIST_ENTRY OrderedPointer;
    ULONG WhichOrderedElement;
    ULONG NumberGenericTableElements;
    PRTL_GENERIC_COMPARE_ROUTINE CompareRoutine;
    PRTL_GENERIC_ALLOCATE_ROUTINE AllocateRoutine;
    PRTL_GENERIC_FREE_ROUTINE FreeRoutine;
    PVOID TableContext;
} RTL_GENERIC_TABLE;
typedef RTL_GENERIC_TABLE *PRTL_GENERIC_TABLE;
NTSYSAPI
VOID
NTAPI
RtlInitializeGenericTable (
    _Out_ PRTL_GENERIC_TABLE Table,
    _In_ PRTL_GENERIC_COMPARE_ROUTINE CompareRoutine,
    _In_ PRTL_GENERIC_ALLOCATE_ROUTINE AllocateRoutine,
    _In_ PRTL_GENERIC_FREE_ROUTINE FreeRoutine,
    _In_opt_ PVOID TableContext
    );
NTSYSAPI
PVOID
NTAPI
RtlInsertElementGenericTable (
    _In_ PRTL_GENERIC_TABLE Table,
    _In_reads_bytes_(BufferSize) PVOID Buffer,
    _In_ CLONG BufferSize,
    _Out_opt_ PBOOLEAN NewElement
    );
NTSYSAPI
PVOID
NTAPI
RtlInsertElementGenericTableFull (
    _In_ PRTL_GENERIC_TABLE Table,
    _In_reads_bytes_(BufferSize) PVOID Buffer,
    _In_ CLONG BufferSize,
    _Out_opt_ PBOOLEAN NewElement,
    _In_ PVOID NodeOrParent,
    _In_ TABLE_SEARCH_RESULT SearchResult
    );
NTSYSAPI
BOOLEAN
NTAPI
RtlDeleteElementGenericTable (
    _In_ PRTL_GENERIC_TABLE Table,
    _In_ PVOID Buffer
    );
_Must_inspect_result_
NTSYSAPI
PVOID
NTAPI
RtlLookupElementGenericTable (
    _In_ PRTL_GENERIC_TABLE Table,
    _In_ PVOID Buffer
    );
NTSYSAPI
PVOID
NTAPI
RtlLookupElementGenericTableFull (
    _In_ PRTL_GENERIC_TABLE Table,
    _In_ PVOID Buffer,
    _Out_ PVOID *NodeOrParent,
    _Out_ TABLE_SEARCH_RESULT *SearchResult
    );
_Must_inspect_result_
NTSYSAPI
PVOID
NTAPI
RtlEnumerateGenericTable (
    _In_ PRTL_GENERIC_TABLE Table,
    _In_ BOOLEAN Restart
    );
_Must_inspect_result_
NTSYSAPI
PVOID
NTAPI
RtlEnumerateGenericTableWithoutSplaying (
    _In_ PRTL_GENERIC_TABLE Table,
    _Inout_ PVOID *RestartKey
    );
_Must_inspect_result_
NTSYSAPI
PVOID
NTAPI
RtlGetElementGenericTable(
    _In_ PRTL_GENERIC_TABLE Table,
    _In_ ULONG I
    );
NTSYSAPI
ULONG
NTAPI
RtlNumberGenericTableElements(
    _In_ PRTL_GENERIC_TABLE Table
    );
_Must_inspect_result_
NTSYSAPI
BOOLEAN
NTAPI
RtlIsGenericTableEmpty (
    _In_ PRTL_GENERIC_TABLE Table
    );
typedef struct _RTL_DYNAMIC_HASH_TABLE_ENTRY {
    LIST_ENTRY Linkage;
    ULONG_PTR Signature;
} RTL_DYNAMIC_HASH_TABLE_ENTRY, *PRTL_DYNAMIC_HASH_TABLE_ENTRY;
typedef struct _RTL_DYNAMIC_HASH_TABLE_CONTEXT {
    PLIST_ENTRY ChainHead;
    PLIST_ENTRY PrevLinkage;
    ULONG_PTR Signature;
} RTL_DYNAMIC_HASH_TABLE_CONTEXT, *PRTL_DYNAMIC_HASH_TABLE_CONTEXT;
typedef struct _RTL_DYNAMIC_HASH_TABLE_ENUMERATOR {
    union {
       RTL_DYNAMIC_HASH_TABLE_ENTRY HashEntry;
       PLIST_ENTRY CurEntry;
    };
    PLIST_ENTRY ChainHead;
    ULONG BucketIndex;
} RTL_DYNAMIC_HASH_TABLE_ENUMERATOR, *PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR;
typedef struct _RTL_DYNAMIC_HASH_TABLE {
    ULONG Flags;
    ULONG Shift;
    ULONG TableSize;
    ULONG Pivot;
    ULONG DivisorMask;
    ULONG NumEntries;
    ULONG NonEmptyBuckets;
    ULONG NumEnumerators;
    PVOID Directory;
} RTL_DYNAMIC_HASH_TABLE, *PRTL_DYNAMIC_HASH_TABLE;
FORCEINLINE
VOID
RtlInitHashTableContext(
    _Inout_ PRTL_DYNAMIC_HASH_TABLE_CONTEXT Context
    )
{
    Context->ChainHead = NULL;
    Context->PrevLinkage = NULL;
}
FORCEINLINE
VOID
RtlInitHashTableContextFromEnumerator(
    _Inout_ PRTL_DYNAMIC_HASH_TABLE_CONTEXT Context,
    _In_ PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR Enumerator
    )
{
    Context->ChainHead = Enumerator->ChainHead;
    Context->PrevLinkage = Enumerator->HashEntry.Linkage.Blink;
}
FORCEINLINE
void
RtlReleaseHashTableContext(
    _Inout_ PRTL_DYNAMIC_HASH_TABLE_CONTEXT Context
    )
{
    UNREFERENCED_PARAMETER(Context);
    return;
}
FORCEINLINE
ULONG
RtlTotalBucketsHashTable(
    _In_ PRTL_DYNAMIC_HASH_TABLE HashTable
    )
{
    return HashTable->TableSize;
}
FORCEINLINE
ULONG
RtlNonEmptyBucketsHashTable(
    _In_ PRTL_DYNAMIC_HASH_TABLE HashTable
    )
{
    return HashTable->NonEmptyBuckets;
}
FORCEINLINE
ULONG
RtlEmptyBucketsHashTable(
    _In_ PRTL_DYNAMIC_HASH_TABLE HashTable
    )
{
    return HashTable->TableSize - HashTable->NonEmptyBuckets;
}
FORCEINLINE
ULONG
RtlTotalEntriesHashTable(
    _In_ PRTL_DYNAMIC_HASH_TABLE HashTable
    )
{
    return HashTable->NumEntries;
}
FORCEINLINE
ULONG
RtlActiveEnumeratorsHashTable(
    _In_ PRTL_DYNAMIC_HASH_TABLE HashTable
    )
{
    return HashTable->NumEnumerators;
}
_Must_inspect_result_
_Success_(return != 0)
NTSYSAPI
BOOLEAN
NTAPI
RtlCreateHashTable(
    _Inout_ _When_(NULL == *HashTable, _At_(*HashTable, __drv_allocatesMem(Mem)))
        PRTL_DYNAMIC_HASH_TABLE *HashTable,
    _In_ ULONG Shift,
    _Reserved_ ULONG Flags
    );
_Must_inspect_result_
_Success_(return != 0)
NTSYSAPI
BOOLEAN
NTAPI
RtlCreateHashTableEx(
    _Inout_ _When_(NULL == *HashTable, _At_(*HashTable, __drv_allocatesMem(Mem)))
        PRTL_DYNAMIC_HASH_TABLE *HashTable,
    _In_ ULONG InitialSize,
    _In_ ULONG Shift,
    _Reserved_ ULONG Flags
    );
NTSYSAPI
VOID
NTAPI
RtlDeleteHashTable(
    _In_ _When_((HashTable->Flags & RTL_HASH_ALLOCATED_HEADER), __drv_freesMem(Mem) _Post_invalid_)
        PRTL_DYNAMIC_HASH_TABLE HashTable
    );
NTSYSAPI
BOOLEAN
NTAPI
RtlInsertEntryHashTable(
    _In_ PRTL_DYNAMIC_HASH_TABLE HashTable,
    _In_ __drv_aliasesMem PRTL_DYNAMIC_HASH_TABLE_ENTRY Entry,
    _In_ ULONG_PTR Signature,
    _Inout_opt_ PRTL_DYNAMIC_HASH_TABLE_CONTEXT Context
    );
NTSYSAPI
BOOLEAN
NTAPI
RtlRemoveEntryHashTable(
    _In_ PRTL_DYNAMIC_HASH_TABLE HashTable,
    _In_ PRTL_DYNAMIC_HASH_TABLE_ENTRY Entry,
    _Inout_opt_ PRTL_DYNAMIC_HASH_TABLE_CONTEXT Context
    );
_Must_inspect_result_
NTSYSAPI
PRTL_DYNAMIC_HASH_TABLE_ENTRY
NTAPI
RtlLookupEntryHashTable(
    _In_ PRTL_DYNAMIC_HASH_TABLE HashTable,
    _In_ ULONG_PTR Signature,
    _Out_opt_ PRTL_DYNAMIC_HASH_TABLE_CONTEXT Context
    );
_Must_inspect_result_
NTSYSAPI
PRTL_DYNAMIC_HASH_TABLE_ENTRY
NTAPI
RtlGetNextEntryHashTable(
    _In_ PRTL_DYNAMIC_HASH_TABLE HashTable,
    _In_ PRTL_DYNAMIC_HASH_TABLE_CONTEXT Context
    );
NTSYSAPI
BOOLEAN
NTAPI
RtlInitEnumerationHashTable(
    _In_ PRTL_DYNAMIC_HASH_TABLE HashTable,
    _Out_ PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR Enumerator
    );
_Must_inspect_result_
NTSYSAPI
PRTL_DYNAMIC_HASH_TABLE_ENTRY
NTAPI
RtlEnumerateEntryHashTable(
    _In_ PRTL_DYNAMIC_HASH_TABLE HashTable,
    _Inout_ PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR Enumerator
    );
NTSYSAPI
VOID
NTAPI
RtlEndEnumerationHashTable(
    _In_ PRTL_DYNAMIC_HASH_TABLE HashTable,
    _Inout_ PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR Enumerator
    );
NTSYSAPI
BOOLEAN
NTAPI
RtlInitWeakEnumerationHashTable(
    _In_ PRTL_DYNAMIC_HASH_TABLE HashTable,
    _Out_ PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR Enumerator
    );
_Must_inspect_result_
NTSYSAPI
PRTL_DYNAMIC_HASH_TABLE_ENTRY
NTAPI
RtlWeaklyEnumerateEntryHashTable(
    _In_ PRTL_DYNAMIC_HASH_TABLE HashTable,
    _Inout_ PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR Enumerator
    );
NTSYSAPI
VOID
NTAPI
RtlEndWeakEnumerationHashTable(
    _In_ PRTL_DYNAMIC_HASH_TABLE HashTable,
    _Inout_ PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR Enumerator
    );
NTSYSAPI
BOOLEAN
NTAPI
RtlInitStrongEnumerationHashTable(
    _In_ PRTL_DYNAMIC_HASH_TABLE HashTable,
    _Out_ PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR Enumerator
    );
_Must_inspect_result_
NTSYSAPI
PRTL_DYNAMIC_HASH_TABLE_ENTRY
NTAPI
RtlStronglyEnumerateEntryHashTable(
    _In_ PRTL_DYNAMIC_HASH_TABLE HashTable,
    _Inout_ PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR Enumerator
    );
NTSYSAPI
VOID
NTAPI
RtlEndStrongEnumerationHashTable(
    _In_ PRTL_DYNAMIC_HASH_TABLE HashTable,
    _Inout_ PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR Enumerator
    );
NTSYSAPI
BOOLEAN
NTAPI
RtlExpandHashTable(
    _In_ PRTL_DYNAMIC_HASH_TABLE HashTable
    );
NTSYSAPI
BOOLEAN
NTAPI
RtlContractHashTable(
    _In_ PRTL_DYNAMIC_HASH_TABLE HashTable
    );
NTSYSAPI
VOID
NTAPI
RtlGetCallersAddress(
    _Out_ PVOID *CallersAddress,
    _Out_ PVOID *CallersCaller
    );
NTSYSAPI
ULONG
NTAPI
RtlWalkFrameChain (
    _Out_writes_(Count - (Flags >> RTL_STACK_WALKING_MODE_FRAMES_TO_SKIP_SHIFT)) PVOID *Callers,
    _In_ ULONG Count,
    _In_ ULONG Flags
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
ULONG64
NTAPI
RtlGetEnabledExtendedFeatures(
    _In_ ULONG64 FeatureMask
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
RtlCharToInteger (
    _In_z_ PCSZ String,
    _In_opt_ ULONG Base,
    _Out_ PULONG Value
    );
NTSYSAPI
VOID
NTAPI
RtlCopyString(
    _Out_ PSTRING DestinationString,
    _In_opt_ const STRING * SourceString
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
CHAR
NTAPI
RtlUpperChar (
    _In_ CHAR Character
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
_Must_inspect_result_
NTSYSAPI
LONG
NTAPI
RtlCompareString(
    _In_ const STRING * String1,
    _In_ const STRING * String2,
    _In_ BOOLEAN CaseInSensitive
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
_Must_inspect_result_
NTSYSAPI
BOOLEAN
NTAPI
RtlEqualString(
    _In_ const STRING * String1,
    _In_ const STRING * String2,
    _In_ BOOLEAN CaseInSensitive
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
VOID
NTAPI
RtlUpperString(
    _Inout_ PSTRING DestinationString,
    _In_ const STRING * SourceString
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
_Must_inspect_result_
NTSYSAPI
BOOLEAN
NTAPI
RtlPrefixUnicodeString(
    _In_ PCUNICODE_STRING String1,
    _In_ PCUNICODE_STRING String2,
    _In_ BOOLEAN CaseInSensitive
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
_Must_inspect_result_
NTSYSAPI
BOOLEAN
NTAPI
RtlSuffixUnicodeString(
    _In_ PCUNICODE_STRING String1,
    _In_ PCUNICODE_STRING String2,
    _In_ BOOLEAN CaseInSensitive
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
_When_(AllocateDestinationString, _Must_inspect_result_)
NTSYSAPI
NTSTATUS
NTAPI
RtlUpcaseUnicodeString(
    _When_(AllocateDestinationString, _Out_ _At_(DestinationString->Buffer, __drv_allocatesMem(Mem)))
    _When_(!AllocateDestinationString, _Inout_)
        PUNICODE_STRING DestinationString,
    _In_ PCUNICODE_STRING SourceString,
    _In_ BOOLEAN AllocateDestinationString
    );
DECLSPEC_DEPRECATED_DDK
__drv_preferredFunction("compiler support for 64 bit", "Obsolete")
__inline
LARGE_INTEGER
NTAPI_INLINE
RtlLargeIntegerDivide (
    _In_ LARGE_INTEGER Dividend,
    _In_ LARGE_INTEGER Divisor,
    _Out_opt_ PLARGE_INTEGER Remainder
    )
{
    LARGE_INTEGER Quotient;
    Quotient.QuadPart = Dividend.QuadPart / Divisor.QuadPart;
    if (ARGUMENT_PRESENT(Remainder)) {
        Remainder->QuadPart = Dividend.QuadPart % Divisor.QuadPart;
    }
    return Quotient;
}
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
RtlQueryRegistryValueWithFallback(
    _In_opt_ HANDLE PrimaryHandle,
    _In_opt_ HANDLE FallbackHandle,
    _In_ PUNICODE_STRING ValueName,
    _In_ ULONG ValueLength,
    _Out_opt_ PULONG ValueType,
    _Out_writes_bytes_to_(ValueLength, *ResultLength) PVOID ValueData,
 _Out_range_(<= , ValueLength) PULONG ResultLength
   );
                              ((L1)->HighPart == (L2)->HighPart))
FORCEINLINE
LUID
NTAPI_INLINE
RtlConvertLongToLuid(
    _In_ LONG Long
    )
{
    LUID TempLuid;
    LARGE_INTEGER TempLi;
    TempLi.QuadPart = Long;
    TempLuid.LowPart = TempLi.u.LowPart;
    TempLuid.HighPart = TempLi.u.HighPart;
    return(TempLuid);
}
FORCEINLINE
LUID
NTAPI_INLINE
RtlConvertUlongToLuid(
    _In_ ULONG Ulong
    )
{
    LUID TempLuid;
    TempLuid.LowPart = Ulong;
    TempLuid.HighPart = 0;
    return(TempLuid);
}
_IRQL_requires_max_(APC_LEVEL)
NTSYSAPI
VOID
NTAPI
RtlMapGenericMask(
    _Inout_ PACCESS_MASK AccessMask,
    _In_ PGENERIC_MAPPING GenericMapping
    );
_When_(NTDDI_VERSION >= NTDDI_WINXP,
    __drv_preferredFunction("IoVolumeDeviceToDosName",
    "Obsolete on WINXP and above"))
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
RtlVolumeDeviceToDosName(
    _In_ PVOID VolumeDeviceObject,
    _Out_ PUNICODE_STRING DosName
    );
NTSYSAPI
ULONG
NTAPI
DbgPrompt (
    _In_z_ PCCH Prompt,
    _Out_writes_bytes_(Length) PCH Response,
    _In_ ULONG Length
    );
NTSYSAPI
BOOLEAN
NTAPI
RtlGetProductInfo(
    _In_ ULONG OSMajorVersion,
    _In_ ULONG OSMinorVersion,
    _In_ ULONG SpMajorVersion,
    _In_ ULONG SpMinorVersion,
    _Out_ PULONG ReturnedProductType
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
RtlGetActiveConsoleId(
    VOID
    );
NTSYSAPI
ULONGLONG
NTAPI
RtlGetConsoleSessionForegroundProcessId(
    VOID
    );
NTSYSAPI
ULONG
NTAPI
RtlGetSuiteMask(
    VOID
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
_Must_inspect_result_
NTSYSAPI
BOOLEAN
NTAPI
RtlIsMultiSessionSku (
    VOID
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
_Must_inspect_result_
NTSYSAPI
BOOLEAN
NTAPI
RtlIsStateSeparationEnabled (
    VOID
    );
typedef enum _STATE_LOCATION_TYPE {
    LocationTypeRegistry = 0,
    LocationTypeFileSystem = 1,
    LocationTypeMaximum = 2
} STATE_LOCATION_TYPE;
_IRQL_requires_max_(PASSIVE_LEVEL)
_Must_inspect_result_
NTSYSAPI
NTSTATUS
NTAPI
RtlGetPersistedStateLocation (
    _In_ PCWSTR SourceID,
    _In_opt_ PCWSTR CustomValue,
    _In_opt_ PCWSTR DefaultPath,
    _In_ STATE_LOCATION_TYPE StateLocationType,
    _Out_writes_bytes_to_opt_(BufferLengthIn, *BufferLengthOut)
                                PWCHAR TargetPath,
    _In_ ULONG BufferLengthIn,
    _Out_opt_ PULONG BufferLengthOut
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
_Must_inspect_result_
NTSYSAPI
BOOLEAN
NTAPI
RtlIsMultiUsersInSessionSku (
    VOID
    );
NTSYSAPI
BOOLEAN
NTAPI
RtlGetNtProductType(
    _Out_ PNT_PRODUCT_TYPE NtProductType
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
PCWSTR
NTAPI
RtlGetNtSystemRoot (
    VOID
    );
typedef struct _NV_MEMORY_RANGE {
    VOID *BaseAddress;
    SIZE_T Length;
} NV_MEMORY_RANGE, *PNV_MEMORY_RANGE;
                                              | WRITE_NV_MEMORY_FLAG_NON_TEMPORAL)
                                              | FILL_NV_MEMORY_FLAG_NON_TEMPORAL)
_IRQL_requires_max_(APC_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
RtlGetNonVolatileToken (
    _In_reads_bytes_(Size) PVOID NvBuffer,
    _In_ SIZE_T Size,
    _Outptr_ PVOID *NvToken
    );
_IRQL_requires_max_(DPC_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
RtlFreeNonVolatileToken (
    _In_ PVOID NvToken
    );
_IRQL_requires_max_(DPC_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
RtlFlushNonVolatileMemory (
    _In_ PVOID NvToken,
    _In_reads_bytes_(Size) PVOID NvBuffer,
    _In_ SIZE_T Size,
    _In_ ULONG Flags
    );
_IRQL_requires_max_(DPC_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
RtlDrainNonVolatileFlush (
    _In_ PVOID NvToken
    );
_IRQL_requires_max_(DPC_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
RtlWriteNonVolatileMemory (
    _In_ PVOID NvToken,
    _Out_writes_bytes_(Size) VOID UNALIGNED *NvDestination,
    _In_reads_bytes_(Size) CONST VOID UNALIGNED *Source,
    _In_ SIZE_T Size,
    _In_ ULONG Flags
    );
_IRQL_requires_max_(DPC_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
RtlFillNonVolatileMemory (
    _In_ PVOID NvToken,
    _Out_writes_bytes_(Size) VOID UNALIGNED *NvDestination,
    _In_ SIZE_T Size,
    _In_ CONST UCHAR Value,
    _In_ ULONG Flags
    );
_IRQL_requires_max_(DPC_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
RtlFlushNonVolatileMemoryRanges (
    _In_ PVOID NvToken,
    _In_reads_(NumRanges) PNV_MEMORY_RANGE NvRanges,
    _In_ SIZE_T NumRanges,
    _In_ ULONG Flags
    );
typedef struct CORRELATION_VECTOR {
    CHAR Version;
    CHAR Vector[RTL_CORRELATION_VECTOR_STRING_LENGTH];
} CORRELATION_VECTOR;
typedef CORRELATION_VECTOR *PCORRELATION_VECTOR;
NTSYSAPI
NTSTATUS
NTAPI
RtlInitializeCorrelationVector(
    _Out_ PCORRELATION_VECTOR CorrelationVector,
    _In_ int Version,
    _In_opt_ const GUID * Guid
    );
NTSYSAPI
NTSTATUS
NTAPI
RtlIncrementCorrelationVector(
    _Inout_ PCORRELATION_VECTOR CorrelationVector
    );
NTSYSAPI
NTSTATUS
NTAPI
RtlExtendCorrelationVector(
    _Inout_ PCORRELATION_VECTOR CorrelationVector
    );
NTSYSAPI
NTSTATUS
NTAPI
RtlValidateCorrelationVector(
    _In_ PCORRELATION_VECTOR Vector
    );
typedef struct _CUSTOM_SYSTEM_EVENT_TRIGGER_CONFIG {
    ULONG Size;
    PCWSTR TriggerId;
} CUSTOM_SYSTEM_EVENT_TRIGGER_CONFIG, *PCUSTOM_SYSTEM_EVENT_TRIGGER_CONFIG;
FORCEINLINE
VOID
CUSTOM_SYSTEM_EVENT_TRIGGER_INIT(
    _Out_ PCUSTOM_SYSTEM_EVENT_TRIGGER_CONFIG Config,
    _In_opt_ PCWSTR TriggerId
    )
{
    RtlZeroMemory(Config, sizeof(CUSTOM_SYSTEM_EVENT_TRIGGER_CONFIG));
    Config->Size = sizeof(CUSTOM_SYSTEM_EVENT_TRIGGER_CONFIG);
    Config->TriggerId = TriggerId;
}
_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
RtlRaiseCustomSystemEventTrigger(
    _In_ PCUSTOM_SYSTEM_EVENT_TRIGGER_CONFIG TriggerConfig
    );
    ((DeviceType) << 16) | ((Access) << 14) | ((Function) << 2) | (Method) \
)
    (FILE_CHARACTERISTICS_EXPECT_ORDERLY_REMOVAL_EX | \
     FILE_CHARACTERISTICS_EXPECT_SURPRISE_REMOVAL_EX)
                                            FILE_READ_ONLY_DEVICE | \
                                            FILE_FLOPPY_DISKETTE | \
                                            FILE_WRITE_ONCE_MEDIA | \
                                            FILE_DEVICE_SECURE_OPEN | \
                                            FILE_CHARACTERISTIC_CSV | \
                                            FILE_PORTABLE_DEVICE )
typedef struct _FILE_ALIGNMENT_INFORMATION {
    ULONG AlignmentRequirement;
} FILE_ALIGNMENT_INFORMATION, *PFILE_ALIGNMENT_INFORMATION;
typedef struct _FILE_NAME_INFORMATION {
    ULONG FileNameLength;
    WCHAR FileName[1];
} FILE_NAME_INFORMATION, *PFILE_NAME_INFORMATION;
typedef struct _FILE_ATTRIBUTE_TAG_INFORMATION {
    ULONG FileAttributes;
    ULONG ReparseTag;
} FILE_ATTRIBUTE_TAG_INFORMATION, *PFILE_ATTRIBUTE_TAG_INFORMATION;
typedef struct _FILE_DISPOSITION_INFORMATION {
    BOOLEAN DeleteFile;
} FILE_DISPOSITION_INFORMATION, *PFILE_DISPOSITION_INFORMATION;
typedef struct _FILE_DISPOSITION_INFORMATION_EX {
    ULONG Flags;
} FILE_DISPOSITION_INFORMATION_EX, *PFILE_DISPOSITION_INFORMATION_EX;
typedef struct _FILE_END_OF_FILE_INFORMATION {
    LARGE_INTEGER EndOfFile;
} FILE_END_OF_FILE_INFORMATION, *PFILE_END_OF_FILE_INFORMATION;
typedef struct _FILE_VALID_DATA_LENGTH_INFORMATION {
    LARGE_INTEGER ValidDataLength;
} FILE_VALID_DATA_LENGTH_INFORMATION, *PFILE_VALID_DATA_LENGTH_INFORMATION;
typedef struct _FILE_FS_LABEL_INFORMATION {
    ULONG VolumeLabelLength;
    WCHAR VolumeLabel[1];
} FILE_FS_LABEL_INFORMATION, *PFILE_FS_LABEL_INFORMATION;
typedef struct _FILE_FS_VOLUME_INFORMATION {
    LARGE_INTEGER VolumeCreationTime;
    ULONG VolumeSerialNumber;
    ULONG VolumeLabelLength;
    BOOLEAN SupportsObjects;
    WCHAR VolumeLabel[1];
} FILE_FS_VOLUME_INFORMATION, *PFILE_FS_VOLUME_INFORMATION;
typedef struct _FILE_FS_SIZE_INFORMATION {
    LARGE_INTEGER TotalAllocationUnits;
    LARGE_INTEGER AvailableAllocationUnits;
    ULONG SectorsPerAllocationUnit;
    ULONG BytesPerSector;
} FILE_FS_SIZE_INFORMATION, *PFILE_FS_SIZE_INFORMATION;
typedef struct _FILE_FS_FULL_SIZE_INFORMATION {
    LARGE_INTEGER TotalAllocationUnits;
    LARGE_INTEGER CallerAvailableAllocationUnits;
    LARGE_INTEGER ActualAvailableAllocationUnits;
    ULONG SectorsPerAllocationUnit;
    ULONG BytesPerSector;
} FILE_FS_FULL_SIZE_INFORMATION, *PFILE_FS_FULL_SIZE_INFORMATION;
typedef struct _FILE_FS_FULL_SIZE_INFORMATION_EX {
    ULONGLONG ActualTotalAllocationUnits;
    ULONGLONG ActualAvailableAllocationUnits;
    ULONGLONG ActualPoolUnavailableAllocationUnits;
    ULONGLONG CallerTotalAllocationUnits;
    ULONGLONG CallerAvailableAllocationUnits;
    ULONGLONG CallerPoolUnavailableAllocationUnits;
    ULONGLONG UsedAllocationUnits;
    ULONGLONG TotalReservedAllocationUnits;
    ULONGLONG VolumeStorageReserveAllocationUnits;
    ULONGLONG AvailableCommittedAllocationUnits;
    ULONGLONG PoolAvailableAllocationUnits;
    ULONG SectorsPerAllocationUnit;
    ULONG BytesPerSector;
} FILE_FS_FULL_SIZE_INFORMATION_EX, *PFILE_FS_FULL_SIZE_INFORMATION_EX;
typedef struct _FILE_FS_METADATA_SIZE_INFORMATION {
    LARGE_INTEGER TotalMetadataAllocationUnits;
    ULONG SectorsPerAllocationUnit;
    ULONG BytesPerSector;
} FILE_FS_METADATA_SIZE_INFORMATION, *PFILE_FS_METADATA_SIZE_INFORMATION;
typedef struct _FILE_FS_SECTOR_SIZE_INFORMATION {
    ULONG LogicalBytesPerSector;
    ULONG PhysicalBytesPerSectorForAtomicity;
    ULONG PhysicalBytesPerSectorForPerformance;
    ULONG FileSystemEffectivePhysicalBytesPerSectorForAtomicity;
    ULONG Flags;
    ULONG ByteOffsetForSectorAlignment;
    ULONG ByteOffsetForPartitionAlignment;
} FILE_FS_SECTOR_SIZE_INFORMATION, *PFILE_FS_SECTOR_SIZE_INFORMATION;
typedef struct _FILE_FS_OBJECTID_INFORMATION {
    UCHAR ObjectId[16];
    UCHAR ExtendedInfo[48];
} FILE_FS_OBJECTID_INFORMATION, *PFILE_FS_OBJECTID_INFORMATION;
typedef enum _BUS_DATA_TYPE {
    ConfigurationSpaceUndefined = -1,
    Cmos,
    EisaConfiguration,
    Pos,
    CbusConfiguration,
    PCIConfiguration,
    VMEConfiguration,
    NuBusConfiguration,
    PCMCIAConfiguration,
    MPIConfiguration,
    MPSAConfiguration,
    PNPISAConfiguration,
    SgiInternalConfiguration,
    MaximumBusDataType
} BUS_DATA_TYPE, *PBUS_DATA_TYPE;
typedef struct _KEY_NAME_INFORMATION {
    ULONG NameLength;
    WCHAR Name[1];
} KEY_NAME_INFORMATION, *PKEY_NAME_INFORMATION;
typedef struct _KEY_CACHED_INFORMATION {
    LARGE_INTEGER LastWriteTime;
    ULONG TitleIndex;
    ULONG SubKeys;
    ULONG MaxNameLen;
    ULONG Values;
    ULONG MaxValueNameLen;
    ULONG MaxValueDataLen;
    ULONG NameLength;
} KEY_CACHED_INFORMATION, *PKEY_CACHED_INFORMATION;
typedef struct _KEY_VIRTUALIZATION_INFORMATION {
    ULONG VirtualizationCandidate : 1;
    ULONG VirtualizationEnabled : 1;
    ULONG VirtualTarget : 1;
    ULONG VirtualStore : 1;
    ULONG VirtualSource : 1;
    ULONG Reserved : 27;
} KEY_VIRTUALIZATION_INFORMATION, *PKEY_VIRTUALIZATION_INFORMATION;
typedef struct _KEY_LAYER_INFORMATION {
    ULONG IsTombstone : 1;
    ULONG IsSupersedeLocal : 1;
    ULONG IsSupersedeTree : 1;
    ULONG ClassIsInherited : 1;
    ULONG Reserved : 28;
} KEY_LAYER_INFORMATION, *PKEY_LAYER_INFORMATION;
typedef struct _EXCEPTION_REGISTRATION_RECORD {
    struct _EXCEPTION_REGISTRATION_RECORD *Next;
    PEXCEPTION_ROUTINE Handler;
} EXCEPTION_REGISTRATION_RECORD;
typedef EXCEPTION_REGISTRATION_RECORD *PEXCEPTION_REGISTRATION_RECORD;
typedef struct _NT_TIB {
    struct _EXCEPTION_REGISTRATION_RECORD *ExceptionList;
    PVOID StackBase;
    PVOID StackLimit;
    PVOID SubSystemTib;
    PVOID FiberData;
    PVOID ArbitraryUserPointer;
    struct _NT_TIB *Self;
} NT_TIB;
typedef NT_TIB *PNT_TIB;
typedef struct _NT_TIB32 {
    ULONG ExceptionList;
    ULONG StackBase;
    ULONG StackLimit;
    ULONG SubSystemTib;
    ULONG FiberData;
    ULONG ArbitraryUserPointer;
    ULONG Self;
} NT_TIB32, *PNT_TIB32;
typedef struct _NT_TIB64 {
    ULONG64 ExceptionList;
    ULONG64 StackBase;
    ULONG64 StackLimit;
    ULONG64 SubSystemTib;
    ULONG64 FiberData;
    ULONG64 ArbitraryUserPointer;
    ULONG64 Self;
} NT_TIB64, *PNT_TIB64;
typedef enum _PROCESSINFOCLASS {
    ProcessBasicInformation = 0,
    ProcessQuotaLimits = 1,
    ProcessIoCounters = 2,
    ProcessVmCounters = 3,
    ProcessTimes = 4,
    ProcessBasePriority = 5,
    ProcessRaisePriority = 6,
    ProcessDebugPort = 7,
    ProcessExceptionPort = 8,
    ProcessAccessToken = 9,
    ProcessLdtInformation = 10,
    ProcessLdtSize = 11,
    ProcessDefaultHardErrorMode = 12,
    ProcessIoPortHandlers = 13,
    ProcessPooledUsageAndLimits = 14,
    ProcessWorkingSetWatch = 15,
    ProcessUserModeIOPL = 16,
    ProcessEnableAlignmentFaultFixup = 17,
    ProcessPriorityClass = 18,
    ProcessWx86Information = 19,
    ProcessHandleCount = 20,
    ProcessAffinityMask = 21,
    ProcessPriorityBoost = 22,
    ProcessDeviceMap = 23,
    ProcessSessionInformation = 24,
    ProcessForegroundInformation = 25,
    ProcessWow64Information = 26,
    ProcessImageFileName = 27,
    ProcessLUIDDeviceMapsEnabled = 28,
    ProcessBreakOnTermination = 29,
    ProcessDebugObjectHandle = 30,
    ProcessDebugFlags = 31,
    ProcessHandleTracing = 32,
    ProcessIoPriority = 33,
    ProcessExecuteFlags = 34,
    ProcessTlsInformation = 35,
    ProcessCookie = 36,
    ProcessImageInformation = 37,
    ProcessCycleTime = 38,
    ProcessPagePriority = 39,
    ProcessInstrumentationCallback = 40,
    ProcessThreadStackAllocation = 41,
    ProcessWorkingSetWatchEx = 42,
    ProcessImageFileNameWin32 = 43,
    ProcessImageFileMapping = 44,
    ProcessAffinityUpdateMode = 45,
    ProcessMemoryAllocationMode = 46,
    ProcessGroupInformation = 47,
    ProcessTokenVirtualizationEnabled = 48,
    ProcessOwnerInformation = 49,
    ProcessWindowInformation = 50,
    ProcessHandleInformation = 51,
    ProcessMitigationPolicy = 52,
    ProcessDynamicFunctionTableInformation = 53,
    ProcessHandleCheckingMode = 54,
    ProcessKeepAliveCount = 55,
    ProcessRevokeFileHandles = 56,
    ProcessWorkingSetControl = 57,
    ProcessHandleTable = 58,
    ProcessCheckStackExtentsMode = 59,
    ProcessCommandLineInformation = 60,
    ProcessProtectionInformation = 61,
    ProcessMemoryExhaustion = 62,
    ProcessFaultInformation = 63,
    ProcessTelemetryIdInformation = 64,
    ProcessCommitReleaseInformation = 65,
    ProcessReserved1Information = 66,
    ProcessReserved2Information = 67,
    ProcessSubsystemProcess = 68,
    ProcessInPrivate = 70,
    ProcessRaiseUMExceptionOnInvalidHandleClose = 71,
    ProcessSubsystemInformation = 75,
    ProcessWin32kSyscallFilterInformation = 79,
    ProcessEnergyTrackingState = 82,
    MaxProcessInfoClass
} PROCESSINFOCLASS;
typedef enum _THREADINFOCLASS {
    ThreadBasicInformation = 0,
    ThreadTimes = 1,
    ThreadPriority = 2,
    ThreadBasePriority = 3,
    ThreadAffinityMask = 4,
    ThreadImpersonationToken = 5,
    ThreadDescriptorTableEntry = 6,
    ThreadEnableAlignmentFaultFixup = 7,
    ThreadEventPair_Reusable = 8,
    ThreadQuerySetWin32StartAddress = 9,
    ThreadZeroTlsCell = 10,
    ThreadPerformanceCount = 11,
    ThreadAmILastThread = 12,
    ThreadIdealProcessor = 13,
    ThreadPriorityBoost = 14,
    ThreadSetTlsArrayAddress = 15,
    ThreadIsIoPending = 16,
    ThreadHideFromDebugger = 17,
    ThreadBreakOnTermination = 18,
    ThreadSwitchLegacyState = 19,
    ThreadIsTerminated = 20,
    ThreadLastSystemCall = 21,
    ThreadIoPriority = 22,
    ThreadCycleTime = 23,
    ThreadPagePriority = 24,
    ThreadActualBasePriority = 25,
    ThreadTebInformation = 26,
    ThreadCSwitchMon = 27,
    ThreadCSwitchPmu = 28,
    ThreadWow64Context = 29,
    ThreadGroupInformation = 30,
    ThreadUmsInformation = 31,
    ThreadCounterProfiling = 32,
    ThreadIdealProcessorEx = 33,
    ThreadCpuAccountingInformation = 34,
    ThreadSuspendCount = 35,
    ThreadActualGroupAffinity = 41,
    ThreadDynamicCodePolicyInfo = 42,
    ThreadSubsystemInformation = 45,
    MaxThreadInfoClass = 51,
} THREADINFOCLASS;
typedef struct _PAGE_PRIORITY_INFORMATION {
    ULONG PagePriority;
} PAGE_PRIORITY_INFORMATION, *PPAGE_PRIORITY_INFORMATION;
typedef struct _PROCESS_WS_WATCH_INFORMATION {
    PVOID FaultingPc;
    PVOID FaultingVa;
} PROCESS_WS_WATCH_INFORMATION, *PPROCESS_WS_WATCH_INFORMATION;
typedef struct _PROCESS_BASIC_INFORMATION {
    NTSTATUS ExitStatus;
    PPEB PebBaseAddress;
    ULONG_PTR AffinityMask;
    KPRIORITY BasePriority;
    ULONG_PTR UniqueProcessId;
    ULONG_PTR InheritedFromUniqueProcessId;
} PROCESS_BASIC_INFORMATION,*PPROCESS_BASIC_INFORMATION;
typedef struct _PROCESS_EXTENDED_BASIC_INFORMATION {
    SIZE_T Size;
    PROCESS_BASIC_INFORMATION BasicInfo;
    union {
        ULONG Flags;
        struct {
            ULONG IsProtectedProcess : 1;
            ULONG IsWow64Process : 1;
            ULONG IsProcessDeleting : 1;
            ULONG IsCrossSessionCreate : 1;
            ULONG IsFrozen : 1;
            ULONG IsBackground : 1;
            ULONG IsStronglyNamed : 1;
            ULONG IsSecureProcess : 1;
            ULONG IsSubsystemProcess : 1;
            ULONG SpareBits : 23;
        } DUMMYSTRUCTNAME;
    } DUMMYUNIONNAME;
} PROCESS_EXTENDED_BASIC_INFORMATION, *PPROCESS_EXTENDED_BASIC_INFORMATION;
typedef struct _PROCESS_DEVICEMAP_INFORMATION {
    union {
        struct {
            HANDLE DirectoryHandle;
        } Set;
        struct {
            ULONG DriveMap;
            UCHAR DriveType[ 32 ];
        } Query;
    } DUMMYUNIONNAME;
} PROCESS_DEVICEMAP_INFORMATION, *PPROCESS_DEVICEMAP_INFORMATION;
typedef struct _PROCESS_DEVICEMAP_INFORMATION_EX {
    union {
        struct {
            HANDLE DirectoryHandle;
        } Set;
        struct {
            ULONG DriveMap;
            UCHAR DriveType[ 32 ];
        } Query;
    } DUMMYUNIONNAME;
    ULONG Flags;
} PROCESS_DEVICEMAP_INFORMATION_EX, *PPROCESS_DEVICEMAP_INFORMATION_EX;
typedef struct _PROCESS_SESSION_INFORMATION {
    ULONG SessionId;
} PROCESS_SESSION_INFORMATION, *PPROCESS_SESSION_INFORMATION;
typedef struct _PROCESS_HANDLE_TRACING_ENABLE {
    ULONG Flags;
} PROCESS_HANDLE_TRACING_ENABLE, *PPROCESS_HANDLE_TRACING_ENABLE;
typedef struct _PROCESS_HANDLE_TRACING_ENABLE_EX {
    ULONG Flags;
    ULONG TotalSlots;
} PROCESS_HANDLE_TRACING_ENABLE_EX, *PPROCESS_HANDLE_TRACING_ENABLE_EX;
typedef struct _PROCESS_HANDLE_TRACING_ENTRY {
    HANDLE Handle;
    CLIENT_ID ClientId;
    ULONG Type;
    PVOID Stacks[PROCESS_HANDLE_TRACING_MAX_STACKS];
} PROCESS_HANDLE_TRACING_ENTRY, *PPROCESS_HANDLE_TRACING_ENTRY;
typedef struct _PROCESS_HANDLE_TRACING_QUERY {
    HANDLE Handle;
    ULONG TotalTraces;
    PROCESS_HANDLE_TRACING_ENTRY HandleTrace[1];
} PROCESS_HANDLE_TRACING_QUERY, *PPROCESS_HANDLE_TRACING_QUERY;
typedef struct _QUOTA_LIMITS {
    SIZE_T PagedPoolLimit;
    SIZE_T NonPagedPoolLimit;
    SIZE_T MinimumWorkingSetSize;
    SIZE_T MaximumWorkingSetSize;
    SIZE_T PagefileLimit;
    LARGE_INTEGER TimeLimit;
} QUOTA_LIMITS, *PQUOTA_LIMITS;
typedef union _RATE_QUOTA_LIMIT {
    ULONG RateData;
    struct {
        ULONG RatePercent : 7;
        ULONG Reserved0 : 25;
    } DUMMYSTRUCTNAME;
} RATE_QUOTA_LIMIT, *PRATE_QUOTA_LIMIT;
typedef struct _QUOTA_LIMITS_EX {
    SIZE_T PagedPoolLimit;
    SIZE_T NonPagedPoolLimit;
    SIZE_T MinimumWorkingSetSize;
    SIZE_T MaximumWorkingSetSize;
    SIZE_T PagefileLimit;
    LARGE_INTEGER TimeLimit;
    SIZE_T WorkingSetLimit;
    SIZE_T Reserved2;
    SIZE_T Reserved3;
    SIZE_T Reserved4;
    ULONG Flags;
    RATE_QUOTA_LIMIT CpuRateLimit;
} QUOTA_LIMITS_EX, *PQUOTA_LIMITS_EX;
typedef struct _IO_COUNTERS {
    ULONGLONG ReadOperationCount;
    ULONGLONG WriteOperationCount;
    ULONGLONG OtherOperationCount;
    ULONGLONG ReadTransferCount;
    ULONGLONG WriteTransferCount;
    ULONGLONG OtherTransferCount;
} IO_COUNTERS;
typedef IO_COUNTERS *PIO_COUNTERS;
typedef struct _VM_COUNTERS {
    SIZE_T PeakVirtualSize;
    SIZE_T VirtualSize;
    ULONG PageFaultCount;
    SIZE_T PeakWorkingSetSize;
    SIZE_T WorkingSetSize;
    SIZE_T QuotaPeakPagedPoolUsage;
    SIZE_T QuotaPagedPoolUsage;
    SIZE_T QuotaPeakNonPagedPoolUsage;
    SIZE_T QuotaNonPagedPoolUsage;
    SIZE_T PagefileUsage;
    SIZE_T PeakPagefileUsage;
} VM_COUNTERS;
typedef VM_COUNTERS *PVM_COUNTERS;
typedef struct _VM_COUNTERS_EX {
    SIZE_T PeakVirtualSize;
    SIZE_T VirtualSize;
    ULONG PageFaultCount;
    SIZE_T PeakWorkingSetSize;
    SIZE_T WorkingSetSize;
    SIZE_T QuotaPeakPagedPoolUsage;
    SIZE_T QuotaPagedPoolUsage;
    SIZE_T QuotaPeakNonPagedPoolUsage;
    SIZE_T QuotaNonPagedPoolUsage;
    SIZE_T PagefileUsage;
    SIZE_T PeakPagefileUsage;
    SIZE_T PrivateUsage;
} VM_COUNTERS_EX;
typedef VM_COUNTERS_EX *PVM_COUNTERS_EX;
typedef struct _VM_COUNTERS_EX2 {
    VM_COUNTERS_EX CountersEx;
    SIZE_T PrivateWorkingSetSize;
    ULONGLONG SharedCommitUsage;
} VM_COUNTERS_EX2, *PVM_COUNTERS_EX2;
typedef enum _HARDWARE_COUNTER_TYPE {
    PMCCounter,
    MaxHardwareCounterType
} HARDWARE_COUNTER_TYPE, *PHARDWARE_COUNTER_TYPE;
typedef struct _HARDWARE_COUNTER {
    HARDWARE_COUNTER_TYPE Type;
    ULONG Reserved;
    ULONG64 Index;
} HARDWARE_COUNTER, *PHARDWARE_COUNTER;
typedef enum _PROCESS_MITIGATION_POLICY {
    ProcessDEPPolicy,
    ProcessASLRPolicy,
    ProcessDynamicCodePolicy,
    ProcessStrictHandleCheckPolicy,
    ProcessSystemCallDisablePolicy,
    ProcessMitigationOptionsMask,
    ProcessExtensionPointDisablePolicy,
    ProcessControlFlowGuardPolicy,
    ProcessSignaturePolicy,
    ProcessFontDisablePolicy,
    ProcessImageLoadPolicy,
    ProcessSystemCallFilterPolicy,
    ProcessPayloadRestrictionPolicy,
    ProcessChildProcessPolicy,
    ProcessSideChannelIsolationPolicy,
    MaxProcessMitigationPolicy
} PROCESS_MITIGATION_POLICY, *PPROCESS_MITIGATION_POLICY;
typedef struct _PROCESS_MITIGATION_ASLR_POLICY {
    union {
        ULONG Flags;
        struct {
            ULONG EnableBottomUpRandomization : 1;
            ULONG EnableForceRelocateImages : 1;
            ULONG EnableHighEntropy : 1;
            ULONG DisallowStrippedImages : 1;
            ULONG ReservedFlags : 28;
        } DUMMYSTRUCTNAME;
    } DUMMYUNIONNAME;
} PROCESS_MITIGATION_ASLR_POLICY, *PPROCESS_MITIGATION_ASLR_POLICY;
typedef struct _PROCESS_MITIGATION_DEP_POLICY {
    union {
        ULONG Flags;
        struct {
            ULONG Enable : 1;
            ULONG DisableAtlThunkEmulation : 1;
            ULONG ReservedFlags : 30;
        } DUMMYSTRUCTNAME;
    } DUMMYUNIONNAME;
    BOOLEAN Permanent;
} PROCESS_MITIGATION_DEP_POLICY, *PPROCESS_MITIGATION_DEP_POLICY;
typedef struct _PROCESS_MITIGATION_STRICT_HANDLE_CHECK_POLICY {
    union {
        ULONG Flags;
        struct {
            ULONG RaiseExceptionOnInvalidHandleReference : 1;
            ULONG HandleExceptionsPermanentlyEnabled : 1;
            ULONG ReservedFlags : 30;
        } DUMMYSTRUCTNAME;
    } DUMMYUNIONNAME;
} PROCESS_MITIGATION_STRICT_HANDLE_CHECK_POLICY, *PPROCESS_MITIGATION_STRICT_HANDLE_CHECK_POLICY;
typedef struct _PROCESS_MITIGATION_SYSTEM_CALL_DISABLE_POLICY {
    union {
        ULONG Flags;
        struct {
            ULONG DisallowWin32kSystemCalls : 1;
            ULONG AuditDisallowWin32kSystemCalls : 1;
            ULONG ReservedFlags : 30;
        } DUMMYSTRUCTNAME;
    } DUMMYUNIONNAME;
} PROCESS_MITIGATION_SYSTEM_CALL_DISABLE_POLICY, *PPROCESS_MITIGATION_SYSTEM_CALL_DISABLE_POLICY;
typedef struct _PROCESS_MITIGATION_EXTENSION_POINT_DISABLE_POLICY {
    union {
        ULONG Flags;
        struct {
            ULONG DisableExtensionPoints : 1;
            ULONG ReservedFlags : 31;
        } DUMMYSTRUCTNAME;
    } DUMMYUNIONNAME;
} PROCESS_MITIGATION_EXTENSION_POINT_DISABLE_POLICY, *PPROCESS_MITIGATION_EXTENSION_POINT_DISABLE_POLICY;
typedef struct _PROCESS_MITIGATION_DYNAMIC_CODE_POLICY {
    union {
        ULONG Flags;
        struct {
            ULONG ProhibitDynamicCode : 1;
            ULONG AllowThreadOptOut : 1;
            ULONG AllowRemoteDowngrade : 1;
            ULONG AuditProhibitDynamicCode : 1;
            ULONG ReservedFlags : 28;
        } DUMMYSTRUCTNAME;
    } DUMMYUNIONNAME;
} PROCESS_MITIGATION_DYNAMIC_CODE_POLICY, *PPROCESS_MITIGATION_DYNAMIC_CODE_POLICY;
typedef struct _PROCESS_MITIGATION_CONTROL_FLOW_GUARD_POLICY {
    union {
        ULONG Flags;
        struct {
            ULONG EnableControlFlowGuard : 1;
            ULONG EnableExportSuppression : 1;
            ULONG StrictMode : 1;
            ULONG ReservedFlags : 29;
        } DUMMYSTRUCTNAME;
    } DUMMYUNIONNAME;
} PROCESS_MITIGATION_CONTROL_FLOW_GUARD_POLICY, *PPROCESS_MITIGATION_CONTROL_FLOW_GUARD_POLICY;
typedef struct _PROCESS_MITIGATION_BINARY_SIGNATURE_POLICY {
    union {
        ULONG Flags;
        struct {
            ULONG MicrosoftSignedOnly : 1;
            ULONG StoreSignedOnly : 1;
            ULONG MitigationOptIn : 1;
            ULONG AuditMicrosoftSignedOnly : 1;
            ULONG AuditStoreSignedOnly : 1;
            ULONG ReservedFlags : 27;
        } DUMMYSTRUCTNAME;
    } DUMMYUNIONNAME;
} PROCESS_MITIGATION_BINARY_SIGNATURE_POLICY, *PPROCESS_MITIGATION_BINARY_SIGNATURE_POLICY;
typedef struct _PROCESS_MITIGATION_FONT_DISABLE_POLICY {
    union {
        ULONG Flags;
        struct {
            ULONG DisableNonSystemFonts : 1;
            ULONG AuditNonSystemFontLoading : 1;
            ULONG ReservedFlags : 30;
        } DUMMYSTRUCTNAME;
    } DUMMYUNIONNAME;
} PROCESS_MITIGATION_FONT_DISABLE_POLICY, *PPROCESS_MITIGATION_FONT_DISABLE_POLICY;
typedef struct _PROCESS_MITIGATION_IMAGE_LOAD_POLICY {
    union {
        ULONG Flags;
        struct {
            ULONG NoRemoteImages : 1;
            ULONG NoLowMandatoryLabelImages : 1;
            ULONG PreferSystem32Images : 1;
            ULONG AuditNoRemoteImages : 1;
            ULONG AuditNoLowMandatoryLabelImages : 1;
            ULONG ReservedFlags : 27;
        } DUMMYSTRUCTNAME;
    } DUMMYUNIONNAME;
} PROCESS_MITIGATION_IMAGE_LOAD_POLICY, *PPROCESS_MITIGATION_IMAGE_LOAD_POLICY;
typedef struct _PROCESS_MITIGATION_SYSTEM_CALL_FILTER_POLICY {
    union {
        ULONG Flags;
        struct {
            ULONG FilterId: 4;
            ULONG ReservedFlags : 28;
        } DUMMYSTRUCTNAME;
    } DUMMYUNIONNAME;
} PROCESS_MITIGATION_SYSTEM_CALL_FILTER_POLICY, *PPROCESS_MITIGATION_SYSTEM_CALL_FILTER_POLICY;
typedef struct _PROCESS_MITIGATION_PAYLOAD_RESTRICTION_POLICY {
    union {
        ULONG Flags;
        struct {
            ULONG EnableExportAddressFilter : 1;
            ULONG AuditExportAddressFilter : 1;
            ULONG EnableExportAddressFilterPlus : 1;
            ULONG AuditExportAddressFilterPlus : 1;
            ULONG EnableImportAddressFilter : 1;
            ULONG AuditImportAddressFilter : 1;
            ULONG EnableRopStackPivot : 1;
            ULONG AuditRopStackPivot : 1;
            ULONG EnableRopCallerCheck : 1;
            ULONG AuditRopCallerCheck : 1;
            ULONG EnableRopSimExec : 1;
            ULONG AuditRopSimExec : 1;
            ULONG ReservedFlags : 20;
        } DUMMYSTRUCTNAME;
    } DUMMYUNIONNAME;
} PROCESS_MITIGATION_PAYLOAD_RESTRICTION_POLICY, *PPROCESS_MITIGATION_PAYLOAD_RESTRICTION_POLICY;
typedef struct _PROCESS_MITIGATION_CHILD_PROCESS_POLICY {
    union {
        ULONG Flags;
        struct {
            ULONG NoChildProcessCreation : 1;
            ULONG AuditNoChildProcessCreation : 1;
            ULONG AllowSecureProcessCreation : 1;
            ULONG ReservedFlags : 29;
        } DUMMYSTRUCTNAME;
    } DUMMYUNIONNAME;
} PROCESS_MITIGATION_CHILD_PROCESS_POLICY, *PPROCESS_MITIGATION_CHILD_PROCESS_POLICY;
typedef struct _PROCESS_MITIGATION_SIDE_CHANNEL_ISOLATION_POLICY {
    union {
        ULONG Flags;
        struct {
            ULONG SmtBranchTargetIsolation : 1;
            ULONG IsolateSecurityDomain : 1;
            ULONG DisablePageCombine : 1;
            ULONG SpeculativeStoreBypassDisable : 1;
            ULONG ReservedFlags : 28;
        } DUMMYSTRUCTNAME;
    } DUMMYUNIONNAME;
} PROCESS_MITIGATION_SIDE_CHANNEL_ISOLATION_POLICY, *PPROCESS_MITIGATION_SIDE_CHANNEL_ISOLATION_POLICY;
typedef struct _PROCESS_KEEPALIVE_COUNT_INFORMATION {
    ULONG WakeCount;
    ULONG NoWakeCount;
} PROCESS_KEEPALIVE_COUNT_INFORMATION, *PPROCESS_KEEPALIVE_COUNT_INFORMATION;
typedef struct _PROCESS_REVOKE_FILE_HANDLES_INFORMATION {
    UNICODE_STRING TargetDevicePath;
} PROCESS_REVOKE_FILE_HANDLES_INFORMATION, *PPROCESS_REVOKE_FILE_HANDLES_INFORMATION;
typedef struct _POOLED_USAGE_AND_LIMITS {
    SIZE_T PeakPagedPoolUsage;
    SIZE_T PagedPoolUsage;
    SIZE_T PagedPoolLimit;
    SIZE_T PeakNonPagedPoolUsage;
    SIZE_T NonPagedPoolUsage;
    SIZE_T NonPagedPoolLimit;
    SIZE_T PeakPagefileUsage;
    SIZE_T PagefileUsage;
    SIZE_T PagefileLimit;
} POOLED_USAGE_AND_LIMITS;
typedef POOLED_USAGE_AND_LIMITS *PPOOLED_USAGE_AND_LIMITS;
typedef struct _PROCESS_ACCESS_TOKEN {
    HANDLE Token;
    HANDLE Thread;
} PROCESS_ACCESS_TOKEN, *PPROCESS_ACCESS_TOKEN;
typedef struct _PROCESS_EXCEPTION_PORT {
    _In_ HANDLE ExceptionPortHandle;
    _Inout_ ULONG StateFlags;
} PROCESS_EXCEPTION_PORT, *PPROCESS_EXCEPTION_PORT;
typedef struct _KERNEL_USER_TIMES {
    LARGE_INTEGER CreateTime;
    LARGE_INTEGER ExitTime;
    LARGE_INTEGER KernelTime;
    LARGE_INTEGER UserTime;
} KERNEL_USER_TIMES;
typedef KERNEL_USER_TIMES *PKERNEL_USER_TIMES;
typedef enum _SUBSYSTEM_INFORMATION_TYPE {
    SubsystemInformationTypeWin32 = 0,
    SubsystemInformationTypeWSL = 1,
    MaxSubsystemInformationType
} SUBSYSTEM_INFORMATION_TYPE, *PSUBSYSTEM_INFORMATION_TYPE;
                                               POWER_THROTTLING_PROCESS_DELAYTIMERS))
typedef struct _POWER_THROTTLING_PROCESS_STATE {
    ULONG Version;
    ULONG ControlMask;
    ULONG StateMask;
} POWER_THROTTLING_PROCESS_STATE, *PPOWER_THROTTLING_PROCESS_STATE;
typedef struct _POWER_THROTTLING_THREAD_STATE {
    ULONG Version;
    ULONG ControlMask;
    ULONG StateMask;
} POWER_THROTTLING_THREAD_STATE, *PPOWER_THROTTLING_THREAD_STATE;
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtOpenProcess (
    _Out_ PHANDLE ProcessHandle,
    _In_ ACCESS_MASK DesiredAccess,
    _In_ POBJECT_ATTRIBUTES ObjectAttributes,
    _In_opt_ PCLIENT_ID ClientId
    );
typedef struct _KPCR {
    union {
        NT_TIB NtTib;
        struct {
            union _KGDTENTRY64 *GdtBase;
            struct _KTSS64 *TssBase;
            ULONG64 UserRsp;
            struct _KPCR *Self;
            struct _KPRCB *CurrentPrcb;
            PKSPIN_LOCK_QUEUE LockArray;
            PVOID Used_Self;
        };
    };
    union _KIDTENTRY64 *IdtBase;
    ULONG64 Unused[2];
    KIRQL Irql;
    UCHAR SecondLevelCacheAssociativity;
    UCHAR ObsoleteNumber;
    UCHAR Fill0;
    ULONG Unused0[3];
    USHORT MajorVersion;
    USHORT MinorVersion;
    ULONG StallScaleFactor;
    PVOID Unused1[3];
    ULONG KernelReserved[15];
    ULONG SecondLevelCacheSize;
    ULONG HalReserved[16];
    ULONG Unused2;
    PVOID KdVersionBlock;
    PVOID Unused3;
    ULONG PcrAlign1[24];
} KPCR, *PKPCR;
typedef struct _KEXCEPTION_FRAME {
    ULONG64 P1Home;
    ULONG64 P2Home;
    ULONG64 P3Home;
    ULONG64 P4Home;
    ULONG64 P5;
    ULONG64 Spare1;
    M128A Xmm6;
    M128A Xmm7;
    M128A Xmm8;
    M128A Xmm9;
    M128A Xmm10;
    M128A Xmm11;
    M128A Xmm12;
    M128A Xmm13;
    M128A Xmm14;
    M128A Xmm15;
    ULONG64 TrapFrame;
    ULONG64 OutputBuffer;
    ULONG64 OutputLength;
    ULONG64 Spare2;
    ULONG64 MxCsr;
    ULONG64 Rbp;
    ULONG64 Rbx;
    ULONG64 Rdi;
    ULONG64 Rsi;
    ULONG64 R12;
    ULONG64 R13;
    ULONG64 R14;
    ULONG64 R15;
    ULONG64 Return;
} KEXCEPTION_FRAME, *PKEXCEPTION_FRAME;
typedef struct _KTRAP_FRAME {
    ULONG64 P1Home;
    ULONG64 P2Home;
    ULONG64 P3Home;
    ULONG64 P4Home;
    ULONG64 P5;
        KPROCESSOR_MODE PreviousMode;
    KIRQL PreviousIrql;
        UCHAR FaultIndicator;
    UCHAR ExceptionActive;
    ULONG MxCsr;
    ULONG64 Rax;
    ULONG64 Rcx;
    ULONG64 Rdx;
    ULONG64 R8;
    ULONG64 R9;
    ULONG64 R10;
    ULONG64 R11;
    union {
        ULONG64 GsBase;
        ULONG64 GsSwap;
    };
    M128A Xmm0;
    M128A Xmm1;
    M128A Xmm2;
    M128A Xmm3;
    M128A Xmm4;
    M128A Xmm5;
    union {
        ULONG64 FaultAddress;
        ULONG64 ContextRecord;
    };
    ULONG64 Dr0;
    ULONG64 Dr1;
    ULONG64 Dr2;
    ULONG64 Dr3;
    ULONG64 Dr6;
    ULONG64 Dr7;
    struct {
        ULONG64 DebugControl;
        ULONG64 LastBranchToRip;
        ULONG64 LastBranchFromRip;
        ULONG64 LastExceptionToRip;
        ULONG64 LastExceptionFromRip;
    };
    USHORT SegDs;
    USHORT SegEs;
    USHORT SegFs;
    USHORT SegGs;
    ULONG64 TrapFrame;
    ULONG64 Rbx;
    ULONG64 Rdi;
    ULONG64 Rsi;
    ULONG64 Rbp;
    union {
        ULONG64 ErrorCode;
        ULONG64 ExceptionFrame;
    };
    ULONG64 Rip;
    USHORT SegCs;
    UCHAR Fill0;
    UCHAR Logging;
    USHORT Fill1[2];
    ULONG EFlags;
    ULONG Fill2;
    ULONG64 Rsp;
    USHORT SegSs;
    USHORT Fill3;
    ULONG Fill4;
} KTRAP_FRAME, *PKTRAP_FRAME;
typedef struct _KUMS_CONTEXT_HEADER {
    ULONG64 P1Home;
    ULONG64 P2Home;
    ULONG64 P3Home;
    ULONG64 P4Home;
    PVOID StackTop;
    ULONG64 StackSize;
    ULONG64 RspOffset;
    ULONG64 Rip;
    PXMM_SAVE_AREA32 FltSave;
    union {
        struct {
            ULONG64 Volatile : 1;
            ULONG64 Reserved : 63;
        };
        ULONG64 Flags;
    };
    PKTRAP_FRAME TrapFrame;
    PKEXCEPTION_FRAME ExceptionFrame;
    struct _KTHREAD *SourceThread;
    ULONG64 Return;
} KUMS_CONTEXT_HEADER, *PKUMS_CONTEXT_HEADER;
extern NTKERNELAPI ULONG KeLastBranchMSR;
extern const NTKERNELAPI PVOID MmHighestUserAddress;
extern const NTKERNELAPI PVOID MmSystemRangeStart;
extern const NTKERNELAPI ULONG64 MmUserProbeAddress;
_IRQL_requires_max_(DISPATCH_LEVEL)
_IRQL_saves_
_IRQL_raises_(DISPATCH_LEVEL)
__forceinline
KIRQL
KeRaiseIrqlToDpcLevel (
    VOID
    )
{
    return KfRaiseIrql(DISPATCH_LEVEL);
}
_IRQL_saves_
_IRQL_raises_(12)
__forceinline
KIRQL
KeRaiseIrqlToSynchLevel (
    VOID
    )
{
    return KfRaiseIrql(12);
}
typedef enum _SYSTEM_FIRMWARE_TABLE_ACTION {
    SystemFirmwareTable_Enumerate,
    SystemFirmwareTable_Get
} SYSTEM_FIRMWARE_TABLE_ACTION;
typedef struct _SYSTEM_FIRMWARE_TABLE_INFORMATION {
    ULONG ProviderSignature;
    SYSTEM_FIRMWARE_TABLE_ACTION Action;
    ULONG TableID;
    ULONG TableBufferLength;
    UCHAR TableBuffer[ANYSIZE_ARRAY];
} SYSTEM_FIRMWARE_TABLE_INFORMATION, *PSYSTEM_FIRMWARE_TABLE_INFORMATION;
typedef
NTSTATUS
(__cdecl *PFNFTH) (
    _Inout_ PSYSTEM_FIRMWARE_TABLE_INFORMATION SystemFirmwareTableInfo
    );
typedef struct _SYSTEM_FIRMWARE_TABLE_HANDLER {
    ULONG ProviderSignature;
    BOOLEAN Register;
    PFNFTH FirmwareTableHandler;
    PVOID DriverObject;
} SYSTEM_FIRMWARE_TABLE_HANDLER, *PSYSTEM_FIRMWARE_TABLE_HANDLER;
typedef
VOID
(*PTIMER_APC_ROUTINE) (
    _In_ PVOID TimerContext,
    _In_ ULONG TimerLowValue,
    _In_ LONG TimerHighValue
    );
typedef enum _TIMER_SET_INFORMATION_CLASS {
    TimerSetCoalescableTimer,
    MaxTimerInfoClass
} TIMER_SET_INFORMATION_CLASS;
typedef struct _TIMER_SET_COALESCABLE_TIMER_INFO {
    _In_ LARGE_INTEGER DueTime;
    _In_opt_ PTIMER_APC_ROUTINE TimerApcRoutine;
    _In_opt_ PVOID TimerContext;
    _In_opt_ struct _COUNTED_REASON_CONTEXT *WakeContext;
    _In_opt_ ULONG Period;
    _In_ ULONG TolerableDelay;
    _Out_opt_ PBOOLEAN PreviousState;
} TIMER_SET_COALESCABLE_TIMER_INFO, *PTIMER_SET_COALESCABLE_TIMER_INFO;
typedef
ULONG_PTR
(*PDRIVER_VERIFIER_THUNK_ROUTINE) (
    _In_ PVOID Context
    );
typedef struct _DRIVER_VERIFIER_THUNK_PAIRS {
    PDRIVER_VERIFIER_THUNK_ROUTINE PristineRoutine;
    PDRIVER_VERIFIER_THUNK_ROUTINE NewRoutine;
} DRIVER_VERIFIER_THUNK_PAIRS, *PDRIVER_VERIFIER_THUNK_PAIRS;
                                             XSTATE_MASK_LEGACY_SSE)
                                             (1ui64 << (XSTATE_MPX_BNDCSR)))
                                             (1ui64 << (XSTATE_AVX512_ZMM_H)) | \
                                             (1ui64 << (XSTATE_AVX512_ZMM)))
                                             XSTATE_MASK_AVX | \
                                             XSTATE_MASK_MPX | \
                                             XSTATE_MASK_AVX512 | \
                                             XSTATE_MASK_IPT | \
                                             XSTATE_MASK_CET_U | \
                                             XSTATE_MASK_LWP)
                                             XSTATE_MASK_LWP)
                                             XSTATE_CONTROLFLAG_XSAVEC_MASK)
typedef struct _XSTATE_FEATURE {
    ULONG Offset;
    ULONG Size;
} XSTATE_FEATURE, *PXSTATE_FEATURE;
typedef struct _XSTATE_CONFIGURATION {
    ULONG64 EnabledFeatures;
    ULONG64 EnabledVolatileFeatures;
    ULONG Size;
    union {
        ULONG ControlFlags;
        struct
        {
            ULONG OptimizedSave : 1;
            ULONG CompactionEnabled : 1;
        };
    };
    XSTATE_FEATURE Features[MAXIMUM_XSTATE_FEATURES];
    ULONG64 EnabledSupervisorFeatures;
    ULONG64 AlignedFeatures;
    ULONG AllFeatureSize;
    ULONG AllFeatures[MAXIMUM_XSTATE_FEATURES];
    ULONG64 EnabledUserVisibleSupervisorFeatures;
} XSTATE_CONFIGURATION, *PXSTATE_CONFIGURATION;
#pragma warning( disable : 4121)
    (1UL << SHARED_GLOBAL_FLAGS_ERROR_PORT_V)
    (1UL << SHARED_GLOBAL_FLAGS_ELEVATION_ENABLED_V)
    (1UL << SHARED_GLOBAL_FLAGS_VIRT_ENABLED_V)
    (1UL << SHARED_GLOBAL_FLAGS_INSTALLER_DETECT_ENABLED_V)
    (1UL << SHARED_GLOBAL_FLAGS_LKG_ENABLED_V)
    (1UL << SHARED_GLOBAL_FLAGS_DYNAMIC_PROC_ENABLED_V)
    (1UL << SHARED_GLOBAL_FLAGS_CONSOLE_BROKER_ENABLED_V)
    (1UL << SHARED_GLOBAL_FLAGS_SECURE_BOOT_ENABLED_V)
    (1UL << SHARED_GLOBAL_FLAGS_MULTI_SESSION_SKU_V)
    (1UL << SHARED_GLOBAL_FLAGS_MULTIUSERS_IN_SESSION_SKU_V)
    (1UL << SHARED_GLOBAL_FLAGS_STATE_SEPARATION_ENABLED_V)
    *((Flags)) |= (Bit)
    InterlockedBitTestAndSet ((PLONG)(Flags), (Bit))
    InterlockedBitTestAndReset ((PLONG)(Flags), (Bit))
typedef struct _KUSER_SHARED_DATA {
    ULONG TickCountLowDeprecated;
    ULONG TickCountMultiplier;
    volatile KSYSTEM_TIME InterruptTime;
    volatile KSYSTEM_TIME SystemTime;
    volatile KSYSTEM_TIME TimeZoneBias;
    USHORT ImageNumberLow;
    USHORT ImageNumberHigh;
    WCHAR NtSystemRoot[260];
    ULONG MaxStackTraceDepth;
    ULONG CryptoExponent;
    ULONG TimeZoneId;
    ULONG LargePageMinimum;
    ULONG AitSamplingValue;
    ULONG AppCompatFlag;
    ULONGLONG RNGSeedVersion;
    ULONG GlobalValidationRunlevel;
    volatile LONG TimeZoneBiasStamp;
    ULONG NtBuildNumber;
    NT_PRODUCT_TYPE NtProductType;
    BOOLEAN ProductTypeIsValid;
    BOOLEAN Reserved0[1];
    USHORT NativeProcessorArchitecture;
    ULONG NtMajorVersion;
    ULONG NtMinorVersion;
    BOOLEAN ProcessorFeatures[PROCESSOR_FEATURE_MAX];
    ULONG Reserved1;
    ULONG Reserved3;
    volatile ULONG TimeSlip;
    ALTERNATIVE_ARCHITECTURE_TYPE AlternativeArchitecture;
    ULONG BootId;
    LARGE_INTEGER SystemExpirationDate;
    ULONG SuiteMask;
    BOOLEAN KdDebuggerEnabled;
    union
    {
        UCHAR MitigationPolicies;
        struct
        {
            UCHAR NXSupportPolicy : 2;
            UCHAR SEHValidationPolicy : 2;
            UCHAR CurDirDevicesSkippedForDlls : 2;
            UCHAR Reserved : 2;
        };
    };
    USHORT CyclesPerYield;
    volatile ULONG ActiveConsoleId;
    volatile ULONG DismountCount;
    ULONG ComPlusPackage;
    ULONG LastSystemRITEventTickCount;
    ULONG NumberOfPhysicalPages;
    BOOLEAN SafeBootMode;
    UCHAR VirtualizationFlags;
    UCHAR Reserved12[2];
    union {
        ULONG SharedDataFlags;
        struct {
            ULONG DbgErrorPortPresent : 1;
            ULONG DbgElevationEnabled : 1;
            ULONG DbgVirtEnabled : 1;
            ULONG DbgInstallerDetectEnabled : 1;
            ULONG DbgLkgEnabled : 1;
            ULONG DbgDynProcessorEnabled : 1;
            ULONG DbgConsoleBrokerEnabled : 1;
            ULONG DbgSecureBootEnabled : 1;
            ULONG DbgMultiSessionSku : 1;
            ULONG DbgMultiUsersInSessionSku : 1;
            ULONG DbgStateSeparationEnabled : 1;
            ULONG SpareBits : 21;
        } DUMMYSTRUCTNAME2;
    } DUMMYUNIONNAME2;
    ULONG DataFlagsPad[1];
    ULONGLONG TestRetInstruction;
    LONGLONG QpcFrequency;
    ULONG SystemCall;
    ULONG SystemCallPad0;
    ULONGLONG SystemCallPad[2];
    union {
        volatile KSYSTEM_TIME TickCount;
        volatile ULONG64 TickCountQuad;
        struct {
            ULONG ReservedTickCountOverlay[3];
            ULONG TickCountPad[1];
        } DUMMYSTRUCTNAME;
    } DUMMYUNIONNAME3;
    ULONG Cookie;
    ULONG CookiePad[1];
    LONGLONG ConsoleSessionForegroundProcessId;
    ULONGLONG TimeUpdateLock;
    ULONGLONG BaselineSystemTimeQpc;
    ULONGLONG BaselineInterruptTimeQpc;
    ULONGLONG QpcSystemTimeIncrement;
    ULONGLONG QpcInterruptTimeIncrement;
    UCHAR QpcSystemTimeIncrementShift;
    UCHAR QpcInterruptTimeIncrementShift;
    USHORT UnparkedProcessorCount;
    ULONG EnclaveFeatureMask[4];
    ULONG TelemetryCoverageRound;
    USHORT UserModeGlobalLogger[16];
    ULONG ImageFileExecutionOptions;
    ULONG LangGenerationCount;
    ULONGLONG Reserved4;
    volatile ULONGLONG InterruptTimeBias;
    volatile ULONGLONG QpcBias;
    ULONG ActiveProcessorCount;
    volatile UCHAR ActiveGroupCount;
    UCHAR Reserved9;
    union {
        USHORT QpcData;
        struct {
            volatile UCHAR QpcBypassEnabled;
            UCHAR QpcShift;
        };
    };
    LARGE_INTEGER TimeZoneBiasEffectiveStart;
    LARGE_INTEGER TimeZoneBiasEffectiveEnd;
    XSTATE_CONFIGURATION XState;
} KUSER_SHARED_DATA, *PKUSER_SHARED_DATA;
C_ASSERT(SYSTEM_CALL_SYSCALL == 0);
C_ASSERT(SYSTEM_CALL_INT_2E == 1);
C_ASSERT(FIELD_OFFSET(KUSER_SHARED_DATA, TickCountLowDeprecated) == 0x0);
C_ASSERT(FIELD_OFFSET(KUSER_SHARED_DATA, TickCountMultiplier) == 0x4);
C_ASSERT(__alignof(KSYSTEM_TIME) == 4);
C_ASSERT(FIELD_OFFSET(KUSER_SHARED_DATA, InterruptTime) == 0x08);
C_ASSERT(FIELD_OFFSET(KUSER_SHARED_DATA, SystemTime) == 0x014);
C_ASSERT(FIELD_OFFSET(KUSER_SHARED_DATA, TimeZoneBias) == 0x020);
C_ASSERT(FIELD_OFFSET(KUSER_SHARED_DATA, ImageNumberLow) == 0x02c);
C_ASSERT(FIELD_OFFSET(KUSER_SHARED_DATA, ImageNumberHigh) == 0x02e);
C_ASSERT(FIELD_OFFSET(KUSER_SHARED_DATA, NtSystemRoot) == 0x030);
C_ASSERT(FIELD_OFFSET(KUSER_SHARED_DATA, MaxStackTraceDepth) == 0x238);
C_ASSERT(FIELD_OFFSET(KUSER_SHARED_DATA, CryptoExponent) == 0x23c);
C_ASSERT(FIELD_OFFSET(KUSER_SHARED_DATA, TimeZoneId) == 0x240);
C_ASSERT(FIELD_OFFSET(KUSER_SHARED_DATA, LargePageMinimum) == 0x244);
C_ASSERT(FIELD_OFFSET(KUSER_SHARED_DATA, AitSamplingValue) == 0x248);
C_ASSERT(FIELD_OFFSET(KUSER_SHARED_DATA, AppCompatFlag) == 0x24c);
C_ASSERT(FIELD_OFFSET(KUSER_SHARED_DATA, RNGSeedVersion) == 0x250);
C_ASSERT(FIELD_OFFSET(KUSER_SHARED_DATA, GlobalValidationRunlevel) == 0x258);
C_ASSERT(FIELD_OFFSET(KUSER_SHARED_DATA, TimeZoneBiasStamp) == 0x25c);
C_ASSERT(FIELD_OFFSET(KUSER_SHARED_DATA, NtBuildNumber) == 0x260);
C_ASSERT(FIELD_OFFSET(KUSER_SHARED_DATA, NtProductType) == 0x264);
C_ASSERT(FIELD_OFFSET(KUSER_SHARED_DATA, ProductTypeIsValid) == 0x268);
C_ASSERT(FIELD_OFFSET(KUSER_SHARED_DATA, NativeProcessorArchitecture) == 0x26a);
C_ASSERT(FIELD_OFFSET(KUSER_SHARED_DATA, NtMajorVersion) == 0x26c);
C_ASSERT(FIELD_OFFSET(KUSER_SHARED_DATA, NtMinorVersion) == 0x270);
C_ASSERT(FIELD_OFFSET(KUSER_SHARED_DATA, ProcessorFeatures) == 0x274);
C_ASSERT(FIELD_OFFSET(KUSER_SHARED_DATA, Reserved1) == 0x2b4);
C_ASSERT(FIELD_OFFSET(KUSER_SHARED_DATA, Reserved3) == 0x2b8);
C_ASSERT(FIELD_OFFSET(KUSER_SHARED_DATA, TimeSlip) == 0x2bc);
C_ASSERT(FIELD_OFFSET(KUSER_SHARED_DATA, AlternativeArchitecture) == 0x2c0);
C_ASSERT(FIELD_OFFSET(KUSER_SHARED_DATA, SystemExpirationDate) == 0x2c8);
C_ASSERT(FIELD_OFFSET(KUSER_SHARED_DATA, SuiteMask) == 0x2d0);
C_ASSERT(FIELD_OFFSET(KUSER_SHARED_DATA, KdDebuggerEnabled) == 0x2d4);
C_ASSERT(FIELD_OFFSET(KUSER_SHARED_DATA, MitigationPolicies) == 0x2d5);
C_ASSERT(FIELD_OFFSET(KUSER_SHARED_DATA, CyclesPerYield) == 0x2d6);
C_ASSERT(FIELD_OFFSET(KUSER_SHARED_DATA, ActiveConsoleId) == 0x2d8);
C_ASSERT(FIELD_OFFSET(KUSER_SHARED_DATA, DismountCount) == 0x2dc);
C_ASSERT(FIELD_OFFSET(KUSER_SHARED_DATA, ComPlusPackage) == 0x2e0);
C_ASSERT(FIELD_OFFSET(KUSER_SHARED_DATA, LastSystemRITEventTickCount) == 0x2e4);
C_ASSERT(FIELD_OFFSET(KUSER_SHARED_DATA, NumberOfPhysicalPages) == 0x2e8);
C_ASSERT(FIELD_OFFSET(KUSER_SHARED_DATA, SafeBootMode) == 0x2ec);
C_ASSERT(FIELD_OFFSET(KUSER_SHARED_DATA, VirtualizationFlags) == 0x2ed);
C_ASSERT(FIELD_OFFSET(KUSER_SHARED_DATA, Reserved12) == 0x2ee);
C_ASSERT(FIELD_OFFSET(KUSER_SHARED_DATA, TestRetInstruction) == 0x2f8);
C_ASSERT(FIELD_OFFSET(KUSER_SHARED_DATA, QpcFrequency) == 0x300);
C_ASSERT(FIELD_OFFSET(KUSER_SHARED_DATA, SystemCall) == 0x308);
C_ASSERT(FIELD_OFFSET(KUSER_SHARED_DATA, SystemCallPad0) == 0x30c);
C_ASSERT(FIELD_OFFSET(KUSER_SHARED_DATA, SystemCallPad) == 0x310);
C_ASSERT(FIELD_OFFSET(KUSER_SHARED_DATA, Cookie) == 0x330);
C_ASSERT(FIELD_OFFSET(KUSER_SHARED_DATA, ConsoleSessionForegroundProcessId) == 0x338);
C_ASSERT(FIELD_OFFSET(KUSER_SHARED_DATA, TimeUpdateLock) == 0x340);
C_ASSERT(FIELD_OFFSET(KUSER_SHARED_DATA, BaselineSystemTimeQpc) == 0x348);
C_ASSERT(FIELD_OFFSET(KUSER_SHARED_DATA, BaselineInterruptTimeQpc) == 0x350);
C_ASSERT(FIELD_OFFSET(KUSER_SHARED_DATA, QpcSystemTimeIncrement) == 0x358);
C_ASSERT(FIELD_OFFSET(KUSER_SHARED_DATA, QpcInterruptTimeIncrement) == 0x360);
C_ASSERT(FIELD_OFFSET(KUSER_SHARED_DATA, QpcSystemTimeIncrementShift) == 0x368);
C_ASSERT(FIELD_OFFSET(KUSER_SHARED_DATA, QpcInterruptTimeIncrementShift) == 0x369);
C_ASSERT(FIELD_OFFSET(KUSER_SHARED_DATA, UnparkedProcessorCount) == 0x36a);
C_ASSERT(FIELD_OFFSET(KUSER_SHARED_DATA, EnclaveFeatureMask) == 0x36c);
C_ASSERT(FIELD_OFFSET(KUSER_SHARED_DATA, TelemetryCoverageRound) == 0x37c);
C_ASSERT(FIELD_OFFSET(KUSER_SHARED_DATA, UserModeGlobalLogger) == 0x380);
C_ASSERT(FIELD_OFFSET(KUSER_SHARED_DATA, ImageFileExecutionOptions) == 0x3a0);
C_ASSERT(FIELD_OFFSET(KUSER_SHARED_DATA, LangGenerationCount) == 0x3a4);
C_ASSERT(FIELD_OFFSET(KUSER_SHARED_DATA, Reserved4) == 0x3a8);
C_ASSERT(FIELD_OFFSET(KUSER_SHARED_DATA, InterruptTimeBias) == 0x3b0);
C_ASSERT(FIELD_OFFSET(KUSER_SHARED_DATA, QpcBias) == 0x3b8);
C_ASSERT(FIELD_OFFSET(KUSER_SHARED_DATA, ActiveProcessorCount) == 0x3c0);
C_ASSERT(FIELD_OFFSET(KUSER_SHARED_DATA, ActiveGroupCount) == 0x3c4);
C_ASSERT(FIELD_OFFSET(KUSER_SHARED_DATA, Reserved9) == 0x3c5);
C_ASSERT(FIELD_OFFSET(KUSER_SHARED_DATA, QpcData) == 0x3c6);
C_ASSERT(FIELD_OFFSET(KUSER_SHARED_DATA, QpcBypassEnabled) == 0x3c6);
C_ASSERT(FIELD_OFFSET(KUSER_SHARED_DATA, QpcShift) == 0x3c7);
C_ASSERT(FIELD_OFFSET(KUSER_SHARED_DATA, TimeZoneBiasEffectiveStart) == 0x3c8);
C_ASSERT(FIELD_OFFSET(KUSER_SHARED_DATA, TimeZoneBiasEffectiveEnd) == 0x3d0);
C_ASSERT(FIELD_OFFSET(KUSER_SHARED_DATA, XState) == 0x3d8);
C_ASSERT(sizeof(KUSER_SHARED_DATA) == 0x710);
#pragma warning(default:4121)
typedef struct _CM_PCCARD_DEVICE_DATA {
    UCHAR Flags;
    UCHAR ErrorCode;
    USHORT Reserved;
    ULONG BusData;
    ULONG DeviceId;
    ULONG LegacyBaseAddress;
    UCHAR IRQMap[16];
} CM_PCCARD_DEVICE_DATA, *PCM_PCCARD_DEVICE_DATA;
typedef enum _CONFIGURATION_TYPE {
    ArcSystem,
    CentralProcessor,
    FloatingPointProcessor,
    PrimaryIcache,
    PrimaryDcache,
    SecondaryIcache,
    SecondaryDcache,
    SecondaryCache,
    EisaAdapter,
    TcAdapter,
    ScsiAdapter,
    DtiAdapter,
    MultiFunctionAdapter,
    DiskController,
    TapeController,
    CdromController,
    WormController,
    SerialController,
    NetworkController,
    DisplayController,
    ParallelController,
    PointerController,
    KeyboardController,
    AudioController,
    OtherController,
    DiskPeripheral,
    FloppyDiskPeripheral,
    TapePeripheral,
    ModemPeripheral,
    MonitorPeripheral,
    PrinterPeripheral,
    PointerPeripheral,
    KeyboardPeripheral,
    TerminalPeripheral,
    OtherPeripheral,
    LinePeripheral,
    NetworkPeripheral,
    SystemMemory,
    DockingInformation,
    RealModeIrqRoutingTable,
    RealModePCIEnumeration,
    MaximumType
} CONFIGURATION_TYPE, *PCONFIGURATION_TYPE;
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
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
LONG
KePulseEvent (
    _Inout_ PRKEVENT Event,
    _In_ KPRIORITY Increment,
    _In_ BOOLEAN Wait
    );
typedef
_IRQL_requires_same_
_Function_class_(EXPAND_STACK_CALLOUT)
VOID
(NTAPI EXPAND_STACK_CALLOUT) (
    _In_opt_ PVOID Parameter
    );
typedef EXPAND_STACK_CALLOUT *PEXPAND_STACK_CALLOUT;
_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
NTSTATUS
KeExpandKernelStackAndCallout (
    _In_ PEXPAND_STACK_CALLOUT Callout,
    _In_opt_ PVOID Parameter,
    _In_ SIZE_T Size
    );
_Must_inspect_result_
_IRQL_requires_min_(PASSIVE_LEVEL)
_IRQL_requires_max_(DISPATCH_LEVEL)
__drv_reportError("DISPATCH_LEVEL is only supported on Windows 7 or later.")
NTKERNELAPI
NTSTATUS
KeExpandKernelStackAndCalloutEx (
    _In_ PEXPAND_STACK_CALLOUT Callout,
    _In_opt_ PVOID Parameter,
    _In_ SIZE_T Size,
    _In_ BOOLEAN Wait,
    _In_opt_ PVOID Context
    );
_IRQL_requires_min_(PASSIVE_LEVEL)
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
LONG
KeSetBasePriorityThread (
    _Inout_ PKTHREAD Thread,
    _In_ LONG Increment
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
__drv_preferredFunction("error logging or driver shutdown",
    "Whenever possible, all kernel-mode components should log an error and "
    "continue to run, rather than calling KeBugCheck")
NTKERNELAPI
DECLSPEC_NORETURN
VOID
NTAPI
KeBugCheck (
    _In_ ULONG BugCheckCode
    );
_IRQL_requires_min_(PASSIVE_LEVEL)
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
BOOLEAN
KeInvalidateAllCaches (
    VOID
    );
_IRQL_requires_min_(PASSIVE_LEVEL)
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
VOID
FASTCALL
KeInvalidateRangeAllCaches (
    _In_ PVOID BaseAddress,
    _In_ ULONG Length
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
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
NTSTATUS
KeSetHardwareCounterConfiguration (
    _In_reads_(Count) PHARDWARE_COUNTER CounterArray,
    _In_ ULONG Count
    );
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
NTSTATUS
KeQueryHardwareCounterConfiguration (
    _Out_writes_to_(MaximumCount, *Count) PHARDWARE_COUNTER CounterArray,
    _In_ ULONG MaximumCount,
    _Out_ PULONG Count
    );
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
DECLSPEC_NORETURN
VOID
ExRaiseDatatypeMisalignment (
    VOID
    );
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
DECLSPEC_NORETURN
VOID
ExRaiseAccessViolation (
    VOID
    );
typedef struct _ZONE_SEGMENT_HEADER {
    SINGLE_LIST_ENTRY SegmentList;
    PVOID Reserved;
} ZONE_SEGMENT_HEADER, *PZONE_SEGMENT_HEADER;
typedef struct _ZONE_HEADER {
    SINGLE_LIST_ENTRY FreeList;
    SINGLE_LIST_ENTRY SegmentList;
    ULONG BlockSize;
    ULONG TotalSegmentSize;
} ZONE_HEADER, *PZONE_HEADER;
__drv_preferredFunction("lookaside lists instead", "Obsolete")
DECLSPEC_DEPRECATED_DDK
NTKERNELAPI
NTSTATUS
ExInitializeZone(
    _Out_ PZONE_HEADER Zone,
    _In_ ULONG BlockSize,
    _Inout_ PVOID InitialSegment,
    _In_ ULONG InitialSegmentSize
    );
__drv_preferredFunction("lookaside lists instead", "Obsolete")
DECLSPEC_DEPRECATED_DDK
NTKERNELAPI
NTSTATUS
ExExtendZone(
    _Inout_ PZONE_HEADER Zone,
    _Inout_ PVOID Segment,
    _In_ ULONG SegmentSize
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
__drv_preferredFunction("lookaside lists instead", "Obsolete")
DECLSPEC_DEPRECATED_DDK
NTKERNELAPI
NTSTATUS
ExInterlockedExtendZone(
    _Inout_ PZONE_HEADER Zone,
    _Inout_ PVOID Segment,
    _In_ ULONG SegmentSize,
    _Inout_ _Requires_lock_not_held_(*_Curr_) PKSPIN_LOCK Lock
    );
    (PVOID)((Zone)->FreeList.Next); \
    if ( (Zone)->FreeList.Next ) (Zone)->FreeList.Next = (Zone)->FreeList.Next->Next
    ( ((PSINGLE_LIST_ENTRY)(Block))->Next = (Zone)->FreeList.Next, \
      (Zone)->FreeList.Next = ((PSINGLE_LIST_ENTRY)(Block)), \
      ((PSINGLE_LIST_ENTRY)(Block))->Next \
    )
    ( (Zone)->FreeList.Next == (PSINGLE_LIST_ENTRY)NULL )
    (PVOID) ExInterlockedPopEntryList( &(Zone)->FreeList, Lock )
    ExInterlockedPushEntryList( &(Zone)->FreeList, ((PSINGLE_LIST_ENTRY) (Block)), Lock )
    (((PUCHAR)(Object) >= (PUCHAR)(Zone)->SegmentList.Next) && \
     ((PUCHAR)(Object) < (PUCHAR)(Zone)->SegmentList.Next + \
                         (Zone)->TotalSegmentSize)) \
)
typedef GUID UUID;
_IRQL_requires_max_(PASSIVE_LEVEL)
NTKERNELAPI
NTSTATUS
ExUuidCreate(
    _Out_ UUID *Uuid
    );
NTKERNELAPI
BOOLEAN
MmIsThisAnNtAsSystem (
    VOID
    );
_Must_inspect_result_
_IRQL_requires_max_ (APC_LEVEL)
NTKERNELAPI
NTSTATUS
MmMapUserAddressesToPage (
    _In_reads_bytes_(NumberOfBytes) PVOID BaseAddress,
    _In_ SIZE_T NumberOfBytes,
    _In_ PVOID PageAddress
    );
typedef struct _PHYSICAL_MEMORY_RANGE {
    PHYSICAL_ADDRESS BaseAddress;
    LARGE_INTEGER NumberOfBytes;
} PHYSICAL_MEMORY_RANGE, *PPHYSICAL_MEMORY_RANGE;
_IRQL_requires_max_ (PASSIVE_LEVEL)
NTKERNELAPI
NTSTATUS
MmAddPhysicalMemory (
    _In_ PPHYSICAL_ADDRESS StartAddress,
    _Inout_ PLARGE_INTEGER NumberOfBytes
    );
typedef NTSTATUS (*PMM_ROTATE_COPY_CALLBACK_FUNCTION) (
    _In_ PMDL DestinationMdl,
    _In_ PMDL SourceMdl,
    _In_ PVOID Context
    );
typedef enum _MM_ROTATE_DIRECTION {
    MmToFrameBuffer,
    MmToFrameBufferNoCopy,
    MmToRegularMemory,
    MmToRegularMemoryNoCopy,
    MmMaximumRotateDirection
} MM_ROTATE_DIRECTION, *PMM_ROTATE_DIRECTION;
_Must_inspect_result_
_IRQL_requires_max_ (APC_LEVEL)
NTSTATUS
MmRotatePhysicalView (
    _In_ PVOID VirtualAddress,
    _Inout_ PSIZE_T NumberOfBytes,
    _In_opt_ PMDL NewMdl,
    _In_ MM_ROTATE_DIRECTION Direction,
    _In_ PMM_ROTATE_COPY_CALLBACK_FUNCTION CopyFunction,
    _In_opt_ PVOID Context
    );
_IRQL_requires_max_ (PASSIVE_LEVEL)
NTKERNELAPI
NTSTATUS
MmRemovePhysicalMemory (
    _In_ PPHYSICAL_ADDRESS StartAddress,
    _Inout_ PLARGE_INTEGER NumberOfBytes
    );
_IRQL_requires_max_ (PASSIVE_LEVEL)
NTKERNELAPI
PPHYSICAL_MEMORY_RANGE
MmGetPhysicalMemoryRanges (
    VOID
    );
_IRQL_requires_max_ (APC_LEVEL)
NTKERNELAPI
PPHYSICAL_MEMORY_RANGE
MmGetPhysicalMemoryRangesEx (
    _In_opt_ PVOID PartitionObject
    );
_Must_inspect_result_
_IRQL_requires_max_ (APC_LEVEL)
NTKERNELAPI
_Out_writes_bytes_opt_ (NumberOfBytes) PVOID
MmMapVideoDisplay (
    _In_ PHYSICAL_ADDRESS PhysicalAddress,
    _In_ SIZE_T NumberOfBytes,
    _In_ MEMORY_CACHING_TYPE CacheType
     );
_IRQL_requires_max_ (APC_LEVEL)
NTKERNELAPI
VOID
MmUnmapVideoDisplay (
     _In_reads_bytes_ (NumberOfBytes) PVOID BaseAddress,
     _In_ SIZE_T NumberOfBytes
     );
NTKERNELAPI
PHYSICAL_ADDRESS
MmGetPhysicalAddress (
    _In_ PVOID BaseAddress
    );
_IRQL_requires_max_ (DISPATCH_LEVEL)
NTKERNELAPI
NTSTATUS
MmGetCacheAttribute (
    _In_ PHYSICAL_ADDRESS PhysicalAddress,
    _Out_ MEMORY_CACHING_TYPE *CacheType
    );
typedef struct _MM_COPY_ADDRESS {
    union {
        PVOID VirtualAddress;
        PHYSICAL_ADDRESS PhysicalAddress;
    };
} MM_COPY_ADDRESS, *PMMCOPY_ADDRESS;
_IRQL_requires_max_ (APC_LEVEL)
NTKERNELAPI
NTSTATUS
MmCopyMemory (
    _In_ PVOID TargetAddress,
    _In_ MM_COPY_ADDRESS SourceAddress,
    _In_ SIZE_T NumberOfBytes,
    _In_ ULONG Flags,
    _Out_ PSIZE_T NumberOfBytesTransferred
    );
NTKERNELAPI
PVOID
MmGetVirtualForPhysical (
    _In_ PHYSICAL_ADDRESS PhysicalAddress
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
_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
_Out_writes_bytes_opt_ (NumberOfBytes) PVOID
MmAllocateNonCachedMemory (
    _In_ SIZE_T NumberOfBytes
    );
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
VOID
MmFreeNonCachedMemory (
    _In_reads_bytes_ (NumberOfBytes) PVOID BaseAddress,
    _In_ SIZE_T NumberOfBytes
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
BOOLEAN
MmIsAddressValid (
    _In_ PVOID VirtualAddress
    );
__drv_preferredFunction("(see documentation)", "Obsolete")
DECLSPEC_DEPRECATED_DDK
NTKERNELAPI
BOOLEAN
MmIsNonPagedSystemAddressValid (
    _In_ PVOID VirtualAddress
    );
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
VOID
MmLockPagableSectionByHandle (
    _In_ PVOID ImageSectionHandle
    );
_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
__drv_reportError("Caution: MmSecureVirtualMemory ensures the specified VA "
 "range protections cannot be tightened - but accesses to the memory can "
 "still fail and so they must be protected by try-except.")
NTKERNELAPI
HANDLE
MmSecureVirtualMemory (
    __in_data_source(USER_MODE) _In_reads_bytes_ (Size) PVOID Address,
    _In_ __in_data_source(USER_MODE) SIZE_T Size,
    _In_ ULONG ProbeMode
    );
_Must_inspect_result_
_IRQL_requires_max_ (APC_LEVEL)
__drv_reportError("Caution: MmSecureVirtualMemoryEx ensures the specified VA "
        "range protections cannot be tightened - but accesses to the memory can "
        "still fail and so they must be protected by try-except.")
NTKERNELAPI
HANDLE
MmSecureVirtualMemoryEx (
    __in_data_source(USER_MODE) _In_reads_bytes_ (Size) PVOID Address,
    _In_ __in_data_source(USER_MODE) SIZE_T Size,
    _In_ ULONG ProbeMode,
    _In_ ULONG Flags
    );
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
VOID
MmUnsecureVirtualMemory (
    _In_ HANDLE SecureHandle
    );
_Must_inspect_result_
_IRQL_requires_max_ (APC_LEVEL)
NTKERNELAPI
NTSTATUS
MmMapViewInSystemSpaceEx (
    _In_ PVOID Section,
    _Outptr_result_bytebuffer_ (*ViewSize) PVOID *MappedBase,
    _Inout_ PSIZE_T ViewSize,
    _Inout_ PLARGE_INTEGER SectionOffset,
    _In_ ULONG_PTR Flags
    );
_Must_inspect_result_
_IRQL_requires_max_ (APC_LEVEL)
NTKERNELAPI
NTSTATUS
MmMapViewInSystemSpace (
    _In_ PVOID Section,
    _Outptr_result_bytebuffer_ (*ViewSize) PVOID *MappedBase,
    _Inout_ PSIZE_T ViewSize
    );
_IRQL_requires_max_ (APC_LEVEL)
NTKERNELAPI
NTSTATUS
MmUnmapViewInSystemSpace (
    _In_ PVOID MappedBase
    );
_Must_inspect_result_
_IRQL_requires_max_ (APC_LEVEL)
NTKERNELAPI
NTSTATUS
MmMapViewInSessionSpaceEx (
    _In_ PVOID Section,
    _Outptr_result_bytebuffer_ (*ViewSize) PVOID *MappedBase,
    _Inout_ PSIZE_T ViewSize,
    _Inout_ PLARGE_INTEGER SectionOffset,
    _In_ ULONG_PTR Flags
    );
_Must_inspect_result_
_IRQL_requires_max_ (APC_LEVEL)
NTKERNELAPI
NTSTATUS
MmMapViewInSessionSpace (
    _In_ PVOID Section,
    _Outptr_result_bytebuffer_ (*ViewSize) PVOID *MappedBase,
    _Inout_ PSIZE_T ViewSize
    );
_IRQL_requires_max_ (APC_LEVEL)
NTKERNELAPI
NTSTATUS
MmUnmapViewInSessionSpace (
    _In_ PVOID MappedBase
    );
_Must_inspect_result_
_IRQL_requires_max_ (PASSIVE_LEVEL)
NTKERNELAPI
NTSTATUS
MmCreateMirror (
    VOID
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTKERNELAPI
BOOLEAN
SeSinglePrivilegeCheck(
    _In_ LUID PrivilegeValue,
    _In_ KPROCESSOR_MODE PreviousMode
    );
extern NTKERNELAPI PEPROCESS PsInitialSystemProcess;
_IRQL_requires_max_(DISPATCH_LEVEL)
CFORCEINLINE
PETHREAD
PsGetCurrentThread (
    VOID
    )
{
    return (PETHREAD)KeGetCurrentThread();
}
typedef struct _PS_CREATE_NOTIFY_INFO {
    _In_ SIZE_T Size;
    union {
        _In_ ULONG Flags;
        struct {
            _In_ ULONG FileOpenNameAvailable : 1;
            _In_ ULONG IsSubsystemProcess : 1;
            _In_ ULONG Reserved : 30;
        };
    };
    _In_ HANDLE ParentProcessId;
    _In_ CLIENT_ID CreatingThreadId;
    _Inout_ struct _FILE_OBJECT *FileObject;
    _In_ PCUNICODE_STRING ImageFileName;
    _In_opt_ PCUNICODE_STRING CommandLine;
    _Inout_ NTSTATUS CreationStatus;
} PS_CREATE_NOTIFY_INFO, *PPS_CREATE_NOTIFY_INFO;
typedef
VOID
(*PCREATE_PROCESS_NOTIFY_ROUTINE)(
    _In_ HANDLE ParentId,
    _In_ HANDLE ProcessId,
    _In_ BOOLEAN Create
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTKERNELAPI
NTSTATUS
PsSetCreateProcessNotifyRoutine(
    _In_ PCREATE_PROCESS_NOTIFY_ROUTINE NotifyRoutine,
    _In_ BOOLEAN Remove
    );
typedef
VOID
(*PCREATE_PROCESS_NOTIFY_ROUTINE_EX) (
    _Inout_ PEPROCESS Process,
    _In_ HANDLE ProcessId,
    _Inout_opt_ PPS_CREATE_NOTIFY_INFO CreateInfo
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTKERNELAPI
NTSTATUS
PsSetCreateProcessNotifyRoutineEx (
    _In_ PCREATE_PROCESS_NOTIFY_ROUTINE_EX NotifyRoutine,
    _In_ BOOLEAN Remove
    );
typedef enum _PSCREATEPROCESSNOTIFYTYPE {
    PsCreateProcessNotifySubsystems = 0
} PSCREATEPROCESSNOTIFYTYPE;
_IRQL_requires_max_(PASSIVE_LEVEL)
NTKERNELAPI
NTSTATUS
PsSetCreateProcessNotifyRoutineEx2 (
    _In_ PSCREATEPROCESSNOTIFYTYPE NotifyType,
    _In_ PVOID NotifyInformation,
    _In_ BOOLEAN Remove
    );
typedef
VOID
(*PCREATE_THREAD_NOTIFY_ROUTINE)(
    _In_ HANDLE ProcessId,
    _In_ HANDLE ThreadId,
    _In_ BOOLEAN Create
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTKERNELAPI
NTSTATUS
PsSetCreateThreadNotifyRoutine(
    _In_ PCREATE_THREAD_NOTIFY_ROUTINE NotifyRoutine
    );
typedef enum _PSCREATETHREADNOTIFYTYPE {
    PsCreateThreadNotifyNonSystem = 0,
    PsCreateThreadNotifySubsystems = 1
} PSCREATETHREADNOTIFYTYPE;
_IRQL_requires_max_(PASSIVE_LEVEL)
NTKERNELAPI
NTSTATUS
PsSetCreateThreadNotifyRoutineEx(
    _In_ PSCREATETHREADNOTIFYTYPE NotifyType,
    _In_ PVOID NotifyInformation
    );
NTKERNELAPI
NTSTATUS
PsRemoveCreateThreadNotifyRoutine (
    _In_ PCREATE_THREAD_NOTIFY_ROUTINE NotifyRoutine
    );
typedef struct _IMAGE_INFO {
    union {
        ULONG Properties;
        struct {
            ULONG ImageAddressingMode : 8;
            ULONG SystemModeImage : 1;
            ULONG ImageMappedToAllPids : 1;
            ULONG ExtendedInfoPresent : 1;
            ULONG MachineTypeMismatch : 1;
            ULONG ImageSignatureLevel : 4;
            ULONG ImageSignatureType : 3;
            ULONG ImagePartialMap : 1;
            ULONG Reserved : 12;
        };
    };
    PVOID ImageBase;
    ULONG ImageSelector;
    SIZE_T ImageSize;
    ULONG ImageSectionNumber;
} IMAGE_INFO, *PIMAGE_INFO;
typedef struct _IMAGE_INFO_EX {
    SIZE_T Size;
    IMAGE_INFO ImageInfo;
    struct _FILE_OBJECT *FileObject;
} IMAGE_INFO_EX, *PIMAGE_INFO_EX;
typedef
VOID
(*PLOAD_IMAGE_NOTIFY_ROUTINE)(
    _In_opt_ PUNICODE_STRING FullImageName,
    _In_ HANDLE ProcessId,
    _In_ PIMAGE_INFO ImageInfo
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTKERNELAPI
NTSTATUS
PsSetLoadImageNotifyRoutine(
    _In_ PLOAD_IMAGE_NOTIFY_ROUTINE NotifyRoutine
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTKERNELAPI
NTSTATUS
PsSetLoadImageNotifyRoutineEx(
    _In_ PLOAD_IMAGE_NOTIFY_ROUTINE NotifyRoutine,
    _In_ ULONG_PTR Flags
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTKERNELAPI
NTSTATUS
PsRemoveLoadImageNotifyRoutine(
    _In_ PLOAD_IMAGE_NOTIFY_ROUTINE NotifyRoutine
    );
NTKERNELAPI
HANDLE
PsGetCurrentProcessId(
    VOID
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
HANDLE
PsGetCurrentThreadId(
    VOID
    );
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
BOOLEAN
PsSetCurrentThreadPrefetching (
    _In_ BOOLEAN Prefetching
    );
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
BOOLEAN
PsIsCurrentThreadPrefetching (
    VOID
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
LONGLONG
PsGetProcessCreateTimeQuadPart(
    _In_ PEPROCESS Process
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
ULONGLONG
PsGetProcessStartKey(
    _In_ PEPROCESS Process
    );
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
NTSTATUS
PsGetProcessExitStatus(
    _In_ PEPROCESS Process
    );
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
NTSTATUS
PsGetThreadExitStatus(
    _In_ PETHREAD Thread
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
HANDLE
PsGetProcessId(
    _In_ PEPROCESS Process
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
HANDLE
PsGetThreadId(
    _In_ PETHREAD Thread
     );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
PVOID
PsGetThreadProperty(
    _In_ PETHREAD Thread,
    _In_ ULONG_PTR Key,
    _In_ ULONG Flags
    );
NTKERNELAPI
HANDLE
PsGetThreadProcessId(
    _In_ PETHREAD Thread
    );
NTKERNELAPI
LONGLONG
PsGetThreadCreateTime(
    _In_ PETHREAD Thread
    );
NTKERNELAPI
PVOID
PsGetCurrentThreadTeb(
    VOID
    );
typedef
VOID
(NTAPI *SILO_CONTEXT_CLEANUP_CALLBACK)(
    _In_ PVOID SiloContext
    );
typedef
NTSTATUS
(NTAPI *SILO_MONITOR_CREATE_CALLBACK)(
    _In_ PESILO Silo
    );
typedef
VOID
(NTAPI *SILO_MONITOR_TERMINATE_CALLBACK)(
    _In_ PESILO Silo
    );
typedef struct _SILO_MONITOR_REGISTRATION {
    UCHAR Version;
    BOOLEAN MonitorHost;
    BOOLEAN MonitorExistingSilos;
    UCHAR Reserved[5];
    union {
        PUNICODE_STRING DriverObjectName;
        PUNICODE_STRING ComponentName;
    };
    SILO_MONITOR_CREATE_CALLBACK CreateCallback;
    SILO_MONITOR_TERMINATE_CALLBACK TerminateCallback;
} SILO_MONITOR_REGISTRATION, *PSILO_MONITOR_REGISTRATION;
NTKERNELAPI
NTSTATUS
PsGetJobSilo(
    _In_ PEJOB Job,
    _Outptr_ PESILO *Silo
    );
NTKERNELAPI
NTSTATUS
PsGetJobServerSilo(
    _In_opt_ PEJOB Job,
    _Outptr_ PESILO *ServerSilo
    );
NTKERNELAPI
PESILO
PsGetEffectiveServerSilo(
    _In_ PESILO Silo
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
PESILO
PsAttachSiloToCurrentThread(
    _In_ PESILO Silo
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
VOID
PsDetachSiloFromCurrentThread(
    _In_ PESILO PreviousSilo
    );
NTKERNELAPI
BOOLEAN
PsIsHostSilo(
    _In_ PESILO Silo
    );
NTKERNELAPI
PESILO
PsGetHostSilo(
    VOID
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
PESILO
PsGetCurrentSilo(
    VOID
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
PESILO
PsGetCurrentServerSilo(
    VOID
    );
DECLSPEC_DEPRECATED_DDK
NTKERNELAPI
PUNICODE_STRING
PsGetCurrentServerSiloName(
    VOID
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
BOOLEAN
PsIsCurrentThreadInServerSilo(
    VOID
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
NTSTATUS
PsAcquireSiloHardReference(
    _In_ PESILO Silo
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
VOID
PsReleaseSiloHardReference(
    _In_ PESILO Silo
    );
NTKERNELAPI
_Must_inspect_result_
NTSTATUS
PsAllocSiloContextSlot(
    _In_ ULONG_PTR Reserved,
    _Out_ ULONG *ReturnedContextSlot
   );
NTKERNELAPI
_Check_return_
NTSTATUS
PsFreeSiloContextSlot(
    _In_ ULONG ContextSlot
    );
NTKERNELAPI
_Must_inspect_result_
NTSTATUS
PsCreateSiloContext(
    _In_ PESILO Silo,
    _In_ ULONG Size,
    _In_ POOL_TYPE PoolType,
    _In_opt_ SILO_CONTEXT_CLEANUP_CALLBACK ContextCleanupCallback,
    _Outptr_result_bytebuffer_(Size) PVOID *ReturnedSiloContext
    );
NTKERNELAPI
_Check_return_
NTSTATUS
PsInsertSiloContext(
    _In_ PESILO Silo,
    _In_ ULONG ContextSlot,
    _In_ PVOID SiloContext
   );
NTKERNELAPI
_Check_return_
NTSTATUS
PsReplaceSiloContext(
    _In_ PESILO Silo,
    _In_ ULONG ContextSlot,
    _In_ PVOID NewSiloContext,
    _Outptr_opt_result_maybenull_ PVOID *OldSiloContext
   );
_IRQL_requires_max_(HIGH_LEVEL)
NTKERNELAPI
NTSTATUS
PsGetSiloContext(
    _In_ PESILO Silo,
    _In_ ULONG ContextSlot,
    _Outptr_result_nullonfailure_ PVOID *ReturnedSiloContext
   );
NTKERNELAPI
_Check_return_
NTSTATUS
PsRemoveSiloContext(
    _In_ PESILO Silo,
    _In_ ULONG ContextSlot,
    _Outptr_opt_result_maybenull_ PVOID *RemovedSiloContext
   );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
VOID
PsReferenceSiloContext(
    _In_ PVOID SiloContext
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
VOID
PsDereferenceSiloContext(
    _In_ PVOID SiloContext
    );
NTKERNELAPI
_Check_return_
NTSTATUS
PsInsertPermanentSiloContext(
    _In_ PESILO Silo,
    _In_ ULONG ContextSlot,
    _In_ PVOID SiloContext
   );
NTKERNELAPI
_Check_return_
NTSTATUS
PsMakeSiloContextPermanent(
    _In_ PESILO Silo,
    _In_ ULONG ContextSlot
    );
_IRQL_requires_max_(HIGH_LEVEL)
NTKERNELAPI
NTSTATUS
PsGetPermanentSiloContext(
    _In_ PESILO Silo,
    _In_ ULONG ContextSlot,
    _Outptr_result_nullonfailure_ PVOID *ReturnedSiloContext
    );
NTKERNELAPI
_Must_inspect_result_
NTSTATUS
PsRegisterSiloMonitor(
    _In_ PSILO_MONITOR_REGISTRATION Registration,
    _Outptr_ PSILO_MONITOR *ReturnedMonitor
    );
NTKERNELAPI
_Must_inspect_result_
NTSTATUS
PsStartSiloMonitor(
    _In_ PSILO_MONITOR Monitor
    );
NTKERNELAPI
ULONG
PsGetSiloMonitorContextSlot(
    _In_ PSILO_MONITOR Monitor
    );
NTKERNELAPI
VOID
PsUnregisterSiloMonitor(
    _In_ _Post_invalid_ PSILO_MONITOR Monitor
    );
NTKERNELAPI
ULONG
PsGetServerSiloServiceSessionId(
    _In_ PESILO Silo
    );
NTKERNELAPI
ULONG
PsGetServerSiloActiveConsoleId(
    _In_ PESILO Silo
    );
NTKERNELAPI
VOID
PsTerminateServerSilo(
    _In_ PESILO ServerSilo,
    _In_ NTSTATUS ExitStatus
    );
PESILO
PsGetParentSilo(
    _In_opt_ PEJOB Job
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
PESILO
PsGetThreadServerSilo(
    _In_ PETHREAD Thread
    );
NTKERNELAPI
GUID*
PsGetSiloContainerId(
    _In_ PESILO Silo
    );
typedef NTSTATUS (*PIO_QUERY_DEVICE_ROUTINE)(
    _In_ PVOID Context,
    _In_ PUNICODE_STRING PathName,
    _In_ INTERFACE_TYPE BusType,
    _In_ ULONG BusNumber,
    _In_ PKEY_VALUE_FULL_INFORMATION *BusInformation,
    _In_ CONFIGURATION_TYPE ControllerType,
    _In_ ULONG ControllerNumber,
    _In_ PKEY_VALUE_FULL_INFORMATION *ControllerInformation,
    _In_ CONFIGURATION_TYPE PeripheralType,
    _In_ ULONG PeripheralNumber,
    _In_ PKEY_VALUE_FULL_INFORMATION *PeripheralInformation
    );
typedef enum _IO_QUERY_DEVICE_DATA_FORMAT {
    IoQueryDeviceIdentifier = 0,
    IoQueryDeviceConfigurationData,
    IoQueryDeviceComponentInformation,
    IoQueryDeviceMaxData
} IO_QUERY_DEVICE_DATA_FORMAT, *PIO_QUERY_DEVICE_DATA_FORMAT;
typedef
VOID
DRIVER_REINITIALIZE (
    _In_ struct _DRIVER_OBJECT *DriverObject,
    _In_opt_ PVOID Context,
    _In_ ULONG Count
    );
typedef DRIVER_REINITIALIZE *PDRIVER_REINITIALIZE;
typedef struct _CONTROLLER_OBJECT {
    CSHORT Type;
    CSHORT Size;
    PVOID ControllerExtension;
    KDEVICE_QUEUE DeviceWaitQueue;
    ULONG Spare1;
    LARGE_INTEGER Spare2;
} CONTROLLER_OBJECT, *PCONTROLLER_OBJECT;
typedef struct _CONFIGURATION_INFORMATION {
    ULONG DiskCount;
    ULONG FloppyCount;
    ULONG CdRomCount;
    ULONG TapeCount;
    ULONG ScsiPortCount;
    ULONG SerialCount;
    ULONG ParallelCount;
    BOOLEAN AtDiskPrimaryAddressClaimed;
    BOOLEAN AtDiskSecondaryAddressClaimed;
    ULONG Version;
    ULONG MediumChangerCount;
} CONFIGURATION_INFORMATION, *PCONFIGURATION_INFORMATION;
DECLSPEC_DEPRECATED_DDK
_IRQL_requires_max_(DISPATCH_LEVEL)
_IRQL_requires_min_(DISPATCH_LEVEL)
__drv_preferredFunction("AllocateAdapterChannel","obsolete")
NTKERNELAPI
NTSTATUS
IoAllocateAdapterChannel(
    _In_ PADAPTER_OBJECT AdapterObject,
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ ULONG NumberOfMapRegisters,
    _In_ PDRIVER_CONTROL ExecutionRoutine,
    _In_ PVOID Context
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
_IRQL_requires_min_(DISPATCH_LEVEL)
NTKERNELAPI
VOID
IoAllocateController(
    _In_ PCONTROLLER_OBJECT ControllerObject,
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ PDRIVER_CONTROL ExecutionRoutine,
    _In_opt_ PVOID Context
    );
    IoCreateSymbolicLink( (ArcName), (DeviceName) ) )
DECLSPEC_DEPRECATED_DDK
__drv_preferredFunction("(see documentation)", "Obsolete")
NTKERNELAPI
NTSTATUS
IoAssignResources (
    _In_ PUNICODE_STRING RegistryPath,
    _In_opt_ PUNICODE_STRING DriverClassName,
    _In_ PDRIVER_OBJECT DriverObject,
    _In_opt_ PDEVICE_OBJECT DeviceObject,
    _In_opt_ PIO_RESOURCE_REQUIREMENTS_LIST RequestedResources,
    _Inout_ PCM_RESOURCE_LIST *AllocatedResources
    );
DECLSPEC_DEPRECATED_DDK
__drv_preferredFunction("IoAttachDeviceToDeviceStack", "Obsolete")
NTKERNELAPI
NTSTATUS
IoAttachDeviceByPointer(
    _In_ PDEVICE_OBJECT SourceDevice,
    _In_ PDEVICE_OBJECT TargetDevice
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTKERNELAPI
PCONTROLLER_OBJECT
IoCreateController(
    _In_ ULONG Size
    );
    IoDeleteSymbolicLink( (ArcName) ) )
_IRQL_requires_max_(PASSIVE_LEVEL)
NTKERNELAPI
VOID
IoDeleteController(
    _In_ PCONTROLLER_OBJECT ControllerObject
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
_IRQL_requires_min_(DISPATCH_LEVEL)
NTKERNELAPI
VOID
IoFreeController(
    _In_ PCONTROLLER_OBJECT ControllerObject
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTKERNELAPI
PCONFIGURATION_INFORMATION
IoGetConfigurationInformation( VOID );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTKERNELAPI
PGENERIC_MAPPING
IoGetFileObjectGenericMapping(
    VOID
    );
NTKERNELAPI
VOID
IoCancelFileOpen(
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ PFILE_OBJECT FileObject
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
PIRP
IoMakeAssociatedIrp(
    _In_ PIRP Irp,
    _In_ CCHAR StackSize
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
PIRP
IoMakeAssociatedIrpEx(
    _In_ PIRP Irp,
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ CCHAR StackSize
    );
DECLSPEC_DEPRECATED_DDK
__drv_preferredFunction("IoGetDeviceProperty", "Obsolete")
NTKERNELAPI
NTSTATUS
IoQueryDeviceDescription(
    _In_opt_ PINTERFACE_TYPE BusType,
    _In_opt_ PULONG BusNumber,
    _In_opt_ PCONFIGURATION_TYPE ControllerType,
    _In_opt_ PULONG ControllerNumber,
    _In_opt_ PCONFIGURATION_TYPE PeripheralType,
    _In_opt_ PULONG PeripheralNumber,
    _In_ PIO_QUERY_DEVICE_ROUTINE CalloutRoutine,
    _Inout_opt_ PVOID Context
    );
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
VOID
IoRaiseHardError(
    _In_ PIRP Irp,
    _In_opt_ PVPB Vpb,
    _In_ PDEVICE_OBJECT RealDeviceObject
    );
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
BOOLEAN
IoRaiseInformationalHardError(
    _In_ NTSTATUS ErrorStatus,
    _In_opt_ PUNICODE_STRING String,
    _In_opt_ PKTHREAD Thread
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
BOOLEAN
IoSetThreadHardErrorMode(
    _In_ BOOLEAN EnableHardErrors
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTKERNELAPI
VOID
IoRegisterBootDriverReinitialization(
    _In_ PDRIVER_OBJECT DriverObject,
    _In_ PDRIVER_REINITIALIZE DriverReinitializationRoutine,
    _In_opt_ PVOID Context
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTKERNELAPI
VOID
IoRegisterDriverReinitialization(
    _In_ PDRIVER_OBJECT DriverObject,
    _In_ PDRIVER_REINITIALIZE DriverReinitializationRoutine,
    _In_opt_ PVOID Context
    );
DECLSPEC_DEPRECATED_DDK
__drv_preferredFunction("IoReportResourceForDetection if needed", "Obsolete")
NTKERNELAPI
NTSTATUS
IoReportResourceUsage(
    _In_opt_ PUNICODE_STRING DriverClassName,
    _In_ PDRIVER_OBJECT DriverObject,
    _In_reads_bytes_opt_(DriverListSize) PCM_RESOURCE_LIST DriverList,
    _In_opt_ ULONG DriverListSize,
    _In_opt_ PDEVICE_OBJECT DeviceObject,
    _In_reads_bytes_opt_(DeviceListSize) PCM_RESOURCE_LIST DeviceList,
    _In_opt_ ULONG DeviceListSize,
    _In_ BOOLEAN OverrideConflict,
    _Out_ PBOOLEAN ConflictDetected
    );
BOOLEAN
IoTranslateBusAddress(
    _In_ INTERFACE_TYPE InterfaceType,
    _In_ ULONG BusNumber,
    _In_ PHYSICAL_ADDRESS BusAddress,
    _Inout_ PULONG AddressSpace,
    _Out_ PPHYSICAL_ADDRESS TranslatedAddress
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
VOID
IoSetHardErrorOrVerifyDevice(
    _In_ PIRP Irp,
    _In_ PDEVICE_OBJECT DeviceObject
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTKERNELAPI
VOID
FASTCALL
HalExamineMBR(
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ ULONG SectorSize,
    _In_ ULONG MBRTypeIdentifier,
    _Outptr_result_bytebuffer_maybenull_(_Inexpressible_("Depends on MBRTypeIdentifier")) PVOID *Buffer
    );
DECLSPEC_DEPRECATED_DDK
_IRQL_requires_max_(PASSIVE_LEVEL)
__drv_preferredFunction("IoReadPartitionTableEx", "Obsolete")
NTKERNELAPI
NTSTATUS
FASTCALL
IoReadPartitionTable(
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ ULONG SectorSize,
    _In_ BOOLEAN ReturnRecognizedPartitions,
    _Out_ struct _DRIVE_LAYOUT_INFORMATION **PartitionBuffer
    );
DECLSPEC_DEPRECATED_DDK
_IRQL_requires_max_(PASSIVE_LEVEL)
__drv_preferredFunction("IoSetPartitionInformationEx", "Obsolete")
NTKERNELAPI
NTSTATUS
FASTCALL
IoSetPartitionInformation(
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ ULONG SectorSize,
    _In_ ULONG PartitionNumber,
    _In_ ULONG PartitionType
    );
DECLSPEC_DEPRECATED_DDK
_IRQL_requires_max_(PASSIVE_LEVEL)
__drv_preferredFunction("IoWritePartitionTableEx", "Obsolete")
NTKERNELAPI
NTSTATUS
FASTCALL
IoWritePartitionTable(
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ ULONG SectorSize,
    _In_ ULONG SectorsPerTrack,
    _In_ ULONG NumberOfHeads,
    _In_ struct _DRIVE_LAYOUT_INFORMATION *PartitionBuffer
    );
NTKERNELAPI
NTSTATUS
IoCreateDisk(
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_opt_ struct _CREATE_DISK* Disk
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTKERNELAPI
NTSTATUS
IoReadPartitionTableEx(
    _In_ PDEVICE_OBJECT DeviceObject,
    _Outptr_ struct _DRIVE_LAYOUT_INFORMATION_EX** DriveLayout
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTKERNELAPI
NTSTATUS
IoWritePartitionTableEx(
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_reads_(_Inexpressible_(FIELD_OFFSET(DRIVE_LAYOUT_INFORMATION_EX, PartitionEntry[0]))) struct _DRIVE_LAYOUT_INFORMATION_EX* DriveLayout
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTKERNELAPI
NTSTATUS
IoSetPartitionInformationEx(
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ ULONG PartitionNumber,
    _In_ struct _SET_PARTITION_INFORMATION_EX* PartitionInfo
    );
NTKERNELAPI
NTSTATUS
IoVerifyPartitionTable(
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ BOOLEAN FixErrors
    );
typedef struct _DISK_SIGNATURE {
    ULONG PartitionStyle;
    union {
        struct {
            ULONG Signature;
            ULONG CheckSum;
        } Mbr;
        struct {
            GUID DiskId;
        } Gpt;
    };
} DISK_SIGNATURE, *PDISK_SIGNATURE;
NTKERNELAPI
NTSTATUS
IoReadDiskSignature(
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ ULONG BytesPerSector,
    _Out_ PDISK_SIGNATURE Signature
    );
NTKERNELAPI
NTSTATUS
IoVolumeDeviceToDosName(
    _In_ PVOID VolumeDeviceObject,
    _Out_ _When_(return==0,
          _At_(DosName->Buffer, __drv_allocatesMem(Mem)))
          PUNICODE_STRING DosName
    );
_Must_inspect_result_
NTKERNELAPI
NTSTATUS
IoVolumeDeviceToGuidPath(
    _In_ PVOID VolumeDeviceObject,
    _Out_ _At_(GuidPath->Buffer,
            __drv_allocatesMem(Mem)
            _Post_notnull_)
          PUNICODE_STRING GuidPath
    );
NTKERNELAPI
NTSTATUS
IoVolumeDeviceToGuid(
    _In_ PVOID VolumeDeviceObject,
    _Out_ GUID *Guid
    );
NTKERNELAPI
NTSTATUS
IoVolumeDeviceNameToGuid(
    _In_ PUNICODE_STRING VolumeDeviceName,
    _Out_ GUID *Guid
    );
_Must_inspect_result_
NTKERNELAPI
NTSTATUS
IoVolumeDeviceNameToGuidPath(
    _In_ PUNICODE_STRING VolumeDeviceName,
    _Out_ _At_(GuidPath->Buffer,
            __drv_allocatesMem(Mem)
            _Post_notnull_)
          PUNICODE_STRING GuidPath
    );
NTKERNELAPI
NTSTATUS
IoSetSystemPartition(
    _In_ PUNICODE_STRING VolumeNameString
    );
NTKERNELAPI
NTSTATUS
IoCreateFileSpecifyDeviceObjectHint(
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
    _In_ ULONG Options,
    _In_opt_ PVOID DeviceObject
    );
typedef struct _IO_FOEXT_SILO_PARAMETERS {
    ULONG Length;
    union {
        struct {
            ULONG HasHardReference : 1;
            ULONG SpareFlags : 31;
        };
        ULONG Flags;
    };
    PESILO SiloContext;
} IO_FOEXT_SILO_PARAMETERS, *PIO_FOEXT_SILO_PARAMETERS;
PIO_FOEXT_SILO_PARAMETERS
IoGetSiloParameters (
    _In_ PFILE_OBJECT FileObject
    );
_Ret_maybenull_
PESILO
IoGetSilo (
    _In_ PFILE_OBJECT FileObject
    );
typedef struct _TXN_PARAMETER_BLOCK {
    USHORT Length;
    USHORT TxFsContext;
    PVOID TransactionObject;
} TXN_PARAMETER_BLOCK, *PTXN_PARAMETER_BLOCK;
PTXN_PARAMETER_BLOCK
IoGetTransactionParameterBlock (
    _In_ PFILE_OBJECT FileObject
    );
typedef struct _CREATE_USER_PROCESS_ECP_CONTEXT {
    USHORT Size;
    USHORT Reserved;
    PACCESS_TOKEN AccessToken;
} CREATE_USER_PROCESS_ECP_CONTEXT, *PCREATE_USER_PROCESS_ECP_CONTEXT;
DEFINE_GUID(GUID_ECP_CREATE_USER_PROCESS, 0xe0e429ff, 0x6ddc, 0x4e65, 0xaa, 0xb6, 0x45, 0xd0, 0x5a, 0x3, 0x8a, 0x8);
typedef struct _OPLOCK_KEY_ECP_CONTEXT *POPLOCK_KEY_ECP_CONTEXT;
POPLOCK_KEY_ECP_CONTEXT
IoGetOplockKeyContext (
    _In_ PFILE_OBJECT FileObject
    );
typedef struct _OPLOCK_KEY_CONTEXT {
    USHORT Version;
    USHORT Flags;
    GUID ParentOplockKey;
    GUID TargetOplockKey;
    ULONG Reserved;
} OPLOCK_KEY_CONTEXT, *POPLOCK_KEY_CONTEXT;
POPLOCK_KEY_CONTEXT
IoGetOplockKeyContextEx (
    _In_ PFILE_OBJECT FileObject
    );
typedef struct _IO_DRIVER_CREATE_CONTEXT {
    CSHORT Size;
    struct _ECP_LIST *ExtraCreateParameter;
    PVOID DeviceObjectHint;
    PTXN_PARAMETER_BLOCK TxnParameters;
    PESILO SiloContext;
} IO_DRIVER_CREATE_CONTEXT, *PIO_DRIVER_CREATE_CONTEXT;
    (DriverContext->Size >= (FIELD_OFFSET(IO_DRIVER_CREATE_CONTEXT, TxnParameters) + sizeof(DriverContext->TxnParameters)))
    (DriverContext->Size >= (FIELD_OFFSET(IO_DRIVER_CREATE_CONTEXT, SiloContext) + sizeof(DriverContext->SiloContext)))
VOID
FORCEINLINE
IoInitializeDriverCreateContext(
    PIO_DRIVER_CREATE_CONTEXT DriverContext
    )
{
    RtlZeroMemory(DriverContext, sizeof(IO_DRIVER_CREATE_CONTEXT));
    DriverContext->Size = sizeof(IO_DRIVER_CREATE_CONTEXT);
    DriverContext->SiloContext = IO_USE_AMBIENT_SILO;
}
NTKERNELAPI
NTSTATUS
IoCreateFileEx(
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
    _In_ ULONG Options,
    _In_opt_ PIO_DRIVER_CREATE_CONTEXT DriverContext
    );
NTSTATUS
IoSetIrpExtraCreateParameter(
    _Inout_ PIRP Irp,
    _In_ struct _ECP_LIST *ExtraCreateParameter
    );
VOID
IoClearIrpExtraCreateParameter(
    _Inout_ PIRP Irp
    );
NTSTATUS
IoGetIrpExtraCreateParameter(
    _In_ PIRP Irp,
    _Outptr_result_maybenull_ struct _ECP_LIST **ExtraCreateParameter
    );
NTKERNELAPI
NTSTATUS
IoQueryInformationByName (
    _In_ POBJECT_ATTRIBUTES ObjectAttributes,
    _Out_ PIO_STATUS_BLOCK IoStatusBlock,
    _Out_writes_bytes_(Length) PVOID FileInformation,
    _In_ ULONG Length,
    _In_ FILE_INFORMATION_CLASS FileInformationClass,
    _In_ ULONG Options,
    _In_opt_ PIO_DRIVER_CREATE_CONTEXT DriverContext
    );
NTKERNELAPI
NTSTATUS
IoAttachDeviceToDeviceStackSafe(
    _In_ PDEVICE_OBJECT SourceDevice,
    _In_ PDEVICE_OBJECT TargetDevice,
    _Outptr_ PDEVICE_OBJECT *AttachedToDeviceObject
    );
NTKERNELAPI
BOOLEAN
IoIsFileOriginRemote(
    _In_ PFILE_OBJECT FileObject
    );
NTKERNELAPI
NTSTATUS
IoSetFileOrigin(
    _In_ PFILE_OBJECT FileObject,
    _In_ BOOLEAN Remote
    );
BOOLEAN
IoIsFileObjectIgnoringSharing (
  _In_ PFILE_OBJECT FileObject
);
NTSTATUS
IoSetFileObjectIgnoreSharing (
  _In_ PFILE_OBJECT FileObject
);
NTKERNELAPI
IO_PAGING_PRIORITY
FASTCALL
IoGetPagingIoPriority(
    _In_ PIRP Irp
    );
typedef enum _BDCB_CALLBACK_TYPE {
    BdCbStatusUpdate,
    BdCbInitializeImage,
} BDCB_CALLBACK_TYPE, *PBDCB_CALLBACK_TYPE;
typedef enum _BDCB_CLASSIFICATION {
    BdCbClassificationUnknownImage,
    BdCbClassificationKnownGoodImage,
    BdCbClassificationKnownBadImage,
    BdCbClassificationKnownBadImageBootCritical,
    BdCbClassificationEnd,
} BDCB_CLASSIFICATION, *PBDCB_CLASSIFICATION;
typedef enum _BDCB_STATUS_UPDATE_TYPE {
    BdCbStatusPrepareForDependencyLoad,
    BdCbStatusPrepareForDriverLoad,
    BdCbStatusPrepareForUnload,
} BDCB_STATUS_UPDATE_TYPE, *PBDCB_STATUS_UPDATE_TYPE;
typedef struct _BDCB_STATUS_UPDATE_CONTEXT {
    BDCB_STATUS_UPDATE_TYPE StatusType;
} BDCB_STATUS_UPDATE_CONTEXT, *PBDCB_STATUS_UPDATE_CONTEXT;
typedef struct _BDCB_IMAGE_INFORMATION {
    BDCB_CLASSIFICATION Classification;
    ULONG ImageFlags;
    UNICODE_STRING ImageName;
    UNICODE_STRING RegistryPath;
    UNICODE_STRING CertificatePublisher;
    UNICODE_STRING CertificateIssuer;
    PVOID ImageHash;
    PVOID CertificateThumbprint;
    ULONG ImageHashAlgorithm;
    ULONG ThumbprintHashAlgorithm;
    ULONG ImageHashLength;
    ULONG CertificateThumbprintLength;
} BDCB_IMAGE_INFORMATION, *PBDCB_IMAGE_INFORMATION;
typedef
VOID
BOOT_DRIVER_CALLBACK_FUNCTION (
    _In_opt_ PVOID CallbackContext,
    _In_ BDCB_CALLBACK_TYPE Classification,
    _Inout_ PBDCB_IMAGE_INFORMATION ImageInformation
    );
typedef BOOT_DRIVER_CALLBACK_FUNCTION *PBOOT_DRIVER_CALLBACK_FUNCTION;
PVOID
IoRegisterBootDriverCallback (
    _In_ PBOOT_DRIVER_CALLBACK_FUNCTION CallbackFunction,
    _In_opt_ PVOID CallbackContext
    );
VOID
IoUnregisterBootDriverCallback (
    _In_ PVOID CallbackHandle
    );
NTSTATUS
IoGetActivityIdIrp (
    _In_ PIRP Irp,
    _Out_ LPGUID Guid
    );
NTSTATUS
IoSetActivityIdIrp (
    _Inout_ PIRP Irp,
    _In_opt_ LPCGUID Guid
    );
NTSTATUS
IoPropagateActivityIdToThread(
    _In_ PIRP Irp,
    _Out_ LPGUID PropagatedId,
    _Outptr_ LPCGUID *OriginalId
    );
LPCGUID
IoSetActivityIdThread (
    _In_ LPCGUID ActivityId
    );
VOID
IoClearActivityIdThread (
    _In_ LPCGUID OriginalId
    );
LPCGUID
IoGetActivityIdThread (
    VOID
    );
VOID
IoTransferActivityId (
    _In_ LPCGUID ActivityId,
    _In_ LPCGUID RelatedActivityId
    );
NTSTATUS
IoGetFsZeroingOffset (
    _In_ PIRP Irp,
    _Out_ PULONG ZeroingOffset
    );
NTSTATUS
IoSetFsZeroingOffsetRequired (
    _Inout_ PIRP Irp
    );
NTSTATUS
IoSetFsZeroingOffset (
    _Inout_ PIRP Irp,
    _In_ ULONG ZeroingOffset
    );
NTKERNELAPI
LOGICAL
IoIsValidIrpStatus (
    IN NTSTATUS Status
    );
NTKERNELAPI
NTSTATUS
IoIncrementKeepAliveCount(
    _Inout_ PFILE_OBJECT FileObject,
    _Inout_ PEPROCESS Process
    );
NTKERNELAPI
NTSTATUS
IoDecrementKeepAliveCount(
    _Inout_ PFILE_OBJECT FileObject,
    _Inout_ PEPROCESS Process
    );
NTKERNELAPI
PEPROCESS
IoGetInitiatorProcess(
    _In_ PFILE_OBJECT FileObject
    );
NTKERNELAPI
VOID
IoSetMasterIrpStatus(
    _Inout_ PIRP MasterIrp,
    _In_ NTSTATUS Status
    );
NTKERNELAPI
NTSTATUS
IoQueryFullDriverPath(
    _In_ PDRIVER_OBJECT DriverObject,
    _Out_ PUNICODE_STRING FullPath
    );
typedef struct _AGP_TARGET_BUS_INTERFACE_STANDARD {
    USHORT Size;
    USHORT Version;
    PVOID Context;
    PINTERFACE_REFERENCE InterfaceReference;
    PINTERFACE_DEREFERENCE InterfaceDereference;
    PGET_SET_DEVICE_DATA SetBusData;
    PGET_SET_DEVICE_DATA GetBusData;
    UCHAR CapabilityID;
} AGP_TARGET_BUS_INTERFACE_STANDARD, *PAGP_TARGET_BUS_INTERFACE_STANDARD;
_IRQL_requires_max_(PASSIVE_LEVEL)
_Must_inspect_result_
NTKERNELAPI
NTSTATUS
IoReportDetectedDevice(
    _In_ PDRIVER_OBJECT DriverObject,
    _In_ INTERFACE_TYPE LegacyBusType,
    _In_ ULONG BusNumber,
    _In_ ULONG SlotNumber,
    _In_opt_ PCM_RESOURCE_LIST ResourceList,
    _In_opt_ PIO_RESOURCE_REQUIREMENTS_LIST ResourceRequirements,
    _In_ BOOLEAN ResourceAssigned,
    _Inout_ PDEVICE_OBJECT *DeviceObject
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
_Must_inspect_result_
NTKERNELAPI
NTSTATUS
IoReportRootDevice(
    _In_ PDRIVER_OBJECT DriverObject
    );
typedef
_IRQL_requires_max_(PASSIVE_LEVEL)
_Must_inspect_result_
NTSTATUS
(*PGET_LOCATION_STRING) (
    _Inout_opt_ PVOID Context,
    _Outptr_
    _At_(*LocationStrings,
        _When_(return == 0, __drv_allocatesMem(Mem)))
    PZZWSTR *LocationStrings
    );
typedef struct _PNP_LOCATION_INTERFACE {
    USHORT Size;
    USHORT Version;
    PVOID Context;
    PINTERFACE_REFERENCE InterfaceReference;
    PINTERFACE_DEREFERENCE InterfaceDereference;
    PGET_LOCATION_STRING GetLocationString;
} PNP_LOCATION_INTERFACE, *PPNP_LOCATION_INTERFACE;
typedef enum _ARBITER_ACTION {
    ArbiterActionTestAllocation,
    ArbiterActionRetestAllocation,
    ArbiterActionCommitAllocation,
    ArbiterActionRollbackAllocation,
    ArbiterActionQueryAllocatedResources,
    ArbiterActionWriteReservedResources,
    ArbiterActionQueryConflict,
    ArbiterActionQueryArbitrate,
    ArbiterActionAddReserved,
    ArbiterActionBootAllocation
} ARBITER_ACTION, *PARBITER_ACTION;
typedef struct _ARBITER_CONFLICT_INFO {
    PDEVICE_OBJECT OwningObject;
    ULONGLONG Start;
    ULONGLONG End;
} ARBITER_CONFLICT_INFO, *PARBITER_CONFLICT_INFO;
typedef struct _ARBITER_TEST_ALLOCATION_PARAMETERS {
    _Inout_ PLIST_ENTRY ArbitrationList;
    _In_ ULONG AllocateFromCount;
    _In_ PCM_PARTIAL_RESOURCE_DESCRIPTOR AllocateFrom;
} ARBITER_TEST_ALLOCATION_PARAMETERS, *PARBITER_TEST_ALLOCATION_PARAMETERS;
typedef struct _ARBITER_RETEST_ALLOCATION_PARAMETERS {
    _Inout_ PLIST_ENTRY ArbitrationList;
    _In_ ULONG AllocateFromCount;
    _In_ PCM_PARTIAL_RESOURCE_DESCRIPTOR AllocateFrom;
} ARBITER_RETEST_ALLOCATION_PARAMETERS, *PARBITER_RETEST_ALLOCATION_PARAMETERS;
typedef struct _ARBITER_BOOT_ALLOCATION_PARAMETERS {
    _Inout_ PLIST_ENTRY ArbitrationList;
} ARBITER_BOOT_ALLOCATION_PARAMETERS, *PARBITER_BOOT_ALLOCATION_PARAMETERS;
typedef struct _ARBITER_QUERY_ALLOCATED_RESOURCES_PARAMETERS {
    _Out_ PCM_PARTIAL_RESOURCE_LIST *AllocatedResources;
} ARBITER_QUERY_ALLOCATED_RESOURCES_PARAMETERS, *PARBITER_QUERY_ALLOCATED_RESOURCES_PARAMETERS;
typedef struct _ARBITER_QUERY_CONFLICT_PARAMETERS {
    _In_ PDEVICE_OBJECT PhysicalDeviceObject;
    _In_ PIO_RESOURCE_DESCRIPTOR ConflictingResource;
    _Out_ PULONG ConflictCount;
    _Out_ PARBITER_CONFLICT_INFO *Conflicts;
} ARBITER_QUERY_CONFLICT_PARAMETERS, *PARBITER_QUERY_CONFLICT_PARAMETERS;
typedef struct _ARBITER_QUERY_ARBITRATE_PARAMETERS {
    _In_ PLIST_ENTRY ArbitrationList;
} ARBITER_QUERY_ARBITRATE_PARAMETERS, *PARBITER_QUERY_ARBITRATE_PARAMETERS;
typedef struct _ARBITER_ADD_RESERVED_PARAMETERS {
    _In_ PDEVICE_OBJECT ReserveDevice;
} ARBITER_ADD_RESERVED_PARAMETERS, *PARBITER_ADD_RESERVED_PARAMETERS;
typedef struct _ARBITER_PARAMETERS {
    union {
        ARBITER_TEST_ALLOCATION_PARAMETERS TestAllocation;
        ARBITER_RETEST_ALLOCATION_PARAMETERS RetestAllocation;
        ARBITER_BOOT_ALLOCATION_PARAMETERS BootAllocation;
        ARBITER_QUERY_ALLOCATED_RESOURCES_PARAMETERS QueryAllocatedResources;
        ARBITER_QUERY_CONFLICT_PARAMETERS QueryConflict;
        ARBITER_QUERY_ARBITRATE_PARAMETERS QueryArbitrate;
        ARBITER_ADD_RESERVED_PARAMETERS AddReserved;
    } Parameters;
} ARBITER_PARAMETERS, *PARBITER_PARAMETERS;
typedef enum _ARBITER_REQUEST_SOURCE {
    ArbiterRequestUndefined = -1,
    ArbiterRequestLegacyReported,
    ArbiterRequestHalReported,
    ArbiterRequestLegacyAssigned,
    ArbiterRequestPnpDetected,
    ArbiterRequestPnpEnumerated
} ARBITER_REQUEST_SOURCE;
typedef enum _ARBITER_RESULT {
    ArbiterResultUndefined = -1,
    ArbiterResultSuccess,
    ArbiterResultExternalConflict,
    ArbiterResultNullRequest
} ARBITER_RESULT;
NTKERNELAPI
NTSTATUS
IoReportResourceForDetection(
    _In_ PDRIVER_OBJECT DriverObject,
    _In_reads_bytes_opt_(DriverListSize) PCM_RESOURCE_LIST DriverList,
    _In_opt_ ULONG DriverListSize,
    _In_opt_ PDEVICE_OBJECT DeviceObject,
    _In_reads_bytes_opt_(DeviceListSize) PCM_RESOURCE_LIST DeviceList,
    _In_opt_ ULONG DeviceListSize,
    _Out_ PBOOLEAN ConflictDetected
    );
typedef struct _ARBITER_LIST_ENTRY {
    LIST_ENTRY ListEntry;
    ULONG AlternativeCount;
    _Field_size_(AlternativeCount)
    PIO_RESOURCE_DESCRIPTOR Alternatives;
    PDEVICE_OBJECT PhysicalDeviceObject;
    ARBITER_REQUEST_SOURCE RequestSource;
    ULONG Flags;
    LONG_PTR WorkSpace;
    INTERFACE_TYPE InterfaceType;
    ULONG SlotNumber;
    ULONG BusNumber;
    PCM_PARTIAL_RESOURCE_DESCRIPTOR Assignment;
    PIO_RESOURCE_DESCRIPTOR SelectedAlternative;
    ARBITER_RESULT Result;
} ARBITER_LIST_ENTRY, *PARBITER_LIST_ENTRY;
typedef
NTSTATUS
(*PARBITER_HANDLER) (
    _Inout_opt_ PVOID Context,
    _In_ ARBITER_ACTION Action,
    _Inout_ PARBITER_PARAMETERS Parameters
    );
typedef struct _ARBITER_INTERFACE {
    USHORT Size;
    USHORT Version;
    PVOID Context;
    PINTERFACE_REFERENCE InterfaceReference;
    PINTERFACE_DEREFERENCE InterfaceDereference;
    PARBITER_HANDLER ArbiterHandler;
    ULONG Flags;
} ARBITER_INTERFACE, *PARBITER_INTERFACE;
typedef enum _RESOURCE_TRANSLATION_DIRECTION {
    TranslateChildToParent,
    TranslateParentToChild
} RESOURCE_TRANSLATION_DIRECTION;
typedef
NTSTATUS
(*PTRANSLATE_RESOURCE_HANDLER)(
    _Inout_opt_ PVOID Context,
    _In_ PCM_PARTIAL_RESOURCE_DESCRIPTOR Source,
    _In_ RESOURCE_TRANSLATION_DIRECTION Direction,
    _In_opt_ ULONG AlternativesCount,
    _In_reads_opt_(AlternativesCount) IO_RESOURCE_DESCRIPTOR Alternatives[],
    _In_ PDEVICE_OBJECT PhysicalDeviceObject,
    _Out_ PCM_PARTIAL_RESOURCE_DESCRIPTOR Target
);
typedef
NTSTATUS
(*PTRANSLATE_RESOURCE_REQUIREMENTS_HANDLER)(
    _Inout_opt_ PVOID Context,
    _In_ PIO_RESOURCE_DESCRIPTOR Source,
    _In_ PDEVICE_OBJECT PhysicalDeviceObject,
    _Out_ PULONG TargetCount,
    _Out_writes_(*TargetCount) PIO_RESOURCE_DESCRIPTOR *Target
);
typedef struct _TRANSLATOR_INTERFACE {
    USHORT Size;
    USHORT Version;
    PVOID Context;
    PINTERFACE_REFERENCE InterfaceReference;
    PINTERFACE_DEREFERENCE InterfaceDereference;
    PTRANSLATE_RESOURCE_HANDLER TranslateResources;
    PTRANSLATE_RESOURCE_REQUIREMENTS_HANDLER TranslateResourceRequirements;
} TRANSLATOR_INTERFACE, *PTRANSLATOR_INTERFACE;
typedef
BOOLEAN
(*PHAL_RESET_DISPLAY_PARAMETERS) (
    _In_ ULONG Columns,
    _In_ ULONG Rows
    );
DECLSPEC_DEPRECATED_DDK
NTHALAPI
VOID
HalAcquireDisplayOwnership (
    _In_ PHAL_RESET_DISPLAY_PARAMETERS ResetDisplayParameters
    );
DECLSPEC_DEPRECATED_DDK
__drv_preferredFunction("(see documentation)", "Obsolete")
NTHALAPI
NTSTATUS
HalAssignSlotResources (
    _In_ PUNICODE_STRING RegistryPath,
    _In_ PUNICODE_STRING DriverClassName OPTIONAL,
    _In_ PDRIVER_OBJECT DriverObject,
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ INTERFACE_TYPE BusType,
    _In_ ULONG BusNumber,
    _In_ ULONG SlotNumber,
    _Inout_ PCM_RESOURCE_LIST *AllocatedResources
    );
DECLSPEC_DEPRECATED_DDK
_IRQL_requires_max_(PASSIVE_LEVEL)
__drv_preferredFunction(
    "IoReportDetectedDevice and IoReportResourceForDetection", "Obsolete")
NTHALAPI
ULONG
HalGetInterruptVector (
    _In_ INTERFACE_TYPE InterfaceType,
    _In_ ULONG BusNumber,
    _In_ ULONG BusInterruptLevel,
    _In_ ULONG BusInterruptVector,
    _Out_ PKIRQL Irql,
    _Out_ PKAFFINITY Affinity
    );
DECLSPEC_DEPRECATED_DDK
_When_(BusDataType!=0,
    __drv_preferredFunction(
    "IRP_MN_QUERY_INTERFACE and IRP_MN_WRITE_CONFIG requests",
    "Obsolete except for BusDataType==Cmos"))
NTHALAPI
ULONG
HalSetBusData (
    _In_ BUS_DATA_TYPE BusDataType,
    _In_ ULONG BusNumber,
    _In_ ULONG SlotNumber,
    _In_reads_bytes_(Length) PVOID Buffer,
    _In_ ULONG Length
    );
DECLSPEC_DEPRECATED_DDK
_When_(BusDataType!=0,
    __drv_preferredFunction(
    "IRP_MN_QUERY_INTERFACE and IRP_MN_WRITE_CONFIG requests",
    "Obsolete except for BusDataType==Cmos"))
NTHALAPI
ULONG
HalSetBusDataByOffset (
    _In_ BUS_DATA_TYPE BusDataType,
    _In_ ULONG BusNumber,
    _In_ ULONG SlotNumber,
    _In_reads_bytes_(Length) PVOID Buffer,
    _In_ ULONG Offset,
    _In_ ULONG Length
    );
DECLSPEC_DEPRECATED_DDK
__drv_preferredFunction("(see documentation)", "Obsolete")
NTHALAPI
BOOLEAN
HalTranslateBusAddress (
    _In_ INTERFACE_TYPE InterfaceType,
    _In_ ULONG BusNumber,
    _In_ PHYSICAL_ADDRESS BusAddress,
    _Inout_ PULONG AddressSpace,
    _Out_ PPHYSICAL_ADDRESS TranslatedAddress
    );
NTHALAPI
PVOID
HalAllocateCrashDumpRegisters (
    _In_ PADAPTER_OBJECT AdapterObject,
    _Inout_ PULONG NumberOfMapRegisters
    );
typedef enum _HAL_DMA_CRASH_DUMP_REGISTER_TYPE {
    HalDmaCrashDumpRegisterSet1 = 0,
    HalDmaCrashDumpRegisterSet2,
    HalDmaCrashDumpRegisterSetMax
} HAL_DMA_CRASH_DUMP_REGISTER_TYPE, *PHAL_DMA_CRASH_DUMP_REGISTER_TYPE;
NTSTATUS
HalDmaAllocateCrashDumpRegistersEx (
    _In_ PADAPTER_OBJECT Adapter,
    _In_ ULONG NumberOfMapRegisters,
    _In_ HAL_DMA_CRASH_DUMP_REGISTER_TYPE Type,
    _Out_ PVOID *MapRegisterBase,
    _Out_ PULONG MapRegistersAvailable
    );
NTSTATUS
HalDmaFreeCrashDumpRegistersEx (
    _In_ PADAPTER_OBJECT Adapter,
    _In_ HAL_DMA_CRASH_DUMP_REGISTER_TYPE Type
    );
DECLSPEC_DEPRECATED_DDK
_When_(BusDataType!=0,
    __drv_preferredFunction(
        "IRP_MN_QUERY_INTERFACE and IRP_MN_READ_CONFIG requests",
        "Obsolete except for BusDataType==Cmos"))
NTHALAPI
ULONG
HalGetBusData (
    _In_ BUS_DATA_TYPE BusDataType,
    _In_ ULONG BusNumber,
    _In_ ULONG SlotNumber,
    _Out_writes_bytes_(Length) PVOID Buffer,
    _In_ ULONG Length
    );
DECLSPEC_DEPRECATED_DDK
_When_(BusDataType!=0,
    __drv_preferredFunction("IRP_MN_QUERY_INTERFACE",
    "Obsolete except for BusDataType==Cmos"))
NTHALAPI
ULONG
HalGetBusDataByOffset (
    _In_ BUS_DATA_TYPE BusDataType,
    _In_ ULONG BusNumber,
    _In_ ULONG SlotNumber,
    _Out_writes_bytes_(Length) PVOID Buffer,
    _In_ ULONG Offset,
    _In_ ULONG Length
    );
DECLSPEC_DEPRECATED_DDK
_IRQL_requires_max_(PASSIVE_LEVEL)
__drv_preferredFunction("IoGetDmaAdapter", "Obsolete")
NTHALAPI
PADAPTER_OBJECT
HalGetAdapter (
    _In_ PDEVICE_DESCRIPTION DeviceDescription,
    _Out_ PULONG NumberOfMapRegisters
    );
DECLSPEC_DEPRECATED_DDK
NTHALAPI
BOOLEAN
HalMakeBeep(
    _In_ ULONG Frequency
    );
typedef
PBUS_HANDLER
(FASTCALL *pHalHandlerForBus) (
    _In_ INTERFACE_TYPE InterfaceType,
    _In_ ULONG BusNumber
    );
typedef
VOID
(FASTCALL *pHalReferenceBusHandler) (
    _In_ PBUS_HANDLER BusHandler
    );
typedef enum _HAL_QUERY_INFORMATION_CLASS {
    HalInstalledBusInformation,
    HalProfileSourceInformation,
    HalInformationClassUnused1,
    HalPowerInformation,
    HalProcessorSpeedInformation,
    HalCallbackInformation,
    HalMapRegisterInformation,
    HalMcaLogInformation,
    HalFrameBufferCachingInformation,
    HalDisplayBiosInformation,
    HalProcessorFeatureInformation,
    HalNumaTopologyInterface,
    HalErrorInformation,
    HalCmcLogInformation,
    HalCpeLogInformation,
    HalQueryMcaInterface,
    HalQueryAMLIIllegalIOPortAddresses,
    HalQueryMaxHotPlugMemoryAddress,
    HalPartitionIpiInterface,
    HalPlatformInformation,
    HalQueryProfileSourceList,
    HalInitLogInformation,
    HalFrequencyInformation,
    HalProcessorBrandString,
    HalHypervisorInformation,
    HalPlatformTimerInformation,
    HalAcpiAuditInformation,
    HalIrtInformation,
    HalSecondaryInterruptInformation,
    HalParkingPageInformation,
    HalNumaRangeTableInformation,
    HalChannelTopologyInformation,
    HalExternalCacheInformation,
    HalQueryDebuggerInformation,
    HalFwBootPerformanceInformation,
    HalFwS3PerformanceInformation,
    HalGetChannelPowerInformation,
    HalQueryStateElementInformation,
    HalPsciInformation,
    HalInterruptControllerInformation,
    HalQueryIommuReservedRegionInformation,
    HalQueryArmErrataInformation,
    HalQueryProcessorEfficiencyInformation,
    HalQueryAcpiWakeAlarmSystemPowerStateInformation,
    HalQueryProfileNumberOfCounters,
    HalQueryHyperlaunchEntrypoint,
    HalHardwareWatchdogInformation,
    HalDmaRemappingInformation,
    HalQueryRuntimeServicesBlockInformation,
    HalHeterogeneousMemoryAttributesInterface,
} HAL_QUERY_INFORMATION_CLASS, *PHAL_QUERY_INFORMATION_CLASS;
typedef enum _HAL_SET_INFORMATION_CLASS {
    HalProfileSourceInterval,
    HalProfileSourceInterruptHandler,
    HalMcaRegisterDriver,
    HalKernelErrorHandler,
    HalCmcRegisterDriver,
    HalCpeRegisterDriver,
    HalMcaLog,
    HalCmcLog,
    HalCpeLog,
    HalGenerateCmcInterrupt,
    HalProfileSourceTimerHandler,
    HalEnlightenment,
    HalProfileDpgoSourceInterruptHandler,
    HalRegisterSecondaryInterruptInterface,
    HalSetChannelPowerInformation,
    HalI386ExceptionChainTerminatorInformation,
    HalSetResetParkDisposition,
    HalSetPsciSuspendMode,
    HalSetHvciEnabled,
    HalSetProcessorTraceInterruptHandler,
    HalProfileSourceAdd,
    HalProfileSourceRemove,
    HalSetSwInterruptHandler,
} HAL_SET_INFORMATION_CLASS, *PHAL_SET_INFORMATION_CLASS;
typedef
NTSTATUS
(*pHalQuerySystemInformation)(
    _In_ HAL_QUERY_INFORMATION_CLASS InformationClass,
    _In_ ULONG BufferSize,
    _Out_writes_bytes_to_(BufferSize, *ReturnedLength) PVOID Buffer,
    _Out_ PULONG ReturnedLength
    );
typedef
NTSTATUS
(*pHalSetSystemInformation)(
    _In_ HAL_SET_INFORMATION_CLASS InformationClass,
    _In_ ULONG BufferSize,
    _In_ PVOID Buffer
    );
typedef
VOID
(FASTCALL *pHalExamineMBR)(
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ ULONG SectorSize,
    _In_ ULONG MBRTypeIdentifier,
    _Out_ PVOID *Buffer
    );
typedef
NTSTATUS
(FASTCALL *pHalIoReadPartitionTable)(
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ ULONG SectorSize,
    _In_ BOOLEAN ReturnRecognizedPartitions,
    _Out_ struct _DRIVE_LAYOUT_INFORMATION **PartitionBuffer
    );
typedef
NTSTATUS
(FASTCALL *pHalIoSetPartitionInformation)(
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ ULONG SectorSize,
    _In_ ULONG PartitionNumber,
    _In_ ULONG PartitionType
    );
typedef
NTSTATUS
(FASTCALL *pHalIoWritePartitionTable)(
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ ULONG SectorSize,
    _In_ ULONG SectorsPerTrack,
    _In_ ULONG NumberOfHeads,
    _In_ struct _DRIVE_LAYOUT_INFORMATION *PartitionBuffer
    );
typedef
NTSTATUS
(*pHalQueryBusSlots)(
    _In_ PBUS_HANDLER BusHandler,
    _In_ ULONG BufferSize,
    _Out_ PULONG SlotNumbers,
    _Out_ PULONG ReturnedLength
    );
typedef
NTSTATUS
(*pHalInitPnpDriver)(
    VOID
    );
typedef struct _PM_DISPATCH_TABLE {
    ULONG Signature;
    ULONG Version;
    PVOID Function[1];
} PM_DISPATCH_TABLE, *PPM_DISPATCH_TABLE;
typedef
NTSTATUS
(*pHalInitPowerManagement)(
    _In_ PPM_DISPATCH_TABLE PmDriverDispatchTable,
    _Out_ PPM_DISPATCH_TABLE *PmHalDispatchTable
    );
typedef
struct _DMA_ADAPTER *
(*pHalGetDmaAdapter)(
    _In_opt_ PVOID PhysicalDeviceObject,
    _In_ struct _DEVICE_DESCRIPTION *DeviceDescriptor,
    _Out_ PULONG NumberOfMapRegisters
    );
typedef
NTSTATUS
(*pHalGetInterruptTranslator)(
    _In_ INTERFACE_TYPE ParentInterfaceType,
    _In_ ULONG ParentBusNumber,
    _In_ INTERFACE_TYPE BridgeInterfaceType,
    _In_ USHORT Size,
    _In_ USHORT Version,
    _Out_ PTRANSLATOR_INTERFACE Translator,
    _Out_ PULONG BridgeBusNumber
    );
typedef
BOOLEAN
(*pHalTranslateBusAddress)(
    _In_ INTERFACE_TYPE InterfaceType,
    _In_ ULONG BusNumber,
    _In_ PHYSICAL_ADDRESS BusAddress,
    _Inout_ PULONG AddressSpace,
    _Out_ PPHYSICAL_ADDRESS TranslatedAddress
    );
typedef
NTSTATUS
(*pHalAssignSlotResources) (
    _In_ PUNICODE_STRING RegistryPath,
    _In_ PUNICODE_STRING DriverClassName OPTIONAL,
    _In_ PDRIVER_OBJECT DriverObject,
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ INTERFACE_TYPE BusType,
    _In_ ULONG BusNumber,
    _In_ ULONG SlotNumber,
    _Inout_ PCM_RESOURCE_LIST *AllocatedResources
    );
typedef
VOID
(*pHalHaltSystem) (
    VOID
    );
typedef
BOOLEAN
(*pHalResetDisplay) (
    VOID
    );
typedef struct _MAP_REGISTER_ENTRY {
    PVOID MapRegister;
    BOOLEAN WriteToDevice;
} MAP_REGISTER_ENTRY, *PMAP_REGISTER_ENTRY;
typedef
UCHAR
(*pHalVectorToIDTEntry) (
    ULONG Vector
);
typedef
BOOLEAN
(*pHalFindBusAddressTranslation) (
    _In_ PHYSICAL_ADDRESS BusAddress,
    _Inout_ PULONG AddressSpace,
    _Out_ PPHYSICAL_ADDRESS TranslatedAddress,
    _Inout_ PULONG_PTR Context,
    _In_ BOOLEAN NextBus
    );
typedef
NTSTATUS
(*pHalStartMirroring)(
    VOID
    );
typedef
NTSTATUS
(*pHalEndMirroring)(
    _In_ ULONG PassNumber
    );
typedef
NTSTATUS
(*pHalMirrorPhysicalMemory)(
    _In_ PHYSICAL_ADDRESS PhysicalAddress,
    _In_ LARGE_INTEGER NumberOfBytes
    );
typedef
NTSTATUS
(*pHalMirrorVerify)(
    _In_ PHYSICAL_ADDRESS PhysicalAddress,
    _In_ LARGE_INTEGER NumberOfBytes
    );
typedef struct {
    UCHAR Type;
    BOOLEAN Valid;
    union {
        UCHAR Reserved[2];
        struct {
            UCHAR BitWidth;
            UCHAR AccessSize;
        };
    };
    PUCHAR TranslatedAddress;
    ULONG Length;
} DEBUG_DEVICE_ADDRESS, *PDEBUG_DEVICE_ADDRESS;
typedef struct {
    PHYSICAL_ADDRESS Start;
    PHYSICAL_ADDRESS MaxEnd;
    PVOID VirtualAddress;
    ULONG Length;
    BOOLEAN Cached;
    BOOLEAN Aligned;
} DEBUG_MEMORY_REQUIREMENTS, *PDEBUG_MEMORY_REQUIREMENTS;
typedef enum {
    KdNameSpacePCI,
    KdNameSpaceACPI,
    KdNameSpaceAny,
    KdNameSpaceNone,
    KdNameSpaceMax,
} KD_NAMESPACE_ENUM, *PKD_NAMESPACE_ENUM;
typedef enum {
    KdConfigureDeviceAndContinue,
    KdSkipDeviceAndContinue,
    KdConfigureDeviceAndStop,
    KdSkipDeviceAndStop,
} KD_CALLBACK_ACTION, *PKD_CALLBACK_ACTION;
typedef struct _DEBUG_TRANSPORT_DATA {
    ULONG HwContextSize;
    BOOLEAN UseSerialFraming;
    BOOLEAN ValidUSBCoreId;
    UCHAR USBCoreId;
} DEBUG_TRANSPORT_DATA, *PDEBUG_TRANSPORT_DATA;
typedef struct _DEBUG_DEVICE_DESCRIPTOR {
    ULONG Bus;
    ULONG Slot;
    USHORT Segment;
    USHORT VendorID;
    USHORT DeviceID;
    UCHAR BaseClass;
    UCHAR SubClass;
    UCHAR ProgIf;
    union {
        UCHAR Flags;
        struct {
            UCHAR DbgHalScratchAllocated : 1;
            UCHAR DbgBarsMapped : 1;
            UCHAR DbgScratchAllocated : 1;
        };
    };
    BOOLEAN Initialized;
    BOOLEAN Configured;
    DEBUG_DEVICE_ADDRESS BaseAddress[MAXIMUM_DEBUG_BARS];
    DEBUG_MEMORY_REQUIREMENTS Memory;
    ULONG Dbg2TableIndex;
    USHORT PortType;
    USHORT PortSubtype;
    PVOID OemData;
    ULONG OemDataLength;
    KD_NAMESPACE_ENUM NameSpace;
    PWCHAR NameSpacePath;
    ULONG NameSpacePathLength;
    ULONG TransportType;
    DEBUG_TRANSPORT_DATA TransportData;
} DEBUG_DEVICE_DESCRIPTOR, *PDEBUG_DEVICE_DESCRIPTOR;
typedef struct _PCI_DEBUGGING_DEVICE_IN_USE {
    USHORT Segment;
    ULONG Bus;
    ULONG Slot;
} PCI_DEBUGGING_DEVICE_IN_USE, *PPCI_DEBUGGING_DEVICE_IN_USE;
typedef struct _ACPI_DEBUGGING_DEVICE_IN_USE {
    ULONG NameSpacePathLength;
    WCHAR NameSpacePath[ANYSIZE_ARRAY];
} ACPI_DEBUGGING_DEVICE_IN_USE, *PACPI_DEBUGGING_DEVICE_IN_USE;
typedef struct _DEBUGGING_DEVICE_IN_USE {
    KD_NAMESPACE_ENUM NameSpace;
    ULONG StructureLength;
    union {
        ACPI_DEBUGGING_DEVICE_IN_USE AcpiDevice;
        PCI_DEBUGGING_DEVICE_IN_USE PciDevice;
    };
} DEBUGGING_DEVICE_IN_USE, *PDEBUGGING_DEVICE_IN_USE;
typedef struct _DEBUGGING_DEVICE_IN_USE_INFORMATION {
    ULONG DeviceCount;
    DEBUGGING_DEVICE_IN_USE Device[ANYSIZE_ARRAY];
} DEBUGGING_DEVICE_IN_USE_INFORMATION, *PDEBUGGING_DEVICE_IN_USE_INFORMATION;
typedef
KD_CALLBACK_ACTION
(*PDEBUG_DEVICE_FOUND_FUNCTION) (
    PDEBUG_DEVICE_DESCRIPTOR Device
    );
typedef
NTSTATUS
(*pKdEnumerateDebuggingDevices) (
    _In_ PVOID LoaderBlock,
    _Inout_ PDEBUG_DEVICE_DESCRIPTOR Device,
    _In_ PDEBUG_DEVICE_FOUND_FUNCTION Callback
    );
typedef
NTSTATUS
(*pKdSetupPciDeviceForDebugging)(
    _In_ PVOID LoaderBlock, OPTIONAL
    _Inout_ PDEBUG_DEVICE_DESCRIPTOR PciDevice
);
typedef
NTSTATUS
(*pKdReleasePciDeviceForDebugging)(
    _Inout_ PDEBUG_DEVICE_DESCRIPTOR PciDevice
);
typedef
NTSTATUS
(*pKdSetupIntegratedDeviceForDebugging)(
    _In_ PVOID LoaderBlock, OPTIONAL
    _Inout_ PDEBUG_DEVICE_DESCRIPTOR IntegratedDevice
);
typedef
NTSTATUS
(*pKdReleaseIntegratedDeviceForDebugging)(
    _Inout_ PDEBUG_DEVICE_DESCRIPTOR IntegratedDevice
);
typedef
PVOID
(*pKdGetAcpiTablePhase0)(
    _In_ struct _LOADER_PARAMETER_BLOCK *LoaderBlock,
    _In_ ULONG Signature
    );
typedef
VOID
(*pKdCheckPowerButton)(
    VOID
    );
typedef
VOID
(*pHalEndOfBoot)(
    VOID
    );
typedef
PVOID
(*pKdMapPhysicalMemory64)(
    _In_ PHYSICAL_ADDRESS PhysicalAddress,
    _In_ ULONG NumberPages,
    _In_ BOOLEAN FlushCurrentTLB
    );
typedef
VOID
(*pKdUnmapVirtualAddress)(
    _In_ PVOID VirtualAddress,
    _In_ ULONG NumberPages,
    _In_ BOOLEAN FlushCurrentTLB
    );
typedef
ULONG
(*pKdGetPciDataByOffset)(
    _In_ ULONG BusNumber,
    _In_ ULONG SlotNumber,
    _Out_writes_bytes_(Length) PVOID Buffer,
    _In_ ULONG Offset,
    _In_ ULONG Length
    );
typedef
ULONG
(*pKdSetPciDataByOffset)(
    _In_ ULONG BusNumber,
    _In_ ULONG SlotNumber,
    _In_reads_bytes_(Length) PVOID Buffer,
    _In_ ULONG Offset,
    _In_ ULONG Length
    );
typedef
PVOID
(*pHalGetAcpiTable)(
    _In_ ULONG Signature,
    _In_opt_ PCSTR OemId,
    _In_opt_ PCSTR OemTableId
    );
typedef
VOID
(*PCI_ERROR_HANDLER_CALLBACK)(
    VOID
    );
typedef
VOID
(*pHalSetPciErrorHandlerCallback)(
    _In_ PCI_ERROR_HANDLER_CALLBACK Callback
    );
typedef struct {
    ULONG Version;
    pHalQuerySystemInformation HalQuerySystemInformation;
    pHalSetSystemInformation HalSetSystemInformation;
    pHalQueryBusSlots HalQueryBusSlots;
    ULONG Spare1;
    pHalExamineMBR HalExamineMBR;
    pHalIoReadPartitionTable HalIoReadPartitionTable;
    pHalIoSetPartitionInformation HalIoSetPartitionInformation;
    pHalIoWritePartitionTable HalIoWritePartitionTable;
    pHalHandlerForBus HalReferenceHandlerForBus;
    pHalReferenceBusHandler HalReferenceBusHandler;
    pHalReferenceBusHandler HalDereferenceBusHandler;
    pHalInitPnpDriver HalInitPnpDriver;
    pHalInitPowerManagement HalInitPowerManagement;
    pHalGetDmaAdapter HalGetDmaAdapter;
    pHalGetInterruptTranslator HalGetInterruptTranslator;
    pHalStartMirroring HalStartMirroring;
    pHalEndMirroring HalEndMirroring;
    pHalMirrorPhysicalMemory HalMirrorPhysicalMemory;
    pHalEndOfBoot HalEndOfBoot;
    pHalMirrorVerify HalMirrorVerify;
    pHalGetAcpiTable HalGetCachedAcpiTable;
    pHalSetPciErrorHandlerCallback HalSetPciErrorHandlerCallback;
} HAL_DISPATCH, *PHAL_DISPATCH;
extern PHAL_DISPATCH HalDispatchTable;
typedef struct _HAL_BUS_INFORMATION{
    INTERFACE_TYPE BusType;
    BUS_DATA_TYPE ConfigurationType;
    ULONG BusNumber;
    ULONG Reserved;
} HAL_BUS_INFORMATION, *PHAL_BUS_INFORMATION;
typedef enum _HAL_DISPLAY_BIOS_INFORMATION {
    HalDisplayInt10Bios,
    HalDisplayEmulatedBios,
    HalDisplayNoBios
} HAL_DISPLAY_BIOS_INFORMATION, *PHAL_DISPLAY_BIOS_INFORMATION;
typedef struct _HAL_POWER_INFORMATION {
    ULONG TBD;
} HAL_POWER_INFORMATION, *PHAL_POWER_INFORMATION;
typedef struct _HAL_PROCESSOR_SPEED_INFO {
    ULONG ProcessorSpeed;
} HAL_PROCESSOR_SPEED_INFORMATION, *PHAL_PROCESSOR_SPEED_INFORMATION;
typedef struct _HAL_CALLBACKS {
    PCALLBACK_OBJECT SetSystemInformation;
    PCALLBACK_OBJECT BusCheck;
} HAL_CALLBACKS, *PHAL_CALLBACKS;
typedef struct _HAL_PROCESSOR_FEATURE {
    ULONG UsableFeatureBits;
} HAL_PROCESSOR_FEATURE;
typedef
NTSTATUS
(*PHALIOREADWRITEHANDLER)(
    _In_ BOOLEAN fRead,
    _In_ ULONG dwAddr,
    _In_ ULONG dwSize,
    _Inout_ PULONG pdwData
    );
typedef struct _HAL_AMLI_BAD_IO_ADDRESS_LIST
{
    ULONG BadAddrBegin;
    ULONG BadAddrSize;
    ULONG OSVersionTrigger;
    PHALIOREADWRITEHANDLER IOHandler;
} HAL_AMLI_BAD_IO_ADDRESS_LIST, *PHAL_AMLI_BAD_IO_ADDRESS_LIST;
typedef
VOID
(*PHALMCAINTERFACELOCK)(
    VOID
    );
typedef
VOID
(*PHALMCAINTERFACEUNLOCK)(
    VOID
    );
typedef
NTSTATUS
(*PHALMCAINTERFACEREADREGISTER)(
    _In_ UCHAR BankNumber,
    _Inout_ PVOID Exception
    );
typedef struct _HAL_MCA_INTERFACE {
    PHALMCAINTERFACELOCK Lock;
    PHALMCAINTERFACEUNLOCK Unlock;
    PHALMCAINTERFACEREADREGISTER ReadRegister;
} HAL_MCA_INTERFACE;
typedef enum {
    ApicDestinationModePhysical = 1,
    ApicDestinationModeLogicalFlat,
    ApicDestinationModeLogicalClustered,
    ApicDestinationModeUnknown
} HAL_APIC_DESTINATION_MODE, *PHAL_APIC_DESTINATION_MODE;
struct _KTRAP_FRAME;
struct _KEXCEPTION_FRAME;
typedef
ERROR_SEVERITY
(*PDRIVER_EXCPTN_CALLBACK) (
    _In_ PVOID Context,
    _In_ struct _KTRAP_FRAME *TrapFrame,
    _In_ struct _KEXCEPTION_FRAME *ExceptionFrame,
    _In_ PMCA_EXCEPTION Exception
);
typedef PDRIVER_EXCPTN_CALLBACK PDRIVER_MCA_EXCEPTION_CALLBACK;
typedef struct _MCA_DRIVER_INFO {
    PDRIVER_MCA_EXCEPTION_CALLBACK ExceptionCallback;
    PKDEFERRED_ROUTINE DpcCallback;
    PVOID DeviceContext;
} MCA_DRIVER_INFO, *PMCA_DRIVER_INFO;
typedef struct _HAL_ERROR_INFO {
    ULONG Version;
    ULONG InitMaxSize;
    ULONG McaMaxSize;
    ULONG McaPreviousEventsCount;
    ULONG McaCorrectedEventsCount;
    ULONG McaKernelDeliveryFails;
    ULONG McaDriverDpcQueueFails;
    ULONG McaReserved;
    ULONG CmcMaxSize;
    ULONG CmcPollingInterval;
    ULONG CmcInterruptsCount;
    ULONG CmcKernelDeliveryFails;
    ULONG CmcDriverDpcQueueFails;
    ULONG CmcGetStateFails;
    ULONG CmcClearStateFails;
    ULONG CmcReserved;
    ULONGLONG CmcLogId;
    ULONG CpeMaxSize;
    ULONG CpePollingInterval;
    ULONG CpeInterruptsCount;
    ULONG CpeKernelDeliveryFails;
    ULONG CpeDriverDpcQueueFails;
    ULONG CpeGetStateFails;
    ULONG CpeClearStateFails;
    ULONG CpeInterruptSources;
    ULONGLONG CpeLogId;
    ULONGLONG KernelReserved[4];
} HAL_ERROR_INFO, *PHAL_ERROR_INFO;
typedef
VOID
(*PDRIVER_CMC_EXCEPTION_CALLBACK) (
    _In_ PVOID Context,
    _In_ PCMC_EXCEPTION CmcLog
);
typedef
VOID
(*PDRIVER_CPE_EXCEPTION_CALLBACK) (
    _In_ PVOID Context,
    _In_ PCPE_EXCEPTION CmcLog
);
typedef struct _CMC_DRIVER_INFO {
    PDRIVER_CMC_EXCEPTION_CALLBACK ExceptionCallback;
    PKDEFERRED_ROUTINE DpcCallback;
    PVOID DeviceContext;
} CMC_DRIVER_INFO, *PCMC_DRIVER_INFO;
typedef struct _CPE_DRIVER_INFO {
    PDRIVER_CPE_EXCEPTION_CALLBACK ExceptionCallback;
    PKDEFERRED_ROUTINE DpcCallback;
    PVOID DeviceContext;
} CPE_DRIVER_INFO, *PCPE_DRIVER_INFO;
typedef struct _HAL_PLATFORM_INFORMATION {
    ULONG PlatformFlags;
} HAL_PLATFORM_INFORMATION, *PHAL_PLATFORM_INFORMATION;
DECLSPEC_DEPRECATED_DDK
NTSTATUS
HalGetScatterGatherList (
    _In_ PADAPTER_OBJECT DmaAdapter,
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ PMDL Mdl,
    _In_ PVOID CurrentVa,
    _In_ ULONG Length,
    _In_ PDRIVER_LIST_CONTROL ExecutionRoutine,
    _In_ PVOID Context,
    _In_ BOOLEAN WriteToDevice
    );
DECLSPEC_DEPRECATED_DDK
VOID
HalPutScatterGatherList (
    _In_ PADAPTER_OBJECT DmaAdapter,
    _In_ PSCATTER_GATHER_LIST ScatterGather,
    _In_ BOOLEAN WriteToDevice
    );
DECLSPEC_DEPRECATED_DDK
VOID
HalPutDmaAdapter(
    _In_ PADAPTER_OBJECT DmaAdapter
    );
typedef struct _WHEA_ERROR_SOURCE_DESCRIPTOR *PWHEA_ERROR_SOURCE_DESCRIPTOR;
typedef struct _WHEA_ERROR_RECORD *PWHEA_ERROR_RECORD;
NTHALAPI
VOID
HalBugCheckSystem (
    _In_ PWHEA_ERROR_SOURCE_DESCRIPTOR ErrorSource,
    _In_ PWHEA_ERROR_RECORD ErrorRecord
    );
typedef enum _PHYSICAL_COUNTER_RESOURCE_DESCRIPTOR_TYPE {
    ResourceTypeSingle = 0,
    ResourceTypeRange,
    ResourceTypeExtendedCounterConfiguration,
    ResourceTypeOverflow,
    ResourceTypeEventBuffer,
    ResourceTypeMax
} PHYSICAL_COUNTER_RESOURCE_DESCRIPTOR_TYPE;
typedef VOID (*PPHYSICAL_COUNTER_OVERFLOW_HANDLER)(
    _In_ ULONGLONG OverflowBits,
    _In_ HANDLE OwningHandle
    );
typedef VOID (*PPHYSICAL_COUNTER_EVENT_BUFFER_OVERFLOW_HANDLER)(
    _In_ PVOID EventBuffer,
    _In_ SIZE_T EntrySize,
    _In_ SIZE_T NumberOfEntries,
    _In_ HANDLE OwningHandle
    );
typedef struct _PHYSICAL_COUNTER_EVENT_BUFFER_CONFIGURATION {
    PPHYSICAL_COUNTER_EVENT_BUFFER_OVERFLOW_HANDLER OverflowHandler;
    ULONG CustomEventBufferEntrySize;
    ULONG EventThreshold;
} PHYSICAL_COUNTER_EVENT_BUFFER_CONFIGURATION, *PPHYSICAL_COUNTER_EVENT_BUFFER_CONFIGURATION;
typedef struct _PHYSICAL_COUNTER_RESOURCE_DESCRIPTOR {
    PHYSICAL_COUNTER_RESOURCE_DESCRIPTOR_TYPE Type;
    ULONG Flags;
    union {
        ULONG CounterIndex;
        struct {
            ULONG Begin;
            ULONG End;
        } Range;
        PPHYSICAL_COUNTER_OVERFLOW_HANDLER OverflowHandler;
        PHYSICAL_COUNTER_EVENT_BUFFER_CONFIGURATION EventBufferConfiguration;
    } u;
} PHYSICAL_COUNTER_RESOURCE_DESCRIPTOR, *PPHYSICAL_COUNTER_RESOURCE_DESCRIPTOR;
typedef struct _PHYSICAL_COUNTER_RESOURCE_LIST {
    ULONG Count;
    PHYSICAL_COUNTER_RESOURCE_DESCRIPTOR Descriptors[ANYSIZE_ARRAY];
} PHYSICAL_COUNTER_RESOURCE_LIST, *PPHYSICAL_COUNTER_RESOURCE_LIST;
NTHALAPI
NTSTATUS
HalAllocateHardwareCounters (
    _In_reads_opt_(GroupCount) PGROUP_AFFINITY GroupAffinty,
    _In_ ULONG GroupCount,
    _In_opt_ PPHYSICAL_COUNTER_RESOURCE_LIST ResourceList,
    _Out_ PHANDLE CounterSetHandle
    );
NTHALAPI
NTSTATUS
HalFreeHardwareCounters (
    _In_ HANDLE CounterSetHandle
    );
_Must_inspect_result_
NTKERNELAPI
BOOLEAN
FsRtlIsTotalDeviceFailure(
    _In_ NTSTATUS Status
    );
typedef struct _PCI_AGP_CAPABILITY {
    PCI_CAPABILITIES_HEADER Header;
    USHORT Minor:4;
    USHORT Major:4;
    USHORT Rsvd1:8;
    struct _PCI_AGP_STATUS {
        ULONG Rate:3;
        ULONG Agp3Mode:1;
        ULONG FastWrite:1;
        ULONG FourGB:1;
        ULONG HostTransDisable:1;
        ULONG Gart64:1;
        ULONG ITA_Coherent:1;
        ULONG SideBandAddressing:1;
        ULONG CalibrationCycle:3;
        ULONG AsyncRequestSize:3;
        ULONG Rsvd1:1;
        ULONG Isoch:1;
        ULONG Rsvd2:6;
        ULONG RequestQueueDepthMaximum:8;
    } AGPStatus;
    struct _PCI_AGP_COMMAND {
        ULONG Rate:3;
        ULONG Rsvd1:1;
        ULONG FastWriteEnable:1;
        ULONG FourGBEnable:1;
        ULONG Rsvd2:1;
        ULONG Gart64:1;
        ULONG AGPEnable:1;
        ULONG SBAEnable:1;
        ULONG CalibrationCycle:3;
        ULONG AsyncReqSize:3;
        ULONG Rsvd3:8;
        ULONG RequestQueueDepth:8;
    } AGPCommand;
} PCI_AGP_CAPABILITY, *PPCI_AGP_CAPABILITY;
typedef enum _EXTENDED_AGP_REGISTER {
    IsochStatus,
    AgpControl,
    ApertureSize,
    AperturePageSize,
    GartLow,
    GartHigh,
    IsochCommand
} EXTENDED_AGP_REGISTER, *PEXTENDED_AGP_REGISTER;
typedef struct _PCI_AGP_ISOCH_STATUS {
    ULONG ErrorCode: 2;
    ULONG Rsvd1: 1;
    ULONG Isoch_L: 3;
    ULONG Isoch_Y: 2;
    ULONG Isoch_N: 8;
    ULONG Rsvd2: 16;
} PCI_AGP_ISOCH_STATUS, *PPCI_AGP_ISOCH_STATUS;
typedef struct _PCI_AGP_CONTROL {
    ULONG Rsvd1: 7;
    ULONG GTLB_Enable: 1;
    ULONG AP_Enable: 1;
    ULONG CAL_Disable: 1;
    ULONG Rsvd2: 22;
} PCI_AGP_CONTROL, *PPCI_AGP_CONTROL;
typedef struct _PCI_AGP_APERTURE_PAGE_SIZE {
    USHORT PageSizeMask: 11;
    USHORT Rsvd1: 1;
    USHORT PageSizeSelect: 4;
} PCI_AGP_APERTURE_PAGE_SIZE, *PPCI_AGP_APERTURE_PAGE_SIZE;
typedef struct _PCI_AGP_ISOCH_COMMAND {
    USHORT Rsvd1: 6;
    USHORT Isoch_Y: 2;
    USHORT Isoch_N: 8;
} PCI_AGP_ISOCH_COMMAND, *PPCI_AGP_ISOCH_COMMAND;
typedef struct PCI_AGP_EXTENDED_CAPABILITY {
    PCI_AGP_ISOCH_STATUS IsochStatus;
    PCI_AGP_CONTROL AgpControl;
    USHORT ApertureSize;
    PCI_AGP_APERTURE_PAGE_SIZE AperturePageSize;
    ULONG GartLow;
    ULONG GartHigh;
    PCI_AGP_ISOCH_COMMAND IsochCommand;
} PCI_AGP_EXTENDED_CAPABILITY, *PPCI_AGP_EXTENDED_CAPABILITY;
typedef struct _PCIX_BRIDGE_CAPABILITY {
    PCI_CAPABILITIES_HEADER Header;
    union {
        struct {
            USHORT Bus64Bit:1;
            USHORT Bus133MHzCapable:1;
            USHORT SplitCompletionDiscarded:1;
            USHORT UnexpectedSplitCompletion:1;
            USHORT SplitCompletionOverrun:1;
            USHORT SplitRequestDelayed:1;
            USHORT BusModeFrequency:4;
            USHORT Rsvd:2;
            USHORT Version:2;
            USHORT Bus266MHzCapable:1;
            USHORT Bus533MHzCapable:1;
        } DUMMYSTRUCTNAME;
        USHORT AsUSHORT;
    } SecondaryStatus;
    union {
        struct {
            ULONG FunctionNumber:3;
            ULONG DeviceNumber:5;
            ULONG BusNumber:8;
            ULONG Device64Bit:1;
            ULONG Device133MHzCapable:1;
            ULONG SplitCompletionDiscarded:1;
            ULONG UnexpectedSplitCompletion:1;
            ULONG SplitCompletionOverrun:1;
            ULONG SplitRequestDelayed:1;
            ULONG Rsvd:7;
            ULONG DIMCapable:1;
            ULONG Device266MHzCapable:1;
            ULONG Device533MHzCapable:1;
        } DUMMYSTRUCTNAME;
        ULONG AsULONG;
    } BridgeStatus;
    USHORT UpstreamSplitTransactionCapacity;
    USHORT UpstreamSplitTransactionLimit;
    USHORT DownstreamSplitTransactionCapacity;
    USHORT DownstreamSplitTransactionLimit;
    union {
        struct {
            ULONG SelectSecondaryRegisters:1;
            ULONG ErrorPresentInOtherBank:1;
            ULONG AdditionalCorrectableError:1;
            ULONG AdditionalUncorrectableError:1;
            ULONG ErrorPhase:3;
            ULONG ErrorCorrected:1;
            ULONG Syndrome:8;
            ULONG ErrorFirstCommand:4;
            ULONG ErrorSecondCommand:4;
            ULONG ErrorUpperAttributes:4;
            ULONG ControlUpdateEnable:1;
            ULONG Rsvd:1;
            ULONG DisableSingleBitCorrection:1;
            ULONG EccMode:1;
        } DUMMYSTRUCTNAME;
        ULONG AsULONG;
    } EccControlStatus;
    ULONG EccFirstAddress;
    ULONG EccSecondAddress;
    ULONG EccAttribute;
} PCIX_BRIDGE_CAPABILITY, *PPCIX_BRIDGE_CAPABILITY;
typedef struct _PCI_SUBSYSTEM_IDS_CAPABILITY {
    PCI_CAPABILITIES_HEADER Header;
    USHORT Reserved;
    USHORT SubVendorID;
    USHORT SubSystemID;
} PCI_SUBSYSTEM_IDS_CAPABILITY, *PPCI_SUBSYSTEM_IDS_CAPABILITY;
typedef struct _PCI_ADVANCED_FEATURES_CAPABILITY {
    PCI_CAPABILITIES_HEADER Header;
    UCHAR Length;
    union {
        struct {
            UCHAR FunctionLevelResetSupported:1;
            UCHAR TransactionsPendingSupported:1;
            UCHAR Rsvd:6;
        } DUMMYSTRUCTNAME;
        UCHAR AsUCHAR;
    } Capabilities;
    union {
        struct {
            UCHAR InitiateFunctionLevelReset:1;
            UCHAR Rsvd:7;
        } DUMMYSTRUCTNAME;
        UCHAR AsUCHAR;
    } Control;
    union {
        struct {
            UCHAR TransactionsPending:1;
            UCHAR Rsvd:7;
        } DUMMYSTRUCTNAME;
        UCHAR AsUCHAR;
    } Status;
} PCI_ADVANCED_FEATURES_CAPABILITY, *PPCI_ADVANCED_FEATURES_CAPABILITY;
typedef struct _PCI_ROOT_BUS_OSC_SUPPORT_FIELD {
    union {
        struct {
            ULONG ExtendedConfigOpRegions:1;
            ULONG ActiveStatePowerManagement:1;
            ULONG ClockPowerManagement:1;
            ULONG SegmentGroups:1;
            ULONG MessageSignaledInterrupts:1;
            ULONG OptimizedBufferFlushAndFill:1;
            ULONG AspmOptionality:1;
            ULONG Reserved:25;
        } DUMMYSTRUCTNAME;
        ULONG AsULONG;
    } u;
} PCI_ROOT_BUS_OSC_SUPPORT_FIELD, *PPCI_ROOT_BUS_OSC_SUPPORT_FIELD;
typedef struct _PCI_ROOT_BUS_OSC_CONTROL_FIELD {
    union {
        struct {
            ULONG ExpressNativeHotPlug:1;
            ULONG ShpcNativeHotPlug:1;
            ULONG ExpressNativePME:1;
            ULONG ExpressAdvancedErrorReporting:1;
            ULONG ExpressCapabilityStructure:1;
            ULONG LatencyToleranceReporting:1;
            ULONG Reserved:26;
        } DUMMYSTRUCTNAME;
        ULONG AsULONG;
    } u;
} PCI_ROOT_BUS_OSC_CONTROL_FIELD, *PPCI_ROOT_BUS_OSC_CONTROL_FIELD;
typedef struct _PCI_FIRMWARE_BUS_CAPS {
    USHORT Type;
    USHORT Length;
    struct {
        UCHAR SixtyFourBitDevice:1;
        UCHAR PciXMode1EccCapable:1;
        UCHAR DeviceIdMessagingCapable:1;
        UCHAR ObffWakeSignalCapable:1;
        UCHAR Reserved1:4;
    } DUMMYSTRUCTNAME;
    UCHAR CurrentSpeedAndMode;
    UCHAR SupportedSpeedsAndModesLowByte;
    UCHAR SupportedSpeedsAndModesHighByte;
    UCHAR Voltage;
    UCHAR Reserved2[7];
} PCI_FIRMWARE_BUS_CAPS, *PPCI_FIRMWARE_BUS_CAPS;
typedef struct _PCI_FIRMWARE_BUS_CAPS_RETURN_BUFFER {
    USHORT Version;
    USHORT Status;
    ULONG Length;
    PCI_FIRMWARE_BUS_CAPS Caps;
} PCI_FIRMWARE_BUS_CAPS_RETURN_BUFFER, *PPCI_FIRMWARE_BUS_CAPS_RETURN_BUFFER;
typedef enum _PCI_HARDWARE_INTERFACE {
    PciConventional,
    PciXMode1,
    PciXMode2,
    PciExpress
} PCI_HARDWARE_INTERFACE, *PPCI_HARDWARE_INTERFACE;
typedef enum {
    BusWidth32Bits,
    BusWidth64Bits
} PCI_BUS_WIDTH;
typedef struct _PCI_ROOT_BUS_HARDWARE_CAPABILITY {
    PCI_HARDWARE_INTERFACE SecondaryInterface;
    struct {
        BOOLEAN BusCapabilitiesFound;
        ULONG CurrentSpeedAndMode;
        ULONG SupportedSpeedsAndModes;
        BOOLEAN DeviceIDMessagingCapable;
        PCI_BUS_WIDTH SecondaryBusWidth;
    } DUMMYSTRUCTNAME;
    PCI_ROOT_BUS_OSC_SUPPORT_FIELD OscFeatureSupport;
    PCI_ROOT_BUS_OSC_CONTROL_FIELD OscControlRequest;
    PCI_ROOT_BUS_OSC_CONTROL_FIELD OscControlGranted;
} PCI_ROOT_BUS_HARDWARE_CAPABILITY, *PPCI_ROOT_BUS_HARDWARE_CAPABILITY;
typedef struct _PCI_FPB_CAPABILITY_HEADER {
    PCI_CAPABILITIES_HEADER Header;
    USHORT Reserved;
} PCI_FPB_CAPABILITY_HEADER, *PPCI_FPB_CAPABILITY_HEADER;
typedef union _PCI_FPB_CAPABILITIES_REGISTER {
    struct {
        ULONG RidDecodeMechanismSupported:1;
        ULONG MemLowDecodeMechanismSupported:1;
        ULONG MemHighDecodeMechanismSupported:1;
        ULONG NumSecDev:5;
        ULONG RidVectorSizeSupported:3;
        ULONG Rsvd0:5;
        ULONG MemLowVectorSizeSupported:3;
        ULONG Rsvd1:5;
        ULONG MemHighVectorSizeSupported:3;
        ULONG Rsvd2:5;
    } DUMMYSTRUCTNAME;
    ULONG AsULONG;
} PCI_FPB_CAPABILITIES_REGISTER, *PPCI_FPB_CAPABILITIES_REGISTER;
typedef union _PCI_FPB_RID_VECTOR_CONTROL1_REGISTER {
    struct {
        ULONG RidDecodeMechanismEnable:1;
        ULONG Rsvd0:3;
        ULONG RidVectorGranularity:4;
        ULONG Rsvd1:11;
        ULONG RidVectorStart:13;
    } DUMMYSTRUCTNAME;
    ULONG AsULONG;
} PCI_FPB_RID_VECTOR_CONTROL1_REGISTER, *PPCI_FPB_RID_VECTOR_CONTROL1_REGISTER;
typedef union _PCI_FPB_RID_VECTOR_CONTROL2_REGISTER {
    struct {
        ULONG Rsvd0:3;
        ULONG RidSecondaryStart:13;
        ULONG Rsvd1:16;
    } DUMMYSTRUCTNAME;
    ULONG AsULONG;
} PCI_FPB_RID_VECTOR_CONTROL2_REGISTER, *PPCI_FPB_RID_VECTOR_CONTROL2_REGISTER;
typedef union _PCI_FPB_MEM_LOW_VECTOR_CONTROL_REGISTER {
    struct {
        ULONG MemLowDecodeMechanismEnable:1;
        ULONG Rsvd0:3;
        ULONG MemLowVectorGranularity:4;
        ULONG Rsvd1:12;
        ULONG MemLowVectorStart:12;
    } DUMMYSTRUCTNAME;
    ULONG AsULONG;
} PCI_FPB_MEM_LOW_VECTOR_CONTROL_REGISTER, *PPCI_FPB_MEM_LOW_VECTOR_CONTROL_REGISTER;
typedef union _PCI_FPB_MEM_HIGH_VECTOR_CONTROL1_REGISTER {
    struct {
        ULONG MemHighDecodeMechanismEnable:1;
        ULONG Rsvd0:3;
        ULONG MemHighVectorGranularity:4;
        ULONG Rsvd1:20;
        ULONG MemHighVectorStartLower:4;
    } DUMMYSTRUCTNAME;
    ULONG AsULONG;
} PCI_FPB_MEM_HIGH_VECTOR_CONTROL1_REGISTER, *PPCI_FPB_MEM_HIGH_VECTOR_CONTROL1_REGISTER;
typedef struct _PCI_FPB_MEM_HIGH_VECTOR_CONTROL2_REGISTER {
    ULONG MemHighVectorStartUpper;
} PCI_FPB_MEM_HIGH_VECTOR_CONTROL2_REGISTER, *PPCI_FPB_MEM_HIGH_VECTOR_CONTROL2_REGISTER;
typedef union _PCI_FPB_VECTOR_ACCESS_CONTROL_REGISTER {
    struct {
        ULONG VectorAccessOffset:8;
        ULONG Rsvd0:6;
        ULONG VectorSelect:2;
        ULONG Rsvd1:16;
    } DUMMYSTRUCTNAME;
    ULONG AsULONG;
} PCI_FPB_VECTOR_ACCESS_CONTROL_REGISTER, *PPCI_FPB_VECTOR_ACCESS_CONTROL_REGISTER;
typedef struct _PCI_FPB_VECTOR_ACCESS_DATA_REGISTER {
    ULONG VectorAccessData;
} PCI_FPB_VECTOR_ACCESS_DATA_REGISTER, *PPCI_FPB_VECTOR_ACCESS_DATA_REGISTER;
typedef struct _PCI_FPB_CAPABILITY {
    PCI_FPB_CAPABILITY_HEADER Header;
    PCI_FPB_CAPABILITIES_REGISTER CapabilitiesRegister;
    PCI_FPB_RID_VECTOR_CONTROL1_REGISTER RidVectorControl1Register;
    PCI_FPB_RID_VECTOR_CONTROL2_REGISTER RidVectorControl2Register;
    PCI_FPB_MEM_LOW_VECTOR_CONTROL_REGISTER MemLowVectorControlRegister;
    PCI_FPB_MEM_HIGH_VECTOR_CONTROL1_REGISTER MemHighVectorControl1Register;
    PCI_FPB_MEM_HIGH_VECTOR_CONTROL2_REGISTER MemHighVectorControl2Register;
    PCI_FPB_VECTOR_ACCESS_CONTROL_REGISTER VectorAccessControlRegister;
    PCI_FPB_VECTOR_ACCESS_DATA_REGISTER VectorAccessDataRegister;
} PCI_FPB_CAPABILITY, *PPCI_FPB_CAPABILITY;
typedef union _PCI_EXPRESS_CAPABILITIES_REGISTER {
    struct {
        USHORT CapabilityVersion:4;
        USHORT DeviceType:4;
        USHORT SlotImplemented:1;
        USHORT InterruptMessageNumber:5;
        USHORT Rsvd:2;
    } DUMMYSTRUCTNAME;
    USHORT AsUSHORT;
} PCI_EXPRESS_CAPABILITIES_REGISTER, *PPCI_EXPRESS_CAPABILITIES_REGISTER;
typedef union _PCI_EXPRESS_DEVICE_CAPABILITIES_REGISTER {
    struct {
        ULONG MaxPayloadSizeSupported:3;
        ULONG PhantomFunctionsSupported:2;
        ULONG ExtendedTagSupported:1;
        ULONG L0sAcceptableLatency:3;
        ULONG L1AcceptableLatency:3;
        ULONG Undefined:3;
        ULONG RoleBasedErrorReporting:1;
        ULONG Rsvd1:2;
        ULONG CapturedSlotPowerLimit:8;
        ULONG CapturedSlotPowerLimitScale:2;
        ULONG FunctionLevelResetCapability:1;
        ULONG Rsvd2:3;
    } DUMMYSTRUCTNAME;
    ULONG AsULONG;
} PCI_EXPRESS_DEVICE_CAPABILITIES_REGISTER, *PPCI_EXPRESS_DEVICE_CAPABILITIES_REGISTER;
typedef union _PCI_EXPRESS_DEVICE_CONTROL_REGISTER {
    struct {
        USHORT CorrectableErrorEnable:1;
        USHORT NonFatalErrorEnable:1;
        USHORT FatalErrorEnable:1;
        USHORT UnsupportedRequestErrorEnable:1;
        USHORT EnableRelaxedOrder:1;
        USHORT MaxPayloadSize:3;
        USHORT ExtendedTagEnable:1;
        USHORT PhantomFunctionsEnable:1;
        USHORT AuxPowerEnable:1;
        USHORT NoSnoopEnable:1;
        USHORT MaxReadRequestSize:3;
        USHORT BridgeConfigRetryEnable:1;
    } DUMMYSTRUCTNAME;
    struct {
        USHORT :15;
        USHORT InitiateFunctionLevelReset:1;
    } DUMMYSTRUCTNAME2;
    USHORT AsUSHORT;
} PCI_EXPRESS_DEVICE_CONTROL_REGISTER, *PPCI_EXPRESS_DEVICE_CONTROL_REGISTER;
typedef union _PCI_EXPRESS_DEVICE_STATUS_REGISTER {
    struct {
        USHORT CorrectableErrorDetected:1;
        USHORT NonFatalErrorDetected:1;
        USHORT FatalErrorDetected:1;
        USHORT UnsupportedRequestDetected:1;
        USHORT AuxPowerDetected:1;
        USHORT TransactionsPending:1;
        USHORT Rsvd:10;
    } DUMMYSTRUCTNAME;
    USHORT AsUSHORT;
} PCI_EXPRESS_DEVICE_STATUS_REGISTER, *PPCI_EXPRESS_DEVICE_STATUS_REGISTER;
typedef union _PCI_EXPRESS_LINK_CAPABILITIES_REGISTER {
    struct {
        ULONG MaximumLinkSpeed:4;
        ULONG MaximumLinkWidth:6;
        ULONG ActiveStatePMSupport:2;
        ULONG L0sExitLatency:3;
        ULONG L1ExitLatency:3;
        ULONG ClockPowerManagement:1;
        ULONG SurpriseDownErrorReportingCapable:1;
        ULONG DataLinkLayerActiveReportingCapable:1;
        ULONG LinkBandwidthNotificationCapability:1;
        ULONG AspmOptionalityCompliance:1;
        ULONG Rsvd:1;
        ULONG PortNumber:8;
    } DUMMYSTRUCTNAME;
    ULONG AsULONG;
} PCI_EXPRESS_LINK_CAPABILITIES_REGISTER, *PPCI_EXPRESS_LINK_CAPABILITIES_REGISTER;
typedef union _PCI_EXPRESS_LINK_CONTROL_REGISTER {
    struct {
        USHORT ActiveStatePMControl:2;
        USHORT Rsvd1:1;
        USHORT ReadCompletionBoundary:1;
        USHORT LinkDisable:1;
        USHORT RetrainLink:1;
        USHORT CommonClockConfig:1;
        USHORT ExtendedSynch:1;
        USHORT EnableClockPowerManagement:1;
        USHORT Rsvd2:7;
    } DUMMYSTRUCTNAME;
    USHORT AsUSHORT;
} PCI_EXPRESS_LINK_CONTROL_REGISTER, *PPCI_EXPRESS_LINK_CONTROL_REGISTER;
typedef union _PCI_EXPRESS_LINK_STATUS_REGISTER {
    struct {
        USHORT LinkSpeed:4;
        USHORT LinkWidth:6;
        USHORT Undefined:1;
        USHORT LinkTraining:1;
        USHORT SlotClockConfig:1;
        USHORT DataLinkLayerActive:1;
        USHORT Rsvd:2;
    } DUMMYSTRUCTNAME;
    USHORT AsUSHORT;
} PCI_EXPRESS_LINK_STATUS_REGISTER, *PPCI_EXPRESS_LINK_STATUS_REGISTER;
typedef union _PCI_EXPRESS_SLOT_CAPABILITIES_REGISTER {
    struct {
        ULONG AttentionButtonPresent:1;
        ULONG PowerControllerPresent:1;
        ULONG MRLSensorPresent:1;
        ULONG AttentionIndicatorPresent:1;
        ULONG PowerIndicatorPresent:1;
        ULONG HotPlugSurprise:1;
        ULONG HotPlugCapable:1;
        ULONG SlotPowerLimit:8;
        ULONG SlotPowerLimitScale:2;
        ULONG ElectromechanicalLockPresent:1;
        ULONG NoCommandCompletedSupport:1;
        ULONG PhysicalSlotNumber:13;
    } DUMMYSTRUCTNAME;
    ULONG AsULONG;
} PCI_EXPRESS_SLOT_CAPABILITIES_REGISTER, *PPCI_EXPRESS_SLOT_CAPABILITIES_REGISTER;
typedef union _PCI_EXPRESS_SLOT_CONTROL_REGISTER {
    struct {
        USHORT AttentionButtonEnable:1;
        USHORT PowerFaultDetectEnable:1;
        USHORT MRLSensorEnable:1;
        USHORT PresenceDetectEnable:1;
        USHORT CommandCompletedEnable:1;
        USHORT HotPlugInterruptEnable:1;
        USHORT AttentionIndicatorControl:2;
        USHORT PowerIndicatorControl:2;
        USHORT PowerControllerControl:1;
        USHORT ElectromechanicalLockControl:1;
        USHORT DataLinkStateChangeEnable:1;
        USHORT Rsvd:3;
    } DUMMYSTRUCTNAME;
    USHORT AsUSHORT;
} PCI_EXPRESS_SLOT_CONTROL_REGISTER, *PPCI_EXPRESS_SLOT_CONTROL_REGISTER;
typedef union _PCI_EXPRESS_SLOT_STATUS_REGISTER {
    struct {
        USHORT AttentionButtonPressed:1;
        USHORT PowerFaultDetected:1;
        USHORT MRLSensorChanged:1;
        USHORT PresenceDetectChanged:1;
        USHORT CommandCompleted:1;
        USHORT MRLSensorState:1;
        USHORT PresenceDetectState:1;
        USHORT ElectromechanicalLockEngaged:1;
        USHORT DataLinkStateChanged:1;
        USHORT Rsvd:7;
    } DUMMYSTRUCTNAME;
    USHORT AsUSHORT;
} PCI_EXPRESS_SLOT_STATUS_REGISTER, *PPCI_EXPRESS_SLOT_STATUS_REGISTER;
typedef union _PCI_EXPRESS_ROOT_CONTROL_REGISTER {
    struct {
        USHORT CorrectableSerrEnable:1;
        USHORT NonFatalSerrEnable:1;
        USHORT FatalSerrEnable:1;
        USHORT PMEInterruptEnable:1;
        USHORT CRSSoftwareVisibilityEnable:1;
        USHORT Rsvd:11;
    } DUMMYSTRUCTNAME;
    USHORT AsUSHORT;
} PCI_EXPRESS_ROOT_CONTROL_REGISTER, *PPCI_EXPRESS_ROOT_CONTROL_REGISTER;
typedef union _PCI_EXPRESS_ROOT_CAPABILITIES_REGISTER {
    struct {
        USHORT CRSSoftwareVisibility:1;
        USHORT Rsvd:15;
    } DUMMYSTRUCTNAME;
    USHORT AsUSHORT;
} PCI_EXPRESS_ROOT_CAPABILITIES_REGISTER, *PPCI_EXPRESS_ROOT_CAPABILITIES_REGISTER;
typedef union _PCI_EXPRESS_ROOT_STATUS_REGISTER {
    struct {
        ULONG PMERequestorId:16;
        ULONG PMEStatus:1;
        ULONG PMEPending:1;
        ULONG Rsvd:14;
    } DUMMYSTRUCTNAME;
    ULONG AsULONG;
} PCI_EXPRESS_ROOT_STATUS_REGISTER, *PPCI_EXPRESS_ROOT_STATUS_REGISTER;
typedef union _PCI_EXPRESS_DEVICE_CAPABILITIES_2_REGISTER {
    struct {
        ULONG CompletionTimeoutRangesSupported:4;
        ULONG CompletionTimeoutDisableSupported:1;
        ULONG AriForwardingSupported:1;
        ULONG AtomicOpRoutingSupported:1;
        ULONG AtomicOpCompleterSupported32Bit:1;
        ULONG AtomicOpCompleterSupported64Bit:1;
        ULONG CASCompleterSupported128Bit:1;
        ULONG NoROEnabledPRPRPassing:1;
        ULONG LTRMechanismSupported:1;
        ULONG TPHCompleterSupported:2;
        ULONG Rsvd:4;
        ULONG OBFFSupported:2;
        ULONG ExtendedFmtFieldSuported:1;
        ULONG EndEndTLPPrefixSupported:1;
        ULONG MaxEndEndTLPPrefixes:2;
        ULONG Rsvd2:8;
    } DUMMYSTRUCTNAME;
    ULONG AsULONG;
} PCI_EXPRESS_DEVICE_CAPABILITIES_2_REGISTER, *PPCI_EXPRESS_DEVICE_CAPABILITIES_2_REGISTER;
typedef union _PCI_EXPRESS_DEVICE_CONTROL_2_REGISTER {
    struct {
        USHORT CompletionTimeoutValue:4;
        USHORT CompletionTimeoutDisable:1;
        USHORT AriForwardingEnable:1;
        USHORT AtomicOpRequesterEnable:1;
        USHORT AtomicOpEgresBlocking:1;
        USHORT IDORequestEnable:1;
        USHORT IDOCompletionEnable:1;
        USHORT LTRMechanismEnable:1;
        USHORT Rsvd:2;
        USHORT OBFFEnable:2;
        USHORT EndEndTLPPrefixBlocking:1;
    } DUMMYSTRUCTNAME;
    USHORT AsUSHORT;
} PCI_EXPRESS_DEVICE_CONTROL_2_REGISTER, *PPCI_EXPRESS_DEVICE_CONTROL_2_REGISTER;
typedef union _PCI_EXPRESS_DEVICE_STATUS_2_REGISTER {
    struct {
        USHORT Rsvd:16;
    } DUMMYSTRUCTNAME;
    USHORT AsUSHORT;
} PCI_EXPRESS_DEVICE_STATUS_2_REGISTER, *PPCI_EXPRESS_DEVICE_STATUS_2_REGISTER;
typedef struct _PCI_EXPRESS_CAPABILITY {
    PCI_CAPABILITIES_HEADER Header;
    PCI_EXPRESS_CAPABILITIES_REGISTER ExpressCapabilities;
    PCI_EXPRESS_DEVICE_CAPABILITIES_REGISTER DeviceCapabilities;
    PCI_EXPRESS_DEVICE_CONTROL_REGISTER DeviceControl;
    PCI_EXPRESS_DEVICE_STATUS_REGISTER DeviceStatus;
    PCI_EXPRESS_LINK_CAPABILITIES_REGISTER LinkCapabilities;
    PCI_EXPRESS_LINK_CONTROL_REGISTER LinkControl;
    PCI_EXPRESS_LINK_STATUS_REGISTER LinkStatus;
    PCI_EXPRESS_SLOT_CAPABILITIES_REGISTER SlotCapabilities;
    PCI_EXPRESS_SLOT_CONTROL_REGISTER SlotControl;
    PCI_EXPRESS_SLOT_STATUS_REGISTER SlotStatus;
    PCI_EXPRESS_ROOT_CONTROL_REGISTER RootControl;
    PCI_EXPRESS_ROOT_CAPABILITIES_REGISTER RootCapabilities;
    PCI_EXPRESS_ROOT_STATUS_REGISTER RootStatus;
    PCI_EXPRESS_DEVICE_CAPABILITIES_2_REGISTER DeviceCapabilities2;
    PCI_EXPRESS_DEVICE_CONTROL_2_REGISTER DeviceControl2;
    PCI_EXPRESS_DEVICE_STATUS_2_REGISTER DeviceStatus2;
} PCI_EXPRESS_CAPABILITY, *PPCI_EXPRESS_CAPABILITY;
typedef enum {
    MRLClosed = 0,
    MRLOpen
} PCI_EXPRESS_MRL_STATE;
typedef enum {
    SlotEmpty = 0,
    CardPresent
} PCI_EXPRESS_CARD_PRESENCE;
typedef enum {
    IndicatorOn = 1,
    IndicatorBlink,
    IndicatorOff
} PCI_EXPRESS_INDICATOR_STATE;
typedef enum {
    PowerOn = 0,
    PowerOff
} PCI_EXPRESS_POWER_STATE;
typedef enum {
    NoAspmSupport = 0,
    L0sEntrySupport = 1,
    L1EntrySupport = 2,
    L0sAndL1EntrySupport = 3
} PCI_EXPRESS_ASPM_SUPPORT;
typedef enum {
    L0sAndL1EntryDisabled,
    L0sEntryEnabled,
    L1EntryEnabled,
    L0sAndL1EntryEnabled
} PCI_EXPRESS_ASPM_CONTROL;
typedef enum {
    L0s_Below64ns = 0,
    L0s_64ns_128ns,
    L0s_128ns_256ns,
    L0s_256ns_512ns,
    L0s_512ns_1us,
    L0s_1us_2us,
    L0s_2us_4us,
    L0s_Above4us
} PCI_EXPRESS_L0s_EXIT_LATENCY;
typedef enum {
    L1_Below1us = 0,
    L1_1us_2us,
    L1_2us_4us,
    L1_4us_8us,
    L1_8us_16us,
    L1_16us_32us,
    L1_32us_64us,
    L1_Above64us
} PCI_EXPRESS_L1_EXIT_LATENCY;
typedef enum {
    PciExpressEndpoint = 0,
    PciExpressLegacyEndpoint,
    PciExpressRootPort = 4,
    PciExpressUpstreamSwitchPort,
    PciExpressDownstreamSwitchPort,
    PciExpressToPciXBridge,
    PciXToExpressBridge,
    PciExpressRootComplexIntegratedEndpoint,
    PciExpressRootComplexEventCollector
} PCI_EXPRESS_DEVICE_TYPE;
typedef enum {
    MaxPayload128Bytes = 0,
    MaxPayload256Bytes,
    MaxPayload512Bytes,
    MaxPayload1024Bytes,
    MaxPayload2048Bytes,
    MaxPayload4096Bytes
} PCI_EXPRESS_MAX_PAYLOAD_SIZE;
typedef union _PCI_EXPRESS_PME_REQUESTOR_ID {
    struct {
        USHORT FunctionNumber:3;
        USHORT DeviceNumber:5;
        USHORT BusNumber:8;
    } DUMMYSTRUCTNAME;
    USHORT AsUSHORT;
} PCI_EXPRESS_PME_REQUESTOR_ID, *PPCI_EXPRESS_PME_REQUESTOR_ID;
typedef VOID
(*PciPin2Line) (
    _In_ struct _BUS_HANDLER *BusHandler,
    _In_ struct _BUS_HANDLER *RootHandler,
    _In_ PCI_SLOT_NUMBER SlotNumber,
    _In_ PPCI_COMMON_CONFIG PciData
    );
typedef VOID
(*PciLine2Pin) (
    _In_ struct _BUS_HANDLER *BusHandler,
    _In_ struct _BUS_HANDLER *RootHandler,
    _In_ PCI_SLOT_NUMBER SlotNumber,
    _In_ PPCI_COMMON_CONFIG PciNewData,
    _In_ PPCI_COMMON_CONFIG PciOldData
    );
typedef VOID
(*PciReadWriteConfig) (
    _In_ struct _BUS_HANDLER *BusHandler,
    _In_ PCI_SLOT_NUMBER Slot,
    _In_reads_bytes_(Length) PVOID Buffer,
    _In_ ULONG Offset,
    _In_ ULONG Length
    );
typedef struct _PCIBUSDATA {
    ULONG Tag;
    ULONG Version;
    PciReadWriteConfig ReadConfig;
    PciReadWriteConfig WriteConfig;
    PciPin2Line Pin2Line;
    PciLine2Pin Line2Pin;
    PCI_SLOT_NUMBER ParentSlot;
    PVOID Reserved[4];
} PCIBUSDATA, *PPCIBUSDATA;
typedef union _PCI_EXPRESS_LTR_MAX_LATENCY_REGISTER {
    struct {
        ULONG MaxSnoopLatencyValue:10;
        ULONG MaxSnoopLatencyScale:3;
        ULONG Rsvd:2;
        ULONG MaxSnoopRequirement:1;
        ULONG MaxNoSnoopLatencyValue:10;
        ULONG MaxNoSnoopLatencyScale:3;
        ULONG Rsvd2:2;
        ULONG MaxNoSnoopRequirement:1;
    } DUMMYSTRUCTNAME;
    ULONG AsULONG;
} PCI_EXPRESS_LTR_MAX_LATENCY_REGISTER, *PPCI_EXPRESS_LTR_MAX_LATENCY_REGISTER;
typedef struct _PCI_EXPRESS_LTR_CAPABILITY {
    PCI_EXPRESS_ENHANCED_CAPABILITY_HEADER Header;
    PCI_EXPRESS_LTR_MAX_LATENCY_REGISTER Latency;
} PCI_EXPRESS_LTR_CAPABILITY, *PPCI_EXPRESS_LTR_CAPABILITY;
typedef union _PCI_EXPRESS_TPH_REQUESTER_CAPABILITY_REGISTER {
    struct {
        ULONG NoStModeSupported:1;
        ULONG InteruptVectorModeSupported:1;
        ULONG DeviceSpecificModeSupported:1;
        ULONG Rsvd:5;
        ULONG ExtendedTPHRequesterSupported:1;
        ULONG StTableLocation:2;
        ULONG Rsvd2:5;
        ULONG StTableSize:11;
        ULONG Rsvd3:5;
    } DUMMYSTRUCTNAME;
    ULONG AsULONG;
} PCI_EXPRESS_TPH_REQUESTER_CAPABILITY_REGISTER, *PPCI_EXPRESS_TPH_REQUESTER_CAPABILITY_REGISTER;
typedef union _PCI_EXPRESS_TPH_REQUESTER_CONTROL_REGISTER {
    struct {
        ULONG StModeSelect:3;
        ULONG Rsvd:5;
        ULONG TphRequesterEnable:2;
        ULONG Rsvd2:22;
    } DUMMYSTRUCTNAME;
    ULONG AsULONG;
} PCI_EXPRESS_TPH_REQUESTER_CONTROL_REGISTER, *PPCI_EXPRESS_TPH_REQUESTER_CONTROL_REGISTER;
typedef union _PCI_EXPRESS_TPH_ST_TABLE_ENTRY {
    struct {
        USHORT LowerEntry:8;
        USHORT UpperEntry:8;
    } DUMMYSTRUCTNAME;
    USHORT AsUSHORT;
} PCI_EXPRESS_TPH_ST_TABLE_ENTRY, *PPCI_EXPRESS_TPH_ST_TABLE_ENTRY;
typedef struct _PCI_EXPRESS_TPH_REQUESTER_CAPABILITY {
    PCI_EXPRESS_ENHANCED_CAPABILITY_HEADER Header;
    PCI_EXPRESS_TPH_REQUESTER_CAPABILITY_REGISTER RequesterCapability;
    PCI_EXPRESS_TPH_REQUESTER_CONTROL_REGISTER RequesterControl;
} PCI_EXPRESS_TPH_REQUESTER_CAPABILITY, *PPCI_EXPRESS_TPH_REQUESTER_CAPABILITY;
typedef union _PCI_EXPRESS_L1_PM_SS_CAPABILITIES_REGISTER {
    struct {
        ULONG PciPmL12Supported:1;
        ULONG PciPmL11Supported:1;
        ULONG AspmL12Supported:1;
        ULONG AspmL11Supported:1;
        ULONG L1PmSsSupported:1;
        ULONG Rsvd:3;
        ULONG PortCommonModeRestoreTime:8;
        ULONG PortTPowerOnScale:2;
        ULONG Rsvd2:1;
        ULONG PortTPowerOnValue:5;
        ULONG Rsvd3:8;
    } DUMMYSTRUCTNAME;
    ULONG AsULONG;
} PCI_EXPRESS_L1_PM_SS_CAPABILITIES_REGISTER, *PPCI_EXPRESS_L1_PM_SS_CAPABILITIES_REGISTER;
typedef union _PCI_EXPRESS_L1_PM_SS_CONTROL_1_REGISTER {
    struct {
        ULONG PciPmL12Enabled:1;
        ULONG PciPmL11Enabled:1;
        ULONG AspmL12Enabled:1;
        ULONG AspmL11Enabled:1;
        ULONG Rsvd:4;
        ULONG CommonModeRestoreTime:8;
        ULONG LtrL12ThresholdValue:10;
        ULONG Rsvd2:3;
        ULONG LtrL12ThresholdScale:3;
    } DUMMYSTRUCTNAME;
    ULONG AsULONG;
} PCI_EXPRESS_L1_PM_SS_CONTROL_1_REGISTER, *PPCI_EXPRESS_L1_PM_SS_CONTROL_1_REGISTER;
typedef union _PCI_EXPRESS_L1_PM_SS_CONTROL_2_REGISTER {
    struct {
        ULONG TPowerOnScale:2;
        ULONG Rsvd:1;
        ULONG TPowerOnValue:5;
        ULONG Rsvd2:24;
    } DUMMYSTRUCTNAME;
    ULONG AsULONG;
} PCI_EXPRESS_L1_PM_SS_CONTROL_2_REGISTER, *PPCI_EXPRESS_L1_PM_SS_CONTROL_2_REGISTER;
typedef struct _PCI_EXPRESS_L1_PM_SS_CAPABILITY {
    PCI_EXPRESS_ENHANCED_CAPABILITY_HEADER Header;
    PCI_EXPRESS_L1_PM_SS_CAPABILITIES_REGISTER L1PmSsCapabilities;
    PCI_EXPRESS_L1_PM_SS_CONTROL_1_REGISTER L1PmSsControl1;
    PCI_EXPRESS_L1_PM_SS_CONTROL_2_REGISTER L1PmSsControl2;
} PCI_EXPRESS_L1_PM_SS_CAPABILITY, *PPCI_EXPRESS_L1_PM_SS_CAPABILITY;
typedef union _PCI_EXPRESS_RESIZABLE_BAR_CAPABILITY_REGISTER {
    struct {
        ULONG Rsvd:4;
        ULONG SizesSupported:20;
        ULONG Rsvd2:8;
    } DUMMYSTRUCTNAME;
    ULONG AsULONG;
} PCI_EXPRESS_RESIZABLE_BAR_CAPABILITY_REGISTER, *PPCI_EXPRESS_RESIZABLE_BAR_CAPABILITY_REGISTER;
typedef union _PCI_EXPRESS_RESIZABLE_BAR_CONTROL_REGISTER {
    struct {
        ULONG BarIndex:3;
        ULONG Rsvd:2;
        ULONG NumberOfResizableBars:3;
        ULONG BarSize:5;
        ULONG Rsvd2:19;
    } DUMMYSTRUCTNAME;
    ULONG AsULONG;
} PCI_EXPRESS_RESIZABLE_BAR_CONTROL_REGISTER, *PPCI_EXPRESS_RESIZABLE_BAR_CONTROL_REGISTER;
typedef struct _PCI_EXPRESS_RESIZABLE_BAR_ENTRY {
    PCI_EXPRESS_RESIZABLE_BAR_CAPABILITY_REGISTER Capability;
    PCI_EXPRESS_RESIZABLE_BAR_CONTROL_REGISTER Control;
} PCI_EXPRESS_RESIZABLE_BAR_ENTRY, *PPCI_EXPRESS_RESIZABLE_BAR_ENTRY;
typedef struct _PCI_EXPRESS_RESIZABLE_BAR_CAPABILITY {
    PCI_EXPRESS_ENHANCED_CAPABILITY_HEADER Header;
    PCI_EXPRESS_RESIZABLE_BAR_ENTRY Entry[6];
} PCI_EXPRESS_RESIZABLE_BAR_CAPABILITY, *PPCI_EXPRESS_RESIZABLE_BAR_CAPABILITY;
typedef union _PCI_EXPRESS_DESIGNATED_VENDOR_SPECIFIC_HEADER_1 {
    struct {
        ULONG DvsecVendorId:16;
        ULONG DvsecVersion:4;
        ULONG DvsecLength:12;
    } DUMMYSTRUCTNAME;
    ULONG AsULONG;
} PCI_EXPRESS_DESIGNATED_VENDOR_SPECIFIC_HEADER_1, *PPCI_EXPRESS_DESIGNATED_VENDOR_SPECIFIC_HEADER_1;
typedef union _PCI_EXPRESS_DESIGNATED_VENDOR_SPECIFIC_HEADER_2 {
    struct {
        USHORT DvsecId:16;
    } DUMMYSTRUCTNAME;
    USHORT AsUSHORT;
} PCI_EXPRESS_DESIGNATED_VENDOR_SPECIFIC_HEADER_2, *PPCI_EXPRESS_DESIGNATED_VENDOR_SPECIFIC_HEADER_2;
typedef struct _PCI_EXPRESS_DESIGNATED_VENDOR_SPECIFIC_CAPABILITY {
    PCI_EXPRESS_ENHANCED_CAPABILITY_HEADER Header;
    PCI_EXPRESS_DESIGNATED_VENDOR_SPECIFIC_HEADER_1 DvsecHeader1;
    PCI_EXPRESS_DESIGNATED_VENDOR_SPECIFIC_HEADER_2 DvsecHeader2;
    USHORT DvsecRegisters[1];
} PCI_EXPRESS_DESIGNATED_VENDOR_SPECIFIC_CAPABILITY, *PPCI_EXPRESS_DESIGNATED_VENDOR_SPECIFIC_CAPABILITY;
typedef
_Function_class_(PCI_READ_WRITE_CONFIG)
_IRQL_requires_max_(HIGH_LEVEL)
ULONG
PCI_READ_WRITE_CONFIG (
    _In_ PVOID Context,
    _In_ ULONG BusOffset,
    _In_ ULONG Slot,
    _In_reads_bytes_(Length) PVOID Buffer,
    _In_ ULONG Offset,
    _In_ ULONG Length
    );
typedef PCI_READ_WRITE_CONFIG *PPCI_READ_WRITE_CONFIG;
typedef
_Function_class_(PCI_PIN_TO_LINE)
_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
PCI_PIN_TO_LINE (
    _In_ PVOID Context,
    _In_ PPCI_COMMON_CONFIG PciData
    );
typedef PCI_PIN_TO_LINE *PPCI_PIN_TO_LINE;
typedef
_Function_class_(PCI_LINE_TO_PIN)
_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
PCI_LINE_TO_PIN (
    _In_ PVOID Context,
    _In_ PPCI_COMMON_CONFIG PciNewData,
    _In_ PPCI_COMMON_CONFIG PciOldData
    );
typedef PCI_LINE_TO_PIN *PPCI_LINE_TO_PIN;
typedef
_Function_class_(PCI_ROOT_BUS_CAPABILITY)
_IRQL_requires_(PASSIVE_LEVEL)
VOID
PCI_ROOT_BUS_CAPABILITY (
    _In_ PVOID Context,
    _Out_ PPCI_ROOT_BUS_HARDWARE_CAPABILITY HardwareCapability
    );
typedef PCI_ROOT_BUS_CAPABILITY *PPCI_ROOT_BUS_CAPABILITY;
typedef
_Function_class_(PCI_EXPRESS_WAKE_CONTROL)
_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
PCI_EXPRESS_WAKE_CONTROL (
    _In_ PVOID Context,
    _In_ BOOLEAN EnableWake
    );
typedef PCI_EXPRESS_WAKE_CONTROL *PPCI_EXPRESS_WAKE_CONTROL;
typedef
_Function_class_(PCI_PREPARE_MULTISTAGE_RESUME)
_IRQL_requires_max_(HIGH_LEVEL)
VOID
PCI_PREPARE_MULTISTAGE_RESUME (
    _In_ PVOID Context
    );
typedef PCI_PREPARE_MULTISTAGE_RESUME *PPCI_PREPARE_MULTISTAGE_RESUME;
typedef struct _PCI_BUS_INTERFACE_STANDARD {
    USHORT Size;
    USHORT Version;
    PVOID Context;
    PINTERFACE_REFERENCE InterfaceReference;
    PINTERFACE_DEREFERENCE InterfaceDereference;
    PPCI_READ_WRITE_CONFIG ReadConfig;
    PPCI_READ_WRITE_CONFIG WriteConfig;
    PPCI_PIN_TO_LINE PinToLine;
    PPCI_LINE_TO_PIN LineToPin;
    PPCI_ROOT_BUS_CAPABILITY RootBusCapability;
    PPCI_EXPRESS_WAKE_CONTROL ExpressWakeControl;
    PPCI_PREPARE_MULTISTAGE_RESUME PrepareMultistageResume;
} PCI_BUS_INTERFACE_STANDARD, *PPCI_BUS_INTERFACE_STANDARD;
    FIELD_OFFSET(PCI_BUS_INTERFACE_STANDARD, PrepareMultistageResume)
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwSetInformationThread (
    _In_ HANDLE ThreadHandle,
    _In_ THREADINFOCLASS ThreadInformationClass,
    _In_reads_bytes_(ThreadInformationLength) PVOID ThreadInformation,
    _In_ ULONG ThreadInformationLength
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
_When_(return=0, __drv_allocatesMem(TimerObject))
NTSTATUS
ZwCreateTimer (
    _Out_ PHANDLE TimerHandle,
    _In_ ACCESS_MASK DesiredAccess,
    _In_opt_ POBJECT_ATTRIBUTES ObjectAttributes,
    _In_ TIMER_TYPE TimerType
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
ZwOpenTimer (
    _Out_ PHANDLE TimerHandle,
    _In_ ACCESS_MASK DesiredAccess,
    _In_ POBJECT_ATTRIBUTES ObjectAttributes
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
ZwCancelTimer (
    _In_ HANDLE TimerHandle,
    _Out_opt_ PBOOLEAN CurrentState
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
ZwSetTimer (
    _In_ HANDLE TimerHandle,
    _In_ PLARGE_INTEGER DueTime,
    _In_opt_ PTIMER_APC_ROUTINE TimerApcRoutine,
    _In_opt_ PVOID TimerContext,
    _In_ BOOLEAN ResumeTimer,
    _In_opt_ LONG Period,
    _Out_opt_ PBOOLEAN PreviousState
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
ZwSetTimerEx (
    _In_ HANDLE TimerHandle,
    _In_ TIMER_SET_INFORMATION_CLASS TimerSetInformationClass,
    _Inout_updates_bytes_opt_(TimerSetInformationLength) PVOID TimerSetInformation,
    _In_ ULONG TimerSetInformationLength
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwQueryVolumeInformationFile(
    _In_ HANDLE FileHandle,
    _Out_ PIO_STATUS_BLOCK IoStatusBlock,
    _Out_writes_bytes_(Length) PVOID FsInformation,
    _In_ ULONG Length,
    _In_ FS_INFORMATION_CLASS FsInformationClass
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwDeviceIoControlFile(
    _In_ HANDLE FileHandle,
    _In_opt_ HANDLE Event,
    _In_opt_ PIO_APC_ROUTINE ApcRoutine,
    _In_opt_ PVOID ApcContext,
    _Out_ PIO_STATUS_BLOCK IoStatusBlock,
    _In_ ULONG IoControlCode,
    _In_reads_bytes_opt_(InputBufferLength) PVOID InputBuffer,
    _In_ ULONG InputBufferLength,
    _Out_writes_bytes_opt_(OutputBufferLength) PVOID OutputBuffer,
    _In_ ULONG OutputBufferLength
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwDisplayString(
    _In_ PUNICODE_STRING String
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwPowerInformation(
    _In_ POWER_INFORMATION_LEVEL InformationLevel,
    _In_reads_bytes_opt_(InputBufferLength) PVOID InputBuffer,
    _In_ ULONG InputBufferLength,
    _Out_writes_bytes_opt_(OutputBufferLength) PVOID OutputBuffer,
    _In_ ULONG OutputBufferLength
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwAllocateLocallyUniqueId(
    _Out_ PLUID Luid
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwTerminateProcess (
    _In_opt_ HANDLE ProcessHandle,
    _In_ NTSTATUS ExitStatus
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwOpenProcess (
    _Out_ PHANDLE ProcessHandle,
    _In_ ACCESS_MASK DesiredAccess,
    _In_ POBJECT_ATTRIBUTES ObjectAttributes,
    _In_opt_ PCLIENT_ID ClientId
    );
typedef enum _WHEA_ERROR_SOURCE_TYPE {
    WheaErrSrcTypeMCE = 0x00,
    WheaErrSrcTypeCMC = 0x01,
    WheaErrSrcTypeCPE = 0x02,
    WheaErrSrcTypeNMI = 0x03,
    WheaErrSrcTypePCIe = 0x04,
    WheaErrSrcTypeGeneric = 0x05,
    WheaErrSrcTypeINIT = 0x06,
    WheaErrSrcTypeBOOT = 0x07,
    WheaErrSrcTypeSCIGeneric = 0x08,
    WheaErrSrcTypeIPFMCA = 0x09,
    WheaErrSrcTypeIPFCMC = 0x0a,
    WheaErrSrcTypeIPFCPE = 0x0b,
    WheaErrSrcTypeGenericV2 = 0x0c,
    WheaErrSrcTypeSCIGenericV2 = 0x0d,
    WheaErrSrcTypeBMC = 0x0e,
    WheaErrSrcTypePMEM = 0x0f,
    WheaErrSrcTypeDeviceDriver = 0x10,
    WheaErrSrcTypeMax
} WHEA_ERROR_SOURCE_TYPE, *PWHEA_ERROR_SOURCE_TYPE;
typedef enum _WHEA_ERROR_SOURCE_STATE {
    WheaErrSrcStateStopped = 0x01,
    WheaErrSrcStateStarted = 0x02,
    WheaErrSrcStateRemoved = 0x03,
    WheaErrSrcStateRemovePending = 0x04
} WHEA_ERROR_SOURCE_STATE, *PWHEA_ERROR_SOURCE_STATE;
#include <pshpack1.h>
typedef
ULONG
(_WHEA_ERROR_SOURCE_INITIALIZE_DEVICE_DRIVER)(
    _Inout_opt_ PVOID Context,
    _In_ ULONG ErrorSourceId
    );
typedef _WHEA_ERROR_SOURCE_INITIALIZE_DEVICE_DRIVER
    *WHEA_ERROR_SOURCE_INITIALIZE_DEVICE_DRIVER;
typedef
VOID
(_WHEA_ERROR_SOURCE_UNINITIALIZE_DEVICE_DRIVER)(
    _Inout_opt_ PVOID Context
    );
typedef _WHEA_ERROR_SOURCE_UNINITIALIZE_DEVICE_DRIVER
    *WHEA_ERROR_SOURCE_UNINITIALIZE_DEVICE_DRIVER;
typedef
ULONG
(_WHEA_ERROR_SOURCE_CORRECT_DEVICE_DRIVER)(
    _Inout_ PVOID ErrorSourceDesc,
    _Out_ PULONG MaximumSectionLength
    );
typedef _WHEA_ERROR_SOURCE_CORRECT_DEVICE_DRIVER
    *WHEA_ERROR_SOURCE_CORRECT_DEVICE_DRIVER;
typedef
VOID
(_WHEA_ERROR_SOURCE_READY_DEVICE_DRIVER)(
    _Inout_ PVOID ErrorSourceDesc,
    _Inout_opt_ PVOID Context
    );
typedef _WHEA_ERROR_SOURCE_READY_DEVICE_DRIVER
    *WHEA_ERROR_SOURCE_READY_DEVICE_DRIVER;
typedef struct _WHEA_ERROR_SOURCE_CONFIGURATION_DD {
    WHEA_ERROR_SOURCE_INITIALIZE_DEVICE_DRIVER Initialize;
    WHEA_ERROR_SOURCE_UNINITIALIZE_DEVICE_DRIVER Uninitialize;
    WHEA_ERROR_SOURCE_READY_DEVICE_DRIVER Ready;
    WHEA_ERROR_SOURCE_CORRECT_DEVICE_DRIVER Correct;
} WHEA_ERROR_SOURCE_CONFIGURATION_DD, *PWHEA_ERROR_SOURCE_CONFIGURATION_DD;
typedef struct _WHEA_ERROR_SOURCE_CONFIGURATION_DEVICE_DRIVER {
    WHEA_ERROR_SOURCE_INITIALIZE_DEVICE_DRIVER Initialize;
    WHEA_ERROR_SOURCE_UNINITIALIZE_DEVICE_DRIVER Uninitialize;
    WHEA_ERROR_SOURCE_READY_DEVICE_DRIVER Ready;
} WHEA_ERROR_SOURCE_CONFIGURATION_DEVICE_DRIVER,
  *PWHEA_ERROR_SOURCE_CONFIGURATION_DEVICE_DRIVER;
typedef union _WHEA_NOTIFICATION_FLAGS {
    struct {
        USHORT PollIntervalRW:1;
        USHORT SwitchToPollingThresholdRW:1;
        USHORT SwitchToPollingWindowRW:1;
        USHORT ErrorThresholdRW:1;
        USHORT ErrorThresholdWindowRW:1;
        USHORT Reserved:11;
    } DUMMYSTRUCTNAME;
    USHORT AsUSHORT;
} WHEA_NOTIFICATION_FLAGS, *PWHEA_NOTIFICATION_FLAGS;
typedef union _XPF_MC_BANK_FLAGS {
    struct {
        UCHAR ClearOnInitializationRW:1;
        UCHAR ControlDataRW:1;
        UCHAR Reserved:6;
    } DUMMYSTRUCTNAME;
    UCHAR AsUCHAR;
} XPF_MC_BANK_FLAGS, *PXPF_MC_BANK_FLAGS;
typedef union _XPF_MCE_FLAGS {
    struct {
        ULONG MCG_CapabilityRW:1;
        ULONG MCG_GlobalControlRW:1;
        ULONG Reserved:30;
    } DUMMYSTRUCTNAME;
    ULONG AsULONG;
} XPF_MCE_FLAGS, *PXPF_MCE_FLAGS;
typedef union _AER_ROOTPORT_DESCRIPTOR_FLAGS {
    struct {
        USHORT UncorrectableErrorMaskRW:1;
        USHORT UncorrectableErrorSeverityRW:1;
        USHORT CorrectableErrorMaskRW:1;
        USHORT AdvancedCapsAndControlRW:1;
        USHORT RootErrorCommandRW:1;
        USHORT Reserved:11;
    } DUMMYSTRUCTNAME;
    USHORT AsUSHORT;
} AER_ROOTPORT_DESCRIPTOR_FLAGS, *PAER_ROOTPORT_DESCRIPTOR_FLAGS;
typedef union _AER_ENDPOINT_DESCRIPTOR_FLAGS {
    struct {
        USHORT UncorrectableErrorMaskRW:1;
        USHORT UncorrectableErrorSeverityRW:1;
        USHORT CorrectableErrorMaskRW:1;
        USHORT AdvancedCapsAndControlRW:1;
        USHORT Reserved:12;
    } DUMMYSTRUCTNAME;
    USHORT AsUSHORT;
} AER_ENDPOINT_DESCRIPTOR_FLAGS, *PAER_ENDPOINT_DESCRIPTOR_FLAGS;
typedef union _AER_BRIDGE_DESCRIPTOR_FLAGS {
    struct {
        USHORT UncorrectableErrorMaskRW:1;
        USHORT UncorrectableErrorSeverityRW:1;
        USHORT CorrectableErrorMaskRW:1;
        USHORT AdvancedCapsAndControlRW:1;
        USHORT SecondaryUncorrectableErrorMaskRW:1;
        USHORT SecondaryUncorrectableErrorSevRW:1;
        USHORT SecondaryCapsAndControlRW:1;
        USHORT Reserved:9;
    } DUMMYSTRUCTNAME;
    USHORT AsUSHORT;
} AER_BRIDGE_DESCRIPTOR_FLAGS, *PAER_BRIDGE_DESCRIPTOR_FLAGS;
typedef struct _WHEA_NOTIFICATION_DESCRIPTOR {
    UCHAR Type;
    UCHAR Length;
    WHEA_NOTIFICATION_FLAGS Flags;
    union {
        struct {
            ULONG PollInterval;
        } Polled;
        struct {
            ULONG PollInterval;
            ULONG Vector;
            ULONG SwitchToPollingThreshold;
            ULONG SwitchToPollingWindow;
            ULONG ErrorThreshold;
            ULONG ErrorThresholdWindow;
        } Interrupt;
        struct {
            ULONG PollInterval;
            ULONG Vector;
            ULONG SwitchToPollingThreshold;
            ULONG SwitchToPollingWindow;
            ULONG ErrorThreshold;
            ULONG ErrorThresholdWindow;
        } LocalInterrupt;
        struct {
            ULONG PollInterval;
            ULONG Vector;
            ULONG SwitchToPollingThreshold;
            ULONG SwitchToPollingWindow;
            ULONG ErrorThreshold;
            ULONG ErrorThresholdWindow;
        } Sci;
        struct {
            ULONG PollInterval;
            ULONG Vector;
            ULONG SwitchToPollingThreshold;
            ULONG SwitchToPollingWindow;
            ULONG ErrorThreshold;
            ULONG ErrorThresholdWindow;
        } Nmi;
        struct {
            ULONG PollInterval;
            ULONG Vector;
            ULONG SwitchToPollingThreshold;
            ULONG SwitchToPollingWindow;
            ULONG ErrorThreshold;
            ULONG ErrorThresholdWindow;
        } Sea;
        struct {
            ULONG PollInterval;
            ULONG Vector;
            ULONG SwitchToPollingThreshold;
            ULONG SwitchToPollingWindow;
            ULONG ErrorThreshold;
            ULONG ErrorThresholdWindow;
        } Sei;
        struct {
            ULONG PollInterval;
            ULONG Vector;
            ULONG SwitchToPollingThreshold;
            ULONG SwitchToPollingWindow;
            ULONG ErrorThreshold;
            ULONG ErrorThresholdWindow;
        } Gsiv;
    } u;
} WHEA_NOTIFICATION_DESCRIPTOR, *PWHEA_NOTIFICATION_DESCRIPTOR;
typedef struct _WHEA_XPF_MC_BANK_DESCRIPTOR {
    UCHAR BankNumber;
    BOOLEAN ClearOnInitialization;
    UCHAR StatusDataFormat;
    XPF_MC_BANK_FLAGS Flags;
    ULONG ControlMsr;
    ULONG StatusMsr;
    ULONG AddressMsr;
    ULONG MiscMsr;
    ULONGLONG ControlData;
} WHEA_XPF_MC_BANK_DESCRIPTOR, *PWHEA_XPF_MC_BANK_DESCRIPTOR;
typedef struct _WHEA_XPF_MCE_DESCRIPTOR {
    USHORT Type;
    UCHAR Enabled;
    UCHAR NumberOfBanks;
    XPF_MCE_FLAGS Flags;
    ULONGLONG MCG_Capability;
    ULONGLONG MCG_GlobalControl;
    WHEA_XPF_MC_BANK_DESCRIPTOR Banks[WHEA_MAX_MC_BANKS];
} WHEA_XPF_MCE_DESCRIPTOR, *PWHEA_XPF_MCE_DESCRIPTOR;
typedef struct _WHEA_XPF_CMC_DESCRIPTOR {
    USHORT Type;
    BOOLEAN Enabled;
    UCHAR NumberOfBanks;
    ULONG Reserved;
    WHEA_NOTIFICATION_DESCRIPTOR Notify;
    WHEA_XPF_MC_BANK_DESCRIPTOR Banks[WHEA_MAX_MC_BANKS];
} WHEA_XPF_CMC_DESCRIPTOR, *PWHEA_XPF_CMC_DESCRIPTOR;
typedef struct _WHEA_PCI_SLOT_NUMBER {
    union {
        struct {
            ULONG DeviceNumber:5;
            ULONG FunctionNumber:3;
            ULONG Reserved:24;
        } bits;
        ULONG AsULONG;
    } u;
} WHEA_PCI_SLOT_NUMBER, *PWHEA_PCI_SLOT_NUMBER;
typedef struct _WHEA_XPF_NMI_DESCRIPTOR {
    USHORT Type;
    BOOLEAN Enabled;
} WHEA_XPF_NMI_DESCRIPTOR, *PWHEA_XPF_NMI_DESCRIPTOR;
typedef struct _WHEA_AER_ROOTPORT_DESCRIPTOR {
    USHORT Type;
    BOOLEAN Enabled;
    UCHAR Reserved;
    ULONG BusNumber;
    WHEA_PCI_SLOT_NUMBER Slot;
    USHORT DeviceControl;
    AER_ROOTPORT_DESCRIPTOR_FLAGS Flags;
    ULONG UncorrectableErrorMask;
    ULONG UncorrectableErrorSeverity;
    ULONG CorrectableErrorMask;
    ULONG AdvancedCapsAndControl;
    ULONG RootErrorCommand;
} WHEA_AER_ROOTPORT_DESCRIPTOR, *PWHEA_AER_ROOTPORT_DESCRIPTOR;
typedef struct _WHEA_AER_ENDPOINT_DESCRIPTOR {
    USHORT Type;
    BOOLEAN Enabled;
    UCHAR Reserved;
    ULONG BusNumber;
    WHEA_PCI_SLOT_NUMBER Slot;
    USHORT DeviceControl;
    AER_ENDPOINT_DESCRIPTOR_FLAGS Flags;
    ULONG UncorrectableErrorMask;
    ULONG UncorrectableErrorSeverity;
    ULONG CorrectableErrorMask;
    ULONG AdvancedCapsAndControl;
} WHEA_AER_ENDPOINT_DESCRIPTOR, *PWHEA_AER_ENDPOINT_DESCRIPTOR;
typedef struct _WHEA_AER_BRIDGE_DESCRIPTOR {
    USHORT Type;
    BOOLEAN Enabled;
    UCHAR Reserved;
    ULONG BusNumber;
    WHEA_PCI_SLOT_NUMBER Slot;
    USHORT DeviceControl;
    AER_BRIDGE_DESCRIPTOR_FLAGS Flags;
    ULONG UncorrectableErrorMask;
    ULONG UncorrectableErrorSeverity;
    ULONG CorrectableErrorMask;
    ULONG AdvancedCapsAndControl;
    ULONG SecondaryUncorrectableErrorMask;
    ULONG SecondaryUncorrectableErrorSev;
    ULONG SecondaryCapsAndControl;
} WHEA_AER_BRIDGE_DESCRIPTOR, *PWHEA_AER_BRIDGE_DESCRIPTOR;
typedef struct _WHEA_GENERIC_ERROR_DESCRIPTOR {
    USHORT Type;
    UCHAR Reserved;
    UCHAR Enabled;
    ULONG ErrStatusBlockLength;
    ULONG RelatedErrorSourceId;
    UCHAR ErrStatusAddressSpaceID;
    UCHAR ErrStatusAddressBitWidth;
    UCHAR ErrStatusAddressBitOffset;
    UCHAR ErrStatusAddressAccessSize;
    WHEA_PHYSICAL_ADDRESS ErrStatusAddress;
    WHEA_NOTIFICATION_DESCRIPTOR Notify;
} WHEA_GENERIC_ERROR_DESCRIPTOR, *PWHEA_GENERIC_ERROR_DESCRIPTOR;
typedef struct _WHEA_GENERIC_ERROR_DESCRIPTOR_V2 {
    USHORT Type;
    UCHAR Reserved;
    UCHAR Enabled;
    ULONG ErrStatusBlockLength;
    ULONG RelatedErrorSourceId;
    UCHAR ErrStatusAddressSpaceID;
    UCHAR ErrStatusAddressBitWidth;
    UCHAR ErrStatusAddressBitOffset;
    UCHAR ErrStatusAddressAccessSize;
    WHEA_PHYSICAL_ADDRESS ErrStatusAddress;
    WHEA_NOTIFICATION_DESCRIPTOR Notify;
    UCHAR ReadAckAddressSpaceID;
    UCHAR ReadAckAddressBitWidth;
    UCHAR ReadAckAddressBitOffset;
    UCHAR ReadAckAddressAccessSize;
    WHEA_PHYSICAL_ADDRESS ReadAckAddress;
    ULONGLONG ReadAckPreserveMask;
    ULONGLONG ReadAckWriteMask;
} WHEA_GENERIC_ERROR_DESCRIPTOR_V2, *PWHEA_GENERIC_ERROR_DESCRIPTOR_V2;
typedef struct _WHEA_DEVICE_DRIVER_DESCRIPTOR {
    USHORT Type;
    BOOLEAN Enabled;
    UCHAR Reserved;
    WHEA_ERROR_SOURCE_CONFIGURATION_DD Config;
} WHEA_DEVICE_DRIVER_DESCRIPTOR, *PWHEA_DEVICE_DRIVER_DESCRIPTOR;
typedef struct _WHEA_IPF_MCA_DESCRIPTOR {
    USHORT Type;
    UCHAR Enabled;
    UCHAR Reserved;
} WHEA_IPF_MCA_DESCRIPTOR, *PWHEA_IPF_MCA_DESCRIPTOR;
typedef struct _WHEA_IPF_CMC_DESCRIPTOR {
    USHORT Type;
    UCHAR Enabled;
    UCHAR Reserved;
} WHEA_IPF_CMC_DESCRIPTOR, *PWHEA_IPF_CMC_DESCRIPTOR;
typedef struct _WHEA_IPF_CPE_DESCRIPTOR {
    USHORT Type;
    UCHAR Enabled;
    UCHAR Reserved;
} WHEA_IPF_CPE_DESCRIPTOR, *PWHEA_IPF_CPE_DESCRIPTOR;
typedef struct _WHEA_ERROR_SOURCE_DESCRIPTOR {
    ULONG Length;
    ULONG Version;
    WHEA_ERROR_SOURCE_TYPE Type;
    WHEA_ERROR_SOURCE_STATE State;
    ULONG MaxRawDataLength;
    ULONG NumRecordsToPreallocate;
    ULONG MaxSectionsPerRecord;
    ULONG ErrorSourceId;
    ULONG PlatformErrorSourceId;
    ULONG Flags;
    union {
        WHEA_XPF_MCE_DESCRIPTOR XpfMceDescriptor;
        WHEA_XPF_CMC_DESCRIPTOR XpfCmcDescriptor;
        WHEA_XPF_NMI_DESCRIPTOR XpfNmiDescriptor;
        WHEA_IPF_MCA_DESCRIPTOR IpfMcaDescriptor;
        WHEA_IPF_CMC_DESCRIPTOR IpfCmcDescriptor;
        WHEA_IPF_CPE_DESCRIPTOR IpfCpeDescriptor;
        WHEA_AER_ROOTPORT_DESCRIPTOR AerRootportDescriptor;
        WHEA_AER_ENDPOINT_DESCRIPTOR AerEndpointDescriptor;
        WHEA_AER_BRIDGE_DESCRIPTOR AerBridgeDescriptor;
        WHEA_GENERIC_ERROR_DESCRIPTOR GenErrDescriptor;
        WHEA_GENERIC_ERROR_DESCRIPTOR_V2 GenErrDescriptorV2;
        WHEA_DEVICE_DRIVER_DESCRIPTOR DeviceDriverDescriptor;
    } Info;
} WHEA_ERROR_SOURCE_DESCRIPTOR, *PWHEA_ERROR_SOURCE_DESCRIPTOR;
                                                       IPMI_IOCTL_INDEX + 0, \
                                                       METHOD_BUFFERED, \
                                                       FILE_ANY_ACCESS)
typedef enum _IPMI_OS_SEL_RECORD_TYPE {
    IpmiOsSelRecordTypeWhea = 0,
    IpmiOsSelRecordTypeOther,
    IpmiOsSelRecordTypeWheaErrorXpfMca,
    IpmiOsSelRecordTypeWheaErrorPci,
    IpmiOsSelRecordTypeWheaErrorNmi,
    IpmiOsSelRecordTypeWheaErrorOther,
    IpmiOsSelRecordTypeMax
} IPMI_OS_SEL_RECORD_TYPE, *PIPMI_OS_SEL_RECORD_TYPE;
typedef struct _IPMI_OS_SEL_RECORD {
    ULONG Signature;
    ULONG Version;
    ULONG Length;
    IPMI_OS_SEL_RECORD_TYPE RecordType;
    ULONG DataLength;
    UCHAR Data[ANYSIZE_ARRAY];
} IPMI_OS_SEL_RECORD, *PIPMI_OS_SEL_RECORD;
#include <poppack.h>
                                                       IPMI_IOCTL_INDEX + 0, \
                                                       METHOD_BUFFERED, \
                                                       FILE_ANY_ACCESS)
    C_ASSERT(((FIELD_OFFSET(type, field) == (offset)) && \
              (RTL_FIELD_SIZE(type, field) == (length))))
#include <pshpack1.h>
typedef union _WHEA_REVISION {
    struct {
        UCHAR MinorRevision;
        UCHAR MajorRevision;
    } DUMMYSTRUCTNAME;
    USHORT AsUSHORT;
} WHEA_REVISION, *PWHEA_REVISION;
typedef enum _WHEA_ERROR_SEVERITY {
    WheaErrSevRecoverable = 0,
    WheaErrSevFatal = 1,
    WheaErrSevCorrected = 2,
    WheaErrSevInformational = 3
} WHEA_ERROR_SEVERITY, *PWHEA_ERROR_SEVERITY;
typedef union _WHEA_TIMESTAMP {
    struct {
        ULONGLONG Seconds:8;
        ULONGLONG Minutes:8;
        ULONGLONG Hours:8;
        ULONGLONG Precise:1;
        ULONGLONG Reserved:7;
        ULONGLONG Day:8;
        ULONGLONG Month:8;
        ULONGLONG Year:8;
        ULONGLONG Century:8;
    } DUMMYSTRUCTNAME;
    LARGE_INTEGER AsLARGE_INTEGER;
} WHEA_TIMESTAMP, *PWHEA_TIMESTAMP;
typedef union _WHEA_PERSISTENCE_INFO {
    struct {
        ULONGLONG Signature:16;
        ULONGLONG Length:24;
        ULONGLONG Identifier:16;
        ULONGLONG Attributes:2;
        ULONGLONG DoNotLog:1;
        ULONGLONG Reserved:5;
    } DUMMYSTRUCTNAME;
    ULONGLONG AsULONGLONG;
} WHEA_PERSISTENCE_INFO, *PWHEA_PERSISTENCE_INFO;
typedef union _WHEA_ERROR_STATUS {
    ULONGLONG ErrorStatus;
    struct {
        ULONGLONG Reserved1:8;
        ULONGLONG ErrorType:8;
        ULONGLONG Address:1;
        ULONGLONG Control:1;
        ULONGLONG Data:1;
        ULONGLONG Responder:1;
        ULONGLONG Requester:1;
        ULONGLONG FirstError:1;
        ULONGLONG Overflow:1;
        ULONGLONG Reserved2:41;
    } DUMMYSTRUCTNAME;
} WHEA_ERROR_STATUS, *PWHEA_ERROR_STATUS;
typedef union _WHEA_ERROR_RECORD_HEADER_VALIDBITS {
    struct {
        ULONG PlatformId:1;
        ULONG Timestamp:1;
        ULONG PartitionId:1;
        ULONG Reserved:29;
    } DUMMYSTRUCTNAME;
    ULONG AsULONG;
} WHEA_ERROR_RECORD_HEADER_VALIDBITS, *PWHEA_ERROR_RECORD_HEADER_VALIDBITS;
typedef union _WHEA_ERROR_RECORD_HEADER_FLAGS {
    struct {
        ULONG Recovered:1;
        ULONG PreviousError:1;
        ULONG Simulated:1;
        ULONG DeviceDriver:1;
        ULONG Reserved:28;
    } DUMMYSTRUCTNAME;
    ULONG AsULONG;
} WHEA_ERROR_RECORD_HEADER_FLAGS, *PWHEA_ERROR_RECORD_HEADER_FLAGS;
typedef struct _WHEA_ERROR_RECORD_HEADER {
    ULONG Signature;
    WHEA_REVISION Revision;
    ULONG SignatureEnd;
    USHORT SectionCount;
    WHEA_ERROR_SEVERITY Severity;
    WHEA_ERROR_RECORD_HEADER_VALIDBITS ValidBits;
    _Field_range_(>=, (sizeof(WHEA_ERROR_RECORD_HEADER)
                       + (SectionCount
                          * sizeof(WHEA_ERROR_RECORD_SECTION_DESCRIPTOR))))
        ULONG Length;
    WHEA_TIMESTAMP Timestamp;
    GUID PlatformId;
    GUID PartitionId;
    GUID CreatorId;
    GUID NotifyType;
    ULONGLONG RecordId;
    WHEA_ERROR_RECORD_HEADER_FLAGS Flags;
    WHEA_PERSISTENCE_INFO PersistenceInfo;
    UCHAR Reserved[12];
} WHEA_ERROR_RECORD_HEADER, *PWHEA_ERROR_RECORD_HEADER;
CPER_FIELD_CHECK(WHEA_ERROR_RECORD_HEADER, Signature, 0, 4);
CPER_FIELD_CHECK(WHEA_ERROR_RECORD_HEADER, Revision, 4, 2);
CPER_FIELD_CHECK(WHEA_ERROR_RECORD_HEADER, SignatureEnd, 6, 4);
CPER_FIELD_CHECK(WHEA_ERROR_RECORD_HEADER, SectionCount, 10, 2);
CPER_FIELD_CHECK(WHEA_ERROR_RECORD_HEADER, Severity, 12, 4);
CPER_FIELD_CHECK(WHEA_ERROR_RECORD_HEADER, ValidBits, 16, 4);
CPER_FIELD_CHECK(WHEA_ERROR_RECORD_HEADER, Length, 20, 4);
CPER_FIELD_CHECK(WHEA_ERROR_RECORD_HEADER, Timestamp, 24, 8);
CPER_FIELD_CHECK(WHEA_ERROR_RECORD_HEADER, PlatformId, 32, 16);
CPER_FIELD_CHECK(WHEA_ERROR_RECORD_HEADER, PartitionId, 48, 16);
CPER_FIELD_CHECK(WHEA_ERROR_RECORD_HEADER, CreatorId, 64, 16);
CPER_FIELD_CHECK(WHEA_ERROR_RECORD_HEADER, NotifyType, 80, 16);
CPER_FIELD_CHECK(WHEA_ERROR_RECORD_HEADER, RecordId, 96, 8);
CPER_FIELD_CHECK(WHEA_ERROR_RECORD_HEADER, Flags, 104, 4);
CPER_FIELD_CHECK(WHEA_ERROR_RECORD_HEADER, PersistenceInfo, 108, 8);
CPER_FIELD_CHECK(WHEA_ERROR_RECORD_HEADER, Reserved, 116, 12);
typedef union _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR_FLAGS {
    struct {
        ULONG Primary:1;
        ULONG ContainmentWarning:1;
        ULONG Reset:1;
        ULONG ThresholdExceeded:1;
        ULONG ResourceNotAvailable:1;
        ULONG LatentError:1;
        ULONG Propagated:1;
        ULONG Reserved:25;
    } DUMMYSTRUCTNAME;
    ULONG AsULONG;
} WHEA_ERROR_RECORD_SECTION_DESCRIPTOR_FLAGS,
    *PWHEA_ERROR_RECORD_SECTION_DESCRIPTOR_FLAGS;
typedef union _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR_VALIDBITS {
    struct {
        UCHAR FRUId:1;
        UCHAR FRUText:1;
        UCHAR Reserved:6;
    } DUMMYSTRUCTNAME;
    UCHAR AsUCHAR;
} WHEA_ERROR_RECORD_SECTION_DESCRIPTOR_VALIDBITS,
    *PWHEA_ERROR_RECORD_SECTION_DESCRIPTOR_VALIDBITS;
typedef struct _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR {
    ULONG SectionOffset;
    ULONG SectionLength;
    WHEA_REVISION Revision;
    WHEA_ERROR_RECORD_SECTION_DESCRIPTOR_VALIDBITS ValidBits;
    UCHAR Reserved;
    WHEA_ERROR_RECORD_SECTION_DESCRIPTOR_FLAGS Flags;
    GUID SectionType;
    GUID FRUId;
    WHEA_ERROR_SEVERITY SectionSeverity;
    CCHAR FRUText[20];
} WHEA_ERROR_RECORD_SECTION_DESCRIPTOR, *PWHEA_ERROR_RECORD_SECTION_DESCRIPTOR;
CPER_FIELD_CHECK(WHEA_ERROR_RECORD_SECTION_DESCRIPTOR, SectionOffset, 0, 4);
CPER_FIELD_CHECK(WHEA_ERROR_RECORD_SECTION_DESCRIPTOR, SectionLength, 4, 4);
CPER_FIELD_CHECK(WHEA_ERROR_RECORD_SECTION_DESCRIPTOR, Revision, 8, 2);
CPER_FIELD_CHECK(WHEA_ERROR_RECORD_SECTION_DESCRIPTOR, ValidBits, 10, 1);
CPER_FIELD_CHECK(WHEA_ERROR_RECORD_SECTION_DESCRIPTOR, Reserved, 11, 1);
CPER_FIELD_CHECK(WHEA_ERROR_RECORD_SECTION_DESCRIPTOR, Flags, 12, 4);
CPER_FIELD_CHECK(WHEA_ERROR_RECORD_SECTION_DESCRIPTOR, SectionType, 16, 16);
CPER_FIELD_CHECK(WHEA_ERROR_RECORD_SECTION_DESCRIPTOR, FRUId, 32, 16);
CPER_FIELD_CHECK(WHEA_ERROR_RECORD_SECTION_DESCRIPTOR, SectionSeverity, 48, 4);
CPER_FIELD_CHECK(WHEA_ERROR_RECORD_SECTION_DESCRIPTOR, FRUText, 52, 20);
typedef _Struct_size_bytes_(Header.Length) struct _WHEA_ERROR_RECORD {
    WHEA_ERROR_RECORD_HEADER Header;
    _Field_size_(Header.SectionCount)
        WHEA_ERROR_RECORD_SECTION_DESCRIPTOR SectionDescriptor[ANYSIZE_ARRAY];
} WHEA_ERROR_RECORD, *PWHEA_ERROR_RECORD;
CPER_FIELD_CHECK(WHEA_ERROR_RECORD, Header, 0, 128);
CPER_FIELD_CHECK(WHEA_ERROR_RECORD, SectionDescriptor, 128, 72);
typedef union _WHEA_PROCESSOR_FAMILY_INFO {
    struct {
        ULONG Stepping:4;
        ULONG Model:4;
        ULONG Family:4;
        ULONG ProcessorType:2;
        ULONG Reserved1:2;
        ULONG ExtendedModel:4;
        ULONG ExtendedFamily:8;
        ULONG Reserved2:4;
        ULONG Reserved3;
    } DUMMYSTRUCTNAME;
    ULONGLONG AsULONGLONG;
} WHEA_PROCESSOR_FAMILY_INFO, *PWHEA_PROCESSOR_FAMILY_INFO;
typedef union _WHEA_PROCESSOR_GENERIC_ERROR_SECTION_VALIDBITS {
    struct {
        ULONGLONG ProcessorType:1;
        ULONGLONG InstructionSet:1;
        ULONGLONG ErrorType:1;
        ULONGLONG Operation:1;
        ULONGLONG Flags:1;
        ULONGLONG Level:1;
        ULONGLONG CPUVersion:1;
        ULONGLONG CPUBrandString:1;
        ULONGLONG ProcessorId:1;
        ULONGLONG TargetAddress:1;
        ULONGLONG RequesterId:1;
        ULONGLONG ResponderId:1;
        ULONGLONG InstructionPointer:1;
        ULONGLONG Reserved:51;
    } DUMMYSTRUCTNAME;
    ULONGLONG ValidBits;
} WHEA_PROCESSOR_GENERIC_ERROR_SECTION_VALIDBITS,
  *PWHEA_PROCESSOR_GENERIC_ERROR_SECTION_VALIDBITS;
typedef struct _WHEA_PROCESSOR_GENERIC_ERROR_SECTION {
    WHEA_PROCESSOR_GENERIC_ERROR_SECTION_VALIDBITS ValidBits;
    UCHAR ProcessorType;
    UCHAR InstructionSet;
    UCHAR ErrorType;
    UCHAR Operation;
    UCHAR Flags;
    UCHAR Level;
    USHORT Reserved;
    ULONGLONG CPUVersion;
    UCHAR CPUBrandString[128];
    ULONGLONG ProcessorId;
    ULONGLONG TargetAddress;
    ULONGLONG RequesterId;
    ULONGLONG ResponderId;
    ULONGLONG InstructionPointer;
} WHEA_PROCESSOR_GENERIC_ERROR_SECTION, *PWHEA_PROCESSOR_GENERIC_ERROR_SECTION;
CPER_FIELD_CHECK(WHEA_PROCESSOR_GENERIC_ERROR_SECTION, ValidBits, 0, 8);
CPER_FIELD_CHECK(WHEA_PROCESSOR_GENERIC_ERROR_SECTION, ProcessorType, 8, 1);
CPER_FIELD_CHECK(WHEA_PROCESSOR_GENERIC_ERROR_SECTION, InstructionSet, 9, 1);
CPER_FIELD_CHECK(WHEA_PROCESSOR_GENERIC_ERROR_SECTION, ErrorType, 10, 1);
CPER_FIELD_CHECK(WHEA_PROCESSOR_GENERIC_ERROR_SECTION, Operation, 11, 1);
CPER_FIELD_CHECK(WHEA_PROCESSOR_GENERIC_ERROR_SECTION, Flags, 12, 1);
CPER_FIELD_CHECK(WHEA_PROCESSOR_GENERIC_ERROR_SECTION, Level, 13, 1);
CPER_FIELD_CHECK(WHEA_PROCESSOR_GENERIC_ERROR_SECTION, Reserved, 14, 2);
CPER_FIELD_CHECK(WHEA_PROCESSOR_GENERIC_ERROR_SECTION, CPUVersion, 16, 8);
CPER_FIELD_CHECK(WHEA_PROCESSOR_GENERIC_ERROR_SECTION, CPUBrandString, 24, 128);
CPER_FIELD_CHECK(WHEA_PROCESSOR_GENERIC_ERROR_SECTION, ProcessorId, 152, 8);
CPER_FIELD_CHECK(WHEA_PROCESSOR_GENERIC_ERROR_SECTION, TargetAddress, 160, 8);
CPER_FIELD_CHECK(WHEA_PROCESSOR_GENERIC_ERROR_SECTION, RequesterId, 168, 8);
CPER_FIELD_CHECK(WHEA_PROCESSOR_GENERIC_ERROR_SECTION, ResponderId, 176, 8);
CPER_FIELD_CHECK(WHEA_PROCESSOR_GENERIC_ERROR_SECTION, InstructionPointer, 184, 8);
typedef union _WHEA_XPF_CACHE_CHECK {
    struct {
        ULONGLONG TransactionTypeValid:1;
        ULONGLONG OperationValid:1;
        ULONGLONG LevelValid:1;
        ULONGLONG ProcessorContextCorruptValid:1;
        ULONGLONG UncorrectedValid:1;
        ULONGLONG PreciseIPValid:1;
        ULONGLONG RestartableIPValid:1;
        ULONGLONG OverflowValid:1;
        ULONGLONG ReservedValid:8;
        ULONGLONG TransactionType:2;
        ULONGLONG Operation:4;
        ULONGLONG Level:3;
        ULONGLONG ProcessorContextCorrupt:1;
        ULONGLONG Uncorrected:1;
        ULONGLONG PreciseIP:1;
        ULONGLONG RestartableIP:1;
        ULONGLONG Overflow:1;
        ULONGLONG Reserved:34;
    } DUMMYSTRUCTNAME;
    ULONGLONG XpfCacheCheck;
} WHEA_XPF_CACHE_CHECK, *PWHEA_XPF_CACHE_CHECK;
typedef union _WHEA_XPF_TLB_CHECK {
    struct {
        ULONGLONG TransactionTypeValid:1;
        ULONGLONG OperationValid:1;
        ULONGLONG LevelValid:1;
        ULONGLONG ProcessorContextCorruptValid:1;
        ULONGLONG UncorrectedValid:1;
        ULONGLONG PreciseIPValid:1;
        ULONGLONG RestartableIPValid:1;
        ULONGLONG OverflowValid:1;
        ULONGLONG ReservedValid:8;
        ULONGLONG TransactionType:2;
        ULONGLONG Operation:4;
        ULONGLONG Level:3;
        ULONGLONG ProcessorContextCorrupt:1;
        ULONGLONG Uncorrected:1;
        ULONGLONG PreciseIP:1;
        ULONGLONG RestartableIP:1;
        ULONGLONG Overflow:1;
        ULONGLONG Reserved:34;
    } DUMMYSTRUCTNAME;
    ULONGLONG XpfTLBCheck;
} WHEA_XPF_TLB_CHECK, *PWHEA_XPF_TLB_CHECK;
typedef union _WHEA_XPF_BUS_CHECK {
    struct {
        ULONGLONG TransactionTypeValid:1;
        ULONGLONG OperationValid:1;
        ULONGLONG LevelValid:1;
        ULONGLONG ProcessorContextCorruptValid:1;
        ULONGLONG UncorrectedValid:1;
        ULONGLONG PreciseIPValid:1;
        ULONGLONG RestartableIPValid:1;
        ULONGLONG OverflowValid:1;
        ULONGLONG ParticipationValid:1;
        ULONGLONG TimeoutValid:1;
        ULONGLONG AddressSpaceValid:1;
        ULONGLONG ReservedValid:5;
        ULONGLONG TransactionType:2;
        ULONGLONG Operation:4;
        ULONGLONG Level:3;
        ULONGLONG ProcessorContextCorrupt:1;
        ULONGLONG Uncorrected:1;
        ULONGLONG PreciseIP:1;
        ULONGLONG RestartableIP:1;
        ULONGLONG Overflow:1;
        ULONGLONG Participation:2;
        ULONGLONG Timeout:1;
        ULONGLONG AddressSpace:2;
        ULONGLONG Reserved:29;
    } DUMMYSTRUCTNAME;
    ULONGLONG XpfBusCheck;
} WHEA_XPF_BUS_CHECK, *PWHEA_XPF_BUS_CHECK;
typedef union _WHEA_XPF_MS_CHECK {
    struct {
        ULONGLONG ErrorTypeValid:1;
        ULONGLONG ProcessorContextCorruptValid:1;
        ULONGLONG UncorrectedValid:1;
        ULONGLONG PreciseIPValid:1;
        ULONGLONG RestartableIPValid:1;
        ULONGLONG OverflowValid:1;
        ULONGLONG ReservedValue:10;
        ULONGLONG ErrorType:3;
        ULONGLONG ProcessorContextCorrupt:1;
        ULONGLONG Uncorrected:1;
        ULONGLONG PreciseIP:1;
        ULONGLONG RestartableIP:1;
        ULONGLONG Overflow:1;
        ULONGLONG Reserved:40;
    } DUMMYSTRUCTNAME;
    ULONGLONG XpfMsCheck;
} WHEA_XPF_MS_CHECK, *PWHEA_XPF_MS_CHECK;
typedef union _WHEA_XPF_PROCINFO_VALIDBITS {
    struct {
        ULONGLONG CheckInfo:1;
        ULONGLONG TargetId:1;
        ULONGLONG RequesterId:1;
        ULONGLONG ResponderId:1;
        ULONGLONG InstructionPointer:1;
        ULONGLONG Reserved:59;
    } DUMMYSTRUCTNAME;
    ULONGLONG ValidBits;
} WHEA_XPF_PROCINFO_VALIDBITS, *PWHEA_XPF_PROCINFO_VALIDBITS;
typedef struct _WHEA_XPF_PROCINFO {
    GUID CheckInfoId;
    WHEA_XPF_PROCINFO_VALIDBITS ValidBits;
    union {
        WHEA_XPF_CACHE_CHECK CacheCheck;
        WHEA_XPF_TLB_CHECK TlbCheck;
        WHEA_XPF_BUS_CHECK BusCheck;
        WHEA_XPF_MS_CHECK MsCheck;
        ULONGLONG AsULONGLONG;
    } CheckInfo;
    ULONGLONG TargetId;
    ULONGLONG RequesterId;
    ULONGLONG ResponderId;
    ULONGLONG InstructionPointer;
} WHEA_XPF_PROCINFO, *PWHEA_XPF_PROCINFO;
typedef struct _WHEA_X86_REGISTER_STATE {
    ULONG Eax;
    ULONG Ebx;
    ULONG Ecx;
    ULONG Edx;
    ULONG Esi;
    ULONG Edi;
    ULONG Ebp;
    ULONG Esp;
    USHORT Cs;
    USHORT Ds;
    USHORT Ss;
    USHORT Es;
    USHORT Fs;
    USHORT Gs;
    ULONG Eflags;
    ULONG Eip;
    ULONG Cr0;
    ULONG Cr1;
    ULONG Cr2;
    ULONG Cr3;
    ULONG Cr4;
    ULONGLONG Gdtr;
    ULONGLONG Idtr;
    USHORT Ldtr;
    USHORT Tr;
} WHEA_X86_REGISTER_STATE, *PWHEA_X86_REGISTER_STATE;
typedef struct  _WHEA128A {
    ULONGLONG Low;
    LONGLONG High;
} WHEA128A, *PWHEA128A;
typedef struct _WHEA_X64_REGISTER_STATE {
    ULONGLONG Rax;
    ULONGLONG Rbx;
    ULONGLONG Rcx;
    ULONGLONG Rdx;
    ULONGLONG Rsi;
    ULONGLONG Rdi;
    ULONGLONG Rbp;
    ULONGLONG Rsp;
    ULONGLONG R8;
    ULONGLONG R9;
    ULONGLONG R10;
    ULONGLONG R11;
    ULONGLONG R12;
    ULONGLONG R13;
    ULONGLONG R14;
    ULONGLONG R15;
    USHORT Cs;
    USHORT Ds;
    USHORT Ss;
    USHORT Es;
    USHORT Fs;
    USHORT Gs;
    ULONG Reserved;
    ULONGLONG Rflags;
    ULONGLONG Eip;
    ULONGLONG Cr0;
    ULONGLONG Cr1;
    ULONGLONG Cr2;
    ULONGLONG Cr3;
    ULONGLONG Cr4;
    ULONGLONG Cr8;
    WHEA128A Gdtr;
    WHEA128A Idtr;
    USHORT Ldtr;
    USHORT Tr;
} WHEA_X64_REGISTER_STATE, *PWHEA_X64_REGISTER_STATE;
typedef struct _WHEA_XPF_CONTEXT_INFO {
    USHORT RegisterContextType;
    USHORT RegisterDataSize;
    ULONG MSRAddress;
    ULONGLONG MmRegisterAddress;
} WHEA_XPF_CONTEXT_INFO, *PWHEA_XPF_CONTEXT_INFO;
typedef union _WHEA_XPF_PROCESSOR_ERROR_SECTION_VALIDBITS {
    struct {
        ULONGLONG LocalAPICId:1;
        ULONGLONG CpuId:1;
        ULONGLONG ProcInfoCount:6;
        ULONGLONG ContextInfoCount:6;
        ULONGLONG Reserved:50;
    } DUMMYSTRUCTNAME;
    ULONGLONG ValidBits;
} WHEA_XPF_PROCESSOR_ERROR_SECTION_VALIDBITS,
  *PWHEA_XPF_PROCESSOR_ERROR_SECTION_VALIDBITS;
typedef struct _WHEA_XPF_PROCESSOR_ERROR_SECTION {
    WHEA_XPF_PROCESSOR_ERROR_SECTION_VALIDBITS ValidBits;
    ULONGLONG LocalAPICId;
    UCHAR CpuId[48];
    UCHAR VariableInfo[ANYSIZE_ARRAY];
} WHEA_XPF_PROCESSOR_ERROR_SECTION, *PWHEA_XPF_PROCESSOR_ERROR_SECTION;
CPER_FIELD_CHECK(WHEA_XPF_PROCINFO, CheckInfoId, 0, 16);
CPER_FIELD_CHECK(WHEA_XPF_PROCINFO, ValidBits, 16, 8);
CPER_FIELD_CHECK(WHEA_XPF_PROCINFO, CheckInfo, 24, 8);
CPER_FIELD_CHECK(WHEA_XPF_PROCINFO, TargetId, 32, 8);
CPER_FIELD_CHECK(WHEA_XPF_PROCINFO, RequesterId, 40, 8);
CPER_FIELD_CHECK(WHEA_XPF_PROCINFO, ResponderId, 48, 8);
CPER_FIELD_CHECK(WHEA_XPF_PROCINFO, InstructionPointer, 56, 8);
CPER_FIELD_CHECK(WHEA_X86_REGISTER_STATE, Eax, 0, 4);
CPER_FIELD_CHECK(WHEA_X86_REGISTER_STATE, Ebx, 4, 4);
CPER_FIELD_CHECK(WHEA_X86_REGISTER_STATE, Ecx, 8, 4);
CPER_FIELD_CHECK(WHEA_X86_REGISTER_STATE, Edx, 12, 4);
CPER_FIELD_CHECK(WHEA_X86_REGISTER_STATE, Esi, 16, 4);
CPER_FIELD_CHECK(WHEA_X86_REGISTER_STATE, Edi, 20, 4);
CPER_FIELD_CHECK(WHEA_X86_REGISTER_STATE, Ebp, 24, 4);
CPER_FIELD_CHECK(WHEA_X86_REGISTER_STATE, Esp, 28, 4);
CPER_FIELD_CHECK(WHEA_X86_REGISTER_STATE, Cs, 32, 2);
CPER_FIELD_CHECK(WHEA_X86_REGISTER_STATE, Ds, 34, 2);
CPER_FIELD_CHECK(WHEA_X86_REGISTER_STATE, Ss, 36, 2);
CPER_FIELD_CHECK(WHEA_X86_REGISTER_STATE, Es, 38, 2);
CPER_FIELD_CHECK(WHEA_X86_REGISTER_STATE, Fs, 40, 2);
CPER_FIELD_CHECK(WHEA_X86_REGISTER_STATE, Gs, 42, 2);
CPER_FIELD_CHECK(WHEA_X86_REGISTER_STATE, Eflags, 44, 4);
CPER_FIELD_CHECK(WHEA_X86_REGISTER_STATE, Eip, 48, 4);
CPER_FIELD_CHECK(WHEA_X86_REGISTER_STATE, Cr0, 52, 4);
CPER_FIELD_CHECK(WHEA_X86_REGISTER_STATE, Cr1, 56, 4);
CPER_FIELD_CHECK(WHEA_X86_REGISTER_STATE, Cr2, 60, 4);
CPER_FIELD_CHECK(WHEA_X86_REGISTER_STATE, Cr3, 64, 4);
CPER_FIELD_CHECK(WHEA_X86_REGISTER_STATE, Cr4, 68, 4);
CPER_FIELD_CHECK(WHEA_X86_REGISTER_STATE, Gdtr, 72, 8);
CPER_FIELD_CHECK(WHEA_X86_REGISTER_STATE, Idtr, 80, 8);
CPER_FIELD_CHECK(WHEA_X86_REGISTER_STATE, Ldtr, 88, 2);
CPER_FIELD_CHECK(WHEA_X86_REGISTER_STATE, Tr, 90, 2);
CPER_FIELD_CHECK(WHEA_X64_REGISTER_STATE, Rax, 0, 8);
CPER_FIELD_CHECK(WHEA_X64_REGISTER_STATE, Rbx, 8, 8);
CPER_FIELD_CHECK(WHEA_X64_REGISTER_STATE, Rcx, 16, 8);
CPER_FIELD_CHECK(WHEA_X64_REGISTER_STATE, Rdx, 24, 8);
CPER_FIELD_CHECK(WHEA_X64_REGISTER_STATE, Rsi, 32, 8);
CPER_FIELD_CHECK(WHEA_X64_REGISTER_STATE, Rdi, 40, 8);
CPER_FIELD_CHECK(WHEA_X64_REGISTER_STATE, Rbp, 48, 8);
CPER_FIELD_CHECK(WHEA_X64_REGISTER_STATE, Rsp, 56, 8);
CPER_FIELD_CHECK(WHEA_X64_REGISTER_STATE, R8, 64, 8);
CPER_FIELD_CHECK(WHEA_X64_REGISTER_STATE, R9, 72, 8);
CPER_FIELD_CHECK(WHEA_X64_REGISTER_STATE, R10, 80, 8);
CPER_FIELD_CHECK(WHEA_X64_REGISTER_STATE, R11, 88, 8);
CPER_FIELD_CHECK(WHEA_X64_REGISTER_STATE, R12, 96, 8);
CPER_FIELD_CHECK(WHEA_X64_REGISTER_STATE, R13, 104, 8);
CPER_FIELD_CHECK(WHEA_X64_REGISTER_STATE, R14, 112, 8);
CPER_FIELD_CHECK(WHEA_X64_REGISTER_STATE, R15, 120, 8);
CPER_FIELD_CHECK(WHEA_X64_REGISTER_STATE, Cs, 128, 2);
CPER_FIELD_CHECK(WHEA_X64_REGISTER_STATE, Ds, 130, 2);
CPER_FIELD_CHECK(WHEA_X64_REGISTER_STATE, Ss, 132, 2);
CPER_FIELD_CHECK(WHEA_X64_REGISTER_STATE, Es, 134, 2);
CPER_FIELD_CHECK(WHEA_X64_REGISTER_STATE, Fs, 136, 2);
CPER_FIELD_CHECK(WHEA_X64_REGISTER_STATE, Gs, 138, 2);
CPER_FIELD_CHECK(WHEA_X64_REGISTER_STATE, Reserved, 140, 4);
CPER_FIELD_CHECK(WHEA_X64_REGISTER_STATE, Rflags, 144, 8);
CPER_FIELD_CHECK(WHEA_X64_REGISTER_STATE, Eip, 152, 8);
CPER_FIELD_CHECK(WHEA_X64_REGISTER_STATE, Cr0, 160, 8);
CPER_FIELD_CHECK(WHEA_X64_REGISTER_STATE, Cr1, 168, 8);
CPER_FIELD_CHECK(WHEA_X64_REGISTER_STATE, Cr2, 176, 8);
CPER_FIELD_CHECK(WHEA_X64_REGISTER_STATE, Cr3, 184, 8);
CPER_FIELD_CHECK(WHEA_X64_REGISTER_STATE, Cr4, 192, 8);
CPER_FIELD_CHECK(WHEA_X64_REGISTER_STATE, Cr8, 200, 8);
CPER_FIELD_CHECK(WHEA_X64_REGISTER_STATE, Gdtr, 208, 16);
CPER_FIELD_CHECK(WHEA_X64_REGISTER_STATE, Idtr, 224, 16);
CPER_FIELD_CHECK(WHEA_X64_REGISTER_STATE, Ldtr, 240, 2);
CPER_FIELD_CHECK(WHEA_X64_REGISTER_STATE, Tr, 242, 2);
CPER_FIELD_CHECK(WHEA_XPF_CONTEXT_INFO, RegisterContextType, 0, 2);
CPER_FIELD_CHECK(WHEA_XPF_CONTEXT_INFO, RegisterDataSize, 2, 2);
CPER_FIELD_CHECK(WHEA_XPF_CONTEXT_INFO, MSRAddress, 4, 4);
CPER_FIELD_CHECK(WHEA_XPF_CONTEXT_INFO, MmRegisterAddress, 8, 8);
CPER_FIELD_CHECK(WHEA_XPF_PROCESSOR_ERROR_SECTION, ValidBits, 0, 8);
CPER_FIELD_CHECK(WHEA_XPF_PROCESSOR_ERROR_SECTION, LocalAPICId, 8, 8);
CPER_FIELD_CHECK(WHEA_XPF_PROCESSOR_ERROR_SECTION, CpuId, 16, 48);
CPER_FIELD_CHECK(WHEA_XPF_PROCESSOR_ERROR_SECTION, VariableInfo, 64, ANYSIZE_ARRAY);
typedef union _WHEA_MEMORY_ERROR_SECTION_VALIDBITS {
    struct {
        ULONGLONG ErrorStatus:1;
        ULONGLONG PhysicalAddress:1;
        ULONGLONG PhysicalAddressMask:1;
        ULONGLONG Node:1;
        ULONGLONG Card:1;
        ULONGLONG Module:1;
        ULONGLONG Bank:1;
        ULONGLONG Device:1;
        ULONGLONG Row:1;
        ULONGLONG Column:1;
        ULONGLONG BitPosition:1;
        ULONGLONG RequesterId:1;
        ULONGLONG ResponderId:1;
        ULONGLONG TargetId:1;
        ULONGLONG ErrorType:1;
        ULONGLONG RankNumber:1;
        ULONGLONG CardHandle:1;
        ULONGLONG ModuleHandle:1;
        ULONGLONG ExtendedRow:1;
        ULONGLONG BankGroup:1;
        ULONGLONG BankAddress:1;
        ULONGLONG ChipIdentification:1;
        ULONGLONG Reserved:42;
    } DUMMYSTRUCTNAME;
    ULONGLONG ValidBits;
} WHEA_MEMORY_ERROR_SECTION_VALIDBITS,
  *PWHEA_MEMORY_ERROR_SECTION_VALIDBITS;
typedef struct _WHEA_MEMORY_ERROR_SECTION {
    WHEA_MEMORY_ERROR_SECTION_VALIDBITS ValidBits;
    WHEA_ERROR_STATUS ErrorStatus;
    ULONGLONG PhysicalAddress;
    ULONGLONG PhysicalAddressMask;
    USHORT Node;
    USHORT Card;
    USHORT Module;
    USHORT Bank;
    USHORT Device;
    USHORT Row;
    USHORT Column;
    USHORT BitPosition;
    ULONGLONG RequesterId;
    ULONGLONG ResponderId;
    ULONGLONG TargetId;
    UCHAR ErrorType;
    UCHAR Extended;
    USHORT RankNumber;
    USHORT CardHandle;
    USHORT ModuleHandle;
} WHEA_MEMORY_ERROR_SECTION, *PWHEA_MEMORY_ERROR_SECTION;
CPER_FIELD_CHECK(WHEA_MEMORY_ERROR_SECTION, ValidBits, 0, 8);
CPER_FIELD_CHECK(WHEA_MEMORY_ERROR_SECTION, ErrorStatus, 8, 8);
CPER_FIELD_CHECK(WHEA_MEMORY_ERROR_SECTION, PhysicalAddress, 16, 8);
CPER_FIELD_CHECK(WHEA_MEMORY_ERROR_SECTION, PhysicalAddressMask, 24, 8);
CPER_FIELD_CHECK(WHEA_MEMORY_ERROR_SECTION, Node, 32, 2);
CPER_FIELD_CHECK(WHEA_MEMORY_ERROR_SECTION, Card, 34, 2);
CPER_FIELD_CHECK(WHEA_MEMORY_ERROR_SECTION, Module, 36, 2);
CPER_FIELD_CHECK(WHEA_MEMORY_ERROR_SECTION, Bank, 38, 2);
CPER_FIELD_CHECK(WHEA_MEMORY_ERROR_SECTION, Device, 40, 2);
CPER_FIELD_CHECK(WHEA_MEMORY_ERROR_SECTION, Row, 42, 2);
CPER_FIELD_CHECK(WHEA_MEMORY_ERROR_SECTION, Column, 44, 2);
CPER_FIELD_CHECK(WHEA_MEMORY_ERROR_SECTION, BitPosition, 46, 2);
CPER_FIELD_CHECK(WHEA_MEMORY_ERROR_SECTION, RequesterId, 48, 8);
CPER_FIELD_CHECK(WHEA_MEMORY_ERROR_SECTION, ResponderId, 56, 8);
CPER_FIELD_CHECK(WHEA_MEMORY_ERROR_SECTION, TargetId, 64, 8);
CPER_FIELD_CHECK(WHEA_MEMORY_ERROR_SECTION, ErrorType, 72, 1);
typedef union _WHEA_PMEM_ERROR_SECTION_VALIDBITS {
    struct {
        ULONGLONG ErrorStatus:1;
        ULONGLONG NFITHandle:1;
        ULONGLONG LocationInfo:1;
        ULONGLONG Reserved:61;
    } DUMMYSTRUCTNAME;
    ULONGLONG ValidBits;
} WHEA_PMEM_ERROR_SECTION_VALIDBITS,
  *PWHEA_PMEM_ERROR_SECTION_VALIDBITS;
typedef struct _WHEA_PMEM_PAGE_RANGE {
    ULONG64 StartingPfn;
    ULONG64 PageCount;
    ULONG64 MarkedBadBitmap;
} WHEA_PMEM_PAGE_RANGE, *PWHEA_PMEM_PAGE_RANGE;
typedef struct _WHEA_PMEM_ERROR_SECTION {
    WHEA_PMEM_ERROR_SECTION_VALIDBITS ValidBits;
    UCHAR LocationInfo[WHEA_PMEM_ERROR_SECTION_LOCATION_INFO_SIZE];
    WHEA_ERROR_STATUS ErrorStatus;
    ULONG NFITHandle;
    ULONG PageRangeCount;
    WHEA_PMEM_PAGE_RANGE PageRange[ANYSIZE_ARRAY];
} WHEA_PMEM_ERROR_SECTION, *PWHEA_PMEM_ERROR_SECTION;
CPER_FIELD_CHECK(WHEA_PMEM_ERROR_SECTION, ValidBits, 0, 8);
CPER_FIELD_CHECK(WHEA_PMEM_ERROR_SECTION, LocationInfo, 8, 64);
CPER_FIELD_CHECK(WHEA_PMEM_ERROR_SECTION, ErrorStatus, 72, 8);
CPER_FIELD_CHECK(WHEA_PMEM_ERROR_SECTION, NFITHandle, 80, 4);
CPER_FIELD_CHECK(WHEA_PMEM_ERROR_SECTION, PageRangeCount, 84, 4);
typedef union _WHEA_PCIEXPRESS_ERROR_SECTION_VALIDBITS {
    struct {
        ULONGLONG PortType:1;
        ULONGLONG Version:1;
        ULONGLONG CommandStatus:1;
        ULONGLONG DeviceId:1;
        ULONGLONG DeviceSerialNumber:1;
        ULONGLONG BridgeControlStatus:1;
        ULONGLONG ExpressCapability:1;
        ULONGLONG AerInfo:1;
        ULONGLONG Reserved:56;
    } DUMMYSTRUCTNAME;
    ULONGLONG ValidBits;
} WHEA_PCIEXPRESS_ERROR_SECTION_VALIDBITS,
  *PWHEA_PCIEXPRESS_ERROR_SECTION_VALIDBITS;
typedef struct _WHEA_PCIEXPRESS_DEVICE_ID {
    USHORT VendorID;
    USHORT DeviceID;
    ULONG ClassCode:24;
    ULONG FunctionNumber:8;
    ULONG DeviceNumber:8;
    ULONG Segment:16;
    ULONG PrimaryBusNumber:8;
    ULONG SecondaryBusNumber:8;
    ULONG Reserved1:3;
    ULONG SlotNumber:13;
    ULONG Reserved2:8;
} WHEA_PCIEXPRESS_DEVICE_ID, *PWHEA_PCIEXPRESS_DEVICE_ID;
typedef union _WHEA_PCIEXPRESS_VERSION {
    struct {
        UCHAR MinorVersion;
        UCHAR MajorVersion;
        USHORT Reserved;
    } DUMMYSTRUCTNAME;
    ULONG AsULONG;
} WHEA_PCIEXPRESS_VERSION, *PWHEA_PCIEXPRESS_VERSION;
typedef union _WHEA_PCIEXPRESS_COMMAND_STATUS {
    struct {
        USHORT Command;
        USHORT Status;
    } DUMMYSTRUCTNAME;
    ULONG AsULONG;
} WHEA_PCIEXPRESS_COMMAND_STATUS, *PWHEA_PCIEXPRESS_COMMAND_STATUS;
typedef union _WHEA_PCIEXPRESS_BRIDGE_CONTROL_STATUS {
    struct {
        USHORT BridgeSecondaryStatus;
        USHORT BridgeControl;
    } DUMMYSTRUCTNAME;
    ULONG AsULONG;
} WHEA_PCIEXPRESS_BRIDGE_CONTROL_STATUS,
    *PWHEA_PCIEXPRESS_BRIDGE_CONTROL_STATUS;
typedef enum _WHEA_PCIEXPRESS_DEVICE_TYPE {
    WheaPciExpressEndpoint = 0,
    WheaPciExpressLegacyEndpoint,
    WheaPciExpressRootPort = 4,
    WheaPciExpressUpstreamSwitchPort,
    WheaPciExpressDownstreamSwitchPort,
    WheaPciExpressToPciXBridge,
    WheaPciXToExpressBridge,
    WheaPciExpressRootComplexIntegratedEndpoint,
    WheaPciExpressRootComplexEventCollector
} WHEA_PCIEXPRESS_DEVICE_TYPE;
typedef struct _WHEA_PCIEXPRESS_ERROR_SECTION {
    WHEA_PCIEXPRESS_ERROR_SECTION_VALIDBITS ValidBits;
    WHEA_PCIEXPRESS_DEVICE_TYPE PortType;
    WHEA_PCIEXPRESS_VERSION Version;
    WHEA_PCIEXPRESS_COMMAND_STATUS CommandStatus;
    ULONG Reserved;
    WHEA_PCIEXPRESS_DEVICE_ID DeviceId;
    ULONGLONG DeviceSerialNumber;
    WHEA_PCIEXPRESS_BRIDGE_CONTROL_STATUS BridgeControlStatus;
    UCHAR ExpressCapability[60];
    UCHAR AerInfo[96];
} WHEA_PCIEXPRESS_ERROR_SECTION, *PWHEA_PCIEXPRESS_ERROR_SECTION;
CPER_FIELD_CHECK(WHEA_PCIEXPRESS_ERROR_SECTION, ValidBits, 0, 8);
CPER_FIELD_CHECK(WHEA_PCIEXPRESS_ERROR_SECTION, PortType, 8, 4);
CPER_FIELD_CHECK(WHEA_PCIEXPRESS_ERROR_SECTION, Version, 12, 4);
CPER_FIELD_CHECK(WHEA_PCIEXPRESS_ERROR_SECTION, CommandStatus, 16, 4);
CPER_FIELD_CHECK(WHEA_PCIEXPRESS_ERROR_SECTION, Reserved, 20, 4);
CPER_FIELD_CHECK(WHEA_PCIEXPRESS_ERROR_SECTION, DeviceId, 24, 16);
CPER_FIELD_CHECK(WHEA_PCIEXPRESS_ERROR_SECTION, DeviceSerialNumber, 40, 8);
CPER_FIELD_CHECK(WHEA_PCIEXPRESS_ERROR_SECTION, BridgeControlStatus, 48, 4);
CPER_FIELD_CHECK(WHEA_PCIEXPRESS_ERROR_SECTION, ExpressCapability, 52, 60);
CPER_FIELD_CHECK(WHEA_PCIEXPRESS_ERROR_SECTION, AerInfo, 112, 96);
typedef union _WHEA_PCIXBUS_ERROR_SECTION_VALIDBITS {
    struct {
        ULONGLONG ErrorStatus:1;
        ULONGLONG ErrorType:1;
        ULONGLONG BusId:1;
        ULONGLONG BusAddress:1;
        ULONGLONG BusData:1;
        ULONGLONG BusCommand:1;
        ULONGLONG RequesterId:1;
        ULONGLONG CompleterId:1;
        ULONGLONG TargetId:1;
        ULONGLONG Reserved:55;
    } DUMMYSTRUCTNAME;
    ULONGLONG ValidBits;
} WHEA_PCIXBUS_ERROR_SECTION_VALIDBITS, *PWHEA_PCIXBUS_ERROR_SECTION_VALIDBITS;
typedef union _WHEA_PCIXBUS_ID {
    struct {
        UCHAR BusNumber;
        UCHAR BusSegment;
    } DUMMYSTRUCTNAME;
    USHORT AsUSHORT;
} WHEA_PCIXBUS_ID, *PWHEA_PCIXBUS_ID;
typedef union _WHEA_PCIXBUS_COMMAND {
    struct {
        ULONGLONG Command:56;
        ULONGLONG PCIXCommand:1;
        ULONGLONG Reserved:7;
    } DUMMYSTRUCTNAME;
    ULONGLONG AsULONGLONG;
} WHEA_PCIXBUS_COMMAND, *PWHEA_PCIXBUS_COMMAND;
typedef struct _WHEA_PCIXBUS_ERROR_SECTION {
    WHEA_PCIXBUS_ERROR_SECTION_VALIDBITS ValidBits;
    WHEA_ERROR_STATUS ErrorStatus;
    USHORT ErrorType;
    WHEA_PCIXBUS_ID BusId;
    ULONG Reserved;
    ULONGLONG BusAddress;
    ULONGLONG BusData;
    WHEA_PCIXBUS_COMMAND BusCommand;
    ULONGLONG RequesterId;
    ULONGLONG CompleterId;
    ULONGLONG TargetId;
} WHEA_PCIXBUS_ERROR_SECTION, *PWHEA_PCIXBUS_ERROR_SECTION;
CPER_FIELD_CHECK(WHEA_PCIXBUS_ERROR_SECTION, ValidBits, 0, 8);
CPER_FIELD_CHECK(WHEA_PCIXBUS_ERROR_SECTION, ErrorStatus, 8, 8);
CPER_FIELD_CHECK(WHEA_PCIXBUS_ERROR_SECTION, ErrorType, 16, 2);
CPER_FIELD_CHECK(WHEA_PCIXBUS_ERROR_SECTION, BusId, 18, 2);
CPER_FIELD_CHECK(WHEA_PCIXBUS_ERROR_SECTION, Reserved, 20, 4);
CPER_FIELD_CHECK(WHEA_PCIXBUS_ERROR_SECTION, BusAddress, 24, 8);
CPER_FIELD_CHECK(WHEA_PCIXBUS_ERROR_SECTION, BusData, 32, 8);
CPER_FIELD_CHECK(WHEA_PCIXBUS_ERROR_SECTION, BusCommand, 40, 8);
CPER_FIELD_CHECK(WHEA_PCIXBUS_ERROR_SECTION, RequesterId, 48, 8);
CPER_FIELD_CHECK(WHEA_PCIXBUS_ERROR_SECTION, CompleterId, 56, 8);
CPER_FIELD_CHECK(WHEA_PCIXBUS_ERROR_SECTION, TargetId, 64, 8);
typedef union _WHEA_PCIXDEVICE_ERROR_SECTION_VALIDBITS {
    struct {
        ULONGLONG ErrorStatus:1;
        ULONGLONG IdInfo:1;
        ULONGLONG MemoryNumber:1;
        ULONGLONG IoNumber:1;
        ULONGLONG RegisterDataPairs:1;
        ULONGLONG Reserved:59;
    } DUMMYSTRUCTNAME;
    ULONGLONG ValidBits;
} WHEA_PCIXDEVICE_ERROR_SECTION_VALIDBITS,
  *PWHEA_PCIXDEVICE_ERROR_SECTION_VALIDBITS;
typedef struct _WHEA_PCIXDEVICE_ID {
    USHORT VendorId;
    USHORT DeviceId;
    ULONG ClassCode:24;
    ULONG FunctionNumber:8;
    ULONG DeviceNumber:8;
    ULONG BusNumber:8;
    ULONG SegmentNumber:8;
    ULONG Reserved1:8;
    ULONG Reserved2;
} WHEA_PCIXDEVICE_ID, *PWHEA_PCIXDEVICE_ID;
typedef struct WHEA_PCIXDEVICE_REGISTER_PAIR {
    ULONGLONG Register;
    ULONGLONG Data;
} WHEA_PCIXDEVICE_REGISTER_PAIR, *PWHEA_PCIXDEVICE_REGISTER_PAIR;
typedef struct _WHEA_PCIXDEVICE_ERROR_SECTION {
    WHEA_PCIXDEVICE_ERROR_SECTION_VALIDBITS ValidBits;
    WHEA_ERROR_STATUS ErrorStatus;
    WHEA_PCIXDEVICE_ID IdInfo;
    ULONG MemoryNumber;
    ULONG IoNumber;
    WHEA_PCIXDEVICE_REGISTER_PAIR RegisterDataPairs[ANYSIZE_ARRAY];
} WHEA_PCIXDEVICE_ERROR_SECTION, *PWHEA_PCIXDEVICE_ERROR_SECTION;
CPER_FIELD_CHECK(WHEA_PCIXDEVICE_ERROR_SECTION, ValidBits, 0, 8);
CPER_FIELD_CHECK(WHEA_PCIXDEVICE_ERROR_SECTION, ErrorStatus, 8, 8);
CPER_FIELD_CHECK(WHEA_PCIXDEVICE_ERROR_SECTION, IdInfo, 16, 16);
CPER_FIELD_CHECK(WHEA_PCIXDEVICE_ERROR_SECTION, MemoryNumber, 32, 4);
CPER_FIELD_CHECK(WHEA_PCIXDEVICE_ERROR_SECTION, IoNumber, 36, 4);
CPER_FIELD_CHECK(WHEA_PCIXDEVICE_ERROR_SECTION, RegisterDataPairs, 40, 16);
typedef struct _WHEA_FIRMWARE_ERROR_RECORD_REFERENCE {
    UCHAR Type;
    UCHAR Reserved[7];
    ULONGLONG FirmwareRecordId;
} WHEA_FIRMWARE_ERROR_RECORD_REFERENCE, *PWHEA_FIRMWARE_ERROR_RECORD_REFERENCE;
CPER_FIELD_CHECK(WHEA_FIRMWARE_ERROR_RECORD_REFERENCE, Type, 0, 1);
CPER_FIELD_CHECK(WHEA_FIRMWARE_ERROR_RECORD_REFERENCE, Reserved, 1, 7);
CPER_FIELD_CHECK(WHEA_FIRMWARE_ERROR_RECORD_REFERENCE, FirmwareRecordId, 8, 8);
typedef union _MCG_CAP {
    struct {
        ULONG64 CountField: 8;
        ULONG64 ControlMsrPresent: 1;
        ULONG64 ExtendedMsrsPresent: 1;
        ULONG64 SignalingExtensionPresent: 1;
        ULONG64 ThresholdErrorStatusPresent: 1;
        ULONG64 Reserved: 4;
        ULONG64 ExtendedRegisterCount: 8;
        ULONG64 SoftwareErrorRecoverySupported: 1;
        ULONG64 EnhancedMachineCheckCapability: 1;
        ULONG64 ExtendedErrorLogging: 1;
        ULONG64 LocalMachineCheckException: 1;
    } DUMMYSTRUCTNAME;
    ULONG64 QuadPart;
} MCG_CAP, *PMCG_CAP;
typedef union _MCG_STATUS {
    struct {
        ULONG RestartIpValid:1;
        ULONG ErrorIpValid:1;
        ULONG MachineCheckInProgress:1;
        ULONG LocalMceValid:1;
        ULONG Reserved1:28;
        ULONG Reserved2;
    } DUMMYSTRUCTNAME;
    ULONGLONG QuadPart;
} MCG_STATUS, *PMCG_STATUS;
typedef struct _MCI_STATUS_BITS_COMMON {
        ULONG64 McaErrorCode : 16;
        ULONG64 ModelErrorCode : 16;
        ULONG64 Reserved : 25;
        ULONG64 ContextCorrupt : 1;
        ULONG64 AddressValid : 1;
        ULONG64 MiscValid : 1;
        ULONG64 ErrorEnabled : 1;
        ULONG64 UncorrectedError : 1;
        ULONG64 StatusOverFlow : 1;
        ULONG64 Valid : 1;
} MCI_STATUS_BITS_COMMON, *PMCI_STATUS_BITS_COMMON;
typedef struct _MCI_STATUS_AMD_BITS {
        ULONG64 McaErrorCode : 16;
        ULONG64 ModelErrorCode : 16;
        ULONG64 ImplementationSpecific2 : 11;
        ULONG64 Poison : 1;
        ULONG64 Deferred : 1;
        ULONG64 ImplementationSpecific1 : 12;
        ULONG64 ContextCorrupt : 1;
        ULONG64 AddressValid : 1;
        ULONG64 MiscValid : 1;
        ULONG64 ErrorEnabled : 1;
        ULONG64 UncorrectedError : 1;
        ULONG64 StatusOverFlow : 1;
        ULONG64 Valid : 1;
} MCI_STATUS_AMD_BITS, *PMCI_STATUS_AMD_BITS;
typedef struct _MCI_STATUS_INTEL_BITS {
        ULONG64 McaErrorCode : 16;
        ULONG64 ModelErrorCode : 16;
        ULONG64 OtherInfo : 5;
        ULONG64 FirmwareUpdateError : 1;
        ULONG64 CorrectedErrorCount : 15;
        ULONG64 ThresholdErrorStatus : 2;
        ULONG64 ActionRequired : 1;
        ULONG64 Signalling : 1;
        ULONG64 ContextCorrupt : 1;
        ULONG64 AddressValid : 1;
        ULONG64 MiscValid : 1;
        ULONG64 ErrorEnabled : 1;
        ULONG64 UncorrectedError : 1;
        ULONG64 StatusOverFlow : 1;
        ULONG64 Valid : 1;
} MCI_STATUS_INTEL_BITS, *PMCI_STATUS_INTEL_BITS;
typedef union _MCI_STATUS {
    MCI_STATUS_BITS_COMMON CommonBits;
    MCI_STATUS_AMD_BITS AmdBits;
    MCI_STATUS_INTEL_BITS IntelBits;
    ULONG64 QuadPart;
} MCI_STATUS, *PMCI_STATUS;
typedef enum _WHEA_CPU_VENDOR {
    WheaCpuVendorOther = 0,
    WheaCpuVendorIntel,
    WheaCpuVendorAmd
} WHEA_CPU_VENDOR, *PWHEA_CPU_VENDOR;
typedef struct _WHEA_AMD_EXTENDED_REGISTERS {
    ULONGLONG IPID;
    ULONGLONG SYND;
    ULONGLONG CONFIG;
    ULONGLONG DESTAT;
    ULONGLONG DEADDR;
    ULONGLONG MISC1;
    ULONGLONG MISC2;
    ULONGLONG MISC3;
    ULONGLONG MISC4;
    ULONGLONG RasCap;
    ULONGLONG Reserved[WHEA_XPF_MCA_EXTREG_MAX_COUNT - WHEA_AMD_EXT_REG_NUM];
} WHEA_AMD_EXTENDED_REGISTERS, *PWHEA_AMD_EXTENDED_REGISTERS;
typedef struct _WHEA_XPF_MCA_SECTION {
    ULONG VersionNumber;
    WHEA_CPU_VENDOR CpuVendor;
    LARGE_INTEGER Timestamp;
    ULONG ProcessorNumber;
    MCG_STATUS GlobalStatus;
    ULONGLONG InstructionPointer;
    ULONG BankNumber;
    MCI_STATUS Status;
    ULONGLONG Address;
    ULONGLONG Misc;
    ULONG ExtendedRegisterCount;
    ULONG ApicId;
    union {
        ULONGLONG ExtendedRegisters[WHEA_XPF_MCA_EXTREG_MAX_COUNT];
        WHEA_AMD_EXTENDED_REGISTERS AMDExtendedRegisters;
    };
    MCG_CAP GlobalCapability;
} WHEA_XPF_MCA_SECTION, *PWHEA_XPF_MCA_SECTION;
typedef union _WHEA_NMI_ERROR_SECTION_FLAGS {
    struct {
        ULONG HypervisorError:1;
        ULONG Reserved:31;
    } DUMMYSTRUCTNAME;
    ULONG AsULONG;
} WHEA_NMI_ERROR_SECTION_FLAGS, *PWHEA_NMI_ERROR_SECTION_FLAGS;
typedef struct _WHEA_NMI_ERROR_SECTION {
    UCHAR Data[8];
    WHEA_NMI_ERROR_SECTION_FLAGS Flags;
} WHEA_NMI_ERROR_SECTION, *PWHEA_NMI_ERROR_SECTION;
typedef union _WHEA_ARM_PROCESSOR_ERROR_SECTION_VALID_BITS {
    struct {
        ULONG MPIDR:1;
        ULONG AffinityLevel:1;
        ULONG RunningState:1;
        ULONG VendorSpecificInfo:1;
        ULONG Reserved:28;
    } DUMMYSTRUCTNAME;
    ULONG AsULONG;
} WHEA_ARM_PROCESSOR_ERROR_SECTION_VALID_BITS,
  *PWHEA_ARM_PROCESSOR_ERROR_SECTION_VALID_BITS;
typedef struct _WHEA_ARM_PROCESSOR_ERROR_SECTION {
    WHEA_ARM_PROCESSOR_ERROR_SECTION_VALID_BITS ValidBits;
    USHORT ErrorInformationStructures;
    USHORT ContextInformationStructures;
    ULONG SectionLength;
    UCHAR ErrorAffinityLevel;
    UCHAR Reserved[3];
    ULONGLONG MPIDR_EL1;
    ULONGLONG MIDR_EL1;
    ULONG RunningState;
    ULONG PSCIState;
    UCHAR Data[1];
} WHEA_ARM_PROCESSOR_ERROR_SECTION, *PWHEA_ARM_PROCESSOR_ERROR_SECTION;
CPER_FIELD_CHECK(WHEA_ARM_PROCESSOR_ERROR_SECTION, ValidBits, 0, 4);
CPER_FIELD_CHECK(WHEA_ARM_PROCESSOR_ERROR_SECTION, ErrorInformationStructures, 4, 2);
CPER_FIELD_CHECK(WHEA_ARM_PROCESSOR_ERROR_SECTION, ContextInformationStructures, 6, 2);
CPER_FIELD_CHECK(WHEA_ARM_PROCESSOR_ERROR_SECTION, SectionLength, 8, 4);
CPER_FIELD_CHECK(WHEA_ARM_PROCESSOR_ERROR_SECTION, ErrorAffinityLevel, 12, 1);
CPER_FIELD_CHECK(WHEA_ARM_PROCESSOR_ERROR_SECTION, Reserved, 13, 3);
CPER_FIELD_CHECK(WHEA_ARM_PROCESSOR_ERROR_SECTION, MPIDR_EL1, 16, 8);
CPER_FIELD_CHECK(WHEA_ARM_PROCESSOR_ERROR_SECTION, MIDR_EL1, 24, 8);
CPER_FIELD_CHECK(WHEA_ARM_PROCESSOR_ERROR_SECTION, RunningState, 32, 4);
CPER_FIELD_CHECK(WHEA_ARM_PROCESSOR_ERROR_SECTION, PSCIState, 36, 4);
CPER_FIELD_CHECK(WHEA_ARM_PROCESSOR_ERROR_SECTION, Data, 40, 1);
typedef union _WHEA_ARM_PROCESSOR_ERROR_INFORMATION_VALID_BITS {
    struct {
        USHORT MultipleError:1;
        USHORT Flags:1;
        USHORT ErrorInformation:1;
        USHORT VirtualFaultAddress:1;
        USHORT PhysicalFaultAddress:1;
        USHORT Reserved:11;
    } DUMMYSTRUCTNAME;
    USHORT AsUSHORT;
} WHEA_ARM_PROCESSOR_ERROR_INFORMATION_VALID_BITS,
  *PWHEA_ARM_PROCESSOR_ERROR_INFORMATION_VALID_BITS;
typedef union _WHEA_ARM_CACHE_ERROR_VALID_BITS {
    struct {
        USHORT TransactionType:1;
        USHORT Operation:1;
        USHORT Level:1;
        USHORT ProcessorContextCorrupt:1;
        USHORT Corrected:1;
        USHORT PrecisePC:1;
        USHORT RestartablePC:1;
        USHORT Reserved:9;
    } DUMMYSTRUCTNAME;
    USHORT AsUSHORT;
} WHEA_ARM_CACHE_ERROR_VALID_BITS, *PWHEA_ARM_CACHE_ERROR_VALID_BITS;
typedef struct _WHEA_ARM_CACHE_ERROR {
    WHEA_ARM_CACHE_ERROR_VALID_BITS ValidationBit;
    UCHAR TransactionType:2;
    UCHAR Operation:4;
    UCHAR Level:3;
    UCHAR ProcessorContextCorrupt:1;
    UCHAR Corrected:1;
    UCHAR PrecisePC:1;
    UCHAR RestartablePC:1;
    ULONGLONG Reserved:35;
} WHEA_ARM_CACHE_ERROR, *PWHEA_ARM_CACHE_ERROR;
typedef union _WHEA_ARM_TLB_ERROR_VALID_BITS {
    struct {
        USHORT TransactionType:1;
        USHORT Operation:1;
        USHORT Level:1;
        USHORT ProcessorContextCorrupt:1;
        USHORT Corrected:1;
        USHORT PrecisePC:1;
        USHORT RestartablePC:1;
        USHORT Reserved:9;
    } DUMMYSTRUCTNAME;
    USHORT AsUSHORT;
} WHEA_ARM_TLB_ERROR_VALID_BITS, *PWHEA_ARM_TLB_ERROR_VALID_BITS;
typedef struct _WHEA_ARM_TLB_ERROR {
    WHEA_ARM_TLB_ERROR_VALID_BITS ValidationBit;
    UCHAR TransactionType:2;
    UCHAR Operation:4;
    UCHAR Level:3;
    UCHAR ProcessorContextCorrupt:1;
    UCHAR Corrected:1;
    UCHAR PrecisePC:1;
    UCHAR RestartablePC:1;
    ULONGLONG Reserved:36;
} WHEA_ARM_TLB_ERROR, *PWHEA_ARM_TLB_ERROR;
typedef union _WHEA_ARM_BUS_ERROR_VALID_BITS {
    struct {
        USHORT TransactionType:1;
        USHORT Operation:1;
        USHORT Level:1;
        USHORT ProcessorContextCorrupt:1;
        USHORT Corrected:1;
        USHORT PrecisePC:1;
        USHORT RestartablePC:1;
        USHORT ParticipationType:1;
        USHORT Timeout:1;
        USHORT AddressSpace:1;
        USHORT MemoryAttributes:1;
        USHORT AccessMode:1;
        USHORT Reserved:4;
    } DUMMYSTRUCTNAME;
    USHORT AsUSHORT;
} WHEA_ARM_BUS_ERROR_VALID_BITS, *PWHEA_ARM_BUS_ERROR_VALID_BITS;
typedef struct _WHEA_ARM_BUS_ERROR {
    WHEA_ARM_BUS_ERROR_VALID_BITS ValidationBit;
    UCHAR TransactionType:2;
    UCHAR Operation:4;
    UCHAR Level:3;
    UCHAR ProcessorContextCorrupt:1;
    UCHAR Corrected:1;
    UCHAR PrecisePC:1;
    UCHAR RestartablePC:1;
    UCHAR ParticipationType:2;
    UCHAR TimeOut:1;
    UCHAR AddressSpace:2;
    USHORT MemoryAccessAttributes:9;
    UCHAR AccessMode:1;
    ULONG Reserved:20;
} WHEA_ARM_BUS_ERROR, *PWHEA_ARM_BUS_ERROR;
typedef union _WHEA_ARM_PROCESSOR_ERROR {
    WHEA_ARM_CACHE_ERROR CacheError;
    WHEA_ARM_TLB_ERROR TlbError;
    WHEA_ARM_BUS_ERROR BusError;
    ULONGLONG AsULONGLONG;
} WHEA_ARM_PROCESSOR_ERROR, *PWHEA_ARM_PROCESSOR_ERROR;
typedef struct _WHEA_ARM_PROCESSOR_ERROR_INFORMATION {
    UCHAR Version;
    UCHAR Length;
    WHEA_ARM_PROCESSOR_ERROR_INFORMATION_VALID_BITS ValidationBit;
    UCHAR Type;
    USHORT MultipleError;
    UCHAR Flags;
    ULONGLONG ErrorInformation;
    ULONGLONG VirtualFaultAddress;
    ULONGLONG PhysicalFaultAddress;
} WHEA_ARM_PROCESSOR_ERROR_INFORMATION, *PWHEA_ARM_PROCESSOR_ERROR_INFORMATION;
CPER_FIELD_CHECK(WHEA_ARM_PROCESSOR_ERROR_INFORMATION, Version, 0, 1);
CPER_FIELD_CHECK(WHEA_ARM_PROCESSOR_ERROR_INFORMATION, Length, 1, 1);
CPER_FIELD_CHECK(WHEA_ARM_PROCESSOR_ERROR_INFORMATION, ValidationBit, 2, 2);
CPER_FIELD_CHECK(WHEA_ARM_PROCESSOR_ERROR_INFORMATION, Type, 4, 1);
CPER_FIELD_CHECK(WHEA_ARM_PROCESSOR_ERROR_INFORMATION, MultipleError, 5, 2);
CPER_FIELD_CHECK(WHEA_ARM_PROCESSOR_ERROR_INFORMATION, Flags, 7, 1);
CPER_FIELD_CHECK(WHEA_ARM_PROCESSOR_ERROR_INFORMATION, ErrorInformation, 8, 8);
CPER_FIELD_CHECK(WHEA_ARM_PROCESSOR_ERROR_INFORMATION, VirtualFaultAddress, 16, 8);
CPER_FIELD_CHECK(WHEA_ARM_PROCESSOR_ERROR_INFORMATION, PhysicalFaultAddress, 24, 8);
typedef union _WHEA_ARM_PROCESSOR_ERROR_CONTEXT_INFORMATION_HEADER_FLAGS {
    struct {
        ULONG ExceptionLevel:1;
        ULONG NonSecure:1;
        ULONG AArch64:1;
        ULONG Reserved:29;
    } DUMMYSTRUCTNAME;
    ULONG AsULONG;
} WHEA_ARM_PROCESSOR_ERROR_CONTEXT_INFORMATION_HEADER_FLAGS,
  *PWHEA_ARM_PROCESSOR_ERROR_CONTEXT_INFORMATION_HEADER_FLAGS;
typedef struct _WHEA_ARMV8_AARCH32_GPRS {
    ULONG R0;
    ULONG R1;
    ULONG R2;
    ULONG R3;
    ULONG R4;
    ULONG R5;
    ULONG R6;
    ULONG R7;
    ULONG R8;
    ULONG R9;
    ULONG R10;
    ULONG R11;
    ULONG R12;
    ULONG R13;
    ULONG R14;
    ULONG R15;
} WHEA_ARMV8_AARCH32_GPRS, *PWHEA_ARMV8_AARCH32_GPRS;
typedef struct _WHEA_ARM_AARCH32_EL1_CSR {
    ULONG DFAR;
    ULONG DFSR;
    ULONG IFAR;
    ULONG ISR;
    ULONG MAIR0;
    ULONG MAIR1;
    ULONG MIDR;
    ULONG MPIDR;
    ULONG NMRR;
    ULONG PRRR;
    ULONG SCTLR;
    ULONG SPSR;
    ULONG SPSR_abt;
    ULONG SPSR_fiq;
    ULONG SPSR_irq;
    ULONG SPSR_svc;
    ULONG SPSR_und;
    ULONG TPIDRPRW;
    ULONG TPIDRURO;
    ULONG TPIDRURW;
    ULONG TTBCR;
    ULONG TTBR0;
    ULONG TTBR1;
    ULONG DACR;
} WHEA_ARM_AARCH32_EL1_CSR, *PWHEA_ARM_AARCH32_EL1;
typedef struct _WHEA_ARM_AARCH32_EL2_CSR {
    ULONG ELR_hyp;
    ULONG HAMAIR0;
    ULONG HAMAIR1;
    ULONG HCR;
    ULONG HCR2;
    ULONG HDFAR;
    ULONG HIFAR;
    ULONG HPFAR;
    ULONG HSR;
    ULONG HTCR;
    ULONG HTPIDR;
    ULONG HTTBR;
    ULONG SPSR_hyp;
    ULONG VTCR;
    ULONG VTTBR;
    ULONG DACR32_EL2;
} WHEA_ARM_AARCH32_EL2_CSR, *PWHEA_ARM_AARCH32_EL2_CSR;
typedef struct _WHEA_ARM_AARCH32_SECURE_CSR {
    ULONG SCTLR;
    ULONG SPSR_mon;
} WHEA_ARM_AARCH32_SECURE_CSR, *PWHEA_ARM_AARCH32_SECURE_CSR;
typedef struct _WHEA_ARMV8_AARCH64_GPRS {
    ULONGLONG X0;
    ULONGLONG X1;
    ULONGLONG X2;
    ULONGLONG X3;
    ULONGLONG X4;
    ULONGLONG X5;
    ULONGLONG X6;
    ULONGLONG X7;
    ULONGLONG X8;
    ULONGLONG X9;
    ULONGLONG X10;
    ULONGLONG X11;
    ULONGLONG X12;
    ULONGLONG X13;
    ULONGLONG X14;
    ULONGLONG X15;
    ULONGLONG X16;
    ULONGLONG X17;
    ULONGLONG X18;
    ULONGLONG X19;
    ULONGLONG X20;
    ULONGLONG X21;
    ULONGLONG X22;
    ULONGLONG X23;
    ULONGLONG X24;
    ULONGLONG X25;
    ULONGLONG X26;
    ULONGLONG X27;
    ULONGLONG X28;
    ULONGLONG X29;
    ULONGLONG X30;
    ULONGLONG SP;
} WHEA_ARMV8_AARCH64_GPRS, *PWHEA_ARMV8_AARCH64_GPRS;
typedef struct _WHEA_ARM_AARCH64_EL1_CSR {
    ULONGLONG ELR_EL1;
    ULONGLONG ESR_EL2;
    ULONGLONG FAR_EL1;
    ULONGLONG ISR_EL1;
    ULONGLONG MAIR_EL1;
    ULONGLONG MIDR_EL1;
    ULONGLONG MPIDR_EL1;
    ULONGLONG SCTLR_EL1;
    ULONGLONG SP_EL0;
    ULONGLONG SP_EL1;
    ULONGLONG SPSR_EL1;
    ULONGLONG TCR_EL1;
    ULONGLONG TPIDR_EL0;
    ULONGLONG TPIDR_EL1;
    ULONGLONG TPIDRRO_EL0;
    ULONGLONG TTBR0_EL1;
    ULONGLONG TTBR1_EL1;
} WHEA_ARM_AARCH64_EL1_CSR, *PWHEA_ARM_AARCH64_EL1_CSR;
typedef struct _WHEA_ARM_AARCH64_EL2_CSR {
    ULONGLONG ELR_EL2;
    ULONGLONG ESR_EL2;
    ULONGLONG FAR_EL2;
    ULONGLONG HACR_EL2;
    ULONGLONG HCR_EL2;
    ULONGLONG HPFAR_EL2;
    ULONGLONG MAIR_EL2;
    ULONGLONG SCTLR_EL2;
    ULONGLONG SP_EL2;
    ULONGLONG SPSR_EL2;
    ULONGLONG TCR_EL2;
    ULONGLONG TPIDR_EL2;
    ULONGLONG TTBR0_EL2;
    ULONGLONG VTCR_EL2;
    ULONGLONG VTTBR_EL2;
} WHEA_ARM_AARCH64_EL2_CSR, *PWHEA_ARM_AARCH64_EL2_CSR;
typedef struct _WHEA_ARMV8_AARCH64_EL3_CSR {
    ULONGLONG ELR_EL3;
    ULONGLONG ESR_EL3;
    ULONGLONG FAR_EL3;
    ULONGLONG MAIR_EL3;
    ULONGLONG SCTLR_EL3;
    ULONGLONG SP_EL3;
    ULONGLONG SPSR_EL3;
    ULONGLONG TCR_EL3;
    ULONGLONG TPIDR_EL3;
    ULONGLONG TTBR0_EL3;
} WHEA_ARMV8_AARCH64_EL3_CSR, *PWHEA_ARMV8_AARCH64_EL3_CSR;
typedef struct _WHEA_ARM_MISC_CSR {
    USHORT MRSEncoding;
    ULONGLONG Value;
} WHEA_ARM_MISC_CSR, *PWHEA_ARM_MISC_CSR;
typedef struct _WHEA_ARM_PROCESSOR_ERROR_CONTEXT_INFORMATION_HEADER {
    USHORT Version;
    USHORT RegisterContextType;
    ULONG RegisterArraySize;
    UCHAR RegisterArray[1];
} WHEA_ARM_PROCESSOR_ERROR_CONTEXT_INFORMATION_HEADER,
  *PWHEA_ARM_PROCESSOR_ERROR_CONTEXT_INFORMATION_HEADER;
CPER_FIELD_CHECK(WHEA_ARM_PROCESSOR_ERROR_CONTEXT_INFORMATION_HEADER, Version, 0, 2);
CPER_FIELD_CHECK(WHEA_ARM_PROCESSOR_ERROR_CONTEXT_INFORMATION_HEADER, RegisterContextType, 2, 2);
CPER_FIELD_CHECK(WHEA_ARM_PROCESSOR_ERROR_CONTEXT_INFORMATION_HEADER, RegisterArraySize, 4, 4);
CPER_FIELD_CHECK(WHEA_ARM_PROCESSOR_ERROR_CONTEXT_INFORMATION_HEADER, RegisterArray, 8, 1);
#include <poppack.h>
DEFINE_GUID(CMC_NOTIFY_TYPE_GUID,
            0x2dce8bb1, 0xbdd7, 0x450e, 0xb9, 0xad,
            0x9c, 0xf4, 0xeb, 0xd4, 0xf8, 0x90);
DEFINE_GUID(CPE_NOTIFY_TYPE_GUID,
            0x4e292f96, 0xd843, 0x4a55, 0xa8, 0xc2,
            0xd4, 0x81, 0xf2, 0x7e, 0xbe, 0xee);
DEFINE_GUID(MCE_NOTIFY_TYPE_GUID,
            0xe8f56ffe, 0x919c, 0x4cc5, 0xba, 0x88,
            0x65, 0xab, 0xe1, 0x49, 0x13, 0xbb);
DEFINE_GUID(PCIe_NOTIFY_TYPE_GUID,
            0xcf93c01f, 0x1a16, 0x4dfc, 0xb8, 0xbc,
            0x9c, 0x4d, 0xaf, 0x67, 0xc1, 0x04);
DEFINE_GUID(INIT_NOTIFY_TYPE_GUID,
            0xcc5263e8, 0x9308, 0x454a, 0x89, 0xd0,
            0x34, 0x0b, 0xd3, 0x9b, 0xc9, 0x8e);
DEFINE_GUID(NMI_NOTIFY_TYPE_GUID,
            0x5bad89ff, 0xb7e6, 0x42c9, 0x81, 0x4a,
            0xcf, 0x24, 0x85, 0xd6, 0xe9, 0x8a);
DEFINE_GUID(BOOT_NOTIFY_TYPE_GUID,
            0x3d61a466, 0xab40, 0x409a, 0xa6, 0x98,
            0xf3, 0x62, 0xd4, 0x64, 0xb3, 0x8f);
DEFINE_GUID(SEA_NOTIFY_TYPE_GUID,
            0x9a78788a, 0xbbe8, 0x11e4, 0x80, 0x9e,
            0x67, 0x61, 0x1e, 0x5d, 0x46, 0xb0);
DEFINE_GUID(SEI_NOTIFY_TYPE_GUID,
            0x5c284c81, 0xb0ae, 0x4e87, 0xa3, 0x22,
            0xb0, 0x4c, 0x85, 0x62, 0x43, 0x23);
DEFINE_GUID(PEI_NOTIFY_TYPE_GUID,
            0x09a9D5ac, 0x5204, 0x4214, 0x96, 0xe5,
            0x94, 0x99, 0x2e, 0x75, 0x2b, 0xcd);
DEFINE_GUID(BMC_NOTIFY_TYPE_GUID,
            0x487565ba, 0x6494, 0x4367, 0x95, 0xca,
            0x4e, 0xff, 0x89, 0x35, 0x22, 0xf6);
DEFINE_GUID(SCI_NOTIFY_TYPE_GUID,
            0xe9d59197, 0x94ee, 0x4a4f, 0x8a, 0xd8,
            0x9b, 0x7d, 0x8b, 0xd9, 0x3d, 0x2e);
DEFINE_GUID(EXTINT_NOTIFY_TYPE_GUID,
            0xfe84086e, 0xb557, 0x43cf, 0xac, 0x1b,
            0x17, 0x98, 0x2e, 0x07, 0x84, 0x70);
DEFINE_GUID(DEVICE_DRIVER_NOTIFY_TYPE_GUID,
            0x0033f803, 0x2e70, 0x4e88, 0x99, 0x2c,
            0x6f, 0x26, 0xda, 0xf3, 0xdb, 0x7a);
DEFINE_GUID(PROCESSOR_GENERIC_ERROR_SECTION_GUID,
            0x9876ccad, 0x47b4, 0x4bdb, 0xb6, 0x5e,
            0x16, 0xf1, 0x93, 0xc4, 0xf3, 0xdb);
DEFINE_GUID(XPF_PROCESSOR_ERROR_SECTION_GUID,
            0xdc3ea0b0, 0xa144, 0x4797, 0xb9, 0x5b,
            0x53, 0xfa, 0x24, 0x2b, 0x6e, 0x1d);
DEFINE_GUID(IPF_PROCESSOR_ERROR_SECTION_GUID,
            0xe429faf1, 0x3cb7, 0x11d4, 0xbc, 0xa7,
            0x00, 0x80, 0xc7, 0x3c, 0x88, 0x81);
DEFINE_GUID(ARM_PROCESSOR_ERROR_SECTION_GUID,
            0xe19e3d16, 0xbc11, 0x11e4, 0x9c, 0xaa,
            0xc2, 0x05, 0x1d, 0x5d, 0x46, 0xb0);
DEFINE_GUID(MEMORY_ERROR_SECTION_GUID,
            0xa5bc1114, 0x6f64, 0x4ede, 0xb8, 0x63,
            0x3e, 0x83, 0xed, 0x7c, 0x83, 0xb1);
DEFINE_GUID(PCIEXPRESS_ERROR_SECTION_GUID,
            0xd995e954, 0xbbc1, 0x430f, 0xad, 0x91,
            0xb4, 0x4d, 0xcb, 0x3c, 0x6f, 0x35);
DEFINE_GUID(PCIXBUS_ERROR_SECTION_GUID,
            0xc5753963, 0x3b84, 0x4095, 0xbf, 0x78,
            0xed, 0xda, 0xd3, 0xf9, 0xc9, 0xdd);
DEFINE_GUID(PCIXDEVICE_ERROR_SECTION_GUID,
            0xeb5e4685, 0xca66, 0x4769, 0xb6, 0xa2,
            0x26, 0x06, 0x8b, 0x00, 0x13, 0x26);
DEFINE_GUID(FIRMWARE_ERROR_RECORD_REFERENCE_GUID,
            0x81212a96, 0x09ed, 0x4996, 0x94, 0x71,
            0x8d, 0x72, 0x9c, 0x8e, 0x69, 0xed);
DEFINE_GUID(PMEM_ERROR_SECTION_GUID,
            0x81687003, 0xdbfd, 0x4728, 0x9f, 0xfd,
            0xf0, 0x90, 0x4f, 0x97, 0x59, 0x7d);
DEFINE_GUID(WHEA_CACHECHECK_GUID,
            0xa55701f5, 0xe3ef, 0x43de, 0xac, 0x72,
            0x24, 0x9b, 0x57, 0x3f, 0xad, 0x2c);
DEFINE_GUID(WHEA_TLBCHECK_GUID,
            0xfc06b535, 0x5e1f, 0x4562, 0x9f, 0x25,
            0x0a, 0x3b, 0x9a, 0xdb, 0x63, 0xc3);
DEFINE_GUID(WHEA_BUSCHECK_GUID,
            0x1cf3f8b3, 0xc5b1, 0x49a2, 0xaa, 0x59,
            0x5e, 0xef, 0x92, 0xff, 0xa6, 0x3c);
DEFINE_GUID(WHEA_MSCHECK_GUID,
            0x48ab7f57, 0xdc34, 0x4f6c, 0xa7, 0xd3,
            0xb0, 0xb5, 0xb0, 0xa7, 0x43, 0x14);
DEFINE_GUID(WHEA_RECORD_CREATOR_GUID,
            0xcf07c4bd,
            0xb789, 0x4e18,
            0xb3, 0xc4, 0x1f, 0x73, 0x2c, 0xb5, 0x71, 0x31);
DEFINE_GUID(GENERIC_NOTIFY_TYPE_GUID,
            0x3e62a467,
            0xab40, 0x409a,
            0xa6, 0x98, 0xf3, 0x62, 0xd4, 0x64, 0xb3, 0x8f);
DEFINE_GUID(IPF_SAL_RECORD_SECTION_GUID,
            0x6f3380d1,
            0x6eb0, 0x497f,
            0xa5, 0x78, 0x4d, 0x4c, 0x65, 0xa7, 0x16, 0x17);
DEFINE_GUID(XPF_MCA_SECTION_GUID,
            0x8a1e1d01,
            0x42f9, 0x4557,
            0x9c, 0x33, 0x56, 0x5e, 0x5c, 0xc3, 0xf7, 0xe8);
DEFINE_GUID(NMI_SECTION_GUID,
            0xe71254e7,
            0xc1b9, 0x4940,
            0xab, 0x76, 0x90, 0x97, 0x03, 0xa4, 0x32, 0x0f);
DEFINE_GUID(GENERIC_SECTION_GUID,
            0xe71254e8,
            0xc1b9, 0x4940,
            0xab, 0x76, 0x90, 0x97, 0x03, 0xa4, 0x32, 0x0f);
DEFINE_GUID(WHEA_ERROR_PACKET_SECTION_GUID,
            0xe71254e9,
            0xc1b9, 0x4940,
            0xab, 0x76, 0x90, 0x97, 0x03, 0xa4, 0x32, 0x0f);
#include <pshpack1.h>
typedef enum _WHEA_ERROR_TYPE {
    WheaErrTypeProcessor = 0,
    WheaErrTypeMemory,
    WheaErrTypePCIExpress,
    WheaErrTypeNMI,
    WheaErrTypePCIXBus,
    WheaErrTypePCIXDevice,
    WheaErrTypeGeneric,
    WheaErrTypePmem,
} WHEA_ERROR_TYPE, *PWHEA_ERROR_TYPE;
typedef union _WHEA_ERROR_PACKET_FLAGS {
    struct {
        ULONG PreviousError:1;
        ULONG Reserved1:1;
        ULONG HypervisorError:1;
        ULONG Simulated:1;
        ULONG PlatformPfaControl:1;
        ULONG PlatformDirectedOffline:1;
        ULONG Reserved2:26;
    } DUMMYSTRUCTNAME;
    ULONG AsULONG;
} WHEA_ERROR_PACKET_FLAGS, *PWHEA_ERROR_PACKET_FLAGS;
typedef enum _WHEA_ERROR_PACKET_DATA_FORMAT {
    WheaDataFormatIPFSalRecord = 0,
    WheaDataFormatXPFMCA,
    WheaDataFormatMemory,
    WheaDataFormatPCIExpress,
    WheaDataFormatNMIPort,
    WheaDataFormatPCIXBus,
    WheaDataFormatPCIXDevice,
    WheaDataFormatGeneric,
    WheaDataFormatMax
} WHEA_ERROR_PACKET_DATA_FORMAT, *PWHEA_ERROR_PACKET_DATA_FORMAT;
typedef enum _WHEA_RAW_DATA_FORMAT {
    WheaRawDataFormatIPFSalRecord = 0x00,
    WheaRawDataFormatIA32MCA,
    WheaRawDataFormatIntel64MCA,
    WheaRawDataFormatAMD64MCA,
    WheaRawDataFormatMemory,
    WheaRawDataFormatPCIExpress,
    WheaRawDataFormatNMIPort,
    WheaRawDataFormatPCIXBus,
    WheaRawDataFormatPCIXDevice,
    WheaRawDataFormatGeneric,
    WheaRawDataFormatMax
} WHEA_RAW_DATA_FORMAT, *PWHEA_RAW_DATA_FORMAT;
typedef struct _WHEA_ERROR_PACKET_V1 {
    ULONG Signature;
    WHEA_ERROR_PACKET_FLAGS Flags;
    ULONG Size;
    ULONG RawDataLength;
    ULONGLONG Reserved1;
    ULONGLONG Context;
    WHEA_ERROR_TYPE ErrorType;
    WHEA_ERROR_SEVERITY ErrorSeverity;
    ULONG ErrorSourceId;
    WHEA_ERROR_SOURCE_TYPE ErrorSourceType;
    ULONG Reserved2;
    ULONG Version;
    ULONGLONG Cpu;
    union {
        WHEA_PROCESSOR_GENERIC_ERROR_SECTION ProcessorError;
        WHEA_MEMORY_ERROR_SECTION MemoryError;
        WHEA_NMI_ERROR_SECTION NmiError;
        WHEA_PCIEXPRESS_ERROR_SECTION PciExpressError;
        WHEA_PCIXBUS_ERROR_SECTION PciXBusError;
        WHEA_PCIXDEVICE_ERROR_SECTION PciXDeviceError;
        WHEA_PMEM_ERROR_SECTION PmemError;
    } u;
    WHEA_RAW_DATA_FORMAT RawDataFormat;
    ULONG RawDataOffset;
    UCHAR RawData[1];
} WHEA_ERROR_PACKET_V1, *PWHEA_ERROR_PACKET_V1;
typedef struct _WHEA_ERROR_PACKET_V2 {
    ULONG Signature;
    ULONG Version;
    ULONG Length;
    WHEA_ERROR_PACKET_FLAGS Flags;
    WHEA_ERROR_TYPE ErrorType;
    WHEA_ERROR_SEVERITY ErrorSeverity;
    ULONG ErrorSourceId;
    WHEA_ERROR_SOURCE_TYPE ErrorSourceType;
    GUID NotifyType;
    ULONGLONG Context;
    WHEA_ERROR_PACKET_DATA_FORMAT DataFormat;
    ULONG Reserved1;
    ULONG DataOffset;
    ULONG DataLength;
    ULONG PshedDataOffset;
    ULONG PshedDataLength;
} WHEA_ERROR_PACKET_V2, *PWHEA_ERROR_PACKET_V2;
CPER_FIELD_CHECK(WHEA_ERROR_PACKET_V2, Signature, 0, 4);
CPER_FIELD_CHECK(WHEA_ERROR_PACKET_V2, Version, 4, 4);
CPER_FIELD_CHECK(WHEA_ERROR_PACKET_V2, Length, 8, 4);
CPER_FIELD_CHECK(WHEA_ERROR_PACKET_V2, Flags, 12, 4);
CPER_FIELD_CHECK(WHEA_ERROR_PACKET_V2, ErrorType, 16, 4);
CPER_FIELD_CHECK(WHEA_ERROR_PACKET_V2, ErrorSeverity, 20, 4);
CPER_FIELD_CHECK(WHEA_ERROR_PACKET_V2, ErrorSourceId, 24, 4);
CPER_FIELD_CHECK(WHEA_ERROR_PACKET_V2, ErrorSourceType, 28, 4);
CPER_FIELD_CHECK(WHEA_ERROR_PACKET_V2, NotifyType, 32, 16);
CPER_FIELD_CHECK(WHEA_ERROR_PACKET_V2, Context, 48, 8);
CPER_FIELD_CHECK(WHEA_ERROR_PACKET_V2, DataFormat, 56, 4);
CPER_FIELD_CHECK(WHEA_ERROR_PACKET_V2, Reserved1, 60, 4);
CPER_FIELD_CHECK(WHEA_ERROR_PACKET_V2, DataOffset, 64, 4);
CPER_FIELD_CHECK(WHEA_ERROR_PACKET_V2, DataLength, 68, 4);
CPER_FIELD_CHECK(WHEA_ERROR_PACKET_V2, PshedDataOffset, 72, 4);
CPER_FIELD_CHECK(WHEA_ERROR_PACKET_V2, PshedDataLength, 76, 4);
typedef struct _WHEA_ERROR_PACKET_V2 WHEA_ERROR_PACKET, *PWHEA_ERROR_PACKET;
typedef enum _WHEA_EVENT_LOG_ENTRY_TYPE {
    WheaEventLogEntryTypeInformational = 0,
    WheaEventLogEntryTypeWarning,
    WheaEventLogEntryTypeError
} WHEA_EVENT_LOG_ENTRY_TYPE, *PWHEA_EVENT_LOG_ENTRY_TYPE;
typedef enum _WHEA_EVENT_LOG_ENTRY_ID {
    WheaEventLogEntryIdCmcPollingTimeout = 0x80000001,
    WheaEventLogEntryIdWheaInit = 0x80000002,
    WheaEventLogEntryIdCmcSwitchToPolling = 0x80000003,
    WheaEventLogEntryIdDroppedCorrectedError = 0x80000004,
    WheaEventLogEntryIdStartedReportHwError = 0x80000005,
    WheaEventLogEntryIdPFAMemoryOfflined = 0x80000006,
    WheaEventLogEntryIdPFAMemoryRemoveMonitor = 0x80000007,
    WheaEventLogEntryIdPFAMemoryPolicy = 0x80000008,
    WheaEventLogEntryIdPshedInjectError = 0x80000009,
    WheaEventLogEntryIdOscCapabilities = 0x8000000a,
    WheaEventLogEntryIdPshedPluginRegister = 0x8000000b,
    WheaEventLogEntryIdAddRemoveErrorSource = 0x8000000c,
    WheaEventLogEntryIdWorkQueueItem = 0x8000000d,
    WheaEventLogEntryIdAttemptErrorRecovery = 0x8000000e,
    WheaEventLogEntryIdMcaFoundErrorInBank = 0x8000000f,
    WheaEventLogEntryIdMcaStuckErrorCheck = 0x80000010,
    WheaEventLogEntryIdMcaErrorCleared = 0x80000011,
    WheaEventLogEntryIdClearedPoison = 0x80000012,
    WheaEventLogEntryIdProcessEINJ = 0x80000013,
    WheaEventLogEntryIdProcessHEST = 0x80000014,
    WheaEventLogEntryIdCreateGenericRecord = 0x80000015,
    WheaEventLogEntryIdErrorRecord = 0x80000016,
    WheaEventLogEntryIdErrorRecordLimit = 0x80000017,
    WheaEventLogEntryIdSELEventFailed = 0x80000018,
    WheaEventLogEntryIdErrSrcArrayInvalid = 0x80000019,
    WheaEventLogEntryIdErrSrcInvalid = 0x80000020,
    WheaEventLogEntryIdGenericErrMemMap = 0x80000021,
    WheaEventLogEntryIdPshedCallbackCollision = 0x80000022,
    WheaEventLogEntryIdSELBugCheckProgress = 0x80000023,
} WHEA_EVENT_LOG_ENTRY_ID, *PWHEA_EVENT_LOG_ENTRY_ID;
typedef union _WHEA_EVENT_LOG_ENTRY_FLAGS {
    struct {
        ULONG LogTelemetry:1;
        ULONG LogInternalEtw:1;
        ULONG LogBlackbox:1;
        ULONG LogSel:1;
        ULONG RawSel:1;
        ULONG Reserved:27;
    } DUMMYSTRUCTNAME;
    ULONG AsULONG;
} WHEA_EVENT_LOG_ENTRY_FLAGS, *PWHEA_EVENT_LOG_ENTRY_FLAGS;
typedef struct _WHEA_EVENT_LOG_ENTRY_HEADER {
    ULONG Signature;
    ULONG Version;
    ULONG Length;
    WHEA_EVENT_LOG_ENTRY_TYPE Type;
    ULONG OwnerTag;
    WHEA_EVENT_LOG_ENTRY_ID Id;
    WHEA_EVENT_LOG_ENTRY_FLAGS Flags;
    ULONG PayloadLength;
} WHEA_EVENT_LOG_ENTRY_HEADER, *PWHEA_EVENT_LOG_ENTRY_HEADER;
typedef struct _WHEA_EVENT_LOG_ENTRY {
    WHEA_EVENT_LOG_ENTRY_HEADER Header;
} WHEA_EVENT_LOG_ENTRY, *PWHEA_EVENT_LOG_ENTRY;
typedef struct _WHEAP_DEFERRED_EVENT {
    LIST_ENTRY ListEntry;
    WHEA_EVENT_LOG_ENTRY WheaEventLogEntry;
} WHEAP_DEFERRED_EVENT, *PWHEAP_DEFERRED_EVENT;
typedef struct _WHEAP_STARTED_REPORT_HW_ERROR {
    WHEA_EVENT_LOG_ENTRY WheaEventLogEntry;
    PWHEA_ERROR_PACKET ErrorPacket;
} WHEAP_STARTED_REPORT_HW_ERROR,
  *PWHEAP_STARTED_REPORT_HW_ERROR;
typedef enum _WHEAP_PFA_OFFLINE_DECISION_TYPE {
    WheapPfaOfflinePredictiveFailure = 1,
    WheapPfaOfflineUncorrectedError = 2
} WHEAP_PFA_OFFLINE_DECISION_TYPE, *PWHEAP_PFA_OFFLINE_DECISION_TYPE;
typedef struct _WHEAP_PFA_MEMORY_OFFLINED {
    WHEA_EVENT_LOG_ENTRY WheaEventLogEntry;
    WHEAP_PFA_OFFLINE_DECISION_TYPE DecisionType;
    BOOLEAN ImmediateSuccess;
    ULONG Page;
} WHEAP_PFA_MEMORY_OFFLINED,
  *PWHEAP_PFA_MEMORY_OFFLINED;
typedef struct _WHEAP_PSHED_INJECT_ERROR {
    WHEA_EVENT_LOG_ENTRY WheaEventLogEntry;
    ULONG ErrorType;
    ULONGLONG Parameter1;
    ULONGLONG Parameter2;
    ULONGLONG Parameter3;
    ULONGLONG Parameter4;
    NTSTATUS InjectionStatus;
    BOOLEAN InjectionAttempted;
    BOOLEAN InjectionByPlugin;
} WHEAP_PSHED_INJECT_ERROR,
  *PWHEAP_PSHED_INJECT_ERROR;
typedef struct _WHEAP_OSC_IMPLEMENTED {
    WHEA_EVENT_LOG_ENTRY WheaEventLogEntry;
    BOOLEAN OscImplemented;
    BOOLEAN DebugChecked;
} WHEAP_OSC_IMPLEMENTED,
  *PWHEAP_OSC_IMPLEMENTED;
typedef struct _WHEAP_PSHED_PLUGIN_REGISTER {
    WHEA_EVENT_LOG_ENTRY WheaEventLogEntry;
    ULONG Version;
    ULONG Length;
    ULONG FunctionalAreaMask;
    NTSTATUS Status;
} WHEAP_PSHED_PLUGIN_REGISTER,
  *PWHEAP_PSHED_PLUGIN_REGISTER;
typedef enum _WHEA_PFA_REMOVE_TRIGGER {
    WheaPfaRemoveErrorThreshold = 1,
    WheaPfaRemoveTimeout = 2,
    WheaPfaRemoveCapacity = 3
} WHEA_PFA_REMOVE_TRIGGER, *PWHEA_PFA_REMOVE_TRIGGER;
typedef struct _WHEAP_PFA_MEMORY_REMOVE_MONITOR {
    WHEA_EVENT_LOG_ENTRY WheaEventLogEntry;
    WHEA_PFA_REMOVE_TRIGGER RemoveTrigger;
    ULONG TimeInList;
    ULONG ErrorCount ;
    ULONG Page;
} WHEAP_PFA_MEMORY_REMOVE_MONITOR,
  *PWHEAP_PFA_MEMORY_REMOVE_MONITOR;
typedef struct _WHEAP_PFA_MEMORY_POLICY {
    WHEA_EVENT_LOG_ENTRY WheaEventLogEntry;
    ULONG RegistryKeysPresent;
    BOOLEAN DisableOffline;
    BOOLEAN PersistOffline;
    BOOLEAN PfaDisabled;
    ULONG PageCount;
    ULONG ErrorThreshold;
    ULONG TimeOut;
} WHEAP_PFA_MEMORY_POLICY,
  *PWHEAP_PFA_MEMORY_POLICY;
typedef struct _WHEAP_DROPPED_CORRECTED_ERROR_EVENT {
    WHEA_EVENT_LOG_ENTRY WheaEventLogEntry;
    WHEA_ERROR_SOURCE_TYPE ErrorSourceType;
    ULONG ErrorSourceId;
} WHEAP_DROPPED_CORRECTED_ERROR_EVENT,
  *PWHEAP_DROPPED_CORRECTED_ERROR_EVENT;
typedef struct _WHEAP_CLEARED_POISON_EVENT {
    WHEA_EVENT_LOG_ENTRY WheaEventLogEntry;
    ULONG64 PhysicalAddress;
} WHEAP_CLEARED_POISON_EVENT, *PWHEAP_CLEARED_POISON_EVENT;
typedef struct _WHEAP_ADD_REMOVE_ERROR_SOURCE_EVENT {
    WHEA_EVENT_LOG_ENTRY WheaEventLogEntry;
    WHEA_ERROR_SOURCE_DESCRIPTOR Descriptor;
    NTSTATUS Status;
    BOOLEAN IsRemove;
} WHEAP_ADD_REMOVE_ERROR_SOURCE_EVENT, *PWHEAP_ADD_REMOVE_ERROR_SOURCE_EVENT;
typedef struct _WHEAP_ATTEMPT_RECOVERY_EVENT {
    WHEA_EVENT_LOG_ENTRY WheaEventLogEntry;
    WHEA_ERROR_RECORD_HEADER ErrorHeader;
    BOOLEAN ArchitecturalRecovery;
    BOOLEAN PshedRecovery;
    NTSTATUS Status;
} WHEAP_ATTEMPT_RECOVERY_EVENT, *PWHEAP_ATTEMPT_RECOVERY_EVENT;
typedef struct _WHEAP_FOUND_ERROR_IN_BANK_EVENT {
    WHEA_EVENT_LOG_ENTRY WheaEventLogEntry;
    ULONG EpIndex;
    ULONG Bank;
    ULONG64 MciStatus;
    ULONG ErrorType;
} WHEAP_FOUND_ERROR_IN_BANK_EVENT, *PWHEAP_FOUND_ERROR_IN_BANK_EVENT;
typedef struct _WHEAP_STUCK_ERROR_EVENT {
    WHEA_EVENT_LOG_ENTRY WheaEventLogEntry;
    ULONG EpIndex;
    ULONG Bank;
    ULONG64 MciStatus;
} WHEAP_STUCK_ERROR_EVENT, *PWHEAP_STUCK_ERROR_EVENT;
typedef struct _WHEAP_ERROR_CLEARED_EVENT {
    WHEA_EVENT_LOG_ENTRY WheaEventLogEntry;
    ULONG EpIndex;
    ULONG Bank;
} WHEAP_ERROR_CLEARED_EVENT, *PWHEAP_ERROR_CLEARED_EVENT;
typedef struct _WHEAP_PROCESS_EINJ_EVENT {
    WHEA_EVENT_LOG_ENTRY WheaEventLogEntry;
    CHAR Error[WHEA_ERROR_TEXT_LEN];
    BOOLEAN InjectionActionTableValid;
    ULONG BeginInjectionInstructionCount;
    ULONG GetTriggerErrorActionTableInstructionCount;
    ULONG SetErrorTypeInstructionCount;
    ULONG GetErrorTypeInstructionCount;
    ULONG EndOperationInstructionCount;
    ULONG ExecuteOperationInstructionCount;
    ULONG CheckBusyStatusInstructionCount;
    ULONG GetCommandStatusInstructionCount;
    ULONG SetErrorTypeWithAddressInstructionCount;
    ULONG GetExecuteOperationTimingsInstructionCount;
} WHEAP_PROCESS_EINJ_EVENT, *PWHEAP_PROCESS_EINJ_EVENT;
typedef struct _WHEAP_PROCESS_HEST_EVENT {
    WHEA_EVENT_LOG_ENTRY WheaEventLogEntry;
    CHAR Error[WHEA_ERROR_TEXT_LEN];
    CHAR EntryType[WHEA_ERROR_TEXT_LEN];
    ULONG EntryIndex;
    BOOLEAN HestValid;
    ULONG CmcCount;
    ULONG MceCount;
    ULONG NmiCount;
    ULONG AerRootCount;
    ULONG AerBridgeCount;
    ULONG AerEndPointCount;
    ULONG GenericV1Count;
    ULONG GenericV2Count;
} WHEAP_PROCESS_HEST_EVENT, *PWHEAP_PROCESS_HEST_EVENT;
typedef struct _WHEAP_CREATE_GENERIC_RECORD_EVENT {
    WHEA_EVENT_LOG_ENTRY WheaEventLogEntry;
    CHAR Error[WHEA_ERROR_TEXT_LEN];
    ULONG EntryCount;
    NTSTATUS Status;
} WHEAP_CREATE_GENERIC_RECORD_EVENT, *PWHEAP_CREATE_GENERIC_RECORD_EVENT;
typedef struct _WHEAP_ERROR_RECORD_EVENT {
    WHEA_EVENT_LOG_ENTRY WheaEventLogEntry;
    PWHEA_ERROR_RECORD Record;
} WHEAP_ERROR_RECORD_EVENT, *PWHEAP_ERROR_RECORD_EVENT;
typedef struct _WHEAP_SEL_LOG_EVENT_FAILED {
    WHEA_EVENT_LOG_ENTRY WheaEventLogEntry;
    NTSTATUS Status;
    BOOLEAN HighIrqlPath;
    BOOLEAN LoggerInited;
    BOOLEAN LogFailed;
    BOOLEAN GotLock;
} WHEAP_SEL_LOG_EVENT_FAILED, *PWHEAP_SEL_LOG_EVENT_FAILED;
typedef struct _WHEAP_ERR_SRC_ARRAY_INVALID_EVENT {
    WHEA_EVENT_LOG_ENTRY WheaEventLogEntry;
    ULONG ErrorSourceCount;
    ULONG ReportedLength;
    ULONG ExpectedLength;
} WHEAP_ERR_SRC_ARRAY_INVALID_EVENT, *PWHEAP_ERR_SRC_ARRAY_INVALID_EVENT;
typedef struct _WHEAP_ERR_SRC_INVALID_EVENT {
    WHEA_EVENT_LOG_ENTRY WheaEventLogEntry;
    WHEA_ERROR_SOURCE_DESCRIPTOR ErrDescriptor;
    CHAR Error[WHEA_ERROR_TEXT_LEN];
} WHEAP_ERR_SRC_INVALID_EVENT, *PWHEAP_ERR_SRC_INVALID_EVENT;
typedef struct _WHEAP_GENERIC_ERR_MEM_MAP_EVENT {
    WHEA_EVENT_LOG_ENTRY WheaEventLogEntry;
    CHAR MapReason[WHEA_ERROR_TEXT_LEN];
    ULONG64 PhysicalAddress;
    ULONG64 Length;
} WHEAP_GENERIC_ERR_MEM_MAP_EVENT, *PWHEAP_GENERIC_ERR_MEM_MAP_EVENT;
typedef struct _WHEA_SEL_BUGCHECK_PROGRESS {
    WHEA_EVENT_LOG_ENTRY WheaEventLogEntry;
    ULONG BugCheckCode;
    ULONG BugCheckProgressSummary;
} WHEA_SEL_BUGCHECK_PROGRESS, *PWHEA_SEL_BUGCHECK_PROGRESS;
__inline
VOID
WheaInitEventLogEntry (
    _In_ PWHEA_EVENT_LOG_ENTRY LogEntry,
    _In_ WHEA_EVENT_LOG_ENTRY_TYPE Type,
    _In_ WHEA_EVENT_LOG_ENTRY_ID Id,
    _In_ WHEA_EVENT_LOG_ENTRY_FLAGS Flags,
    _In_ ULONG OwnerTag,
    _In_ ULONG PayloadLength
    )
{
    PUCHAR PayloadData;
    PayloadData = (PUCHAR)LogEntry + sizeof(WHEA_EVENT_LOG_ENTRY);
    LogEntry->Header.Signature = WHEA_ERROR_LOG_ENTRY_SIGNATURE;
    LogEntry->Header.Version = WHEA_ERROR_LOG_ENTRY_VERSION;
    LogEntry->Header.Length = sizeof(WHEA_EVENT_LOG_ENTRY) + PayloadLength;
    LogEntry->Header.Type = Type;
    LogEntry->Header.Id = Id;
    LogEntry->Header.OwnerTag = OwnerTag;
    LogEntry->Header.Flags = Flags;
    LogEntry->Header.PayloadLength = PayloadLength;
    return;
}
typedef union _WHEA_GENERIC_ERROR_BLOCKSTATUS {
    struct {
        ULONG UncorrectableError:1;
        ULONG CorrectableError:1;
        ULONG MultipleUncorrectableErrors:1;
        ULONG MultipleCorrectableErrors:1;
        ULONG ErrorDataEntryCount:10;
        ULONG Reserved:18;
    } DUMMYSTRUCTNAME;
    ULONG AsULONG;
} WHEA_GENERIC_ERROR_BLOCKSTATUS, *PWHEA_GENERIC_ERROR_BLOCKSTATUS;
typedef struct _WHEA_GENERIC_ERROR {
    WHEA_GENERIC_ERROR_BLOCKSTATUS BlockStatus;
    ULONG RawDataOffset;
    ULONG RawDataLength;
    ULONG DataLength;
    WHEA_ERROR_SEVERITY ErrorSeverity;
    UCHAR Data[1];
} WHEA_GENERIC_ERROR, *PWHEA_GENERIC_ERROR;
typedef struct _WHEA_GENERIC_ERROR_DATA_ENTRY_V1 {
    GUID SectionType;
    WHEA_ERROR_SEVERITY ErrorSeverity;
    WHEA_REVISION Revision;
    UCHAR ValidBits;
    UCHAR Flags;
    ULONG ErrorDataLength;
    GUID FRUId;
    UCHAR FRUText[20];
    UCHAR Data[1];
} WHEA_GENERIC_ERROR_DATA_ENTRY_V1, *PWHEA_GENERIC_ERROR_DATA_ENTRY_V1;
typedef struct _WHEA_GENERIC_ERROR_DATA_ENTRY_V2 {
    GUID SectionType;
    WHEA_ERROR_SEVERITY ErrorSeverity;
    WHEA_REVISION Revision;
    UCHAR ValidBits;
    UCHAR Flags;
    ULONG ErrorDataLength;
    GUID FRUId;
    UCHAR FRUText[20];
    WHEA_TIMESTAMP Timestamp;
    UCHAR Data[1];
} WHEA_GENERIC_ERROR_DATA_ENTRY_V2, *PWHEA_GENERIC_ERROR_DATA_ENTRY_V2;
typedef struct _WHEA_GENERIC_ERROR_DATA_ENTRY_V2 WHEA_GENERIC_ERROR_DATA_ENTRY, *PWHEA_GENERIC_ERROR_DATA_ENTRY;
#include <poppack.h>
typedef
NTSTATUS
(_WHEA_ERROR_SOURCE_CORRECT)(
    _Inout_ PWHEA_ERROR_SOURCE_DESCRIPTOR ErrorSource,
    _Out_ PULONG MaximumSectionLength
    );
typedef _WHEA_ERROR_SOURCE_CORRECT *WHEA_ERROR_SOURCE_CORRECT;
typedef
NTSTATUS
(_WHEA_ERROR_SOURCE_INITIALIZE)(
    _In_ ULONG Phase,
    _Inout_ PWHEA_ERROR_SOURCE_DESCRIPTOR ErrorSource,
    _Inout_opt_ PVOID Context
    );
typedef _WHEA_ERROR_SOURCE_INITIALIZE *WHEA_ERROR_SOURCE_INITIALIZE;
typedef
NTSTATUS
(_WHEA_ERROR_SOURCE_CREATE_RECORD)(
    _Inout_ PWHEA_ERROR_SOURCE_DESCRIPTOR ErrorSource,
    _Inout_ PWHEA_ERROR_PACKET ErrorPacket,
    _Out_writes_bytes_to_(BufferSize, *RecordLength) PWHEA_ERROR_RECORD ErrorRecord,
    _In_ ULONG BufferSize,
    _Inout_opt_ PVOID Context
    );
typedef _WHEA_ERROR_SOURCE_CREATE_RECORD *WHEA_ERROR_SOURCE_CREATE_RECORD;
typedef
NTSTATUS
(_WHEA_ERROR_SOURCE_RECOVER)(
    _Inout_ PVOID RecoveryContext,
    _Inout_ PWHEA_ERROR_SEVERITY Severity
    );
typedef _WHEA_ERROR_SOURCE_RECOVER *WHEA_ERROR_SOURCE_RECOVER;
typedef
VOID
(_WHEA_ERROR_SOURCE_UNINITIALIZE)(
   _Inout_opt_ PVOID Context
    );
typedef _WHEA_ERROR_SOURCE_UNINITIALIZE *WHEA_ERROR_SOURCE_UNINITIALIZE;
typedef
VOID
(_WHEA_ERROR_SOURCE_READY)(
    _Inout_ PWHEA_ERROR_SOURCE_DESCRIPTOR ErrorSource,
    _Inout_opt_ PVOID Context
    );
typedef _WHEA_ERROR_SOURCE_READY *WHEA_ERROR_SOURCE_READY;
typedef struct _WHEA_ERROR_SOURCE_CONFIGURATION {
    ULONG Flags;
    WHEA_ERROR_SOURCE_CORRECT Correct;
    WHEA_ERROR_SOURCE_INITIALIZE Initialize;
    WHEA_ERROR_SOURCE_CREATE_RECORD CreateRecord;
    WHEA_ERROR_SOURCE_RECOVER Recover;
    WHEA_ERROR_SOURCE_UNINITIALIZE Uninitialize;
    WHEA_ERROR_SOURCE_READY Ready;
} WHEA_ERROR_SOURCE_CONFIGURATION, *PWHEA_ERROR_SOURCE_CONFIGURATION;
NTKERNELAPI
NTSTATUS
WheaAddErrorSourceDeviceDriver (
    _Inout_opt_ PVOID Context,
    _In_ PWHEA_ERROR_SOURCE_CONFIGURATION_DEVICE_DRIVER Configuration,
    _In_ ULONG NumRecordsToPreallocate,
    _In_ ULONG MaxRawDataLength
    );
NTKERNELAPI
VOID
WheaRemoveErrorSourceDeviceDriver (
    _In_ ULONG ErrorSourceId
    );
NTKERNELAPI
NTSTATUS
WheaReportHwErrorDeviceDriver (
    _In_ ULONG ErrorSourceId,
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ PUCHAR ErrorData,
    _In_ ULONG ErrorDataLength,
    _In_ LPGUID SectionTypeGuid,
    _In_ WHEA_ERROR_SEVERITY ErrorSeverity,
    _In_opt_ PUCHAR DeviceFriendlyName
    );
NTKERNELAPI
NTSTATUS
WheaReportHwError(
    _Inout_ PWHEA_ERROR_PACKET ErrorPacket
    );
NTKERNELAPI
NTSTATUS
WheaAddErrorSource(
    _In_ PWHEA_ERROR_SOURCE_DESCRIPTOR ErrorSource,
    _In_opt_ PVOID Context
    );
NTKERNELAPI
NTSTATUS
WheaInitializeRecordHeader (
    _Out_ PWHEA_ERROR_RECORD_HEADER Header
    );
NTKERNELAPI
NTSTATUS
WheaConfigureErrorSource (
    _In_ WHEA_ERROR_SOURCE_TYPE SourceType,
    _In_ PWHEA_ERROR_SOURCE_CONFIGURATION Configuration
    );
NTKERNELAPI
NTSTATUS
WheaUnconfigureErrorSource (
    _In_ WHEA_ERROR_SOURCE_TYPE SourceType
    );
NTKERNELAPI
VOID
WheaRemoveErrorSource(
    _In_ ULONG ErrorSourceId
    );
typedef
NTSTATUS
(*PFN_WHEA_HIGH_IRQL_LOG_SEL_EVENT_HANDLER) (
    _In_ PVOID Context,
    _In_ PIPMI_OS_SEL_RECORD OsSelRecord
    );
NTKERNELAPI
BOOLEAN
WheaHighIrqlLogSelEventHandlerRegister (
    _In_ PFN_WHEA_HIGH_IRQL_LOG_SEL_EVENT_HANDLER Handler,
    _In_ PVOID Context
    );
NTKERNELAPI
VOID
WheaHighIrqlLogSelEventHandlerUnregister (
    VOID
    );
_Must_inspect_result_
__inline
PWHEA_ERROR_PACKET
WheaGetErrPacketFromErrRecord (
    _In_ PWHEA_ERROR_RECORD Record
    )
{
    PWHEA_ERROR_PACKET Packet;
    PWHEA_ERROR_RECORD_SECTION_DESCRIPTOR Descriptor;
    ULONG Section;
    ULONG SizeRequired;
    Packet = NULL;
    if (Record->Header.Signature != WHEA_ERROR_RECORD_SIGNATURE) {
        goto GetErrPacketFromErrRecordEnd;
    }
    SizeRequired = sizeof(WHEA_ERROR_RECORD_HEADER) +
        (sizeof(WHEA_ERROR_RECORD_SECTION_DESCRIPTOR) *
         Record->Header.SectionCount);
    if (Record->Header.Length < SizeRequired) {
        goto GetErrPacketFromErrRecordEnd;
    }
    Descriptor = &Record->SectionDescriptor[0];
    for (Section = 0; Section < Record->Header.SectionCount; Section += 1) {
        if (RtlCompareMemory(&Descriptor->SectionType,
                             &WHEA_ERROR_PACKET_SECTION_GUID,
                             sizeof(GUID)) == sizeof(GUID)) {
                SizeRequired = Descriptor->SectionOffset +
                    Descriptor->SectionLength;
                if (Record->Header.Length < SizeRequired) {
                    goto GetErrPacketFromErrRecordEnd;
                }
                Packet = (PWHEA_ERROR_PACKET)
                    (((PUCHAR)Record) + Descriptor->SectionOffset);
#pragma warning(suppress: 26019)
                if (Packet->Signature != WHEA_ERROR_PACKET_SIGNATURE) {
                    Packet = NULL;
                }
                goto GetErrPacketFromErrRecordEnd;
        }
        Descriptor += 1;
    }
GetErrPacketFromErrRecordEnd:
    return Packet;
}
typedef union _WHEA_ERROR_INJECTION_CAPABILITIES {
    struct {
        ULONG ProcessorCorrectable:1;
        ULONG ProcessorUncorrectableNonFatal:1;
        ULONG ProcessorUncorrectableFatal:1;
        ULONG MemoryCorrectable:1;
        ULONG MemoryUncorrectableNonFatal:1;
        ULONG MemoryUncorrectableFatal:1;
        ULONG PCIExpressCorrectable:1;
        ULONG PCIExpressUncorrectableNonFatal:1;
        ULONG PCIExpressUncorrectableFatal:1;
        ULONG PlatformCorrectable:1;
        ULONG PlatformUncorrectableNonFatal:1;
        ULONG PlatformUncorrectableFatal:1;
        ULONG IA64Corrected:1;
        ULONG IA64Recoverable:1;
        ULONG IA64Fatal:1;
        ULONG IA64RecoverableCache:1;
        ULONG IA64RecoverableRegFile:1;
        ULONG Reserved:15;
    } DUMMYSTRUCTNAME;
    ULONG AsULONG;
} WHEA_ERROR_INJECTION_CAPABILITIES, *PWHEA_ERROR_INJECTION_CAPABILITIES;
typedef
BOOLEAN
(*PFN_IN_USE_PAGE_OFFLINE_NOTIFY) (
    _In_ PFN_NUMBER Page,
    _In_ BOOLEAN PlatformDirected,
    _In_ BOOLEAN Poisoned,
    _In_ PVOID Context
    );
NTKERNELAPI
NTSTATUS
WheaRegisterInUsePageOfflineNotification (
    _In_ PFN_IN_USE_PAGE_OFFLINE_NOTIFY Callback,
    _In_opt_ PVOID Context
    );
NTKERNELAPI
NTSTATUS
WheaUnregisterInUsePageOfflineNotification (
    _In_ PFN_IN_USE_PAGE_OFFLINE_NOTIFY Callback
    );
typedef enum _WHEA_RECOVERY_CONTEXT_ERROR_TYPE {
    WheaRecoveryContextErrorTypeMemory = 1,
    WheaRecoveryContextErrorTypePmem,
    WheaRecoveryContextErrorTypeMax
} WHEA_RECOVERY_CONTEXT_ERROR_TYPE,
    *PWHEA_RECOVERY_CONTEXT_ERROR_TYPE;
typedef struct _WHEA_RECOVERY_CONTEXT {
    union {
        struct {
            ULONG_PTR Address;
            BOOLEAN Consumed;
            UINT16 ErrorCode;
            BOOLEAN ErrorIpValid;
            BOOLEAN RestartIpValid;
            BOOLEAN ClearPoison;
        } MemoryError;
        struct {
            ULONG_PTR PmemErrInfo;
        } PmemError;
    };
    UINT64 PartitionId;
    UINT32 VpIndex;
    WHEA_RECOVERY_CONTEXT_ERROR_TYPE ErrorType;
} WHEA_RECOVERY_CONTEXT, *PWHEA_RECOVERY_CONTEXT;
typedef
NTSTATUS
(HVL_WHEA_ERROR_NOTIFICATION) (
    _In_ PWHEA_RECOVERY_CONTEXT RecoveryContext,
    _In_ BOOLEAN PlatformDirected,
    _In_ BOOLEAN Poisoned
    );
typedef HVL_WHEA_ERROR_NOTIFICATION *PHVL_WHEA_ERROR_NOTIFICATION;
extern PHVL_WHEA_ERROR_NOTIFICATION HvlpWheaErrorNotificationCallback;
NTKERNELAPI
NTSTATUS
HvlRegisterWheaErrorNotification (
    _In_ PHVL_WHEA_ERROR_NOTIFICATION Callback
    );
NTKERNELAPI
NTSTATUS
HvlUnregisterWheaErrorNotification(
    _In_ PHVL_WHEA_ERROR_NOTIFICATION Callback
    );
_Must_inspect_result_
typedef
NTSTATUS
(*PSHED_PI_GET_ALL_ERROR_SOURCES) (
    _Inout_opt_ PVOID PluginContext,
    _Inout_ PULONG Count,
    _Inout_updates_bytes_(*Length) PWHEA_ERROR_SOURCE_DESCRIPTOR *ErrorSrcs,
    _Inout_ PULONG Length
    );
_Must_inspect_result_
typedef
NTSTATUS
(*PSHED_PI_GET_ERROR_SOURCE_INFO) (
    _Inout_opt_ PVOID PluginContext,
    _Inout_ PWHEA_ERROR_SOURCE_DESCRIPTOR ErrorSource
    );
_Must_inspect_result_
typedef
NTSTATUS
(*PSHED_PI_SET_ERROR_SOURCE_INFO) (
    _Inout_opt_ PVOID PluginContext,
    _In_ PWHEA_ERROR_SOURCE_DESCRIPTOR ErrorSource
    );
typedef
NTSTATUS
 (*PSHED_PI_ENABLE_ERROR_SOURCE) (
    _Inout_opt_ PVOID PluginContext,
    _In_ PWHEA_ERROR_SOURCE_DESCRIPTOR ErrorSource
    );
typedef
NTSTATUS
 (*PSHED_PI_DISABLE_ERROR_SOURCE) (
    _Inout_opt_ PVOID PluginContext,
    _In_ PWHEA_ERROR_SOURCE_DESCRIPTOR ErrorSource
    );
typedef
NTSTATUS
(*PSHED_PI_WRITE_ERROR_RECORD) (
    _Inout_opt_ PVOID PluginContext,
    _In_ ULONG Flags,
    _In_ ULONG RecordLength,
    _In_reads_bytes_(RecordLength) PWHEA_ERROR_RECORD ErrorRecord
    );
_Must_inspect_result_
typedef
NTSTATUS
(*PSHED_PI_READ_ERROR_RECORD) (
    _Inout_opt_ PVOID PluginContext,
    _In_ ULONG Flags,
    _In_ ULONGLONG ErrorRecordId,
    _Out_ PULONGLONG NextErrorRecordId,
    _Inout_ PULONG RecordLength,
    _Out_writes_bytes_(*RecordLength) PWHEA_ERROR_RECORD ErrorRecord
    );
typedef
NTSTATUS
(*PSHED_PI_CLEAR_ERROR_RECORD) (
    _Inout_opt_ PVOID PluginContext,
    _In_ ULONG Flags,
    _In_ ULONGLONG ErrorRecordId
    );
typedef
NTSTATUS
(*PSHED_PI_RETRIEVE_ERROR_INFO) (
    _Inout_opt_ PVOID PluginContext,
    _In_ PWHEA_ERROR_SOURCE_DESCRIPTOR ErrorSource,
    _In_ ULONGLONG BufferLength,
    _Inout_updates_bytes_(BufferLength) PWHEA_ERROR_PACKET Packet
    );
typedef
NTSTATUS
(*PSHED_PI_FINALIZE_ERROR_RECORD) (
    _Inout_opt_ PVOID PluginContext,
    _In_ PWHEA_ERROR_SOURCE_DESCRIPTOR ErrorSource,
    _In_ ULONG BufferLength,
    _Inout_updates_bytes_(BufferLength) PWHEA_ERROR_RECORD ErrorRecord
    );
typedef
NTSTATUS
(*PSHED_PI_CLEAR_ERROR_STATUS) (
    _Inout_opt_ PVOID PluginContext,
    _In_ PWHEA_ERROR_SOURCE_DESCRIPTOR ErrorSource,
    _In_ ULONG BufferLength,
    _In_reads_bytes_(BufferLength) PWHEA_ERROR_RECORD ErrorRecord
    );
_Must_inspect_result_
typedef
NTSTATUS
(*PSHED_PI_ATTEMPT_ERROR_RECOVERY) (
    _Inout_opt_ PVOID PluginContext,
    _In_ ULONG BufferLength,
    _In_reads_bytes_(BufferLength) PWHEA_ERROR_RECORD ErrorRecord
    );
_Must_inspect_result_
typedef
NTSTATUS
(*PSHED_PI_GET_INJECTION_CAPABILITIES) (
    _Inout_opt_ PVOID PluginContext,
    _Out_ PWHEA_ERROR_INJECTION_CAPABILITIES Capabilities
    );
_Must_inspect_result_
typedef
NTSTATUS
(*PSHED_PI_INJECT_ERROR) (
    _Inout_opt_ PVOID PluginContext,
    _In_ ULONGLONG ErrorType,
    _In_ ULONGLONG Parameter1,
    _In_ ULONGLONG Parameter2,
    _In_ ULONGLONG Parameter3,
    _In_ ULONGLONG Parameter4
    );
typedef struct _WHEA_PSHED_PLUGIN_CALLBACKS {
    PSHED_PI_GET_ALL_ERROR_SOURCES GetAllErrorSources;
    PVOID Reserved;
    PSHED_PI_GET_ERROR_SOURCE_INFO GetErrorSourceInfo;
    PSHED_PI_SET_ERROR_SOURCE_INFO SetErrorSourceInfo;
    PSHED_PI_ENABLE_ERROR_SOURCE EnableErrorSource;
    PSHED_PI_DISABLE_ERROR_SOURCE DisableErrorSource;
    PSHED_PI_WRITE_ERROR_RECORD WriteErrorRecord;
    PSHED_PI_READ_ERROR_RECORD ReadErrorRecord;
    PSHED_PI_CLEAR_ERROR_RECORD ClearErrorRecord;
    PSHED_PI_RETRIEVE_ERROR_INFO RetrieveErrorInfo;
    PSHED_PI_FINALIZE_ERROR_RECORD FinalizeErrorRecord;
    PSHED_PI_CLEAR_ERROR_STATUS ClearErrorStatus;
    PSHED_PI_ATTEMPT_ERROR_RECOVERY AttemptRecovery;
    PSHED_PI_GET_INJECTION_CAPABILITIES GetInjectionCapabilities;
    PSHED_PI_INJECT_ERROR InjectError;
} WHEA_PSHED_PLUGIN_CALLBACKS, *PWHEA_PSHED_PLUGIN_CALLBACKS;
typedef struct _WHEA_PSHED_PLUGIN_REGISTRATION_PACKET_V1 {
    ULONG Length;
    ULONG Version;
    PVOID Context;
    ULONG FunctionalAreaMask;
    ULONG Reserved;
    WHEA_PSHED_PLUGIN_CALLBACKS Callbacks;
} WHEA_PSHED_PLUGIN_REGISTRATION_PACKET_V1;
typedef struct _WHEA_PSHED_PLUGIN_REGISTRATION_PACKET_V2 {
    ULONG Length;
    ULONG Version;
    PVOID Context;
    ULONG FunctionalAreaMask;
    ULONG Reserved;
    WHEA_PSHED_PLUGIN_CALLBACKS Callbacks;
    PVOID PluginHandle;
} WHEA_PSHED_PLUGIN_REGISTRATION_PACKET_V2;
typedef WHEA_PSHED_PLUGIN_REGISTRATION_PACKET_V2
        WHEA_PSHED_PLUGIN_REGISTRATION_PACKET;
typedef WHEA_PSHED_PLUGIN_REGISTRATION_PACKET
        *PWHEA_PSHED_PLUGIN_REGISTRATION_PACKET;
_IRQL_requires_max_(DISPATCH_LEVEL)
__drv_allocatesMem(Mem)
_Post_writable_byte_size_(Size)
_Must_inspect_result_
NTPSHEDAPI
PVOID
PshedAllocateMemory (
    _In_ ULONG Size
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTPSHEDAPI
VOID
PshedFreeMemory (
    _In_ __drv_freesMem(Mem) PVOID Address
    );
NTPSHEDAPI
BOOLEAN
PshedIsSystemWheaEnabled (
    VOID
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTPSHEDAPI
NTSTATUS
PshedRegisterPlugin (
    _Inout_ PWHEA_PSHED_PLUGIN_REGISTRATION_PACKET Packet
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTPSHEDAPI
VOID
PshedUnregisterPlugin (
    _In_ PVOID PluginHandle
    );
NTPSHEDAPI
BOOLEAN
PshedSynchronizeExecution (
    _In_ PWHEA_ERROR_SOURCE_DESCRIPTOR ErrorSource,
    _In_ PKSYNCHRONIZE_ROUTINE SynchronizeRoutine,
    _In_ PVOID SynchronizeContext
    );
_Must_inspect_result_
__inline
BOOLEAN
WheaIsValidErrorRecordSignature (
    _In_ PWHEA_ERROR_RECORD Record
    )
{
    BOOLEAN Valid;
    if ((Record->Header.Signature == WHEA_ERROR_RECORD_SIGNATURE) &&
        (Record->Header.Revision.AsUSHORT == WHEA_ERROR_RECORD_REVISION) &&
        (Record->Header.SignatureEnd == WHEA_ERROR_RECORD_SIGNATURE_END)) {
        Valid = TRUE;
    } else {
        Valid = FALSE;
    }
    return Valid;
}
_Must_inspect_result_
__inline
NTSTATUS
WheaFindErrorRecordSection (
    _In_ PWHEA_ERROR_RECORD Record,
    _In_ const GUID *SectionType,
    _Out_ PWHEA_ERROR_RECORD_SECTION_DESCRIPTOR *SectionDescriptor,
    _Out_opt_ PVOID *SectionData
    )
{
    NTSTATUS Status;
    PWHEA_ERROR_RECORD_SECTION_DESCRIPTOR Descriptor;
    ULONG Index;
    ULONG MinimumLength;
    if ((Record == NULL) ||
        (SectionType == NULL) ||
        (SectionDescriptor == NULL) ||
        (WheaIsValidErrorRecordSignature(Record) == FALSE) ||
        (Record->Header.SectionCount == 0)) {
        Status = STATUS_INVALID_PARAMETER;
        goto FindErrorRecordSectionEnd;
    }
    MinimumLength = sizeof(WHEA_ERROR_RECORD_HEADER) +
        (Record->Header.SectionCount *
         sizeof(WHEA_ERROR_RECORD_SECTION_DESCRIPTOR));
    if (Record->Header.Length < MinimumLength) {
        Status = STATUS_INVALID_PARAMETER;
        goto FindErrorRecordSectionEnd;
    }
    Descriptor = &Record->SectionDescriptor[0];
    for (Index = 0; Index < Record->Header.SectionCount; Index += 1) {
        if (RtlCompareMemory(&Descriptor->SectionType,
                             SectionType,
                             sizeof(GUID)) == sizeof(GUID)) {
            break;
        }
        Descriptor += 1;
    }
    if (Index >= Record->Header.SectionCount) {
        Status = STATUS_NOT_FOUND;
        goto FindErrorRecordSectionEnd;
    }
    if ((Descriptor->SectionOffset + Descriptor->SectionLength) >
        Record->Header.Length) {
        Status = STATUS_INVALID_PARAMETER;
        goto FindErrorRecordSectionEnd;
    }
    *SectionDescriptor = Descriptor;
    if (SectionData != NULL) {
        *SectionData = (PVOID)(((PUCHAR)Record) + Descriptor->SectionOffset);
    }
    Status = STATUS_SUCCESS;
FindErrorRecordSectionEnd:
    return Status;
}
_Must_inspect_result_
__inline
NTSTATUS
WheaFindNextErrorRecordSection (
    _In_ PWHEA_ERROR_RECORD Record,
    _Inout_ ULONG *Context,
    _Out_ PWHEA_ERROR_RECORD_SECTION_DESCRIPTOR *SectionDescriptor,
    _Out_opt_ PVOID *SectionData
    )
{
    NTSTATUS Status;
    PWHEA_ERROR_RECORD_SECTION_DESCRIPTOR Descriptor;
    ULONG Index;
    ULONG MinimumLength;
    if ((Record == NULL) ||
        (Context == NULL) ||
        (SectionDescriptor == NULL) ||
        (WheaIsValidErrorRecordSignature(Record) == FALSE) ||
        (Record->Header.SectionCount == 0)) {
        Status = STATUS_INVALID_PARAMETER;
        goto FindNextErrorRecordSectionEnd;
    }
    MinimumLength = sizeof(WHEA_ERROR_RECORD_HEADER) +
        (Record->Header.SectionCount *
         sizeof(WHEA_ERROR_RECORD_SECTION_DESCRIPTOR));
    if (Record->Header.Length < MinimumLength) {
        Status = STATUS_INVALID_PARAMETER;
        goto FindNextErrorRecordSectionEnd;
    }
    Index = *Context;
    if (Index > Record->Header.SectionCount) {
        Status = STATUS_INVALID_PARAMETER;
        goto FindNextErrorRecordSectionEnd;
    }
    if (Index == Record->Header.SectionCount) {
        Status = STATUS_NOT_FOUND;
        goto FindNextErrorRecordSectionEnd;
    }
    Descriptor = &Record->SectionDescriptor[Index];
    if ((Descriptor->SectionOffset + Descriptor->SectionLength) >
        Record->Header.Length) {
        Status = STATUS_INVALID_PARAMETER;
        goto FindNextErrorRecordSectionEnd;
    }
    *Context = Index + 1;
    *SectionDescriptor = Descriptor;
    if (SectionData != NULL) {
        *SectionData = (PVOID)(((PUCHAR)Record) + Descriptor->SectionOffset);
    }
    Status = STATUS_SUCCESS;
FindNextErrorRecordSectionEnd:
    return Status;
}
typedef enum _SOC_SUBSYSTEM_TYPE {
    SOC_SUBSYS_WIRELESS_MODEM = 0,
    SOC_SUBSYS_AUDIO_DSP = 1,
    SOC_SUBSYS_WIRELSS_CONNECTIVITY = 2,
    SOC_SUBSYS_SENSORS = 3,
    SOC_SUBSYS_COMPUTE_DSP = 4,
    SOC_SUBSYS_SECURE_PROC = 5,
    SOC_SUBSYS_VENDOR_DEFINED = 0x10000
} SOC_SUBSYSTEM_TYPE, *PSOC_SUBSYSTEM_TYPE;
typedef struct _SOC_SUBSYSTEM_FAILURE_DETAILS {
    SOC_SUBSYSTEM_TYPE SubsysType;
    ULONG64 FirmwareVersion;
    ULONG64 HardwareVersion;
    ULONG UnifiedFailureRegionSize;
    CHAR UnifiedFailureRegion[1];
} SOC_SUBSYSTEM_FAILURE_DETAILS, *PSOC_SUBSYSTEM_FAILURE_DETAILS;
}
#pragma warning(default:4115)
#pragma warning(default:4201)
#pragma warning(default:4214)

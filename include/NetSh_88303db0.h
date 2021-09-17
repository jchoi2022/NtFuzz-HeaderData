#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#pragma warning(push)
#pragma warning(disable:4201)
extern "C" {
enum NS_CMD_FLAGS
{
    CMD_FLAG_PRIVATE = 0x01,
    CMD_FLAG_INTERACTIVE = 0x02,
    CMD_FLAG_LOCAL = 0x08,
    CMD_FLAG_ONLINE = 0x10,
    CMD_FLAG_HIDDEN = 0x20,
    CMD_FLAG_LIMIT_MASK = 0xffff,
    CMD_FLAG_PRIORITY = 0x80000000
};
typedef enum _NS_REQS
{
    NS_REQ_ZERO = 0,
    NS_REQ_PRESENT = 1,
    NS_REQ_ALLOW_MULTIPLE = 2,
    NS_REQ_ONE_OR_MORE = 3
} NS_REQS;
enum NS_EVENTS
{
    NS_EVENT_LOOP = 0x00010000,
    NS_EVENT_LAST_N = 0x00000001,
    NS_EVENT_LAST_SECS = 0x00000002,
    NS_EVENT_FROM_N = 0x00000004,
    NS_EVENT_FROM_START = 0x00000008
};
enum NS_MODE_CHANGE
{
    NETSH_COMMIT = 0,
    NETSH_UNCOMMIT = 1,
    NETSH_FLUSH = 2,
    NETSH_COMMIT_STATE = 3,
    NETSH_SAVE = 4
};
typedef struct _TOKEN_VALUE
{
    LPCWSTR pwszToken;
    DWORD dwValue;
} TOKEN_VALUE, *PTOKEN_VALUE;
typedef
DWORD
(WINAPI GET_RESOURCE_STRING_FN)(
    IN DWORD dwMsgID,
    OUT LPWSTR lpBuffer,
    IN DWORD nBufferMax
    );
typedef GET_RESOURCE_STRING_FN *PGET_RESOURCE_STRING_FN;
typedef
DWORD
(WINAPI NS_CONTEXT_COMMIT_FN)(
    IN DWORD dwAction
    );
typedef NS_CONTEXT_COMMIT_FN *PNS_CONTEXT_COMMIT_FN;
typedef
DWORD
(WINAPI NS_CONTEXT_CONNECT_FN)(
    IN LPCWSTR pwszMachine
    );
typedef NS_CONTEXT_CONNECT_FN *PNS_CONTEXT_CONNECT_FN;
typedef struct _NS_CONTEXT_ATTRIBUTES NS_CONTEXT_ATTRIBUTES;
typedef
DWORD
(WINAPI NS_CONTEXT_DUMP_FN)(
    IN LPCWSTR pwszRouter,
    _In_reads_(dwArgCount) LPWSTR *ppwcArguments,
    _In_ DWORD dwArgCount,
    IN LPCVOID pvData
    );
typedef NS_CONTEXT_DUMP_FN *PNS_CONTEXT_DUMP_FN;
typedef
DWORD
(WINAPI NS_DLL_STOP_FN)(
    IN DWORD dwReserved
    );
typedef NS_DLL_STOP_FN *PNS_DLL_STOP_FN;
typedef
DWORD
(WINAPI NS_HELPER_START_FN)(
    _In_ CONST GUID *pguidParent,
    _In_ DWORD dwVersion
    );
typedef NS_HELPER_START_FN *PNS_HELPER_START_FN;
typedef
DWORD
(WINAPI NS_HELPER_STOP_FN)(
    _In_ DWORD dwReserved
    );
typedef NS_HELPER_STOP_FN *PNS_HELPER_STOP_FN;
typedef DWORD (FN_HANDLE_CMD)(
    IN LPCWSTR pwszMachine,
    _Inout_updates_(dwArgCount) LPWSTR *ppwcArguments,
    IN DWORD dwCurrentIndex,
    IN DWORD dwArgCount,
    IN DWORD dwFlags,
    IN LPCVOID pvData,
    OUT BOOL *pbDone
    );
typedef FN_HANDLE_CMD *PFN_HANDLE_CMD;
typedef
BOOL
(WINAPI NS_OSVERSIONCHECK)(
    _In_ UINT CIMOSType,
    _In_ UINT CIMOSProductSuite,
    _In_ LPCWSTR CIMOSVersion,
    _In_ LPCWSTR CIMOSBuildNumber,
    _In_ LPCWSTR CIMServicePackMajorVersion,
    _In_ LPCWSTR CIMServicePackMinorVersion,
    _In_ UINT uiReserved,
    _In_ DWORD dwReserved
    );
typedef NS_OSVERSIONCHECK *PNS_OSVERSIONCHECK;
typedef struct _NS_HELPER_ATTRIBUTES
{
    union
    {
        struct
        {
            DWORD dwVersion;
            DWORD dwReserved;
        };
        ULONGLONG _ullAlign;
    };
    GUID guidHelper;
    PNS_HELPER_START_FN pfnStart;
    PNS_HELPER_STOP_FN pfnStop;
} NS_HELPER_ATTRIBUTES, *PNS_HELPER_ATTRIBUTES;
typedef struct _CMD_ENTRY
{
    LPCWSTR pwszCmdToken;
    PFN_HANDLE_CMD pfnCmdHandler;
    DWORD dwShortCmdHelpToken;
    DWORD dwCmdHlpToken;
    DWORD dwFlags;
    PNS_OSVERSIONCHECK pOsVersionCheck;
} CMD_ENTRY, *PCMD_ENTRY;
typedef struct _CMD_GROUP_ENTRY
{
    LPCWSTR pwszCmdGroupToken;
    DWORD dwShortCmdHelpToken;
    ULONG ulCmdGroupSize;
    DWORD dwFlags;
    PCMD_ENTRY pCmdGroup;
    PNS_OSVERSIONCHECK pOsVersionCheck;
} CMD_GROUP_ENTRY, *PCMD_GROUP_ENTRY;
typedef struct _NS_CONTEXT_ATTRIBUTES
{
    union
    {
        struct
        {
            DWORD dwVersion;
            DWORD dwReserved;
        };
        ULONGLONG _ullAlign;
    };
    LPWSTR pwszContext;
    GUID guidHelper;
    DWORD dwFlags;
    ULONG ulPriority;
    ULONG ulNumTopCmds;
    struct _CMD_ENTRY (*pTopCmds)[];
    ULONG ulNumGroups;
    struct _CMD_GROUP_ENTRY (*pCmdGroups)[];
    PNS_CONTEXT_COMMIT_FN pfnCommitFn;
    PNS_CONTEXT_DUMP_FN pfnDumpFn;
    PNS_CONTEXT_CONNECT_FN pfnConnectFn;
    PVOID pReserved;
    PNS_OSVERSIONCHECK pfnOsVersionCheck;
} NS_CONTEXT_ATTRIBUTES, *PNS_CONTEXT_ATTRIBUTES;
typedef CONST struct _NS_CONTEXT_ATTRIBUTES * PCNS_CONTEXT_ATTRIBUTES;
typedef struct _TAG_TYPE
{
    LPCWSTR pwszTag;
    DWORD dwRequired;
    BOOL bPresent;
} TAG_TYPE, *PTAG_TYPE;
typedef
DWORD
(NS_DLL_INIT_FN)(
    IN DWORD dwNetshVersion,
    OUT PVOID pReserved
    );
typedef NS_DLL_INIT_FN *PNS_DLL_INIT_FN;
DWORD WINAPI MatchEnumTag(
    IN HANDLE hModule,
    IN LPCWSTR pwcArg,
    IN DWORD dwNumArg,
    IN CONST TOKEN_VALUE *pEnumTable,
    OUT PDWORD pdwValue
    );
BOOL WINAPI MatchToken(
    IN LPCWSTR pwszUserToken,
    IN LPCWSTR pwszCmdToken
    );
DWORD WINAPI PreprocessCommand(
    _In_opt_ HANDLE hModule,
    _Inout_updates_(dwArgCount) LPWSTR *ppwcArguments,
    _In_ DWORD dwCurrentIndex,
    _In_ DWORD dwArgCount,
    _Inout_updates_opt_(dwTagCount) TAG_TYPE *pttTags,
    _In_ DWORD dwTagCount,
    _In_ DWORD dwMinArgs,
    _In_ DWORD dwMaxArgs,
    _Out_writes_opt_(dwArgCount-dwCurrentIndex) DWORD *pdwTagType
    );
DWORD PrintError(
    IN HANDLE hModule, OPTIONAL
    IN DWORD dwErrId,
    ...
    );
DWORD PrintMessageFromModule(
    IN HANDLE hModule,
    IN DWORD dwMsgId,
    ...
    );
DWORD PrintMessage(
    IN LPCWSTR pwszFormat,
    ...
    );
DWORD WINAPI RegisterContext(
    IN CONST NS_CONTEXT_ATTRIBUTES *pChildContext
    );
DWORD WINAPI RegisterHelper(
    IN CONST GUID *pguidParentContext,
    IN CONST NS_HELPER_ATTRIBUTES *pfnRegisterSubContext
    );
}
#pragma warning(pop)
#endif
#pragma endregion

#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "oaidl.h"
#include "ocidl.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef
enum tagATTRIBUTE_TYPE
    {
        AT_INVALID = 0,
        AT_BOOLEAN = ( AT_INVALID + 1 ) ,
        AT_INT8 = ( AT_BOOLEAN + 1 ) ,
        AT_UINT8 = ( AT_INT8 + 1 ) ,
        AT_INT16 = ( AT_UINT8 + 1 ) ,
        AT_UINT16 = ( AT_INT16 + 1 ) ,
        AT_INT32 = ( AT_UINT16 + 1 ) ,
        AT_UINT32 = ( AT_INT32 + 1 ) ,
        AT_INT64 = ( AT_UINT32 + 1 ) ,
        AT_UINT64 = ( AT_INT64 + 1 ) ,
        AT_STRING = ( AT_UINT64 + 1 ) ,
        AT_GUID = ( AT_STRING + 1 ) ,
        AT_LIFE_TIME = ( AT_GUID + 1 ) ,
        AT_SOCKADDR = ( AT_LIFE_TIME + 1 ) ,
        AT_OCTET_STRING = ( AT_SOCKADDR + 1 )
    } ATTRIBUTE_TYPE;
typedef struct tagOCTET_STRING
    {
    DWORD dwLength;
                    BYTE *lpValue;
    } OCTET_STRING;
typedef struct tagOCTET_STRING *POCTET_STRING;
typedef struct tagLIFE_TIME
    {
    FILETIME startTime;
    FILETIME endTime;
    } LIFE_TIME;
typedef struct tagLIFE_TIME *PLIFE_TIME;
typedef struct tagSOCK_ADDR
    {
    USHORT family;
    CHAR data[ 126 ];
    } DIAG_SOCKADDR;
typedef struct tagSOCK_ADDR *PDIAG_SOCK_ADDR;
typedef struct tagHELPER_ATTRIBUTE
    {
                           LPWSTR pwszName;
    ATTRIBUTE_TYPE type;
                                   union
        {
                       BOOL Boolean;
                       char Char;
                       byte Byte;
                       short Short;
                       WORD Word;
                       int Int;
                       DWORD DWord;
                       LONGLONG Int64;
                       ULONGLONG UInt64;
                                       LPWSTR PWStr;
                       GUID Guid;
                       LIFE_TIME LifeTime;
                       DIAG_SOCKADDR Address;
                       OCTET_STRING OctetString;
        } ;
    } HELPER_ATTRIBUTE;
typedef struct tagHELPER_ATTRIBUTE *PHELPER_ATTRIBUTE;
typedef
enum tagREPAIR_SCOPE
    {
        RS_SYSTEM = 0,
        RS_USER = ( RS_SYSTEM + 1 ) ,
        RS_APPLICATION = ( RS_USER + 1 ) ,
        RS_PROCESS = ( RS_APPLICATION + 1 )
    } REPAIR_SCOPE;
typedef enum tagREPAIR_SCOPE *PREPAIR_SCOPE;
typedef
enum __MIDL___MIDL_itf_ndattrib_0000_0000_0002
    {
        RR_NOROLLBACK = 0,
        RR_ROLLBACK = ( RR_NOROLLBACK + 1 ) ,
        RR_NORISK = ( RR_ROLLBACK + 1 )
    } REPAIR_RISK;
typedef
enum __MIDL___MIDL_itf_ndattrib_0000_0000_0003
    {
        UIT_INVALID = 0,
        UIT_NONE = 1,
        UIT_SHELL_COMMAND = ( UIT_NONE + 1 ) ,
        UIT_HELP_PANE = ( UIT_SHELL_COMMAND + 1 ) ,
        UIT_DUI = ( UIT_HELP_PANE + 1 )
    } UI_INFO_TYPE;
typedef struct tagShellCommandInfo
    {
                   LPWSTR pwszOperation;
                   LPWSTR pwszFile;
                   LPWSTR pwszParameters;
                   LPWSTR pwszDirectory;
    ULONG nShowCmd;
    } ShellCommandInfo;
typedef struct tagShellCommandInfo *PShellCommandInfo;
typedef struct tagUiInfo
    {
    UI_INFO_TYPE type;
                                   union
        {
                       LPWSTR pwzNull;
                       ShellCommandInfo ShellInfo;
                       LPWSTR pwzHelpUrl;
                       LPWSTR pwzDui;
        } ;
    } UiInfo;
typedef struct tagUiInfo *PUiInfo;
typedef struct tagRepairInfo
    {
    GUID guid;
                   LPWSTR pwszClassName;
                   LPWSTR pwszDescription;
    DWORD sidType;
    long cost;
    ULONG flags;
    REPAIR_SCOPE scope;
    REPAIR_RISK risk;
    UiInfo UiInfo;
    int rootCauseIndex;
    } RepairInfo;
typedef struct tagRepairInfo *PRepairInfo;
typedef struct tagRepairInfoEx
    {
    RepairInfo repair;
    USHORT repairRank;
    } RepairInfoEx;
typedef struct tagRepairInfoEx *PRepairInfoEx;
typedef struct tagRootCauseInfo
    {
                   LPWSTR pwszDescription;
    GUID rootCauseID;
    DWORD rootCauseFlags;
    GUID networkInterfaceID;
                    RepairInfoEx *pRepairs;
    USHORT repairCount;
    } RootCauseInfo;
typedef struct tagRootCauseInfo *PRootCauseInfo;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_ndattrib_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_ndattrib_0000_0000_v0_0_s_ifspec;
}

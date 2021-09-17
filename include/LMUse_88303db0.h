#include <winapifamily.h>
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
extern "C" {
#include <lmcons.h>
#include <lmuseflg.h>
NET_API_STATUS NET_API_FUNCTION
NetUseAdd (
    _In_opt_ LPTSTR servername,
    _In_ DWORD LevelFlags,
    _When_( USE_LEVEL(LevelFlags)== 0, _In_reads_bytes_(sizeof(USE_INFO_0)))
    _When_( USE_LEVEL(LevelFlags)== 1, _In_reads_bytes_(sizeof(USE_INFO_1)))
    _When_( USE_LEVEL(LevelFlags)== 2, _In_reads_bytes_(sizeof(USE_INFO_2)))
    _When_( USE_LEVEL(LevelFlags)== 3, _In_reads_bytes_(sizeof(USE_INFO_3)))
    _When_( USE_LEVEL(LevelFlags)== 4, _In_reads_bytes_(sizeof(USE_INFO_4)))
    _When_( USE_LEVEL(LevelFlags)== 5, _In_reads_bytes_(sizeof(USE_INFO_5)))
    LPBYTE buf,
    _Out_opt_ LPDWORD parm_err
    );
NET_API_STATUS NET_API_FUNCTION
NetUseDel (
    _In_opt_ LMSTR UncServerName OPTIONAL,
    _In_ LMSTR UseName,
    _In_ DWORD ForceLevelFlags
    );
NET_API_STATUS NET_API_FUNCTION
NetUseEnum (
    _In_opt_ LMSTR UncServerName,
    _In_ DWORD LevelFlags,
    _Outptr_opt_result_buffer_(_Inexpressible_(EntriesRead)) LPBYTE *BufPtr,
    _In_ DWORD PreferedMaximumSize,
    _Out_opt_ LPDWORD EntriesRead,
    _Out_ LPDWORD TotalEntries,
    _Inout_opt_ LPDWORD ResumeHandle
    );
NET_API_STATUS NET_API_FUNCTION
NetUseGetInfo (
    _In_opt_ LMSTR UncServerName,
    _In_ LMSTR UseName,
    _In_ DWORD LevelFlags,
    _When_(USE_LEVEL(LevelFlags) == 0, _Outptr_opt_result_bytebuffer_(sizeof(USE_INFO_0)))
    _When_(USE_LEVEL(LevelFlags) == 1, _Outptr_opt_result_bytebuffer_(sizeof(USE_INFO_1)))
    _When_(USE_LEVEL(LevelFlags) == 2, _Outptr_opt_result_bytebuffer_(sizeof(USE_INFO_2)))
    LPBYTE *bufptr
    );
typedef struct _USE_INFO_0 {
    LMSTR ui0_local;
    LMSTR ui0_remote;
}USE_INFO_0, *PUSE_INFO_0, *LPUSE_INFO_0;
typedef struct _USE_INFO_1 {
    LMSTR ui1_local;
    LMSTR ui1_remote;
    LMSTR ui1_password;
    DWORD ui1_status;
    DWORD ui1_asg_type;
    DWORD ui1_refcount;
    DWORD ui1_usecount;
}USE_INFO_1, *PUSE_INFO_1, *LPUSE_INFO_1;
typedef struct _USE_INFO_2 {
    LMSTR ui2_local;
    LMSTR ui2_remote;
    LMSTR ui2_password;
    DWORD ui2_status;
    DWORD ui2_asg_type;
    DWORD ui2_refcount;
    DWORD ui2_usecount;
    LMSTR ui2_username;
    LMSTR ui2_domainname;
}USE_INFO_2, *PUSE_INFO_2, *LPUSE_INFO_2;
typedef struct _USE_INFO_3 {
    USE_INFO_2 ui3_ui2;
    ULONG ui3_flags;
} USE_INFO_3, *PUSE_INFO_3, *LPUSE_INFO_3;
typedef struct _USE_INFO_4 {
    USE_INFO_3 ui4_ui3;
    DWORD ui4_auth_identity_length;
    PBYTE ui4_auth_identity;
} USE_INFO_4, *PUSE_INFO_4, *LPUSE_INFO_4;
typedef struct _USE_INFO_5 {
    USE_INFO_3 ui4_ui3;
    DWORD ui4_auth_identity_length;
    PBYTE ui4_auth_identity;
    DWORD ui5_security_descriptor_length;
    PBYTE ui5_security_descriptor;
    DWORD ui5_use_options_length;
    PBYTE ui5_use_options;
} USE_INFO_5, *PUSE_INFO_5, *LPUSE_INFO_5;
typedef struct _USE_OPTION_GENERIC {
    ULONG Tag;
    USHORT Length;
    USHORT Reserved;
} USE_OPTION_GENERIC, *PUSE_OPTION_GENERIC;
typedef struct _USE_OPTION_DEFFERED_CONNECTION_PARAMETERS {
    ULONG Tag;
    USHORT Length;
    USHORT Reserved;
} USE_OPTION_DEFFERED_CONNECTION_PARAMETERS, *PUSE_OPTION_DEFFERED_CONNECTION_PARAMETERS ;
}
#endif
#pragma endregion

#include <winapifamily.h>
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
extern "C" {
#include <lmcons.h>
_Check_return_
NET_API_STATUS NET_API_FUNCTION
NetShareAdd(
    _In_opt_ LMSTR servername,
    _In_ DWORD level,
    _When_( level == 2, _In_reads_bytes_(sizeof(SHARE_INFO_2)) )
    _When_( level == 502, _In_reads_bytes_(sizeof(SHARE_INFO_502)) )
    _When_( level == 503, _In_reads_bytes_(sizeof(SHARE_INFO_503)) )
    LPBYTE buf,
    _Out_opt_ LPDWORD parm_err
    );
_Check_return_
_Success_( return == 0 || return == ERROR_MORE_DATA )
NET_API_STATUS NET_API_FUNCTION
NetShareEnum(
    _In_opt_ LMSTR servername,
    _In_ DWORD level,
    _When_( level == 0,_Outptr_result_bytebuffer_(*entriesread * sizeof(SHARE_INFO_0)) )
    _When_( level == 1, _Outptr_result_bytebuffer_(*entriesread * sizeof(SHARE_INFO_1)) )
    _When_( level == 2, _Outptr_result_bytebuffer_(*entriesread * sizeof(SHARE_INFO_2)) )
    _When_( level == 502, _Outptr_result_bytebuffer_(*entriesread * sizeof(SHARE_INFO_502)) )
    _When_( level == 503, _Outptr_result_bytebuffer_(*entriesread * sizeof(SHARE_INFO_503)) )
    LPBYTE *bufptr,
    _In_ DWORD prefmaxlen,
    _Out_ LPDWORD entriesread,
    _Out_ LPDWORD totalentries,
    _Inout_opt_ LPDWORD resume_handle
    );
_Check_return_
_Success_( return == 0 || return == ERROR_MORE_DATA )
NET_API_STATUS NET_API_FUNCTION
NetShareEnumSticky(
    _In_opt_ LMSTR servername,
    _In_ DWORD level,
    _When_( level == 0, _Outptr_result_bytebuffer_(*entriesread * sizeof(SHARE_INFO_0)) )
    _When_( level == 1, _Outptr_result_bytebuffer_(*entriesread * sizeof(SHARE_INFO_1)) )
    _When_( level == 2, _Outptr_result_bytebuffer_(*entriesread * sizeof(SHARE_INFO_2)) )
    _When_( level == 502, _Outptr_result_bytebuffer_(*entriesread * sizeof(SHARE_INFO_502)) )
    _When_( level == 503, _Outptr_result_bytebuffer_(*entriesread * sizeof(SHARE_INFO_503)) )
    LPBYTE *bufptr,
    _In_ DWORD prefmaxlen,
    _Out_ LPDWORD entriesread,
    _Out_ LPDWORD totalentries,
    _Inout_opt_ LPDWORD resume_handle
    );
_Check_return_
_Success_( return == 0 || return == ERROR_MORE_DATA )
NET_API_STATUS NET_API_FUNCTION
NetShareGetInfo(
    _In_opt_ LMSTR servername,
    _In_ LMSTR netname,
    _In_ DWORD level,
    _When_( level == 0, _Outptr_result_bytebuffer_(sizeof(SHARE_INFO_0)) )
    _When_( level == 1, _Outptr_result_bytebuffer_(sizeof(SHARE_INFO_1)) )
    _When_( level == 2, _Outptr_result_bytebuffer_(sizeof(SHARE_INFO_2)) )
    _When_( level == 501, _Outptr_result_bytebuffer_(sizeof(SHARE_INFO_501)) )
    _When_( level == 502, _Outptr_result_bytebuffer_(sizeof(SHARE_INFO_502)) )
    _When_( level == 503, _Outptr_result_bytebuffer_(sizeof(SHARE_INFO_503)) )
    _When_( level == 1005, _Outptr_result_bytebuffer_(sizeof(SHARE_INFO_1005)) )
    LPBYTE *bufptr
    );
_Check_return_
NET_API_STATUS NET_API_FUNCTION
NetShareSetInfo(
    _In_opt_ LMSTR servername,
    _In_ LMSTR netname,
    _In_ DWORD level,
    _When_( level == 1, _In_reads_bytes_(sizeof(SHARE_INFO_1)) )
    _When_( level == 2, _In_reads_bytes_(sizeof(SHARE_INFO_2)) )
    _When_( level == 502, _In_reads_bytes_(sizeof(SHARE_INFO_502)) )
    _When_( level == 503, _In_reads_bytes_(sizeof(SHARE_INFO_503)) )
    _When_( level == 1004, _In_reads_bytes_(sizeof(SHARE_INFO_1004)) )
    _When_( level == 1005, _In_reads_bytes_(sizeof(SHARE_INFO_1005)) )
    _When_( level == 1006, _In_reads_bytes_(sizeof(SHARE_INFO_1006)) )
    _When_( level == 1501, _In_reads_bytes_(sizeof(SHARE_INFO_1501)) )
    LPBYTE buf,
    _Out_opt_ LPDWORD parm_err
    );
_Check_return_
NET_API_STATUS NET_API_FUNCTION
NetShareDel(
    _In_opt_ LMSTR servername,
    _In_ LMSTR netname,
    _Reserved_ DWORD reserved
    );
_Check_return_
NET_API_STATUS NET_API_FUNCTION
NetShareDelSticky(
    _In_opt_ LMSTR servername,
    _In_ LMSTR netname,
    _Reserved_ DWORD reserved
    );
_Check_return_
NET_API_STATUS NET_API_FUNCTION
NetShareCheck(
    _In_opt_ LMSTR servername,
    _In_ LMSTR device,
    _Out_ LPDWORD type
    );
_Check_return_
NET_API_STATUS NET_API_FUNCTION
NetShareDelEx(
    _In_opt_ LMSTR servername,
    _In_ DWORD level,
    _When_( level == 0, _In_reads_bytes_(sizeof(SHARE_INFO_0)) )
    _When_( level == 1, _In_reads_bytes_(sizeof(SHARE_INFO_1)) )
    _When_( level == 2, _In_reads_bytes_(sizeof(SHARE_INFO_2)) )
    _When_( level == 502, _In_reads_bytes_(sizeof(SHARE_INFO_502)) )
    _When_( level == 503, _In_reads_bytes_(sizeof(SHARE_INFO_503)) )
    LPBYTE buf
    );
typedef struct _SHARE_INFO_0 {
    LMSTR shi0_netname;
} SHARE_INFO_0, *PSHARE_INFO_0, *LPSHARE_INFO_0;
typedef struct _SHARE_INFO_1 {
    LMSTR shi1_netname;
    DWORD shi1_type;
    LMSTR shi1_remark;
} SHARE_INFO_1, *PSHARE_INFO_1, *LPSHARE_INFO_1;
typedef struct _SHARE_INFO_2 {
    LMSTR shi2_netname;
    DWORD shi2_type;
    LMSTR shi2_remark;
    DWORD shi2_permissions;
    DWORD shi2_max_uses;
    DWORD shi2_current_uses;
    LMSTR shi2_path;
    LMSTR shi2_passwd;
} SHARE_INFO_2, *PSHARE_INFO_2, *LPSHARE_INFO_2;
typedef struct _SHARE_INFO_501 {
    LMSTR shi501_netname;
    DWORD shi501_type;
    LMSTR shi501_remark;
    DWORD shi501_flags;
} SHARE_INFO_501, *PSHARE_INFO_501, *LPSHARE_INFO_501;
typedef struct _SHARE_INFO_502 {
    LMSTR shi502_netname;
    DWORD shi502_type;
    LMSTR shi502_remark;
    DWORD shi502_permissions;
    DWORD shi502_max_uses;
    DWORD shi502_current_uses;
    LMSTR shi502_path;
    LMSTR shi502_passwd;
    DWORD shi502_reserved;
    PSECURITY_DESCRIPTOR shi502_security_descriptor;
} SHARE_INFO_502, *PSHARE_INFO_502, *LPSHARE_INFO_502;
typedef struct _SHARE_INFO_503 {
    LMSTR shi503_netname;
    DWORD shi503_type;
    LMSTR shi503_remark;
    DWORD shi503_permissions;
    DWORD shi503_max_uses;
    DWORD shi503_current_uses;
    LMSTR shi503_path;
    LMSTR shi503_passwd;
    LMSTR shi503_servername;
    DWORD shi503_reserved;
    PSECURITY_DESCRIPTOR shi503_security_descriptor;
} SHARE_INFO_503, *PSHARE_INFO_503, *LPSHARE_INFO_503;
typedef struct _SHARE_INFO_1004 {
    LMSTR shi1004_remark;
} SHARE_INFO_1004, *PSHARE_INFO_1004, *LPSHARE_INFO_1004;
typedef struct _SHARE_INFO_1005 {
    DWORD shi1005_flags;
} SHARE_INFO_1005, *PSHARE_INFO_1005, *LPSHARE_INFO_1005;
typedef struct _SHARE_INFO_1006 {
    DWORD shi1006_max_uses;
} SHARE_INFO_1006, *PSHARE_INFO_1006, *LPSHARE_INFO_1006;
typedef struct _SHARE_INFO_1501 {
    DWORD shi1501_reserved;
    PSECURITY_DESCRIPTOR shi1501_security_descriptor;
} SHARE_INFO_1501, *PSHARE_INFO_1501, *LPSHARE_INFO_1501;
typedef struct _SHARE_INFO_1503
{
    GUID shi1503_sharefilter;
} SHARE_INFO_1503, *PSHARE_INFO_1503, *LPSHARE_INFO_1503;
_Check_return_
NET_API_STATUS NET_API_FUNCTION
NetServerAliasAdd(
    _In_opt_ LMSTR servername,
    _In_ DWORD level,
    _In_reads_bytes_(sizeof(SERVER_ALIAS_INFO_0)) LPBYTE buf
    );
_Check_return_
NET_API_STATUS NET_API_FUNCTION
NetServerAliasDel(
    _In_opt_ LMSTR servername,
    _In_ DWORD level,
    _When_( level == 0, _In_reads_bytes_(sizeof(SERVER_ALIAS_INFO_0_CONTAINER)) )
    LPBYTE buf
    );
_Check_return_
_Success_( return == 0 || return == ERROR_MORE_DATA )
NET_API_STATUS NET_API_FUNCTION
NetServerAliasEnum(
    _In_opt_ LMSTR servername,
    _In_ DWORD level,
    _When_( level == 0, _Outptr_result_bytebuffer_(*entriesread * sizeof(SERVER_ALIAS_INFO_0_CONTAINER)) )
    LPBYTE *bufptr,
    _In_ DWORD prefmaxlen,
    _Out_ LPDWORD entriesread,
    _Out_ LPDWORD totalentries,
    _Inout_opt_ LPDWORD resumehandle
    );
typedef struct _SERVER_ALIAS_INFO_0 {
    LMSTR srvai0_alias;
    LMSTR srvai0_target;
    BOOLEAN srvai0_default;
    ULONG srvai0_reserved;
} SERVER_ALIAS_INFO_0, *PSERVER_ALIAS_INFO_0, *LPSERVER_ALIAS_INFO_0;
            (PARMNUM_BASE_INFOLEVEL + SHARE_REMARK_PARMNUM)
            (PARMNUM_BASE_INFOLEVEL + SHARE_MAX_USES_PARMNUM)
            (PARMNUM_BASE_INFOLEVEL + SHARE_FILE_SD_PARMNUM)
                                    SHI1005_FLAGS_RESTRICT_EXCLUSIVE_OPENS| \
                                    SHI1005_FLAGS_FORCE_SHARED_DELETE| \
                                    SHI1005_FLAGS_ALLOW_NAMESPACE_CACHING| \
                                    SHI1005_FLAGS_ACCESS_BASED_DIRECTORY_ENUM| \
                                    SHI1005_FLAGS_FORCE_LEVELII_OPLOCK| \
                                    SHI1005_FLAGS_ENABLE_HASH| \
                                    SHI1005_FLAGS_ENABLE_CA | \
                                    SHI1005_FLAGS_ENCRYPT_DATA | \
                                    SHI1005_FLAGS_DISABLE_CLIENT_BUFFERING | \
                                    SHI1005_FLAGS_IDENTITY_REMOTING | \
                                    SHI1005_FLAGS_CLUSTER_MANAGED | \
                                    SHI1005_FLAGS_RESERVED)
_Check_return_
_Success_( return == 0 || return == ERROR_MORE_DATA )
NET_API_STATUS NET_API_FUNCTION
NetSessionEnum(
    _In_opt_ LMSTR servername,
    _In_opt_ LMSTR UncClientName,
    _In_opt_ LMSTR username,
    _In_ DWORD level,
    _When_( level == 0, _Outptr_result_bytebuffer_(*entriesread * sizeof(SESSION_INFO_0)) )
    _When_( level == 1, _Outptr_result_bytebuffer_(*entriesread * sizeof(SESSION_INFO_1)) )
    _When_( level == 2, _Outptr_result_bytebuffer_(*entriesread * sizeof(SESSION_INFO_2)) )
    _When_( level == 10, _Outptr_result_bytebuffer_(*entriesread * sizeof(SESSION_INFO_10)) )
    _When_( level == 502, _Outptr_result_bytebuffer_(*entriesread * sizeof(SESSION_INFO_502)) )
    LPBYTE *bufptr,
    _In_ DWORD prefmaxlen,
    _Out_ LPDWORD entriesread,
    _Out_ LPDWORD totalentries,
    _Inout_opt_ LPDWORD resume_handle
    );
_Check_return_
NET_API_STATUS NET_API_FUNCTION
NetSessionDel(
    _In_opt_ LMSTR servername,
    _In_opt_ LMSTR UncClientName,
    _In_opt_ LMSTR username
    );
_Check_return_
_Success_( return == 0 )
NET_API_STATUS NET_API_FUNCTION
NetSessionGetInfo(
    _In_opt_ LMSTR servername,
    _In_ LMSTR UncClientName,
    _In_ LMSTR username,
    _In_ DWORD level,
    _When_( level == 0, _Outptr_result_bytebuffer_(sizeof(SESSION_INFO_0)) )
    _When_( level == 1, _Outptr_result_bytebuffer_(sizeof(SESSION_INFO_1)) )
    _When_( level == 2, _Outptr_result_bytebuffer_(sizeof(SESSION_INFO_2)) )
    _When_( level == 10, _Outptr_result_bytebuffer_(sizeof(SESSION_INFO_10)) )
    LPBYTE *bufptr
    );
typedef struct _SESSION_INFO_0 {
    LMSTR sesi0_cname;
} SESSION_INFO_0, *PSESSION_INFO_0, *LPSESSION_INFO_0;
typedef struct _SESSION_INFO_1 {
    LMSTR sesi1_cname;
    LMSTR sesi1_username;
    DWORD sesi1_num_opens;
    DWORD sesi1_time;
    DWORD sesi1_idle_time;
    DWORD sesi1_user_flags;
} SESSION_INFO_1, *PSESSION_INFO_1, *LPSESSION_INFO_1;
typedef struct _SESSION_INFO_2 {
    LMSTR sesi2_cname;
    LMSTR sesi2_username;
    DWORD sesi2_num_opens;
    DWORD sesi2_time;
    DWORD sesi2_idle_time;
    DWORD sesi2_user_flags;
    LMSTR sesi2_cltype_name;
} SESSION_INFO_2, *PSESSION_INFO_2, *LPSESSION_INFO_2;
typedef struct _SESSION_INFO_10 {
    LMSTR sesi10_cname;
    LMSTR sesi10_username;
    DWORD sesi10_time;
    DWORD sesi10_idle_time;
} SESSION_INFO_10, *PSESSION_INFO_10, *LPSESSION_INFO_10;
typedef struct _SESSION_INFO_502 {
    LMSTR sesi502_cname;
    LMSTR sesi502_username;
    DWORD sesi502_num_opens;
    DWORD sesi502_time;
    DWORD sesi502_idle_time;
    DWORD sesi502_user_flags;
    LMSTR sesi502_cltype_name;
    LMSTR sesi502_transport;
} SESSION_INFO_502, *PSESSION_INFO_502, *LPSESSION_INFO_502;
_Check_return_
_Success_( return == 0 || return == ERROR_MORE_DATA )
NET_API_STATUS NET_API_FUNCTION
NetConnectionEnum(
    _In_opt_ LMSTR servername,
    _In_ LMSTR qualifier,
    _In_ DWORD level,
    _When_( level == 0, _Outptr_result_bytebuffer_(*entriesread * sizeof(CONNECTION_INFO_0)) )
    _When_( level == 1, _Outptr_result_bytebuffer_(*entriesread * sizeof(CONNECTION_INFO_1)) )
    LPBYTE *bufptr,
    _In_ DWORD prefmaxlen,
    _Out_ LPDWORD entriesread,
    _Out_ LPDWORD totalentries,
    _Inout_opt_ LPDWORD resume_handle
    );
typedef struct _CONNECTION_INFO_0 {
    DWORD coni0_id;
} CONNECTION_INFO_0, *PCONNECTION_INFO_0, *LPCONNECTION_INFO_0;
typedef struct _CONNECTION_INFO_1 {
    DWORD coni1_id;
    DWORD coni1_type;
    DWORD coni1_num_opens;
    DWORD coni1_num_users;
    DWORD coni1_time;
    LMSTR coni1_username;
    LMSTR coni1_netname;
} CONNECTION_INFO_1, *PCONNECTION_INFO_1, *LPCONNECTION_INFO_1;
_Check_return_
NET_API_STATUS NET_API_FUNCTION
NetFileClose(
    _In_opt_ LMSTR servername,
    _In_ DWORD fileid
    );
_Check_return_
_Success_( return == 0 || return == ERROR_MORE_DATA )
NET_API_STATUS NET_API_FUNCTION
NetFileEnum(
    _In_opt_ LMSTR servername,
    _In_opt_ LMSTR basepath,
    _In_opt_ LMSTR username,
    _In_ DWORD level,
    _When_( level == 2, _Outptr_result_bytebuffer_(*entriesread * sizeof(FILE_INFO_2)) )
    _When_( level == 3, _Outptr_result_bytebuffer_(*entriesread * sizeof(FILE_INFO_3)) )
    LPBYTE *bufptr,
    _In_ DWORD prefmaxlen,
    _Out_ LPDWORD entriesread,
    _Out_ LPDWORD totalentries,
    _Inout_opt_ PDWORD_PTR resume_handle
    );
_Check_return_
_Success_( return == 0)
NET_API_STATUS NET_API_FUNCTION
NetFileGetInfo(
    _In_opt_ LMSTR servername,
    _In_ DWORD fileid,
    _In_ DWORD level,
    _When_( level == 2, _Outptr_result_bytebuffer_(sizeof(FILE_INFO_2)) )
    _When_( level == 3, _Outptr_result_bytebuffer_(sizeof(FILE_INFO_3)) )
    LPBYTE *bufptr
    );
typedef struct _FILE_INFO_2 {
    DWORD fi2_id;
} FILE_INFO_2, *PFILE_INFO_2, *LPFILE_INFO_2;
typedef struct _FILE_INFO_3 {
    DWORD fi3_id;
    DWORD fi3_permissions;
    DWORD fi3_num_locks;
    LMSTR fi3_pathname;
    LMSTR fi3_username;
} FILE_INFO_3, *PFILE_INFO_3, *LPFILE_INFO_3;
}
#endif
#pragma endregion

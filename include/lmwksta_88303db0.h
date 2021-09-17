#include <winapifamily.h>
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
extern "C" {
#include <lmcons.h>
#include <lmuseflg.h>
NET_API_STATUS NET_API_FUNCTION
NetWkstaGetInfo (
    _In_opt_ LMSTR servername OPTIONAL,
    _In_ DWORD level,
    _Outptr_opt_result_buffer_(_Inexpressible_("size varies with level")) OUT LPBYTE *bufptr
    );
NET_API_STATUS NET_API_FUNCTION
NetWkstaSetInfo (
    _In_opt_ LMSTR servername OPTIONAL,
    _In_ DWORD level,
    _In_reads_(_Inexpressible_("varies")) LPBYTE buffer,
    _Out_opt_ OUT LPDWORD parm_err OPTIONAL
    );
NET_API_STATUS NET_API_FUNCTION
NetWkstaUserGetInfo (
    _In_opt_ LMSTR reserved,
    _In_ DWORD level,
    _Outptr_result_buffer_(_Inexpressible_("varies")) OUT LPBYTE *bufptr
    );
NET_API_STATUS NET_API_FUNCTION
NetWkstaUserSetInfo (
    _In_opt_ LMSTR reserved,
    _In_ DWORD level,
    _In_reads_(_Inexpressible_("varies")) LPBYTE buf,
    _Out_opt_ LPDWORD parm_err OPTIONAL
    );
NET_API_STATUS NET_API_FUNCTION
NetWkstaUserEnum (
    _In_opt_ LMSTR servername OPTIONAL,
    IN DWORD level,
    _Out_opt_ LPBYTE *bufptr,
    IN DWORD prefmaxlen,
    _Out_opt_ LPDWORD entriesread,
    _Out_ LPDWORD totalentries,
    _Inout_opt_ LPDWORD resumehandle OPTIONAL
    );
NET_API_STATUS NET_API_FUNCTION
NetWkstaTransportAdd (
    _In_opt_ LPTSTR servername,
    _In_ DWORD level,
    _When_( level == 0, _In_reads_bytes_(sizeof(WKSTA_TRANSPORT_INFO_0)))
    LPBYTE buf,
    _Out_opt_ LPDWORD parm_err
    );
NET_API_STATUS NET_API_FUNCTION
NetWkstaTransportDel (
    _In_opt_ IN LMSTR servername OPTIONAL,
    _In_opt_ IN LMSTR transportname,
    IN DWORD ucond
    );
_Check_return_
_Success_( return == NERR_Success || return == ERROR_MORE_DATA )
NET_API_STATUS NET_API_FUNCTION
NetWkstaTransportEnum(
    _In_opt_ LPTSTR servername,
    _In_ DWORD level,
    _When_( level == 0, _Outptr_result_bytebuffer_(*entriesread * sizeof(WKSTA_TRANSPORT_INFO_0)) )
    LPBYTE *bufptr,
    _In_ DWORD prefmaxlen,
    _Out_ LPDWORD entriesread,
    _Out_ LPDWORD totalentries,
    _Inout_opt_ LPDWORD resume_handle
    );
typedef struct _WKSTA_INFO_100 {
    DWORD wki100_platform_id;
    LMSTR wki100_computername;
    LMSTR wki100_langroup;
    DWORD wki100_ver_major;
    DWORD wki100_ver_minor;
}WKSTA_INFO_100, *PWKSTA_INFO_100, *LPWKSTA_INFO_100;
typedef struct _WKSTA_INFO_101 {
    DWORD wki101_platform_id;
    LMSTR wki101_computername;
    LMSTR wki101_langroup;
    DWORD wki101_ver_major;
    DWORD wki101_ver_minor;
    LMSTR wki101_lanroot;
}WKSTA_INFO_101, *PWKSTA_INFO_101, *LPWKSTA_INFO_101;
typedef struct _WKSTA_INFO_102 {
    DWORD wki102_platform_id;
    LMSTR wki102_computername;
    LMSTR wki102_langroup;
    DWORD wki102_ver_major;
    DWORD wki102_ver_minor;
    LMSTR wki102_lanroot;
    DWORD wki102_logged_on_users;
}WKSTA_INFO_102, *PWKSTA_INFO_102, *LPWKSTA_INFO_102;
typedef struct _WKSTA_INFO_302{
    DWORD wki302_char_wait;
    DWORD wki302_collection_time;
    DWORD wki302_maximum_collection_count;
    DWORD wki302_keep_conn;
    DWORD wki302_keep_search;
    DWORD wki302_max_cmds;
    DWORD wki302_num_work_buf;
    DWORD wki302_siz_work_buf;
    DWORD wki302_max_wrk_cache;
    DWORD wki302_sess_timeout;
    DWORD wki302_siz_error;
    DWORD wki302_num_alerts;
    DWORD wki302_num_services;
    DWORD wki302_errlog_sz;
    DWORD wki302_print_buf_time;
    DWORD wki302_num_char_buf;
    DWORD wki302_siz_char_buf;
    LMSTR wki302_wrk_heuristics;
    DWORD wki302_mailslots;
    DWORD wki302_num_dgram_buf;
}WKSTA_INFO_302, *PWKSTA_INFO_302, *LPWKSTA_INFO_302;
typedef struct _WKSTA_INFO_402{
    DWORD wki402_char_wait;
    DWORD wki402_collection_time;
    DWORD wki402_maximum_collection_count;
    DWORD wki402_keep_conn;
    DWORD wki402_keep_search;
    DWORD wki402_max_cmds;
    DWORD wki402_num_work_buf;
    DWORD wki402_siz_work_buf;
    DWORD wki402_max_wrk_cache;
    DWORD wki402_sess_timeout;
    DWORD wki402_siz_error;
    DWORD wki402_num_alerts;
    DWORD wki402_num_services;
    DWORD wki402_errlog_sz;
    DWORD wki402_print_buf_time;
    DWORD wki402_num_char_buf;
    DWORD wki402_siz_char_buf;
    LMSTR wki402_wrk_heuristics;
    DWORD wki402_mailslots;
    DWORD wki402_num_dgram_buf;
    DWORD wki402_max_threads;
}WKSTA_INFO_402, *PWKSTA_INFO_402, *LPWKSTA_INFO_402;
typedef struct _WKSTA_INFO_502{
    DWORD wki502_char_wait;
    DWORD wki502_collection_time;
    DWORD wki502_maximum_collection_count;
    DWORD wki502_keep_conn;
    DWORD wki502_max_cmds;
    DWORD wki502_sess_timeout;
    DWORD wki502_siz_char_buf;
    DWORD wki502_max_threads;
    DWORD wki502_lock_quota;
    DWORD wki502_lock_increment;
    DWORD wki502_lock_maximum;
    DWORD wki502_pipe_increment;
    DWORD wki502_pipe_maximum;
    DWORD wki502_cache_file_timeout;
    DWORD wki502_dormant_file_limit;
    DWORD wki502_read_ahead_throughput;
    DWORD wki502_num_mailslot_buffers;
    DWORD wki502_num_srv_announce_buffers;
    DWORD wki502_max_illegal_datagram_events;
    DWORD wki502_illegal_datagram_event_reset_frequency;
    BOOL wki502_log_election_packets;
    BOOL wki502_use_opportunistic_locking;
    BOOL wki502_use_unlock_behind;
    BOOL wki502_use_close_behind;
    BOOL wki502_buf_named_pipes;
    BOOL wki502_use_lock_read_unlock;
    BOOL wki502_utilize_nt_caching;
    BOOL wki502_use_raw_read;
    BOOL wki502_use_raw_write;
    BOOL wki502_use_write_raw_data;
    BOOL wki502_use_encryption;
    BOOL wki502_buf_files_deny_write;
    BOOL wki502_buf_read_only_files;
    BOOL wki502_force_core_create_mode;
    BOOL wki502_use_512_byte_max_transfer;
}WKSTA_INFO_502, *PWKSTA_INFO_502, *LPWKSTA_INFO_502;
typedef struct _WKSTA_INFO_1010 {
     DWORD wki1010_char_wait;
} WKSTA_INFO_1010, *PWKSTA_INFO_1010, *LPWKSTA_INFO_1010;
typedef struct _WKSTA_INFO_1011 {
     DWORD wki1011_collection_time;
} WKSTA_INFO_1011, *PWKSTA_INFO_1011, *LPWKSTA_INFO_1011;
typedef struct _WKSTA_INFO_1012 {
     DWORD wki1012_maximum_collection_count;
} WKSTA_INFO_1012, *PWKSTA_INFO_1012, *LPWKSTA_INFO_1012;
typedef struct _WKSTA_INFO_1027 {
     DWORD wki1027_errlog_sz;
} WKSTA_INFO_1027, *PWKSTA_INFO_1027, *LPWKSTA_INFO_1027;
typedef struct _WKSTA_INFO_1028 {
     DWORD wki1028_print_buf_time;
} WKSTA_INFO_1028, *PWKSTA_INFO_1028, *LPWKSTA_INFO_1028;
typedef struct _WKSTA_INFO_1032 {
     DWORD wki1032_wrk_heuristics;
} WKSTA_INFO_1032, *PWKSTA_INFO_1032, *LPWKSTA_INFO_1032;
typedef struct _WKSTA_INFO_1013 {
     DWORD wki1013_keep_conn;
} WKSTA_INFO_1013, *PWKSTA_INFO_1013, *LPWKSTA_INFO_1013;
typedef struct _WKSTA_INFO_1018 {
     DWORD wki1018_sess_timeout;
} WKSTA_INFO_1018, *PWKSTA_INFO_1018, *LPWKSTA_INFO_1018;
typedef struct _WKSTA_INFO_1023 {
     DWORD wki1023_siz_char_buf;
} WKSTA_INFO_1023, *PWKSTA_INFO_1023, *LPWKSTA_INFO_1023;
typedef struct _WKSTA_INFO_1033 {
     DWORD wki1033_max_threads;
} WKSTA_INFO_1033, *PWKSTA_INFO_1033, *LPWKSTA_INFO_1033;
typedef struct _WKSTA_INFO_1041 {
    DWORD wki1041_lock_quota;
} WKSTA_INFO_1041, *PWKSTA_INFO_1041, *LPWKSTA_INFO_1041;
typedef struct _WKSTA_INFO_1042 {
    DWORD wki1042_lock_increment;
} WKSTA_INFO_1042, *PWKSTA_INFO_1042, *LPWKSTA_INFO_1042;
typedef struct _WKSTA_INFO_1043 {
    DWORD wki1043_lock_maximum;
} WKSTA_INFO_1043, *PWKSTA_INFO_1043, *LPWKSTA_INFO_1043;
typedef struct _WKSTA_INFO_1044 {
    DWORD wki1044_pipe_increment;
} WKSTA_INFO_1044, *PWKSTA_INFO_1044, *LPWKSTA_INFO_1044;
typedef struct _WKSTA_INFO_1045 {
    DWORD wki1045_pipe_maximum;
} WKSTA_INFO_1045, *PWKSTA_INFO_1045, *LPWKSTA_INFO_1045;
typedef struct _WKSTA_INFO_1046 {
    DWORD wki1046_dormant_file_limit;
} WKSTA_INFO_1046, *PWKSTA_INFO_1046, *LPWKSTA_INFO_1046;
typedef struct _WKSTA_INFO_1047 {
    DWORD wki1047_cache_file_timeout;
} WKSTA_INFO_1047, *PWKSTA_INFO_1047, *LPWKSTA_INFO_1047;
typedef struct _WKSTA_INFO_1048 {
    BOOL wki1048_use_opportunistic_locking;
} WKSTA_INFO_1048, *PWKSTA_INFO_1048, *LPWKSTA_INFO_1048;
typedef struct _WKSTA_INFO_1049 {
    BOOL wki1049_use_unlock_behind;
} WKSTA_INFO_1049, *PWKSTA_INFO_1049, *LPWKSTA_INFO_1049;
typedef struct _WKSTA_INFO_1050 {
    BOOL wki1050_use_close_behind;
} WKSTA_INFO_1050, *PWKSTA_INFO_1050, *LPWKSTA_INFO_1050;
typedef struct _WKSTA_INFO_1051 {
    BOOL wki1051_buf_named_pipes;
} WKSTA_INFO_1051, *PWKSTA_INFO_1051, *LPWKSTA_INFO_1051;
typedef struct _WKSTA_INFO_1052 {
    BOOL wki1052_use_lock_read_unlock;
} WKSTA_INFO_1052, *PWKSTA_INFO_1052, *LPWKSTA_INFO_1052;
typedef struct _WKSTA_INFO_1053 {
    BOOL wki1053_utilize_nt_caching;
} WKSTA_INFO_1053, *PWKSTA_INFO_1053, *LPWKSTA_INFO_1053;
typedef struct _WKSTA_INFO_1054 {
    BOOL wki1054_use_raw_read;
} WKSTA_INFO_1054, *PWKSTA_INFO_1054, *LPWKSTA_INFO_1054;
typedef struct _WKSTA_INFO_1055 {
    BOOL wki1055_use_raw_write;
} WKSTA_INFO_1055, *PWKSTA_INFO_1055, *LPWKSTA_INFO_1055;
typedef struct _WKSTA_INFO_1056 {
    BOOL wki1056_use_write_raw_data;
} WKSTA_INFO_1056, *PWKSTA_INFO_1056, *LPWKSTA_INFO_1056;
typedef struct _WKSTA_INFO_1057 {
    BOOL wki1057_use_encryption;
} WKSTA_INFO_1057, *PWKSTA_INFO_1057, *LPWKSTA_INFO_1057;
typedef struct _WKSTA_INFO_1058 {
    BOOL wki1058_buf_files_deny_write;
} WKSTA_INFO_1058, *PWKSTA_INFO_1058, *LPWKSTA_INFO_1058;
typedef struct _WKSTA_INFO_1059 {
    BOOL wki1059_buf_read_only_files;
} WKSTA_INFO_1059, *PWKSTA_INFO_1059, *LPWKSTA_INFO_1059;
typedef struct _WKSTA_INFO_1060 {
    BOOL wki1060_force_core_create_mode;
} WKSTA_INFO_1060, *PWKSTA_INFO_1060, *LPWKSTA_INFO_1060;
typedef struct _WKSTA_INFO_1061 {
    BOOL wki1061_use_512_byte_max_transfer;
} WKSTA_INFO_1061, *PWKSTA_INFO_1061, *LPWKSTA_INFO_1061;
typedef struct _WKSTA_INFO_1062 {
    DWORD wki1062_read_ahead_throughput;
} WKSTA_INFO_1062, *PWKSTA_INFO_1062, *LPWKSTA_INFO_1062;
typedef struct _WKSTA_USER_INFO_0 {
    LMSTR wkui0_username;
}WKSTA_USER_INFO_0, *PWKSTA_USER_INFO_0, *LPWKSTA_USER_INFO_0;
typedef struct _WKSTA_USER_INFO_1 {
    LMSTR wkui1_username;
    LMSTR wkui1_logon_domain;
    LMSTR wkui1_oth_domains;
    LMSTR wkui1_logon_server;
}WKSTA_USER_INFO_1, *PWKSTA_USER_INFO_1, *LPWKSTA_USER_INFO_1;
typedef struct _WKSTA_USER_INFO_1101 {
     LMSTR wkui1101_oth_domains;
} WKSTA_USER_INFO_1101, *PWKSTA_USER_INFO_1101,
  *LPWKSTA_USER_INFO_1101;
typedef struct _WKSTA_TRANSPORT_INFO_0 {
    DWORD wkti0_quality_of_service;
    DWORD wkti0_number_of_vcs;
    LMSTR wkti0_transport_name;
    LMSTR wkti0_transport_address;
    BOOL wkti0_wan_ish;
}WKSTA_TRANSPORT_INFO_0, *PWKSTA_TRANSPORT_INFO_0,
 *LPWKSTA_TRANSPORT_INFO_0;
}
#endif
#pragma endregion

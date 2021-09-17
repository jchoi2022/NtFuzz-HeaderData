#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern "C" {
typedef struct _HLOG {
     DWORD time;
     DWORD last_flags;
     DWORD offset;
     DWORD rec_offset;
} HLOG, *PHLOG, *LPHLOG;
#pragma warning(push)
#pragma warning(disable:28740)
NET_API_STATUS NET_API_FUNCTION
NetAuditClear (
    IN LPCWSTR server OPTIONAL,
    IN LPCWSTR backupfile OPTIONAL,
    IN LPCWSTR service OPTIONAL
    );
NET_API_STATUS NET_API_FUNCTION
NetAuditRead (
    IN LPCWSTR server OPTIONAL,
    IN LPCWSTR service OPTIONAL,
    IN LPHLOG auditloghandle,
    IN DWORD offset,
    IN LPDWORD reserved1 OPTIONAL,
    IN DWORD reserved2,
    IN DWORD offsetflag,
    OUT LPBYTE *bufptr,
    IN DWORD prefmaxlen,
    OUT LPDWORD bytesread,
    OUT LPDWORD totalavailable
    );
NET_API_STATUS NET_API_FUNCTION
NetAuditWrite (
    IN DWORD type,
    IN LPBYTE buf,
    IN DWORD numbytes,
    IN LPCWSTR service OPTIONAL,
    IN LPBYTE reserved OPTIONAL
    );
#pragma warning(pop)
typedef struct _AUDIT_ENTRY {
     DWORD ae_len;
     DWORD ae_reserved;
     DWORD ae_time;
     DWORD ae_type;
     DWORD ae_data_offset;
     DWORD ae_data_size;
} AUDIT_ENTRY, *PAUDIT_ENTRY, *LPAUDIT_ENTRY;
typedef struct _AE_SRVSTATUS {
     DWORD ae_sv_status;
} AE_SRVSTATUS, *PAE_SRVSTATUS, *LPAE_SRVSTATUS;
typedef struct _AE_SESSLOGON {
     DWORD ae_so_compname;
     DWORD ae_so_username;
     DWORD ae_so_privilege;
} AE_SESSLOGON, *PAE_SESSLOGON, *LPAE_SESSLOGON;
typedef struct _AE_SESSLOGOFF {
     DWORD ae_sf_compname;
     DWORD ae_sf_username;
     DWORD ae_sf_reason;
} AE_SESSLOGOFF, *PAE_SESSLOGOFF, *LPAE_SESSLOGOFF;
typedef struct _AE_SESSPWERR {
     DWORD ae_sp_compname;
     DWORD ae_sp_username;
} AE_SESSPWERR, *PAE_SESSPWERR, *LPAE_SESSPWERR;
typedef struct _AE_CONNSTART {
     DWORD ae_ct_compname;
     DWORD ae_ct_username;
     DWORD ae_ct_netname;
     DWORD ae_ct_connid;
} AE_CONNSTART, *PAE_CONNSTART, *LPAE_CONNSTART;
typedef struct _AE_CONNSTOP {
     DWORD ae_cp_compname;
     DWORD ae_cp_username;
     DWORD ae_cp_netname;
     DWORD ae_cp_connid;
     DWORD ae_cp_reason;
} AE_CONNSTOP, *PAE_CONNSTOP, *LPAE_CONNSTOP;
typedef struct _AE_CONNREJ {
     DWORD ae_cr_compname;
     DWORD ae_cr_username;
     DWORD ae_cr_netname;
     DWORD ae_cr_reason;
} AE_CONNREJ, *PAE_CONNREJ, *LPAE_CONNREJ;
typedef struct _AE_RESACCESS {
     DWORD ae_ra_compname;
     DWORD ae_ra_username;
     DWORD ae_ra_resname;
     DWORD ae_ra_operation;
     DWORD ae_ra_returncode;
     DWORD ae_ra_restype;
     DWORD ae_ra_fileid;
} AE_RESACCESS, *PAE_RESACCESS, *LPAE_RESACCESS;
typedef struct _AE_RESACCESSREJ {
     DWORD ae_rr_compname;
     DWORD ae_rr_username;
     DWORD ae_rr_resname;
     DWORD ae_rr_operation;
} AE_RESACCESSREJ, *PAE_RESACCESSREJ, *LPAE_RESACCESSREJ;
typedef struct _AE_CLOSEFILE {
     DWORD ae_cf_compname;
     DWORD ae_cf_username;
     DWORD ae_cf_resname;
     DWORD ae_cf_fileid;
     DWORD ae_cf_duration;
     DWORD ae_cf_reason;
} AE_CLOSEFILE, *PAE_CLOSEFILE, *LPAE_CLOSEFILE;
typedef struct _AE_SERVICESTAT {
     DWORD ae_ss_compname;
     DWORD ae_ss_username;
     DWORD ae_ss_svcname;
     DWORD ae_ss_status;
     DWORD ae_ss_code;
     DWORD ae_ss_text;
     DWORD ae_ss_returnval;
} AE_SERVICESTAT, *PAE_SERVICESTAT, *LPAE_SERVICESTAT;
typedef struct _AE_ACLMOD {
     DWORD ae_am_compname;
     DWORD ae_am_username;
     DWORD ae_am_resname;
     DWORD ae_am_action;
     DWORD ae_am_datalen;
} AE_ACLMOD, *PAE_ACLMOD, *LPAE_ACLMOD;
typedef struct _AE_UASMOD {
     DWORD ae_um_compname;
     DWORD ae_um_username;
     DWORD ae_um_resname;
     DWORD ae_um_rectype;
     DWORD ae_um_action;
     DWORD ae_um_datalen;
} AE_UASMOD, *PAE_UASMOD, *LPAE_UASMOD;
typedef struct _AE_NETLOGON {
     DWORD ae_no_compname;
     DWORD ae_no_username;
     DWORD ae_no_privilege;
     DWORD ae_no_authflags;
} AE_NETLOGON, *PAE_NETLOGON, *LPAE_NETLOGON;
typedef struct _AE_NETLOGOFF {
     DWORD ae_nf_compname;
     DWORD ae_nf_username;
     DWORD ae_nf_reserved1;
     DWORD ae_nf_reserved2;
} AE_NETLOGOFF, *PAE_NETLOGOFF, *LPAE_NETLOGOFF;
typedef struct _AE_ACCLIM {
     DWORD ae_al_compname;
     DWORD ae_al_username;
     DWORD ae_al_resname;
     DWORD ae_al_limit;
} AE_ACCLIM, *PAE_ACCLIM, *LPAE_ACCLIM;
typedef struct _AE_LOCKOUT {
    DWORD ae_lk_compname;
    DWORD ae_lk_username;
    DWORD ae_lk_action;
    DWORD ae_lk_bad_pw_count;
} AE_LOCKOUT, *PAE_LOCKOUT, *LPAE_LOCKOUT;
typedef struct _AE_GENERIC {
     DWORD ae_ge_msgfile;
     DWORD ae_ge_msgnum;
     DWORD ae_ge_params;
     DWORD ae_ge_param1;
     DWORD ae_ge_param2;
     DWORD ae_ge_param3;
     DWORD ae_ge_param4;
     DWORD ae_ge_param5;
     DWORD ae_ge_param6;
     DWORD ae_ge_param7;
     DWORD ae_ge_param8;
     DWORD ae_ge_param9;
} AE_GENERIC, *PAE_GENERIC, *LPAE_GENERIC;
}
#endif
#pragma endregion

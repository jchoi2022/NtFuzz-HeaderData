#include <winapifamily.h>
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
extern "C" {
#include <windef.h>
#include <schnlsp.h>
typedef enum {
    LDAP_SUCCESS = 0x00,
    LDAP_OPERATIONS_ERROR = 0x01,
    LDAP_PROTOCOL_ERROR = 0x02,
    LDAP_TIMELIMIT_EXCEEDED = 0x03,
    LDAP_SIZELIMIT_EXCEEDED = 0x04,
    LDAP_COMPARE_FALSE = 0x05,
    LDAP_COMPARE_TRUE = 0x06,
    LDAP_AUTH_METHOD_NOT_SUPPORTED = 0x07,
    LDAP_STRONG_AUTH_REQUIRED = 0x08,
    LDAP_REFERRAL_V2 = 0x09,
    LDAP_PARTIAL_RESULTS = 0x09,
    LDAP_REFERRAL = 0x0a,
    LDAP_ADMIN_LIMIT_EXCEEDED = 0x0b,
    LDAP_UNAVAILABLE_CRIT_EXTENSION = 0x0c,
    LDAP_CONFIDENTIALITY_REQUIRED = 0x0d,
    LDAP_SASL_BIND_IN_PROGRESS = 0x0e,
    LDAP_NO_SUCH_ATTRIBUTE = 0x10,
    LDAP_UNDEFINED_TYPE = 0x11,
    LDAP_INAPPROPRIATE_MATCHING = 0x12,
    LDAP_CONSTRAINT_VIOLATION = 0x13,
    LDAP_ATTRIBUTE_OR_VALUE_EXISTS = 0x14,
    LDAP_INVALID_SYNTAX = 0x15,
    LDAP_NO_SUCH_OBJECT = 0x20,
    LDAP_ALIAS_PROBLEM = 0x21,
    LDAP_INVALID_DN_SYNTAX = 0x22,
    LDAP_IS_LEAF = 0x23,
    LDAP_ALIAS_DEREF_PROBLEM = 0x24,
    LDAP_INAPPROPRIATE_AUTH = 0x30,
    LDAP_INVALID_CREDENTIALS = 0x31,
    LDAP_INSUFFICIENT_RIGHTS = 0x32,
    LDAP_BUSY = 0x33,
    LDAP_UNAVAILABLE = 0x34,
    LDAP_UNWILLING_TO_PERFORM = 0x35,
    LDAP_LOOP_DETECT = 0x36,
    LDAP_SORT_CONTROL_MISSING = 0x3C,
    LDAP_OFFSET_RANGE_ERROR = 0x3D,
    LDAP_NAMING_VIOLATION = 0x40,
    LDAP_OBJECT_CLASS_VIOLATION = 0x41,
    LDAP_NOT_ALLOWED_ON_NONLEAF = 0x42,
    LDAP_NOT_ALLOWED_ON_RDN = 0x43,
    LDAP_ALREADY_EXISTS = 0x44,
    LDAP_NO_OBJECT_CLASS_MODS = 0x45,
    LDAP_RESULTS_TOO_LARGE = 0x46,
    LDAP_AFFECTS_MULTIPLE_DSAS = 0x47,
    LDAP_VIRTUAL_LIST_VIEW_ERROR = 0x4c,
    LDAP_OTHER = 0x50,
    LDAP_SERVER_DOWN = 0x51,
    LDAP_LOCAL_ERROR = 0x52,
    LDAP_ENCODING_ERROR = 0x53,
    LDAP_DECODING_ERROR = 0x54,
    LDAP_TIMEOUT = 0x55,
    LDAP_AUTH_UNKNOWN = 0x56,
    LDAP_FILTER_ERROR = 0x57,
    LDAP_USER_CANCELLED = 0x58,
    LDAP_PARAM_ERROR = 0x59,
    LDAP_NO_MEMORY = 0x5a,
    LDAP_CONNECT_ERROR = 0x5b,
    LDAP_NOT_SUPPORTED = 0x5c,
    LDAP_NO_RESULTS_RETURNED = 0x5e,
    LDAP_CONTROL_NOT_FOUND = 0x5d,
    LDAP_MORE_RESULTS_TO_RETURN = 0x5f,
    LDAP_CLIENT_LOOP = 0x60,
    LDAP_REFERRAL_LIMIT_EXCEEDED = 0x61
} LDAP_RETCODE;
typedef struct ldap {
    struct {
        UINT_PTR sb_sd;
        UCHAR Reserved1[(10*sizeof(ULONG))+1];
        ULONG_PTR sb_naddr;
        UCHAR Reserved2[(6*sizeof(ULONG))];
    } ld_sb;
    PCHAR ld_host;
    ULONG ld_version;
    UCHAR ld_lberoptions;
    ULONG ld_deref;
    ULONG ld_timelimit;
    ULONG ld_sizelimit;
    ULONG ld_errno;
    PCHAR ld_matched;
    PCHAR ld_error;
    ULONG ld_msgid;
    UCHAR Reserved3[(6*sizeof(ULONG))+1];
    ULONG ld_cldaptries;
    ULONG ld_cldaptimeout;
    ULONG ld_refhoplimit;
    ULONG ld_options;
} LDAP, * PLDAP;
typedef struct l_timeval {
    LONG tv_sec;
    LONG tv_usec;
} LDAP_TIMEVAL, * PLDAP_TIMEVAL;
typedef struct berval {
    ULONG bv_len;
    PCHAR bv_val;
} LDAP_BERVAL, * PLDAP_BERVAL, BERVAL, * PBERVAL, BerValue;
typedef struct ldapmsg {
    ULONG lm_msgid;
    ULONG lm_msgtype;
    PVOID lm_ber;
    struct ldapmsg *lm_chain;
    struct ldapmsg *lm_next;
    ULONG lm_time;
    PLDAP Connection;
    PVOID Request;
    ULONG lm_returncode;
    USHORT lm_referral;
    BOOLEAN lm_chased;
    BOOLEAN lm_eom;
    BOOLEAN ConnectionReferenced;
} LDAPMessage, *PLDAPMessage;
typedef struct ldapcontrolA {
    PCHAR ldctl_oid;
    struct berval ldctl_value;
    BOOLEAN ldctl_iscritical;
} LDAPControlA, *PLDAPControlA;
typedef struct ldapcontrolW {
    PWCHAR ldctl_oid;
    struct berval ldctl_value;
    BOOLEAN ldctl_iscritical;
} LDAPControlW, *PLDAPControlW;
typedef struct ldapmodW {
     ULONG mod_op;
     PWCHAR mod_type;
     union {
        PWCHAR *modv_strvals;
        struct berval **modv_bvals;
    } mod_vals;
} LDAPModW, *PLDAPModW;
typedef struct ldapmodA {
     ULONG mod_op;
     PCHAR mod_type;
     union {
        PCHAR *modv_strvals;
        struct berval **modv_bvals;
    } mod_vals;
} LDAPModA, *PLDAPModA;
WINLDAPAPI LDAP * LDAPAPI ldap_openW( _In_ const PWSTR HostName, ULONG PortNumber );
WINLDAPAPI LDAP * LDAPAPI ldap_openA( _In_ const PSTR HostName, ULONG PortNumber );
WINLDAPAPI LDAP * LDAPAPI ldap_initW( _In_ const PWSTR HostName, ULONG PortNumber );
WINLDAPAPI LDAP * LDAPAPI ldap_initA( _In_ const PSTR HostName, ULONG PortNumber );
WINLDAPAPI LDAP * LDAPAPI ldap_sslinitW( _In_ PWSTR HostName, ULONG PortNumber, int secure );
WINLDAPAPI LDAP * LDAPAPI ldap_sslinitA( _In_ PSTR HostName, ULONG PortNumber, int secure );
WINLDAPAPI ULONG LDAPAPI ldap_connect( LDAP *ld,
                                        struct l_timeval *timeout
                                        );
WINLDAPAPI LDAP * LDAPAPI cldap_openW( _In_ PWSTR HostName, ULONG PortNumber );
WINLDAPAPI LDAP * LDAPAPI cldap_openA( _In_ PSTR HostName, ULONG PortNumber );
WINLDAPAPI ULONG LDAPAPI ldap_unbind( LDAP *ld );
WINLDAPAPI ULONG LDAPAPI ldap_unbind_s( LDAP *ld );
WINLDAPAPI ULONG LDAPAPI ldap_get_option( LDAP *ld, int option, void *outvalue );
WINLDAPAPI ULONG LDAPAPI ldap_get_optionW( LDAP *ld, int option, void *outvalue );
WINLDAPAPI ULONG LDAPAPI ldap_set_option( LDAP *ld, int option, const void *invalue );
WINLDAPAPI ULONG LDAPAPI ldap_set_optionW( LDAP *ld, int option, const void *invalue );
WINLDAPAPI ULONG LDAPAPI ldap_simple_bindW( LDAP *ld, _In_opt_ PWSTR dn, _In_opt_ PWSTR passwd );
WINLDAPAPI ULONG LDAPAPI ldap_simple_bindA( LDAP *ld, _In_opt_ PSTR dn, _In_opt_ PSTR passwd );
WINLDAPAPI ULONG LDAPAPI ldap_simple_bind_sW( LDAP *ld, _In_opt_ PWSTR dn, _In_opt_ PWSTR passwd );
WINLDAPAPI ULONG LDAPAPI ldap_simple_bind_sA( LDAP *ld, _In_opt_ PSTR dn, _In_opt_ PSTR passwd );
WINLDAPAPI ULONG LDAPAPI ldap_bindW( LDAP *ld, _In_opt_ PWSTR dn, _In_opt_ PWCHAR cred, ULONG method );
WINLDAPAPI ULONG LDAPAPI ldap_bindA( LDAP *ld, _In_opt_ PSTR dn, _In_opt_ PCHAR cred, ULONG method );
WINLDAPAPI ULONG LDAPAPI ldap_bind_sW( LDAP *ld, _In_opt_ PWSTR dn, _In_opt_ PWCHAR cred, ULONG method );
WINLDAPAPI ULONG LDAPAPI ldap_bind_sA( LDAP *ld, _In_opt_ PSTR dn, _In_opt_ PCHAR cred, ULONG method );
 WINLDAPAPI INT LDAPAPI ldap_sasl_bindA(
         LDAP *ExternalHandle,
         _In_ const PSTR DistName,
         _In_ const PSTR AuthMechanism,
         const BERVAL *cred,
         PLDAPControlA *ServerCtrls,
         PLDAPControlA *ClientCtrls,
         int *MessageNumber
         );
 WINLDAPAPI INT LDAPAPI ldap_sasl_bindW(
         LDAP *ExternalHandle,
         _In_ const PWSTR DistName,
         _In_ const PWSTR AuthMechanism,
         const BERVAL *cred,
         PLDAPControlW *ServerCtrls,
         PLDAPControlW *ClientCtrls,
         int *MessageNumber
         );
 WINLDAPAPI INT LDAPAPI ldap_sasl_bind_sA(
         LDAP *ExternalHandle,
         _In_ const PSTR DistName,
         _In_ const PSTR AuthMechanism,
         const BERVAL *cred,
         PLDAPControlA *ServerCtrls,
         PLDAPControlA *ClientCtrls,
         PBERVAL *ServerData
         );
 WINLDAPAPI INT LDAPAPI ldap_sasl_bind_sW(
         LDAP *ExternalHandle,
         _In_ const PWSTR DistName,
         _In_ const PWSTR AuthMechanism,
         const BERVAL *cred,
         PLDAPControlW *ServerCtrls,
         PLDAPControlW *ClientCtrls,
         PBERVAL *ServerData
         );
WINLDAPAPI ULONG LDAPAPI ldap_searchW(
        LDAP *ld,
        _In_opt_ const PWSTR base,
        ULONG scope,
        _In_ const PWSTR filter,
        _In_ PZPWSTR attrs,
        ULONG attrsonly
    );
WINLDAPAPI ULONG LDAPAPI ldap_searchA(
        LDAP *ld,
        _In_opt_ const PSTR base,
        ULONG scope,
        _In_ const PSTR filter,
        _In_ PZPSTR attrs,
        ULONG attrsonly
    );
WINLDAPAPI ULONG LDAPAPI ldap_search_sW(
        LDAP *ld,
        _In_opt_ const PWSTR base,
        ULONG scope,
        _In_ const PWSTR filter,
        _In_ PZPWSTR attrs,
        ULONG attrsonly,
        _Outptr_result_maybenull_ LDAPMessage **res
    );
WINLDAPAPI ULONG LDAPAPI ldap_search_sA(
        LDAP *ld,
        _In_opt_ const PSTR base,
        ULONG scope,
        _In_ const PSTR filter,
        _In_ PZPSTR attrs,
        ULONG attrsonly,
        _Outptr_result_maybenull_ LDAPMessage **res
    );
WINLDAPAPI ULONG LDAPAPI ldap_search_stW(
        LDAP *ld,
        _In_opt_ const PWSTR base,
        ULONG scope,
        _In_ const PWSTR filter,
        _In_ PZPWSTR attrs,
        ULONG attrsonly,
        struct l_timeval *timeout,
        _Outptr_result_maybenull_ PLDAPMessage *res
    );
WINLDAPAPI ULONG LDAPAPI ldap_search_stA(
        LDAP *ld,
        _In_opt_ const PSTR base,
        ULONG scope,
        _In_ const PSTR filter,
        _In_ PZPSTR attrs,
        ULONG attrsonly,
        struct l_timeval *timeout,
        _Outptr_result_maybenull_ PLDAPMessage *res
    );
WINLDAPAPI ULONG LDAPAPI ldap_search_extW(
        LDAP *ld,
        _In_opt_ const PWSTR base,
        ULONG scope,
        _In_ const PWSTR filter,
        _In_ PZPWSTR attrs,
        ULONG attrsonly,
        _In_opt_ PLDAPControlW *ServerControls,
        _In_opt_ PLDAPControlW *ClientControls,
        ULONG TimeLimit,
        ULONG SizeLimit,
        ULONG *MessageNumber
    );
WINLDAPAPI ULONG LDAPAPI ldap_search_extA(
        LDAP *ld,
        _In_opt_ const PSTR base,
        ULONG scope,
        _In_ const PSTR filter,
        _In_ PZPSTR attrs,
        ULONG attrsonly,
        _In_opt_ PLDAPControlA *ServerControls,
        _In_opt_ PLDAPControlA *ClientControls,
        ULONG TimeLimit,
        ULONG SizeLimit,
        ULONG *MessageNumber
    );
WINLDAPAPI ULONG LDAPAPI ldap_search_ext_sW(
        LDAP *ld,
        _In_opt_ const PWSTR base,
        ULONG scope,
        _In_ const PWSTR filter,
        _In_ PZPWSTR attrs,
        ULONG attrsonly,
        _In_opt_ PLDAPControlW *ServerControls,
        _In_opt_ PLDAPControlW *ClientControls,
        struct l_timeval *timeout,
        ULONG SizeLimit,
        _Outptr_result_maybenull_ PLDAPMessage *res
    );
WINLDAPAPI ULONG LDAPAPI ldap_search_ext_sA(
        LDAP *ld,
        _In_opt_ const PSTR base,
        ULONG scope,
        _In_ const PSTR filter,
        _In_ PZPSTR attrs,
        ULONG attrsonly,
        _In_opt_ PLDAPControlA *ServerControls,
        _In_opt_ PLDAPControlA *ClientControls,
        struct l_timeval *timeout,
        ULONG SizeLimit,
        _Outptr_result_maybenull_ PLDAPMessage *res
    );
WINLDAPAPI ULONG LDAPAPI
ldap_check_filterW(
        LDAP *ld,
        _In_ PWSTR SearchFilter
    );
WINLDAPAPI ULONG LDAPAPI
ldap_check_filterA(
        LDAP *ld,
        _In_ PSTR SearchFilter
    );
WINLDAPAPI ULONG LDAPAPI ldap_modifyW( LDAP *ld, _In_ PWSTR dn, LDAPModW *mods[] );
WINLDAPAPI ULONG LDAPAPI ldap_modifyA( LDAP *ld, _In_ PSTR dn, LDAPModA *mods[] );
WINLDAPAPI ULONG LDAPAPI ldap_modify_sW( LDAP *ld, _In_ PWSTR dn, LDAPModW *mods[] );
WINLDAPAPI ULONG LDAPAPI ldap_modify_sA( LDAP *ld, _In_ PSTR dn, LDAPModA *mods[] );
WINLDAPAPI ULONG LDAPAPI ldap_modify_extW(
        LDAP *ld,
        _In_ const PWSTR dn,
        LDAPModW *mods[],
        PLDAPControlW *ServerControls,
        PLDAPControlW *ClientControls,
        ULONG *MessageNumber
        );
WINLDAPAPI ULONG LDAPAPI ldap_modify_extA(
        LDAP *ld,
        _In_ const PSTR dn,
        LDAPModA *mods[],
        PLDAPControlA *ServerControls,
        PLDAPControlA *ClientControls,
        ULONG *MessageNumber
        );
WINLDAPAPI ULONG LDAPAPI ldap_modify_ext_sW(
        LDAP *ld,
        _In_ const PWSTR dn,
        LDAPModW *mods[],
        PLDAPControlW *ServerControls,
        PLDAPControlW *ClientControls
        );
WINLDAPAPI ULONG LDAPAPI ldap_modify_ext_sA(
        LDAP *ld,
        _In_ const PSTR dn,
        LDAPModA *mods[],
        PLDAPControlA *ServerControls,
        PLDAPControlA *ClientControls
        );
WINLDAPAPI ULONG LDAPAPI ldap_modrdn2W (
    LDAP *ExternalHandle,
    _In_ const PWSTR DistinguishedName,
    _In_ const PWSTR NewDistinguishedName,
    INT DeleteOldRdn
    );
WINLDAPAPI ULONG LDAPAPI ldap_modrdn2A (
    LDAP *ExternalHandle,
    _In_ const PSTR DistinguishedName,
    _In_ const PSTR NewDistinguishedName,
    INT DeleteOldRdn
    );
WINLDAPAPI ULONG LDAPAPI ldap_modrdnW (
    LDAP *ExternalHandle,
    _In_ const PWSTR DistinguishedName,
    _In_ const PWSTR NewDistinguishedName
    );
WINLDAPAPI ULONG LDAPAPI ldap_modrdnA (
    LDAP *ExternalHandle,
    _In_ const PSTR DistinguishedName,
    _In_ const PSTR NewDistinguishedName
    );
WINLDAPAPI ULONG LDAPAPI ldap_modrdn2_sW (
    LDAP *ExternalHandle,
    _In_ const PWSTR DistinguishedName,
    _In_ const PWSTR NewDistinguishedName,
    INT DeleteOldRdn
    );
WINLDAPAPI ULONG LDAPAPI ldap_modrdn2_sA (
    LDAP *ExternalHandle,
    _In_ const PSTR DistinguishedName,
    _In_ const PSTR NewDistinguishedName,
    INT DeleteOldRdn
    );
WINLDAPAPI ULONG LDAPAPI ldap_modrdn_sW (
    LDAP *ExternalHandle,
    _In_ const PWSTR DistinguishedName,
    _In_ const PWSTR NewDistinguishedName
    );
WINLDAPAPI ULONG LDAPAPI ldap_modrdn_sA (
    LDAP *ExternalHandle,
    _In_ const PSTR DistinguishedName,
    _In_ const PSTR NewDistinguishedName
    );
WINLDAPAPI ULONG LDAPAPI ldap_rename_extW(
        LDAP *ld,
        _In_ const PWSTR dn,
        _In_ const PWSTR NewRDN,
        _In_opt_ const PWSTR NewParent,
        INT DeleteOldRdn,
        PLDAPControlW *ServerControls,
        PLDAPControlW *ClientControls,
        ULONG *MessageNumber
        );
WINLDAPAPI ULONG LDAPAPI ldap_rename_extA(
        LDAP *ld,
        _In_ const PSTR dn,
        _In_ const PSTR NewRDN,
        _In_opt_ const PSTR NewParent,
        INT DeleteOldRdn,
        PLDAPControlA *ServerControls,
        PLDAPControlA *ClientControls,
        ULONG *MessageNumber
        );
WINLDAPAPI ULONG LDAPAPI ldap_rename_ext_sW(
        LDAP *ld,
        _In_ const PWSTR dn,
        _In_ const PWSTR NewRDN,
        _In_opt_ const PWSTR NewParent,
        INT DeleteOldRdn,
        PLDAPControlW *ServerControls,
        PLDAPControlW *ClientControls
        );
WINLDAPAPI ULONG LDAPAPI ldap_rename_ext_sA(
        LDAP *ld,
        _In_ const PSTR dn,
        _In_ const PSTR NewRDN,
        _In_opt_ const PSTR NewParent,
        INT DeleteOldRdn,
        PLDAPControlA *ServerControls,
        PLDAPControlA *ClientControls
        );
WINLDAPAPI ULONG LDAPAPI ldap_addW( LDAP *ld, _In_ PWSTR dn, LDAPModW *attrs[] );
WINLDAPAPI ULONG LDAPAPI ldap_addA( LDAP *ld, _In_ PSTR dn, LDAPModA *attrs[] );
WINLDAPAPI ULONG LDAPAPI ldap_add_sW( LDAP *ld, _In_ PWSTR dn, LDAPModW *attrs[] );
WINLDAPAPI ULONG LDAPAPI ldap_add_sA( LDAP *ld, _In_ PSTR dn, LDAPModA *attrs[] );
WINLDAPAPI ULONG LDAPAPI ldap_add_extW(
        LDAP *ld,
        _In_ const PWSTR dn,
        LDAPModW *attrs[],
        PLDAPControlW *ServerControls,
        PLDAPControlW *ClientControls,
        ULONG *MessageNumber
        );
WINLDAPAPI ULONG LDAPAPI ldap_add_extA(
        LDAP *ld,
        _In_ const PSTR dn,
        LDAPModA *attrs[],
        PLDAPControlA *ServerControls,
        PLDAPControlA *ClientControls,
        ULONG *MessageNumber
        );
WINLDAPAPI ULONG LDAPAPI ldap_add_ext_sW(
        LDAP *ld,
        _In_ const PWSTR dn,
        LDAPModW *attrs[],
        PLDAPControlW *ServerControls,
        PLDAPControlW *ClientControls
        );
WINLDAPAPI ULONG LDAPAPI ldap_add_ext_sA(
        LDAP *ld,
        _In_ const PSTR dn,
        LDAPModA *attrs[],
        PLDAPControlA *ServerControls,
        PLDAPControlA *ClientControls
        );
WINLDAPAPI ULONG LDAPAPI ldap_compareW( LDAP *ld, _In_ const PWSTR dn, _In_ const PWSTR attr, _In_ PWSTR value );
WINLDAPAPI ULONG LDAPAPI ldap_compareA( LDAP *ld, _In_ const PSTR dn, _In_ const PSTR attr, _In_ PSTR value );
WINLDAPAPI ULONG LDAPAPI ldap_compare_sW( LDAP *ld, _In_ const PWSTR dn, _In_ const PWSTR attr, _In_ PWSTR value );
WINLDAPAPI ULONG LDAPAPI ldap_compare_sA( LDAP *ld, _In_ const PSTR dn, _In_ const PSTR attr, _In_ PSTR value );
WINLDAPAPI ULONG LDAPAPI ldap_compare_extW(
        LDAP *ld,
        _In_ const PWSTR dn,
        _In_ const PWSTR Attr,
        _In_opt_ const PWSTR Value,
        _In_opt_ struct berval *Data,
        PLDAPControlW *ServerControls,
        PLDAPControlW *ClientControls,
        ULONG *MessageNumber
        );
WINLDAPAPI ULONG LDAPAPI ldap_compare_extA(
        LDAP *ld,
        _In_ const PSTR dn,
        _In_ const PSTR Attr,
        _In_opt_ const PSTR Value,
        _In_opt_ struct berval *Data,
        PLDAPControlA *ServerControls,
        PLDAPControlA *ClientControls,
        ULONG *MessageNumber
        );
WINLDAPAPI ULONG LDAPAPI ldap_compare_ext_sW(
        LDAP *ld,
        _In_ const PWSTR dn,
        _In_ const PWSTR Attr,
        _In_opt_ const PWSTR Value,
        _In_opt_ struct berval *Data,
        PLDAPControlW *ServerControls,
        PLDAPControlW *ClientControls
        );
WINLDAPAPI ULONG LDAPAPI ldap_compare_ext_sA(
        LDAP *ld,
        _In_ const PSTR dn,
        _In_ const PSTR Attr,
        _In_opt_ const PSTR Value,
        _In_opt_ struct berval *Data,
        PLDAPControlA *ServerControls,
        PLDAPControlA *ClientControls
        );
WINLDAPAPI ULONG LDAPAPI ldap_deleteW( LDAP *ld, _In_ const PWSTR dn );
WINLDAPAPI ULONG LDAPAPI ldap_deleteA( LDAP *ld, _In_ const PSTR dn );
WINLDAPAPI ULONG LDAPAPI ldap_delete_sW( LDAP *ld, _In_ const PWSTR dn );
WINLDAPAPI ULONG LDAPAPI ldap_delete_sA( LDAP *ld, _In_ const PSTR dn );
WINLDAPAPI ULONG LDAPAPI ldap_delete_extW(
        LDAP *ld,
        _In_ const PWSTR dn,
        PLDAPControlW *ServerControls,
        PLDAPControlW *ClientControls,
        ULONG *MessageNumber
        );
WINLDAPAPI ULONG LDAPAPI ldap_delete_extA(
        LDAP *ld,
        _In_ const PSTR dn,
        PLDAPControlA *ServerControls,
        PLDAPControlA *ClientControls,
        ULONG *MessageNumber
        );
WINLDAPAPI ULONG LDAPAPI ldap_delete_ext_sW(
        LDAP *ld,
        _In_ const PWSTR dn,
        PLDAPControlW *ServerControls,
        PLDAPControlW *ClientControls
        );
WINLDAPAPI ULONG LDAPAPI ldap_delete_ext_sA(
        LDAP *ld,
        _In_ const PSTR dn,
        PLDAPControlA *ServerControls,
        PLDAPControlA *ClientControls
        );
WINLDAPAPI ULONG LDAPAPI ldap_abandon( LDAP *ld, ULONG msgid );
WINLDAPAPI ULONG LDAPAPI ldap_result(
        LDAP *ld,
        ULONG msgid,
        ULONG all,
        _In_opt_ PLDAP_TIMEVAL timeout,
        _Outptr_result_maybenull_ PLDAPMessage *res
    );
WINLDAPAPI ULONG LDAPAPI ldap_msgfree( LDAPMessage *res );
WINLDAPAPI ULONG LDAPAPI ldap_result2error(
        LDAP *ld,
        LDAPMessage *res,
        ULONG freeit
    );
WINLDAPAPI ULONG LDAPAPI ldap_parse_resultW (
        LDAP *Connection,
        LDAPMessage *ResultMessage,
        ULONG *ReturnCode,
        _Outptr_opt_result_maybenull_ PWSTR *MatchedDNs,
        _Outptr_opt_result_maybenull_ PWSTR *ErrorMessage,
        _Outptr_opt_result_maybenull_ PZPWSTR *Referrals,
        PLDAPControlW **ServerControls,
        BOOLEAN Freeit
        );
WINLDAPAPI ULONG LDAPAPI ldap_parse_resultA (
        LDAP *Connection,
        LDAPMessage *ResultMessage,
        ULONG *ReturnCode,
        _Outptr_opt_result_maybenull_ PSTR *MatchedDNs,
        _Outptr_opt_result_maybenull_ PSTR *ErrorMessage,
        _Outptr_opt_result_maybenull_ PZPSTR *Referrals,
        PLDAPControlA **ServerControls,
        BOOLEAN Freeit
        );
WINLDAPAPI ULONG LDAPAPI ldap_parse_extended_resultA (
        LDAP *Connection,
        LDAPMessage *ResultMessage,
        _Outptr_opt_result_maybenull_ PSTR *ResultOID,
        struct berval **ResultData,
        BOOLEAN Freeit
        );
WINLDAPAPI ULONG LDAPAPI ldap_parse_extended_resultW (
        LDAP *Connection,
        LDAPMessage *ResultMessage,
        _Outptr_opt_result_maybenull_ PWSTR *ResultOID,
        struct berval **ResultData,
        BOOLEAN Freeit
        );
WINLDAPAPI ULONG LDAPAPI ldap_controls_freeA (
        LDAPControlA **Controls
        );
WINLDAPAPI ULONG LDAPAPI ldap_control_freeA (
        LDAPControlA *Controls
        );
WINLDAPAPI ULONG LDAPAPI ldap_controls_freeW (
        LDAPControlW **Control
        );
WINLDAPAPI ULONG LDAPAPI ldap_control_freeW (
        LDAPControlW *Control
        );
WINLDAPAPI ULONG LDAPAPI ldap_free_controlsW (
        LDAPControlW **Controls
        );
WINLDAPAPI ULONG LDAPAPI ldap_free_controlsA (
        LDAPControlA **Controls
        );
WINLDAPAPI PWCHAR LDAPAPI ldap_err2stringW( ULONG err );
WINLDAPAPI PCHAR LDAPAPI ldap_err2stringA( ULONG err );
WINLDAPAPI void LDAPAPI ldap_perror( LDAP *ld, _In_ const PCHAR msg );
WINLDAPAPI LDAPMessage *LDAPAPI ldap_first_entry( LDAP *ld, LDAPMessage *res );
WINLDAPAPI LDAPMessage *LDAPAPI ldap_next_entry( LDAP *ld, LDAPMessage *entry );
WINLDAPAPI ULONG LDAPAPI ldap_count_entries( LDAP *ld, LDAPMessage *res );
typedef struct berelement {
    PCHAR opaque;
} BerElement;
WINLDAPAPI PWCHAR LDAPAPI ldap_first_attributeW(
        LDAP *ld,
        LDAPMessage *entry,
        BerElement **ptr
        );
WINLDAPAPI PCHAR LDAPAPI ldap_first_attributeA(
        LDAP *ld,
        LDAPMessage *entry,
        BerElement **ptr
        );
WINLDAPAPI PWCHAR LDAPAPI ldap_next_attributeW(
        LDAP *ld,
        LDAPMessage *entry,
        BerElement *ptr
        );
WINLDAPAPI PCHAR LDAPAPI ldap_next_attributeA(
        LDAP *ld,
        LDAPMessage *entry,
        BerElement *ptr
        );
WINLDAPAPI _Ret_maybenull_ PWCHAR *LDAPAPI ldap_get_valuesW(
        LDAP *ld,
        LDAPMessage *entry,
        _In_ const PWSTR attr
        );
WINLDAPAPI _Ret_maybenull_ PCHAR *LDAPAPI ldap_get_valuesA(
        LDAP *ld,
        LDAPMessage *entry,
        _In_ const PSTR attr
        );
WINLDAPAPI struct berval **LDAPAPI ldap_get_values_lenW (
    LDAP *ExternalHandle,
    LDAPMessage *Message,
    _In_ const PWSTR attr
    );
WINLDAPAPI struct berval **LDAPAPI ldap_get_values_lenA (
    LDAP *ExternalHandle,
    LDAPMessage *Message,
    _In_ const PSTR attr
    );
WINLDAPAPI ULONG LDAPAPI ldap_count_valuesW( _In_opt_z_ PWCHAR *vals );
WINLDAPAPI ULONG LDAPAPI ldap_count_valuesA( _In_opt_z_ PCHAR *vals );
WINLDAPAPI ULONG LDAPAPI ldap_count_values_len( struct berval **vals );
WINLDAPAPI ULONG LDAPAPI ldap_value_freeW( _In_opt_z_ PWCHAR *vals );
WINLDAPAPI ULONG LDAPAPI ldap_value_freeA( _In_opt_z_ PCHAR *vals );
WINLDAPAPI ULONG LDAPAPI ldap_value_free_len( struct berval **vals );
WINLDAPAPI PWCHAR LDAPAPI ldap_get_dnW( LDAP *ld, LDAPMessage *entry );
WINLDAPAPI PCHAR LDAPAPI ldap_get_dnA( LDAP *ld, LDAPMessage *entry );
WINLDAPAPI PWCHAR *LDAPAPI ldap_explode_dnW( _In_ const PWSTR dn, ULONG notypes );
WINLDAPAPI PCHAR *LDAPAPI ldap_explode_dnA( _In_ const PSTR dn, ULONG notypes );
WINLDAPAPI PWCHAR LDAPAPI ldap_dn2ufnW( _In_ const PWSTR dn );
WINLDAPAPI PCHAR LDAPAPI ldap_dn2ufnA( _In_ const PSTR dn );
WINLDAPAPI VOID LDAPAPI ldap_memfreeW( _In_ PWCHAR Block );
WINLDAPAPI VOID LDAPAPI ldap_memfreeA( _In_ PCHAR Block );
WINLDAPAPI VOID LDAPAPI ber_bvfree( struct berval *bv );
WINLDAPAPI ULONG LDAPAPI ldap_ufn2dnW (
    _In_ const PWSTR ufn,
    _Outptr_ PWSTR *pDn
    );
WINLDAPAPI ULONG LDAPAPI ldap_ufn2dnA (
    _In_ const PSTR ufn,
    _Outptr_ PSTR *pDn
    );
typedef struct ldap_version_info {
     ULONG lv_size;
     ULONG lv_major;
     ULONG lv_minor;
} LDAP_VERSION_INFO, *PLDAP_VERSION_INFO;
WINLDAPAPI ULONG LDAPAPI ldap_startup (
    PLDAP_VERSION_INFO version,
    HANDLE *Instance
    );
typedef struct ldapapiinfoA {
    int ldapai_info_version;
    int ldapai_api_version;
    int ldapai_protocol_version;
    char **ldapai_extensions;
    char *ldapai_vendor_name;
    int ldapai_vendor_version;
} LDAPAPIInfoA;
typedef struct ldapapiinfoW {
    int ldapai_info_version;
    int ldapai_api_version;
    int ldapai_protocol_version;
    PWCHAR *ldapai_extensions;
    PWCHAR ldapai_vendor_name;
    int ldapai_vendor_version;
} LDAPAPIInfoW;
typedef struct ldap_apifeature_infoA {
    int ldapaif_info_version;
    char *ldapaif_name;
    int ldapaif_version;
} LDAPAPIFeatureInfoA;
typedef struct ldap_apifeature_infoW {
    int ldapaif_info_version;
    PWCHAR ldapaif_name;
    int ldapaif_version;
} LDAPAPIFeatureInfoW;
WINLDAPAPI ULONG LDAPAPI ldap_cleanup (
    HANDLE hInstance
    );
WINLDAPAPI ULONG LDAPAPI ldap_escape_filter_elementW (
   _In_reads_bytes_(sourceLength) PCHAR sourceFilterElement,
   ULONG sourceLength,
   _Out_writes_bytes_opt_(destLength) PWCHAR destFilterElement,
   ULONG destLength
   );
WINLDAPAPI ULONG LDAPAPI ldap_escape_filter_elementA (
   _In_reads_bytes_(sourceLength) PCHAR sourceFilterElement,
   ULONG sourceLength,
   _Out_writes_bytes_opt_(destLength) PCHAR destFilterElement,
   ULONG destLength
   );
WINLDAPAPI ULONG LDAPAPI ldap_set_dbg_flags( ULONG NewFlags );
typedef ULONG (_cdecl *DBGPRINT)( PCCH Format, ... );
WINLDAPAPI VOID LDAPAPI ldap_set_dbg_routine( DBGPRINT DebugPrintRoutine );
WINLDAPAPI int LDAPAPI
LdapUTF8ToUnicode(
    _In_reads_(cchSrc) LPCSTR lpSrcStr,
    int cchSrc,
    _Out_writes_(cchDest) LPWSTR lpDestStr,
    int cchDest
    );
WINLDAPAPI
int LDAPAPI
LdapUnicodeToUTF8(
    _In_reads_(cchSrc) LPCWSTR lpSrcStr,
    int cchSrc,
    _Out_writes_(cchDest) LPSTR lpDestStr,
    int cchDest
    );
typedef struct ldapsearch LDAPSearch, *PLDAPSearch;
typedef struct ldapsortkeyW {
    PWCHAR sk_attrtype;
    PWCHAR sk_matchruleoid;
    BOOLEAN sk_reverseorder;
} LDAPSortKeyW, *PLDAPSortKeyW;
typedef struct ldapsortkeyA {
    PCHAR sk_attrtype;
    PCHAR sk_matchruleoid;
    BOOLEAN sk_reverseorder;
} LDAPSortKeyA, *PLDAPSortKeyA;
WINLDAPAPI ULONG LDAPAPI ldap_create_sort_controlA (
        PLDAP ExternalHandle,
        PLDAPSortKeyA *SortKeys,
        UCHAR IsCritical,
        PLDAPControlA *Control
        );
WINLDAPAPI ULONG LDAPAPI ldap_create_sort_controlW (
        PLDAP ExternalHandle,
        PLDAPSortKeyW *SortKeys,
        UCHAR IsCritical,
        PLDAPControlW *Control
        );
WINLDAPAPI ULONG LDAPAPI ldap_parse_sort_controlA (
        PLDAP ExternalHandle,
        PLDAPControlA *Control,
        ULONG *Result,
        _Outptr_opt_result_maybenull_ PCHAR *Attribute
        );
WINLDAPAPI ULONG LDAPAPI ldap_parse_sort_controlW (
        PLDAP ExternalHandle,
        PLDAPControlW *Control,
        ULONG *Result,
        _Outptr_opt_result_maybenull_ PWCHAR *Attribute
        );
WINLDAPAPI ULONG LDAPAPI ldap_encode_sort_controlW (
        PLDAP ExternalHandle,
        PLDAPSortKeyW *SortKeys,
        PLDAPControlW Control,
        BOOLEAN Criticality
        );
WINLDAPAPI ULONG LDAPAPI ldap_encode_sort_controlA (
        PLDAP ExternalHandle,
        PLDAPSortKeyA *SortKeys,
        PLDAPControlA Control,
        BOOLEAN Criticality
        );
WINLDAPAPI ULONG LDAPAPI ldap_create_page_controlW(
        PLDAP ExternalHandle,
        ULONG PageSize,
        struct berval *Cookie,
        UCHAR IsCritical,
        PLDAPControlW *Control
        );
WINLDAPAPI ULONG LDAPAPI ldap_create_page_controlA(
        PLDAP ExternalHandle,
        ULONG PageSize,
        struct berval *Cookie,
        UCHAR IsCritical,
        PLDAPControlA *Control
        );
WINLDAPAPI ULONG LDAPAPI ldap_parse_page_controlW (
        PLDAP ExternalHandle,
        PLDAPControlW *ServerControls,
        ULONG *TotalCount,
        struct berval **Cookie
        );
WINLDAPAPI ULONG LDAPAPI ldap_parse_page_controlA (
        PLDAP ExternalHandle,
        PLDAPControlA *ServerControls,
        ULONG *TotalCount,
        struct berval **Cookie
        );
WINLDAPAPI PLDAPSearch LDAPAPI ldap_search_init_pageW(
        PLDAP ExternalHandle,
        _In_ const PWSTR DistinguishedName,
        ULONG ScopeOfSearch,
        _In_ const PWSTR SearchFilter,
        _In_ PZPWSTR AttributeList,
        ULONG AttributesOnly,
        PLDAPControlW *ServerControls,
        PLDAPControlW *ClientControls,
        ULONG PageTimeLimit,
        ULONG TotalSizeLimit,
        PLDAPSortKeyW *SortKeys
    );
WINLDAPAPI PLDAPSearch LDAPAPI ldap_search_init_pageA(
        PLDAP ExternalHandle,
        _In_ const PSTR DistinguishedName,
        ULONG ScopeOfSearch,
        _In_ const PSTR SearchFilter,
        _In_ PZPSTR AttributeList,
        ULONG AttributesOnly,
        PLDAPControlA *ServerControls,
        PLDAPControlA *ClientControls,
        ULONG PageTimeLimit,
        ULONG TotalSizeLimit,
        PLDAPSortKeyA *SortKeys
    );
WINLDAPAPI ULONG LDAPAPI ldap_get_next_page(
        PLDAP ExternalHandle,
        PLDAPSearch SearchHandle,
        ULONG PageSize,
        ULONG *MessageNumber
    );
WINLDAPAPI ULONG LDAPAPI ldap_get_next_page_s(
        PLDAP ExternalHandle,
        PLDAPSearch SearchHandle,
        struct l_timeval *timeout,
        ULONG PageSize,
        ULONG *TotalCount,
        LDAPMessage **Results
    );
WINLDAPAPI ULONG LDAPAPI ldap_get_paged_count(
        PLDAP ExternalHandle,
        PLDAPSearch SearchBlock,
        ULONG *TotalCount,
        PLDAPMessage Results
    );
WINLDAPAPI ULONG LDAPAPI ldap_search_abandon_page(
        PLDAP ExternalHandle,
        PLDAPSearch SearchBlock
    );
typedef struct ldapvlvinfo {
    int ldvlv_version;
    ULONG ldvlv_before_count;
    ULONG ldvlv_after_count;
    ULONG ldvlv_offset;
    ULONG ldvlv_count;
    PBERVAL ldvlv_attrvalue;
    PBERVAL ldvlv_context;
    VOID *ldvlv_extradata;
} LDAPVLVInfo, *PLDAPVLVInfo;
WINLDAPAPI INT LDAPAPI ldap_create_vlv_controlW (
        PLDAP ExternalHandle,
        PLDAPVLVInfo VlvInfo,
        UCHAR IsCritical,
        PLDAPControlW *Control
    );
WINLDAPAPI INT LDAPAPI ldap_create_vlv_controlA (
        PLDAP ExternalHandle,
        PLDAPVLVInfo VlvInfo,
        UCHAR IsCritical,
        PLDAPControlA *Control
    );
WINLDAPAPI INT LDAPAPI ldap_parse_vlv_controlW (
        PLDAP ExternalHandle,
        PLDAPControlW *Control,
        PULONG TargetPos,
        PULONG ListCount,
        PBERVAL *Context,
        PINT ErrCode
    );
WINLDAPAPI INT LDAPAPI ldap_parse_vlv_controlA (
        PLDAP ExternalHandle,
        PLDAPControlA *Control,
        PULONG TargetPos,
        PULONG ListCount,
        PBERVAL *Context,
        PINT ErrCode
    );
WINLDAPAPI ULONG LDAPAPI ldap_start_tls_sW (
    IN PLDAP ExternalHandle,
    OUT PULONG ServerReturnValue,
    OUT LDAPMessage **result,
    IN PLDAPControlW *ServerControls,
    IN PLDAPControlW *ClientControls
);
WINLDAPAPI ULONG LDAPAPI ldap_start_tls_sA (
    IN PLDAP ExternalHandle,
    OUT PULONG ServerReturnValue,
    OUT LDAPMessage **result,
    IN PLDAPControlA *ServerControls,
    IN PLDAPControlA *ClientControls
);
WINLDAPAPI BOOLEAN LDAPAPI ldap_stop_tls_s (
    IN PLDAP ExternalHandle
 );
WINLDAPAPI LDAPMessage *LDAPAPI ldap_first_reference( LDAP *ld, LDAPMessage *res );
WINLDAPAPI LDAPMessage *LDAPAPI ldap_next_reference( LDAP *ld, LDAPMessage *entry );
WINLDAPAPI ULONG LDAPAPI ldap_count_references( LDAP *ld, LDAPMessage *res );
WINLDAPAPI ULONG LDAPAPI ldap_parse_referenceW (
        LDAP *Connection,
        LDAPMessage *ResultMessage,
        _Outptr_ PWCHAR **Referrals
        );
WINLDAPAPI ULONG LDAPAPI ldap_parse_referenceA (
        LDAP *Connection,
        LDAPMessage *ResultMessage,
        _Outptr_ PCHAR **Referrals
        );
WINLDAPAPI ULONG LDAPAPI ldap_extended_operationW(
        LDAP *ld,
        _In_ const PWSTR Oid,
        struct berval *Data,
        PLDAPControlW *ServerControls,
        PLDAPControlW *ClientControls,
        ULONG *MessageNumber
        );
WINLDAPAPI ULONG LDAPAPI ldap_extended_operationA(
        LDAP *ld,
        _In_ const PSTR Oid,
        struct berval *Data,
        PLDAPControlA *ServerControls,
        PLDAPControlA *ClientControls,
        ULONG *MessageNumber
        );
WINLDAPAPI ULONG LDAPAPI ldap_extended_operation_sA (
        LDAP *ExternalHandle,
        _In_ PSTR Oid,
        struct berval *Data,
        PLDAPControlA *ServerControls,
        PLDAPControlA *ClientControls,
        _Outptr_ PCHAR *ReturnedOid,
        struct berval **ReturnedData
        );
WINLDAPAPI ULONG LDAPAPI ldap_extended_operation_sW (
        LDAP *ExternalHandle,
        _In_ PWSTR Oid,
        struct berval *Data,
        PLDAPControlW *ServerControls,
        PLDAPControlW *ClientControls,
        _Outptr_ PWCHAR *ReturnedOid,
        struct berval **ReturnedData
        );
WINLDAPAPI ULONG LDAPAPI ldap_close_extended_op(
        LDAP *ld,
        ULONG MessageNumber
        );
typedef ULONG (_cdecl QUERYFORCONNECTION)(
    PLDAP PrimaryConnection,
    PLDAP ReferralFromConnection,
    PWCHAR NewDN,
    PCHAR HostName,
    ULONG PortNumber,
    PVOID SecAuthIdentity,
    PVOID CurrentUserToken,
    PLDAP *ConnectionToUse
    );
typedef BOOLEAN (_cdecl NOTIFYOFNEWCONNECTION) (
    PLDAP PrimaryConnection,
    PLDAP ReferralFromConnection,
    PWCHAR NewDN,
    PCHAR HostName,
    PLDAP NewConnection,
    ULONG PortNumber,
    PVOID SecAuthIdentity,
    PVOID CurrentUser,
    ULONG ErrorCodeFromBind
    );
typedef ULONG (_cdecl DEREFERENCECONNECTION)(
    PLDAP PrimaryConnection,
    PLDAP ConnectionToDereference
    );
typedef struct LdapReferralCallback {
    ULONG SizeOfCallbacks;
    QUERYFORCONNECTION *QueryForConnection;
    NOTIFYOFNEWCONNECTION *NotifyRoutine;
    DEREFERENCECONNECTION *DereferenceRoutine;
} LDAP_REFERRAL_CALLBACK, *PLDAP_REFERRAL_CALLBACK;
WINLDAPAPI ULONG LDAPAPI LdapGetLastError( VOID );
WINLDAPAPI ULONG LDAPAPI LdapMapErrorToWin32( ULONG LdapError );
typedef BOOLEAN (_cdecl QUERYCLIENTCERT) (
    IN PLDAP Connection,
    IN PSecPkgContext_IssuerListInfoEx trusted_CAs,
    IN OUT PCCERT_CONTEXT *ppCertificate
    );
typedef BOOLEAN (_cdecl VERIFYSERVERCERT) (
     PLDAP Connection,
     PCCERT_CONTEXT* pServerCert
     );
WINLDAPAPI LDAP * LDAPAPI ldap_conn_from_msg (
    LDAP *PrimaryConn,
    LDAPMessage *res
    );
}
#endif
#pragma endregion

#include <winapifamily.h>
#pragma region Desktop Family or WinMgmt Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_WINMGMT)
#include <schedule.h>
#include <dsparse.h>
extern "C" {
typedef GUID UUID;
typedef void * RPC_AUTH_IDENTITY_HANDLE;
typedef void VOID;
           (MAKELCID(MAKELANGID(LANG_ENGLISH, SUBLANG_ENGLISH_US), \
                     SORT_DEFAULT))
                                            NORM_IGNOREKANATYPE | \
                                            NORM_IGNORENONSPACE | \
                                            NORM_IGNOREWIDTH | \
                                            SORT_STRINGSORT )
                                  (ACTRL_DS_LIST) | \
                                  (ACTRL_DS_READ_PROP) | \
                                  (ACTRL_DS_LIST_OBJECT))
                                  (ACTRL_DS_LIST))
                                  (ACTRL_DS_SELF) | \
                                  (ACTRL_DS_WRITE_PROP))
                                  (ACTRL_DS_CREATE_CHILD) | \
                                  (ACTRL_DS_DELETE_CHILD) | \
                                  (ACTRL_DS_DELETE_TREE) | \
                                  (ACTRL_DS_READ_PROP) | \
                                  (ACTRL_DS_WRITE_PROP) | \
                                  (ACTRL_DS_LIST) | \
                                  (ACTRL_DS_LIST_OBJECT) | \
                                  (ACTRL_DS_CONTROL_ACCESS) | \
                                  (ACTRL_DS_SELF))
typedef enum
{
    DS_UNKNOWN_NAME = 0,
    DS_FQDN_1779_NAME = 1,
    DS_NT4_ACCOUNT_NAME = 2,
    DS_DISPLAY_NAME = 3,
    DS_UNIQUE_ID_NAME = 6,
    DS_CANONICAL_NAME = 7,
    DS_USER_PRINCIPAL_NAME = 8,
    DS_CANONICAL_NAME_EX = 9,
    DS_SERVICE_PRINCIPAL_NAME = 10,
    DS_SID_OR_SID_HISTORY_NAME = 11,
    DS_DNS_DOMAIN_NAME = 12
} DS_NAME_FORMAT;
typedef enum
{
    DS_NAME_NO_FLAGS = 0x0,
    DS_NAME_FLAG_SYNTACTICAL_ONLY = 0x1,
    DS_NAME_FLAG_EVAL_AT_DC = 0x2,
    DS_NAME_FLAG_GCVERIFY = 0x4,
    DS_NAME_FLAG_TRUST_REFERRAL = 0x8
} DS_NAME_FLAGS;
typedef enum
{
    DS_NAME_NO_ERROR = 0,
    DS_NAME_ERROR_RESOLVING = 1,
    DS_NAME_ERROR_NOT_FOUND = 2,
    DS_NAME_ERROR_NOT_UNIQUE = 3,
    DS_NAME_ERROR_NO_MAPPING = 4,
    DS_NAME_ERROR_DOMAIN_ONLY = 5,
    DS_NAME_ERROR_NO_SYNTACTICAL_MAPPING = 6,
    DS_NAME_ERROR_TRUST_REFERRAL = 7
} DS_NAME_ERROR;
typedef enum {
    DS_SPN_DNS_HOST = 0,
    DS_SPN_DN_HOST = 1,
    DS_SPN_NB_HOST = 2,
    DS_SPN_DOMAIN = 3,
    DS_SPN_NB_DOMAIN = 4,
    DS_SPN_SERVICE = 5
} DS_SPN_NAME_TYPE;
typedef enum {
        DS_SPN_ADD_SPN_OP = 0,
        DS_SPN_REPLACE_SPN_OP = 1,
        DS_SPN_DELETE_SPN_OP = 2
} DS_SPN_WRITE_OP;
typedef struct
{
    DWORD status;
    [string,unique] CHAR *pDomain;
    [string,unique] CHAR *pName;
} DS_NAME_RESULT_ITEMA, *PDS_NAME_RESULT_ITEMA;
typedef struct
{
    DWORD cItems;
    [size_is(cItems)] PDS_NAME_RESULT_ITEMA rItems;
} DS_NAME_RESULTA, *PDS_NAME_RESULTA;
typedef struct
{
    DWORD status;
    [string,unique] WCHAR *pDomain;
    [string,unique] WCHAR *pName;
} DS_NAME_RESULT_ITEMW, *PDS_NAME_RESULT_ITEMW;
typedef struct
{
    DWORD cItems;
    [size_is(cItems)] PDS_NAME_RESULT_ITEMW rItems;
} DS_NAME_RESULTW, *PDS_NAME_RESULTW;
        (((_options_) & NTDSCONN_OPT_IGNORE_SCHEDULE_MASK) >> 31)
        (((((_options_) & FRSCONN_PRIORITY_MASK) >> 28) != 0 ) ? \
         (((_options_) & FRSCONN_PRIORITY_MASK) >> 28) : \
         FRSCONN_MAX_PRIORITY \
        )
_Check_return_
NTDSAPI
DWORD
WINAPI
DsBindW(
    _In_opt_ LPCWSTR DomainControllerName,
    _In_opt_ LPCWSTR DnsDomainName,
    _Out_ HANDLE *phDS);
_Check_return_
NTDSAPI
DWORD
WINAPI
DsBindA(
    _In_opt_ LPCSTR DomainControllerName,
    _In_opt_ LPCSTR DnsDomainName,
    _Out_ HANDLE *phDS);
_Check_return_
NTDSAPI
DWORD
WINAPI
DsBindWithCredW(
    _In_opt_ LPCWSTR DomainControllerName,
    _In_opt_ LPCWSTR DnsDomainName,
    _In_opt_ RPC_AUTH_IDENTITY_HANDLE AuthIdentity,
    _Out_ HANDLE *phDS);
_Check_return_
NTDSAPI
DWORD
WINAPI
DsBindWithCredA(
    _In_opt_ LPCSTR DomainControllerName,
    _In_opt_ LPCSTR DnsDomainName,
    _In_opt_ RPC_AUTH_IDENTITY_HANDLE AuthIdentity,
    _Out_ HANDLE *phDS);
_Check_return_
NTDSAPI
DWORD
WINAPI
DsBindWithSpnW(
    _In_opt_ LPCWSTR DomainControllerName,
    _In_opt_ LPCWSTR DnsDomainName,
    _In_opt_ RPC_AUTH_IDENTITY_HANDLE AuthIdentity,
    _In_opt_ LPCWSTR ServicePrincipalName,
    _Out_ HANDLE *phDS);
_Check_return_
NTDSAPI
DWORD
WINAPI
DsBindWithSpnA(
    _In_opt_ LPCSTR DomainControllerName,
    _In_opt_ LPCSTR DnsDomainName,
    _In_opt_ RPC_AUTH_IDENTITY_HANDLE AuthIdentity,
    _In_opt_ LPCSTR ServicePrincipalName,
    _Out_ HANDLE *phDS);
_Check_return_
NTDSAPI_POSTXP
DWORD
WINAPI
DsBindWithSpnExW(
    _In_opt_ LPCWSTR DomainControllerName,
    _In_opt_ LPCWSTR DnsDomainName,
    _In_opt_ RPC_AUTH_IDENTITY_HANDLE AuthIdentity,
    _In_opt_ LPCWSTR ServicePrincipalName,
    _In_opt_ DWORD BindFlags,
    _Out_ HANDLE *phDS);
_Check_return_
NTDSAPI_POSTXP
DWORD
WINAPI
DsBindWithSpnExA(
    _In_opt_ LPCSTR DomainControllerName,
    _In_opt_ LPCSTR DnsDomainName,
    _In_opt_ RPC_AUTH_IDENTITY_HANDLE AuthIdentity,
    _In_opt_ LPCSTR ServicePrincipalName,
    _In_opt_ DWORD BindFlags,
    _Out_ HANDLE *phDS);
_Check_return_
NTDSAPI_POSTXP
DWORD
WINAPI
DsBindByInstanceW(
    _In_opt_ LPCWSTR ServerName,
    _In_opt_ LPCWSTR Annotation,
    _In_opt_ GUID * InstanceGuid,
    _In_opt_ LPCWSTR DnsDomainName,
    _In_opt_ RPC_AUTH_IDENTITY_HANDLE AuthIdentity,
    _In_opt_ LPCWSTR ServicePrincipalName,
    _In_opt_ DWORD BindFlags,
    _Out_ HANDLE *phDS);
_Check_return_
NTDSAPI_POSTXP
DWORD
WINAPI
DsBindByInstanceA(
    _In_opt_ LPCSTR ServerName,
    _In_opt_ LPCSTR Annotation,
    _In_opt_ GUID * InstanceGuid,
    _In_opt_ LPCSTR DnsDomainName,
    _In_opt_ RPC_AUTH_IDENTITY_HANDLE AuthIdentity,
    _In_opt_ LPCSTR ServicePrincipalName,
    _In_opt_ DWORD BindFlags,
    _Out_ HANDLE *phDS);
_Check_return_
NTDSAPI_POSTXP
DWORD
WINAPI
DsBindToISTGW(
    _In_opt_ LPCWSTR SiteName,
    _Out_ HANDLE *phDS);
_Check_return_
NTDSAPI_POSTXP
DWORD
WINAPI
DsBindToISTGA(
    _In_opt_ LPCSTR SiteName,
    _Out_ HANDLE *phDS);
_Check_return_
NTDSAPI_POSTXP
DWORD
WINAPI
DsBindingSetTimeout(
    _In_ HANDLE hDS,
    _In_ ULONG cTimeoutSecs
    );
NTDSAPI
DWORD
WINAPI
DsUnBindW(
    _In_ HANDLE *phDS);
NTDSAPI
DWORD
WINAPI
DsUnBindA(
    _In_ HANDLE *phDS);
_Check_return_
NTDSAPI
DWORD
WINAPI
DsMakePasswordCredentialsW(
    _In_opt_ LPCWSTR User,
    _In_opt_ LPCWSTR Domain,
    _In_opt_ LPCWSTR Password,
    _Out_ RPC_AUTH_IDENTITY_HANDLE *pAuthIdentity
    );
_Check_return_
NTDSAPI
DWORD
WINAPI
DsMakePasswordCredentialsA(
    _In_opt_ LPCSTR User,
    _In_opt_ LPCSTR Domain,
    _In_opt_ LPCSTR Password,
    _Out_ RPC_AUTH_IDENTITY_HANDLE *pAuthIdentity
    );
NTDSAPI
VOID
WINAPI
DsFreePasswordCredentials(
    _In_ RPC_AUTH_IDENTITY_HANDLE AuthIdentity
    );
_Check_return_
NTDSAPI
DWORD
WINAPI
DsCrackNamesW(
    _In_opt_ HANDLE hDS,
    _In_ DS_NAME_FLAGS flags,
    _In_ DS_NAME_FORMAT formatOffered,
    _In_ DS_NAME_FORMAT formatDesired,
    _In_ DWORD cNames,
    _In_reads_(cNames) const LPCWSTR *rpNames,
    _Outptr_ PDS_NAME_RESULTW *ppResult);
_Check_return_
NTDSAPI
DWORD
WINAPI
DsCrackNamesA(
    _In_opt_ HANDLE hDS,
    _In_ DS_NAME_FLAGS flags,
    _In_ DS_NAME_FORMAT formatOffered,
    _In_ DS_NAME_FORMAT formatDesired,
    _In_ DWORD cNames,
    _In_reads_(cNames) const LPCSTR *rpNames,
    _Outptr_ PDS_NAME_RESULTA *ppResult);
NTDSAPI
void
WINAPI
DsFreeNameResultW(
    _In_ DS_NAME_RESULTW *pResult);
NTDSAPI
void
WINAPI
DsFreeNameResultA(
    _In_ DS_NAME_RESULTA *pResult);
_Check_return_
NTDSAPI
DWORD
WINAPI
DsGetSpnA(
    _In_ DS_SPN_NAME_TYPE ServiceType,
    _In_ LPCSTR ServiceClass,
    _In_opt_ LPCSTR ServiceName,
    _In_ USHORT InstancePort,
    _In_ USHORT cInstanceNames,
    _In_reads_opt_(cInstanceNames) LPCSTR *pInstanceNames,
    _In_reads_opt_(cInstanceNames) const USHORT *pInstancePorts,
    _Out_ DWORD *pcSpn,
    _Outptr_result_buffer_ (*pcSpn) LPSTR **prpszSpn
    );
_Check_return_
NTDSAPI
DWORD
WINAPI
DsGetSpnW(
    _In_ DS_SPN_NAME_TYPE ServiceType,
    _In_ LPCWSTR ServiceClass,
    _In_opt_ LPCWSTR ServiceName,
    _In_ USHORT InstancePort,
    _In_ USHORT cInstanceNames,
    _In_reads_opt_(cInstanceNames) LPCWSTR *pInstanceNames,
    _In_reads_opt_(cInstanceNames) const USHORT *pInstancePorts,
    _Out_ DWORD *pcSpn,
    _Outptr_result_buffer_(*pcSpn) LPWSTR **prpszSpn
    );
NTDSAPI
void
WINAPI
DsFreeSpnArrayA(
    _In_ DWORD cSpn,
    _Inout_updates_to_(cSpn, 0) LPSTR *rpszSpn
    );
NTDSAPI
void
WINAPI
DsFreeSpnArrayW(
    _In_ DWORD cSpn,
    _Inout_updates_to_(cSpn, 0) LPWSTR *rpszSpn
    );
_Check_return_
NTDSAPI
DWORD
WINAPI
DsWriteAccountSpnA(
    _In_ HANDLE hDS,
    _In_ DS_SPN_WRITE_OP Operation,
    _In_ LPCSTR pszAccount,
    _In_ DWORD cSpn,
    _In_reads_(cSpn) LPCSTR *rpszSpn
    );
_Check_return_
NTDSAPI
DWORD
WINAPI
DsWriteAccountSpnW(
    _In_ HANDLE hDS,
    _In_ DS_SPN_WRITE_OP Operation,
    _In_ LPCWSTR pszAccount,
    _In_ DWORD cSpn,
    _In_reads_(cSpn) LPCWSTR *rpszSpn
    );
_Check_return_
NTDSAPI
DWORD
WINAPI
DsClientMakeSpnForTargetServerW(
    _In_ LPCWSTR ServiceClass,
    _In_ LPCWSTR ServiceName,
    _Inout_ DWORD *pcSpnLength,
    _Out_writes_to_ (*pcSpnLength, *pcSpnLength) LPWSTR pszSpn
    );
_Check_return_
NTDSAPI
DWORD
WINAPI
DsClientMakeSpnForTargetServerA(
    _In_ LPCSTR ServiceClass,
    _In_ LPCSTR ServiceName,
    _Inout_ DWORD *pcSpnLength,
    _Out_writes_to_(*pcSpnLength, *pcSpnLength) LPSTR pszSpn
    );
_Check_return_
NTDSAPI
DWORD
WINAPI
DsServerRegisterSpnA(
    DS_SPN_WRITE_OP Operation,
    _In_ LPCSTR ServiceClass,
    _In_opt_ LPCSTR UserObjectDN
    );
_Check_return_
NTDSAPI
DWORD
WINAPI
DsServerRegisterSpnW(
    DS_SPN_WRITE_OP Operation,
    _In_ LPCWSTR ServiceClass,
    _In_opt_ LPCWSTR UserObjectDN
    );
_Check_return_
NTDSAPI
DWORD
WINAPI
DsReplicaSyncA(
    _In_ HANDLE hDS,
    _In_ LPCSTR NameContext,
    _In_ const UUID *pUuidDsaSrc,
    ULONG Options
    );
_Check_return_
NTDSAPI
DWORD
WINAPI
DsReplicaSyncW(
    _In_ HANDLE hDS,
    _In_ LPCWSTR NameContext,
    _In_ const UUID *pUuidDsaSrc,
    ULONG Options
    );
_Check_return_
NTDSAPI
DWORD
WINAPI
DsReplicaAddA(
    _In_ HANDLE hDS,
    _In_ LPCSTR NameContext,
    _In_ LPCSTR SourceDsaDn,
    _In_ LPCSTR TransportDn,
    _In_ LPCSTR SourceDsaAddress,
    _In_opt_ const PSCHEDULE pSchedule,
    DWORD Options
    );
_Check_return_
NTDSAPI
DWORD
WINAPI
DsReplicaAddW(
    _In_ HANDLE hDS,
    _In_ LPCWSTR NameContext,
    _In_ LPCWSTR SourceDsaDn,
    _In_ LPCWSTR TransportDn,
    _In_ LPCWSTR SourceDsaAddress,
    _In_opt_ const PSCHEDULE pSchedule,
    DWORD Options
    );
_Check_return_
NTDSAPI
DWORD
WINAPI
DsReplicaDelA(
    _In_ HANDLE hDS,
    _In_ LPCSTR NameContext,
    _In_ LPCSTR DsaSrc,
    ULONG Options
    );
_Check_return_
NTDSAPI
DWORD
WINAPI
DsReplicaDelW(
    _In_ HANDLE hDS,
    _In_ LPCWSTR NameContext,
    _In_ LPCWSTR DsaSrc,
    ULONG Options
    );
_Check_return_
NTDSAPI
DWORD
WINAPI
DsReplicaModifyA(
    _In_ HANDLE hDS,
    _In_ LPCSTR NameContext,
    _In_opt_ const UUID *pUuidSourceDsa,
    _Reserved_ LPCSTR TransportDn,
    _In_ LPCSTR SourceDsaAddress,
    _In_opt_ const PSCHEDULE pSchedule,
    _Reserved_ DWORD ReplicaFlags,
    DWORD ModifyFields,
    DWORD Options
    );
_Check_return_
NTDSAPI
DWORD
WINAPI
DsReplicaModifyW(
    _In_ HANDLE hDS,
    _In_ LPCWSTR NameContext,
    _In_opt_ const UUID *pUuidSourceDsa,
    _Reserved_ LPCWSTR TransportDn,
    _In_ LPCWSTR SourceDsaAddress,
    _In_opt_ const PSCHEDULE pSchedule,
    DWORD ReplicaFlags,
    DWORD ModifyFields,
    DWORD Options
    );
_Check_return_
NTDSAPI
DWORD
WINAPI
DsReplicaUpdateRefsA(
    _In_ HANDLE hDS,
    _In_ LPCSTR NameContext,
    _In_ LPCSTR DsaDest,
    _In_ const UUID *pUuidDsaDest,
    ULONG Options
    );
_Check_return_
NTDSAPI
DWORD
WINAPI
DsReplicaUpdateRefsW(
    _In_ HANDLE hDS,
    _In_ LPCWSTR NameContext,
    _In_ LPCWSTR DsaDest,
    _In_ const UUID *pUuidDsaDest,
    ULONG Options
    );
typedef enum {
    DS_REPSYNCALL_WIN32_ERROR_CONTACTING_SERVER = 0,
    DS_REPSYNCALL_WIN32_ERROR_REPLICATING = 1,
    DS_REPSYNCALL_SERVER_UNREACHABLE = 2
} DS_REPSYNCALL_ERROR;
typedef enum {
    DS_REPSYNCALL_EVENT_ERROR = 0,
    DS_REPSYNCALL_EVENT_SYNC_STARTED = 1,
    DS_REPSYNCALL_EVENT_SYNC_COMPLETED = 2,
    DS_REPSYNCALL_EVENT_FINISHED = 3
} DS_REPSYNCALL_EVENT;
typedef struct {
    LPSTR pszSrcId;
    LPSTR pszDstId;
    LPSTR pszNC;
    GUID * pguidSrc;
    GUID * pguidDst;
} DS_REPSYNCALL_SYNCA, * PDS_REPSYNCALL_SYNCA;
typedef struct {
    LPWSTR pszSrcId;
    LPWSTR pszDstId;
    LPWSTR pszNC;
    GUID * pguidSrc;
    GUID * pguidDst;
} DS_REPSYNCALL_SYNCW, * PDS_REPSYNCALL_SYNCW;
typedef struct {
    LPSTR pszSvrId;
    DS_REPSYNCALL_ERROR error;
    DWORD dwWin32Err;
    LPSTR pszSrcId;
} DS_REPSYNCALL_ERRINFOA, * PDS_REPSYNCALL_ERRINFOA;
typedef struct {
    LPWSTR pszSvrId;
    DS_REPSYNCALL_ERROR error;
    DWORD dwWin32Err;
    LPWSTR pszSrcId;
} DS_REPSYNCALL_ERRINFOW, * PDS_REPSYNCALL_ERRINFOW;
typedef struct {
    DS_REPSYNCALL_EVENT event;
    DS_REPSYNCALL_ERRINFOA * pErrInfo;
    DS_REPSYNCALL_SYNCA * pSync;
} DS_REPSYNCALL_UPDATEA, * PDS_REPSYNCALL_UPDATEA;
typedef struct {
    DS_REPSYNCALL_EVENT event;
    DS_REPSYNCALL_ERRINFOW * pErrInfo;
    DS_REPSYNCALL_SYNCW * pSync;
} DS_REPSYNCALL_UPDATEW, * PDS_REPSYNCALL_UPDATEW;
_Check_return_
NTDSAPI
DWORD
WINAPI
DsReplicaSyncAllA (
    _In_ HANDLE hDS,
    _In_ LPCSTR pszNameContext,
    ULONG ulFlags,
    __callback BOOL (__stdcall * pFnCallBack) (LPVOID, PDS_REPSYNCALL_UPDATEA),
    _In_opt_ LPVOID pCallbackData,
    _Outptr_result_maybenull_z_ PDS_REPSYNCALL_ERRINFOA ** pErrors
    );
_Check_return_
NTDSAPI
DWORD
WINAPI
DsReplicaSyncAllW (
    _In_ HANDLE hDS,
    _In_ LPCWSTR pszNameContext,
    ULONG ulFlags,
    __callback BOOL (__stdcall * pFnCallBack) (LPVOID, PDS_REPSYNCALL_UPDATEW),
    _In_opt_ LPVOID pCallbackData,
    _Outptr_result_maybenull_z_ PDS_REPSYNCALL_ERRINFOW ** pErrors
    );
_Check_return_
NTDSAPI
DWORD
WINAPI
DsRemoveDsServerW(
    _In_ HANDLE hDs,
    _In_ LPWSTR ServerDN,
    _In_opt_ LPWSTR DomainDN,
    _Out_opt_ BOOL *fLastDcInDomain,
    BOOL fCommit
    );
_Check_return_
NTDSAPI
DWORD
WINAPI
DsRemoveDsServerA(
    _In_ HANDLE hDs,
    _In_ LPSTR ServerDN,
    _In_opt_ LPSTR DomainDN,
    _Out_opt_ BOOL *fLastDcInDomain,
    BOOL fCommit
    );
_Check_return_
NTDSAPI
DWORD
WINAPI
DsRemoveDsDomainW(
    _In_ HANDLE hDs,
    _In_ LPWSTR DomainDN
    );
_Check_return_
NTDSAPI
DWORD
WINAPI
DsRemoveDsDomainA(
    _In_ HANDLE hDs,
    _In_ LPSTR DomainDN
    );
_Check_return_
NTDSAPI
DWORD
WINAPI
DsListSitesA(
    _In_ HANDLE hDs,
    _Outptr_ PDS_NAME_RESULTA *ppSites);
_Check_return_
NTDSAPI
DWORD
WINAPI
DsListSitesW(
    _In_ HANDLE hDs,
    _Outptr_ PDS_NAME_RESULTW *ppSites);
_Check_return_
NTDSAPI
DWORD
WINAPI
DsListServersInSiteA(
    _In_ HANDLE hDs,
    _In_ LPCSTR site,
    _Outptr_ PDS_NAME_RESULTA *ppServers);
_Check_return_
NTDSAPI
DWORD
WINAPI
DsListServersInSiteW(
    _In_ HANDLE hDs,
    _In_ LPCWSTR site,
    _Outptr_ PDS_NAME_RESULTW *ppServers);
_Check_return_
NTDSAPI
DWORD
WINAPI
DsListDomainsInSiteA(
    _In_ HANDLE hDs,
    _In_ LPCSTR site,
    _Outptr_ PDS_NAME_RESULTA *ppDomains);
_Check_return_
NTDSAPI
DWORD
WINAPI
DsListDomainsInSiteW(
    _In_ HANDLE hDs,
    _In_ LPCWSTR site,
    _Outptr_ PDS_NAME_RESULTW *ppDomains);
_Check_return_
NTDSAPI
DWORD
WINAPI
DsListServersForDomainInSiteA(
    _In_ HANDLE hDs,
    _In_ LPCSTR domain,
    _In_ LPCSTR site,
    _Outptr_ PDS_NAME_RESULTA *ppServers);
_Check_return_
NTDSAPI
DWORD
WINAPI
DsListServersForDomainInSiteW(
    _In_ HANDLE hDs,
    _In_ LPCWSTR domain,
    _In_ LPCWSTR site,
    _Outptr_ PDS_NAME_RESULTW *ppServers);
_Check_return_
NTDSAPI
DWORD
WINAPI
DsListInfoForServerA(
    _In_ HANDLE hDs,
    _In_ LPCSTR server,
    _Outptr_ PDS_NAME_RESULTA *ppInfo);
_Check_return_
NTDSAPI
DWORD
WINAPI
DsListInfoForServerW(
    _In_ HANDLE hDs,
    _In_ LPCWSTR server,
    _Outptr_ PDS_NAME_RESULTW *ppInfo);
_Check_return_
NTDSAPI
DWORD
WINAPI
DsListRolesA(
    _In_ HANDLE hDs,
    _Outptr_ PDS_NAME_RESULTA *ppRoles);
_Check_return_
NTDSAPI
DWORD
WINAPI
DsListRolesW(
    _In_ HANDLE hDs,
    _Outptr_ PDS_NAME_RESULTW *ppRoles);
typedef struct {
    DWORD errorCode;
    DWORD cost;
} DS_SITE_COST_INFO, *PDS_SITE_COST_INFO;
_Check_return_
NTDSAPI_POSTXP
DWORD
WINAPI
DsQuerySitesByCostW(
    _In_ HANDLE hDS,
    _In_ LPWSTR pwszFromSite,
    _In_reads_ (cToSites) LPWSTR *rgwszToSites,
    _In_ DWORD cToSites,
    _Reserved_ DWORD dwFlags,
    _Outptr_ PDS_SITE_COST_INFO *prgSiteInfo
    );
_Check_return_
NTDSAPI_POSTXP
DWORD
WINAPI
DsQuerySitesByCostA(
    _In_ HANDLE hDS,
    _In_ LPSTR pszFromSite,
    _In_reads_ (cToSites) LPSTR *rgszToSites,
    DWORD cToSites,
    _Reserved_ DWORD dwFlags,
    _Outptr_ PDS_SITE_COST_INFO *prgSiteInfo
    );
VOID
WINAPI
DsQuerySitesFree(
    _In_ PDS_SITE_COST_INFO rgSiteInfo
    );
typedef struct
{
    GUID guid;
    DWORD guidType;
    [string,unique] CHAR *pName;
} DS_SCHEMA_GUID_MAPA, *PDS_SCHEMA_GUID_MAPA;
typedef struct
{
    GUID guid;
    DWORD guidType;
    [string,unique] WCHAR *pName;
} DS_SCHEMA_GUID_MAPW, *PDS_SCHEMA_GUID_MAPW;
_Check_return_
NTDSAPI
DWORD
WINAPI
DsMapSchemaGuidsA(
    _In_ HANDLE hDs,
    DWORD cGuids,
    _In_reads_(cGuids) GUID *rGuids,
    _Outptr_ DS_SCHEMA_GUID_MAPA **ppGuidMap);
NTDSAPI
VOID
WINAPI
DsFreeSchemaGuidMapA(
    _In_ PDS_SCHEMA_GUID_MAPA pGuidMap);
_Check_return_
NTDSAPI
DWORD
WINAPI
DsMapSchemaGuidsW(
    _In_ HANDLE hDs,
    DWORD cGuids,
    _In_reads_(cGuids) GUID *rGuids,
    _Outptr_ DS_SCHEMA_GUID_MAPW **ppGuidMap);
NTDSAPI
VOID
WINAPI
DsFreeSchemaGuidMapW(
    _In_ PDS_SCHEMA_GUID_MAPW pGuidMap);
typedef struct
{
    [string,unique] CHAR *NetbiosName;
    [string,unique] CHAR *DnsHostName;
    [string,unique] CHAR *SiteName;
    [string,unique] CHAR *ComputerObjectName;
    [string,unique] CHAR *ServerObjectName;
    BOOL fIsPdc;
    BOOL fDsEnabled;
} DS_DOMAIN_CONTROLLER_INFO_1A, *PDS_DOMAIN_CONTROLLER_INFO_1A;
typedef struct
{
    [string,unique] WCHAR *NetbiosName;
    [string,unique] WCHAR *DnsHostName;
    [string,unique] WCHAR *SiteName;
    [string,unique] WCHAR *ComputerObjectName;
    [string,unique] WCHAR *ServerObjectName;
    BOOL fIsPdc;
    BOOL fDsEnabled;
} DS_DOMAIN_CONTROLLER_INFO_1W, *PDS_DOMAIN_CONTROLLER_INFO_1W;
typedef struct
{
    [string,unique] CHAR *NetbiosName;
    [string,unique] CHAR *DnsHostName;
    [string,unique] CHAR *SiteName;
    [string,unique] CHAR *SiteObjectName;
    [string,unique] CHAR *ComputerObjectName;
    [string,unique] CHAR *ServerObjectName;
    [string,unique] CHAR *NtdsDsaObjectName;
    BOOL fIsPdc;
    BOOL fDsEnabled;
    BOOL fIsGc;
    GUID SiteObjectGuid;
    GUID ComputerObjectGuid;
    GUID ServerObjectGuid;
    GUID NtdsDsaObjectGuid;
} DS_DOMAIN_CONTROLLER_INFO_2A, *PDS_DOMAIN_CONTROLLER_INFO_2A;
typedef struct
{
    [string,unique] WCHAR *NetbiosName;
    [string,unique] WCHAR *DnsHostName;
    [string,unique] WCHAR *SiteName;
    [string,unique] WCHAR *SiteObjectName;
    [string,unique] WCHAR *ComputerObjectName;
    [string,unique] WCHAR *ServerObjectName;
    [string,unique] WCHAR *NtdsDsaObjectName;
    BOOL fIsPdc;
    BOOL fDsEnabled;
    BOOL fIsGc;
    GUID SiteObjectGuid;
    GUID ComputerObjectGuid;
    GUID ServerObjectGuid;
    GUID NtdsDsaObjectGuid;
} DS_DOMAIN_CONTROLLER_INFO_2W, *PDS_DOMAIN_CONTROLLER_INFO_2W;
typedef struct
{
    [string,unique] CHAR *NetbiosName;
    [string,unique] CHAR *DnsHostName;
    [string,unique] CHAR *SiteName;
    [string,unique] CHAR *SiteObjectName;
    [string,unique] CHAR *ComputerObjectName;
    [string,unique] CHAR *ServerObjectName;
    [string,unique] CHAR *NtdsDsaObjectName;
    BOOL fIsPdc;
    BOOL fDsEnabled;
    BOOL fIsGc;
    BOOL fIsRodc;
    GUID SiteObjectGuid;
    GUID ComputerObjectGuid;
    GUID ServerObjectGuid;
    GUID NtdsDsaObjectGuid;
} DS_DOMAIN_CONTROLLER_INFO_3A, *PDS_DOMAIN_CONTROLLER_INFO_3A;
typedef struct
{
    [string,unique] WCHAR *NetbiosName;
    [string,unique] WCHAR *DnsHostName;
    [string,unique] WCHAR *SiteName;
    [string,unique] WCHAR *SiteObjectName;
    [string,unique] WCHAR *ComputerObjectName;
    [string,unique] WCHAR *ServerObjectName;
    [string,unique] WCHAR *NtdsDsaObjectName;
    BOOL fIsPdc;
    BOOL fDsEnabled;
    BOOL fIsGc;
    BOOL fIsRodc;
    GUID SiteObjectGuid;
    GUID ComputerObjectGuid;
    GUID ServerObjectGuid;
    GUID NtdsDsaObjectGuid;
} DS_DOMAIN_CONTROLLER_INFO_3W, *PDS_DOMAIN_CONTROLLER_INFO_3W;
_Check_return_
_When_(InfoLevel == 1, _At_(ppInfo, _Outptr_result_bytebuffer_(*pcOut * sizeof(DS_DOMAIN_CONTROLLER_INFO_1A))))
_When_(InfoLevel == 2, _At_(ppInfo, _Outptr_result_bytebuffer_(*pcOut * sizeof(DS_DOMAIN_CONTROLLER_INFO_2A))))
_When_(InfoLevel == 3, _At_(ppInfo, _Outptr_result_bytebuffer_(*pcOut * sizeof(DS_DOMAIN_CONTROLLER_INFO_3A))))
NTDSAPI
DWORD
WINAPI
DsGetDomainControllerInfoA(
    _In_ HANDLE hDs,
    _In_ LPCSTR DomainName,
    _In_ DWORD InfoLevel,
    _Out_ DWORD *pcOut,
    _Outptr_ VOID **ppInfo);
_Check_return_
_When_(InfoLevel == 1, _At_(ppInfo, _Outptr_result_bytebuffer_(*pcOut * sizeof(DS_DOMAIN_CONTROLLER_INFO_1W))))
_When_(InfoLevel == 2, _At_(ppInfo, _Outptr_result_bytebuffer_(*pcOut * sizeof(DS_DOMAIN_CONTROLLER_INFO_2W))))
_When_(InfoLevel == 3, _At_(ppInfo, _Outptr_result_bytebuffer_(*pcOut * sizeof(DS_DOMAIN_CONTROLLER_INFO_3W))))
NTDSAPI
DWORD
WINAPI
DsGetDomainControllerInfoW(
    _In_ HANDLE hDs,
    _In_ LPCWSTR DomainName,
    _In_ DWORD InfoLevel,
    _Out_ DWORD *pcOut,
    _Outptr_ VOID **ppInfo);
NTDSAPI
VOID
WINAPI
DsFreeDomainControllerInfoA(
    DWORD InfoLevel,
    DWORD cInfo,
    _In_reads_(cInfo) VOID *pInfo);
NTDSAPI
VOID
WINAPI
DsFreeDomainControllerInfoW(
    DWORD InfoLevel,
    DWORD cInfo,
    _In_reads_(cInfo) VOID *pInfo);
typedef enum {
    DS_KCC_TASKID_UPDATE_TOPOLOGY = 0
} DS_KCC_TASKID;
_Check_return_
NTDSAPI
DWORD
WINAPI
DsReplicaConsistencyCheck(
    _In_ HANDLE hDS,
    DS_KCC_TASKID TaskID,
    DWORD dwFlags);
_Check_return_
NTDSAPI
DWORD
WINAPI
DsReplicaVerifyObjectsW(
    _In_ HANDLE hDS,
    _In_ LPCWSTR NameContext,
    _In_ const UUID * pUuidDsaSrc,
    ULONG ulOptions);
_Check_return_
NTDSAPI
DWORD
WINAPI
DsReplicaVerifyObjectsA(
    _In_ HANDLE hDS,
    _In_ LPCSTR NameContext,
    _In_ const UUID * pUuidDsaSrc,
    ULONG ulOptions);
typedef enum _DS_REPL_INFO_TYPE {
    DS_REPL_INFO_NEIGHBORS = 0,
    DS_REPL_INFO_CURSORS_FOR_NC = 1,
    DS_REPL_INFO_METADATA_FOR_OBJ = 2,
    DS_REPL_INFO_KCC_DSA_CONNECT_FAILURES = 3,
    DS_REPL_INFO_KCC_DSA_LINK_FAILURES = 4,
    DS_REPL_INFO_PENDING_OPS = 5,
    DS_REPL_INFO_METADATA_FOR_ATTR_VALUE = 6,
    DS_REPL_INFO_CURSORS_2_FOR_NC = 7,
    DS_REPL_INFO_CURSORS_3_FOR_NC = 8,
    DS_REPL_INFO_METADATA_2_FOR_OBJ = 9,
    DS_REPL_INFO_METADATA_2_FOR_ATTR_VALUE = 10,
    DS_REPL_INFO_METADATA_EXT_FOR_ATTR_VALUE = 11,
    DS_REPL_INFO_TYPE_MAX
} DS_REPL_INFO_TYPE;
        ( \
        DS_REPL_NBR_SYNC_ON_STARTUP | \
        DS_REPL_NBR_DO_SCHEDULED_SYNCS | \
        DS_REPL_NBR_TWO_WAY_SYNC | \
        DS_REPL_NBR_IGNORE_CHANGE_NOTIFICATIONS | \
        DS_REPL_NBR_DISABLE_SCHEDULED_SYNC | \
        DS_REPL_NBR_COMPRESS_CHANGES | \
        DS_REPL_NBR_NO_CHANGE_NOTIFICATIONS \
        )
typedef struct _DS_REPL_NEIGHBORW {
    LPWSTR pszNamingContext;
    LPWSTR pszSourceDsaDN;
    LPWSTR pszSourceDsaAddress;
    LPWSTR pszAsyncIntersiteTransportDN;
    DWORD dwReplicaFlags;
    DWORD dwReserved;
    UUID uuidNamingContextObjGuid;
    UUID uuidSourceDsaObjGuid;
    UUID uuidSourceDsaInvocationID;
    UUID uuidAsyncIntersiteTransportObjGuid;
    USN usnLastObjChangeSynced;
    USN usnAttributeFilter;
    FILETIME ftimeLastSyncSuccess;
    FILETIME ftimeLastSyncAttempt;
    DWORD dwLastSyncResult;
    DWORD cNumConsecutiveSyncFailures;
} DS_REPL_NEIGHBORW;
typedef struct _DS_REPL_NEIGHBORW_BLOB {
    DWORD oszNamingContext;
    DWORD oszSourceDsaDN;
    DWORD oszSourceDsaAddress;
    DWORD oszAsyncIntersiteTransportDN;
    DWORD dwReplicaFlags;
    DWORD dwReserved;
    UUID uuidNamingContextObjGuid;
    UUID uuidSourceDsaObjGuid;
    UUID uuidSourceDsaInvocationID;
    UUID uuidAsyncIntersiteTransportObjGuid;
    USN usnLastObjChangeSynced;
    USN usnAttributeFilter;
    FILETIME ftimeLastSyncSuccess;
    FILETIME ftimeLastSyncAttempt;
    DWORD dwLastSyncResult;
    DWORD cNumConsecutiveSyncFailures;
} DS_REPL_NEIGHBORW_BLOB;
typedef struct _DS_REPL_NEIGHBORSW {
    DWORD cNumNeighbors;
    DWORD dwReserved;
    [size_is(cNumNeighbors)] DS_REPL_NEIGHBORW rgNeighbor[];
} DS_REPL_NEIGHBORSW;
typedef struct _DS_REPL_CURSOR {
    UUID uuidSourceDsaInvocationID;
    USN usnAttributeFilter;
} DS_REPL_CURSOR;
typedef struct _DS_REPL_CURSOR_2 {
    UUID uuidSourceDsaInvocationID;
    USN usnAttributeFilter;
    FILETIME ftimeLastSyncSuccess;
} DS_REPL_CURSOR_2;
typedef struct _DS_REPL_CURSOR_3W {
    UUID uuidSourceDsaInvocationID;
    USN usnAttributeFilter;
    FILETIME ftimeLastSyncSuccess;
    LPWSTR pszSourceDsaDN;
} DS_REPL_CURSOR_3W;
typedef struct _DS_REPL_CURSOR_BLOB {
    UUID uuidSourceDsaInvocationID;
    USN usnAttributeFilter;
    FILETIME ftimeLastSyncSuccess;
    DWORD oszSourceDsaDN;
} DS_REPL_CURSOR_BLOB;
typedef struct _DS_REPL_CURSORS {
    DWORD cNumCursors;
    DWORD dwReserved;
    [size_is(cNumCursors)] DS_REPL_CURSOR rgCursor[];
} DS_REPL_CURSORS;
typedef struct _DS_REPL_CURSORS_2 {
    DWORD cNumCursors;
    DWORD dwEnumerationContext;
    [size_is(cNumCursors)] DS_REPL_CURSOR_2 rgCursor[];
} DS_REPL_CURSORS_2;
typedef struct _DS_REPL_CURSORS_3W {
    DWORD cNumCursors;
    DWORD dwEnumerationContext;
    [size_is(cNumCursors)] DS_REPL_CURSOR_3W rgCursor[];
} DS_REPL_CURSORS_3W;
typedef struct _DS_REPL_ATTR_META_DATA {
    LPWSTR pszAttributeName;
    DWORD dwVersion;
    FILETIME ftimeLastOriginatingChange;
    UUID uuidLastOriginatingDsaInvocationID;
    USN usnOriginatingChange;
    USN usnLocalChange;
} DS_REPL_ATTR_META_DATA;
typedef struct _DS_REPL_ATTR_META_DATA_2 {
    LPWSTR pszAttributeName;
    DWORD dwVersion;
    FILETIME ftimeLastOriginatingChange;
    UUID uuidLastOriginatingDsaInvocationID;
    USN usnOriginatingChange;
    USN usnLocalChange;
    LPWSTR pszLastOriginatingDsaDN;
} DS_REPL_ATTR_META_DATA_2;
typedef struct _DS_REPL_ATTR_META_DATA_BLOB {
    DWORD oszAttributeName;
    DWORD dwVersion;
    FILETIME ftimeLastOriginatingChange;
    UUID uuidLastOriginatingDsaInvocationID;
    USN usnOriginatingChange;
    USN usnLocalChange;
    DWORD oszLastOriginatingDsaDN;
} DS_REPL_ATTR_META_DATA_BLOB;
typedef struct _DS_REPL_OBJ_META_DATA {
    DWORD cNumEntries;
    DWORD dwReserved;
    [size_is(cNumEntries)] DS_REPL_ATTR_META_DATA rgMetaData[];
} DS_REPL_OBJ_META_DATA;
typedef struct _DS_REPL_OBJ_META_DATA_2 {
    DWORD cNumEntries;
    DWORD dwReserved;
    [size_is(cNumEntries)] DS_REPL_ATTR_META_DATA_2 rgMetaData[];
} DS_REPL_OBJ_META_DATA_2;
typedef struct _DS_REPL_KCC_DSA_FAILUREW {
    LPWSTR pszDsaDN;
    UUID uuidDsaObjGuid;
    FILETIME ftimeFirstFailure;
    DWORD cNumFailures;
    DWORD dwLastResult;
} DS_REPL_KCC_DSA_FAILUREW;
typedef struct _DS_REPL_KCC_DSA_FAILUREW_BLOB {
    DWORD oszDsaDN;
    UUID uuidDsaObjGuid;
    FILETIME ftimeFirstFailure;
    DWORD cNumFailures;
    DWORD dwLastResult;
} DS_REPL_KCC_DSA_FAILUREW_BLOB;
typedef struct _DS_REPL_KCC_DSA_FAILURESW {
    DWORD cNumEntries;
    DWORD dwReserved;
    [size_is(cNumEntries)] DS_REPL_KCC_DSA_FAILUREW rgDsaFailure[];
} DS_REPL_KCC_DSA_FAILURESW;
typedef enum _DS_REPL_OP_TYPE {
    DS_REPL_OP_TYPE_SYNC = 0,
    DS_REPL_OP_TYPE_ADD,
    DS_REPL_OP_TYPE_DELETE,
    DS_REPL_OP_TYPE_MODIFY,
    DS_REPL_OP_TYPE_UPDATE_REFS
} DS_REPL_OP_TYPE;
typedef struct _DS_REPL_OPW {
    FILETIME ftimeEnqueued;
    ULONG ulSerialNumber;
    ULONG ulPriority;
    DS_REPL_OP_TYPE OpType;
    ULONG ulOptions;
    LPWSTR pszNamingContext;
    LPWSTR pszDsaDN;
    LPWSTR pszDsaAddress;
    UUID uuidNamingContextObjGuid;
    UUID uuidDsaObjGuid;
} DS_REPL_OPW;
typedef struct _DS_REPL_OPW_BLOB {
    FILETIME ftimeEnqueued;
    ULONG ulSerialNumber;
    ULONG ulPriority;
    DS_REPL_OP_TYPE OpType;
    ULONG ulOptions;
    DWORD oszNamingContext;
    DWORD oszDsaDN;
    DWORD oszDsaAddress;
    UUID uuidNamingContextObjGuid;
    UUID uuidDsaObjGuid;
} DS_REPL_OPW_BLOB;
typedef struct _DS_REPL_PENDING_OPSW {
    FILETIME ftimeCurrentOpStarted;
    DWORD cNumPendingOps;
    [size_is(cNumPendingOps)] DS_REPL_OPW rgPendingOp[];
} DS_REPL_PENDING_OPSW;
typedef struct _DS_REPL_VALUE_META_DATA {
    LPWSTR pszAttributeName;
    LPWSTR pszObjectDn;
    DWORD cbData;
    [size_is(cbData), ptr] BYTE *pbData;
    FILETIME ftimeDeleted;
    FILETIME ftimeCreated;
    DWORD dwVersion;
    FILETIME ftimeLastOriginatingChange;
    UUID uuidLastOriginatingDsaInvocationID;
    USN usnOriginatingChange;
    USN usnLocalChange;
} DS_REPL_VALUE_META_DATA;
typedef struct _DS_REPL_VALUE_META_DATA_2 {
    LPWSTR pszAttributeName;
    LPWSTR pszObjectDn;
    DWORD cbData;
    [size_is(cbData), ptr] BYTE *pbData;
    FILETIME ftimeDeleted;
    FILETIME ftimeCreated;
    DWORD dwVersion;
    FILETIME ftimeLastOriginatingChange;
    UUID uuidLastOriginatingDsaInvocationID;
    USN usnOriginatingChange;
    USN usnLocalChange;
    LPWSTR pszLastOriginatingDsaDN;
} DS_REPL_VALUE_META_DATA_2;
typedef struct _DS_REPL_VALUE_META_DATA_EXT {
    LPWSTR pszAttributeName;
    LPWSTR pszObjectDn;
    DWORD cbData;
    [size_is(cbData), ptr] BYTE *pbData;
    FILETIME ftimeDeleted;
    FILETIME ftimeCreated;
    DWORD dwVersion;
    FILETIME ftimeLastOriginatingChange;
    UUID uuidLastOriginatingDsaInvocationID;
    USN usnOriginatingChange;
    USN usnLocalChange;
    LPWSTR pszLastOriginatingDsaDN;
    DWORD dwUserIdentifier;
    DWORD dwPriorLinkState;
    DWORD dwCurrentLinkState;
} DS_REPL_VALUE_META_DATA_EXT;
typedef struct _DS_REPL_VALUE_META_DATA_BLOB {
    DWORD oszAttributeName;
    DWORD oszObjectDn;
    DWORD cbData;
    DWORD obData;
    FILETIME ftimeDeleted;
    FILETIME ftimeCreated;
    DWORD dwVersion;
    FILETIME ftimeLastOriginatingChange;
    UUID uuidLastOriginatingDsaInvocationID;
    USN usnOriginatingChange;
    USN usnLocalChange;
    DWORD oszLastOriginatingDsaDN;
} DS_REPL_VALUE_META_DATA_BLOB;
typedef struct _DS_REPL_VALUE_META_DATA_BLOB_EXT {
    DWORD oszAttributeName;
    DWORD oszObjectDn;
    DWORD cbData;
    DWORD obData;
    FILETIME ftimeDeleted;
    FILETIME ftimeCreated;
    DWORD dwVersion;
    FILETIME ftimeLastOriginatingChange;
    UUID uuidLastOriginatingDsaInvocationID;
    USN usnOriginatingChange;
    USN usnLocalChange;
    DWORD oszLastOriginatingDsaDN;
    DWORD dwUserIdentifier;
    DWORD dwPriorLinkState;
    DWORD dwCurrentLinkState;
} DS_REPL_VALUE_META_DATA_BLOB_EXT;
typedef struct _DS_REPL_ATTR_VALUE_META_DATA {
    DWORD cNumEntries;
    DWORD dwEnumerationContext;
    [size_is(cNumEntries)] DS_REPL_VALUE_META_DATA rgMetaData[];
} DS_REPL_ATTR_VALUE_META_DATA;
typedef struct _DS_REPL_ATTR_VALUE_META_DATA_2 {
    DWORD cNumEntries;
    DWORD dwEnumerationContext;
    [size_is(cNumEntries)] DS_REPL_VALUE_META_DATA_2 rgMetaData[];
} DS_REPL_ATTR_VALUE_META_DATA_2;
typedef struct _DS_REPL_ATTR_VALUE_META_DATA_EXT {
    DWORD cNumEntries;
    DWORD dwEnumerationContext;
    [size_is(cNumEntries)] DS_REPL_VALUE_META_DATA_EXT rgMetaData[];
} DS_REPL_ATTR_VALUE_META_DATA_EXT;
typedef struct _DS_REPL_QUEUE_STATISTICSW
{
    FILETIME ftimeCurrentOpStarted;
    DWORD cNumPendingOps;
    FILETIME ftimeOldestSync;
    FILETIME ftimeOldestAdd;
    FILETIME ftimeOldestMod;
    FILETIME ftimeOldestDel;
    FILETIME ftimeOldestUpdRefs;
} DS_REPL_QUEUE_STATISTICSW;
typedef struct _DS_REPL_QUEUE_STATISTICSW DS_REPL_QUEUE_STATISTICSW_BLOB;
_Check_return_
NTDSAPI
DWORD
WINAPI
DsReplicaGetInfoW(
    _In_ HANDLE hDS,
    DS_REPL_INFO_TYPE InfoType,
    _In_opt_ LPCWSTR pszObject,
    _In_opt_ UUID * puuidForSourceDsaObjGuid,
    _Outptr_ VOID ** ppInfo);
_Check_return_
NTDSAPI
DWORD
WINAPI
DsReplicaGetInfo2W(
    _In_ HANDLE hDS,
    DS_REPL_INFO_TYPE InfoType,
    _In_opt_ LPCWSTR pszObject,
    _In_opt_ UUID * puuidForSourceDsaObjGuid,
    _In_opt_ LPCWSTR pszAttributeName,
    _In_opt_ LPCWSTR pszValue,
    DWORD dwFlags,
    DWORD dwEnumerationContext,
    _Outptr_ VOID ** ppInfo);
NTDSAPI
void
WINAPI
DsReplicaFreeInfo(
    DS_REPL_INFO_TYPE InfoType,
    _In_ VOID * pInfo);
_Check_return_
NTDSAPI
DWORD
WINAPI
DsAddSidHistoryW(
    _In_ HANDLE hDS,
    _Reserved_ DWORD Flags,
    _In_ LPCWSTR SrcDomain,
    _In_ LPCWSTR SrcPrincipal,
    _In_opt_ LPCWSTR SrcDomainController,
    _In_opt_ RPC_AUTH_IDENTITY_HANDLE SrcDomainCreds,
    _In_ LPCWSTR DstDomain,
    _In_ LPCWSTR DstPrincipal);
_Check_return_
NTDSAPI
DWORD
WINAPI
DsAddSidHistoryA(
    _In_ HANDLE hDS,
    _Reserved_ DWORD Flags,
    _In_ LPCSTR SrcDomain,
    _In_ LPCSTR SrcPrincipal,
    _In_opt_ LPCSTR SrcDomainController,
    _In_opt_ RPC_AUTH_IDENTITY_HANDLE SrcDomainCreds,
    _In_ LPCSTR DstDomain,
    _In_ LPCSTR DstPrincipal);
_Check_return_
NTDSAPI
DWORD
WINAPI
DsInheritSecurityIdentityW(
    _In_ HANDLE hDS,
    _Reserved_ DWORD Flags,
    _In_ LPCWSTR SrcPrincipal,
    _In_ LPCWSTR DstPrincipal);
_Check_return_
NTDSAPI
DWORD
WINAPI
DsInheritSecurityIdentityA(
    _In_ HANDLE hDS,
    _Reserved_ DWORD Flags,
    _In_ LPCSTR SrcPrincipal,
    _In_ LPCSTR DstPrincipal);
}
#endif
#pragma endregion

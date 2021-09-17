#include <winapifamily.h>
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
#include <winsvc.h>
extern "C" {
#include <lmcons.h>
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
NET_API_STATUS NET_API_FUNCTION
NetServerEnum (
    _In_opt_ IN LMCSTR servername OPTIONAL,
    _In_ IN DWORD level,
    _Outptr_result_buffer_(_Inexpressible_(entriesread)) OUT LPBYTE *bufptr,
    _In_ IN DWORD prefmaxlen,
    _Out_ OUT LPDWORD entriesread,
    _Out_ OUT LPDWORD totalentries,
    _In_ IN DWORD servertype,
    _In_opt_ IN LMCSTR domain OPTIONAL,
    _Out_opt_ IN OUT LPDWORD resume_handle OPTIONAL
    );
NET_API_STATUS NET_API_FUNCTION
NetServerEnumEx (
    _In_opt_ IN LMCSTR ServerName OPTIONAL,
    _In_ IN DWORD Level,
    _Outptr_result_buffer_(_Inexpressible_(*EntriesRead))
    LPBYTE *Bufptr,
    _In_ IN DWORD PrefMaxlen,
    _Out_ OUT LPDWORD EntriesRead,
    _Out_ OUT LPDWORD totalentries,
    _In_ IN DWORD servertype,
    _In_opt_ IN LMCSTR domain OPTIONAL,
    _In_opt_ IN LMCSTR FirstNameToReturn OPTIONAL
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
_Check_return_
_Success_( return == 0 )
NET_API_STATUS NET_API_FUNCTION
NetServerGetInfo (
    _In_opt_ LMSTR servername,
    _In_ DWORD level,
    _When_( level == 100, _Outptr_result_bytebuffer_(sizeof(SERVER_INFO_100)) )
    _When_( level == 101, _Outptr_result_bytebuffer_(sizeof(SERVER_INFO_101)) )
    _When_( level == 102, _Outptr_result_bytebuffer_(sizeof(SERVER_INFO_102)) )
    LPBYTE *bufptr
    );
_Check_return_
NET_API_STATUS NET_API_FUNCTION
NetServerSetInfo(
    _In_opt_ LMSTR servername,
    _In_ DWORD level,
    _When_( level == 100, _In_reads_bytes_(sizeof(SERVER_INFO_100)) )
    _When_( level == 101, _In_reads_bytes_(sizeof(SERVER_INFO_101)) )
    _When_( level == 102, _In_reads_bytes_(sizeof(SERVER_INFO_102)) )
    _When_( level == 402, _In_reads_bytes_(sizeof(SERVER_INFO_402)) )
    _When_( level == 403, _In_reads_bytes_(sizeof(SERVER_INFO_403)) )
    _When_( level == 1005, _In_reads_bytes_(sizeof(SERVER_INFO_1005)) )
    _When_( level == 1010, _In_reads_bytes_(sizeof(SERVER_INFO_1010)) )
    _When_( level == 1016, _In_reads_bytes_(sizeof(SERVER_INFO_1016)) )
    _When_( level == 1017, _In_reads_bytes_(sizeof(SERVER_INFO_1017)) )
    _When_( level == 1018, _In_reads_bytes_(sizeof(SERVER_INFO_1018)) )
    LPBYTE buf,
    _Out_opt_ LPDWORD ParmError
    );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
NET_API_STATUS
NetServerSetInfoCommandLine (
    _In_ WORD argc,
    _In_reads_(argc) LMSTR argv[]
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
_Check_return_
_Success_( return == 0 || return == ERROR_MORE_DATA )
NET_API_STATUS NET_API_FUNCTION
NetServerDiskEnum (
    _In_opt_ LMSTR servername,
    _In_ DWORD level,
    _Outptr_result_bytebuffer_((sizeof(TCHAR) * 3 * (*entriesread)) + sizeof(TCHAR)) LPBYTE *bufptr,
    _In_ DWORD prefmaxlen,
    _Out_ LPDWORD entriesread,
    _Out_ LPDWORD totalentries,
    _Inout_opt_ LPDWORD resume_handle
    );
_Check_return_
NET_API_STATUS NET_API_FUNCTION
NetServerComputerNameAdd(
    _In_opt_ LMSTR ServerName,
    _In_opt_ LMSTR EmulatedDomainName,
    _In_ LMSTR EmulatedServerName
    );
_Check_return_
NET_API_STATUS NET_API_FUNCTION
NetServerComputerNameDel(
    _In_opt_ LMSTR ServerName,
    _In_ LMSTR EmulatedServerName
    );
_Check_return_
NET_API_STATUS NET_API_FUNCTION
NetServerTransportAdd (
    _In_opt_ LMSTR servername,
    _In_ DWORD level,
    _In_reads_bytes_(sizeof(SERVER_TRANSPORT_INFO_0)) LPBYTE bufptr
    );
_Check_return_
NET_API_STATUS NET_API_FUNCTION
NetServerTransportAddEx(
    _In_opt_ LMSTR servername,
    _In_ DWORD level,
    _When_( level == 0, _In_reads_bytes_(sizeof(SERVER_TRANSPORT_INFO_0)) )
    _When_( level == 1, _In_reads_bytes_(sizeof(SERVER_TRANSPORT_INFO_1)) )
    _When_( level == 2, _In_reads_bytes_(sizeof(SERVER_TRANSPORT_INFO_2)) )
    _When_( level == 3, _In_reads_bytes_(sizeof(SERVER_TRANSPORT_INFO_3)) )
    LPBYTE bufptr
    );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
_Check_return_
NET_API_STATUS NET_API_FUNCTION
NetServerTransportAddForInstance(
    _In_opt_ LMSTR servername,
    _In_ DWORD level,
    _When_( level == 0, _In_reads_bytes_(sizeof(SERVER_TRANSPORT_INFO_0)) )
    _When_( level == 1, _In_reads_bytes_(sizeof(SERVER_TRANSPORT_INFO_1)) )
    _When_( level == 2, _In_reads_bytes_(sizeof(SERVER_TRANSPORT_INFO_2)) )
    _When_( level == 3, _In_reads_bytes_(sizeof(SERVER_TRANSPORT_INFO_3)) )
    LPBYTE bufptr,
    _In_ LPDWORD InstanceHandle
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
_Check_return_
NET_API_STATUS NET_API_FUNCTION
NetServerTransportDel(
    _In_opt_ LMSTR servername,
    _In_ DWORD level,
    _When_( level == 0, _In_reads_bytes_(sizeof(SERVER_TRANSPORT_INFO_0)) )
    _When_( level == 1, _In_reads_bytes_(sizeof(SERVER_TRANSPORT_INFO_1)) )
    LPBYTE bufptr
    );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
_Check_return_
NET_API_STATUS NET_API_FUNCTION
NetServerTransportDelForInstance(
    _In_opt_ LMSTR servername,
    _In_ DWORD level,
    _When_( level == 0, _In_reads_bytes_(sizeof(SERVER_TRANSPORT_INFO_0)) )
    _When_( level == 1, _In_reads_bytes_(sizeof(SERVER_TRANSPORT_INFO_1)) )
    LPBYTE bufptr,
    _In_ LPDWORD InstanceHandle
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
_Check_return_
_Success_( return == 0 || return == ERROR_MORE_DATA )
NET_API_STATUS NET_API_FUNCTION
NetServerTransportEnum (
    _In_opt_ LMSTR servername,
    _In_ DWORD level,
    _When_( level == 0, _Outptr_result_bytebuffer_(*entriesread * sizeof(SERVER_TRANSPORT_INFO_0)) )
    _When_( level == 1, _Outptr_result_bytebuffer_(*entriesread * sizeof(SERVER_TRANSPORT_INFO_1)) )
    _When_( level == 2, _Outptr_result_bytebuffer_(*entriesread * sizeof(SERVER_TRANSPORT_INFO_2)) )
    LPBYTE *bufptr,
    _In_ DWORD prefmaxlen,
    _Out_ LPDWORD entriesread,
    _Out_ LPDWORD totalentries,
    _Inout_opt_ LPDWORD resume_handle
    );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
BOOL NET_API_FUNCTION
SetServiceBits(
    IN SERVICE_STATUS_HANDLE hServiceStatus,
    IN DWORD dwServiceBits,
    IN BOOL bSetBitsOn,
    IN BOOL bUpdateImmediately
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
typedef struct _SERVER_INFO_100 {
    DWORD sv100_platform_id;
    LMSTR sv100_name;
} SERVER_INFO_100, *PSERVER_INFO_100, *LPSERVER_INFO_100;
typedef struct _SERVER_INFO_101 {
    DWORD sv101_platform_id;
    LMSTR sv101_name;
    DWORD sv101_version_major;
    DWORD sv101_version_minor;
    DWORD sv101_type;
    LMSTR sv101_comment;
} SERVER_INFO_101, *PSERVER_INFO_101, *LPSERVER_INFO_101;
typedef struct _SERVER_INFO_102 {
     DWORD sv102_platform_id;
     LMSTR sv102_name;
     DWORD sv102_version_major;
     DWORD sv102_version_minor;
     DWORD sv102_type;
     LMSTR sv102_comment;
     DWORD sv102_users;
     LONG sv102_disc;
     BOOL sv102_hidden;
     DWORD sv102_announce;
     DWORD sv102_anndelta;
     DWORD sv102_licenses;
     LMSTR sv102_userpath;
} SERVER_INFO_102, *PSERVER_INFO_102, *LPSERVER_INFO_102;
typedef struct _SERVER_INFO_103 {
     DWORD sv103_platform_id;
     LMSTR sv103_name;
     DWORD sv103_version_major;
     DWORD sv103_version_minor;
     DWORD sv103_type;
     LMSTR sv103_comment;
     DWORD sv103_users;
     LONG sv103_disc;
     BOOL sv103_hidden;
     DWORD sv103_announce;
     DWORD sv103_anndelta;
     DWORD sv103_licenses;
     LMSTR sv103_userpath;
     DWORD sv103_capabilities;
} SERVER_INFO_103, *PSERVER_INFO_103, *LPSERVER_INFO_103;
typedef struct _SERVER_INFO_402 {
     DWORD sv402_ulist_mtime;
     DWORD sv402_glist_mtime;
     DWORD sv402_alist_mtime;
     LMSTR sv402_alerts;
     DWORD sv402_security;
     DWORD sv402_numadmin;
     DWORD sv402_lanmask;
     LMSTR sv402_guestacct;
     DWORD sv402_chdevs;
     DWORD sv402_chdevq;
     DWORD sv402_chdevjobs;
     DWORD sv402_connections;
     DWORD sv402_shares;
     DWORD sv402_openfiles;
     DWORD sv402_sessopens;
     DWORD sv402_sessvcs;
     DWORD sv402_sessreqs;
     DWORD sv402_opensearch;
     DWORD sv402_activelocks;
     DWORD sv402_numreqbuf;
     DWORD sv402_sizreqbuf;
     DWORD sv402_numbigbuf;
     DWORD sv402_numfiletasks;
     DWORD sv402_alertsched;
     DWORD sv402_erroralert;
     DWORD sv402_logonalert;
     DWORD sv402_accessalert;
     DWORD sv402_diskalert;
     DWORD sv402_netioalert;
     DWORD sv402_maxauditsz;
     LMSTR sv402_srvheuristics;
} SERVER_INFO_402, *PSERVER_INFO_402, *LPSERVER_INFO_402;
typedef struct _SERVER_INFO_403 {
     DWORD sv403_ulist_mtime;
     DWORD sv403_glist_mtime;
     DWORD sv403_alist_mtime;
     LMSTR sv403_alerts;
     DWORD sv403_security;
     DWORD sv403_numadmin;
     DWORD sv403_lanmask;
     LMSTR sv403_guestacct;
     DWORD sv403_chdevs;
     DWORD sv403_chdevq;
     DWORD sv403_chdevjobs;
     DWORD sv403_connections;
     DWORD sv403_shares;
     DWORD sv403_openfiles;
     DWORD sv403_sessopens;
     DWORD sv403_sessvcs;
     DWORD sv403_sessreqs;
     DWORD sv403_opensearch;
     DWORD sv403_activelocks;
     DWORD sv403_numreqbuf;
     DWORD sv403_sizreqbuf;
     DWORD sv403_numbigbuf;
     DWORD sv403_numfiletasks;
     DWORD sv403_alertsched;
     DWORD sv403_erroralert;
     DWORD sv403_logonalert;
     DWORD sv403_accessalert;
     DWORD sv403_diskalert;
     DWORD sv403_netioalert;
     DWORD sv403_maxauditsz;
     LMSTR sv403_srvheuristics;
     DWORD sv403_auditedevents;
     DWORD sv403_autoprofile;
     LMSTR sv403_autopath;
} SERVER_INFO_403, *PSERVER_INFO_403, *LPSERVER_INFO_403;
typedef struct _SERVER_INFO_502 {
    DWORD sv502_sessopens;
    DWORD sv502_sessvcs;
    DWORD sv502_opensearch;
    DWORD sv502_sizreqbuf;
    DWORD sv502_initworkitems;
    DWORD sv502_maxworkitems;
    DWORD sv502_rawworkitems;
    DWORD sv502_irpstacksize;
    DWORD sv502_maxrawbuflen;
    DWORD sv502_sessusers;
    DWORD sv502_sessconns;
    DWORD sv502_maxpagedmemoryusage;
    DWORD sv502_maxnonpagedmemoryusage;
    BOOL sv502_enablesoftcompat;
    BOOL sv502_enableforcedlogoff;
    BOOL sv502_timesource;
    BOOL sv502_acceptdownlevelapis;
    BOOL sv502_lmannounce;
} SERVER_INFO_502, *PSERVER_INFO_502, *LPSERVER_INFO_502;
typedef struct _SERVER_INFO_503 {
    DWORD sv503_sessopens;
    DWORD sv503_sessvcs;
    DWORD sv503_opensearch;
    DWORD sv503_sizreqbuf;
    DWORD sv503_initworkitems;
    DWORD sv503_maxworkitems;
    DWORD sv503_rawworkitems;
    DWORD sv503_irpstacksize;
    DWORD sv503_maxrawbuflen;
    DWORD sv503_sessusers;
    DWORD sv503_sessconns;
    DWORD sv503_maxpagedmemoryusage;
    DWORD sv503_maxnonpagedmemoryusage;
    BOOL sv503_enablesoftcompat;
    BOOL sv503_enableforcedlogoff;
    BOOL sv503_timesource;
    BOOL sv503_acceptdownlevelapis;
    BOOL sv503_lmannounce;
    LMSTR sv503_domain;
    DWORD sv503_maxcopyreadlen;
    DWORD sv503_maxcopywritelen;
    DWORD sv503_minkeepsearch;
    DWORD sv503_maxkeepsearch;
    DWORD sv503_minkeepcomplsearch;
    DWORD sv503_maxkeepcomplsearch;
    DWORD sv503_threadcountadd;
    DWORD sv503_numblockthreads;
    DWORD sv503_scavtimeout;
    DWORD sv503_minrcvqueue;
    DWORD sv503_minfreeworkitems;
    DWORD sv503_xactmemsize;
    DWORD sv503_threadpriority;
    DWORD sv503_maxmpxct;
    DWORD sv503_oplockbreakwait;
    DWORD sv503_oplockbreakresponsewait;
    BOOL sv503_enableoplocks;
    BOOL sv503_enableoplockforceclose;
    BOOL sv503_enablefcbopens;
    BOOL sv503_enableraw;
    BOOL sv503_enablesharednetdrives;
    DWORD sv503_minfreeconnections;
    DWORD sv503_maxfreeconnections;
} SERVER_INFO_503, *PSERVER_INFO_503, *LPSERVER_INFO_503;
typedef struct _SERVER_INFO_599 {
    DWORD sv599_sessopens;
    DWORD sv599_sessvcs;
    DWORD sv599_opensearch;
    DWORD sv599_sizreqbuf;
    DWORD sv599_initworkitems;
    DWORD sv599_maxworkitems;
    DWORD sv599_rawworkitems;
    DWORD sv599_irpstacksize;
    DWORD sv599_maxrawbuflen;
    DWORD sv599_sessusers;
    DWORD sv599_sessconns;
    DWORD sv599_maxpagedmemoryusage;
    DWORD sv599_maxnonpagedmemoryusage;
    BOOL sv599_enablesoftcompat;
    BOOL sv599_enableforcedlogoff;
    BOOL sv599_timesource;
    BOOL sv599_acceptdownlevelapis;
    BOOL sv599_lmannounce;
    LMSTR sv599_domain;
    DWORD sv599_maxcopyreadlen;
    DWORD sv599_maxcopywritelen;
    DWORD sv599_minkeepsearch;
    DWORD sv599_maxkeepsearch;
    DWORD sv599_minkeepcomplsearch;
    DWORD sv599_maxkeepcomplsearch;
    DWORD sv599_threadcountadd;
    DWORD sv599_numblockthreads;
    DWORD sv599_scavtimeout;
    DWORD sv599_minrcvqueue;
    DWORD sv599_minfreeworkitems;
    DWORD sv599_xactmemsize;
    DWORD sv599_threadpriority;
    DWORD sv599_maxmpxct;
    DWORD sv599_oplockbreakwait;
    DWORD sv599_oplockbreakresponsewait;
    BOOL sv599_enableoplocks;
    BOOL sv599_enableoplockforceclose;
    BOOL sv599_enablefcbopens;
    BOOL sv599_enableraw;
    BOOL sv599_enablesharednetdrives;
    DWORD sv599_minfreeconnections;
    DWORD sv599_maxfreeconnections;
    DWORD sv599_initsesstable;
    DWORD sv599_initconntable;
    DWORD sv599_initfiletable;
    DWORD sv599_initsearchtable;
    DWORD sv599_alertschedule;
    DWORD sv599_errorthreshold;
    DWORD sv599_networkerrorthreshold;
    DWORD sv599_diskspacethreshold;
    DWORD sv599_reserved;
    DWORD sv599_maxlinkdelay;
    DWORD sv599_minlinkthroughput;
    DWORD sv599_linkinfovalidtime;
    DWORD sv599_scavqosinfoupdatetime;
    DWORD sv599_maxworkitemidletime;
} SERVER_INFO_599, *PSERVER_INFO_599, *LPSERVER_INFO_599;
typedef struct _SERVER_INFO_598 {
    DWORD sv598_maxrawworkitems;
    DWORD sv598_maxthreadsperqueue;
    DWORD sv598_producttype;
    DWORD sv598_serversize;
    DWORD sv598_connectionlessautodisc;
    DWORD sv598_sharingviolationretries;
    DWORD sv598_sharingviolationdelay;
    DWORD sv598_maxglobalopensearch;
    DWORD sv598_removeduplicatesearches;
    DWORD sv598_lockviolationoffset;
    DWORD sv598_lockviolationdelay;
    DWORD sv598_mdlreadswitchover;
    DWORD sv598_cachedopenlimit;
    DWORD sv598_otherqueueaffinity;
    BOOL sv598_restrictnullsessaccess;
    BOOL sv598_enablewfw311directipx;
    DWORD sv598_queuesamplesecs;
    DWORD sv598_balancecount;
    DWORD sv598_preferredaffinity;
    DWORD sv598_maxfreerfcbs;
    DWORD sv598_maxfreemfcbs;
    DWORD sv598_maxfreelfcbs;
    DWORD sv598_maxfreepagedpoolchunks;
    DWORD sv598_minpagedpoolchunksize;
    DWORD sv598_maxpagedpoolchunksize;
    BOOL sv598_sendsfrompreferredprocessor;
    DWORD sv598_cacheddirectorylimit;
    DWORD sv598_maxcopylength;
    BOOL sv598_enablecompression;
    BOOL sv598_autosharewks;
    BOOL sv598_autoshareserver;
    BOOL sv598_enablesecuritysignature;
    BOOL sv598_requiresecuritysignature;
    DWORD sv598_minclientbuffersize;
    GUID sv598_serverguid;
    DWORD sv598_ConnectionNoSessionsTimeout;
    DWORD sv598_IdleThreadTimeOut;
    BOOL sv598_enableW9xsecuritysignature;
    BOOL sv598_enforcekerberosreauthentication;
    BOOL sv598_disabledos;
    DWORD sv598_lowdiskspaceminimum;
    BOOL sv598_disablestrictnamechecking;
    BOOL sv598_enableauthenticateusersharing;
} SERVER_INFO_598, *PSERVER_INFO_598, *LPSERVER_INFO_598;
typedef struct _SERVER_INFO_1005 {
    LMSTR sv1005_comment;
} SERVER_INFO_1005, *PSERVER_INFO_1005, *LPSERVER_INFO_1005;
typedef struct _SERVER_INFO_1107 {
    DWORD sv1107_users;
} SERVER_INFO_1107, *PSERVER_INFO_1107, *LPSERVER_INFO_1107;
typedef struct _SERVER_INFO_1010 {
    LONG sv1010_disc;
} SERVER_INFO_1010, *PSERVER_INFO_1010, *LPSERVER_INFO_1010;
typedef struct _SERVER_INFO_1016 {
    BOOL sv1016_hidden;
} SERVER_INFO_1016, *PSERVER_INFO_1016, *LPSERVER_INFO_1016;
typedef struct _SERVER_INFO_1017 {
    DWORD sv1017_announce;
} SERVER_INFO_1017, *PSERVER_INFO_1017, *LPSERVER_INFO_1017;
typedef struct _SERVER_INFO_1018 {
    DWORD sv1018_anndelta;
} SERVER_INFO_1018, *PSERVER_INFO_1018, *LPSERVER_INFO_1018;
typedef struct _SERVER_INFO_1501 {
    DWORD sv1501_sessopens;
} SERVER_INFO_1501, *PSERVER_INFO_1501, *LPSERVER_INFO_1501;
typedef struct _SERVER_INFO_1502 {
    DWORD sv1502_sessvcs;
} SERVER_INFO_1502, *PSERVER_INFO_1502, *LPSERVER_INFO_1502;
typedef struct _SERVER_INFO_1503 {
    DWORD sv1503_opensearch;
} SERVER_INFO_1503, *PSERVER_INFO_1503, *LPSERVER_INFO_1503;
typedef struct _SERVER_INFO_1506 {
    DWORD sv1506_maxworkitems;
} SERVER_INFO_1506, *PSERVER_INFO_1506, *LPSERVER_INFO_1506;
typedef struct _SERVER_INFO_1509 {
    DWORD sv1509_maxrawbuflen;
} SERVER_INFO_1509, *PSERVER_INFO_1509, *LPSERVER_INFO_1509;
typedef struct _SERVER_INFO_1510 {
    DWORD sv1510_sessusers;
} SERVER_INFO_1510, *PSERVER_INFO_1510, *LPSERVER_INFO_1510;
typedef struct _SERVER_INFO_1511 {
    DWORD sv1511_sessconns;
} SERVER_INFO_1511, *PSERVER_INFO_1511, *LPSERVER_INFO_1511;
typedef struct _SERVER_INFO_1512 {
    DWORD sv1512_maxnonpagedmemoryusage;
} SERVER_INFO_1512, *PSERVER_INFO_1512, *LPSERVER_INFO_1512;
typedef struct _SERVER_INFO_1513 {
    DWORD sv1513_maxpagedmemoryusage;
} SERVER_INFO_1513, *PSERVER_INFO_1513, *LPSERVER_INFO_1513;
typedef struct _SERVER_INFO_1514 {
    BOOL sv1514_enablesoftcompat;
} SERVER_INFO_1514, *PSERVER_INFO_1514, *LPSERVER_INFO_1514;
typedef struct _SERVER_INFO_1515 {
    BOOL sv1515_enableforcedlogoff;
} SERVER_INFO_1515, *PSERVER_INFO_1515, *LPSERVER_INFO_1515;
typedef struct _SERVER_INFO_1516 {
    BOOL sv1516_timesource;
} SERVER_INFO_1516, *PSERVER_INFO_1516, *LPSERVER_INFO_1516;
typedef struct _SERVER_INFO_1518 {
    BOOL sv1518_lmannounce;
} SERVER_INFO_1518, *PSERVER_INFO_1518, *LPSERVER_INFO_1518;
typedef struct _SERVER_INFO_1520 {
    DWORD sv1520_maxcopyreadlen;
} SERVER_INFO_1520, *PSERVER_INFO_1520, *LPSERVER_INFO_1520;
typedef struct _SERVER_INFO_1521 {
    DWORD sv1521_maxcopywritelen;
} SERVER_INFO_1521, *PSERVER_INFO_1521, *LPSERVER_INFO_1521;
typedef struct _SERVER_INFO_1522 {
    DWORD sv1522_minkeepsearch;
} SERVER_INFO_1522, *PSERVER_INFO_1522, *LPSERVER_INFO_1522;
typedef struct _SERVER_INFO_1523 {
    DWORD sv1523_maxkeepsearch;
} SERVER_INFO_1523, *PSERVER_INFO_1523, *LPSERVER_INFO_1523;
typedef struct _SERVER_INFO_1524 {
    DWORD sv1524_minkeepcomplsearch;
} SERVER_INFO_1524, *PSERVER_INFO_1524, *LPSERVER_INFO_1524;
typedef struct _SERVER_INFO_1525 {
    DWORD sv1525_maxkeepcomplsearch;
} SERVER_INFO_1525, *PSERVER_INFO_1525, *LPSERVER_INFO_1525;
typedef struct _SERVER_INFO_1528 {
    DWORD sv1528_scavtimeout;
} SERVER_INFO_1528, *PSERVER_INFO_1528, *LPSERVER_INFO_1528;
typedef struct _SERVER_INFO_1529 {
    DWORD sv1529_minrcvqueue;
} SERVER_INFO_1529, *PSERVER_INFO_1529, *LPSERVER_INFO_1529;
typedef struct _SERVER_INFO_1530 {
    DWORD sv1530_minfreeworkitems;
} SERVER_INFO_1530, *PSERVER_INFO_1530, *LPSERVER_INFO_1530;
typedef struct _SERVER_INFO_1533 {
    DWORD sv1533_maxmpxct;
} SERVER_INFO_1533, *PSERVER_INFO_1533, *LPSERVER_INFO_1533;
typedef struct _SERVER_INFO_1534 {
    DWORD sv1534_oplockbreakwait;
} SERVER_INFO_1534, *PSERVER_INFO_1534, *LPSERVER_INFO_1534;
typedef struct _SERVER_INFO_1535 {
    DWORD sv1535_oplockbreakresponsewait;
} SERVER_INFO_1535, *PSERVER_INFO_1535, *LPSERVER_INFO_1535;
typedef struct _SERVER_INFO_1536 {
    BOOL sv1536_enableoplocks;
} SERVER_INFO_1536, *PSERVER_INFO_1536, *LPSERVER_INFO_1536;
typedef struct _SERVER_INFO_1537 {
    BOOL sv1537_enableoplockforceclose;
} SERVER_INFO_1537, *PSERVER_INFO_1537, *LPSERVER_INFO_1537;
typedef struct _SERVER_INFO_1538 {
    BOOL sv1538_enablefcbopens;
} SERVER_INFO_1538, *PSERVER_INFO_1538, *LPSERVER_INFO_1538;
typedef struct _SERVER_INFO_1539 {
    BOOL sv1539_enableraw;
} SERVER_INFO_1539, *PSERVER_INFO_1539, *LPSERVER_INFO_1539;
typedef struct _SERVER_INFO_1540 {
    BOOL sv1540_enablesharednetdrives;
} SERVER_INFO_1540, *PSERVER_INFO_1540, *LPSERVER_INFO_1540;
typedef struct _SERVER_INFO_1541 {
    BOOL sv1541_minfreeconnections;
} SERVER_INFO_1541, *PSERVER_INFO_1541, *LPSERVER_INFO_1541;
typedef struct _SERVER_INFO_1542 {
    BOOL sv1542_maxfreeconnections;
} SERVER_INFO_1542, *PSERVER_INFO_1542, *LPSERVER_INFO_1542;
typedef struct _SERVER_INFO_1543 {
    DWORD sv1543_initsesstable;
} SERVER_INFO_1543, *PSERVER_INFO_1543, *LPSERVER_INFO_1543;
typedef struct _SERVER_INFO_1544 {
    DWORD sv1544_initconntable;
} SERVER_INFO_1544, *PSERVER_INFO_1544, *LPSERVER_INFO_1544;
typedef struct _SERVER_INFO_1545 {
    DWORD sv1545_initfiletable;
} SERVER_INFO_1545, *PSERVER_INFO_1545, *LPSERVER_INFO_1545;
typedef struct _SERVER_INFO_1546 {
    DWORD sv1546_initsearchtable;
} SERVER_INFO_1546, *PSERVER_INFO_1546, *LPSERVER_INFO_1546;
typedef struct _SERVER_INFO_1547 {
    DWORD sv1547_alertschedule;
} SERVER_INFO_1547, *PSERVER_INFO_1547, *LPSERVER_INFO_1547;
typedef struct _SERVER_INFO_1548 {
    DWORD sv1548_errorthreshold;
} SERVER_INFO_1548, *PSERVER_INFO_1548, *LPSERVER_INFO_1548;
typedef struct _SERVER_INFO_1549 {
    DWORD sv1549_networkerrorthreshold;
} SERVER_INFO_1549, *PSERVER_INFO_1549, *LPSERVER_INFO_1549;
typedef struct _SERVER_INFO_1550 {
    DWORD sv1550_diskspacethreshold;
} SERVER_INFO_1550, *PSERVER_INFO_1550, *LPSERVER_INFO_1550;
typedef struct _SERVER_INFO_1552 {
    DWORD sv1552_maxlinkdelay;
} SERVER_INFO_1552, *PSERVER_INFO_1552, *LPSERVER_INFO_1552;
typedef struct _SERVER_INFO_1553 {
    DWORD sv1553_minlinkthroughput;
} SERVER_INFO_1553, *PSERVER_INFO_1553, *LPSERVER_INFO_1553;
typedef struct _SERVER_INFO_1554 {
    DWORD sv1554_linkinfovalidtime;
} SERVER_INFO_1554, *PSERVER_INFO_1554, *LPSERVER_INFO_1554;
typedef struct _SERVER_INFO_1555 {
    DWORD sv1555_scavqosinfoupdatetime;
} SERVER_INFO_1555, *PSERVER_INFO_1555, *LPSERVER_INFO_1555;
typedef struct _SERVER_INFO_1556 {
    DWORD sv1556_maxworkitemidletime;
} SERVER_INFO_1556, *PSERVER_INFO_1556, *LPSERVER_INFO_1556;
typedef struct _SERVER_INFO_1557 {
    DWORD sv1557_maxrawworkitems;
} SERVER_INFO_1557, *PSERVER_INFO_1557, *LPSERVER_INFO_1557;
typedef struct _SERVER_INFO_1560 {
    DWORD sv1560_producttype;
} SERVER_INFO_1560, *PSERVER_INFO_1560, *LPSERVER_INFO_1560;
typedef struct _SERVER_INFO_1561 {
    DWORD sv1561_serversize;
} SERVER_INFO_1561, *PSERVER_INFO_1561, *LPSERVER_INFO_1561;
typedef struct _SERVER_INFO_1562 {
    DWORD sv1562_connectionlessautodisc;
} SERVER_INFO_1562, *PSERVER_INFO_1562, *LPSERVER_INFO_1562;
typedef struct _SERVER_INFO_1563 {
    DWORD sv1563_sharingviolationretries;
} SERVER_INFO_1563, *PSERVER_INFO_1563, *LPSERVER_INFO_1563;
typedef struct _SERVER_INFO_1564 {
    DWORD sv1564_sharingviolationdelay;
} SERVER_INFO_1564, *PSERVER_INFO_1564, *LPSERVER_INFO_1564;
typedef struct _SERVER_INFO_1565 {
    DWORD sv1565_maxglobalopensearch;
} SERVER_INFO_1565, *PSERVER_INFO_1565, *LPSERVER_INFO_1565;
typedef struct _SERVER_INFO_1566 {
    BOOL sv1566_removeduplicatesearches;
} SERVER_INFO_1566, *PSERVER_INFO_1566, *LPSERVER_INFO_1566;
typedef struct _SERVER_INFO_1567 {
    DWORD sv1567_lockviolationretries;
} SERVER_INFO_1567, *PSERVER_INFO_1567, *LPSERVER_INFO_1567;
typedef struct _SERVER_INFO_1568 {
    DWORD sv1568_lockviolationoffset;
} SERVER_INFO_1568, *PSERVER_INFO_1568, *LPSERVER_INFO_1568;
typedef struct _SERVER_INFO_1569 {
    DWORD sv1569_lockviolationdelay;
} SERVER_INFO_1569, *PSERVER_INFO_1569, *LPSERVER_INFO_1569;
typedef struct _SERVER_INFO_1570 {
    DWORD sv1570_mdlreadswitchover;
} SERVER_INFO_1570, *PSERVER_INFO_1570, *LPSERVER_INFO_1570;
typedef struct _SERVER_INFO_1571 {
    DWORD sv1571_cachedopenlimit;
} SERVER_INFO_1571, *PSERVER_INFO_1571, *LPSERVER_INFO_1571;
typedef struct _SERVER_INFO_1572 {
    DWORD sv1572_criticalthreads;
} SERVER_INFO_1572, *PSERVER_INFO_1572, *LPSERVER_INFO_1572;
typedef struct _SERVER_INFO_1573 {
    DWORD sv1573_restrictnullsessaccess;
} SERVER_INFO_1573, *PSERVER_INFO_1573, *LPSERVER_INFO_1573;
typedef struct _SERVER_INFO_1574 {
    DWORD sv1574_enablewfw311directipx;
} SERVER_INFO_1574, *PSERVER_INFO_1574, *LPSERVER_INFO_1574;
typedef struct _SERVER_INFO_1575 {
    DWORD sv1575_otherqueueaffinity;
} SERVER_INFO_1575, *PSERVER_INFO_1575, *LPSERVER_INFO_1575;
typedef struct _SERVER_INFO_1576 {
    DWORD sv1576_queuesamplesecs;
} SERVER_INFO_1576, *PSERVER_INFO_1576, *LPSERVER_INFO_1576;
typedef struct _SERVER_INFO_1577 {
    DWORD sv1577_balancecount;
} SERVER_INFO_1577, *PSERVER_INFO_1577, *LPSERVER_INFO_1577;
typedef struct _SERVER_INFO_1578 {
    DWORD sv1578_preferredaffinity;
} SERVER_INFO_1578, *PSERVER_INFO_1578, *LPSERVER_INFO_1578;
typedef struct _SERVER_INFO_1579 {
    DWORD sv1579_maxfreerfcbs;
} SERVER_INFO_1579, *PSERVER_INFO_1579, *LPSERVER_INFO_1579;
typedef struct _SERVER_INFO_1580 {
    DWORD sv1580_maxfreemfcbs;
} SERVER_INFO_1580, *PSERVER_INFO_1580, *LPSERVER_INFO_1580;
typedef struct _SERVER_INFO_1581 {
    DWORD sv1581_maxfreemlcbs;
} SERVER_INFO_1581, *PSERVER_INFO_1581, *LPSERVER_INFO_1581;
typedef struct _SERVER_INFO_1582 {
    DWORD sv1582_maxfreepagedpoolchunks;
} SERVER_INFO_1582, *PSERVER_INFO_1582, *LPSERVER_INFO_1582;
typedef struct _SERVER_INFO_1583 {
    DWORD sv1583_minpagedpoolchunksize;
} SERVER_INFO_1583, *PSERVER_INFO_1583, *LPSERVER_INFO_1583;
typedef struct _SERVER_INFO_1584 {
    DWORD sv1584_maxpagedpoolchunksize;
} SERVER_INFO_1584, *PSERVER_INFO_1584, *LPSERVER_INFO_1584;
typedef struct _SERVER_INFO_1585 {
    BOOL sv1585_sendsfrompreferredprocessor;
} SERVER_INFO_1585, *PSERVER_INFO_1585, *LPSERVER_INFO_1585;
typedef struct _SERVER_INFO_1586 {
    DWORD sv1586_maxthreadsperqueue;
} SERVER_INFO_1586, *PSERVER_INFO_1586, *LPSERVER_INFO_1586;
typedef struct _SERVER_INFO_1587 {
    DWORD sv1587_cacheddirectorylimit;
} SERVER_INFO_1587, *PSERVER_INFO_1587, *LPSERVER_INFO_1587;
typedef struct _SERVER_INFO_1588 {
    DWORD sv1588_maxcopylength;
} SERVER_INFO_1588, *PSERVER_INFO_1588, *LPSERVER_INFO_1588;
typedef struct _SERVER_INFO_1590 {
    DWORD sv1590_enablecompression;
} SERVER_INFO_1590, *PSERVER_INFO_1590, *LPSERVER_INFO_1590;
typedef struct _SERVER_INFO_1591 {
    DWORD sv1591_autosharewks;
} SERVER_INFO_1591, *PSERVER_INFO_1591, *LPSERVER_INFO_1591;
typedef struct _SERVER_INFO_1592 {
    DWORD sv1592_autosharewks;
} SERVER_INFO_1592, *PSERVER_INFO_1592, *LPSERVER_INFO_1592;
typedef struct _SERVER_INFO_1593 {
    DWORD sv1593_enablesecuritysignature;
} SERVER_INFO_1593, *PSERVER_INFO_1593, *LPSERVER_INFO_1593;
typedef struct _SERVER_INFO_1594 {
    DWORD sv1594_requiresecuritysignature;
} SERVER_INFO_1594, *PSERVER_INFO_1594, *LPSERVER_INFO_1594;
typedef struct _SERVER_INFO_1595 {
    DWORD sv1595_minclientbuffersize;
} SERVER_INFO_1595, *PSERVER_INFO_1595, *LPSERVER_INFO_1595;
typedef struct _SERVER_INFO_1596 {
    DWORD sv1596_ConnectionNoSessionsTimeout;
} SERVER_INFO_1596, *PSERVER_INFO_1596, *LPSERVER_INFO_1596;
typedef struct _SERVER_INFO_1597 {
    DWORD sv1597_IdleThreadTimeOut;
} SERVER_INFO_1597, *PSERVER_INFO_1597, *LPSERVER_INFO_1597;
typedef struct _SERVER_INFO_1598 {
    DWORD sv1598_enableW9xsecuritysignature;
} SERVER_INFO_1598, *PSERVER_INFO_1598, *LPSERVER_INFO_1598;
typedef struct _SERVER_INFO_1599 {
    BOOLEAN sv1598_enforcekerberosreauthentication;
} SERVER_INFO_1599, *PSERVER_INFO_1599, *LPSERVER_INFO_1599;
typedef struct _SERVER_INFO_1600 {
    BOOLEAN sv1598_disabledos;
} SERVER_INFO_1600, *PSERVER_INFO_1600, *LPSERVER_INFO_1600;
typedef struct _SERVER_INFO_1601 {
    DWORD sv1598_lowdiskspaceminimum;
} SERVER_INFO_1601, *PSERVER_INFO_1601, *LPSERVER_INFO_1601;
typedef struct _SERVER_INFO_1602 {
    BOOL sv_1598_disablestrictnamechecking;
} SERVER_INFO_1602, *PSERVER_INFO_1602, *LPSERVER_INFO_1602;
typedef struct _SERVER_TRANSPORT_INFO_0 {
    DWORD svti0_numberofvcs;
    LMSTR svti0_transportname;
    [size_is(svti0_transportaddresslength)] LPBYTE svti0_transportaddress;
    DWORD svti0_transportaddresslength;
    LMSTR svti0_networkaddress;
} SERVER_TRANSPORT_INFO_0, *PSERVER_TRANSPORT_INFO_0, *LPSERVER_TRANSPORT_INFO_0;
typedef struct _SERVER_TRANSPORT_INFO_1 {
    DWORD svti1_numberofvcs;
    LMSTR svti1_transportname;
    [size_is(svti1_transportaddresslength)] LPBYTE svti1_transportaddress;
    DWORD svti1_transportaddresslength;
    LMSTR svti1_networkaddress;
    LMSTR svti1_domain;
} SERVER_TRANSPORT_INFO_1, *PSERVER_TRANSPORT_INFO_1, *LPSERVER_TRANSPORT_INFO_1;
typedef struct _SERVER_TRANSPORT_INFO_2 {
    DWORD svti2_numberofvcs;
    LMSTR svti2_transportname;
    [size_is(svti2_transportaddresslength)] LPBYTE svti2_transportaddress;
    DWORD svti2_transportaddresslength;
    LMSTR svti2_networkaddress;
    LMSTR svti2_domain;
    ULONG svti2_flags;
} SERVER_TRANSPORT_INFO_2, *PSERVER_TRANSPORT_INFO_2, *LPSERVER_TRANSPORT_INFO_2;
typedef struct _SERVER_TRANSPORT_INFO_3 {
    DWORD svti3_numberofvcs;
    LMSTR svti3_transportname;
    [size_is(svti3_transportaddresslength)] LPBYTE svti3_transportaddress;
    DWORD svti3_transportaddresslength;
    LMSTR svti3_networkaddress;
    LMSTR svti3_domain;
    ULONG svti3_flags;
    DWORD svti3_passwordlength;
    BYTE svti3_password[ 256 ];
} SERVER_TRANSPORT_INFO_3, *PSERVER_TRANSPORT_INFO_3, *LPSERVER_TRANSPORT_INFO_3;
            (PARMNUM_BASE_INFOLEVEL + SV_COMMENT_PARMNUM)
            (PARMNUM_BASE_INFOLEVEL + SV_USERS_PARMNUM)
            (PARMNUM_BASE_INFOLEVEL + SV_DISC_PARMNUM)
            (PARMNUM_BASE_INFOLEVEL + SV_HIDDEN_PARMNUM)
            (PARMNUM_BASE_INFOLEVEL + SV_ANNOUNCE_PARMNUM)
            (PARMNUM_BASE_INFOLEVEL + SV_ANNDELTA_PARMNUM)
            (PARMNUM_BASE_INFOLEVEL + SV_SESSOPENS_PARMNUM)
            (PARMNUM_BASE_INFOLEVEL + SV_SESSVCS_PARMNUM)
            (PARMNUM_BASE_INFOLEVEL + SV_OPENSEARCH_PARMNUM)
            (PARMNUM_BASE_INFOLEVEL + SV_MAXWORKITEMS_PARMNUM)
            (PARMNUM_BASE_INFOLEVEL + SV_MAXRAWBUFLEN_PARMNUM)
            (PARMNUM_BASE_INFOLEVEL + SV_SESSUSERS_PARMNUM)
            (PARMNUM_BASE_INFOLEVEL + SV_SESSCONNS_PARMNUM)
            (PARMNUM_BASE_INFOLEVEL + SV_MAXNONPAGEDMEMORYUSAGE_PARMNUM)
            (PARMNUM_BASE_INFOLEVEL + SV_MAXPAGEDMEMORYUSAGE_PARMNUM)
            (PARMNUM_BASE_INFOLEVEL + SV_ENABLESOFTCOMPAT_PARMNUM)
            (PARMNUM_BASE_INFOLEVEL + SV_ENABLEFORCEDLOGOFF_PARMNUM)
            (PARMNUM_BASE_INFOLEVEL + SV_TIMESOURCE_PARMNUM)
            (PARMNUM_BASE_INFOLEVEL + SV_LMANNOUNCE_PARMNUM)
            (PARMNUM_BASE_INFOLEVEL + SV_MAXCOPYREADLEN_PARMNUM)
            (PARMNUM_BASE_INFOLEVEL + SV_MAXCOPYWRITELEN_PARMNUM)
            (PARMNUM_BASE_INFOLEVEL + SV_MINKEEPSEARCH_PARMNUM)
            (PARMNUM_BASE_INFOLEVEL + SV_MAXKEEPSEARCH_PARMNUM)
            (PARMNUM_BASE_INFOLEVEL + SV_MINKEEPCOMPLSEARCH_PARMNUM)
            (PARMNUM_BASE_INFOLEVEL + SV_MAXKEEPCOMPLSEARCH_PARMNUM)
            (PARMNUM_BASE_INFOLEVEL + SV_SCAVTIMEOUT_PARMNUM)
            (PARMNUM_BASE_INFOLEVEL + SV_MINRCVQUEUE_PARMNUM)
            (PARMNUM_BASE_INFOLEVEL + SV_MINFREEWORKITEMS_PARMNUM)
            (PARMNUM_BASE_INFOLEVEL + SV_MAXMPXCT_PARMNUM)
            (PARMNUM_BASE_INFOLEVEL + SV_OPLOCKBREAKWAIT_PARMNUM)
            (PARMNUM_BASE_INFOLEVEL + SV_OPLOCKBREAKRESPONSEWAIT_PARMNUM)
            (PARMNUM_BASE_INFOLEVEL + SV_ENABLEOPLOCKS_PARMNUM)
            (PARMNUM_BASE_INFOLEVEL + SV_ENABLEOPLOCKFORCECLOSE_PARMNUM)
            (PARMNUM_BASE_INFOLEVEL + SV_ENABLEFCBOPENS_PARMNUM)
            (PARMNUM_BASE_INFOLEVEL + SV_ENABLERAW_PARMNUM)
            (PARMNUM_BASE_INFOLEVEL + SV_ENABLESHAREDNETDRIVES_PARMNUM)
            (PARMNUM_BASE_INFOLEVEL + SV_MINFREECONNECTIONS_PARMNUM)
            (PARMNUM_BASE_INFOLEVEL + SV_MAXFREECONNECTIONS_PARMNUM)
            (PARMNUM_BASE_INFOLEVEL + SV_INITSESSTABLE_PARMNUM)
            (PARMNUM_BASE_INFOLEVEL + SV_INITCONNTABLE_PARMNUM)
            (PARMNUM_BASE_INFOLEVEL + SV_INITFILETABLE_PARMNUM)
            (PARMNUM_BASE_INFOLEVEL + SV_INITSEARCHTABLE_PARMNUM)
            (PARMNUM_BASE_INFOLEVEL + SV_ALERTSCHEDULE_PARMNUM)
            (PARMNUM_BASE_INFOLEVEL + SV_ERRORTHRESHOLD_PARMNUM)
            (PARMNUM_BASE_INFOLEVEL + SV_NETWORKERRORTHRESHOLD_PARMNUM)
            (PARMNUM_BASE_INFOLEVEL + SV_DISKSPACETHRESHOLD_PARMNUM)
            (PARMNUM_BASE_INFOLEVEL + SV_MAXLINKDELAY_PARMNUM)
            (PARMNUM_BASE_INFOLEVEL + SV_MINLINKTHROUGHPUT_PARMNUM)
            (PARMNUM_BASE_INFOLEVEL + SV_LINKINFOVALIDTIME_PARMNUM)
            (PARMNUM_BASE_INFOLEVEL + SV_SCAVQOSINFOUPDATETIME_PARMNUM)
            (PARMNUM_BASE_INFOLEVEL + SV_MAXWORKITEMIDLETIME_PARMNUM)
            (PARMNUM_BASE_INFOLEVEL + SV_MAXRAWWORKITEMS_PARMNUM)
            (PARMNUM_BASE_INFOLEVEL + SV_PRODUCTTYPE_PARMNUM)
            (PARMNUM_BASE_INFOLEVEL + SV_SERVERSIZE_PARMNUM)
            (PARMNUM_BASE_INFOLEVEL + SV_CONNECTIONLESSAUTODISC_PARMNUM)
            (PARMNUM_BASE_INFOLEVEL + SV_SHARINGVIOLATIONRETRIES_PARMNUM)
            (PARMNUM_BASE_INFOLEVEL + SV_SHARINGVIOLATIONDELAY_PARMNUM)
            (PARMNUM_BASE_INFOLEVEL + SV_MAXGLOBALOPENSEARCH_PARMNUM)
            (PARMNUM_BASE_INFOLEVEL + SV_REMOVEDUPLICATESEARCHES_PARMNUM)
            (PARMNUM_BASE_INFOLEVEL + SV_LOCKVIOLATIONRETRIES_PARMNUM)
            (PARMNUM_BASE_INFOLEVEL + SV_LOCKVIOLATIONOFFSET_PARMNUM)
            (PARMNUM_BASE_INFOLEVEL + SV_LOCKVIOLATIONDELAY_PARMNUM)
            (PARMNUM_BASE_INFOLEVEL + SV_MDLREADSWITCHOVER_PARMNUM)
            (PARMNUM_BASE_INFOLEVEL + SV_CACHEDOPENLIMIT_PARMNUM)
            (PARMNUM_BASE_INFOLEVEL + SV_CRITICALTHREADS_PARMNUM)
            (PARMNUM_BASE_INFOLEVEL + SV_RESTRICTNULLSESSACCESS_PARMNUM)
            (PARMNUM_BASE_INFOLEVEL + SV_ENABLEWFW311DIRECTIPX_PARMNUM)
            (PARMNUM_BASE_INFOLEVEL + SV_OTHERQUEUEAFFINITY_PARMNUM)
            (PARMNUM_BASE_INFOLEVEL + SV_QUEUESAMPLESECS_PARMNUM)
            (PARMNUM_BASE_INFOLEVEL + SV_BALANCECOUNT_PARMNUM)
            (PARMNUM_BASE_INFOLEVEL + SV_PREFERREDAFFINITY_PARMNUM)
            (PARMNUM_BASE_INFOLEVEL + SV_MAXFREERFCBS_PARMNUM)
            (PARMNUM_BASE_INFOLEVEL + SV_MAXFREEMFCBS_PARMNUM)
            (PARMNUM_BASE_INFOLEVEL + SV_MAXFREELFCBS_PARMNUM)
            (PARMNUM_BASE_INFOLEVEL + SV_MAXFREEPAGEDPOOLCHUNKS_PARMNUM)
            (PARMNUM_BASE_INFOLEVEL + SV_MINPAGEDPOOLCHUNKSIZE_PARMNUM)
            (PARMNUM_BASE_INFOLEVEL + SV_MAXPAGEDPOOLCHUNKSIZE_PARMNUM)
            (PARMNUM_BASE_INFOLEVEL + SV_SENDSFROMPREFERREDPROCESSOR_PARMNUM)
            (PARMNUM_BASE_INFOLEVEL + SV_MAXTHREADSPERQUEUE_PARMNUM)
            (PARMNUM_BASE_INFOLEVEL + SV_CACHEDDIRECTORYLIMIT_PARMNUM)
            (PARMNUM_BASE_INFOLEVEL + SV_MAXCOPYLENGTH_PARMNUM)
            (PARMNUM_BASE_INFOLEVEL + SV_ENABLECOMPRESSION_PARMNUM)
            (PARMNUM_BASE_INFOLEVEL + SV_AUTOSHAREWKS_PARMNUM)
            (PARMNUM_BASE_INFOLEVEL + SV_AUTOSHARESERVER_PARMNUM)
            (PARMNUM_BASE_INFOLEVEL + SV_ENABLESECURITYSIGNATURE_PARMNUM)
            (PARMNUM_BASE_INFOLEVEL + SV_REQUIRESECURITYSIGNATURE_PARMNUM)
            (PARMNUM_BASE_INFOLEVEL + SV_MINCLIENTBUFFERSIZE_PARMNUM)
            (PARMNUM_BASE_INFOLEVEL + SV_CONNECTIONNOSESSIONSTIMEOUT_PARMNUM)
            (PARMNUM_BASE_INFOLEVEL + SV_IDLETHREADTIMEOUT_PARMNUM)
            (PARMNUM_BASE_INFOLEVEL + SV_ENABLEW9XSECURITYSIGNATURE_PARMNUM)
            (PARMNUM_BASE_INFOLEVEL + SV_ENFORCEKERBEROSREAUTHENTICATION_PARMNUM)
            (PARMNUM_BASE_INFOLEVEL + SV_DISABLEDOS_PARMNUM)
            (PARMNUM_BASE_INFOLEVEL + SV_LOWDISKSPACEMINIMUM_PARMNUM)
            (PARMNUM_BASE_INFOLEVEL + SV_DISABLESTRICTNAMECHECKING_PARMNUM)
            (PARMNUM_BASE_INFOLEVEL + SV_ENABLEAUTHENTICATEUSERSHARING_PARMNUM)
                            SVTI2_SCOPED_NAME | \
                            SVTI2_CLUSTER_NAME | \
                            SVTI2_CLUSTER_DNN_NAME | \
                            SVTI2_UNICODE_TRANSPORT_ADDRESS )
}
#endif
#pragma endregion

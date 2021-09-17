#include <winapifamily.h>
#pragma region Desktop Familyy or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
#include <schedule.h>
extern "C" {
typedef enum _DS_MANGLE_FOR {
        DS_MANGLE_UNKNOWN = 0,
        DS_MANGLE_OBJECT_RDN_FOR_DELETION,
        DS_MANGLE_OBJECT_RDN_FOR_NAME_CONFLICT,
        } DS_MANGLE_FOR;
_Check_return_
_Success_(return == ERROR_SUCCESS)
DSPARSE
DWORD
WINAPI
DsMakeSpnW(
    _In_ LPCWSTR ServiceClass,
    _In_ LPCWSTR ServiceName,
    _In_opt_ LPCWSTR InstanceName,
    _In_ USHORT InstancePort,
    _In_opt_ LPCWSTR Referrer,
    _Inout_ DWORD *pcSpnLength,
    _Out_writes_to_opt_(*pcSpnLength, *pcSpnLength) LPWSTR pszSpn
);
_Check_return_
_Success_(return == ERROR_SUCCESS)
DSPARSE
DWORD
WINAPI
DsMakeSpnA(
    _In_ LPCSTR ServiceClass,
    _In_ LPCSTR ServiceName,
    _In_opt_ LPCSTR InstanceName,
    _In_ USHORT InstancePort,
    _In_opt_ LPCSTR Referrer,
    _Inout_ DWORD *pcSpnLength,
    _Out_writes_to_opt_ (*pcSpnLength, *pcSpnLength) LPSTR pszSpn
);
_Check_return_
DSPARSE
DWORD
WINAPI
DsCrackSpnA(
    _In_ LPCSTR pszSpn,
    _Inout_opt_ LPDWORD pcServiceClass,
    _Out_writes_to_opt_ (*pcServiceClass, *pcServiceClass) LPSTR ServiceClass,
    _Inout_opt_ LPDWORD pcServiceName,
    _Out_writes_to_opt_ (*pcServiceName, *pcServiceName) LPSTR ServiceName,
    _Inout_opt_ LPDWORD pcInstanceName,
    _Out_writes_to_opt_ (*pcInstanceName, *pcInstanceName) LPSTR InstanceName,
    _Out_opt_ USHORT *pInstancePort
    );
_Check_return_
DSPARSE
DWORD
WINAPI
DsCrackSpnW(
    _In_ LPCWSTR pszSpn,
    _Inout_opt_ DWORD *pcServiceClass,
    _Out_writes_to_opt_ (*pcServiceClass, *pcServiceClass) LPWSTR ServiceClass,
    _Inout_opt_ DWORD *pcServiceName,
    _Out_writes_to_opt_ (*pcServiceName, *pcServiceName) LPWSTR ServiceName,
    _Inout_opt_ DWORD *pcInstanceName,
    _Out_writes_to_opt_ (*pcInstanceName, *pcInstanceName) LPWSTR InstanceName,
    _Out_opt_ USHORT *pInstancePort
    );
_Check_return_
_Success_(return == 0)
DSPARSE
DWORD
WINAPI
DsQuoteRdnValueW(
    DWORD cUnquotedRdnValueLength,
    _In_reads_(cUnquotedRdnValueLength) IN LPCWCH psUnquotedRdnValue,
    _Inout_ DWORD *pcQuotedRdnValueLength,
    _Out_writes_to_(*pcQuotedRdnValueLength, *pcQuotedRdnValueLength) LPWCH psQuotedRdnValue
);
_Check_return_
_Success_(return == 0)
DSPARSE
DWORD
WINAPI
DsQuoteRdnValueA(
    DWORD cUnquotedRdnValueLength,
    _In_reads_ (cUnquotedRdnValueLength) IN LPCCH psUnquotedRdnValue,
    _Inout_ DWORD *pcQuotedRdnValueLength,
    _Out_writes_to_ (*pcQuotedRdnValueLength, *pcQuotedRdnValueLength) LPCH psQuotedRdnValue
);
_Check_return_
_Success_(return == 0)
DSPARSE
DWORD
WINAPI
DsUnquoteRdnValueW(
    DWORD cQuotedRdnValueLength,
    _In_reads_ (cQuotedRdnValueLength) LPCWCH psQuotedRdnValue,
    _Inout_ DWORD *pcUnquotedRdnValueLength,
    _Out_writes_to_ (*pcUnquotedRdnValueLength, *pcUnquotedRdnValueLength) LPWCH psUnquotedRdnValue
);
_Check_return_
_Success_(return == 0)
DSPARSE
DWORD
WINAPI
DsUnquoteRdnValueA(
    DWORD cQuotedRdnValueLength,
    _In_reads_ (cQuotedRdnValueLength) LPCCH psQuotedRdnValue,
    _Inout_ DWORD *pcUnquotedRdnValueLength,
    _Out_writes_to_ (*pcUnquotedRdnValueLength, *pcUnquotedRdnValueLength) LPCH psUnquotedRdnValue
);
_Check_return_
_Success_(return == 0)
DSPARSE
DWORD
WINAPI
DsGetRdnW(
    _Inout_ _At_(*ppDN, _Pre_readable_size_(*pcDN) _Post_readable_size_(*pcDN)) LPCWCH *ppDN,
    _Inout_ DWORD *pcDN,
    _Outptr_result_buffer_(*pcKey) LPCWCH *ppKey,
    _Out_ DWORD *pcKey,
    _Outptr_result_buffer_(*pcVal) LPCWCH *ppVal,
    _Out_ DWORD *pcVal
    );
DSPARSE
BOOL
WINAPI
DsCrackUnquotedMangledRdnW(
     _In_reads_(cchRDN) LPCWSTR pszRDN,
     DWORD cchRDN,
     _Out_opt_ GUID *pGuid,
     _Out_opt_ DS_MANGLE_FOR *peDsMangleFor
     );
DSPARSE
BOOL
WINAPI
DsCrackUnquotedMangledRdnA(
     _In_reads_(cchRDN) LPCSTR pszRDN,
     DWORD cchRDN,
     _Out_opt_ GUID *pGuid,
     _Out_opt_ DS_MANGLE_FOR *peDsMangleFor
     );
DSPARSE
BOOL
WINAPI
DsIsMangledRdnValueW(
    _In_reads_(cRdn) LPCWSTR pszRdn,
    DWORD cRdn,
    DS_MANGLE_FOR eDsMangleForDesired
    );
DSPARSE
BOOL
WINAPI
DsIsMangledRdnValueA(
    _In_reads_(cRdn) LPCSTR pszRdn,
    DWORD cRdn,
    DS_MANGLE_FOR eDsMangleForDesired
    );
DSPARSE
BOOL
WINAPI
DsIsMangledDnA(
    _In_ LPCSTR pszDn,
    DS_MANGLE_FOR eDsMangleFor
    );
DSPARSE
BOOL
WINAPI
DsIsMangledDnW(
    _In_ LPCWSTR pszDn,
    DS_MANGLE_FOR eDsMangleFor
    );
DSPARSE
DWORD
WINAPI
DsCrackSpn2A(
    _In_reads_ (cSpn) LPCSTR pszSpn,
    _In_ DWORD cSpn,
    _Inout_opt_ LPDWORD pcServiceClass,
    _Out_writes_to_opt_ (*pcServiceClass, *pcServiceClass) LPSTR ServiceClass,
    _Inout_opt_ LPDWORD pcServiceName,
    _Out_writes_to_opt_ (*pcServiceName, *pcServiceName) LPSTR ServiceName,
    _Inout_opt_ LPDWORD pcInstanceName,
    _Out_writes_to_opt_ (*pcInstanceName, *pcInstanceName) LPSTR InstanceName,
    _Out_opt_ USHORT *pInstancePort
    );
DSPARSE
DWORD
WINAPI
DsCrackSpn2W(
    _In_reads_ (cSpn) LPCWSTR pszSpn,
    _In_ DWORD cSpn,
    _Inout_opt_ DWORD *pcServiceClass,
    _Out_writes_to_opt_ (*pcServiceClass, *pcServiceClass) LPWSTR ServiceClass,
    _Inout_opt_ DWORD *pcServiceName,
    _Out_writes_to_opt_ (*pcServiceName, *pcServiceName) LPWSTR ServiceName,
    _Inout_opt_ DWORD *pcInstanceName,
    _Out_writes_to_opt_ (*pcInstanceName, *pcInstanceName) LPWSTR InstanceName,
    _Out_opt_ USHORT *pInstancePort
    );
DSPARSE
DWORD
WINAPI
DsCrackSpn3W(
    _In_ LPCWSTR pszSpn,
    IN DWORD cSpn,
    IN OUT DWORD *pcHostName,
    _Out_writes_to_ (*pcHostName, *pcHostName) LPWSTR HostName,
    IN OUT DWORD *pcInstanceName,
    _Out_writes_to_ (*pcInstanceName, *pcInstanceName) LPWSTR InstanceName,
    OUT USHORT *pPortNumber,
    IN OUT DWORD *pcDomainName,
    _Out_writes_to_ (*pcDomainName, *pcDomainName) LPWSTR DomainName,
    IN OUT DWORD *pcRealmName,
    _Out_writes_to_ (*pcRealmName, *pcRealmName) LPWSTR RealmName
    );
DSPARSE
DWORD
WINAPI
DsCrackSpn4W(
    _In_ LPCWSTR pszSpn,
    IN DWORD cSpn,
    IN OUT DWORD *pcHostName,
    _Out_writes_to_ (*pcHostName, *pcHostName) LPWSTR HostName,
    IN OUT DWORD *pcInstanceName,
    _Out_writes_to_ (*pcInstanceName, *pcInstanceName) LPWSTR InstanceName,
    IN OUT DWORD *pcPortName,
    _Out_writes_to_ (*pcPortName, *pcPortName) LPWSTR PortName,
    IN OUT DWORD *pcDomainName,
    _Out_writes_to_ (*pcDomainName, *pcDomainName) LPWSTR DomainName,
    IN OUT DWORD *pcRealmName,
    _Out_writes_to_ (*pcRealmName, *pcRealmName) LPWSTR RealmName
    );
}
#endif
#pragma endregion

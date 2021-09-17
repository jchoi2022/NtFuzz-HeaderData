#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include <snmp.h>
#include <winsock.h>
extern "C" {
typedef PVOID LPSNMP_MGR_SESSION;
LPSNMP_MGR_SESSION
SNMP_FUNC_TYPE
SnmpMgrOpen(
    _In_opt_ LPSTR lpAgentAddress,
    _In_opt_ LPSTR lpAgentCommunity,
    IN INT nTimeOut,
    IN INT nRetries
    );
BOOL
SNMP_FUNC_TYPE
SnmpMgrCtl(
    LPSNMP_MGR_SESSION session,
    DWORD dwCtlCode,
    LPVOID lpvInBuffer,
    DWORD cbInBuffer,
    LPVOID lpvOUTBuffer,
    DWORD cbOUTBuffer,
    LPDWORD lpcbBytesReturned
    );
BOOL
SNMP_FUNC_TYPE
SnmpMgrClose(
    IN LPSNMP_MGR_SESSION session
    );
SNMPAPI
SNMP_FUNC_TYPE
SnmpMgrRequest(
    IN LPSNMP_MGR_SESSION session,
    IN BYTE requestType,
    IN OUT RFC1157VarBindList *variableBindings,
       OUT AsnInteger *errorStatus,
       OUT AsnInteger *errorIndex
    );
BOOL
SNMP_FUNC_TYPE
SnmpMgrStrToOid(
    _In_opt_ LPSTR string,
    OUT AsnObjectIdentifier *oid
    );
BOOL
SNMP_FUNC_TYPE
SnmpMgrOidToStr(
    IN AsnObjectIdentifier *oid,
    _Outptr_opt_ LPSTR *string
    );
BOOL
SNMP_FUNC_TYPE
SnmpMgrTrapListen(
    OUT HANDLE *phTrapAvailable
    );
BOOL
SNMP_FUNC_TYPE
SnmpMgrGetTrap(
    OUT AsnObjectIdentifier *enterprise,
    OUT AsnNetworkAddress *IPAddress,
    OUT AsnInteger *genericTrap,
    OUT AsnInteger *specificTrap,
    OUT AsnTimeticks *timeStamp,
    OUT RFC1157VarBindList *variableBindings
    );
BOOL
SNMP_FUNC_TYPE
SnmpMgrGetTrapEx(
    OUT AsnObjectIdentifier *enterprise,
    OUT AsnNetworkAddress *agentAddress,
    OUT AsnNetworkAddress *sourceAddress,
    OUT AsnInteger *genericTrap,
    OUT AsnInteger *specificTrap,
    OUT AsnOctetString *community,
    OUT AsnTimeticks *timeStamp,
    OUT RFC1157VarBindList *variableBindings
    );
}
#endif
#pragma endregion

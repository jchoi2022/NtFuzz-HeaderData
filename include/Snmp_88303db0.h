#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include <windows.h>
extern "C" {
#include <pshpack4.h>
typedef struct {
    BYTE * stream;
    UINT length;
    BOOL dynamic;
} AsnOctetString;
typedef struct {
    UINT idLength;
    UINT * ids;
} AsnObjectIdentifier;
typedef LONG AsnInteger32;
typedef ULONG AsnUnsigned32;
typedef ULARGE_INTEGER AsnCounter64;
typedef AsnUnsigned32 AsnCounter32;
typedef AsnUnsigned32 AsnGauge32;
typedef AsnUnsigned32 AsnTimeticks;
typedef AsnOctetString AsnBits;
typedef AsnOctetString AsnSequence;
typedef AsnOctetString AsnImplicitSequence;
typedef AsnOctetString AsnIPAddress;
typedef AsnOctetString AsnNetworkAddress;
typedef AsnOctetString AsnDisplayString;
typedef AsnOctetString AsnOpaque;
typedef struct {
    BYTE asnType;
    union {
        AsnInteger32 number;
        AsnUnsigned32 unsigned32;
        AsnCounter64 counter64;
        AsnOctetString string;
        AsnBits bits;
        AsnObjectIdentifier object;
        AsnSequence sequence;
        AsnIPAddress address;
        AsnCounter32 counter;
        AsnGauge32 gauge;
        AsnTimeticks ticks;
        AsnOpaque arbitrary;
    } asnValue;
} AsnAny;
typedef AsnObjectIdentifier AsnObjectName;
typedef AsnAny AsnObjectSyntax;
typedef struct {
    AsnObjectName name;
    AsnObjectSyntax value;
} SnmpVarBind;
typedef struct {
    SnmpVarBind * list;
    UINT len;
} SnmpVarBindList;
#include <poppack.h>
BOOL
SNMP_FUNC_TYPE
SnmpExtensionInit(
    DWORD dwUptimeReference,
    HANDLE * phSubagentTrapEvent,
    AsnObjectIdentifier * pFirstSupportedRegion
    );
BOOL
SNMP_FUNC_TYPE
SnmpExtensionInitEx(
    AsnObjectIdentifier * pNextSupportedRegion
    );
BOOL
SNMP_FUNC_TYPE
SnmpExtensionMonitor(
    LPVOID pAgentMgmtData
    );
BOOL
SNMP_FUNC_TYPE
SnmpExtensionQuery(
    BYTE bPduType,
    SnmpVarBindList * pVarBindList,
    AsnInteger32 * pErrorStatus,
    AsnInteger32 * pErrorIndex
    );
BOOL
SNMP_FUNC_TYPE
SnmpExtensionQueryEx(
    UINT nRequestType,
    UINT nTransactionId,
    SnmpVarBindList * pVarBindList,
    AsnOctetString * pContextInfo,
    AsnInteger32 * pErrorStatus,
    AsnInteger32 * pErrorIndex
    );
BOOL
SNMP_FUNC_TYPE
SnmpExtensionTrap(
    AsnObjectIdentifier * pEnterpriseOid,
    AsnInteger32 * pGenericTrapId,
    AsnInteger32 * pSpecificTrapId,
    AsnTimeticks * pTimeStamp,
    SnmpVarBindList * pVarBindList
    );
VOID
SNMP_FUNC_TYPE
SnmpExtensionClose(
    );
typedef BOOL (SNMP_FUNC_TYPE * PFNSNMPEXTENSIONINIT)(
    DWORD dwUpTimeReference,
    HANDLE * phSubagentTrapEvent,
    AsnObjectIdentifier * pFirstSupportedRegion
    );
typedef BOOL (SNMP_FUNC_TYPE * PFNSNMPEXTENSIONINITEX)(
    AsnObjectIdentifier * pNextSupportedRegion
    );
typedef BOOL (SNMP_FUNC_TYPE * PFNSNMPEXTENSIONMONITOR)(
    LPVOID pAgentMgmtData
    );
typedef BOOL (SNMP_FUNC_TYPE * PFNSNMPEXTENSIONQUERY)(
    BYTE bPduType,
    SnmpVarBindList * pVarBindList,
    AsnInteger32 * pErrorStatus,
    AsnInteger32 * pErrorIndex
    );
typedef BOOL (SNMP_FUNC_TYPE * PFNSNMPEXTENSIONQUERYEX)(
    UINT nRequestType,
    UINT nTransactionId,
    SnmpVarBindList * pVarBindList,
    AsnOctetString * pContextInfo,
    AsnInteger32 * pErrorStatus,
    AsnInteger32 * pErrorIndex
    );
typedef BOOL (SNMP_FUNC_TYPE * PFNSNMPEXTENSIONTRAP)(
    AsnObjectIdentifier * pEnterpriseOid,
    AsnInteger32 * pGenericTrapId,
    AsnInteger32 * pSpecificTrapId,
    AsnTimeticks * pTimeStamp,
    SnmpVarBindList * pVarBindList
    );
typedef VOID (SNMP_FUNC_TYPE * PFNSNMPEXTENSIONCLOSE)(
    );
SNMPAPI
SNMP_FUNC_TYPE
SnmpUtilOidCpy(
    AsnObjectIdentifier * pOidDst,
    AsnObjectIdentifier * pOidSrc
    );
SNMPAPI
SNMP_FUNC_TYPE
SnmpUtilOidAppend(
    AsnObjectIdentifier * pOidDst,
    AsnObjectIdentifier * pOidSrc
    );
SNMPAPI
SNMP_FUNC_TYPE
SnmpUtilOidNCmp(
    AsnObjectIdentifier * pOid1,
    AsnObjectIdentifier * pOid2,
    UINT nSubIds
    );
SNMPAPI
SNMP_FUNC_TYPE
SnmpUtilOidCmp(
    AsnObjectIdentifier * pOid1,
    AsnObjectIdentifier * pOid2
    );
VOID
SNMP_FUNC_TYPE
SnmpUtilOidFree(
    AsnObjectIdentifier * pOid
    );
SNMPAPI
SNMP_FUNC_TYPE
SnmpUtilOctetsCmp(
    AsnOctetString * pOctets1,
    AsnOctetString * pOctets2
    );
SNMPAPI
SNMP_FUNC_TYPE
SnmpUtilOctetsNCmp(
    AsnOctetString * pOctets1,
    AsnOctetString * pOctets2,
    UINT nChars
    );
SNMPAPI
SNMP_FUNC_TYPE
SnmpUtilOctetsCpy(
    AsnOctetString * pOctetsDst,
    AsnOctetString * pOctetsSrc
    );
VOID
SNMP_FUNC_TYPE
SnmpUtilOctetsFree(
    AsnOctetString * pOctets
    );
SNMPAPI
SNMP_FUNC_TYPE
SnmpUtilAsnAnyCpy(
    AsnAny * pAnyDst,
    AsnAny * pAnySrc
    );
VOID
SNMP_FUNC_TYPE
SnmpUtilAsnAnyFree(
    AsnAny * pAny
    );
SNMPAPI
SNMP_FUNC_TYPE
SnmpUtilVarBindCpy(
    SnmpVarBind * pVbDst,
    SnmpVarBind * pVbSrc
    );
VOID
SNMP_FUNC_TYPE
SnmpUtilVarBindFree(
    SnmpVarBind * pVb
    );
SNMPAPI
SNMP_FUNC_TYPE
SnmpUtilVarBindListCpy(
    SnmpVarBindList * pVblDst,
    SnmpVarBindList * pVblSrc
    );
VOID
SNMP_FUNC_TYPE
SnmpUtilVarBindListFree(
    SnmpVarBindList * pVbl
    );
VOID
SNMP_FUNC_TYPE
SnmpUtilMemFree(
    LPVOID pMem
    );
LPVOID
SNMP_FUNC_TYPE
SnmpUtilMemAlloc(
    UINT nBytes
    );
LPVOID
SNMP_FUNC_TYPE
SnmpUtilMemReAlloc(
    LPVOID pMem,
    UINT nBytes
    );
LPSTR
SNMP_FUNC_TYPE
SnmpUtilOidToA(
    IN AsnObjectIdentifier *Oid
    );
LPSTR
SNMP_FUNC_TYPE
SnmpUtilIdsToA(
    IN UINT *Ids,
    IN UINT IdLength
    );
VOID
SNMP_FUNC_TYPE
SnmpUtilPrintOid(
    IN AsnObjectIdentifier *Oid
    );
VOID
SNMP_FUNC_TYPE
SnmpUtilPrintAsnAny(
    AsnAny * pAny
    );
DWORD
SNMP_FUNC_TYPE
SnmpSvcGetUptime(
    );
VOID
SNMP_FUNC_TYPE
SnmpSvcSetLogLevel(
    INT nLogLevel
    );
VOID
SNMP_FUNC_TYPE
SnmpSvcSetLogType(
    INT nLogType
    );
VOID
SNMP_FUNC_TYPE
SnmpUtilDbgPrint(
    IN INT nLogLevel,
    _In_ _Printf_format_string_ LPSTR szFormat,
    IN ...
    );
}
#endif
#pragma endregion

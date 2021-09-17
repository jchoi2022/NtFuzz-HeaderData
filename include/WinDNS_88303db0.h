#include <winapifamily.h>
#pragma region Desktop Family or OneCore Family or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
extern "C"
{
typedef unsigned __int64 QWORD, *PQWORD;
typedef _Return_type_success_(return == 0) LONG DNS_STATUS;
typedef DNS_STATUS *PDNS_STATUS;
typedef DWORD IP4_ADDRESS, *PIP4_ADDRESS;
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
typedef struct _IP4_ARRAY
{
    DWORD AddrCount;
    [size_is( AddrCount )] IP4_ADDRESS AddrArray[];
}
IP4_ARRAY, *PIP4_ARRAY;
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
#pragma pack(push, 8)
typedef struct
{
    QWORD IP6Qword[2];
}
IP6_ADDRESS, *PIP6_ADDRESS;
#pragma pack(pop)
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
#pragma pack(push, 1)
typedef struct _DnsAddr
{
    CHAR MaxSa[ DNS_ADDR_MAX_SOCKADDR_LENGTH ];
    union
    {
        DWORD DnsAddrUserDword[ 8 ];
    }
    Data;
}
DNS_ADDR, *PDNS_ADDR;
typedef struct _DnsAddrArray
{
    DWORD MaxCount;
    DWORD AddrCount;
    DWORD Tag;
    WORD Family;
    WORD WordReserved;
    DWORD Flags;
    DWORD MatchFlag;
    DWORD Reserved1;
    DWORD Reserved2;
    DNS_ADDR AddrArray[ 1 ];
}
DNS_ADDR_ARRAY, *PDNS_ADDR_ARRAY;
#pragma pack(pop)
        { \
            WORD _in = (in); \
            (out) = (_in << 8) | (_in >> 8); \
        }
        { \
            DWORD _in = (in); \
            (out) = ((_in << 8) & 0x00ff0000) | \
                    (_in << 24) | \
                    ((_in >> 8) & 0x0000ff00) | \
                    (_in >> 24); \
        }
            INLINE_WORD_FLIP( *((UNALIGNED WORD *)(pout)), in )
            INLINE_DWORD_FLIP( *((UNALIGNED DWORD *)(pout)), in )
#pragma pack(push, 1)
typedef struct _DNS_HEADER
{
    WORD Xid;
    BYTE RecursionDesired : 1;
    BYTE Truncation : 1;
    BYTE Authoritative : 1;
    BYTE Opcode : 4;
    BYTE IsResponse : 1;
    BYTE ResponseCode : 4;
    BYTE CheckingDisabled : 1;
    BYTE AuthenticatedData : 1;
    BYTE Reserved : 1;
    BYTE RecursionAvailable : 1;
    WORD QuestionCount;
    WORD AnswerCount;
    WORD NameServerCount;
    WORD AdditionalCount;
}
DNS_HEADER, *PDNS_HEADER;
typedef struct _DNS_HEADER_EXT
{
    WORD Reserved : 15;
    WORD DnssecOk : 1;
    BYTE chRcode;
    BYTE chVersion;
}
DNS_HEADER_EXT, *PDNS_HEADER_EXT;
        { \
            PDNS_HEADER _head = (pHeader); \
            INLINE_HTONS(_head->Xid, _head->Xid ); \
            INLINE_HTONS(_head->QuestionCount, _head->QuestionCount ); \
            INLINE_HTONS(_head->AnswerCount, _head->AnswerCount ); \
            INLINE_HTONS(_head->NameServerCount,_head->NameServerCount ); \
            INLINE_HTONS(_head->AdditionalCount,_head->AdditionalCount ); \
        }
            ( (PCHAR)( (PDNS_HEADER)(_pHeader_) + 1 ) )
            ( (PCHAR)( (PDNS_QUESTION)(_pQuestion_) + 1 ) )
typedef struct _DNS_WIRE_QUESTION
{
    WORD QuestionType;
    WORD QuestionClass;
}
DNS_WIRE_QUESTION, *PDNS_WIRE_QUESTION;
typedef struct _DNS_WIRE_RECORD
{
    WORD RecordType;
    WORD RecordClass;
    DWORD TimeToLive;
    WORD DataLength;
}
DNS_WIRE_RECORD, *PDNS_WIRE_RECORD;
#pragma pack(pop)
typedef enum
{
    DnsConfigPrimaryDomainName_W,
    DnsConfigPrimaryDomainName_A,
    DnsConfigPrimaryDomainName_UTF8,
    DnsConfigAdapterDomainName_W,
    DnsConfigAdapterDomainName_A,
    DnsConfigAdapterDomainName_UTF8,
    DnsConfigDnsServerList,
    DnsConfigSearchList,
    DnsConfigAdapterInfo,
    DnsConfigPrimaryHostNameRegistrationEnabled,
    DnsConfigAdapterHostNameRegistrationEnabled,
    DnsConfigAddressRegistrationMaxCount,
    DnsConfigHostName_W,
    DnsConfigHostName_A,
    DnsConfigHostName_UTF8,
    DnsConfigFullHostName_W,
    DnsConfigFullHostName_A,
    DnsConfigFullHostName_UTF8,
    DnsConfigNameServer
}
DNS_CONFIG_TYPE;
DNS_STATUS
WINAPI
DnsQueryConfig(
    _In_ DNS_CONFIG_TYPE Config,
    _In_ DWORD Flag,
    _In_opt_ PCWSTR pwsAdapterName,
    _In_opt_ PVOID pReserved,
    _Out_writes_bytes_to_opt_(*pBufLen, *pBufLen) PVOID pBuffer,
    _Inout_ PDWORD pBufLen
    );
typedef struct
{
    IP4_ADDRESS IpAddress;
}
DNS_A_DATA, *PDNS_A_DATA;
typedef struct
{
    PWSTR pNameHost;
}
DNS_PTR_DATAW, *PDNS_PTR_DATAW;
typedef struct
{
    PSTR pNameHost;
}
DNS_PTR_DATAA, *PDNS_PTR_DATAA;
typedef struct
{
    PWSTR pNamePrimaryServer;
    PWSTR pNameAdministrator;
    DWORD dwSerialNo;
    DWORD dwRefresh;
    DWORD dwRetry;
    DWORD dwExpire;
    DWORD dwDefaultTtl;
}
DNS_SOA_DATAW, *PDNS_SOA_DATAW;
typedef struct
{
    PSTR pNamePrimaryServer;
    PSTR pNameAdministrator;
    DWORD dwSerialNo;
    DWORD dwRefresh;
    DWORD dwRetry;
    DWORD dwExpire;
    DWORD dwDefaultTtl;
}
DNS_SOA_DATAA, *PDNS_SOA_DATAA;
typedef struct
{
    PWSTR pNameMailbox;
    PWSTR pNameErrorsMailbox;
}
DNS_MINFO_DATAW, *PDNS_MINFO_DATAW;
typedef struct
{
    PSTR pNameMailbox;
    PSTR pNameErrorsMailbox;
}
DNS_MINFO_DATAA, *PDNS_MINFO_DATAA;
typedef struct
{
    PWSTR pNameExchange;
    WORD wPreference;
    WORD Pad;
}
DNS_MX_DATAW, *PDNS_MX_DATAW;
typedef struct
{
    PSTR pNameExchange;
    WORD wPreference;
    WORD Pad;
}
DNS_MX_DATAA, *PDNS_MX_DATAA;
typedef struct
{
    DWORD dwStringCount;
    [size_is(dwStringCount)] PWSTR pStringArray[];
}
DNS_TXT_DATAW, *PDNS_TXT_DATAW;
typedef struct
{
    DWORD dwStringCount;
    [size_is(dwStringCount)] PSTR pStringArray[];
}
DNS_TXT_DATAA, *PDNS_TXT_DATAA;
typedef struct
{
    DWORD dwByteCount;
    [size_is(dwByteCount)] BYTE Data[];
}
DNS_NULL_DATA, *PDNS_NULL_DATA;
typedef struct
{
    IP4_ADDRESS IpAddress;
    UCHAR chProtocol;
    BYTE BitMask[1];
}
DNS_WKS_DATA, *PDNS_WKS_DATA;
typedef struct
{
    IP6_ADDRESS Ip6Address;
}
DNS_AAAA_DATA, *PDNS_AAAA_DATA;
typedef struct
{
    WORD wTypeCovered;
    BYTE chAlgorithm;
    BYTE chLabelCount;
    DWORD dwOriginalTtl;
    DWORD dwExpiration;
    DWORD dwTimeSigned;
    WORD wKeyTag;
    WORD wSignatureLength;
    PWSTR pNameSigner;
    [size_is(wSignatureLength)] BYTE Signature[];
}
DNS_SIG_DATAW, *PDNS_SIG_DATAW, DNS_RRSIG_DATAW, *PDNS_RRSIG_DATAW;
typedef struct
{
    WORD wTypeCovered;
    BYTE chAlgorithm;
    BYTE chLabelCount;
    DWORD dwOriginalTtl;
    DWORD dwExpiration;
    DWORD dwTimeSigned;
    WORD wKeyTag;
    WORD wSignatureLength;
    PSTR pNameSigner;
    [size_is(wSignatureLength)] BYTE Signature[];
}
DNS_SIG_DATAA, *PDNS_SIG_DATAA, DNS_RRSIG_DATAA, *PDNS_RRSIG_DATAA;
typedef struct
{
    WORD wFlags;
    BYTE chProtocol;
    BYTE chAlgorithm;
    WORD wKeyLength;
    WORD wPad;
    [size_is(wKeyLength)] BYTE Key[];
}
DNS_KEY_DATA, *PDNS_KEY_DATA, DNS_DNSKEY_DATA, *PDNS_DNSKEY_DATA;
typedef struct
{
    DWORD dwByteCount;
    [size_is(dwByteCount)] BYTE DHCID[];
}
DNS_DHCID_DATA, *PDNS_DHCID_DATA;
typedef struct
{
    PWSTR pNextDomainName;
    WORD wTypeBitMapsLength;
    WORD wPad;
    [size_is(wTypeBitMapsLength)] BYTE TypeBitMaps[];
}
DNS_NSEC_DATAW, *PDNS_NSEC_DATAW;
typedef struct
{
    PSTR pNextDomainName;
    WORD wTypeBitMapsLength;
    WORD wPad;
    [size_is(wTypeBitMapsLength)] BYTE TypeBitMaps[];
}
DNS_NSEC_DATAA, *PDNS_NSEC_DATAA;
typedef struct
{
    BYTE chAlgorithm;
    BYTE bFlags;
    WORD wIterations;
    BYTE bSaltLength;
    BYTE bHashLength;
    WORD wTypeBitMapsLength;
    [size_is(bSaltLength+bHashLength+wTypeBitMapsLength)] BYTE chData[];
}
DNS_NSEC3_DATA, *PDNS_NSEC3_DATA;
typedef struct
{
    BYTE chAlgorithm;
    BYTE bFlags;
    WORD wIterations;
    BYTE bSaltLength;
    BYTE bPad[3];
    [size_is(bSaltLength)] BYTE pbSalt[];
}
DNS_NSEC3PARAM_DATA, *PDNS_NSEC3PARAM_DATA;
typedef struct
{
    BYTE bCertUsage;
    BYTE bSelector;
    BYTE bMatchingType;
    WORD bCertificateAssociationDataLength;
    BYTE bPad[3];
    [size_is(bCertificateAssociationDataLength)] BYTE bCertificateAssociationData[];
}
DNS_TLSA_DATA, *PDNS_TLSA_DATA;
typedef struct
{
    WORD wKeyTag;
    BYTE chAlgorithm;
    BYTE chDigestType;
    WORD wDigestLength;
    WORD wPad;
    [size_is(wDigestLength)] BYTE Digest[];
}
DNS_DS_DATA, *PDNS_DS_DATA;
typedef struct
{
    WORD wDataLength;
    WORD wPad;
    [size_is(wDataLength)] BYTE Data[];
}
DNS_OPT_DATA, *PDNS_OPT_DATA;
typedef struct
{
    WORD wVersion;
    WORD wSize;
    WORD wHorPrec;
    WORD wVerPrec;
    DWORD dwLatitude;
    DWORD dwLongitude;
    DWORD dwAltitude;
}
DNS_LOC_DATA, *PDNS_LOC_DATA;
typedef struct
{
    PWSTR pNameNext;
    WORD wNumTypes;
    [size_is(wNumTypes)] WORD wTypes[];
}
DNS_NXT_DATAW, *PDNS_NXT_DATAW;
typedef struct
{
    PSTR pNameNext;
    WORD wNumTypes;
    [size_is(wNumTypes)] WORD wTypes[];
}
DNS_NXT_DATAA, *PDNS_NXT_DATAA;
typedef struct
{
    PWSTR pNameTarget;
    WORD wPriority;
    WORD wWeight;
    WORD wPort;
    WORD Pad;
}
DNS_SRV_DATAW, *PDNS_SRV_DATAW;
typedef struct
{
    PSTR pNameTarget;
    WORD wPriority;
    WORD wWeight;
    WORD wPort;
    WORD Pad;
}
DNS_SRV_DATAA, *PDNS_SRV_DATAA;
typedef struct
{
    WORD wOrder;
    WORD wPreference;
    PWSTR pFlags;
    PWSTR pService;
    PWSTR pRegularExpression;
    PWSTR pReplacement;
}
DNS_NAPTR_DATAW, *PDNS_NAPTR_DATAW;
typedef struct
{
    WORD wOrder;
    WORD wPreference;
    PSTR pFlags;
    PSTR pService;
    PSTR pRegularExpression;
    PSTR pReplacement;
}
DNS_NAPTR_DATAA, *PDNS_NAPTR_DATAA;
typedef struct
{
    BYTE AddressType;
    BYTE Address[ DNS_ATMA_MAX_ADDR_LENGTH ];
}
DNS_ATMA_DATA, *PDNS_ATMA_DATA;
typedef struct
{
    PWSTR pNameAlgorithm;
    PBYTE pAlgorithmPacket;
    PBYTE pKey;
    PBYTE pOtherData;
    DWORD dwCreateTime;
    DWORD dwExpireTime;
    WORD wMode;
    WORD wError;
    WORD wKeyLength;
    WORD wOtherLength;
    UCHAR cAlgNameLength;
    BOOL bPacketPointers;
}
DNS_TKEY_DATAW, *PDNS_TKEY_DATAW;
typedef struct
{
    PSTR pNameAlgorithm;
    PBYTE pAlgorithmPacket;
    PBYTE pKey;
    PBYTE pOtherData;
    DWORD dwCreateTime;
    DWORD dwExpireTime;
    WORD wMode;
    WORD wError;
    WORD wKeyLength;
    WORD wOtherLength;
    UCHAR cAlgNameLength;
    BOOL bPacketPointers;
}
DNS_TKEY_DATAA, *PDNS_TKEY_DATAA;
typedef struct
{
    PWSTR pNameAlgorithm;
    PBYTE pAlgorithmPacket;
    PBYTE pSignature;
    PBYTE pOtherData;
    LONGLONG i64CreateTime;
    WORD wFudgeTime;
    WORD wOriginalXid;
    WORD wError;
    WORD wSigLength;
    WORD wOtherLength;
    UCHAR cAlgNameLength;
    BOOL bPacketPointers;
}
DNS_TSIG_DATAW, *PDNS_TSIG_DATAW;
typedef struct
{
    PSTR pNameAlgorithm;
    PBYTE pAlgorithmPacket;
    PBYTE pSignature;
    PBYTE pOtherData;
    LONGLONG i64CreateTime;
    WORD wFudgeTime;
    WORD wOriginalXid;
    WORD wError;
    WORD wSigLength;
    WORD wOtherLength;
    UCHAR cAlgNameLength;
    BOOL bPacketPointers;
}
DNS_TSIG_DATAA, *PDNS_TSIG_DATAA;
typedef struct
{
    DWORD dwByteCount;
    [size_is(dwByteCount)] BYTE bData[];
}
DNS_UNKNOWN_DATA, *PDNS_UNKNOWN_DATA;
typedef struct
{
    DWORD dwMappingFlag;
    DWORD dwLookupTimeout;
    DWORD dwCacheTimeout;
    DWORD cWinsServerCount;
    IP4_ADDRESS WinsServers[1];
}
DNS_WINS_DATA, *PDNS_WINS_DATA;
typedef struct
{
    DWORD dwMappingFlag;
    DWORD dwLookupTimeout;
    DWORD dwCacheTimeout;
    PWSTR pNameResultDomain;
}
DNS_WINSR_DATAW, *PDNS_WINSR_DATAW;
typedef struct
{
    DWORD dwMappingFlag;
    DWORD dwLookupTimeout;
    DWORD dwCacheTimeout;
    PSTR pNameResultDomain;
}
DNS_WINSR_DATAA, *PDNS_WINSR_DATAA;
typedef DNS_PTR_DATAW DNS_PTR_DATA, *PDNS_PTR_DATA;
typedef DNS_SOA_DATAW DNS_SOA_DATA, *PDNS_SOA_DATA;
typedef DNS_MINFO_DATAW DNS_MINFO_DATA, *PDNS_MINFO_DATA;
typedef DNS_MX_DATAW DNS_MX_DATA, *PDNS_MX_DATA;
typedef DNS_TXT_DATAW DNS_TXT_DATA, *PDNS_TXT_DATA;
typedef DNS_SIG_DATAW DNS_SIG_DATA, *PDNS_SIG_DATA;
typedef DNS_NXT_DATAW DNS_NXT_DATA, *PDNS_NXT_DATA;
typedef DNS_SRV_DATAW DNS_SRV_DATA, *PDNS_SRV_DATA;
typedef DNS_NAPTR_DATAW DNS_NAPTR_DATA, *PDNS_NAPTR_DATA;
typedef DNS_RRSIG_DATAW DNS_RRSIG_DATA, *PDNS_RRSIG_DATA;
typedef DNS_NSEC_DATAW DNS_NSEC_DATA, *PDNS_NSEC_DATA;
typedef DNS_TKEY_DATAW DNS_TKEY_DATA, *PDNS_TKEY_DATA;
typedef DNS_TSIG_DATAW DNS_TSIG_DATA, *PDNS_TSIG_DATA;
typedef DNS_WINSR_DATAW DNS_WINSR_DATA, *PDNS_WINSR_DATA;
            (FIELD_OFFSET(DNS_TXT_DATA, pStringArray) + ((StringCount) * sizeof(PCHAR)))
            (FIELD_OFFSET(DNS_NULL_DATA, Data) + (ByteCount))
            (FIELD_OFFSET(DNS_WKS_DATA, BitMask) + (ByteCount))
            (FIELD_OFFSET(DNS_WINS_DATA, WinsServers) + ((IpCount) * sizeof(IP4_ADDRESS)))
            (FIELD_OFFSET(DNS_KEY_DATA, Key) + (ByteCount))
            (FIELD_OFFSET(DNS_SIG_DATA, Signature) + (ByteCount))
            (FIELD_OFFSET(DNS_NSEC_DATA, TypeBitMaps) + (ByteCount))
            (FIELD_OFFSET(DNS_DS_DATA, Digest) + (ByteCount))
            (FIELD_OFFSET(DNS_OPT_DATA, Data) + (ByteCount))
            (FIELD_OFFSET(DNS_DHCID_DATA, DHCID) + (ByteCount))
            (FIELD_OFFSET(DNS_NSEC3_DATA, chData) + (ByteCount))
   (FIELD_OFFSET(DNS_NSEC3PARAM_DATA, pbSalt) + (ByteCount))
   (FIELD_OFFSET(DNS_TLSA_DATA, bCertificateAssociationData) + (ByteCount))
            (FIELD_OFFSET(DNS_UNKNOWN_DATA, bData) + (ByteCount))
typedef struct _DnsRecordFlags
{
    DWORD Section : 2;
    DWORD Delete : 1;
    DWORD CharSet : 2;
    DWORD Unused : 3;
    DWORD Reserved : 24;
}
DNS_RECORD_FLAGS;
typedef enum _DnsSection
{
    DnsSectionQuestion,
    DnsSectionAnswer,
    DnsSectionAuthority,
    DnsSectionAddtional,
}
DNS_SECTION;
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
typedef struct _DnsRRSet
{
    PDNS_RECORD pFirstRR;
    PDNS_RECORD pLastRR;
}
DNS_RRSET, *PDNS_RRSET;
        { \
            PDNS_RRSET _prrset = &(rrset); \
            _prrset->pFirstRR = NULL; \
            _prrset->pLastRR = (PDNS_RECORD) &_prrset->pFirstRR; \
        }
        { \
            PDNS_RRSET _prrset = &(rrset); \
            PDNS_RECORD _prrnew = (pnewRR); \
            _prrset->pLastRR->pNext = _prrnew; \
            _prrset->pLastRR = _prrnew; \
        }
        { \
            PDNS_RRSET _prrset = &(rrset); \
            _prrset->pLastRR->pNext = NULL; \
        }
typedef
VOID
(WINAPI *DNS_PROXY_COMPLETION_ROUTINE) (
    _In_opt_ void *completionContext,
    _In_ DNS_STATUS status);
typedef enum DNS_PROXY_INFORMATION_TYPE {
                DNS_PROXY_INFORMATION_DIRECT,
                DNS_PROXY_INFORMATION_DEFAULT_SETTINGS,
                DNS_PROXY_INFORMATION_PROXY_NAME,
                DNS_PROXY_INFORMATION_DOES_NOT_EXIST
} DNS_PROXY_INFORMATION_TYPE;
typedef struct DNS_PROXY_INFORMATION {
                _In_ ULONG version;
                _Out_ DNS_PROXY_INFORMATION_TYPE proxyInformationType;
                _Out_opt_ PWSTR proxyName;
} DNS_PROXY_INFORMATION;
typedef enum _DNS_CHARSET
{
    DnsCharSetUnknown,
    DnsCharSetUnicode,
    DnsCharSetUtf8,
    DnsCharSetAnsi,
}
DNS_CHARSET;
PDNS_RECORD
WINAPI
DnsRecordCopyEx(
    _In_ PDNS_RECORD pRecord,
    _In_ DNS_CHARSET CharSetIn,
    _In_ DNS_CHARSET CharSetOut
    );
PDNS_RECORD
WINAPI
DnsRecordSetCopyEx(
    _In_ PDNS_RECORD pRecordSet,
    _In_ DNS_CHARSET CharSetIn,
    _In_ DNS_CHARSET CharSetOut
    );
        DnsRecordCopyEx( (pRR), DnsCharSetUnicode, DnsCharSetUnicode )
        DnsRecordSetCopyEx( (pRR), DnsCharSetUnicode, DnsCharSetUnicode )
BOOL
WINAPI
DnsRecordCompare(
    _In_ PDNS_RECORD pRecord1,
    _In_ PDNS_RECORD pRecord2
    );
BOOL
WINAPI
DnsRecordSetCompare(
    _Inout_ PDNS_RECORD pRR1,
    _Inout_ PDNS_RECORD pRR2,
    _Outptr_opt_result_maybenull_ PDNS_RECORD * ppDiff1,
    _Outptr_opt_result_maybenull_ PDNS_RECORD * ppDiff2
    );
PDNS_RECORD
DnsRecordSetDetach(
    _Inout_ PDNS_RECORD pRecordList
    );
typedef enum
{
    DnsFreeFlat = 0,
    DnsFreeRecordList,
    DnsFreeParsedMessageFields
}
DNS_FREE_TYPE;
VOID
WINAPI
DnsFree(
    _Pre_opt_valid_ _Frees_ptr_opt_ PVOID pData,
    _In_ DNS_FREE_TYPE FreeType
    );
DNS_STATUS
WINAPI
DnsQuery_A(
    _In_ PCSTR pszName,
    _In_ WORD wType,
    _In_ DWORD Options,
    _Inout_opt_ PVOID pExtra,
    _Outptr_result_maybenull_ PDNS_RECORD * ppQueryResults,
    _Outptr_opt_result_maybenull_ PVOID * pReserved
    );
DNS_STATUS
WINAPI
DnsQuery_UTF8(
    _In_ PCSTR pszName,
    _In_ WORD wType,
    _In_ DWORD Options,
    _Inout_opt_ PVOID pExtra,
    _Outptr_result_maybenull_ PDNS_RECORD * ppQueryResults,
    _Outptr_opt_result_maybenull_ PVOID * pReserved
    );
DNS_STATUS
WINAPI
DnsQuery_W(
    _In_ PCWSTR pszName,
    _In_ WORD wType,
    _In_ DWORD Options,
    _Inout_opt_ PVOID pExtra,
    _Outptr_result_maybenull_ PDNS_RECORD * ppQueryResults,
    _Outptr_opt_result_maybenull_ PVOID * pReserved
    );
typedef struct _DNS_QUERY_RESULT
{
    _In_ ULONG Version;
    _Out_ DNS_STATUS QueryStatus;
    _Out_ ULONG64 QueryOptions;
    _Out_ PDNS_RECORD pQueryRecords;
    _Inout_opt_ PVOID Reserved;
}
DNS_QUERY_RESULT, *PDNS_QUERY_RESULT;
typedef
VOID
WINAPI
DNS_QUERY_COMPLETION_ROUTINE(
    _In_ PVOID pQueryContext,
    _Inout_ PDNS_QUERY_RESULT pQueryResults
);
typedef DNS_QUERY_COMPLETION_ROUTINE *PDNS_QUERY_COMPLETION_ROUTINE;
typedef struct _DNS_QUERY_REQUEST
{
    _In_ ULONG Version;
    _In_opt_ PCWSTR QueryName;
    _In_ WORD QueryType;
    _In_ ULONG64 QueryOptions;
    _In_opt_ PDNS_ADDR_ARRAY pDnsServerList;
    _In_opt_ ULONG InterfaceIndex;
    _In_opt_ PDNS_QUERY_COMPLETION_ROUTINE pQueryCompletionCallback;
    _In_ PVOID pQueryContext;
}
DNS_QUERY_REQUEST, *PDNS_QUERY_REQUEST;
typedef struct  _DNS_QUERY_CANCEL
{
                CHAR Reserved[32];
}
DNS_QUERY_CANCEL, *PDNS_QUERY_CANCEL;
DNS_STATUS
WINAPI
DnsQueryEx(
    _In_ PDNS_QUERY_REQUEST pQueryRequest,
    _Inout_ PDNS_QUERY_RESULT pQueryResults,
    _Inout_opt_ PDNS_QUERY_CANCEL pCancelHandle
    );
DNS_STATUS
WINAPI
DnsCancelQuery(
    _In_ PDNS_QUERY_CANCEL pCancelHandle
    );
DNS_STATUS
WINAPI
DnsAcquireContextHandle_W(
    _In_ DWORD CredentialFlags,
    _In_opt_ PVOID Credentials,
    _Outptr_ PHANDLE pContext
    );
DNS_STATUS
WINAPI
DnsAcquireContextHandle_A(
    _In_ DWORD CredentialFlags,
    _In_opt_ PVOID Credentials,
    _Outptr_ PHANDLE pContext
    );
VOID
WINAPI
DnsReleaseContextHandle(
    _In_ HANDLE hContext
    );
DNS_STATUS
WINAPI
DnsModifyRecordsInSet_W(
    _In_opt_ PDNS_RECORD pAddRecords,
    _In_opt_ PDNS_RECORD pDeleteRecords,
    _In_ DWORD Options,
    _In_opt_ HANDLE hCredentials,
    _Inout_opt_ PVOID pExtraList,
    _Inout_opt_ PVOID pReserved
    );
DNS_STATUS
WINAPI
DnsModifyRecordsInSet_A(
    _In_opt_ PDNS_RECORD pAddRecords,
    _In_opt_ PDNS_RECORD pDeleteRecords,
    _In_ DWORD Options,
    _In_opt_ HANDLE hCredentials,
    _Inout_opt_ PVOID pExtraList,
    _Inout_opt_ PVOID pReserved
    );
DNS_STATUS
WINAPI
DnsModifyRecordsInSet_UTF8(
    _In_opt_ PDNS_RECORD pAddRecords,
    _In_opt_ PDNS_RECORD pDeleteRecords,
    _In_ DWORD Options,
    _In_opt_ HANDLE hCredentials,
    _Inout_opt_ PVOID pExtraList,
    _Inout_opt_ PVOID pReserved
    );
DNS_STATUS
WINAPI
DnsReplaceRecordSetW(
    _In_ PDNS_RECORD pReplaceSet,
    _In_ DWORD Options,
    _In_opt_ HANDLE hContext,
    _Inout_opt_ PVOID pExtraInfo,
    _Inout_opt_ PVOID pReserved
    );
DNS_STATUS
WINAPI
DnsReplaceRecordSetA(
    _In_ PDNS_RECORD pReplaceSet,
    _In_ DWORD Options,
    _In_opt_ HANDLE hContext,
    _Inout_opt_ PVOID pExtraInfo,
    _Inout_opt_ PVOID pReserved
    );
DNS_STATUS
WINAPI
DnsReplaceRecordSetUTF8(
    _In_ PDNS_RECORD pReplaceSet,
    _In_ DWORD Options,
    _In_opt_ HANDLE hContext,
    _Inout_opt_ PVOID pExtraInfo,
    _Inout_opt_ PVOID pReserved
    );
typedef enum _DNS_NAME_FORMAT
{
    DnsNameDomain,
    DnsNameDomainLabel,
    DnsNameHostnameFull,
    DnsNameHostnameLabel,
    DnsNameWildcard,
    DnsNameSrvRecord,
    DnsNameValidateTld
}
DNS_NAME_FORMAT;
DNS_STATUS
DnsValidateName_W(
    _In_ PCWSTR pszName,
    _In_ DNS_NAME_FORMAT Format
    );
DNS_STATUS
DnsValidateName_A(
    _In_ PCSTR pszName,
    _In_ DNS_NAME_FORMAT Format
    );
DNS_STATUS
DnsValidateName_UTF8(
    _In_ PCSTR pszName,
    _In_ DNS_NAME_FORMAT Format
    );
DNS_STATUS
DnsValidateServerStatus(
    _In_ PSOCKADDR server,
    _In_opt_ PCWSTR queryName,
    _Out_ PDWORD serverStatus
    );
BOOL
WINAPI
DnsNameCompare_A(
    _In_ PCSTR pName1,
    _In_ PCSTR pName2
    );
BOOL
WINAPI
DnsNameCompare_W(
    _In_ PCWSTR pName1,
    _In_ PCWSTR pName2
    );
typedef struct _DNS_MESSAGE_BUFFER
{
    DNS_HEADER MessageHead;
    CHAR MessageBody[1];
}
DNS_MESSAGE_BUFFER, *PDNS_MESSAGE_BUFFER;
BOOL
WINAPI
DnsWriteQuestionToBuffer_W(
    _Inout_ PDNS_MESSAGE_BUFFER pDnsBuffer,
    _Inout_ PDWORD pdwBufferSize,
    _In_ PCWSTR pszName,
    _In_ WORD wType,
    _In_ WORD Xid,
    _In_ BOOL fRecursionDesired
    );
BOOL
WINAPI
DnsWriteQuestionToBuffer_UTF8(
    _Inout_ PDNS_MESSAGE_BUFFER pDnsBuffer,
    _Inout_ PDWORD pdwBufferSize,
    _In_ PCSTR pszName,
    _In_ WORD wType,
    _In_ WORD Xid,
    _In_ BOOL fRecursionDesired
    );
DNS_STATUS
WINAPI
DnsExtractRecordsFromMessage_W(
    _In_ PDNS_MESSAGE_BUFFER pDnsBuffer,
    _In_ WORD wMessageLength,
    _Outptr_ PDNS_RECORD * ppRecord
    );
DNS_STATUS
WINAPI
DnsExtractRecordsFromMessage_UTF8(
    _In_ PDNS_MESSAGE_BUFFER pDnsBuffer,
    _In_ WORD wMessageLength,
    _Outptr_ PDNS_RECORD * ppRecord
    );
DWORD
WINAPI
DnsGetProxyInformation(
    _In_ PCWSTR hostName,
    _Inout_ DNS_PROXY_INFORMATION * proxyInformation,
    _Inout_opt_ DNS_PROXY_INFORMATION * defaultProxyInformation,
    _In_opt_ DNS_PROXY_COMPLETION_ROUTINE completionRoutine,
    _In_opt_ void * completionContext
    );
VOID
WINAPI
DnsFreeProxyName(
    _Frees_ptr_opt_ PWSTR proxyName
    );
typedef enum _DNS_CONNECTION_PROXY_TYPE
{
    DNS_CONNECTION_PROXY_TYPE_NULL = 0,
    DNS_CONNECTION_PROXY_TYPE_HTTP = 1,
    DNS_CONNECTION_PROXY_TYPE_WAP = 2,
    DNS_CONNECTION_PROXY_TYPE_SOCKS4 = 4,
    DNS_CONNECTION_PROXY_TYPE_SOCKS5 = 5
} DNS_CONNECTION_PROXY_TYPE;
typedef enum _DNS_CONNECTION_PROXY_INFO_SWITCH
{
    DNS_CONNECTION_PROXY_INFO_SWITCH_CONFIG = 0,
    DNS_CONNECTION_PROXY_INFO_SWITCH_SCRIPT,
    DNS_CONNECTION_PROXY_INFO_SWITCH_WPAD
} DNS_CONNECTION_PROXY_INFO_SWITCH;
#pragma warning(push)
#pragma warning(disable: 4201)
typedef struct _DNS_CONNECTION_PROXY_INFO
{
    DWORD Version;
    WCHAR *pwszFriendlyName;
    DWORD Flags;
    DNS_CONNECTION_PROXY_INFO_SWITCH Switch;
    union
    {
        struct _DNS_CONNECTION_PROXY_INFO_CONFIG
        {
            WCHAR *pwszServer;
            WCHAR *pwszUsername;
            WCHAR *pwszPassword;
            WCHAR *pwszException;
            WCHAR *pwszExtraInfo;
            WORD Port;
        } Config;
        struct _DNS_CONNECTION_PROXY_INFO_SCRIPT
        {
            WCHAR *pwszScript;
            WCHAR *pwszUsername;
            WCHAR *pwszPassword;
        } Script;
    };
} DNS_CONNECTION_PROXY_INFO, *PDNS_CONNECTION_PROXY_INFO;
#pragma warning(pop)
typedef struct _DNS_CONNECTION_PROXY_INFO_EX
{
    DNS_CONNECTION_PROXY_INFO ProxyInfo;
    DWORD dwInterfaceIndex;
    WCHAR *pwszConnectionName;
    BOOL fDirectConfiguration;
    HANDLE hConnection;
} DNS_CONNECTION_PROXY_INFO_EX, *PDNS_CONNECTION_PROXY_INFO_EX;
typedef struct _DNS_CONNECTION_PROXY_ELEMENT
{
    DNS_CONNECTION_PROXY_TYPE Type;
    DNS_CONNECTION_PROXY_INFO Info;
} DNS_CONNECTION_PROXY_ELEMENT;
typedef struct _DNS_CONNECTION_PROXY_LIST
{
    DWORD cProxies;
    DNS_CONNECTION_PROXY_ELEMENT *pProxies;
} DNS_CONNECTION_PROXY_LIST;
typedef struct _DNS_CONNECTION_NAME
{
    WCHAR wszName[DNS_CONNECTION_NAME_MAX_LENGTH + 1];
} DNS_CONNECTION_NAME;
typedef struct _DNS_CONNECTION_NAME_LIST
{
    DWORD cNames;
    DNS_CONNECTION_NAME *pNames;
} DNS_CONNECTION_NAME_LIST;
DWORD
DnsConnectionGetProxyInfoForHostUrl(
    _In_z_ PCWSTR pwszHostUrl,
    _In_reads_opt_(dwSelectionContextLength) BYTE *pSelectionContext,
    _In_ DWORD dwSelectionContextLength,
    _In_ DWORD dwExplicitInterfaceIndex,
    _Out_ DNS_CONNECTION_PROXY_INFO_EX *pProxyInfoEx
);
VOID
DnsConnectionFreeProxyInfoEx(
    _Inout_ DNS_CONNECTION_PROXY_INFO_EX *pProxyInfoEx
);
DWORD
DnsConnectionGetProxyInfo(
    _In_z_ PCWSTR pwszConnectionName,
    _In_ DNS_CONNECTION_PROXY_TYPE Type,
    _Out_ DNS_CONNECTION_PROXY_INFO *pProxyInfo
);
VOID
DnsConnectionFreeProxyInfo(
    _Inout_ DNS_CONNECTION_PROXY_INFO *pProxyInfo
);
DWORD
DnsConnectionSetProxyInfo(
    _In_z_ PCWSTR pwszConnectionName,
    _In_ DNS_CONNECTION_PROXY_TYPE Type,
    _In_ const DNS_CONNECTION_PROXY_INFO *pProxyInfo
);
DWORD
DnsConnectionDeleteProxyInfo(
    _In_z_ PCWSTR pwszConnectionName,
    _In_ DNS_CONNECTION_PROXY_TYPE Type
);
DWORD
DnsConnectionGetProxyList(
    _In_z_ PCWSTR pwszConnectionName,
    _Out_ DNS_CONNECTION_PROXY_LIST *pProxyList
);
VOID
DnsConnectionFreeProxyList(
    _Inout_ DNS_CONNECTION_PROXY_LIST *pProxyList
);
DWORD
DnsConnectionGetNameList(
    _Out_ DNS_CONNECTION_NAME_LIST *pNameList
);
VOID
DnsConnectionFreeNameList(
    _Inout_ DNS_CONNECTION_NAME_LIST *pNameList
);
typedef struct _DNS_CONNECTION_IFINDEX_ENTRY
{
    PCWSTR pwszConnectionName;
    DWORD dwIfIndex;
} DNS_CONNECTION_IFINDEX_ENTRY;
typedef struct _DNS_CONNECTION_IFINDEX_LIST
{
    DNS_CONNECTION_IFINDEX_ENTRY *pConnectionIfIndexEntries;
    DWORD nEntries;
} DNS_CONNECTION_IFINDEX_LIST;
DWORD
DnsConnectionUpdateIfIndexTable(
    _In_ DNS_CONNECTION_IFINDEX_LIST *pConnectionIfIndexEntries
);
typedef struct _DNS_CONNECTION_POLICY_ENTRY
{
    PCWSTR pwszHost;
    PCWSTR pwszAppId;
    DWORD cbAppSid;
    PBYTE pbAppSid;
    DWORD nConnections;
    PCWSTR *ppwszConnections;
    DWORD dwPolicyEntryFlags;
} DNS_CONNECTION_POLICY_ENTRY, *PDNS_CONNECTION_POLICY_ENTRY;
typedef struct _DNS_CONNECTION_POLICY_ENTRY_LIST
{
    [size_is(nEntries)] DNS_CONNECTION_POLICY_ENTRY *pPolicyEntries;
    DWORD nEntries;
} DNS_CONNECTION_POLICY_ENTRY_LIST;
typedef enum
{
    TAG_DNS_CONNECTION_POLICY_TAG_DEFAULT = 0,
    TAG_DNS_CONNECTION_POLICY_TAG_CONNECTION_MANAGER,
    TAG_DNS_CONNECTION_POLICY_TAG_WWWPT
} DNS_CONNECTION_POLICY_TAG;
DWORD
DnsConnectionSetPolicyEntries(
    _In_ DNS_CONNECTION_POLICY_TAG PolicyEntryTag,
    _In_ DNS_CONNECTION_POLICY_ENTRY_LIST *pPolicyEntryList
);
DWORD
DnsConnectionDeletePolicyEntries(
    _In_ DNS_CONNECTION_POLICY_TAG PolicyEntryTag
);
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
typedef[string] wchar_t *DNSSD_RPC_STRING;
typedef struct _DNS_SERVICE_INSTANCE
{
    DNSSD_RPC_STRING pszInstanceName;
    DNSSD_RPC_STRING pszHostName;
    IP4_ADDRESS *ip4Address;
    IP6_ADDRESS *ip6Address;
    WORD wPort;
    WORD wPriority;
    WORD wWeight;
    DWORD dwPropertyCount;
    [size_is(dwPropertyCount)] DNSSD_RPC_STRING *keys;
    [size_is(dwPropertyCount)] DNSSD_RPC_STRING *values;
    DWORD dwInterfaceIndex;
} DNS_SERVICE_INSTANCE, *PDNS_SERVICE_INSTANCE;
PDNS_SERVICE_INSTANCE
DnsServiceConstructInstance(
    _In_ PCWSTR pServiceName,
    _In_ PCWSTR pHostName,
    _In_opt_ PIP4_ADDRESS pIp4,
    _In_opt_ PIP6_ADDRESS pIp6,
    _In_ WORD wPort,
    _In_ WORD wPriority,
    _In_ WORD wWeight,
    _In_ DWORD dwPropertiesCount,
    __in_ecount(dwPropertiesCount) PCWSTR *keys,
    __in_ecount(dwPropertiesCount) PCWSTR *values
    );
PDNS_SERVICE_INSTANCE
DnsServiceCopyInstance(
    _In_ PDNS_SERVICE_INSTANCE pOrig
    );
VOID
DnsServiceFreeInstance(
    _In_ PDNS_SERVICE_INSTANCE pInstance
    );
typedef struct _DNS_SERVICE_CANCEL{
    PVOID reserved;
} DNS_SERVICE_CANCEL, *PDNS_SERVICE_CANCEL;
typedef
VOID
WINAPI
DNS_SERVICE_BROWSE_CALLBACK(
    _In_ DWORD Status,
    _In_ PVOID pQueryContext,
    _In_ PDNS_RECORD pDnsRecord
    );
typedef DNS_SERVICE_BROWSE_CALLBACK *PDNS_SERVICE_BROWSE_CALLBACK;
#pragma warning(push)
#pragma warning(disable: 4201)
typedef struct _DNS_SERVICE_BROWSE_REQUEST
{
    ULONG Version;
    ULONG InterfaceIndex;
    PCWSTR QueryName;
    union
    {
        PDNS_SERVICE_BROWSE_CALLBACK pBrowseCallback;
        DNS_QUERY_COMPLETION_ROUTINE *pBrowseCallbackV2;
    };
    PVOID pQueryContext;
} DNS_SERVICE_BROWSE_REQUEST, *PDNS_SERVICE_BROWSE_REQUEST;
#pragma warning(pop)
DNS_STATUS
WINAPI
DnsServiceBrowse(
    _In_ PDNS_SERVICE_BROWSE_REQUEST pRequest,
    _Inout_ PDNS_SERVICE_CANCEL pCancel
    );
DNS_STATUS
WINAPI
DnsServiceBrowseCancel(
    _In_ PDNS_SERVICE_CANCEL pCancelHandle
    );
typedef
VOID
WINAPI
DNS_SERVICE_RESOLVE_COMPLETE(
    _In_ DWORD Status,
    _In_ PVOID pQueryContext,
    _In_ PDNS_SERVICE_INSTANCE pInstance
    );
typedef DNS_SERVICE_RESOLVE_COMPLETE *PDNS_SERVICE_RESOLVE_COMPLETE;
typedef struct _DNS_SERVICE_RESOLVE_REQUEST{
    ULONG Version;
    ULONG InterfaceIndex;
    PWSTR QueryName;
    PDNS_SERVICE_RESOLVE_COMPLETE pResolveCompletionCallback;
    PVOID pQueryContext;
} DNS_SERVICE_RESOLVE_REQUEST, *PDNS_SERVICE_RESOLVE_REQUEST;
DNS_STATUS
WINAPI
DnsServiceResolve(
    _In_ PDNS_SERVICE_RESOLVE_REQUEST pRequest,
    _Inout_ PDNS_SERVICE_CANCEL pCancel
    );
DNS_STATUS
WINAPI
DnsServiceResolveCancel(
    _In_ PDNS_SERVICE_CANCEL pCancelHandle
    );
typedef
VOID
WINAPI
DNS_SERVICE_REGISTER_COMPLETE(
    _In_ DWORD Status,
    _In_ PVOID pQueryContext,
    _In_ PDNS_SERVICE_INSTANCE pInstance
    );
typedef DNS_SERVICE_REGISTER_COMPLETE *PDNS_SERVICE_REGISTER_COMPLETE;
typedef struct _DNS_SERVICE_REGISTER_REQUEST{
    ULONG Version;
    ULONG InterfaceIndex;
    PDNS_SERVICE_INSTANCE pServiceInstance;
    PDNS_SERVICE_REGISTER_COMPLETE pRegisterCompletionCallback;
    PVOID pQueryContext;
    HANDLE hCredentials;
    BOOL unicastEnabled;
} DNS_SERVICE_REGISTER_REQUEST, *PDNS_SERVICE_REGISTER_REQUEST;
DWORD
DnsServiceRegister(
    _In_ PDNS_SERVICE_REGISTER_REQUEST pRequest,
    _Inout_opt_ PDNS_SERVICE_CANCEL pCancel
    );
DWORD
DnsServiceDeRegister(
    _In_ PDNS_SERVICE_REGISTER_REQUEST pRequest,
    _Inout_opt_ PDNS_SERVICE_CANCEL pCancel
    );
DWORD
DnsServiceRegisterCancel(
    _In_ PDNS_SERVICE_CANCEL pCancelHandle
    );
typedef struct _MDNS_QUERY_HANDLE
{
    WCHAR nameBuf[DNS_MAX_NAME_BUFFER_LENGTH];
    WORD wType;
    PVOID pSubscription;
    PVOID pWnfCallbackParams;
    ULONG stateNameData[2];
} MDNS_QUERY_HANDLE, *PMDNS_QUERY_HANDLE;
typedef VOID WINAPI MDNS_QUERY_CALLBACK(
    _In_ PVOID pQueryContext,
    _Inout_ PMDNS_QUERY_HANDLE pQueryHandle,
    _Inout_ PDNS_QUERY_RESULT pQueryResults
    );
typedef MDNS_QUERY_CALLBACK *PMDNS_QUERY_CALLBACK;
typedef struct _MDNS_QUERY_REQUEST
{
    ULONG Version;
    ULONG ulRefCount;
    PCWSTR Query;
    WORD QueryType;
    ULONG64 QueryOptions;
    ULONG InterfaceIndex;
    PMDNS_QUERY_CALLBACK pQueryCallback;
    PVOID pQueryContext;
    BOOL fAnswerReceived;
    ULONG ulResendCount;
} MDNS_QUERY_REQUEST, *PMDNS_QUERY_REQUEST;
DNS_STATUS WINAPI DnsStartMulticastQuery(
    _In_ PMDNS_QUERY_REQUEST pQueryRequest,
    _Inout_ PMDNS_QUERY_HANDLE pHandle
    );
DNS_STATUS WINAPI DnsStopMulticastQuery(
    _Inout_ PMDNS_QUERY_HANDLE pHandle
    );
}
#endif
#pragma endregion

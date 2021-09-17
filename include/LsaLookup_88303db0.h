#include <winapifamily.h>
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
extern "C" {
typedef UNICODE_STRING LSA_UNICODE_STRING, *PLSA_UNICODE_STRING;
typedef STRING LSA_STRING, *PLSA_STRING;
typedef OBJECT_ATTRIBUTES LSA_OBJECT_ATTRIBUTES, *PLSA_OBJECT_ATTRIBUTES;
typedef struct _LSA_TRUST_INFORMATION {
    LSA_UNICODE_STRING Name;
    PSID Sid;
} LSA_TRUST_INFORMATION, *PLSA_TRUST_INFORMATION;
typedef struct _LSA_REFERENCED_DOMAIN_LIST {
    ULONG Entries;
    PLSA_TRUST_INFORMATION Domains;
} LSA_REFERENCED_DOMAIN_LIST, *PLSA_REFERENCED_DOMAIN_LIST;
typedef struct _LSA_TRANSLATED_SID2 {
    SID_NAME_USE Use;
    PSID Sid;
    LONG DomainIndex;
    ULONG Flags;
} LSA_TRANSLATED_SID2, *PLSA_TRANSLATED_SID2;
typedef struct _LSA_TRANSLATED_NAME {
    SID_NAME_USE Use;
    LSA_UNICODE_STRING Name;
    LONG DomainIndex;
} LSA_TRANSLATED_NAME, *PLSA_TRANSLATED_NAME;
typedef struct _POLICY_ACCOUNT_DOMAIN_INFO {
    LSA_UNICODE_STRING DomainName;
    PSID DomainSid;
} POLICY_ACCOUNT_DOMAIN_INFO, *PPOLICY_ACCOUNT_DOMAIN_INFO;
typedef struct _POLICY_DNS_DOMAIN_INFO
{
    LSA_UNICODE_STRING Name;
    LSA_UNICODE_STRING DnsDomainName;
    LSA_UNICODE_STRING DnsForestName;
    GUID DomainGuid;
    PSID Sid;
} POLICY_DNS_DOMAIN_INFO, *PPOLICY_DNS_DOMAIN_INFO;
typedef enum _LSA_LOOKUP_DOMAIN_INFO_CLASS {
    AccountDomainInformation = 5,
    DnsDomainInformation = 12
} LSA_LOOKUP_DOMAIN_INFO_CLASS, *PLSA_LOOKUP_DOMAIN_INFO_CLASS;
typedef PVOID LSA_LOOKUP_HANDLE, *PLSA_LOOKUP_HANDLE;
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
NTSTATUS
LsaLookupOpenLocalPolicy(
    _In_ PLSA_OBJECT_ATTRIBUTES ObjectAttributes,
    _In_ ACCESS_MASK AccessMask,
    _Inout_ PLSA_LOOKUP_HANDLE PolicyHandle
    );
NTSTATUS
LsaLookupClose(
    _In_ LSA_LOOKUP_HANDLE ObjectHandle
    );
NTSTATUS
LsaLookupTranslateSids(
    _In_ LSA_LOOKUP_HANDLE PolicyHandle,
    _In_ ULONG Count,
    _In_ PSID *Sids,
    _Out_ PLSA_REFERENCED_DOMAIN_LIST *ReferencedDomains,
    _Out_ PLSA_TRANSLATED_NAME *Names
    );
NTSTATUS
LsaLookupTranslateNames(
    _In_ LSA_LOOKUP_HANDLE PolicyHandle,
    _In_ ULONG Flags,
    _In_ ULONG Count,
    _In_ PLSA_UNICODE_STRING Names,
    _Out_ PLSA_REFERENCED_DOMAIN_LIST *ReferencedDomains,
    _Out_ PLSA_TRANSLATED_SID2 *Sids
    );
NTSTATUS
LsaLookupGetDomainInfo(
    _In_ LSA_LOOKUP_HANDLE PolicyHandle,
    _In_ LSA_LOOKUP_DOMAIN_INFO_CLASS DomainInfoClass,
    _Out_ PVOID *DomainInfo
    );
NTSTATUS
LsaLookupFreeMemory(
    _In_ PVOID Buffer
    );
#endif
#pragma endregion
#pragma region Desktop or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
}
#endif
#pragma endregion

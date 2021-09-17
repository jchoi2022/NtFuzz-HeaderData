       
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
                                            SIPAEVENTTYPE_CONTAINER + \
                                            0x0001)
                                            SIPAEVENTTYPE_CONTAINER + \
                                            0x0002)
                                            SIPAEVENTTYPE_CONTAINER + \
                                            0x0003)
                                            SIPAEVENTTYPE_AGGREGATION + \
                                            SIPAEVENTTYPE_CONTAINER + \
                                            0x0004)
                                                       SIPAEVENTTYPE_CONTAINER + \
                                                       0x0005)
                                                       SIPAEVENTTYPE_CONTAINER + \
                                                       0x0006)
                                            0x0001)
                                            SIPAEVENTTYPE_ERROR + \
                                            0x0002)
                                            0x0003)
                                            SIPAEVENTTYPE_ERROR + \
                                            0x0004)
                                            0x0001)
                                            0x0002)
                                            0x0003)
                                            0x0004)
                                            0x0005)
                                            0x0006)
                                            0x0007)
                                            0x0008)
                                            0x0009)
                                            0x000a)
                                            0x000B)
                                            0x0001)
                                            0x0002)
                                            0x0001)
                                            0x0002)
                                            0x0003)
                                            0x0004)
                                            0x0005)
                                            0x0006)
                                            0x0007)
                                            0x0008)
                                            0x0009)
                                            0x000A)
                                            0x000B)
                                            0x000C)
                                            0x000D)
                                            0x000E)
                                           0x000F)
                                           (SIPAEVENTTYPE_OSPARAMETER + \
                                           0x0010)
                                           (SIPAEVENTTYPE_OSPARAMETER + \
                                           0x0011)
                                           0x0012)
                                            0x0013)
                                           0x0014)
                                            0x0020)
                                            0x0021)
                                                 0x0022)
                                           0x0023)
                                            0x0024)
                                            0x0025)
                                            0x0026)
                                             0x0027)
                                             0x0028)
                                             0x0029)
                                            0x0001)
                                            0x0002)
                                            0x0001)
                                            0x0002)
                                            0x0003)
                                            0x0004)
                                            0x0005)
                                            0x0006)
                                            0x0007)
                                            0x0008)
                                            0x0009)
                                            0x000a)
                                            0x000b)
                                            SIPAEVENTTYPE_TRUSTPOINT + \
                                            0x0001)
                                            SIPAEVENTTYPE_TRUSTPOINT + \
                                            0x0002)
                                            SIPAEVENTTYPE_TRUSTPOINT + \
                                            0x0003)
                                            SIPAEVENTTYPE_TRUSTPOINT + \
                                            0x0004)
                                            0x0001)
                                            0x0002)
                                            0x0003)
                                            0x0004)
                                           0x0001)
                                           0x0002)
                                           0x0003)
                                           0x004)
                                           (SIPAEVENTTYPE_VBS + \
                                           0x0005)
                                           (SIPAEVENTTYPE_VBS + \
                                           0x006)
                                           0x007)
                                           (SIPAEVENTTYPE_VBS + \
                                           0x008)
                                            0x001)
                                            0x001)
#pragma pack(push,1)
typedef UINT16 WBCL_DIGEST_ALG_ID;
typedef struct _WBCL_Iterator
{
  PVOID firstElementPtr;
  UINT32 logSize;
  PVOID currentElementPtr;
  UINT32 currentElementSize;
  UINT16 digestSize;
  UINT16 logFormat;
  UINT32 numberOfDigests;
  PVOID digestSizes;
  WBCL_DIGEST_ALG_ID hashAlgorithm;
} WBCL_Iterator, *PWBCL_Iterator;
HRESULT
WbclApiInitIterator(
    _In_ PVOID pLogBuffer,
    _In_ UINT32 logSize,
    _Out_ WBCL_Iterator* pWbclIterator);
HRESULT
WbclApiGetCurrentElement(
    _In_ WBCL_Iterator* pWbclIterator,
    _Out_ UINT32* pcrIndex,
    _Out_ UINT32* eventType,
    _Outptr_opt_result_bytebuffer_(pWbclIterator->digestSize) BYTE** ppDigest,
    _Out_opt_ UINT32* pcbElementDataSize,
    _Outptr_opt_result_bytebuffer_(*pcbElementDataSize) BYTE** ppbElementData
    );
HRESULT
WbclApiMoveToNextElement(
    _In_ WBCL_Iterator* pWbclIterator);
typedef struct _TCG_PCClientPCREventStruct
{
    UINT32 pcrIndex;
    UINT32 eventType;
    BYTE digest[WBCL_HASH_LEN_SHA1];
    UINT32 eventDataSize;
    _Field_size_bytes_(eventDataSize)
    BYTE event[1];
} TCG_PCClientPCREventStruct, *PTCG_PCClientPCREventStruct;
typedef const TCG_PCClientPCREventStruct *PCTCG_PCClientPCREventStruct;
typedef struct _TCG_PCClientTaggedEventStruct
{
    UINT32 EventID;
    UINT32 EventDataSize;
    _Field_size_bytes_(EventDataSize)
    BYTE EventData[ANYSIZE_ARRAY];
} TCG_PCClientTaggedEventStruct, *PTCG_PCClientTaggedEventStruct;
typedef const TCG_PCClientTaggedEventStruct *PCTCG_PCClientTaggedEventStruct;
typedef struct _WBCL_LogHdr
{
    UINT32 signature;
    UINT32 version;
    UINT32 entries;
    UINT32 length;
} WBCL_LogHdr, *PWBCL_LogHdr;
typedef struct tag_SIPAEVENT_VSM_IDK_RSA_INFO
{
    ULONG32 KeyBitLength;
    ULONG32 PublicExpLengthBytes;
    ULONG32 ModulusSizeBytes;
    BYTE PublicKeyData[ANYSIZE_ARRAY];
} SIPAEVENT_VSM_IDK_RSA_INFO, *PSIPAEVENT_VSM_IDK_RSA_INFO;
typedef struct tag_SIPAEVENT_VSM_IDK_INFO_PAYLOAD
{
    ULONG32 KeyAlgID;
    union
    {
        SIPAEVENT_VSM_IDK_RSA_INFO RsaKeyInfo;
    } DUMMYUNIONNAME;
} SIPAEVENT_VSM_IDK_INFO_PAYLOAD, *PSIPAEVENT_VSM_IDK_INFO_PAYLOAD;
typedef struct tag_SIPAEVENT_SI_POLICY_PAYLOAD
{
    ULONGLONG PolicyVersion;
    UINT16 PolicyNameLength;
    UINT16 HashAlgID;
    UINT32 DigestLength;
    _Field_size_bytes_(PolicyNameLength + DigestLength)
    BYTE VarLengthData[ANYSIZE_ARRAY];
} SIPAEVENT_SI_POLICY_PAYLOAD, *PSIPAEVENT_SI_POLICY_PAYLOAD;
typedef struct tag_SIPAEVENT_REVOCATION_LIST_PAYLOAD
{
    LONGLONG CreationTime;
    UINT32 DigestLength;
    UINT16 HashAlgID;
    _Field_size_bytes_(DigestLength)
    BYTE Digest[ANYSIZE_ARRAY];
} SIPAEVENT_REVOCATION_LIST_PAYLOAD, *PSIPAEVENT_REVOCATION_LIST_PAYLOAD;
typedef struct tag_SIPAEVENT_KSR_SIGNATURE_PAYLOAD
{
    ULONG32 SignAlgID;
    UINT32 SignatureLength;
    _Field_size_bytes_(SignatureLength)
    BYTE Signature[ANYSIZE_ARRAY];
} SIPAEVENT_KSR_SIGNATURE_PAYLOAD, *PSIPAEVENT_KSR_SIGNATURE_PAYLOAD;
typedef struct tag_SIPAEVENT_SBCP_INFO_PAYLOAD_V1
{
    UINT32 PayloadVersion;
    UINT32 VarDataOffset;
    UINT16 HashAlgID;
    _Field_range_(1, 64)
    UINT16 DigestLength;
    UINT32 Options;
    UINT32 SignersCount;
    _Field_size_bytes_(DigestLength)
    BYTE VarData[ANYSIZE_ARRAY];
} SIPAEVENT_SBCP_INFO_PAYLOAD_V1, *PSIPAEVENT_SBCP_INFO_PAYLOAD_V1;
#pragma pack(pop)
#endif
#pragma endregion

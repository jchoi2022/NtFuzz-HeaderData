#include <evntprov.h>
extern "C" {
#pragma region Configuration macros and typedefs
typedef PETWENABLECALLBACK TLG_PENABLECALLBACK;
typedef NTSTATUS TLG_STATUS;
  #define _TLG_ENABLE_TraceLoggingWriteEx 1
    #define TLG_INLINE __inline
    #define TLG_RAISEASSERTIONFAILURE() DbgRaiseAssertionFailure()
    #define TLG_PFORCEINLINE __forceinline
    #define TLG_NOEXCEPT
  #define _TLG_EXTERN_C extern
#pragma endregion
#pragma region Public interface
typedef struct _TlgProvider_t const* TraceLoggingHProvider;
    _TlgDefineProvider_annotation(handleVariable, _Tlg##handleVariable##Prov, 1, providerName); \
    _TlgProviderStorage_imp(_Tlg##handleVariable##Prov, providerName, providerId, 1, __VA_ARGS__); \
    _TLG_EXTERN_C const TraceLoggingHProvider handleVariable = &_Tlg##handleVariable##Prov
    _TlgProviderStorage_imp(storageVariable, providerName, providerId, 0, __VA_ARGS__)
    _TLG_EXTERN_C const TraceLoggingHProvider handleVariable
_IRQL_requires_max_(PASSIVE_LEVEL)
TLG_INLINE void TraceLoggingUnregister(
    TraceLoggingHProvider _Inout_ hProvider)
    TLG_NOEXCEPT;
_IRQL_requires_max_(PASSIVE_LEVEL)
TLG_INLINE TLG_STATUS TraceLoggingRegister(
    TraceLoggingHProvider _Inout_ hProvider)
    TLG_NOEXCEPT;
_IRQL_requires_max_(PASSIVE_LEVEL)
TLG_INLINE TLG_STATUS TraceLoggingRegisterEx(
    TraceLoggingHProvider _Inout_ hProvider,
    _In_opt_ TLG_PENABLECALLBACK pEnableCallback,
    _In_opt_ PVOID pCallbackContext)
    TLG_NOEXCEPT;
_IRQL_requires_max_(PASSIVE_LEVEL)
TLG_INLINE TLG_STATUS TraceLoggingSetInformation(
    TraceLoggingHProvider _Inout_ hProvider,
    _In_ EVENT_INFO_CLASS informationClass,
    _In_reads_bytes_opt_(cbInformation) PVOID pvInformation,
    _In_ ULONG cbInformation)
    TLG_NOEXCEPT;
_IRQL_requires_max_(HIGH_LEVEL)
TLG_INLINE BOOLEAN TraceLoggingProviderEnabled(
    TraceLoggingHProvider _In_ hProvider,
    UCHAR eventLevel,
    ULONGLONG eventKeyword)
    TLG_NOEXCEPT;
_IRQL_requires_max_(HIGH_LEVEL)
TLG_INLINE GUID TraceLoggingProviderId(
    TraceLoggingHProvider _In_ hProvider)
    TLG_NOEXCEPT;
    _TlgWrite_imp(_TlgWrite, \
    hProvider, eventName, \
    (NULL, NULL), \
    __VA_ARGS__)
    _TlgWrite_imp(_TlgWrite, \
    hProvider, eventName, \
    ((pActivityId), (pRelatedActivityId)), \
    __VA_ARGS__)
    _TlgWrite_imp(_TlgWriteEx, \
    hProvider, eventName, \
    ((filter), (flags), (pActivityId), (pRelatedActivityId)), \
    __VA_ARGS__)
    _TlgArg(,,,, _TlgLevel, eventLevel,,)
    _TlgOptionGroup(g1, g2, g3, g4, g5, g6, g7, g8, g9, g10, g11)
    _TlgArg(,,,, _TlgOpcode, eventOpcode,,)
    _TlgArg(,,,, _TlgKeyword, eventKeyword,,)
    _TlgArg(,,,, _TlgChannel, eventChannel,,)
    _TlgArg(,,,, _TlgEvtTag, _TlgEvtTagEncode(eventTag),,)
    _TlgArg(,,,, _TlgDesc, 0,,, description)
    _TlgArg(,,,, _TlgCustAnn, 0,, key, value)
    _TlgArg(, _TlgInSTRUCT,,, _TlgStruct,, fieldCount, name, __VA_ARGS__)
    _TlgArg(, protocol, bSchema, cbSchema, _TlgCustom, pbValue, cbValue, __VA_ARGS__)
#pragma endregion
#pragma region Utility macros (for internal use only)
    #define _TLG_DEBUG 0
    #define _TLG_ASSERT(exp, str) ((void)0)
    #define _TLG_CASSERT(exp, str) C_ASSERT(exp)
    _TLG_SPLIT(0, _TLG_CAT(_TLG_IS_PARENTHESIZED_imp, _TLG_IS_PARENTHESIZED_imp0 __VA_ARGS__))
    _TLG_IS_PARENTHESIZED(__VA_ARGS__), \
    _TLG_IS_PARENTHESIZED(_TLG_PARENTHESIZE __VA_ARGS__()), \
    0)
         a1, a2, a3, a4, a5, a6, a7, a8, a9, \
    a10,a11,a12,a13,a14,a15,a16,a17,a18,a19, \
    a20,a21,a22,a23,a24,a25,a26,a27,a28,a29, \
    a30,a31,a32,a33,a34,a35,a36,a37,a38,a39, \
    a40,a41,a42,a43,a44,a45,a46,a47,a48,a49, \
    a50,a51,a52,a53,a54,a55,a56,a57,a58,a59, \
    a60,a61,a62,a63,a64,a65,a66,a67,a68,a69, \
    a70,a71,a72,a73,a74,a75,a76,a77,a78,a79, \
    a80,a81,a82,a83,a84,a85,a86,a87,a88,a89, \
    a90,a91,a92,a93,a94,a95,a96,a97,a98,a99, \
    size, ...) size
    99,98,97,96,95,94,93,92,91,90, \
    89,88,87,86,85,84,83,82,81,80, \
    79,78,77,76,75,74,73,72,71,70, \
    69,68,67,66,65,64,63,62,61,60, \
    59,58,57,56,55,54,53,52,51,50, \
    49,48,47,46,45,44,43,42,41,40, \
    39,38,37,36,35,34,33,32,31,30, \
    29,28,27,26,25,24,23,22,21,20, \
    19,18,17,16,15,14,13,12,11,10, \
     9, 8, 7, 6, 5, 4, 3, 2, 1,),)
#pragma endregion
#pragma region Declarations
enum TlgIn_t
{
    TlgInNULL,
    TlgInUNICODESTRING,
    TlgInANSISTRING,
    TlgInINT8,
    TlgInUINT8,
    TlgInINT16,
    TlgInUINT16,
    TlgInINT32,
    TlgInUINT32,
    TlgInINT64,
    TlgInUINT64,
    TlgInFLOAT,
    TlgInDOUBLE,
    TlgInBOOL32,
    TlgInBINARY,
    TlgInGUID,
    _TlgInPOINTER_unsupported,
    TlgInFILETIME,
    TlgInSYSTEMTIME,
    TlgInSID,
    TlgInHEXINT32,
    TlgInHEXINT64,
    TlgInCOUNTEDSTRING,
    TlgInCOUNTEDANSISTRING,
    _TlgInSTRUCT,
    TlgInCOUNTEDBINARY,
    _TlgInMax,
    TlgInINTPTR = sizeof(void*) == 8 ? TlgInINT64 : TlgInINT32,
    TlgInUINTPTR = sizeof(void*) == 8 ? TlgInUINT64 : TlgInUINT32,
    TlgInPOINTER = sizeof(void*) == 8 ? TlgInHEXINT64 : TlgInHEXINT32,
    _TlgInCcount = 32,
    TlgInVcount = 64,
    _TlgInChain = 128,
    _TlgInCustom = TlgInVcount | _TlgInCcount,
    _TlgInTypeMask = 31,
    _TlgInCountMask = TlgInVcount | _TlgInCcount,
    _TlgInFlagMask = _TlgInChain | TlgInVcount | _TlgInCcount
};
_TLG_CASSERT(_TlgInMax <= _TlgInCcount, "Too many TlgIn_t values.");
    _TLG_CASSERT( \
        ((in_type)&_TlgInTypeMask) != _TlgInPOINTER_unsupported && \
        ((in_type)&_TlgInTypeMask) != _TlgInSTRUCT && \
        ((in_type)|_TlgInTypeMask|TlgInVcount) == (_TlgInTypeMask|TlgInVcount) && \
        (in_type) != (TlgInBINARY|TlgInVcount), \
        "Invalid packed metadata in_type: " #in_type)
enum TlgOut_t
{
    TlgOutNULL,
    TlgOutNOPRINT,
    TlgOutSTRING,
    TlgOutBOOLEAN,
    TlgOutHEX,
    TlgOutPID,
    TlgOutTID,
    TlgOutPORT,
    TlgOutIPV4,
    TlgOutIPV6,
    TlgOutSOCKETADDRESS,
    TlgOutXML,
    TlgOutJSON,
    TlgOutWIN32ERROR,
    TlgOutNTSTATUS,
    TlgOutHRESULT,
    TlgOutFILETIME,
    TlgOutSIGNED,
    TlgOutUNSIGNED,
    TlgOutUTF8 = 35,
    TlgOutPKCS7_WITH_TYPE_INFO = 36,
    TlgOutCODE_POINTER = 37,
    TlgOutDATETIME_UTC = 38,
    _TlgOutMax,
    _TlgOutChain = 128,
    _TlgOutTypeMask = _TlgOutChain - 1
};
_TLG_CASSERT(_TlgOutMax <= _TlgOutChain, "Too many TlgOut_t values.");
enum _TlgBlob_t
{
    _TlgBlobNone,
    _TlgBlobEnd,
    _TlgBlobProvider,
    _TlgBlobEvent3,
    _TlgBlobProvider3,
    _TlgBlobEvent2,
    _TlgBlobEvent4,
    _TlgBlobMax
};
enum _TlgFlags_t
{
    _TlgFlagsNone = 0,
    _TlgFlagsPtr64 = 1
};
enum _TlgOptions_t
{
    _TlgOptionNone = 0,
    _TlgOptionGroup = 1
};
struct _TraceLoggingMetadata_t
{
    UINT32 Signature;
    UINT16 Size;
    UINT8 Version;
    UINT8 Flags;
    UINT64 Magic;
};
#include <pshpack1.h>
struct _TlgProviderMetadata_t
{
    UINT8 Type;
    GUID ProviderId;
    UINT16 RemainingSize;
};
struct _TlgEventMetadata_t
{
    UINT8 Type;
    UCHAR Channel;
    UCHAR Level;
    UCHAR Opcode;
    ULONGLONG Keyword;
    UINT16 RemainingSize;
};
#include <poppack.h>
#include <pshpack8.h>
struct _TlgProvider_t
{
    UINT32 LevelPlus1;
    UINT16 const UNALIGNED* ProviderMetadataPtr;
    ULONGLONG KeywordAny;
    ULONGLONG KeywordAll;
    REGHANDLE RegHandle;
    TLG_PENABLECALLBACK EnableCallback;
    PVOID CallbackContext;
};
struct _TlgReflectorTag_Param0IsHProvider;
struct _TlgReflectorTag_Param0IsProviderType;
#include <poppack.h>
#pragma endregion
#pragma region Helper functions
#pragma code_seg(push)
  #define TLG_PAGED_CODE() PAGED_CODE()
  #define TLG_EVENT_REGISTER EtwRegister
  #define TLG_EVENT_UNREGISTER EtwUnregister
  #define TLG_EVENT_WRITE_TRANSFER EtwWriteTransfer
  #define TLG_EVENT_WRITE_EX EtwWriteEx
  #define TLG_EVENT_SET_INFORMATION EtwSetInformation
      #define TLG_HAVE_EVENT_SET_INFORMATION 2
#pragma section(_TlgSegMetadataBegin, read)
#pragma section(_TlgSegMetadataEvents, read)
#pragma section(_TlgSegMetadataProviders, read)
#pragma section(_TlgSegMetadataEnd, read)
#pragma code_seg(TLG_PAGED_SEGMENT)
_IRQL_requires_max_(PASSIVE_LEVEL)
_IRQL_requires_same_
TLG_INLINE void NTAPI _TlgEnableCallback(
    _In_ LPCGUID pSourceId,
    _In_ ULONG callbackType,
    _In_ UCHAR level,
    _In_ ULONGLONG keywordAny,
    _In_ ULONGLONG keywordAll,
    _In_opt_ PEVENT_FILTER_DESCRIPTOR pFilterData,
    _Inout_opt_ PVOID pCallbackContext)
    TLG_NOEXCEPT
{
    TLG_PAGED_CODE();
    if (pCallbackContext)
    {
        struct _TlgProvider_t* pProvider = (struct _TlgProvider_t*)pCallbackContext;
        switch (callbackType)
        {
        case 0:
            pProvider->LevelPlus1 = 0;
            break;
        case 1:
            pProvider->LevelPlus1 = level != 0 ? (UINT32)level + 1u : 256u;
            pProvider->KeywordAny = keywordAny;
            pProvider->KeywordAll = keywordAll;
            break;
        }
        if (pProvider->EnableCallback)
        {
            pProvider->EnableCallback(
                pSourceId,
                callbackType,
                level,
                keywordAny,
                keywordAll,
                pFilterData,
                pProvider->CallbackContext);
        }
    }
}
_IRQL_requires_max_(PASSIVE_LEVEL)
TLG_INLINE void TraceLoggingUnregister(TraceLoggingHProvider _Inout_ hProvider)
    TLG_NOEXCEPT
{
    struct _TlgProvider_t* pProvider = (struct _TlgProvider_t*)hProvider;
    TLG_PAGED_CODE();
    TLG_EVENT_UNREGISTER(hProvider->RegHandle);
    pProvider->RegHandle = 0;
    pProvider->LevelPlus1 = 0;
}
_IRQL_requires_max_(PASSIVE_LEVEL)
TLG_INLINE TLG_STATUS TraceLoggingRegister(
    TraceLoggingHProvider _Inout_ hProvider)
    TLG_NOEXCEPT
{
    TLG_PAGED_CODE();
    return TraceLoggingRegisterEx(hProvider, NULL, NULL);
}
_IRQL_requires_max_(PASSIVE_LEVEL)
TLG_INLINE TLG_STATUS TraceLoggingRegisterEx(
    TraceLoggingHProvider _Inout_ hProvider,
    _In_opt_ TLG_PENABLECALLBACK pEnableCallback,
    _In_opt_ PVOID pCallbackContext)
    TLG_NOEXCEPT
{
    TLG_STATUS status;
    struct _TlgProvider_t* pProvider = (struct _TlgProvider_t*)hProvider;
    GUID const providerId = TraceLoggingProviderId(pProvider);
    TLG_PAGED_CODE();
    _TLG_ASSERT(
        pProvider->RegHandle == 0,
        "TraceLoggingRegister called with already-registered handle");
    pProvider->EnableCallback = pEnableCallback;
    pProvider->CallbackContext = pCallbackContext;
    status = TLG_EVENT_REGISTER(
        &providerId,
        &_TlgEnableCallback,
        pProvider,
        &pProvider->RegHandle);
    if (status != 0)
    {
        status = HRESULT_FROM_WIN32(status);
    }
    else
    {
        UINT16 const cbMetadata = *pProvider->ProviderMetadataPtr;
        (void)TraceLoggingSetInformation(
            pProvider,
            (EVENT_INFO_CLASS)2,
            (PVOID)pProvider->ProviderMetadataPtr,
            cbMetadata);
    }
    return status;
}
_IRQL_requires_max_(PASSIVE_LEVEL)
TLG_INLINE TLG_STATUS TraceLoggingSetInformation(
    TraceLoggingHProvider _Inout_ hProvider,
    _In_ EVENT_INFO_CLASS informationClass,
    _In_reads_bytes_opt_(cbInformation) PVOID pvInformation,
    _In_ ULONG cbInformation)
    TLG_NOEXCEPT
{
    TLG_STATUS status;
    typedef NTSTATUS(NTAPI* PFEtwSetInformation)(
        _In_ REGHANDLE RegHandle,
        _In_ EVENT_INFO_CLASS InformationClass,
        _In_reads_bytes_opt_(InformationLength) PVOID EventInformation,
        _In_ ULONG InformationLength);
    static UNICODE_STRING strEtwSetInformation = {
        sizeof(L"EtwSetInformation") - 2,
        sizeof(L"EtwSetInformation") - 2,
        L"EtwSetInformation"
    };
    PFEtwSetInformation pfEtwSetInformation;
    TLG_PAGED_CODE();
    status = STATUS_NOT_SUPPORTED;
#pragma warning(push)
#pragma warning(disable: 4055)
    pfEtwSetInformation = (PFEtwSetInformation)MmGetSystemRoutineAddress(&strEtwSetInformation);
#pragma warning(pop)
    if (pfEtwSetInformation)
    {
        status = pfEtwSetInformation(
            hProvider->RegHandle,
            informationClass,
            pvInformation,
            cbInformation);
    }
    return status;
}
#pragma code_seg(TLG_NONPAGED_SEGMENT)
extern struct _TraceLoggingMetadata_t const
    __declspec(selectany allocate(_TlgSegMetadataBegin))
    _TraceLoggingMetadata = {
    _TlgSigVal,
    sizeof(_TraceLoggingMetadata),
    _TlgVerVal,
    _TlgFlagsVal,
    _TlgMagicVal
};
extern UINT8 const
    __declspec(selectany allocate(_TlgSegMetadataEnd))
    _TraceLoggingMetadataEnd = _TlgBlobEnd;
#pragma warning(push)
#pragma warning(disable: 4714)
_IRQL_requires_max_(HIGH_LEVEL)
TLG_PFORCEINLINE
void _TlgWriteCommon(
    _In_ TraceLoggingHProvider hProvider,
    _In_reads_bytes_(_TLG_EVENT_METADATA_PREAMBLE + *(UINT16*)((char*)pEventMetadata + _TLG_EVENT_METADATA_PREAMBLE))
        void const UNALIGNED* pEventMetadata,
    _Out_writes_(2) ULONGLONG* pDesc,
    _Out_writes_(2) EVENT_DATA_DESCRIPTOR* pData)
{
    _TLG_CASSERT(2 == _TlgSkipVal, "_TlgWrite out of sync with _TlgSkipVal.");
    _TLG_CASSERT(_TLG_EVENT_METADATA_PREAMBLE == 1 + 2 + 4 + 4, "_TlgWrite out of sync with _TLG_EVENT_METADATA_PREAMBLE.");
    UINT8 const* p = (UINT8 const*)pEventMetadata;
    ((UINT32*)pDesc)[0] = *p << 24; p += 1;
    ((UINT32*)pDesc)[1] = *(UINT16 UNALIGNED const*)p; p += 2;
    pDesc[1] = *(ULONGLONG UNALIGNED const*)p; p += 8;
    pData[0].Ptr = (ULONGLONG)(ULONG_PTR)hProvider->ProviderMetadataPtr;
    pData[0].Size = *hProvider->ProviderMetadataPtr;
    pData[0].Reserved = 2;
    pData[1].Ptr = (ULONGLONG)(ULONG_PTR)p;
    pData[1].Size = *(UINT16 UNALIGNED const*)p;
    pData[1].Reserved = 1;
    _TLG_ASSERT((void const*)&_TraceLoggingMetadata < (void const*)pEventMetadata, "Event metadata not in metadata segment.");
    _TLG_ASSERT((void const*)&_TraceLoggingMetadataEnd > (void const*)pEventMetadata, "Event metadata not in metadata segment.");
    _TLG_ASSERT(
        (void const*)&_TraceLoggingMetadata < (void const*)hProvider->ProviderMetadataPtr,
        "Provider handles must not be used outside of the module in which it was declared. Please don't share provider handles with other DLLs.");
    _TLG_ASSERT(
        (void const*)&_TraceLoggingMetadataEnd > (void const*)hProvider->ProviderMetadataPtr,
        "Provider handles must not be used outside of the module in which it was declared. Please don't share provider handles with other DLLs.");
    {
        int cbMetadata;
        int volatile volatileVar;
        cbMetadata = (int)((LPCCH)&_TraceLoggingMetadataEnd - (LPCCH)&_TraceLoggingMetadata);
        volatileVar = cbMetadata;
    }
}
_IRQL_requires_max_(HIGH_LEVEL)
TLG_INLINE
TLG_STATUS _TlgWrite(
    _In_ TraceLoggingHProvider hProvider,
    _In_reads_bytes_(_TLG_EVENT_METADATA_PREAMBLE + *(UINT16*)((char*)pEventMetadata + _TLG_EVENT_METADATA_PREAMBLE))
        void const UNALIGNED* pEventMetadata,
    _In_opt_ LPCGUID pActivityId,
    _In_opt_ LPCGUID pRelatedActivityId,
    _In_range_(2, 128) UINT32 cData,
    _Inout_cap_(cData) EVENT_DATA_DESCRIPTOR* pData)
    TLG_NOEXCEPT
{
    TLG_STATUS status;
    ULONGLONG desc[2];
    _TlgWriteCommon(hProvider, pEventMetadata, desc, pData);
    _TLG_ASSERT(cData <= 128, "Too many data values.");
    status = TLG_EVENT_WRITE_TRANSFER(hProvider->RegHandle, (EVENT_DESCRIPTOR const*)desc, pActivityId, pRelatedActivityId, cData, pData);
    return status;
}
_IRQL_requires_max_(HIGH_LEVEL)
TLG_INLINE
TLG_STATUS _TlgWriteEx(
    _In_ TraceLoggingHProvider hProvider,
    _In_reads_bytes_(_TLG_EVENT_METADATA_PREAMBLE + *(UINT16*)((char*)pEventMetadata + _TLG_EVENT_METADATA_PREAMBLE))
        void const UNALIGNED* pEventMetadata,
    ULONG64 filter,
    ULONG flags,
    _In_opt_ LPCGUID pActivityId,
    _In_opt_ LPCGUID pRelatedActivityId,
    _In_range_(2, 128) UINT32 cData,
    _Inout_cap_(cData) EVENT_DATA_DESCRIPTOR* pData)
    TLG_NOEXCEPT
{
    TLG_STATUS status;
    ULONGLONG desc[2];
    _TlgWriteCommon(hProvider, pEventMetadata, desc, pData);
    _TLG_ASSERT(cData <= 128, "Too many data values.");
    status = TLG_EVENT_WRITE_EX(hProvider->RegHandle, (EVENT_DESCRIPTOR const*)desc, filter, flags, pActivityId, pRelatedActivityId, cData, pData);
    return status;
}
#pragma warning(pop)
_IRQL_requires_max_(HIGH_LEVEL)
TLG_INLINE BOOLEAN _TlgKeywordOn(
    TraceLoggingHProvider _In_ hProvider,
    ULONGLONG keyword)
    TLG_NOEXCEPT
{
    return keyword == 0 || (
        (keyword & hProvider->KeywordAny) &&
        (keyword & hProvider->KeywordAll) == hProvider->KeywordAll);
}
_IRQL_requires_max_(HIGH_LEVEL)
TLG_INLINE BOOLEAN TraceLoggingProviderEnabled(
    TraceLoggingHProvider _In_ hProvider,
    UCHAR eventLevel,
    ULONGLONG eventKeyword)
    TLG_NOEXCEPT
{
    return eventLevel < hProvider->LevelPlus1 && _TlgKeywordOn(hProvider, eventKeyword);
}
_IRQL_requires_max_(HIGH_LEVEL)
TLG_INLINE GUID TraceLoggingProviderId(
    TraceLoggingHProvider _In_ hProvider)
    TLG_NOEXCEPT
{
    GUID const UNALIGNED* pProviderId =
        &CONTAINING_RECORD(hProvider->ProviderMetadataPtr, struct _TlgProviderMetadata_t, RemainingSize)->ProviderId;
    return *pProviderId;
}
#pragma warning(push)
#pragma warning(disable: 4995 4996)
_IRQL_requires_max_(HIGH_LEVEL)
TLG_INLINE void _TlgCreateSz(
    _Out_ PEVENT_DATA_DESCRIPTOR pDesc,
    _In_opt_z_ LPCSTR psz)
    TLG_NOEXCEPT
{
    LPCSTR pch = "";
    SIZE_T cch = 0;
    if (psz)
    {
        pch = psz;
        cch = strlen(psz);
    }
    EventDataDescCreate(pDesc, pch, 1 + (ULONG)cch);
}
_IRQL_requires_max_(HIGH_LEVEL)
TLG_INLINE void _TlgCreateWsz(
    _Out_ PEVENT_DATA_DESCRIPTOR pDesc,
    _In_opt_z_ LPCWSTR pwsz)
    TLG_NOEXCEPT
{
    LPCWSTR pch = L"";
    SIZE_T cch = 0;
    if (pwsz)
    {
        pch = pwsz;
        cch = wcslen(pwsz);
    }
    EventDataDescCreate(pDesc, pch, 2 + 2 * (ULONG)cch);
}
#pragma warning(pop)
_IRQL_requires_max_(HIGH_LEVEL)
TLG_INLINE void _TlgCreateSid(
    _Out_ PEVENT_DATA_DESCRIPTOR pDesc,
    _In_ SID const* pSid)
    TLG_NOEXCEPT
{
    ULONG const cAuthorities = pSid->SubAuthorityCount <= SID_MAX_SUB_AUTHORITIES
        ? pSid->SubAuthorityCount
        : SID_MAX_SUB_AUTHORITIES;
    ULONG const cb = sizeof(SID) - 4 + cAuthorities * 4;
    EventDataDescCreate(pDesc, pSid, cb);
}
_IRQL_requires_max_(HIGH_LEVEL)
TLG_INLINE void _TlgCreateFixedArray(
    _Out_ PEVENT_DATA_DESCRIPTOR pDesc,
    _In_reads_bytes_(cVals * cbVal) void const* pVals,
    ULONG cVals,
    ULONG cbVal)
    TLG_NOEXCEPT
{
    EventDataDescCreate(pDesc, pVals, cVals * cbVal);
}
_IRQL_requires_max_(HIGH_LEVEL)
TLG_INLINE void _TlgCreateBinary(
    _Out_writes_(2) PEVENT_DATA_DESCRIPTOR pDesc,
    _In_reads_bytes_(cVals) void const* pVals,
    _In_ ULONG cVals)
    TLG_NOEXCEPT
{
    EventDataDescCreate(pDesc + 0, &pDesc[1].Size, 2);
    EventDataDescCreate(pDesc + 1, pVals, cVals);
}
_IRQL_requires_max_(HIGH_LEVEL)
TLG_INLINE void _TlgCreateArray(
    _Out_writes_(2) PEVENT_DATA_DESCRIPTOR pDesc,
    _In_reads_bytes_(cVals * cbVal) void const* pVals,
    _In_ UINT16 const& cVals,
    ULONG cbVal)
    TLG_NOEXCEPT
{
    EventDataDescCreate(pDesc + 0, &cVals, 2);
    EventDataDescCreate(pDesc + 1, pVals, cVals * cbVal);
}
}
template<unsigned StructSize, bool Ok = (StructSize < 128)>
struct _TlgStructSizeMustBeLessThan128;
template<unsigned StructSize>
struct _TlgStructSizeMustBeLessThan128<StructSize, true> {};
template<class T>
_IRQL_requires_max_(HIGH_LEVEL)
inline void _TlgCreateDesc(_Out_ PEVENT_DATA_DESCRIPTOR pDesc, T const& val)
{
    EventDataDescCreate(pDesc, &val, sizeof(T));
}
template<class T>
_IRQL_requires_max_(HIGH_LEVEL)
inline void _TlgCreateString(_Out_writes_(2) PEVENT_DATA_DESCRIPTOR pDesc, _In_ T const* pStr)
{
    EventDataDescCreate(pDesc + 0, &pDesc[1].Size, 2);
#pragma warning(suppress:26018)
    EventDataDescCreate(pDesc + 1, pStr->Buffer, pStr->Length);
}
#pragma detect_mismatch("TLG_METADATA_SEGMENT_BASE", _TLG_STRINGIZE(TLG_METADATA_SEGMENT_BASE))
template<
    UINT32 eventTag,
    unsigned length
    = (eventTag & 0x0FE00000) == eventTag ? 1
    : (eventTag & 0x0FFFC000) == eventTag ? 2
    : (eventTag & 0x0FFFFFFF) == eventTag ? 4
    : 0>
struct _TlgTagEnc
{
    _TLG_CASSERT(
        (eventTag & 0x0FFFFFFF) == eventTag,
        "Invalid Tag value. Tag must be a 28-bit compile-time constant integer.");
};
template<UINT32 eventTag>
struct _TlgTagEnc<eventTag, 1>
{
    typedef UINT8 type;
    static const UINT8 value =
        ((eventTag & 0xfe00000) >> 21);
};
template<UINT32 eventTag>
struct _TlgTagEnc<eventTag, 2>
{
    typedef UINT16 type;
    static const UINT16 value = 0x80
        | ((eventTag & 0xfe00000) >> 21)
        | ((eventTag & 0x01fc000) >> 6);
};
template<UINT32 eventTag>
struct _TlgTagEnc<eventTag, 4>
{
    typedef UINT32 type;
    static const UINT32 value = 0x808080
        | ((eventTag & 0xfe00000) >> 21)
        | ((eventTag & 0x01fc000) >> 6)
        | ((eventTag & 0x0003f80) << 9)
        | ((eventTag & 0x000007f) << 24);
};
#pragma code_seg(pop)
#pragma endregion
#pragma region Implementation macros
    _TlgParseProviderIdN(_TLG_NARGS(__VA_ARGS__), __VA_ARGS__)
    _TLG_PASTE(_TlgParseProviderId, n)(providerId)
    _Tracelogging_SyntaxError_ProviderIdMustBeSpecified
    _Tracelogging_SyntaxError_ProviderIdMustBeEnclosedInParentheses providerId
    _TlgParseProviderId_N(_TLG_NARGS(__VA_ARGS__), __VA_ARGS__)
    _TlgParseProviderId_N_CALL(_TLG_PASTE(_Tracelogging_SyntaxError_ProviderIdMustBeElevenIntegers_, n), (__VA_ARGS__))
    { a, b, c, { d, e, f, g, h, i, j , k } }
    _Tracelogging_UnrecognizedOption_##option
    {__VA_ARGS__}
           _TLG_NARGS(__VA_ARGS__), storageVariable, providerName, providerId, annotationFunc, __VA_ARGS__)
                                 ( storageVariable, providerName, providerId, annotationFunc, __VA_ARGS__))
    _TlgProviderStorage_impx(storageVariable, providerName, providerId, annotationFunc \
        , () \
        , () \
        )
    _TlgProviderStorage_impx(storageVariable, providerName, providerId, annotationFunc \
        , (UINT16 _TlgOptionSize1; UINT8 _TlgOptionEnum1; GUID _TlgOptionVal1; ) \
        , (, 3 + sizeof(GUID), _TlgOptionGroup, _TlgParseOption(groupOption)) \
        )
    _TlgPragmaUtf8Begin \
    __pragma(pack(push, 1)) \
    static struct { \
        struct _TlgProviderMetadata_t _TlgProv; \
        char _TlgName[sizeof(providerName)]; \
        _TLG_FLATTEN optionVars \
    } const __declspec(allocate(_TlgSegMetadataProviders)) __declspec(align(1)) storageVariable##_Meta = { \
        { _TlgBlobProvider3, _TlgParseProviderId(providerId), sizeof(storageVariable##_Meta) - 1 - _TLG_PROVIDER_METADATA_PREAMBLE }, \
        (providerName) \
        _TLG_FLATTEN optionVals \
    }; \
    __pragma(pack(pop)) \
    _TlgPragmaUtf8End \
    static struct _TlgProvider_t storageVariable = { \
        0, &storageVariable##_Meta._TlgProv.RemainingSize, \
        0, 0, 0, 0, 0 \
        _TlgAnnotationFunc_imp(annotationFunc, storageVariable) \
    }
                    ( data_type, in_type, out_type, has_out, dim, value, cVals, #value,, , 0)
                    ( data_type, in_type, out_type, has_out, dim, value, cVals, name,, , 0)
                    ( data_type, in_type, out_type, has_out, dim, value, cVals, name, L##desc, , 0)
                    ( data_type, in_type, out_type, has_out, dim, value, cVals, name, L##desc, tags, 1)
                    ( data_type, in_type, out_type, has_out, dim, value, cVals, __VA_ARGS__))
                       data_type, in_type, out_type, has_out, dim, value, cVals, __VA_ARGS__)
    fn##_imp(n, data_type, in_type, out_type, has_out, dim, value, cVals, name, desc, tags, has_tags)
    _TlgInfoVars##dim(n, name, in_type, has_out, has_tags)
    _TlgInfoVals##dim(in_type, out_type, has_out, cVals, name, has_tags, tags)
    _TlgDataDescCreate##dim(n, data_type, value, cVals)
    _TlgData[_TlgIdx].Ptr = (ULONGLONG)(ULONG_PTR)(value), \
    _TlgData[_TlgIdx].Size = (cVals), \
    _TlgData[_TlgIdx].Reserved = (data_type), \
    _TlgIdx += 1,
    _TlgDataDescCount##dim()
                _TlgChannelVal##dim(value)
                _TlgLevelVal##dim(value)
                _TlgOpcodeVal##dim(value)
              _TlgKeywordVal##dim(value)
              _TlgEvtTagVal##dim(value)
              _TlgAnnotes##dim(name, desc)
              _TlgDescVal##dim(name, desc)
template<class T, T n> struct _TlgIntegralConstant { static T const value = n; };
template<UCHAR n> struct _TraceLoggingChannel : _TlgIntegralConstant<UCHAR, n> { };
template<UCHAR n> struct _TraceLoggingLevel : _TlgIntegralConstant<UCHAR, n> { };
template<UCHAR n> struct _TraceLoggingOpcode : _TlgIntegralConstant<UCHAR, n> { };
template<ULONGLONG n> struct _TraceLoggingKeyword : _TlgIntegralConstant<ULONGLONG, n> { };
template<UINT32 n> struct _TraceLoggingEventTag : _TlgIntegralConstant<UINT32, n> { };
    do { \
        __pragma(warning(push)) \
        __pragma(warning(disable:4127 4132 6001)) \
        __pragma(warning(error:4047)) \
        _TlgPragmaUtf8Begin \
        __pragma(pack(push, 1)) \
        _TlgEvtTagDecl(__VA_ARGS__) \
        enum { _TlgLevelConst = 5 _TLG_FOREACH(_TlgLevelVal, __VA_ARGS__) }; \
        static struct { \
            UCHAR _TlgBlobTyp; UCHAR _TlgChannel; UCHAR _TlgLevel; UCHAR _TlgOpcode; ULONGLONG _TlgKeyword; \
            UINT16 _TlgEvtMetaSize; \
            _TlgEvtTagType _TlgEvtTags; \
            char _TlgName[sizeof(eventName)]; \
            _TLG_FOREACH(_TlgInfoVars, __VA_ARGS__) \
        } __declspec(allocate(_TlgSegMetadataEvents)) __declspec(align(1)) const _TlgEvent = { \
            _TlgBlobEvent4, \
            11 _TLG_FOREACH(_TlgChannelVal, __VA_ARGS__), \
            _TlgLevelConst, \
            0 _TLG_FOREACH(_TlgOpcodeVal, __VA_ARGS__), \
            0 _TLG_FOREACH(_TlgKeywordVal, __VA_ARGS__), \
            sizeof(_TlgEvent)-_TLG_EVENT_METADATA_PREAMBLE-1, \
            _TlgEvtTagInit(__VA_ARGS__), \
            (eventName) \
            _TLG_FOREACH(_TlgInfoVals, __VA_ARGS__) \
        }; \
        TraceLoggingHProvider const _TlgProv = (hProvider); \
        if ((UCHAR)_TlgLevelConst < _TlgProv->LevelPlus1 && _TlgKeywordOn(_TlgProv, _TlgEvent._TlgKeyword)) { \
            _TlgTempVarsDecl(__VA_ARGS__) \
            EVENT_DATA_DESCRIPTOR _TlgData[_TlgSkipVal _TLG_FOREACH(_TlgDataDescCount, __VA_ARGS__)]; \
            UINT32 _TlgIdx = _TlgSkipVal; \
            _TlgSeqStart \
            _TLG_FOREACH(_TlgDataDescCreate, __VA_ARGS__) \
            __pragma(warning(disable:26000)) \
            _TlgWrite_annotation(hProvider, _TLG_FLATTEN(eventName), __VA_ARGS__) \
            tlgWriteFunc(_TlgProv, &_TlgEvent._TlgChannel, _TLG_FLATTEN tlgWriteArgs, _TlgIdx, _TlgData) \
            _TlgSeqEnd; \
        } \
        __pragma(pack(pop)) \
        _TlgPragmaUtf8End \
        __pragma(warning(pop)) \
    } while (0) \
    _TlgDefineProvider_functionWrapperBegin##requiresWrapper(functionPostfix) \
        __annotation( \
            L"_TlgDefineProvider:|" _TLG_PASTE(L, _TLG_STRINGIZE(__LINE__)) L"|" _TLG_PASTE(L, _TLG_STRINGIZE(hProvider)) L"|" \
            L##providerName \
        ); \
    _TlgDefineProvider_functionWrapperEnd##requiresWrapper
    _TLG_EXTERN_C \
    void __cdecl \
    _TLG_PASTE(_TlgDefineProvider_annotation_, functionPostfix)(void) TLG_NOEXCEPT \
    {
    L"_TlgWrite:|" _TLG_PASTE(L, _TLG_STRINGIZE(__LINE__)) L"|" _TLG_PASTE(L, _TLG_STRINGIZE(hProvider)) L"|" \
    _TLG_PASTE(L, _TLG_STRINGIZE(eventName)) L"=" _TLG_FOREACH(_TlgDescVal, __VA_ARGS__) \
    _TLG_FOREACH(_TlgAnnotes, __VA_ARGS__) \
    ), \
#pragma endregion

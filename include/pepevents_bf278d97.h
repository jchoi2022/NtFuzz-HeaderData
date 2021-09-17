       
#include <wmistr.h>
#include <evntrace.h>
#include <evntprov.h>
    #define MCGEN_USE_KERNEL_MODE_APIS 1
    #define MCGEN_HAVE_EVENTSETINFORMATION 1
    #define MCGEN_EVENTWRITETRANSFER EtwWriteTransfer
    #define MCGEN_EVENTREGISTER EtwRegister
    #define MCGEN_EVENTSETINFORMATION EtwSetInformation
    #define MCGEN_EVENTUNREGISTER EtwUnregister
    #define MCGEN_PENABLECALLBACK PETWENABLECALLBACK
    #define MCGEN_GETLENGTHSID(p) RtlLengthSid((PSID)(p))
typedef struct _MCGEN_TRACE_CONTEXT
{
    TRACEHANDLE RegistrationHandle;
    TRACEHANDLE Logger;
    ULONGLONG MatchAnyKeyword;
    ULONGLONG MatchAllKeyword;
    ULONG Flags;
    ULONG IsEnabled;
    UCHAR Level;
    UCHAR Reserve;
    USHORT EnableBitsCount;
    PULONG EnableBitMask;
    const ULONGLONG* EnableKeyWords;
    const UCHAR* EnableLevel;
} MCGEN_TRACE_CONTEXT, *PMCGEN_TRACE_CONTEXT;
FORCEINLINE
BOOLEAN
McGenLevelKeywordEnabled(
    _In_ PMCGEN_TRACE_CONTEXT EnableInfo,
    _In_ UCHAR Level,
    _In_ ULONGLONG Keyword
    )
{
    if ((Level <= EnableInfo->Level) ||
        (EnableInfo->Level == 0)) {
        if ((Keyword == (ULONGLONG)0) ||
            ((Keyword & EnableInfo->MatchAnyKeyword) &&
             ((Keyword & EnableInfo->MatchAllKeyword) == EnableInfo->MatchAllKeyword))) {
            return TRUE;
        }
    }
    return FALSE;
}
FORCEINLINE
BOOLEAN
McGenEventEnabled(
    _In_ PMCGEN_TRACE_CONTEXT EnableInfo,
    _In_ PCEVENT_DESCRIPTOR EventDescriptor
    )
{
    return McGenLevelKeywordEnabled(EnableInfo, EventDescriptor->Level, EventDescriptor->Keyword);
}
DECLSPEC_NOINLINE __inline
VOID
__stdcall
McGenControlCallbackV2(
    _In_ LPCGUID SourceId,
    _In_ ULONG ControlCode,
    _In_ UCHAR Level,
    _In_ ULONGLONG MatchAnyKeyword,
    _In_ ULONGLONG MatchAllKeyword,
    _In_opt_ PEVENT_FILTER_DESCRIPTOR FilterData,
    _Inout_opt_ PVOID CallbackContext
    )
{
    PMCGEN_TRACE_CONTEXT Ctx = (PMCGEN_TRACE_CONTEXT)CallbackContext;
    ULONG Ix;
    UNREFERENCED_PARAMETER(SourceId);
    UNREFERENCED_PARAMETER(FilterData);
    if (Ctx == NULL) {
        return;
    }
    switch (ControlCode) {
        case EVENT_CONTROL_CODE_ENABLE_PROVIDER:
            Ctx->Level = Level;
            Ctx->MatchAnyKeyword = MatchAnyKeyword;
            Ctx->MatchAllKeyword = MatchAllKeyword;
            Ctx->IsEnabled = EVENT_CONTROL_CODE_ENABLE_PROVIDER;
            for (Ix = 0; Ix < Ctx->EnableBitsCount; Ix += 1) {
                if (McGenLevelKeywordEnabled(Ctx, Ctx->EnableLevel[Ix], Ctx->EnableKeyWords[Ix]) != FALSE) {
                    Ctx->EnableBitMask[Ix >> 5] |= (1 << (Ix % 32));
                } else {
                    Ctx->EnableBitMask[Ix >> 5] &= ~(1 << (Ix % 32));
                }
            }
            break;
        case EVENT_CONTROL_CODE_DISABLE_PROVIDER:
            Ctx->IsEnabled = EVENT_CONTROL_CODE_DISABLE_PROVIDER;
            Ctx->Level = 0;
            Ctx->MatchAnyKeyword = 0;
            Ctx->MatchAllKeyword = 0;
            if (Ctx->EnableBitsCount > 0) {
                RtlZeroMemory(Ctx->EnableBitMask, (((Ctx->EnableBitsCount - 1) / 32) + 1) * sizeof(ULONG));
            }
            break;
        default:
            break;
    }
    MCGEN_PRIVATE_ENABLE_CALLBACK_V2(
        SourceId,
        ControlCode,
        Level,
        MatchAnyKeyword,
        MatchAllKeyword,
        FilterData,
        CallbackContext
        );
    return;
}
DECLSPEC_NOINLINE __inline
ULONG __stdcall
McGenEventWrite(
    _In_ PMCGEN_TRACE_CONTEXT Context,
    _In_ PCEVENT_DESCRIPTOR Descriptor,
    _In_opt_ LPCGUID ActivityId,
    _In_range_(1, 128) ULONG EventDataCount,
    _Inout_updates_(EventDataCount) EVENT_DATA_DESCRIPTOR* EventData
    )
{
    const USHORT UNALIGNED* Traits;
    UNREFERENCED_PARAMETER(ActivityId);
    Traits = (const USHORT UNALIGNED*)(UINT_PTR)Context->Logger;
    if (Traits == NULL) {
        EventData[0].Ptr = 0;
        EventData[0].Size = 0;
        EventData[0].Reserved = 0;
    } else {
        EventData[0].Ptr = (ULONG_PTR)Traits;
        EventData[0].Size = *Traits;
        EventData[0].Reserved = 2;
    }
    return MCGEN_EVENTWRITETRANSFER(
        Context->RegistrationHandle,
        Descriptor,
        ActivityId,
        NULL,
        EventDataCount,
        EventData);
}
#pragma warning(push)
#pragma warning(disable:6103)
DECLSPEC_NOINLINE __inline
ULONG __stdcall
McGenEventRegister(
    _In_ LPCGUID ProviderId,
    _In_opt_ MCGEN_PENABLECALLBACK EnableCallback,
    _In_opt_ PVOID CallbackContext,
    _Inout_ PREGHANDLE RegHandle
    )
{
    ULONG Error;
    if (*RegHandle != 0)
    {
        Error = 0;
    }
    else
    {
        Error = MCGEN_EVENTREGISTER(ProviderId, EnableCallback, CallbackContext, RegHandle);
    }
    return Error;
}
#pragma warning(pop)
DECLSPEC_NOINLINE __inline
ULONG __stdcall
McGenEventUnregister(_Inout_ PREGHANDLE RegHandle)
{
    ULONG Error;
    if(*RegHandle == 0)
    {
        Error = 0;
    }
    else
    {
        Error = MCGEN_EVENTUNREGISTER(*RegHandle);
        *RegHandle = (REGHANDLE)0;
    }
    return Error;
}
EXTERN_C __declspec(selectany) const GUID POP_PEP_ETW_PROVIDER = {0x5412704e, 0xb2e1, 0x4624, {0x8f, 0xfd, 0x55, 0x77, 0x7b, 0x8f, 0x73, 0x73}};
EXTERN_C __declspec(selectany) const EVENT_DESCRIPTOR POP_PEP_ETW_RAIL_RUNDOWN = {0x1, 0x0, 0x10, 0x4, 0x0, 0x1, 0x8000000000000001};
EXTERN_C __declspec(selectany) const EVENT_DESCRIPTOR POP_PEP_ETW_DEVICE_RUNDOWN = {0x2, 0x0, 0x10, 0x4, 0x0, 0x2, 0x8000000000000001};
EXTERN_C __declspec(selectany) const EVENT_DESCRIPTOR POP_PEP_ETW_COMPONENT_RUNDOWN = {0x3, 0x0, 0x10, 0x4, 0x0, 0x3, 0x8000000000000001};
EXTERN_C __declspec(selectany) const EVENT_DESCRIPTOR POP_PEP_ETW_RAIL_VOLTAGE_CHANGE = {0x4, 0x0, 0x10, 0x4, 0x0, 0x4, 0x8000000000000001};
EXTERN_C __declspec(selectany) const EVENT_DESCRIPTOR POP_PEP_ETW_COMPONENT_FREQUENCE_CHANGE = {0x5, 0x0, 0x10, 0x4, 0x0, 0x5, 0x8000000000000001};
EXTERN_C __declspec(selectany) const EVENT_DESCRIPTOR POP_PEP_ETW_PLATFORM_IDLE_RESIDENCY = {0x6, 0x0, 0x10, 0x4, 0x0, 0x6, 0x8000000000000001};
EXTERN_C __declspec(selectany) const EVENT_DESCRIPTOR POP_PEP_ETW_PLATFORM_IDLE_TRANSITION = {0x7, 0x0, 0x10, 0x4, 0x0, 0x7, 0x8000000000000001};
EXTERN_C __declspec(selectany) DECLSPEC_CACHEALIGN ULONG Microsoft_Windows_Kernel_PepEnableBits[1];
EXTERN_C __declspec(selectany) const ULONGLONG Microsoft_Windows_Kernel_PepKeywords[1] = {0x8000000000000001};
EXTERN_C __declspec(selectany) const unsigned char Microsoft_Windows_Kernel_PepLevels[1] = {4};
EXTERN_C __declspec(selectany) MCGEN_TRACE_CONTEXT POP_PEP_ETW_PROVIDER_Context = {0, (ULONG_PTR)POP_PEP_ETW_PROVIDER_Traits, 0, 0, 0, 0, 0, 0, 1, Microsoft_Windows_Kernel_PepEnableBits, Microsoft_Windows_Kernel_PepKeywords, Microsoft_Windows_Kernel_PepLevels};
        MCGEN_EVENT_ENABLED(POP_PEP_ETW_RAIL_RUNDOWN) \
        ? McTemplateK0qzqq(&POP_PEP_ETW_PROVIDER_Context, &POP_PEP_ETW_RAIL_RUNDOWN, Activity, VoltageRailId, VoltageRailName, CurrentVoltageMv, MaxVoltageMv) : 0
        McTemplateK0qzqq(&POP_PEP_ETW_PROVIDER_Context, &POP_PEP_ETW_RAIL_RUNDOWN, NULL, VoltageRailId, VoltageRailName, CurrentVoltageMv, MaxVoltageMv)
        MCGEN_EVENT_ENABLED(POP_PEP_ETW_DEVICE_RUNDOWN) \
        ? McTemplateK0pzqNR2(&POP_PEP_ETW_PROVIDER_Context, &POP_PEP_ETW_DEVICE_RUNDOWN, Activity, DeviceId, DeviceName, PlatformStateDependencyCount, PlatformStateDependency_Len_, PlatformStateDependency) : 0
        McTemplateK0pzqNR2(&POP_PEP_ETW_PROVIDER_Context, &POP_PEP_ETW_DEVICE_RUNDOWN, NULL, DeviceId, DeviceName, PlatformStateDependencyCount, PlatformStateDependency_Len_, PlatformStateDependency)
        MCGEN_EVENT_ENABLED(POP_PEP_ETW_COMPONENT_RUNDOWN) \
        ? McTemplateK0qpqqqqNR5qzr7(&POP_PEP_ETW_PROVIDER_Context, &POP_PEP_ETW_COMPONENT_RUNDOWN, Activity, VoltageRailId, DeviceId, ComponentIndex, CurrentFrequencyKHz, MaxFrequencyKHz, PlatformStateDependencyCount, PlatformStateDependency_Len_, PlatformStateDependency, ComponentDescriptionLength, ComponentDescription) : 0
        McTemplateK0qpqqqqNR5qzr7(&POP_PEP_ETW_PROVIDER_Context, &POP_PEP_ETW_COMPONENT_RUNDOWN, NULL, VoltageRailId, DeviceId, ComponentIndex, CurrentFrequencyKHz, MaxFrequencyKHz, PlatformStateDependencyCount, PlatformStateDependency_Len_, PlatformStateDependency, ComponentDescriptionLength, ComponentDescription)
        MCGEN_EVENT_ENABLED(POP_PEP_ETW_RAIL_VOLTAGE_CHANGE) \
        ? McTemplateK0qqq(&POP_PEP_ETW_PROVIDER_Context, &POP_PEP_ETW_RAIL_VOLTAGE_CHANGE, Activity, VoltageRailId, OldRailVoltageMv, NewRailVoltageMv) : 0
        McTemplateK0qqq(&POP_PEP_ETW_PROVIDER_Context, &POP_PEP_ETW_RAIL_VOLTAGE_CHANGE, NULL, VoltageRailId, OldRailVoltageMv, NewRailVoltageMv)
        MCGEN_EVENT_ENABLED(POP_PEP_ETW_COMPONENT_FREQUENCE_CHANGE) \
        ? McTemplateK0pqqq(&POP_PEP_ETW_PROVIDER_Context, &POP_PEP_ETW_COMPONENT_FREQUENCE_CHANGE, Activity, DeviceId, ComponentIndex, OldComponentFrequencyKHz, NewComponentFrequencyKHz) : 0
        McTemplateK0pqqq(&POP_PEP_ETW_PROVIDER_Context, &POP_PEP_ETW_COMPONENT_FREQUENCE_CHANGE, NULL, DeviceId, ComponentIndex, OldComponentFrequencyKHz, NewComponentFrequencyKHz)
        MCGEN_EVENT_ENABLED(POP_PEP_ETW_PLATFORM_IDLE_RESIDENCY) \
        ? McTemplateK0qNR0(&POP_PEP_ETW_PROVIDER_Context, &POP_PEP_ETW_PLATFORM_IDLE_RESIDENCY, Activity, PlatformStateCount, PlatformIdleStateResidency_Len_, PlatformIdleStateResidency) : 0
        McTemplateK0qNR0(&POP_PEP_ETW_PROVIDER_Context, &POP_PEP_ETW_PLATFORM_IDLE_RESIDENCY, NULL, PlatformStateCount, PlatformIdleStateResidency_Len_, PlatformIdleStateResidency)
        MCGEN_EVENT_ENABLED(POP_PEP_ETW_PLATFORM_IDLE_TRANSITION) \
        ? McTemplateK0qq(&POP_PEP_ETW_PROVIDER_Context, &POP_PEP_ETW_PLATFORM_IDLE_TRANSITION, Activity, OldPlatformState, NewPlatformState) : 0
        McTemplateK0qq(&POP_PEP_ETW_PROVIDER_Context, &POP_PEP_ETW_PLATFORM_IDLE_TRANSITION, NULL, OldPlatformState, NewPlatformState)
ETW_INLINE
ULONG
McTemplateK0pqqq(
    _In_ PMCGEN_TRACE_CONTEXT Context,
    _In_ PCEVENT_DESCRIPTOR Descriptor,
    _In_opt_ const GUID* Activity,
    _In_opt_ const void* _Arg0,
    _In_ const unsigned int _Arg1,
    _In_ const unsigned int _Arg2,
    _In_ const unsigned int _Arg3
    )
{
    EVENT_DATA_DESCRIPTOR EventData[McTemplateK0pqqq_ARGCOUNT + 1];
    EventDataDescCreate(&EventData[1],&_Arg0, sizeof(const void*) );
    EventDataDescCreate(&EventData[2],&_Arg1, sizeof(const unsigned int) );
    EventDataDescCreate(&EventData[3],&_Arg2, sizeof(const unsigned int) );
    EventDataDescCreate(&EventData[4],&_Arg3, sizeof(const unsigned int) );
    return McGenEventWrite(Context, Descriptor, Activity, McTemplateK0pqqq_ARGCOUNT + 1, EventData);
}
ETW_INLINE
ULONG
McTemplateK0pzqNR2(
    _In_ PMCGEN_TRACE_CONTEXT Context,
    _In_ PCEVENT_DESCRIPTOR Descriptor,
    _In_opt_ const GUID* Activity,
    _In_opt_ const void* _Arg0,
    _In_opt_ PCWSTR _Arg1,
    _In_ const unsigned int _Arg2,
    _In_ ULONG _Arg3_Len_,
    _In_ const void* _Arg3
    )
{
    EVENT_DATA_DESCRIPTOR EventData[McTemplateK0pzqNR2_ARGCOUNT + 1];
    EventDataDescCreate(&EventData[1],&_Arg0, sizeof(const void*) );
    EventDataDescCreate(&EventData[2],
                        (_Arg1 != NULL) ? _Arg1 : L"NULL",
                        (_Arg1 != NULL) ? (ULONG)((wcslen(_Arg1) + 1) * sizeof(WCHAR)) : (ULONG)sizeof(L"NULL"));
    EventDataDescCreate(&EventData[3],&_Arg2, sizeof(const unsigned int) );
    EventDataDescCreate(&EventData[4],_Arg3, _Arg2 * _Arg3_Len_);
    return McGenEventWrite(Context, Descriptor, Activity, McTemplateK0pzqNR2_ARGCOUNT + 1, EventData);
}
ETW_INLINE
ULONG
McTemplateK0qNR0(
    _In_ PMCGEN_TRACE_CONTEXT Context,
    _In_ PCEVENT_DESCRIPTOR Descriptor,
    _In_opt_ const GUID* Activity,
    _In_ const unsigned int _Arg0,
    _In_ ULONG _Arg1_Len_,
    _In_ const void* _Arg1
    )
{
    EVENT_DATA_DESCRIPTOR EventData[McTemplateK0qNR0_ARGCOUNT + 1];
    EventDataDescCreate(&EventData[1],&_Arg0, sizeof(const unsigned int) );
    EventDataDescCreate(&EventData[2],_Arg1, _Arg0 * _Arg1_Len_);
    return McGenEventWrite(Context, Descriptor, Activity, McTemplateK0qNR0_ARGCOUNT + 1, EventData);
}
ETW_INLINE
ULONG
McTemplateK0qpqqqqNR5qzr7(
    _In_ PMCGEN_TRACE_CONTEXT Context,
    _In_ PCEVENT_DESCRIPTOR Descriptor,
    _In_opt_ const GUID* Activity,
    _In_ const unsigned int _Arg0,
    _In_opt_ const void* _Arg1,
    _In_ const unsigned int _Arg2,
    _In_ const unsigned int _Arg3,
    _In_ const unsigned int _Arg4,
    _In_ const unsigned int _Arg5,
    _In_ ULONG _Arg6_Len_,
    _In_ const void* _Arg6,
    _In_ const unsigned int _Arg7,
    _In_reads_(_Arg7) const WCHAR* _Arg8
    )
{
    EVENT_DATA_DESCRIPTOR EventData[McTemplateK0qpqqqqNR5qzr7_ARGCOUNT + 1];
    EventDataDescCreate(&EventData[1],&_Arg0, sizeof(const unsigned int) );
    EventDataDescCreate(&EventData[2],&_Arg1, sizeof(const void*) );
    EventDataDescCreate(&EventData[3],&_Arg2, sizeof(const unsigned int) );
    EventDataDescCreate(&EventData[4],&_Arg3, sizeof(const unsigned int) );
    EventDataDescCreate(&EventData[5],&_Arg4, sizeof(const unsigned int) );
    EventDataDescCreate(&EventData[6],&_Arg5, sizeof(const unsigned int) );
    EventDataDescCreate(&EventData[7],_Arg6, _Arg5 * _Arg6_Len_);
    EventDataDescCreate(&EventData[8],&_Arg7, sizeof(const unsigned int) );
    EventDataDescCreate(&EventData[9],_Arg8, (ULONG)(sizeof(WCHAR)*_Arg7));
    return McGenEventWrite(Context, Descriptor, Activity, McTemplateK0qpqqqqNR5qzr7_ARGCOUNT + 1, EventData);
}
ETW_INLINE
ULONG
McTemplateK0qq(
    _In_ PMCGEN_TRACE_CONTEXT Context,
    _In_ PCEVENT_DESCRIPTOR Descriptor,
    _In_opt_ const GUID* Activity,
    _In_ const unsigned int _Arg0,
    _In_ const unsigned int _Arg1
    )
{
    EVENT_DATA_DESCRIPTOR EventData[McTemplateK0qq_ARGCOUNT + 1];
    EventDataDescCreate(&EventData[1],&_Arg0, sizeof(const unsigned int) );
    EventDataDescCreate(&EventData[2],&_Arg1, sizeof(const unsigned int) );
    return McGenEventWrite(Context, Descriptor, Activity, McTemplateK0qq_ARGCOUNT + 1, EventData);
}
ETW_INLINE
ULONG
McTemplateK0qqq(
    _In_ PMCGEN_TRACE_CONTEXT Context,
    _In_ PCEVENT_DESCRIPTOR Descriptor,
    _In_opt_ const GUID* Activity,
    _In_ const unsigned int _Arg0,
    _In_ const unsigned int _Arg1,
    _In_ const unsigned int _Arg2
    )
{
    EVENT_DATA_DESCRIPTOR EventData[McTemplateK0qqq_ARGCOUNT + 1];
    EventDataDescCreate(&EventData[1],&_Arg0, sizeof(const unsigned int) );
    EventDataDescCreate(&EventData[2],&_Arg1, sizeof(const unsigned int) );
    EventDataDescCreate(&EventData[3],&_Arg2, sizeof(const unsigned int) );
    return McGenEventWrite(Context, Descriptor, Activity, McTemplateK0qqq_ARGCOUNT + 1, EventData);
}
ETW_INLINE
ULONG
McTemplateK0qzqq(
    _In_ PMCGEN_TRACE_CONTEXT Context,
    _In_ PCEVENT_DESCRIPTOR Descriptor,
    _In_opt_ const GUID* Activity,
    _In_ const unsigned int _Arg0,
    _In_opt_ PCWSTR _Arg1,
    _In_ const unsigned int _Arg2,
    _In_ const unsigned int _Arg3
    )
{
    EVENT_DATA_DESCRIPTOR EventData[McTemplateK0qzqq_ARGCOUNT + 1];
    EventDataDescCreate(&EventData[1],&_Arg0, sizeof(const unsigned int) );
    EventDataDescCreate(&EventData[2],
                        (_Arg1 != NULL) ? _Arg1 : L"NULL",
                        (_Arg1 != NULL) ? (ULONG)((wcslen(_Arg1) + 1) * sizeof(WCHAR)) : (ULONG)sizeof(L"NULL"));
    EventDataDescCreate(&EventData[3],&_Arg2, sizeof(const unsigned int) );
    EventDataDescCreate(&EventData[4],&_Arg3, sizeof(const unsigned int) );
    return McGenEventWrite(Context, Descriptor, Activity, McTemplateK0qzqq_ARGCOUNT + 1, EventData);
}

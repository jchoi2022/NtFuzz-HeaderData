#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#pragma warning(disable:4201)
#include <pshpack8.h>
#include <objbase.h>
        #define DEFINE_GUIDEX(name) EXTERN_C const CDECL GUID name
        #define STATICGUIDOF(guid) STATIC_##guid
    0x28F54685L, 0x06FD, 0x11D2, 0xB2, 0x7A, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96
typedef struct {
    union {
        struct {
            GUID Set;
            ULONG Id;
            ULONG Flags;
        } Data;
        LONGLONG Alignment;
    };
} KSIDENTIFIER, *PKSIDENTIFIER;
typedef KSIDENTIFIER KSPROPERTY, *PKSPROPERTY, KSMETHOD, *PKSMETHOD, KSEVENT, *PKSEVENT;
DECLARE_INTERFACE_(IKsControl, IUnknown)
{
    STDMETHOD(QueryInterface) (THIS_ REFIID, LPVOID FAR *) PURE;
    STDMETHOD_(ULONG,AddRef) (THIS) PURE;
    STDMETHOD_(ULONG,Release) (THIS) PURE;
    STDMETHOD(KsProperty)(
        THIS_
        _In_reads_bytes_(PropertyLength) PKSPROPERTY Property,
        _In_ ULONG PropertyLength,
        _Inout_updates_bytes_(DataLength) LPVOID PropertyData,
        _In_ ULONG DataLength,
        _Out_ ULONG* BytesReturned
    ) PURE;
    STDMETHOD(KsMethod)(
        THIS_
        _In_reads_bytes_(MethodLength) PKSMETHOD Method,
        _In_ ULONG MethodLength,
        _Inout_updates_bytes_(DataLength) LPVOID MethodData,
        _In_ ULONG DataLength,
        _Out_ ULONG* BytesReturned
    ) PURE;
    STDMETHOD(KsEvent)(
        THIS_
        _In_reads_bytes_(EventLength) PKSEVENT Event OPTIONAL,
        _In_ ULONG EventLength,
        _Inout_updates_bytes_(DataLength) LPVOID EventData,
        _In_ ULONG DataLength,
        _Out_ ULONG* BytesReturned
    ) PURE;
};
#include <poppack.h>
DEFINE_GUID(IID_IKsControl, 0x28F54685, 0x06FD, 0x11D2, 0xB2, 0x7A, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96);
DEFINE_GUID(KSDATAFORMAT_SUBTYPE_MIDI, 0x1D262760L, 0xE957, 0x11CF, 0xA5, 0xD6, 0x28, 0xDB, 0x04, 0xC1, 0x00, 0x00);
DEFINE_GUID(KSDATAFORMAT_SUBTYPE_DIRECTMUSIC, 0x1a82f8bc, 0x3f8b, 0x11d2, 0xb7, 0x74, 0x00, 0x60, 0x08, 0x33, 0x16, 0xc1);
#endif
#pragma endregion

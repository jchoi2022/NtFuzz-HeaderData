extern "C"
{
#include <wdm.h>
}
#include <windef.h>
#include <mmreg.h>
#include <ks.h>
#include <ksmedia.h>
#include <punknown.h>
#include <drmk.h>
DEFINE_GUID(IID_IMiniport,
0xb4c90a24L, 0x5791, 0x11d0, 0x86, 0xf9, 0x00, 0xa0, 0xc9, 0x11, 0xb5, 0x44);
DEFINE_GUID(IID_IPort,
0xb4c90a25L, 0x5791, 0x11d0, 0x86, 0xf9, 0x00, 0xa0, 0xc9, 0x11, 0xb5, 0x44);
DEFINE_GUID(IID_IResourceList,
0x22C6AC60L, 0x851B, 0x11D0, 0x9A, 0x7F, 0x00, 0xAA, 0x00, 0x38, 0xAC, 0xFE);
DEFINE_GUID(IID_IMusicTechnology,
0x80396C3CL, 0xCBCB, 0x409B, 0x9F, 0x65, 0x4F, 0x1E, 0x74, 0x67, 0xCD, 0xAF);
DEFINE_GUID(IID_IDmaChannel,
0x22C6AC61L, 0x851B, 0x11D0, 0x9A, 0x7F, 0x00, 0xAA, 0x00, 0x38, 0xAC, 0xFE);
DEFINE_GUID(IID_IInterruptSync,
0x22C6AC63L, 0x851B, 0x11D0, 0x9A, 0x7F, 0x00, 0xAA, 0x00, 0x38, 0xAC, 0xFE);
DEFINE_GUID(IID_IServiceSink,
0x22C6AC64L, 0x851B, 0x11D0, 0x9A, 0x7F, 0x00, 0xAA, 0x00, 0x38, 0xAC, 0xFE);
DEFINE_GUID(IID_IServiceGroup,
0x22C6AC65L, 0x851B, 0x11D0, 0x9A, 0x7F, 0x00, 0xAA, 0x00, 0x38, 0xAC, 0xFE);
DEFINE_GUID(IID_IRegistryKey,
0xE8DA4302l, 0xF304, 0x11D0, 0x95, 0x8B, 0x00, 0xC0, 0x4F, 0xB9, 0x25, 0xD3);
DEFINE_GUID(IID_IPortMidi,
0xb4c90a40L, 0x5791, 0x11d0, 0x86, 0xf9, 0x00, 0xa0, 0xc9, 0x11, 0xb5, 0x44);
DEFINE_GUID(IID_IMiniportMidi,
0xb4c90a41L, 0x5791, 0x11d0, 0x86, 0xf9, 0x00, 0xa0, 0xc9, 0x11, 0xb5, 0x44);
DEFINE_GUID(IID_IMiniportMidiStream,
0xb4c90a42L, 0x5791, 0x11d0, 0x86, 0xf9, 0x00, 0xa0, 0xc9, 0x11, 0xb5, 0x44);
DEFINE_GUID(IID_IPortTopology,
0xb4c90a30L, 0x5791, 0x11d0, 0x86, 0xf9, 0x00, 0xa0, 0xc9, 0x11, 0xb5, 0x44);
DEFINE_GUID(IID_IMiniportTopology,
0xb4c90a31L, 0x5791, 0x11d0, 0x86, 0xf9, 0x00, 0xa0, 0xc9, 0x11, 0xb5, 0x44);
DEFINE_GUID(IID_IPortWaveCyclic,
0xb4c90a26L, 0x5791, 0x11d0, 0x86, 0xf9, 0x00, 0xa0, 0xc9, 0x11, 0xb5, 0x44);
DEFINE_GUID(IID_IMiniportWaveCyclic,
0xb4c90a27L, 0x5791, 0x11d0, 0x86, 0xf9, 0x00, 0xa0, 0xc9, 0x11, 0xb5, 0x44);
DEFINE_GUID(IID_IMiniportWaveCyclicStream,
0xb4c90a28L, 0x5791, 0x11d0, 0x86, 0xf9, 0x00, 0xa0, 0xc9, 0x11, 0xb5, 0x44);
DEFINE_GUID(IID_IPortWavePci,
0xb4c90a50L, 0x5791, 0x11d0, 0x86, 0xf9, 0x00, 0xa0, 0xc9, 0x11, 0xb5, 0x44);
DEFINE_GUID(IID_IPortWavePciStream,
0xb4c90a51L, 0x5791, 0x11d0, 0x86, 0xf9, 0x00, 0xa0, 0xc9, 0x11, 0xb5, 0x44);
DEFINE_GUID(IID_IMiniportWavePci,
0xb4c90a52L, 0x5791, 0x11d0, 0x86, 0xf9, 0x00, 0xa0, 0xc9, 0x11, 0xb5, 0x44);
DEFINE_GUID(IID_IMiniportWavePciStream,
0xb4c90a53L, 0x5791, 0x11d0, 0x86, 0xf9, 0x00, 0xa0, 0xc9, 0x11, 0xb5, 0x44);
DEFINE_GUID(IID_IPortWaveRT,
0x339ff909, 0x68a9, 0x4310, 0xb0, 0x9b, 0x27, 0x4e, 0x96, 0xee, 0x4c, 0xbd);
DEFINE_GUID(IID_IPortWaveRTStream,
0x1809ce5a, 0x64bc, 0x4e62, 0xbd, 0x7d, 0x95, 0xbc, 0xe4, 0x3d, 0xe3, 0x93);
DEFINE_GUID(IID_IMiniportWaveRT,
0xf9fc4d6, 0x6061, 0x4f3c, 0xb1, 0xfc, 0x7, 0x5e, 0x35, 0xf7, 0x96, 0xa);
DEFINE_GUID(IID_IMiniportWaveRTStream,
0xac9ab, 0xfaab, 0x4f3d, 0x94, 0x55, 0x6f, 0xf8, 0x30, 0x6a, 0x74, 0xa0);
DEFINE_GUID(IID_IMiniportWaveRTStreamNotification,
0x23759128, 0x96f1, 0x423b, 0xab, 0x4d, 0x81, 0x63, 0x5b, 0xcf, 0x8c, 0xa1);
DEFINE_GUID(IID_IPortWMIRegistration,
0xd80b18e7, 0x804c, 0x4e1e, 0x82, 0xd3, 0x24, 0x61, 0xec, 0x6, 0xe7, 0xc7);
DEFINE_GUID(IID_IPortClsSubdeviceEx,
0xc3d5e80c, 0x7f55, 0x40c5, 0x88, 0xb2, 0x62, 0x10, 0xd0, 0xcb, 0x2b, 0x59);
DEFINE_GUID(IID_IPortClsPower,
0x47ba0351, 0xbc4b, 0x4869, 0x81, 0x34, 0xb7, 0x4f, 0xe1, 0x78, 0x52, 0xd8);
DEFINE_GUID(IID_IPortClsRuntimePower,
0xe057c351, 0x430, 0x4dbc, 0xb1, 0x72, 0xc7, 0x11, 0xd4, 0xa, 0x23, 0x73);
DEFINE_GUID(IID_IPinName,
0x29cc9ab1, 0xe89d, 0x413c, 0xb6, 0xb2, 0xf6, 0xd5, 0x0, 0x5, 0xd0, 0x63);
DEFINE_GUID(IID_IPortClsEtwHelper,
0x80ef6667, 0xe8b1, 0x4252, 0xab, 0x9, 0x8f, 0x6d, 0x5e, 0xbb, 0xd1, 0x9f);
DEFINE_GUID(IID_IMiniportWaveRTInputStream,
0xcd8e756a, 0x5fc7, 0x4624, 0x98, 0x4b, 0x2a, 0xf0, 0x29, 0x25, 0xb9, 0x1f);
DEFINE_GUID(IID_IMiniportWaveRTOutputStream,
0x831fc7bc, 0x6347, 0x44bc, 0xb4, 0x7b, 0xc0, 0xc6, 0x57, 0xb5, 0xbf, 0x73);
DEFINE_GUID(IID_IPortClsStreamResourceManager,
0xe1cd9915, 0xcab1, 0x4103, 0xbb, 0x2f, 0x7d, 0xc0, 0x9c, 0x9b, 0xe9, 0x42);
DEFINE_GUID(IID_IPortClsStreamResourceManager2,
0x0d500bae, 0xd565, 0x469d, 0xa0, 0xe2, 0xf2, 0x83, 0x76, 0x0d, 0x71, 0x48);
DEFINE_GUID(IID_IAdapterPnpManagement,
0x706f2368L, 0x4086, 0x47f5, 0xb9, 0x13, 0x57, 0xb7, 0x6e, 0xed, 0x1a, 0x32);
DEFINE_GUID(IID_IMiniportPnpNotify,
0x6b735365L, 0x9487, 0x464c, 0x93, 0xe3, 0xfa, 0x2c, 0x63, 0x91, 0xd5, 0xa4);
DEFINE_GUID(IID_IPortClsPnp,
0x0485791b, 0x17f5, 0x4b73, 0x90, 0x2a, 0x20, 0x34, 0x48, 0x60, 0xb9, 0xca);
DEFINE_GUID(IID_IAdapterPowerManagement,
0x793417D0L, 0x35FE, 0x11D1, 0xAD, 0x08, 0x00, 0xA0, 0xC9, 0x0A, 0xB1, 0xB0);
DEFINE_GUID(IID_IAdapterPowerManagement2,
0xE0F92E5DL, 0x67F5, 0x48EE, 0xB5, 0x7A, 0x7D, 0x1E, 0x90, 0xC5, 0xF4, 0x3D);
DEFINE_GUID(IID_IAdapterPowerManagement3,
0xA8C7303EL, 0xF80C, 0x4BC9, 0xB2, 0xE3, 0xFB, 0x2D, 0x08, 0xBE, 0x92, 0x0F);
DEFINE_GUID(IID_IPowerNotify,
0x3DD648B8L, 0x969F, 0x11D1, 0x95, 0xA9, 0x00, 0xC0, 0x4F, 0xB9, 0x25, 0xD3);
DEFINE_GUID(IID_IWaveCyclicClock,
0xdec1ec78L, 0x419a, 0x11d1, 0xad, 0x09, 0x00, 0xc0, 0x4f, 0xb9, 0x1b, 0xc4);
DEFINE_GUID(IID_IWavePciClock,
0xd5d7a256L, 0x5d10, 0x11d1, 0xad, 0xae, 0x00, 0xc0, 0x4f, 0xb9, 0x1b, 0xc4);
DEFINE_GUID(IID_IPortEvents,
0xA80F29C4L, 0x5498, 0x11D2, 0x95, 0xD9, 0x00, 0xC0, 0x4F, 0xB9, 0x25, 0xD3);
DEFINE_GUID(IID_IDrmPort,
0x286D3DF8L, 0xCA22, 0x4E2E, 0xB9, 0xBC, 0x20, 0xB4, 0xF0, 0xE2, 0x01, 0xCE);
DEFINE_GUID(IID_IDrmPort2,
0x1ACCE59CL, 0x7311, 0x4B6B, 0x9F, 0xBA, 0xCC, 0x3B, 0xA5, 0x9A, 0xCD, 0xCE);
DEFINE_GUID(IID_IPortClsVersion,
0x7D89A7BBL, 0x869B, 0x4567, 0x8D, 0xBE, 0x1E, 0x16, 0x8C, 0xC8, 0x53, 0xDE);
DEFINE_GUID(IID_IPinCount,
0x5dadb7dcL, 0xa2cb, 0x4540, 0xa4, 0xa8, 0x42, 0x5e, 0xe4, 0xae, 0x90, 0x51);
DEFINE_GUID(IID_IPreFetchOffset,
0x7000f480L, 0xed44, 0x4e8b, 0xb3, 0x8a, 0x41, 0x2f, 0x8d, 0x7a, 0x50, 0x4d);
DEFINE_GUID(IID_IUnregisterSubdevice,
0x16738177L, 0xe199, 0x41f9, 0x9a, 0x87, 0xab, 0xb2, 0xa5, 0x43, 0x2f, 0x21);
DEFINE_GUID(IID_IUnregisterPhysicalConnection,
0x6c38e231L, 0x2a0d, 0x428d, 0x81, 0xf8, 0x07, 0xcc, 0x42, 0x8b, 0xb9, 0xa4);
DEFINE_GUID(CLSID_PortMidi,
0xb4c90a43L, 0x5791, 0x11d0, 0x86, 0xf9, 0x00, 0xa0, 0xc9, 0x11, 0xb5, 0x44);
DEFINE_GUID(CLSID_PortTopology,
0xb4c90a32L, 0x5791, 0x11d0, 0x86, 0xf9, 0x00, 0xa0, 0xc9, 0x11, 0xb5, 0x44);
DEFINE_GUID(CLSID_PortWaveCyclic,
0xb4c90a2aL, 0x5791, 0x11d0, 0x86, 0xf9, 0x00, 0xa0, 0xc9, 0x11, 0xb5, 0x44);
DEFINE_GUID(CLSID_PortWavePci,
0xb4c90a54L, 0x5791, 0x11d0, 0x86, 0xf9, 0x00, 0xa0, 0xc9, 0x11, 0xb5, 0x44);
DEFINE_GUID(CLSID_PortWaveRT,
0xcc9be57a, 0xeb9e, 0x42b4, 0x94, 0xfc, 0xc, 0xad, 0x3d, 0xbc, 0xe7, 0xfa);
DEFINE_GUID(CLSID_MiniportDriverFmSynth,
0xb4c90ae0L, 0x5791, 0x11d0, 0x86, 0xf9, 0x00, 0xa0, 0xc9, 0x11, 0xb5, 0x44);
DEFINE_GUID(CLSID_MiniportDriverUart,
0xb4c90ae1L, 0x5791, 0x11d0, 0x86, 0xf9, 0x00, 0xa0, 0xc9, 0x11, 0xb5, 0x44);
DEFINE_GUID(CLSID_MiniportDriverFmSynthWithVol,
0xe5a3c139L, 0xf0f2, 0x11d1, 0x81, 0xaf, 0x00, 0x60, 0x08, 0x33, 0x16, 0xc1);
    STDMETHOD_(NTSTATUS, QueryInterface)(THIS_ \
        _In_ REFIID InterfaceId, \
        _COM_Outptr_ PVOID* Interface \
        ) PURE; \
    STDMETHOD_(ULONG,AddRef)(THIS) PURE; \
    STDMETHOD_(ULONG,Release)(THIS) PURE;
    STDMETHOD_(NTSTATUS,Init) \
    ( THIS_ \
        _In_ PVOID DeviceObject, \
        _In_opt_ PVOID Irp, \
        _In_ PUNKNOWN UnknownMiniport, \
        _In_opt_ PUNKNOWN UnknownAdapter, \
        _In_ PRESOURCELIST ResourceList \
    ) PURE; \
    STDMETHOD_(NTSTATUS,GetDeviceProperty) \
    ( THIS_ \
        _In_ DEVICE_REGISTRY_PROPERTY DeviceProperty, \
        _In_ ULONG BufferLength, \
        _Out_ PVOID PropertyBuffer, \
        _Out_ PULONG ResultLength \
    ) PURE; \
    STDMETHOD_(NTSTATUS,NewRegistryKey) \
    ( THIS_ \
        _Out_ PREGISTRYKEY * OutRegistryKey, \
        _In_opt_ PUNKNOWN OuterUnknown, \
        _In_ ULONG RegistryKeyType, \
        _In_ ACCESS_MASK DesiredAccess, \
        _In_opt_ POBJECT_ATTRIBUTES ObjectAttributes, \
        _In_opt_ ULONG CreateOptions, \
        _Out_opt_ PULONG Disposition \
    ) PURE;
    STDMETHOD_(NTSTATUS,GetDescription) \
    ( THIS_ \
        _Out_ PPCFILTER_DESCRIPTOR * Description \
    ) PURE; \
    STDMETHOD_(NTSTATUS,DataRangeIntersection) \
    ( THIS_ \
        _In_ ULONG PinId, \
        _In_ PKSDATARANGE DataRange, \
        _In_ PKSDATARANGE MatchingDataRange, \
        _In_ ULONG OutputBufferLength, \
        _Out_writes_bytes_to_opt_(OutputBufferLength, *ResultantFormatLength) \
                  PVOID ResultantFormat, \
        _Out_ PULONG ResultantFormatLength \
    ) PURE;
    STDMETHOD_(NTSTATUS,AllocateBuffer) \
    ( THIS_ \
        _In_ ULONG BufferSize, \
        _In_opt_ PPHYSICAL_ADDRESS PhysicalAddressConstraint \
    ) PURE; \
    STDMETHOD_(void,FreeBuffer) \
    ( THIS \
    ) PURE; \
    STDMETHOD_(ULONG,TransferCount) \
    ( THIS \
    ) PURE; \
    STDMETHOD_(ULONG,MaximumBufferSize) \
    ( THIS \
    ) PURE; \
    STDMETHOD_(ULONG,AllocatedBufferSize) \
    ( THIS \
    ) PURE; \
    STDMETHOD_(ULONG,BufferSize) \
    ( THIS \
    ) PURE; \
    STDMETHOD_(void,SetBufferSize) \
    ( THIS_ \
        _In_ ULONG BufferSize \
    ) PURE; \
    STDMETHOD_(PVOID,SystemAddress) \
    ( THIS \
    ) PURE; \
    STDMETHOD_(PHYSICAL_ADDRESS,PhysicalAddress) \
    ( THIS \
    ) PURE; \
    STDMETHOD_(PADAPTER_OBJECT,GetAdapterObject) \
    ( THIS \
    ) PURE; \
    STDMETHOD_(void,CopyTo) \
    ( THIS_ \
        _Inout_updates_bytes_(ByteCount) PVOID Destination, \
        _In_reads_bytes_(ByteCount) PVOID Source, \
        _In_ ULONG ByteCount \
    ) PURE; \
    STDMETHOD_(void,CopyFrom) \
    ( THIS_ \
        _Inout_updates_bytes_(ByteCount) PVOID Destination, \
        _In_reads_bytes_(ByteCount) PVOID Source, \
        _In_ ULONG ByteCount \
    ) PURE;
    STDMETHOD_(NTSTATUS,CreateContentMixed) \
    ( THIS_ \
        _In_ PULONG paContentId, \
        _In_ ULONG cContentId, \
        _Out_ PULONG pMixedContentId \
    ) PURE; \
    STDMETHOD_(NTSTATUS,DestroyContent) \
    ( THIS_ \
        _In_ ULONG ContentId \
    ) PURE; \
    STDMETHOD_(NTSTATUS,ForwardContentToFileObject) \
    ( THIS_ \
        _In_ ULONG ContentId, \
        _In_ PFILE_OBJECT FileObject \
    ) PURE; \
    STDMETHOD_(NTSTATUS,ForwardContentToInterface) \
    ( THIS_ \
        _In_ ULONG ContentId, \
        _In_ PUNKNOWN pUnknown, \
        _In_ ULONG NumMethods \
    ) PURE; \
    STDMETHOD_(NTSTATUS,GetContentRights) \
    ( THIS_ \
        _In_ ULONG ContentId, \
        _Out_ PDRMRIGHTS DrmRights \
    ) PURE;
    STDMETHOD_(NTSTATUS,SetFormat) \
    ( THIS_ \
        _In_ PKSDATAFORMAT DataFormat \
    ) PURE; \
    STDMETHOD_(NTSTATUS,SetState) \
    ( THIS_ \
        _In_ KSSTATE State \
    ) PURE; \
    STDMETHOD_(NTSTATUS,GetPosition) \
    ( THIS_ \
        _Out_ PKSAUDIO_POSITION Position \
    ) PURE; \
    STDMETHOD_(NTSTATUS,AllocateAudioBuffer) \
    ( THIS_ \
        _In_ ULONG RequestedSize, \
        _Out_ PMDL *AudioBufferMdl, \
        _Out_ ULONG *ActualSize, \
        _Out_ ULONG *OffsetFromFirstPage, \
        _Out_ MEMORY_CACHING_TYPE *CacheType \
    ) PURE; \
    STDMETHOD_(VOID,FreeAudioBuffer) \
    ( THIS_ \
        _In_opt_ PMDL AudioBufferMdl, \
        _In_ ULONG BufferSize \
    ) PURE; \
    STDMETHOD_(VOID,GetHWLatency) \
    ( THIS_ \
        _Out_ KSRTAUDIO_HWLATENCY *hwLatency \
    ) PURE; \
    STDMETHOD_(NTSTATUS,GetPositionRegister) \
    ( THIS_ \
        _Out_ KSRTAUDIO_HWREGISTER *Register \
    ) PURE; \
    STDMETHOD_(NTSTATUS,GetClockRegister) \
    ( THIS_ \
        _Out_ KSRTAUDIO_HWREGISTER *Register \
    ) PURE;
    STDMETHOD_(NTSTATUS, AllocateBufferWithNotification) \
    ( \
        _In_ ULONG NotificationCount, \
        _In_ ULONG RequestedSize, \
        _Out_ PMDL *AudioBufferMdl, \
        _Out_ ULONG *ActualSize, \
        _Out_ ULONG *OffsetFromFirstPage, \
        _Out_ MEMORY_CACHING_TYPE *CacheType \
    ) PURE; \
    STDMETHOD_(VOID, FreeBufferWithNotification) \
    ( \
        _In_ PMDL AudioBufferMdl, \
        _In_ ULONG BufferSize \
    ) PURE; \
    STDMETHOD_(NTSTATUS, RegisterNotificationEvent) \
    ( \
        _In_ PKEVENT NotificationEvent \
    ) PURE; \
    STDMETHOD_(NTSTATUS, UnregisterNotificationEvent) \
    ( \
        _In_ PKEVENT NotificationEvent \
    ) PURE;
    _IRQL_requires_max_(PASSIVE_LEVEL) \
    STDMETHOD_(NTSTATUS, GetReadPacket) \
    ( THIS_ \
        _Out_ ULONG *PacketNumber, \
        _Out_ DWORD *Flags, \
        _Out_ ULONG64 *PerformanceCounterValue, \
        _Out_ BOOL *MoreData \
    ) PURE;
    _IRQL_requires_max_(PASSIVE_LEVEL) \
    STDMETHOD_(NTSTATUS, SetWritePacket) \
    ( \
        THIS_ \
        _In_ ULONG PacketNumber, \
        _In_ DWORD Flags, \
        _In_ ULONG EosPacketLength \
    ) PURE; \
                                                                    \
    _IRQL_requires_max_(PASSIVE_LEVEL) \
    STDMETHOD_(NTSTATUS, GetOutputStreamPresentationPosition) \
    ( \
        THIS_ \
        _Out_ KSAUDIO_PRESENTATION_POSITION *pPresentationPosition \
    ) PURE; \
                                                                    \
    _IRQL_requires_max_(PASSIVE_LEVEL) \
    STDMETHOD_(NTSTATUS, GetPacketCount) \
    ( \
        THIS_ \
        _Out_ ULONG *pPacketCount \
    ) PURE;
typedef enum{
    PcRebalanceNotSupported = 0,
    PcRebalanceRemoveSubdevices
} PC_REBALANCE_TYPE;
    STDMETHOD_(PC_REBALANCE_TYPE, GetSupportedRebalanceType) \
    ( THIS \
    ) PURE; \
    STDMETHOD_(void, PnpQueryStop) \
    ( THIS \
    ) PURE; \
    STDMETHOD_(void, PnpCancelStop) \
    ( THIS \
    ) PURE; \
    STDMETHOD_(void, PnpStop) \
    ( THIS \
    ) PURE;
DECLARE_INTERFACE_(IAdapterPnpManagement,IUnknown)
{
    DEFINE_ABSTRACT_UNKNOWN()
    DEFINE_ABSTRACT_ADAPTERPNPMANAGEMENT()
};
typedef IAdapterPnpManagement *PADAPTERPNPMANAGEMENT;
    STDMETHODIMP_(PC_REBALANCE_TYPE) GetSupportedRebalanceType \
    ( \
    ); \
    STDMETHODIMP_(void) PnpQueryStop \
    ( \
    ); \
    STDMETHODIMP_(void) PnpCancelStop \
    ( \
    ); \
    STDMETHODIMP_(void) PnpStop \
    ( \
    )
    STDMETHOD_(void, PnpStop) \
    ( THIS \
    ) PURE;
DECLARE_INTERFACE_(IMiniportPnpNotify,IUnknown)
{
    DEFINE_ABSTRACT_UNKNOWN()
    DEFINE_ABSTRACT_MINIPORTPNPNOTIFY()
};
typedef IMiniportPnpNotify *PMINIPORTPNPNOTIFY;
    STDMETHODIMP_(void) PnpStop \
    ( \
    )
DECLARE_INTERFACE_(IPortClsPnp,IUnknown)
{
    DEFINE_ABSTRACT_UNKNOWN()
    STDMETHOD_(NTSTATUS,RegisterAdapterPnpManagement)
    ( THIS_
        _In_ PUNKNOWN pUnknown,
        _In_ PDEVICE_OBJECT DeviceObject
    ) PURE;
    STDMETHOD_(NTSTATUS,UnregisterAdapterPnpManagement)
    ( THIS_
        _In_ PDEVICE_OBJECT DeviceObject
    ) PURE;
};
typedef IPortClsPnp *PPORTCLSPNP;
    STDMETHOD_(void,PowerChangeState) \
    ( THIS_ \
        _In_ POWER_STATE NewState \
    ) PURE; \
    STDMETHOD_(NTSTATUS,QueryPowerChangeState) \
    ( THIS_ \
        _In_ POWER_STATE NewStateQuery \
    ) PURE; \
    STDMETHOD_(NTSTATUS,QueryDeviceCapabilities) \
    ( THIS_ \
        _Inout_updates_bytes_(sizeof(DEVICE_CAPABILITIES)) PDEVICE_CAPABILITIES PowerDeviceCaps \
    ) PURE;
    STDMETHOD_(void,PowerChangeState2) \
    ( THIS_ \
        _In_ DEVICE_POWER_STATE NewDeviceState, \
        _In_ SYSTEM_POWER_STATE NewSystemState \
    ) PURE;
DECLARE_INTERFACE_(IResourceList,IUnknown)
{
    DEFINE_ABSTRACT_UNKNOWN()
    STDMETHOD_(ULONG,NumberOfEntries)
    ( THIS
    ) PURE;
    STDMETHOD_(ULONG,NumberOfEntriesOfType)
    ( THIS_
        _In_ CM_RESOURCE_TYPE Type
    ) PURE;
    STDMETHOD_(PCM_PARTIAL_RESOURCE_DESCRIPTOR,FindTranslatedEntry)
    ( THIS_
        _In_ CM_RESOURCE_TYPE Type,
        _In_ ULONG Index
    ) PURE;
    STDMETHOD_(PCM_PARTIAL_RESOURCE_DESCRIPTOR,FindUntranslatedEntry)
    ( THIS_
        _In_ CM_RESOURCE_TYPE Type,
        _In_ ULONG Index
    ) PURE;
    STDMETHOD_(NTSTATUS,AddEntry)
    ( THIS_
        _In_ PCM_PARTIAL_RESOURCE_DESCRIPTOR Translated,
        _In_ PCM_PARTIAL_RESOURCE_DESCRIPTOR Untranslated
    ) PURE;
    STDMETHOD_(NTSTATUS,AddEntryFromParent)
    ( THIS_
        _In_ struct IResourceList * Parent,
        _In_ CM_RESOURCE_TYPE Type,
        _In_ ULONG Index
    ) PURE;
    STDMETHOD_(PCM_RESOURCE_LIST,TranslatedList)
    ( THIS
    ) PURE;
    STDMETHOD_(PCM_RESOURCE_LIST,UntranslatedList)
    ( THIS
    ) PURE;
};
typedef IResourceList *PRESOURCELIST;
    STDMETHODIMP_(ULONG)NumberOfEntries\
    ( void\
    );\
    STDMETHODIMP_(ULONG) NumberOfEntriesOfType\
    ( _In_ CM_RESOURCE_TYPE Type\
    );\
    STDMETHODIMP_(PCM_PARTIAL_RESOURCE_DESCRIPTOR) FindTranslatedEntry\
    ( _In_ CM_RESOURCE_TYPE Type,\
        _In_ ULONG Index\
    );\
    STDMETHODIMP_(PCM_PARTIAL_RESOURCE_DESCRIPTOR) FindUntranslatedEntry\
    ( _In_ CM_RESOURCE_TYPE Type,\
        _In_ ULONG Index\
    );\
    STDMETHODIMP_(NTSTATUS) AddEntry\
    ( _In_ PCM_PARTIAL_RESOURCE_DESCRIPTOR Translated,\
        _In_ PCM_PARTIAL_RESOURCE_DESCRIPTOR Untranslated\
    );\
    STDMETHODIMP_(NTSTATUS) AddEntryFromParent\
    ( _In_ struct IResourceList * Parent,\
        _In_ CM_RESOURCE_TYPE Type,\
        _In_ ULONG Index\
    );\
    STDMETHODIMP_(PCM_RESOURCE_LIST) TranslatedList\
    ( void\
    );\
    STDMETHODIMP_(PCM_RESOURCE_LIST) UntranslatedList\
    ( void\
    )
DECLARE_INTERFACE_(IDmaChannel,IUnknown)
{
    DEFINE_ABSTRACT_UNKNOWN()
    DEFINE_ABSTRACT_DMACHANNEL()
};
typedef IDmaChannel *PDMACHANNEL;
    STDMETHODIMP_(NTSTATUS) AllocateBuffer\
    ( _In_ ULONG BufferSize,\
        _In_opt_ PPHYSICAL_ADDRESS PhysicalAddressConstraint\
    );\
    STDMETHODIMP_(void) FreeBuffer\
    ( void\
    );\
    STDMETHODIMP_(ULONG) TransferCount\
    ( void\
    );\
    STDMETHODIMP_(ULONG) MaximumBufferSize\
    ( void\
    );\
    STDMETHODIMP_(ULONG) AllocatedBufferSize\
    ( void\
    );\
    STDMETHODIMP_(ULONG) BufferSize\
    ( void\
    );\
    STDMETHODIMP_(void) SetBufferSize\
    ( _In_ ULONG BufferSize\
    );\
    STDMETHODIMP_(PVOID) SystemAddress\
    ( void\
    );\
    STDMETHODIMP_(PHYSICAL_ADDRESS) PhysicalAddress\
    ( void\
    );\
    STDMETHODIMP_(PADAPTER_OBJECT) GetAdapterObject\
    ( void\
    );\
    STDMETHODIMP_(void) CopyTo\
    ( _Inout_updates_bytes_(ByteCount) PVOID Destination,\
        _In_reads_bytes_(ByteCount) PVOID Source,\
        _In_ ULONG ByteCount\
    );\
    STDMETHODIMP_(void) CopyFrom\
    ( _Inout_updates_bytes_(ByteCount) PVOID Destination,\
        _In_reads_bytes_(ByteCount) PVOID Source,\
        _In_ ULONG ByteCount\
    )
typedef PVOID PDMACHANNELSLAVE;
typedef enum
{
    InterruptSyncModeNormal = 1,
    InterruptSyncModeAll,
    InterruptSyncModeRepeat
} INTERRUPTSYNCMODE;
typedef NTSTATUS
(*PINTERRUPTSYNCROUTINE)
(
    _In_ struct IInterruptSync * InterruptSync,
    _In_ PVOID DynamicContext
);
DECLARE_INTERFACE_(IInterruptSync,IUnknown)
{
    DEFINE_ABSTRACT_UNKNOWN()
    STDMETHOD_(NTSTATUS,CallSynchronizedRoutine)
    ( THIS_
        _In_ PINTERRUPTSYNCROUTINE Routine,
        _In_ PVOID DynamicContext
    ) PURE;
    STDMETHOD_(PKINTERRUPT,GetKInterrupt)
    ( THIS
    ) PURE;
    STDMETHOD_(NTSTATUS,Connect)
    ( THIS
    ) PURE;
    STDMETHOD_(void,Disconnect)
    ( THIS
    ) PURE;
    STDMETHOD_(NTSTATUS,RegisterServiceRoutine)
    ( THIS_
        _In_ PINTERRUPTSYNCROUTINE Routine,
        _In_ PVOID DynamicContext,
        _In_ BOOLEAN First
    ) PURE;
};
typedef IInterruptSync *PINTERRUPTSYNC;
    STDMETHODIMP_(NTSTATUS) CallSynchronizedRoutine\
    ( _In_ PINTERRUPTSYNCROUTINE Routine,\
        _In_ PVOID DynamicContext\
    );\
    STDMETHODIMP_(PKINTERRUPT) GetKInterrupt\
    ( void\
    );\
    STDMETHODIMP_(NTSTATUS) Connect\
    ( void\
    );\
    STDMETHODIMP_(void) Disconnect\
    ( void\
    );\
    STDMETHODIMP_(NTSTATUS) RegisterServiceRoutine\
    ( _In_ PINTERRUPTSYNCROUTINE Routine,\
        _In_ PVOID DynamicContext,\
        _In_ BOOLEAN First\
    )
DECLARE_INTERFACE_(IServiceSink,IUnknown)
{
    DEFINE_ABSTRACT_UNKNOWN()
    STDMETHOD_(void,RequestService)
    ( THIS
    ) PURE;
};
typedef IServiceSink *PSERVICESINK;
    STDMETHODIMP_(void) RequestService\
    ( void\
    )
DECLARE_INTERFACE_(IServiceGroup,IServiceSink)
{
    DEFINE_ABSTRACT_UNKNOWN()
    STDMETHOD_(void,RequestService)
    ( THIS
    ) PURE;
    STDMETHOD_(NTSTATUS,AddMember)
    ( THIS_
        _In_ PSERVICESINK pServiceSink
    ) PURE;
    STDMETHOD_(void,RemoveMember)
    ( THIS_
        _In_ PSERVICESINK pServiceSink
    ) PURE;
    STDMETHOD_(void,SupportDelayedService)
    ( THIS
    ) PURE;
    STDMETHOD_(void,RequestDelayedService)
    ( THIS_
        _In_ ULONGLONG ullDelay
    ) PURE;
    STDMETHOD_(void,CancelDelayedService)
    ( THIS
    ) PURE;
};
typedef IServiceGroup *PSERVICEGROUP;
    IMP_IServiceSink;\
    STDMETHODIMP_(NTSTATUS) AddMember\
    ( _In_ PSERVICESINK pServiceSink\
    );\
    STDMETHODIMP_(void) RemoveMember\
    ( _In_ PSERVICESINK pServiceSink\
    );\
    STDMETHODIMP_(void) SupportDelayedService\
    ( void\
    );\
    STDMETHODIMP_(void) RequestDelayedService\
    ( _In_ ULONGLONG ullDelay\
    );\
    STDMETHODIMP_(void) CancelDelayedService\
    ( void\
    )
DECLARE_INTERFACE_(IRegistryKey,IUnknown)
{
    DEFINE_ABSTRACT_UNKNOWN()
    STDMETHOD_(NTSTATUS,QueryKey)
    ( THIS_
        _In_ KEY_INFORMATION_CLASS KeyInformationClass,
        _Out_ PVOID KeyInformation,
        _In_ ULONG Length,
        _Out_ PULONG ResultLength
    ) PURE;
    STDMETHOD_(NTSTATUS,EnumerateKey)
    ( THIS_
        _In_ ULONG Index,
        _In_ KEY_INFORMATION_CLASS KeyInformationClass,
        _Out_ PVOID KeyInformation,
        _In_ ULONG Length,
        _Out_ PULONG ResultLength
    ) PURE;
    STDMETHOD_(NTSTATUS,QueryValueKey)
    ( THIS_
        _In_ PUNICODE_STRING ValueName,
        _In_ KEY_VALUE_INFORMATION_CLASS KeyValueInformationClass,
        _Out_ PVOID KeyValueInformation,
        _In_ ULONG Length,
        _Out_ PULONG ResultLength
    ) PURE;
    STDMETHOD_(NTSTATUS,EnumerateValueKey)
    ( THIS_
        _In_ ULONG Index,
        _In_ KEY_VALUE_INFORMATION_CLASS KeyValueInformationClass,
        _Out_ PVOID KeyValueInformation,
        _In_ ULONG Length,
        _Out_ PULONG ResultLength
    ) PURE;
    STDMETHOD_(NTSTATUS,SetValueKey)
    ( THIS_
        _In_opt_ PUNICODE_STRING ValueName,
        _In_ ULONG Type,
        _In_ PVOID Data,
        _In_ ULONG DataSize
    ) PURE;
    STDMETHOD_(NTSTATUS,QueryRegistryValues)
    ( THIS_
        _In_ PRTL_QUERY_REGISTRY_TABLE QueryTable,
        _In_opt_ PVOID Context
    ) PURE;
    STDMETHOD_(NTSTATUS,NewSubKey)
    ( THIS_
        _Out_ IRegistryKey ** RegistrySubKey,
        _In_opt_ PUNKNOWN OuterUnknown,
        _In_ ACCESS_MASK DesiredAccess,
        _In_ PUNICODE_STRING SubKeyName,
        _In_ ULONG CreateOptions,
        _Out_opt_ PULONG Disposition
    ) PURE;
    STDMETHOD_(NTSTATUS,DeleteKey)
    ( THIS
    ) PURE;
};
typedef IRegistryKey *PREGISTRYKEY;
    STDMETHODIMP_(NTSTATUS) QueryKey\
    ( _In_ KEY_INFORMATION_CLASS KeyInformationClass,\
        _Out_ PVOID KeyInformation,\
        _In_ ULONG Length,\
        _Out_ PULONG ResultLength\
    );\
    STDMETHODIMP_(NTSTATUS) EnumerateKey\
    ( _In_ ULONG Index,\
        _In_ KEY_INFORMATION_CLASS KeyInformationClass,\
        _Out_ PVOID KeyInformation,\
        _In_ ULONG Length,\
        _Out_ PULONG ResultLength\
    );\
    STDMETHODIMP_(NTSTATUS) QueryValueKey\
    ( _In_ PUNICODE_STRING ValueName,\
        _In_ KEY_VALUE_INFORMATION_CLASS KeyValueInformationClass,\
        _Out_ PVOID KeyValueInformation,\
        _In_ ULONG Length,\
        _Out_ PULONG ResultLength\
    );\
    STDMETHODIMP_(NTSTATUS) EnumerateValueKey\
    ( _In_ ULONG Index,\
        _In_ KEY_VALUE_INFORMATION_CLASS KeyValueInformationClass,\
        _Out_ PVOID KeyValueInformation,\
        _In_ ULONG Length,\
        _Out_ PULONG ResultLength\
    );\
    STDMETHODIMP_(NTSTATUS) SetValueKey\
    ( _In_opt_ PUNICODE_STRING ValueName,\
        _In_ ULONG Type,\
        _In_ PVOID Data,\
        _In_ ULONG DataSize\
    );\
    STDMETHODIMP_(NTSTATUS) QueryRegistryValues\
    ( _In_ PRTL_QUERY_REGISTRY_TABLE QueryTable,\
        _In_opt_ PVOID Context\
    );\
    STDMETHODIMP_(NTSTATUS) NewSubKey\
    ( _Out_ IRegistryKey ** RegistrySubKey,\
        _In_opt_ PUNKNOWN OuterUnknown,\
        _In_ ACCESS_MASK DesiredAccess,\
        _In_ PUNICODE_STRING SubKeyName,\
        _In_ ULONG CreateOptions,\
        _Out_opt_ PULONG Disposition\
    );\
    STDMETHODIMP_(NTSTATUS) DeleteKey\
    ( void\
    )
DECLARE_INTERFACE_(IMusicTechnology,IUnknown)
{
    DEFINE_ABSTRACT_UNKNOWN()
    STDMETHOD_(NTSTATUS,SetTechnology)
    ( THIS_
        _In_ const GUID * Technology
    ) PURE;
};
typedef IMusicTechnology *PMUSICTECHNOLOGY;
    STDMETHODIMP_(NTSTATUS) SetTechnology\
    ( _In_ const GUID * Technology\
    )
typedef struct _PCPROPERTY_REQUEST PCPROPERTY_REQUEST, *PPCPROPERTY_REQUEST;
typedef struct _PCMETHOD_REQUEST PCMETHOD_REQUEST, *PPCMETHOD_REQUEST;
typedef struct _PCEVENT_REQUEST PCEVENT_REQUEST, *PPCEVENT_REQUEST;
typedef
NTSTATUS
(*PCPFNPROPERTY_HANDLER)
(
    _In_ PPCPROPERTY_REQUEST PropertyRequest
);
typedef
NTSTATUS
(*PCPFNMETHOD_HANDLER)
(
    _In_ PPCMETHOD_REQUEST MethodRequest
);
typedef
NTSTATUS
(*PCPFNEVENT_HANDLER)
(
    _In_ PPCEVENT_REQUEST EventRequest
);
typedef struct
{
    const GUID * Set;
    ULONG Id;
    ULONG Flags;
        (PCPROPERTY_ITEM_FLAG_SERIALIZERAW\
        |PCPROPERTY_ITEM_FLAG_UNSERIALIZERAW\
        |PCPROPERTY_ITEM_FLAG_SERIALIZESIZE\
        )
    PCPFNPROPERTY_HANDLER Handler;
}
PCPROPERTY_ITEM, *PPCPROPERTY_ITEM;
typedef struct
{
    const GUID * Set;
    ULONG Id;
    ULONG Flags;
    PCPFNMETHOD_HANDLER Handler;
}
PCMETHOD_ITEM, *PPCMETHOD_ITEM;
typedef struct
{
    const GUID * Set;
    ULONG Id;
    ULONG Flags;
    PCPFNEVENT_HANDLER Handler;
}
PCEVENT_ITEM, *PPCEVENT_ITEM;
typedef struct _PCPROPERTY_REQUEST
{
    PUNKNOWN MajorTarget;
    PUNKNOWN MinorTarget;
    ULONG Node;
    const PCPROPERTY_ITEM * PropertyItem;
    ULONG Verb;
    ULONG InstanceSize;
    PVOID Instance;
    ULONG ValueSize;
    PVOID Value;
    PIRP Irp;
}
PCPROPERTY_REQUEST, *PPCPROPERTY_REQUEST;
typedef struct _PCMETHOD_REQUEST
{
    PUNKNOWN MajorTarget;
    PUNKNOWN MinorTarget;
    ULONG Node;
    const PCMETHOD_ITEM * MethodItem;
    ULONG Verb;
}
PCMETHOD_REQUEST, *PPCMETHOD_REQUEST;
typedef struct _PCEVENT_REQUEST
{
    PUNKNOWN MajorTarget;
    PUNKNOWN MinorTarget;
    ULONG Node;
    const PCEVENT_ITEM * EventItem;
    PKSEVENT_ENTRY EventEntry;
    ULONG Verb;
    PIRP Irp;
}
PCEVENT_REQUEST, *PPCEVENT_REQUEST;
typedef struct
{
    ULONG PropertyItemSize;
    ULONG PropertyCount;
    const PCPROPERTY_ITEM * Properties;
        ULONG MethodItemSize;
        ULONG MethodCount;
        const PCMETHOD_ITEM * Methods;
        ULONG EventItemSize;
        ULONG EventCount;
        const PCEVENT_ITEM * Events;
    ULONG Reserved;
}
PCAUTOMATION_TABLE, *PPCAUTOMATION_TABLE;
const PCAUTOMATION_TABLE AutomationTable =\
{\
    sizeof(PropertyTable[0]),\
    SIZEOF_ARRAY(PropertyTable),\
    (const PCPROPERTY_ITEM *) PropertyTable,\
    0,0,NULL,\
    0,0,NULL,\
    0\
}
const PCAUTOMATION_TABLE AutomationTable =\
{\
    sizeof(PropertyTable[0]),\
    SIZEOF_ARRAY(PropertyTable),\
    (const PCPROPERTY_ITEM *) PropertyTable,\
    0,0,NULL,\
    sizeof(EventTable[0]),\
    SIZEOF_ARRAY(EventTable),\
    (const PCEVENT_ITEM *) EventTable,\
    0\
}
const PCAUTOMATION_TABLE AutomationTable =\
{\
    0,0,NULL,\
    0,0,NULL,\
    sizeof(EventTable[0]),\
    SIZEOF_ARRAY(EventTable),\
    (const PCEVENT_ITEM *) EventTable,\
    0\
}
typedef struct
{
    ULONG MaxGlobalInstanceCount;
    ULONG MaxFilterInstanceCount;
    ULONG MinFilterInstanceCount;
    const PCAUTOMATION_TABLE * AutomationTable;
    KSPIN_DESCRIPTOR KsPinDescriptor;
}
PCPIN_DESCRIPTOR, *PPCPIN_DESCRIPTOR;
typedef struct
{
    ULONG Flags;
        const PCAUTOMATION_TABLE * AutomationTable;
        const GUID * Type;
        const GUID * Name;
}
PCNODE_DESCRIPTOR, *PPCNODE_DESCRIPTOR;
typedef KSTOPOLOGY_CONNECTION
PCCONNECTION_DESCRIPTOR, *PPCCONNECTION_DESCRIPTOR;
typedef struct
{
    ULONG Version;
        const PCAUTOMATION_TABLE * AutomationTable;
    ULONG PinSize;
    ULONG PinCount;
    const PCPIN_DESCRIPTOR * Pins;
    ULONG NodeSize;
    ULONG NodeCount;
    const PCNODE_DESCRIPTOR * Nodes;
    ULONG ConnectionCount;
    const PCCONNECTION_DESCRIPTOR * Connections;
    ULONG CategoryCount;
    const GUID * Categories;
}
PCFILTER_DESCRIPTOR, *PPCFILTER_DESCRIPTOR;
DECLARE_INTERFACE_(IMiniport,IUnknown)
{
    DEFINE_ABSTRACT_UNKNOWN()
    DEFINE_ABSTRACT_MINIPORT()
};
typedef IMiniport *PMINIPORT;
    STDMETHODIMP_(NTSTATUS) GetDescription\
    ( _Out_ PPCFILTER_DESCRIPTOR * Description\
    );\
    STDMETHODIMP_(NTSTATUS) DataRangeIntersection\
    ( _In_ ULONG PinId,\
        _In_ PKSDATARANGE DataRange,\
        _In_ PKSDATARANGE MatchingDataRange,\
        _In_ ULONG OutputBufferLength,\
        _Out_writes_bytes_to_opt_(OutputBufferLength, *ResultantFormatLength)\
                  PVOID ResultantFormat,\
        _Out_ PULONG ResultantFormatLength\
    )
DECLARE_INTERFACE_(IPort,IUnknown)
{
    DEFINE_ABSTRACT_UNKNOWN()
    DEFINE_ABSTRACT_PORT()
};
typedef IPort *PPORT;
    STDMETHODIMP_(NTSTATUS) Init\
    ( _In_ PDEVICE_OBJECT DeviceObject,\
        _In_opt_ PIRP Irp,\
        _In_ PUNKNOWN UnknownMiniport,\
        _In_opt_ PUNKNOWN UnknownAdapter,\
        _In_ PRESOURCELIST ResourceList\
    );\
    STDMETHODIMP_(NTSTATUS) GetDeviceProperty\
    ( _In_ DEVICE_REGISTRY_PROPERTY DeviceProperty,\
        _In_ ULONG BufferLength,\
        _Out_ PVOID PropertyBuffer,\
        _Out_ PULONG ResultLength\
    );\
    STDMETHODIMP_(NTSTATUS) NewRegistryKey\
    ( _Out_ PREGISTRYKEY * OutRegistryKey,\
        _In_opt_ PUNKNOWN OuterUnknown,\
        _In_ ULONG RegistryKeyType,\
        _In_ ACCESS_MASK DesiredAccess,\
        _In_opt_ POBJECT_ATTRIBUTES ObjectAttributes,\
        _In_opt_ ULONG CreateOptions,\
        _Out_opt_ PULONG Disposition\
    )
DECLARE_INTERFACE_(IPortMidi,IPort)
{
    DEFINE_ABSTRACT_UNKNOWN()
    DEFINE_ABSTRACT_PORT()
    STDMETHOD_(void,Notify)
    ( THIS_
        _In_opt_ PSERVICEGROUP ServiceGroup
    ) PURE;
    STDMETHOD_(void,RegisterServiceGroup)
    ( THIS_
        _In_ PSERVICEGROUP ServiceGroup
    ) PURE;
};
typedef IPortMidi *PPORTMIDI;
    IMP_IPort;\
    STDMETHODIMP_(void) Notify\
    ( _In_opt_ PSERVICEGROUP ServiceGroup\
    );\
    STDMETHODIMP_(void) RegisterServiceGroup\
    ( _In_ PSERVICEGROUP ServiceGroup\
    )
DECLARE_INTERFACE_(IMiniportMidiStream,IUnknown)
{
    DEFINE_ABSTRACT_UNKNOWN()
    STDMETHOD_(NTSTATUS,SetFormat)
    ( THIS_
        _In_ PKSDATAFORMAT DataFormat
    ) PURE;
    STDMETHOD_(NTSTATUS,SetState)
    ( THIS_
        _In_ KSSTATE State
    ) PURE;
    STDMETHOD_(NTSTATUS,Read)
    ( THIS_
        _In_ PVOID BufferAddress,
        _In_ ULONG BufferLength,
        _Out_ PULONG BytesRead
    ) PURE;
    STDMETHOD_(NTSTATUS,Write)
    ( THIS_
        _In_ PVOID BufferAddress,
        _In_ ULONG BytesToWrite,
        _Out_ PULONG BytesWritten
    ) PURE;
};
typedef IMiniportMidiStream *PMINIPORTMIDISTREAM;
    STDMETHODIMP_(NTSTATUS) SetFormat\
    ( _In_ PKSDATAFORMAT DataFormat\
    );\
    STDMETHODIMP_(NTSTATUS) SetState\
    ( _In_ KSSTATE State\
    );\
    STDMETHODIMP_(NTSTATUS) Read\
    ( _In_ PVOID BufferAddress,\
        _In_ ULONG BufferLength,\
        _Out_ PULONG BytesRead\
    );\
    STDMETHODIMP_(NTSTATUS) Write\
    ( _In_ PVOID BufferAddress,\
        _In_ ULONG BytesToWrite,\
        _Out_ PULONG BytesWritten\
    )
DECLARE_INTERFACE_(IMiniportMidi,IMiniport)
{
    DEFINE_ABSTRACT_UNKNOWN()
    DEFINE_ABSTRACT_MINIPORT()
    STDMETHOD_(NTSTATUS,Init)
    ( THIS_
        _In_ PUNKNOWN UnknownAdapter,
        _In_ PRESOURCELIST ResourceList,
        _In_ PPORTMIDI Port,
        _Out_ PSERVICEGROUP * ServiceGroup
    ) PURE;
    STDMETHOD_(void,Service)
    ( THIS
    ) PURE;
    STDMETHOD_(NTSTATUS,NewStream)
    ( THIS_
        _Out_ PMINIPORTMIDISTREAM * Stream,
        _In_opt_ PUNKNOWN OuterUnknown,
        _In_ POOL_TYPE PoolType,
        _In_ ULONG Pin,
        _In_ BOOLEAN Capture,
        _In_ PKSDATAFORMAT DataFormat,
        _Out_ PSERVICEGROUP * ServiceGroup
    ) PURE;
};
typedef IMiniportMidi *PMINIPORTMIDI;
    IMP_IMiniport;\
    STDMETHODIMP_(NTSTATUS) Init\
    ( _In_ PUNKNOWN UnknownAdapter,\
        _In_ PRESOURCELIST ResourceList,\
        _In_ PPORTMIDI Port,\
        _Out_ PSERVICEGROUP * ServiceGroup\
    );\
    STDMETHODIMP_(void) Service\
    ( void\
    );\
    STDMETHODIMP_(NTSTATUS) NewStream\
    ( _Out_ PMINIPORTMIDISTREAM * Stream,\
        _In_opt_ PUNKNOWN OuterUnknown,\
        _In_ POOL_TYPE PoolType,\
        _In_ ULONG Pin,\
        _In_ BOOLEAN Capture,\
        _In_ PKSDATAFORMAT DataFormat,\
        _Out_ PSERVICEGROUP * ServiceGroup\
    )
DECLARE_INTERFACE_(IPortTopology,IPort)
{
    DEFINE_ABSTRACT_UNKNOWN()
    DEFINE_ABSTRACT_PORT()
};
typedef IPortTopology *PPORTTOPOLOGY;
DECLARE_INTERFACE_(IMiniportTopology,IMiniport)
{
    DEFINE_ABSTRACT_UNKNOWN()
    DEFINE_ABSTRACT_MINIPORT()
    STDMETHOD_(NTSTATUS,Init)
    ( THIS_
        _In_ PUNKNOWN UnknownAdapter,
        _In_ PRESOURCELIST ResourceList,
        _In_ PPORTTOPOLOGY Port
    ) PURE;
};
typedef IMiniportTopology *PMINIPORTTOPOLOGY;
    IMP_IMiniport;\
    STDMETHODIMP_(NTSTATUS) Init\
    ( _In_ PUNKNOWN UnknownAdapter,\
        _In_ PRESOURCELIST ResourceList,\
        _In_ PPORTTOPOLOGY Port\
    )
DECLARE_INTERFACE_(IPortWaveCyclic,IPort)
{
    DEFINE_ABSTRACT_UNKNOWN()
    DEFINE_ABSTRACT_PORT()
    STDMETHOD_(void,Notify)
    ( THIS_
        _In_ PSERVICEGROUP ServiceGroup
    ) PURE;
    STDMETHOD_(NTSTATUS,NewSlaveDmaChannel)
    ( THIS_
        _Out_ PDMACHANNELSLAVE * DmaChannel,
        _In_ PUNKNOWN OuterUnknown,
        _In_ PRESOURCELIST ResourceList,
        _In_ ULONG DmaIndex,
        _In_ ULONG MaximumLength,
        _In_ BOOLEAN DemandMode,
        _In_ DMA_SPEED DmaSpeed
    ) PURE;
    STDMETHOD_(NTSTATUS,NewMasterDmaChannel)
    ( THIS_
        _Out_ PDMACHANNEL * DmaChannel,
        _In_ PUNKNOWN OuterUnknown,
        _In_opt_ PRESOURCELIST ResourceList,
        _In_ ULONG MaximumLength,
        _In_ BOOLEAN Dma32BitAddresses,
        _In_ BOOLEAN Dma64BitAddresses,
        _In_ DMA_WIDTH DmaWidth,
        _In_ DMA_SPEED DmaSpeed
    ) PURE;
};
typedef IPortWaveCyclic *PPORTWAVECYCLIC;
    IMP_IPort;\
    STDMETHODIMP_(void) Notify\
    ( _In_ PSERVICEGROUP ServiceGroup\
    );\
    STDMETHODIMP_(NTSTATUS) NewSlaveDmaChannel\
    ( _Out_ PDMACHANNELSLAVE * DmaChannel,\
        _In_ PUNKNOWN OuterUnknown,\
        _In_ PRESOURCELIST ResourceList,\
        _In_ ULONG DmaIndex,\
        _In_ ULONG MaximumLength,\
        _In_ BOOLEAN DemandMode,\
        _In_ DMA_SPEED DmaSpeed\
    );\
    STDMETHODIMP_(NTSTATUS) NewMasterDmaChannel\
    ( _Out_ PDMACHANNEL * DmaChannel,\
        _In_ PUNKNOWN OuterUnknown,\
        _In_opt_ PRESOURCELIST ResourceList,\
        _In_ ULONG MaximumLength,\
        _In_ BOOLEAN Dma32BitAddresses,\
        _In_ BOOLEAN Dma64BitAddresses,\
        _In_ DMA_WIDTH DmaWidth,\
        _In_ DMA_SPEED DmaSpeed\
    )
DECLARE_INTERFACE_(IMiniportWaveCyclicStream,IUnknown)
{
    DEFINE_ABSTRACT_UNKNOWN()
    STDMETHOD_(NTSTATUS,SetFormat)
    ( THIS_
        _In_ PKSDATAFORMAT DataFormat
    ) PURE;
    STDMETHOD_(ULONG,SetNotificationFreq)
    ( THIS_
        _In_ ULONG Interval,
        _Out_ PULONG FrameSize
    ) PURE;
    STDMETHOD_(NTSTATUS,SetState)
    ( THIS_
        _In_ KSSTATE State
    ) PURE;
    STDMETHOD_(NTSTATUS,GetPosition)
    ( THIS_
        _Out_ PULONG Position
    ) PURE;
    STDMETHOD_(NTSTATUS,NormalizePhysicalPosition)
    ( THIS_
        _Inout_ PLONGLONG PhysicalPosition
    ) PURE;
    STDMETHOD_(void,Silence)
    ( THIS_
        _Inout_updates_bytes_(ByteCount) PVOID Buffer,
        _In_ ULONG ByteCount
    ) PURE;
};
typedef IMiniportWaveCyclicStream *PMINIPORTWAVECYCLICSTREAM;
    STDMETHODIMP_(NTSTATUS) SetFormat\
    ( _In_ PKSDATAFORMAT DataFormat\
    );\
    STDMETHODIMP_(ULONG) SetNotificationFreq\
    ( _In_ ULONG Interval,\
        _Out_ PULONG FrameSize\
    );\
    STDMETHODIMP_(NTSTATUS) SetState\
    ( _In_ KSSTATE State\
    );\
    STDMETHODIMP_(NTSTATUS) GetPosition\
    ( _Out_ PULONG Position\
    );\
    STDMETHODIMP_(NTSTATUS) NormalizePhysicalPosition\
    ( _Inout_ PLONGLONG PhysicalPosition\
    );\
    STDMETHODIMP_(void) Silence\
    ( _Inout_updates_bytes_(ByteCount) PVOID Buffer,\
        _In_ ULONG ByteCount\
    )
DECLARE_INTERFACE_(IMiniportWaveCyclic,IMiniport)
{
    DEFINE_ABSTRACT_UNKNOWN()
    DEFINE_ABSTRACT_MINIPORT()
    STDMETHOD_(NTSTATUS,Init)
    ( THIS_
        _In_ PUNKNOWN UnknownAdapter,
        _In_ PRESOURCELIST ResourceList,
        _In_ PPORTWAVECYCLIC Port
    ) PURE;
    STDMETHOD_(NTSTATUS,NewStream)
    ( THIS_
        _Out_ PMINIPORTWAVECYCLICSTREAM * Stream,
        _In_opt_ PUNKNOWN OuterUnknown,
        _In_ POOL_TYPE PoolType,
        _In_ ULONG Pin,
        _In_ BOOLEAN Capture,
        _In_ PKSDATAFORMAT DataFormat,
        _Out_ PDMACHANNEL * DmaChannel,
        _Out_ PSERVICEGROUP * ServiceGroup
    ) PURE;
};
typedef IMiniportWaveCyclic *PMINIPORTWAVECYCLIC;
    IMP_IMiniport;\
    STDMETHODIMP_(NTSTATUS) Init\
    ( _In_ PUNKNOWN UnknownAdapter,\
        _In_ PRESOURCELIST ResourceList,\
        _In_ PPORTWAVECYCLIC Port\
    );\
    STDMETHODIMP_(NTSTATUS) NewStream\
    ( _Out_ PMINIPORTWAVECYCLICSTREAM * Stream,\
        _In_opt_ PUNKNOWN OuterUnknown,\
        _In_ POOL_TYPE PoolType,\
        _In_ ULONG Pin,\
        _In_ BOOLEAN Capture,\
        _In_ PKSDATAFORMAT DataFormat,\
        _Out_ PDMACHANNEL * DmaChannel,\
        _Out_ PSERVICEGROUP * ServiceGroup\
    )
DECLARE_INTERFACE_(IPortWavePci,IPort)
{
    DEFINE_ABSTRACT_UNKNOWN()
    DEFINE_ABSTRACT_PORT()
    STDMETHOD_(void,Notify)
    ( THIS_
        _In_ PSERVICEGROUP ServiceGroup
    ) PURE;
    STDMETHOD_(NTSTATUS,NewMasterDmaChannel)
    ( THIS_
        _Out_ PDMACHANNEL * OutDmaChannel,
        _In_opt_ PUNKNOWN OuterUnknown,
        _In_ POOL_TYPE PoolType,
        _In_opt_ PRESOURCELIST ResourceList,
        _In_ BOOLEAN ScatterGather,
        _In_ BOOLEAN Dma32BitAddresses,
        _In_ BOOLEAN Dma64BitAddresses,
        _In_ BOOLEAN IgnoreCount,
        _In_ DMA_WIDTH DmaWidth,
        _In_ DMA_SPEED DmaSpeed,
        _In_ ULONG MaximumLength,
        _In_ ULONG DmaPort
    ) PURE;
};
typedef IPortWavePci *PPORTWAVEPCI;
    IMP_IPort;\
    STDMETHODIMP_(void) Notify\
    ( _In_ PSERVICEGROUP ServiceGroup\
    );\
    STDMETHODIMP_(NTSTATUS) NewMasterDmaChannel\
    ( _Out_ PDMACHANNEL * OutDmaChannel,\
        _In_opt_ PUNKNOWN OuterUnknown,\
        _In_ POOL_TYPE PoolType,\
        _In_opt_ PRESOURCELIST ResourceList,\
        _In_ BOOLEAN ScatterGather,\
        _In_ BOOLEAN Dma32BitAddresses,\
        _In_ BOOLEAN Dma64BitAddresses,\
        _In_ BOOLEAN IgnoreCount,\
        _In_ DMA_WIDTH DmaWidth,\
        _In_ DMA_SPEED DmaSpeed,\
        _In_ ULONG MaximumLength,\
        _In_ ULONG DmaPort\
    )
DECLARE_INTERFACE_(IPortWavePciStream,IUnknown)
{
    DEFINE_ABSTRACT_UNKNOWN()
    STDMETHOD_(NTSTATUS,GetMapping)
    ( THIS_
        _In_ PVOID Tag,
        _Out_ PPHYSICAL_ADDRESS PhysicalAddress,
        _Out_ PVOID * VirtualAddress,
        _Out_ PULONG ByteCount,
        _Out_ PULONG Flags
    ) PURE;
    STDMETHOD_(NTSTATUS,ReleaseMapping)
    ( THIS_
        _In_ PVOID Tag
    ) PURE;
    STDMETHOD_(NTSTATUS,TerminatePacket)
    ( THIS
    ) PURE;
};
typedef IPortWavePciStream *PPORTWAVEPCISTREAM;
    STDMETHODIMP_(NTSTATUS) GetMapping\
    ( _In_ PVOID Tag,\
        _Out_ PPHYSICAL_ADDRESS PhysicalAddress,\
        _Out_ PVOID * VirtualAddress,\
        _Out_ PULONG ByteCount,\
        _Out_ PULONG Flags\
    );\
    STDMETHODIMP_(NTSTATUS) ReleaseMapping\
    ( _In_ PVOID Tag\
    );\
    STDMETHODIMP_(NTSTATUS) TerminatePacket\
    ( void\
    )
DECLARE_INTERFACE_(IMiniportWavePciStream,IUnknown)
{
    DEFINE_ABSTRACT_UNKNOWN()
    STDMETHOD_(NTSTATUS,SetFormat)
    ( THIS_
        _In_ PKSDATAFORMAT DataFormat
    ) PURE;
    STDMETHOD_(NTSTATUS,SetState)
    ( THIS_
        _In_ KSSTATE State
    ) PURE;
    STDMETHOD_(NTSTATUS,GetPosition)
    ( THIS_
        _Out_ PULONGLONG Position
    ) PURE;
    STDMETHOD_(NTSTATUS,NormalizePhysicalPosition)
    (
        THIS_
        _Inout_ PLONGLONG PhysicalPosition
    ) PURE;
    STDMETHOD_(NTSTATUS,GetAllocatorFraming)
    (
        THIS_
        _Out_ PKSALLOCATOR_FRAMING AllocatorFraming
    ) PURE;
    STDMETHOD_(NTSTATUS,RevokeMappings)
    ( THIS_
        _In_ PVOID FirstTag,
        _In_ PVOID LastTag,
        _Out_ PULONG MappingsRevoked
    ) PURE;
    STDMETHOD_(void,MappingAvailable)
    ( THIS
    ) PURE;
    STDMETHOD_(void,Service)
    ( THIS
    ) PURE;
};
typedef IMiniportWavePciStream *PMINIPORTWAVEPCISTREAM;
    STDMETHODIMP_(NTSTATUS) SetFormat\
    ( _In_ PKSDATAFORMAT DataFormat\
    );\
    STDMETHODIMP_(NTSTATUS) SetState\
    ( _In_ KSSTATE State\
    );\
    STDMETHODIMP_(NTSTATUS) GetPosition\
    ( _Out_ PULONGLONG Position\
    );\
    STDMETHODIMP_(NTSTATUS) NormalizePhysicalPosition\
    ( _Inout_ PLONGLONG PhysicalPosition\
    );\
    STDMETHODIMP_(NTSTATUS) GetAllocatorFraming\
    ( _Out_ PKSALLOCATOR_FRAMING AllocatorFraming\
    );\
    STDMETHODIMP_(NTSTATUS) RevokeMappings\
    ( _In_ PVOID FirstTag,\
        _In_ PVOID LastTag,\
        _Out_ PULONG MappingsRevoked\
    );\
    STDMETHODIMP_(void) MappingAvailable\
    ( void\
    );\
    STDMETHODIMP_(void) Service\
    ( void\
    )
DECLARE_INTERFACE_(IMiniportWavePci,IMiniport)
{
    DEFINE_ABSTRACT_UNKNOWN()
    DEFINE_ABSTRACT_MINIPORT()
    STDMETHOD_(NTSTATUS,Init)
    ( THIS_
        _In_ PUNKNOWN UnknownAdapter,
        _In_ PRESOURCELIST ResourceList,
        _In_ PPORTWAVEPCI Port,
        _Out_ PSERVICEGROUP * ServiceGroup
    ) PURE;
    STDMETHOD_(NTSTATUS,NewStream)
    ( THIS_
        _Out_ PMINIPORTWAVEPCISTREAM * Stream,
        _In_opt_ PUNKNOWN OuterUnknown,
        _When_((PoolType & NonPagedPoolMustSucceed) != 0,
           __drv_reportError("Must succeed pool allocations are forbidden. "
                 "Allocation failures cause a system crash"))
        _In_ POOL_TYPE PoolType,
        _In_ PPORTWAVEPCISTREAM PortStream,
        _In_ ULONG Pin,
        _In_ BOOLEAN Capture,
        _In_ PKSDATAFORMAT DataFormat,
        _Out_ PDMACHANNEL * DmaChannel,
        _Out_ PSERVICEGROUP * ServiceGroup
    ) PURE;
    STDMETHOD_(void,Service)
    ( THIS
    ) PURE;
};
typedef IMiniportWavePci *PMINIPORTWAVEPCI;
    IMP_IMiniport;\
    STDMETHODIMP_(NTSTATUS) Init\
    ( _In_ PUNKNOWN UnknownAdapter,\
        _In_ PRESOURCELIST ResourceList,\
        _In_ PPORTWAVEPCI Port,\
        _Out_ PSERVICEGROUP * ServiceGroup\
    );\
    STDMETHODIMP_(NTSTATUS) NewStream\
    ( _Out_ PMINIPORTWAVEPCISTREAM * Stream,\
        _In_opt_ PUNKNOWN OuterUnknown,\
        _When_((PoolType & NonPagedPoolMustSucceed) != 0,\
           __drv_reportError("Must succeed pool allocations are forbidden. "\
                 "Allocation failures cause a system crash"))\
        _In_ POOL_TYPE PoolType,\
        _In_ PPORTWAVEPCISTREAM PortStream,\
        _In_ ULONG Pin,\
        _In_ BOOLEAN Capture,\
        _In_ PKSDATAFORMAT DataFormat,\
        _Out_ PDMACHANNEL * DmaChannel,\
        _Out_ PSERVICEGROUP * ServiceGroup\
    );\
    STDMETHODIMP_(void) Service\
    ( void\
    )
DECLARE_INTERFACE_(IPortWaveRT,IPort)
{
    DEFINE_ABSTRACT_UNKNOWN()
    DEFINE_ABSTRACT_PORT()
};
typedef IPortWaveRT *PPORTWAVERT;
    IMP_IPort
DECLARE_INTERFACE_(IPortWaveRTStream,IUnknown)
{
    DEFINE_ABSTRACT_UNKNOWN()
    STDMETHOD_(PMDL, AllocatePagesForMdl)
    ( THIS_
        _In_ PHYSICAL_ADDRESS HighAddress,
        _In_ SIZE_T TotalBytes
    ) PURE;
    STDMETHOD_(PMDL, AllocateContiguousPagesForMdl)
    ( THIS_
        _In_ PHYSICAL_ADDRESS LowAddress,
        _In_ PHYSICAL_ADDRESS HighAddress,
        _In_ SIZE_T TotalBytes
    ) PURE;
    STDMETHOD_(PVOID, MapAllocatedPages)
    ( THIS_
        _In_ PMDL MemoryDescriptorList,
        _In_ MEMORY_CACHING_TYPE CacheType
    ) PURE;
    STDMETHOD_(VOID, UnmapAllocatedPages)
    ( THIS_
        _In_ PVOID BaseAddress,
        _In_ PMDL MemoryDescriptorList
    ) PURE;
    STDMETHOD_(VOID, FreePagesFromMdl)
    ( THIS_
        _In_ PMDL MemoryDescriptorList
    ) PURE;
    STDMETHOD_(ULONG, GetPhysicalPagesCount)
    ( THIS_
        _In_ PMDL MemoryDescriptorList
    ) PURE;
    STDMETHOD_(PHYSICAL_ADDRESS, GetPhysicalPageAddress)
    ( THIS_
        _In_ PMDL MemoryDescriptorList,
        _In_ ULONG Index
    ) PURE;
};
typedef IPortWaveRTStream *PPORTWAVERTSTREAM;
    STDMETHODIMP_(PMDL) AllocatePagesForMdl\
    (\
        _In_ PHYSICAL_ADDRESS HighAddress,\
        _In_ SIZE_T TotalBytes\
    );\
    STDMETHODIMP_(PMDL) AllocateContiguousPagesForMdl\
    (\
        _In_ PHYSICAL_ADDRESS LowAddress,\
        _In_ PHYSICAL_ADDRESS HighAddress,\
        _In_ SIZE_T TotalBytes\
    );\
    STDMETHODIMP_(PVOID) MapAllocatedPages\
    (\
        _In_ PMDL MemoryDescriptorList,\
        _In_ MEMORY_CACHING_TYPE CacheType\
    );\
    STDMETHODIMP_(VOID) UnmapAllocatedPages\
    (\
        _In_ PVOID BaseAddress,\
        _In_ PMDL MemoryDescriptorList\
    );\
    STDMETHODIMP_(VOID) FreePagesFromMdl\
    (\
        _In_ PMDL MemoryDescriptorList\
    );\
    STDMETHODIMP_(ULONG) GetPhysicalPagesCount\
    (\
        _In_ PMDL MemoryDescriptorList\
    );\
    STDMETHODIMP_(PHYSICAL_ADDRESS) GetPhysicalPageAddress\
    (\
        _In_ PMDL MemoryDescriptorList,\
        _In_ ULONG Index\
    )
DECLARE_INTERFACE_(IMiniportWaveRTStream,IUnknown)
{
    DEFINE_ABSTRACT_UNKNOWN()
    DEFINE_ABSTRACT_MINIPORTWAVERTSTREAM()
};
typedef IMiniportWaveRTStream *PMINIPORTWAVERTSTREAM;
    STDMETHODIMP_(NTSTATUS) SetFormat\
    ( _In_ PKSDATAFORMAT DataFormat\
    );\
    STDMETHODIMP_(NTSTATUS) SetState\
    ( _In_ KSSTATE State\
    );\
    STDMETHODIMP_(NTSTATUS) GetPosition\
    ( _Out_ PKSAUDIO_POSITION Position\
    );\
    STDMETHODIMP_(NTSTATUS) AllocateAudioBuffer\
    (\
        _In_ ULONG RequestedSize,\
        _Out_ PMDL *AudioBufferMdl,\
        _Out_ ULONG *ActualSize,\
        _Out_ ULONG *OffsetFromFirstPage,\
        _Out_ MEMORY_CACHING_TYPE *CacheType\
    );\
    STDMETHODIMP_(VOID) FreeAudioBuffer\
    (\
        _In_opt_ PMDL AudioBufferMdl,\
        _In_ ULONG BufferSize\
    );\
    STDMETHODIMP_(VOID) GetHWLatency\
    (\
        _Out_ KSRTAUDIO_HWLATENCY *hwLatency\
    );\
    STDMETHODIMP_(NTSTATUS) GetPositionRegister\
    (\
        _Out_ KSRTAUDIO_HWREGISTER *Register\
    );\
    STDMETHODIMP_(NTSTATUS) GetClockRegister\
    (\
        _Out_ KSRTAUDIO_HWREGISTER *Register\
    )
DECLARE_INTERFACE_(IMiniportWaveRTStreamNotification,IMiniportWaveRTStream)
{
    DEFINE_ABSTRACT_UNKNOWN()
    DEFINE_ABSTRACT_MINIPORTWAVERTSTREAM()
    STDMETHOD_(NTSTATUS,AllocateBufferWithNotification)
    ( THIS_
        _In_ ULONG NotificationCount,
        _In_ ULONG RequestedSize,
        _Out_ PMDL *AudioBufferMdl,
        _Out_ ULONG *ActualSize,
        _Out_ ULONG *OffsetFromFirstPage,
        _Out_ MEMORY_CACHING_TYPE *CacheType
    ) PURE;
    STDMETHOD_(VOID,FreeBufferWithNotification)
    ( THIS_
        _In_ PMDL AudioBufferMdl,
        _In_ ULONG BufferSize
    ) PURE;
    STDMETHOD_(NTSTATUS,RegisterNotificationEvent)
    ( THIS_
        _In_ PKEVENT NotificationEvent
    ) PURE;
    STDMETHOD_(NTSTATUS,UnregisterNotificationEvent)
    ( THIS_
        _In_ PKEVENT NotificationEvent
    ) PURE;
};
typedef IMiniportWaveRTStreamNotification *PMINIPORTWAVERTSTREAMNOTIFICATION;
    STDMETHODIMP_(NTSTATUS) AllocateBufferWithNotification\
    (\
        _In_ ULONG NotificationCount,\
        _In_ ULONG RequestedSize,\
        _Out_ PMDL *AudioBufferMdl,\
        _Out_ ULONG *ActualSize,\
        _Out_ ULONG *OffsetFromFirstPage,\
        _Out_ MEMORY_CACHING_TYPE *CacheType\
    );\
    STDMETHODIMP_(VOID) FreeBufferWithNotification\
    (\
        _In_ PMDL AudioBufferMdl,\
        _In_ ULONG BufferSize\
    );\
    STDMETHODIMP_(NTSTATUS) RegisterNotificationEvent\
    (\
        _In_ PKEVENT NotificationEvent\
    );\
    STDMETHODIMP_(NTSTATUS) UnregisterNotificationEvent\
    (\
        _In_ PKEVENT NotificationEvent\
    )
DECLARE_INTERFACE_(IMiniportWaveRTInputStream, IUnknown)
{
    DEFINE_ABSTRACT_UNKNOWN()
    _IRQL_requires_max_(PASSIVE_LEVEL)
    STDMETHOD_(NTSTATUS, GetReadPacket)
        (THIS_
        _Out_ ULONG *PacketNumber,
        _Out_ DWORD *Flags,
        _Out_ ULONG64 *PerformanceCounterValue,
        _Out_ BOOL *MoreData
        ) PURE;
};
typedef IMiniportWaveRTInputStream *PMINIPORTWAVERTINPUTSTREAM;
    _IRQL_requires_max_(PASSIVE_LEVEL) \
    STDMETHODIMP_(NTSTATUS) GetReadPacket \
    ( \
        _Out_ ULONG *PacketNumber, \
        _Out_ DWORD *Flags, \
        _Out_ ULONG64 *PerformanceCounterValue, \
        _Out_ BOOL *MoreData \
    );
DECLARE_INTERFACE_(IMiniportWaveRTOutputStream, IUnknown)
{
    DEFINE_ABSTRACT_UNKNOWN()
    _IRQL_requires_max_(PASSIVE_LEVEL)
    STDMETHOD_(NTSTATUS, SetWritePacket)
    (
        THIS_
        _In_ ULONG PacketNumber,
        _In_ DWORD Flags,
        _In_ ULONG EosPacketLength
    ) PURE;
    _IRQL_requires_max_(PASSIVE_LEVEL)
    STDMETHOD_(NTSTATUS, GetOutputStreamPresentationPosition)
    (
        THIS_
        _Out_ KSAUDIO_PRESENTATION_POSITION *pPresentationPosition
    ) PURE;
    _IRQL_requires_max_(PASSIVE_LEVEL)
    STDMETHOD_(NTSTATUS, GetPacketCount)
    (
        THIS_
        _Out_ ULONG *pPacketCount
    ) PURE;
};
typedef IMiniportWaveRTOutputStream *PMINIPORTWAVERTOUTPUTSTREAM;
    _IRQL_requires_max_(PASSIVE_LEVEL) \
    STDMETHOD_(NTSTATUS, SetWritePacket) \
    ( \
        _In_ ULONG PacketNumber, \
        _In_ DWORD Flags, \
        _In_ ULONG EosPacketLength \
    ); \
                                                                    \
    _IRQL_requires_max_(PASSIVE_LEVEL) \
    STDMETHOD_(NTSTATUS, GetOutputStreamPresentationPosition) \
    ( \
        _Out_ KSAUDIO_PRESENTATION_POSITION *pPresentationPosition \
    ); \
                                                                    \
    _IRQL_requires_max_(PASSIVE_LEVEL) \
    STDMETHOD_(NTSTATUS, GetPacketCount) \
    ( \
        _Out_ ULONG *pPacketCount \
    );
DECLARE_INTERFACE_(IMiniportWaveRT,IMiniport)
{
    DEFINE_ABSTRACT_UNKNOWN()
    DEFINE_ABSTRACT_MINIPORT()
    STDMETHOD_(NTSTATUS,Init)
    ( THIS_
        _In_ PUNKNOWN UnknownAdapter,
        _In_ PRESOURCELIST ResourceList,
        _In_ PPORTWAVERT Port
    ) PURE;
    STDMETHOD_(NTSTATUS,NewStream)
    ( THIS_
        _Out_ PMINIPORTWAVERTSTREAM * Stream,
        _In_ PPORTWAVERTSTREAM PortStream,
        _In_ ULONG Pin,
        _In_ BOOLEAN Capture,
        _In_ PKSDATAFORMAT DataFormat
    ) PURE;
    STDMETHOD_(NTSTATUS,GetDeviceDescription)
    ( THIS_
        _Out_ PDEVICE_DESCRIPTION DeviceDescription
    ) PURE;
};
typedef IMiniportWaveRT *PMINIPORTWAVERT;
    IMP_IMiniport;\
    STDMETHODIMP_(NTSTATUS) Init\
    ( _In_ PUNKNOWN UnknownAdapter,\
        _In_ PRESOURCELIST ResourceList,\
        _In_ PPORTWAVERT Port\
    );\
    STDMETHODIMP_(NTSTATUS) NewStream\
    ( _Out_ PMINIPORTWAVERTSTREAM * Stream,\
        _In_ PPORTWAVERTSTREAM PortStream,\
        _In_ ULONG Pin,\
        _In_ BOOLEAN Capture,\
        _In_ PKSDATAFORMAT DataFormat\
    );\
    STDMETHODIMP_(NTSTATUS) GetDeviceDescription\
    ( _Out_ PDEVICE_DESCRIPTION DeviceDescription\
    )
DECLARE_INTERFACE_(IMiniportAudioSignalProcessing,IUnknown)
{
    DEFINE_ABSTRACT_UNKNOWN()
    STDMETHOD_(NTSTATUS,GetModes)
    ( THIS_
        _In_ ULONG Pin,
        _Out_writes_opt_(*NumSignalProcessingModes) GUID* SignalProcessingModes,
        _Inout_ ULONG* NumSignalProcessingModes
    ) PURE;
};
typedef IMiniportAudioSignalProcessing *PMINIPORTAudioSignalProcessing;
    STDMETHODIMP_(NTSTATUS) GetModes\
    (\
        _In_ ULONG Pin,\
        _Out_writes_opt_(*NumSignalProcessingModes) GUID* SignalProcessingModes,\
        _Inout_ ULONG* NumSignalProcessingModes\
    );
DECLARE_INTERFACE_(IAdapterPowerManagement,IUnknown)
{
    DEFINE_ABSTRACT_UNKNOWN()
    STDMETHOD_(void,PowerChangeState)
    ( THIS_
        _In_ POWER_STATE NewState
    ) PURE;
    STDMETHOD_(NTSTATUS,QueryPowerChangeState)
    ( THIS_
        _In_ POWER_STATE NewStateQuery
    ) PURE;
    STDMETHOD_(NTSTATUS,QueryDeviceCapabilities)
    ( THIS_
        _Inout_updates_bytes_(sizeof(DEVICE_CAPABILITIES)) PDEVICE_CAPABILITIES PowerDeviceCaps
    ) PURE;
};
typedef IAdapterPowerManagement *PADAPTERPOWERMANAGEMENT;
    STDMETHODIMP_(void) PowerChangeState\
    ( _In_ POWER_STATE NewState\
    );\
    STDMETHODIMP_(NTSTATUS) QueryPowerChangeState\
    ( _In_ POWER_STATE NewStateQuery\
    );\
    STDMETHODIMP_(NTSTATUS) QueryDeviceCapabilities\
    ( _Inout_updates_bytes_(sizeof(DEVICE_CAPABILITIES)) PDEVICE_CAPABILITIES PowerDeviceCaps\
    )
DECLARE_INTERFACE_(IAdapterPowerManagement2,IUnknown)
{
    DEFINE_ABSTRACT_UNKNOWN()
    DEFINE_ABSTRACT_ADAPTERPOWERMANAGEMENT()
    STDMETHOD_(void,PowerChangeState2)
    ( THIS_
        _In_ DEVICE_POWER_STATE NewDeviceState,
        _In_ SYSTEM_POWER_STATE NewSystemState
    ) PURE;
};
typedef IAdapterPowerManagement2 *PADAPTERPOWERMANAGEMENT2;
    IMP_IAdapterPowerManagement;\
    STDMETHODIMP_(void) PowerChangeState2\
    ( _In_ DEVICE_POWER_STATE NewDeviceState,\
        _In_ SYSTEM_POWER_STATE NewSystemState\
    );\
typedef enum _PC_EXIT_LATENCY {
    PcExitLatencyInstant = 0,
    PcExitLatencyFast,
    PcExitLatencyResponsive
} PC_EXIT_LATENCY, *PPC_EXIT_LATENCY;
DECLARE_INTERFACE_(IAdapterPowerManagement3,IUnknown)
{
    DEFINE_ABSTRACT_UNKNOWN()
    DEFINE_ABSTRACT_ADAPTERPOWERMANAGEMENT()
    DEFINE_ABSTRACT_ADAPTERPOWERMANAGEMENT2()
    STDMETHOD_(void,PowerChangeState3)
    ( THIS_
        _In_ DEVICE_POWER_STATE NewDeviceState,
        _In_ SYSTEM_POWER_STATE NewSystemState,
        _In_ PC_EXIT_LATENCY D3ExitLatency
    ) PURE;
    STDMETHOD_(NTSTATUS,D3ExitLatencyChanged)
    ( THIS_
        _In_ PC_EXIT_LATENCY NewD3ExitLatency
    ) PURE;
};
typedef IAdapterPowerManagement3 *PADAPTERPOWERMANAGEMENT3;
    IMP_IAdapterPowerManagement2;\
    STDMETHODIMP_(void) PowerChangeState3\
    ( _In_ DEVICE_POWER_STATE NewDeviceState,\
        _In_ SYSTEM_POWER_STATE NewSystemState,\
        _In_ PC_EXIT_LATENCY D3ExitLatency\
    );\
    STDMETHODIMP_(NTSTATUS) D3ExitLatencyChanged\
    ( _In_ PC_EXIT_LATENCY NewD3ExitLatency\
    );\
DECLARE_INTERFACE_(IPowerNotify,IUnknown)
{
    DEFINE_ABSTRACT_UNKNOWN()
    STDMETHOD_(void,PowerChangeNotify)
    ( THIS_
        _In_ POWER_STATE PowerState
    ) PURE;
};
typedef IPowerNotify *PPOWERNOTIFY;
    STDMETHODIMP_(void) PowerChangeNotify\
    ( _In_ POWER_STATE PowerState\
    )
DECLARE_INTERFACE_(IPinCount,IUnknown)
{
    DEFINE_ABSTRACT_UNKNOWN()
    STDMETHOD_(void,PinCount)
    ( THIS_
        _In_ ULONG PinId,
        _Inout_ PULONG FilterNecessary,
        _Inout_ PULONG FilterCurrent,
        _Inout_ PULONG FilterPossible,
        _Inout_ PULONG GlobalCurrent,
        _Inout_ PULONG GlobalPossible
    ) PURE;
};
typedef IPinCount *PPINCOUNT;
    STDMETHODIMP_(void) PinCount \
    ( _In_ ULONG PinId, \
        _Inout_ PULONG FilterNecessary, \
        _Inout_ PULONG FilterCurrent, \
        _Inout_ PULONG FilterPossible, \
        _Inout_ PULONG GlobalCurrent, \
        _Inout_ PULONG GlobalPossible \
    )
DECLARE_INTERFACE_(IPortEvents,IUnknown)
{
    DEFINE_ABSTRACT_UNKNOWN()
    STDMETHOD_(void,AddEventToEventList)
    ( THIS_
        _In_ PKSEVENT_ENTRY EventEntry
    ) PURE;
    STDMETHOD_(void,GenerateEventList)
    ( THIS_
        _In_opt_ GUID* Set,
        _In_ ULONG EventId,
        _In_ BOOL PinEvent,
        _In_ ULONG PinId,
        _In_ BOOL NodeEvent,
        _In_ ULONG NodeId
    ) PURE;
};
typedef IPortEvents *PPORTEVENTS;
    STDMETHODIMP_(void) AddEventToEventList\
    ( _In_ PKSEVENT_ENTRY EventEntry\
    );\
    STDMETHODIMP_(void) GenerateEventList\
    ( _In_opt_ GUID* Set,\
        _In_ ULONG EventId,\
        _In_ BOOL PinEvent,\
        _In_ ULONG PinId,\
        _In_ BOOL NodeEvent,\
        _In_ ULONG NodeId\
    )
DECLARE_INTERFACE_(IDrmPort,IUnknown)
{
    DEFINE_ABSTRACT_UNKNOWN()
    DEFINE_ABSTRACT_DRMPORT()
};
typedef IDrmPort *PDRMPORT;
    STDMETHODIMP_(NTSTATUS) CreateContentMixed \
    ( _In_ PULONG paContentId, \
        _In_ ULONG cContentId, \
        _Out_ PULONG pMixedContentId \
    ); \
    STDMETHODIMP_(NTSTATUS) DestroyContent \
    ( _In_ ULONG ContentId \
    ); \
    STDMETHODIMP_(NTSTATUS) ForwardContentToFileObject \
    ( _In_ ULONG ContentId, \
        _In_ PFILE_OBJECT FileObject \
    ); \
    STDMETHODIMP_(NTSTATUS) ForwardContentToInterface \
    ( _In_ ULONG ContentId, \
        _In_ PUNKNOWN pUnknown, \
        _In_ ULONG NumMethods \
    ); \
    STDMETHODIMP_(NTSTATUS) GetContentRights \
    ( _In_ ULONG ContentId, \
        _Out_ PDRMRIGHTS DrmRights \
    )
DECLARE_INTERFACE_(IDrmPort2,IDrmPort)
{
    DEFINE_ABSTRACT_UNKNOWN()
    DEFINE_ABSTRACT_DRMPORT()
    STDMETHOD_(NTSTATUS,AddContentHandlers)
    ( THIS_
        _In_ ULONG ContentId,
        _In_reads_(NumHandlers) PVOID * paHandlers,
        _In_ ULONG NumHandlers
    ) PURE;
    STDMETHOD_(NTSTATUS,ForwardContentToDeviceObject)
    ( THIS_
        _In_ ULONG ContentId,
        _In_ PVOID Reserved,
        _In_ PCDRMFORWARD DrmForward
    ) PURE;
};
typedef IDrmPort2 *PDRMPORT2;
    IMP_IDrmPort; \
    STDMETHODIMP_(NTSTATUS) AddContentHandlers \
    ( _In_ ULONG ContentId, \
        _In_reads_(NumHandlers) PVOID * paHandlers,\
        _In_ ULONG NumHandlers\
    ); \
    STDMETHODIMP_(NTSTATUS) ForwardContentToDeviceObject\
    ( _In_ ULONG ContentId, \
        _In_ PVOID Reserved, \
        _In_ PCDRMFORWARD DrmForward \
    )
DECLARE_INTERFACE_(IPortClsVersion,IUnknown)
{
    STDMETHOD_(DWORD,GetVersion)
    ( THIS
    ) PURE;
};
typedef IPortClsVersion *PPORTCLSVERSION;
DECLARE_INTERFACE_(IPortClsSubdeviceEx,IUnknown)
{
    DEFINE_ABSTRACT_UNKNOWN()
    STDMETHOD_(NTSTATUS, UpdatePinDescriptor)
    (
        _In_ ULONG _ulPinId,
        _In_ ULONG _ulFlags,
        _In_ PPCPIN_DESCRIPTOR _pPinDescriptor
    ) PURE;
};
typedef IPortClsSubdeviceEx *PPORTCLSSubdeviceEx;
DECLARE_INTERFACE_(IPortClsPower,IUnknown)
{
    STDMETHOD_(NTSTATUS,RegisterAdapterPowerManagement)
    (
        _In_ PUNKNOWN _pUnknown,
        _In_ PDEVICE_OBJECT _DeviceObject
    ) PURE;
    STDMETHOD_(NTSTATUS,UnregisterAdapterPowerManagement)
    (
        _In_ PDEVICE_OBJECT _DeviceObject
    ) PURE;
    STDMETHOD_(NTSTATUS,SetIdlePowerManagement)
    (
        _In_ PDEVICE_OBJECT _DeviceObject,
        _In_ BOOLEAN _bEnabled
    ) PURE;
};
typedef IPortClsPower *PPORTCLSPOWER;
typedef
NTSTATUS
_IRQL_requires_max_(DISPATCH_LEVEL)
(*PCPFNRUNTIME_POWER_CONTROL_CALLBACK)
(
    _In_ LPCGUID PowerControlCode,
    _In_opt_ PVOID InBuffer,
    _In_ SIZE_T InBufferSize,
    _Out_opt_ PVOID OutBuffer,
    _In_ SIZE_T OutBufferSize,
    _Out_opt_ PSIZE_T BytesReturned,
    _In_opt_ PVOID Context
);
DECLARE_INTERFACE_(IPortClsRuntimePower,IUnknown)
{
    STDMETHOD_(NTSTATUS,SendPowerControl)
    (
        _In_ PDEVICE_OBJECT _DeviceObject,
        _In_ LPCGUID _PowerControlCode,
        _In_opt_ PVOID _InBuffer,
        _In_ SIZE_T _InBufferSize,
        _Out_opt_ PVOID _OutBuffer,
        _In_ SIZE_T _OutBufferSize,
        _Out_opt_ PSIZE_T _BytesReturned
    ) PURE;
    STDMETHOD_(NTSTATUS,RegisterPowerControlCallback)
    (
        _In_ PDEVICE_OBJECT _DeviceObject,
        _In_ PCPFNRUNTIME_POWER_CONTROL_CALLBACK _Callback,
        _In_opt_ PVOID _Context
    ) PURE;
    STDMETHOD_(NTSTATUS,UnregisterPowerControlCallback)
    (
        _In_ PDEVICE_OBJECT _DeviceObject
    ) PURE;
};
typedef IPortClsRuntimePower *PPORTCLSRUNTIMEPOWER;
typedef enum
{
    eMINIPORT_IHV_DEFINED = 0,
    eMINIPORT_BUFFER_COMPLETE,
    eMINIPORT_PIN_STATE,
    eMINIPORT_GET_STREAM_POSITION,
    eMINIPORT_SET_WAVERT_BUFFER_WRITE_POSITION,
    eMINIPORT_GET_PRESENTATION_POSITION,
    eMINIPORT_PROGRAM_DMA,
    eMINIPORT_GLITCH_REPORT,
    eMINIPORT_LAST_BUFFER_RENDERED,
    eMINIPORT_PROCESSING_MODE,
    eMINIPORT_FX_CLSID,
    eMINIPORT_MaxValue
} EPcMiniportEngineEvent;
DECLARE_INTERFACE_(IPortClsEtwHelper,IUnknown)
{
    STDMETHOD_(NTSTATUS,MiniportWriteEtwEvent)
    (
        _In_ EPcMiniportEngineEvent miniportEventType,
        _In_ ULONGLONG pvData1,
        _In_ ULONGLONG pvData2,
        _In_ ULONGLONG ulData3,
        _In_ ULONGLONG ulData4
    ) PURE;
};
typedef IPortClsEtwHelper *PPORTCLSETWHELPER;
enum
{
    kVersionInvalid = -1,
    kVersionWin98,
    kVersionWin98SE,
    kVersionWin2K,
    kVersionWin98SE_QFE2,
    kVersionWin2K_SP2,
    kVersionWinME,
    kVersionWin98SE_QFE3,
    kVersionWinME_QFE1,
    kVersionWinXP,
    kVersionWinXPSP1,
    kVersionWinServer2003,
    kVersionWin2K_UAAQFE,
    kVersionWinXP_UAAQFE,
    kVersionWinServer2003_UAAQFE,
    kVersionWindowsLonghorn
};
DECLARE_INTERFACE_(IPortWMIRegistration,IUnknown)
{
    DEFINE_ABSTRACT_UNKNOWN()
    STDMETHOD_(NTSTATUS,RegisterWMIProvider)
    ( THIS_
        PDEVICE_OBJECT,
        PVOID
    ) PURE;
    STDMETHOD_(NTSTATUS,UnregisterWMIProvider)
    (
        THIS_
        PDEVICE_OBJECT
    ) PURE;
};
typedef IPortWMIRegistration *PPORTWMIREGISTRATION;
DECLARE_INTERFACE_(IPreFetchOffset,IUnknown)
{
    DEFINE_ABSTRACT_UNKNOWN()
    STDMETHOD_(VOID,SetPreFetchOffset)
    ( THIS_
        _In_ ULONG PreFetchOffset
    ) PURE;
};
typedef IPreFetchOffset *PPREFETCHOFFSET;
    STDMETHODIMP_(VOID) SetPreFetchOffset\
    (\
        _In_ ULONG PreFetchOffset\
    )
DECLARE_INTERFACE_(IUnregisterSubdevice,IUnknown)
{
    DEFINE_ABSTRACT_UNKNOWN()
    STDMETHOD_(NTSTATUS,UnregisterSubdevice)
    ( THIS_
        _In_ PDEVICE_OBJECT DeviceObject,
        _In_ PUNKNOWN Unknown
    ) PURE;
};
typedef IUnregisterSubdevice *PUNREGISTERSUBDEVICE;
    STDMETHODIMP_(NTSTATUS) UnregisterSubdevice\
    (\
        _In_ PDEVICE_OBJECT DeviceObject,\
        _In_ PUNKNOWN Unknown\
    )
DECLARE_INTERFACE_(IUnregisterPhysicalConnection,IUnknown)
{
    DEFINE_ABSTRACT_UNKNOWN()
    STDMETHOD_(NTSTATUS,UnregisterPhysicalConnection)
    ( THIS_
        _In_ PDEVICE_OBJECT DeviceObject,
        _In_ PUNKNOWN FromUnknown,
        _In_ ULONG FromPin,
        _In_ PUNKNOWN ToUnknown,
        _In_ ULONG ToPin
    ) PURE;
    STDMETHOD_(NTSTATUS,UnregisterPhysicalConnectionToExternal)
    ( THIS_
        _In_ PDEVICE_OBJECT DeviceObject,
        _In_ PUNKNOWN FromUnknown,
        _In_ ULONG FromPin,
        _In_ PUNICODE_STRING ToString,
        _In_ ULONG ToPin
    ) PURE;
    STDMETHOD_(NTSTATUS,UnregisterPhysicalConnectionFromExternal)
    ( THIS_
        _In_ PDEVICE_OBJECT DeviceObject,
        _In_ PUNICODE_STRING FromString,
        _In_ ULONG FromPin,
        _In_ PUNKNOWN ToUnknown,
        _In_ ULONG ToPin
    ) PURE;
};
typedef IUnregisterPhysicalConnection *PUNREGISTERPHYSICALCONNECTION;
    STDMETHODIMP_(NTSTATUS) UnregisterPhysicalConnection\
    (\
        _In_ PDEVICE_OBJECT DeviceObject,\
        _In_ PUNKNOWN FromUnknown,\
        _In_ ULONG FromPin,\
        _In_ PUNKNOWN ToUnknown,\
        _In_ ULONG ToPin\
    );\
    STDMETHODIMP_(NTSTATUS) UnregisterPhysicalConnectionToExternal\
    (\
        _In_ PDEVICE_OBJECT DeviceObject,\
        _In_ PUNKNOWN FromUnknown,\
        _In_ ULONG FromPin,\
        _In_ PUNICODE_STRING ToString,\
        _In_ ULONG ToPin\
    );\
    STDMETHODIMP_(NTSTATUS) UnregisterPhysicalConnectionFromExternal\
    (\
        _In_ PDEVICE_OBJECT DeviceObject,\
        _In_ PUNICODE_STRING FromString,\
        _In_ ULONG FromPin,\
        _In_ PUNKNOWN ToUnknown,\
        _In_ ULONG ToPin\
    )
DECLARE_INTERFACE_(IPinName,IUnknown)
{
    DEFINE_ABSTRACT_UNKNOWN()
    STDMETHOD_(NTSTATUS,GetPinName)
    ( THIS_
        _In_ PIRP Irp,
        _In_ PKSP_PIN Pin,
        _Out_ PVOID Data
    ) PURE;
};
typedef IPinName *PIPINNAME;
    STDMETHODIMP_(NTSTATUS) GetPinName \
    ( _In_ PIRP Irp, \
            _In_ PKSP_PIN Pin, \
            _Out_ PVOID Data \
    );
DEFINE_GUID(IID_IMiniportAudioEngineNode,
0x2ebf536c, 0xef57, 0x4c64, 0xbe, 0xdc, 0x25, 0xc1, 0xa6, 0xd6, 0x68, 0xe6);
DEFINE_GUID(IID_IMiniportStreamAudioEngineNode,
0xbd6eeb4b, 0xe6e5, 0x40fd, 0x8d, 0x5a, 0x5b, 0x1d, 0xcd, 0xe2, 0xc, 0x42);
DEFINE_GUID(IID_IMiniportStreamAudioEngineNode2,
0xaeb7f86a, 0x6cba, 0x44cf, 0xa2, 0xd2, 0xb3, 0xfa, 0x5b, 0x69, 0x68, 0x17);
DEFINE_GUID(IID_IMiniportAudioSignalProcessing,
0xb532678c, 0xbe50, 0x472d, 0x99, 0x73, 0x8a, 0x6f, 0x16, 0x59, 0x49, 0x89);
typedef enum {
    eMixFormat,
    eDeviceFormat,
    eSupportedDeviceFormats,
} eEngineFormatType;
typedef enum {
    eVolumeAttribute,
    eMuteAttribute,
    ePeakMeterAttribute,
} eChannelTargetType;
DECLARE_INTERFACE_(IMiniportAudioEngineNode,IUnknown)
{
    DEFINE_ABSTRACT_UNKNOWN()
    STDMETHOD_(NTSTATUS,GetAudioEngineDescriptor)
    ( THIS_
        _In_ ULONG ulNodeId,
        _Out_ KSAUDIOENGINE_DESCRIPTOR *pAudioEngineDescriptor
    ) PURE;
    STDMETHOD_(NTSTATUS,GetGfxState)
    ( THIS_
        _In_ ULONG ulNodeId,
        _Out_ BOOL *pbEnable
    ) PURE;
    STDMETHOD_(NTSTATUS,SetGfxState)
    ( THIS_
        _In_ ULONG ulNodeId,
        _In_ BOOL bEnable
    ) PURE;
    STDMETHOD_(NTSTATUS,GetEngineFormatSize)
    ( THIS_
        _In_ ULONG ulNodeId,
        _In_ eEngineFormatType formatType,
        _Out_ ULONG *pulFormatSize
    ) PURE;
    STDMETHOD_(NTSTATUS,GetMixFormat)
    ( THIS_
        _In_ ULONG ulNodeId,
        _Out_ KSDATAFORMAT_WAVEFORMATEX *pFormat,
        _In_ ULONG ulBufferSize
    ) PURE;
    STDMETHOD_(NTSTATUS,GetDeviceFormat)
    ( THIS_
        _In_ ULONG ulNodeId,
        _Out_ KSDATAFORMAT_WAVEFORMATEX *pFormat,
        _In_ ULONG ulBufferSize
    ) PURE;
    STDMETHOD_(NTSTATUS,SetDeviceFormat)
    ( THIS_
        _In_ ULONG ulNodeId,
        _In_ KSDATAFORMAT_WAVEFORMATEX *pFormat,
        _In_ ULONG ulBufferSize
    ) PURE;
    STDMETHOD_(NTSTATUS,GetSupportedDeviceFormats)
    ( THIS_
        _In_ ULONG ulNodeId,
        _Out_ KSMULTIPLE_ITEM* pFormats,
        _In_ ULONG ulBufferSize
    ) PURE;
    STDMETHOD_(NTSTATUS,GetDeviceChannelCount)
    ( THIS_
        _In_ ULONG ulNodeId,
        _In_ eChannelTargetType targetType,
        _Out_ UINT32 *pulChannelCount
    ) PURE;
    STDMETHOD_(NTSTATUS,GetDeviceAttributeSteppings)
    ( THIS_
        _In_ ULONG ulNodeId,
        _In_ eChannelTargetType targetType,
        _Out_ PKSPROPERTY_STEPPING_LONG pKsPropStepLong,
        _In_ UINT32 ui32DataSize
    ) PURE;
    STDMETHOD_(NTSTATUS,GetDeviceChannelVolume)
    ( THIS_
        _In_ ULONG ulNodeId,
        _In_ UINT32 ulChannel,
        _Out_ LONG *plVolume
    ) PURE;
    STDMETHOD_(NTSTATUS,SetDeviceChannelVolume)
    ( THIS_
        _In_ ULONG ulNodeId,
        _In_ UINT32 ulChannel,
        _In_ LONG lVolume
    ) PURE;
    STDMETHOD_(NTSTATUS,GetDeviceChannelMute)
    ( THIS_
        _In_ ULONG ulNodeId,
        _In_ UINT32 ulChannel,
        _Out_ BOOL *pbMute
    ) PURE;
    STDMETHOD_(NTSTATUS,SetDeviceChannelMute)
    ( THIS_
        _In_ ULONG ulNodeId,
        _In_ UINT32 ulChannel,
        _In_ BOOL bMute
    ) PURE;
    STDMETHOD_(NTSTATUS,GetDeviceChannelPeakMeter)
    ( THIS_
        _In_ ULONG ulNodeId,
        _In_ UINT32 ulChannel,
        _Out_ LONG *plPeakMeter
    ) PURE;
    STDMETHOD_(NTSTATUS,GetBufferSizeRange)
    ( THIS_
        _In_ ULONG ulNodeId,
        _In_ KSDATAFORMAT_WAVEFORMATEX *pKsDataFormatWfx,
        _Out_ KSAUDIOENGINE_BUFFER_SIZE_RANGE *pBufferSizeRange
    ) PURE;
};
typedef IMiniportAudioEngineNode *PIMINIPORTAudioEngineNode;
    STDMETHODIMP_(NTSTATUS) GetAudioEngineDescriptor \
    ( \
        _In_ ULONG _ulNodeId,\
        _Out_ KSAUDIOENGINE_DESCRIPTOR *pAudioEngineDescriptor\
    );\
    STDMETHODIMP_(NTSTATUS) GetGfxState \
    ( \
        _In_ ULONG _ulNodeId,\
        _Out_ BOOL *pbEnable\
    );\
    STDMETHODIMP_(NTSTATUS) SetGfxState \
    ( \
        _In_ ULONG _ulNodeId,\
        _In_ BOOL bEnable\
    );\
    STDMETHODIMP_(NTSTATUS) GetEngineFormatSize \
    ( \
        _In_ ULONG ulNodeId,\
        _In_ eEngineFormatType formatType,\
        _Out_ ULONG *pulFormatSize\
    );\
    STDMETHODIMP_(NTSTATUS) GetMixFormat \
    ( \
        _In_ ULONG ulNodeId,\
        _Out_ KSDATAFORMAT_WAVEFORMATEX *pFormat,\
        _In_ ULONG ulBufferSize\
    );\
    STDMETHODIMP_(NTSTATUS) GetDeviceFormat \
    ( \
        _In_ ULONG ulNodeId,\
        _Out_ KSDATAFORMAT_WAVEFORMATEX *pFormat,\
        _In_ ULONG ulBufferSize\
    );\
    STDMETHODIMP_(NTSTATUS) SetDeviceFormat \
    ( \
        _In_ ULONG ulNodeId,\
        _In_ KSDATAFORMAT_WAVEFORMATEX *pFormat,\
        _In_ ULONG ulBufferSize\
    );\
    STDMETHODIMP_(NTSTATUS) GetSupportedDeviceFormats \
    ( \
        _In_ ULONG ulNodeId,\
        _Out_ KSMULTIPLE_ITEM* pFormats,\
        _In_ ULONG ulBufferSize\
    );\
    STDMETHODIMP_(NTSTATUS) GetDeviceChannelCount \
    ( \
        _In_ ULONG ulNodeId,\
        _In_ eChannelTargetType targetType,\
        _Out_ UINT32 *pulChannelCount\
    );\
    STDMETHODIMP_(NTSTATUS) GetDeviceAttributeSteppings \
    ( \
        _In_ ULONG ulNodeId,\
    _In_ eChannelTargetType targetType,\
    _Out_ PKSPROPERTY_STEPPING_LONG pKsPropStepLong,\
    _In_ UINT32 ui32DataSize\
    );\
    STDMETHODIMP_(NTSTATUS) GetDeviceChannelVolume \
    ( \
        _In_ ULONG ulNodeId,\
    _In_ UINT32 ulChannel,\
    _Out_ LONG *plVolume\
    );\
    STDMETHODIMP_(NTSTATUS) SetDeviceChannelVolume \
    ( \
        _In_ ULONG ulNodeId,\
    _In_ UINT32 ulChannel,\
    _In_ LONG lValue\
    );\
    STDMETHODIMP_(NTSTATUS) GetDeviceChannelMute \
    ( \
        _In_ ULONG ulNodeId,\
    _In_ UINT32 ulChannel,\
    _Out_ BOOL *pbMute\
    );\
    STDMETHODIMP_(NTSTATUS) SetDeviceChannelMute \
    ( \
        _In_ ULONG ulNodeId,\
        _In_ UINT32 ulChannel,\
        _In_ BOOL bMute\
    );\
    STDMETHODIMP_(NTSTATUS) GetDeviceChannelPeakMeter \
    ( \
        _In_ ULONG ulNodeId,\
        _In_ UINT32 ulChannel,\
        _Out_ LONG *plPeakMeter\
    );\
    STDMETHODIMP_(NTSTATUS) GetBufferSizeRange \
    ( \
        _In_ ULONG ulNodeId,\
        _In_ KSDATAFORMAT_WAVEFORMATEX *pKsDataFormatWfx,\
        _Out_ KSAUDIOENGINE_BUFFER_SIZE_RANGE *pBufferSizeRange\
    );\
DECLARE_INTERFACE_(IMiniportStreamAudioEngineNode,IUnknown)
{
    DEFINE_ABSTRACT_UNKNOWN()
    STDMETHOD_(NTSTATUS,GetLfxState)
    ( THIS_
        _Out_ BOOL *pbEnable
    ) PURE;
    STDMETHOD_(NTSTATUS,SetLfxState)
    ( THIS_
        _In_ BOOL bEnable
    ) PURE;
    STDMETHOD_(NTSTATUS,GetStreamChannelCount)
    ( THIS_
        _In_ eChannelTargetType targetType,
        _Out_ UINT32 *pulChannelCount
    ) PURE;
    STDMETHOD_(NTSTATUS,GetStreamAttributeSteppings)
    ( THIS_
        _In_ eChannelTargetType targetType,
        _Out_ PKSPROPERTY_STEPPING_LONG pKsPropStepLong,
        _In_ UINT32 ui32DataSize
    ) PURE;
    STDMETHOD_(NTSTATUS,GetStreamChannelVolume)
    ( THIS_
        _In_ UINT32 ulChannel,
        _Out_ LONG *plValue
    ) PURE;
     STDMETHOD_(NTSTATUS,SetStreamChannelVolume)
    ( THIS_
        _In_ UINT32 Channel,
        _In_ LONG TargetVolume,
        _In_ AUDIO_CURVE_TYPE CurveType,
        _In_ ULONGLONG CurveDuration
    ) PURE;
    STDMETHOD_(NTSTATUS,GetStreamChannelMute)
    ( THIS_
        _In_ UINT32 ulChannel,
        _Out_ BOOL *pbMute
    ) PURE;
    STDMETHOD_(NTSTATUS,SetStreamChannelMute)
    ( THIS_
        _In_ UINT32 ulChannel,
        _In_ BOOL bMute
    ) PURE;
    STDMETHOD_(NTSTATUS,GetStreamChannelPeakMeter)
    ( THIS_
        _In_ UINT32 ulChannel,
        _Out_ LONG *plPeakMeter
    ) PURE;
    STDMETHOD_(NTSTATUS,GetStreamPresentationPosition)
    ( THIS_
        _Out_ KSAUDIO_PRESENTATION_POSITION *pPresentationPosition
    ) PURE;
    STDMETHOD_(NTSTATUS,SetStreamCurrentWritePosition)
    ( THIS_
        _In_ ULONG ulCurrentWritePosition
    ) PURE;
    STDMETHOD_(NTSTATUS,GetStreamLinearBufferPosition)
    ( THIS_
        _Out_ ULONGLONG *pullLinearBufferPosition
    ) PURE;
    STDMETHOD_(NTSTATUS,SetStreamLoopbackProtection)
    ( THIS_
        _In_ CONSTRICTOR_OPTION ProtectionOption
    ) PURE;
};
typedef IMiniportStreamAudioEngineNode *PIMINIPORTStreamAudioEngineNode;
    STDMETHODIMP_(NTSTATUS) GetLfxState \
    ( \
        _Out_ BOOL *pbEnable\
    );\
    STDMETHODIMP_(NTSTATUS) SetLfxState \
    ( \
        _In_ BOOL bEnable\
    );\
    STDMETHODIMP_(NTSTATUS) GetStreamChannelCount \
    ( \
        _In_ eChannelTargetType targetType,\
        _Out_ UINT32 *pulChannelCount\
    );\
    STDMETHODIMP_(NTSTATUS) GetStreamAttributeSteppings \
    ( \
        _In_ eChannelTargetType targetType,\
        _Out_ PKSPROPERTY_STEPPING_LONG pKsPropStepLong,\
        _In_ UINT32 ui32DataSize\
    );\
    STDMETHODIMP_(NTSTATUS) GetStreamChannelVolume \
    ( \
        _In_ UINT32 ulChannel,\
        _Out_ LONG *plVolume\
    );\
    STDMETHODIMP_(NTSTATUS) SetStreamChannelVolume \
    ( \
        _In_ UINT32 Channel, \
        _In_ LONG TargetVolume, \
        _In_ AUDIO_CURVE_TYPE CurveType, \
        _In_ ULONGLONG CurveDuration \
    );\
    STDMETHODIMP_(NTSTATUS) GetStreamChannelMute \
    ( \
        _In_ UINT32 ulChannel,\
        _Out_ BOOL *pbMute\
    );\
    STDMETHODIMP_(NTSTATUS) SetStreamChannelMute \
    ( \
        _In_ UINT32 ulChannel,\
        _In_ BOOL bMute\
    );\
    STDMETHODIMP_(NTSTATUS) GetStreamChannelPeakMeter \
    ( \
        _In_ UINT32 ulChannel,\
        _Out_ LONG *plPeakMeter\
    );\
    STDMETHODIMP_(NTSTATUS) GetStreamPresentationPosition \
    ( \
        _Out_ KSAUDIO_PRESENTATION_POSITION *pPresentationPosition\
    );\
    STDMETHODIMP_(NTSTATUS) SetStreamCurrentWritePosition \
    ( \
        _In_ ULONG ulCurrentWritePosition\
    );\
    STDMETHODIMP_(NTSTATUS) GetStreamLinearBufferPosition \
    ( \
        _Out_ ULONGLONG *pullLinearBufferPosition\
    );\
    STDMETHODIMP_(NTSTATUS) SetStreamLoopbackProtection \
    ( \
        _In_ CONSTRICTOR_OPTION ProtectionOption\
    );
DECLARE_INTERFACE_(IMiniportStreamAudioEngineNode2,IUnknown)
{
    DEFINE_ABSTRACT_UNKNOWN()
    STDMETHOD_(NTSTATUS,SetStreamCurrentWritePositionForLastBuffer)
    ( THIS_
        _In_ ULONG _ulWritePosition
    ) PURE;
};
typedef IMiniportStreamAudioEngineNode2 *PIMINIPORTStreamAudioEngineNode2;
    STDMETHODIMP_(NTSTATUS) SetStreamCurrentWritePositionForLastBuffer \
    ( \
        _In_ ULONG _ulWritePosition\
        \
    );
typedef
NTSTATUS
(*PCPFNSTARTDEVICE)
(
    _In_ PVOID DeviceObject,
    _In_ PVOID Irp,
    _In_ PRESOURCELIST ResourceList
);
PORTCLASSAPI
NTSTATUS
NTAPI
PcInitializeAdapterDriver
(
    _In_ PDRIVER_OBJECT DriverObject,
    _In_ PUNICODE_STRING RegistryPathName,
    _In_ PDRIVER_ADD_DEVICE AddDevice
);
PORTCLASSAPI
NTSTATUS
NTAPI
PcDispatchIrp
(
    _In_ PDEVICE_OBJECT pDeviceObject,
    _In_ PIRP pIrp
);
_Kernel_clear_do_init_(__yes)
PORTCLASSAPI
NTSTATUS
NTAPI
PcAddAdapterDevice
(
    _In_ PDRIVER_OBJECT DriverObject,
    _In_ PDEVICE_OBJECT PhysicalDeviceObject,
    _In_ PCPFNSTARTDEVICE StartDevice,
    _In_ ULONG MaxObjects,
    _In_ ULONG DeviceExtensionSize
);
PORTCLASSAPI
NTSTATUS
NTAPI
PcCompleteIrp
(
    _In_ PDEVICE_OBJECT pDeviceObject,
    _In_ PIRP pIrp,
    _In_ NTSTATUS ntStatus
);
PORTCLASSAPI
NTSTATUS
NTAPI
PcForwardIrpSynchronous
(
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ PIRP Irp
);
PORTCLASSAPI
NTSTATUS
NTAPI
PcRegisterSubdevice
(
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ PWSTR Name,
    _In_ PUNKNOWN Unknown
);
PORTCLASSAPI
NTSTATUS
NTAPI
PcRegisterPhysicalConnection
(
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ PUNKNOWN FromUnknown,
    _In_ ULONG FromPin,
    _In_ PUNKNOWN ToUnknown,
    _In_ ULONG ToPin
);
PORTCLASSAPI
NTSTATUS
NTAPI
PcRegisterPhysicalConnectionToExternal
(
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ PUNKNOWN FromUnknown,
    _In_ ULONG FromPin,
    _In_ PUNICODE_STRING ToString,
    _In_ ULONG ToPin
);
PORTCLASSAPI
NTSTATUS
NTAPI
PcRegisterPhysicalConnectionFromExternal
(
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ PUNICODE_STRING FromString,
    _In_ ULONG FromPin,
    _In_ PUNKNOWN ToUnknown,
    _In_ ULONG ToPin
);
PORTCLASSAPI
NTSTATUS
NTAPI
PcNewPort
(
    _Out_ PPORT * OutPort,
    _In_ REFCLSID ClassID
);
PORTCLASSAPI
NTSTATUS
NTAPI
PcNewMiniport
(
    _Out_ PMINIPORT * OutMiniPort,
    _In_ REFCLSID ClassID
);
PORTCLASSAPI
NTSTATUS
NTAPI
PcNewDmaChannel
(
    _Out_ PDMACHANNEL * OutDmaChannel,
    _In_opt_ PUNKNOWN OuterUnknown,
    _In_ POOL_TYPE PoolType,
    _In_ PDEVICE_DESCRIPTION DeviceDescription,
    _In_ PDEVICE_OBJECT DeviceObject
);
PORTCLASSAPI
NTSTATUS
NTAPI
PcCompletePendingPropertyRequest
(
    _In_ PPCPROPERTY_REQUEST PropertyRequest,
    _In_ NTSTATUS NtStatus
);
PORTCLASSAPI
ULONGLONG
NTAPI
PcGetTimeInterval
(
    _In_ ULONGLONG Since
);
PORTCLASSAPI
NTSTATUS
NTAPI
PcNewResourceList
(
    _Out_ PRESOURCELIST * OutResourceList,
    _In_opt_ PUNKNOWN OuterUnknown,
    _In_ POOL_TYPE PoolType,
    _In_ PCM_RESOURCE_LIST TranslatedResources,
    _In_ PCM_RESOURCE_LIST UntranslatedResources
);
PORTCLASSAPI
NTSTATUS
NTAPI
PcNewResourceSublist
(
    _Out_ PRESOURCELIST * OutResourceList,
    _In_opt_ PUNKNOWN OuterUnknown,
    _In_ POOL_TYPE PoolType,
    _In_ PRESOURCELIST ParentList,
    _In_ ULONG MaximumEntries
);
PORTCLASSAPI
NTSTATUS
NTAPI
PcNewInterruptSync
(
    _Out_ PINTERRUPTSYNC * OutInterruptSync,
    _In_opt_ PUNKNOWN OuterUnknown,
    _In_ PRESOURCELIST ResourceList,
    _In_ ULONG ResourceIndex,
    _In_ INTERRUPTSYNCMODE Mode
);
PORTCLASSAPI
NTSTATUS
NTAPI
PcNewServiceGroup
(
    _Out_ PSERVICEGROUP * OutServiceGroup,
    _In_opt_ PUNKNOWN OuterUnknown
);
PORTCLASSAPI
NTSTATUS
NTAPI
PcNewRegistryKey
(
    _Out_ PREGISTRYKEY * OutRegistryKey,
    _In_opt_ PUNKNOWN OuterUnknown,
    _In_ ULONG RegistryKeyType,
    _In_ ACCESS_MASK DesiredAccess,
    _In_opt_ PVOID DeviceObject,
    _In_opt_ PVOID SubDevice,
    _In_opt_ POBJECT_ATTRIBUTES ObjectAttributes,
    _In_opt_ ULONG CreateOptions,
    _Out_opt_ PULONG Disposition
);
enum
{
    GeneralRegistryKey,
    DeviceRegistryKey,
    DriverRegistryKey,
    HwProfileRegistryKey,
    DeviceInterfaceRegistryKey
};
PORTCLASSAPI
NTSTATUS
NTAPI
PcGetDeviceProperty
(
    _In_ PVOID DeviceObject,
    _In_ DEVICE_REGISTRY_PROPERTY DeviceProperty,
    _In_ ULONG BufferLength,
    _Out_ PVOID PropertyBuffer,
    _Out_ PULONG ResultLength
);
PORTCLASSAPI
NTSTATUS
NTAPI
PcRegisterAdapterPowerManagement
(
    _In_ PUNKNOWN Unknown,
    _In_ PVOID pvContext1
);
PORTCLASSAPI
NTSTATUS
NTAPI
PcUnregisterAdapterPowerManagement
(
    _In_ PDEVICE_OBJECT pDeviceObject
);
PORTCLASSAPI
NTSTATUS
NTAPI
PcRequestNewPowerState
(
    _In_ PDEVICE_OBJECT pDeviceObject,
    _In_ DEVICE_POWER_STATE RequestedNewState
);
_IRQL_requires_max_(PASSIVE_LEVEL)
PORTCLASSAPI
__declspec(deprecated("This method is deprecated."))
NTSTATUS
NTAPI
PcRegisterIoTimeout
(
    _In_ PDEVICE_OBJECT pDeviceObject,
    _In_ PIO_TIMER_ROUTINE pTimerRoutine,
    _In_ PVOID pContext
);
 PORTCLASSAPI
__declspec(deprecated("This method is deprecated."))
NTSTATUS
NTAPI
PcUnregisterIoTimeout
(
    _In_ PDEVICE_OBJECT pDeviceObject,
    _In_ PIO_TIMER_ROUTINE pTimerRoutine,
    _In_ PVOID pContext
);
PORTCLASSAPI
NTSTATUS
NTAPI
PcGetPhysicalDeviceObject
(
    IN PDEVICE_OBJECT pDeviceObject,
    OUT PDEVICE_OBJECT *ppPhysicalObject
);
PORTCLASSAPI
NTSTATUS
NTAPI
PcAddContentHandlers
(
    _In_ ULONG ContentId,
    _In_reads_(NumHandlers) PVOID * paHandlers,
    _In_ ULONG NumHandlers
);
PORTCLASSAPI
NTSTATUS
NTAPI
PcCreateContentMixed
(
    _In_ PULONG paContentId,
    _In_ ULONG cContentId,
    _Out_ PULONG pMixedContentId
);
PORTCLASSAPI
NTSTATUS
NTAPI
PcDestroyContent
(
    _In_ ULONG ContentId
);
PORTCLASSAPI
NTSTATUS
NTAPI
PcForwardContentToDeviceObject
(
    _In_ ULONG ContentId,
    _In_ PVOID Reserved,
    _In_ PCDRMFORWARD DrmForward
);
__drv_preferredFunction("DrmForwardContentToDeviceObject", "Obsolete")
PORTCLASSAPI
NTSTATUS
NTAPI
PcForwardContentToFileObject
(
    _In_ ULONG ContentId,
    _In_ PFILE_OBJECT FileObject
);
PORTCLASSAPI
NTSTATUS
NTAPI
PcForwardContentToInterface
(
    _In_ ULONG ContentId,
    _In_ PUNKNOWN pUnknown,
    _In_ ULONG NumMethods
);
PORTCLASSAPI
NTSTATUS
NTAPI
PcGetContentRights
(
    _In_ ULONG ContentId,
    _Out_ PDRMRIGHTS DrmRights
);
typedef
_Function_class_(EVT_PC_POST_PO_FX_REGISTER_DEVICE)
_IRQL_requires_same_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
EVT_PC_POST_PO_FX_REGISTER_DEVICE(
    _In_ PVOID PoFxDeviceContext,
    _In_ POHANDLE PoHandle
    );
typedef EVT_PC_POST_PO_FX_REGISTER_DEVICE *PFN_PC_POST_PO_FX_REGISTER_DEVICE;
typedef
_Function_class_(EVT_PC_PRE_PO_FX_UNREGISTER_DEVICE)
_IRQL_requires_same_
_IRQL_requires_max_(PASSIVE_LEVEL)
VOID
EVT_PC_PRE_PO_FX_UNREGISTER_DEVICE(
    _In_ PVOID PoFxDeviceContext,
    _In_ POHANDLE PoHandle
    );
typedef EVT_PC_PRE_PO_FX_UNREGISTER_DEVICE *PFN_PC_PRE_PO_FX_UNREGISTER_DEVICE;
typedef struct _PC_POWER_FRAMEWORK_SETTINGS {
  ULONG Size;
  PFN_PC_POST_PO_FX_REGISTER_DEVICE EvtPcPostPoFxRegisterDevice;
  PFN_PC_PRE_PO_FX_UNREGISTER_DEVICE EvtPcPrePoFxUnregisterDevice;
  PPO_FX_COMPONENT Component;
  PPO_FX_COMPONENT_ACTIVE_CONDITION_CALLBACK ComponentActiveConditionCallback;
  PPO_FX_COMPONENT_IDLE_CONDITION_CALLBACK ComponentIdleConditionCallback;
  PPO_FX_COMPONENT_IDLE_STATE_CALLBACK ComponentIdleStateCallback;
  PPO_FX_POWER_CONTROL_CALLBACK PowerControlCallback;
  PVOID PoFxDeviceContext;
} PC_POWER_FRAMEWORK_SETTINGS, *PPC_POWER_FRAMEWORK_SETTINGS;
VOID
FORCEINLINE
PC_POWER_FRAMEWORK_SETTINGS_INIT(
    _Out_ PPC_POWER_FRAMEWORK_SETTINGS PowerFrameworkSettings
    )
{
    RtlZeroMemory(PowerFrameworkSettings,
                  sizeof(PC_POWER_FRAMEWORK_SETTINGS));
    PowerFrameworkSettings->Size = sizeof(PC_POWER_FRAMEWORK_SETTINGS);
}
PORTCLASSAPI
NTSTATUS
NTAPI
PcAssignPowerFrameworkSettings(
  _In_ PDEVICE_OBJECT DeviceObject,
  _In_ PPC_POWER_FRAMEWORK_SETTINGS PowerFrameworkSettings
  );
DECLARE_HANDLE(PCSTREAMRESOURCE);
typedef enum _PcStreamResourceType {
    ePcStreamResourceInterrupt,
    ePcStreamResourceThread,
    ePcStreamResourceSet
} PcStreamResourceType, *PPcStreamResourceType;
typedef struct _PCSTREAMRESOURCE_DESCRIPTOR {
    ULONG Size;
    ULONG Flags;
    PDEVICE_OBJECT Pdo;
    PcStreamResourceType Type;
    union {
        struct {
            ULONG Version;
            PVOID Generic;
        } Interrupt;
        PETHREAD Thread;
        PVOID ResourceSet;
    } Resource;
} PCSTREAMRESOURCE_DESCRIPTOR, *PPCSTREAMRESOURCE_DESCRIPTOR;
VOID
FORCEINLINE
PCSTREAMRESOURCE_DESCRIPTOR_INIT(
    _Out_ PPCSTREAMRESOURCE_DESCRIPTOR Resource
    )
{
    RtlZeroMemory(Resource, sizeof(PCSTREAMRESOURCE_DESCRIPTOR));
    Resource->Size = sizeof(PCSTREAMRESOURCE_DESCRIPTOR);
}
PORTCLASSAPI
NTSTATUS
PcAddStreamResource(
    _In_ PDEVICE_OBJECT PhysicalDeviceObject,
    _In_ PVOID ResourceSet,
    _In_ PPCSTREAMRESOURCE_DESCRIPTOR ResourceDescriptor,
    _Out_ PCSTREAMRESOURCE* ResourceHandle
    );
PORTCLASSAPI
NTSTATUS
PcRemoveStreamResource(
    _In_ PCSTREAMRESOURCE ResourceHandle
    );
    STDMETHOD_(NTSTATUS,AddStreamResource) \
    ( THIS_ \
        _In_ PVOID ResourceSet, \
        _In_ PPCSTREAMRESOURCE_DESCRIPTOR ResourceDescriptor, \
        _Out_ PCSTREAMRESOURCE* ResourceHandle \
    ) PURE; \
    STDMETHOD_(NTSTATUS,RemoveStreamResource) \
    ( \
        THIS_ \
        _In_ PCSTREAMRESOURCE ResourceHandle \
    ) PURE;
DECLARE_INTERFACE_(IPortClsStreamResourceManager,IUnknown)
{
    DEFINE_ABSTRACT_UNKNOWN()
    DEFINE_ABSTRACT_IPORTCLSSTREAMRESOURCEMANAGER()
};
typedef IPortClsStreamResourceManager *PPORTCLSStreamResourceManager;
    STDMETHODIMP_(NTSTATUS) AddStreamResource\
    (\
        _In_ PVOID ResourceSet,\
        _In_ PPCSTREAMRESOURCE_DESCRIPTOR ResourceDescriptor,\
        _Out_ PCSTREAMRESOURCE* ResourceHandle\
    );\
    STDMETHODIMP_(NTSTATUS) RemoveStreamResource\
    (\
        _In_ PCSTREAMRESOURCE ResourceHandle\
    );
DECLARE_INTERFACE_(IPortClsStreamResourceManager2,IPortClsStreamResourceManager)
{
    DEFINE_ABSTRACT_UNKNOWN()
    DEFINE_ABSTRACT_IPORTCLSSTREAMRESOURCEMANAGER()
    STDMETHOD_(NTSTATUS,AddStreamResource2)
    ( THIS_
        _In_ PDEVICE_OBJECT PhysicalDeviceObject,
        _In_ PVOID ResourceSet,
        _In_ PPCSTREAMRESOURCE_DESCRIPTOR ResourceDescriptor,
        _Out_ PCSTREAMRESOURCE* ResourceHandle
    ) PURE;
};
typedef IPortClsStreamResourceManager2 *PPORTCLSStreamResourceManager2;
    IMP_IPortClsStreamResourceManager\
    STDMETHODIMP_(NTSTATUS) AddStreamResource2\
    (\
        _In_ PDEVICE_OBJECT PhysicalDeviceObject,\
        _In_ PVOID ResourceSet,\
        _In_ PPCSTREAMRESOURCE_DESCRIPTOR ResourceDescriptor,\
        _Out_ PCSTREAMRESOURCE* ResourceHandle\
    );
PORTCLASSAPI
NTSTATUS
NTAPI
PcRegisterAdapterPnpManagement
(
    _In_ PUNKNOWN Unknown,
    _In_ PDEVICE_OBJECT DeviceObject
);
PORTCLASSAPI
NTSTATUS
NTAPI
PcUnregisterAdapterPnpManagement
(
    _In_ PDEVICE_OBJECT DeviceObject
);
    PcInitializeAdapterDriver(PDRIVER_OBJECT(c1),PUNICODE_STRING(c2),PDRIVER_ADD_DEVICE(a))
    PcAddAdapterDevice(PDRIVER_OBJECT(c1),PDEVICE_OBJECT(c2),s,m,0)
    PcRegisterSubdevice(PDEVICE_OBJECT(c1),n,u)
    PcRegisterPhysicalConnection(PDEVICE_OBJECT(c1),fs,fp,ts,tp)
    PcRegisterPhysicalConnectionToExternal(PDEVICE_OBJECT(c1),fs,fp,ts,tp)
    PcRegisterPhysicalConnectionFromExternal(PDEVICE_OBJECT(c1),fs,fp,ts,tp)
DEFINE_GUID(IID_IPortClsNotifications,
0x1E092CE2L, 0xDB25, 0x483B, 0x84, 0x46, 0xB0, 0x96, 0x12, 0x15, 0x25, 0x8B);
typedef struct _PCNOTIFICATION_BUFFER
{
    UCHAR NotificationBuffer[1];
} PCNOTIFICATION_BUFFER, *PPCNOTIFICATION_BUFFER;
DECLARE_INTERFACE_(IPortClsNotifications,IUnknown)
{
    DEFINE_ABSTRACT_UNKNOWN()
    STDMETHOD_(NTSTATUS, AllocNotificationBuffer)
    ( THIS_
        _In_ POOL_TYPE PoolType,
        _In_ USHORT NumberOfBytes,
        _Out_ PPCNOTIFICATION_BUFFER* NotificationBuffer
    ) PURE;
    STDMETHOD_(void, FreeNotificationBuffer)
    ( THIS_
        _In_ PPCNOTIFICATION_BUFFER NotificationBuffer
    ) PURE;
    STDMETHOD_(void, SendNotification)
    ( THIS_
        _In_ const GUID* NotificationId,
        _In_ PPCNOTIFICATION_BUFFER NotificationBuffer
    ) PURE;
};
typedef IPortClsNotifications *PPORTCLSNOTIFICATIONS;
    STDMETHODIMP_(NTSTATUS) AllocNotificationBuffer\
    ( _In_ POOL_TYPE PoolType,\
        _In_ USHORT NumberOfBytes,\
        _Out_ PPCNOTIFICATION_BUFFER* NotificationBuffer\
    );\
    STDMETHODIMP_(void) FreeNotificationBuffer\
    ( _In_ PPCNOTIFICATION_BUFFER NotificationBuffer\
    );\
    STDMETHODIMP_(void) SendNotification\
    ( _In_ const GUID* NotificationId,\
        _In_ PPCNOTIFICATION_BUFFER NotificationBuffer\
    )

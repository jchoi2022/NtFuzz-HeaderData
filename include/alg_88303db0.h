#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IAdapterInfo IAdapterInfo;
typedef interface IPendingProxyConnection IPendingProxyConnection;
typedef interface IDataChannel IDataChannel;
typedef interface IPersistentDataChannel IPersistentDataChannel;
typedef interface IPrimaryControlChannel IPrimaryControlChannel;
typedef interface ISecondaryControlChannel ISecondaryControlChannel;
typedef interface IEnumAdapterInfo IEnumAdapterInfo;
typedef interface IAdapterNotificationSink IAdapterNotificationSink;
typedef interface IApplicationGatewayServices IApplicationGatewayServices;
typedef interface IApplicationGateway IApplicationGateway;
typedef class ApplicationGatewayServices ApplicationGatewayServices;
typedef class PrimaryControlChannel PrimaryControlChannel;
typedef class SecondaryControlChannel SecondaryControlChannel;
typedef class AdapterInfo AdapterInfo;
typedef class EnumAdapterInfo EnumAdapterInfo;
typedef class PendingProxyConnection PendingProxyConnection;
typedef class DataChannel DataChannel;
typedef class PersistentDataChannel PersistentDataChannel;
#include "oaidl.h"
#include "ocidl.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef
enum _ALG_PROTOCOL
    {
        eALG_TCP = 0x1,
        eALG_UDP = 0x2
    } ALG_PROTOCOL;
typedef
enum _ALG_CAPTURE
    {
        eALG_SOURCE_CAPTURE = 0x1,
        eALG_DESTINATION_CAPTURE = 0x2
    } ALG_CAPTURE;
typedef
enum _ALG_DIRECTION
    {
        eALG_INBOUND = 0x1,
        eALG_OUTBOUND = 0x2,
        eALG_BOTH = 0x3
    } ALG_DIRECTION;
typedef
enum _ALG_ADAPTER_TYPE
    {
        eALG_PRIVATE = 0x1,
        eALG_BOUNDARY = 0x2,
        eALG_FIREWALLED = 0x4
    } ALG_ADAPTER_TYPE;
typedef
enum _ALG_NOTIFICATION
    {
        eALG_NONE = 0,
        eALG_SESSION_CREATION = 0x1,
        eALG_SESSION_DELETION = 0x2,
        eALG_SESSION_BOTH = 0x3
    } ALG_NOTIFICATION;
typedef struct _ALG_PRIMARY_CHANNEL_PROPERTIES
    {
    ALG_PROTOCOL eProtocol;
    USHORT usCapturePort;
    ALG_CAPTURE eCaptureType;
    BOOL fCaptureInbound;
    ULONG ulListeningAddress;
    USHORT usListeningPort;
    ULONG ulAdapterIndex;
    } ALG_PRIMARY_CHANNEL_PROPERTIES;
typedef struct _ALG_SECONDARY_CHANNEL_PROPERTIES
    {
    ALG_PROTOCOL eProtocol;
    ULONG ulPrivateAddress;
    USHORT usPrivatePort;
    ULONG ulPublicAddress;
    USHORT usPublicPort;
    ULONG ulRemoteAddress;
    USHORT usRemotePort;
    ULONG ulListenAddress;
    USHORT usListenPort;
    ALG_DIRECTION eDirection;
    BOOL fPersistent;
    } ALG_SECONDARY_CHANNEL_PROPERTIES;
typedef struct _ALG_DATA_CHANNEL_PROPERTIES
    {
    ALG_PROTOCOL eProtocol;
    ULONG ulPrivateAddress;
    USHORT usPrivatePort;
    ULONG ulPublicAddress;
    USHORT usPublicPort;
    ULONG ulRemoteAddress;
    USHORT usRemotePort;
    ALG_DIRECTION eDirection;
    ALG_NOTIFICATION eDesiredNotification;
    } ALG_DATA_CHANNEL_PROPERTIES;
typedef struct _ALG_PERSISTENT_DATA_CHANNEL_PROPERTIES
    {
    ALG_PROTOCOL eProtocol;
    ULONG ulPrivateAddress;
    USHORT usPrivatePort;
    ULONG ulPublicAddress;
    USHORT usPublicPort;
    ULONG ulRemoteAddress;
    USHORT usRemotePort;
    ALG_DIRECTION eDirection;
    } ALG_PERSISTENT_DATA_CHANNEL_PROPERTIES;
extern RPC_IF_HANDLE __MIDL_itf_alg_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_alg_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IAdapterInfo;
    typedef struct IAdapterInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAdapterInfo * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAdapterInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAdapterInfo * This);
        HRESULT ( STDMETHODCALLTYPE *GetAdapterIndex )(
            __RPC__in IAdapterInfo * This,
                        __RPC__out ULONG *pulIndex);
        HRESULT ( STDMETHODCALLTYPE *GetAdapterType )(
            __RPC__in IAdapterInfo * This,
                        __RPC__out ALG_ADAPTER_TYPE *pAdapterType);
        HRESULT ( STDMETHODCALLTYPE *GetAdapterAddresses )(
            __RPC__in IAdapterInfo * This,
                        __RPC__out ULONG *pulAddressCount,
                                          __RPC__deref_out_ecount_full_opt(*pulAddressCount) ULONG **prgAddresses);
        END_INTERFACE
    } IAdapterInfoVtbl;
    interface IAdapterInfo
    {
        CONST_VTBL struct IAdapterInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetAdapterIndex(This,pulIndex) )
    ( (This)->lpVtbl -> GetAdapterType(This,pAdapterType) )
    ( (This)->lpVtbl -> GetAdapterAddresses(This,pulAddressCount,prgAddresses) )
EXTERN_C const IID IID_IPendingProxyConnection;
    typedef struct IPendingProxyConnectionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPendingProxyConnection * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPendingProxyConnection * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPendingProxyConnection * This);
        HRESULT ( STDMETHODCALLTYPE *Cancel )(
            __RPC__in IPendingProxyConnection * This);
        END_INTERFACE
    } IPendingProxyConnectionVtbl;
    interface IPendingProxyConnection
    {
        CONST_VTBL struct IPendingProxyConnectionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Cancel(This) )
EXTERN_C const IID IID_IDataChannel;
    typedef struct IDataChannelVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDataChannel * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDataChannel * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDataChannel * This);
        HRESULT ( STDMETHODCALLTYPE *Cancel )(
            IDataChannel * This);
        HRESULT ( STDMETHODCALLTYPE *GetChannelProperties )(
            IDataChannel * This,
                        ALG_DATA_CHANNEL_PROPERTIES **ppProperties);
        HRESULT ( STDMETHODCALLTYPE *GetSessionCreationEventHandle )(
            IDataChannel * This,
                        HANDLE *pHandle);
        HRESULT ( STDMETHODCALLTYPE *GetSessionDeletionEventHandle )(
            IDataChannel * This,
                        HANDLE *pHandle);
        END_INTERFACE
    } IDataChannelVtbl;
    interface IDataChannel
    {
        CONST_VTBL struct IDataChannelVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Cancel(This) )
    ( (This)->lpVtbl -> GetChannelProperties(This,ppProperties) )
    ( (This)->lpVtbl -> GetSessionCreationEventHandle(This,pHandle) )
    ( (This)->lpVtbl -> GetSessionDeletionEventHandle(This,pHandle) )
EXTERN_C const IID IID_IPersistentDataChannel;
    typedef struct IPersistentDataChannelVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPersistentDataChannel * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPersistentDataChannel * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPersistentDataChannel * This);
        HRESULT ( STDMETHODCALLTYPE *Cancel )(
            __RPC__in IPersistentDataChannel * This);
        HRESULT ( STDMETHODCALLTYPE *GetChannelProperties )(
            __RPC__in IPersistentDataChannel * This,
                        __RPC__deref_out_opt ALG_PERSISTENT_DATA_CHANNEL_PROPERTIES **ppProperties);
        END_INTERFACE
    } IPersistentDataChannelVtbl;
    interface IPersistentDataChannel
    {
        CONST_VTBL struct IPersistentDataChannelVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Cancel(This) )
    ( (This)->lpVtbl -> GetChannelProperties(This,ppProperties) )
EXTERN_C const IID IID_IPrimaryControlChannel;
    typedef struct IPrimaryControlChannelVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPrimaryControlChannel * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPrimaryControlChannel * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPrimaryControlChannel * This);
        HRESULT ( STDMETHODCALLTYPE *Cancel )(
            __RPC__in IPrimaryControlChannel * This);
        HRESULT ( STDMETHODCALLTYPE *GetChannelProperties )(
            __RPC__in IPrimaryControlChannel * This,
                        __RPC__deref_out_opt ALG_PRIMARY_CHANNEL_PROPERTIES **ppProperties);
        HRESULT ( STDMETHODCALLTYPE *GetOriginalDestinationInformation )(
            __RPC__in IPrimaryControlChannel * This,
                       ULONG ulSourceAddress,
                       USHORT usSourcePort,
                        __RPC__out ULONG *pulOriginalDestinationAddress,
                        __RPC__out USHORT *pusOriginalDestinationPort,
                        __RPC__out ULONG *pulRemapDestinationAddress,
                        __RPC__out USHORT *pulRemapDestinationPort,
                        __RPC__deref_out_opt IAdapterInfo **ppReceiveAdapter);
        END_INTERFACE
    } IPrimaryControlChannelVtbl;
    interface IPrimaryControlChannel
    {
        CONST_VTBL struct IPrimaryControlChannelVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Cancel(This) )
    ( (This)->lpVtbl -> GetChannelProperties(This,ppProperties) )
    ( (This)->lpVtbl -> GetOriginalDestinationInformation(This,ulSourceAddress,usSourcePort,pulOriginalDestinationAddress,pusOriginalDestinationPort,pulRemapDestinationAddress,pulRemapDestinationPort,ppReceiveAdapter) )
EXTERN_C const IID IID_ISecondaryControlChannel;
    typedef struct ISecondaryControlChannelVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISecondaryControlChannel * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISecondaryControlChannel * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISecondaryControlChannel * This);
        HRESULT ( STDMETHODCALLTYPE *Cancel )(
            __RPC__in ISecondaryControlChannel * This);
        HRESULT ( STDMETHODCALLTYPE *GetChannelProperties )(
            __RPC__in ISecondaryControlChannel * This,
                        __RPC__deref_out_opt ALG_SECONDARY_CHANNEL_PROPERTIES **ppProperties);
        HRESULT ( STDMETHODCALLTYPE *GetOriginalDestinationInformation )(
            __RPC__in ISecondaryControlChannel * This,
                       ULONG ulSourceAddress,
                       USHORT usSourcePort,
                        __RPC__out ULONG *pulOriginalDestinationAddress,
                        __RPC__out USHORT *pusOriginalDestinationPort,
                        __RPC__deref_out_opt IAdapterInfo **ppReceiveAdapter);
        END_INTERFACE
    } ISecondaryControlChannelVtbl;
    interface ISecondaryControlChannel
    {
        CONST_VTBL struct ISecondaryControlChannelVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Cancel(This) )
    ( (This)->lpVtbl -> GetChannelProperties(This,ppProperties) )
    ( (This)->lpVtbl -> GetOriginalDestinationInformation(This,ulSourceAddress,usSourcePort,pulOriginalDestinationAddress,pusOriginalDestinationPort,ppReceiveAdapter) )
EXTERN_C const IID IID_IEnumAdapterInfo;
    typedef struct IEnumAdapterInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IEnumAdapterInfo * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IEnumAdapterInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IEnumAdapterInfo * This);
        HRESULT ( STDMETHODCALLTYPE *Next )(
            __RPC__in IEnumAdapterInfo * This,
                       ULONG celt,
                                            __RPC__out_ecount_part(celt, *pCeltFetched) IAdapterInfo **rgAI,
                        __RPC__out ULONG *pCeltFetched);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            __RPC__in IEnumAdapterInfo * This,
                       ULONG celt);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IEnumAdapterInfo * This);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IEnumAdapterInfo * This,
                        __RPC__deref_out_opt IEnumAdapterInfo **ppEnum);
        END_INTERFACE
    } IEnumAdapterInfoVtbl;
    interface IEnumAdapterInfo
    {
        CONST_VTBL struct IEnumAdapterInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Next(This,celt,rgAI,pCeltFetched) )
    ( (This)->lpVtbl -> Skip(This,celt) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Clone(This,ppEnum) )
EXTERN_C const IID IID_IAdapterNotificationSink;
    typedef struct IAdapterNotificationSinkVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAdapterNotificationSink * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAdapterNotificationSink * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAdapterNotificationSink * This);
        HRESULT ( STDMETHODCALLTYPE *AdapterAdded )(
            __RPC__in IAdapterNotificationSink * This,
            __RPC__in_opt IAdapterInfo *pAdapter);
        HRESULT ( STDMETHODCALLTYPE *AdapterRemoved )(
            __RPC__in IAdapterNotificationSink * This,
            __RPC__in_opt IAdapterInfo *pAdapter);
        HRESULT ( STDMETHODCALLTYPE *AdapterModified )(
            __RPC__in IAdapterNotificationSink * This,
            __RPC__in_opt IAdapterInfo *pAdapter);
        HRESULT ( STDMETHODCALLTYPE *AdapterUpdatePortMapping )(
            __RPC__in IAdapterNotificationSink * This,
            __RPC__in_opt IAdapterInfo *pAdapter);
        END_INTERFACE
    } IAdapterNotificationSinkVtbl;
    interface IAdapterNotificationSink
    {
        CONST_VTBL struct IAdapterNotificationSinkVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AdapterAdded(This,pAdapter) )
    ( (This)->lpVtbl -> AdapterRemoved(This,pAdapter) )
    ( (This)->lpVtbl -> AdapterModified(This,pAdapter) )
    ( (This)->lpVtbl -> AdapterUpdatePortMapping(This,pAdapter) )
EXTERN_C const IID IID_IApplicationGatewayServices;
    typedef struct IApplicationGatewayServicesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IApplicationGatewayServices * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IApplicationGatewayServices * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IApplicationGatewayServices * This);
        HRESULT ( STDMETHODCALLTYPE *CreatePrimaryControlChannel )(
            __RPC__in IApplicationGatewayServices * This,
                       ULONG uAdapterIndex,
                       ALG_PROTOCOL eProtocol,
                       USHORT usPortToCapture,
                       ALG_CAPTURE eCaptureType,
                       BOOL fCaptureInbound,
                       ULONG ulListenAddress,
                       USHORT usListenPort,
                        __RPC__deref_out_opt IPrimaryControlChannel **ppIControlChannel);
        HRESULT ( STDMETHODCALLTYPE *CreateSecondaryControlChannel )(
            __RPC__in IApplicationGatewayServices * This,
                       ALG_PROTOCOL eProtocol,
                       ULONG ulPrivateAddress,
                       USHORT usPrivatePort,
                       ULONG ulPublicAddress,
                       USHORT usPublicPort,
                       ULONG ulRemoteAddress,
                       USHORT usRemotePort,
                       ULONG ulListenAddress,
                       USHORT usListenPort,
                       ALG_DIRECTION eDirection,
                       BOOL fPersistent,
                        __RPC__deref_out_opt ISecondaryControlChannel **ppControlChannel);
        HRESULT ( STDMETHODCALLTYPE *GetBestSourceAddressForDestinationAddress )(
            __RPC__in IApplicationGatewayServices * This,
                       ULONG ulDstAddress,
                       BOOL fDemandDial,
                        __RPC__out ULONG *pulBestSrcAddress);
        HRESULT ( STDMETHODCALLTYPE *PrepareProxyConnection )(
            __RPC__in IApplicationGatewayServices * This,
                       ALG_PROTOCOL eProtocol,
                       ULONG ulSrcAddress,
                       USHORT usSrcPort,
                       ULONG ulDstAddress,
                       USHORT usDstPort,
                       BOOL fNoTimeout,
                        __RPC__deref_out_opt IPendingProxyConnection **ppPendingConnection);
        HRESULT ( STDMETHODCALLTYPE *PrepareSourceModifiedProxyConnection )(
            __RPC__in IApplicationGatewayServices * This,
                       ALG_PROTOCOL eProtocol,
                       ULONG ulSrcAddress,
                       USHORT usSrcPort,
                       ULONG ulDstAddress,
                       USHORT usDstPort,
                       ULONG ulNewSrcAddress,
                       USHORT usNewSourcePort,
                        __RPC__deref_out_opt IPendingProxyConnection **ppPendingConnection);
        HRESULT ( STDMETHODCALLTYPE *CreateDataChannel )(
            __RPC__in IApplicationGatewayServices * This,
                       ALG_PROTOCOL eProtocol,
                       ULONG ulPrivateAddress,
                       USHORT usPrivatePort,
                       ULONG ulPublicAddress,
                       USHORT usPublicPort,
                       ULONG ulRemoteAddress,
                       USHORT usRemotePort,
                       ALG_DIRECTION eDirection,
                       ALG_NOTIFICATION eDesiredNotification,
                       BOOL fNoTimeout,
                        __RPC__deref_out_opt IDataChannel **ppDataChannel);
        HRESULT ( STDMETHODCALLTYPE *CreatePersistentDataChannel )(
            __RPC__in IApplicationGatewayServices * This,
                       ALG_PROTOCOL eProtocol,
                       ULONG ulPrivateAddress,
                       USHORT usPrivatePort,
                       ULONG ulPublicAddress,
                       USHORT usPublicPort,
                       ULONG ulRemoteAddress,
                       USHORT usRemotePort,
                       ALG_DIRECTION eDirection,
                        __RPC__deref_out_opt IPersistentDataChannel **ppIPersistentDataChannel);
        HRESULT ( STDMETHODCALLTYPE *ReservePort )(
            __RPC__in IApplicationGatewayServices * This,
                       USHORT usPortCount,
                        __RPC__out USHORT *pusReservedPort);
        HRESULT ( STDMETHODCALLTYPE *ReleaseReservedPort )(
            __RPC__in IApplicationGatewayServices * This,
                       USHORT usReservedPortBase,
                       USHORT usPortCount);
        HRESULT ( STDMETHODCALLTYPE *EnumerateAdapters )(
            __RPC__in IApplicationGatewayServices * This,
                        __RPC__deref_out_opt IEnumAdapterInfo **ppIEnumAdapterInfo);
        HRESULT ( STDMETHODCALLTYPE *StartAdapterNotifications )(
            __RPC__in IApplicationGatewayServices * This,
                       __RPC__in_opt IAdapterNotificationSink *pSink,
                       __RPC__in DWORD *pdwCookie);
        HRESULT ( STDMETHODCALLTYPE *StopAdapterNotifications )(
            __RPC__in IApplicationGatewayServices * This,
                       DWORD dwCookieOfSink);
        HRESULT ( STDMETHODCALLTYPE *LookupAdapterPortMapping )(
            __RPC__in IApplicationGatewayServices * This,
                       ULONG ulAdapterIndex,
                       UCHAR Protocol,
                       ULONG ulDestinationAddress,
                       USHORT usDestinationPort,
                        __RPC__out ULONG *pulRemapAddress,
                        __RPC__out USHORT *pusRemapPort);
        END_INTERFACE
    } IApplicationGatewayServicesVtbl;
    interface IApplicationGatewayServices
    {
        CONST_VTBL struct IApplicationGatewayServicesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CreatePrimaryControlChannel(This,uAdapterIndex,eProtocol,usPortToCapture,eCaptureType,fCaptureInbound,ulListenAddress,usListenPort,ppIControlChannel) )
    ( (This)->lpVtbl -> CreateSecondaryControlChannel(This,eProtocol,ulPrivateAddress,usPrivatePort,ulPublicAddress,usPublicPort,ulRemoteAddress,usRemotePort,ulListenAddress,usListenPort,eDirection,fPersistent,ppControlChannel) )
    ( (This)->lpVtbl -> GetBestSourceAddressForDestinationAddress(This,ulDstAddress,fDemandDial,pulBestSrcAddress) )
    ( (This)->lpVtbl -> PrepareProxyConnection(This,eProtocol,ulSrcAddress,usSrcPort,ulDstAddress,usDstPort,fNoTimeout,ppPendingConnection) )
    ( (This)->lpVtbl -> PrepareSourceModifiedProxyConnection(This,eProtocol,ulSrcAddress,usSrcPort,ulDstAddress,usDstPort,ulNewSrcAddress,usNewSourcePort,ppPendingConnection) )
    ( (This)->lpVtbl -> CreateDataChannel(This,eProtocol,ulPrivateAddress,usPrivatePort,ulPublicAddress,usPublicPort,ulRemoteAddress,usRemotePort,eDirection,eDesiredNotification,fNoTimeout,ppDataChannel) )
    ( (This)->lpVtbl -> CreatePersistentDataChannel(This,eProtocol,ulPrivateAddress,usPrivatePort,ulPublicAddress,usPublicPort,ulRemoteAddress,usRemotePort,eDirection,ppIPersistentDataChannel) )
    ( (This)->lpVtbl -> ReservePort(This,usPortCount,pusReservedPort) )
    ( (This)->lpVtbl -> ReleaseReservedPort(This,usReservedPortBase,usPortCount) )
    ( (This)->lpVtbl -> EnumerateAdapters(This,ppIEnumAdapterInfo) )
    ( (This)->lpVtbl -> StartAdapterNotifications(This,pSink,pdwCookie) )
    ( (This)->lpVtbl -> StopAdapterNotifications(This,dwCookieOfSink) )
    ( (This)->lpVtbl -> LookupAdapterPortMapping(This,ulAdapterIndex,Protocol,ulDestinationAddress,usDestinationPort,pulRemapAddress,pusRemapPort) )
EXTERN_C const IID IID_IApplicationGateway;
    typedef struct IApplicationGatewayVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IApplicationGateway * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IApplicationGateway * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IApplicationGateway * This);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in IApplicationGateway * This,
                       __RPC__in_opt IApplicationGatewayServices *pAlgServices);
        HRESULT ( STDMETHODCALLTYPE *Stop )(
            __RPC__in IApplicationGateway * This);
        END_INTERFACE
    } IApplicationGatewayVtbl;
    interface IApplicationGateway
    {
        CONST_VTBL struct IApplicationGatewayVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Initialize(This,pAlgServices) )
    ( (This)->lpVtbl -> Stop(This) )
EXTERN_C const IID LIBID_ALGLib;
EXTERN_C const CLSID CLSID_ApplicationGatewayServices;
class DECLSPEC_UUID("F8ADE1D3-49DF-4B75-9005-EF9508E6A337")
ApplicationGatewayServices;
EXTERN_C const CLSID CLSID_PrimaryControlChannel;
class DECLSPEC_UUID("3CEB5509-C1CD-432F-9D8F-65D1E286AA80")
PrimaryControlChannel;
EXTERN_C const CLSID CLSID_SecondaryControlChannel;
class DECLSPEC_UUID("7B3181A0-C92F-4567-B0FA-CD9A10ECD7D1")
SecondaryControlChannel;
EXTERN_C const CLSID CLSID_AdapterInfo;
class DECLSPEC_UUID("6F9942C9-C1B1-4AB5-93DA-6058991DC8F3")
AdapterInfo;
EXTERN_C const CLSID CLSID_EnumAdapterInfo;
class DECLSPEC_UUID("6F9942CA-C1B1-4AB5-93DA-6058991DC8F3")
EnumAdapterInfo;
EXTERN_C const CLSID CLSID_PendingProxyConnection;
class DECLSPEC_UUID("D8A68E5E-2B37-426C-A329-C117C14C429E")
PendingProxyConnection;
EXTERN_C const CLSID CLSID_DataChannel;
class DECLSPEC_UUID("BBB36F15-408D-4056-8C27-920843D40BE5")
DataChannel;
EXTERN_C const CLSID CLSID_PersistentDataChannel;
class DECLSPEC_UUID("BC9B54AB-7883-4C13-909F-033D03267990")
PersistentDataChannel;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_alg_0000_0011_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_alg_0000_0011_v0_0_s_ifspec;
}

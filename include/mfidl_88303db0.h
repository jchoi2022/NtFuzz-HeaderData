#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IMFMediaSession IMFMediaSession;
typedef interface IMFSourceResolver IMFSourceResolver;
typedef interface IMFMediaSource IMFMediaSource;
typedef interface IMFMediaSourceEx IMFMediaSourceEx;
typedef interface IMFClockConsumer IMFClockConsumer;
typedef interface IMFMediaStream IMFMediaStream;
typedef interface IMFMediaSink IMFMediaSink;
typedef interface IMFStreamSink IMFStreamSink;
typedef interface IMFVideoSampleAllocator IMFVideoSampleAllocator;
typedef interface IMFVideoSampleAllocatorNotify IMFVideoSampleAllocatorNotify;
typedef interface IMFVideoSampleAllocatorNotifyEx IMFVideoSampleAllocatorNotifyEx;
typedef interface IMFVideoSampleAllocatorCallback IMFVideoSampleAllocatorCallback;
typedef interface IMFVideoSampleAllocatorEx IMFVideoSampleAllocatorEx;
typedef interface IMFDXGIDeviceManagerSource IMFDXGIDeviceManagerSource;
typedef interface IMFVideoProcessorControl IMFVideoProcessorControl;
typedef interface IMFVideoProcessorControl2 IMFVideoProcessorControl2;
typedef interface IMFVideoProcessorControl3 IMFVideoProcessorControl3;
typedef interface IMFTopology IMFTopology;
typedef interface IMFTopologyNode IMFTopologyNode;
typedef interface IMFGetService IMFGetService;
typedef interface IMFClock IMFClock;
typedef interface IMFPresentationClock IMFPresentationClock;
typedef interface IMFPresentationTimeSource IMFPresentationTimeSource;
typedef interface IMFClockStateSink IMFClockStateSink;
typedef interface IMFPresentationDescriptor IMFPresentationDescriptor;
typedef interface IMFStreamDescriptor IMFStreamDescriptor;
typedef interface IMFMediaTypeHandler IMFMediaTypeHandler;
typedef interface IMFTimer IMFTimer;
typedef interface IMFShutdown IMFShutdown;
typedef interface IMFTopoLoader IMFTopoLoader;
typedef interface IMFContentProtectionManager IMFContentProtectionManager;
typedef interface IMFContentEnabler IMFContentEnabler;
typedef interface IMFMetadata IMFMetadata;
typedef interface IMFMetadataProvider IMFMetadataProvider;
typedef interface IMFRateSupport IMFRateSupport;
typedef interface IMFRateControl IMFRateControl;
typedef interface IMFTimecodeTranslate IMFTimecodeTranslate;
typedef interface IMFSeekInfo IMFSeekInfo;
typedef interface IMFSimpleAudioVolume IMFSimpleAudioVolume;
typedef interface IMFAudioStreamVolume IMFAudioStreamVolume;
typedef interface IMFAudioPolicy IMFAudioPolicy;
typedef interface IMFSampleGrabberSinkCallback IMFSampleGrabberSinkCallback;
typedef interface IMFSampleGrabberSinkCallback2 IMFSampleGrabberSinkCallback2;
typedef interface IMFWorkQueueServices IMFWorkQueueServices;
typedef interface IMFWorkQueueServicesEx IMFWorkQueueServicesEx;
typedef interface IMFQualityManager IMFQualityManager;
typedef interface IMFQualityAdvise IMFQualityAdvise;
typedef interface IMFQualityAdvise2 IMFQualityAdvise2;
typedef interface IMFQualityAdviseLimits IMFQualityAdviseLimits;
typedef interface IMFRealTimeClient IMFRealTimeClient;
typedef interface IMFRealTimeClientEx IMFRealTimeClientEx;
typedef interface IMFSequencerSource IMFSequencerSource;
typedef interface IMFMediaSourceTopologyProvider IMFMediaSourceTopologyProvider;
typedef interface IMFMediaSourcePresentationProvider IMFMediaSourcePresentationProvider;
typedef interface IMFTopologyNodeAttributeEditor IMFTopologyNodeAttributeEditor;
typedef interface IMFByteStreamBuffering IMFByteStreamBuffering;
typedef interface IMFByteStreamCacheControl IMFByteStreamCacheControl;
typedef interface IMFByteStreamTimeSeek IMFByteStreamTimeSeek;
typedef interface IMFByteStreamCacheControl2 IMFByteStreamCacheControl2;
typedef interface IMFNetCredential IMFNetCredential;
typedef interface IMFNetCredentialManager IMFNetCredentialManager;
typedef interface IMFNetCredentialCache IMFNetCredentialCache;
typedef interface IMFSSLCertificateManager IMFSSLCertificateManager;
typedef interface IMFNetResourceFilter IMFNetResourceFilter;
typedef interface IMFSourceOpenMonitor IMFSourceOpenMonitor;
typedef interface IMFNetProxyLocator IMFNetProxyLocator;
typedef interface IMFNetProxyLocatorFactory IMFNetProxyLocatorFactory;
typedef interface IMFSaveJob IMFSaveJob;
typedef interface IMFNetSchemeHandlerConfig IMFNetSchemeHandlerConfig;
typedef interface IMFSchemeHandler IMFSchemeHandler;
typedef interface IMFByteStreamHandler IMFByteStreamHandler;
typedef interface IMFTrustedInput IMFTrustedInput;
typedef interface IMFInputTrustAuthority IMFInputTrustAuthority;
typedef interface IMFTrustedOutput IMFTrustedOutput;
typedef interface IMFOutputTrustAuthority IMFOutputTrustAuthority;
typedef interface IMFOutputPolicy IMFOutputPolicy;
typedef interface IMFOutputSchema IMFOutputSchema;
typedef interface IMFSecureChannel IMFSecureChannel;
typedef interface IMFSampleProtection IMFSampleProtection;
typedef interface IMFMediaSinkPreroll IMFMediaSinkPreroll;
typedef interface IMFFinalizableMediaSink IMFFinalizableMediaSink;
typedef interface IMFStreamingSinkConfig IMFStreamingSinkConfig;
typedef interface IMFRemoteProxy IMFRemoteProxy;
typedef interface IMFObjectReferenceStream IMFObjectReferenceStream;
typedef interface IMFPMPHost IMFPMPHost;
typedef interface IMFPMPClient IMFPMPClient;
typedef interface IMFPMPServer IMFPMPServer;
typedef interface IMFRemoteDesktopPlugin IMFRemoteDesktopPlugin;
typedef interface IMFSAMIStyle IMFSAMIStyle;
typedef interface IMFTranscodeProfile IMFTranscodeProfile;
typedef interface IMFTranscodeSinkInfoProvider IMFTranscodeSinkInfoProvider;
typedef interface IMFFieldOfUseMFTUnlock IMFFieldOfUseMFTUnlock;
typedef interface IMFLocalMFTRegistration IMFLocalMFTRegistration;
typedef interface IMFCapturePhotoConfirmation IMFCapturePhotoConfirmation;
typedef interface IMFPMPHostApp IMFPMPHostApp;
typedef interface IMFPMPClientApp IMFPMPClientApp;
typedef interface IMFMediaStreamSourceSampleRequest IMFMediaStreamSourceSampleRequest;
typedef interface IMFTrackedSample IMFTrackedSample;
typedef interface IMFProtectedEnvironmentAccess IMFProtectedEnvironmentAccess;
typedef interface IMFSignedLibrary IMFSignedLibrary;
typedef interface IMFSystemId IMFSystemId;
typedef interface IMFContentProtectionDevice IMFContentProtectionDevice;
typedef interface IMFContentDecryptorContext IMFContentDecryptorContext;
typedef interface IMFNetCrossOriginSupport IMFNetCrossOriginSupport;
typedef interface IMFHttpDownloadRequest IMFHttpDownloadRequest;
typedef interface IMFHttpDownloadSession IMFHttpDownloadSession;
typedef interface IMFHttpDownloadSessionProvider IMFHttpDownloadSessionProvider;
typedef interface IMFMediaSource2 IMFMediaSource2;
typedef interface IMFMediaStream2 IMFMediaStream2;
typedef interface IMFSensorDevice IMFSensorDevice;
typedef interface IMFSensorGroup IMFSensorGroup;
typedef interface IMFSensorStream IMFSensorStream;
typedef interface IMFSensorTransformFactory IMFSensorTransformFactory;
typedef interface IMFSensorProfile IMFSensorProfile;
typedef interface IMFSensorProfileCollection IMFSensorProfileCollection;
typedef interface IMFSensorProcessActivity IMFSensorProcessActivity;
typedef interface IMFSensorActivityReport IMFSensorActivityReport;
typedef interface IMFSensorActivitiesReport IMFSensorActivitiesReport;
typedef interface IMFSensorActivitiesReportCallback IMFSensorActivitiesReportCallback;
typedef interface IMFSensorActivityMonitor IMFSensorActivityMonitor;
typedef interface IMFExtendedCameraIntrinsicModel IMFExtendedCameraIntrinsicModel;
typedef interface IMFExtendedCameraIntrinsicsDistortionModel6KT IMFExtendedCameraIntrinsicsDistortionModel6KT;
typedef interface IMFExtendedCameraIntrinsicsDistortionModelArcTan IMFExtendedCameraIntrinsicsDistortionModelArcTan;
typedef interface IMFExtendedCameraIntrinsics IMFExtendedCameraIntrinsics;
#include "mfobjects.h"
#include "mftransform.h"
extern "C"{
#include <winapifamily.h>
#include <windef.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef
enum MFSESSION_SETTOPOLOGY_FLAGS
    {
        MFSESSION_SETTOPOLOGY_IMMEDIATE = 0x1,
        MFSESSION_SETTOPOLOGY_NORESOLUTION = 0x2,
        MFSESSION_SETTOPOLOGY_CLEAR_CURRENT = 0x4
    } MFSESSION_SETTOPOLOGY_FLAGS;
typedef
enum MFSESSION_GETFULLTOPOLOGY_FLAGS
    {
        MFSESSION_GETFULLTOPOLOGY_CURRENT = 0x1
    } MFSESSION_GETFULLTOPOLOGY_FLAGS;
typedef
enum MFPMPSESSION_CREATION_FLAGS
    {
        MFPMPSESSION_UNPROTECTED_PROCESS = 0x1,
        MFPMPSESSION_IN_PROCESS = 0x2
    } MFPMPSESSION_CREATION_FLAGS;
typedef unsigned __int64 TOPOID;
#endif
#pragma endregion
#pragma region Application or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_GAMES)
EXTERN_GUID( MF_WVC1_PROG_SINGLE_SLICE_CONTENT, 0x67EC2559, 0x0F2F, 0x4420, 0xA4, 0xDD, 0x2F, 0x8E, 0xE7, 0xA5, 0x73, 0x8B);
EXTERN_GUID( MF_PROGRESSIVE_CODING_CONTENT, 0x8F020EEA, 0x1508, 0x471F, 0x9D, 0xA6, 0x50, 0x7D, 0x7C, 0xFA, 0x40, 0xDB);
EXTERN_GUID( MF_NALU_LENGTH_SET, 0xA7911D53, 0x12A4, 0x4965, 0xAE, 0x70, 0x6E, 0xAD, 0xD6, 0xFF, 0x05, 0x51);
EXTERN_GUID( MF_NALU_LENGTH_INFORMATION, 0x19124E7C, 0xAD4B, 0x465F, 0xBB, 0x18, 0x20, 0x18, 0x62, 0x87, 0xB6, 0xAF);
EXTERN_GUID( MF_USER_DATA_PAYLOAD, 0xd1d4985d, 0xdc92, 0x457a, 0xb3, 0xa0, 0x65, 0x1a, 0x33, 0xa3, 0x10, 0x47);
EXTERN_GUID( MF_MPEG4SINK_SPSPPS_PASSTHROUGH, 0x5601a134, 0x2005, 0x4ad2, 0xb3, 0x7d, 0x22, 0xa6, 0xc5, 0x54, 0xde, 0xb2);
EXTERN_GUID( MF_MPEG4SINK_MOOV_BEFORE_MDAT, 0xf672e3ac, 0xe1e6, 0x4f10, 0xb5, 0xec, 0x5f, 0x3b, 0x30, 0x82, 0x88, 0x16);
EXTERN_GUID( MF_MPEG4SINK_MINIMUM_PROPERTIES_SIZE, 0xdca1ed52, 0x450e, 0x4a22, 0x8c, 0x62, 0x4e, 0xd4, 0x52, 0xf7, 0xa1, 0x87);
EXTERN_GUID(MF_MPEG4SINK_MIN_FRAGMENT_DURATION, 0xa30b570c, 0x8efd, 0x45e8, 0x94, 0xfe, 0x27, 0xc8, 0x4b, 0x5b, 0xdf, 0xf6);
EXTERN_GUID(MF_MPEG4SINK_MAX_CODED_SEQUENCES_PER_FRAGMENT, 0xfc1b3bd6, 0x692d, 0x4ce5, 0x92, 0x99, 0x73, 0x8a, 0xa5, 0x46, 0x3e, 0x9a);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFMediaSession;
    typedef struct IMFMediaSessionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMFMediaSession * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMFMediaSession * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMFMediaSession * This);
        HRESULT ( STDMETHODCALLTYPE *GetEvent )(
            __RPC__in IMFMediaSession * This,
                       DWORD dwFlags,
                        __RPC__deref_out_opt IMFMediaEvent **ppEvent);
                      HRESULT ( STDMETHODCALLTYPE *BeginGetEvent )(
            IMFMediaSession * This,
                       IMFAsyncCallback *pCallback,
                       IUnknown *punkState);
                      HRESULT ( STDMETHODCALLTYPE *EndGetEvent )(
            IMFMediaSession * This,
                       IMFAsyncResult *pResult,
            _Out_ IMFMediaEvent **ppEvent);
        HRESULT ( STDMETHODCALLTYPE *QueueEvent )(
            __RPC__in IMFMediaSession * This,
                       MediaEventType met,
                       __RPC__in REFGUID guidExtendedType,
                       HRESULT hrStatus,
                               __RPC__in_opt const PROPVARIANT *pvValue);
        HRESULT ( STDMETHODCALLTYPE *SetTopology )(
            __RPC__in IMFMediaSession * This,
                       DWORD dwSetTopologyFlags,
                       __RPC__in_opt IMFTopology *pTopology);
        HRESULT ( STDMETHODCALLTYPE *ClearTopologies )(
            __RPC__in IMFMediaSession * This);
        HRESULT ( STDMETHODCALLTYPE *Start )(
            __RPC__in IMFMediaSession * This,
                               __RPC__in_opt const GUID *pguidTimeFormat,
                               __RPC__in_opt const PROPVARIANT *pvarStartPosition);
        HRESULT ( STDMETHODCALLTYPE *Pause )(
            __RPC__in IMFMediaSession * This);
        HRESULT ( STDMETHODCALLTYPE *Stop )(
            __RPC__in IMFMediaSession * This);
        HRESULT ( STDMETHODCALLTYPE *Close )(
            __RPC__in IMFMediaSession * This);
        HRESULT ( STDMETHODCALLTYPE *Shutdown )(
            __RPC__in IMFMediaSession * This);
        HRESULT ( STDMETHODCALLTYPE *GetClock )(
            __RPC__in IMFMediaSession * This,
                        __RPC__deref_out_opt IMFClock **ppClock);
        HRESULT ( STDMETHODCALLTYPE *GetSessionCapabilities )(
            __RPC__in IMFMediaSession * This,
                        __RPC__out DWORD *pdwCaps);
        HRESULT ( STDMETHODCALLTYPE *GetFullTopology )(
            __RPC__in IMFMediaSession * This,
                       DWORD dwGetFullTopologyFlags,
                       TOPOID TopoId,
                        __RPC__deref_out_opt IMFTopology **ppFullTopology);
        END_INTERFACE
    } IMFMediaSessionVtbl;
    interface IMFMediaSession
    {
        CONST_VTBL struct IMFMediaSessionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetEvent(This,dwFlags,ppEvent) )
    ( (This)->lpVtbl -> BeginGetEvent(This,pCallback,punkState) )
    ( (This)->lpVtbl -> EndGetEvent(This,pResult,ppEvent) )
    ( (This)->lpVtbl -> QueueEvent(This,met,guidExtendedType,hrStatus,pvValue) )
    ( (This)->lpVtbl -> SetTopology(This,dwSetTopologyFlags,pTopology) )
    ( (This)->lpVtbl -> ClearTopologies(This) )
    ( (This)->lpVtbl -> Start(This,pguidTimeFormat,pvarStartPosition) )
    ( (This)->lpVtbl -> Pause(This) )
    ( (This)->lpVtbl -> Stop(This) )
    ( (This)->lpVtbl -> Close(This) )
    ( (This)->lpVtbl -> Shutdown(This) )
    ( (This)->lpVtbl -> GetClock(This,ppClock) )
    ( (This)->lpVtbl -> GetSessionCapabilities(This,pdwCaps) )
    ( (This)->lpVtbl -> GetFullTopology(This,dwGetFullTopologyFlags,TopoId,ppFullTopology) )
EXTERN_GUID( MF_SESSION_TOPOLOADER, 0x1e83d482, 0x1f1c, 0x4571, 0x84, 0x5, 0x88, 0xf4, 0xb2, 0x18, 0x1f, 0x71);
EXTERN_GUID( MF_SESSION_GLOBAL_TIME, 0x1e83d482, 0x1f1c, 0x4571, 0x84, 0x5, 0x88, 0xf4, 0xb2, 0x18, 0x1f, 0x72);
EXTERN_GUID( MF_SESSION_QUALITY_MANAGER, 0x1e83d482, 0x1f1c, 0x4571, 0x84, 0x5, 0x88, 0xf4, 0xb2, 0x18, 0x1f, 0x73);
EXTERN_GUID( MF_SESSION_CONTENT_PROTECTION_MANAGER, 0x1e83d482, 0x1f1c, 0x4571, 0x84, 0x5, 0x88, 0xf4, 0xb2, 0x18, 0x1f, 0x74);
EXTERN_GUID( MF_SESSION_SERVER_CONTEXT, 0xafe5b291, 0x50fa, 0x46e8, 0xb9, 0xbe, 0xc, 0xc, 0x3c, 0xe4, 0xb3, 0xa5);
EXTERN_GUID( MF_SESSION_REMOTE_SOURCE_MODE, 0xf4033ef4, 0x9bb3, 0x4378, 0x94, 0x1f, 0x85, 0xa0, 0x85, 0x6b, 0xc2, 0x44);
EXTERN_GUID( MF_SESSION_APPROX_EVENT_OCCURRENCE_TIME, 0x190e852f, 0x6238, 0x42d1, 0xb5, 0xaf, 0x69, 0xea, 0x33, 0x8e, 0xf8, 0x50);
EXTERN_GUID( MF_PMP_SERVER_CONTEXT, 0x2f00c910, 0xd2cf, 0x4278, 0x8b, 0x6a, 0xd0, 0x77, 0xfa, 0xc3, 0xa2, 0x5f);
STDAPI MFCreateMediaSession(
    IMFAttributes* pConfiguration,
    _Outptr_ IMFMediaSession** ppMediaSession
    );
#endif
#pragma endregion
#pragma region PC Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_PC_APP)
STDAPI MFCreatePMPMediaSession(
    DWORD dwCreationFlags,
    IMFAttributes *pConfiguration,
    _Outptr_ IMFMediaSession** ppMediaSession,
    _Outptr_opt_ IMFActivate **ppEnablerActivate
    );
#endif
#pragma endregion
#pragma region Application or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_GAMES)
typedef
enum MF_OBJECT_TYPE
    {
        MF_OBJECT_MEDIASOURCE = 0,
        MF_OBJECT_BYTESTREAM = ( MF_OBJECT_MEDIASOURCE + 1 ) ,
        MF_OBJECT_INVALID = ( MF_OBJECT_BYTESTREAM + 1 )
    } MF_OBJECT_TYPE;
enum __MIDL___MIDL_itf_mfidl_0000_0001_0001
    {
        MF_RESOLUTION_MEDIASOURCE = 0x1,
        MF_RESOLUTION_BYTESTREAM = 0x2,
        MF_RESOLUTION_CONTENT_DOES_NOT_HAVE_TO_MATCH_EXTENSION_OR_MIME_TYPE = 0x10,
        MF_RESOLUTION_KEEP_BYTE_STREAM_ALIVE_ON_FAIL = 0x20,
        MF_RESOLUTION_DISABLE_LOCAL_PLUGINS = 0x40,
        MF_RESOLUTION_PLUGIN_CONTROL_POLICY_APPROVED_ONLY = 0x80,
        MF_RESOLUTION_PLUGIN_CONTROL_POLICY_WEB_ONLY = 0x100,
        MF_RESOLUTION_PLUGIN_CONTROL_POLICY_WEB_ONLY_EDGEMODE = 0x200,
        MF_RESOLUTION_ENABLE_STORE_PLUGINS = 0x400,
        MF_RESOLUTION_READ = 0x10000,
        MF_RESOLUTION_WRITE = 0x20000
    } ;
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef
enum _MF_CONNECT_METHOD
    {
        MF_CONNECT_DIRECT = 0,
        MF_CONNECT_ALLOW_CONVERTER = 0x1,
        MF_CONNECT_ALLOW_DECODER = 0x3,
        MF_CONNECT_RESOLVE_INDEPENDENT_OUTPUTTYPES = 0x4,
        MF_CONNECT_AS_OPTIONAL = 0x10000,
        MF_CONNECT_AS_OPTIONAL_BRANCH = 0x20000
    } MF_CONNECT_METHOD;
typedef
enum _MF_TOPOLOGY_RESOLUTION_STATUS_FLAGS
    {
        MF_TOPOLOGY_RESOLUTION_SUCCEEDED = 0,
        MF_OPTIONAL_NODE_REJECTED_MEDIA_TYPE = 0x1,
        MF_OPTIONAL_NODE_REJECTED_PROTECTED_PROCESS = 0x2
    } MF_TOPOLOGY_RESOLUTION_STATUS_FLAGS;
#endif
#pragma endregion
#pragma region Application or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_GAMES)
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0001_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFSourceResolver;
    typedef struct IMFSourceResolverVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMFSourceResolver * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMFSourceResolver * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMFSourceResolver * This);
                      HRESULT ( STDMETHODCALLTYPE *CreateObjectFromURL )(
            IMFSourceResolver * This,
                       LPCWSTR pwszURL,
                       DWORD dwFlags,
                       IPropertyStore *pProps,
            _Out_ MF_OBJECT_TYPE *pObjectType,
            _Outptr_ IUnknown **ppObject);
                      HRESULT ( STDMETHODCALLTYPE *CreateObjectFromByteStream )(
            IMFSourceResolver * This,
                       IMFByteStream *pByteStream,
                       LPCWSTR pwszURL,
                       DWORD dwFlags,
                       IPropertyStore *pProps,
            _Out_ MF_OBJECT_TYPE *pObjectType,
            _Outptr_ IUnknown **ppObject);
                      HRESULT ( STDMETHODCALLTYPE *BeginCreateObjectFromURL )(
            IMFSourceResolver * This,
                       LPCWSTR pwszURL,
                       DWORD dwFlags,
                       IPropertyStore *pProps,
            _Outptr_opt_ IUnknown **ppIUnknownCancelCookie,
                       IMFAsyncCallback *pCallback,
                       IUnknown *punkState);
                      HRESULT ( STDMETHODCALLTYPE *EndCreateObjectFromURL )(
            IMFSourceResolver * This,
                       IMFAsyncResult *pResult,
            _Out_ MF_OBJECT_TYPE *pObjectType,
            _Outptr_ IUnknown **ppObject);
                      HRESULT ( STDMETHODCALLTYPE *BeginCreateObjectFromByteStream )(
            IMFSourceResolver * This,
                       IMFByteStream *pByteStream,
                       LPCWSTR pwszURL,
                       DWORD dwFlags,
                       IPropertyStore *pProps,
            _Outptr_opt_ IUnknown **ppIUnknownCancelCookie,
                       IMFAsyncCallback *pCallback,
                       IUnknown *punkState);
                      HRESULT ( STDMETHODCALLTYPE *EndCreateObjectFromByteStream )(
            IMFSourceResolver * This,
                       IMFAsyncResult *pResult,
            _Out_ MF_OBJECT_TYPE *pObjectType,
            _Outptr_ IUnknown **ppObject);
                      HRESULT ( STDMETHODCALLTYPE *CancelObjectCreation )(
            IMFSourceResolver * This,
                       IUnknown *pIUnknownCancelCookie);
        END_INTERFACE
    } IMFSourceResolverVtbl;
    interface IMFSourceResolver
    {
        CONST_VTBL struct IMFSourceResolverVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CreateObjectFromURL(This,pwszURL,dwFlags,pProps,pObjectType,ppObject) )
    ( (This)->lpVtbl -> CreateObjectFromByteStream(This,pByteStream,pwszURL,dwFlags,pProps,pObjectType,ppObject) )
    ( (This)->lpVtbl -> BeginCreateObjectFromURL(This,pwszURL,dwFlags,pProps,ppIUnknownCancelCookie,pCallback,punkState) )
    ( (This)->lpVtbl -> EndCreateObjectFromURL(This,pResult,pObjectType,ppObject) )
    ( (This)->lpVtbl -> BeginCreateObjectFromByteStream(This,pByteStream,pwszURL,dwFlags,pProps,ppIUnknownCancelCookie,pCallback,punkState) )
    ( (This)->lpVtbl -> EndCreateObjectFromByteStream(This,pResult,pObjectType,ppObject) )
    ( (This)->lpVtbl -> CancelObjectCreation(This,pIUnknownCancelCookie) )
                HRESULT STDMETHODCALLTYPE IMFSourceResolver_RemoteBeginCreateObjectFromURL_Proxy(
    __RPC__in IMFSourceResolver * This,
                       __RPC__in_string LPCWSTR pwszURL,
               DWORD dwFlags,
               __RPC__in_opt IPropertyStore *pProps,
               __RPC__in_opt IMFRemoteAsyncCallback *pCallback);
void __RPC_STUB IMFSourceResolver_RemoteBeginCreateObjectFromURL_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                HRESULT STDMETHODCALLTYPE IMFSourceResolver_RemoteEndCreateObjectFromURL_Proxy(
    __RPC__in IMFSourceResolver * This,
               __RPC__in_opt IUnknown *pResult,
                __RPC__out MF_OBJECT_TYPE *pObjectType,
                __RPC__deref_out_opt IUnknown **ppObject);
void __RPC_STUB IMFSourceResolver_RemoteEndCreateObjectFromURL_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                HRESULT STDMETHODCALLTYPE IMFSourceResolver_RemoteBeginCreateObjectFromByteStream_Proxy(
    __RPC__in IMFSourceResolver * This,
               __RPC__in_opt IMFByteStream *pByteStream,
                       __RPC__in_opt LPCWSTR pwszURL,
               DWORD dwFlags,
                       __RPC__in_opt IPropertyStore *pProps,
               __RPC__in_opt IMFRemoteAsyncCallback *pCallback);
void __RPC_STUB IMFSourceResolver_RemoteBeginCreateObjectFromByteStream_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                HRESULT STDMETHODCALLTYPE IMFSourceResolver_RemoteEndCreateObjectFromByteStream_Proxy(
    __RPC__in IMFSourceResolver * This,
               __RPC__in_opt IUnknown *pResult,
                __RPC__out MF_OBJECT_TYPE *pObjectType,
                __RPC__deref_out_opt IUnknown **ppObject);
void __RPC_STUB IMFSourceResolver_RemoteEndCreateObjectFromByteStream_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
STDAPI MFCreateSourceResolver(
                      _Outptr_ IMFSourceResolver **ppISourceResolver);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_GAMES)
STDAPI CreatePropertyStore(
                      _Outptr_ IPropertyStore **ppStore);
STDAPI MFGetSupportedSchemes(
       _Out_ PROPVARIANT* pPropVarSchemeArray );
STDAPI MFGetSupportedMimeTypes(
       _Out_ PROPVARIANT* pPropVarMimeTypeArray );
EXTERN_C const DECLSPEC_SELECTANY PROPERTYKEY MFPKEY_SourceOpenMonitor = { { 0x074d4637, 0xb5ae, 0x465d, 0xaf, 0x17, 0x1a, 0x53, 0x8d, 0x28, 0x59, 0xdd}, 0x02 };
#endif
#pragma endregion
#pragma region Application or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_GAMES)
EXTERN_C const DECLSPEC_SELECTANY PROPERTYKEY MFPKEY_ASFMediaSource_ApproxSeek = { { 0xb4cd270f, 0x244d, 0x4969, 0xbb, 0x92, 0x3f, 0x0f, 0xb8, 0x31, 0x6f, 0x10}, 0x01 };
#endif
#pragma endregion
#pragma region Application or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_GAMES)
EXTERN_C const DECLSPEC_SELECTANY PROPERTYKEY MFPKEY_ASFMediaSource_IterativeSeekIfNoIndex = { { 0x170b65dc, 0x4a4e, 0x407a, 0xac, 0x22, 0x57, 0x7f, 0x50, 0xe4, 0xa3, 0x7c }, 0x01 };
EXTERN_C const DECLSPEC_SELECTANY PROPERTYKEY MFPKEY_ASFMediaSource_IterativeSeek_Max_Count = { { 0x170b65dc, 0x4a4e, 0x407a, 0xac, 0x22, 0x57, 0x7f, 0x50, 0xe4, 0xa3, 0x7c }, 0x02 };
EXTERN_C const DECLSPEC_SELECTANY PROPERTYKEY MFPKEY_ASFMediaSource_IterativeSeek_Tolerance_In_MilliSecond = { { 0x170b65dc, 0x4a4e, 0x407a, 0xac, 0x22, 0x57, 0x7f, 0x50, 0xe4, 0xa3, 0x7c }, 0x03 };
EXTERN_C const DECLSPEC_SELECTANY PROPERTYKEY MFPKEY_Content_DLNA_Profile_ID = { { 0xcfa31b45, 0x525d, 0x4998, 0xbb, 0x44, 0x3f, 0x7d, 0x81, 0x54, 0x2f, 0xa4 }, 0x01 };
EXTERN_C const DECLSPEC_SELECTANY PROPERTYKEY MFPKEY_MediaSource_DisableReadAhead = { { 0x26366c14, 0xc5bf, 0x4c76, 0x88, 0x7b, 0x9f, 0x17, 0x54, 0xdb, 0x5f, 0x9}, 0x01 };
EXTERN_C const DECLSPEC_SELECTANY PROPERTYKEY MFPKEY_SBESourceMode = { { 0x3fae10bb, 0xf859, 0x4192, 0xb5, 0x62, 0x18, 0x68, 0xd3, 0xda, 0x3a, 0x02}, 0x01 };
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
EXTERN_C const DECLSPEC_SELECTANY PROPERTYKEY MFPKEY_PMP_Creation_Callback = { { 0x28bb4de2, 0x26a2, 0x4870, 0xb7, 0x20, 0xd2, 0x6b, 0xbe, 0xb1, 0x49, 0x42}, 0x01 };
EXTERN_C const DECLSPEC_SELECTANY PROPERTYKEY MFPKEY_HTTP_ByteStream_Enable_Urlmon = { { 0xeda8afdf, 0xc171, 0x417f, 0x8d, 0x17, 0x2e, 0x09, 0x18, 0x30, 0x32, 0x92}, 0x01 };
EXTERN_C const DECLSPEC_SELECTANY PROPERTYKEY MFPKEY_HTTP_ByteStream_Urlmon_Bind_Flags = { { 0xeda8afdf, 0xc171, 0x417f, 0x8d, 0x17, 0x2e, 0x09, 0x18, 0x30, 0x32, 0x92}, 0x02 };
EXTERN_C const DECLSPEC_SELECTANY PROPERTYKEY MFPKEY_HTTP_ByteStream_Urlmon_Security_Id = { { 0xeda8afdf, 0xc171, 0x417f, 0x8d, 0x17, 0x2e, 0x09, 0x18, 0x30, 0x32, 0x92}, 0x03 };
EXTERN_C const DECLSPEC_SELECTANY PROPERTYKEY MFPKEY_HTTP_ByteStream_Urlmon_Window = { { 0xeda8afdf, 0xc171, 0x417f, 0x8d, 0x17, 0x2e, 0x09, 0x18, 0x30, 0x32, 0x92}, 0x04 };
EXTERN_C const DECLSPEC_SELECTANY PROPERTYKEY MFPKEY_HTTP_ByteStream_Urlmon_Callback_QueryService = { { 0xeda8afdf, 0xc171, 0x417f, 0x8d, 0x17, 0x2e, 0x09, 0x18, 0x30, 0x32, 0x92}, 0x05 };
EXTERN_C const DECLSPEC_SELECTANY PROPERTYKEY MFPKEY_MediaProtectionSystemId = { { 0x636b271d, 0xddc7, 0x49e9, 0xa6, 0xc6, 0x47, 0x38, 0x59, 0x62, 0xe5, 0xbd}, 0x01 };
EXTERN_C const DECLSPEC_SELECTANY PROPERTYKEY MFPKEY_MediaProtectionSystemContext = { { 0x636b271d, 0xddc7, 0x49e9, 0xa6, 0xc6, 0x47, 0x38, 0x59, 0x62, 0xe5, 0xbd}, 0x02 };
EXTERN_C const DECLSPEC_SELECTANY PROPERTYKEY MFPKEY_MediaProtectionSystemIdMapping = { { 0x636b271d, 0xddc7, 0x49e9, 0xa6, 0xc6, 0x47, 0x38, 0x59, 0x62, 0xe5, 0xbd}, 0x03 };
EXTERN_C const DECLSPEC_SELECTANY PROPERTYKEY MFPKEY_MediaProtectionContainerGuid = { { 0x42af3d7c, 0xcf, 0x4a0f, 0x81, 0xf0, 0xad, 0xf5, 0x24, 0xa5, 0xa5, 0xb5}, 0x1 };
EXTERN_C const DECLSPEC_SELECTANY PROPERTYKEY MFPKEY_MediaProtectionSystemContextsPerTrack = { { 0x4454b092, 0xd3da, 0x49b0, 0x84, 0x52, 0x68, 0x50, 0xc7, 0xdb, 0x76, 0x4d }, 0x03 };
#endif
#pragma endregion
EXTERN_C const DECLSPEC_SELECTANY PROPERTYKEY MFPKEY_HTTP_ByteStream_Download_Mode = { { 0x817f11b7, 0xa982, 0x46ec, 0xa4, 0x49, 0xef, 0x58, 0xae, 0xd5, 0x3c, 0xa8 }, 0x01 };
EXTERN_C const DECLSPEC_SELECTANY PROPERTYKEY MFPKEY_HTTP_ByteStream_Caching_Mode = { { 0x86a2403e, 0xc78b, 0x44d7, 0x8b, 0xc8, 0xff, 0x72, 0x58, 0x11, 0x75, 0x08}, 0x01 };
EXTERN_C const DECLSPEC_SELECTANY PROPERTYKEY MFPKEY_HTTP_ByteStream_Cache_Limit = { { 0x86a2403e, 0xc78b, 0x44d7, 0x8b, 0xc8, 0xff, 0x72, 0x58, 0x11, 0x75, 0x08}, 0x02 };
#pragma region Application or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_GAMES)
typedef
enum _MFMEDIASOURCE_CHARACTERISTICS
    {
        MFMEDIASOURCE_IS_LIVE = 0x1,
        MFMEDIASOURCE_CAN_SEEK = 0x2,
        MFMEDIASOURCE_CAN_PAUSE = 0x4,
        MFMEDIASOURCE_HAS_SLOW_SEEK = 0x8,
        MFMEDIASOURCE_HAS_MULTIPLE_PRESENTATIONS = 0x10,
        MFMEDIASOURCE_CAN_SKIPFORWARD = 0x20,
        MFMEDIASOURCE_CAN_SKIPBACKWARD = 0x40,
        MFMEDIASOURCE_DOES_NOT_USE_NETWORK = 0x80
    } MFMEDIASOURCE_CHARACTERISTICS;
EXTERN_GUID( MF_TIME_FORMAT_ENTRY_RELATIVE, 0x4399f178, 0x46d3, 0x4504, 0xaf, 0xda, 0x20, 0xd3, 0x2e, 0x9b, 0xa3, 0x60 );
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0002_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFMediaSource;
    typedef struct IMFMediaSourceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMFMediaSource * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMFMediaSource * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMFMediaSource * This);
        HRESULT ( STDMETHODCALLTYPE *GetEvent )(
            __RPC__in IMFMediaSource * This,
                       DWORD dwFlags,
                        __RPC__deref_out_opt IMFMediaEvent **ppEvent);
                      HRESULT ( STDMETHODCALLTYPE *BeginGetEvent )(
            IMFMediaSource * This,
                       IMFAsyncCallback *pCallback,
                       IUnknown *punkState);
                      HRESULT ( STDMETHODCALLTYPE *EndGetEvent )(
            IMFMediaSource * This,
                       IMFAsyncResult *pResult,
            _Out_ IMFMediaEvent **ppEvent);
        HRESULT ( STDMETHODCALLTYPE *QueueEvent )(
            __RPC__in IMFMediaSource * This,
                       MediaEventType met,
                       __RPC__in REFGUID guidExtendedType,
                       HRESULT hrStatus,
                               __RPC__in_opt const PROPVARIANT *pvValue);
        HRESULT ( STDMETHODCALLTYPE *GetCharacteristics )(
            __RPC__in IMFMediaSource * This,
                        __RPC__out DWORD *pdwCharacteristics);
                      HRESULT ( STDMETHODCALLTYPE *CreatePresentationDescriptor )(
            IMFMediaSource * This,
            _Outptr_ IMFPresentationDescriptor **ppPresentationDescriptor);
        HRESULT ( STDMETHODCALLTYPE *Start )(
            __RPC__in IMFMediaSource * This,
                       __RPC__in_opt IMFPresentationDescriptor *pPresentationDescriptor,
                               __RPC__in_opt const GUID *pguidTimeFormat,
                               __RPC__in_opt const PROPVARIANT *pvarStartPosition);
        HRESULT ( STDMETHODCALLTYPE *Stop )(
            __RPC__in IMFMediaSource * This);
        HRESULT ( STDMETHODCALLTYPE *Pause )(
            __RPC__in IMFMediaSource * This);
        HRESULT ( STDMETHODCALLTYPE *Shutdown )(
            __RPC__in IMFMediaSource * This);
        END_INTERFACE
    } IMFMediaSourceVtbl;
    interface IMFMediaSource
    {
        CONST_VTBL struct IMFMediaSourceVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetEvent(This,dwFlags,ppEvent) )
    ( (This)->lpVtbl -> BeginGetEvent(This,pCallback,punkState) )
    ( (This)->lpVtbl -> EndGetEvent(This,pResult,ppEvent) )
    ( (This)->lpVtbl -> QueueEvent(This,met,guidExtendedType,hrStatus,pvValue) )
    ( (This)->lpVtbl -> GetCharacteristics(This,pdwCharacteristics) )
    ( (This)->lpVtbl -> CreatePresentationDescriptor(This,ppPresentationDescriptor) )
    ( (This)->lpVtbl -> Start(This,pPresentationDescriptor,pguidTimeFormat,pvarStartPosition) )
    ( (This)->lpVtbl -> Stop(This) )
    ( (This)->lpVtbl -> Pause(This) )
    ( (This)->lpVtbl -> Shutdown(This) )
                HRESULT STDMETHODCALLTYPE IMFMediaSource_RemoteCreatePresentationDescriptor_Proxy(
    __RPC__in IMFMediaSource * This,
                __RPC__out DWORD *pcbPD,
                                  __RPC__deref_out_ecount_full_opt(*pcbPD) BYTE **pbPD,
                __RPC__deref_out_opt IMFPresentationDescriptor **ppRemotePD);
void __RPC_STUB IMFMediaSource_RemoteCreatePresentationDescriptor_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
#endif
#pragma endregion
#pragma region Application or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_GAMES)
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0003_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFMediaSourceEx;
    typedef struct IMFMediaSourceExVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMFMediaSourceEx * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMFMediaSourceEx * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMFMediaSourceEx * This);
        HRESULT ( STDMETHODCALLTYPE *GetEvent )(
            __RPC__in IMFMediaSourceEx * This,
                       DWORD dwFlags,
                        __RPC__deref_out_opt IMFMediaEvent **ppEvent);
                      HRESULT ( STDMETHODCALLTYPE *BeginGetEvent )(
            IMFMediaSourceEx * This,
                       IMFAsyncCallback *pCallback,
                       IUnknown *punkState);
                      HRESULT ( STDMETHODCALLTYPE *EndGetEvent )(
            IMFMediaSourceEx * This,
                       IMFAsyncResult *pResult,
            _Out_ IMFMediaEvent **ppEvent);
        HRESULT ( STDMETHODCALLTYPE *QueueEvent )(
            __RPC__in IMFMediaSourceEx * This,
                       MediaEventType met,
                       __RPC__in REFGUID guidExtendedType,
                       HRESULT hrStatus,
                               __RPC__in_opt const PROPVARIANT *pvValue);
        HRESULT ( STDMETHODCALLTYPE *GetCharacteristics )(
            __RPC__in IMFMediaSourceEx * This,
                        __RPC__out DWORD *pdwCharacteristics);
                      HRESULT ( STDMETHODCALLTYPE *CreatePresentationDescriptor )(
            IMFMediaSourceEx * This,
            _Outptr_ IMFPresentationDescriptor **ppPresentationDescriptor);
        HRESULT ( STDMETHODCALLTYPE *Start )(
            __RPC__in IMFMediaSourceEx * This,
                       __RPC__in_opt IMFPresentationDescriptor *pPresentationDescriptor,
                               __RPC__in_opt const GUID *pguidTimeFormat,
                               __RPC__in_opt const PROPVARIANT *pvarStartPosition);
        HRESULT ( STDMETHODCALLTYPE *Stop )(
            __RPC__in IMFMediaSourceEx * This);
        HRESULT ( STDMETHODCALLTYPE *Pause )(
            __RPC__in IMFMediaSourceEx * This);
        HRESULT ( STDMETHODCALLTYPE *Shutdown )(
            __RPC__in IMFMediaSourceEx * This);
        HRESULT ( STDMETHODCALLTYPE *GetSourceAttributes )(
            __RPC__in IMFMediaSourceEx * This,
                        __RPC__deref_out_opt IMFAttributes **ppAttributes);
        HRESULT ( STDMETHODCALLTYPE *GetStreamAttributes )(
            __RPC__in IMFMediaSourceEx * This,
                       DWORD dwStreamIdentifier,
                        __RPC__deref_out_opt IMFAttributes **ppAttributes);
        HRESULT ( STDMETHODCALLTYPE *SetD3DManager )(
            __RPC__in IMFMediaSourceEx * This,
                       __RPC__in_opt IUnknown *pManager);
        END_INTERFACE
    } IMFMediaSourceExVtbl;
    interface IMFMediaSourceEx
    {
        CONST_VTBL struct IMFMediaSourceExVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetEvent(This,dwFlags,ppEvent) )
    ( (This)->lpVtbl -> BeginGetEvent(This,pCallback,punkState) )
    ( (This)->lpVtbl -> EndGetEvent(This,pResult,ppEvent) )
    ( (This)->lpVtbl -> QueueEvent(This,met,guidExtendedType,hrStatus,pvValue) )
    ( (This)->lpVtbl -> GetCharacteristics(This,pdwCharacteristics) )
    ( (This)->lpVtbl -> CreatePresentationDescriptor(This,ppPresentationDescriptor) )
    ( (This)->lpVtbl -> Start(This,pPresentationDescriptor,pguidTimeFormat,pvarStartPosition) )
    ( (This)->lpVtbl -> Stop(This) )
    ( (This)->lpVtbl -> Pause(This) )
    ( (This)->lpVtbl -> Shutdown(This) )
    ( (This)->lpVtbl -> GetSourceAttributes(This,ppAttributes) )
    ( (This)->lpVtbl -> GetStreamAttributes(This,dwStreamIdentifier,ppAttributes) )
    ( (This)->lpVtbl -> SetD3DManager(This,pManager) )
EXTERN_GUID( MF_SOURCE_STREAM_SUPPORTS_HW_CONNECTION, 0xa38253aa, 0x6314, 0x42fd, 0xa3, 0xce, 0xbb, 0x27, 0xb6, 0x85, 0x99, 0x46);
#endif
#pragma endregion
#pragma region Application or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_GAMES)
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0004_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFClockConsumer;
    typedef struct IMFClockConsumerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMFClockConsumer * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMFClockConsumer * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMFClockConsumer * This);
        HRESULT ( STDMETHODCALLTYPE *SetPresentationClock )(
            __RPC__in IMFClockConsumer * This,
                       __RPC__in_opt IMFPresentationClock *pPresentationClock);
        HRESULT ( STDMETHODCALLTYPE *GetPresentationClock )(
            __RPC__in IMFClockConsumer * This,
                        __RPC__deref_out_opt IMFPresentationClock **ppPresentationClock);
        END_INTERFACE
    } IMFClockConsumerVtbl;
    interface IMFClockConsumer
    {
        CONST_VTBL struct IMFClockConsumerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetPresentationClock(This,pPresentationClock) )
    ( (This)->lpVtbl -> GetPresentationClock(This,ppPresentationClock) )
#endif
#pragma endregion
#pragma region Application or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_GAMES)
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0005_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFMediaStream;
    typedef struct IMFMediaStreamVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMFMediaStream * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMFMediaStream * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMFMediaStream * This);
        HRESULT ( STDMETHODCALLTYPE *GetEvent )(
            __RPC__in IMFMediaStream * This,
                       DWORD dwFlags,
                        __RPC__deref_out_opt IMFMediaEvent **ppEvent);
                      HRESULT ( STDMETHODCALLTYPE *BeginGetEvent )(
            IMFMediaStream * This,
                       IMFAsyncCallback *pCallback,
                       IUnknown *punkState);
                      HRESULT ( STDMETHODCALLTYPE *EndGetEvent )(
            IMFMediaStream * This,
                       IMFAsyncResult *pResult,
            _Out_ IMFMediaEvent **ppEvent);
        HRESULT ( STDMETHODCALLTYPE *QueueEvent )(
            __RPC__in IMFMediaStream * This,
                       MediaEventType met,
                       __RPC__in REFGUID guidExtendedType,
                       HRESULT hrStatus,
                               __RPC__in_opt const PROPVARIANT *pvValue);
        HRESULT ( STDMETHODCALLTYPE *GetMediaSource )(
            __RPC__in IMFMediaStream * This,
                        __RPC__deref_out_opt IMFMediaSource **ppMediaSource);
        HRESULT ( STDMETHODCALLTYPE *GetStreamDescriptor )(
            __RPC__in IMFMediaStream * This,
                        __RPC__deref_out_opt IMFStreamDescriptor **ppStreamDescriptor);
                      HRESULT ( STDMETHODCALLTYPE *RequestSample )(
            IMFMediaStream * This,
                       IUnknown *pToken);
        END_INTERFACE
    } IMFMediaStreamVtbl;
    interface IMFMediaStream
    {
        CONST_VTBL struct IMFMediaStreamVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetEvent(This,dwFlags,ppEvent) )
    ( (This)->lpVtbl -> BeginGetEvent(This,pCallback,punkState) )
    ( (This)->lpVtbl -> EndGetEvent(This,pResult,ppEvent) )
    ( (This)->lpVtbl -> QueueEvent(This,met,guidExtendedType,hrStatus,pvValue) )
    ( (This)->lpVtbl -> GetMediaSource(This,ppMediaSource) )
    ( (This)->lpVtbl -> GetStreamDescriptor(This,ppStreamDescriptor) )
    ( (This)->lpVtbl -> RequestSample(This,pToken) )
                HRESULT STDMETHODCALLTYPE IMFMediaStream_RemoteRequestSample_Proxy(
    __RPC__in IMFMediaStream * This);
void __RPC_STUB IMFMediaStream_RemoteRequestSample_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
EXTERN_GUID( MF_STREAM_SINK_SUPPORTS_HW_CONNECTION, 0x9b465cbf, 0x597, 0x4f9e, 0x9f, 0x3c, 0xb9, 0x7e, 0xee, 0xf9, 0x3, 0x59);
EXTERN_GUID( MF_STREAM_SINK_SUPPORTS_ROTATION, 0xb3e96280, 0xbd05, 0x41a5, 0x97, 0xad, 0x8a, 0x7f, 0xee, 0x24, 0xb9, 0x12);
typedef
enum MF_TRANSFER_VIDEO_FRAME_FLAGS
    {
        MF_TRANSFER_VIDEO_FRAME_DEFAULT = 0,
        MF_TRANSFER_VIDEO_FRAME_STRETCH = 1,
        MF_TRANSFER_VIDEO_FRAME_IGNORE_PAR = 2
    } MF_TRANSFER_VIDEO_FRAME_FLAGS;
EXTERN_GUID( MF_SINK_VIDEO_PTS, 0x2162bde7, 0x421e, 0x4b90, 0x9b, 0x33, 0xe5, 0x8f, 0xbf, 0x1d, 0x58, 0xb6);
EXTERN_GUID( MF_SINK_VIDEO_NATIVE_WIDTH, 0xe6d6a707, 0x1505, 0x4747, 0x9b, 0x10, 0x72, 0xd2, 0xd1, 0x58, 0xcb, 0x3a);
EXTERN_GUID( MF_SINK_VIDEO_NATIVE_HEIGHT, 0xf0ca6705, 0x490c, 0x43e8, 0x94, 0x1c, 0xc0, 0xb3, 0x20, 0x6b, 0x9a, 0x65);
EXTERN_GUID( MF_SINK_VIDEO_DISPLAY_ASPECT_RATIO_NUMERATOR, 0xd0f33b22, 0xb78a, 0x4879, 0xb4, 0x55, 0xf0, 0x3e, 0xf3, 0xfa, 0x82, 0xcd);
EXTERN_GUID( MF_SINK_VIDEO_DISPLAY_ASPECT_RATIO_DENOMINATOR, 0x6ea1eb97, 0x1fe0, 0x4f10, 0xa6, 0xe4, 0x1f, 0x4f, 0x66, 0x15, 0x64, 0xe0);
EXTERN_GUID( MF_BD_MVC_PLANE_OFFSET_METADATA, 0x62a654e4, 0xb76c, 0x4901, 0x98, 0x23, 0x2c, 0xb6, 0x15, 0xd4, 0x73, 0x18);
EXTERN_GUID( MF_LUMA_KEY_ENABLE, 0x7369820f, 0x76de, 0x43ca, 0x92, 0x84, 0x47, 0xb8, 0xf3, 0x7e, 0x06, 0x49);
EXTERN_GUID( MF_LUMA_KEY_LOWER, 0x93d7b8d5, 0x0b81, 0x4715, 0xae, 0xa0, 0x87, 0x25, 0x87, 0x16, 0x21, 0xe9);
EXTERN_GUID( MF_LUMA_KEY_UPPER, 0xd09f39bb, 0x4602, 0x4c31, 0xa7, 0x06, 0xa1, 0x21, 0x71, 0xa5, 0x11, 0x0a);
EXTERN_GUID( MF_USER_EXTENDED_ATTRIBUTES, 0xc02abac6, 0xfeb2, 0x4541, 0x92, 0x2f, 0x92, 0x0b, 0x43, 0x70, 0x27, 0x22);
EXTERN_GUID( MF_INDEPENDENT_STILL_IMAGE, 0xea12af41, 0x0710, 0x42c9, 0xa1, 0x27, 0xda, 0xa3, 0xe7, 0x84, 0x83, 0xa5);
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0006_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0006_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFMediaSink;
    typedef struct IMFMediaSinkVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMFMediaSink * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMFMediaSink * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMFMediaSink * This);
        HRESULT ( STDMETHODCALLTYPE *GetCharacteristics )(
            __RPC__in IMFMediaSink * This,
                        __RPC__out DWORD *pdwCharacteristics);
        HRESULT ( STDMETHODCALLTYPE *AddStreamSink )(
            __RPC__in IMFMediaSink * This,
                       DWORD dwStreamSinkIdentifier,
                       __RPC__in_opt IMFMediaType *pMediaType,
                        __RPC__deref_out_opt IMFStreamSink **ppStreamSink);
        HRESULT ( STDMETHODCALLTYPE *RemoveStreamSink )(
            __RPC__in IMFMediaSink * This,
                       DWORD dwStreamSinkIdentifier);
        HRESULT ( STDMETHODCALLTYPE *GetStreamSinkCount )(
            __RPC__in IMFMediaSink * This,
                        __RPC__out DWORD *pcStreamSinkCount);
        HRESULT ( STDMETHODCALLTYPE *GetStreamSinkByIndex )(
            __RPC__in IMFMediaSink * This,
                       DWORD dwIndex,
                        __RPC__deref_out_opt IMFStreamSink **ppStreamSink);
        HRESULT ( STDMETHODCALLTYPE *GetStreamSinkById )(
            __RPC__in IMFMediaSink * This,
                       DWORD dwStreamSinkIdentifier,
                        __RPC__deref_out_opt IMFStreamSink **ppStreamSink);
        HRESULT ( STDMETHODCALLTYPE *SetPresentationClock )(
            __RPC__in IMFMediaSink * This,
                       __RPC__in_opt IMFPresentationClock *pPresentationClock);
        HRESULT ( STDMETHODCALLTYPE *GetPresentationClock )(
            __RPC__in IMFMediaSink * This,
                        __RPC__deref_out_opt IMFPresentationClock **ppPresentationClock);
        HRESULT ( STDMETHODCALLTYPE *Shutdown )(
            __RPC__in IMFMediaSink * This);
        END_INTERFACE
    } IMFMediaSinkVtbl;
    interface IMFMediaSink
    {
        CONST_VTBL struct IMFMediaSinkVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetCharacteristics(This,pdwCharacteristics) )
    ( (This)->lpVtbl -> AddStreamSink(This,dwStreamSinkIdentifier,pMediaType,ppStreamSink) )
    ( (This)->lpVtbl -> RemoveStreamSink(This,dwStreamSinkIdentifier) )
    ( (This)->lpVtbl -> GetStreamSinkCount(This,pcStreamSinkCount) )
    ( (This)->lpVtbl -> GetStreamSinkByIndex(This,dwIndex,ppStreamSink) )
    ( (This)->lpVtbl -> GetStreamSinkById(This,dwStreamSinkIdentifier,ppStreamSink) )
    ( (This)->lpVtbl -> SetPresentationClock(This,pPresentationClock) )
    ( (This)->lpVtbl -> GetPresentationClock(This,ppPresentationClock) )
    ( (This)->lpVtbl -> Shutdown(This) )
typedef
enum _MFSTREAMSINK_MARKER_TYPE
    {
        MFSTREAMSINK_MARKER_DEFAULT = 0,
        MFSTREAMSINK_MARKER_ENDOFSEGMENT = ( MFSTREAMSINK_MARKER_DEFAULT + 1 ) ,
        MFSTREAMSINK_MARKER_TICK = ( MFSTREAMSINK_MARKER_ENDOFSEGMENT + 1 ) ,
        MFSTREAMSINK_MARKER_EVENT = ( MFSTREAMSINK_MARKER_TICK + 1 )
    } MFSTREAMSINK_MARKER_TYPE;
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0007_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0007_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFStreamSink;
    typedef struct IMFStreamSinkVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMFStreamSink * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMFStreamSink * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMFStreamSink * This);
        HRESULT ( STDMETHODCALLTYPE *GetEvent )(
            __RPC__in IMFStreamSink * This,
                       DWORD dwFlags,
                        __RPC__deref_out_opt IMFMediaEvent **ppEvent);
                      HRESULT ( STDMETHODCALLTYPE *BeginGetEvent )(
            IMFStreamSink * This,
                       IMFAsyncCallback *pCallback,
                       IUnknown *punkState);
                      HRESULT ( STDMETHODCALLTYPE *EndGetEvent )(
            IMFStreamSink * This,
                       IMFAsyncResult *pResult,
            _Out_ IMFMediaEvent **ppEvent);
        HRESULT ( STDMETHODCALLTYPE *QueueEvent )(
            __RPC__in IMFStreamSink * This,
                       MediaEventType met,
                       __RPC__in REFGUID guidExtendedType,
                       HRESULT hrStatus,
                               __RPC__in_opt const PROPVARIANT *pvValue);
        HRESULT ( STDMETHODCALLTYPE *GetMediaSink )(
            __RPC__in IMFStreamSink * This,
                        __RPC__deref_out_opt IMFMediaSink **ppMediaSink);
        HRESULT ( STDMETHODCALLTYPE *GetIdentifier )(
            __RPC__in IMFStreamSink * This,
                        __RPC__out DWORD *pdwIdentifier);
        HRESULT ( STDMETHODCALLTYPE *GetMediaTypeHandler )(
            __RPC__in IMFStreamSink * This,
                        __RPC__deref_out_opt IMFMediaTypeHandler **ppHandler);
        HRESULT ( STDMETHODCALLTYPE *ProcessSample )(
            __RPC__in IMFStreamSink * This,
                       __RPC__in_opt IMFSample *pSample);
        HRESULT ( STDMETHODCALLTYPE *PlaceMarker )(
            __RPC__in IMFStreamSink * This,
                       MFSTREAMSINK_MARKER_TYPE eMarkerType,
                       __RPC__in const PROPVARIANT *pvarMarkerValue,
                       __RPC__in const PROPVARIANT *pvarContextValue);
        HRESULT ( STDMETHODCALLTYPE *Flush )(
            __RPC__in IMFStreamSink * This);
        END_INTERFACE
    } IMFStreamSinkVtbl;
    interface IMFStreamSink
    {
        CONST_VTBL struct IMFStreamSinkVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetEvent(This,dwFlags,ppEvent) )
    ( (This)->lpVtbl -> BeginGetEvent(This,pCallback,punkState) )
    ( (This)->lpVtbl -> EndGetEvent(This,pResult,ppEvent) )
    ( (This)->lpVtbl -> QueueEvent(This,met,guidExtendedType,hrStatus,pvValue) )
    ( (This)->lpVtbl -> GetMediaSink(This,ppMediaSink) )
    ( (This)->lpVtbl -> GetIdentifier(This,pdwIdentifier) )
    ( (This)->lpVtbl -> GetMediaTypeHandler(This,ppHandler) )
    ( (This)->lpVtbl -> ProcessSample(This,pSample) )
    ( (This)->lpVtbl -> PlaceMarker(This,eMarkerType,pvarMarkerValue,pvarContextValue) )
    ( (This)->lpVtbl -> Flush(This) )
EXTERN_C const IID IID_IMFVideoSampleAllocator;
    typedef struct IMFVideoSampleAllocatorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFVideoSampleAllocator * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFVideoSampleAllocator * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFVideoSampleAllocator * This);
        HRESULT ( STDMETHODCALLTYPE *SetDirectXManager )(
            IMFVideoSampleAllocator * This,
                               IUnknown *pManager);
        HRESULT ( STDMETHODCALLTYPE *UninitializeSampleAllocator )(
            IMFVideoSampleAllocator * This);
        HRESULT ( STDMETHODCALLTYPE *InitializeSampleAllocator )(
            IMFVideoSampleAllocator * This,
                       DWORD cRequestedFrames,
                       IMFMediaType *pMediaType);
        HRESULT ( STDMETHODCALLTYPE *AllocateSample )(
            IMFVideoSampleAllocator * This,
                        IMFSample **ppSample);
        END_INTERFACE
    } IMFVideoSampleAllocatorVtbl;
    interface IMFVideoSampleAllocator
    {
        CONST_VTBL struct IMFVideoSampleAllocatorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetDirectXManager(This,pManager) )
    ( (This)->lpVtbl -> UninitializeSampleAllocator(This) )
    ( (This)->lpVtbl -> InitializeSampleAllocator(This,cRequestedFrames,pMediaType) )
    ( (This)->lpVtbl -> AllocateSample(This,ppSample) )
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0009_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0009_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFVideoSampleAllocatorNotify;
    typedef struct IMFVideoSampleAllocatorNotifyVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFVideoSampleAllocatorNotify * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFVideoSampleAllocatorNotify * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFVideoSampleAllocatorNotify * This);
        HRESULT ( STDMETHODCALLTYPE *NotifyRelease )(
            IMFVideoSampleAllocatorNotify * This);
        END_INTERFACE
    } IMFVideoSampleAllocatorNotifyVtbl;
    interface IMFVideoSampleAllocatorNotify
    {
        CONST_VTBL struct IMFVideoSampleAllocatorNotifyVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> NotifyRelease(This) )
EXTERN_C const IID IID_IMFVideoSampleAllocatorNotifyEx;
    typedef struct IMFVideoSampleAllocatorNotifyExVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFVideoSampleAllocatorNotifyEx * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFVideoSampleAllocatorNotifyEx * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFVideoSampleAllocatorNotifyEx * This);
        HRESULT ( STDMETHODCALLTYPE *NotifyRelease )(
            IMFVideoSampleAllocatorNotifyEx * This);
        HRESULT ( STDMETHODCALLTYPE *NotifyPrune )(
            IMFVideoSampleAllocatorNotifyEx * This,
            IMFSample *__MIDL__IMFVideoSampleAllocatorNotifyEx0000);
        END_INTERFACE
    } IMFVideoSampleAllocatorNotifyExVtbl;
    interface IMFVideoSampleAllocatorNotifyEx
    {
        CONST_VTBL struct IMFVideoSampleAllocatorNotifyExVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> NotifyRelease(This) )
    ( (This)->lpVtbl -> NotifyPrune(This,__MIDL__IMFVideoSampleAllocatorNotifyEx0000) )
EXTERN_C const IID IID_IMFVideoSampleAllocatorCallback;
    typedef struct IMFVideoSampleAllocatorCallbackVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFVideoSampleAllocatorCallback * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFVideoSampleAllocatorCallback * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFVideoSampleAllocatorCallback * This);
        HRESULT ( STDMETHODCALLTYPE *SetCallback )(
            IMFVideoSampleAllocatorCallback * This,
                               IMFVideoSampleAllocatorNotify *pNotify);
        HRESULT ( STDMETHODCALLTYPE *GetFreeSampleCount )(
            IMFVideoSampleAllocatorCallback * This,
                        LONG *plSamples);
        END_INTERFACE
    } IMFVideoSampleAllocatorCallbackVtbl;
    interface IMFVideoSampleAllocatorCallback
    {
        CONST_VTBL struct IMFVideoSampleAllocatorCallbackVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetCallback(This,pNotify) )
    ( (This)->lpVtbl -> GetFreeSampleCount(This,plSamples) )
EXTERN_C const IID IID_IMFVideoSampleAllocatorEx;
    typedef struct IMFVideoSampleAllocatorExVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFVideoSampleAllocatorEx * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFVideoSampleAllocatorEx * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFVideoSampleAllocatorEx * This);
        HRESULT ( STDMETHODCALLTYPE *SetDirectXManager )(
            IMFVideoSampleAllocatorEx * This,
                               IUnknown *pManager);
        HRESULT ( STDMETHODCALLTYPE *UninitializeSampleAllocator )(
            IMFVideoSampleAllocatorEx * This);
        HRESULT ( STDMETHODCALLTYPE *InitializeSampleAllocator )(
            IMFVideoSampleAllocatorEx * This,
                       DWORD cRequestedFrames,
                       IMFMediaType *pMediaType);
        HRESULT ( STDMETHODCALLTYPE *AllocateSample )(
            IMFVideoSampleAllocatorEx * This,
                        IMFSample **ppSample);
        HRESULT ( STDMETHODCALLTYPE *InitializeSampleAllocatorEx )(
            IMFVideoSampleAllocatorEx * This,
            _In_ DWORD cInitialSamples,
            _In_ DWORD cMaximumSamples,
            _In_opt_ IMFAttributes *pAttributes,
            _In_ IMFMediaType *pMediaType);
        END_INTERFACE
    } IMFVideoSampleAllocatorExVtbl;
    interface IMFVideoSampleAllocatorEx
    {
        CONST_VTBL struct IMFVideoSampleAllocatorExVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetDirectXManager(This,pManager) )
    ( (This)->lpVtbl -> UninitializeSampleAllocator(This) )
    ( (This)->lpVtbl -> InitializeSampleAllocator(This,cRequestedFrames,pMediaType) )
    ( (This)->lpVtbl -> AllocateSample(This,ppSample) )
    ( (This)->lpVtbl -> InitializeSampleAllocatorEx(This,cInitialSamples,cMaximumSamples,pAttributes,pMediaType) )
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0013_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0013_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFDXGIDeviceManagerSource;
    typedef struct IMFDXGIDeviceManagerSourceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMFDXGIDeviceManagerSource * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMFDXGIDeviceManagerSource * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMFDXGIDeviceManagerSource * This);
        HRESULT ( STDMETHODCALLTYPE *GetManager )(
            __RPC__in IMFDXGIDeviceManagerSource * This,
                        __RPC__deref_out_opt IMFDXGIDeviceManager **ppManager);
        END_INTERFACE
    } IMFDXGIDeviceManagerSourceVtbl;
    interface IMFDXGIDeviceManagerSource
    {
        CONST_VTBL struct IMFDXGIDeviceManagerSourceVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetManager(This,ppManager) )
typedef
enum _MF_VIDEO_PROCESSOR_ROTATION
    {
        ROTATION_NONE = 0,
        ROTATION_NORMAL = 1
    } MF_VIDEO_PROCESSOR_ROTATION;
typedef
enum _MF_VIDEO_PROCESSOR_MIRROR
    {
        MIRROR_NONE = 0,
        MIRROR_HORIZONTAL = 1,
        MIRROR_VERTICAL = 2
    } MF_VIDEO_PROCESSOR_MIRROR;
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0014_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0014_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFVideoProcessorControl;
    typedef struct IMFVideoProcessorControlVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFVideoProcessorControl * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFVideoProcessorControl * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFVideoProcessorControl * This);
        HRESULT ( STDMETHODCALLTYPE *SetBorderColor )(
            IMFVideoProcessorControl * This,
            _In_opt_ MFARGB *pBorderColor);
        HRESULT ( STDMETHODCALLTYPE *SetSourceRectangle )(
            IMFVideoProcessorControl * This,
            _In_opt_ RECT *pSrcRect);
        HRESULT ( STDMETHODCALLTYPE *SetDestinationRectangle )(
            IMFVideoProcessorControl * This,
            _In_opt_ RECT *pDstRect);
        HRESULT ( STDMETHODCALLTYPE *SetMirror )(
            IMFVideoProcessorControl * This,
            _In_ MF_VIDEO_PROCESSOR_MIRROR eMirror);
        HRESULT ( STDMETHODCALLTYPE *SetRotation )(
            IMFVideoProcessorControl * This,
            _In_ MF_VIDEO_PROCESSOR_ROTATION eRotation);
        HRESULT ( STDMETHODCALLTYPE *SetConstrictionSize )(
            IMFVideoProcessorControl * This,
            _In_opt_ SIZE *pConstrictionSize);
        END_INTERFACE
    } IMFVideoProcessorControlVtbl;
    interface IMFVideoProcessorControl
    {
        CONST_VTBL struct IMFVideoProcessorControlVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetBorderColor(This,pBorderColor) )
    ( (This)->lpVtbl -> SetSourceRectangle(This,pSrcRect) )
    ( (This)->lpVtbl -> SetDestinationRectangle(This,pDstRect) )
    ( (This)->lpVtbl -> SetMirror(This,eMirror) )
    ( (This)->lpVtbl -> SetRotation(This,eRotation) )
    ( (This)->lpVtbl -> SetConstrictionSize(This,pConstrictionSize) )
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0015_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0015_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFVideoProcessorControl2;
    typedef struct IMFVideoProcessorControl2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFVideoProcessorControl2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFVideoProcessorControl2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFVideoProcessorControl2 * This);
        HRESULT ( STDMETHODCALLTYPE *SetBorderColor )(
            IMFVideoProcessorControl2 * This,
            _In_opt_ MFARGB *pBorderColor);
        HRESULT ( STDMETHODCALLTYPE *SetSourceRectangle )(
            IMFVideoProcessorControl2 * This,
            _In_opt_ RECT *pSrcRect);
        HRESULT ( STDMETHODCALLTYPE *SetDestinationRectangle )(
            IMFVideoProcessorControl2 * This,
            _In_opt_ RECT *pDstRect);
        HRESULT ( STDMETHODCALLTYPE *SetMirror )(
            IMFVideoProcessorControl2 * This,
            _In_ MF_VIDEO_PROCESSOR_MIRROR eMirror);
        HRESULT ( STDMETHODCALLTYPE *SetRotation )(
            IMFVideoProcessorControl2 * This,
            _In_ MF_VIDEO_PROCESSOR_ROTATION eRotation);
        HRESULT ( STDMETHODCALLTYPE *SetConstrictionSize )(
            IMFVideoProcessorControl2 * This,
            _In_opt_ SIZE *pConstrictionSize);
        HRESULT ( STDMETHODCALLTYPE *SetRotationOverride )(
            IMFVideoProcessorControl2 * This,
            _In_ UINT uiRotation);
        HRESULT ( STDMETHODCALLTYPE *EnableHardwareEffects )(
            IMFVideoProcessorControl2 * This,
            _In_ BOOL fEnabled);
        HRESULT ( STDMETHODCALLTYPE *GetSupportedHardwareEffects )(
            IMFVideoProcessorControl2 * This,
            _Out_ UINT *puiSupport);
        END_INTERFACE
    } IMFVideoProcessorControl2Vtbl;
    interface IMFVideoProcessorControl2
    {
        CONST_VTBL struct IMFVideoProcessorControl2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetBorderColor(This,pBorderColor) )
    ( (This)->lpVtbl -> SetSourceRectangle(This,pSrcRect) )
    ( (This)->lpVtbl -> SetDestinationRectangle(This,pDstRect) )
    ( (This)->lpVtbl -> SetMirror(This,eMirror) )
    ( (This)->lpVtbl -> SetRotation(This,eRotation) )
    ( (This)->lpVtbl -> SetConstrictionSize(This,pConstrictionSize) )
    ( (This)->lpVtbl -> SetRotationOverride(This,uiRotation) )
    ( (This)->lpVtbl -> EnableHardwareEffects(This,fEnabled) )
    ( (This)->lpVtbl -> GetSupportedHardwareEffects(This,puiSupport) )
typedef
enum _MFVideoSphericalFormat
    {
        MFVideoSphericalFormat_Unsupported = 0,
        MFVideoSphericalFormat_Equirectangular = 1,
        MFVideoSphericalFormat_CubeMap = 2,
        MFVideoSphericalFormat_3DMesh = 3
    } MFVideoSphericalFormat;
EXTERN_GUID( MF_XVP_SAMPLE_LOCK_TIMEOUT, 0xaa4ddb29, 0x5134, 0x4363, 0xac, 0x72, 0x83, 0xec, 0x4b, 0xc1, 0x4, 0x26);
typedef
enum MFVideoSphericalProjectionMode
    {
        MFVideoSphericalProjectionMode_Spherical = 0,
        MFVideoSphericalProjectionMode_Flat = ( MFVideoSphericalProjectionMode_Spherical + 1 )
    } MFVideoSphericalProjectionMode;
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0016_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0016_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFVideoProcessorControl3;
    typedef struct IMFVideoProcessorControl3Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFVideoProcessorControl3 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFVideoProcessorControl3 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFVideoProcessorControl3 * This);
        HRESULT ( STDMETHODCALLTYPE *SetBorderColor )(
            IMFVideoProcessorControl3 * This,
            _In_opt_ MFARGB *pBorderColor);
        HRESULT ( STDMETHODCALLTYPE *SetSourceRectangle )(
            IMFVideoProcessorControl3 * This,
            _In_opt_ RECT *pSrcRect);
        HRESULT ( STDMETHODCALLTYPE *SetDestinationRectangle )(
            IMFVideoProcessorControl3 * This,
            _In_opt_ RECT *pDstRect);
        HRESULT ( STDMETHODCALLTYPE *SetMirror )(
            IMFVideoProcessorControl3 * This,
            _In_ MF_VIDEO_PROCESSOR_MIRROR eMirror);
        HRESULT ( STDMETHODCALLTYPE *SetRotation )(
            IMFVideoProcessorControl3 * This,
            _In_ MF_VIDEO_PROCESSOR_ROTATION eRotation);
        HRESULT ( STDMETHODCALLTYPE *SetConstrictionSize )(
            IMFVideoProcessorControl3 * This,
            _In_opt_ SIZE *pConstrictionSize);
        HRESULT ( STDMETHODCALLTYPE *SetRotationOverride )(
            IMFVideoProcessorControl3 * This,
            _In_ UINT uiRotation);
        HRESULT ( STDMETHODCALLTYPE *EnableHardwareEffects )(
            IMFVideoProcessorControl3 * This,
            _In_ BOOL fEnabled);
        HRESULT ( STDMETHODCALLTYPE *GetSupportedHardwareEffects )(
            IMFVideoProcessorControl3 * This,
            _Out_ UINT *puiSupport);
        HRESULT ( STDMETHODCALLTYPE *GetNaturalOutputType )(
            IMFVideoProcessorControl3 * This,
            _Outptr_ IMFMediaType **ppType);
        HRESULT ( STDMETHODCALLTYPE *EnableSphericalVideoProcessing )(
            IMFVideoProcessorControl3 * This,
            _In_ BOOL fEnable,
            _In_ MFVideoSphericalFormat eFormat,
            _In_ MFVideoSphericalProjectionMode eProjectionMode);
        HRESULT ( STDMETHODCALLTYPE *SetSphericalVideoProperties )(
            IMFVideoProcessorControl3 * This,
            _In_ float X,
            _In_ float Y,
            _In_ float Z,
            _In_ float W,
            _In_ float fieldOfView);
        HRESULT ( STDMETHODCALLTYPE *SetOutputDevice )(
            IMFVideoProcessorControl3 * This,
            _In_ IUnknown *pOutputDevice);
        END_INTERFACE
    } IMFVideoProcessorControl3Vtbl;
    interface IMFVideoProcessorControl3
    {
        CONST_VTBL struct IMFVideoProcessorControl3Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetBorderColor(This,pBorderColor) )
    ( (This)->lpVtbl -> SetSourceRectangle(This,pSrcRect) )
    ( (This)->lpVtbl -> SetDestinationRectangle(This,pDstRect) )
    ( (This)->lpVtbl -> SetMirror(This,eMirror) )
    ( (This)->lpVtbl -> SetRotation(This,eRotation) )
    ( (This)->lpVtbl -> SetConstrictionSize(This,pConstrictionSize) )
    ( (This)->lpVtbl -> SetRotationOverride(This,uiRotation) )
    ( (This)->lpVtbl -> EnableHardwareEffects(This,fEnabled) )
    ( (This)->lpVtbl -> GetSupportedHardwareEffects(This,puiSupport) )
    ( (This)->lpVtbl -> GetNaturalOutputType(This,ppType) )
    ( (This)->lpVtbl -> EnableSphericalVideoProcessing(This,fEnable,eFormat,eProjectionMode) )
    ( (This)->lpVtbl -> SetSphericalVideoProperties(This,X,Y,Z,W,fieldOfView) )
    ( (This)->lpVtbl -> SetOutputDevice(This,pOutputDevice) )
#pragma endregion
#endif
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0017_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0017_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFTopology;
    typedef struct IMFTopologyVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMFTopology * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMFTopology * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMFTopology * This);
        HRESULT ( STDMETHODCALLTYPE *GetItem )(
            __RPC__in IMFTopology * This,
            __RPC__in REFGUID guidKey,
                                  __RPC__inout_opt PROPVARIANT *pValue);
        HRESULT ( STDMETHODCALLTYPE *GetItemType )(
            __RPC__in IMFTopology * This,
            __RPC__in REFGUID guidKey,
                        __RPC__out MF_ATTRIBUTE_TYPE *pType);
        HRESULT ( STDMETHODCALLTYPE *CompareItem )(
            __RPC__in IMFTopology * This,
            __RPC__in REFGUID guidKey,
            __RPC__in REFPROPVARIANT Value,
                        __RPC__out BOOL *pbResult);
        HRESULT ( STDMETHODCALLTYPE *Compare )(
            __RPC__in IMFTopology * This,
            __RPC__in_opt IMFAttributes *pTheirs,
            MF_ATTRIBUTES_MATCH_TYPE MatchType,
                        __RPC__out BOOL *pbResult);
        HRESULT ( STDMETHODCALLTYPE *GetUINT32 )(
            __RPC__in IMFTopology * This,
            __RPC__in REFGUID guidKey,
                        __RPC__out UINT32 *punValue);
        HRESULT ( STDMETHODCALLTYPE *GetUINT64 )(
            __RPC__in IMFTopology * This,
            __RPC__in REFGUID guidKey,
                        __RPC__out UINT64 *punValue);
        HRESULT ( STDMETHODCALLTYPE *GetDouble )(
            __RPC__in IMFTopology * This,
            __RPC__in REFGUID guidKey,
                        __RPC__out double *pfValue);
        HRESULT ( STDMETHODCALLTYPE *GetGUID )(
            __RPC__in IMFTopology * This,
            __RPC__in REFGUID guidKey,
                        __RPC__out GUID *pguidValue);
        HRESULT ( STDMETHODCALLTYPE *GetStringLength )(
            __RPC__in IMFTopology * This,
            __RPC__in REFGUID guidKey,
                        __RPC__out UINT32 *pcchLength);
        HRESULT ( STDMETHODCALLTYPE *GetString )(
            __RPC__in IMFTopology * This,
            __RPC__in REFGUID guidKey,
                                 __RPC__out_ecount_full(cchBufSize) LPWSTR pwszValue,
            UINT32 cchBufSize,
                                  __RPC__inout_opt UINT32 *pcchLength);
        HRESULT ( STDMETHODCALLTYPE *GetAllocatedString )(
            __RPC__in IMFTopology * This,
            __RPC__in REFGUID guidKey,
                                          __RPC__deref_out_ecount_full_opt(( *pcchLength + 1 ) ) LPWSTR *ppwszValue,
                        __RPC__out UINT32 *pcchLength);
        HRESULT ( STDMETHODCALLTYPE *GetBlobSize )(
            __RPC__in IMFTopology * This,
            __RPC__in REFGUID guidKey,
                        __RPC__out UINT32 *pcbBlobSize);
        HRESULT ( STDMETHODCALLTYPE *GetBlob )(
            __RPC__in IMFTopology * This,
            __RPC__in REFGUID guidKey,
                                 __RPC__out_ecount_full(cbBufSize) UINT8 *pBuf,
            UINT32 cbBufSize,
                                  __RPC__inout_opt UINT32 *pcbBlobSize);
        HRESULT ( STDMETHODCALLTYPE *GetAllocatedBlob )(
            __RPC__in IMFTopology * This,
            __RPC__in REFGUID guidKey,
                                          __RPC__deref_out_ecount_full_opt(*pcbSize) UINT8 **ppBuf,
                        __RPC__out UINT32 *pcbSize);
        HRESULT ( STDMETHODCALLTYPE *GetUnknown )(
            __RPC__in IMFTopology * This,
            __RPC__in REFGUID guidKey,
            __RPC__in REFIID riid,
                                __RPC__deref_out_opt LPVOID *ppv);
        HRESULT ( STDMETHODCALLTYPE *SetItem )(
            __RPC__in IMFTopology * This,
            __RPC__in REFGUID guidKey,
            __RPC__in REFPROPVARIANT Value);
        HRESULT ( STDMETHODCALLTYPE *DeleteItem )(
            __RPC__in IMFTopology * This,
            __RPC__in REFGUID guidKey);
        HRESULT ( STDMETHODCALLTYPE *DeleteAllItems )(
            __RPC__in IMFTopology * This);
        HRESULT ( STDMETHODCALLTYPE *SetUINT32 )(
            __RPC__in IMFTopology * This,
            __RPC__in REFGUID guidKey,
            UINT32 unValue);
        HRESULT ( STDMETHODCALLTYPE *SetUINT64 )(
            __RPC__in IMFTopology * This,
            __RPC__in REFGUID guidKey,
            UINT64 unValue);
        HRESULT ( STDMETHODCALLTYPE *SetDouble )(
            __RPC__in IMFTopology * This,
            __RPC__in REFGUID guidKey,
            double fValue);
        HRESULT ( STDMETHODCALLTYPE *SetGUID )(
            __RPC__in IMFTopology * This,
            __RPC__in REFGUID guidKey,
            __RPC__in REFGUID guidValue);
        HRESULT ( STDMETHODCALLTYPE *SetString )(
            __RPC__in IMFTopology * This,
            __RPC__in REFGUID guidKey,
                               __RPC__in_string LPCWSTR wszValue);
        HRESULT ( STDMETHODCALLTYPE *SetBlob )(
            __RPC__in IMFTopology * This,
            __RPC__in REFGUID guidKey,
                                __RPC__in_ecount_full(cbBufSize) const UINT8 *pBuf,
            UINT32 cbBufSize);
        HRESULT ( STDMETHODCALLTYPE *SetUnknown )(
            __RPC__in IMFTopology * This,
            __RPC__in REFGUID guidKey,
                       __RPC__in_opt IUnknown *pUnknown);
        HRESULT ( STDMETHODCALLTYPE *LockStore )(
            __RPC__in IMFTopology * This);
        HRESULT ( STDMETHODCALLTYPE *UnlockStore )(
            __RPC__in IMFTopology * This);
        HRESULT ( STDMETHODCALLTYPE *GetCount )(
            __RPC__in IMFTopology * This,
                        __RPC__out UINT32 *pcItems);
        HRESULT ( STDMETHODCALLTYPE *GetItemByIndex )(
            __RPC__in IMFTopology * This,
            UINT32 unIndex,
                        __RPC__out GUID *pguidKey,
                                  __RPC__inout_opt PROPVARIANT *pValue);
        HRESULT ( STDMETHODCALLTYPE *CopyAllItems )(
            __RPC__in IMFTopology * This,
                       __RPC__in_opt IMFAttributes *pDest);
        HRESULT ( STDMETHODCALLTYPE *GetTopologyID )(
            __RPC__in IMFTopology * This,
                        __RPC__out TOPOID *pID);
                      HRESULT ( STDMETHODCALLTYPE *AddNode )(
            IMFTopology * This,
                       IMFTopologyNode *pNode);
                      HRESULT ( STDMETHODCALLTYPE *RemoveNode )(
            IMFTopology * This,
                       IMFTopologyNode *pNode);
        HRESULT ( STDMETHODCALLTYPE *GetNodeCount )(
            __RPC__in IMFTopology * This,
                        __RPC__out WORD *pwNodes);
        HRESULT ( STDMETHODCALLTYPE *GetNode )(
            __RPC__in IMFTopology * This,
                       WORD wIndex,
                        __RPC__deref_out_opt IMFTopologyNode **ppNode);
                      HRESULT ( STDMETHODCALLTYPE *Clear )(
            IMFTopology * This);
        HRESULT ( STDMETHODCALLTYPE *CloneFrom )(
            __RPC__in IMFTopology * This,
                       __RPC__in_opt IMFTopology *pTopology);
        HRESULT ( STDMETHODCALLTYPE *GetNodeByID )(
            __RPC__in IMFTopology * This,
                       TOPOID qwTopoNodeID,
                        __RPC__deref_out_opt IMFTopologyNode **ppNode);
        HRESULT ( STDMETHODCALLTYPE *GetSourceNodeCollection )(
            __RPC__in IMFTopology * This,
                        __RPC__deref_out_opt IMFCollection **ppCollection);
        HRESULT ( STDMETHODCALLTYPE *GetOutputNodeCollection )(
            __RPC__in IMFTopology * This,
                        __RPC__deref_out_opt IMFCollection **ppCollection);
        END_INTERFACE
    } IMFTopologyVtbl;
    interface IMFTopology
    {
        CONST_VTBL struct IMFTopologyVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetItem(This,guidKey,pValue) )
    ( (This)->lpVtbl -> GetItemType(This,guidKey,pType) )
    ( (This)->lpVtbl -> CompareItem(This,guidKey,Value,pbResult) )
    ( (This)->lpVtbl -> Compare(This,pTheirs,MatchType,pbResult) )
    ( (This)->lpVtbl -> GetUINT32(This,guidKey,punValue) )
    ( (This)->lpVtbl -> GetUINT64(This,guidKey,punValue) )
    ( (This)->lpVtbl -> GetDouble(This,guidKey,pfValue) )
    ( (This)->lpVtbl -> GetGUID(This,guidKey,pguidValue) )
    ( (This)->lpVtbl -> GetStringLength(This,guidKey,pcchLength) )
    ( (This)->lpVtbl -> GetString(This,guidKey,pwszValue,cchBufSize,pcchLength) )
    ( (This)->lpVtbl -> GetAllocatedString(This,guidKey,ppwszValue,pcchLength) )
    ( (This)->lpVtbl -> GetBlobSize(This,guidKey,pcbBlobSize) )
    ( (This)->lpVtbl -> GetBlob(This,guidKey,pBuf,cbBufSize,pcbBlobSize) )
    ( (This)->lpVtbl -> GetAllocatedBlob(This,guidKey,ppBuf,pcbSize) )
    ( (This)->lpVtbl -> GetUnknown(This,guidKey,riid,ppv) )
    ( (This)->lpVtbl -> SetItem(This,guidKey,Value) )
    ( (This)->lpVtbl -> DeleteItem(This,guidKey) )
    ( (This)->lpVtbl -> DeleteAllItems(This) )
    ( (This)->lpVtbl -> SetUINT32(This,guidKey,unValue) )
    ( (This)->lpVtbl -> SetUINT64(This,guidKey,unValue) )
    ( (This)->lpVtbl -> SetDouble(This,guidKey,fValue) )
    ( (This)->lpVtbl -> SetGUID(This,guidKey,guidValue) )
    ( (This)->lpVtbl -> SetString(This,guidKey,wszValue) )
    ( (This)->lpVtbl -> SetBlob(This,guidKey,pBuf,cbBufSize) )
    ( (This)->lpVtbl -> SetUnknown(This,guidKey,pUnknown) )
    ( (This)->lpVtbl -> LockStore(This) )
    ( (This)->lpVtbl -> UnlockStore(This) )
    ( (This)->lpVtbl -> GetCount(This,pcItems) )
    ( (This)->lpVtbl -> GetItemByIndex(This,unIndex,pguidKey,pValue) )
    ( (This)->lpVtbl -> CopyAllItems(This,pDest) )
    ( (This)->lpVtbl -> GetTopologyID(This,pID) )
    ( (This)->lpVtbl -> AddNode(This,pNode) )
    ( (This)->lpVtbl -> RemoveNode(This,pNode) )
    ( (This)->lpVtbl -> GetNodeCount(This,pwNodes) )
    ( (This)->lpVtbl -> GetNode(This,wIndex,ppNode) )
    ( (This)->lpVtbl -> Clear(This) )
    ( (This)->lpVtbl -> CloneFrom(This,pTopology) )
    ( (This)->lpVtbl -> GetNodeByID(This,qwTopoNodeID,ppNode) )
    ( (This)->lpVtbl -> GetSourceNodeCollection(This,ppCollection) )
    ( (This)->lpVtbl -> GetOutputNodeCollection(This,ppCollection) )
#endif
#pragma endregion
EXTERN_GUID( MF_TOPOLOGY_PROJECTSTART, 0x7ed3f802, 0x86bb, 0x4b3f, 0xb7, 0xe4, 0x7c, 0xb4, 0x3a, 0xfd, 0x4b, 0x80);
EXTERN_GUID( MF_TOPOLOGY_PROJECTSTOP, 0x7ed3f803, 0x86bb, 0x4b3f, 0xb7, 0xe4, 0x7c, 0xb4, 0x3a, 0xfd, 0x4b, 0x80);
EXTERN_GUID( MF_TOPOLOGY_NO_MARKIN_MARKOUT, 0x7ed3f804, 0x86bb, 0x4b3f, 0xb7, 0xe4, 0x7c, 0xb4, 0x3a, 0xfd, 0x4b, 0x80);
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef
enum MFTOPOLOGY_DXVA_MODE
    {
        MFTOPOLOGY_DXVA_DEFAULT = 0,
        MFTOPOLOGY_DXVA_NONE = 1,
        MFTOPOLOGY_DXVA_FULL = 2
    } MFTOPOLOGY_DXVA_MODE;
#endif
#pragma endregion
EXTERN_GUID(MF_TOPOLOGY_DXVA_MODE, 0x1e8d34f6, 0xf5ab, 0x4e23, 0xbb, 0x88, 0x87, 0x4a, 0xa3, 0xa1, 0xa7, 0x4d);
EXTERN_GUID(MF_TOPOLOGY_ENABLE_XVP_FOR_PLAYBACK, 0x1967731f, 0xcd78, 0x42fc, 0xb0, 0x26, 0x9, 0x92, 0xa5, 0x6e, 0x56, 0x93);
EXTERN_GUID(MF_TOPOLOGY_STATIC_PLAYBACK_OPTIMIZATIONS, 0xb86cac42, 0x41a6, 0x4b79, 0x89, 0x7a, 0x1a, 0xb0, 0xe5, 0x2b, 0x4a, 0x1b);
EXTERN_GUID(MF_TOPOLOGY_PLAYBACK_MAX_DIMS, 0x5715cf19, 0x5768, 0x44aa, 0xad, 0x6e, 0x87, 0x21, 0xf1, 0xb0, 0xf9, 0xbb);
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef
enum MFTOPOLOGY_HARDWARE_MODE
    {
        MFTOPOLOGY_HWMODE_SOFTWARE_ONLY = 0,
        MFTOPOLOGY_HWMODE_USE_HARDWARE = 1,
        MFTOPOLOGY_HWMODE_USE_ONLY_HARDWARE = 2
    } MFTOPOLOGY_HARDWARE_MODE;
EXTERN_GUID(MF_TOPOLOGY_HARDWARE_MODE, 0xd2d362fd, 0x4e4f, 0x4191, 0xa5, 0x79, 0xc6, 0x18, 0xb6, 0x67, 0x6, 0xaf);
EXTERN_GUID(MF_TOPOLOGY_PLAYBACK_FRAMERATE, 0xc164737a, 0xc2b1, 0x4553, 0x83, 0xbb, 0x5a, 0x52, 0x60, 0x72, 0x44, 0x8f);
EXTERN_GUID(MF_TOPOLOGY_DYNAMIC_CHANGE_NOT_ALLOWED, 0xd529950b, 0xd484, 0x4527, 0xa9, 0xcd, 0xb1, 0x90, 0x95, 0x32, 0xb5, 0xb0);
EXTERN_GUID(MF_TOPOLOGY_ENUMERATE_SOURCE_TYPES, 0x6248c36d, 0x5d0b, 0x4f40, 0xa0, 0xbb, 0xb0, 0xb3, 0x05, 0xf7, 0x76, 0x98);
EXTERN_GUID( MF_TOPOLOGY_START_TIME_ON_PRESENTATION_SWITCH, 0xc8cc113f, 0x7951, 0x4548, 0xaa, 0xd6, 0x9e, 0xd6, 0x20, 0x2e, 0x62, 0xb3);
#endif
#pragma endregion
EXTERN_GUID( MF_DISABLE_LOCALLY_REGISTERED_PLUGINS, 0x66b16da9, 0xadd4, 0x47e0, 0xa1, 0x6b, 0x5a, 0xf1, 0xfb, 0x48, 0x36, 0x34);
EXTERN_GUID( MF_LOCAL_PLUGIN_CONTROL_POLICY, 0xd91b0085, 0xc86d, 0x4f81, 0x88, 0x22, 0x8c, 0x68, 0xe1, 0xd7, 0xfa, 0x04);
#pragma region PC Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_PC_APP)
STDAPI MFCreateTopology(
    _Outptr_ IMFTopology ** ppTopo );
typedef
enum MF_TOPOLOGY_TYPE
    {
        MF_TOPOLOGY_OUTPUT_NODE = 0,
        MF_TOPOLOGY_SOURCESTREAM_NODE = ( MF_TOPOLOGY_OUTPUT_NODE + 1 ) ,
        MF_TOPOLOGY_TRANSFORM_NODE = ( MF_TOPOLOGY_SOURCESTREAM_NODE + 1 ) ,
        MF_TOPOLOGY_TEE_NODE = ( MF_TOPOLOGY_TRANSFORM_NODE + 1 ) ,
        MF_TOPOLOGY_MAX = 0xffffffff
    } MF_TOPOLOGY_TYPE;
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0018_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0018_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFTopologyNode;
    typedef struct IMFTopologyNodeVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMFTopologyNode * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMFTopologyNode * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMFTopologyNode * This);
        HRESULT ( STDMETHODCALLTYPE *GetItem )(
            __RPC__in IMFTopologyNode * This,
            __RPC__in REFGUID guidKey,
                                  __RPC__inout_opt PROPVARIANT *pValue);
        HRESULT ( STDMETHODCALLTYPE *GetItemType )(
            __RPC__in IMFTopologyNode * This,
            __RPC__in REFGUID guidKey,
                        __RPC__out MF_ATTRIBUTE_TYPE *pType);
        HRESULT ( STDMETHODCALLTYPE *CompareItem )(
            __RPC__in IMFTopologyNode * This,
            __RPC__in REFGUID guidKey,
            __RPC__in REFPROPVARIANT Value,
                        __RPC__out BOOL *pbResult);
        HRESULT ( STDMETHODCALLTYPE *Compare )(
            __RPC__in IMFTopologyNode * This,
            __RPC__in_opt IMFAttributes *pTheirs,
            MF_ATTRIBUTES_MATCH_TYPE MatchType,
                        __RPC__out BOOL *pbResult);
        HRESULT ( STDMETHODCALLTYPE *GetUINT32 )(
            __RPC__in IMFTopologyNode * This,
            __RPC__in REFGUID guidKey,
                        __RPC__out UINT32 *punValue);
        HRESULT ( STDMETHODCALLTYPE *GetUINT64 )(
            __RPC__in IMFTopologyNode * This,
            __RPC__in REFGUID guidKey,
                        __RPC__out UINT64 *punValue);
        HRESULT ( STDMETHODCALLTYPE *GetDouble )(
            __RPC__in IMFTopologyNode * This,
            __RPC__in REFGUID guidKey,
                        __RPC__out double *pfValue);
        HRESULT ( STDMETHODCALLTYPE *GetGUID )(
            __RPC__in IMFTopologyNode * This,
            __RPC__in REFGUID guidKey,
                        __RPC__out GUID *pguidValue);
        HRESULT ( STDMETHODCALLTYPE *GetStringLength )(
            __RPC__in IMFTopologyNode * This,
            __RPC__in REFGUID guidKey,
                        __RPC__out UINT32 *pcchLength);
        HRESULT ( STDMETHODCALLTYPE *GetString )(
            __RPC__in IMFTopologyNode * This,
            __RPC__in REFGUID guidKey,
                                 __RPC__out_ecount_full(cchBufSize) LPWSTR pwszValue,
            UINT32 cchBufSize,
                                  __RPC__inout_opt UINT32 *pcchLength);
        HRESULT ( STDMETHODCALLTYPE *GetAllocatedString )(
            __RPC__in IMFTopologyNode * This,
            __RPC__in REFGUID guidKey,
                                          __RPC__deref_out_ecount_full_opt(( *pcchLength + 1 ) ) LPWSTR *ppwszValue,
                        __RPC__out UINT32 *pcchLength);
        HRESULT ( STDMETHODCALLTYPE *GetBlobSize )(
            __RPC__in IMFTopologyNode * This,
            __RPC__in REFGUID guidKey,
                        __RPC__out UINT32 *pcbBlobSize);
        HRESULT ( STDMETHODCALLTYPE *GetBlob )(
            __RPC__in IMFTopologyNode * This,
            __RPC__in REFGUID guidKey,
                                 __RPC__out_ecount_full(cbBufSize) UINT8 *pBuf,
            UINT32 cbBufSize,
                                  __RPC__inout_opt UINT32 *pcbBlobSize);
        HRESULT ( STDMETHODCALLTYPE *GetAllocatedBlob )(
            __RPC__in IMFTopologyNode * This,
            __RPC__in REFGUID guidKey,
                                          __RPC__deref_out_ecount_full_opt(*pcbSize) UINT8 **ppBuf,
                        __RPC__out UINT32 *pcbSize);
        HRESULT ( STDMETHODCALLTYPE *GetUnknown )(
            __RPC__in IMFTopologyNode * This,
            __RPC__in REFGUID guidKey,
            __RPC__in REFIID riid,
                                __RPC__deref_out_opt LPVOID *ppv);
        HRESULT ( STDMETHODCALLTYPE *SetItem )(
            __RPC__in IMFTopologyNode * This,
            __RPC__in REFGUID guidKey,
            __RPC__in REFPROPVARIANT Value);
        HRESULT ( STDMETHODCALLTYPE *DeleteItem )(
            __RPC__in IMFTopologyNode * This,
            __RPC__in REFGUID guidKey);
        HRESULT ( STDMETHODCALLTYPE *DeleteAllItems )(
            __RPC__in IMFTopologyNode * This);
        HRESULT ( STDMETHODCALLTYPE *SetUINT32 )(
            __RPC__in IMFTopologyNode * This,
            __RPC__in REFGUID guidKey,
            UINT32 unValue);
        HRESULT ( STDMETHODCALLTYPE *SetUINT64 )(
            __RPC__in IMFTopologyNode * This,
            __RPC__in REFGUID guidKey,
            UINT64 unValue);
        HRESULT ( STDMETHODCALLTYPE *SetDouble )(
            __RPC__in IMFTopologyNode * This,
            __RPC__in REFGUID guidKey,
            double fValue);
        HRESULT ( STDMETHODCALLTYPE *SetGUID )(
            __RPC__in IMFTopologyNode * This,
            __RPC__in REFGUID guidKey,
            __RPC__in REFGUID guidValue);
        HRESULT ( STDMETHODCALLTYPE *SetString )(
            __RPC__in IMFTopologyNode * This,
            __RPC__in REFGUID guidKey,
                               __RPC__in_string LPCWSTR wszValue);
        HRESULT ( STDMETHODCALLTYPE *SetBlob )(
            __RPC__in IMFTopologyNode * This,
            __RPC__in REFGUID guidKey,
                                __RPC__in_ecount_full(cbBufSize) const UINT8 *pBuf,
            UINT32 cbBufSize);
        HRESULT ( STDMETHODCALLTYPE *SetUnknown )(
            __RPC__in IMFTopologyNode * This,
            __RPC__in REFGUID guidKey,
                       __RPC__in_opt IUnknown *pUnknown);
        HRESULT ( STDMETHODCALLTYPE *LockStore )(
            __RPC__in IMFTopologyNode * This);
        HRESULT ( STDMETHODCALLTYPE *UnlockStore )(
            __RPC__in IMFTopologyNode * This);
        HRESULT ( STDMETHODCALLTYPE *GetCount )(
            __RPC__in IMFTopologyNode * This,
                        __RPC__out UINT32 *pcItems);
        HRESULT ( STDMETHODCALLTYPE *GetItemByIndex )(
            __RPC__in IMFTopologyNode * This,
            UINT32 unIndex,
                        __RPC__out GUID *pguidKey,
                                  __RPC__inout_opt PROPVARIANT *pValue);
        HRESULT ( STDMETHODCALLTYPE *CopyAllItems )(
            __RPC__in IMFTopologyNode * This,
                       __RPC__in_opt IMFAttributes *pDest);
        HRESULT ( STDMETHODCALLTYPE *SetObject )(
            __RPC__in IMFTopologyNode * This,
                       __RPC__in_opt IUnknown *pObject);
        HRESULT ( STDMETHODCALLTYPE *GetObject )(
            __RPC__in IMFTopologyNode * This,
                        __RPC__deref_out_opt IUnknown **ppObject);
        HRESULT ( STDMETHODCALLTYPE *GetNodeType )(
            __RPC__in IMFTopologyNode * This,
                        __RPC__out MF_TOPOLOGY_TYPE *pType);
        HRESULT ( STDMETHODCALLTYPE *GetTopoNodeID )(
            __RPC__in IMFTopologyNode * This,
                        __RPC__out TOPOID *pID);
        HRESULT ( STDMETHODCALLTYPE *SetTopoNodeID )(
            __RPC__in IMFTopologyNode * This,
                       TOPOID ullTopoID);
        HRESULT ( STDMETHODCALLTYPE *GetInputCount )(
            __RPC__in IMFTopologyNode * This,
                        __RPC__out DWORD *pcInputs);
        HRESULT ( STDMETHODCALLTYPE *GetOutputCount )(
            __RPC__in IMFTopologyNode * This,
                        __RPC__out DWORD *pcOutputs);
                      HRESULT ( STDMETHODCALLTYPE *ConnectOutput )(
            IMFTopologyNode * This,
                       DWORD dwOutputIndex,
                       IMFTopologyNode *pDownstreamNode,
                       DWORD dwInputIndexOnDownstreamNode);
                      HRESULT ( STDMETHODCALLTYPE *DisconnectOutput )(
            IMFTopologyNode * This,
                       DWORD dwOutputIndex);
        HRESULT ( STDMETHODCALLTYPE *GetInput )(
            __RPC__in IMFTopologyNode * This,
                       DWORD dwInputIndex,
                        __RPC__deref_out_opt IMFTopologyNode **ppUpstreamNode,
                        __RPC__out DWORD *pdwOutputIndexOnUpstreamNode);
        HRESULT ( STDMETHODCALLTYPE *GetOutput )(
            __RPC__in IMFTopologyNode * This,
                       DWORD dwOutputIndex,
                        __RPC__deref_out_opt IMFTopologyNode **ppDownstreamNode,
                        __RPC__out DWORD *pdwInputIndexOnDownstreamNode);
                      HRESULT ( STDMETHODCALLTYPE *SetOutputPrefType )(
            IMFTopologyNode * This,
                       DWORD dwOutputIndex,
                       IMFMediaType *pType);
                      HRESULT ( STDMETHODCALLTYPE *GetOutputPrefType )(
            IMFTopologyNode * This,
                       DWORD dwOutputIndex,
            _Outptr_ IMFMediaType **ppType);
                      HRESULT ( STDMETHODCALLTYPE *SetInputPrefType )(
            IMFTopologyNode * This,
                       DWORD dwInputIndex,
                       IMFMediaType *pType);
                      HRESULT ( STDMETHODCALLTYPE *GetInputPrefType )(
            IMFTopologyNode * This,
                       DWORD dwInputIndex,
            _Outptr_ IMFMediaType **ppType);
        HRESULT ( STDMETHODCALLTYPE *CloneFrom )(
            __RPC__in IMFTopologyNode * This,
                       __RPC__in_opt IMFTopologyNode *pNode);
        END_INTERFACE
    } IMFTopologyNodeVtbl;
    interface IMFTopologyNode
    {
        CONST_VTBL struct IMFTopologyNodeVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetItem(This,guidKey,pValue) )
    ( (This)->lpVtbl -> GetItemType(This,guidKey,pType) )
    ( (This)->lpVtbl -> CompareItem(This,guidKey,Value,pbResult) )
    ( (This)->lpVtbl -> Compare(This,pTheirs,MatchType,pbResult) )
    ( (This)->lpVtbl -> GetUINT32(This,guidKey,punValue) )
    ( (This)->lpVtbl -> GetUINT64(This,guidKey,punValue) )
    ( (This)->lpVtbl -> GetDouble(This,guidKey,pfValue) )
    ( (This)->lpVtbl -> GetGUID(This,guidKey,pguidValue) )
    ( (This)->lpVtbl -> GetStringLength(This,guidKey,pcchLength) )
    ( (This)->lpVtbl -> GetString(This,guidKey,pwszValue,cchBufSize,pcchLength) )
    ( (This)->lpVtbl -> GetAllocatedString(This,guidKey,ppwszValue,pcchLength) )
    ( (This)->lpVtbl -> GetBlobSize(This,guidKey,pcbBlobSize) )
    ( (This)->lpVtbl -> GetBlob(This,guidKey,pBuf,cbBufSize,pcbBlobSize) )
    ( (This)->lpVtbl -> GetAllocatedBlob(This,guidKey,ppBuf,pcbSize) )
    ( (This)->lpVtbl -> GetUnknown(This,guidKey,riid,ppv) )
    ( (This)->lpVtbl -> SetItem(This,guidKey,Value) )
    ( (This)->lpVtbl -> DeleteItem(This,guidKey) )
    ( (This)->lpVtbl -> DeleteAllItems(This) )
    ( (This)->lpVtbl -> SetUINT32(This,guidKey,unValue) )
    ( (This)->lpVtbl -> SetUINT64(This,guidKey,unValue) )
    ( (This)->lpVtbl -> SetDouble(This,guidKey,fValue) )
    ( (This)->lpVtbl -> SetGUID(This,guidKey,guidValue) )
    ( (This)->lpVtbl -> SetString(This,guidKey,wszValue) )
    ( (This)->lpVtbl -> SetBlob(This,guidKey,pBuf,cbBufSize) )
    ( (This)->lpVtbl -> SetUnknown(This,guidKey,pUnknown) )
    ( (This)->lpVtbl -> LockStore(This) )
    ( (This)->lpVtbl -> UnlockStore(This) )
    ( (This)->lpVtbl -> GetCount(This,pcItems) )
    ( (This)->lpVtbl -> GetItemByIndex(This,unIndex,pguidKey,pValue) )
    ( (This)->lpVtbl -> CopyAllItems(This,pDest) )
    ( (This)->lpVtbl -> SetObject(This,pObject) )
    ( (This)->lpVtbl -> GetObject(This,ppObject) )
    ( (This)->lpVtbl -> GetNodeType(This,pType) )
    ( (This)->lpVtbl -> GetTopoNodeID(This,pID) )
    ( (This)->lpVtbl -> SetTopoNodeID(This,ullTopoID) )
    ( (This)->lpVtbl -> GetInputCount(This,pcInputs) )
    ( (This)->lpVtbl -> GetOutputCount(This,pcOutputs) )
    ( (This)->lpVtbl -> ConnectOutput(This,dwOutputIndex,pDownstreamNode,dwInputIndexOnDownstreamNode) )
    ( (This)->lpVtbl -> DisconnectOutput(This,dwOutputIndex) )
    ( (This)->lpVtbl -> GetInput(This,dwInputIndex,ppUpstreamNode,pdwOutputIndexOnUpstreamNode) )
    ( (This)->lpVtbl -> GetOutput(This,dwOutputIndex,ppDownstreamNode,pdwInputIndexOnDownstreamNode) )
    ( (This)->lpVtbl -> SetOutputPrefType(This,dwOutputIndex,pType) )
    ( (This)->lpVtbl -> GetOutputPrefType(This,dwOutputIndex,ppType) )
    ( (This)->lpVtbl -> SetInputPrefType(This,dwInputIndex,pType) )
    ( (This)->lpVtbl -> GetInputPrefType(This,dwInputIndex,ppType) )
    ( (This)->lpVtbl -> CloneFrom(This,pNode) )
                HRESULT STDMETHODCALLTYPE IMFTopologyNode_RemoteGetOutputPrefType_Proxy(
    __RPC__in IMFTopologyNode * This,
               DWORD dwOutputIndex,
                __RPC__out DWORD *pcbData,
                                  __RPC__deref_out_ecount_full_opt(*pcbData) BYTE **ppbData);
void __RPC_STUB IMFTopologyNode_RemoteGetOutputPrefType_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                HRESULT STDMETHODCALLTYPE IMFTopologyNode_RemoteGetInputPrefType_Proxy(
    __RPC__in IMFTopologyNode * This,
               DWORD dwInputIndex,
                __RPC__out DWORD *pcbData,
                                  __RPC__deref_out_ecount_full_opt(*pcbData) BYTE **ppbData);
void __RPC_STUB IMFTopologyNode_RemoteGetInputPrefType_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
typedef
enum _MF_TOPONODE_FLUSH_MODE
    {
        MF_TOPONODE_FLUSH_ALWAYS = 0,
        MF_TOPONODE_FLUSH_SEEK = ( MF_TOPONODE_FLUSH_ALWAYS + 1 ) ,
        MF_TOPONODE_FLUSH_NEVER = ( MF_TOPONODE_FLUSH_SEEK + 1 )
    } MF_TOPONODE_FLUSH_MODE;
EXTERN_GUID( MF_TOPONODE_FLUSH, 0x494bbce8, 0xb031, 0x4e38, 0x97, 0xc4, 0xd5, 0x42, 0x2d, 0xd6, 0x18, 0xdc);
typedef
enum _MF_TOPONODE_DRAIN_MODE
    {
        MF_TOPONODE_DRAIN_DEFAULT = 0,
        MF_TOPONODE_DRAIN_ALWAYS = ( MF_TOPONODE_DRAIN_DEFAULT + 1 ) ,
        MF_TOPONODE_DRAIN_NEVER = ( MF_TOPONODE_DRAIN_ALWAYS + 1 )
    } MF_TOPONODE_DRAIN_MODE;
EXTERN_GUID( MF_TOPONODE_DRAIN, 0x494bbce9, 0xb031, 0x4e38, 0x97, 0xc4, 0xd5, 0x42, 0x2d, 0xd6, 0x18, 0xdc);
EXTERN_GUID( MF_TOPONODE_D3DAWARE, 0x494bbced, 0xb031, 0x4e38, 0x97, 0xc4, 0xd5, 0x42, 0x2d, 0xd6, 0x18, 0xdc);
EXTERN_GUID( MF_TOPOLOGY_RESOLUTION_STATUS, 0x494bbcde, 0xb031, 0x4e38, 0x97, 0xc4, 0xd5, 0x42, 0x2d, 0xd6, 0x18, 0xdc);
EXTERN_GUID( MF_TOPONODE_ERRORCODE, 0x494bbcee, 0xb031, 0x4e38, 0x97, 0xc4, 0xd5, 0x42, 0x2d, 0xd6, 0x18, 0xdc);
EXTERN_GUID( MF_TOPONODE_CONNECT_METHOD, 0x494bbcf1, 0xb031, 0x4e38, 0x97, 0xc4, 0xd5, 0x42, 0x2d, 0xd6, 0x18, 0xdc);
EXTERN_GUID( MF_TOPONODE_LOCKED, 0x494bbcf7, 0xb031, 0x4e38, 0x97, 0xc4, 0xd5, 0x42, 0x2d, 0xd6, 0x18, 0xdc);
EXTERN_GUID( MF_TOPONODE_WORKQUEUE_ID, 0x494bbcf8, 0xb031, 0x4e38, 0x97, 0xc4, 0xd5, 0x42, 0x2d, 0xd6, 0x18, 0xdc);
EXTERN_GUID( MF_TOPONODE_WORKQUEUE_MMCSS_CLASS, 0x494bbcf9, 0xb031, 0x4e38, 0x97, 0xc4, 0xd5, 0x42, 0x2d, 0xd6, 0x18, 0xdc);
EXTERN_GUID( MF_TOPONODE_DECRYPTOR, 0x494bbcfa, 0xb031, 0x4e38, 0x97, 0xc4, 0xd5, 0x42, 0x2d, 0xd6, 0x18, 0xdc);
EXTERN_GUID( MF_TOPONODE_DISCARDABLE, 0x494bbcfb, 0xb031, 0x4e38, 0x97, 0xc4, 0xd5, 0x42, 0x2d, 0xd6, 0x18, 0xdc);
EXTERN_GUID( MF_TOPONODE_ERROR_MAJORTYPE, 0x494bbcfd, 0xb031, 0x4e38, 0x97, 0xc4, 0xd5, 0x42, 0x2d, 0xd6, 0x18, 0xdc);
EXTERN_GUID( MF_TOPONODE_ERROR_SUBTYPE, 0x494bbcfe, 0xb031, 0x4e38, 0x97, 0xc4, 0xd5, 0x42, 0x2d, 0xd6, 0x18, 0xdc);
EXTERN_GUID( MF_TOPONODE_WORKQUEUE_MMCSS_TASKID, 0x494bbcff, 0xb031, 0x4e38, 0x97, 0xc4, 0xd5, 0x42, 0x2d, 0xd6, 0x18, 0xdc);
EXTERN_GUID( MF_TOPONODE_WORKQUEUE_MMCSS_PRIORITY, 0x5001f840, 0x2816, 0x48f4, 0x93, 0x64, 0xad, 0x1e, 0xf6, 0x61, 0xa1, 0x23);
EXTERN_GUID( MF_TOPONODE_WORKQUEUE_ITEM_PRIORITY, 0xa1ff99be, 0x5e97, 0x4a53, 0xb4, 0x94, 0x56, 0x8c, 0x64, 0x2c, 0x0f, 0xf3);
EXTERN_GUID( MF_TOPONODE_MARKIN_HERE, 0x494bbd00, 0xb031, 0x4e38, 0x97, 0xc4, 0xd5, 0x42, 0x2d, 0xd6, 0x18, 0xdc);
EXTERN_GUID( MF_TOPONODE_MARKOUT_HERE, 0x494bbd01, 0xb031, 0x4e38, 0x97, 0xc4, 0xd5, 0x42, 0x2d, 0xd6, 0x18, 0xdc);
EXTERN_GUID( MF_TOPONODE_DECODER, 0x494bbd02, 0xb031, 0x4e38, 0x97, 0xc4, 0xd5, 0x42, 0x2d, 0xd6, 0x18, 0xdc);
EXTERN_GUID( MF_TOPONODE_MEDIASTART, 0x835c58ea, 0xe075, 0x4bc7, 0xbc, 0xba, 0x4d, 0xe0, 0x00, 0xdf, 0x9a, 0xe6);
EXTERN_GUID( MF_TOPONODE_MEDIASTOP, 0x835c58eb, 0xe075, 0x4bc7, 0xbc, 0xba, 0x4d, 0xe0, 0x00, 0xdf, 0x9a, 0xe6);
EXTERN_GUID( MF_TOPONODE_SOURCE, 0x835c58ec, 0xe075, 0x4bc7, 0xbc, 0xba, 0x4d, 0xe0, 0x00, 0xdf, 0x9a, 0xe6);
EXTERN_GUID( MF_TOPONODE_PRESENTATION_DESCRIPTOR, 0x835c58ed, 0xe075, 0x4bc7, 0xbc, 0xba, 0x4d, 0xe0, 0x00, 0xdf, 0x9a, 0xe6);
EXTERN_GUID( MF_TOPONODE_STREAM_DESCRIPTOR, 0x835c58ee, 0xe075, 0x4bc7, 0xbc, 0xba, 0x4d, 0xe0, 0x00, 0xdf, 0x9a, 0xe6);
EXTERN_GUID( MF_TOPONODE_SEQUENCE_ELEMENTID, 0x835c58ef, 0xe075, 0x4bc7, 0xbc, 0xba, 0x4d, 0xe0, 0x00, 0xdf, 0x9a, 0xe6);
EXTERN_GUID( MF_TOPONODE_TRANSFORM_OBJECTID, 0x88dcc0c9, 0x293e, 0x4e8b, 0x9a, 0xeb, 0xa, 0xd6, 0x4c, 0xc0, 0x16, 0xb0);
EXTERN_GUID( MF_TOPONODE_STREAMID, 0x14932f9b, 0x9087, 0x4bb4, 0x84, 0x12, 0x51, 0x67, 0x14, 0x5c, 0xbe, 0x04);
EXTERN_GUID( MF_TOPONODE_NOSHUTDOWN_ON_REMOVE, 0x14932f9c, 0x9087, 0x4bb4, 0x84, 0x12, 0x51, 0x67, 0x14, 0x5c, 0xbe, 0x04);
EXTERN_GUID( MF_TOPONODE_RATELESS, 0x14932f9d, 0x9087, 0x4bb4, 0x84, 0x12, 0x51, 0x67, 0x14, 0x5c, 0xbe, 0x04);
EXTERN_GUID( MF_TOPONODE_DISABLE_PREROLL, 0x14932f9e, 0x9087, 0x4bb4, 0x84, 0x12, 0x51, 0x67, 0x14, 0x5c, 0xbe, 0x04);
EXTERN_GUID( MF_TOPONODE_PRIMARYOUTPUT, 0x6304ef99, 0x16b2, 0x4ebe, 0x9d, 0x67, 0xe4, 0xc5, 0x39, 0xb3, 0xa2, 0x59);
#endif
#pragma endregion
#pragma region PC Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_PC_APP)
STDAPI MFCreateTopologyNode(
    MF_TOPOLOGY_TYPE NodeType,
    _Outptr_ IMFTopologyNode ** ppNode );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
STDAPI MFGetTopoNodeCurrentType(
    IMFTopologyNode* pNode,
    DWORD dwStreamIndex,
    BOOL fOutput,
    _Outptr_ IMFMediaType** ppType);
#endif
#pragma endregion
#pragma region Application or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_GAMES)
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0019_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0019_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFGetService;
    typedef struct IMFGetServiceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMFGetService * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMFGetService * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMFGetService * This);
        HRESULT ( STDMETHODCALLTYPE *GetService )(
            __RPC__in IMFGetService * This,
                       __RPC__in REFGUID guidService,
                       __RPC__in REFIID riid,
                                __RPC__deref_out_opt LPVOID *ppvObject);
        END_INTERFACE
    } IMFGetServiceVtbl;
    interface IMFGetService
    {
        CONST_VTBL struct IMFGetServiceVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetService(This,guidService,riid,ppvObject) )
STDAPI MFGetService(
    IUnknown* punkObject,
    REFGUID guidService,
    REFIID riid,
    _Outptr_ LPVOID* ppvObject
    );
typedef LONGLONG MFTIME;
typedef
enum _MFCLOCK_CHARACTERISTICS_FLAGS
    {
        MFCLOCK_CHARACTERISTICS_FLAG_FREQUENCY_10MHZ = 0x2,
        MFCLOCK_CHARACTERISTICS_FLAG_ALWAYS_RUNNING = 0x4,
        MFCLOCK_CHARACTERISTICS_FLAG_IS_SYSTEM_CLOCK = 0x8
    } MFCLOCK_CHARACTERISTICS_FLAGS;
typedef
enum _MFCLOCK_STATE
    {
        MFCLOCK_STATE_INVALID = 0,
        MFCLOCK_STATE_RUNNING = ( MFCLOCK_STATE_INVALID + 1 ) ,
        MFCLOCK_STATE_STOPPED = ( MFCLOCK_STATE_RUNNING + 1 ) ,
        MFCLOCK_STATE_PAUSED = ( MFCLOCK_STATE_STOPPED + 1 )
    } MFCLOCK_STATE;
typedef
enum _MFCLOCK_RELATIONAL_FLAGS
    {
        MFCLOCK_RELATIONAL_FLAG_JITTER_NEVER_AHEAD = 0x1
    } MFCLOCK_RELATIONAL_FLAGS;
typedef struct _MFCLOCK_PROPERTIES
    {
    unsigned __int64 qwCorrelationRate;
    GUID guidClockId;
    DWORD dwClockFlags;
    unsigned __int64 qwClockFrequency;
    DWORD dwClockTolerance;
    DWORD dwClockJitter;
    } MFCLOCK_PROPERTIES;
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0020_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0020_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFClock;
    typedef struct IMFClockVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMFClock * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMFClock * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMFClock * This);
        HRESULT ( STDMETHODCALLTYPE *GetClockCharacteristics )(
            __RPC__in IMFClock * This,
                        __RPC__out DWORD *pdwCharacteristics);
        HRESULT ( STDMETHODCALLTYPE *GetCorrelatedTime )(
            __RPC__in IMFClock * This,
                       DWORD dwReserved,
                        __RPC__out LONGLONG *pllClockTime,
                        __RPC__out MFTIME *phnsSystemTime);
        HRESULT ( STDMETHODCALLTYPE *GetContinuityKey )(
            __RPC__in IMFClock * This,
                        __RPC__out DWORD *pdwContinuityKey);
        HRESULT ( STDMETHODCALLTYPE *GetState )(
            __RPC__in IMFClock * This,
                       DWORD dwReserved,
                        __RPC__out MFCLOCK_STATE *peClockState);
        HRESULT ( STDMETHODCALLTYPE *GetProperties )(
            __RPC__in IMFClock * This,
                        __RPC__out MFCLOCK_PROPERTIES *pClockProperties);
        END_INTERFACE
    } IMFClockVtbl;
    interface IMFClock
    {
        CONST_VTBL struct IMFClockVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetClockCharacteristics(This,pdwCharacteristics) )
    ( (This)->lpVtbl -> GetCorrelatedTime(This,dwReserved,pllClockTime,phnsSystemTime) )
    ( (This)->lpVtbl -> GetContinuityKey(This,pdwContinuityKey) )
    ( (This)->lpVtbl -> GetState(This,dwReserved,peClockState) )
    ( (This)->lpVtbl -> GetProperties(This,pClockProperties) )
STDAPI_(MFTIME)
MFGetSystemTime(
    );
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0021_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0021_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFPresentationClock;
    typedef struct IMFPresentationClockVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMFPresentationClock * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMFPresentationClock * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMFPresentationClock * This);
        HRESULT ( STDMETHODCALLTYPE *GetClockCharacteristics )(
            __RPC__in IMFPresentationClock * This,
                        __RPC__out DWORD *pdwCharacteristics);
        HRESULT ( STDMETHODCALLTYPE *GetCorrelatedTime )(
            __RPC__in IMFPresentationClock * This,
                       DWORD dwReserved,
                        __RPC__out LONGLONG *pllClockTime,
                        __RPC__out MFTIME *phnsSystemTime);
        HRESULT ( STDMETHODCALLTYPE *GetContinuityKey )(
            __RPC__in IMFPresentationClock * This,
                        __RPC__out DWORD *pdwContinuityKey);
        HRESULT ( STDMETHODCALLTYPE *GetState )(
            __RPC__in IMFPresentationClock * This,
                       DWORD dwReserved,
                        __RPC__out MFCLOCK_STATE *peClockState);
        HRESULT ( STDMETHODCALLTYPE *GetProperties )(
            __RPC__in IMFPresentationClock * This,
                        __RPC__out MFCLOCK_PROPERTIES *pClockProperties);
        HRESULT ( STDMETHODCALLTYPE *SetTimeSource )(
            __RPC__in IMFPresentationClock * This,
                       __RPC__in_opt IMFPresentationTimeSource *pTimeSource);
        HRESULT ( STDMETHODCALLTYPE *GetTimeSource )(
            __RPC__in IMFPresentationClock * This,
                        __RPC__deref_out_opt IMFPresentationTimeSource **ppTimeSource);
        HRESULT ( STDMETHODCALLTYPE *GetTime )(
            __RPC__in IMFPresentationClock * This,
                        __RPC__out MFTIME *phnsClockTime);
        HRESULT ( STDMETHODCALLTYPE *AddClockStateSink )(
            __RPC__in IMFPresentationClock * This,
                       __RPC__in_opt IMFClockStateSink *pStateSink);
        HRESULT ( STDMETHODCALLTYPE *RemoveClockStateSink )(
            __RPC__in IMFPresentationClock * This,
                       __RPC__in_opt IMFClockStateSink *pStateSink);
        HRESULT ( STDMETHODCALLTYPE *Start )(
            __RPC__in IMFPresentationClock * This,
                       LONGLONG llClockStartOffset);
        HRESULT ( STDMETHODCALLTYPE *Stop )(
            __RPC__in IMFPresentationClock * This);
        HRESULT ( STDMETHODCALLTYPE *Pause )(
            __RPC__in IMFPresentationClock * This);
        END_INTERFACE
    } IMFPresentationClockVtbl;
    interface IMFPresentationClock
    {
        CONST_VTBL struct IMFPresentationClockVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetClockCharacteristics(This,pdwCharacteristics) )
    ( (This)->lpVtbl -> GetCorrelatedTime(This,dwReserved,pllClockTime,phnsSystemTime) )
    ( (This)->lpVtbl -> GetContinuityKey(This,pdwContinuityKey) )
    ( (This)->lpVtbl -> GetState(This,dwReserved,peClockState) )
    ( (This)->lpVtbl -> GetProperties(This,pClockProperties) )
    ( (This)->lpVtbl -> SetTimeSource(This,pTimeSource) )
    ( (This)->lpVtbl -> GetTimeSource(This,ppTimeSource) )
    ( (This)->lpVtbl -> GetTime(This,phnsClockTime) )
    ( (This)->lpVtbl -> AddClockStateSink(This,pStateSink) )
    ( (This)->lpVtbl -> RemoveClockStateSink(This,pStateSink) )
    ( (This)->lpVtbl -> Start(This,llClockStartOffset) )
    ( (This)->lpVtbl -> Stop(This) )
    ( (This)->lpVtbl -> Pause(This) )
#endif
#pragma endregion
#pragma region PC Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_PC_APP)
STDAPI MFCreatePresentationClock(
    _Outptr_ IMFPresentationClock** ppPresentationClock
    );
#endif
#pragma endregion
#pragma region Application or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_GAMES)
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0022_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0022_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFPresentationTimeSource;
    typedef struct IMFPresentationTimeSourceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMFPresentationTimeSource * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMFPresentationTimeSource * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMFPresentationTimeSource * This);
        HRESULT ( STDMETHODCALLTYPE *GetClockCharacteristics )(
            __RPC__in IMFPresentationTimeSource * This,
                        __RPC__out DWORD *pdwCharacteristics);
        HRESULT ( STDMETHODCALLTYPE *GetCorrelatedTime )(
            __RPC__in IMFPresentationTimeSource * This,
                       DWORD dwReserved,
                        __RPC__out LONGLONG *pllClockTime,
                        __RPC__out MFTIME *phnsSystemTime);
        HRESULT ( STDMETHODCALLTYPE *GetContinuityKey )(
            __RPC__in IMFPresentationTimeSource * This,
                        __RPC__out DWORD *pdwContinuityKey);
        HRESULT ( STDMETHODCALLTYPE *GetState )(
            __RPC__in IMFPresentationTimeSource * This,
                       DWORD dwReserved,
                        __RPC__out MFCLOCK_STATE *peClockState);
        HRESULT ( STDMETHODCALLTYPE *GetProperties )(
            __RPC__in IMFPresentationTimeSource * This,
                        __RPC__out MFCLOCK_PROPERTIES *pClockProperties);
        HRESULT ( STDMETHODCALLTYPE *GetUnderlyingClock )(
            __RPC__in IMFPresentationTimeSource * This,
                        __RPC__deref_out_opt IMFClock **ppClock);
        END_INTERFACE
    } IMFPresentationTimeSourceVtbl;
    interface IMFPresentationTimeSource
    {
        CONST_VTBL struct IMFPresentationTimeSourceVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetClockCharacteristics(This,pdwCharacteristics) )
    ( (This)->lpVtbl -> GetCorrelatedTime(This,dwReserved,pllClockTime,phnsSystemTime) )
    ( (This)->lpVtbl -> GetContinuityKey(This,pdwContinuityKey) )
    ( (This)->lpVtbl -> GetState(This,dwReserved,peClockState) )
    ( (This)->lpVtbl -> GetProperties(This,pClockProperties) )
    ( (This)->lpVtbl -> GetUnderlyingClock(This,ppClock) )
STDAPI
MFCreateSystemTimeSource(
    _Outptr_ IMFPresentationTimeSource** ppSystemTimeSource
    );
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0023_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0023_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFClockStateSink;
    typedef struct IMFClockStateSinkVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMFClockStateSink * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMFClockStateSink * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMFClockStateSink * This);
        HRESULT ( STDMETHODCALLTYPE *OnClockStart )(
            __RPC__in IMFClockStateSink * This,
                       MFTIME hnsSystemTime,
                       LONGLONG llClockStartOffset);
        HRESULT ( STDMETHODCALLTYPE *OnClockStop )(
            __RPC__in IMFClockStateSink * This,
                       MFTIME hnsSystemTime);
        HRESULT ( STDMETHODCALLTYPE *OnClockPause )(
            __RPC__in IMFClockStateSink * This,
                       MFTIME hnsSystemTime);
        HRESULT ( STDMETHODCALLTYPE *OnClockRestart )(
            __RPC__in IMFClockStateSink * This,
                       MFTIME hnsSystemTime);
        HRESULT ( STDMETHODCALLTYPE *OnClockSetRate )(
            __RPC__in IMFClockStateSink * This,
                       MFTIME hnsSystemTime,
                       float flRate);
        END_INTERFACE
    } IMFClockStateSinkVtbl;
    interface IMFClockStateSink
    {
        CONST_VTBL struct IMFClockStateSinkVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnClockStart(This,hnsSystemTime,llClockStartOffset) )
    ( (This)->lpVtbl -> OnClockStop(This,hnsSystemTime) )
    ( (This)->lpVtbl -> OnClockPause(This,hnsSystemTime) )
    ( (This)->lpVtbl -> OnClockRestart(This,hnsSystemTime) )
    ( (This)->lpVtbl -> OnClockSetRate(This,hnsSystemTime,flRate) )
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
EXTERN_GUID( MF_PD_PMPHOST_CONTEXT, 0x6c990d31, 0xbb8e, 0x477a, 0x85, 0x98, 0xd, 0x5d, 0x96, 0xfc, 0xd8, 0x8a );
EXTERN_GUID( MF_PD_APP_CONTEXT, 0x6c990d32, 0xbb8e, 0x477a, 0x85, 0x98, 0xd, 0x5d, 0x96, 0xfc, 0xd8, 0x8a );
#endif
#pragma endregion
#pragma region Application or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_GAMES)
EXTERN_GUID( MF_PD_DURATION, 0x6c990d33, 0xbb8e, 0x477a, 0x85, 0x98, 0xd, 0x5d, 0x96, 0xfc, 0xd8, 0x8a );
EXTERN_GUID( MF_PD_TOTAL_FILE_SIZE, 0x6c990d34, 0xbb8e, 0x477a, 0x85, 0x98, 0xd, 0x5d, 0x96, 0xfc, 0xd8, 0x8a );
EXTERN_GUID( MF_PD_AUDIO_ENCODING_BITRATE, 0x6c990d35, 0xbb8e, 0x477a, 0x85, 0x98, 0xd, 0x5d, 0x96, 0xfc, 0xd8, 0x8a );
EXTERN_GUID( MF_PD_VIDEO_ENCODING_BITRATE, 0x6c990d36, 0xbb8e, 0x477a, 0x85, 0x98, 0xd, 0x5d, 0x96, 0xfc, 0xd8, 0x8a );
EXTERN_GUID( MF_PD_MIME_TYPE, 0x6c990d37, 0xbb8e, 0x477a, 0x85, 0x98, 0xd, 0x5d, 0x96, 0xfc, 0xd8, 0x8a );
EXTERN_GUID(MF_PD_LAST_MODIFIED_TIME, 0x6c990d38, 0xbb8e, 0x477a, 0x85, 0x98, 0xd, 0x5d, 0x96, 0xfc, 0xd8, 0x8a );
EXTERN_GUID(MF_PD_PLAYBACK_ELEMENT_ID, 0x6c990d39, 0xbb8e, 0x477a, 0x85, 0x98, 0xd, 0x5d, 0x96, 0xfc, 0xd8, 0x8a );
EXTERN_GUID( MF_PD_PREFERRED_LANGUAGE, 0x6c990d3A, 0xbb8e, 0x477a, 0x85, 0x98, 0xd, 0x5d, 0x96, 0xfc, 0xd8, 0x8a );
EXTERN_GUID(MF_PD_PLAYBACK_BOUNDARY_TIME, 0x6c990d3b, 0xbb8e, 0x477a, 0x85, 0x98, 0xd, 0x5d, 0x96, 0xfc, 0xd8, 0x8a );
EXTERN_GUID( MF_PD_AUDIO_ISVARIABLEBITRATE, 0x33026ee0, 0xe387, 0x4582, 0xae, 0x0a, 0x34, 0xa2, 0xad, 0x3b, 0xaa, 0x18 );
DEFINE_GUID( MF_PD_ADAPTIVE_STREAMING, 0xEA0D5D97, 0x29F9, 0x488B, 0xAE, 0x6B, 0x7D, 0x6B, 0x41, 0x36, 0x11, 0x2B);
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0024_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0024_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFPresentationDescriptor;
    typedef struct IMFPresentationDescriptorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMFPresentationDescriptor * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMFPresentationDescriptor * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMFPresentationDescriptor * This);
        HRESULT ( STDMETHODCALLTYPE *GetItem )(
            __RPC__in IMFPresentationDescriptor * This,
            __RPC__in REFGUID guidKey,
                                  __RPC__inout_opt PROPVARIANT *pValue);
        HRESULT ( STDMETHODCALLTYPE *GetItemType )(
            __RPC__in IMFPresentationDescriptor * This,
            __RPC__in REFGUID guidKey,
                        __RPC__out MF_ATTRIBUTE_TYPE *pType);
        HRESULT ( STDMETHODCALLTYPE *CompareItem )(
            __RPC__in IMFPresentationDescriptor * This,
            __RPC__in REFGUID guidKey,
            __RPC__in REFPROPVARIANT Value,
                        __RPC__out BOOL *pbResult);
        HRESULT ( STDMETHODCALLTYPE *Compare )(
            __RPC__in IMFPresentationDescriptor * This,
            __RPC__in_opt IMFAttributes *pTheirs,
            MF_ATTRIBUTES_MATCH_TYPE MatchType,
                        __RPC__out BOOL *pbResult);
        HRESULT ( STDMETHODCALLTYPE *GetUINT32 )(
            __RPC__in IMFPresentationDescriptor * This,
            __RPC__in REFGUID guidKey,
                        __RPC__out UINT32 *punValue);
        HRESULT ( STDMETHODCALLTYPE *GetUINT64 )(
            __RPC__in IMFPresentationDescriptor * This,
            __RPC__in REFGUID guidKey,
                        __RPC__out UINT64 *punValue);
        HRESULT ( STDMETHODCALLTYPE *GetDouble )(
            __RPC__in IMFPresentationDescriptor * This,
            __RPC__in REFGUID guidKey,
                        __RPC__out double *pfValue);
        HRESULT ( STDMETHODCALLTYPE *GetGUID )(
            __RPC__in IMFPresentationDescriptor * This,
            __RPC__in REFGUID guidKey,
                        __RPC__out GUID *pguidValue);
        HRESULT ( STDMETHODCALLTYPE *GetStringLength )(
            __RPC__in IMFPresentationDescriptor * This,
            __RPC__in REFGUID guidKey,
                        __RPC__out UINT32 *pcchLength);
        HRESULT ( STDMETHODCALLTYPE *GetString )(
            __RPC__in IMFPresentationDescriptor * This,
            __RPC__in REFGUID guidKey,
                                 __RPC__out_ecount_full(cchBufSize) LPWSTR pwszValue,
            UINT32 cchBufSize,
                                  __RPC__inout_opt UINT32 *pcchLength);
        HRESULT ( STDMETHODCALLTYPE *GetAllocatedString )(
            __RPC__in IMFPresentationDescriptor * This,
            __RPC__in REFGUID guidKey,
                                          __RPC__deref_out_ecount_full_opt(( *pcchLength + 1 ) ) LPWSTR *ppwszValue,
                        __RPC__out UINT32 *pcchLength);
        HRESULT ( STDMETHODCALLTYPE *GetBlobSize )(
            __RPC__in IMFPresentationDescriptor * This,
            __RPC__in REFGUID guidKey,
                        __RPC__out UINT32 *pcbBlobSize);
        HRESULT ( STDMETHODCALLTYPE *GetBlob )(
            __RPC__in IMFPresentationDescriptor * This,
            __RPC__in REFGUID guidKey,
                                 __RPC__out_ecount_full(cbBufSize) UINT8 *pBuf,
            UINT32 cbBufSize,
                                  __RPC__inout_opt UINT32 *pcbBlobSize);
        HRESULT ( STDMETHODCALLTYPE *GetAllocatedBlob )(
            __RPC__in IMFPresentationDescriptor * This,
            __RPC__in REFGUID guidKey,
                                          __RPC__deref_out_ecount_full_opt(*pcbSize) UINT8 **ppBuf,
                        __RPC__out UINT32 *pcbSize);
        HRESULT ( STDMETHODCALLTYPE *GetUnknown )(
            __RPC__in IMFPresentationDescriptor * This,
            __RPC__in REFGUID guidKey,
            __RPC__in REFIID riid,
                                __RPC__deref_out_opt LPVOID *ppv);
        HRESULT ( STDMETHODCALLTYPE *SetItem )(
            __RPC__in IMFPresentationDescriptor * This,
            __RPC__in REFGUID guidKey,
            __RPC__in REFPROPVARIANT Value);
        HRESULT ( STDMETHODCALLTYPE *DeleteItem )(
            __RPC__in IMFPresentationDescriptor * This,
            __RPC__in REFGUID guidKey);
        HRESULT ( STDMETHODCALLTYPE *DeleteAllItems )(
            __RPC__in IMFPresentationDescriptor * This);
        HRESULT ( STDMETHODCALLTYPE *SetUINT32 )(
            __RPC__in IMFPresentationDescriptor * This,
            __RPC__in REFGUID guidKey,
            UINT32 unValue);
        HRESULT ( STDMETHODCALLTYPE *SetUINT64 )(
            __RPC__in IMFPresentationDescriptor * This,
            __RPC__in REFGUID guidKey,
            UINT64 unValue);
        HRESULT ( STDMETHODCALLTYPE *SetDouble )(
            __RPC__in IMFPresentationDescriptor * This,
            __RPC__in REFGUID guidKey,
            double fValue);
        HRESULT ( STDMETHODCALLTYPE *SetGUID )(
            __RPC__in IMFPresentationDescriptor * This,
            __RPC__in REFGUID guidKey,
            __RPC__in REFGUID guidValue);
        HRESULT ( STDMETHODCALLTYPE *SetString )(
            __RPC__in IMFPresentationDescriptor * This,
            __RPC__in REFGUID guidKey,
                               __RPC__in_string LPCWSTR wszValue);
        HRESULT ( STDMETHODCALLTYPE *SetBlob )(
            __RPC__in IMFPresentationDescriptor * This,
            __RPC__in REFGUID guidKey,
                                __RPC__in_ecount_full(cbBufSize) const UINT8 *pBuf,
            UINT32 cbBufSize);
        HRESULT ( STDMETHODCALLTYPE *SetUnknown )(
            __RPC__in IMFPresentationDescriptor * This,
            __RPC__in REFGUID guidKey,
                       __RPC__in_opt IUnknown *pUnknown);
        HRESULT ( STDMETHODCALLTYPE *LockStore )(
            __RPC__in IMFPresentationDescriptor * This);
        HRESULT ( STDMETHODCALLTYPE *UnlockStore )(
            __RPC__in IMFPresentationDescriptor * This);
        HRESULT ( STDMETHODCALLTYPE *GetCount )(
            __RPC__in IMFPresentationDescriptor * This,
                        __RPC__out UINT32 *pcItems);
        HRESULT ( STDMETHODCALLTYPE *GetItemByIndex )(
            __RPC__in IMFPresentationDescriptor * This,
            UINT32 unIndex,
                        __RPC__out GUID *pguidKey,
                                  __RPC__inout_opt PROPVARIANT *pValue);
        HRESULT ( STDMETHODCALLTYPE *CopyAllItems )(
            __RPC__in IMFPresentationDescriptor * This,
                       __RPC__in_opt IMFAttributes *pDest);
        HRESULT ( STDMETHODCALLTYPE *GetStreamDescriptorCount )(
            __RPC__in IMFPresentationDescriptor * This,
                        __RPC__out DWORD *pdwDescriptorCount);
        HRESULT ( STDMETHODCALLTYPE *GetStreamDescriptorByIndex )(
            __RPC__in IMFPresentationDescriptor * This,
                       DWORD dwIndex,
                        __RPC__out BOOL *pfSelected,
                        __RPC__deref_out_opt IMFStreamDescriptor **ppDescriptor);
        HRESULT ( STDMETHODCALLTYPE *SelectStream )(
            __RPC__in IMFPresentationDescriptor * This,
                       DWORD dwDescriptorIndex);
        HRESULT ( STDMETHODCALLTYPE *DeselectStream )(
            __RPC__in IMFPresentationDescriptor * This,
                       DWORD dwDescriptorIndex);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IMFPresentationDescriptor * This,
                        __RPC__deref_out_opt IMFPresentationDescriptor **ppPresentationDescriptor);
        END_INTERFACE
    } IMFPresentationDescriptorVtbl;
    interface IMFPresentationDescriptor
    {
        CONST_VTBL struct IMFPresentationDescriptorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetItem(This,guidKey,pValue) )
    ( (This)->lpVtbl -> GetItemType(This,guidKey,pType) )
    ( (This)->lpVtbl -> CompareItem(This,guidKey,Value,pbResult) )
    ( (This)->lpVtbl -> Compare(This,pTheirs,MatchType,pbResult) )
    ( (This)->lpVtbl -> GetUINT32(This,guidKey,punValue) )
    ( (This)->lpVtbl -> GetUINT64(This,guidKey,punValue) )
    ( (This)->lpVtbl -> GetDouble(This,guidKey,pfValue) )
    ( (This)->lpVtbl -> GetGUID(This,guidKey,pguidValue) )
    ( (This)->lpVtbl -> GetStringLength(This,guidKey,pcchLength) )
    ( (This)->lpVtbl -> GetString(This,guidKey,pwszValue,cchBufSize,pcchLength) )
    ( (This)->lpVtbl -> GetAllocatedString(This,guidKey,ppwszValue,pcchLength) )
    ( (This)->lpVtbl -> GetBlobSize(This,guidKey,pcbBlobSize) )
    ( (This)->lpVtbl -> GetBlob(This,guidKey,pBuf,cbBufSize,pcbBlobSize) )
    ( (This)->lpVtbl -> GetAllocatedBlob(This,guidKey,ppBuf,pcbSize) )
    ( (This)->lpVtbl -> GetUnknown(This,guidKey,riid,ppv) )
    ( (This)->lpVtbl -> SetItem(This,guidKey,Value) )
    ( (This)->lpVtbl -> DeleteItem(This,guidKey) )
    ( (This)->lpVtbl -> DeleteAllItems(This) )
    ( (This)->lpVtbl -> SetUINT32(This,guidKey,unValue) )
    ( (This)->lpVtbl -> SetUINT64(This,guidKey,unValue) )
    ( (This)->lpVtbl -> SetDouble(This,guidKey,fValue) )
    ( (This)->lpVtbl -> SetGUID(This,guidKey,guidValue) )
    ( (This)->lpVtbl -> SetString(This,guidKey,wszValue) )
    ( (This)->lpVtbl -> SetBlob(This,guidKey,pBuf,cbBufSize) )
    ( (This)->lpVtbl -> SetUnknown(This,guidKey,pUnknown) )
    ( (This)->lpVtbl -> LockStore(This) )
    ( (This)->lpVtbl -> UnlockStore(This) )
    ( (This)->lpVtbl -> GetCount(This,pcItems) )
    ( (This)->lpVtbl -> GetItemByIndex(This,unIndex,pguidKey,pValue) )
    ( (This)->lpVtbl -> CopyAllItems(This,pDest) )
    ( (This)->lpVtbl -> GetStreamDescriptorCount(This,pdwDescriptorCount) )
    ( (This)->lpVtbl -> GetStreamDescriptorByIndex(This,dwIndex,pfSelected,ppDescriptor) )
    ( (This)->lpVtbl -> SelectStream(This,dwDescriptorIndex) )
    ( (This)->lpVtbl -> DeselectStream(This,dwDescriptorIndex) )
    ( (This)->lpVtbl -> Clone(This,ppPresentationDescriptor) )
STDAPI MFCreatePresentationDescriptor(
    DWORD cStreamDescriptors,
    _In_reads_opt_( cStreamDescriptors ) IMFStreamDescriptor** apStreamDescriptors,
    _Outptr_ IMFPresentationDescriptor** ppPresentationDescriptor
    );
#endif
#pragma endregion
#pragma region Desktop or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_GAMES)
STDAPI MFRequireProtectedEnvironment(
     _In_ IMFPresentationDescriptor* pPresentationDescriptor
     );
STDAPI MFSerializePresentationDescriptor(
    _In_ IMFPresentationDescriptor * pPD,
    _Out_ DWORD * pcbData,
    _Outptr_result_bytebuffer_to_(*pcbData, *pcbData) BYTE ** ppbData);
STDAPI MFDeserializePresentationDescriptor(
    _In_ DWORD cbData,
    _In_reads_( cbData ) BYTE * pbData,
    _Outptr_ IMFPresentationDescriptor ** ppPD);
#endif
#pragma endregion
#pragma region Application or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_GAMES)
EXTERN_GUID(MF_SD_LANGUAGE, 0xaf2180, 0xbdc2, 0x423c, 0xab, 0xca, 0xf5, 0x3, 0x59, 0x3b, 0xc1, 0x21);
EXTERN_GUID(MF_SD_PROTECTED, 0xaf2181, 0xbdc2, 0x423c, 0xab, 0xca, 0xf5, 0x3, 0x59, 0x3b, 0xc1, 0x21);
EXTERN_GUID(MF_SD_STREAM_NAME, 0x4f1b099d, 0xd314, 0x41e5, 0xa7, 0x81, 0x7f, 0xef, 0xaa, 0x4c, 0x50, 0x1f);
EXTERN_GUID(MF_SD_MUTUALLY_EXCLUSIVE, 0x23ef79c, 0x388d, 0x487f, 0xac, 0x17, 0x69, 0x6c, 0xd6, 0xe3, 0xc6, 0xf5);
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0025_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0025_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFStreamDescriptor;
    typedef struct IMFStreamDescriptorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMFStreamDescriptor * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMFStreamDescriptor * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMFStreamDescriptor * This);
        HRESULT ( STDMETHODCALLTYPE *GetItem )(
            __RPC__in IMFStreamDescriptor * This,
            __RPC__in REFGUID guidKey,
                                  __RPC__inout_opt PROPVARIANT *pValue);
        HRESULT ( STDMETHODCALLTYPE *GetItemType )(
            __RPC__in IMFStreamDescriptor * This,
            __RPC__in REFGUID guidKey,
                        __RPC__out MF_ATTRIBUTE_TYPE *pType);
        HRESULT ( STDMETHODCALLTYPE *CompareItem )(
            __RPC__in IMFStreamDescriptor * This,
            __RPC__in REFGUID guidKey,
            __RPC__in REFPROPVARIANT Value,
                        __RPC__out BOOL *pbResult);
        HRESULT ( STDMETHODCALLTYPE *Compare )(
            __RPC__in IMFStreamDescriptor * This,
            __RPC__in_opt IMFAttributes *pTheirs,
            MF_ATTRIBUTES_MATCH_TYPE MatchType,
                        __RPC__out BOOL *pbResult);
        HRESULT ( STDMETHODCALLTYPE *GetUINT32 )(
            __RPC__in IMFStreamDescriptor * This,
            __RPC__in REFGUID guidKey,
                        __RPC__out UINT32 *punValue);
        HRESULT ( STDMETHODCALLTYPE *GetUINT64 )(
            __RPC__in IMFStreamDescriptor * This,
            __RPC__in REFGUID guidKey,
                        __RPC__out UINT64 *punValue);
        HRESULT ( STDMETHODCALLTYPE *GetDouble )(
            __RPC__in IMFStreamDescriptor * This,
            __RPC__in REFGUID guidKey,
                        __RPC__out double *pfValue);
        HRESULT ( STDMETHODCALLTYPE *GetGUID )(
            __RPC__in IMFStreamDescriptor * This,
            __RPC__in REFGUID guidKey,
                        __RPC__out GUID *pguidValue);
        HRESULT ( STDMETHODCALLTYPE *GetStringLength )(
            __RPC__in IMFStreamDescriptor * This,
            __RPC__in REFGUID guidKey,
                        __RPC__out UINT32 *pcchLength);
        HRESULT ( STDMETHODCALLTYPE *GetString )(
            __RPC__in IMFStreamDescriptor * This,
            __RPC__in REFGUID guidKey,
                                 __RPC__out_ecount_full(cchBufSize) LPWSTR pwszValue,
            UINT32 cchBufSize,
                                  __RPC__inout_opt UINT32 *pcchLength);
        HRESULT ( STDMETHODCALLTYPE *GetAllocatedString )(
            __RPC__in IMFStreamDescriptor * This,
            __RPC__in REFGUID guidKey,
                                          __RPC__deref_out_ecount_full_opt(( *pcchLength + 1 ) ) LPWSTR *ppwszValue,
                        __RPC__out UINT32 *pcchLength);
        HRESULT ( STDMETHODCALLTYPE *GetBlobSize )(
            __RPC__in IMFStreamDescriptor * This,
            __RPC__in REFGUID guidKey,
                        __RPC__out UINT32 *pcbBlobSize);
        HRESULT ( STDMETHODCALLTYPE *GetBlob )(
            __RPC__in IMFStreamDescriptor * This,
            __RPC__in REFGUID guidKey,
                                 __RPC__out_ecount_full(cbBufSize) UINT8 *pBuf,
            UINT32 cbBufSize,
                                  __RPC__inout_opt UINT32 *pcbBlobSize);
        HRESULT ( STDMETHODCALLTYPE *GetAllocatedBlob )(
            __RPC__in IMFStreamDescriptor * This,
            __RPC__in REFGUID guidKey,
                                          __RPC__deref_out_ecount_full_opt(*pcbSize) UINT8 **ppBuf,
                        __RPC__out UINT32 *pcbSize);
        HRESULT ( STDMETHODCALLTYPE *GetUnknown )(
            __RPC__in IMFStreamDescriptor * This,
            __RPC__in REFGUID guidKey,
            __RPC__in REFIID riid,
                                __RPC__deref_out_opt LPVOID *ppv);
        HRESULT ( STDMETHODCALLTYPE *SetItem )(
            __RPC__in IMFStreamDescriptor * This,
            __RPC__in REFGUID guidKey,
            __RPC__in REFPROPVARIANT Value);
        HRESULT ( STDMETHODCALLTYPE *DeleteItem )(
            __RPC__in IMFStreamDescriptor * This,
            __RPC__in REFGUID guidKey);
        HRESULT ( STDMETHODCALLTYPE *DeleteAllItems )(
            __RPC__in IMFStreamDescriptor * This);
        HRESULT ( STDMETHODCALLTYPE *SetUINT32 )(
            __RPC__in IMFStreamDescriptor * This,
            __RPC__in REFGUID guidKey,
            UINT32 unValue);
        HRESULT ( STDMETHODCALLTYPE *SetUINT64 )(
            __RPC__in IMFStreamDescriptor * This,
            __RPC__in REFGUID guidKey,
            UINT64 unValue);
        HRESULT ( STDMETHODCALLTYPE *SetDouble )(
            __RPC__in IMFStreamDescriptor * This,
            __RPC__in REFGUID guidKey,
            double fValue);
        HRESULT ( STDMETHODCALLTYPE *SetGUID )(
            __RPC__in IMFStreamDescriptor * This,
            __RPC__in REFGUID guidKey,
            __RPC__in REFGUID guidValue);
        HRESULT ( STDMETHODCALLTYPE *SetString )(
            __RPC__in IMFStreamDescriptor * This,
            __RPC__in REFGUID guidKey,
                               __RPC__in_string LPCWSTR wszValue);
        HRESULT ( STDMETHODCALLTYPE *SetBlob )(
            __RPC__in IMFStreamDescriptor * This,
            __RPC__in REFGUID guidKey,
                                __RPC__in_ecount_full(cbBufSize) const UINT8 *pBuf,
            UINT32 cbBufSize);
        HRESULT ( STDMETHODCALLTYPE *SetUnknown )(
            __RPC__in IMFStreamDescriptor * This,
            __RPC__in REFGUID guidKey,
                       __RPC__in_opt IUnknown *pUnknown);
        HRESULT ( STDMETHODCALLTYPE *LockStore )(
            __RPC__in IMFStreamDescriptor * This);
        HRESULT ( STDMETHODCALLTYPE *UnlockStore )(
            __RPC__in IMFStreamDescriptor * This);
        HRESULT ( STDMETHODCALLTYPE *GetCount )(
            __RPC__in IMFStreamDescriptor * This,
                        __RPC__out UINT32 *pcItems);
        HRESULT ( STDMETHODCALLTYPE *GetItemByIndex )(
            __RPC__in IMFStreamDescriptor * This,
            UINT32 unIndex,
                        __RPC__out GUID *pguidKey,
                                  __RPC__inout_opt PROPVARIANT *pValue);
        HRESULT ( STDMETHODCALLTYPE *CopyAllItems )(
            __RPC__in IMFStreamDescriptor * This,
                       __RPC__in_opt IMFAttributes *pDest);
        HRESULT ( STDMETHODCALLTYPE *GetStreamIdentifier )(
            __RPC__in IMFStreamDescriptor * This,
                        __RPC__out DWORD *pdwStreamIdentifier);
        HRESULT ( STDMETHODCALLTYPE *GetMediaTypeHandler )(
            __RPC__in IMFStreamDescriptor * This,
                        __RPC__deref_out_opt IMFMediaTypeHandler **ppMediaTypeHandler);
        END_INTERFACE
    } IMFStreamDescriptorVtbl;
    interface IMFStreamDescriptor
    {
        CONST_VTBL struct IMFStreamDescriptorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetItem(This,guidKey,pValue) )
    ( (This)->lpVtbl -> GetItemType(This,guidKey,pType) )
    ( (This)->lpVtbl -> CompareItem(This,guidKey,Value,pbResult) )
    ( (This)->lpVtbl -> Compare(This,pTheirs,MatchType,pbResult) )
    ( (This)->lpVtbl -> GetUINT32(This,guidKey,punValue) )
    ( (This)->lpVtbl -> GetUINT64(This,guidKey,punValue) )
    ( (This)->lpVtbl -> GetDouble(This,guidKey,pfValue) )
    ( (This)->lpVtbl -> GetGUID(This,guidKey,pguidValue) )
    ( (This)->lpVtbl -> GetStringLength(This,guidKey,pcchLength) )
    ( (This)->lpVtbl -> GetString(This,guidKey,pwszValue,cchBufSize,pcchLength) )
    ( (This)->lpVtbl -> GetAllocatedString(This,guidKey,ppwszValue,pcchLength) )
    ( (This)->lpVtbl -> GetBlobSize(This,guidKey,pcbBlobSize) )
    ( (This)->lpVtbl -> GetBlob(This,guidKey,pBuf,cbBufSize,pcbBlobSize) )
    ( (This)->lpVtbl -> GetAllocatedBlob(This,guidKey,ppBuf,pcbSize) )
    ( (This)->lpVtbl -> GetUnknown(This,guidKey,riid,ppv) )
    ( (This)->lpVtbl -> SetItem(This,guidKey,Value) )
    ( (This)->lpVtbl -> DeleteItem(This,guidKey) )
    ( (This)->lpVtbl -> DeleteAllItems(This) )
    ( (This)->lpVtbl -> SetUINT32(This,guidKey,unValue) )
    ( (This)->lpVtbl -> SetUINT64(This,guidKey,unValue) )
    ( (This)->lpVtbl -> SetDouble(This,guidKey,fValue) )
    ( (This)->lpVtbl -> SetGUID(This,guidKey,guidValue) )
    ( (This)->lpVtbl -> SetString(This,guidKey,wszValue) )
    ( (This)->lpVtbl -> SetBlob(This,guidKey,pBuf,cbBufSize) )
    ( (This)->lpVtbl -> SetUnknown(This,guidKey,pUnknown) )
    ( (This)->lpVtbl -> LockStore(This) )
    ( (This)->lpVtbl -> UnlockStore(This) )
    ( (This)->lpVtbl -> GetCount(This,pcItems) )
    ( (This)->lpVtbl -> GetItemByIndex(This,unIndex,pguidKey,pValue) )
    ( (This)->lpVtbl -> CopyAllItems(This,pDest) )
    ( (This)->lpVtbl -> GetStreamIdentifier(This,pdwStreamIdentifier) )
    ( (This)->lpVtbl -> GetMediaTypeHandler(This,ppMediaTypeHandler) )
STDAPI MFCreateStreamDescriptor(
    DWORD dwStreamIdentifier,
    DWORD cMediaTypes,
    _In_reads_(cMediaTypes) IMFMediaType** apMediaTypes,
    _Outptr_ IMFStreamDescriptor** ppDescriptor
    );
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0026_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0026_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFMediaTypeHandler;
    typedef struct IMFMediaTypeHandlerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMFMediaTypeHandler * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMFMediaTypeHandler * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMFMediaTypeHandler * This);
                      HRESULT ( STDMETHODCALLTYPE *IsMediaTypeSupported )(
            IMFMediaTypeHandler * This,
                       IMFMediaType *pMediaType,
            _Outptr_opt_result_maybenull_ IMFMediaType **ppMediaType);
        HRESULT ( STDMETHODCALLTYPE *GetMediaTypeCount )(
            __RPC__in IMFMediaTypeHandler * This,
                        __RPC__out DWORD *pdwTypeCount);
                      HRESULT ( STDMETHODCALLTYPE *GetMediaTypeByIndex )(
            IMFMediaTypeHandler * This,
                       DWORD dwIndex,
            _Outptr_ IMFMediaType **ppType);
                      HRESULT ( STDMETHODCALLTYPE *SetCurrentMediaType )(
            IMFMediaTypeHandler * This,
                       IMFMediaType *pMediaType);
                      HRESULT ( STDMETHODCALLTYPE *GetCurrentMediaType )(
            IMFMediaTypeHandler * This,
            _Outptr_ IMFMediaType **ppMediaType);
        HRESULT ( STDMETHODCALLTYPE *GetMajorType )(
            __RPC__in IMFMediaTypeHandler * This,
                        __RPC__out GUID *pguidMajorType);
        END_INTERFACE
    } IMFMediaTypeHandlerVtbl;
    interface IMFMediaTypeHandler
    {
        CONST_VTBL struct IMFMediaTypeHandlerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> IsMediaTypeSupported(This,pMediaType,ppMediaType) )
    ( (This)->lpVtbl -> GetMediaTypeCount(This,pdwTypeCount) )
    ( (This)->lpVtbl -> GetMediaTypeByIndex(This,dwIndex,ppType) )
    ( (This)->lpVtbl -> SetCurrentMediaType(This,pMediaType) )
    ( (This)->lpVtbl -> GetCurrentMediaType(This,ppMediaType) )
    ( (This)->lpVtbl -> GetMajorType(This,pguidMajorType) )
                HRESULT STDMETHODCALLTYPE IMFMediaTypeHandler_RemoteIsMediaTypeSupported_Proxy(
    __RPC__in IMFMediaTypeHandler * This,
                        __RPC__in_ecount_full(cbData) BYTE *pbData,
               DWORD cbData,
                                  __RPC__deref_out_ecount_full_opt(*pcbBestMatch) BYTE **ppbBestMatch,
                __RPC__out DWORD *pcbBestMatch);
void __RPC_STUB IMFMediaTypeHandler_RemoteIsMediaTypeSupported_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                HRESULT STDMETHODCALLTYPE IMFMediaTypeHandler_RemoteGetMediaTypeByIndex_Proxy(
    __RPC__in IMFMediaTypeHandler * This,
               DWORD dwIndex,
                                  __RPC__deref_out_ecount_full_opt(*pcbData) BYTE **ppbData,
                __RPC__out DWORD *pcbData);
void __RPC_STUB IMFMediaTypeHandler_RemoteGetMediaTypeByIndex_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                HRESULT STDMETHODCALLTYPE IMFMediaTypeHandler_RemoteSetCurrentMediaType_Proxy(
    __RPC__in IMFMediaTypeHandler * This,
                        __RPC__in_ecount_full(cbData) BYTE *pbData,
               DWORD cbData);
void __RPC_STUB IMFMediaTypeHandler_RemoteSetCurrentMediaType_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                HRESULT STDMETHODCALLTYPE IMFMediaTypeHandler_RemoteGetCurrentMediaType_Proxy(
    __RPC__in IMFMediaTypeHandler * This,
                                  __RPC__deref_out_ecount_full_opt(*pcbData) BYTE **ppbData,
                __RPC__out DWORD *pcbData);
void __RPC_STUB IMFMediaTypeHandler_RemoteGetCurrentMediaType_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
STDAPI MFCreateSimpleTypeHandler(
    _Outptr_ IMFMediaTypeHandler ** ppHandler );
typedef
enum MFTIMER_FLAGS
    {
        MFTIMER_RELATIVE = 0x1
    } MFTIMER_FLAGS;
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0027_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0027_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFTimer;
    typedef struct IMFTimerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFTimer * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFTimer * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFTimer * This);
        HRESULT ( STDMETHODCALLTYPE *SetTimer )(
            IMFTimer * This,
                       DWORD dwFlags,
                       LONGLONG llClockTime,
                       IMFAsyncCallback *pCallback,
                       IUnknown *punkState,
                        IUnknown **ppunkKey);
        HRESULT ( STDMETHODCALLTYPE *CancelTimer )(
            IMFTimer * This,
                       IUnknown *punkKey);
        END_INTERFACE
    } IMFTimerVtbl;
    interface IMFTimer
    {
        CONST_VTBL struct IMFTimerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetTimer(This,dwFlags,llClockTime,pCallback,punkState,ppunkKey) )
    ( (This)->lpVtbl -> CancelTimer(This,punkKey) )
EXTERN_GUID( MF_ACTIVATE_CUSTOM_VIDEO_MIXER_CLSID, 0xba491360, 0xbe50, 0x451e, 0x95, 0xab, 0x6d, 0x4a, 0xcc, 0xc7, 0xda, 0xd8 );
EXTERN_GUID( MF_ACTIVATE_CUSTOM_VIDEO_MIXER_ACTIVATE, 0xba491361, 0xbe50, 0x451e, 0x95, 0xab, 0x6d, 0x4a, 0xcc, 0xc7, 0xda, 0xd8 );
EXTERN_GUID( MF_ACTIVATE_CUSTOM_VIDEO_MIXER_FLAGS, 0xba491362, 0xbe50, 0x451e, 0x95, 0xab, 0x6d, 0x4a, 0xcc, 0xc7, 0xda, 0xd8 );
EXTERN_GUID( MF_ACTIVATE_CUSTOM_VIDEO_PRESENTER_CLSID, 0xba491364, 0xbe50, 0x451e, 0x95, 0xab, 0x6d, 0x4a, 0xcc, 0xc7, 0xda, 0xd8 );
EXTERN_GUID( MF_ACTIVATE_CUSTOM_VIDEO_PRESENTER_ACTIVATE, 0xba491365, 0xbe50, 0x451e, 0x95, 0xab, 0x6d, 0x4a, 0xcc, 0xc7, 0xda, 0xd8 );
EXTERN_GUID( MF_ACTIVATE_CUSTOM_VIDEO_PRESENTER_FLAGS, 0xba491366, 0xbe50, 0x451e, 0x95, 0xab, 0x6d, 0x4a, 0xcc, 0xc7, 0xda, 0xd8 );
enum __MIDL___MIDL_itf_mfidl_0000_0028_0001
    {
        MF_ACTIVATE_CUSTOM_MIXER_ALLOWFAIL = 0x1
    } ;
enum __MIDL___MIDL_itf_mfidl_0000_0028_0002
    {
        MF_ACTIVATE_CUSTOM_PRESENTER_ALLOWFAIL = 0x1
    } ;
EXTERN_GUID( MF_ACTIVATE_MFT_LOCKED, 0xc1f6093c, 0x7f65, 0x4fbd, 0x9e, 0x39, 0x5f, 0xae, 0xc3, 0xc4, 0xfb, 0xd7 );
EXTERN_GUID( MF_ACTIVATE_VIDEO_WINDOW, 0x9a2dbbdd, 0xf57e, 0x4162, 0x82, 0xb9, 0x68, 0x31, 0x37, 0x76, 0x82, 0xd3 );
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
typedef
enum _MFSHUTDOWN_STATUS
    {
        MFSHUTDOWN_INITIATED = 0,
        MFSHUTDOWN_COMPLETED = ( MFSHUTDOWN_INITIATED + 1 )
    } MFSHUTDOWN_STATUS;
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0028_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0028_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFShutdown;
    typedef struct IMFShutdownVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMFShutdown * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMFShutdown * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMFShutdown * This);
        HRESULT ( STDMETHODCALLTYPE *Shutdown )(
            __RPC__in IMFShutdown * This);
        HRESULT ( STDMETHODCALLTYPE *GetShutdownStatus )(
            __RPC__in IMFShutdown * This,
                        __RPC__out MFSHUTDOWN_STATUS *pStatus);
        END_INTERFACE
    } IMFShutdownVtbl;
    interface IMFShutdown
    {
        CONST_VTBL struct IMFShutdownVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Shutdown(This) )
    ( (This)->lpVtbl -> GetShutdownStatus(This,pStatus) )
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
STDAPI
MFShutdownObject(
    IUnknown * pUnk );
STDAPI
MFCreateAudioRenderer(
    IMFAttributes* pAudioAttributes,
    _Outptr_ IMFMediaSink** ppSink
    );
#endif
#pragma endregion
#pragma region PC Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_PC_APP)
STDAPI
MFCreateAudioRendererActivate(
    _Outptr_ IMFActivate ** ppActivate
    );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
EXTERN_GUID( MF_AUDIO_RENDERER_ATTRIBUTE_FLAGS, 0xede4b5e0, 0xf805, 0x4d6c, 0x99, 0xb3, 0xdb, 0x01, 0xbf, 0x95, 0xdf, 0xab);
EXTERN_GUID( MF_AUDIO_RENDERER_ATTRIBUTE_SESSION_ID, 0xede4b5e3, 0xf805, 0x4d6c, 0x99, 0xb3, 0xdb, 0x01, 0xbf, 0x95, 0xdf, 0xab);
EXTERN_GUID( MF_AUDIO_RENDERER_ATTRIBUTE_ENDPOINT_ID, 0xb10aaec3, 0xef71, 0x4cc3, 0xb8, 0x73, 0x5, 0xa9, 0xa0, 0x8b, 0x9f, 0x8e);
EXTERN_GUID( MF_AUDIO_RENDERER_ATTRIBUTE_ENDPOINT_ROLE, 0x6ba644ff, 0x27c5, 0x4d02, 0x98, 0x87, 0xc2, 0x86, 0x19, 0xfd, 0xb9, 0x1b);
EXTERN_GUID( MF_AUDIO_RENDERER_ATTRIBUTE_STREAM_CATEGORY, 0xa9770471, 0x92ec, 0x4df4, 0x94, 0xfe, 0x81, 0xc3, 0x6f, 0xc, 0x3a, 0x7a);
STDAPI
MFCreateVideoRendererActivate(
    _In_ HWND hwndVideo,
    _Outptr_ IMFActivate ** ppActivate
    );
STDAPI
MFCreateMPEG4MediaSink(
    _In_ IMFByteStream* pIByteStream,
    _In_opt_ IMFMediaType* pVideoMediaType,
    _In_opt_ IMFMediaType* pAudioMediaType,
    _Outptr_ IMFMediaSink** ppIMediaSink
    );
STDAPI
MFCreate3GPMediaSink(
    _In_ IMFByteStream* pIByteStream,
    _In_opt_ IMFMediaType* pVideoMediaType,
    _In_opt_ IMFMediaType* pAudioMediaType,
    _Outptr_ IMFMediaSink** ppIMediaSink
    );
STDAPI
MFCreateMP3MediaSink(
    _In_ IMFByteStream* pTargetByteStream,
    _Outptr_ IMFMediaSink** ppMediaSink
    );
STDAPI
MFCreateAC3MediaSink(
    _In_ IMFByteStream* pTargetByteStream,
    _In_ IMFMediaType* pAudioMediaType,
     _Outptr_ IMFMediaSink** ppMediaSink
    );
STDAPI
MFCreateADTSMediaSink(
    _In_ IMFByteStream* pTargetByteStream,
    _In_ IMFMediaType* pAudioMediaType,
     _Outptr_ IMFMediaSink** ppMediaSink
    );
STDAPI
MFCreateMuxSink(
    _In_ GUID guidOutputSubType,
    _In_opt_ IMFAttributes* pOutputAttributes,
    _In_opt_ IMFByteStream* pOutputByteStream,
    _Outptr_ IMFMediaSink** ppMuxSink
    );
STDAPI
MFCreateFMPEG4MediaSink(
    _In_ IMFByteStream* pIByteStream,
    _In_opt_ IMFMediaType* pVideoMediaType,
    _In_opt_ IMFMediaType* pAudioMediaType,
    _Outptr_ IMFMediaSink** ppIMediaSink
    );
STDAPI
MFCreateAVIMediaSink(
    _In_ IMFByteStream* pIByteStream,
    _In_ IMFMediaType* pVideoMediaType,
    _In_opt_ IMFMediaType* pAudioMediaType,
    _Outptr_ IMFMediaSink** ppIMediaSink
    );
STDAPI
MFCreateWAVEMediaSink(
    _In_ IMFByteStream* pTargetByteStream,
    _In_ IMFMediaType* pAudioMediaType,
     _Outptr_ IMFMediaSink** ppMediaSink
    );
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0029_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0029_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFTopoLoader;
    typedef struct IMFTopoLoaderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFTopoLoader * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFTopoLoader * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFTopoLoader * This);
        HRESULT ( STDMETHODCALLTYPE *Load )(
            IMFTopoLoader * This,
                       IMFTopology *pInputTopo,
            _Outptr_ IMFTopology **ppOutputTopo,
                       IMFTopology *pCurrentTopo);
        END_INTERFACE
    } IMFTopoLoaderVtbl;
    interface IMFTopoLoader
    {
        CONST_VTBL struct IMFTopoLoaderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Load(This,pInputTopo,ppOutputTopo,pCurrentTopo) )
STDAPI MFCreateTopoLoader(
    _Outptr_ IMFTopoLoader ** ppObj );
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0030_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0030_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFContentProtectionManager;
    typedef struct IMFContentProtectionManagerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMFContentProtectionManager * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMFContentProtectionManager * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMFContentProtectionManager * This);
                      HRESULT ( STDMETHODCALLTYPE *BeginEnableContent )(
            IMFContentProtectionManager * This,
                       IMFActivate *pEnablerActivate,
                       IMFTopology *pTopo,
                       IMFAsyncCallback *pCallback,
                       IUnknown *punkState);
                      HRESULT ( STDMETHODCALLTYPE *EndEnableContent )(
            IMFContentProtectionManager * This,
                       IMFAsyncResult *pResult);
        END_INTERFACE
    } IMFContentProtectionManagerVtbl;
    interface IMFContentProtectionManager
    {
        CONST_VTBL struct IMFContentProtectionManagerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> BeginEnableContent(This,pEnablerActivate,pTopo,pCallback,punkState) )
    ( (This)->lpVtbl -> EndEnableContent(This,pResult) )
                HRESULT STDMETHODCALLTYPE IMFContentProtectionManager_RemoteBeginEnableContent_Proxy(
    __RPC__in IMFContentProtectionManager * This,
               __RPC__in REFCLSID clsidType,
                        __RPC__in_ecount_full(cbData) BYTE *pbData,
               DWORD cbData,
               __RPC__in_opt IMFRemoteAsyncCallback *pCallback);
void __RPC_STUB IMFContentProtectionManager_RemoteBeginEnableContent_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                HRESULT STDMETHODCALLTYPE IMFContentProtectionManager_RemoteEndEnableContent_Proxy(
    __RPC__in IMFContentProtectionManager * This,
               __RPC__in_opt IUnknown *pResult);
void __RPC_STUB IMFContentProtectionManager_RemoteEndEnableContent_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
typedef
enum __MIDL___MIDL_itf_mfidl_0000_0031_0001
    {
        MF_LICENSE_URL_UNTRUSTED = 0,
        MF_LICENSE_URL_TRUSTED = ( MF_LICENSE_URL_UNTRUSTED + 1 ) ,
        MF_LICENSE_URL_TAMPERED = ( MF_LICENSE_URL_TRUSTED + 1 )
    } MF_URL_TRUST_STATUS;
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0031_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0031_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFContentEnabler;
    typedef struct IMFContentEnablerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMFContentEnabler * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMFContentEnabler * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMFContentEnabler * This);
        HRESULT ( STDMETHODCALLTYPE *GetEnableType )(
            __RPC__in IMFContentEnabler * This,
                        __RPC__out GUID *pType);
        HRESULT ( STDMETHODCALLTYPE *GetEnableURL )(
            __RPC__in IMFContentEnabler * This,
                                          __RPC__deref_out_ecount_full_opt(*pcchURL) LPWSTR *ppwszURL,
                        __RPC__out DWORD *pcchURL,
                                    __RPC__inout_opt MF_URL_TRUST_STATUS *pTrustStatus);
        HRESULT ( STDMETHODCALLTYPE *GetEnableData )(
            __RPC__in IMFContentEnabler * This,
                                          __RPC__deref_out_ecount_full_opt(*pcbData) BYTE **ppbData,
                        __RPC__out DWORD *pcbData);
        HRESULT ( STDMETHODCALLTYPE *IsAutomaticSupported )(
            __RPC__in IMFContentEnabler * This,
                        __RPC__out BOOL *pfAutomatic);
        HRESULT ( STDMETHODCALLTYPE *AutomaticEnable )(
            __RPC__in IMFContentEnabler * This);
        HRESULT ( STDMETHODCALLTYPE *MonitorEnable )(
            __RPC__in IMFContentEnabler * This);
        HRESULT ( STDMETHODCALLTYPE *Cancel )(
            __RPC__in IMFContentEnabler * This);
        END_INTERFACE
    } IMFContentEnablerVtbl;
    interface IMFContentEnabler
    {
        CONST_VTBL struct IMFContentEnablerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetEnableType(This,pType) )
    ( (This)->lpVtbl -> GetEnableURL(This,ppwszURL,pcchURL,pTrustStatus) )
    ( (This)->lpVtbl -> GetEnableData(This,ppbData,pcbData) )
    ( (This)->lpVtbl -> IsAutomaticSupported(This,pfAutomatic) )
    ( (This)->lpVtbl -> AutomaticEnable(This) )
    ( (This)->lpVtbl -> MonitorEnable(This) )
    ( (This)->lpVtbl -> Cancel(This) )
EXTERN_GUID( MFENABLETYPE_WMDRMV1_LicenseAcquisition, 0x4ff6eeaf, 0xb43, 0x4797, 0x9b, 0x85, 0xab, 0xf3, 0x18, 0x15, 0xe7, 0xb0);
EXTERN_GUID( MFENABLETYPE_WMDRMV7_LicenseAcquisition, 0x3306df, 0x4a06, 0x4884,0xa0, 0x97, 0xef, 0x6d, 0x22, 0xec, 0x84, 0xa3);
EXTERN_GUID( MFENABLETYPE_WMDRMV7_Individualization, 0xacd2c84a, 0xb303, 0x4f65, 0xbc, 0x2c, 0x2c, 0x84, 0x8d, 0x1, 0xa9, 0x89);
EXTERN_GUID( MFENABLETYPE_MF_UpdateRevocationInformation, 0xe558b0b5, 0xb3c4, 0x44a0, 0x92, 0x4c, 0x50, 0xd1, 0x78, 0x93, 0x23, 0x85);
EXTERN_GUID( MFENABLETYPE_MF_UpdateUntrustedComponent, 0x9879f3d6, 0xcee2, 0x48e6, 0xb5, 0x73, 0x97, 0x67, 0xab, 0x17, 0x2f, 0x16);
EXTERN_GUID( MFENABLETYPE_MF_RebootRequired, 0x6d4d3d4b, 0x0ece, 0x4652, 0x8b, 0x3a, 0xf2, 0xd2, 0x42, 0x60, 0xd8, 0x87);
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef struct _MFRR_COMPONENT_HASH_INFO
{
    DWORD ulReason;
    WCHAR rgHeaderHash[STR_HASH_LEN];
    WCHAR rgPublicKeyHash[STR_HASH_LEN];
    WCHAR wszName[MAX_PATH];
} MFRR_COMPONENT_HASH_INFO, *PMFRR_COMPONENT_HASH_INFO;
typedef struct _MFRR_COMPONENTS
{
    DWORD dwRRInfoVersion;
    DWORD dwRRComponents;
    PMFRR_COMPONENT_HASH_INFO pRRComponents;
} MFRR_COMPONENTS, *PMFRR_COMPONENTS;
#pragma pack ( push )
#pragma pack ( 1 )
typedef struct _ASFFlatPicture
{
    BYTE bPictureType;
    DWORD dwDataLen;
} ASF_FLAT_PICTURE;
#pragma pack ( pop )
#pragma pack ( push )
#pragma pack ( 1 )
typedef struct _ASFFlatSynchronisedLyrics
{
    BYTE bTimeStampFormat;
    BYTE bContentType;
    DWORD dwLyricsLen;
} ASF_FLAT_SYNCHRONISED_LYRICS;
#pragma pack ( pop )
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0032_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0032_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFMetadata;
    typedef struct IMFMetadataVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMFMetadata * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMFMetadata * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMFMetadata * This);
        HRESULT ( STDMETHODCALLTYPE *SetLanguage )(
            __RPC__in IMFMetadata * This,
                       __RPC__in LPCWSTR pwszRFC1766);
        HRESULT ( STDMETHODCALLTYPE *GetLanguage )(
            __RPC__in IMFMetadata * This,
                        __RPC__deref_out_opt LPWSTR *ppwszRFC1766);
        HRESULT ( STDMETHODCALLTYPE *GetAllLanguages )(
            __RPC__in IMFMetadata * This,
                        __RPC__out PROPVARIANT *ppvLanguages);
        HRESULT ( STDMETHODCALLTYPE *SetProperty )(
            __RPC__in IMFMetadata * This,
                       __RPC__in LPCWSTR pwszName,
                       __RPC__in const PROPVARIANT *ppvValue);
        HRESULT ( STDMETHODCALLTYPE *GetProperty )(
            __RPC__in IMFMetadata * This,
                       __RPC__in LPCWSTR pwszName,
                        __RPC__out PROPVARIANT *ppvValue);
        HRESULT ( STDMETHODCALLTYPE *DeleteProperty )(
            __RPC__in IMFMetadata * This,
                       __RPC__in LPCWSTR pwszName);
        HRESULT ( STDMETHODCALLTYPE *GetAllPropertyNames )(
            __RPC__in IMFMetadata * This,
                        __RPC__out PROPVARIANT *ppvNames);
        END_INTERFACE
    } IMFMetadataVtbl;
    interface IMFMetadata
    {
        CONST_VTBL struct IMFMetadataVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetLanguage(This,pwszRFC1766) )
    ( (This)->lpVtbl -> GetLanguage(This,ppwszRFC1766) )
    ( (This)->lpVtbl -> GetAllLanguages(This,ppvLanguages) )
    ( (This)->lpVtbl -> SetProperty(This,pwszName,ppvValue) )
    ( (This)->lpVtbl -> GetProperty(This,pwszName,ppvValue) )
    ( (This)->lpVtbl -> DeleteProperty(This,pwszName) )
    ( (This)->lpVtbl -> GetAllPropertyNames(This,ppvNames) )
EXTERN_C const IID IID_IMFMetadataProvider;
    typedef struct IMFMetadataProviderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMFMetadataProvider * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMFMetadataProvider * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMFMetadataProvider * This);
        HRESULT ( STDMETHODCALLTYPE *GetMFMetadata )(
            __RPC__in IMFMetadataProvider * This,
                       __RPC__in_opt IMFPresentationDescriptor *pPresentationDescriptor,
                       DWORD dwStreamIdentifier,
                       DWORD dwFlags,
                        __RPC__deref_out_opt IMFMetadata **ppMFMetadata);
        END_INTERFACE
    } IMFMetadataProviderVtbl;
    interface IMFMetadataProvider
    {
        CONST_VTBL struct IMFMetadataProviderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetMFMetadata(This,pPresentationDescriptor,dwStreamIdentifier,dwFlags,ppMFMetadata) )
EXTERN_GUID( MF_METADATA_PROVIDER_SERVICE, 0xdb214084, 0x58a4, 0x4d2e, 0xb8, 0x4f, 0x6f, 0x75, 0x5b, 0x2f, 0x7a, 0xd);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
EXTERN_GUID( MF_PROPERTY_HANDLER_SERVICE, 0xa3face02, 0x32b8, 0x41dd, 0x90, 0xe7, 0x5f, 0xef, 0x7c, 0x89, 0x91, 0xb5);
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
typedef
enum _MFRATE_DIRECTION
    {
        MFRATE_FORWARD = 0,
        MFRATE_REVERSE = ( MFRATE_FORWARD + 1 )
    } MFRATE_DIRECTION;
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0034_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0034_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFRateSupport;
    typedef struct IMFRateSupportVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMFRateSupport * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMFRateSupport * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMFRateSupport * This);
        HRESULT ( STDMETHODCALLTYPE *GetSlowestRate )(
            __RPC__in IMFRateSupport * This,
                       MFRATE_DIRECTION eDirection,
                       BOOL fThin,
                        __RPC__out float *pflRate);
        HRESULT ( STDMETHODCALLTYPE *GetFastestRate )(
            __RPC__in IMFRateSupport * This,
                       MFRATE_DIRECTION eDirection,
                       BOOL fThin,
                        __RPC__out float *pflRate);
        HRESULT ( STDMETHODCALLTYPE *IsRateSupported )(
            __RPC__in IMFRateSupport * This,
                       BOOL fThin,
                       float flRate,
                                    __RPC__inout_opt float *pflNearestSupportedRate);
        END_INTERFACE
    } IMFRateSupportVtbl;
    interface IMFRateSupport
    {
        CONST_VTBL struct IMFRateSupportVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetSlowestRate(This,eDirection,fThin,pflRate) )
    ( (This)->lpVtbl -> GetFastestRate(This,eDirection,fThin,pflRate) )
    ( (This)->lpVtbl -> IsRateSupported(This,fThin,flRate,pflNearestSupportedRate) )
EXTERN_GUID( MF_RATE_CONTROL_SERVICE, 0x866fa297, 0xb802, 0x4bf8, 0x9d, 0xc9, 0x5e, 0x3b, 0x6a, 0x9f, 0x53, 0xc9);
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0035_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0035_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFRateControl;
    typedef struct IMFRateControlVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMFRateControl * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMFRateControl * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMFRateControl * This);
        HRESULT ( STDMETHODCALLTYPE *SetRate )(
            __RPC__in IMFRateControl * This,
                       BOOL fThin,
                       float flRate);
        HRESULT ( STDMETHODCALLTYPE *GetRate )(
            __RPC__in IMFRateControl * This,
                                    __RPC__inout_opt BOOL *pfThin,
                                    __RPC__inout_opt float *pflRate);
        END_INTERFACE
    } IMFRateControlVtbl;
    interface IMFRateControl
    {
        CONST_VTBL struct IMFRateControlVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetRate(This,fThin,flRate) )
    ( (This)->lpVtbl -> GetRate(This,pfThin,pflRate) )
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0036_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0036_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFTimecodeTranslate;
    typedef struct IMFTimecodeTranslateVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFTimecodeTranslate * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFTimecodeTranslate * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFTimecodeTranslate * This);
        HRESULT ( STDMETHODCALLTYPE *BeginConvertTimecodeToHNS )(
            IMFTimecodeTranslate * This,
                       const PROPVARIANT *pPropVarTimecode,
                       IMFAsyncCallback *pCallback,
                       IUnknown *punkState);
        HRESULT ( STDMETHODCALLTYPE *EndConvertTimecodeToHNS )(
            IMFTimecodeTranslate * This,
                       IMFAsyncResult *pResult,
                        MFTIME *phnsTime);
        HRESULT ( STDMETHODCALLTYPE *BeginConvertHNSToTimecode )(
            IMFTimecodeTranslate * This,
                       MFTIME hnsTime,
                       IMFAsyncCallback *pCallback,
                       IUnknown *punkState);
        HRESULT ( STDMETHODCALLTYPE *EndConvertHNSToTimecode )(
            IMFTimecodeTranslate * This,
                       IMFAsyncResult *pResult,
                        PROPVARIANT *pPropVarTimecode);
        END_INTERFACE
    } IMFTimecodeTranslateVtbl;
    interface IMFTimecodeTranslate
    {
        CONST_VTBL struct IMFTimecodeTranslateVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> BeginConvertTimecodeToHNS(This,pPropVarTimecode,pCallback,punkState) )
    ( (This)->lpVtbl -> EndConvertTimecodeToHNS(This,pResult,phnsTime) )
    ( (This)->lpVtbl -> BeginConvertHNSToTimecode(This,hnsTime,pCallback,punkState) )
    ( (This)->lpVtbl -> EndConvertHNSToTimecode(This,pResult,pPropVarTimecode) )
EXTERN_GUID( MF_TIMECODE_SERVICE, 0xa0d502a7, 0x0eb3, 0x4885, 0xb1, 0xb9, 0x9f, 0xeb, 0x0d, 0x08, 0x34, 0x54 );
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0037_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0037_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFSeekInfo;
    typedef struct IMFSeekInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFSeekInfo * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFSeekInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFSeekInfo * This);
        HRESULT ( STDMETHODCALLTYPE *GetNearestKeyFrames )(
            IMFSeekInfo * This,
            _In_ const GUID *pguidTimeFormat,
            _In_ const PROPVARIANT *pvarStartPosition,
            _Out_ PROPVARIANT *pvarPreviousKeyFrame,
            _Out_ PROPVARIANT *pvarNextKeyFrame);
        END_INTERFACE
    } IMFSeekInfoVtbl;
    interface IMFSeekInfo
    {
        CONST_VTBL struct IMFSeekInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetNearestKeyFrames(This,pguidTimeFormat,pvarStartPosition,pvarPreviousKeyFrame,pvarNextKeyFrame) )
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
EXTERN_C const GUID MF_SCRUBBING_SERVICE;
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0038_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0038_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFSimpleAudioVolume;
    typedef struct IMFSimpleAudioVolumeVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMFSimpleAudioVolume * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMFSimpleAudioVolume * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMFSimpleAudioVolume * This);
        HRESULT ( STDMETHODCALLTYPE *SetMasterVolume )(
            __RPC__in IMFSimpleAudioVolume * This,
                       float fLevel);
        HRESULT ( STDMETHODCALLTYPE *GetMasterVolume )(
            __RPC__in IMFSimpleAudioVolume * This,
                        __RPC__out float *pfLevel);
        HRESULT ( STDMETHODCALLTYPE *SetMute )(
            __RPC__in IMFSimpleAudioVolume * This,
                       const BOOL bMute);
        HRESULT ( STDMETHODCALLTYPE *GetMute )(
            __RPC__in IMFSimpleAudioVolume * This,
                        __RPC__out BOOL *pbMute);
        END_INTERFACE
    } IMFSimpleAudioVolumeVtbl;
    interface IMFSimpleAudioVolume
    {
        CONST_VTBL struct IMFSimpleAudioVolumeVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetMasterVolume(This,fLevel) )
    ( (This)->lpVtbl -> GetMasterVolume(This,pfLevel) )
    ( (This)->lpVtbl -> SetMute(This,bMute) )
    ( (This)->lpVtbl -> GetMute(This,pbMute) )
EXTERN_GUID( MR_POLICY_VOLUME_SERVICE, 0x1abaa2ac, 0x9d3b, 0x47c6, 0xab, 0x48, 0xc5, 0x95, 0x6, 0xde, 0x78, 0x4d);
EXTERN_GUID( MR_CAPTURE_POLICY_VOLUME_SERVICE, 0x24030acd, 0x107a, 0x4265, 0x97, 0x5c, 0x41, 0x4e, 0x33, 0xe6, 0x5f, 0x2a);
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0039_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0039_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFAudioStreamVolume;
    typedef struct IMFAudioStreamVolumeVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMFAudioStreamVolume * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMFAudioStreamVolume * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMFAudioStreamVolume * This);
        HRESULT ( STDMETHODCALLTYPE *GetChannelCount )(
            __RPC__in IMFAudioStreamVolume * This,
                        __RPC__out UINT32 *pdwCount);
        HRESULT ( STDMETHODCALLTYPE *SetChannelVolume )(
            __RPC__in IMFAudioStreamVolume * This,
                       UINT32 dwIndex,
                       const float fLevel);
        HRESULT ( STDMETHODCALLTYPE *GetChannelVolume )(
            __RPC__in IMFAudioStreamVolume * This,
                       UINT32 dwIndex,
                        __RPC__out float *pfLevel);
        HRESULT ( STDMETHODCALLTYPE *SetAllVolumes )(
            __RPC__in IMFAudioStreamVolume * This,
                       UINT32 dwCount,
                                __RPC__in_ecount_full(dwCount) const float *pfVolumes);
        HRESULT ( STDMETHODCALLTYPE *GetAllVolumes )(
            __RPC__in IMFAudioStreamVolume * This,
                       UINT32 dwCount,
                                 __RPC__out_ecount_full(dwCount) float *pfVolumes);
        END_INTERFACE
    } IMFAudioStreamVolumeVtbl;
    interface IMFAudioStreamVolume
    {
        CONST_VTBL struct IMFAudioStreamVolumeVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetChannelCount(This,pdwCount) )
    ( (This)->lpVtbl -> SetChannelVolume(This,dwIndex,fLevel) )
    ( (This)->lpVtbl -> GetChannelVolume(This,dwIndex,pfLevel) )
    ( (This)->lpVtbl -> SetAllVolumes(This,dwCount,pfVolumes) )
    ( (This)->lpVtbl -> GetAllVolumes(This,dwCount,pfVolumes) )
EXTERN_GUID( MR_STREAM_VOLUME_SERVICE, 0xf8b5fa2f, 0x32ef, 0x46f5, 0xb1, 0x72, 0x13, 0x21, 0x21, 0x2f, 0xb2, 0xc4);
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0040_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0040_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFAudioPolicy;
    typedef struct IMFAudioPolicyVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFAudioPolicy * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFAudioPolicy * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFAudioPolicy * This);
        HRESULT ( STDMETHODCALLTYPE *SetGroupingParam )(
            IMFAudioPolicy * This,
                       REFGUID rguidClass);
        HRESULT ( STDMETHODCALLTYPE *GetGroupingParam )(
            IMFAudioPolicy * This,
            _Out_ GUID *pguidClass);
        HRESULT ( STDMETHODCALLTYPE *SetDisplayName )(
            IMFAudioPolicy * This,
                       LPCWSTR pszName);
        HRESULT ( STDMETHODCALLTYPE *GetDisplayName )(
            IMFAudioPolicy * This,
            _Outptr_ LPWSTR *pszName);
        HRESULT ( STDMETHODCALLTYPE *SetIconPath )(
            IMFAudioPolicy * This,
                       LPCWSTR pszPath);
        HRESULT ( STDMETHODCALLTYPE *GetIconPath )(
            IMFAudioPolicy * This,
            _Outptr_ LPWSTR *pszPath);
        END_INTERFACE
    } IMFAudioPolicyVtbl;
    interface IMFAudioPolicy
    {
        CONST_VTBL struct IMFAudioPolicyVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetGroupingParam(This,rguidClass) )
    ( (This)->lpVtbl -> GetGroupingParam(This,pguidClass) )
    ( (This)->lpVtbl -> SetDisplayName(This,pszName) )
    ( (This)->lpVtbl -> GetDisplayName(This,pszName) )
    ( (This)->lpVtbl -> SetIconPath(This,pszPath) )
    ( (This)->lpVtbl -> GetIconPath(This,pszPath) )
EXTERN_GUID( MR_AUDIO_POLICY_SERVICE, 0x911fd737, 0x6775, 0x4ab0, 0xa6, 0x14, 0x29, 0x78, 0x62, 0xfd, 0xac, 0x88);
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0041_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0041_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFSampleGrabberSinkCallback;
    typedef struct IMFSampleGrabberSinkCallbackVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFSampleGrabberSinkCallback * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFSampleGrabberSinkCallback * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFSampleGrabberSinkCallback * This);
        HRESULT ( STDMETHODCALLTYPE *OnClockStart )(
            IMFSampleGrabberSinkCallback * This,
                       MFTIME hnsSystemTime,
                       LONGLONG llClockStartOffset);
        HRESULT ( STDMETHODCALLTYPE *OnClockStop )(
            IMFSampleGrabberSinkCallback * This,
                       MFTIME hnsSystemTime);
        HRESULT ( STDMETHODCALLTYPE *OnClockPause )(
            IMFSampleGrabberSinkCallback * This,
                       MFTIME hnsSystemTime);
        HRESULT ( STDMETHODCALLTYPE *OnClockRestart )(
            IMFSampleGrabberSinkCallback * This,
                       MFTIME hnsSystemTime);
        HRESULT ( STDMETHODCALLTYPE *OnClockSetRate )(
            IMFSampleGrabberSinkCallback * This,
                       MFTIME hnsSystemTime,
                       float flRate);
        HRESULT ( STDMETHODCALLTYPE *OnSetPresentationClock )(
            IMFSampleGrabberSinkCallback * This,
                       IMFPresentationClock *pPresentationClock);
        HRESULT ( STDMETHODCALLTYPE *OnProcessSample )(
            IMFSampleGrabberSinkCallback * This,
                       REFGUID guidMajorMediaType,
                       DWORD dwSampleFlags,
                       LONGLONG llSampleTime,
                       LONGLONG llSampleDuration,
            _In_reads_bytes_(dwSampleSize) const BYTE *pSampleBuffer,
                       DWORD dwSampleSize);
        HRESULT ( STDMETHODCALLTYPE *OnShutdown )(
            IMFSampleGrabberSinkCallback * This);
        END_INTERFACE
    } IMFSampleGrabberSinkCallbackVtbl;
    interface IMFSampleGrabberSinkCallback
    {
        CONST_VTBL struct IMFSampleGrabberSinkCallbackVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnClockStart(This,hnsSystemTime,llClockStartOffset) )
    ( (This)->lpVtbl -> OnClockStop(This,hnsSystemTime) )
    ( (This)->lpVtbl -> OnClockPause(This,hnsSystemTime) )
    ( (This)->lpVtbl -> OnClockRestart(This,hnsSystemTime) )
    ( (This)->lpVtbl -> OnClockSetRate(This,hnsSystemTime,flRate) )
    ( (This)->lpVtbl -> OnSetPresentationClock(This,pPresentationClock) )
    ( (This)->lpVtbl -> OnProcessSample(This,guidMajorMediaType,dwSampleFlags,llSampleTime,llSampleDuration,pSampleBuffer,dwSampleSize) )
    ( (This)->lpVtbl -> OnShutdown(This) )
STDAPI
MFCreateSampleGrabberSinkActivate(
    IMFMediaType *pIMFMediaType,
    IMFSampleGrabberSinkCallback* pIMFSampleGrabberSinkCallback,
    _Outptr_ IMFActivate** ppIActivate
    );
EXTERN_GUID( MF_SAMPLEGRABBERSINK_SAMPLE_TIME_OFFSET, 0x62e3d776, 0x8100, 0x4e03, 0xa6, 0xe8, 0xbd, 0x38, 0x57, 0xac, 0x9c, 0x47);
EXTERN_GUID( MF_SAMPLEGRABBERSINK_IGNORE_CLOCK, 0x0efda2c0, 0x2b69, 0x4e2e, 0xab, 0x8d, 0x46, 0xdc, 0xbf, 0xf7, 0xd2, 0x5d);
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0042_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0042_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFSampleGrabberSinkCallback2;
    typedef struct IMFSampleGrabberSinkCallback2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFSampleGrabberSinkCallback2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFSampleGrabberSinkCallback2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFSampleGrabberSinkCallback2 * This);
        HRESULT ( STDMETHODCALLTYPE *OnClockStart )(
            IMFSampleGrabberSinkCallback2 * This,
                       MFTIME hnsSystemTime,
                       LONGLONG llClockStartOffset);
        HRESULT ( STDMETHODCALLTYPE *OnClockStop )(
            IMFSampleGrabberSinkCallback2 * This,
                       MFTIME hnsSystemTime);
        HRESULT ( STDMETHODCALLTYPE *OnClockPause )(
            IMFSampleGrabberSinkCallback2 * This,
                       MFTIME hnsSystemTime);
        HRESULT ( STDMETHODCALLTYPE *OnClockRestart )(
            IMFSampleGrabberSinkCallback2 * This,
                       MFTIME hnsSystemTime);
        HRESULT ( STDMETHODCALLTYPE *OnClockSetRate )(
            IMFSampleGrabberSinkCallback2 * This,
                       MFTIME hnsSystemTime,
                       float flRate);
        HRESULT ( STDMETHODCALLTYPE *OnSetPresentationClock )(
            IMFSampleGrabberSinkCallback2 * This,
                       IMFPresentationClock *pPresentationClock);
        HRESULT ( STDMETHODCALLTYPE *OnProcessSample )(
            IMFSampleGrabberSinkCallback2 * This,
                       REFGUID guidMajorMediaType,
                       DWORD dwSampleFlags,
                       LONGLONG llSampleTime,
                       LONGLONG llSampleDuration,
            _In_reads_bytes_(dwSampleSize) const BYTE *pSampleBuffer,
                       DWORD dwSampleSize);
        HRESULT ( STDMETHODCALLTYPE *OnShutdown )(
            IMFSampleGrabberSinkCallback2 * This);
        HRESULT ( STDMETHODCALLTYPE *OnProcessSampleEx )(
            IMFSampleGrabberSinkCallback2 * This,
                       REFGUID guidMajorMediaType,
                       DWORD dwSampleFlags,
                       LONGLONG llSampleTime,
                       LONGLONG llSampleDuration,
            _In_reads_bytes_(dwSampleSize) const BYTE *pSampleBuffer,
                       DWORD dwSampleSize,
            _In_ IMFAttributes *pAttributes);
        END_INTERFACE
    } IMFSampleGrabberSinkCallback2Vtbl;
    interface IMFSampleGrabberSinkCallback2
    {
        CONST_VTBL struct IMFSampleGrabberSinkCallback2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnClockStart(This,hnsSystemTime,llClockStartOffset) )
    ( (This)->lpVtbl -> OnClockStop(This,hnsSystemTime) )
    ( (This)->lpVtbl -> OnClockPause(This,hnsSystemTime) )
    ( (This)->lpVtbl -> OnClockRestart(This,hnsSystemTime) )
    ( (This)->lpVtbl -> OnClockSetRate(This,hnsSystemTime,flRate) )
    ( (This)->lpVtbl -> OnSetPresentationClock(This,pPresentationClock) )
    ( (This)->lpVtbl -> OnProcessSample(This,guidMajorMediaType,dwSampleFlags,llSampleTime,llSampleDuration,pSampleBuffer,dwSampleSize) )
    ( (This)->lpVtbl -> OnShutdown(This) )
    ( (This)->lpVtbl -> OnProcessSampleEx(This,guidMajorMediaType,dwSampleFlags,llSampleTime,llSampleDuration,pSampleBuffer,dwSampleSize,pAttributes) )
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
EXTERN_GUID( MF_QUALITY_SERVICES, 0xb7e2be11, 0x2f96, 0x4640, 0xb5, 0x2c, 0x28, 0x23, 0x65, 0xbd, 0xf1, 0x6c);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0043_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0043_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFWorkQueueServices;
    typedef struct IMFWorkQueueServicesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMFWorkQueueServices * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMFWorkQueueServices * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMFWorkQueueServices * This);
                      HRESULT ( STDMETHODCALLTYPE *BeginRegisterTopologyWorkQueuesWithMMCSS )(
            IMFWorkQueueServices * This,
                       IMFAsyncCallback *pCallback,
                       IUnknown *pState);
                      HRESULT ( STDMETHODCALLTYPE *EndRegisterTopologyWorkQueuesWithMMCSS )(
            IMFWorkQueueServices * This,
                       IMFAsyncResult *pResult);
                      HRESULT ( STDMETHODCALLTYPE *BeginUnregisterTopologyWorkQueuesWithMMCSS )(
            IMFWorkQueueServices * This,
                       IMFAsyncCallback *pCallback,
                       IUnknown *pState);
                      HRESULT ( STDMETHODCALLTYPE *EndUnregisterTopologyWorkQueuesWithMMCSS )(
            IMFWorkQueueServices * This,
                       IMFAsyncResult *pResult);
        HRESULT ( STDMETHODCALLTYPE *GetTopologyWorkQueueMMCSSClass )(
            __RPC__in IMFWorkQueueServices * This,
                       DWORD dwTopologyWorkQueueId,
                                 __RPC__out_ecount_full(*pcchClass) LPWSTR pwszClass,
                            __RPC__inout DWORD *pcchClass);
        HRESULT ( STDMETHODCALLTYPE *GetTopologyWorkQueueMMCSSTaskId )(
            __RPC__in IMFWorkQueueServices * This,
                       DWORD dwTopologyWorkQueueId,
                        __RPC__out DWORD *pdwTaskId);
                      HRESULT ( STDMETHODCALLTYPE *BeginRegisterPlatformWorkQueueWithMMCSS )(
            IMFWorkQueueServices * This,
                       DWORD dwPlatformWorkQueue,
                       LPCWSTR wszClass,
                       DWORD dwTaskId,
                       IMFAsyncCallback *pCallback,
                       IUnknown *pState);
                      HRESULT ( STDMETHODCALLTYPE *EndRegisterPlatformWorkQueueWithMMCSS )(
            IMFWorkQueueServices * This,
                       IMFAsyncResult *pResult,
            _Out_ DWORD *pdwTaskId);
                      HRESULT ( STDMETHODCALLTYPE *BeginUnregisterPlatformWorkQueueWithMMCSS )(
            IMFWorkQueueServices * This,
                       DWORD dwPlatformWorkQueue,
                       IMFAsyncCallback *pCallback,
                       IUnknown *pState);
                      HRESULT ( STDMETHODCALLTYPE *EndUnregisterPlatformWorkQueueWithMMCSS )(
            IMFWorkQueueServices * This,
                       IMFAsyncResult *pResult);
        HRESULT ( STDMETHODCALLTYPE *GetPlaftormWorkQueueMMCSSClass )(
            __RPC__in IMFWorkQueueServices * This,
                       DWORD dwPlatformWorkQueueId,
                                 __RPC__out_ecount_full(*pcchClass) LPWSTR pwszClass,
                            __RPC__inout DWORD *pcchClass);
        HRESULT ( STDMETHODCALLTYPE *GetPlatformWorkQueueMMCSSTaskId )(
            __RPC__in IMFWorkQueueServices * This,
                       DWORD dwPlatformWorkQueueId,
                        __RPC__out DWORD *pdwTaskId);
        END_INTERFACE
    } IMFWorkQueueServicesVtbl;
    interface IMFWorkQueueServices
    {
        CONST_VTBL struct IMFWorkQueueServicesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> BeginRegisterTopologyWorkQueuesWithMMCSS(This,pCallback,pState) )
    ( (This)->lpVtbl -> EndRegisterTopologyWorkQueuesWithMMCSS(This,pResult) )
    ( (This)->lpVtbl -> BeginUnregisterTopologyWorkQueuesWithMMCSS(This,pCallback,pState) )
    ( (This)->lpVtbl -> EndUnregisterTopologyWorkQueuesWithMMCSS(This,pResult) )
    ( (This)->lpVtbl -> GetTopologyWorkQueueMMCSSClass(This,dwTopologyWorkQueueId,pwszClass,pcchClass) )
    ( (This)->lpVtbl -> GetTopologyWorkQueueMMCSSTaskId(This,dwTopologyWorkQueueId,pdwTaskId) )
    ( (This)->lpVtbl -> BeginRegisterPlatformWorkQueueWithMMCSS(This,dwPlatformWorkQueue,wszClass,dwTaskId,pCallback,pState) )
    ( (This)->lpVtbl -> EndRegisterPlatformWorkQueueWithMMCSS(This,pResult,pdwTaskId) )
    ( (This)->lpVtbl -> BeginUnregisterPlatformWorkQueueWithMMCSS(This,dwPlatformWorkQueue,pCallback,pState) )
    ( (This)->lpVtbl -> EndUnregisterPlatformWorkQueueWithMMCSS(This,pResult) )
    ( (This)->lpVtbl -> GetPlaftormWorkQueueMMCSSClass(This,dwPlatformWorkQueueId,pwszClass,pcchClass) )
    ( (This)->lpVtbl -> GetPlatformWorkQueueMMCSSTaskId(This,dwPlatformWorkQueueId,pdwTaskId) )
                HRESULT STDMETHODCALLTYPE IMFWorkQueueServices_RemoteBeginRegisterTopologyWorkQueuesWithMMCSS_Proxy(
    __RPC__in IMFWorkQueueServices * This,
               __RPC__in_opt IMFRemoteAsyncCallback *pCallback);
void __RPC_STUB IMFWorkQueueServices_RemoteBeginRegisterTopologyWorkQueuesWithMMCSS_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                HRESULT STDMETHODCALLTYPE IMFWorkQueueServices_RemoteEndRegisterTopologyWorkQueuesWithMMCSS_Proxy(
    __RPC__in IMFWorkQueueServices * This,
               __RPC__in_opt IUnknown *pResult);
void __RPC_STUB IMFWorkQueueServices_RemoteEndRegisterTopologyWorkQueuesWithMMCSS_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                HRESULT STDMETHODCALLTYPE IMFWorkQueueServices_RemoteBeginUnregisterTopologyWorkQueuesWithMMCSS_Proxy(
    __RPC__in IMFWorkQueueServices * This,
               __RPC__in_opt IMFRemoteAsyncCallback *pCallback);
void __RPC_STUB IMFWorkQueueServices_RemoteBeginUnregisterTopologyWorkQueuesWithMMCSS_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                HRESULT STDMETHODCALLTYPE IMFWorkQueueServices_RemoteEndUnregisterTopologyWorkQueuesWithMMCSS_Proxy(
    __RPC__in IMFWorkQueueServices * This,
               __RPC__in_opt IUnknown *pResult);
void __RPC_STUB IMFWorkQueueServices_RemoteEndUnregisterTopologyWorkQueuesWithMMCSS_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                HRESULT STDMETHODCALLTYPE IMFWorkQueueServices_RemoteBeginRegisterPlatformWorkQueueWithMMCSS_Proxy(
    __RPC__in IMFWorkQueueServices * This,
               DWORD dwPlatformWorkQueue,
               __RPC__in LPCWSTR wszClass,
               DWORD dwTaskId,
               __RPC__in_opt IMFRemoteAsyncCallback *pCallback);
void __RPC_STUB IMFWorkQueueServices_RemoteBeginRegisterPlatformWorkQueueWithMMCSS_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                HRESULT STDMETHODCALLTYPE IMFWorkQueueServices_RemoteEndRegisterPlatformWorkQueueWithMMCSS_Proxy(
    __RPC__in IMFWorkQueueServices * This,
               __RPC__in_opt IUnknown *pResult,
                __RPC__out DWORD *pdwTaskId);
void __RPC_STUB IMFWorkQueueServices_RemoteEndRegisterPlatformWorkQueueWithMMCSS_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                HRESULT STDMETHODCALLTYPE IMFWorkQueueServices_RemoteBeginUnregisterPlatformWorkQueueWithMMCSS_Proxy(
    __RPC__in IMFWorkQueueServices * This,
               DWORD dwPlatformWorkQueue,
               __RPC__in_opt IMFRemoteAsyncCallback *pCallback);
void __RPC_STUB IMFWorkQueueServices_RemoteBeginUnregisterPlatformWorkQueueWithMMCSS_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                HRESULT STDMETHODCALLTYPE IMFWorkQueueServices_RemoteEndUnregisterPlatformWorkQueueWithMMCSS_Proxy(
    __RPC__in IMFWorkQueueServices * This,
               __RPC__in_opt IUnknown *pResult);
void __RPC_STUB IMFWorkQueueServices_RemoteEndUnregisterPlatformWorkQueueWithMMCSS_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
EXTERN_GUID( MF_WORKQUEUE_SERVICES, 0x8e37d489, 0x41e0, 0x413a, 0x90, 0x68, 0x28, 0x7c, 0x88, 0x6d, 0x8d, 0xda);
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0044_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0044_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFWorkQueueServicesEx;
    typedef struct IMFWorkQueueServicesExVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMFWorkQueueServicesEx * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMFWorkQueueServicesEx * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMFWorkQueueServicesEx * This);
                      HRESULT ( STDMETHODCALLTYPE *BeginRegisterTopologyWorkQueuesWithMMCSS )(
            IMFWorkQueueServicesEx * This,
                       IMFAsyncCallback *pCallback,
                       IUnknown *pState);
                      HRESULT ( STDMETHODCALLTYPE *EndRegisterTopologyWorkQueuesWithMMCSS )(
            IMFWorkQueueServicesEx * This,
                       IMFAsyncResult *pResult);
                      HRESULT ( STDMETHODCALLTYPE *BeginUnregisterTopologyWorkQueuesWithMMCSS )(
            IMFWorkQueueServicesEx * This,
                       IMFAsyncCallback *pCallback,
                       IUnknown *pState);
                      HRESULT ( STDMETHODCALLTYPE *EndUnregisterTopologyWorkQueuesWithMMCSS )(
            IMFWorkQueueServicesEx * This,
                       IMFAsyncResult *pResult);
        HRESULT ( STDMETHODCALLTYPE *GetTopologyWorkQueueMMCSSClass )(
            __RPC__in IMFWorkQueueServicesEx * This,
                       DWORD dwTopologyWorkQueueId,
                                 __RPC__out_ecount_full(*pcchClass) LPWSTR pwszClass,
                            __RPC__inout DWORD *pcchClass);
        HRESULT ( STDMETHODCALLTYPE *GetTopologyWorkQueueMMCSSTaskId )(
            __RPC__in IMFWorkQueueServicesEx * This,
                       DWORD dwTopologyWorkQueueId,
                        __RPC__out DWORD *pdwTaskId);
                      HRESULT ( STDMETHODCALLTYPE *BeginRegisterPlatformWorkQueueWithMMCSS )(
            IMFWorkQueueServicesEx * This,
                       DWORD dwPlatformWorkQueue,
                       LPCWSTR wszClass,
                       DWORD dwTaskId,
                       IMFAsyncCallback *pCallback,
                       IUnknown *pState);
                      HRESULT ( STDMETHODCALLTYPE *EndRegisterPlatformWorkQueueWithMMCSS )(
            IMFWorkQueueServicesEx * This,
                       IMFAsyncResult *pResult,
            _Out_ DWORD *pdwTaskId);
                      HRESULT ( STDMETHODCALLTYPE *BeginUnregisterPlatformWorkQueueWithMMCSS )(
            IMFWorkQueueServicesEx * This,
                       DWORD dwPlatformWorkQueue,
                       IMFAsyncCallback *pCallback,
                       IUnknown *pState);
                      HRESULT ( STDMETHODCALLTYPE *EndUnregisterPlatformWorkQueueWithMMCSS )(
            IMFWorkQueueServicesEx * This,
                       IMFAsyncResult *pResult);
        HRESULT ( STDMETHODCALLTYPE *GetPlaftormWorkQueueMMCSSClass )(
            __RPC__in IMFWorkQueueServicesEx * This,
                       DWORD dwPlatformWorkQueueId,
                                 __RPC__out_ecount_full(*pcchClass) LPWSTR pwszClass,
                            __RPC__inout DWORD *pcchClass);
        HRESULT ( STDMETHODCALLTYPE *GetPlatformWorkQueueMMCSSTaskId )(
            __RPC__in IMFWorkQueueServicesEx * This,
                       DWORD dwPlatformWorkQueueId,
                        __RPC__out DWORD *pdwTaskId);
        HRESULT ( STDMETHODCALLTYPE *GetTopologyWorkQueueMMCSSPriority )(
            __RPC__in IMFWorkQueueServicesEx * This,
                       DWORD dwTopologyWorkQueueId,
                        __RPC__out LONG *plPriority);
                      HRESULT ( STDMETHODCALLTYPE *BeginRegisterPlatformWorkQueueWithMMCSSEx )(
            IMFWorkQueueServicesEx * This,
                       DWORD dwPlatformWorkQueue,
                       LPCWSTR wszClass,
                       DWORD dwTaskId,
                       LONG lPriority,
                       IMFAsyncCallback *pCallback,
                       IUnknown *pState);
        HRESULT ( STDMETHODCALLTYPE *GetPlatformWorkQueueMMCSSPriority )(
            __RPC__in IMFWorkQueueServicesEx * This,
                       DWORD dwPlatformWorkQueueId,
                        __RPC__out LONG *plPriority);
        END_INTERFACE
    } IMFWorkQueueServicesExVtbl;
    interface IMFWorkQueueServicesEx
    {
        CONST_VTBL struct IMFWorkQueueServicesExVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> BeginRegisterTopologyWorkQueuesWithMMCSS(This,pCallback,pState) )
    ( (This)->lpVtbl -> EndRegisterTopologyWorkQueuesWithMMCSS(This,pResult) )
    ( (This)->lpVtbl -> BeginUnregisterTopologyWorkQueuesWithMMCSS(This,pCallback,pState) )
    ( (This)->lpVtbl -> EndUnregisterTopologyWorkQueuesWithMMCSS(This,pResult) )
    ( (This)->lpVtbl -> GetTopologyWorkQueueMMCSSClass(This,dwTopologyWorkQueueId,pwszClass,pcchClass) )
    ( (This)->lpVtbl -> GetTopologyWorkQueueMMCSSTaskId(This,dwTopologyWorkQueueId,pdwTaskId) )
    ( (This)->lpVtbl -> BeginRegisterPlatformWorkQueueWithMMCSS(This,dwPlatformWorkQueue,wszClass,dwTaskId,pCallback,pState) )
    ( (This)->lpVtbl -> EndRegisterPlatformWorkQueueWithMMCSS(This,pResult,pdwTaskId) )
    ( (This)->lpVtbl -> BeginUnregisterPlatformWorkQueueWithMMCSS(This,dwPlatformWorkQueue,pCallback,pState) )
    ( (This)->lpVtbl -> EndUnregisterPlatformWorkQueueWithMMCSS(This,pResult) )
    ( (This)->lpVtbl -> GetPlaftormWorkQueueMMCSSClass(This,dwPlatformWorkQueueId,pwszClass,pcchClass) )
    ( (This)->lpVtbl -> GetPlatformWorkQueueMMCSSTaskId(This,dwPlatformWorkQueueId,pdwTaskId) )
    ( (This)->lpVtbl -> GetTopologyWorkQueueMMCSSPriority(This,dwTopologyWorkQueueId,plPriority) )
    ( (This)->lpVtbl -> BeginRegisterPlatformWorkQueueWithMMCSSEx(This,dwPlatformWorkQueue,wszClass,dwTaskId,lPriority,pCallback,pState) )
    ( (This)->lpVtbl -> GetPlatformWorkQueueMMCSSPriority(This,dwPlatformWorkQueueId,plPriority) )
                HRESULT STDMETHODCALLTYPE IMFWorkQueueServicesEx_RemoteBeginRegisterPlatformWorkQueueWithMMCSSEx_Proxy(
    __RPC__in IMFWorkQueueServicesEx * This,
               DWORD dwPlatformWorkQueue,
               __RPC__in LPCWSTR wszClass,
               DWORD dwTaskId,
               LONG lPriority,
               __RPC__in_opt IMFRemoteAsyncCallback *pCallback);
void __RPC_STUB IMFWorkQueueServicesEx_RemoteBeginRegisterPlatformWorkQueueWithMMCSSEx_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
typedef
enum _MF_QUALITY_DROP_MODE
    {
        MF_DROP_MODE_NONE = 0,
        MF_DROP_MODE_1 = 0x1,
        MF_DROP_MODE_2 = 0x2,
        MF_DROP_MODE_3 = 0x3,
        MF_DROP_MODE_4 = 0x4,
        MF_DROP_MODE_5 = 0x5,
        MF_NUM_DROP_MODES = 0x6
    } MF_QUALITY_DROP_MODE;
typedef
enum _MF_QUALITY_LEVEL
    {
        MF_QUALITY_NORMAL = 0,
        MF_QUALITY_NORMAL_MINUS_1 = 0x1,
        MF_QUALITY_NORMAL_MINUS_2 = 0x2,
        MF_QUALITY_NORMAL_MINUS_3 = 0x3,
        MF_QUALITY_NORMAL_MINUS_4 = 0x4,
        MF_QUALITY_NORMAL_MINUS_5 = 0x5,
        MF_NUM_QUALITY_LEVELS = 0x6
    } MF_QUALITY_LEVEL;
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
typedef
enum _MF_QUALITY_ADVISE_FLAGS
    {
        MF_QUALITY_CANNOT_KEEP_UP = 0x1
    } MF_QUALITY_ADVISE_FLAGS;
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0045_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0045_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFQualityManager;
    typedef struct IMFQualityManagerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFQualityManager * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFQualityManager * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFQualityManager * This);
        HRESULT ( STDMETHODCALLTYPE *NotifyTopology )(
            IMFQualityManager * This,
                       IMFTopology *pTopology);
        HRESULT ( STDMETHODCALLTYPE *NotifyPresentationClock )(
            IMFQualityManager * This,
                       IMFPresentationClock *pClock);
        HRESULT ( STDMETHODCALLTYPE *NotifyProcessInput )(
            IMFQualityManager * This,
                       IMFTopologyNode *pNode,
                       long lInputIndex,
                       IMFSample *pSample);
        HRESULT ( STDMETHODCALLTYPE *NotifyProcessOutput )(
            IMFQualityManager * This,
                       IMFTopologyNode *pNode,
                       long lOutputIndex,
                       IMFSample *pSample);
        HRESULT ( STDMETHODCALLTYPE *NotifyQualityEvent )(
            IMFQualityManager * This,
                       IUnknown *pObject,
                       IMFMediaEvent *pEvent);
        HRESULT ( STDMETHODCALLTYPE *Shutdown )(
            IMFQualityManager * This);
        END_INTERFACE
    } IMFQualityManagerVtbl;
    interface IMFQualityManager
    {
        CONST_VTBL struct IMFQualityManagerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> NotifyTopology(This,pTopology) )
    ( (This)->lpVtbl -> NotifyPresentationClock(This,pClock) )
    ( (This)->lpVtbl -> NotifyProcessInput(This,pNode,lInputIndex,pSample) )
    ( (This)->lpVtbl -> NotifyProcessOutput(This,pNode,lOutputIndex,pSample) )
    ( (This)->lpVtbl -> NotifyQualityEvent(This,pObject,pEvent) )
    ( (This)->lpVtbl -> Shutdown(This) )
STDAPI MFCreateStandardQualityManager(
    _Outptr_ IMFQualityManager **ppQualityManager );
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
EXTERN_GUID( MF_QUALITY_NOTIFY_PROCESSING_LATENCY, 0xf6b44af8, 0x604d, 0x46fe, 0xa9, 0x5d, 0x45, 0x47, 0x9b, 0x10, 0xc9, 0xbc );
EXTERN_GUID( MF_QUALITY_NOTIFY_SAMPLE_LAG, 0x30d15206, 0xed2a, 0x4760, 0xbe, 0x17, 0xeb, 0x4a, 0x9f, 0x12, 0x29, 0x5c );
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0046_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0046_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFQualityAdvise;
    typedef struct IMFQualityAdviseVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMFQualityAdvise * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMFQualityAdvise * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMFQualityAdvise * This);
        HRESULT ( STDMETHODCALLTYPE *SetDropMode )(
            __RPC__in IMFQualityAdvise * This,
                       MF_QUALITY_DROP_MODE eDropMode);
        HRESULT ( STDMETHODCALLTYPE *SetQualityLevel )(
            __RPC__in IMFQualityAdvise * This,
                       MF_QUALITY_LEVEL eQualityLevel);
        HRESULT ( STDMETHODCALLTYPE *GetDropMode )(
            __RPC__in IMFQualityAdvise * This,
            _Out_ MF_QUALITY_DROP_MODE *peDropMode);
        HRESULT ( STDMETHODCALLTYPE *GetQualityLevel )(
            __RPC__in IMFQualityAdvise * This,
            _Out_ MF_QUALITY_LEVEL *peQualityLevel);
        HRESULT ( STDMETHODCALLTYPE *DropTime )(
            __RPC__in IMFQualityAdvise * This,
                       LONGLONG hnsAmountToDrop);
        END_INTERFACE
    } IMFQualityAdviseVtbl;
    interface IMFQualityAdvise
    {
        CONST_VTBL struct IMFQualityAdviseVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetDropMode(This,eDropMode) )
    ( (This)->lpVtbl -> SetQualityLevel(This,eQualityLevel) )
    ( (This)->lpVtbl -> GetDropMode(This,peDropMode) )
    ( (This)->lpVtbl -> GetQualityLevel(This,peQualityLevel) )
    ( (This)->lpVtbl -> DropTime(This,hnsAmountToDrop) )
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0047_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0047_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFQualityAdvise2;
    typedef struct IMFQualityAdvise2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMFQualityAdvise2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMFQualityAdvise2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMFQualityAdvise2 * This);
        HRESULT ( STDMETHODCALLTYPE *SetDropMode )(
            __RPC__in IMFQualityAdvise2 * This,
                       MF_QUALITY_DROP_MODE eDropMode);
        HRESULT ( STDMETHODCALLTYPE *SetQualityLevel )(
            __RPC__in IMFQualityAdvise2 * This,
                       MF_QUALITY_LEVEL eQualityLevel);
        HRESULT ( STDMETHODCALLTYPE *GetDropMode )(
            __RPC__in IMFQualityAdvise2 * This,
            _Out_ MF_QUALITY_DROP_MODE *peDropMode);
        HRESULT ( STDMETHODCALLTYPE *GetQualityLevel )(
            __RPC__in IMFQualityAdvise2 * This,
            _Out_ MF_QUALITY_LEVEL *peQualityLevel);
        HRESULT ( STDMETHODCALLTYPE *DropTime )(
            __RPC__in IMFQualityAdvise2 * This,
                       LONGLONG hnsAmountToDrop);
        HRESULT ( STDMETHODCALLTYPE *NotifyQualityEvent )(
            __RPC__in IMFQualityAdvise2 * This,
                       __RPC__in_opt IMFMediaEvent *pEvent,
                        __RPC__out DWORD *pdwFlags);
        END_INTERFACE
    } IMFQualityAdvise2Vtbl;
    interface IMFQualityAdvise2
    {
        CONST_VTBL struct IMFQualityAdvise2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetDropMode(This,eDropMode) )
    ( (This)->lpVtbl -> SetQualityLevel(This,eQualityLevel) )
    ( (This)->lpVtbl -> GetDropMode(This,peDropMode) )
    ( (This)->lpVtbl -> GetQualityLevel(This,peQualityLevel) )
    ( (This)->lpVtbl -> DropTime(This,hnsAmountToDrop) )
    ( (This)->lpVtbl -> NotifyQualityEvent(This,pEvent,pdwFlags) )
EXTERN_C const IID IID_IMFQualityAdviseLimits;
    typedef struct IMFQualityAdviseLimitsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMFQualityAdviseLimits * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMFQualityAdviseLimits * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMFQualityAdviseLimits * This);
        HRESULT ( STDMETHODCALLTYPE *GetMaximumDropMode )(
            __RPC__in IMFQualityAdviseLimits * This,
            _Out_ MF_QUALITY_DROP_MODE *peDropMode);
        HRESULT ( STDMETHODCALLTYPE *GetMinimumQualityLevel )(
            __RPC__in IMFQualityAdviseLimits * This,
            _Out_ MF_QUALITY_LEVEL *peQualityLevel);
        END_INTERFACE
    } IMFQualityAdviseLimitsVtbl;
    interface IMFQualityAdviseLimits
    {
        CONST_VTBL struct IMFQualityAdviseLimitsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetMaximumDropMode(This,peDropMode) )
    ( (This)->lpVtbl -> GetMinimumQualityLevel(This,peQualityLevel) )
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0049_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0049_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFRealTimeClient;
    typedef struct IMFRealTimeClientVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFRealTimeClient * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFRealTimeClient * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFRealTimeClient * This);
        HRESULT ( STDMETHODCALLTYPE *RegisterThreads )(
            IMFRealTimeClient * This,
                       DWORD dwTaskIndex,
                       LPCWSTR wszClass);
        HRESULT ( STDMETHODCALLTYPE *UnregisterThreads )(
            IMFRealTimeClient * This);
        HRESULT ( STDMETHODCALLTYPE *SetWorkQueue )(
            IMFRealTimeClient * This,
                       DWORD dwWorkQueueId);
        END_INTERFACE
    } IMFRealTimeClientVtbl;
    interface IMFRealTimeClient
    {
        CONST_VTBL struct IMFRealTimeClientVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> RegisterThreads(This,dwTaskIndex,wszClass) )
    ( (This)->lpVtbl -> UnregisterThreads(This) )
    ( (This)->lpVtbl -> SetWorkQueue(This,dwWorkQueueId) )
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0050_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0050_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFRealTimeClientEx;
    typedef struct IMFRealTimeClientExVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMFRealTimeClientEx * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMFRealTimeClientEx * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMFRealTimeClientEx * This);
        HRESULT ( STDMETHODCALLTYPE *RegisterThreadsEx )(
            __RPC__in IMFRealTimeClientEx * This,
                            __RPC__inout DWORD *pdwTaskIndex,
                       __RPC__in LPCWSTR wszClassName,
                       LONG lBasePriority);
        HRESULT ( STDMETHODCALLTYPE *UnregisterThreads )(
            __RPC__in IMFRealTimeClientEx * This);
        HRESULT ( STDMETHODCALLTYPE *SetWorkQueueEx )(
            __RPC__in IMFRealTimeClientEx * This,
                       DWORD dwMultithreadedWorkQueueId,
                       LONG lWorkItemBasePriority);
        END_INTERFACE
    } IMFRealTimeClientExVtbl;
    interface IMFRealTimeClientEx
    {
        CONST_VTBL struct IMFRealTimeClientExVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> RegisterThreadsEx(This,pdwTaskIndex,wszClassName,lBasePriority) )
    ( (This)->lpVtbl -> UnregisterThreads(This) )
    ( (This)->lpVtbl -> SetWorkQueueEx(This,dwMultithreadedWorkQueueId,lWorkItemBasePriority) )
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef DWORD MFSequencerElementId;
typedef
enum _MFSequencerTopologyFlags
    {
        SequencerTopologyFlags_Last = 0x1
    } MFSequencerTopologyFlags;
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0051_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0051_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFSequencerSource;
    typedef struct IMFSequencerSourceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFSequencerSource * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFSequencerSource * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFSequencerSource * This);
        HRESULT ( STDMETHODCALLTYPE *AppendTopology )(
            IMFSequencerSource * This,
                       IMFTopology *pTopology,
                       DWORD dwFlags,
            _Out_ MFSequencerElementId *pdwId);
        HRESULT ( STDMETHODCALLTYPE *DeleteTopology )(
            IMFSequencerSource * This,
                       MFSequencerElementId dwId);
        HRESULT ( STDMETHODCALLTYPE *GetPresentationContext )(
            IMFSequencerSource * This,
                       IMFPresentationDescriptor *pPD,
            _Out_opt_ MFSequencerElementId *pId,
            _Out_opt_ IMFTopology **ppTopology);
        HRESULT ( STDMETHODCALLTYPE *UpdateTopology )(
            IMFSequencerSource * This,
                       MFSequencerElementId dwId,
                       IMFTopology *pTopology);
        HRESULT ( STDMETHODCALLTYPE *UpdateTopologyFlags )(
            IMFSequencerSource * This,
                       MFSequencerElementId dwId,
                       DWORD dwFlags);
        END_INTERFACE
    } IMFSequencerSourceVtbl;
    interface IMFSequencerSource
    {
        CONST_VTBL struct IMFSequencerSourceVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AppendTopology(This,pTopology,dwFlags,pdwId) )
    ( (This)->lpVtbl -> DeleteTopology(This,dwId) )
    ( (This)->lpVtbl -> GetPresentationContext(This,pPD,pId,ppTopology) )
    ( (This)->lpVtbl -> UpdateTopology(This,dwId,pTopology) )
    ( (This)->lpVtbl -> UpdateTopologyFlags(This,dwId,dwFlags) )
EXTERN_GUID( MF_TIME_FORMAT_SEGMENT_OFFSET, 0xc8b8be77, 0x869c, 0x431d, 0x81, 0x2e, 0x16, 0x96, 0x93, 0xf6, 0x5a, 0x39 );
STDAPI MFCreateSequencerSource(
    IUnknown *pReserved,
    _Outptr_ IMFSequencerSource **ppSequencerSource
    );
STDAPI MFCreateSequencerSegmentOffset(
    MFSequencerElementId dwId,
    MFTIME hnsOffset,
    _Out_ PROPVARIANT *pvarSegmentOffset
    );
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
STDAPI MFCreateAggregateSource(
    _In_ IMFCollection *pSourceCollection,
    _Outptr_ IMFMediaSource **ppAggSource
    );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0052_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0052_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFMediaSourceTopologyProvider;
    typedef struct IMFMediaSourceTopologyProviderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMFMediaSourceTopologyProvider * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMFMediaSourceTopologyProvider * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMFMediaSourceTopologyProvider * This);
        HRESULT ( STDMETHODCALLTYPE *GetMediaSourceTopology )(
            __RPC__in IMFMediaSourceTopologyProvider * This,
                       __RPC__in_opt IMFPresentationDescriptor *pPresentationDescriptor,
                        __RPC__deref_out_opt IMFTopology **ppTopology);
        END_INTERFACE
    } IMFMediaSourceTopologyProviderVtbl;
    interface IMFMediaSourceTopologyProvider
    {
        CONST_VTBL struct IMFMediaSourceTopologyProviderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetMediaSourceTopology(This,pPresentationDescriptor,ppTopology) )
EXTERN_C const IID IID_IMFMediaSourcePresentationProvider;
    typedef struct IMFMediaSourcePresentationProviderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMFMediaSourcePresentationProvider * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMFMediaSourcePresentationProvider * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMFMediaSourcePresentationProvider * This);
        HRESULT ( STDMETHODCALLTYPE *ForceEndOfPresentation )(
            __RPC__in IMFMediaSourcePresentationProvider * This,
                       __RPC__in_opt IMFPresentationDescriptor *pPresentationDescriptor);
        END_INTERFACE
    } IMFMediaSourcePresentationProviderVtbl;
    interface IMFMediaSourcePresentationProvider
    {
        CONST_VTBL struct IMFMediaSourcePresentationProviderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> ForceEndOfPresentation(This,pPresentationDescriptor) )
EXTERN_GUID( MF_SOURCE_PRESENTATION_PROVIDER_SERVICE, 0xe002aadc, 0xf4af, 0x4ee5, 0x98, 0x47, 0x05, 0x3e, 0xdf, 0x84, 0x04, 0x26 );
typedef struct _MFTOPONODE_ATTRIBUTE_UPDATE
    {
    TOPOID NodeId;
    GUID guidAttributeKey;
    MF_ATTRIBUTE_TYPE attrType;
                                   union
        {
                       UINT32 u32;
                       UINT64 u64;
                       double d;
        } ;
    } MFTOPONODE_ATTRIBUTE_UPDATE;
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0054_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0054_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFTopologyNodeAttributeEditor;
    typedef struct IMFTopologyNodeAttributeEditorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMFTopologyNodeAttributeEditor * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMFTopologyNodeAttributeEditor * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMFTopologyNodeAttributeEditor * This);
        HRESULT ( STDMETHODCALLTYPE *UpdateNodeAttributes )(
            __RPC__in IMFTopologyNodeAttributeEditor * This,
                       TOPOID TopoId,
                       DWORD cUpdates,
                                __RPC__in_ecount_full(cUpdates) MFTOPONODE_ATTRIBUTE_UPDATE *pUpdates);
        END_INTERFACE
    } IMFTopologyNodeAttributeEditorVtbl;
    interface IMFTopologyNodeAttributeEditor
    {
        CONST_VTBL struct IMFTopologyNodeAttributeEditorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> UpdateNodeAttributes(This,TopoId,cUpdates,pUpdates) )
EXTERN_GUID( MF_TOPONODE_ATTRIBUTE_EDITOR_SERVICE, 0x65656e1a, 0x077f, 0x4472, 0x83, 0xef, 0x31, 0x6f, 0x11, 0xd5, 0x08, 0x7a );
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
typedef struct _MF_LEAKY_BUCKET_PAIR
    {
    DWORD dwBitrate;
    DWORD msBufferWindow;
    } MF_LEAKY_BUCKET_PAIR;
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
typedef struct _MFBYTESTREAM_BUFFERING_PARAMS
    {
    QWORD cbTotalFileSize;
    QWORD cbPlayableDataSize;
    MF_LEAKY_BUCKET_PAIR *prgBuckets;
    DWORD cBuckets;
    QWORD qwNetBufferingTime;
    QWORD qwExtraBufferingTimeDuringSeek;
    QWORD qwPlayDuration;
    float dRate;
    } MFBYTESTREAM_BUFFERING_PARAMS;
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0055_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0055_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFByteStreamBuffering;
    typedef struct IMFByteStreamBufferingVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMFByteStreamBuffering * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMFByteStreamBuffering * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMFByteStreamBuffering * This);
        HRESULT ( STDMETHODCALLTYPE *SetBufferingParams )(
            __RPC__in IMFByteStreamBuffering * This,
                       __RPC__in MFBYTESTREAM_BUFFERING_PARAMS *pParams);
        HRESULT ( STDMETHODCALLTYPE *EnableBuffering )(
            __RPC__in IMFByteStreamBuffering * This,
                       BOOL fEnable);
        HRESULT ( STDMETHODCALLTYPE *StopBuffering )(
            __RPC__in IMFByteStreamBuffering * This);
        END_INTERFACE
    } IMFByteStreamBufferingVtbl;
    interface IMFByteStreamBuffering
    {
        CONST_VTBL struct IMFByteStreamBufferingVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetBufferingParams(This,pParams) )
    ( (This)->lpVtbl -> EnableBuffering(This,fEnable) )
    ( (This)->lpVtbl -> StopBuffering(This) )
EXTERN_C const IID IID_IMFByteStreamCacheControl;
    typedef struct IMFByteStreamCacheControlVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMFByteStreamCacheControl * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMFByteStreamCacheControl * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMFByteStreamCacheControl * This);
        HRESULT ( STDMETHODCALLTYPE *StopBackgroundTransfer )(
            __RPC__in IMFByteStreamCacheControl * This);
        END_INTERFACE
    } IMFByteStreamCacheControlVtbl;
    interface IMFByteStreamCacheControl
    {
        CONST_VTBL struct IMFByteStreamCacheControlVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> StopBackgroundTransfer(This) )
EXTERN_C const IID IID_IMFByteStreamTimeSeek;
    typedef struct IMFByteStreamTimeSeekVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMFByteStreamTimeSeek * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMFByteStreamTimeSeek * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMFByteStreamTimeSeek * This);
        HRESULT ( STDMETHODCALLTYPE *IsTimeSeekSupported )(
            __RPC__in IMFByteStreamTimeSeek * This,
                        __RPC__out BOOL *pfTimeSeekIsSupported);
        HRESULT ( STDMETHODCALLTYPE *TimeSeek )(
            __RPC__in IMFByteStreamTimeSeek * This,
                       QWORD qwTimePosition);
        HRESULT ( STDMETHODCALLTYPE *GetTimeSeekResult )(
            __RPC__in IMFByteStreamTimeSeek * This,
                        __RPC__out QWORD *pqwStartTime,
                        __RPC__out QWORD *pqwStopTime,
                        __RPC__out QWORD *pqwDuration);
        END_INTERFACE
    } IMFByteStreamTimeSeekVtbl;
    interface IMFByteStreamTimeSeek
    {
        CONST_VTBL struct IMFByteStreamTimeSeekVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> IsTimeSeekSupported(This,pfTimeSeekIsSupported) )
    ( (This)->lpVtbl -> TimeSeek(This,qwTimePosition) )
    ( (This)->lpVtbl -> GetTimeSeekResult(This,pqwStartTime,pqwStopTime,pqwDuration) )
typedef struct __MIDL___MIDL_itf_mfidl_0000_0058_0001
    {
    QWORD qwStartOffset;
    QWORD qwEndOffset;
    } MF_BYTE_STREAM_CACHE_RANGE;
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0058_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0058_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFByteStreamCacheControl2;
    typedef struct IMFByteStreamCacheControl2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMFByteStreamCacheControl2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMFByteStreamCacheControl2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMFByteStreamCacheControl2 * This);
        HRESULT ( STDMETHODCALLTYPE *StopBackgroundTransfer )(
            __RPC__in IMFByteStreamCacheControl2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetByteRanges )(
            __RPC__in IMFByteStreamCacheControl2 * This,
                        __RPC__out DWORD *pcRanges,
                                          __RPC__deref_out_ecount_full_opt(*pcRanges) MF_BYTE_STREAM_CACHE_RANGE **ppRanges);
        HRESULT ( STDMETHODCALLTYPE *SetCacheLimit )(
            __RPC__in IMFByteStreamCacheControl2 * This,
                       QWORD qwBytes);
        HRESULT ( STDMETHODCALLTYPE *IsBackgroundTransferActive )(
            __RPC__in IMFByteStreamCacheControl2 * This,
                        __RPC__out BOOL *pfActive);
        END_INTERFACE
    } IMFByteStreamCacheControl2Vtbl;
    interface IMFByteStreamCacheControl2
    {
        CONST_VTBL struct IMFByteStreamCacheControl2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> StopBackgroundTransfer(This) )
    ( (This)->lpVtbl -> GetByteRanges(This,pcRanges,ppRanges) )
    ( (This)->lpVtbl -> SetCacheLimit(This,qwBytes) )
    ( (This)->lpVtbl -> IsBackgroundTransferActive(This,pfActive) )
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0059_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0059_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFNetCredential;
    typedef struct IMFNetCredentialVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFNetCredential * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFNetCredential * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFNetCredential * This);
        HRESULT ( STDMETHODCALLTYPE *SetUser )(
            IMFNetCredential * This,
            _In_reads_bytes_(cbData) BYTE *pbData,
                       DWORD cbData,
                       BOOL fDataIsEncrypted);
        HRESULT ( STDMETHODCALLTYPE *SetPassword )(
            IMFNetCredential * This,
            _In_reads_bytes_(cbData) BYTE *pbData,
                       DWORD cbData,
                       BOOL fDataIsEncrypted);
        HRESULT ( STDMETHODCALLTYPE *GetUser )(
            IMFNetCredential * This,
            _Out_writes_to_opt_(*pcbData,*pcbData) BYTE *pbData,
            _Inout_ DWORD *pcbData,
                       BOOL fEncryptData);
        HRESULT ( STDMETHODCALLTYPE *GetPassword )(
            IMFNetCredential * This,
            _Out_writes_to_opt_(*pcbData,*pcbData) BYTE *pbData,
            _Inout_ DWORD *pcbData,
                       BOOL fEncryptData);
        HRESULT ( STDMETHODCALLTYPE *LoggedOnUser )(
            IMFNetCredential * This,
            _Out_ BOOL *pfLoggedOnUser);
        END_INTERFACE
    } IMFNetCredentialVtbl;
    interface IMFNetCredential
    {
        CONST_VTBL struct IMFNetCredentialVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetUser(This,pbData,cbData,fDataIsEncrypted) )
    ( (This)->lpVtbl -> SetPassword(This,pbData,cbData,fDataIsEncrypted) )
    ( (This)->lpVtbl -> GetUser(This,pbData,pcbData,fEncryptData) )
    ( (This)->lpVtbl -> GetPassword(This,pbData,pcbData,fEncryptData) )
    ( (This)->lpVtbl -> LoggedOnUser(This,pfLoggedOnUser) )
typedef struct _MFNetCredentialManagerGetParam
    {
    HRESULT hrOp;
    BOOL fAllowLoggedOnUser;
    BOOL fClearTextPackage;
    LPCWSTR pszUrl;
    LPCWSTR pszSite;
    LPCWSTR pszRealm;
    LPCWSTR pszPackage;
    LONG nRetries;
    } MFNetCredentialManagerGetParam;
EXTERN_C const IID IID_IMFNetCredentialManager;
    typedef struct IMFNetCredentialManagerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFNetCredentialManager * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFNetCredentialManager * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFNetCredentialManager * This);
        HRESULT ( STDMETHODCALLTYPE *BeginGetCredentials )(
            IMFNetCredentialManager * This,
                       MFNetCredentialManagerGetParam *pParam,
                       IMFAsyncCallback *pCallback,
                       IUnknown *pState);
        HRESULT ( STDMETHODCALLTYPE *EndGetCredentials )(
            IMFNetCredentialManager * This,
                       IMFAsyncResult *pResult,
            _Outptr_ IMFNetCredential **ppCred);
        HRESULT ( STDMETHODCALLTYPE *SetGood )(
            IMFNetCredentialManager * This,
                       IMFNetCredential *pCred,
                       BOOL fGood);
        END_INTERFACE
    } IMFNetCredentialManagerVtbl;
    interface IMFNetCredentialManager
    {
        CONST_VTBL struct IMFNetCredentialManagerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> BeginGetCredentials(This,pParam,pCallback,pState) )
    ( (This)->lpVtbl -> EndGetCredentials(This,pResult,ppCred) )
    ( (This)->lpVtbl -> SetGood(This,pCred,fGood) )
typedef
enum _MFNetCredentialRequirements
    {
        REQUIRE_PROMPT = 0x1,
        REQUIRE_SAVE_SELECTED = 0x2
    } MFNetCredentialRequirements;
typedef
enum _MFNetCredentialOptions
    {
        MFNET_CREDENTIAL_SAVE = 0x1,
        MFNET_CREDENTIAL_DONT_CACHE = 0x2,
        MFNET_CREDENTIAL_ALLOW_CLEAR_TEXT = 0x4
    } MFNetCredentialOptions;
typedef
enum _MFNetAuthenticationFlags
    {
        MFNET_AUTHENTICATION_PROXY = 0x1,
        MFNET_AUTHENTICATION_CLEAR_TEXT = 0x2,
        MFNET_AUTHENTICATION_LOGGED_ON_USER = 0x4
    } MFNetAuthenticationFlags;
EXTERN_C const IID IID_IMFNetCredentialCache;
    typedef struct IMFNetCredentialCacheVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFNetCredentialCache * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFNetCredentialCache * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFNetCredentialCache * This);
        HRESULT ( STDMETHODCALLTYPE *GetCredential )(
            IMFNetCredentialCache * This,
                       LPCWSTR pszUrl,
                       LPCWSTR pszRealm,
                       DWORD dwAuthenticationFlags,
            _Outptr_ IMFNetCredential **ppCred,
            _Out_ DWORD *pdwRequirementsFlags);
        HRESULT ( STDMETHODCALLTYPE *SetGood )(
            IMFNetCredentialCache * This,
                       IMFNetCredential *pCred,
                       BOOL fGood);
        HRESULT ( STDMETHODCALLTYPE *SetUserOptions )(
            IMFNetCredentialCache * This,
                       IMFNetCredential *pCred,
                       DWORD dwOptionsFlags);
        END_INTERFACE
    } IMFNetCredentialCacheVtbl;
    interface IMFNetCredentialCache
    {
        CONST_VTBL struct IMFNetCredentialCacheVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetCredential(This,pszUrl,pszRealm,dwAuthenticationFlags,ppCred,pdwRequirementsFlags) )
    ( (This)->lpVtbl -> SetGood(This,pCred,fGood) )
    ( (This)->lpVtbl -> SetUserOptions(This,pCred,dwOptionsFlags) )
STDAPI
MFCreateCredentialCache(
    _Outptr_ IMFNetCredentialCache ** ppCache);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0062_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0062_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFSSLCertificateManager;
    typedef struct IMFSSLCertificateManagerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFSSLCertificateManager * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFSSLCertificateManager * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFSSLCertificateManager * This);
        HRESULT ( STDMETHODCALLTYPE *GetClientCertificate )(
            IMFSSLCertificateManager * This,
                       LPCWSTR pszURL,
            _Outptr_result_bytebuffer_(*pcbData) BYTE **ppbData,
            _Out_ DWORD *pcbData);
        HRESULT ( STDMETHODCALLTYPE *BeginGetClientCertificate )(
            IMFSSLCertificateManager * This,
                       LPCWSTR pszURL,
                       IMFAsyncCallback *pCallback,
                       IUnknown *pState);
        HRESULT ( STDMETHODCALLTYPE *EndGetClientCertificate )(
            IMFSSLCertificateManager * This,
                       IMFAsyncResult *pResult,
            _Outptr_result_bytebuffer_(*pcbData) BYTE **ppbData,
            _Out_ DWORD *pcbData);
        HRESULT ( STDMETHODCALLTYPE *GetCertificatePolicy )(
            IMFSSLCertificateManager * This,
                       LPCWSTR pszURL,
                        BOOL *pfOverrideAutomaticCheck,
                        BOOL *pfClientCertificateAvailable);
        HRESULT ( STDMETHODCALLTYPE *OnServerCertificate )(
            IMFSSLCertificateManager * This,
                       LPCWSTR pszURL,
            _In_reads_bytes_(cbData) BYTE *pbData,
                       DWORD cbData,
                        BOOL *pfIsGood);
        END_INTERFACE
    } IMFSSLCertificateManagerVtbl;
    interface IMFSSLCertificateManager
    {
        CONST_VTBL struct IMFSSLCertificateManagerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetClientCertificate(This,pszURL,ppbData,pcbData) )
    ( (This)->lpVtbl -> BeginGetClientCertificate(This,pszURL,pCallback,pState) )
    ( (This)->lpVtbl -> EndGetClientCertificate(This,pResult,ppbData,pcbData) )
    ( (This)->lpVtbl -> GetCertificatePolicy(This,pszURL,pfOverrideAutomaticCheck,pfClientCertificateAvailable) )
    ( (This)->lpVtbl -> OnServerCertificate(This,pszURL,pbData,cbData,pfIsGood) )
EXTERN_GUID( MFNETSOURCE_SSLCERTIFICATE_MANAGER, 0x55e6cb27, 0xe69b, 0x4267, 0x94, 0x0c, 0x2d, 0x7e, 0xc5, 0xbb, 0x8a, 0x0f );
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0063_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0063_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFNetResourceFilter;
    typedef struct IMFNetResourceFilterVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFNetResourceFilter * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFNetResourceFilter * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFNetResourceFilter * This);
        HRESULT ( STDMETHODCALLTYPE *OnRedirect )(
            IMFNetResourceFilter * This,
            _In_ LPCWSTR pszUrl,
            _Out_ VARIANT_BOOL *pvbCancel);
        HRESULT ( STDMETHODCALLTYPE *OnSendingRequest )(
            IMFNetResourceFilter * This,
            _In_ LPCWSTR pszUrl);
        END_INTERFACE
    } IMFNetResourceFilterVtbl;
    interface IMFNetResourceFilter
    {
        CONST_VTBL struct IMFNetResourceFilterVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnRedirect(This,pszUrl,pvbCancel) )
    ( (This)->lpVtbl -> OnSendingRequest(This,pszUrl) )
EXTERN_GUID( MFNETSOURCE_RESOURCE_FILTER, 0x815d0ff6, 0x265a, 0x4477, 0x9e, 0x46, 0x7b, 0x80, 0xad, 0x80, 0xb5, 0xfb);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0064_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0064_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFSourceOpenMonitor;
    typedef struct IMFSourceOpenMonitorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMFSourceOpenMonitor * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMFSourceOpenMonitor * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMFSourceOpenMonitor * This);
        HRESULT ( STDMETHODCALLTYPE *OnSourceEvent )(
            __RPC__in IMFSourceOpenMonitor * This,
                       __RPC__in_opt IMFMediaEvent *pEvent);
        END_INTERFACE
    } IMFSourceOpenMonitorVtbl;
    interface IMFSourceOpenMonitor
    {
        CONST_VTBL struct IMFSourceOpenMonitorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnSourceEvent(This,pEvent) )
EXTERN_C const IID IID_IMFNetProxyLocator;
    typedef struct IMFNetProxyLocatorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFNetProxyLocator * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFNetProxyLocator * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFNetProxyLocator * This);
        HRESULT ( STDMETHODCALLTYPE *FindFirstProxy )(
            IMFNetProxyLocator * This,
                       LPCWSTR pszHost,
                       LPCWSTR pszUrl,
                       BOOL fReserved);
        HRESULT ( STDMETHODCALLTYPE *FindNextProxy )(
            IMFNetProxyLocator * This);
        HRESULT ( STDMETHODCALLTYPE *RegisterProxyResult )(
            IMFNetProxyLocator * This,
                       HRESULT hrOp);
        HRESULT ( STDMETHODCALLTYPE *GetCurrentProxy )(
            IMFNetProxyLocator * This,
            _Out_writes_opt_(*pcchStr) LPWSTR pszStr,
                            DWORD *pcchStr);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            IMFNetProxyLocator * This,
                        IMFNetProxyLocator **ppProxyLocator);
        END_INTERFACE
    } IMFNetProxyLocatorVtbl;
    interface IMFNetProxyLocator
    {
        CONST_VTBL struct IMFNetProxyLocatorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> FindFirstProxy(This,pszHost,pszUrl,fReserved) )
    ( (This)->lpVtbl -> FindNextProxy(This) )
    ( (This)->lpVtbl -> RegisterProxyResult(This,hrOp) )
    ( (This)->lpVtbl -> GetCurrentProxy(This,pszStr,pcchStr) )
    ( (This)->lpVtbl -> Clone(This,ppProxyLocator) )
STDAPI MFCreateProxyLocator(
    LPCWSTR pszProtocol,
    IPropertyStore* pProxyConfig,
    _Outptr_ IMFNetProxyLocator** ppProxyLocator );
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0066_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0066_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFNetProxyLocatorFactory;
    typedef struct IMFNetProxyLocatorFactoryVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFNetProxyLocatorFactory * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFNetProxyLocatorFactory * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFNetProxyLocatorFactory * This);
        HRESULT ( STDMETHODCALLTYPE *CreateProxyLocator )(
            IMFNetProxyLocatorFactory * This,
                       LPCWSTR pszProtocol,
            _Outptr_ IMFNetProxyLocator **ppProxyLocator);
        END_INTERFACE
    } IMFNetProxyLocatorFactoryVtbl;
    interface IMFNetProxyLocatorFactory
    {
        CONST_VTBL struct IMFNetProxyLocatorFactoryVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CreateProxyLocator(This,pszProtocol,ppProxyLocator) )
EXTERN_C const IID IID_IMFSaveJob;
    typedef struct IMFSaveJobVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFSaveJob * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFSaveJob * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFSaveJob * This);
        HRESULT ( STDMETHODCALLTYPE *BeginSave )(
            IMFSaveJob * This,
                       IMFByteStream *pStream,
                       IMFAsyncCallback *pCallback,
                       IUnknown *pState);
        HRESULT ( STDMETHODCALLTYPE *EndSave )(
            IMFSaveJob * This,
                       IMFAsyncResult *pResult);
        HRESULT ( STDMETHODCALLTYPE *CancelSave )(
            IMFSaveJob * This);
        HRESULT ( STDMETHODCALLTYPE *GetProgress )(
            IMFSaveJob * This,
            _Out_ DWORD *pdwPercentComplete);
        END_INTERFACE
    } IMFSaveJobVtbl;
    interface IMFSaveJob
    {
        CONST_VTBL struct IMFSaveJobVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> BeginSave(This,pStream,pCallback,pState) )
    ( (This)->lpVtbl -> EndSave(This,pResult) )
    ( (This)->lpVtbl -> CancelSave(This) )
    ( (This)->lpVtbl -> GetProgress(This,pdwPercentComplete) )
EXTERN_GUID( MFNET_SAVEJOB_SERVICE, 0xb85a587f, 0x3d02, 0x4e52, 0x95, 0x65, 0x55, 0xd3, 0xec, 0x1e, 0x7f, 0xf7 );
typedef
enum _MFNETSOURCE_PROTOCOL_TYPE
    {
        MFNETSOURCE_UNDEFINED = 0,
        MFNETSOURCE_HTTP = 0x1,
        MFNETSOURCE_RTSP = 0x2,
        MFNETSOURCE_FILE = 0x3,
        MFNETSOURCE_MULTICAST = 0x4
    } MFNETSOURCE_PROTOCOL_TYPE;
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0068_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0068_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFNetSchemeHandlerConfig;
    typedef struct IMFNetSchemeHandlerConfigVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFNetSchemeHandlerConfig * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFNetSchemeHandlerConfig * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFNetSchemeHandlerConfig * This);
        HRESULT ( STDMETHODCALLTYPE *GetNumberOfSupportedProtocols )(
            IMFNetSchemeHandlerConfig * This,
            _Out_ ULONG *pcProtocols);
        HRESULT ( STDMETHODCALLTYPE *GetSupportedProtocolType )(
            IMFNetSchemeHandlerConfig * This,
                       ULONG nProtocolIndex,
            _Out_ MFNETSOURCE_PROTOCOL_TYPE *pnProtocolType);
        HRESULT ( STDMETHODCALLTYPE *ResetProtocolRolloverSettings )(
            IMFNetSchemeHandlerConfig * This);
        END_INTERFACE
    } IMFNetSchemeHandlerConfigVtbl;
    interface IMFNetSchemeHandlerConfig
    {
        CONST_VTBL struct IMFNetSchemeHandlerConfigVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetNumberOfSupportedProtocols(This,pcProtocols) )
    ( (This)->lpVtbl -> GetSupportedProtocolType(This,nProtocolIndex,pnProtocolType) )
    ( (This)->lpVtbl -> ResetProtocolRolloverSettings(This) )
STDAPI MFCreateNetSchemePlugin(
    REFIID riid,
    LPVOID *ppvHandler );
typedef
enum _MFNETSOURCE_TRANSPORT_TYPE
    {
        MFNETSOURCE_UDP = 0,
        MFNETSOURCE_TCP = ( MFNETSOURCE_UDP + 1 )
    } MFNETSOURCE_TRANSPORT_TYPE;
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
typedef
enum _MFNETSOURCE_CACHE_STATE
    {
        MFNETSOURCE_CACHE_UNAVAILABLE = 0,
        MFNETSOURCE_CACHE_ACTIVE_WRITING = ( MFNETSOURCE_CACHE_UNAVAILABLE + 1 ) ,
        MFNETSOURCE_CACHE_ACTIVE_COMPLETE = ( MFNETSOURCE_CACHE_ACTIVE_WRITING + 1 )
    } MFNETSOURCE_CACHE_STATE;
typedef
enum _MFNETSOURCE_STATISTICS_IDS
    {
        MFNETSOURCE_RECVPACKETS_ID = 0,
        MFNETSOURCE_LOSTPACKETS_ID = ( MFNETSOURCE_RECVPACKETS_ID + 1 ) ,
        MFNETSOURCE_RESENDSREQUESTED_ID = ( MFNETSOURCE_LOSTPACKETS_ID + 1 ) ,
        MFNETSOURCE_RESENDSRECEIVED_ID = ( MFNETSOURCE_RESENDSREQUESTED_ID + 1 ) ,
        MFNETSOURCE_RECOVEREDBYECCPACKETS_ID = ( MFNETSOURCE_RESENDSRECEIVED_ID + 1 ) ,
        MFNETSOURCE_RECOVEREDBYRTXPACKETS_ID = ( MFNETSOURCE_RECOVEREDBYECCPACKETS_ID + 1 ) ,
        MFNETSOURCE_OUTPACKETS_ID = ( MFNETSOURCE_RECOVEREDBYRTXPACKETS_ID + 1 ) ,
        MFNETSOURCE_RECVRATE_ID = ( MFNETSOURCE_OUTPACKETS_ID + 1 ) ,
        MFNETSOURCE_AVGBANDWIDTHBPS_ID = ( MFNETSOURCE_RECVRATE_ID + 1 ) ,
        MFNETSOURCE_BYTESRECEIVED_ID = ( MFNETSOURCE_AVGBANDWIDTHBPS_ID + 1 ) ,
        MFNETSOURCE_PROTOCOL_ID = ( MFNETSOURCE_BYTESRECEIVED_ID + 1 ) ,
        MFNETSOURCE_TRANSPORT_ID = ( MFNETSOURCE_PROTOCOL_ID + 1 ) ,
        MFNETSOURCE_CACHE_STATE_ID = ( MFNETSOURCE_TRANSPORT_ID + 1 ) ,
        MFNETSOURCE_LINKBANDWIDTH_ID = ( MFNETSOURCE_CACHE_STATE_ID + 1 ) ,
        MFNETSOURCE_CONTENTBITRATE_ID = ( MFNETSOURCE_LINKBANDWIDTH_ID + 1 ) ,
        MFNETSOURCE_SPEEDFACTOR_ID = ( MFNETSOURCE_CONTENTBITRATE_ID + 1 ) ,
        MFNETSOURCE_BUFFERSIZE_ID = ( MFNETSOURCE_SPEEDFACTOR_ID + 1 ) ,
        MFNETSOURCE_BUFFERPROGRESS_ID = ( MFNETSOURCE_BUFFERSIZE_ID + 1 ) ,
        MFNETSOURCE_LASTBWSWITCHTS_ID = ( MFNETSOURCE_BUFFERPROGRESS_ID + 1 ) ,
        MFNETSOURCE_SEEKRANGESTART_ID = ( MFNETSOURCE_LASTBWSWITCHTS_ID + 1 ) ,
        MFNETSOURCE_SEEKRANGEEND_ID = ( MFNETSOURCE_SEEKRANGESTART_ID + 1 ) ,
        MFNETSOURCE_BUFFERINGCOUNT_ID = ( MFNETSOURCE_SEEKRANGEEND_ID + 1 ) ,
        MFNETSOURCE_INCORRECTLYSIGNEDPACKETS_ID = ( MFNETSOURCE_BUFFERINGCOUNT_ID + 1 ) ,
        MFNETSOURCE_SIGNEDSESSION_ID = ( MFNETSOURCE_INCORRECTLYSIGNEDPACKETS_ID + 1 ) ,
        MFNETSOURCE_MAXBITRATE_ID = ( MFNETSOURCE_SIGNEDSESSION_ID + 1 ) ,
        MFNETSOURCE_RECEPTION_QUALITY_ID = ( MFNETSOURCE_MAXBITRATE_ID + 1 ) ,
        MFNETSOURCE_RECOVEREDPACKETS_ID = ( MFNETSOURCE_RECEPTION_QUALITY_ID + 1 ) ,
        MFNETSOURCE_VBR_ID = ( MFNETSOURCE_RECOVEREDPACKETS_ID + 1 ) ,
        MFNETSOURCE_DOWNLOADPROGRESS_ID = ( MFNETSOURCE_VBR_ID + 1 ) ,
        MFNETSOURCE_UNPREDEFINEDPROTOCOLNAME_ID = ( MFNETSOURCE_DOWNLOADPROGRESS_ID + 1 )
    } MFNETSOURCE_STATISTICS_IDS;
EXTERN_GUID( MFNETSOURCE_STATISTICS_SERVICE, 0x3cb1f275, 0x0505, 0x4c5d, 0xae, 0x71, 0x0a, 0x55, 0x63, 0x44, 0xef, 0xa1 );
EXTERN_GUID( MFNETSOURCE_STATISTICS, 0x3cb1f274, 0x0505, 0x4c5d, 0xae, 0x71, 0x0a, 0x55, 0x63, 0x44, 0xef, 0xa1 );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
EXTERN_GUID( MFNETSOURCE_BUFFERINGTIME, 0x3cb1f276, 0x0505, 0x4c5d, 0xae, 0x71, 0x0a, 0x55, 0x63, 0x44, 0xef, 0xa1 );
EXTERN_GUID( MFNETSOURCE_ACCELERATEDSTREAMINGDURATION, 0x3cb1f277, 0x0505, 0x4c5d, 0xae, 0x71, 0x0a, 0x55, 0x63, 0x44, 0xef, 0xa1 );
EXTERN_GUID( MFNETSOURCE_MAXUDPACCELERATEDSTREAMINGDURATION, 0x4aab2879, 0xbbe1, 0x4994, 0x9f, 0xf0, 0x54, 0x95, 0xbd, 0x25, 0x1, 0x29 );
EXTERN_GUID( MFNETSOURCE_MAXBUFFERTIMEMS, 0x408b24e6, 0x4038, 0x4401, 0xb5, 0xb2, 0xfe, 0x70, 0x1a, 0x9e, 0xbf, 0x10 );
EXTERN_GUID( MFNETSOURCE_CONNECTIONBANDWIDTH, 0x3cb1f278, 0x0505, 0x4c5d, 0xae, 0x71, 0x0a, 0x55, 0x63, 0x44, 0xef, 0xa1 );
EXTERN_GUID( MFNETSOURCE_CACHEENABLED, 0x3cb1f279, 0x0505, 0x4c5d, 0xae, 0x71, 0x0a, 0x55, 0x63, 0x44, 0xef, 0xa1 );
EXTERN_GUID( MFNETSOURCE_AUTORECONNECTLIMIT, 0x3cb1f27a, 0x0505, 0x4c5d, 0xae, 0x71, 0x0a, 0x55, 0x63, 0x44, 0xef, 0xa1 );
EXTERN_GUID( MFNETSOURCE_RESENDSENABLED, 0x3cb1f27b, 0x0505, 0x4c5d, 0xae, 0x71, 0x0a, 0x55, 0x63, 0x44, 0xef, 0xa1 );
EXTERN_GUID( MFNETSOURCE_THINNINGENABLED, 0x3cb1f27c, 0x0505, 0x4c5d, 0xae, 0x71, 0x0a, 0x55, 0x63, 0x44, 0xef, 0xa1 );
EXTERN_GUID( MFNETSOURCE_PROTOCOL, 0x3cb1f27d, 0x0505, 0x4c5d, 0xae, 0x71, 0x0a, 0x55, 0x63, 0x44, 0xef, 0xa1 );
EXTERN_GUID( MFNETSOURCE_TRANSPORT, 0x3cb1f27e, 0x0505, 0x4c5d, 0xae, 0x71, 0x0a, 0x55, 0x63, 0x44, 0xef, 0xa1 );
EXTERN_GUID( MFNETSOURCE_PREVIEWMODEENABLED, 0x3cb1f27f, 0x0505, 0x4c5d, 0xae, 0x71, 0x0a, 0x55, 0x63, 0x44, 0xef, 0xa1 );
EXTERN_GUID( MFNETSOURCE_CREDENTIAL_MANAGER, 0x3cb1f280, 0x0505, 0x4c5d, 0xae, 0x71, 0x0a, 0x55, 0x63, 0x44, 0xef, 0xa1 );
EXTERN_GUID( MFNETSOURCE_PPBANDWIDTH, 0x3cb1f281, 0x0505, 0x4c5d, 0xae, 0x71, 0x0a, 0x55, 0x63, 0x44, 0xef, 0xa1 );
EXTERN_GUID( MFNETSOURCE_AUTORECONNECTPROGRESS, 0x3cb1f282, 0x0505, 0x4c5d, 0xae, 0x71, 0x0a, 0x55, 0x63, 0x44, 0xef, 0xa1 );
EXTERN_GUID( MFNETSOURCE_PROXYLOCATORFACTORY, 0x3cb1f283, 0x0505, 0x4c5d, 0xae, 0x71, 0x0a, 0x55, 0x63, 0x44, 0xef, 0xa1 );
EXTERN_GUID( MFNETSOURCE_BROWSERUSERAGENT, 0x3cb1f28b, 0x0505, 0x4c5d, 0xae, 0x71, 0x0a, 0x55, 0x63, 0x44, 0xef, 0xa1 );
EXTERN_GUID( MFNETSOURCE_BROWSERWEBPAGE, 0x3cb1f28c, 0x0505, 0x4c5d, 0xae, 0x71, 0x0a, 0x55, 0x63, 0x44, 0xef, 0xa1 );
EXTERN_GUID( MFNETSOURCE_PLAYERVERSION, 0x3cb1f28d, 0x0505, 0x4c5d, 0xae, 0x71, 0x0a, 0x55, 0x63, 0x44, 0xef, 0xa1 );
EXTERN_GUID( MFNETSOURCE_PLAYERID, 0x3cb1f28e, 0x0505, 0x4c5d, 0xae, 0x71, 0x0a, 0x55, 0x63, 0x44, 0xef, 0xa1 );
EXTERN_GUID( MFNETSOURCE_HOSTEXE, 0x3cb1f28f, 0x0505, 0x4c5d, 0xae, 0x71, 0x0a, 0x55, 0x63, 0x44, 0xef, 0xa1 );
EXTERN_GUID( MFNETSOURCE_HOSTVERSION, 0x3cb1f291, 0x0505, 0x4c5d, 0xae, 0x71, 0x0a, 0x55, 0x63, 0x44, 0xef, 0xa1 );
EXTERN_GUID( MFNETSOURCE_PLAYERUSERAGENT, 0x3cb1f292, 0x0505, 0x4c5d, 0xae, 0x71, 0x0a, 0x55, 0x63, 0x44, 0xef, 0xa1 );
EXTERN_GUID( MFNETSOURCE_CLIENTGUID, 0x60a2c4a6, 0xf197, 0x4c14, 0xa5, 0xbf, 0x88, 0x83, 0xd, 0x24, 0x58, 0xaf );
EXTERN_GUID( MFNETSOURCE_LOGURL, 0x3cb1f293, 0x0505, 0x4c5d, 0xae, 0x71, 0x0a, 0x55, 0x63, 0x44, 0xef, 0xa1 );
EXTERN_GUID( MFNETSOURCE_ENABLE_UDP, 0x3cb1f294, 0x0505, 0x4c5d, 0xae, 0x71, 0x0a, 0x55, 0x63, 0x44, 0xef, 0xa1 );
EXTERN_GUID( MFNETSOURCE_ENABLE_TCP, 0x3cb1f295, 0x0505, 0x4c5d, 0xae, 0x71, 0x0a, 0x55, 0x63, 0x44, 0xef, 0xa1 );
EXTERN_GUID( MFNETSOURCE_ENABLE_MSB, 0x3cb1f296, 0x0505, 0x4c5d, 0xae, 0x71, 0x0a, 0x55, 0x63, 0x44, 0xef, 0xa1 );
EXTERN_GUID( MFNETSOURCE_ENABLE_RTSP, 0x3cb1f298, 0x0505, 0x4c5d, 0xae, 0x71, 0x0a, 0x55, 0x63, 0x44, 0xef, 0xa1 );
EXTERN_GUID( MFNETSOURCE_ENABLE_HTTP, 0x3cb1f299, 0x0505, 0x4c5d, 0xae, 0x71, 0x0a, 0x55, 0x63, 0x44, 0xef, 0xa1 );
EXTERN_GUID( MFNETSOURCE_ENABLE_STREAMING, 0x3cb1f29c, 0x0505, 0x4c5d, 0xae, 0x71, 0x0a, 0x55, 0x63, 0x44, 0xef, 0xa1 );
EXTERN_GUID( MFNETSOURCE_ENABLE_DOWNLOAD, 0x3cb1f29d, 0x0505, 0x4c5d, 0xae, 0x71, 0x0a, 0x55, 0x63, 0x44, 0xef, 0xa1 );
EXTERN_GUID( MFNETSOURCE_ENABLE_PRIVATEMODE, 0x824779d8, 0xf18b, 0x4405, 0x8c, 0xf1, 0x46, 0x4f, 0xb5, 0xaa, 0x8f, 0x71 );
EXTERN_GUID( MFNETSOURCE_UDP_PORT_RANGE, 0x3cb1f29a, 0x0505, 0x4c5d, 0xae, 0x71, 0x0a, 0x55, 0x63, 0x44, 0xef, 0xa1 );
EXTERN_GUID( MFNETSOURCE_PROXYINFO, 0x3cb1f29b, 0x0505, 0x4c5d, 0xae, 0x71, 0x0a, 0x55, 0x63, 0x44, 0xef, 0xa1 );
EXTERN_GUID( MFNETSOURCE_DRMNET_LICENSE_REPRESENTATION, 0x47eae1bd, 0xbdfe, 0x42e2, 0x82, 0xf3, 0x54, 0xa4, 0x8c, 0x17, 0x96, 0x2d );
EXTERN_GUID( MFNETSOURCE_PROXYSETTINGS, 0x3cb1f287, 0x0505, 0x4c5d, 0xae, 0x71, 0x0a, 0x55, 0x63, 0x44, 0xef, 0xa1 );
EXTERN_GUID( MFNETSOURCE_PROXYHOSTNAME, 0x3cb1f284, 0x0505, 0x4c5d, 0xae, 0x71, 0x0a, 0x55, 0x63, 0x44, 0xef, 0xa1 );
EXTERN_GUID( MFNETSOURCE_PROXYPORT, 0x3cb1f288, 0x0505, 0x4c5d, 0xae, 0x71, 0x0a, 0x55, 0x63, 0x44, 0xef, 0xa1 );
EXTERN_GUID( MFNETSOURCE_PROXYEXCEPTIONLIST, 0x3cb1f285, 0x0505, 0x4c5d, 0xae, 0x71, 0x0a, 0x55, 0x63, 0x44, 0xef, 0xa1 );
EXTERN_GUID( MFNETSOURCE_PROXYBYPASSFORLOCAL, 0x3cb1f286, 0x0505, 0x4c5d, 0xae, 0x71, 0x0a, 0x55, 0x63, 0x44, 0xef, 0xa1 );
EXTERN_GUID( MFNETSOURCE_PROXYRERUNAUTODETECTION, 0x3cb1f289, 0x0505, 0x4c5d, 0xae, 0x71, 0x0a, 0x55, 0x63, 0x44, 0xef, 0xa1 );
EXTERN_GUID( MFNETSOURCE_STREAM_LANGUAGE, 0x9ab44318, 0xf7cd, 0x4f2d, 0x8d, 0x6d, 0xfa, 0x35, 0xb4, 0x92, 0xce, 0xcb );
EXTERN_GUID( MFNETSOURCE_LOGPARAMS, 0x64936ae8, 0x9418, 0x453a, 0x8c, 0xda, 0x3e, 0xa, 0x66, 0x8b, 0x35, 0x3b );
EXTERN_GUID( MFNETSOURCE_PEERMANAGER, 0x48b29adb, 0xfebf, 0x45ee, 0xa9, 0xbf, 0xef, 0xb8, 0x1c, 0x49, 0x2e, 0xfc );
EXTERN_GUID( MFNETSOURCE_FRIENDLYNAME, 0x5b2a7757, 0xbc6b, 0x447e, 0xaa, 0x06, 0x0d, 0xda, 0x1c, 0x64, 0x6e, 0x2f );
typedef
enum _MFNET_PROXYSETTINGS
    {
        MFNET_PROXYSETTING_NONE = 0,
        MFNET_PROXYSETTING_MANUAL = 1,
        MFNET_PROXYSETTING_AUTO = 2,
        MFNET_PROXYSETTING_BROWSER = 3
    } MFNET_PROXYSETTINGS;
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0069_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0069_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFSchemeHandler;
    typedef struct IMFSchemeHandlerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFSchemeHandler * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFSchemeHandler * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFSchemeHandler * This);
        HRESULT ( STDMETHODCALLTYPE *BeginCreateObject )(
            IMFSchemeHandler * This,
                       LPCWSTR pwszURL,
                       DWORD dwFlags,
                       IPropertyStore *pProps,
            _Outptr_opt_ IUnknown **ppIUnknownCancelCookie,
                       IMFAsyncCallback *pCallback,
                       IUnknown *punkState);
        HRESULT ( STDMETHODCALLTYPE *EndCreateObject )(
            IMFSchemeHandler * This,
                       IMFAsyncResult *pResult,
            _Out_ MF_OBJECT_TYPE *pObjectType,
            _Outptr_ IUnknown **ppObject);
        HRESULT ( STDMETHODCALLTYPE *CancelObjectCreation )(
            IMFSchemeHandler * This,
                       IUnknown *pIUnknownCancelCookie);
        END_INTERFACE
    } IMFSchemeHandlerVtbl;
    interface IMFSchemeHandler
    {
        CONST_VTBL struct IMFSchemeHandlerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> BeginCreateObject(This,pwszURL,dwFlags,pProps,ppIUnknownCancelCookie,pCallback,punkState) )
    ( (This)->lpVtbl -> EndCreateObject(This,pResult,pObjectType,ppObject) )
    ( (This)->lpVtbl -> CancelObjectCreation(This,pIUnknownCancelCookie) )
EXTERN_GUID(MF_BYTESTREAMHANDLER_ACCEPTS_SHARE_WRITE, 0xa6e1f733, 0x3001, 0x4915, 0x81, 0x50, 0x15, 0x58, 0xa2, 0x18, 0xe, 0xc8);
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0070_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0070_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFByteStreamHandler;
    typedef struct IMFByteStreamHandlerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFByteStreamHandler * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFByteStreamHandler * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFByteStreamHandler * This);
        HRESULT ( STDMETHODCALLTYPE *BeginCreateObject )(
            IMFByteStreamHandler * This,
                       IMFByteStream *pByteStream,
                       LPCWSTR pwszURL,
                       DWORD dwFlags,
                       IPropertyStore *pProps,
            _Outptr_opt_ IUnknown **ppIUnknownCancelCookie,
                       IMFAsyncCallback *pCallback,
                       IUnknown *punkState);
        HRESULT ( STDMETHODCALLTYPE *EndCreateObject )(
            IMFByteStreamHandler * This,
                       IMFAsyncResult *pResult,
            _Out_ MF_OBJECT_TYPE *pObjectType,
            _Outptr_ IUnknown **ppObject);
        HRESULT ( STDMETHODCALLTYPE *CancelObjectCreation )(
            IMFByteStreamHandler * This,
                       IUnknown *pIUnknownCancelCookie);
        HRESULT ( STDMETHODCALLTYPE *GetMaxNumberOfBytesRequiredForResolution )(
            IMFByteStreamHandler * This,
            _Out_ QWORD *pqwBytes);
        END_INTERFACE
    } IMFByteStreamHandlerVtbl;
    interface IMFByteStreamHandler
    {
        CONST_VTBL struct IMFByteStreamHandlerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> BeginCreateObject(This,pByteStream,pwszURL,dwFlags,pProps,ppIUnknownCancelCookie,pCallback,punkState) )
    ( (This)->lpVtbl -> EndCreateObject(This,pResult,pObjectType,ppObject) )
    ( (This)->lpVtbl -> CancelObjectCreation(This,pIUnknownCancelCookie) )
    ( (This)->lpVtbl -> GetMaxNumberOfBytesRequiredForResolution(This,pqwBytes) )
EXTERN_GUID( MF_BYTESTREAM_SERVICE, 0xab025e2b, 0x16d9, 0x4180, 0xa1, 0x27, 0xba, 0x6c, 0x70, 0x15, 0x61, 0x61 );
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0071_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0071_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFTrustedInput;
    typedef struct IMFTrustedInputVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMFTrustedInput * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMFTrustedInput * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMFTrustedInput * This);
        HRESULT ( STDMETHODCALLTYPE *GetInputTrustAuthority )(
            __RPC__in IMFTrustedInput * This,
                       DWORD dwStreamID,
                       __RPC__in REFIID riid,
                                __RPC__deref_out_opt IUnknown **ppunkObject);
        END_INTERFACE
    } IMFTrustedInputVtbl;
    interface IMFTrustedInput
    {
        CONST_VTBL struct IMFTrustedInputVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetInputTrustAuthority(This,dwStreamID,riid,ppunkObject) )
typedef
enum _MFPOLICYMANAGER_ACTION
    {
        PEACTION_NO = 0,
        PEACTION_PLAY = 1,
        PEACTION_COPY = 2,
        PEACTION_EXPORT = 3,
        PEACTION_EXTRACT = 4,
        PEACTION_RESERVED1 = 5,
        PEACTION_RESERVED2 = 6,
        PEACTION_RESERVED3 = 7,
        PEACTION_LAST = 7
    } MFPOLICYMANAGER_ACTION;
typedef struct _MFINPUTTRUSTAUTHORITY_ACTION
    {
    MFPOLICYMANAGER_ACTION Action;
    BYTE *pbTicket;
    DWORD cbTicket;
    } MFINPUTTRUSTAUTHORITY_ACCESS_ACTION;
typedef struct _MFINPUTTRUSTAUTHORITY_ACCESS_PARAMS
    {
    DWORD dwSize;
    DWORD dwVer;
    DWORD cbSignatureOffset;
    DWORD cbSignatureSize;
    DWORD cbExtensionOffset;
    DWORD cbExtensionSize;
    DWORD cActions;
    MFINPUTTRUSTAUTHORITY_ACCESS_ACTION rgOutputActions[ 1 ];
    } MFINPUTTRUSTAUTHORITY_ACCESS_PARAMS;
EXTERN_GUID( MF_MEDIA_PROTECTION_MANAGER_PROPERTIES, 0x38BD81A9, 0xACEA, 0x4C73, 0x89, 0xB2, 0x55, 0x32, 0xC0, 0xAE, 0xCA, 0x79 );
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0072_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0072_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFInputTrustAuthority;
    typedef struct IMFInputTrustAuthorityVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMFInputTrustAuthority * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMFInputTrustAuthority * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMFInputTrustAuthority * This);
                      HRESULT ( STDMETHODCALLTYPE *GetDecrypter )(
            IMFInputTrustAuthority * This,
                       REFIID riid,
            _Outptr_ void **ppv);
                      HRESULT ( STDMETHODCALLTYPE *RequestAccess )(
            IMFInputTrustAuthority * This,
                       MFPOLICYMANAGER_ACTION Action,
            _Outptr_ IMFActivate **ppContentEnablerActivate);
                      HRESULT ( STDMETHODCALLTYPE *GetPolicy )(
            IMFInputTrustAuthority * This,
                       MFPOLICYMANAGER_ACTION Action,
            _Outptr_ IMFOutputPolicy **ppPolicy);
                      HRESULT ( STDMETHODCALLTYPE *BindAccess )(
            IMFInputTrustAuthority * This,
            _In_ MFINPUTTRUSTAUTHORITY_ACCESS_PARAMS *pParam);
                      HRESULT ( STDMETHODCALLTYPE *UpdateAccess )(
            IMFInputTrustAuthority * This,
            _In_ MFINPUTTRUSTAUTHORITY_ACCESS_PARAMS *pParam);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IMFInputTrustAuthority * This);
        END_INTERFACE
    } IMFInputTrustAuthorityVtbl;
    interface IMFInputTrustAuthority
    {
        CONST_VTBL struct IMFInputTrustAuthorityVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetDecrypter(This,riid,ppv) )
    ( (This)->lpVtbl -> RequestAccess(This,Action,ppContentEnablerActivate) )
    ( (This)->lpVtbl -> GetPolicy(This,Action,ppPolicy) )
    ( (This)->lpVtbl -> BindAccess(This,pParam) )
    ( (This)->lpVtbl -> UpdateAccess(This,pParam) )
    ( (This)->lpVtbl -> Reset(This) )
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0073_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0073_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFTrustedOutput;
    typedef struct IMFTrustedOutputVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFTrustedOutput * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFTrustedOutput * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFTrustedOutput * This);
        HRESULT ( STDMETHODCALLTYPE *GetOutputTrustAuthorityCount )(
            IMFTrustedOutput * This,
            _Out_ DWORD *pcOutputTrustAuthorities);
        HRESULT ( STDMETHODCALLTYPE *GetOutputTrustAuthorityByIndex )(
            IMFTrustedOutput * This,
                       DWORD dwIndex,
            _Outptr_ IMFOutputTrustAuthority **ppauthority);
        HRESULT ( STDMETHODCALLTYPE *IsFinal )(
            IMFTrustedOutput * This,
            _Out_ BOOL *pfIsFinal);
        END_INTERFACE
    } IMFTrustedOutputVtbl;
    interface IMFTrustedOutput
    {
        CONST_VTBL struct IMFTrustedOutputVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetOutputTrustAuthorityCount(This,pcOutputTrustAuthorities) )
    ( (This)->lpVtbl -> GetOutputTrustAuthorityByIndex(This,dwIndex,ppauthority) )
    ( (This)->lpVtbl -> IsFinal(This,pfIsFinal) )
EXTERN_C const IID IID_IMFOutputTrustAuthority;
    typedef struct IMFOutputTrustAuthorityVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFOutputTrustAuthority * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFOutputTrustAuthority * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFOutputTrustAuthority * This);
        HRESULT ( STDMETHODCALLTYPE *GetAction )(
            IMFOutputTrustAuthority * This,
            _Out_ MFPOLICYMANAGER_ACTION *pAction);
        HRESULT ( STDMETHODCALLTYPE *SetPolicy )(
            IMFOutputTrustAuthority * This,
            _In_reads_opt_(nPolicy) IMFOutputPolicy **ppPolicy,
                       DWORD nPolicy,
            _Outptr_opt_result_bytebuffer_(*pcbTicket) BYTE **ppbTicket,
            _Out_opt_ DWORD *pcbTicket);
        END_INTERFACE
    } IMFOutputTrustAuthorityVtbl;
    interface IMFOutputTrustAuthority
    {
        CONST_VTBL struct IMFOutputTrustAuthorityVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetAction(This,pAction) )
    ( (This)->lpVtbl -> SetPolicy(This,ppPolicy,nPolicy,ppbTicket,pcbTicket) )
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0075_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0075_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFOutputPolicy;
    typedef struct IMFOutputPolicyVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFOutputPolicy * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFOutputPolicy * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFOutputPolicy * This);
        HRESULT ( STDMETHODCALLTYPE *GetItem )(
            IMFOutputPolicy * This,
            REFGUID guidKey,
                                  PROPVARIANT *pValue);
        HRESULT ( STDMETHODCALLTYPE *GetItemType )(
            IMFOutputPolicy * This,
            REFGUID guidKey,
                        MF_ATTRIBUTE_TYPE *pType);
        HRESULT ( STDMETHODCALLTYPE *CompareItem )(
            IMFOutputPolicy * This,
            REFGUID guidKey,
            REFPROPVARIANT Value,
                        BOOL *pbResult);
        HRESULT ( STDMETHODCALLTYPE *Compare )(
            IMFOutputPolicy * This,
            IMFAttributes *pTheirs,
            MF_ATTRIBUTES_MATCH_TYPE MatchType,
                        BOOL *pbResult);
        HRESULT ( STDMETHODCALLTYPE *GetUINT32 )(
            IMFOutputPolicy * This,
            REFGUID guidKey,
                        UINT32 *punValue);
        HRESULT ( STDMETHODCALLTYPE *GetUINT64 )(
            IMFOutputPolicy * This,
            REFGUID guidKey,
                        UINT64 *punValue);
        HRESULT ( STDMETHODCALLTYPE *GetDouble )(
            IMFOutputPolicy * This,
            REFGUID guidKey,
                        double *pfValue);
        HRESULT ( STDMETHODCALLTYPE *GetGUID )(
            IMFOutputPolicy * This,
            REFGUID guidKey,
                        GUID *pguidValue);
        HRESULT ( STDMETHODCALLTYPE *GetStringLength )(
            IMFOutputPolicy * This,
            REFGUID guidKey,
                        UINT32 *pcchLength);
        HRESULT ( STDMETHODCALLTYPE *GetString )(
            IMFOutputPolicy * This,
            REFGUID guidKey,
                                 LPWSTR pwszValue,
            UINT32 cchBufSize,
                                  UINT32 *pcchLength);
        HRESULT ( STDMETHODCALLTYPE *GetAllocatedString )(
            IMFOutputPolicy * This,
            REFGUID guidKey,
                                          LPWSTR *ppwszValue,
                        UINT32 *pcchLength);
        HRESULT ( STDMETHODCALLTYPE *GetBlobSize )(
            IMFOutputPolicy * This,
            REFGUID guidKey,
                        UINT32 *pcbBlobSize);
        HRESULT ( STDMETHODCALLTYPE *GetBlob )(
            IMFOutputPolicy * This,
            REFGUID guidKey,
                                 UINT8 *pBuf,
            UINT32 cbBufSize,
                                  UINT32 *pcbBlobSize);
        HRESULT ( STDMETHODCALLTYPE *GetAllocatedBlob )(
            IMFOutputPolicy * This,
            REFGUID guidKey,
                                          UINT8 **ppBuf,
                        UINT32 *pcbSize);
        HRESULT ( STDMETHODCALLTYPE *GetUnknown )(
            IMFOutputPolicy * This,
            REFGUID guidKey,
            REFIID riid,
                                LPVOID *ppv);
        HRESULT ( STDMETHODCALLTYPE *SetItem )(
            IMFOutputPolicy * This,
            REFGUID guidKey,
            REFPROPVARIANT Value);
        HRESULT ( STDMETHODCALLTYPE *DeleteItem )(
            IMFOutputPolicy * This,
            REFGUID guidKey);
        HRESULT ( STDMETHODCALLTYPE *DeleteAllItems )(
            IMFOutputPolicy * This);
        HRESULT ( STDMETHODCALLTYPE *SetUINT32 )(
            IMFOutputPolicy * This,
            REFGUID guidKey,
            UINT32 unValue);
        HRESULT ( STDMETHODCALLTYPE *SetUINT64 )(
            IMFOutputPolicy * This,
            REFGUID guidKey,
            UINT64 unValue);
        HRESULT ( STDMETHODCALLTYPE *SetDouble )(
            IMFOutputPolicy * This,
            REFGUID guidKey,
            double fValue);
        HRESULT ( STDMETHODCALLTYPE *SetGUID )(
            IMFOutputPolicy * This,
            REFGUID guidKey,
            REFGUID guidValue);
        HRESULT ( STDMETHODCALLTYPE *SetString )(
            IMFOutputPolicy * This,
            REFGUID guidKey,
                               LPCWSTR wszValue);
        HRESULT ( STDMETHODCALLTYPE *SetBlob )(
            IMFOutputPolicy * This,
            REFGUID guidKey,
                                const UINT8 *pBuf,
            UINT32 cbBufSize);
        HRESULT ( STDMETHODCALLTYPE *SetUnknown )(
            IMFOutputPolicy * This,
            REFGUID guidKey,
                       IUnknown *pUnknown);
        HRESULT ( STDMETHODCALLTYPE *LockStore )(
            IMFOutputPolicy * This);
        HRESULT ( STDMETHODCALLTYPE *UnlockStore )(
            IMFOutputPolicy * This);
        HRESULT ( STDMETHODCALLTYPE *GetCount )(
            IMFOutputPolicy * This,
                        UINT32 *pcItems);
        HRESULT ( STDMETHODCALLTYPE *GetItemByIndex )(
            IMFOutputPolicy * This,
            UINT32 unIndex,
                        GUID *pguidKey,
                                  PROPVARIANT *pValue);
        HRESULT ( STDMETHODCALLTYPE *CopyAllItems )(
            IMFOutputPolicy * This,
                       IMFAttributes *pDest);
        HRESULT ( STDMETHODCALLTYPE *GenerateRequiredSchemas )(
            IMFOutputPolicy * This,
                       DWORD dwAttributes,
                       GUID guidOutputSubType,
                       GUID *rgGuidProtectionSchemasSupported,
                       DWORD cProtectionSchemasSupported,
            _Outptr_ IMFCollection **ppRequiredProtectionSchemas);
        HRESULT ( STDMETHODCALLTYPE *GetOriginatorID )(
            IMFOutputPolicy * This,
            _Out_ GUID *pguidOriginatorID);
        HRESULT ( STDMETHODCALLTYPE *GetMinimumGRLVersion )(
            IMFOutputPolicy * This,
            _Out_ DWORD *pdwMinimumGRLVersion);
        END_INTERFACE
    } IMFOutputPolicyVtbl;
    interface IMFOutputPolicy
    {
        CONST_VTBL struct IMFOutputPolicyVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetItem(This,guidKey,pValue) )
    ( (This)->lpVtbl -> GetItemType(This,guidKey,pType) )
    ( (This)->lpVtbl -> CompareItem(This,guidKey,Value,pbResult) )
    ( (This)->lpVtbl -> Compare(This,pTheirs,MatchType,pbResult) )
    ( (This)->lpVtbl -> GetUINT32(This,guidKey,punValue) )
    ( (This)->lpVtbl -> GetUINT64(This,guidKey,punValue) )
    ( (This)->lpVtbl -> GetDouble(This,guidKey,pfValue) )
    ( (This)->lpVtbl -> GetGUID(This,guidKey,pguidValue) )
    ( (This)->lpVtbl -> GetStringLength(This,guidKey,pcchLength) )
    ( (This)->lpVtbl -> GetString(This,guidKey,pwszValue,cchBufSize,pcchLength) )
    ( (This)->lpVtbl -> GetAllocatedString(This,guidKey,ppwszValue,pcchLength) )
    ( (This)->lpVtbl -> GetBlobSize(This,guidKey,pcbBlobSize) )
    ( (This)->lpVtbl -> GetBlob(This,guidKey,pBuf,cbBufSize,pcbBlobSize) )
    ( (This)->lpVtbl -> GetAllocatedBlob(This,guidKey,ppBuf,pcbSize) )
    ( (This)->lpVtbl -> GetUnknown(This,guidKey,riid,ppv) )
    ( (This)->lpVtbl -> SetItem(This,guidKey,Value) )
    ( (This)->lpVtbl -> DeleteItem(This,guidKey) )
    ( (This)->lpVtbl -> DeleteAllItems(This) )
    ( (This)->lpVtbl -> SetUINT32(This,guidKey,unValue) )
    ( (This)->lpVtbl -> SetUINT64(This,guidKey,unValue) )
    ( (This)->lpVtbl -> SetDouble(This,guidKey,fValue) )
    ( (This)->lpVtbl -> SetGUID(This,guidKey,guidValue) )
    ( (This)->lpVtbl -> SetString(This,guidKey,wszValue) )
    ( (This)->lpVtbl -> SetBlob(This,guidKey,pBuf,cbBufSize) )
    ( (This)->lpVtbl -> SetUnknown(This,guidKey,pUnknown) )
    ( (This)->lpVtbl -> LockStore(This) )
    ( (This)->lpVtbl -> UnlockStore(This) )
    ( (This)->lpVtbl -> GetCount(This,pcItems) )
    ( (This)->lpVtbl -> GetItemByIndex(This,unIndex,pguidKey,pValue) )
    ( (This)->lpVtbl -> CopyAllItems(This,pDest) )
    ( (This)->lpVtbl -> GenerateRequiredSchemas(This,dwAttributes,guidOutputSubType,rgGuidProtectionSchemasSupported,cProtectionSchemasSupported,ppRequiredProtectionSchemas) )
    ( (This)->lpVtbl -> GetOriginatorID(This,pguidOriginatorID) )
    ( (This)->lpVtbl -> GetMinimumGRLVersion(This,pdwMinimumGRLVersion) )
EXTERN_GUID( MFCONNECTOR_SPDIF, 0xb94a712, 0xad3e, 0x4cee, 0x83, 0xce, 0xce, 0x32, 0xe3, 0xdb, 0x65, 0x22);
EXTERN_GUID( MFCONNECTOR_UNKNOWN, 0xac3aef5c, 0xce43, 0x11d9, 0x92, 0xdb, 0x00, 0x0b, 0xdb, 0x28, 0xff, 0x98);
EXTERN_GUID( MFCONNECTOR_PCI, 0xac3aef5d, 0xce43, 0x11d9, 0x92, 0xdb, 0x00, 0x0b, 0xdb, 0x28, 0xff, 0x98);
EXTERN_GUID( MFCONNECTOR_PCIX, 0xac3aef5e, 0xce43, 0x11d9, 0x92, 0xdb, 0x00, 0x0b, 0xdb, 0x28, 0xff, 0x98);
EXTERN_GUID( MFCONNECTOR_PCI_Express, 0xac3aef5f, 0xce43, 0x11d9, 0x92, 0xdb, 0x00, 0x0b, 0xdb, 0x28, 0xff, 0x98);
EXTERN_GUID( MFCONNECTOR_AGP, 0xac3aef60, 0xce43, 0x11d9, 0x92, 0xdb, 0x00, 0x0b, 0xdb, 0x28, 0xff, 0x98);
EXTERN_GUID( MFCONNECTOR_VGA, 0x57cd5968, 0xce47, 0x11d9, 0x92, 0xdb, 0x00, 0x0b, 0xdb, 0x28, 0xff, 0x98);
EXTERN_GUID( MFCONNECTOR_SVIDEO, 0x57cd5969, 0xce47, 0x11d9, 0x92, 0xdb, 0x00, 0x0b, 0xdb, 0x28, 0xff, 0x98);
EXTERN_GUID( MFCONNECTOR_COMPOSITE, 0x57cd596a, 0xce47, 0x11d9, 0x92, 0xdb, 0x00, 0x0b, 0xdb, 0x28, 0xff, 0x98);
EXTERN_GUID( MFCONNECTOR_COMPONENT, 0x57cd596b, 0xce47, 0x11d9, 0x92, 0xdb, 0x00, 0x0b, 0xdb, 0x28, 0xff, 0x98);
EXTERN_GUID( MFCONNECTOR_DVI, 0x57cd596c, 0xce47, 0x11d9, 0x92, 0xdb, 0x00, 0x0b, 0xdb, 0x28, 0xff, 0x98);
EXTERN_GUID( MFCONNECTOR_HDMI, 0x57cd596d, 0xce47, 0x11d9, 0x92, 0xdb, 0x00, 0x0b, 0xdb, 0x28, 0xff, 0x98);
EXTERN_GUID( MFCONNECTOR_LVDS, 0x57cd596e, 0xce47, 0x11d9, 0x92, 0xdb, 0x00, 0x0b, 0xdb, 0x28, 0xff, 0x98);
EXTERN_GUID( MFCONNECTOR_D_JPN, 0x57cd5970, 0xce47, 0x11d9, 0x92, 0xdb, 0x00, 0x0b, 0xdb, 0x28, 0xff, 0x98);
EXTERN_GUID( MFCONNECTOR_SDI, 0x57cd5971, 0xce47, 0x11d9, 0x92, 0xdb, 0x00, 0x0b, 0xdb, 0x28, 0xff, 0x98);
EXTERN_GUID( MFCONNECTOR_DISPLAYPORT_EXTERNAL, 0x57cd5972, 0xce47, 0x11d9, 0x92, 0xdb, 0x00, 0x0b, 0xdb, 0x28, 0xff, 0x98);
EXTERN_GUID( MFCONNECTOR_DISPLAYPORT_EMBEDDED, 0x57cd5973, 0xce47, 0x11d9, 0x92, 0xdb, 0x00, 0x0b, 0xdb, 0x28, 0xff, 0x98);
EXTERN_GUID( MFCONNECTOR_UDI_EXTERNAL, 0x57cd5974, 0xce47, 0x11d9, 0x92, 0xdb, 0x00, 0x0b, 0xdb, 0x28, 0xff, 0x98);
EXTERN_GUID( MFCONNECTOR_UDI_EMBEDDED, 0x57cd5975, 0xce47, 0x11d9, 0x92, 0xdb, 0x00, 0x0b, 0xdb, 0x28, 0xff, 0x98);
EXTERN_GUID( MFCONNECTOR_MIRACAST, 0x57cd5977, 0xce47, 0x11d9, 0x92, 0xdb, 0x00, 0x0b, 0xdb, 0x28, 0xff, 0x98);
EXTERN_GUID( MFCONNECTOR_TRANSPORT_AGNOSTIC_DIGITAL_MODE_A, 0x57cd5978, 0xce47, 0x11d9, 0x92, 0xdb, 0x00, 0x0b, 0xdb, 0x28, 0xff, 0x98);
EXTERN_GUID( MFCONNECTOR_TRANSPORT_AGNOSTIC_DIGITAL_MODE_B, 0x57cd5979, 0xce47, 0x11d9, 0x92, 0xdb, 0x00, 0x0b, 0xdb, 0x28, 0xff, 0x98);
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0076_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0076_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFOutputSchema;
    typedef struct IMFOutputSchemaVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFOutputSchema * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFOutputSchema * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFOutputSchema * This);
        HRESULT ( STDMETHODCALLTYPE *GetItem )(
            IMFOutputSchema * This,
            REFGUID guidKey,
                                  PROPVARIANT *pValue);
        HRESULT ( STDMETHODCALLTYPE *GetItemType )(
            IMFOutputSchema * This,
            REFGUID guidKey,
                        MF_ATTRIBUTE_TYPE *pType);
        HRESULT ( STDMETHODCALLTYPE *CompareItem )(
            IMFOutputSchema * This,
            REFGUID guidKey,
            REFPROPVARIANT Value,
                        BOOL *pbResult);
        HRESULT ( STDMETHODCALLTYPE *Compare )(
            IMFOutputSchema * This,
            IMFAttributes *pTheirs,
            MF_ATTRIBUTES_MATCH_TYPE MatchType,
                        BOOL *pbResult);
        HRESULT ( STDMETHODCALLTYPE *GetUINT32 )(
            IMFOutputSchema * This,
            REFGUID guidKey,
                        UINT32 *punValue);
        HRESULT ( STDMETHODCALLTYPE *GetUINT64 )(
            IMFOutputSchema * This,
            REFGUID guidKey,
                        UINT64 *punValue);
        HRESULT ( STDMETHODCALLTYPE *GetDouble )(
            IMFOutputSchema * This,
            REFGUID guidKey,
                        double *pfValue);
        HRESULT ( STDMETHODCALLTYPE *GetGUID )(
            IMFOutputSchema * This,
            REFGUID guidKey,
                        GUID *pguidValue);
        HRESULT ( STDMETHODCALLTYPE *GetStringLength )(
            IMFOutputSchema * This,
            REFGUID guidKey,
                        UINT32 *pcchLength);
        HRESULT ( STDMETHODCALLTYPE *GetString )(
            IMFOutputSchema * This,
            REFGUID guidKey,
                                 LPWSTR pwszValue,
            UINT32 cchBufSize,
                                  UINT32 *pcchLength);
        HRESULT ( STDMETHODCALLTYPE *GetAllocatedString )(
            IMFOutputSchema * This,
            REFGUID guidKey,
                                          LPWSTR *ppwszValue,
                        UINT32 *pcchLength);
        HRESULT ( STDMETHODCALLTYPE *GetBlobSize )(
            IMFOutputSchema * This,
            REFGUID guidKey,
                        UINT32 *pcbBlobSize);
        HRESULT ( STDMETHODCALLTYPE *GetBlob )(
            IMFOutputSchema * This,
            REFGUID guidKey,
                                 UINT8 *pBuf,
            UINT32 cbBufSize,
                                  UINT32 *pcbBlobSize);
        HRESULT ( STDMETHODCALLTYPE *GetAllocatedBlob )(
            IMFOutputSchema * This,
            REFGUID guidKey,
                                          UINT8 **ppBuf,
                        UINT32 *pcbSize);
        HRESULT ( STDMETHODCALLTYPE *GetUnknown )(
            IMFOutputSchema * This,
            REFGUID guidKey,
            REFIID riid,
                                LPVOID *ppv);
        HRESULT ( STDMETHODCALLTYPE *SetItem )(
            IMFOutputSchema * This,
            REFGUID guidKey,
            REFPROPVARIANT Value);
        HRESULT ( STDMETHODCALLTYPE *DeleteItem )(
            IMFOutputSchema * This,
            REFGUID guidKey);
        HRESULT ( STDMETHODCALLTYPE *DeleteAllItems )(
            IMFOutputSchema * This);
        HRESULT ( STDMETHODCALLTYPE *SetUINT32 )(
            IMFOutputSchema * This,
            REFGUID guidKey,
            UINT32 unValue);
        HRESULT ( STDMETHODCALLTYPE *SetUINT64 )(
            IMFOutputSchema * This,
            REFGUID guidKey,
            UINT64 unValue);
        HRESULT ( STDMETHODCALLTYPE *SetDouble )(
            IMFOutputSchema * This,
            REFGUID guidKey,
            double fValue);
        HRESULT ( STDMETHODCALLTYPE *SetGUID )(
            IMFOutputSchema * This,
            REFGUID guidKey,
            REFGUID guidValue);
        HRESULT ( STDMETHODCALLTYPE *SetString )(
            IMFOutputSchema * This,
            REFGUID guidKey,
                               LPCWSTR wszValue);
        HRESULT ( STDMETHODCALLTYPE *SetBlob )(
            IMFOutputSchema * This,
            REFGUID guidKey,
                                const UINT8 *pBuf,
            UINT32 cbBufSize);
        HRESULT ( STDMETHODCALLTYPE *SetUnknown )(
            IMFOutputSchema * This,
            REFGUID guidKey,
                       IUnknown *pUnknown);
        HRESULT ( STDMETHODCALLTYPE *LockStore )(
            IMFOutputSchema * This);
        HRESULT ( STDMETHODCALLTYPE *UnlockStore )(
            IMFOutputSchema * This);
        HRESULT ( STDMETHODCALLTYPE *GetCount )(
            IMFOutputSchema * This,
                        UINT32 *pcItems);
        HRESULT ( STDMETHODCALLTYPE *GetItemByIndex )(
            IMFOutputSchema * This,
            UINT32 unIndex,
                        GUID *pguidKey,
                                  PROPVARIANT *pValue);
        HRESULT ( STDMETHODCALLTYPE *CopyAllItems )(
            IMFOutputSchema * This,
                       IMFAttributes *pDest);
        HRESULT ( STDMETHODCALLTYPE *GetSchemaType )(
            IMFOutputSchema * This,
            _Out_ GUID *pguidSchemaType);
        HRESULT ( STDMETHODCALLTYPE *GetConfigurationData )(
            IMFOutputSchema * This,
            _Out_ DWORD *pdwVal);
        HRESULT ( STDMETHODCALLTYPE *GetOriginatorID )(
            IMFOutputSchema * This,
            _Out_ GUID *pguidOriginatorID);
        END_INTERFACE
    } IMFOutputSchemaVtbl;
    interface IMFOutputSchema
    {
        CONST_VTBL struct IMFOutputSchemaVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetItem(This,guidKey,pValue) )
    ( (This)->lpVtbl -> GetItemType(This,guidKey,pType) )
    ( (This)->lpVtbl -> CompareItem(This,guidKey,Value,pbResult) )
    ( (This)->lpVtbl -> Compare(This,pTheirs,MatchType,pbResult) )
    ( (This)->lpVtbl -> GetUINT32(This,guidKey,punValue) )
    ( (This)->lpVtbl -> GetUINT64(This,guidKey,punValue) )
    ( (This)->lpVtbl -> GetDouble(This,guidKey,pfValue) )
    ( (This)->lpVtbl -> GetGUID(This,guidKey,pguidValue) )
    ( (This)->lpVtbl -> GetStringLength(This,guidKey,pcchLength) )
    ( (This)->lpVtbl -> GetString(This,guidKey,pwszValue,cchBufSize,pcchLength) )
    ( (This)->lpVtbl -> GetAllocatedString(This,guidKey,ppwszValue,pcchLength) )
    ( (This)->lpVtbl -> GetBlobSize(This,guidKey,pcbBlobSize) )
    ( (This)->lpVtbl -> GetBlob(This,guidKey,pBuf,cbBufSize,pcbBlobSize) )
    ( (This)->lpVtbl -> GetAllocatedBlob(This,guidKey,ppBuf,pcbSize) )
    ( (This)->lpVtbl -> GetUnknown(This,guidKey,riid,ppv) )
    ( (This)->lpVtbl -> SetItem(This,guidKey,Value) )
    ( (This)->lpVtbl -> DeleteItem(This,guidKey) )
    ( (This)->lpVtbl -> DeleteAllItems(This) )
    ( (This)->lpVtbl -> SetUINT32(This,guidKey,unValue) )
    ( (This)->lpVtbl -> SetUINT64(This,guidKey,unValue) )
    ( (This)->lpVtbl -> SetDouble(This,guidKey,fValue) )
    ( (This)->lpVtbl -> SetGUID(This,guidKey,guidValue) )
    ( (This)->lpVtbl -> SetString(This,guidKey,wszValue) )
    ( (This)->lpVtbl -> SetBlob(This,guidKey,pBuf,cbBufSize) )
    ( (This)->lpVtbl -> SetUnknown(This,guidKey,pUnknown) )
    ( (This)->lpVtbl -> LockStore(This) )
    ( (This)->lpVtbl -> UnlockStore(This) )
    ( (This)->lpVtbl -> GetCount(This,pcItems) )
    ( (This)->lpVtbl -> GetItemByIndex(This,unIndex,pguidKey,pValue) )
    ( (This)->lpVtbl -> CopyAllItems(This,pDest) )
    ( (This)->lpVtbl -> GetSchemaType(This,pguidSchemaType) )
    ( (This)->lpVtbl -> GetConfigurationData(This,pdwVal) )
    ( (This)->lpVtbl -> GetOriginatorID(This,pguidOriginatorID) )
EXTERN_GUID( MFPROTECTION_DISABLE, 0x8cc6d81b, 0xfec6, 0x4d8f, 0x96, 0x4b, 0xcf, 0xba, 0x0b, 0x0d, 0xad, 0x0d);
EXTERN_GUID( MFPROTECTION_CONSTRICTVIDEO, 0x193370ce, 0xc5e4, 0x4c3a, 0x8a, 0x66, 0x69, 0x59, 0xb4, 0xda, 0x44, 0x42);
EXTERN_GUID( MFPROTECTION_CONSTRICTVIDEO_NOOPM, 0xa580e8cd, 0xc247, 0x4957, 0xb9, 0x83, 0x3c, 0x2e, 0xeb, 0xd1, 0xff, 0x59);
EXTERN_GUID( MFPROTECTION_CONSTRICTAUDIO, 0xffc99b44, 0xdf48, 0x4e16, 0x8e, 0x66, 0x09, 0x68, 0x92, 0xc1, 0x57, 0x8a);
EXTERN_GUID( MFPROTECTION_TRUSTEDAUDIODRIVERS, 0x65bdf3d2, 0x0168, 0x4816, 0xa5, 0x33, 0x55, 0xd4, 0x7b, 0x02, 0x71, 0x01);
EXTERN_GUID( MFPROTECTION_HDCP, 0xAE7CC03D, 0xC828, 0x4021, 0xac, 0xb7, 0xd5, 0x78, 0xd2, 0x7a, 0xaf, 0x13);
EXTERN_GUID( MFPROTECTION_CGMSA, 0xE57E69E9, 0x226B, 0x4d31, 0xB4, 0xE3, 0xD3, 0xDB, 0x00, 0x87, 0x36, 0xDD);
EXTERN_GUID( MFPROTECTION_ACP, 0xc3fd11c6, 0xf8b7, 0x4d20, 0xb0, 0x08, 0x1d, 0xb1, 0x7d, 0x61, 0xf2, 0xda);
EXTERN_GUID( MFPROTECTION_WMDRMOTA, 0xa267a6a1, 0x362e, 0x47d0, 0x88, 0x05, 0x46, 0x28, 0x59, 0x8a, 0x23, 0xe4);
EXTERN_GUID( MFPROTECTION_FFT, 0x462a56b2, 0x2866, 0x4bb6, 0x98, 0x0d, 0x6d, 0x8d, 0x9e, 0xdb, 0x1a, 0x8c);
EXTERN_GUID( MFPROTECTION_PROTECTED_SURFACE, 0x4f5d9566, 0xe742, 0x4a25, 0x8d, 0x1f, 0xd2, 0x87, 0xb5, 0xfa, 0x0a, 0xde);
EXTERN_GUID( MFPROTECTION_DISABLE_SCREEN_SCRAPE, 0xa21179a4, 0xb7cd, 0x40d8, 0x96, 0x14, 0x8e, 0xf2, 0x37, 0x1b, 0xa7, 0x8d);
EXTERN_GUID( MFPROTECTION_VIDEO_FRAMES, 0x36a59cbc, 0x7401, 0x4a8c, 0xbc, 0x20, 0x46, 0xa7, 0xc9, 0xe5, 0x97, 0xf0);
EXTERN_GUID(MFPROTECTION_HARDWARE, 0x4ee7f0c1, 0x9ed7, 0x424f, 0xb6, 0xbe, 0x99, 0x6b, 0x33, 0x52, 0x88, 0x56);
EXTERN_GUID( MFPROTECTION_HDCP_WITH_TYPE_ENFORCEMENT, 0xa4a585e8, 0xed60, 0x442d, 0x81, 0x4d, 0xdb, 0x4d, 0x42, 0x20, 0xa0, 0x6d);
typedef
enum _MF_OPM_CGMSA_PROTECTION_LEVEL
    {
        MF_OPM_CGMSA_OFF = 0,
        MF_OPM_CGMSA_COPY_FREELY = 0x1,
        MF_OPM_CGMSA_COPY_NO_MORE = 0x2,
        MF_OPM_CGMSA_COPY_ONE_GENERATION = 0x3,
        MF_OPM_CGMSA_COPY_NEVER = 0x4,
        MF_OPM_CGMSA_REDISTRIBUTION_CONTROL_REQUIRED = 0x8
    } MF_OPM_CGMSA_PROTECTION_LEVEL;
typedef
enum _MF_OPM_ACP_PROTECTION_LEVEL
    {
        MF_OPM_ACP_OFF = 0,
        MF_OPM_ACP_LEVEL_ONE = 1,
        MF_OPM_ACP_LEVEL_TWO = 2,
        MF_OPM_ACP_LEVEL_THREE = 3,
        MF_OPM_ACP_FORCE_ULONG = 0x7fffffff
    } MF_OPM_ACP_PROTECTION_LEVEL;
EXTERN_GUID( MFPROTECTIONATTRIBUTE_BEST_EFFORT, 0xc8e06331, 0x75f0, 0x4ec1, 0x8e, 0x77, 0x17, 0x57, 0x8f, 0x77, 0x3b, 0x46);
EXTERN_GUID( MFPROTECTIONATTRIBUTE_FAIL_OVER, 0x8536abc5, 0x38f1, 0x4151, 0x9c, 0xce, 0xf5, 0x5d, 0x94, 0x12, 0x29, 0xac);
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
EXTERN_GUID(MFPROTECTION_GRAPHICS_TRANSFER_AES_ENCRYPTION, 0xc873de64, 0xd8a5, 0x49e6, 0x88, 0xbb, 0xfb, 0x96, 0x3f, 0xd3, 0xd4, 0xce);
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
EXTERN_GUID( MFPROTECTIONATTRIBUTE_CONSTRICTVIDEO_IMAGESIZE, 0x8476fc, 0x4b58, 0x4d80, 0xa7, 0x90, 0xe7, 0x29, 0x76, 0x73, 0x16, 0x1d);
EXTERN_GUID( MFPROTECTIONATTRIBUTE_HDCP_SRM, 0x6f302107, 0x3477, 0x4468, 0x8a, 0x8, 0xee, 0xf9, 0xdb, 0x10, 0xe2, 0xf);
    ((DWORD)(Disable ? 0x00000001 : 0))
    (0 != ((Data) & 0x00000001))
    (((DWORD)((Data) & 0xFFFFFFFE)) >> 1)
    ((DWORD)(Level))
    ((DWORD)((Data) & 0x000000FF))
    (((DWORD)((Data) & 0xFFFFFF00)) >> 8)
typedef enum _MFAudioConstriction
{
    MFaudioConstrictionOff = 0,
    MFaudioConstriction48_16 = ( MFaudioConstrictionOff + 1 ) ,
    MFaudioConstriction44_16 = ( MFaudioConstriction48_16 + 1 ) ,
    MFaudioConstriction14_14 = ( MFaudioConstriction44_16 + 1 ) ,
    MFaudioConstrictionMute = ( MFaudioConstriction14_14 + 1 )
} MFAudioConstriction;
    (((DWORD)((TestCertificateEnable) ? 0x00020000 : 0)) | \
     ((DWORD)((DigitalOutputDisable) ? 0x00010000 : 0)) | \
     ((DWORD)(DrmLevel)))
    (((DWORD)((TestCertificateEnable) ? 0x00020000 : 0)) | \
     ((DWORD)((DigitalOutputDisable) ? 0x00010000 : 0)) | \
     ((DWORD)((CopyOK) ? 0x00040000 : 0)) | \
     ((DWORD)(DrmLevel)))
    ((DWORD)((Data) & 0x0000FFFF))
    (0 != ((Data) & 0x00010000))
    (0 != ((Data) & 0x00020000))
    (0 != ((Data) & 0x00040000))
    (((DWORD)((Data) & 0xFFF80000)) >> 19)
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0077_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0077_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFSecureChannel;
    typedef struct IMFSecureChannelVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFSecureChannel * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFSecureChannel * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFSecureChannel * This);
        HRESULT ( STDMETHODCALLTYPE *GetCertificate )(
            IMFSecureChannel * This,
            _Outptr_result_bytebuffer_(*pcbCert) BYTE **ppCert,
            _Out_ DWORD *pcbCert);
        HRESULT ( STDMETHODCALLTYPE *SetupSession )(
            IMFSecureChannel * This,
            _In_reads_bytes_(cbSessionKey) BYTE *pbEncryptedSessionKey,
                       DWORD cbSessionKey);
        END_INTERFACE
    } IMFSecureChannelVtbl;
    interface IMFSecureChannel
    {
        CONST_VTBL struct IMFSecureChannelVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetCertificate(This,ppCert,pcbCert) )
    ( (This)->lpVtbl -> SetupSession(This,pbEncryptedSessionKey,cbSessionKey) )
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
typedef
enum SAMPLE_PROTECTION_VERSION
    {
        SAMPLE_PROTECTION_VERSION_NO = 0,
        SAMPLE_PROTECTION_VERSION_BASIC_LOKI = 1,
        SAMPLE_PROTECTION_VERSION_SCATTER = 2,
        SAMPLE_PROTECTION_VERSION_RC4 = 3,
        SAMPLE_PROTECTION_VERSION_AES128CTR = 4
    } SAMPLE_PROTECTION_VERSION;
EXTERN_GUID( MF_SampleProtectionSalt, 0x5403deee, 0xb9ee, 0x438f, 0xaa, 0x83, 0x38, 0x4, 0x99, 0x7e, 0x56, 0x9d);
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0078_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0078_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFSampleProtection;
    typedef struct IMFSampleProtectionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFSampleProtection * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFSampleProtection * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFSampleProtection * This);
        HRESULT ( STDMETHODCALLTYPE *GetInputProtectionVersion )(
            IMFSampleProtection * This,
            _Out_ DWORD *pdwVersion);
        HRESULT ( STDMETHODCALLTYPE *GetOutputProtectionVersion )(
            IMFSampleProtection * This,
            _Out_ DWORD *pdwVersion);
        HRESULT ( STDMETHODCALLTYPE *GetProtectionCertificate )(
            IMFSampleProtection * This,
                       DWORD dwVersion,
            _Outptr_result_bytebuffer_(*pcbCert) BYTE **ppCert,
            _Out_ DWORD *pcbCert);
        HRESULT ( STDMETHODCALLTYPE *InitOutputProtection )(
            IMFSampleProtection * This,
                       DWORD dwVersion,
                       DWORD dwOutputId,
                       BYTE *pbCert,
                       DWORD cbCert,
                        BYTE **ppbSeed,
                        DWORD *pcbSeed);
        HRESULT ( STDMETHODCALLTYPE *InitInputProtection )(
            IMFSampleProtection * This,
                       DWORD dwVersion,
                       DWORD dwInputId,
                       BYTE *pbSeed,
                       DWORD cbSeed);
        END_INTERFACE
    } IMFSampleProtectionVtbl;
    interface IMFSampleProtection
    {
        CONST_VTBL struct IMFSampleProtectionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetInputProtectionVersion(This,pdwVersion) )
    ( (This)->lpVtbl -> GetOutputProtectionVersion(This,pdwVersion) )
    ( (This)->lpVtbl -> GetProtectionCertificate(This,dwVersion,ppCert,pcbCert) )
    ( (This)->lpVtbl -> InitOutputProtection(This,dwVersion,dwOutputId,pbCert,cbCert,ppbSeed,pcbSeed) )
    ( (This)->lpVtbl -> InitInputProtection(This,dwVersion,dwInputId,pbSeed,cbSeed) )
EXTERN_C const IID IID_IMFMediaSinkPreroll;
    typedef struct IMFMediaSinkPrerollVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMFMediaSinkPreroll * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMFMediaSinkPreroll * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMFMediaSinkPreroll * This);
        HRESULT ( STDMETHODCALLTYPE *NotifyPreroll )(
            __RPC__in IMFMediaSinkPreroll * This,
                       MFTIME hnsUpcomingStartTime);
        END_INTERFACE
    } IMFMediaSinkPrerollVtbl;
    interface IMFMediaSinkPreroll
    {
        CONST_VTBL struct IMFMediaSinkPrerollVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> NotifyPreroll(This,hnsUpcomingStartTime) )
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0080_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0080_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFFinalizableMediaSink;
    typedef struct IMFFinalizableMediaSinkVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFFinalizableMediaSink * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFFinalizableMediaSink * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFFinalizableMediaSink * This);
        HRESULT ( STDMETHODCALLTYPE *GetCharacteristics )(
            IMFFinalizableMediaSink * This,
                        DWORD *pdwCharacteristics);
        HRESULT ( STDMETHODCALLTYPE *AddStreamSink )(
            IMFFinalizableMediaSink * This,
                       DWORD dwStreamSinkIdentifier,
                       IMFMediaType *pMediaType,
                        IMFStreamSink **ppStreamSink);
        HRESULT ( STDMETHODCALLTYPE *RemoveStreamSink )(
            IMFFinalizableMediaSink * This,
                       DWORD dwStreamSinkIdentifier);
        HRESULT ( STDMETHODCALLTYPE *GetStreamSinkCount )(
            IMFFinalizableMediaSink * This,
                        DWORD *pcStreamSinkCount);
        HRESULT ( STDMETHODCALLTYPE *GetStreamSinkByIndex )(
            IMFFinalizableMediaSink * This,
                       DWORD dwIndex,
                        IMFStreamSink **ppStreamSink);
        HRESULT ( STDMETHODCALLTYPE *GetStreamSinkById )(
            IMFFinalizableMediaSink * This,
                       DWORD dwStreamSinkIdentifier,
                        IMFStreamSink **ppStreamSink);
        HRESULT ( STDMETHODCALLTYPE *SetPresentationClock )(
            IMFFinalizableMediaSink * This,
                       IMFPresentationClock *pPresentationClock);
        HRESULT ( STDMETHODCALLTYPE *GetPresentationClock )(
            IMFFinalizableMediaSink * This,
                        IMFPresentationClock **ppPresentationClock);
        HRESULT ( STDMETHODCALLTYPE *Shutdown )(
            IMFFinalizableMediaSink * This);
        HRESULT ( STDMETHODCALLTYPE *BeginFinalize )(
            IMFFinalizableMediaSink * This,
                       IMFAsyncCallback *pCallback,
                       IUnknown *punkState);
        HRESULT ( STDMETHODCALLTYPE *EndFinalize )(
            IMFFinalizableMediaSink * This,
                       IMFAsyncResult *pResult);
        END_INTERFACE
    } IMFFinalizableMediaSinkVtbl;
    interface IMFFinalizableMediaSink
    {
        CONST_VTBL struct IMFFinalizableMediaSinkVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetCharacteristics(This,pdwCharacteristics) )
    ( (This)->lpVtbl -> AddStreamSink(This,dwStreamSinkIdentifier,pMediaType,ppStreamSink) )
    ( (This)->lpVtbl -> RemoveStreamSink(This,dwStreamSinkIdentifier) )
    ( (This)->lpVtbl -> GetStreamSinkCount(This,pcStreamSinkCount) )
    ( (This)->lpVtbl -> GetStreamSinkByIndex(This,dwIndex,ppStreamSink) )
    ( (This)->lpVtbl -> GetStreamSinkById(This,dwStreamSinkIdentifier,ppStreamSink) )
    ( (This)->lpVtbl -> SetPresentationClock(This,pPresentationClock) )
    ( (This)->lpVtbl -> GetPresentationClock(This,ppPresentationClock) )
    ( (This)->lpVtbl -> Shutdown(This) )
    ( (This)->lpVtbl -> BeginFinalize(This,pCallback,punkState) )
    ( (This)->lpVtbl -> EndFinalize(This,pResult) )
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0081_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0081_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFStreamingSinkConfig;
    typedef struct IMFStreamingSinkConfigVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMFStreamingSinkConfig * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMFStreamingSinkConfig * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMFStreamingSinkConfig * This);
        HRESULT ( STDMETHODCALLTYPE *StartStreaming )(
            __RPC__in IMFStreamingSinkConfig * This,
                       BOOL fSeekOffsetIsByteOffset,
                       QWORD qwSeekOffset);
        END_INTERFACE
    } IMFStreamingSinkConfigVtbl;
    interface IMFStreamingSinkConfig
    {
        CONST_VTBL struct IMFStreamingSinkConfigVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> StartStreaming(This,fSeekOffsetIsByteOffset,qwSeekOffset) )
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0082_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0082_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFRemoteProxy;
    typedef struct IMFRemoteProxyVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFRemoteProxy * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFRemoteProxy * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFRemoteProxy * This);
        HRESULT ( STDMETHODCALLTYPE *GetRemoteObject )(
            IMFRemoteProxy * This,
                       REFIID riid,
            _Outptr_ void **ppv);
        HRESULT ( STDMETHODCALLTYPE *GetRemoteHost )(
            IMFRemoteProxy * This,
                       REFIID riid,
            _Outptr_ void **ppv);
        END_INTERFACE
    } IMFRemoteProxyVtbl;
    interface IMFRemoteProxy
    {
        CONST_VTBL struct IMFRemoteProxyVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetRemoteObject(This,riid,ppv) )
    ( (This)->lpVtbl -> GetRemoteHost(This,riid,ppv) )
EXTERN_GUID( MF_REMOTE_PROXY, 0x2f00c90e, 0xd2cf, 0x4278, 0x8b, 0x6a, 0xd0, 0x77, 0xfa, 0xc3, 0xa2, 0x5f);
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0083_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0083_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFObjectReferenceStream;
    typedef struct IMFObjectReferenceStreamVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFObjectReferenceStream * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFObjectReferenceStream * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFObjectReferenceStream * This);
        HRESULT ( STDMETHODCALLTYPE *SaveReference )(
            IMFObjectReferenceStream * This,
                       REFIID riid,
                       IUnknown *pUnk);
        HRESULT ( STDMETHODCALLTYPE *LoadReference )(
            IMFObjectReferenceStream * This,
                       REFIID riid,
                        void **ppv);
        END_INTERFACE
    } IMFObjectReferenceStreamVtbl;
    interface IMFObjectReferenceStream
    {
        CONST_VTBL struct IMFObjectReferenceStreamVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SaveReference(This,riid,pUnk) )
    ( (This)->lpVtbl -> LoadReference(This,riid,ppv) )
EXTERN_GUID( CLSID_CreateMediaExtensionObject, 0xef65a54d, 0x0788, 0x45b8, 0x8b, 0x14, 0xbc, 0x0f, 0x6a, 0x6b, 0x51, 0x37);
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0084_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0084_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFPMPHost;
    typedef struct IMFPMPHostVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMFPMPHost * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMFPMPHost * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMFPMPHost * This);
        HRESULT ( STDMETHODCALLTYPE *LockProcess )(
            __RPC__in IMFPMPHost * This);
        HRESULT ( STDMETHODCALLTYPE *UnlockProcess )(
            __RPC__in IMFPMPHost * This);
                      HRESULT ( STDMETHODCALLTYPE *CreateObjectByCLSID )(
            IMFPMPHost * This,
                       REFCLSID clsid,
                               IStream *pStream,
                       REFIID riid,
                                void **ppv);
        END_INTERFACE
    } IMFPMPHostVtbl;
    interface IMFPMPHost
    {
        CONST_VTBL struct IMFPMPHostVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> LockProcess(This) )
    ( (This)->lpVtbl -> UnlockProcess(This) )
    ( (This)->lpVtbl -> CreateObjectByCLSID(This,clsid,pStream,riid,ppv) )
                HRESULT STDMETHODCALLTYPE IMFPMPHost_RemoteCreateObjectByCLSID_Proxy(
    __RPC__in IMFPMPHost * This,
               __RPC__in REFCLSID clsid,
                                __RPC__in_ecount_full_opt(cbData) BYTE *pbData,
               DWORD cbData,
               __RPC__in REFIID riid,
                        __RPC__deref_out_opt void **ppv);
void __RPC_STUB IMFPMPHost_RemoteCreateObjectByCLSID_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
EXTERN_C const GUID MF_PMP_SERVICE;
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0085_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0085_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFPMPClient;
    typedef struct IMFPMPClientVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFPMPClient * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFPMPClient * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFPMPClient * This);
        HRESULT ( STDMETHODCALLTYPE *SetPMPHost )(
            IMFPMPClient * This,
                       IMFPMPHost *pPMPHost);
        END_INTERFACE
    } IMFPMPClientVtbl;
    interface IMFPMPClient
    {
        CONST_VTBL struct IMFPMPClientVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetPMPHost(This,pPMPHost) )
EXTERN_C const IID IID_IMFPMPServer;
    typedef struct IMFPMPServerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMFPMPServer * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMFPMPServer * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMFPMPServer * This);
        HRESULT ( STDMETHODCALLTYPE *LockProcess )(
            __RPC__in IMFPMPServer * This);
        HRESULT ( STDMETHODCALLTYPE *UnlockProcess )(
            __RPC__in IMFPMPServer * This);
        HRESULT ( STDMETHODCALLTYPE *CreateObjectByCLSID )(
            __RPC__in IMFPMPServer * This,
                       __RPC__in REFCLSID clsid,
                       __RPC__in REFIID riid,
                                __RPC__deref_out_opt void **ppObject);
        END_INTERFACE
    } IMFPMPServerVtbl;
    interface IMFPMPServer
    {
        CONST_VTBL struct IMFPMPServerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> LockProcess(This) )
    ( (This)->lpVtbl -> UnlockProcess(This) )
    ( (This)->lpVtbl -> CreateObjectByCLSID(This,clsid,riid,ppObject) )
STDAPI MFCreatePMPServer(
    DWORD dwCreationFlags,
    _Outptr_ IMFPMPServer** ppPMPServer
    );
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0087_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0087_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFRemoteDesktopPlugin;
    typedef struct IMFRemoteDesktopPluginVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFRemoteDesktopPlugin * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFRemoteDesktopPlugin * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFRemoteDesktopPlugin * This);
        HRESULT ( STDMETHODCALLTYPE *UpdateTopology )(
            IMFRemoteDesktopPlugin * This,
                            IMFTopology *pTopology);
        END_INTERFACE
    } IMFRemoteDesktopPluginVtbl;
    interface IMFRemoteDesktopPlugin
    {
        CONST_VTBL struct IMFRemoteDesktopPluginVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> UpdateTopology(This,pTopology) )
STDAPI MFCreateRemoteDesktopPlugin(
    _Outptr_ IMFRemoteDesktopPlugin** ppPlugin );
EXTERN_C HRESULT STDAPICALLTYPE CreateNamedPropertyStore(
        _Outptr_ INamedPropertyStore **ppStore
        );
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0088_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0088_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFSAMIStyle;
    typedef struct IMFSAMIStyleVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFSAMIStyle * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFSAMIStyle * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFSAMIStyle * This);
        HRESULT ( STDMETHODCALLTYPE *GetStyleCount )(
            IMFSAMIStyle * This,
            _Out_ DWORD *pdwCount);
        HRESULT ( STDMETHODCALLTYPE *GetStyles )(
            IMFSAMIStyle * This,
            _Out_ PROPVARIANT *pPropVarStyleArray);
        HRESULT ( STDMETHODCALLTYPE *SetSelectedStyle )(
            IMFSAMIStyle * This,
            _In_ LPCWSTR pwszStyle);
        HRESULT ( STDMETHODCALLTYPE *GetSelectedStyle )(
            IMFSAMIStyle * This,
            _Outptr_ LPWSTR *ppwszStyle);
        END_INTERFACE
    } IMFSAMIStyleVtbl;
    interface IMFSAMIStyle
    {
        CONST_VTBL struct IMFSAMIStyleVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetStyleCount(This,pdwCount) )
    ( (This)->lpVtbl -> GetStyles(This,pPropVarStyleArray) )
    ( (This)->lpVtbl -> SetSelectedStyle(This,pwszStyle) )
    ( (This)->lpVtbl -> GetSelectedStyle(This,ppwszStyle) )
EXTERN_GUID( MF_SAMI_SERVICE, 0x49a89ae7, 0xb4d9, 0x4ef2, 0xaa, 0x5c, 0xf6, 0x5a, 0x3e, 0x5, 0xae, 0x4e );
EXTERN_GUID( MF_PD_SAMI_STYLELIST, 0xe0b73c7f, 0x486d, 0x484e, 0x98, 0x72, 0x4d, 0xe5, 0x19, 0x2a, 0x7b, 0xf8 );
EXTERN_GUID( MF_SD_SAMI_LANGUAGE, 0x36fcb98a, 0x6cd0, 0x44cb, 0xac, 0xb9, 0xa8, 0xf5, 0x60, 0xd, 0xd0, 0xbb );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
STDAPI MFCreateSampleCopierMFT(_Outptr_ IMFTransform** ppCopierMFT);
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0089_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0089_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFTranscodeProfile;
    typedef struct IMFTranscodeProfileVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFTranscodeProfile * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFTranscodeProfile * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFTranscodeProfile * This);
        HRESULT ( STDMETHODCALLTYPE *SetAudioAttributes )(
            IMFTranscodeProfile * This,
            _In_opt_ IMFAttributes *pAttrs);
        HRESULT ( STDMETHODCALLTYPE *GetAudioAttributes )(
            IMFTranscodeProfile * This,
            _Outptr_result_maybenull_ IMFAttributes **ppAttrs);
        HRESULT ( STDMETHODCALLTYPE *SetVideoAttributes )(
            IMFTranscodeProfile * This,
            _In_opt_ IMFAttributes *pAttrs);
        HRESULT ( STDMETHODCALLTYPE *GetVideoAttributes )(
            IMFTranscodeProfile * This,
            _Outptr_result_maybenull_ IMFAttributes **ppAttrs);
        HRESULT ( STDMETHODCALLTYPE *SetContainerAttributes )(
            IMFTranscodeProfile * This,
            _In_opt_ IMFAttributes *pAttrs);
        HRESULT ( STDMETHODCALLTYPE *GetContainerAttributes )(
            IMFTranscodeProfile * This,
            _Outptr_result_maybenull_ IMFAttributes **ppAttrs);
        END_INTERFACE
    } IMFTranscodeProfileVtbl;
    interface IMFTranscodeProfile
    {
        CONST_VTBL struct IMFTranscodeProfileVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetAudioAttributes(This,pAttrs) )
    ( (This)->lpVtbl -> GetAudioAttributes(This,ppAttrs) )
    ( (This)->lpVtbl -> SetVideoAttributes(This,pAttrs) )
    ( (This)->lpVtbl -> GetVideoAttributes(This,ppAttrs) )
    ( (This)->lpVtbl -> SetContainerAttributes(This,pAttrs) )
    ( (This)->lpVtbl -> GetContainerAttributes(This,ppAttrs) )
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
EXTERN_GUID( MF_TRANSCODE_CONTAINERTYPE, 0x150ff23f, 0x4abc, 0x478b, 0xac, 0x4f, 0xe1, 0x91, 0x6f, 0xba, 0x1c, 0xca );
EXTERN_GUID( MFTranscodeContainerType_ASF, 0x430f6f6e, 0xb6bf, 0x4fc1, 0xa0, 0xbd, 0x9e, 0xe4, 0x6e, 0xee, 0x2a, 0xfb );
EXTERN_GUID( MFTranscodeContainerType_MPEG4, 0xdc6cd05d, 0xb9d0, 0x40ef, 0xbd, 0x35, 0xfa, 0x62, 0x2c, 0x1a, 0xb2, 0x8a );
EXTERN_GUID( MFTranscodeContainerType_MP3, 0xe438b912, 0x83f1, 0x4de6, 0x9e, 0x3a, 0x9f, 0xfb, 0xc6, 0xdd, 0x24, 0xd1 );
EXTERN_GUID( MFTranscodeContainerType_FLAC, 0x31344aa3, 0x05a9, 0x42b5, 0x90, 0x1b, 0x8e, 0x9d, 0x42, 0x57, 0xf7, 0x5e );
EXTERN_GUID( MFTranscodeContainerType_3GP, 0x34c50167, 0x4472, 0x4f34, 0x9e, 0xa0, 0xc4, 0x9f, 0xba, 0xcf, 0x03, 0x7d );
EXTERN_GUID( MFTranscodeContainerType_AC3, 0x6d8d91c3, 0x8c91, 0x4ed1, 0x87, 0x42, 0x8c, 0x34, 0x7d, 0x5b, 0x44, 0xd0 );
EXTERN_GUID( MFTranscodeContainerType_ADTS, 0x132fd27d, 0x0f02, 0x43de, 0xa3, 0x01, 0x38, 0xfb, 0xbb, 0xb3, 0x83, 0x4e );
EXTERN_GUID( MFTranscodeContainerType_MPEG2, 0xbfc2dbf9, 0x7bb4, 0x4f8f, 0xaf, 0xde, 0xe1, 0x12, 0xc4, 0x4b, 0xa8, 0x82 );
EXTERN_GUID( MFTranscodeContainerType_WAVE, 0x64c3453c, 0x0f26, 0x4741, 0xbe, 0x63, 0x87, 0xbd, 0xf8, 0xbb, 0x93, 0x5b );
EXTERN_GUID( MFTranscodeContainerType_AVI, 0x7edfe8af, 0x402f, 0x4d76, 0xa3, 0x3c, 0x61, 0x9f, 0xd1, 0x57, 0xd0, 0xf1 );
EXTERN_GUID( MFTranscodeContainerType_FMPEG4, 0x9ba876f1, 0x419f, 0x4b77, 0xa1, 0xe0, 0x35, 0x95, 0x9d, 0x9d, 0x40, 0x4 );
EXTERN_GUID( MFTranscodeContainerType_AMR, 0x25d5ad3, 0x621a, 0x475b, 0x96, 0x4d, 0x66, 0xb1, 0xc8, 0x24, 0xf0, 0x79 );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
EXTERN_GUID( MF_TRANSCODE_SKIP_METADATA_TRANSFER, 0x4e4469ef, 0xb571, 0x4959, 0x8f, 0x83, 0x3d, 0xcf, 0xba, 0x33, 0xa3, 0x93 );
EXTERN_GUID( MF_TRANSCODE_TOPOLOGYMODE, 0x3e3df610, 0x394a, 0x40b2, 0x9d, 0xea, 0x3b, 0xab, 0x65, 0xb, 0xeb, 0xf2 );
typedef
enum _MF_TRANSCODE_TOPOLOGYMODE_FLAGS
    {
        MF_TRANSCODE_TOPOLOGYMODE_SOFTWARE_ONLY = 0,
        MF_TRANSCODE_TOPOLOGYMODE_HARDWARE_ALLOWED = 1
    } MF_TRANSCODE_TOPOLOGYMODE_FLAGS;
EXTERN_GUID( MF_TRANSCODE_ADJUST_PROFILE, 0x9c37c21b, 0x60f, 0x487c, 0xa6, 0x90, 0x80, 0xd7, 0xf5, 0xd, 0x1c, 0x72 );
typedef
enum _MF_TRANSCODE_ADJUST_PROFILE_FLAGS
    {
        MF_TRANSCODE_ADJUST_PROFILE_DEFAULT = 0,
        MF_TRANSCODE_ADJUST_PROFILE_USE_SOURCE_ATTRIBUTES = 1
    } MF_TRANSCODE_ADJUST_PROFILE_FLAGS;
EXTERN_GUID( MF_TRANSCODE_ENCODINGPROFILE, 0x6947787c, 0xf508, 0x4ea9, 0xb1, 0xe9, 0xa1, 0xfe, 0x3a, 0x49, 0xfb, 0xc9 );
EXTERN_GUID( MF_TRANSCODE_QUALITYVSSPEED, 0x98332df8, 0x03cd, 0x476b, 0x89, 0xfa, 0x3f, 0x9e, 0x44, 0x2d, 0xec, 0x9f );
EXTERN_GUID( MF_TRANSCODE_DONOT_INSERT_ENCODER, 0xf45aa7ce, 0xab24, 0x4012, 0xa1, 0x1b, 0xdc, 0x82, 0x20, 0x20, 0x14, 0x10 );
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
typedef
enum _MF_VIDEO_PROCESSOR_ALGORITHM_TYPE
    {
        MF_VIDEO_PROCESSOR_ALGORITHM_DEFAULT = 0,
        MF_VIDEO_PROCESSOR_ALGORITHM_MRF_CRF_444 = 1
    } MF_VIDEO_PROCESSOR_ALGORITHM_TYPE;
EXTERN_GUID( MF_VIDEO_PROCESSOR_ALGORITHM, 0x4a0a1e1f, 0x272c, 0x4fb6, 0x9e, 0xb1, 0xdb, 0x33, 0xc, 0xbc, 0x97, 0xca);
EXTERN_GUID( MF_XVP_DISABLE_FRC, 0x2c0afa19, 0x7a97, 0x4d5a, 0x9e, 0xe8, 0x16, 0xd4, 0xfc, 0x51, 0x8d, 0x8c );
EXTERN_GUID( MF_XVP_CALLER_ALLOCATES_OUTPUT, 0x4a2cabc, 0xcab, 0x40b1, 0xa1, 0xb9, 0x75, 0xbc, 0x36, 0x58, 0xf0, 0x0 );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
STDAPI MFCreateTranscodeProfile(
    _Outptr_ IMFTranscodeProfile** ppTranscodeProfile
    );
STDAPI MFCreateTranscodeTopology(
    _In_ IMFMediaSource* pSrc,
    _In_ LPCWSTR pwszOutputFilePath,
    _In_ IMFTranscodeProfile* pProfile,
    _Outptr_ IMFTopology** ppTranscodeTopo
    );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
STDAPI MFCreateTranscodeTopologyFromByteStream(
    _In_ IMFMediaSource* pSrc,
    _In_ IMFByteStream* pOutputStream,
    _In_ IMFTranscodeProfile* pProfile,
    _Out_ IMFTopology** ppTranscodeTopo
    );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
STDAPI MFTranscodeGetAudioOutputAvailableTypes(
 _In_ REFGUID guidSubType,
 _In_ DWORD dwMFTFlags,
 _In_opt_ IMFAttributes* pCodecConfig,
 _Outptr_ IMFCollection** ppAvailableTypes );
typedef struct _MF_TRANSCODE_SINK_INFO
    {
    DWORD dwVideoStreamID;
    IMFMediaType *pVideoMediaType;
    DWORD dwAudioStreamID;
    IMFMediaType *pAudioMediaType;
    } MF_TRANSCODE_SINK_INFO;
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0090_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0090_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFTranscodeSinkInfoProvider;
    typedef struct IMFTranscodeSinkInfoProviderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFTranscodeSinkInfoProvider * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFTranscodeSinkInfoProvider * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFTranscodeSinkInfoProvider * This);
        HRESULT ( STDMETHODCALLTYPE *SetOutputFile )(
            IMFTranscodeSinkInfoProvider * This,
            _In_ LPCWSTR pwszFileName);
        HRESULT ( STDMETHODCALLTYPE *SetOutputByteStream )(
            IMFTranscodeSinkInfoProvider * This,
            _In_ IMFActivate *pByteStreamActivate);
        HRESULT ( STDMETHODCALLTYPE *SetProfile )(
            IMFTranscodeSinkInfoProvider * This,
            _In_ IMFTranscodeProfile *pProfile);
        HRESULT ( STDMETHODCALLTYPE *GetSinkInfo )(
            IMFTranscodeSinkInfoProvider * This,
            _Out_ MF_TRANSCODE_SINK_INFO *pSinkInfo);
        END_INTERFACE
    } IMFTranscodeSinkInfoProviderVtbl;
    interface IMFTranscodeSinkInfoProvider
    {
        CONST_VTBL struct IMFTranscodeSinkInfoProviderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetOutputFile(This,pwszFileName) )
    ( (This)->lpVtbl -> SetOutputByteStream(This,pByteStreamActivate) )
    ( (This)->lpVtbl -> SetProfile(This,pProfile) )
    ( (This)->lpVtbl -> GetSinkInfo(This,pSinkInfo) )
 STDAPI MFCreateTranscodeSinkActivate(
 _Outptr_ IMFActivate** ppActivate );
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0091_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0091_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFFieldOfUseMFTUnlock;
    typedef struct IMFFieldOfUseMFTUnlockVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMFFieldOfUseMFTUnlock * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMFFieldOfUseMFTUnlock * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMFFieldOfUseMFTUnlock * This);
        HRESULT ( STDMETHODCALLTYPE *Unlock )(
            __RPC__in IMFFieldOfUseMFTUnlock * This,
                       __RPC__in_opt IUnknown *pUnkMFT);
        END_INTERFACE
    } IMFFieldOfUseMFTUnlockVtbl;
    interface IMFFieldOfUseMFTUnlock
    {
        CONST_VTBL struct IMFFieldOfUseMFTUnlockVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Unlock(This,pUnkMFT) )
typedef struct _MFT_REGISTRATION_INFO
    {
    CLSID clsid;
    GUID guidCategory;
    UINT32 uiFlags;
    LPCWSTR pszName;
    DWORD cInTypes;
                    MFT_REGISTER_TYPE_INFO *pInTypes;
    DWORD cOutTypes;
                    MFT_REGISTER_TYPE_INFO *pOutTypes;
    } MFT_REGISTRATION_INFO;
EXTERN_GUID(MF_LOCAL_MFT_REGISTRATION_SERVICE, 0xddf5cf9c, 0x4506, 0x45aa, 0xab, 0xf0, 0x6d, 0x5d, 0x94, 0xdd, 0x1b, 0x4a);
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0092_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0092_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFLocalMFTRegistration;
    typedef struct IMFLocalMFTRegistrationVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMFLocalMFTRegistration * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMFLocalMFTRegistration * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMFLocalMFTRegistration * This);
        HRESULT ( STDMETHODCALLTYPE *RegisterMFTs )(
            __RPC__in IMFLocalMFTRegistration * This,
                                __RPC__in_ecount_full(cMFTs) MFT_REGISTRATION_INFO *pMFTs,
            DWORD cMFTs);
        END_INTERFACE
    } IMFLocalMFTRegistrationVtbl;
    interface IMFLocalMFTRegistration
    {
        CONST_VTBL struct IMFLocalMFTRegistrationVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> RegisterMFTs(This,pMFTs,cMFTs) )
EXTERN_C const IID IID_IMFCapturePhotoConfirmation;
    typedef struct IMFCapturePhotoConfirmationVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFCapturePhotoConfirmation * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFCapturePhotoConfirmation * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFCapturePhotoConfirmation * This);
        HRESULT ( STDMETHODCALLTYPE *SetPhotoConfirmationCallback )(
            IMFCapturePhotoConfirmation * This,
            _In_ IMFAsyncCallback *pNotificationCallback);
        HRESULT ( STDMETHODCALLTYPE *SetPixelFormat )(
            IMFCapturePhotoConfirmation * This,
            _In_ GUID subtype);
        HRESULT ( STDMETHODCALLTYPE *GetPixelFormat )(
            IMFCapturePhotoConfirmation * This,
            _Out_ GUID *subtype);
        END_INTERFACE
    } IMFCapturePhotoConfirmationVtbl;
    interface IMFCapturePhotoConfirmation
    {
        CONST_VTBL struct IMFCapturePhotoConfirmationVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetPhotoConfirmationCallback(This,pNotificationCallback) )
    ( (This)->lpVtbl -> SetPixelFormat(This,subtype) )
    ( (This)->lpVtbl -> GetPixelFormat(This,subtype) )
#endif
#pragma endregion
#pragma region Application or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_GAMES)
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0094_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0094_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFPMPHostApp;
    typedef struct IMFPMPHostAppVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMFPMPHostApp * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMFPMPHostApp * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMFPMPHostApp * This);
        HRESULT ( STDMETHODCALLTYPE *LockProcess )(
            __RPC__in IMFPMPHostApp * This);
        HRESULT ( STDMETHODCALLTYPE *UnlockProcess )(
            __RPC__in IMFPMPHostApp * This);
        HRESULT ( STDMETHODCALLTYPE *ActivateClassById )(
            __RPC__in IMFPMPHostApp * This,
                       __RPC__in LPCWSTR id,
                               __RPC__in_opt IStream *pStream,
                       __RPC__in REFIID riid,
                                __RPC__deref_out_opt void **ppv);
        END_INTERFACE
    } IMFPMPHostAppVtbl;
    interface IMFPMPHostApp
    {
        CONST_VTBL struct IMFPMPHostAppVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> LockProcess(This) )
    ( (This)->lpVtbl -> UnlockProcess(This) )
    ( (This)->lpVtbl -> ActivateClassById(This,id,pStream,riid,ppv) )
EXTERN_C const IID IID_IMFPMPClientApp;
    typedef struct IMFPMPClientAppVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFPMPClientApp * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFPMPClientApp * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFPMPClientApp * This);
        HRESULT ( STDMETHODCALLTYPE *SetPMPHost )(
            IMFPMPClientApp * This,
                       IMFPMPHostApp *pPMPHost);
        END_INTERFACE
    } IMFPMPClientAppVtbl;
    interface IMFPMPClientApp
    {
        CONST_VTBL struct IMFPMPClientAppVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetPMPHost(This,pPMPHost) )
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0096_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0096_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFMediaStreamSourceSampleRequest;
    typedef struct IMFMediaStreamSourceSampleRequestVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMFMediaStreamSourceSampleRequest * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMFMediaStreamSourceSampleRequest * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMFMediaStreamSourceSampleRequest * This);
        HRESULT ( STDMETHODCALLTYPE *SetSample )(
            __RPC__in IMFMediaStreamSourceSampleRequest * This,
                       __RPC__in_opt IMFSample *value);
        END_INTERFACE
    } IMFMediaStreamSourceSampleRequestVtbl;
    interface IMFMediaStreamSourceSampleRequest
    {
        CONST_VTBL struct IMFMediaStreamSourceSampleRequestVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetSample(This,value) )
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0097_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0097_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFTrackedSample;
    typedef struct IMFTrackedSampleVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFTrackedSample * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFTrackedSample * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFTrackedSample * This);
        HRESULT ( STDMETHODCALLTYPE *SetAllocator )(
            IMFTrackedSample * This,
            _In_ IMFAsyncCallback *pSampleAllocator,
                               IUnknown *pUnkState);
        END_INTERFACE
    } IMFTrackedSampleVtbl;
    interface IMFTrackedSample
    {
        CONST_VTBL struct IMFTrackedSampleVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetAllocator(This,pSampleAllocator,pUnkState) )
STDAPI MFCreateTrackedSample(
    _Outptr_ IMFTrackedSample** ppMFSample);
#endif
#pragma endregion
#pragma region Desktop or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_GAMES)
STDAPI MFCreateMFByteStreamOnStream(
    IStream* pStream,
    _Outptr_ IMFByteStream** ppByteStream);
STDAPI MFCreateStreamOnMFByteStream(
    _In_ IMFByteStream* pByteStream,
    _Outptr_ IStream** ppStream);
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
STDAPI MFCreateMFByteStreamOnStreamEx(
    _In_ IUnknown* punkStream,
    _Outptr_ IMFByteStream** ppByteStream );
STDAPI MFCreateStreamOnMFByteStreamEx(
    _In_ IMFByteStream* pByteStream,
    _In_ REFIID riid,
    _Outptr_ void **ppv );
STDAPI MFCreateMediaTypeFromProperties(
    _In_ IUnknown* punkStream,
    _Outptr_ IMFMediaType** ppMediaType );
STDAPI MFCreatePropertiesFromMediaType(
    _In_ IMFMediaType* pMediaType,
    _In_ REFIID riid,
    _Outptr_ void **ppv );
DEFINE_GUID(MF_WRAPPED_BUFFER_SERVICE, 0xab544072, 0xc269, 0x4ebc, 0xa5, 0x52, 0x1c, 0x3b, 0x32, 0xbe, 0xd5, 0xca);
EXTERN_GUID(MF_WRAPPED_SAMPLE_SERVICE, 0x31f52bf2, 0xd03e, 0x4048, 0x80, 0xd0, 0x9c, 0x10, 0x46, 0xd8, 0x7c, 0x61);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
EXTERN_GUID( MF_WRAPPED_OBJECT, 0x2b182c4c, 0xd6ac, 0x49f4, 0x89, 0x15, 0xf7, 0x18, 0x87, 0xdb, 0x70, 0xcd);
EXTERN_GUID(CLSID_HttpSchemePlugin, 0x44cb442b, 0x9da9, 0x49df, 0xb3, 0xfd, 0x2, 0x37, 0x77, 0xb1, 0x6e, 0x50);
EXTERN_GUID(CLSID_UrlmonSchemePlugin, 0x9ec4b4f9, 0x3029, 0x45ad, 0x94, 0x7b, 0x34, 0x4d, 0xe2, 0xa2, 0x49, 0xe2);
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
EXTERN_GUID(CLSID_NetSchemePlugin, 0xe9f4ebab, 0xd97b, 0x463e, 0xa2, 0xb1, 0xc5, 0x4e, 0xe3, 0xf9, 0x41, 0x4d);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
STDAPI MFEnumDeviceSources(
    _In_ IMFAttributes* pAttributes,
    _Outptr_result_buffer_(*pcSourceActivate) IMFActivate*** pppSourceActivate,
    _Out_ UINT32* pcSourceActivate
);
STDAPI MFCreateDeviceSource(
    _In_ IMFAttributes* pAttributes,
    _Outptr_ IMFMediaSource** ppSource
);
STDAPI MFCreateDeviceSourceActivate(
    _In_ IMFAttributes* pAttributes,
    _Outptr_ IMFActivate** ppActivate
);
EXTERN_GUID( MF_DEVSOURCE_ATTRIBUTE_SOURCE_TYPE, 0xc60ac5fe, 0x252a, 0x478f, 0xa0, 0xef, 0xbc, 0x8f, 0xa5, 0xf7, 0xca, 0xd3);
EXTERN_GUID( MF_DEVSOURCE_ATTRIBUTE_SOURCE_TYPE_VIDCAP_HW_SOURCE, 0xde7046ba, 0x54d6, 0x4487, 0xa2, 0xa4, 0xec, 0x7c, 0xd, 0x1b, 0xd1, 0x63);
EXTERN_GUID( MF_DEVSOURCE_ATTRIBUTE_FRIENDLY_NAME, 0x60d0e559, 0x52f8, 0x4fa2, 0xbb, 0xce, 0xac, 0xdb, 0x34, 0xa8, 0xec, 0x1);
EXTERN_GUID( MF_DEVSOURCE_ATTRIBUTE_MEDIA_TYPE, 0x56a819ca, 0xc78, 0x4de4, 0xa0, 0xa7, 0x3d, 0xda, 0xba, 0xf, 0x24, 0xd4);
EXTERN_GUID( MF_DEVSOURCE_ATTRIBUTE_SOURCE_TYPE_VIDCAP_CATEGORY, 0x77f0ae69, 0xc3bd, 0x4509, 0x94, 0x1d, 0x46, 0x7e, 0x4d, 0x24, 0x89, 0x9e);
EXTERN_GUID( MF_DEVSOURCE_ATTRIBUTE_SOURCE_TYPE_VIDCAP_SYMBOLIC_LINK, 0x58f0aad8, 0x22bf, 0x4f8a, 0xbb, 0x3d, 0xd2, 0xc4, 0x97, 0x8c, 0x6e, 0x2f);
EXTERN_GUID( MF_DEVSOURCE_ATTRIBUTE_SOURCE_TYPE_AUDCAP_SYMBOLIC_LINK, 0x98d24b5e, 0x5930, 0x4614, 0xb5, 0xa1, 0xf6, 0x0, 0xf9, 0x35, 0x5a, 0x78);
EXTERN_GUID( MF_DEVSOURCE_ATTRIBUTE_SOURCE_TYPE_VIDCAP_MAX_BUFFERS, 0x7dd9b730, 0x4f2d, 0x41d5, 0x8f, 0x95, 0xc, 0xc9, 0xa9, 0x12, 0xba, 0x26);
EXTERN_GUID( MF_DEVSOURCE_ATTRIBUTE_SOURCE_TYPE_AUDCAP_ENDPOINT_ID, 0x30da9258, 0xfeb9, 0x47a7, 0xa4, 0x53, 0x76, 0x3a, 0x7a, 0x8e, 0x1c, 0x5f);
EXTERN_GUID( MF_DEVSOURCE_ATTRIBUTE_SOURCE_TYPE_AUDCAP_ROLE, 0xbc9d118e, 0x8c67, 0x4a18, 0x85, 0xd4, 0x12, 0xd3, 0x0, 0x40, 0x5, 0x52);
EXTERN_GUID( MF_DEVSOURCE_ATTRIBUTE_SOURCE_TYPE_VIDCAP_PROVIDER_DEVICE_ID, 0x36689d42, 0xa06c, 0x40ae, 0x84, 0xcf, 0xf5, 0xa0, 0x34, 0x6, 0x7c, 0xc4);
EXTERN_GUID(MF_DEVSOURCE_ATTRIBUTE_SOURCE_TYPE_AUDCAP_GUID, 0x14dd9a1c, 0x7cff, 0x41be, 0xb1, 0xb9, 0xba, 0x1a, 0xc6, 0xec, 0xb5, 0x71);
EXTERN_GUID(MF_DEVSOURCE_ATTRIBUTE_SOURCE_TYPE_VIDCAP_GUID, 0x8ac3587a, 0x4ae7, 0x42d8, 0x99, 0xe0, 0x0a, 0x60, 0x13, 0xee, 0xf9, 0x0f);
EXTERN_GUID( MF_DEVICESTREAM_IMAGE_STREAM, 0xa7ffb865, 0xe7b2, 0x43b0, 0x9f, 0x6f, 0x9a, 0xf2, 0xa0, 0xe5, 0xf, 0xc0);
EXTERN_GUID( MF_DEVICESTREAM_INDEPENDENT_IMAGE_STREAM, 0x3eeec7e, 0xd605, 0x4576, 0x8b, 0x29, 0x65, 0x80, 0xb4, 0x90, 0xd7, 0xd3);
EXTERN_GUID( MF_DEVICESTREAM_STREAM_ID, 0x11bd5120, 0xd124, 0x446b, 0x88, 0xe6, 0x17, 0x6, 0x2, 0x57, 0xff, 0xf9);
EXTERN_GUID( MF_DEVICESTREAM_STREAM_CATEGORY, 0x2939e7b8, 0xa62e, 0x4579, 0xb6, 0x74, 0xd4, 0x7, 0x3d, 0xfa, 0xbb, 0xba);
EXTERN_GUID( MF_DEVICESTREAM_FRAMESERVER_SHARED, 0x1CB378E9, 0xB279, 0x41D4, 0xAF, 0x97, 0x34, 0xA2, 0x43, 0xE6, 0x83, 0x20);
EXTERN_GUID( MF_DEVICESTREAM_TRANSFORM_STREAM_ID, 0xe63937b7, 0xdaaf, 0x4d49, 0x81, 0x5f, 0xd8, 0x26, 0xf8, 0xad, 0x31, 0xe7);
EXTERN_GUID( MF_DEVICESTREAM_EXTENSION_PLUGIN_CLSID, 0x048e6558, 0x60c4, 0x4173, 0xbd, 0x5b, 0x6a, 0x3c, 0xa2, 0x89, 0x6a, 0xee);
EXTERN_GUID( MF_DEVICEMFT_EXTENSION_PLUGIN_CLSID, 0x844dbae, 0x34fa, 0x48a0, 0xa7, 0x83, 0x8e, 0x69, 0x6f, 0xb1, 0xc9, 0xa8);
EXTERN_GUID( MF_DEVICESTREAM_EXTENSION_PLUGIN_CONNECTION_POINT, 0x37f9375c, 0xe664, 0x4ea4, 0xaa, 0xe4, 0xcb, 0x6d, 0x1d, 0xac, 0xa1, 0xf4);
EXTERN_GUID( MF_DEVICESTREAM_TAKEPHOTO_TRIGGER, 0x1d180e34, 0x538c, 0x4fbb, 0xa7, 0x5a, 0x85, 0x9a, 0xf7, 0xd2, 0x61, 0xa6 );
EXTERN_GUID( MF_DEVICESTREAM_MAX_FRAME_BUFFERS, 0x1684cebe, 0x3175, 0x4985, 0x88, 0x2c, 0x0e, 0xfd, 0x3e, 0x8a, 0xc1, 0x1e );
EXTERN_GUID( MF_DEVICEMFT_CONNECTED_FILTER_KSCONTROL, 0x6a2c4fa6, 0xd179, 0x41cd, 0x95, 0x23, 0x82, 0x23, 0x71, 0xea, 0x40, 0xe5);
EXTERN_GUID( MF_DEVICEMFT_CONNECTED_PIN_KSCONTROL, 0xe63310f7, 0xb244, 0x4ef8, 0x9a, 0x7d, 0x24, 0xc7, 0x4e, 0x32, 0xeb, 0xd0);
EXTERN_GUID( MF_DEVICE_THERMAL_STATE_CHANGED, 0x70ccd0af, 0xfc9f, 0x4deb, 0xa8, 0x75, 0x9f, 0xec, 0xd1, 0x6c, 0x5b, 0xd4 );
EXTERN_GUID(MFSampleExtension_DeviceTimestamp, 0x8f3e35e7, 0x2dcd, 0x4887, 0x86, 0x22, 0x2a, 0x58, 0xba, 0xa6, 0x52, 0xb0);
EXTERN_GUID(MFSampleExtension_Spatial_CameraViewTransform , 0x4e251fa4, 0x830f, 0x4770, 0x85, 0x9a, 0x4b, 0x8d, 0x99, 0xaa, 0x80, 0x9b);
EXTERN_GUID(MFSampleExtension_Spatial_CameraCoordinateSystem , 0x9d13c82f, 0x2199, 0x4e67, 0x91, 0xcd, 0xd1, 0xa4, 0x18, 0x1f, 0x25, 0x34);
EXTERN_GUID(MFSampleExtension_Spatial_CameraProjectionTransform , 0x47f9fcb5, 0x2a02, 0x4f26, 0xa4, 0x77, 0x79, 0x2f, 0xdf, 0x95, 0x88, 0x6a);
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0098_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0098_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFProtectedEnvironmentAccess;
    typedef struct IMFProtectedEnvironmentAccessVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFProtectedEnvironmentAccess * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFProtectedEnvironmentAccess * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFProtectedEnvironmentAccess * This);
        HRESULT ( STDMETHODCALLTYPE *Call )(
            IMFProtectedEnvironmentAccess * This,
            _In_ UINT32 inputLength,
            _In_reads_bytes_(inputLength) const BYTE *input,
            _In_ UINT32 outputLength,
            _Out_writes_bytes_(outputLength) BYTE *output);
        HRESULT ( STDMETHODCALLTYPE *ReadGRL )(
            IMFProtectedEnvironmentAccess * This,
            _Out_ UINT32 *outputLength,
            _Outptr_result_bytebuffer_(*outputLength) BYTE **output);
        END_INTERFACE
    } IMFProtectedEnvironmentAccessVtbl;
    interface IMFProtectedEnvironmentAccess
    {
        CONST_VTBL struct IMFProtectedEnvironmentAccessVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Call(This,inputLength,input,outputLength,output) )
    ( (This)->lpVtbl -> ReadGRL(This,outputLength,output) )
EXTERN_C const IID IID_IMFSignedLibrary;
    typedef struct IMFSignedLibraryVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFSignedLibrary * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFSignedLibrary * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFSignedLibrary * This);
        HRESULT ( STDMETHODCALLTYPE *GetProcedureAddress )(
            IMFSignedLibrary * This,
            _In_ LPCSTR name,
            _Outptr_ PVOID *address);
        END_INTERFACE
    } IMFSignedLibraryVtbl;
    interface IMFSignedLibrary
    {
        CONST_VTBL struct IMFSignedLibraryVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetProcedureAddress(This,name,address) )
EXTERN_C const IID IID_IMFSystemId;
    typedef struct IMFSystemIdVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFSystemId * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFSystemId * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFSystemId * This);
        HRESULT ( STDMETHODCALLTYPE *GetData )(
            IMFSystemId * This,
            _Out_ UINT32 *size,
            _Outptr_result_bytebuffer_(*size) BYTE **data);
        HRESULT ( STDMETHODCALLTYPE *Setup )(
            IMFSystemId * This,
            UINT32 stage,
            UINT32 cbIn,
            _In_reads_bytes_(cbIn) const BYTE *pbIn,
            _Out_ UINT32 *pcbOut,
            _Outptr_result_bytebuffer_(*pcbOut) BYTE **ppbOut);
        END_INTERFACE
    } IMFSystemIdVtbl;
    interface IMFSystemId
    {
        CONST_VTBL struct IMFSystemIdVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetData(This,size,data) )
    ( (This)->lpVtbl -> Setup(This,stage,cbIn,pbIn,pcbOut,ppbOut) )
STDAPI MFCreateProtectedEnvironmentAccess(
    _Outptr_ IMFProtectedEnvironmentAccess** ppAccess
);
STDAPI MFLoadSignedLibrary(
    _In_ LPCWSTR pszName,
    _Outptr_ IMFSignedLibrary** ppLib
);
STDAPI MFGetSystemId(
    _Outptr_ IMFSystemId** ppId
);
STDAPI MFGetLocalId(
    _In_reads_bytes_(size) const BYTE *verifier,
    _In_ UINT32 size,
    _Outptr_ LPWSTR *id
);
DEFINE_GUID(CLSID_MPEG2ByteStreamPlugin,
0x40871c59, 0xab40, 0x471f, 0x8d, 0xc3, 0x1f, 0x25, 0x9d, 0x86, 0x24, 0x79);
EXTERN_GUID( MF_MEDIASOURCE_SERVICE, 0xf09992f7, 0x9fba, 0x4c4a, 0xa3, 0x7f, 0x8c, 0x47, 0xb4, 0xe1, 0xdf, 0xe7 );
EXTERN_GUID( MF_ACCESS_CONTROLLED_MEDIASOURCE_SERVICE, 0x14a5031, 0x2f05, 0x4c6a, 0x9f, 0x9c, 0x7d, 0xd, 0xc4, 0xed, 0xa5, 0xf4 );
typedef struct _MFCONTENTPROTECTIONDEVICE_INPUT_DATA
    {
    DWORD HWProtectionFunctionID;
    DWORD PrivateDataByteCount;
    DWORD HWProtectionDataByteCount;
    DWORD Reserved;
    BYTE InputData[ 4 ];
    } MFCONTENTPROTECTIONDEVICE_INPUT_DATA;
typedef struct _MFCONTENTPROTECTIONDEVICE_OUTPUT_DATA
    {
    DWORD PrivateDataByteCount;
    DWORD MaxHWProtectionDataByteCount;
    DWORD HWProtectionDataByteCount;
    HRESULT Status;
    LONGLONG TransportTimeInHundredsOfNanoseconds;
    LONGLONG ExecutionTimeInHundredsOfNanoseconds;
    BYTE OutputData[ 4 ];
    } MFCONTENTPROTECTIONDEVICE_OUTPUT_DATA;
typedef struct _MFCONTENTPROTECTIONDEVICE_REALTIMECLIENT_DATA {
    DWORD TaskIndex;
    WCHAR ClassName[MAX_PATH];
    LONG BasePriority;
} MFCONTENTPROTECTIONDEVICE_REALTIMECLIENT_DATA;
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0101_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0101_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFContentProtectionDevice;
    typedef struct IMFContentProtectionDeviceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFContentProtectionDevice * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFContentProtectionDevice * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFContentProtectionDevice * This);
        HRESULT ( STDMETHODCALLTYPE *InvokeFunction )(
            IMFContentProtectionDevice * This,
            _In_ DWORD FunctionId,
            _In_ DWORD InputBufferByteCount,
            _In_reads_bytes_(InputBufferByteCount) const BYTE *InputBuffer,
            _Inout_ DWORD *OutputBufferByteCount,
            _Out_writes_bytes_(*OutputBufferByteCount) BYTE *OutputBuffer);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateDataByteCount )(
            IMFContentProtectionDevice * This,
            _Out_ DWORD *PrivateInputByteCount,
            _Out_ DWORD *PrivateOutputByteCount);
        END_INTERFACE
    } IMFContentProtectionDeviceVtbl;
    interface IMFContentProtectionDevice
    {
        CONST_VTBL struct IMFContentProtectionDeviceVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> InvokeFunction(This,FunctionId,InputBufferByteCount,InputBuffer,OutputBufferByteCount,OutputBuffer) )
    ( (This)->lpVtbl -> GetPrivateDataByteCount(This,PrivateInputByteCount,PrivateOutputByteCount) )
STDAPI MFCreateContentProtectionDevice(
   _In_ REFGUID ProtectionSystemId,
   _Outptr_ IMFContentProtectionDevice **ContentProtectionDevice);
STDAPI MFIsContentProtectionDeviceSupported(
   _In_ REFGUID ProtectionSystemId,
   _Out_ BOOL *isSupported);
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0102_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0102_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFContentDecryptorContext;
    typedef struct IMFContentDecryptorContextVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFContentDecryptorContext * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFContentDecryptorContext * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFContentDecryptorContext * This);
        HRESULT ( STDMETHODCALLTYPE *InitializeHardwareKey )(
            IMFContentDecryptorContext * This,
            _In_ UINT InputPrivateDataByteCount,
            _In_reads_opt_(InputPrivateDataByteCount) const void *InputPrivateData,
            _Out_ UINT64 *OutputPrivateData);
        END_INTERFACE
    } IMFContentDecryptorContextVtbl;
    interface IMFContentDecryptorContext
    {
        CONST_VTBL struct IMFContentDecryptorContextVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> InitializeHardwareKey(This,InputPrivateDataByteCount,InputPrivateData,OutputPrivateData) )
EXTERN_GUID( MF_CONTENT_DECRYPTOR_SERVICE, 0x68a72927, 0xfc7b, 0x44ee, 0x85, 0xf4, 0x7c, 0x51, 0xbd, 0x55, 0xa6, 0x59);
EXTERN_GUID( MF_CONTENT_PROTECTION_DEVICE_SERVICE, 0xff58436f, 0x76a0, 0x41fe, 0xb5, 0x66, 0x10, 0xcc, 0x53, 0x96, 0x2e, 0xdd);
STDAPI MFCreateContentDecryptorContext(
   _In_ REFGUID guidMediaProtectionSystemId,
   _In_opt_ IMFDXGIDeviceManager *pD3DManager,
   _In_ IMFContentProtectionDevice *pContentProtectionDevice,
   _Outptr_ IMFContentDecryptorContext **ppContentDecryptorContext);
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
EXTERN_GUID( MF_SD_AUDIO_ENCODER_DELAY, 0x8e85422c, 0x73de, 0x403f, 0x9a, 0x35, 0x55, 0x0a, 0xd6, 0xe8, 0xb9, 0x51 );
EXTERN_GUID( MF_SD_AUDIO_ENCODER_PADDING, 0x529c7f2c, 0xac4b, 0x4e3f, 0xbf, 0xc3, 0x09, 0x02, 0x19, 0x49, 0x82, 0xcb );
EXTERN_GUID(CLSID_MSH264DecoderMFT, 0x62CE7E72, 0x4C71, 0x4d20, 0xB1, 0x5D, 0x45, 0x28, 0x31, 0xA8, 0x7D, 0x9D);
EXTERN_GUID(CLSID_MSH264EncoderMFT, 0x6ca50344, 0x051a, 0x4ded, 0x97, 0x79, 0xa4, 0x33, 0x05, 0x16, 0x5e, 0x35);
EXTERN_GUID(CLSID_MSDDPlusDecMFT, 0x177C0AFE, 0x900B, 0x48d4, 0x9E, 0x4C, 0x57, 0xAD, 0xD2, 0x50, 0xB3, 0xD4);
EXTERN_GUID(CLSID_MP3DecMediaObject, 0xbbeea841, 0x0a63, 0x4f52, 0xa7, 0xab, 0xa9, 0xb3, 0xa8, 0x4e, 0xd3, 0x8a);
EXTERN_GUID(CLSID_MSAACDecMFT, 0x32d186a7, 0x218f, 0x4c75, 0x88, 0x76, 0xdd, 0x77, 0x27, 0x3a, 0x89, 0x99);
EXTERN_GUID(CLSID_MSH265DecoderMFT, 0x420A51A3, 0xD605, 0x430C, 0xB4, 0xFC, 0x45, 0x27, 0x4F, 0xA6, 0xC5, 0x62);
EXTERN_GUID(CLSID_WMVDecoderMFT, 0x82d353df, 0x90bd, 0x4382, 0x8b, 0xc2, 0x3f, 0x61, 0x92, 0xb7, 0x6e, 0x34);
EXTERN_GUID(CLSID_WMADecMediaObject, 0x2eeb4adf, 0x4578, 0x4d10, 0xbc, 0xa7, 0xbb, 0x95, 0x5f, 0x56, 0x32, 0x0a);
EXTERN_GUID(CLSID_MSMPEGAudDecMFT, 0x70707B39, 0xB2CA, 0x4015, 0xAB, 0xEA, 0xF8, 0x44, 0x7D, 0x22, 0xD8, 0x8B);
EXTERN_GUID(CLSID_MSMPEGDecoderMFT, 0x2D709E52, 0x123F, 0x49b5, 0x9C, 0xBC, 0x9A, 0xF5, 0xCD, 0xE2, 0x8F, 0xB9);
EXTERN_GUID(CLSID_AudioResamplerMediaObject, 0xf447b69e, 0x1884, 0x4a7e, 0x80, 0x55, 0x34, 0x6f, 0x74, 0xd6, 0xed, 0xb3);
EXTERN_GUID(CLSID_MSVPxDecoder, 0xE3AAF548, 0xC9A4, 0x4C6E, 0x23, 0x4D, 0x5A, 0xDA, 0x37, 0x4B, 0x00, 0x00);
EXTERN_GUID(CLSID_MSOpusDecoder, 0x63e17c10, 0x2d43, 0x4c42, 0x8f, 0xe3, 0x8d, 0x8b, 0x63, 0xe4, 0x6a, 0x6a);
EXTERN_GUID(CLSID_VideoProcessorMFT, 0x88753b26, 0x5b24, 0x49bd, 0xb2, 0xe7, 0xc, 0x44, 0x5c, 0x78, 0xc9, 0x82);
#endif
#pragma endregion
#pragma region EME2 helper types
typedef
enum MF_MEDIAKEYSESSION_TYPE
    {
        MF_MEDIAKEYSESSION_TYPE_TEMPORARY = 0,
        MF_MEDIAKEYSESSION_TYPE_PERSISTENT_LICENSE = ( MF_MEDIAKEYSESSION_TYPE_TEMPORARY + 1 ) ,
        MF_MEDIAKEYSESSION_TYPE_PERSISTENT_RELEASE_MESSAGE = ( MF_MEDIAKEYSESSION_TYPE_PERSISTENT_LICENSE + 1 ) ,
        MF_MEDIAKEYSESSION_TYPE_PERSISTENT_USAGE_RECORD = ( MF_MEDIAKEYSESSION_TYPE_PERSISTENT_RELEASE_MESSAGE + 1 )
    } MF_MEDIAKEYSESSION_TYPE;
typedef
enum MF_MEDIAKEY_STATUS
    {
        MF_MEDIAKEY_STATUS_USABLE = 0,
        MF_MEDIAKEY_STATUS_EXPIRED = ( MF_MEDIAKEY_STATUS_USABLE + 1 ) ,
        MF_MEDIAKEY_STATUS_OUTPUT_DOWNSCALED = ( MF_MEDIAKEY_STATUS_EXPIRED + 1 ) ,
        MF_MEDIAKEY_STATUS_OUTPUT_NOT_ALLOWED = ( MF_MEDIAKEY_STATUS_OUTPUT_DOWNSCALED + 1 ) ,
        MF_MEDIAKEY_STATUS_STATUS_PENDING = ( MF_MEDIAKEY_STATUS_OUTPUT_NOT_ALLOWED + 1 ) ,
        MF_MEDIAKEY_STATUS_INTERNAL_ERROR = ( MF_MEDIAKEY_STATUS_STATUS_PENDING + 1 ) ,
        MF_MEDIAKEY_STATUS_RELEASED = ( MF_MEDIAKEY_STATUS_INTERNAL_ERROR + 1 ) ,
        MF_MEDIAKEY_STATUS_OUTPUT_RESTRICTED = ( MF_MEDIAKEY_STATUS_RELEASED + 1 )
    } MF_MEDIAKEY_STATUS;
typedef struct MFMediaKeyStatus
    {
    BYTE *pbKeyId;
    UINT cbKeyId;
    MF_MEDIAKEY_STATUS eMediaKeyStatus;
    } MFMediaKeyStatus;
typedef
enum MF_MEDIAKEYSESSION_MESSAGETYPE
    {
        MF_MEDIAKEYSESSION_MESSAGETYPE_LICENSE_REQUEST = 0,
        MF_MEDIAKEYSESSION_MESSAGETYPE_LICENSE_RENEWAL = 1,
        MF_MEDIAKEYSESSION_MESSAGETYPE_LICENSE_RELEASE = 2,
        MF_MEDIAKEYSESSION_MESSAGETYPE_INDIVIDUALIZATION_REQUEST = 3
    } MF_MEDIAKEYSESSION_MESSAGETYPE;
typedef
enum _MF_CROSS_ORIGIN_POLICY
    {
        MF_CROSS_ORIGIN_POLICY_NONE = 0,
        MF_CROSS_ORIGIN_POLICY_ANONYMOUS = 1,
        MF_CROSS_ORIGIN_POLICY_USE_CREDENTIALS = 2
    } MF_CROSS_ORIGIN_POLICY;
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0103_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0103_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFNetCrossOriginSupport;
    typedef struct IMFNetCrossOriginSupportVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFNetCrossOriginSupport * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFNetCrossOriginSupport * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFNetCrossOriginSupport * This);
        HRESULT ( STDMETHODCALLTYPE *GetCrossOriginPolicy )(
            IMFNetCrossOriginSupport * This,
            _Out_ MF_CROSS_ORIGIN_POLICY *pPolicy);
        HRESULT ( STDMETHODCALLTYPE *GetSourceOrigin )(
            IMFNetCrossOriginSupport * This,
            _Out_ LPWSTR *wszSourceOrigin);
        HRESULT ( STDMETHODCALLTYPE *IsSameOrigin )(
            IMFNetCrossOriginSupport * This,
                       LPCWSTR wszURL,
            _Out_ BOOL *pfIsSameOrigin);
        END_INTERFACE
    } IMFNetCrossOriginSupportVtbl;
    interface IMFNetCrossOriginSupport
    {
        CONST_VTBL struct IMFNetCrossOriginSupportVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetCrossOriginPolicy(This,pPolicy) )
    ( (This)->lpVtbl -> GetSourceOrigin(This,wszSourceOrigin) )
    ( (This)->lpVtbl -> IsSameOrigin(This,wszURL,pfIsSameOrigin) )
EXTERN_GUID(MFNETSOURCE_CROSS_ORIGIN_SUPPORT, 0x9842207c, 0xb02c, 0x4271, 0xa2, 0xfc, 0x72, 0xe4, 0x93, 0x8, 0xe5, 0xc2);
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0104_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0104_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFHttpDownloadRequest;
    typedef struct IMFHttpDownloadRequestVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFHttpDownloadRequest * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFHttpDownloadRequest * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFHttpDownloadRequest * This);
        HRESULT ( STDMETHODCALLTYPE *AddHeader )(
            IMFHttpDownloadRequest * This,
            _In_ LPCWSTR szHeader);
        HRESULT ( STDMETHODCALLTYPE *BeginSendRequest )(
            IMFHttpDownloadRequest * This,
            _In_reads_opt_(cbPayload) const BYTE *pbPayload,
            _In_ ULONG cbPayload,
            _In_ IMFAsyncCallback *pCallback,
            _In_opt_ IUnknown *punkState);
        HRESULT ( STDMETHODCALLTYPE *EndSendRequest )(
            IMFHttpDownloadRequest * This,
            _In_ IMFAsyncResult *pResult);
        HRESULT ( STDMETHODCALLTYPE *BeginReceiveResponse )(
            IMFHttpDownloadRequest * This,
            _In_ IMFAsyncCallback *pCallback,
            _In_opt_ IUnknown *punkState);
        HRESULT ( STDMETHODCALLTYPE *EndReceiveResponse )(
            IMFHttpDownloadRequest * This,
            _In_ IMFAsyncResult *pResult);
        HRESULT ( STDMETHODCALLTYPE *BeginReadPayload )(
            IMFHttpDownloadRequest * This,
            _Out_writes_(cb) BYTE *pb,
            _In_ ULONG cb,
            _In_ IMFAsyncCallback *pCallback,
            _In_opt_ IUnknown *punkState);
        HRESULT ( STDMETHODCALLTYPE *EndReadPayload )(
            IMFHttpDownloadRequest * This,
            _In_ IMFAsyncResult *pResult,
            _Out_ QWORD *pqwOffset,
            _Out_ ULONG *pcbRead);
        HRESULT ( STDMETHODCALLTYPE *QueryHeader )(
            IMFHttpDownloadRequest * This,
            _In_ LPCWSTR szHeaderName,
            _In_ DWORD dwIndex,
            _Outptr_ LPWSTR *ppszHeaderValue);
        HRESULT ( STDMETHODCALLTYPE *GetURL )(
            IMFHttpDownloadRequest * This,
            _Outptr_ LPWSTR *ppszURL);
        HRESULT ( STDMETHODCALLTYPE *HasNullSourceOrigin )(
            IMFHttpDownloadRequest * This,
            _Out_ BOOL *pfNullSourceOrigin);
        HRESULT ( STDMETHODCALLTYPE *GetTimeSeekResult )(
            IMFHttpDownloadRequest * This,
            _Out_ QWORD *pqwStartTime,
            _Out_ QWORD *pqwStopTime,
            _Out_ QWORD *pqwDuration);
        HRESULT ( STDMETHODCALLTYPE *GetHttpStatus )(
            IMFHttpDownloadRequest * This,
            _Out_ DWORD *pdwHttpStatus);
        HRESULT ( STDMETHODCALLTYPE *GetAtEndOfPayload )(
            IMFHttpDownloadRequest * This,
            _Out_ BOOL *pfAtEndOfPayload);
        HRESULT ( STDMETHODCALLTYPE *GetTotalLength )(
            IMFHttpDownloadRequest * This,
            _Out_ QWORD *pqwTotalLength);
        HRESULT ( STDMETHODCALLTYPE *GetRangeEndOffset )(
            IMFHttpDownloadRequest * This,
            _Out_ QWORD *pqwRangeEnd);
        HRESULT ( STDMETHODCALLTYPE *Close )(
            IMFHttpDownloadRequest * This);
        END_INTERFACE
    } IMFHttpDownloadRequestVtbl;
    interface IMFHttpDownloadRequest
    {
        CONST_VTBL struct IMFHttpDownloadRequestVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AddHeader(This,szHeader) )
    ( (This)->lpVtbl -> BeginSendRequest(This,pbPayload,cbPayload,pCallback,punkState) )
    ( (This)->lpVtbl -> EndSendRequest(This,pResult) )
    ( (This)->lpVtbl -> BeginReceiveResponse(This,pCallback,punkState) )
    ( (This)->lpVtbl -> EndReceiveResponse(This,pResult) )
    ( (This)->lpVtbl -> BeginReadPayload(This,pb,cb,pCallback,punkState) )
    ( (This)->lpVtbl -> EndReadPayload(This,pResult,pqwOffset,pcbRead) )
    ( (This)->lpVtbl -> QueryHeader(This,szHeaderName,dwIndex,ppszHeaderValue) )
    ( (This)->lpVtbl -> GetURL(This,ppszURL) )
    ( (This)->lpVtbl -> HasNullSourceOrigin(This,pfNullSourceOrigin) )
    ( (This)->lpVtbl -> GetTimeSeekResult(This,pqwStartTime,pqwStopTime,pqwDuration) )
    ( (This)->lpVtbl -> GetHttpStatus(This,pdwHttpStatus) )
    ( (This)->lpVtbl -> GetAtEndOfPayload(This,pfAtEndOfPayload) )
    ( (This)->lpVtbl -> GetTotalLength(This,pqwTotalLength) )
    ( (This)->lpVtbl -> GetRangeEndOffset(This,pqwRangeEnd) )
    ( (This)->lpVtbl -> Close(This) )
EXTERN_C const IID IID_IMFHttpDownloadSession;
    typedef struct IMFHttpDownloadSessionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFHttpDownloadSession * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFHttpDownloadSession * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFHttpDownloadSession * This);
        HRESULT ( STDMETHODCALLTYPE *SetServer )(
            IMFHttpDownloadSession * This,
            _In_ LPCWSTR szServerName,
            _In_ DWORD nPort);
        HRESULT ( STDMETHODCALLTYPE *CreateRequest )(
            IMFHttpDownloadSession * This,
            _In_ LPCWSTR szObjectName,
            _In_ BOOL fBypassProxyCache,
            _In_ BOOL fSecure,
            _In_opt_ LPCWSTR szVerb,
            _In_opt_ LPCWSTR szReferrer,
            _COM_Outptr_ IMFHttpDownloadRequest **ppRequest);
        HRESULT ( STDMETHODCALLTYPE *Close )(
            IMFHttpDownloadSession * This);
        END_INTERFACE
    } IMFHttpDownloadSessionVtbl;
    interface IMFHttpDownloadSession
    {
        CONST_VTBL struct IMFHttpDownloadSessionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetServer(This,szServerName,nPort) )
    ( (This)->lpVtbl -> CreateRequest(This,szObjectName,fBypassProxyCache,fSecure,szVerb,szReferrer,ppRequest) )
    ( (This)->lpVtbl -> Close(This) )
EXTERN_C const IID IID_IMFHttpDownloadSessionProvider;
    typedef struct IMFHttpDownloadSessionProviderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFHttpDownloadSessionProvider * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFHttpDownloadSessionProvider * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFHttpDownloadSessionProvider * This);
        HRESULT ( STDMETHODCALLTYPE *CreateHttpDownloadSession )(
            IMFHttpDownloadSessionProvider * This,
            _In_ LPCWSTR wszScheme,
            _COM_Outptr_ IMFHttpDownloadSession **ppDownloadSession);
        END_INTERFACE
    } IMFHttpDownloadSessionProviderVtbl;
    interface IMFHttpDownloadSessionProvider
    {
        CONST_VTBL struct IMFHttpDownloadSessionProviderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CreateHttpDownloadSession(This,wszScheme,ppDownloadSession) )
EXTERN_GUID(MFNETSOURCE_HTTP_DOWNLOAD_SESSION_PROVIDER, 0x7d55081e, 0x307d, 0x4d6d, 0xa6, 0x63, 0xa9, 0x3b, 0xe9, 0x7c, 0x4b, 0x5c);
#pragma endregion
typedef
enum MF_MEDIASOURCE_STATUS_INFO
    {
        MF_MEDIASOURCE_STATUS_INFO_FULLYSUPPORTED = 0,
        MF_MEDIASOURCE_STATUS_INFO_UNKNOWN = 1
    } MF_MEDIASOURCE_STATUS_INFO;
EXTERN_GUID(MF_SD_MEDIASOURCE_STATUS, 0x1913678b, 0xfc0f, 0x44da, 0x8f, 0x43, 0x1b, 0xa3, 0xb5, 0x26, 0xf4, 0xae);
typedef struct _MF_VIDEO_SPHERICAL_VIEWDIRECTION
    {
    int iHeading;
    int iPitch;
    int iRoll;
    } MF_VIDEO_SPHERICAL_VIEWDIRECTION;
EXTERN_GUID(MF_SD_VIDEO_SPHERICAL, 0xa51da449, 0x3fdc, 0x478c, 0xbc, 0xb5, 0x30, 0xbe, 0x76, 0x59, 0x5f, 0x55);
EXTERN_GUID(MF_SD_VIDEO_SPHERICAL_FORMAT, 0x4a8fc407, 0x6ea1, 0x46c8, 0xb5, 0x67, 0x69, 0x71, 0xd4, 0xa1, 0x39, 0xc3);
EXTERN_GUID(MF_SD_VIDEO_SPHERICAL_INITIAL_VIEWDIRECTION, 0x11d25a49, 0xbb62, 0x467f, 0x9d, 0xb1, 0xc1, 0x71, 0x65, 0x71, 0x6c, 0x49);
EXTERN_GUID(MF_MEDIASOURCE_EXPOSE_ALL_STREAMS, 0xe7f250b8, 0x8fd9, 0x4a09, 0xb6, 0xc1, 0x6a, 0x31, 0x5c, 0x7c, 0x72, 0xe);
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0107_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0107_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFMediaSource2;
    typedef struct IMFMediaSource2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFMediaSource2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFMediaSource2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFMediaSource2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetEvent )(
            IMFMediaSource2 * This,
                       DWORD dwFlags,
                        IMFMediaEvent **ppEvent);
                      HRESULT ( STDMETHODCALLTYPE *BeginGetEvent )(
            IMFMediaSource2 * This,
                       IMFAsyncCallback *pCallback,
                       IUnknown *punkState);
                      HRESULT ( STDMETHODCALLTYPE *EndGetEvent )(
            IMFMediaSource2 * This,
                       IMFAsyncResult *pResult,
            _Out_ IMFMediaEvent **ppEvent);
        HRESULT ( STDMETHODCALLTYPE *QueueEvent )(
            IMFMediaSource2 * This,
                       MediaEventType met,
                       REFGUID guidExtendedType,
                       HRESULT hrStatus,
                               const PROPVARIANT *pvValue);
        HRESULT ( STDMETHODCALLTYPE *GetCharacteristics )(
            IMFMediaSource2 * This,
                        DWORD *pdwCharacteristics);
                      HRESULT ( STDMETHODCALLTYPE *CreatePresentationDescriptor )(
            IMFMediaSource2 * This,
            _Outptr_ IMFPresentationDescriptor **ppPresentationDescriptor);
        HRESULT ( STDMETHODCALLTYPE *Start )(
            IMFMediaSource2 * This,
                       IMFPresentationDescriptor *pPresentationDescriptor,
                               const GUID *pguidTimeFormat,
                               const PROPVARIANT *pvarStartPosition);
        HRESULT ( STDMETHODCALLTYPE *Stop )(
            IMFMediaSource2 * This);
        HRESULT ( STDMETHODCALLTYPE *Pause )(
            IMFMediaSource2 * This);
        HRESULT ( STDMETHODCALLTYPE *Shutdown )(
            IMFMediaSource2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetSourceAttributes )(
            IMFMediaSource2 * This,
                        IMFAttributes **ppAttributes);
        HRESULT ( STDMETHODCALLTYPE *GetStreamAttributes )(
            IMFMediaSource2 * This,
                       DWORD dwStreamIdentifier,
                        IMFAttributes **ppAttributes);
        HRESULT ( STDMETHODCALLTYPE *SetD3DManager )(
            IMFMediaSource2 * This,
                       IUnknown *pManager);
        HRESULT ( STDMETHODCALLTYPE *SetMediaType )(
            IMFMediaSource2 * This,
            _In_ DWORD dwStreamID,
            _In_ IMFMediaType *pMediaType);
        END_INTERFACE
    } IMFMediaSource2Vtbl;
    interface IMFMediaSource2
    {
        CONST_VTBL struct IMFMediaSource2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetEvent(This,dwFlags,ppEvent) )
    ( (This)->lpVtbl -> BeginGetEvent(This,pCallback,punkState) )
    ( (This)->lpVtbl -> EndGetEvent(This,pResult,ppEvent) )
    ( (This)->lpVtbl -> QueueEvent(This,met,guidExtendedType,hrStatus,pvValue) )
    ( (This)->lpVtbl -> GetCharacteristics(This,pdwCharacteristics) )
    ( (This)->lpVtbl -> CreatePresentationDescriptor(This,ppPresentationDescriptor) )
    ( (This)->lpVtbl -> Start(This,pPresentationDescriptor,pguidTimeFormat,pvarStartPosition) )
    ( (This)->lpVtbl -> Stop(This) )
    ( (This)->lpVtbl -> Pause(This) )
    ( (This)->lpVtbl -> Shutdown(This) )
    ( (This)->lpVtbl -> GetSourceAttributes(This,ppAttributes) )
    ( (This)->lpVtbl -> GetStreamAttributes(This,dwStreamIdentifier,ppAttributes) )
    ( (This)->lpVtbl -> SetD3DManager(This,pManager) )
    ( (This)->lpVtbl -> SetMediaType(This,dwStreamID,pMediaType) )
EXTERN_C const IID IID_IMFMediaStream2;
    typedef struct IMFMediaStream2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFMediaStream2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFMediaStream2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFMediaStream2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetEvent )(
            IMFMediaStream2 * This,
                       DWORD dwFlags,
                        IMFMediaEvent **ppEvent);
                      HRESULT ( STDMETHODCALLTYPE *BeginGetEvent )(
            IMFMediaStream2 * This,
                       IMFAsyncCallback *pCallback,
                       IUnknown *punkState);
                      HRESULT ( STDMETHODCALLTYPE *EndGetEvent )(
            IMFMediaStream2 * This,
                       IMFAsyncResult *pResult,
            _Out_ IMFMediaEvent **ppEvent);
        HRESULT ( STDMETHODCALLTYPE *QueueEvent )(
            IMFMediaStream2 * This,
                       MediaEventType met,
                       REFGUID guidExtendedType,
                       HRESULT hrStatus,
                               const PROPVARIANT *pvValue);
        HRESULT ( STDMETHODCALLTYPE *GetMediaSource )(
            IMFMediaStream2 * This,
                        IMFMediaSource **ppMediaSource);
        HRESULT ( STDMETHODCALLTYPE *GetStreamDescriptor )(
            IMFMediaStream2 * This,
                        IMFStreamDescriptor **ppStreamDescriptor);
                      HRESULT ( STDMETHODCALLTYPE *RequestSample )(
            IMFMediaStream2 * This,
                       IUnknown *pToken);
        HRESULT ( STDMETHODCALLTYPE *SetStreamState )(
            IMFMediaStream2 * This,
            _In_ MF_STREAM_STATE value);
        HRESULT ( STDMETHODCALLTYPE *GetStreamState )(
            IMFMediaStream2 * This,
            _Out_ MF_STREAM_STATE *value);
        END_INTERFACE
    } IMFMediaStream2Vtbl;
    interface IMFMediaStream2
    {
        CONST_VTBL struct IMFMediaStream2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetEvent(This,dwFlags,ppEvent) )
    ( (This)->lpVtbl -> BeginGetEvent(This,pCallback,punkState) )
    ( (This)->lpVtbl -> EndGetEvent(This,pResult,ppEvent) )
    ( (This)->lpVtbl -> QueueEvent(This,met,guidExtendedType,hrStatus,pvValue) )
    ( (This)->lpVtbl -> GetMediaSource(This,ppMediaSource) )
    ( (This)->lpVtbl -> GetStreamDescriptor(This,ppStreamDescriptor) )
    ( (This)->lpVtbl -> RequestSample(This,pToken) )
    ( (This)->lpVtbl -> SetStreamState(This,value) )
    ( (This)->lpVtbl -> GetStreamState(This,value) )
#pragma region Application or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_GAMES)
EXTERN_GUID(MF_ST_MEDIASOURCE_COLLECTION, 0x616DE972, 0x83AD, 0x4950, 0x81, 0x70, 0x63, 0x0D, 0x19, 0xCB, 0xE3, 0x07);
EXTERN_GUID(MF_DEVICESTREAM_FILTER_KSCONTROL, 0x46783CCA, 0x3DF5, 0x4923, 0xA9, 0xEF, 0x36, 0xB7, 0x22, 0x3E, 0xDD, 0xE0);
EXTERN_GUID(MF_DEVICESTREAM_PIN_KSCONTROL, 0xEF3EF9A7, 0x87F2, 0x48CA, 0xBE, 0x02, 0x67, 0x48, 0x78, 0x91, 0x8E, 0x98);
EXTERN_GUID(MF_DEVICESTREAM_SOURCE_ATTRIBUTES, 0x2F8CB617, 0x361B, 0x434F, 0x85, 0xEA, 0x99, 0xA0, 0x3E, 0x1C, 0xE4, 0xE0);
EXTERN_GUID( MF_DEVICESTREAM_FRAMESERVER_HIDDEN, 0xF402567B, 0x4D91, 0x4179, 0x96, 0xD1, 0x74, 0xC8, 0x48, 0x0C, 0x20, 0x34);
EXTERN_GUID( MF_STF_VERSION_INFO, 0x6770BD39, 0xEF82, 0x44EE, 0xA4, 0x9B, 0x93, 0x4B, 0xEB, 0x24, 0xAE, 0xF7);
EXTERN_GUID( MF_STF_VERSION_DATE, 0x31A165D5, 0xDF67, 0x4095, 0x8E, 0x44, 0x88, 0x68, 0xFC, 0x20, 0xDB, 0xFD);
EXTERN_GUID( MF_DEVICESTREAM_REQUIRED_CAPABILITIES, 0x6D8B957E, 0x7CF6, 0x43F4, 0xAF, 0x56, 0x9C, 0x0E, 0x1E, 0x4F, 0xCB, 0xE1);
EXTERN_GUID( MF_DEVICESTREAM_REQUIRED_SDDL, 0x331AE85D, 0xC0D3, 0x49BA, 0x83, 0xBA, 0x82, 0xA1, 0x2D, 0x63, 0xCD, 0xD6);
EXTERN_GUID(MF_DEVICEMFT_SENSORPROFILE_COLLECTION, 0x36EBDC44, 0xB12C, 0x441B, 0x89, 0xF4, 0x08, 0xB2, 0xF4, 0x1A, 0x9C, 0xFC );
EXTERN_GUID(MF_DEVICESTREAM_SENSORSTREAM_ID, 0xE35B9FE4, 0x0659, 0x4CAD, 0xBB, 0x51, 0x33, 0x16, 0x0B, 0xE7, 0xE4, 0x13 );
typedef
enum __MIDL___MIDL_itf_mfidl_0000_0109_0001
    {
        MFSensorDeviceType_Unknown = 0,
        MFSensorDeviceType_Device = ( MFSensorDeviceType_Unknown + 1 ) ,
        MFSensorDeviceType_MediaSource = ( MFSensorDeviceType_Device + 1 ) ,
        MFSensorDeviceType_FrameProvider = ( MFSensorDeviceType_MediaSource + 1 ) ,
        MFSensorDeviceType_SensorTransform = ( MFSensorDeviceType_FrameProvider + 1 )
    } MFSensorDeviceType;
typedef
enum __MIDL___MIDL_itf_mfidl_0000_0109_0002
    {
        MFSensorStreamType_Unknown = 0,
        MFSensorStreamType_Input = ( MFSensorStreamType_Unknown + 1 ) ,
        MFSensorStreamType_Output = ( MFSensorStreamType_Input + 1 )
    } MFSensorStreamType;
typedef
enum __MIDL___MIDL_itf_mfidl_0000_0109_0003
    {
        MFSensorDeviceMode_Controller = 0,
        MFSensorDeviceMode_Shared = ( MFSensorDeviceMode_Controller + 1 )
    } MFSensorDeviceMode;
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0109_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0109_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFSensorDevice;
    typedef struct IMFSensorDeviceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFSensorDevice * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFSensorDevice * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFSensorDevice * This);
        HRESULT ( STDMETHODCALLTYPE *GetDeviceId )(
            IMFSensorDevice * This,
            _Out_ ULONGLONG *pDeviceId);
        HRESULT ( STDMETHODCALLTYPE *GetDeviceType )(
            IMFSensorDevice * This,
            _Out_ MFSensorDeviceType *pType);
        HRESULT ( STDMETHODCALLTYPE *GetFlags )(
            IMFSensorDevice * This,
            _Out_ ULONGLONG *pFlags);
        HRESULT ( STDMETHODCALLTYPE *GetSymbolicLink )(
            IMFSensorDevice * This,
            _Out_writes_z_(cchSymbolicLink) LPWSTR SymbolicLink,
            _In_ LONG cchSymbolicLink,
            _Out_ LONG *pcchWritten);
        HRESULT ( STDMETHODCALLTYPE *GetDeviceAttributes )(
            IMFSensorDevice * This,
            _COM_Outptr_result_maybenull_ IMFAttributes **ppAttributes);
        HRESULT ( STDMETHODCALLTYPE *GetStreamAttributesCount )(
            IMFSensorDevice * This,
            _In_ MFSensorStreamType eType,
            _Out_ DWORD *pdwCount);
        HRESULT ( STDMETHODCALLTYPE *GetStreamAttributes )(
            IMFSensorDevice * This,
            _In_ MFSensorStreamType eType,
            _In_ DWORD dwIndex,
            _COM_Outptr_ IMFAttributes **ppAttributes);
        HRESULT ( STDMETHODCALLTYPE *SetSensorDeviceMode )(
            IMFSensorDevice * This,
            _In_ MFSensorDeviceMode eMode);
        HRESULT ( STDMETHODCALLTYPE *GetSensorDeviceMode )(
            IMFSensorDevice * This,
            _Out_ MFSensorDeviceMode *peMode);
        END_INTERFACE
    } IMFSensorDeviceVtbl;
    interface IMFSensorDevice
    {
        CONST_VTBL struct IMFSensorDeviceVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetDeviceId(This,pDeviceId) )
    ( (This)->lpVtbl -> GetDeviceType(This,pType) )
    ( (This)->lpVtbl -> GetFlags(This,pFlags) )
    ( (This)->lpVtbl -> GetSymbolicLink(This,SymbolicLink,cchSymbolicLink,pcchWritten) )
    ( (This)->lpVtbl -> GetDeviceAttributes(This,ppAttributes) )
    ( (This)->lpVtbl -> GetStreamAttributesCount(This,eType,pdwCount) )
    ( (This)->lpVtbl -> GetStreamAttributes(This,eType,dwIndex,ppAttributes) )
    ( (This)->lpVtbl -> SetSensorDeviceMode(This,eMode) )
    ( (This)->lpVtbl -> GetSensorDeviceMode(This,peMode) )
EXTERN_C const IID IID_IMFSensorGroup;
    typedef struct IMFSensorGroupVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFSensorGroup * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFSensorGroup * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFSensorGroup * This);
        HRESULT ( STDMETHODCALLTYPE *GetSymbolicLink )(
            IMFSensorGroup * This,
            _Out_writes_z_(cchSymbolicLink) LPWSTR SymbolicLink,
            _In_ LONG cchSymbolicLink,
            _Out_ LONG *pcchWritten);
        HRESULT ( STDMETHODCALLTYPE *GetFlags )(
            IMFSensorGroup * This,
            _Out_ ULONGLONG *pFlags);
        HRESULT ( STDMETHODCALLTYPE *GetSensorGroupAttributes )(
            IMFSensorGroup * This,
            _COM_Outptr_result_maybenull_ IMFAttributes **ppAttributes);
        HRESULT ( STDMETHODCALLTYPE *GetSensorDeviceCount )(
            IMFSensorGroup * This,
            _Out_ DWORD *pdwCount);
        HRESULT ( STDMETHODCALLTYPE *GetSensorDevice )(
            IMFSensorGroup * This,
            _In_ DWORD dwIndex,
            _COM_Outptr_ IMFSensorDevice **ppDevice);
        HRESULT ( STDMETHODCALLTYPE *SetDefaultSensorDeviceIndex )(
            IMFSensorGroup * This,
            _In_ DWORD dwIndex);
        HRESULT ( STDMETHODCALLTYPE *GetDefaultSensorDeviceIndex )(
            IMFSensorGroup * This,
            _Out_ DWORD *pdwIndex);
        HRESULT ( STDMETHODCALLTYPE *CreateMediaSource )(
            IMFSensorGroup * This,
            _COM_Outptr_ IMFMediaSource **ppSource);
        END_INTERFACE
    } IMFSensorGroupVtbl;
    interface IMFSensorGroup
    {
        CONST_VTBL struct IMFSensorGroupVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetSymbolicLink(This,SymbolicLink,cchSymbolicLink,pcchWritten) )
    ( (This)->lpVtbl -> GetFlags(This,pFlags) )
    ( (This)->lpVtbl -> GetSensorGroupAttributes(This,ppAttributes) )
    ( (This)->lpVtbl -> GetSensorDeviceCount(This,pdwCount) )
    ( (This)->lpVtbl -> GetSensorDevice(This,dwIndex,ppDevice) )
    ( (This)->lpVtbl -> SetDefaultSensorDeviceIndex(This,dwIndex) )
    ( (This)->lpVtbl -> GetDefaultSensorDeviceIndex(This,pdwIndex) )
    ( (This)->lpVtbl -> CreateMediaSource(This,ppSource) )
EXTERN_C const IID IID_IMFSensorStream;
    typedef struct IMFSensorStreamVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFSensorStream * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFSensorStream * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFSensorStream * This);
        HRESULT ( STDMETHODCALLTYPE *GetItem )(
            IMFSensorStream * This,
            REFGUID guidKey,
                                  PROPVARIANT *pValue);
        HRESULT ( STDMETHODCALLTYPE *GetItemType )(
            IMFSensorStream * This,
            REFGUID guidKey,
                        MF_ATTRIBUTE_TYPE *pType);
        HRESULT ( STDMETHODCALLTYPE *CompareItem )(
            IMFSensorStream * This,
            REFGUID guidKey,
            REFPROPVARIANT Value,
                        BOOL *pbResult);
        HRESULT ( STDMETHODCALLTYPE *Compare )(
            IMFSensorStream * This,
            IMFAttributes *pTheirs,
            MF_ATTRIBUTES_MATCH_TYPE MatchType,
                        BOOL *pbResult);
        HRESULT ( STDMETHODCALLTYPE *GetUINT32 )(
            IMFSensorStream * This,
            REFGUID guidKey,
                        UINT32 *punValue);
        HRESULT ( STDMETHODCALLTYPE *GetUINT64 )(
            IMFSensorStream * This,
            REFGUID guidKey,
                        UINT64 *punValue);
        HRESULT ( STDMETHODCALLTYPE *GetDouble )(
            IMFSensorStream * This,
            REFGUID guidKey,
                        double *pfValue);
        HRESULT ( STDMETHODCALLTYPE *GetGUID )(
            IMFSensorStream * This,
            REFGUID guidKey,
                        GUID *pguidValue);
        HRESULT ( STDMETHODCALLTYPE *GetStringLength )(
            IMFSensorStream * This,
            REFGUID guidKey,
                        UINT32 *pcchLength);
        HRESULT ( STDMETHODCALLTYPE *GetString )(
            IMFSensorStream * This,
            REFGUID guidKey,
                                 LPWSTR pwszValue,
            UINT32 cchBufSize,
                                  UINT32 *pcchLength);
        HRESULT ( STDMETHODCALLTYPE *GetAllocatedString )(
            IMFSensorStream * This,
            REFGUID guidKey,
                                          LPWSTR *ppwszValue,
                        UINT32 *pcchLength);
        HRESULT ( STDMETHODCALLTYPE *GetBlobSize )(
            IMFSensorStream * This,
            REFGUID guidKey,
                        UINT32 *pcbBlobSize);
        HRESULT ( STDMETHODCALLTYPE *GetBlob )(
            IMFSensorStream * This,
            REFGUID guidKey,
                                 UINT8 *pBuf,
            UINT32 cbBufSize,
                                  UINT32 *pcbBlobSize);
        HRESULT ( STDMETHODCALLTYPE *GetAllocatedBlob )(
            IMFSensorStream * This,
            REFGUID guidKey,
                                          UINT8 **ppBuf,
                        UINT32 *pcbSize);
        HRESULT ( STDMETHODCALLTYPE *GetUnknown )(
            IMFSensorStream * This,
            REFGUID guidKey,
            REFIID riid,
                                LPVOID *ppv);
        HRESULT ( STDMETHODCALLTYPE *SetItem )(
            IMFSensorStream * This,
            REFGUID guidKey,
            REFPROPVARIANT Value);
        HRESULT ( STDMETHODCALLTYPE *DeleteItem )(
            IMFSensorStream * This,
            REFGUID guidKey);
        HRESULT ( STDMETHODCALLTYPE *DeleteAllItems )(
            IMFSensorStream * This);
        HRESULT ( STDMETHODCALLTYPE *SetUINT32 )(
            IMFSensorStream * This,
            REFGUID guidKey,
            UINT32 unValue);
        HRESULT ( STDMETHODCALLTYPE *SetUINT64 )(
            IMFSensorStream * This,
            REFGUID guidKey,
            UINT64 unValue);
        HRESULT ( STDMETHODCALLTYPE *SetDouble )(
            IMFSensorStream * This,
            REFGUID guidKey,
            double fValue);
        HRESULT ( STDMETHODCALLTYPE *SetGUID )(
            IMFSensorStream * This,
            REFGUID guidKey,
            REFGUID guidValue);
        HRESULT ( STDMETHODCALLTYPE *SetString )(
            IMFSensorStream * This,
            REFGUID guidKey,
                               LPCWSTR wszValue);
        HRESULT ( STDMETHODCALLTYPE *SetBlob )(
            IMFSensorStream * This,
            REFGUID guidKey,
                                const UINT8 *pBuf,
            UINT32 cbBufSize);
        HRESULT ( STDMETHODCALLTYPE *SetUnknown )(
            IMFSensorStream * This,
            REFGUID guidKey,
                       IUnknown *pUnknown);
        HRESULT ( STDMETHODCALLTYPE *LockStore )(
            IMFSensorStream * This);
        HRESULT ( STDMETHODCALLTYPE *UnlockStore )(
            IMFSensorStream * This);
        HRESULT ( STDMETHODCALLTYPE *GetCount )(
            IMFSensorStream * This,
                        UINT32 *pcItems);
        HRESULT ( STDMETHODCALLTYPE *GetItemByIndex )(
            IMFSensorStream * This,
            UINT32 unIndex,
                        GUID *pguidKey,
                                  PROPVARIANT *pValue);
        HRESULT ( STDMETHODCALLTYPE *CopyAllItems )(
            IMFSensorStream * This,
                       IMFAttributes *pDest);
        HRESULT ( STDMETHODCALLTYPE *GetMediaTypeCount )(
            IMFSensorStream * This,
            _Out_ DWORD *pdwCount);
        HRESULT ( STDMETHODCALLTYPE *GetMediaType )(
            IMFSensorStream * This,
            _In_ DWORD dwIndex,
            _COM_Outptr_ IMFMediaType **ppMediaType);
        HRESULT ( STDMETHODCALLTYPE *CloneSensorStream )(
            IMFSensorStream * This,
            _COM_Outptr_ IMFSensorStream **ppStream);
        END_INTERFACE
    } IMFSensorStreamVtbl;
    interface IMFSensorStream
    {
        CONST_VTBL struct IMFSensorStreamVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetItem(This,guidKey,pValue) )
    ( (This)->lpVtbl -> GetItemType(This,guidKey,pType) )
    ( (This)->lpVtbl -> CompareItem(This,guidKey,Value,pbResult) )
    ( (This)->lpVtbl -> Compare(This,pTheirs,MatchType,pbResult) )
    ( (This)->lpVtbl -> GetUINT32(This,guidKey,punValue) )
    ( (This)->lpVtbl -> GetUINT64(This,guidKey,punValue) )
    ( (This)->lpVtbl -> GetDouble(This,guidKey,pfValue) )
    ( (This)->lpVtbl -> GetGUID(This,guidKey,pguidValue) )
    ( (This)->lpVtbl -> GetStringLength(This,guidKey,pcchLength) )
    ( (This)->lpVtbl -> GetString(This,guidKey,pwszValue,cchBufSize,pcchLength) )
    ( (This)->lpVtbl -> GetAllocatedString(This,guidKey,ppwszValue,pcchLength) )
    ( (This)->lpVtbl -> GetBlobSize(This,guidKey,pcbBlobSize) )
    ( (This)->lpVtbl -> GetBlob(This,guidKey,pBuf,cbBufSize,pcbBlobSize) )
    ( (This)->lpVtbl -> GetAllocatedBlob(This,guidKey,ppBuf,pcbSize) )
    ( (This)->lpVtbl -> GetUnknown(This,guidKey,riid,ppv) )
    ( (This)->lpVtbl -> SetItem(This,guidKey,Value) )
    ( (This)->lpVtbl -> DeleteItem(This,guidKey) )
    ( (This)->lpVtbl -> DeleteAllItems(This) )
    ( (This)->lpVtbl -> SetUINT32(This,guidKey,unValue) )
    ( (This)->lpVtbl -> SetUINT64(This,guidKey,unValue) )
    ( (This)->lpVtbl -> SetDouble(This,guidKey,fValue) )
    ( (This)->lpVtbl -> SetGUID(This,guidKey,guidValue) )
    ( (This)->lpVtbl -> SetString(This,guidKey,wszValue) )
    ( (This)->lpVtbl -> SetBlob(This,guidKey,pBuf,cbBufSize) )
    ( (This)->lpVtbl -> SetUnknown(This,guidKey,pUnknown) )
    ( (This)->lpVtbl -> LockStore(This) )
    ( (This)->lpVtbl -> UnlockStore(This) )
    ( (This)->lpVtbl -> GetCount(This,pcItems) )
    ( (This)->lpVtbl -> GetItemByIndex(This,unIndex,pguidKey,pValue) )
    ( (This)->lpVtbl -> CopyAllItems(This,pDest) )
    ( (This)->lpVtbl -> GetMediaTypeCount(This,pdwCount) )
    ( (This)->lpVtbl -> GetMediaType(This,dwIndex,ppMediaType) )
    ( (This)->lpVtbl -> CloneSensorStream(This,ppStream) )
EXTERN_C const IID IID_IMFSensorTransformFactory;
    typedef struct IMFSensorTransformFactoryVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFSensorTransformFactory * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFSensorTransformFactory * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFSensorTransformFactory * This);
        HRESULT ( STDMETHODCALLTYPE *GetFactoryAttributes )(
            IMFSensorTransformFactory * This,
            _COM_Outptr_ IMFAttributes **ppAttributes);
        HRESULT ( STDMETHODCALLTYPE *InitializeFactory )(
            IMFSensorTransformFactory * This,
            _In_ DWORD dwMaxTransformCount,
            _In_ IMFCollection *pSensorDevices,
            _In_opt_ IMFAttributes *pAttributes);
        HRESULT ( STDMETHODCALLTYPE *GetTransformCount )(
            IMFSensorTransformFactory * This,
            _Out_ DWORD *pdwCount);
        HRESULT ( STDMETHODCALLTYPE *GetTransformInformation )(
            IMFSensorTransformFactory * This,
            _In_ DWORD TransformIndex,
            _Out_ GUID *pguidTransformId,
            _COM_Outptr_result_maybenull_ IMFAttributes **ppAttributes,
            _COM_Outptr_ IMFCollection **ppStreamInformation);
        HRESULT ( STDMETHODCALLTYPE *CreateTransform )(
            IMFSensorTransformFactory * This,
            _In_ REFGUID guidSensorTransformID,
            _In_opt_ IMFAttributes *pAttributes,
            _COM_Outptr_ IMFDeviceTransform **ppDeviceMFT);
        END_INTERFACE
    } IMFSensorTransformFactoryVtbl;
    interface IMFSensorTransformFactory
    {
        CONST_VTBL struct IMFSensorTransformFactoryVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetFactoryAttributes(This,ppAttributes) )
    ( (This)->lpVtbl -> InitializeFactory(This,dwMaxTransformCount,pSensorDevices,pAttributes) )
    ( (This)->lpVtbl -> GetTransformCount(This,pdwCount) )
    ( (This)->lpVtbl -> GetTransformInformation(This,TransformIndex,pguidTransformId,ppAttributes,ppStreamInformation) )
    ( (This)->lpVtbl -> CreateTransform(This,guidSensorTransformID,pAttributes,ppDeviceMFT) )
STDAPI
MFCreateSensorGroup(
    _In_z_ LPCWSTR SensorGroupSymbolicLink,
    _COM_Outptr_ IMFSensorGroup** ppSensorGroup
    );
STDAPI
MFCreateSensorStream(
    _In_ DWORD StreamId,
    _In_opt_ IMFAttributes* pAttributes,
    _In_ IMFCollection* pMediaTypeCollection,
    _COM_Outptr_ IMFSensorStream** ppStream
    );
typedef struct __MIDL___MIDL_itf_mfidl_0000_0113_0001
    {
    GUID Type;
    UINT32 Index;
    UINT32 Unused;
    } SENSORPROFILEID;
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0113_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0113_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFSensorProfile;
    typedef struct IMFSensorProfileVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFSensorProfile * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFSensorProfile * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFSensorProfile * This);
        HRESULT ( STDMETHODCALLTYPE *GetProfileId )(
            IMFSensorProfile * This,
            _Out_ SENSORPROFILEID *pId);
        HRESULT ( STDMETHODCALLTYPE *AddProfileFilter )(
            IMFSensorProfile * This,
            _In_ UINT32 StreamId,
            _In_z_ LPCWSTR wzFilterSetString);
        HRESULT ( STDMETHODCALLTYPE *IsMediaTypeSupported )(
            IMFSensorProfile * This,
            _In_ UINT32 StreamId,
            _In_ IMFMediaType *pMediaType,
            _Out_ BOOL *pfSupported);
        HRESULT ( STDMETHODCALLTYPE *AddBlockedControl )(
            IMFSensorProfile * This,
            _In_z_ LPCWSTR wzBlockedControl);
        END_INTERFACE
    } IMFSensorProfileVtbl;
    interface IMFSensorProfile
    {
        CONST_VTBL struct IMFSensorProfileVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetProfileId(This,pId) )
    ( (This)->lpVtbl -> AddProfileFilter(This,StreamId,wzFilterSetString) )
    ( (This)->lpVtbl -> IsMediaTypeSupported(This,StreamId,pMediaType,pfSupported) )
    ( (This)->lpVtbl -> AddBlockedControl(This,wzBlockedControl) )
EXTERN_C const IID IID_IMFSensorProfileCollection;
    typedef struct IMFSensorProfileCollectionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFSensorProfileCollection * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFSensorProfileCollection * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFSensorProfileCollection * This);
        DWORD ( STDMETHODCALLTYPE *GetProfileCount )(
            IMFSensorProfileCollection * This);
        HRESULT ( STDMETHODCALLTYPE *GetProfile )(
            IMFSensorProfileCollection * This,
            _In_ DWORD Index,
            _COM_Outptr_ IMFSensorProfile **ppProfile);
        HRESULT ( STDMETHODCALLTYPE *AddProfile )(
            IMFSensorProfileCollection * This,
            _In_ IMFSensorProfile *pProfile);
        HRESULT ( STDMETHODCALLTYPE *FindProfile )(
            IMFSensorProfileCollection * This,
            _In_ SENSORPROFILEID *ProfileId,
            _COM_Outptr_ IMFSensorProfile **ppProfile);
        void ( STDMETHODCALLTYPE *RemoveProfileByIndex )(
            IMFSensorProfileCollection * This,
            _In_ DWORD Index);
        void ( STDMETHODCALLTYPE *RemoveProfile )(
            IMFSensorProfileCollection * This,
            _In_ SENSORPROFILEID *ProfileId);
        END_INTERFACE
    } IMFSensorProfileCollectionVtbl;
    interface IMFSensorProfileCollection
    {
        CONST_VTBL struct IMFSensorProfileCollectionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetProfileCount(This) )
    ( (This)->lpVtbl -> GetProfile(This,Index,ppProfile) )
    ( (This)->lpVtbl -> AddProfile(This,pProfile) )
    ( (This)->lpVtbl -> FindProfile(This,ProfileId,ppProfile) )
    ( (This)->lpVtbl -> RemoveProfileByIndex(This,Index) )
    ( (This)->lpVtbl -> RemoveProfile(This,ProfileId) )
STDAPI
MFCreateSensorProfile(
    _In_ REFGUID ProfileType,
    _In_ UINT32 ProfileIndex,
    _In_opt_z_ LPCWSTR Constraints,
    _COM_Outptr_ IMFSensorProfile** ppProfile
    );
STDAPI
MFCreateSensorProfileCollection(
    _COM_Outptr_ IMFSensorProfileCollection** ppSensorProfile
    );
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0115_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0115_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFSensorProcessActivity;
    typedef struct IMFSensorProcessActivityVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFSensorProcessActivity * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFSensorProcessActivity * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFSensorProcessActivity * This);
        HRESULT ( STDMETHODCALLTYPE *GetProcessId )(
            IMFSensorProcessActivity * This,
            _Out_ ULONG *pPID);
        HRESULT ( STDMETHODCALLTYPE *GetStreamingState )(
            IMFSensorProcessActivity * This,
            _Out_ BOOL *pfStreaming);
        HRESULT ( STDMETHODCALLTYPE *GetStreamingMode )(
            IMFSensorProcessActivity * This,
            _Out_ MFSensorDeviceMode *pMode);
        HRESULT ( STDMETHODCALLTYPE *GetReportTime )(
            IMFSensorProcessActivity * This,
            _Out_ FILETIME *pft);
        END_INTERFACE
    } IMFSensorProcessActivityVtbl;
    interface IMFSensorProcessActivity
    {
        CONST_VTBL struct IMFSensorProcessActivityVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetProcessId(This,pPID) )
    ( (This)->lpVtbl -> GetStreamingState(This,pfStreaming) )
    ( (This)->lpVtbl -> GetStreamingMode(This,pMode) )
    ( (This)->lpVtbl -> GetReportTime(This,pft) )
EXTERN_C const IID IID_IMFSensorActivityReport;
    typedef struct IMFSensorActivityReportVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFSensorActivityReport * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFSensorActivityReport * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFSensorActivityReport * This);
        HRESULT ( STDMETHODCALLTYPE *GetFriendlyName )(
            IMFSensorActivityReport * This,
            _Out_writes_z_(cchFriendlyName) LPWSTR FriendlyName,
            _In_ ULONG cchFriendlyName,
            _Out_ ULONG *pcchWritten);
        HRESULT ( STDMETHODCALLTYPE *GetSymbolicLink )(
            IMFSensorActivityReport * This,
            _Out_writes_z_(cchSymbolicLink) LPWSTR SymbolicLink,
            _In_ ULONG cchSymbolicLink,
            _Out_ ULONG *pcchWritten);
        HRESULT ( STDMETHODCALLTYPE *GetProcessCount )(
            IMFSensorActivityReport * This,
            _Out_ ULONG *pcCount);
        HRESULT ( STDMETHODCALLTYPE *GetProcessActivity )(
            IMFSensorActivityReport * This,
            _In_ ULONG Index,
            _COM_Outptr_ IMFSensorProcessActivity **ppProcessActivity);
        END_INTERFACE
    } IMFSensorActivityReportVtbl;
    interface IMFSensorActivityReport
    {
        CONST_VTBL struct IMFSensorActivityReportVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetFriendlyName(This,FriendlyName,cchFriendlyName,pcchWritten) )
    ( (This)->lpVtbl -> GetSymbolicLink(This,SymbolicLink,cchSymbolicLink,pcchWritten) )
    ( (This)->lpVtbl -> GetProcessCount(This,pcCount) )
    ( (This)->lpVtbl -> GetProcessActivity(This,Index,ppProcessActivity) )
EXTERN_C const IID IID_IMFSensorActivitiesReport;
    typedef struct IMFSensorActivitiesReportVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFSensorActivitiesReport * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFSensorActivitiesReport * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFSensorActivitiesReport * This);
        HRESULT ( STDMETHODCALLTYPE *GetCount )(
            IMFSensorActivitiesReport * This,
            _Out_ ULONG *pcCount);
        HRESULT ( STDMETHODCALLTYPE *GetActivityReport )(
            IMFSensorActivitiesReport * This,
            _In_ ULONG Index,
            _COM_Outptr_ IMFSensorActivityReport **sensorActivityReport);
        HRESULT ( STDMETHODCALLTYPE *GetActivityReportByDeviceName )(
            IMFSensorActivitiesReport * This,
            _In_z_ LPCWSTR SymbolicName,
            _COM_Outptr_ IMFSensorActivityReport **sensorActivityReport);
        END_INTERFACE
    } IMFSensorActivitiesReportVtbl;
    interface IMFSensorActivitiesReport
    {
        CONST_VTBL struct IMFSensorActivitiesReportVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetCount(This,pcCount) )
    ( (This)->lpVtbl -> GetActivityReport(This,Index,sensorActivityReport) )
    ( (This)->lpVtbl -> GetActivityReportByDeviceName(This,SymbolicName,sensorActivityReport) )
EXTERN_C const IID IID_IMFSensorActivitiesReportCallback;
    typedef struct IMFSensorActivitiesReportCallbackVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFSensorActivitiesReportCallback * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFSensorActivitiesReportCallback * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFSensorActivitiesReportCallback * This);
        HRESULT ( STDMETHODCALLTYPE *OnActivitiesReport )(
            IMFSensorActivitiesReportCallback * This,
            _In_ IMFSensorActivitiesReport *sensorActivitiesReport);
        END_INTERFACE
    } IMFSensorActivitiesReportCallbackVtbl;
    interface IMFSensorActivitiesReportCallback
    {
        CONST_VTBL struct IMFSensorActivitiesReportCallbackVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnActivitiesReport(This,sensorActivitiesReport) )
EXTERN_C const IID IID_IMFSensorActivityMonitor;
    typedef struct IMFSensorActivityMonitorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFSensorActivityMonitor * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFSensorActivityMonitor * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFSensorActivityMonitor * This);
        HRESULT ( STDMETHODCALLTYPE *Start )(
            IMFSensorActivityMonitor * This);
        HRESULT ( STDMETHODCALLTYPE *Stop )(
            IMFSensorActivityMonitor * This);
        END_INTERFACE
    } IMFSensorActivityMonitorVtbl;
    interface IMFSensorActivityMonitor
    {
        CONST_VTBL struct IMFSensorActivityMonitorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Start(This) )
    ( (This)->lpVtbl -> Stop(This) )
STDAPI
MFCreateSensorActivityMonitor(
    _In_ IMFSensorActivitiesReportCallback* pCallback,
    _COM_Outptr_ IMFSensorActivityMonitor** ppActivityMonitor
    );
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
typedef struct _MFCameraIntrinsic_CameraModel
    {
    FLOAT FocalLength_x;
    FLOAT FocalLength_y;
    FLOAT PrincipalPoint_x;
    FLOAT PrincipalPoint_y;
    } MFCameraIntrinsic_CameraModel;
typedef struct _MFCameraIntrinsic_DistortionModel6KT
    {
    FLOAT Radial_k1;
    FLOAT Radial_k2;
    FLOAT Radial_k3;
    FLOAT Radial_k4;
    FLOAT Radial_k5;
    FLOAT Radial_k6;
    FLOAT Tangential_p1;
    FLOAT Tangential_p2;
    } MFCameraIntrinsic_DistortionModel6KT;
typedef struct _MFCameraIntrinsic_DistortionModelArcTan
    {
    FLOAT Radial_k0;
    FLOAT DistortionCenter_x;
    FLOAT DistortionCenter_y;
    FLOAT Tangential_x;
    FLOAT Tangential_y;
    } MFCameraIntrinsic_DistortionModelArcTan;
typedef
enum _MFCameraIntrinsic_DistortionModelType
    {
        MFCameraIntrinsic_DistortionModelType_6KT = 0,
        MFCameraIntrinsic_DistortionModelType_ArcTan = ( MFCameraIntrinsic_DistortionModelType_6KT + 1 )
    } MFCameraIntrinsic_DistortionModelType;
typedef struct _MFExtendedCameraIntrinsic_IntrinsicModel
    {
    UINT32 Width;
    UINT32 Height;
    UINT32 SplitFrameId;
    MFCameraIntrinsic_CameraModel CameraModel;
    } MFExtendedCameraIntrinsic_IntrinsicModel;
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0120_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0120_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFExtendedCameraIntrinsicModel;
    typedef struct IMFExtendedCameraIntrinsicModelVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFExtendedCameraIntrinsicModel * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFExtendedCameraIntrinsicModel * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFExtendedCameraIntrinsicModel * This);
        HRESULT ( STDMETHODCALLTYPE *GetModel )(
            IMFExtendedCameraIntrinsicModel * This,
            _Out_ MFExtendedCameraIntrinsic_IntrinsicModel *pIntrinsicModel);
        HRESULT ( STDMETHODCALLTYPE *SetModel )(
            IMFExtendedCameraIntrinsicModel * This,
            _In_ const MFExtendedCameraIntrinsic_IntrinsicModel *pIntrinsicModel);
        HRESULT ( STDMETHODCALLTYPE *GetDistortionModelType )(
            IMFExtendedCameraIntrinsicModel * This,
            _Out_ MFCameraIntrinsic_DistortionModelType *pDistortionModelType);
        END_INTERFACE
    } IMFExtendedCameraIntrinsicModelVtbl;
    interface IMFExtendedCameraIntrinsicModel
    {
        CONST_VTBL struct IMFExtendedCameraIntrinsicModelVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetModel(This,pIntrinsicModel) )
    ( (This)->lpVtbl -> SetModel(This,pIntrinsicModel) )
    ( (This)->lpVtbl -> GetDistortionModelType(This,pDistortionModelType) )
EXTERN_C const IID IID_IMFExtendedCameraIntrinsicsDistortionModel6KT;
    typedef struct IMFExtendedCameraIntrinsicsDistortionModel6KTVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFExtendedCameraIntrinsicsDistortionModel6KT * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFExtendedCameraIntrinsicsDistortionModel6KT * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFExtendedCameraIntrinsicsDistortionModel6KT * This);
        HRESULT ( STDMETHODCALLTYPE *GetDistortionModel )(
            IMFExtendedCameraIntrinsicsDistortionModel6KT * This,
            _Out_ MFCameraIntrinsic_DistortionModel6KT *pDistortionModel);
        HRESULT ( STDMETHODCALLTYPE *SetDistortionModel )(
            IMFExtendedCameraIntrinsicsDistortionModel6KT * This,
            _In_ const MFCameraIntrinsic_DistortionModel6KT *pDistortionModel);
        END_INTERFACE
    } IMFExtendedCameraIntrinsicsDistortionModel6KTVtbl;
    interface IMFExtendedCameraIntrinsicsDistortionModel6KT
    {
        CONST_VTBL struct IMFExtendedCameraIntrinsicsDistortionModel6KTVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetDistortionModel(This,pDistortionModel) )
    ( (This)->lpVtbl -> SetDistortionModel(This,pDistortionModel) )
EXTERN_C const IID IID_IMFExtendedCameraIntrinsicsDistortionModelArcTan;
    typedef struct IMFExtendedCameraIntrinsicsDistortionModelArcTanVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFExtendedCameraIntrinsicsDistortionModelArcTan * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFExtendedCameraIntrinsicsDistortionModelArcTan * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFExtendedCameraIntrinsicsDistortionModelArcTan * This);
        HRESULT ( STDMETHODCALLTYPE *GetDistortionModel )(
            IMFExtendedCameraIntrinsicsDistortionModelArcTan * This,
            _Out_ MFCameraIntrinsic_DistortionModelArcTan *pDistortionModel);
        HRESULT ( STDMETHODCALLTYPE *SetDistortionModel )(
            IMFExtendedCameraIntrinsicsDistortionModelArcTan * This,
            _In_ const MFCameraIntrinsic_DistortionModelArcTan *pDistortionModel);
        END_INTERFACE
    } IMFExtendedCameraIntrinsicsDistortionModelArcTanVtbl;
    interface IMFExtendedCameraIntrinsicsDistortionModelArcTan
    {
        CONST_VTBL struct IMFExtendedCameraIntrinsicsDistortionModelArcTanVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetDistortionModel(This,pDistortionModel) )
    ( (This)->lpVtbl -> SetDistortionModel(This,pDistortionModel) )
EXTERN_C const IID IID_IMFExtendedCameraIntrinsics;
    typedef struct IMFExtendedCameraIntrinsicsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFExtendedCameraIntrinsics * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFExtendedCameraIntrinsics * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFExtendedCameraIntrinsics * This);
        HRESULT ( STDMETHODCALLTYPE *InitializeFromBuffer )(
            IMFExtendedCameraIntrinsics * This,
            _In_reads_bytes_(dwBufferSize) BYTE *pbBuffer,
                       DWORD dwBufferSize);
        HRESULT ( STDMETHODCALLTYPE *GetBufferSize )(
            IMFExtendedCameraIntrinsics * This,
            _Out_ DWORD *pdwBufferSize);
        HRESULT ( STDMETHODCALLTYPE *SerializeToBuffer )(
            IMFExtendedCameraIntrinsics * This,
            _Out_writes_bytes_to_(*pdwBufferSize, *pdwBufferSize) BYTE *pbBuffer,
            _Inout_ DWORD *pdwBufferSize);
        HRESULT ( STDMETHODCALLTYPE *GetIntrinsicModelCount )(
            IMFExtendedCameraIntrinsics * This,
            _Out_ DWORD *pdwCount);
        HRESULT ( STDMETHODCALLTYPE *GetIntrinsicModelByIndex )(
            IMFExtendedCameraIntrinsics * This,
                       DWORD dwIndex,
            _COM_Outptr_ IMFExtendedCameraIntrinsicModel **ppIntrinsicModel);
        HRESULT ( STDMETHODCALLTYPE *AddIntrinsicModel )(
            IMFExtendedCameraIntrinsics * This,
            _In_ IMFExtendedCameraIntrinsicModel *pIntrinsicModel);
        END_INTERFACE
    } IMFExtendedCameraIntrinsicsVtbl;
    interface IMFExtendedCameraIntrinsics
    {
        CONST_VTBL struct IMFExtendedCameraIntrinsicsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> InitializeFromBuffer(This,pbBuffer,dwBufferSize) )
    ( (This)->lpVtbl -> GetBufferSize(This,pdwBufferSize) )
    ( (This)->lpVtbl -> SerializeToBuffer(This,pbBuffer,pdwBufferSize) )
    ( (This)->lpVtbl -> GetIntrinsicModelCount(This,pdwCount) )
    ( (This)->lpVtbl -> GetIntrinsicModelByIndex(This,dwIndex,ppIntrinsicModel) )
    ( (This)->lpVtbl -> AddIntrinsicModel(This,pIntrinsicModel) )
DEFINE_GUID(MFStreamExtension_ExtendedCameraIntrinsics,
    0xaa74b3df, 0x9a2c, 0x48d6, 0x83, 0x93, 0x5b, 0xd1, 0xc1, 0xa8, 0x1e, 0x6e);
DEFINE_GUID(MFSampleExtension_ExtendedCameraIntrinsics,
    0x560bc4a5, 0x4de0, 0x4113, 0x9c, 0xdc, 0x83, 0x2d, 0xb9, 0x74, 0xf, 0x3d);
STDAPI
MFCreateExtendedCameraIntrinsics(
    _COM_Outptr_ IMFExtendedCameraIntrinsics** ppExtendedCameraIntrinsics
    );
STDAPI
MFCreateExtendedCameraIntrinsicModel(
    const MFCameraIntrinsic_DistortionModelType distortionModelType,
    _COM_Outptr_ IMFExtendedCameraIntrinsicModel** ppExtendedCameraIntrinsicModel
    );
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0124_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfidl_0000_0124_v0_0_s_ifspec;
unsigned long __RPC_USER BSTR_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER LPSAFEARRAY_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in LPSAFEARRAY * );
unsigned char * __RPC_USER LPSAFEARRAY_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in LPSAFEARRAY * );
unsigned char * __RPC_USER LPSAFEARRAY_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out LPSAFEARRAY * );
void __RPC_USER LPSAFEARRAY_UserFree( __RPC__in unsigned long *, __RPC__in LPSAFEARRAY * );
unsigned long __RPC_USER BSTR_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree64( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER LPSAFEARRAY_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in LPSAFEARRAY * );
unsigned char * __RPC_USER LPSAFEARRAY_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in LPSAFEARRAY * );
unsigned char * __RPC_USER LPSAFEARRAY_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out LPSAFEARRAY * );
void __RPC_USER LPSAFEARRAY_UserFree64( __RPC__in unsigned long *, __RPC__in LPSAFEARRAY * );
              HRESULT STDMETHODCALLTYPE IMFSourceResolver_BeginCreateObjectFromURL_Proxy(
    IMFSourceResolver * This,
               LPCWSTR pwszURL,
               DWORD dwFlags,
               IPropertyStore *pProps,
    _Outptr_opt_ IUnknown **ppIUnknownCancelCookie,
               IMFAsyncCallback *pCallback,
               IUnknown *punkState);
                HRESULT STDMETHODCALLTYPE IMFSourceResolver_BeginCreateObjectFromURL_Stub(
    __RPC__in IMFSourceResolver * This,
                       __RPC__in_string LPCWSTR pwszURL,
               DWORD dwFlags,
               __RPC__in_opt IPropertyStore *pProps,
               __RPC__in_opt IMFRemoteAsyncCallback *pCallback);
              HRESULT STDMETHODCALLTYPE IMFSourceResolver_EndCreateObjectFromURL_Proxy(
    IMFSourceResolver * This,
               IMFAsyncResult *pResult,
    _Out_ MF_OBJECT_TYPE *pObjectType,
    _Outptr_ IUnknown **ppObject);
                HRESULT STDMETHODCALLTYPE IMFSourceResolver_EndCreateObjectFromURL_Stub(
    __RPC__in IMFSourceResolver * This,
               __RPC__in_opt IUnknown *pResult,
                __RPC__out MF_OBJECT_TYPE *pObjectType,
                __RPC__deref_out_opt IUnknown **ppObject);
              HRESULT STDMETHODCALLTYPE IMFSourceResolver_BeginCreateObjectFromByteStream_Proxy(
    IMFSourceResolver * This,
               IMFByteStream *pByteStream,
               LPCWSTR pwszURL,
               DWORD dwFlags,
               IPropertyStore *pProps,
    _Outptr_opt_ IUnknown **ppIUnknownCancelCookie,
               IMFAsyncCallback *pCallback,
               IUnknown *punkState);
                HRESULT STDMETHODCALLTYPE IMFSourceResolver_BeginCreateObjectFromByteStream_Stub(
    __RPC__in IMFSourceResolver * This,
               __RPC__in_opt IMFByteStream *pByteStream,
                       __RPC__in_opt LPCWSTR pwszURL,
               DWORD dwFlags,
                       __RPC__in_opt IPropertyStore *pProps,
               __RPC__in_opt IMFRemoteAsyncCallback *pCallback);
              HRESULT STDMETHODCALLTYPE IMFSourceResolver_EndCreateObjectFromByteStream_Proxy(
    IMFSourceResolver * This,
               IMFAsyncResult *pResult,
    _Out_ MF_OBJECT_TYPE *pObjectType,
    _Outptr_ IUnknown **ppObject);
                HRESULT STDMETHODCALLTYPE IMFSourceResolver_EndCreateObjectFromByteStream_Stub(
    __RPC__in IMFSourceResolver * This,
               __RPC__in_opt IUnknown *pResult,
                __RPC__out MF_OBJECT_TYPE *pObjectType,
                __RPC__deref_out_opt IUnknown **ppObject);
              HRESULT STDMETHODCALLTYPE IMFMediaSource_CreatePresentationDescriptor_Proxy(
    IMFMediaSource * This,
    _Outptr_ IMFPresentationDescriptor **ppPresentationDescriptor);
                HRESULT STDMETHODCALLTYPE IMFMediaSource_CreatePresentationDescriptor_Stub(
    __RPC__in IMFMediaSource * This,
                __RPC__out DWORD *pcbPD,
                                  __RPC__deref_out_ecount_full_opt(*pcbPD) BYTE **pbPD,
                __RPC__deref_out_opt IMFPresentationDescriptor **ppRemotePD);
              HRESULT STDMETHODCALLTYPE IMFMediaStream_RequestSample_Proxy(
    IMFMediaStream * This,
               IUnknown *pToken);
                HRESULT STDMETHODCALLTYPE IMFMediaStream_RequestSample_Stub(
    __RPC__in IMFMediaStream * This);
              HRESULT STDMETHODCALLTYPE IMFTopologyNode_GetOutputPrefType_Proxy(
    IMFTopologyNode * This,
               DWORD dwOutputIndex,
    _Outptr_ IMFMediaType **ppType);
                HRESULT STDMETHODCALLTYPE IMFTopologyNode_GetOutputPrefType_Stub(
    __RPC__in IMFTopologyNode * This,
               DWORD dwOutputIndex,
                __RPC__out DWORD *pcbData,
                                  __RPC__deref_out_ecount_full_opt(*pcbData) BYTE **ppbData);
              HRESULT STDMETHODCALLTYPE IMFTopologyNode_GetInputPrefType_Proxy(
    IMFTopologyNode * This,
               DWORD dwInputIndex,
    _Outptr_ IMFMediaType **ppType);
                HRESULT STDMETHODCALLTYPE IMFTopologyNode_GetInputPrefType_Stub(
    __RPC__in IMFTopologyNode * This,
               DWORD dwInputIndex,
                __RPC__out DWORD *pcbData,
                                  __RPC__deref_out_ecount_full_opt(*pcbData) BYTE **ppbData);
              HRESULT STDMETHODCALLTYPE IMFMediaTypeHandler_IsMediaTypeSupported_Proxy(
    IMFMediaTypeHandler * This,
               IMFMediaType *pMediaType,
    _Outptr_opt_result_maybenull_ IMFMediaType **ppMediaType);
                HRESULT STDMETHODCALLTYPE IMFMediaTypeHandler_IsMediaTypeSupported_Stub(
    __RPC__in IMFMediaTypeHandler * This,
                        __RPC__in_ecount_full(cbData) BYTE *pbData,
               DWORD cbData,
                                  __RPC__deref_out_ecount_full_opt(*pcbBestMatch) BYTE **ppbBestMatch,
                __RPC__out DWORD *pcbBestMatch);
              HRESULT STDMETHODCALLTYPE IMFMediaTypeHandler_GetMediaTypeByIndex_Proxy(
    IMFMediaTypeHandler * This,
               DWORD dwIndex,
    _Outptr_ IMFMediaType **ppType);
                HRESULT STDMETHODCALLTYPE IMFMediaTypeHandler_GetMediaTypeByIndex_Stub(
    __RPC__in IMFMediaTypeHandler * This,
               DWORD dwIndex,
                                  __RPC__deref_out_ecount_full_opt(*pcbData) BYTE **ppbData,
                __RPC__out DWORD *pcbData);
              HRESULT STDMETHODCALLTYPE IMFMediaTypeHandler_SetCurrentMediaType_Proxy(
    IMFMediaTypeHandler * This,
               IMFMediaType *pMediaType);
                HRESULT STDMETHODCALLTYPE IMFMediaTypeHandler_SetCurrentMediaType_Stub(
    __RPC__in IMFMediaTypeHandler * This,
                        __RPC__in_ecount_full(cbData) BYTE *pbData,
               DWORD cbData);
              HRESULT STDMETHODCALLTYPE IMFMediaTypeHandler_GetCurrentMediaType_Proxy(
    IMFMediaTypeHandler * This,
    _Outptr_ IMFMediaType **ppMediaType);
                HRESULT STDMETHODCALLTYPE IMFMediaTypeHandler_GetCurrentMediaType_Stub(
    __RPC__in IMFMediaTypeHandler * This,
                                  __RPC__deref_out_ecount_full_opt(*pcbData) BYTE **ppbData,
                __RPC__out DWORD *pcbData);
              HRESULT STDMETHODCALLTYPE IMFContentProtectionManager_BeginEnableContent_Proxy(
    IMFContentProtectionManager * This,
               IMFActivate *pEnablerActivate,
               IMFTopology *pTopo,
               IMFAsyncCallback *pCallback,
               IUnknown *punkState);
                HRESULT STDMETHODCALLTYPE IMFContentProtectionManager_BeginEnableContent_Stub(
    __RPC__in IMFContentProtectionManager * This,
               __RPC__in REFCLSID clsidType,
                        __RPC__in_ecount_full(cbData) BYTE *pbData,
               DWORD cbData,
               __RPC__in_opt IMFRemoteAsyncCallback *pCallback);
              HRESULT STDMETHODCALLTYPE IMFContentProtectionManager_EndEnableContent_Proxy(
    IMFContentProtectionManager * This,
               IMFAsyncResult *pResult);
                HRESULT STDMETHODCALLTYPE IMFContentProtectionManager_EndEnableContent_Stub(
    __RPC__in IMFContentProtectionManager * This,
               __RPC__in_opt IUnknown *pResult);
              HRESULT STDMETHODCALLTYPE IMFWorkQueueServices_BeginRegisterTopologyWorkQueuesWithMMCSS_Proxy(
    IMFWorkQueueServices * This,
               IMFAsyncCallback *pCallback,
               IUnknown *pState);
                HRESULT STDMETHODCALLTYPE IMFWorkQueueServices_BeginRegisterTopologyWorkQueuesWithMMCSS_Stub(
    __RPC__in IMFWorkQueueServices * This,
               __RPC__in_opt IMFRemoteAsyncCallback *pCallback);
              HRESULT STDMETHODCALLTYPE IMFWorkQueueServices_EndRegisterTopologyWorkQueuesWithMMCSS_Proxy(
    IMFWorkQueueServices * This,
               IMFAsyncResult *pResult);
                HRESULT STDMETHODCALLTYPE IMFWorkQueueServices_EndRegisterTopologyWorkQueuesWithMMCSS_Stub(
    __RPC__in IMFWorkQueueServices * This,
               __RPC__in_opt IUnknown *pResult);
              HRESULT STDMETHODCALLTYPE IMFWorkQueueServices_BeginUnregisterTopologyWorkQueuesWithMMCSS_Proxy(
    IMFWorkQueueServices * This,
               IMFAsyncCallback *pCallback,
               IUnknown *pState);
                HRESULT STDMETHODCALLTYPE IMFWorkQueueServices_BeginUnregisterTopologyWorkQueuesWithMMCSS_Stub(
    __RPC__in IMFWorkQueueServices * This,
               __RPC__in_opt IMFRemoteAsyncCallback *pCallback);
              HRESULT STDMETHODCALLTYPE IMFWorkQueueServices_EndUnregisterTopologyWorkQueuesWithMMCSS_Proxy(
    IMFWorkQueueServices * This,
               IMFAsyncResult *pResult);
                HRESULT STDMETHODCALLTYPE IMFWorkQueueServices_EndUnregisterTopologyWorkQueuesWithMMCSS_Stub(
    __RPC__in IMFWorkQueueServices * This,
               __RPC__in_opt IUnknown *pResult);
              HRESULT STDMETHODCALLTYPE IMFWorkQueueServices_BeginRegisterPlatformWorkQueueWithMMCSS_Proxy(
    IMFWorkQueueServices * This,
               DWORD dwPlatformWorkQueue,
               LPCWSTR wszClass,
               DWORD dwTaskId,
               IMFAsyncCallback *pCallback,
               IUnknown *pState);
                HRESULT STDMETHODCALLTYPE IMFWorkQueueServices_BeginRegisterPlatformWorkQueueWithMMCSS_Stub(
    __RPC__in IMFWorkQueueServices * This,
               DWORD dwPlatformWorkQueue,
               __RPC__in LPCWSTR wszClass,
               DWORD dwTaskId,
               __RPC__in_opt IMFRemoteAsyncCallback *pCallback);
              HRESULT STDMETHODCALLTYPE IMFWorkQueueServices_EndRegisterPlatformWorkQueueWithMMCSS_Proxy(
    IMFWorkQueueServices * This,
               IMFAsyncResult *pResult,
    _Out_ DWORD *pdwTaskId);
                HRESULT STDMETHODCALLTYPE IMFWorkQueueServices_EndRegisterPlatformWorkQueueWithMMCSS_Stub(
    __RPC__in IMFWorkQueueServices * This,
               __RPC__in_opt IUnknown *pResult,
                __RPC__out DWORD *pdwTaskId);
              HRESULT STDMETHODCALLTYPE IMFWorkQueueServices_BeginUnregisterPlatformWorkQueueWithMMCSS_Proxy(
    IMFWorkQueueServices * This,
               DWORD dwPlatformWorkQueue,
               IMFAsyncCallback *pCallback,
               IUnknown *pState);
                HRESULT STDMETHODCALLTYPE IMFWorkQueueServices_BeginUnregisterPlatformWorkQueueWithMMCSS_Stub(
    __RPC__in IMFWorkQueueServices * This,
               DWORD dwPlatformWorkQueue,
               __RPC__in_opt IMFRemoteAsyncCallback *pCallback);
              HRESULT STDMETHODCALLTYPE IMFWorkQueueServices_EndUnregisterPlatformWorkQueueWithMMCSS_Proxy(
    IMFWorkQueueServices * This,
               IMFAsyncResult *pResult);
                HRESULT STDMETHODCALLTYPE IMFWorkQueueServices_EndUnregisterPlatformWorkQueueWithMMCSS_Stub(
    __RPC__in IMFWorkQueueServices * This,
               __RPC__in_opt IUnknown *pResult);
              HRESULT STDMETHODCALLTYPE IMFWorkQueueServicesEx_BeginRegisterPlatformWorkQueueWithMMCSSEx_Proxy(
    IMFWorkQueueServicesEx * This,
               DWORD dwPlatformWorkQueue,
               LPCWSTR wszClass,
               DWORD dwTaskId,
               LONG lPriority,
               IMFAsyncCallback *pCallback,
               IUnknown *pState);
                HRESULT STDMETHODCALLTYPE IMFWorkQueueServicesEx_BeginRegisterPlatformWorkQueueWithMMCSSEx_Stub(
    __RPC__in IMFWorkQueueServicesEx * This,
               DWORD dwPlatformWorkQueue,
               __RPC__in LPCWSTR wszClass,
               DWORD dwTaskId,
               LONG lPriority,
               __RPC__in_opt IMFRemoteAsyncCallback *pCallback);
              HRESULT STDMETHODCALLTYPE IMFPMPHost_CreateObjectByCLSID_Proxy(
    IMFPMPHost * This,
               REFCLSID clsid,
                       IStream *pStream,
               REFIID riid,
                        void **ppv);
                HRESULT STDMETHODCALLTYPE IMFPMPHost_CreateObjectByCLSID_Stub(
    __RPC__in IMFPMPHost * This,
               __RPC__in REFCLSID clsid,
                                __RPC__in_ecount_full_opt(cbData) BYTE *pbData,
               DWORD cbData,
               __RPC__in REFIID riid,
                        __RPC__deref_out_opt void **ppv);
}

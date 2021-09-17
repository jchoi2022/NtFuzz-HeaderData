#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface ICreateDevEnum ICreateDevEnum;
typedef interface IPin IPin;
typedef interface IEnumPins IEnumPins;
typedef interface IEnumMediaTypes IEnumMediaTypes;
typedef interface IFilterGraph IFilterGraph;
typedef interface IEnumFilters IEnumFilters;
typedef interface IMediaFilter IMediaFilter;
typedef interface IBaseFilter IBaseFilter;
typedef interface IReferenceClock IReferenceClock;
typedef interface IReferenceClockTimerControl IReferenceClockTimerControl;
typedef interface IReferenceClock2 IReferenceClock2;
typedef interface IMediaSample IMediaSample;
typedef interface IMediaSample2 IMediaSample2;
typedef interface IMediaSample2Config IMediaSample2Config;
typedef interface IMemAllocator IMemAllocator;
typedef interface IMemAllocatorCallbackTemp IMemAllocatorCallbackTemp;
typedef interface IMemAllocatorNotifyCallbackTemp IMemAllocatorNotifyCallbackTemp;
typedef interface IMemInputPin IMemInputPin;
typedef interface IAMovieSetup IAMovieSetup;
typedef interface IMediaSeeking IMediaSeeking;
typedef interface ICodecAPI ICodecAPI;
typedef interface IEnumRegFilters IEnumRegFilters;
typedef interface IFilterMapper IFilterMapper;
typedef interface IFilterMapper2 IFilterMapper2;
typedef interface IFilterMapper3 IFilterMapper3;
typedef interface IQualityControl IQualityControl;
typedef interface IOverlayNotify IOverlayNotify;
typedef interface IOverlayNotify2 IOverlayNotify2;
typedef interface IOverlay IOverlay;
typedef interface IMediaEventSink IMediaEventSink;
typedef interface IFileSourceFilter IFileSourceFilter;
typedef interface IFileSinkFilter IFileSinkFilter;
typedef interface IFileSinkFilter2 IFileSinkFilter2;
typedef interface IGraphBuilder IGraphBuilder;
typedef interface ICaptureGraphBuilder ICaptureGraphBuilder;
typedef interface IAMCopyCaptureFileProgress IAMCopyCaptureFileProgress;
typedef interface ICaptureGraphBuilder2 ICaptureGraphBuilder2;
typedef interface IFilterGraph2 IFilterGraph2;
typedef interface IFilterGraph3 IFilterGraph3;
typedef interface IStreamBuilder IStreamBuilder;
typedef interface IAsyncReader IAsyncReader;
typedef interface IGraphVersion IGraphVersion;
typedef interface IResourceConsumer IResourceConsumer;
typedef interface IResourceManager IResourceManager;
typedef interface IDistributorNotify IDistributorNotify;
typedef interface IAMStreamControl IAMStreamControl;
typedef interface ISeekingPassThru ISeekingPassThru;
typedef interface IAMStreamConfig IAMStreamConfig;
typedef interface IConfigInterleaving IConfigInterleaving;
typedef interface IConfigAviMux IConfigAviMux;
typedef interface IAMVideoCompression IAMVideoCompression;
typedef interface IAMVfwCaptureDialogs IAMVfwCaptureDialogs;
typedef interface IAMVfwCompressDialogs IAMVfwCompressDialogs;
typedef interface IAMDroppedFrames IAMDroppedFrames;
typedef interface IAMAudioInputMixer IAMAudioInputMixer;
typedef interface IAMBufferNegotiation IAMBufferNegotiation;
typedef interface IAMAnalogVideoDecoder IAMAnalogVideoDecoder;
typedef interface IAMVideoProcAmp IAMVideoProcAmp;
typedef interface IAMCameraControl IAMCameraControl;
typedef interface IAMVideoControl IAMVideoControl;
typedef interface IAMCrossbar IAMCrossbar;
typedef interface IAMTuner IAMTuner;
typedef interface IAMTunerNotification IAMTunerNotification;
typedef interface IAMTVTuner IAMTVTuner;
typedef interface IBPCSatelliteTuner IBPCSatelliteTuner;
typedef interface IAMTVAudio IAMTVAudio;
typedef interface IAMTVAudioNotification IAMTVAudioNotification;
typedef interface IAMAnalogVideoEncoder IAMAnalogVideoEncoder;
typedef interface IKsPropertySet IKsPropertySet;
typedef interface IMediaPropertyBag IMediaPropertyBag;
typedef interface IPersistMediaPropertyBag IPersistMediaPropertyBag;
typedef interface IAMPhysicalPinInfo IAMPhysicalPinInfo;
typedef interface IAMExtDevice IAMExtDevice;
typedef interface IAMExtTransport IAMExtTransport;
typedef interface IAMTimecodeReader IAMTimecodeReader;
typedef interface IAMTimecodeGenerator IAMTimecodeGenerator;
typedef interface IAMTimecodeDisplay IAMTimecodeDisplay;
typedef interface IAMDevMemoryAllocator IAMDevMemoryAllocator;
typedef interface IAMDevMemoryControl IAMDevMemoryControl;
typedef interface IAMStreamSelect IAMStreamSelect;
typedef interface IAMResourceControl IAMResourceControl;
typedef interface IAMClockAdjust IAMClockAdjust;
typedef interface IAMFilterMiscFlags IAMFilterMiscFlags;
typedef interface IDrawVideoImage IDrawVideoImage;
typedef interface IDecimateVideoImage IDecimateVideoImage;
typedef interface IAMVideoDecimationProperties IAMVideoDecimationProperties;
typedef interface IVideoFrameStep IVideoFrameStep;
typedef interface IAMLatency IAMLatency;
typedef interface IAMPushSource IAMPushSource;
typedef interface IAMDeviceRemoval IAMDeviceRemoval;
typedef interface IDVEnc IDVEnc;
typedef interface IIPDVDec IIPDVDec;
typedef interface IDVRGB219 IDVRGB219;
typedef interface IDVSplitter IDVSplitter;
typedef interface IAMAudioRendererStats IAMAudioRendererStats;
typedef interface IAMGraphStreams IAMGraphStreams;
typedef interface IAMOverlayFX IAMOverlayFX;
typedef interface IAMOpenProgress IAMOpenProgress;
typedef interface IMpeg2Demultiplexer IMpeg2Demultiplexer;
typedef interface IEnumStreamIdMap IEnumStreamIdMap;
typedef interface IMPEG2StreamIdMap IMPEG2StreamIdMap;
typedef interface IRegisterServiceProvider IRegisterServiceProvider;
typedef interface IAMClockSlave IAMClockSlave;
typedef interface IAMGraphBuilderCallback IAMGraphBuilderCallback;
typedef interface IGetCapabilitiesKey IGetCapabilitiesKey;
typedef interface IEncoderAPI IEncoderAPI;
typedef interface IVideoEncoder IVideoEncoder;
typedef interface IAMDecoderCaps IAMDecoderCaps;
typedef interface IAMCertifiedOutputProtection IAMCertifiedOutputProtection;
typedef interface IAMAsyncReaderTimestampScaling IAMAsyncReaderTimestampScaling;
typedef interface IAMPluginControl IAMPluginControl;
typedef interface IPinConnection IPinConnection;
typedef interface IPinFlowControl IPinFlowControl;
typedef interface IGraphConfig IGraphConfig;
typedef interface IGraphConfigCallback IGraphConfigCallback;
typedef interface IFilterChain IFilterChain;
typedef interface IVMRImagePresenter IVMRImagePresenter;
typedef interface IVMRSurfaceAllocator IVMRSurfaceAllocator;
typedef interface IVMRSurfaceAllocatorNotify IVMRSurfaceAllocatorNotify;
typedef interface IVMRWindowlessControl IVMRWindowlessControl;
typedef interface IVMRMixerControl IVMRMixerControl;
typedef interface IVMRMonitorConfig IVMRMonitorConfig;
typedef interface IVMRFilterConfig IVMRFilterConfig;
typedef interface IVMRAspectRatioControl IVMRAspectRatioControl;
typedef interface IVMRDeinterlaceControl IVMRDeinterlaceControl;
typedef interface IVMRMixerBitmap IVMRMixerBitmap;
typedef interface IVMRImageCompositor IVMRImageCompositor;
typedef interface IVMRVideoStreamControl IVMRVideoStreamControl;
typedef interface IVMRSurface IVMRSurface;
typedef interface IVMRImagePresenterConfig IVMRImagePresenterConfig;
typedef interface IVMRImagePresenterExclModeConfig IVMRImagePresenterExclModeConfig;
typedef interface IVPManager IVPManager;
typedef interface IDvdControl IDvdControl;
typedef interface IDvdInfo IDvdInfo;
typedef interface IDvdCmd IDvdCmd;
typedef interface IDvdState IDvdState;
typedef interface IDvdControl2 IDvdControl2;
typedef interface IDvdInfo2 IDvdInfo2;
typedef interface IDvdGraphBuilder IDvdGraphBuilder;
typedef interface IDDrawExclModeVideo IDDrawExclModeVideo;
typedef interface IDDrawExclModeVideoCallback IDDrawExclModeVideoCallback;
#include "unknwn.h"
#include "objidl.h"
#include "oaidl.h"
#include "ocidl.h"
extern "C"{
#include <winapifamily.h>
#pragma warning(push)
#pragma warning(disable:4201)
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_ICreateDevEnum;
    typedef struct ICreateDevEnumVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ICreateDevEnum * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ICreateDevEnum * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ICreateDevEnum * This);
        HRESULT ( STDMETHODCALLTYPE *CreateClassEnumerator )(
            ICreateDevEnum * This,
                       REFCLSID clsidDeviceClass,
            _Out_ IEnumMoniker **ppEnumMoniker,
                       DWORD dwFlags);
        END_INTERFACE
    } ICreateDevEnumVtbl;
    interface ICreateDevEnum
    {
        CONST_VTBL struct ICreateDevEnumVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CreateClassEnumerator(This,clsidDeviceClass,ppEnumMoniker,dwFlags) )
#endif
#pragma endregion
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef struct _AMMediaType
    {
    GUID majortype;
    GUID subtype;
    BOOL bFixedSizeSamples;
    BOOL bTemporalCompression;
    ULONG lSampleSize;
    GUID formattype;
    IUnknown *pUnk;
    ULONG cbFormat;
                    BYTE *pbFormat;
    } AM_MEDIA_TYPE;
typedef
enum _PinDirection
    {
        PINDIR_INPUT = 0,
        PINDIR_OUTPUT = ( PINDIR_INPUT + 1 )
    } PIN_DIRECTION;
typedef LONGLONG REFERENCE_TIME;
typedef double REFTIME;
typedef DWORD_PTR HSEMAPHORE;
typedef DWORD_PTR HEVENT;
typedef struct _AllocatorProperties
    {
    long cBuffers;
    long cbBuffer;
    long cbAlign;
    long cbPrefix;
    } ALLOCATOR_PROPERTIES;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0001_v0_0_s_ifspec;
typedef struct _PinInfo
    {
    IBaseFilter *pFilter;
    PIN_DIRECTION dir;
    WCHAR achName[ 128 ];
    } PIN_INFO;
EXTERN_C const IID IID_IPin;
    typedef struct IPinVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IPin * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IPin * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IPin * This);
        HRESULT ( STDMETHODCALLTYPE *Connect )(
            IPin * This,
                       IPin *pReceivePin,
            _In_opt_ const AM_MEDIA_TYPE *pmt);
        HRESULT ( STDMETHODCALLTYPE *ReceiveConnection )(
            IPin * This,
                       IPin *pConnector,
                       const AM_MEDIA_TYPE *pmt);
        HRESULT ( STDMETHODCALLTYPE *Disconnect )(
            IPin * This);
        HRESULT ( STDMETHODCALLTYPE *ConnectedTo )(
            IPin * This,
            _Out_ IPin **pPin);
        HRESULT ( STDMETHODCALLTYPE *ConnectionMediaType )(
            IPin * This,
            _Out_ AM_MEDIA_TYPE *pmt);
        HRESULT ( STDMETHODCALLTYPE *QueryPinInfo )(
            IPin * This,
            _Out_ PIN_INFO *pInfo);
        HRESULT ( STDMETHODCALLTYPE *QueryDirection )(
            IPin * This,
            _Out_ PIN_DIRECTION *pPinDir);
        HRESULT ( STDMETHODCALLTYPE *QueryId )(
            IPin * This,
            _Out_ LPWSTR *Id);
        HRESULT ( STDMETHODCALLTYPE *QueryAccept )(
            IPin * This,
                       const AM_MEDIA_TYPE *pmt);
        HRESULT ( STDMETHODCALLTYPE *EnumMediaTypes )(
            IPin * This,
            _Out_ IEnumMediaTypes **ppEnum);
        HRESULT ( STDMETHODCALLTYPE *QueryInternalConnections )(
            IPin * This,
            _Out_writes_to_opt_(*nPin, *nPin) IPin **apPin,
                            ULONG *nPin);
        HRESULT ( STDMETHODCALLTYPE *EndOfStream )(
            IPin * This);
        HRESULT ( STDMETHODCALLTYPE *BeginFlush )(
            IPin * This);
        HRESULT ( STDMETHODCALLTYPE *EndFlush )(
            IPin * This);
        HRESULT ( STDMETHODCALLTYPE *NewSegment )(
            IPin * This,
                       REFERENCE_TIME tStart,
                       REFERENCE_TIME tStop,
                       double dRate);
        END_INTERFACE
    } IPinVtbl;
    interface IPin
    {
        CONST_VTBL struct IPinVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Connect(This,pReceivePin,pmt) )
    ( (This)->lpVtbl -> ReceiveConnection(This,pConnector,pmt) )
    ( (This)->lpVtbl -> Disconnect(This) )
    ( (This)->lpVtbl -> ConnectedTo(This,pPin) )
    ( (This)->lpVtbl -> ConnectionMediaType(This,pmt) )
    ( (This)->lpVtbl -> QueryPinInfo(This,pInfo) )
    ( (This)->lpVtbl -> QueryDirection(This,pPinDir) )
    ( (This)->lpVtbl -> QueryId(This,Id) )
    ( (This)->lpVtbl -> QueryAccept(This,pmt) )
    ( (This)->lpVtbl -> EnumMediaTypes(This,ppEnum) )
    ( (This)->lpVtbl -> QueryInternalConnections(This,apPin,nPin) )
    ( (This)->lpVtbl -> EndOfStream(This) )
    ( (This)->lpVtbl -> BeginFlush(This) )
    ( (This)->lpVtbl -> EndFlush(This) )
    ( (This)->lpVtbl -> NewSegment(This,tStart,tStop,dRate) )
typedef IPin *PPIN;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0002_v0_0_s_ifspec;
EXTERN_C const IID IID_IEnumPins;
    typedef struct IEnumPinsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IEnumPins * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IEnumPins * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IEnumPins * This);
        HRESULT ( STDMETHODCALLTYPE *Next )(
            IEnumPins * This,
                       ULONG cPins,
            _Out_writes_to_(cPins, *pcFetched) IPin **ppPins,
            _Out_opt_ ULONG *pcFetched);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            IEnumPins * This,
                       ULONG cPins);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            IEnumPins * This);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            IEnumPins * This,
            _Out_ IEnumPins **ppEnum);
        END_INTERFACE
    } IEnumPinsVtbl;
    interface IEnumPins
    {
        CONST_VTBL struct IEnumPinsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Next(This,cPins,ppPins,pcFetched) )
    ( (This)->lpVtbl -> Skip(This,cPins) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Clone(This,ppEnum) )
typedef IEnumPins *PENUMPINS;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0003_v0_0_s_ifspec;
EXTERN_C const IID IID_IEnumMediaTypes;
    typedef struct IEnumMediaTypesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IEnumMediaTypes * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IEnumMediaTypes * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IEnumMediaTypes * This);
        HRESULT ( STDMETHODCALLTYPE *Next )(
            IEnumMediaTypes * This,
                       ULONG cMediaTypes,
            _Out_writes_to_(cMediaTypes, *pcFetched) AM_MEDIA_TYPE **ppMediaTypes,
            _Out_opt_ ULONG *pcFetched);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            IEnumMediaTypes * This,
                       ULONG cMediaTypes);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            IEnumMediaTypes * This);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            IEnumMediaTypes * This,
            _Out_ IEnumMediaTypes **ppEnum);
        END_INTERFACE
    } IEnumMediaTypesVtbl;
    interface IEnumMediaTypes
    {
        CONST_VTBL struct IEnumMediaTypesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Next(This,cMediaTypes,ppMediaTypes,pcFetched) )
    ( (This)->lpVtbl -> Skip(This,cMediaTypes) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Clone(This,ppEnum) )
typedef IEnumMediaTypes *PENUMMEDIATYPES;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0004_v0_0_s_ifspec;
EXTERN_C const IID IID_IFilterGraph;
    typedef struct IFilterGraphVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IFilterGraph * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IFilterGraph * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IFilterGraph * This);
        HRESULT ( STDMETHODCALLTYPE *AddFilter )(
            IFilterGraph * This,
                       IBaseFilter *pFilter,
                               LPCWSTR pName);
        HRESULT ( STDMETHODCALLTYPE *RemoveFilter )(
            IFilterGraph * This,
                       IBaseFilter *pFilter);
        HRESULT ( STDMETHODCALLTYPE *EnumFilters )(
            IFilterGraph * This,
            _Out_ IEnumFilters **ppEnum);
        HRESULT ( STDMETHODCALLTYPE *FindFilterByName )(
            IFilterGraph * This,
                               LPCWSTR pName,
            _Out_ IBaseFilter **ppFilter);
        HRESULT ( STDMETHODCALLTYPE *ConnectDirect )(
            IFilterGraph * This,
                       IPin *ppinOut,
                       IPin *ppinIn,
            _In_opt_ const AM_MEDIA_TYPE *pmt);
        HRESULT ( STDMETHODCALLTYPE *Reconnect )(
            IFilterGraph * This,
                       IPin *ppin);
        HRESULT ( STDMETHODCALLTYPE *Disconnect )(
            IFilterGraph * This,
                       IPin *ppin);
        HRESULT ( STDMETHODCALLTYPE *SetDefaultSyncSource )(
            IFilterGraph * This);
        END_INTERFACE
    } IFilterGraphVtbl;
    interface IFilterGraph
    {
        CONST_VTBL struct IFilterGraphVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AddFilter(This,pFilter,pName) )
    ( (This)->lpVtbl -> RemoveFilter(This,pFilter) )
    ( (This)->lpVtbl -> EnumFilters(This,ppEnum) )
    ( (This)->lpVtbl -> FindFilterByName(This,pName,ppFilter) )
    ( (This)->lpVtbl -> ConnectDirect(This,ppinOut,ppinIn,pmt) )
    ( (This)->lpVtbl -> Reconnect(This,ppin) )
    ( (This)->lpVtbl -> Disconnect(This,ppin) )
    ( (This)->lpVtbl -> SetDefaultSyncSource(This) )
typedef IFilterGraph *PFILTERGRAPH;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0005_v0_0_s_ifspec;
EXTERN_C const IID IID_IEnumFilters;
    typedef struct IEnumFiltersVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IEnumFilters * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IEnumFilters * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IEnumFilters * This);
        HRESULT ( STDMETHODCALLTYPE *Next )(
            IEnumFilters * This,
                       ULONG cFilters,
            _Out_writes_to_(cFilters, *pcFetched) IBaseFilter **ppFilter,
            _Out_opt_ ULONG *pcFetched);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            IEnumFilters * This,
                       ULONG cFilters);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            IEnumFilters * This);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            IEnumFilters * This,
            _Out_ IEnumFilters **ppEnum);
        END_INTERFACE
    } IEnumFiltersVtbl;
    interface IEnumFilters
    {
        CONST_VTBL struct IEnumFiltersVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Next(This,cFilters,ppFilter,pcFetched) )
    ( (This)->lpVtbl -> Skip(This,cFilters) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Clone(This,ppEnum) )
typedef IEnumFilters *PENUMFILTERS;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0006_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0006_v0_0_s_ifspec;
typedef
enum _FilterState
    {
        State_Stopped = 0,
        State_Paused = ( State_Stopped + 1 ) ,
        State_Running = ( State_Paused + 1 )
    } FILTER_STATE;
EXTERN_C const IID IID_IMediaFilter;
    typedef struct IMediaFilterVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMediaFilter * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMediaFilter * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMediaFilter * This);
        HRESULT ( STDMETHODCALLTYPE *GetClassID )(
            IMediaFilter * This,
                        CLSID *pClassID);
        HRESULT ( STDMETHODCALLTYPE *Stop )(
            IMediaFilter * This);
        HRESULT ( STDMETHODCALLTYPE *Pause )(
            IMediaFilter * This);
        HRESULT ( STDMETHODCALLTYPE *Run )(
            IMediaFilter * This,
            REFERENCE_TIME tStart);
        HRESULT ( STDMETHODCALLTYPE *GetState )(
            IMediaFilter * This,
                       DWORD dwMilliSecsTimeout,
            _Out_ FILTER_STATE *State);
        HRESULT ( STDMETHODCALLTYPE *SetSyncSource )(
            IMediaFilter * This,
            _In_opt_ IReferenceClock *pClock);
        HRESULT ( STDMETHODCALLTYPE *GetSyncSource )(
            IMediaFilter * This,
            _Outptr_result_maybenull_ IReferenceClock **pClock);
        END_INTERFACE
    } IMediaFilterVtbl;
    interface IMediaFilter
    {
        CONST_VTBL struct IMediaFilterVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetClassID(This,pClassID) )
    ( (This)->lpVtbl -> Stop(This) )
    ( (This)->lpVtbl -> Pause(This) )
    ( (This)->lpVtbl -> Run(This,tStart) )
    ( (This)->lpVtbl -> GetState(This,dwMilliSecsTimeout,State) )
    ( (This)->lpVtbl -> SetSyncSource(This,pClock) )
    ( (This)->lpVtbl -> GetSyncSource(This,pClock) )
typedef IMediaFilter *PMEDIAFILTER;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0007_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0007_v0_0_s_ifspec;
typedef struct _FilterInfo
    {
    WCHAR achName[ 128 ];
    IFilterGraph *pGraph;
    } FILTER_INFO;
EXTERN_C const IID IID_IBaseFilter;
    typedef struct IBaseFilterVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IBaseFilter * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IBaseFilter * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IBaseFilter * This);
        HRESULT ( STDMETHODCALLTYPE *GetClassID )(
            IBaseFilter * This,
                        CLSID *pClassID);
        HRESULT ( STDMETHODCALLTYPE *Stop )(
            IBaseFilter * This);
        HRESULT ( STDMETHODCALLTYPE *Pause )(
            IBaseFilter * This);
        HRESULT ( STDMETHODCALLTYPE *Run )(
            IBaseFilter * This,
            REFERENCE_TIME tStart);
        HRESULT ( STDMETHODCALLTYPE *GetState )(
            IBaseFilter * This,
                       DWORD dwMilliSecsTimeout,
            _Out_ FILTER_STATE *State);
        HRESULT ( STDMETHODCALLTYPE *SetSyncSource )(
            IBaseFilter * This,
            _In_opt_ IReferenceClock *pClock);
        HRESULT ( STDMETHODCALLTYPE *GetSyncSource )(
            IBaseFilter * This,
            _Outptr_result_maybenull_ IReferenceClock **pClock);
        HRESULT ( STDMETHODCALLTYPE *EnumPins )(
            IBaseFilter * This,
            _Out_ IEnumPins **ppEnum);
        HRESULT ( STDMETHODCALLTYPE *FindPin )(
            IBaseFilter * This,
                               LPCWSTR Id,
            _Out_ IPin **ppPin);
        HRESULT ( STDMETHODCALLTYPE *QueryFilterInfo )(
            IBaseFilter * This,
            _Out_ FILTER_INFO *pInfo);
        HRESULT ( STDMETHODCALLTYPE *JoinFilterGraph )(
            IBaseFilter * This,
            _In_opt_ IFilterGraph *pGraph,
            _In_opt_ LPCWSTR pName);
        HRESULT ( STDMETHODCALLTYPE *QueryVendorInfo )(
            IBaseFilter * This,
            _Out_ LPWSTR *pVendorInfo);
        END_INTERFACE
    } IBaseFilterVtbl;
    interface IBaseFilter
    {
        CONST_VTBL struct IBaseFilterVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetClassID(This,pClassID) )
    ( (This)->lpVtbl -> Stop(This) )
    ( (This)->lpVtbl -> Pause(This) )
    ( (This)->lpVtbl -> Run(This,tStart) )
    ( (This)->lpVtbl -> GetState(This,dwMilliSecsTimeout,State) )
    ( (This)->lpVtbl -> SetSyncSource(This,pClock) )
    ( (This)->lpVtbl -> GetSyncSource(This,pClock) )
    ( (This)->lpVtbl -> EnumPins(This,ppEnum) )
    ( (This)->lpVtbl -> FindPin(This,Id,ppPin) )
    ( (This)->lpVtbl -> QueryFilterInfo(This,pInfo) )
    ( (This)->lpVtbl -> JoinFilterGraph(This,pGraph,pName) )
    ( (This)->lpVtbl -> QueryVendorInfo(This,pVendorInfo) )
typedef IBaseFilter *PFILTER;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0008_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0008_v0_0_s_ifspec;
EXTERN_C const IID IID_IReferenceClock;
    typedef struct IReferenceClockVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IReferenceClock * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IReferenceClock * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IReferenceClock * This);
        HRESULT ( STDMETHODCALLTYPE *GetTime )(
            IReferenceClock * This,
            _Out_ REFERENCE_TIME *pTime);
        HRESULT ( STDMETHODCALLTYPE *AdviseTime )(
            IReferenceClock * This,
                       REFERENCE_TIME baseTime,
                       REFERENCE_TIME streamTime,
                       HEVENT hEvent,
            _Out_ DWORD_PTR *pdwAdviseCookie);
        HRESULT ( STDMETHODCALLTYPE *AdvisePeriodic )(
            IReferenceClock * This,
                       REFERENCE_TIME startTime,
                       REFERENCE_TIME periodTime,
                       HSEMAPHORE hSemaphore,
            _Out_ DWORD_PTR *pdwAdviseCookie);
        HRESULT ( STDMETHODCALLTYPE *Unadvise )(
            IReferenceClock * This,
                       DWORD_PTR dwAdviseCookie);
        END_INTERFACE
    } IReferenceClockVtbl;
    interface IReferenceClock
    {
        CONST_VTBL struct IReferenceClockVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTime(This,pTime) )
    ( (This)->lpVtbl -> AdviseTime(This,baseTime,streamTime,hEvent,pdwAdviseCookie) )
    ( (This)->lpVtbl -> AdvisePeriodic(This,startTime,periodTime,hSemaphore,pdwAdviseCookie) )
    ( (This)->lpVtbl -> Unadvise(This,dwAdviseCookie) )
typedef IReferenceClock *PREFERENCECLOCK;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0009_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0009_v0_0_s_ifspec;
EXTERN_C const IID IID_IReferenceClockTimerControl;
    typedef struct IReferenceClockTimerControlVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IReferenceClockTimerControl * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IReferenceClockTimerControl * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IReferenceClockTimerControl * This);
        HRESULT ( STDMETHODCALLTYPE *SetDefaultTimerResolution )(
            IReferenceClockTimerControl * This,
            REFERENCE_TIME timerResolution);
        HRESULT ( STDMETHODCALLTYPE *GetDefaultTimerResolution )(
            IReferenceClockTimerControl * This,
            _Out_ REFERENCE_TIME *pTimerResolution);
        END_INTERFACE
    } IReferenceClockTimerControlVtbl;
    interface IReferenceClockTimerControl
    {
        CONST_VTBL struct IReferenceClockTimerControlVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetDefaultTimerResolution(This,timerResolution) )
    ( (This)->lpVtbl -> GetDefaultTimerResolution(This,pTimerResolution) )
EXTERN_C const IID IID_IReferenceClock2;
    typedef struct IReferenceClock2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IReferenceClock2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IReferenceClock2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IReferenceClock2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTime )(
            IReferenceClock2 * This,
            _Out_ REFERENCE_TIME *pTime);
        HRESULT ( STDMETHODCALLTYPE *AdviseTime )(
            IReferenceClock2 * This,
                       REFERENCE_TIME baseTime,
                       REFERENCE_TIME streamTime,
                       HEVENT hEvent,
            _Out_ DWORD_PTR *pdwAdviseCookie);
        HRESULT ( STDMETHODCALLTYPE *AdvisePeriodic )(
            IReferenceClock2 * This,
                       REFERENCE_TIME startTime,
                       REFERENCE_TIME periodTime,
                       HSEMAPHORE hSemaphore,
            _Out_ DWORD_PTR *pdwAdviseCookie);
        HRESULT ( STDMETHODCALLTYPE *Unadvise )(
            IReferenceClock2 * This,
                       DWORD_PTR dwAdviseCookie);
        END_INTERFACE
    } IReferenceClock2Vtbl;
    interface IReferenceClock2
    {
        CONST_VTBL struct IReferenceClock2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTime(This,pTime) )
    ( (This)->lpVtbl -> AdviseTime(This,baseTime,streamTime,hEvent,pdwAdviseCookie) )
    ( (This)->lpVtbl -> AdvisePeriodic(This,startTime,periodTime,hSemaphore,pdwAdviseCookie) )
    ( (This)->lpVtbl -> Unadvise(This,dwAdviseCookie) )
typedef IReferenceClock2 *PREFERENCECLOCK2;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0011_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0011_v0_0_s_ifspec;
EXTERN_C const IID IID_IMediaSample;
    typedef struct IMediaSampleVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMediaSample * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMediaSample * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMediaSample * This);
        HRESULT ( STDMETHODCALLTYPE *GetPointer )(
            IMediaSample * This,
            _Outptr_result_buffer_to_(_Inexpressible_(this->GetSize()), _Inexpressible_(this->GetActualDataLength())) BYTE **ppBuffer);
        long ( STDMETHODCALLTYPE *GetSize )(
            IMediaSample * This);
        HRESULT ( STDMETHODCALLTYPE *GetTime )(
            IMediaSample * This,
            _Out_ REFERENCE_TIME *pTimeStart,
            _Out_ REFERENCE_TIME *pTimeEnd);
        HRESULT ( STDMETHODCALLTYPE *SetTime )(
            IMediaSample * This,
            _In_opt_ REFERENCE_TIME *pTimeStart,
            _In_opt_ REFERENCE_TIME *pTimeEnd);
        HRESULT ( STDMETHODCALLTYPE *IsSyncPoint )(
            IMediaSample * This);
        HRESULT ( STDMETHODCALLTYPE *SetSyncPoint )(
            IMediaSample * This,
            BOOL bIsSyncPoint);
        HRESULT ( STDMETHODCALLTYPE *IsPreroll )(
            IMediaSample * This);
        HRESULT ( STDMETHODCALLTYPE *SetPreroll )(
            IMediaSample * This,
            BOOL bIsPreroll);
        long ( STDMETHODCALLTYPE *GetActualDataLength )(
            IMediaSample * This);
        HRESULT ( STDMETHODCALLTYPE *SetActualDataLength )(
            IMediaSample * This,
            long __MIDL__IMediaSample0000);
        HRESULT ( STDMETHODCALLTYPE *GetMediaType )(
            IMediaSample * This,
            _Out_ AM_MEDIA_TYPE **ppMediaType);
        HRESULT ( STDMETHODCALLTYPE *SetMediaType )(
            IMediaSample * This,
            _In_ AM_MEDIA_TYPE *pMediaType);
        HRESULT ( STDMETHODCALLTYPE *IsDiscontinuity )(
            IMediaSample * This);
        HRESULT ( STDMETHODCALLTYPE *SetDiscontinuity )(
            IMediaSample * This,
            BOOL bDiscontinuity);
        HRESULT ( STDMETHODCALLTYPE *GetMediaTime )(
            IMediaSample * This,
            _Out_ LONGLONG *pTimeStart,
            _Out_ LONGLONG *pTimeEnd);
        HRESULT ( STDMETHODCALLTYPE *SetMediaTime )(
            IMediaSample * This,
            _In_opt_ LONGLONG *pTimeStart,
            _In_opt_ LONGLONG *pTimeEnd);
        END_INTERFACE
    } IMediaSampleVtbl;
    interface IMediaSample
    {
        CONST_VTBL struct IMediaSampleVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetPointer(This,ppBuffer) )
    ( (This)->lpVtbl -> GetSize(This) )
    ( (This)->lpVtbl -> GetTime(This,pTimeStart,pTimeEnd) )
    ( (This)->lpVtbl -> SetTime(This,pTimeStart,pTimeEnd) )
    ( (This)->lpVtbl -> IsSyncPoint(This) )
    ( (This)->lpVtbl -> SetSyncPoint(This,bIsSyncPoint) )
    ( (This)->lpVtbl -> IsPreroll(This) )
    ( (This)->lpVtbl -> SetPreroll(This,bIsPreroll) )
    ( (This)->lpVtbl -> GetActualDataLength(This) )
    ( (This)->lpVtbl -> SetActualDataLength(This,__MIDL__IMediaSample0000) )
    ( (This)->lpVtbl -> GetMediaType(This,ppMediaType) )
    ( (This)->lpVtbl -> SetMediaType(This,pMediaType) )
    ( (This)->lpVtbl -> IsDiscontinuity(This) )
    ( (This)->lpVtbl -> SetDiscontinuity(This,bDiscontinuity) )
    ( (This)->lpVtbl -> GetMediaTime(This,pTimeStart,pTimeEnd) )
    ( (This)->lpVtbl -> SetMediaTime(This,pTimeStart,pTimeEnd) )
typedef IMediaSample *PMEDIASAMPLE;
enum tagAM_SAMPLE_PROPERTY_FLAGS
    {
        AM_SAMPLE_SPLICEPOINT = 0x1,
        AM_SAMPLE_PREROLL = 0x2,
        AM_SAMPLE_DATADISCONTINUITY = 0x4,
        AM_SAMPLE_TYPECHANGED = 0x8,
        AM_SAMPLE_TIMEVALID = 0x10,
        AM_SAMPLE_TIMEDISCONTINUITY = 0x40,
        AM_SAMPLE_FLUSH_ON_PAUSE = 0x80,
        AM_SAMPLE_STOPVALID = 0x100,
        AM_SAMPLE_ENDOFSTREAM = 0x200,
        AM_STREAM_MEDIA = 0,
        AM_STREAM_CONTROL = 1
    } ;
typedef struct tagAM_SAMPLE2_PROPERTIES
    {
    DWORD cbData;
    DWORD dwTypeSpecificFlags;
    DWORD dwSampleFlags;
    LONG lActual;
    REFERENCE_TIME tStart;
    REFERENCE_TIME tStop;
    DWORD dwStreamId;
    AM_MEDIA_TYPE *pMediaType;
    BYTE *pbBuffer;
    LONG cbBuffer;
    } AM_SAMPLE2_PROPERTIES;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0012_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0012_v0_0_s_ifspec;
EXTERN_C const IID IID_IMediaSample2;
    typedef struct IMediaSample2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMediaSample2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMediaSample2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMediaSample2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetPointer )(
            IMediaSample2 * This,
            _Outptr_result_buffer_to_(_Inexpressible_(this->GetSize()), _Inexpressible_(this->GetActualDataLength())) BYTE **ppBuffer);
        long ( STDMETHODCALLTYPE *GetSize )(
            IMediaSample2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTime )(
            IMediaSample2 * This,
            _Out_ REFERENCE_TIME *pTimeStart,
            _Out_ REFERENCE_TIME *pTimeEnd);
        HRESULT ( STDMETHODCALLTYPE *SetTime )(
            IMediaSample2 * This,
            _In_opt_ REFERENCE_TIME *pTimeStart,
            _In_opt_ REFERENCE_TIME *pTimeEnd);
        HRESULT ( STDMETHODCALLTYPE *IsSyncPoint )(
            IMediaSample2 * This);
        HRESULT ( STDMETHODCALLTYPE *SetSyncPoint )(
            IMediaSample2 * This,
            BOOL bIsSyncPoint);
        HRESULT ( STDMETHODCALLTYPE *IsPreroll )(
            IMediaSample2 * This);
        HRESULT ( STDMETHODCALLTYPE *SetPreroll )(
            IMediaSample2 * This,
            BOOL bIsPreroll);
        long ( STDMETHODCALLTYPE *GetActualDataLength )(
            IMediaSample2 * This);
        HRESULT ( STDMETHODCALLTYPE *SetActualDataLength )(
            IMediaSample2 * This,
            long __MIDL__IMediaSample0000);
        HRESULT ( STDMETHODCALLTYPE *GetMediaType )(
            IMediaSample2 * This,
            _Out_ AM_MEDIA_TYPE **ppMediaType);
        HRESULT ( STDMETHODCALLTYPE *SetMediaType )(
            IMediaSample2 * This,
            _In_ AM_MEDIA_TYPE *pMediaType);
        HRESULT ( STDMETHODCALLTYPE *IsDiscontinuity )(
            IMediaSample2 * This);
        HRESULT ( STDMETHODCALLTYPE *SetDiscontinuity )(
            IMediaSample2 * This,
            BOOL bDiscontinuity);
        HRESULT ( STDMETHODCALLTYPE *GetMediaTime )(
            IMediaSample2 * This,
            _Out_ LONGLONG *pTimeStart,
            _Out_ LONGLONG *pTimeEnd);
        HRESULT ( STDMETHODCALLTYPE *SetMediaTime )(
            IMediaSample2 * This,
            _In_opt_ LONGLONG *pTimeStart,
            _In_opt_ LONGLONG *pTimeEnd);
        HRESULT ( STDMETHODCALLTYPE *GetProperties )(
            IMediaSample2 * This,
                       DWORD cbProperties,
            _Out_writes_bytes_(cbProperties) BYTE *pbProperties);
        HRESULT ( STDMETHODCALLTYPE *SetProperties )(
            IMediaSample2 * This,
                       DWORD cbProperties,
            _In_reads_bytes_(cbProperties) const BYTE *pbProperties);
        END_INTERFACE
    } IMediaSample2Vtbl;
    interface IMediaSample2
    {
        CONST_VTBL struct IMediaSample2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetPointer(This,ppBuffer) )
    ( (This)->lpVtbl -> GetSize(This) )
    ( (This)->lpVtbl -> GetTime(This,pTimeStart,pTimeEnd) )
    ( (This)->lpVtbl -> SetTime(This,pTimeStart,pTimeEnd) )
    ( (This)->lpVtbl -> IsSyncPoint(This) )
    ( (This)->lpVtbl -> SetSyncPoint(This,bIsSyncPoint) )
    ( (This)->lpVtbl -> IsPreroll(This) )
    ( (This)->lpVtbl -> SetPreroll(This,bIsPreroll) )
    ( (This)->lpVtbl -> GetActualDataLength(This) )
    ( (This)->lpVtbl -> SetActualDataLength(This,__MIDL__IMediaSample0000) )
    ( (This)->lpVtbl -> GetMediaType(This,ppMediaType) )
    ( (This)->lpVtbl -> SetMediaType(This,pMediaType) )
    ( (This)->lpVtbl -> IsDiscontinuity(This) )
    ( (This)->lpVtbl -> SetDiscontinuity(This,bDiscontinuity) )
    ( (This)->lpVtbl -> GetMediaTime(This,pTimeStart,pTimeEnd) )
    ( (This)->lpVtbl -> SetMediaTime(This,pTimeStart,pTimeEnd) )
    ( (This)->lpVtbl -> GetProperties(This,cbProperties,pbProperties) )
    ( (This)->lpVtbl -> SetProperties(This,cbProperties,pbProperties) )
typedef IMediaSample2 *PMEDIASAMPLE2;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0013_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0013_v0_0_s_ifspec;
EXTERN_C const IID IID_IMediaSample2Config;
    typedef struct IMediaSample2ConfigVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMediaSample2Config * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMediaSample2Config * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMediaSample2Config * This);
        HRESULT ( STDMETHODCALLTYPE *GetSurface )(
            __RPC__in IMediaSample2Config * This,
                        __RPC__deref_out_opt IUnknown **ppDirect3DSurface9);
        END_INTERFACE
    } IMediaSample2ConfigVtbl;
    interface IMediaSample2Config
    {
        CONST_VTBL struct IMediaSample2ConfigVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetSurface(This,ppDirect3DSurface9) )
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0014_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0014_v0_0_s_ifspec;
EXTERN_C const IID IID_IMemAllocator;
    typedef struct IMemAllocatorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMemAllocator * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMemAllocator * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMemAllocator * This);
        HRESULT ( STDMETHODCALLTYPE *SetProperties )(
            IMemAllocator * This,
            _In_ ALLOCATOR_PROPERTIES *pRequest,
            _Out_ ALLOCATOR_PROPERTIES *pActual);
        HRESULT ( STDMETHODCALLTYPE *GetProperties )(
            IMemAllocator * This,
            _Out_ ALLOCATOR_PROPERTIES *pProps);
        HRESULT ( STDMETHODCALLTYPE *Commit )(
            IMemAllocator * This);
        HRESULT ( STDMETHODCALLTYPE *Decommit )(
            IMemAllocator * This);
        HRESULT ( STDMETHODCALLTYPE *GetBuffer )(
            IMemAllocator * This,
            _Out_ IMediaSample **ppBuffer,
            _In_opt_ REFERENCE_TIME *pStartTime,
            _In_opt_ REFERENCE_TIME *pEndTime,
                       DWORD dwFlags);
        HRESULT ( STDMETHODCALLTYPE *ReleaseBuffer )(
            IMemAllocator * This,
                       IMediaSample *pBuffer);
        END_INTERFACE
    } IMemAllocatorVtbl;
    interface IMemAllocator
    {
        CONST_VTBL struct IMemAllocatorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetProperties(This,pRequest,pActual) )
    ( (This)->lpVtbl -> GetProperties(This,pProps) )
    ( (This)->lpVtbl -> Commit(This) )
    ( (This)->lpVtbl -> Decommit(This) )
    ( (This)->lpVtbl -> GetBuffer(This,ppBuffer,pStartTime,pEndTime,dwFlags) )
    ( (This)->lpVtbl -> ReleaseBuffer(This,pBuffer) )
typedef IMemAllocator *PMEMALLOCATOR;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0015_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0015_v0_0_s_ifspec;
EXTERN_C const IID IID_IMemAllocatorCallbackTemp;
    typedef struct IMemAllocatorCallbackTempVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMemAllocatorCallbackTemp * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMemAllocatorCallbackTemp * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMemAllocatorCallbackTemp * This);
        HRESULT ( STDMETHODCALLTYPE *SetProperties )(
            IMemAllocatorCallbackTemp * This,
            _In_ ALLOCATOR_PROPERTIES *pRequest,
            _Out_ ALLOCATOR_PROPERTIES *pActual);
        HRESULT ( STDMETHODCALLTYPE *GetProperties )(
            IMemAllocatorCallbackTemp * This,
            _Out_ ALLOCATOR_PROPERTIES *pProps);
        HRESULT ( STDMETHODCALLTYPE *Commit )(
            IMemAllocatorCallbackTemp * This);
        HRESULT ( STDMETHODCALLTYPE *Decommit )(
            IMemAllocatorCallbackTemp * This);
        HRESULT ( STDMETHODCALLTYPE *GetBuffer )(
            IMemAllocatorCallbackTemp * This,
            _Out_ IMediaSample **ppBuffer,
            _In_opt_ REFERENCE_TIME *pStartTime,
            _In_opt_ REFERENCE_TIME *pEndTime,
                       DWORD dwFlags);
        HRESULT ( STDMETHODCALLTYPE *ReleaseBuffer )(
            IMemAllocatorCallbackTemp * This,
                       IMediaSample *pBuffer);
        HRESULT ( STDMETHODCALLTYPE *SetNotify )(
            IMemAllocatorCallbackTemp * This,
                       IMemAllocatorNotifyCallbackTemp *pNotify);
        HRESULT ( STDMETHODCALLTYPE *GetFreeCount )(
            IMemAllocatorCallbackTemp * This,
            _Out_ LONG *plBuffersFree);
        END_INTERFACE
    } IMemAllocatorCallbackTempVtbl;
    interface IMemAllocatorCallbackTemp
    {
        CONST_VTBL struct IMemAllocatorCallbackTempVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetProperties(This,pRequest,pActual) )
    ( (This)->lpVtbl -> GetProperties(This,pProps) )
    ( (This)->lpVtbl -> Commit(This) )
    ( (This)->lpVtbl -> Decommit(This) )
    ( (This)->lpVtbl -> GetBuffer(This,ppBuffer,pStartTime,pEndTime,dwFlags) )
    ( (This)->lpVtbl -> ReleaseBuffer(This,pBuffer) )
    ( (This)->lpVtbl -> SetNotify(This,pNotify) )
    ( (This)->lpVtbl -> GetFreeCount(This,plBuffersFree) )
EXTERN_C const IID IID_IMemAllocatorNotifyCallbackTemp;
    typedef struct IMemAllocatorNotifyCallbackTempVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMemAllocatorNotifyCallbackTemp * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMemAllocatorNotifyCallbackTemp * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMemAllocatorNotifyCallbackTemp * This);
        HRESULT ( STDMETHODCALLTYPE *NotifyRelease )(
            IMemAllocatorNotifyCallbackTemp * This);
        END_INTERFACE
    } IMemAllocatorNotifyCallbackTempVtbl;
    interface IMemAllocatorNotifyCallbackTemp
    {
        CONST_VTBL struct IMemAllocatorNotifyCallbackTempVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> NotifyRelease(This) )
EXTERN_C const IID IID_IMemInputPin;
    typedef struct IMemInputPinVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMemInputPin * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMemInputPin * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMemInputPin * This);
        HRESULT ( STDMETHODCALLTYPE *GetAllocator )(
            IMemInputPin * This,
            _Out_ IMemAllocator **ppAllocator);
        HRESULT ( STDMETHODCALLTYPE *NotifyAllocator )(
            IMemInputPin * This,
                       IMemAllocator *pAllocator,
                       BOOL bReadOnly);
        HRESULT ( STDMETHODCALLTYPE *GetAllocatorRequirements )(
            IMemInputPin * This,
            _Out_ ALLOCATOR_PROPERTIES *pProps);
        HRESULT ( STDMETHODCALLTYPE *Receive )(
            IMemInputPin * This,
                       IMediaSample *pSample);
        HRESULT ( STDMETHODCALLTYPE *ReceiveMultiple )(
            IMemInputPin * This,
            _In_reads_(nSamples) IMediaSample **pSamples,
                       long nSamples,
            _Out_ long *nSamplesProcessed);
        HRESULT ( STDMETHODCALLTYPE *ReceiveCanBlock )(
            IMemInputPin * This);
        END_INTERFACE
    } IMemInputPinVtbl;
    interface IMemInputPin
    {
        CONST_VTBL struct IMemInputPinVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetAllocator(This,ppAllocator) )
    ( (This)->lpVtbl -> NotifyAllocator(This,pAllocator,bReadOnly) )
    ( (This)->lpVtbl -> GetAllocatorRequirements(This,pProps) )
    ( (This)->lpVtbl -> Receive(This,pSample) )
    ( (This)->lpVtbl -> ReceiveMultiple(This,pSamples,nSamples,nSamplesProcessed) )
    ( (This)->lpVtbl -> ReceiveCanBlock(This) )
typedef IMemInputPin *PMEMINPUTPIN;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0018_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0018_v0_0_s_ifspec;
EXTERN_C const IID IID_IAMovieSetup;
    typedef struct IAMovieSetupVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IAMovieSetup * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IAMovieSetup * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IAMovieSetup * This);
        HRESULT ( STDMETHODCALLTYPE *Register )(
            IAMovieSetup * This);
        HRESULT ( STDMETHODCALLTYPE *Unregister )(
            IAMovieSetup * This);
        END_INTERFACE
    } IAMovieSetupVtbl;
    interface IAMovieSetup
    {
        CONST_VTBL struct IAMovieSetupVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Register(This) )
    ( (This)->lpVtbl -> Unregister(This) )
typedef IAMovieSetup *PAMOVIESETUP;
typedef
enum AM_SEEKING_SeekingFlags
    {
        AM_SEEKING_NoPositioning = 0,
        AM_SEEKING_AbsolutePositioning = 0x1,
        AM_SEEKING_RelativePositioning = 0x2,
        AM_SEEKING_IncrementalPositioning = 0x3,
        AM_SEEKING_PositioningBitsMask = 0x3,
        AM_SEEKING_SeekToKeyFrame = 0x4,
        AM_SEEKING_ReturnTime = 0x8,
        AM_SEEKING_Segment = 0x10,
        AM_SEEKING_NoFlush = 0x20
    } AM_SEEKING_SEEKING_FLAGS;
typedef
enum AM_SEEKING_SeekingCapabilities
    {
        AM_SEEKING_CanSeekAbsolute = 0x1,
        AM_SEEKING_CanSeekForwards = 0x2,
        AM_SEEKING_CanSeekBackwards = 0x4,
        AM_SEEKING_CanGetCurrentPos = 0x8,
        AM_SEEKING_CanGetStopPos = 0x10,
        AM_SEEKING_CanGetDuration = 0x20,
        AM_SEEKING_CanPlayBackwards = 0x40,
        AM_SEEKING_CanDoSegments = 0x80,
        AM_SEEKING_Source = 0x100
    } AM_SEEKING_SEEKING_CAPABILITIES;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0019_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0019_v0_0_s_ifspec;
EXTERN_C const IID IID_IMediaSeeking;
    typedef struct IMediaSeekingVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMediaSeeking * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMediaSeeking * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMediaSeeking * This);
        HRESULT ( STDMETHODCALLTYPE *GetCapabilities )(
            IMediaSeeking * This,
            _Out_ DWORD *pCapabilities);
        HRESULT ( STDMETHODCALLTYPE *CheckCapabilities )(
            IMediaSeeking * This,
                            DWORD *pCapabilities);
        HRESULT ( STDMETHODCALLTYPE *IsFormatSupported )(
            IMediaSeeking * This,
                       const GUID *pFormat);
        HRESULT ( STDMETHODCALLTYPE *QueryPreferredFormat )(
            IMediaSeeking * This,
            _Out_ GUID *pFormat);
        HRESULT ( STDMETHODCALLTYPE *GetTimeFormat )(
            IMediaSeeking * This,
            _Out_ GUID *pFormat);
        HRESULT ( STDMETHODCALLTYPE *IsUsingTimeFormat )(
            IMediaSeeking * This,
                       const GUID *pFormat);
        HRESULT ( STDMETHODCALLTYPE *SetTimeFormat )(
            IMediaSeeking * This,
                       const GUID *pFormat);
        HRESULT ( STDMETHODCALLTYPE *GetDuration )(
            IMediaSeeking * This,
            _Out_ LONGLONG *pDuration);
        HRESULT ( STDMETHODCALLTYPE *GetStopPosition )(
            IMediaSeeking * This,
            _Out_ LONGLONG *pStop);
        HRESULT ( STDMETHODCALLTYPE *GetCurrentPosition )(
            IMediaSeeking * This,
            _Out_ LONGLONG *pCurrent);
        HRESULT ( STDMETHODCALLTYPE *ConvertTimeFormat )(
            IMediaSeeking * This,
            _Out_ LONGLONG *pTarget,
            _In_opt_ const GUID *pTargetFormat,
                       LONGLONG Source,
            _In_opt_ const GUID *pSourceFormat);
        HRESULT ( STDMETHODCALLTYPE *SetPositions )(
            IMediaSeeking * This,
            _Inout_opt_ LONGLONG *pCurrent,
                       DWORD dwCurrentFlags,
            _Inout_opt_ LONGLONG *pStop,
                       DWORD dwStopFlags);
        HRESULT ( STDMETHODCALLTYPE *GetPositions )(
            IMediaSeeking * This,
            _Out_opt_ LONGLONG *pCurrent,
            _Out_opt_ LONGLONG *pStop);
        HRESULT ( STDMETHODCALLTYPE *GetAvailable )(
            IMediaSeeking * This,
            _Out_opt_ LONGLONG *pEarliest,
            _Out_opt_ LONGLONG *pLatest);
        HRESULT ( STDMETHODCALLTYPE *SetRate )(
            IMediaSeeking * This,
                       double dRate);
        HRESULT ( STDMETHODCALLTYPE *GetRate )(
            IMediaSeeking * This,
            _Out_ double *pdRate);
        HRESULT ( STDMETHODCALLTYPE *GetPreroll )(
            IMediaSeeking * This,
            _Out_ LONGLONG *pllPreroll);
        END_INTERFACE
    } IMediaSeekingVtbl;
    interface IMediaSeeking
    {
        CONST_VTBL struct IMediaSeekingVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetCapabilities(This,pCapabilities) )
    ( (This)->lpVtbl -> CheckCapabilities(This,pCapabilities) )
    ( (This)->lpVtbl -> IsFormatSupported(This,pFormat) )
    ( (This)->lpVtbl -> QueryPreferredFormat(This,pFormat) )
    ( (This)->lpVtbl -> GetTimeFormat(This,pFormat) )
    ( (This)->lpVtbl -> IsUsingTimeFormat(This,pFormat) )
    ( (This)->lpVtbl -> SetTimeFormat(This,pFormat) )
    ( (This)->lpVtbl -> GetDuration(This,pDuration) )
    ( (This)->lpVtbl -> GetStopPosition(This,pStop) )
    ( (This)->lpVtbl -> GetCurrentPosition(This,pCurrent) )
    ( (This)->lpVtbl -> ConvertTimeFormat(This,pTarget,pTargetFormat,Source,pSourceFormat) )
    ( (This)->lpVtbl -> SetPositions(This,pCurrent,dwCurrentFlags,pStop,dwStopFlags) )
    ( (This)->lpVtbl -> GetPositions(This,pCurrent,pStop) )
    ( (This)->lpVtbl -> GetAvailable(This,pEarliest,pLatest) )
    ( (This)->lpVtbl -> SetRate(This,dRate) )
    ( (This)->lpVtbl -> GetRate(This,pdRate) )
    ( (This)->lpVtbl -> GetPreroll(This,pllPreroll) )
typedef IMediaSeeking *PMEDIASEEKING;
enum tagAM_MEDIAEVENT_FLAGS
{
    AM_MEDIAEVENT_NONOTIFY = 0x01
};
#endif
#pragma endregion
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include <winapifamily.h>
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
struct CodecAPIEventData
    {
    GUID guid;
    DWORD dataLength;
    DWORD reserved[ 3 ];
    } ;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0020_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0020_v0_0_s_ifspec;
EXTERN_C const IID IID_ICodecAPI;
    typedef struct ICodecAPIVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ICodecAPI * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ICodecAPI * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ICodecAPI * This);
        HRESULT ( STDMETHODCALLTYPE *IsSupported )(
            ICodecAPI * This,
                       const GUID *Api);
        HRESULT ( STDMETHODCALLTYPE *IsModifiable )(
            ICodecAPI * This,
                       const GUID *Api);
        HRESULT ( STDMETHODCALLTYPE *GetParameterRange )(
            ICodecAPI * This,
                       const GUID *Api,
            _Out_ VARIANT *ValueMin,
            _Out_ VARIANT *ValueMax,
            _Out_ VARIANT *SteppingDelta);
        HRESULT ( STDMETHODCALLTYPE *GetParameterValues )(
            ICodecAPI * This,
                       const GUID *Api,
            _Outptr_result_buffer_all_(*ValuesCount) VARIANT **Values,
            _Out_ ULONG *ValuesCount);
        HRESULT ( STDMETHODCALLTYPE *GetDefaultValue )(
            ICodecAPI * This,
                       const GUID *Api,
            _Out_ VARIANT *Value);
        HRESULT ( STDMETHODCALLTYPE *GetValue )(
            ICodecAPI * This,
                       const GUID *Api,
            _Out_ VARIANT *Value);
        HRESULT ( STDMETHODCALLTYPE *SetValue )(
            ICodecAPI * This,
                       const GUID *Api,
            _In_ VARIANT *Value);
        HRESULT ( STDMETHODCALLTYPE *RegisterForEvent )(
            ICodecAPI * This,
                       const GUID *Api,
                       LONG_PTR userData);
        HRESULT ( STDMETHODCALLTYPE *UnregisterForEvent )(
            ICodecAPI * This,
                       const GUID *Api);
        HRESULT ( STDMETHODCALLTYPE *SetAllDefaults )(
            ICodecAPI * This);
        HRESULT ( STDMETHODCALLTYPE *SetValueWithNotify )(
            ICodecAPI * This,
                       const GUID *Api,
                       VARIANT *Value,
            _Outptr_result_buffer_all_(*ChangedParamCount) GUID **ChangedParam,
            _Out_ ULONG *ChangedParamCount);
        HRESULT ( STDMETHODCALLTYPE *SetAllDefaultsWithNotify )(
            ICodecAPI * This,
            _Outptr_result_buffer_all_(*ChangedParamCount) GUID **ChangedParam,
            _Out_ ULONG *ChangedParamCount);
        HRESULT ( STDMETHODCALLTYPE *GetAllSettings )(
            ICodecAPI * This,
                       IStream *__MIDL__ICodecAPI0000);
        HRESULT ( STDMETHODCALLTYPE *SetAllSettings )(
            ICodecAPI * This,
                       IStream *__MIDL__ICodecAPI0001);
        HRESULT ( STDMETHODCALLTYPE *SetAllSettingsWithNotify )(
            ICodecAPI * This,
            IStream *__MIDL__ICodecAPI0002,
            _Outptr_result_buffer_all_(*ChangedParamCount) GUID **ChangedParam,
            _Out_ ULONG *ChangedParamCount);
        END_INTERFACE
    } ICodecAPIVtbl;
    interface ICodecAPI
    {
        CONST_VTBL struct ICodecAPIVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> IsSupported(This,Api) )
    ( (This)->lpVtbl -> IsModifiable(This,Api) )
    ( (This)->lpVtbl -> GetParameterRange(This,Api,ValueMin,ValueMax,SteppingDelta) )
    ( (This)->lpVtbl -> GetParameterValues(This,Api,Values,ValuesCount) )
    ( (This)->lpVtbl -> GetDefaultValue(This,Api,Value) )
    ( (This)->lpVtbl -> GetValue(This,Api,Value) )
    ( (This)->lpVtbl -> SetValue(This,Api,Value) )
    ( (This)->lpVtbl -> RegisterForEvent(This,Api,userData) )
    ( (This)->lpVtbl -> UnregisterForEvent(This,Api) )
    ( (This)->lpVtbl -> SetAllDefaults(This) )
    ( (This)->lpVtbl -> SetValueWithNotify(This,Api,Value,ChangedParam,ChangedParamCount) )
    ( (This)->lpVtbl -> SetAllDefaultsWithNotify(This,ChangedParam,ChangedParamCount) )
    ( (This)->lpVtbl -> GetAllSettings(This,__MIDL__ICodecAPI0000) )
    ( (This)->lpVtbl -> SetAllSettings(This,__MIDL__ICodecAPI0001) )
    ( (This)->lpVtbl -> SetAllSettingsWithNotify(This,__MIDL__ICodecAPI0002,ChangedParam,ChangedParamCount) )
#endif
#pragma endregion
typedef struct REGFILTER
    {
    CLSID Clsid;
    LPWSTR Name;
    } REGFILTER;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0021_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0021_v0_0_s_ifspec;
EXTERN_C const IID IID_IEnumRegFilters;
    typedef struct IEnumRegFiltersVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IEnumRegFilters * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IEnumRegFilters * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IEnumRegFilters * This);
        HRESULT ( STDMETHODCALLTYPE *Next )(
            IEnumRegFilters * This,
                       ULONG cFilters,
            _Out_writes_to_(cFilters, *pcFetched) REGFILTER **apRegFilter,
            _Inout_opt_ ULONG *pcFetched);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            IEnumRegFilters * This,
                       ULONG cFilters);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            IEnumRegFilters * This);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            IEnumRegFilters * This,
            _Out_ IEnumRegFilters **ppEnum);
        END_INTERFACE
    } IEnumRegFiltersVtbl;
    interface IEnumRegFilters
    {
        CONST_VTBL struct IEnumRegFiltersVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Next(This,cFilters,apRegFilter,pcFetched) )
    ( (This)->lpVtbl -> Skip(This,cFilters) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Clone(This,ppEnum) )
typedef IEnumRegFilters *PENUMREGFILTERS;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0022_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0022_v0_0_s_ifspec;
enum __MIDL_IFilterMapper_0001
    {
        MERIT_PREFERRED = 0x800000,
        MERIT_NORMAL = 0x600000,
        MERIT_UNLIKELY = 0x400000,
        MERIT_DO_NOT_USE = 0x200000,
        MERIT_SW_COMPRESSOR = 0x100000,
        MERIT_HW_COMPRESSOR = 0x100050
    } ;
EXTERN_C const IID IID_IFilterMapper;
    typedef struct IFilterMapperVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IFilterMapper * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IFilterMapper * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IFilterMapper * This);
        HRESULT ( STDMETHODCALLTYPE *RegisterFilter )(
            IFilterMapper * This,
                       CLSID clsid,
                       LPCWSTR Name,
                       DWORD dwMerit);
        HRESULT ( STDMETHODCALLTYPE *RegisterFilterInstance )(
            IFilterMapper * This,
                       CLSID clsid,
                       LPCWSTR Name,
            _Out_ CLSID *MRId);
        HRESULT ( STDMETHODCALLTYPE *RegisterPin )(
            IFilterMapper * This,
                       CLSID Filter,
                       LPCWSTR Name,
                       BOOL bRendered,
                       BOOL bOutput,
                       BOOL bZero,
                       BOOL bMany,
                       CLSID ConnectsToFilter,
                       LPCWSTR ConnectsToPin);
        HRESULT ( STDMETHODCALLTYPE *RegisterPinType )(
            IFilterMapper * This,
                       CLSID clsFilter,
                       LPCWSTR strName,
                       CLSID clsMajorType,
                       CLSID clsSubType);
        HRESULT ( STDMETHODCALLTYPE *UnregisterFilter )(
            IFilterMapper * This,
                       CLSID Filter);
        HRESULT ( STDMETHODCALLTYPE *UnregisterFilterInstance )(
            IFilterMapper * This,
                       CLSID MRId);
        HRESULT ( STDMETHODCALLTYPE *UnregisterPin )(
            IFilterMapper * This,
                       CLSID Filter,
                       LPCWSTR Name);
        HRESULT ( STDMETHODCALLTYPE *EnumMatchingFilters )(
            IFilterMapper * This,
            _Out_ IEnumRegFilters **ppEnum,
                       DWORD dwMerit,
                       BOOL bInputNeeded,
                       CLSID clsInMaj,
                       CLSID clsInSub,
                       BOOL bRender,
                       BOOL bOututNeeded,
                       CLSID clsOutMaj,
                       CLSID clsOutSub);
        END_INTERFACE
    } IFilterMapperVtbl;
    interface IFilterMapper
    {
        CONST_VTBL struct IFilterMapperVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> RegisterFilter(This,clsid,Name,dwMerit) )
    ( (This)->lpVtbl -> RegisterFilterInstance(This,clsid,Name,MRId) )
    ( (This)->lpVtbl -> RegisterPin(This,Filter,Name,bRendered,bOutput,bZero,bMany,ConnectsToFilter,ConnectsToPin) )
    ( (This)->lpVtbl -> RegisterPinType(This,clsFilter,strName,clsMajorType,clsSubType) )
    ( (This)->lpVtbl -> UnregisterFilter(This,Filter) )
    ( (This)->lpVtbl -> UnregisterFilterInstance(This,MRId) )
    ( (This)->lpVtbl -> UnregisterPin(This,Filter,Name) )
    ( (This)->lpVtbl -> EnumMatchingFilters(This,ppEnum,dwMerit,bInputNeeded,clsInMaj,clsInSub,bRender,bOututNeeded,clsOutMaj,clsOutSub) )
typedef struct REGPINTYPES
    {
    const CLSID *clsMajorType;
    const CLSID *clsMinorType;
    } REGPINTYPES;
typedef struct REGFILTERPINS
    {
    LPWSTR strName;
    BOOL bRendered;
    BOOL bOutput;
    BOOL bZero;
    BOOL bMany;
    const CLSID *clsConnectsToFilter;
    const WCHAR *strConnectsToPin;
    UINT nMediaTypes;
    const REGPINTYPES *lpMediaType;
    } REGFILTERPINS;
typedef struct REGPINMEDIUM
    {
    CLSID clsMedium;
    DWORD dw1;
    DWORD dw2;
    } REGPINMEDIUM;
enum __MIDL___MIDL_itf_strmif_0000_0023_0001
    {
        REG_PINFLAG_B_ZERO = 0x1,
        REG_PINFLAG_B_RENDERER = 0x2,
        REG_PINFLAG_B_MANY = 0x4,
        REG_PINFLAG_B_OUTPUT = 0x8
    } ;
typedef struct REGFILTERPINS2
    {
    DWORD dwFlags;
    UINT cInstances;
    UINT nMediaTypes;
                    const REGPINTYPES *lpMediaType;
    UINT nMediums;
                    const REGPINMEDIUM *lpMedium;
    const CLSID *clsPinCategory;
    } REGFILTERPINS2;
typedef struct REGFILTER2
    {
    DWORD dwVersion;
    DWORD dwMerit;
                                   union
        {
                       struct
            {
            ULONG cPins;
                            const REGFILTERPINS *rgPins;
            } ;
                       struct
            {
            ULONG cPins2;
                            const REGFILTERPINS2 *rgPins2;
            } ;
        } ;
    } REGFILTER2;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0023_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0023_v0_0_s_ifspec;
EXTERN_C const IID IID_IFilterMapper2;
    typedef struct IFilterMapper2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IFilterMapper2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IFilterMapper2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IFilterMapper2 * This);
        HRESULT ( STDMETHODCALLTYPE *CreateCategory )(
            IFilterMapper2 * This,
                       REFCLSID clsidCategory,
                       DWORD dwCategoryMerit,
                       LPCWSTR Description);
        HRESULT ( STDMETHODCALLTYPE *UnregisterFilter )(
            IFilterMapper2 * This,
                       const CLSID *pclsidCategory,
                       LPCOLESTR szInstance,
                       REFCLSID Filter);
        HRESULT ( STDMETHODCALLTYPE *RegisterFilter )(
            IFilterMapper2 * This,
                       REFCLSID clsidFilter,
                       LPCWSTR Name,
            _Inout_opt_ IMoniker **ppMoniker,
                       const CLSID *pclsidCategory,
            _In_ LPCOLESTR szInstance,
                       const REGFILTER2 *prf2);
        HRESULT ( STDMETHODCALLTYPE *EnumMatchingFilters )(
            IFilterMapper2 * This,
            _Out_ IEnumMoniker **ppEnum,
                       DWORD dwFlags,
                       BOOL bExactMatch,
                       DWORD dwMerit,
                       BOOL bInputNeeded,
                       DWORD cInputTypes,
            _In_reads_opt_(cInputTypes * 2) const GUID *pInputTypes,
            _In_opt_ const REGPINMEDIUM *pMedIn,
            _In_opt_ const CLSID *pPinCategoryIn,
                       BOOL bRender,
                       BOOL bOutputNeeded,
                       DWORD cOutputTypes,
            _In_reads_opt_(cOutputTypes * 2) const GUID *pOutputTypes,
            _In_opt_ const REGPINMEDIUM *pMedOut,
            _In_opt_ const CLSID *pPinCategoryOut);
        END_INTERFACE
    } IFilterMapper2Vtbl;
    interface IFilterMapper2
    {
        CONST_VTBL struct IFilterMapper2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CreateCategory(This,clsidCategory,dwCategoryMerit,Description) )
    ( (This)->lpVtbl -> UnregisterFilter(This,pclsidCategory,szInstance,Filter) )
    ( (This)->lpVtbl -> RegisterFilter(This,clsidFilter,Name,ppMoniker,pclsidCategory,szInstance,prf2) )
    ( (This)->lpVtbl -> EnumMatchingFilters(This,ppEnum,dwFlags,bExactMatch,dwMerit,bInputNeeded,cInputTypes,pInputTypes,pMedIn,pPinCategoryIn,bRender,bOutputNeeded,cOutputTypes,pOutputTypes,pMedOut,pPinCategoryOut) )
EXTERN_C const IID IID_IFilterMapper3;
    typedef struct IFilterMapper3Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IFilterMapper3 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IFilterMapper3 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IFilterMapper3 * This);
        HRESULT ( STDMETHODCALLTYPE *CreateCategory )(
            IFilterMapper3 * This,
                       REFCLSID clsidCategory,
                       DWORD dwCategoryMerit,
                       LPCWSTR Description);
        HRESULT ( STDMETHODCALLTYPE *UnregisterFilter )(
            IFilterMapper3 * This,
                       const CLSID *pclsidCategory,
                       LPCOLESTR szInstance,
                       REFCLSID Filter);
        HRESULT ( STDMETHODCALLTYPE *RegisterFilter )(
            IFilterMapper3 * This,
                       REFCLSID clsidFilter,
                       LPCWSTR Name,
            _Inout_opt_ IMoniker **ppMoniker,
                       const CLSID *pclsidCategory,
            _In_ LPCOLESTR szInstance,
                       const REGFILTER2 *prf2);
        HRESULT ( STDMETHODCALLTYPE *EnumMatchingFilters )(
            IFilterMapper3 * This,
            _Out_ IEnumMoniker **ppEnum,
                       DWORD dwFlags,
                       BOOL bExactMatch,
                       DWORD dwMerit,
                       BOOL bInputNeeded,
                       DWORD cInputTypes,
            _In_reads_opt_(cInputTypes * 2) const GUID *pInputTypes,
            _In_opt_ const REGPINMEDIUM *pMedIn,
            _In_opt_ const CLSID *pPinCategoryIn,
                       BOOL bRender,
                       BOOL bOutputNeeded,
                       DWORD cOutputTypes,
            _In_reads_opt_(cOutputTypes * 2) const GUID *pOutputTypes,
            _In_opt_ const REGPINMEDIUM *pMedOut,
            _In_opt_ const CLSID *pPinCategoryOut);
        HRESULT ( STDMETHODCALLTYPE *GetICreateDevEnum )(
            IFilterMapper3 * This,
            _Out_ ICreateDevEnum **ppEnum);
        END_INTERFACE
    } IFilterMapper3Vtbl;
    interface IFilterMapper3
    {
        CONST_VTBL struct IFilterMapper3Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CreateCategory(This,clsidCategory,dwCategoryMerit,Description) )
    ( (This)->lpVtbl -> UnregisterFilter(This,pclsidCategory,szInstance,Filter) )
    ( (This)->lpVtbl -> RegisterFilter(This,clsidFilter,Name,ppMoniker,pclsidCategory,szInstance,prf2) )
    ( (This)->lpVtbl -> EnumMatchingFilters(This,ppEnum,dwFlags,bExactMatch,dwMerit,bInputNeeded,cInputTypes,pInputTypes,pMedIn,pPinCategoryIn,bRender,bOutputNeeded,cOutputTypes,pOutputTypes,pMedOut,pPinCategoryOut) )
    ( (This)->lpVtbl -> GetICreateDevEnum(This,ppEnum) )
typedef
enum tagQualityMessageType
    {
        Famine = 0,
        Flood = ( Famine + 1 )
    } QualityMessageType;
typedef struct tagQuality
    {
    QualityMessageType Type;
    long Proportion;
    REFERENCE_TIME Late;
    REFERENCE_TIME TimeStamp;
    } Quality;
typedef IQualityControl *PQUALITYCONTROL;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0025_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0025_v0_0_s_ifspec;
EXTERN_C const IID IID_IQualityControl;
    typedef struct IQualityControlVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IQualityControl * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IQualityControl * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IQualityControl * This);
        HRESULT ( STDMETHODCALLTYPE *Notify )(
            IQualityControl * This,
                       IBaseFilter *pSelf,
                       Quality q);
        HRESULT ( STDMETHODCALLTYPE *SetSink )(
            IQualityControl * This,
                       IQualityControl *piqc);
        END_INTERFACE
    } IQualityControlVtbl;
    interface IQualityControl
    {
        CONST_VTBL struct IQualityControlVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Notify(This,pSelf,q) )
    ( (This)->lpVtbl -> SetSink(This,piqc) )
enum __MIDL___MIDL_itf_strmif_0000_0026_0001
    {
        CK_NOCOLORKEY = 0,
        CK_INDEX = 0x1,
        CK_RGB = 0x2
    } ;
typedef struct tagCOLORKEY
    {
    DWORD KeyType;
    DWORD PaletteIndex;
    COLORREF LowColorValue;
    COLORREF HighColorValue;
    } COLORKEY;
enum __MIDL___MIDL_itf_strmif_0000_0026_0002
    {
        ADVISE_NONE = 0,
        ADVISE_CLIPPING = 0x1,
        ADVISE_PALETTE = 0x2,
        ADVISE_COLORKEY = 0x4,
        ADVISE_POSITION = 0x8,
        ADVISE_DISPLAY_CHANGE = 0x10
    } ;
typedef struct _RGNDATAHEADER
    {
    DWORD dwSize;
    DWORD iType;
    DWORD nCount;
    DWORD nRgnSize;
    RECT rcBound;
    } RGNDATAHEADER;
typedef struct _RGNDATA
    {
    RGNDATAHEADER rdh;
    char Buffer[ 1 ];
    } RGNDATA;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0026_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0026_v0_0_s_ifspec;
EXTERN_C const IID IID_IOverlayNotify;
    typedef struct IOverlayNotifyVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IOverlayNotify * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IOverlayNotify * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IOverlayNotify * This);
        HRESULT ( STDMETHODCALLTYPE *OnPaletteChange )(
            IOverlayNotify * This,
                       DWORD dwColors,
                       const PALETTEENTRY *pPalette);
        HRESULT ( STDMETHODCALLTYPE *OnClipChange )(
            IOverlayNotify * This,
                       const RECT *pSourceRect,
                       const RECT *pDestinationRect,
                       const RGNDATA *pRgnData);
        HRESULT ( STDMETHODCALLTYPE *OnColorKeyChange )(
            IOverlayNotify * This,
                       const COLORKEY *pColorKey);
        HRESULT ( STDMETHODCALLTYPE *OnPositionChange )(
            IOverlayNotify * This,
                       const RECT *pSourceRect,
                       const RECT *pDestinationRect);
        END_INTERFACE
    } IOverlayNotifyVtbl;
    interface IOverlayNotify
    {
        CONST_VTBL struct IOverlayNotifyVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnPaletteChange(This,dwColors,pPalette) )
    ( (This)->lpVtbl -> OnClipChange(This,pSourceRect,pDestinationRect,pRgnData) )
    ( (This)->lpVtbl -> OnColorKeyChange(This,pColorKey) )
    ( (This)->lpVtbl -> OnPositionChange(This,pSourceRect,pDestinationRect) )
typedef IOverlayNotify *POVERLAYNOTIFY;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0027_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0027_v0_0_s_ifspec;
EXTERN_C const IID IID_IOverlayNotify2;
    typedef struct IOverlayNotify2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IOverlayNotify2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IOverlayNotify2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IOverlayNotify2 * This);
        HRESULT ( STDMETHODCALLTYPE *OnPaletteChange )(
            IOverlayNotify2 * This,
                       DWORD dwColors,
                       const PALETTEENTRY *pPalette);
        HRESULT ( STDMETHODCALLTYPE *OnClipChange )(
            IOverlayNotify2 * This,
                       const RECT *pSourceRect,
                       const RECT *pDestinationRect,
                       const RGNDATA *pRgnData);
        HRESULT ( STDMETHODCALLTYPE *OnColorKeyChange )(
            IOverlayNotify2 * This,
                       const COLORKEY *pColorKey);
        HRESULT ( STDMETHODCALLTYPE *OnPositionChange )(
            IOverlayNotify2 * This,
                       const RECT *pSourceRect,
                       const RECT *pDestinationRect);
        HRESULT ( STDMETHODCALLTYPE *OnDisplayChange )(
            IOverlayNotify2 * This,
            HMONITOR hMonitor);
        END_INTERFACE
    } IOverlayNotify2Vtbl;
    interface IOverlayNotify2
    {
        CONST_VTBL struct IOverlayNotify2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnPaletteChange(This,dwColors,pPalette) )
    ( (This)->lpVtbl -> OnClipChange(This,pSourceRect,pDestinationRect,pRgnData) )
    ( (This)->lpVtbl -> OnColorKeyChange(This,pColorKey) )
    ( (This)->lpVtbl -> OnPositionChange(This,pSourceRect,pDestinationRect) )
    ( (This)->lpVtbl -> OnDisplayChange(This,hMonitor) )
typedef IOverlayNotify2 *POVERLAYNOTIFY2;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0028_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0028_v0_0_s_ifspec;
EXTERN_C const IID IID_IOverlay;
    typedef struct IOverlayVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IOverlay * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IOverlay * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IOverlay * This);
        HRESULT ( STDMETHODCALLTYPE *GetPalette )(
            IOverlay * This,
            _Inout_ DWORD *pdwColors,
            _Outptr_result_buffer_to_(*pdwColors, *pdwColors) PALETTEENTRY **ppPalette);
        HRESULT ( STDMETHODCALLTYPE *SetPalette )(
            IOverlay * This,
                       DWORD dwColors,
            _In_reads_(dwColors) PALETTEENTRY *pPalette);
        HRESULT ( STDMETHODCALLTYPE *GetDefaultColorKey )(
            IOverlay * This,
            _Out_ COLORKEY *pColorKey);
        HRESULT ( STDMETHODCALLTYPE *GetColorKey )(
            IOverlay * This,
            _Out_ COLORKEY *pColorKey);
        HRESULT ( STDMETHODCALLTYPE *SetColorKey )(
            IOverlay * This,
                            COLORKEY *pColorKey);
        HRESULT ( STDMETHODCALLTYPE *GetWindowHandle )(
            IOverlay * This,
            _Out_ HWND *pHwnd);
        HRESULT ( STDMETHODCALLTYPE *GetClipList )(
            IOverlay * This,
            _Out_ RECT *pSourceRect,
            _Out_ RECT *pDestinationRect,
            _Out_ RGNDATA **ppRgnData);
        HRESULT ( STDMETHODCALLTYPE *GetVideoPosition )(
            IOverlay * This,
            _Out_ RECT *pSourceRect,
            _Out_ RECT *pDestinationRect);
        HRESULT ( STDMETHODCALLTYPE *Advise )(
            IOverlay * This,
                       IOverlayNotify *pOverlayNotify,
                       DWORD dwInterests);
        HRESULT ( STDMETHODCALLTYPE *Unadvise )(
            IOverlay * This);
        END_INTERFACE
    } IOverlayVtbl;
    interface IOverlay
    {
        CONST_VTBL struct IOverlayVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetPalette(This,pdwColors,ppPalette) )
    ( (This)->lpVtbl -> SetPalette(This,dwColors,pPalette) )
    ( (This)->lpVtbl -> GetDefaultColorKey(This,pColorKey) )
    ( (This)->lpVtbl -> GetColorKey(This,pColorKey) )
    ( (This)->lpVtbl -> SetColorKey(This,pColorKey) )
    ( (This)->lpVtbl -> GetWindowHandle(This,pHwnd) )
    ( (This)->lpVtbl -> GetClipList(This,pSourceRect,pDestinationRect,ppRgnData) )
    ( (This)->lpVtbl -> GetVideoPosition(This,pSourceRect,pDestinationRect) )
    ( (This)->lpVtbl -> Advise(This,pOverlayNotify,dwInterests) )
    ( (This)->lpVtbl -> Unadvise(This) )
typedef IOverlay *POVERLAY;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0029_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0029_v0_0_s_ifspec;
EXTERN_C const IID IID_IMediaEventSink;
    typedef struct IMediaEventSinkVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMediaEventSink * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMediaEventSink * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMediaEventSink * This);
        HRESULT ( STDMETHODCALLTYPE *Notify )(
            IMediaEventSink * This,
                       long EventCode,
                       LONG_PTR EventParam1,
                       LONG_PTR EventParam2);
        END_INTERFACE
    } IMediaEventSinkVtbl;
    interface IMediaEventSink
    {
        CONST_VTBL struct IMediaEventSinkVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Notify(This,EventCode,EventParam1,EventParam2) )
typedef IMediaEventSink *PMEDIAEVENTSINK;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0030_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0030_v0_0_s_ifspec;
EXTERN_C const IID IID_IFileSourceFilter;
    typedef struct IFileSourceFilterVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IFileSourceFilter * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IFileSourceFilter * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IFileSourceFilter * This);
        HRESULT ( STDMETHODCALLTYPE *Load )(
            IFileSourceFilter * This,
                       LPCOLESTR pszFileName,
            _In_opt_ const AM_MEDIA_TYPE *pmt);
        HRESULT ( STDMETHODCALLTYPE *GetCurFile )(
            IFileSourceFilter * This,
            _Out_ LPOLESTR *ppszFileName,
            _Out_opt_ AM_MEDIA_TYPE *pmt);
        END_INTERFACE
    } IFileSourceFilterVtbl;
    interface IFileSourceFilter
    {
        CONST_VTBL struct IFileSourceFilterVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Load(This,pszFileName,pmt) )
    ( (This)->lpVtbl -> GetCurFile(This,ppszFileName,pmt) )
typedef IFileSourceFilter *PFILTERFILESOURCE;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0031_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0031_v0_0_s_ifspec;
EXTERN_C const IID IID_IFileSinkFilter;
    typedef struct IFileSinkFilterVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IFileSinkFilter * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IFileSinkFilter * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IFileSinkFilter * This);
        HRESULT ( STDMETHODCALLTYPE *SetFileName )(
            IFileSinkFilter * This,
                       LPCOLESTR pszFileName,
            _In_opt_ const AM_MEDIA_TYPE *pmt);
        HRESULT ( STDMETHODCALLTYPE *GetCurFile )(
            IFileSinkFilter * This,
            _Out_ LPOLESTR *ppszFileName,
            _Out_ AM_MEDIA_TYPE *pmt);
        END_INTERFACE
    } IFileSinkFilterVtbl;
    interface IFileSinkFilter
    {
        CONST_VTBL struct IFileSinkFilterVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetFileName(This,pszFileName,pmt) )
    ( (This)->lpVtbl -> GetCurFile(This,ppszFileName,pmt) )
typedef IFileSinkFilter *PFILTERFILESINK;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0032_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0032_v0_0_s_ifspec;
EXTERN_C const IID IID_IFileSinkFilter2;
    typedef struct IFileSinkFilter2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IFileSinkFilter2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IFileSinkFilter2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IFileSinkFilter2 * This);
        HRESULT ( STDMETHODCALLTYPE *SetFileName )(
            IFileSinkFilter2 * This,
                       LPCOLESTR pszFileName,
            _In_opt_ const AM_MEDIA_TYPE *pmt);
        HRESULT ( STDMETHODCALLTYPE *GetCurFile )(
            IFileSinkFilter2 * This,
            _Out_ LPOLESTR *ppszFileName,
            _Out_ AM_MEDIA_TYPE *pmt);
        HRESULT ( STDMETHODCALLTYPE *SetMode )(
            IFileSinkFilter2 * This,
                       DWORD dwFlags);
        HRESULT ( STDMETHODCALLTYPE *GetMode )(
            IFileSinkFilter2 * This,
            _Out_ DWORD *pdwFlags);
        END_INTERFACE
    } IFileSinkFilter2Vtbl;
    interface IFileSinkFilter2
    {
        CONST_VTBL struct IFileSinkFilter2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetFileName(This,pszFileName,pmt) )
    ( (This)->lpVtbl -> GetCurFile(This,ppszFileName,pmt) )
    ( (This)->lpVtbl -> SetMode(This,dwFlags) )
    ( (This)->lpVtbl -> GetMode(This,pdwFlags) )
typedef IFileSinkFilter2 *PFILESINKFILTER2;
typedef
enum AM_FILESINK_FLAGS
    {
        AM_FILE_OVERWRITE = 0x1
    } AM_FILESINK_FLAGS;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0033_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0033_v0_0_s_ifspec;
EXTERN_C const IID IID_IGraphBuilder;
    typedef struct IGraphBuilderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IGraphBuilder * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IGraphBuilder * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IGraphBuilder * This);
        HRESULT ( STDMETHODCALLTYPE *AddFilter )(
            IGraphBuilder * This,
                       IBaseFilter *pFilter,
                               LPCWSTR pName);
        HRESULT ( STDMETHODCALLTYPE *RemoveFilter )(
            IGraphBuilder * This,
                       IBaseFilter *pFilter);
        HRESULT ( STDMETHODCALLTYPE *EnumFilters )(
            IGraphBuilder * This,
            _Out_ IEnumFilters **ppEnum);
        HRESULT ( STDMETHODCALLTYPE *FindFilterByName )(
            IGraphBuilder * This,
                               LPCWSTR pName,
            _Out_ IBaseFilter **ppFilter);
        HRESULT ( STDMETHODCALLTYPE *ConnectDirect )(
            IGraphBuilder * This,
                       IPin *ppinOut,
                       IPin *ppinIn,
            _In_opt_ const AM_MEDIA_TYPE *pmt);
        HRESULT ( STDMETHODCALLTYPE *Reconnect )(
            IGraphBuilder * This,
                       IPin *ppin);
        HRESULT ( STDMETHODCALLTYPE *Disconnect )(
            IGraphBuilder * This,
                       IPin *ppin);
        HRESULT ( STDMETHODCALLTYPE *SetDefaultSyncSource )(
            IGraphBuilder * This);
        HRESULT ( STDMETHODCALLTYPE *Connect )(
            IGraphBuilder * This,
                       IPin *ppinOut,
                       IPin *ppinIn);
        HRESULT ( STDMETHODCALLTYPE *Render )(
            IGraphBuilder * This,
                       IPin *ppinOut);
        HRESULT ( STDMETHODCALLTYPE *RenderFile )(
            IGraphBuilder * This,
                       LPCWSTR lpcwstrFile,
            _In_opt_ LPCWSTR lpcwstrPlayList);
        HRESULT ( STDMETHODCALLTYPE *AddSourceFilter )(
            IGraphBuilder * This,
                       LPCWSTR lpcwstrFileName,
            _In_opt_ LPCWSTR lpcwstrFilterName,
            _Out_ IBaseFilter **ppFilter);
        HRESULT ( STDMETHODCALLTYPE *SetLogFile )(
            IGraphBuilder * This,
                       DWORD_PTR hFile);
        HRESULT ( STDMETHODCALLTYPE *Abort )(
            IGraphBuilder * This);
        HRESULT ( STDMETHODCALLTYPE *ShouldOperationContinue )(
            IGraphBuilder * This);
        END_INTERFACE
    } IGraphBuilderVtbl;
    interface IGraphBuilder
    {
        CONST_VTBL struct IGraphBuilderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AddFilter(This,pFilter,pName) )
    ( (This)->lpVtbl -> RemoveFilter(This,pFilter) )
    ( (This)->lpVtbl -> EnumFilters(This,ppEnum) )
    ( (This)->lpVtbl -> FindFilterByName(This,pName,ppFilter) )
    ( (This)->lpVtbl -> ConnectDirect(This,ppinOut,ppinIn,pmt) )
    ( (This)->lpVtbl -> Reconnect(This,ppin) )
    ( (This)->lpVtbl -> Disconnect(This,ppin) )
    ( (This)->lpVtbl -> SetDefaultSyncSource(This) )
    ( (This)->lpVtbl -> Connect(This,ppinOut,ppinIn) )
    ( (This)->lpVtbl -> Render(This,ppinOut) )
    ( (This)->lpVtbl -> RenderFile(This,lpcwstrFile,lpcwstrPlayList) )
    ( (This)->lpVtbl -> AddSourceFilter(This,lpcwstrFileName,lpcwstrFilterName,ppFilter) )
    ( (This)->lpVtbl -> SetLogFile(This,hFile) )
    ( (This)->lpVtbl -> Abort(This) )
    ( (This)->lpVtbl -> ShouldOperationContinue(This) )
EXTERN_C const IID IID_ICaptureGraphBuilder;
    typedef struct ICaptureGraphBuilderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ICaptureGraphBuilder * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ICaptureGraphBuilder * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ICaptureGraphBuilder * This);
        HRESULT ( STDMETHODCALLTYPE *SetFiltergraph )(
            ICaptureGraphBuilder * This,
                       IGraphBuilder *pfg);
        HRESULT ( STDMETHODCALLTYPE *GetFiltergraph )(
            ICaptureGraphBuilder * This,
            _Out_ IGraphBuilder **ppfg);
        HRESULT ( STDMETHODCALLTYPE *SetOutputFileName )(
            ICaptureGraphBuilder * This,
                       const GUID *pType,
                       LPCOLESTR lpstrFile,
            _Out_ IBaseFilter **ppf,
            _Out_ IFileSinkFilter **ppSink);
                      HRESULT ( STDMETHODCALLTYPE *FindInterface )(
            ICaptureGraphBuilder * This,
            _In_opt_ const GUID *pCategory,
                       IBaseFilter *pf,
                       REFIID riid,
            _Out_ void **ppint);
        HRESULT ( STDMETHODCALLTYPE *RenderStream )(
            ICaptureGraphBuilder * This,
            _In_opt_ const GUID *pCategory,
                       IUnknown *pSource,
                       IBaseFilter *pfCompressor,
                       IBaseFilter *pfRenderer);
        HRESULT ( STDMETHODCALLTYPE *ControlStream )(
            ICaptureGraphBuilder * This,
            _In_opt_ const GUID *pCategory,
                       IBaseFilter *pFilter,
                       REFERENCE_TIME *pstart,
                       REFERENCE_TIME *pstop,
                       WORD wStartCookie,
                       WORD wStopCookie);
        HRESULT ( STDMETHODCALLTYPE *AllocCapFile )(
            ICaptureGraphBuilder * This,
                       LPCOLESTR lpstr,
                       DWORDLONG dwlSize);
        HRESULT ( STDMETHODCALLTYPE *CopyCaptureFile )(
            ICaptureGraphBuilder * This,
            _In_ LPOLESTR lpwstrOld,
            _In_ LPOLESTR lpwstrNew,
                       int fAllowEscAbort,
                       IAMCopyCaptureFileProgress *pCallback);
        END_INTERFACE
    } ICaptureGraphBuilderVtbl;
    interface ICaptureGraphBuilder
    {
        CONST_VTBL struct ICaptureGraphBuilderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetFiltergraph(This,pfg) )
    ( (This)->lpVtbl -> GetFiltergraph(This,ppfg) )
    ( (This)->lpVtbl -> SetOutputFileName(This,pType,lpstrFile,ppf,ppSink) )
    ( (This)->lpVtbl -> FindInterface(This,pCategory,pf,riid,ppint) )
    ( (This)->lpVtbl -> RenderStream(This,pCategory,pSource,pfCompressor,pfRenderer) )
    ( (This)->lpVtbl -> ControlStream(This,pCategory,pFilter,pstart,pstop,wStartCookie,wStopCookie) )
    ( (This)->lpVtbl -> AllocCapFile(This,lpstr,dwlSize) )
    ( (This)->lpVtbl -> CopyCaptureFile(This,lpwstrOld,lpwstrNew,fAllowEscAbort,pCallback) )
                HRESULT STDMETHODCALLTYPE ICaptureGraphBuilder_RemoteFindInterface_Proxy(
    ICaptureGraphBuilder * This,
    _In_opt_ const GUID *pCategory,
               IBaseFilter *pf,
               REFIID riid,
    _Out_ IUnknown **ppint);
void __RPC_STUB ICaptureGraphBuilder_RemoteFindInterface_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
EXTERN_C const IID IID_IAMCopyCaptureFileProgress;
    typedef struct IAMCopyCaptureFileProgressVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IAMCopyCaptureFileProgress * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IAMCopyCaptureFileProgress * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IAMCopyCaptureFileProgress * This);
        HRESULT ( STDMETHODCALLTYPE *Progress )(
            IAMCopyCaptureFileProgress * This,
                       int iProgress);
        END_INTERFACE
    } IAMCopyCaptureFileProgressVtbl;
    interface IAMCopyCaptureFileProgress
    {
        CONST_VTBL struct IAMCopyCaptureFileProgressVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Progress(This,iProgress) )
EXTERN_C const IID IID_ICaptureGraphBuilder2;
    typedef struct ICaptureGraphBuilder2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ICaptureGraphBuilder2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ICaptureGraphBuilder2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ICaptureGraphBuilder2 * This);
        HRESULT ( STDMETHODCALLTYPE *SetFiltergraph )(
            ICaptureGraphBuilder2 * This,
                       IGraphBuilder *pfg);
        HRESULT ( STDMETHODCALLTYPE *GetFiltergraph )(
            ICaptureGraphBuilder2 * This,
            _Out_ IGraphBuilder **ppfg);
        HRESULT ( STDMETHODCALLTYPE *SetOutputFileName )(
            ICaptureGraphBuilder2 * This,
                       const GUID *pType,
                       LPCOLESTR lpstrFile,
            _Outptr_ IBaseFilter **ppf,
            _Outptr_opt_ IFileSinkFilter **ppSink);
                      HRESULT ( STDMETHODCALLTYPE *FindInterface )(
            ICaptureGraphBuilder2 * This,
            _In_opt_ const GUID *pCategory,
            _In_opt_ const GUID *pType,
                       IBaseFilter *pf,
                       REFIID riid,
            _Out_ void **ppint);
        HRESULT ( STDMETHODCALLTYPE *RenderStream )(
            ICaptureGraphBuilder2 * This,
            _In_opt_ const GUID *pCategory,
                       const GUID *pType,
                       IUnknown *pSource,
                       IBaseFilter *pfCompressor,
                       IBaseFilter *pfRenderer);
        HRESULT ( STDMETHODCALLTYPE *ControlStream )(
            ICaptureGraphBuilder2 * This,
                       const GUID *pCategory,
                       const GUID *pType,
                       IBaseFilter *pFilter,
            _In_opt_ REFERENCE_TIME *pstart,
            _In_opt_ REFERENCE_TIME *pstop,
                       WORD wStartCookie,
                       WORD wStopCookie);
        HRESULT ( STDMETHODCALLTYPE *AllocCapFile )(
            ICaptureGraphBuilder2 * This,
                       LPCOLESTR lpstr,
                       DWORDLONG dwlSize);
        HRESULT ( STDMETHODCALLTYPE *CopyCaptureFile )(
            ICaptureGraphBuilder2 * This,
            _In_ LPOLESTR lpwstrOld,
            _In_ LPOLESTR lpwstrNew,
                       int fAllowEscAbort,
                       IAMCopyCaptureFileProgress *pCallback);
        HRESULT ( STDMETHODCALLTYPE *FindPin )(
            ICaptureGraphBuilder2 * This,
                       IUnknown *pSource,
                       PIN_DIRECTION pindir,
            _In_opt_ const GUID *pCategory,
            _In_opt_ const GUID *pType,
                       BOOL fUnconnected,
                       int num,
            _Out_ IPin **ppPin);
        END_INTERFACE
    } ICaptureGraphBuilder2Vtbl;
    interface ICaptureGraphBuilder2
    {
        CONST_VTBL struct ICaptureGraphBuilder2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetFiltergraph(This,pfg) )
    ( (This)->lpVtbl -> GetFiltergraph(This,ppfg) )
    ( (This)->lpVtbl -> SetOutputFileName(This,pType,lpstrFile,ppf,ppSink) )
    ( (This)->lpVtbl -> FindInterface(This,pCategory,pType,pf,riid,ppint) )
    ( (This)->lpVtbl -> RenderStream(This,pCategory,pType,pSource,pfCompressor,pfRenderer) )
    ( (This)->lpVtbl -> ControlStream(This,pCategory,pType,pFilter,pstart,pstop,wStartCookie,wStopCookie) )
    ( (This)->lpVtbl -> AllocCapFile(This,lpstr,dwlSize) )
    ( (This)->lpVtbl -> CopyCaptureFile(This,lpwstrOld,lpwstrNew,fAllowEscAbort,pCallback) )
    ( (This)->lpVtbl -> FindPin(This,pSource,pindir,pCategory,pType,fUnconnected,num,ppPin) )
                HRESULT STDMETHODCALLTYPE ICaptureGraphBuilder2_RemoteFindInterface_Proxy(
    ICaptureGraphBuilder2 * This,
    _In_opt_ const GUID *pCategory,
    _In_opt_ const GUID *pType,
               IBaseFilter *pf,
               REFIID riid,
    _Out_ IUnknown **ppint);
void __RPC_STUB ICaptureGraphBuilder2_RemoteFindInterface_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
enum _AM_RENSDEREXFLAGS
    {
        AM_RENDEREX_RENDERTOEXISTINGRENDERERS = 0x1
    } ;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0037_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0037_v0_0_s_ifspec;
EXTERN_C const IID IID_IFilterGraph2;
    typedef struct IFilterGraph2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IFilterGraph2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IFilterGraph2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IFilterGraph2 * This);
        HRESULT ( STDMETHODCALLTYPE *AddFilter )(
            IFilterGraph2 * This,
                       IBaseFilter *pFilter,
                               LPCWSTR pName);
        HRESULT ( STDMETHODCALLTYPE *RemoveFilter )(
            IFilterGraph2 * This,
                       IBaseFilter *pFilter);
        HRESULT ( STDMETHODCALLTYPE *EnumFilters )(
            IFilterGraph2 * This,
            _Out_ IEnumFilters **ppEnum);
        HRESULT ( STDMETHODCALLTYPE *FindFilterByName )(
            IFilterGraph2 * This,
                               LPCWSTR pName,
            _Out_ IBaseFilter **ppFilter);
        HRESULT ( STDMETHODCALLTYPE *ConnectDirect )(
            IFilterGraph2 * This,
                       IPin *ppinOut,
                       IPin *ppinIn,
            _In_opt_ const AM_MEDIA_TYPE *pmt);
        HRESULT ( STDMETHODCALLTYPE *Reconnect )(
            IFilterGraph2 * This,
                       IPin *ppin);
        HRESULT ( STDMETHODCALLTYPE *Disconnect )(
            IFilterGraph2 * This,
                       IPin *ppin);
        HRESULT ( STDMETHODCALLTYPE *SetDefaultSyncSource )(
            IFilterGraph2 * This);
        HRESULT ( STDMETHODCALLTYPE *Connect )(
            IFilterGraph2 * This,
                       IPin *ppinOut,
                       IPin *ppinIn);
        HRESULT ( STDMETHODCALLTYPE *Render )(
            IFilterGraph2 * This,
                       IPin *ppinOut);
        HRESULT ( STDMETHODCALLTYPE *RenderFile )(
            IFilterGraph2 * This,
                       LPCWSTR lpcwstrFile,
            _In_opt_ LPCWSTR lpcwstrPlayList);
        HRESULT ( STDMETHODCALLTYPE *AddSourceFilter )(
            IFilterGraph2 * This,
                       LPCWSTR lpcwstrFileName,
            _In_opt_ LPCWSTR lpcwstrFilterName,
            _Out_ IBaseFilter **ppFilter);
        HRESULT ( STDMETHODCALLTYPE *SetLogFile )(
            IFilterGraph2 * This,
                       DWORD_PTR hFile);
        HRESULT ( STDMETHODCALLTYPE *Abort )(
            IFilterGraph2 * This);
        HRESULT ( STDMETHODCALLTYPE *ShouldOperationContinue )(
            IFilterGraph2 * This);
        HRESULT ( STDMETHODCALLTYPE *AddSourceFilterForMoniker )(
            IFilterGraph2 * This,
                       IMoniker *pMoniker,
                       IBindCtx *pCtx,
                               LPCWSTR lpcwstrFilterName,
            _Out_ IBaseFilter **ppFilter);
        HRESULT ( STDMETHODCALLTYPE *ReconnectEx )(
            IFilterGraph2 * This,
                       IPin *ppin,
            _In_opt_ const AM_MEDIA_TYPE *pmt);
        HRESULT ( STDMETHODCALLTYPE *RenderEx )(
            IFilterGraph2 * This,
                       IPin *pPinOut,
                       DWORD dwFlags,
            _Reserved_ DWORD *pvContext);
        END_INTERFACE
    } IFilterGraph2Vtbl;
    interface IFilterGraph2
    {
        CONST_VTBL struct IFilterGraph2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AddFilter(This,pFilter,pName) )
    ( (This)->lpVtbl -> RemoveFilter(This,pFilter) )
    ( (This)->lpVtbl -> EnumFilters(This,ppEnum) )
    ( (This)->lpVtbl -> FindFilterByName(This,pName,ppFilter) )
    ( (This)->lpVtbl -> ConnectDirect(This,ppinOut,ppinIn,pmt) )
    ( (This)->lpVtbl -> Reconnect(This,ppin) )
    ( (This)->lpVtbl -> Disconnect(This,ppin) )
    ( (This)->lpVtbl -> SetDefaultSyncSource(This) )
    ( (This)->lpVtbl -> Connect(This,ppinOut,ppinIn) )
    ( (This)->lpVtbl -> Render(This,ppinOut) )
    ( (This)->lpVtbl -> RenderFile(This,lpcwstrFile,lpcwstrPlayList) )
    ( (This)->lpVtbl -> AddSourceFilter(This,lpcwstrFileName,lpcwstrFilterName,ppFilter) )
    ( (This)->lpVtbl -> SetLogFile(This,hFile) )
    ( (This)->lpVtbl -> Abort(This) )
    ( (This)->lpVtbl -> ShouldOperationContinue(This) )
    ( (This)->lpVtbl -> AddSourceFilterForMoniker(This,pMoniker,pCtx,lpcwstrFilterName,ppFilter) )
    ( (This)->lpVtbl -> ReconnectEx(This,ppin,pmt) )
    ( (This)->lpVtbl -> RenderEx(This,pPinOut,dwFlags,pvContext) )
EXTERN_C const IID IID_IFilterGraph3;
    typedef struct IFilterGraph3Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IFilterGraph3 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IFilterGraph3 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IFilterGraph3 * This);
        HRESULT ( STDMETHODCALLTYPE *AddFilter )(
            IFilterGraph3 * This,
                       IBaseFilter *pFilter,
                               LPCWSTR pName);
        HRESULT ( STDMETHODCALLTYPE *RemoveFilter )(
            IFilterGraph3 * This,
                       IBaseFilter *pFilter);
        HRESULT ( STDMETHODCALLTYPE *EnumFilters )(
            IFilterGraph3 * This,
            _Out_ IEnumFilters **ppEnum);
        HRESULT ( STDMETHODCALLTYPE *FindFilterByName )(
            IFilterGraph3 * This,
                               LPCWSTR pName,
            _Out_ IBaseFilter **ppFilter);
        HRESULT ( STDMETHODCALLTYPE *ConnectDirect )(
            IFilterGraph3 * This,
                       IPin *ppinOut,
                       IPin *ppinIn,
            _In_opt_ const AM_MEDIA_TYPE *pmt);
        HRESULT ( STDMETHODCALLTYPE *Reconnect )(
            IFilterGraph3 * This,
                       IPin *ppin);
        HRESULT ( STDMETHODCALLTYPE *Disconnect )(
            IFilterGraph3 * This,
                       IPin *ppin);
        HRESULT ( STDMETHODCALLTYPE *SetDefaultSyncSource )(
            IFilterGraph3 * This);
        HRESULT ( STDMETHODCALLTYPE *Connect )(
            IFilterGraph3 * This,
                       IPin *ppinOut,
                       IPin *ppinIn);
        HRESULT ( STDMETHODCALLTYPE *Render )(
            IFilterGraph3 * This,
                       IPin *ppinOut);
        HRESULT ( STDMETHODCALLTYPE *RenderFile )(
            IFilterGraph3 * This,
                       LPCWSTR lpcwstrFile,
            _In_opt_ LPCWSTR lpcwstrPlayList);
        HRESULT ( STDMETHODCALLTYPE *AddSourceFilter )(
            IFilterGraph3 * This,
                       LPCWSTR lpcwstrFileName,
            _In_opt_ LPCWSTR lpcwstrFilterName,
            _Out_ IBaseFilter **ppFilter);
        HRESULT ( STDMETHODCALLTYPE *SetLogFile )(
            IFilterGraph3 * This,
                       DWORD_PTR hFile);
        HRESULT ( STDMETHODCALLTYPE *Abort )(
            IFilterGraph3 * This);
        HRESULT ( STDMETHODCALLTYPE *ShouldOperationContinue )(
            IFilterGraph3 * This);
        HRESULT ( STDMETHODCALLTYPE *AddSourceFilterForMoniker )(
            IFilterGraph3 * This,
                       IMoniker *pMoniker,
                       IBindCtx *pCtx,
                               LPCWSTR lpcwstrFilterName,
            _Out_ IBaseFilter **ppFilter);
        HRESULT ( STDMETHODCALLTYPE *ReconnectEx )(
            IFilterGraph3 * This,
                       IPin *ppin,
            _In_opt_ const AM_MEDIA_TYPE *pmt);
        HRESULT ( STDMETHODCALLTYPE *RenderEx )(
            IFilterGraph3 * This,
                       IPin *pPinOut,
                       DWORD dwFlags,
            _Reserved_ DWORD *pvContext);
        HRESULT ( STDMETHODCALLTYPE *SetSyncSourceEx )(
            IFilterGraph3 * This,
            _In_ IReferenceClock *pClockForMostOfFilterGraph,
            _In_ IReferenceClock *pClockForFilter,
            _In_ IBaseFilter *pFilter);
        END_INTERFACE
    } IFilterGraph3Vtbl;
    interface IFilterGraph3
    {
        CONST_VTBL struct IFilterGraph3Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AddFilter(This,pFilter,pName) )
    ( (This)->lpVtbl -> RemoveFilter(This,pFilter) )
    ( (This)->lpVtbl -> EnumFilters(This,ppEnum) )
    ( (This)->lpVtbl -> FindFilterByName(This,pName,ppFilter) )
    ( (This)->lpVtbl -> ConnectDirect(This,ppinOut,ppinIn,pmt) )
    ( (This)->lpVtbl -> Reconnect(This,ppin) )
    ( (This)->lpVtbl -> Disconnect(This,ppin) )
    ( (This)->lpVtbl -> SetDefaultSyncSource(This) )
    ( (This)->lpVtbl -> Connect(This,ppinOut,ppinIn) )
    ( (This)->lpVtbl -> Render(This,ppinOut) )
    ( (This)->lpVtbl -> RenderFile(This,lpcwstrFile,lpcwstrPlayList) )
    ( (This)->lpVtbl -> AddSourceFilter(This,lpcwstrFileName,lpcwstrFilterName,ppFilter) )
    ( (This)->lpVtbl -> SetLogFile(This,hFile) )
    ( (This)->lpVtbl -> Abort(This) )
    ( (This)->lpVtbl -> ShouldOperationContinue(This) )
    ( (This)->lpVtbl -> AddSourceFilterForMoniker(This,pMoniker,pCtx,lpcwstrFilterName,ppFilter) )
    ( (This)->lpVtbl -> ReconnectEx(This,ppin,pmt) )
    ( (This)->lpVtbl -> RenderEx(This,pPinOut,dwFlags,pvContext) )
    ( (This)->lpVtbl -> SetSyncSourceEx(This,pClockForMostOfFilterGraph,pClockForFilter,pFilter) )
EXTERN_C const IID IID_IStreamBuilder;
    typedef struct IStreamBuilderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IStreamBuilder * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IStreamBuilder * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IStreamBuilder * This);
        HRESULT ( STDMETHODCALLTYPE *Render )(
            IStreamBuilder * This,
                       IPin *ppinOut,
                       IGraphBuilder *pGraph);
        HRESULT ( STDMETHODCALLTYPE *Backout )(
            IStreamBuilder * This,
                       IPin *ppinOut,
                       IGraphBuilder *pGraph);
        END_INTERFACE
    } IStreamBuilderVtbl;
    interface IStreamBuilder
    {
        CONST_VTBL struct IStreamBuilderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Render(This,ppinOut,pGraph) )
    ( (This)->lpVtbl -> Backout(This,ppinOut,pGraph) )
EXTERN_C const IID IID_IAsyncReader;
    typedef struct IAsyncReaderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IAsyncReader * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IAsyncReader * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IAsyncReader * This);
        HRESULT ( STDMETHODCALLTYPE *RequestAllocator )(
            IAsyncReader * This,
                       IMemAllocator *pPreferred,
            _In_ ALLOCATOR_PROPERTIES *pProps,
            _Out_ IMemAllocator **ppActual);
        HRESULT ( STDMETHODCALLTYPE *Request )(
            IAsyncReader * This,
                       IMediaSample *pSample,
                       DWORD_PTR dwUser);
        HRESULT ( STDMETHODCALLTYPE *WaitForNext )(
            IAsyncReader * This,
                       DWORD dwTimeout,
            _Out_opt_ IMediaSample **ppSample,
            _Out_ DWORD_PTR *pdwUser);
        HRESULT ( STDMETHODCALLTYPE *SyncReadAligned )(
            IAsyncReader * This,
                       IMediaSample *pSample);
        HRESULT ( STDMETHODCALLTYPE *SyncRead )(
            IAsyncReader * This,
                       LONGLONG llPosition,
                       LONG lLength,
            _Out_writes_bytes_(lLength) BYTE *pBuffer);
        HRESULT ( STDMETHODCALLTYPE *Length )(
            IAsyncReader * This,
            _Out_ LONGLONG *pTotal,
            _Out_ LONGLONG *pAvailable);
        HRESULT ( STDMETHODCALLTYPE *BeginFlush )(
            IAsyncReader * This);
        HRESULT ( STDMETHODCALLTYPE *EndFlush )(
            IAsyncReader * This);
        END_INTERFACE
    } IAsyncReaderVtbl;
    interface IAsyncReader
    {
        CONST_VTBL struct IAsyncReaderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> RequestAllocator(This,pPreferred,pProps,ppActual) )
    ( (This)->lpVtbl -> Request(This,pSample,dwUser) )
    ( (This)->lpVtbl -> WaitForNext(This,dwTimeout,ppSample,pdwUser) )
    ( (This)->lpVtbl -> SyncReadAligned(This,pSample) )
    ( (This)->lpVtbl -> SyncRead(This,llPosition,lLength,pBuffer) )
    ( (This)->lpVtbl -> Length(This,pTotal,pAvailable) )
    ( (This)->lpVtbl -> BeginFlush(This) )
    ( (This)->lpVtbl -> EndFlush(This) )
EXTERN_C const IID IID_IGraphVersion;
    typedef struct IGraphVersionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IGraphVersion * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IGraphVersion * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IGraphVersion * This);
        HRESULT ( STDMETHODCALLTYPE *QueryVersion )(
            IGraphVersion * This,
            _Out_ LONG *pVersion);
        END_INTERFACE
    } IGraphVersionVtbl;
    interface IGraphVersion
    {
        CONST_VTBL struct IGraphVersionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> QueryVersion(This,pVersion) )
EXTERN_C const IID IID_IResourceConsumer;
    typedef struct IResourceConsumerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IResourceConsumer * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IResourceConsumer * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IResourceConsumer * This);
        HRESULT ( STDMETHODCALLTYPE *AcquireResource )(
            IResourceConsumer * This,
                       LONG idResource);
        HRESULT ( STDMETHODCALLTYPE *ReleaseResource )(
            IResourceConsumer * This,
                       LONG idResource);
        END_INTERFACE
    } IResourceConsumerVtbl;
    interface IResourceConsumer
    {
        CONST_VTBL struct IResourceConsumerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AcquireResource(This,idResource) )
    ( (This)->lpVtbl -> ReleaseResource(This,idResource) )
EXTERN_C const IID IID_IResourceManager;
    typedef struct IResourceManagerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IResourceManager * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IResourceManager * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IResourceManager * This);
        HRESULT ( STDMETHODCALLTYPE *Register )(
            IResourceManager * This,
                       LPCWSTR pName,
                       LONG cResource,
            _Out_ LONG *plToken);
        HRESULT ( STDMETHODCALLTYPE *RegisterGroup )(
            IResourceManager * This,
                       LPCWSTR pName,
                       LONG cResource,
            _In_reads_(cResource) LONG *palTokens,
            _Out_ LONG *plToken);
        HRESULT ( STDMETHODCALLTYPE *RequestResource )(
            IResourceManager * This,
                       LONG idResource,
                       IUnknown *pFocusObject,
                       IResourceConsumer *pConsumer);
        HRESULT ( STDMETHODCALLTYPE *NotifyAcquire )(
            IResourceManager * This,
                       LONG idResource,
                       IResourceConsumer *pConsumer,
                       HRESULT hr);
        HRESULT ( STDMETHODCALLTYPE *NotifyRelease )(
            IResourceManager * This,
                       LONG idResource,
                       IResourceConsumer *pConsumer,
                       BOOL bStillWant);
        HRESULT ( STDMETHODCALLTYPE *CancelRequest )(
            IResourceManager * This,
                       LONG idResource,
                       IResourceConsumer *pConsumer);
        HRESULT ( STDMETHODCALLTYPE *SetFocus )(
            IResourceManager * This,
                       IUnknown *pFocusObject);
        HRESULT ( STDMETHODCALLTYPE *ReleaseFocus )(
            IResourceManager * This,
                       IUnknown *pFocusObject);
        END_INTERFACE
    } IResourceManagerVtbl;
    interface IResourceManager
    {
        CONST_VTBL struct IResourceManagerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Register(This,pName,cResource,plToken) )
    ( (This)->lpVtbl -> RegisterGroup(This,pName,cResource,palTokens,plToken) )
    ( (This)->lpVtbl -> RequestResource(This,idResource,pFocusObject,pConsumer) )
    ( (This)->lpVtbl -> NotifyAcquire(This,idResource,pConsumer,hr) )
    ( (This)->lpVtbl -> NotifyRelease(This,idResource,pConsumer,bStillWant) )
    ( (This)->lpVtbl -> CancelRequest(This,idResource,pConsumer) )
    ( (This)->lpVtbl -> SetFocus(This,pFocusObject) )
    ( (This)->lpVtbl -> ReleaseFocus(This,pFocusObject) )
EXTERN_C const IID IID_IDistributorNotify;
    typedef struct IDistributorNotifyVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDistributorNotify * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDistributorNotify * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDistributorNotify * This);
        HRESULT ( STDMETHODCALLTYPE *Stop )(
            IDistributorNotify * This);
        HRESULT ( STDMETHODCALLTYPE *Pause )(
            IDistributorNotify * This);
        HRESULT ( STDMETHODCALLTYPE *Run )(
            IDistributorNotify * This,
            REFERENCE_TIME tStart);
        HRESULT ( STDMETHODCALLTYPE *SetSyncSource )(
            IDistributorNotify * This,
                       IReferenceClock *pClock);
        HRESULT ( STDMETHODCALLTYPE *NotifyGraphChange )(
            IDistributorNotify * This);
        END_INTERFACE
    } IDistributorNotifyVtbl;
    interface IDistributorNotify
    {
        CONST_VTBL struct IDistributorNotifyVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Stop(This) )
    ( (This)->lpVtbl -> Pause(This) )
    ( (This)->lpVtbl -> Run(This,tStart) )
    ( (This)->lpVtbl -> SetSyncSource(This,pClock) )
    ( (This)->lpVtbl -> NotifyGraphChange(This) )
typedef
enum AM_STREAM_INFO_FLAGS
    {
        AM_STREAM_INFO_START_DEFINED = 0x1,
        AM_STREAM_INFO_STOP_DEFINED = 0x2,
        AM_STREAM_INFO_DISCARDING = 0x4,
        AM_STREAM_INFO_STOP_SEND_EXTRA = 0x10
    } AM_STREAM_INFO_FLAGS;
typedef struct AM_STREAM_INFO
    {
    REFERENCE_TIME tStart;
    REFERENCE_TIME tStop;
    DWORD dwStartCookie;
    DWORD dwStopCookie;
    DWORD dwFlags;
    } AM_STREAM_INFO;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0045_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0045_v0_0_s_ifspec;
EXTERN_C const IID IID_IAMStreamControl;
    typedef struct IAMStreamControlVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IAMStreamControl * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IAMStreamControl * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IAMStreamControl * This);
        HRESULT ( STDMETHODCALLTYPE *StartAt )(
            IAMStreamControl * This,
            _In_opt_ const REFERENCE_TIME *ptStart,
                       DWORD dwCookie);
        HRESULT ( STDMETHODCALLTYPE *StopAt )(
            IAMStreamControl * This,
            _In_opt_ const REFERENCE_TIME *ptStop,
                       BOOL bSendExtra,
                       DWORD dwCookie);
        HRESULT ( STDMETHODCALLTYPE *GetInfo )(
            IAMStreamControl * This,
            _Out_ AM_STREAM_INFO *pInfo);
        END_INTERFACE
    } IAMStreamControlVtbl;
    interface IAMStreamControl
    {
        CONST_VTBL struct IAMStreamControlVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> StartAt(This,ptStart,dwCookie) )
    ( (This)->lpVtbl -> StopAt(This,ptStop,bSendExtra,dwCookie) )
    ( (This)->lpVtbl -> GetInfo(This,pInfo) )
EXTERN_C const IID IID_ISeekingPassThru;
    typedef struct ISeekingPassThruVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISeekingPassThru * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISeekingPassThru * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISeekingPassThru * This);
        HRESULT ( STDMETHODCALLTYPE *Init )(
            ISeekingPassThru * This,
                       BOOL bSupportRendering,
                       IPin *pPin);
        END_INTERFACE
    } ISeekingPassThruVtbl;
    interface ISeekingPassThru
    {
        CONST_VTBL struct ISeekingPassThruVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Init(This,bSupportRendering,pPin) )
typedef struct _VIDEO_STREAM_CONFIG_CAPS
    {
    GUID guid;
    ULONG VideoStandard;
    SIZE InputSize;
    SIZE MinCroppingSize;
    SIZE MaxCroppingSize;
    int CropGranularityX;
    int CropGranularityY;
    int CropAlignX;
    int CropAlignY;
    SIZE MinOutputSize;
    SIZE MaxOutputSize;
    int OutputGranularityX;
    int OutputGranularityY;
    int StretchTapsX;
    int StretchTapsY;
    int ShrinkTapsX;
    int ShrinkTapsY;
    LONGLONG MinFrameInterval;
    LONGLONG MaxFrameInterval;
    LONG MinBitsPerSecond;
    LONG MaxBitsPerSecond;
    } VIDEO_STREAM_CONFIG_CAPS;
typedef struct _AUDIO_STREAM_CONFIG_CAPS
    {
    GUID guid;
    ULONG MinimumChannels;
    ULONG MaximumChannels;
    ULONG ChannelsGranularity;
    ULONG MinimumBitsPerSample;
    ULONG MaximumBitsPerSample;
    ULONG BitsPerSampleGranularity;
    ULONG MinimumSampleFrequency;
    ULONG MaximumSampleFrequency;
    ULONG SampleFrequencyGranularity;
    } AUDIO_STREAM_CONFIG_CAPS;
EXTERN_C const IID IID_IAMStreamConfig;
    typedef struct IAMStreamConfigVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IAMStreamConfig * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IAMStreamConfig * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IAMStreamConfig * This);
        HRESULT ( STDMETHODCALLTYPE *SetFormat )(
            IAMStreamConfig * This,
                       AM_MEDIA_TYPE *pmt);
        HRESULT ( STDMETHODCALLTYPE *GetFormat )(
            IAMStreamConfig * This,
            _Out_ AM_MEDIA_TYPE **ppmt);
        HRESULT ( STDMETHODCALLTYPE *GetNumberOfCapabilities )(
            IAMStreamConfig * This,
            _Out_ int *piCount,
            _Out_ int *piSize);
        HRESULT ( STDMETHODCALLTYPE *GetStreamCaps )(
            IAMStreamConfig * This,
                       int iIndex,
            _Out_ AM_MEDIA_TYPE **ppmt,
            _Out_ BYTE *pSCC);
        END_INTERFACE
    } IAMStreamConfigVtbl;
    interface IAMStreamConfig
    {
        CONST_VTBL struct IAMStreamConfigVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetFormat(This,pmt) )
    ( (This)->lpVtbl -> GetFormat(This,ppmt) )
    ( (This)->lpVtbl -> GetNumberOfCapabilities(This,piCount,piSize) )
    ( (This)->lpVtbl -> GetStreamCaps(This,iIndex,ppmt,pSCC) )
typedef
enum InterleavingMode
    {
        INTERLEAVE_NONE = 0,
        INTERLEAVE_CAPTURE = ( INTERLEAVE_NONE + 1 ) ,
        INTERLEAVE_FULL = ( INTERLEAVE_CAPTURE + 1 ) ,
        INTERLEAVE_NONE_BUFFERED = ( INTERLEAVE_FULL + 1 )
    } InterleavingMode;
EXTERN_C const IID IID_IConfigInterleaving;
    typedef struct IConfigInterleavingVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IConfigInterleaving * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IConfigInterleaving * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IConfigInterleaving * This);
        HRESULT ( STDMETHODCALLTYPE *put_Mode )(
            IConfigInterleaving * This,
                       InterleavingMode mode);
        HRESULT ( STDMETHODCALLTYPE *get_Mode )(
            IConfigInterleaving * This,
            _Out_ InterleavingMode *pMode);
        HRESULT ( STDMETHODCALLTYPE *put_Interleaving )(
            IConfigInterleaving * This,
                       const REFERENCE_TIME *prtInterleave,
                       const REFERENCE_TIME *prtPreroll);
        HRESULT ( STDMETHODCALLTYPE *get_Interleaving )(
            IConfigInterleaving * This,
            _Out_ REFERENCE_TIME *prtInterleave,
            _Out_ REFERENCE_TIME *prtPreroll);
        END_INTERFACE
    } IConfigInterleavingVtbl;
    interface IConfigInterleaving
    {
        CONST_VTBL struct IConfigInterleavingVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> put_Mode(This,mode) )
    ( (This)->lpVtbl -> get_Mode(This,pMode) )
    ( (This)->lpVtbl -> put_Interleaving(This,prtInterleave,prtPreroll) )
    ( (This)->lpVtbl -> get_Interleaving(This,prtInterleave,prtPreroll) )
EXTERN_C const IID IID_IConfigAviMux;
    typedef struct IConfigAviMuxVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IConfigAviMux * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IConfigAviMux * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IConfigAviMux * This);
        HRESULT ( STDMETHODCALLTYPE *SetMasterStream )(
            IConfigAviMux * This,
                       LONG iStream);
        HRESULT ( STDMETHODCALLTYPE *GetMasterStream )(
            IConfigAviMux * This,
            _Out_ LONG *pStream);
        HRESULT ( STDMETHODCALLTYPE *SetOutputCompatibilityIndex )(
            IConfigAviMux * This,
                       BOOL fOldIndex);
        HRESULT ( STDMETHODCALLTYPE *GetOutputCompatibilityIndex )(
            IConfigAviMux * This,
            _Out_ BOOL *pfOldIndex);
        END_INTERFACE
    } IConfigAviMuxVtbl;
    interface IConfigAviMux
    {
        CONST_VTBL struct IConfigAviMuxVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetMasterStream(This,iStream) )
    ( (This)->lpVtbl -> GetMasterStream(This,pStream) )
    ( (This)->lpVtbl -> SetOutputCompatibilityIndex(This,fOldIndex) )
    ( (This)->lpVtbl -> GetOutputCompatibilityIndex(This,pfOldIndex) )
typedef
enum CompressionCaps
    {
        CompressionCaps_CanQuality = 0x1,
        CompressionCaps_CanCrunch = 0x2,
        CompressionCaps_CanKeyFrame = 0x4,
        CompressionCaps_CanBFrame = 0x8,
        CompressionCaps_CanWindow = 0x10
    } CompressionCaps;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0050_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0050_v0_0_s_ifspec;
EXTERN_C const IID IID_IAMVideoCompression;
    typedef struct IAMVideoCompressionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IAMVideoCompression * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IAMVideoCompression * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IAMVideoCompression * This);
        HRESULT ( STDMETHODCALLTYPE *put_KeyFrameRate )(
            IAMVideoCompression * This,
                       long KeyFrameRate);
        HRESULT ( STDMETHODCALLTYPE *get_KeyFrameRate )(
            IAMVideoCompression * This,
            _Out_ long *pKeyFrameRate);
        HRESULT ( STDMETHODCALLTYPE *put_PFramesPerKeyFrame )(
            IAMVideoCompression * This,
                       long PFramesPerKeyFrame);
        HRESULT ( STDMETHODCALLTYPE *get_PFramesPerKeyFrame )(
            IAMVideoCompression * This,
            _Out_ long *pPFramesPerKeyFrame);
        HRESULT ( STDMETHODCALLTYPE *put_Quality )(
            IAMVideoCompression * This,
                       double Quality);
        HRESULT ( STDMETHODCALLTYPE *get_Quality )(
            IAMVideoCompression * This,
            _Out_ double *pQuality);
        HRESULT ( STDMETHODCALLTYPE *put_WindowSize )(
            IAMVideoCompression * This,
                       DWORDLONG WindowSize);
        HRESULT ( STDMETHODCALLTYPE *get_WindowSize )(
            IAMVideoCompression * This,
            _Out_ DWORDLONG *pWindowSize);
        HRESULT ( STDMETHODCALLTYPE *GetInfo )(
            IAMVideoCompression * This,
            _Out_writes_bytes_opt_(*pcbVersion) LPWSTR pszVersion,
            _Inout_opt_ int *pcbVersion,
            _Out_writes_bytes_opt_(*pcbDescription) LPWSTR pszDescription,
            _Inout_opt_ int *pcbDescription,
            _Out_opt_ long *pDefaultKeyFrameRate,
            _Out_opt_ long *pDefaultPFramesPerKey,
            _Out_opt_ double *pDefaultQuality,
            _Out_opt_ long *pCapabilities);
        HRESULT ( STDMETHODCALLTYPE *OverrideKeyFrame )(
            IAMVideoCompression * This,
                       long FrameNumber);
        HRESULT ( STDMETHODCALLTYPE *OverrideFrameSize )(
            IAMVideoCompression * This,
                       long FrameNumber,
                       long Size);
        END_INTERFACE
    } IAMVideoCompressionVtbl;
    interface IAMVideoCompression
    {
        CONST_VTBL struct IAMVideoCompressionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> put_KeyFrameRate(This,KeyFrameRate) )
    ( (This)->lpVtbl -> get_KeyFrameRate(This,pKeyFrameRate) )
    ( (This)->lpVtbl -> put_PFramesPerKeyFrame(This,PFramesPerKeyFrame) )
    ( (This)->lpVtbl -> get_PFramesPerKeyFrame(This,pPFramesPerKeyFrame) )
    ( (This)->lpVtbl -> put_Quality(This,Quality) )
    ( (This)->lpVtbl -> get_Quality(This,pQuality) )
    ( (This)->lpVtbl -> put_WindowSize(This,WindowSize) )
    ( (This)->lpVtbl -> get_WindowSize(This,pWindowSize) )
    ( (This)->lpVtbl -> GetInfo(This,pszVersion,pcbVersion,pszDescription,pcbDescription,pDefaultKeyFrameRate,pDefaultPFramesPerKey,pDefaultQuality,pCapabilities) )
    ( (This)->lpVtbl -> OverrideKeyFrame(This,FrameNumber) )
    ( (This)->lpVtbl -> OverrideFrameSize(This,FrameNumber,Size) )
typedef
enum VfwCaptureDialogs
    {
        VfwCaptureDialog_Source = 0x1,
        VfwCaptureDialog_Format = 0x2,
        VfwCaptureDialog_Display = 0x4
    } VfwCaptureDialogs;
typedef
enum VfwCompressDialogs
    {
        VfwCompressDialog_Config = 0x1,
        VfwCompressDialog_About = 0x2,
        VfwCompressDialog_QueryConfig = 0x4,
        VfwCompressDialog_QueryAbout = 0x8
    } VfwCompressDialogs;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0051_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0051_v0_0_s_ifspec;
EXTERN_C const IID IID_IAMVfwCaptureDialogs;
    typedef struct IAMVfwCaptureDialogsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IAMVfwCaptureDialogs * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IAMVfwCaptureDialogs * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IAMVfwCaptureDialogs * This);
        HRESULT ( STDMETHODCALLTYPE *HasDialog )(
            IAMVfwCaptureDialogs * This,
                       int iDialog);
        HRESULT ( STDMETHODCALLTYPE *ShowDialog )(
            IAMVfwCaptureDialogs * This,
                       int iDialog,
                       HWND hwnd);
        HRESULT ( STDMETHODCALLTYPE *SendDriverMessage )(
            IAMVfwCaptureDialogs * This,
                       int iDialog,
                       int uMsg,
                       long dw1,
                       long dw2);
        END_INTERFACE
    } IAMVfwCaptureDialogsVtbl;
    interface IAMVfwCaptureDialogs
    {
        CONST_VTBL struct IAMVfwCaptureDialogsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> HasDialog(This,iDialog) )
    ( (This)->lpVtbl -> ShowDialog(This,iDialog,hwnd) )
    ( (This)->lpVtbl -> SendDriverMessage(This,iDialog,uMsg,dw1,dw2) )
EXTERN_C const IID IID_IAMVfwCompressDialogs;
    typedef struct IAMVfwCompressDialogsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IAMVfwCompressDialogs * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IAMVfwCompressDialogs * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IAMVfwCompressDialogs * This);
        HRESULT ( STDMETHODCALLTYPE *ShowDialog )(
            IAMVfwCompressDialogs * This,
                       int iDialog,
                       HWND hwnd);
        HRESULT ( STDMETHODCALLTYPE *GetState )(
            IAMVfwCompressDialogs * This,
            _Out_writes_bytes_to_(*pcbState, *pcbState) LPVOID pState,
            _Inout_ int *pcbState);
        HRESULT ( STDMETHODCALLTYPE *SetState )(
            IAMVfwCompressDialogs * This,
            _In_reads_bytes_(cbState) LPVOID pState,
                       int cbState);
        HRESULT ( STDMETHODCALLTYPE *SendDriverMessage )(
            IAMVfwCompressDialogs * This,
                       int uMsg,
                       long dw1,
                       long dw2);
        END_INTERFACE
    } IAMVfwCompressDialogsVtbl;
    interface IAMVfwCompressDialogs
    {
        CONST_VTBL struct IAMVfwCompressDialogsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> ShowDialog(This,iDialog,hwnd) )
    ( (This)->lpVtbl -> GetState(This,pState,pcbState) )
    ( (This)->lpVtbl -> SetState(This,pState,cbState) )
    ( (This)->lpVtbl -> SendDriverMessage(This,uMsg,dw1,dw2) )
EXTERN_C const IID IID_IAMDroppedFrames;
    typedef struct IAMDroppedFramesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IAMDroppedFrames * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IAMDroppedFrames * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IAMDroppedFrames * This);
        HRESULT ( STDMETHODCALLTYPE *GetNumDropped )(
            IAMDroppedFrames * This,
            _Out_ long *plDropped);
        HRESULT ( STDMETHODCALLTYPE *GetNumNotDropped )(
            IAMDroppedFrames * This,
            _Out_ long *plNotDropped);
        HRESULT ( STDMETHODCALLTYPE *GetDroppedInfo )(
            IAMDroppedFrames * This,
                       long lSize,
            _Out_ long *plArray,
            _Out_ long *plNumCopied);
        HRESULT ( STDMETHODCALLTYPE *GetAverageFrameSize )(
            IAMDroppedFrames * This,
            _Out_ long *plAverageSize);
        END_INTERFACE
    } IAMDroppedFramesVtbl;
    interface IAMDroppedFrames
    {
        CONST_VTBL struct IAMDroppedFramesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetNumDropped(This,plDropped) )
    ( (This)->lpVtbl -> GetNumNotDropped(This,plNotDropped) )
    ( (This)->lpVtbl -> GetDroppedInfo(This,lSize,plArray,plNumCopied) )
    ( (This)->lpVtbl -> GetAverageFrameSize(This,plAverageSize) )
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0054_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0054_v0_0_s_ifspec;
EXTERN_C const IID IID_IAMAudioInputMixer;
    typedef struct IAMAudioInputMixerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IAMAudioInputMixer * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IAMAudioInputMixer * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IAMAudioInputMixer * This);
        HRESULT ( STDMETHODCALLTYPE *put_Enable )(
            IAMAudioInputMixer * This,
                       BOOL fEnable);
        HRESULT ( STDMETHODCALLTYPE *get_Enable )(
            IAMAudioInputMixer * This,
            _Out_ BOOL *pfEnable);
        HRESULT ( STDMETHODCALLTYPE *put_Mono )(
            IAMAudioInputMixer * This,
                       BOOL fMono);
        HRESULT ( STDMETHODCALLTYPE *get_Mono )(
            IAMAudioInputMixer * This,
            _Out_ BOOL *pfMono);
        HRESULT ( STDMETHODCALLTYPE *put_MixLevel )(
            IAMAudioInputMixer * This,
                       double Level);
        HRESULT ( STDMETHODCALLTYPE *get_MixLevel )(
            IAMAudioInputMixer * This,
            _Out_ double *pLevel);
        HRESULT ( STDMETHODCALLTYPE *put_Pan )(
            IAMAudioInputMixer * This,
                       double Pan);
        HRESULT ( STDMETHODCALLTYPE *get_Pan )(
            IAMAudioInputMixer * This,
            _Out_ double *pPan);
        HRESULT ( STDMETHODCALLTYPE *put_Loudness )(
            IAMAudioInputMixer * This,
                       BOOL fLoudness);
        HRESULT ( STDMETHODCALLTYPE *get_Loudness )(
            IAMAudioInputMixer * This,
            _Out_ BOOL *pfLoudness);
        HRESULT ( STDMETHODCALLTYPE *put_Treble )(
            IAMAudioInputMixer * This,
                       double Treble);
        HRESULT ( STDMETHODCALLTYPE *get_Treble )(
            IAMAudioInputMixer * This,
            _Out_ double *pTreble);
        HRESULT ( STDMETHODCALLTYPE *get_TrebleRange )(
            IAMAudioInputMixer * This,
            _Out_ double *pRange);
        HRESULT ( STDMETHODCALLTYPE *put_Bass )(
            IAMAudioInputMixer * This,
                       double Bass);
        HRESULT ( STDMETHODCALLTYPE *get_Bass )(
            IAMAudioInputMixer * This,
            _Out_ double *pBass);
        HRESULT ( STDMETHODCALLTYPE *get_BassRange )(
            IAMAudioInputMixer * This,
            _Out_ double *pRange);
        END_INTERFACE
    } IAMAudioInputMixerVtbl;
    interface IAMAudioInputMixer
    {
        CONST_VTBL struct IAMAudioInputMixerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> put_Enable(This,fEnable) )
    ( (This)->lpVtbl -> get_Enable(This,pfEnable) )
    ( (This)->lpVtbl -> put_Mono(This,fMono) )
    ( (This)->lpVtbl -> get_Mono(This,pfMono) )
    ( (This)->lpVtbl -> put_MixLevel(This,Level) )
    ( (This)->lpVtbl -> get_MixLevel(This,pLevel) )
    ( (This)->lpVtbl -> put_Pan(This,Pan) )
    ( (This)->lpVtbl -> get_Pan(This,pPan) )
    ( (This)->lpVtbl -> put_Loudness(This,fLoudness) )
    ( (This)->lpVtbl -> get_Loudness(This,pfLoudness) )
    ( (This)->lpVtbl -> put_Treble(This,Treble) )
    ( (This)->lpVtbl -> get_Treble(This,pTreble) )
    ( (This)->lpVtbl -> get_TrebleRange(This,pRange) )
    ( (This)->lpVtbl -> put_Bass(This,Bass) )
    ( (This)->lpVtbl -> get_Bass(This,pBass) )
    ( (This)->lpVtbl -> get_BassRange(This,pRange) )
EXTERN_C const IID IID_IAMBufferNegotiation;
    typedef struct IAMBufferNegotiationVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IAMBufferNegotiation * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IAMBufferNegotiation * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IAMBufferNegotiation * This);
        HRESULT ( STDMETHODCALLTYPE *SuggestAllocatorProperties )(
            IAMBufferNegotiation * This,
                       const ALLOCATOR_PROPERTIES *pprop);
        HRESULT ( STDMETHODCALLTYPE *GetAllocatorProperties )(
            IAMBufferNegotiation * This,
            _Out_ ALLOCATOR_PROPERTIES *pprop);
        END_INTERFACE
    } IAMBufferNegotiationVtbl;
    interface IAMBufferNegotiation
    {
        CONST_VTBL struct IAMBufferNegotiationVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SuggestAllocatorProperties(This,pprop) )
    ( (This)->lpVtbl -> GetAllocatorProperties(This,pprop) )
#pragma warning(push)
#pragma warning(disable:4001)
       
#pragma warning(push)
#pragma warning(disable:4001)
       
#pragma warning(pop)
#pragma warning(pop)
#pragma region Desktop Family
#pragma region Desktop Family
#pragma endregion
typedef
enum tagAnalogVideoStandard
    {
        AnalogVideo_None = 0,
        AnalogVideo_NTSC_M = 0x1,
        AnalogVideo_NTSC_M_J = 0x2,
        AnalogVideo_NTSC_433 = 0x4,
        AnalogVideo_PAL_B = 0x10,
        AnalogVideo_PAL_D = 0x20,
        AnalogVideo_PAL_G = 0x40,
        AnalogVideo_PAL_H = 0x80,
        AnalogVideo_PAL_I = 0x100,
        AnalogVideo_PAL_M = 0x200,
        AnalogVideo_PAL_N = 0x400,
        AnalogVideo_PAL_60 = 0x800,
        AnalogVideo_SECAM_B = 0x1000,
        AnalogVideo_SECAM_D = 0x2000,
        AnalogVideo_SECAM_G = 0x4000,
        AnalogVideo_SECAM_H = 0x8000,
        AnalogVideo_SECAM_K = 0x10000,
        AnalogVideo_SECAM_K1 = 0x20000,
        AnalogVideo_SECAM_L = 0x40000,
        AnalogVideo_SECAM_L1 = 0x80000,
        AnalogVideo_PAL_N_COMBO = 0x100000,
        AnalogVideoMask_MCE_NTSC = ( ( ( ( ( ( AnalogVideo_NTSC_M | AnalogVideo_NTSC_M_J ) | AnalogVideo_NTSC_433 ) | AnalogVideo_PAL_M ) | AnalogVideo_PAL_N ) | AnalogVideo_PAL_60 ) | AnalogVideo_PAL_N_COMBO ) ,
        AnalogVideoMask_MCE_PAL = ( ( ( ( AnalogVideo_PAL_B | AnalogVideo_PAL_D ) | AnalogVideo_PAL_G ) | AnalogVideo_PAL_H ) | AnalogVideo_PAL_I ) ,
        AnalogVideoMask_MCE_SECAM = ( ( ( ( ( ( ( AnalogVideo_SECAM_B | AnalogVideo_SECAM_D ) | AnalogVideo_SECAM_G ) | AnalogVideo_SECAM_H ) | AnalogVideo_SECAM_K ) | AnalogVideo_SECAM_K1 ) | AnalogVideo_SECAM_L ) | AnalogVideo_SECAM_L1 )
    } AnalogVideoStandard;
typedef
enum tagTunerInputType
    {
        TunerInputCable = 0,
        TunerInputAntenna = ( TunerInputCable + 1 )
    } TunerInputType;
#pragma region Desktop Family
#pragma endregion
#pragma endregion
typedef
enum VideoCopyProtectionType
    {
        VideoCopyProtectionMacrovisionBasic = 0,
        VideoCopyProtectionMacrovisionCBI = ( VideoCopyProtectionMacrovisionBasic + 1 )
    } VideoCopyProtectionType;
typedef
enum tagPhysicalConnectorType
    {
        PhysConn_Video_Tuner = 1,
        PhysConn_Video_Composite = ( PhysConn_Video_Tuner + 1 ) ,
        PhysConn_Video_SVideo = ( PhysConn_Video_Composite + 1 ) ,
        PhysConn_Video_RGB = ( PhysConn_Video_SVideo + 1 ) ,
        PhysConn_Video_YRYBY = ( PhysConn_Video_RGB + 1 ) ,
        PhysConn_Video_SerialDigital = ( PhysConn_Video_YRYBY + 1 ) ,
        PhysConn_Video_ParallelDigital = ( PhysConn_Video_SerialDigital + 1 ) ,
        PhysConn_Video_SCSI = ( PhysConn_Video_ParallelDigital + 1 ) ,
        PhysConn_Video_AUX = ( PhysConn_Video_SCSI + 1 ) ,
        PhysConn_Video_1394 = ( PhysConn_Video_AUX + 1 ) ,
        PhysConn_Video_USB = ( PhysConn_Video_1394 + 1 ) ,
        PhysConn_Video_VideoDecoder = ( PhysConn_Video_USB + 1 ) ,
        PhysConn_Video_VideoEncoder = ( PhysConn_Video_VideoDecoder + 1 ) ,
        PhysConn_Video_SCART = ( PhysConn_Video_VideoEncoder + 1 ) ,
        PhysConn_Video_Black = ( PhysConn_Video_SCART + 1 ) ,
        PhysConn_Audio_Tuner = 0x1000,
        PhysConn_Audio_Line = ( PhysConn_Audio_Tuner + 1 ) ,
        PhysConn_Audio_Mic = ( PhysConn_Audio_Line + 1 ) ,
        PhysConn_Audio_AESDigital = ( PhysConn_Audio_Mic + 1 ) ,
        PhysConn_Audio_SPDIFDigital = ( PhysConn_Audio_AESDigital + 1 ) ,
        PhysConn_Audio_SCSI = ( PhysConn_Audio_SPDIFDigital + 1 ) ,
        PhysConn_Audio_AUX = ( PhysConn_Audio_SCSI + 1 ) ,
        PhysConn_Audio_1394 = ( PhysConn_Audio_AUX + 1 ) ,
        PhysConn_Audio_USB = ( PhysConn_Audio_1394 + 1 ) ,
        PhysConn_Audio_AudioDecoder = ( PhysConn_Audio_USB + 1 )
    } PhysicalConnectorType;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0056_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0056_v0_0_s_ifspec;
EXTERN_C const IID IID_IAMAnalogVideoDecoder;
    typedef struct IAMAnalogVideoDecoderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IAMAnalogVideoDecoder * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IAMAnalogVideoDecoder * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IAMAnalogVideoDecoder * This);
        HRESULT ( STDMETHODCALLTYPE *get_AvailableTVFormats )(
            IAMAnalogVideoDecoder * This,
            _Out_ long *lAnalogVideoStandard);
        HRESULT ( STDMETHODCALLTYPE *put_TVFormat )(
            IAMAnalogVideoDecoder * This,
                       long lAnalogVideoStandard);
        HRESULT ( STDMETHODCALLTYPE *get_TVFormat )(
            IAMAnalogVideoDecoder * This,
            _Out_ long *plAnalogVideoStandard);
        HRESULT ( STDMETHODCALLTYPE *get_HorizontalLocked )(
            IAMAnalogVideoDecoder * This,
            _Out_ long *plLocked);
        HRESULT ( STDMETHODCALLTYPE *put_VCRHorizontalLocking )(
            IAMAnalogVideoDecoder * This,
                       long lVCRHorizontalLocking);
        HRESULT ( STDMETHODCALLTYPE *get_VCRHorizontalLocking )(
            IAMAnalogVideoDecoder * This,
            _Out_ long *plVCRHorizontalLocking);
        HRESULT ( STDMETHODCALLTYPE *get_NumberOfLines )(
            IAMAnalogVideoDecoder * This,
            _Out_ long *plNumberOfLines);
        HRESULT ( STDMETHODCALLTYPE *put_OutputEnable )(
            IAMAnalogVideoDecoder * This,
                       long lOutputEnable);
        HRESULT ( STDMETHODCALLTYPE *get_OutputEnable )(
            IAMAnalogVideoDecoder * This,
            _Out_ long *plOutputEnable);
        END_INTERFACE
    } IAMAnalogVideoDecoderVtbl;
    interface IAMAnalogVideoDecoder
    {
        CONST_VTBL struct IAMAnalogVideoDecoderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_AvailableTVFormats(This,lAnalogVideoStandard) )
    ( (This)->lpVtbl -> put_TVFormat(This,lAnalogVideoStandard) )
    ( (This)->lpVtbl -> get_TVFormat(This,plAnalogVideoStandard) )
    ( (This)->lpVtbl -> get_HorizontalLocked(This,plLocked) )
    ( (This)->lpVtbl -> put_VCRHorizontalLocking(This,lVCRHorizontalLocking) )
    ( (This)->lpVtbl -> get_VCRHorizontalLocking(This,plVCRHorizontalLocking) )
    ( (This)->lpVtbl -> get_NumberOfLines(This,plNumberOfLines) )
    ( (This)->lpVtbl -> put_OutputEnable(This,lOutputEnable) )
    ( (This)->lpVtbl -> get_OutputEnable(This,plOutputEnable) )
typedef
enum tagVideoProcAmpProperty
    {
        VideoProcAmp_Brightness = 0,
        VideoProcAmp_Contrast = ( VideoProcAmp_Brightness + 1 ) ,
        VideoProcAmp_Hue = ( VideoProcAmp_Contrast + 1 ) ,
        VideoProcAmp_Saturation = ( VideoProcAmp_Hue + 1 ) ,
        VideoProcAmp_Sharpness = ( VideoProcAmp_Saturation + 1 ) ,
        VideoProcAmp_Gamma = ( VideoProcAmp_Sharpness + 1 ) ,
        VideoProcAmp_ColorEnable = ( VideoProcAmp_Gamma + 1 ) ,
        VideoProcAmp_WhiteBalance = ( VideoProcAmp_ColorEnable + 1 ) ,
        VideoProcAmp_BacklightCompensation = ( VideoProcAmp_WhiteBalance + 1 ) ,
        VideoProcAmp_Gain = ( VideoProcAmp_BacklightCompensation + 1 )
    } VideoProcAmpProperty;
typedef
enum tagVideoProcAmpFlags
    {
        VideoProcAmp_Flags_Auto = 0x1,
        VideoProcAmp_Flags_Manual = 0x2
    } VideoProcAmpFlags;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0057_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0057_v0_0_s_ifspec;
EXTERN_C const IID IID_IAMVideoProcAmp;
    typedef struct IAMVideoProcAmpVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IAMVideoProcAmp * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IAMVideoProcAmp * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IAMVideoProcAmp * This);
        HRESULT ( STDMETHODCALLTYPE *GetRange )(
            IAMVideoProcAmp * This,
                       long Property,
            _Out_ long *pMin,
            _Out_ long *pMax,
            _Out_ long *pSteppingDelta,
            _Out_ long *pDefault,
            _Out_ long *pCapsFlags);
        HRESULT ( STDMETHODCALLTYPE *Set )(
            IAMVideoProcAmp * This,
                       long Property,
                       long lValue,
                       long Flags);
        HRESULT ( STDMETHODCALLTYPE *Get )(
            IAMVideoProcAmp * This,
                       long Property,
            _Out_ long *lValue,
            _Out_ long *Flags);
        END_INTERFACE
    } IAMVideoProcAmpVtbl;
    interface IAMVideoProcAmp
    {
        CONST_VTBL struct IAMVideoProcAmpVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetRange(This,Property,pMin,pMax,pSteppingDelta,pDefault,pCapsFlags) )
    ( (This)->lpVtbl -> Set(This,Property,lValue,Flags) )
    ( (This)->lpVtbl -> Get(This,Property,lValue,Flags) )
typedef
enum tagCameraControlProperty
    {
        CameraControl_Pan = 0,
        CameraControl_Tilt = ( CameraControl_Pan + 1 ) ,
        CameraControl_Roll = ( CameraControl_Tilt + 1 ) ,
        CameraControl_Zoom = ( CameraControl_Roll + 1 ) ,
        CameraControl_Exposure = ( CameraControl_Zoom + 1 ) ,
        CameraControl_Iris = ( CameraControl_Exposure + 1 ) ,
        CameraControl_Focus = ( CameraControl_Iris + 1 )
    } CameraControlProperty;
typedef
enum tagCameraControlFlags
    {
        CameraControl_Flags_Auto = 0x1,
        CameraControl_Flags_Manual = 0x2
    } CameraControlFlags;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0058_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0058_v0_0_s_ifspec;
EXTERN_C const IID IID_IAMCameraControl;
    typedef struct IAMCameraControlVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IAMCameraControl * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IAMCameraControl * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IAMCameraControl * This);
        HRESULT ( STDMETHODCALLTYPE *GetRange )(
            IAMCameraControl * This,
                       long Property,
            _Out_ long *pMin,
            _Out_ long *pMax,
            _Out_ long *pSteppingDelta,
            _Out_ long *pDefault,
            _Out_ long *pCapsFlags);
        HRESULT ( STDMETHODCALLTYPE *Set )(
            IAMCameraControl * This,
                       long Property,
                       long lValue,
                       long Flags);
        HRESULT ( STDMETHODCALLTYPE *Get )(
            IAMCameraControl * This,
                       long Property,
            _Out_ long *lValue,
            _Out_ long *Flags);
        END_INTERFACE
    } IAMCameraControlVtbl;
    interface IAMCameraControl
    {
        CONST_VTBL struct IAMCameraControlVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetRange(This,Property,pMin,pMax,pSteppingDelta,pDefault,pCapsFlags) )
    ( (This)->lpVtbl -> Set(This,Property,lValue,Flags) )
    ( (This)->lpVtbl -> Get(This,Property,lValue,Flags) )
typedef
enum tagVideoControlFlags
    {
        VideoControlFlag_FlipHorizontal = 0x1,
        VideoControlFlag_FlipVertical = 0x2,
        VideoControlFlag_ExternalTriggerEnable = 0x4,
        VideoControlFlag_Trigger = 0x8
    } VideoControlFlags;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0059_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0059_v0_0_s_ifspec;
EXTERN_C const IID IID_IAMVideoControl;
    typedef struct IAMVideoControlVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IAMVideoControl * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IAMVideoControl * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IAMVideoControl * This);
        HRESULT ( STDMETHODCALLTYPE *GetCaps )(
            IAMVideoControl * This,
                       IPin *pPin,
            _Out_ long *pCapsFlags);
        HRESULT ( STDMETHODCALLTYPE *SetMode )(
            IAMVideoControl * This,
                       IPin *pPin,
                       long Mode);
        HRESULT ( STDMETHODCALLTYPE *GetMode )(
            IAMVideoControl * This,
                       IPin *pPin,
            _Out_ long *Mode);
        HRESULT ( STDMETHODCALLTYPE *GetCurrentActualFrameRate )(
            IAMVideoControl * This,
                       IPin *pPin,
            _Out_ LONGLONG *ActualFrameRate);
        HRESULT ( STDMETHODCALLTYPE *GetMaxAvailableFrameRate )(
            IAMVideoControl * This,
                       IPin *pPin,
                       long iIndex,
                       SIZE Dimensions,
            _Out_ LONGLONG *MaxAvailableFrameRate);
        HRESULT ( STDMETHODCALLTYPE *GetFrameRateList )(
            IAMVideoControl * This,
                       IPin *pPin,
                       long iIndex,
                       SIZE Dimensions,
            _Out_ long *ListSize,
            _Out_ LONGLONG **FrameRates);
        END_INTERFACE
    } IAMVideoControlVtbl;
    interface IAMVideoControl
    {
        CONST_VTBL struct IAMVideoControlVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetCaps(This,pPin,pCapsFlags) )
    ( (This)->lpVtbl -> SetMode(This,pPin,Mode) )
    ( (This)->lpVtbl -> GetMode(This,pPin,Mode) )
    ( (This)->lpVtbl -> GetCurrentActualFrameRate(This,pPin,ActualFrameRate) )
    ( (This)->lpVtbl -> GetMaxAvailableFrameRate(This,pPin,iIndex,Dimensions,MaxAvailableFrameRate) )
    ( (This)->lpVtbl -> GetFrameRateList(This,pPin,iIndex,Dimensions,ListSize,FrameRates) )
EXTERN_C const IID IID_IAMCrossbar;
    typedef struct IAMCrossbarVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IAMCrossbar * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IAMCrossbar * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IAMCrossbar * This);
        HRESULT ( STDMETHODCALLTYPE *get_PinCounts )(
            IAMCrossbar * This,
            _Out_ long *OutputPinCount,
            _Out_ long *InputPinCount);
        HRESULT ( STDMETHODCALLTYPE *CanRoute )(
            IAMCrossbar * This,
                       long OutputPinIndex,
                       long InputPinIndex);
        HRESULT ( STDMETHODCALLTYPE *Route )(
            IAMCrossbar * This,
                       long OutputPinIndex,
                       long InputPinIndex);
        HRESULT ( STDMETHODCALLTYPE *get_IsRoutedTo )(
            IAMCrossbar * This,
                       long OutputPinIndex,
            _Out_ long *InputPinIndex);
        HRESULT ( STDMETHODCALLTYPE *get_CrossbarPinInfo )(
            IAMCrossbar * This,
                       BOOL IsInputPin,
                       long PinIndex,
            _Out_ long *PinIndexRelated,
            _Out_ long *PhysicalType);
        END_INTERFACE
    } IAMCrossbarVtbl;
    interface IAMCrossbar
    {
        CONST_VTBL struct IAMCrossbarVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_PinCounts(This,OutputPinCount,InputPinCount) )
    ( (This)->lpVtbl -> CanRoute(This,OutputPinIndex,InputPinIndex) )
    ( (This)->lpVtbl -> Route(This,OutputPinIndex,InputPinIndex) )
    ( (This)->lpVtbl -> get_IsRoutedTo(This,OutputPinIndex,InputPinIndex) )
    ( (This)->lpVtbl -> get_CrossbarPinInfo(This,IsInputPin,PinIndex,PinIndexRelated,PhysicalType) )
typedef
enum tagAMTunerSubChannel
    {
        AMTUNER_SUBCHAN_NO_TUNE = -2,
        AMTUNER_SUBCHAN_DEFAULT = -1
    } AMTunerSubChannel;
typedef
enum tagAMTunerSignalStrength
    {
        AMTUNER_HASNOSIGNALSTRENGTH = -1,
        AMTUNER_NOSIGNAL = 0,
        AMTUNER_SIGNALPRESENT = 1
    } AMTunerSignalStrength;
typedef
enum tagAMTunerModeType
    {
        AMTUNER_MODE_DEFAULT = 0,
        AMTUNER_MODE_TV = 0x1,
        AMTUNER_MODE_FM_RADIO = 0x2,
        AMTUNER_MODE_AM_RADIO = 0x4,
        AMTUNER_MODE_DSS = 0x8
    } AMTunerModeType;
typedef
enum tagAMTunerEventType
    {
        AMTUNER_EVENT_CHANGED = 0x1
    } AMTunerEventType;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0061_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0061_v0_0_s_ifspec;
EXTERN_C const IID IID_IAMTuner;
    typedef struct IAMTunerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IAMTuner * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IAMTuner * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IAMTuner * This);
        HRESULT ( STDMETHODCALLTYPE *put_Channel )(
            IAMTuner * This,
                       long lChannel,
                       long lVideoSubChannel,
                       long lAudioSubChannel);
        HRESULT ( STDMETHODCALLTYPE *get_Channel )(
            IAMTuner * This,
            _Out_ long *plChannel,
            _Out_ long *plVideoSubChannel,
            _Out_ long *plAudioSubChannel);
        HRESULT ( STDMETHODCALLTYPE *ChannelMinMax )(
            IAMTuner * This,
            _Out_ long *lChannelMin,
            _Out_ long *lChannelMax);
        HRESULT ( STDMETHODCALLTYPE *put_CountryCode )(
            IAMTuner * This,
                       long lCountryCode);
        HRESULT ( STDMETHODCALLTYPE *get_CountryCode )(
            IAMTuner * This,
            _Out_ long *plCountryCode);
        HRESULT ( STDMETHODCALLTYPE *put_TuningSpace )(
            IAMTuner * This,
                       long lTuningSpace);
        HRESULT ( STDMETHODCALLTYPE *get_TuningSpace )(
            IAMTuner * This,
            _Out_ long *plTuningSpace);
                      HRESULT ( STDMETHODCALLTYPE *Logon )(
            IAMTuner * This,
                       HANDLE hCurrentUser);
        HRESULT ( STDMETHODCALLTYPE *Logout )(
            IAMTuner * This);
        HRESULT ( STDMETHODCALLTYPE *SignalPresent )(
            IAMTuner * This,
            _Out_ long *plSignalStrength);
        HRESULT ( STDMETHODCALLTYPE *put_Mode )(
            IAMTuner * This,
                       AMTunerModeType lMode);
        HRESULT ( STDMETHODCALLTYPE *get_Mode )(
            IAMTuner * This,
            _Out_ AMTunerModeType *plMode);
        HRESULT ( STDMETHODCALLTYPE *GetAvailableModes )(
            IAMTuner * This,
            _Out_ long *plModes);
        HRESULT ( STDMETHODCALLTYPE *RegisterNotificationCallBack )(
            IAMTuner * This,
                       IAMTunerNotification *pNotify,
                       long lEvents);
        HRESULT ( STDMETHODCALLTYPE *UnRegisterNotificationCallBack )(
            IAMTuner * This,
                       IAMTunerNotification *pNotify);
        END_INTERFACE
    } IAMTunerVtbl;
    interface IAMTuner
    {
        CONST_VTBL struct IAMTunerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> put_Channel(This,lChannel,lVideoSubChannel,lAudioSubChannel) )
    ( (This)->lpVtbl -> get_Channel(This,plChannel,plVideoSubChannel,plAudioSubChannel) )
    ( (This)->lpVtbl -> ChannelMinMax(This,lChannelMin,lChannelMax) )
    ( (This)->lpVtbl -> put_CountryCode(This,lCountryCode) )
    ( (This)->lpVtbl -> get_CountryCode(This,plCountryCode) )
    ( (This)->lpVtbl -> put_TuningSpace(This,lTuningSpace) )
    ( (This)->lpVtbl -> get_TuningSpace(This,plTuningSpace) )
    ( (This)->lpVtbl -> Logon(This,hCurrentUser) )
    ( (This)->lpVtbl -> Logout(This) )
    ( (This)->lpVtbl -> SignalPresent(This,plSignalStrength) )
    ( (This)->lpVtbl -> put_Mode(This,lMode) )
    ( (This)->lpVtbl -> get_Mode(This,plMode) )
    ( (This)->lpVtbl -> GetAvailableModes(This,plModes) )
    ( (This)->lpVtbl -> RegisterNotificationCallBack(This,pNotify,lEvents) )
    ( (This)->lpVtbl -> UnRegisterNotificationCallBack(This,pNotify) )
EXTERN_C const IID IID_IAMTunerNotification;
    typedef struct IAMTunerNotificationVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IAMTunerNotification * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IAMTunerNotification * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IAMTunerNotification * This);
        HRESULT ( STDMETHODCALLTYPE *OnEvent )(
            IAMTunerNotification * This,
                       AMTunerEventType Event);
        END_INTERFACE
    } IAMTunerNotificationVtbl;
    interface IAMTunerNotification
    {
        CONST_VTBL struct IAMTunerNotificationVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnEvent(This,Event) )
EXTERN_C const IID IID_IAMTVTuner;
    typedef struct IAMTVTunerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IAMTVTuner * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IAMTVTuner * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IAMTVTuner * This);
        HRESULT ( STDMETHODCALLTYPE *put_Channel )(
            IAMTVTuner * This,
                       long lChannel,
                       long lVideoSubChannel,
                       long lAudioSubChannel);
        HRESULT ( STDMETHODCALLTYPE *get_Channel )(
            IAMTVTuner * This,
            _Out_ long *plChannel,
            _Out_ long *plVideoSubChannel,
            _Out_ long *plAudioSubChannel);
        HRESULT ( STDMETHODCALLTYPE *ChannelMinMax )(
            IAMTVTuner * This,
            _Out_ long *lChannelMin,
            _Out_ long *lChannelMax);
        HRESULT ( STDMETHODCALLTYPE *put_CountryCode )(
            IAMTVTuner * This,
                       long lCountryCode);
        HRESULT ( STDMETHODCALLTYPE *get_CountryCode )(
            IAMTVTuner * This,
            _Out_ long *plCountryCode);
        HRESULT ( STDMETHODCALLTYPE *put_TuningSpace )(
            IAMTVTuner * This,
                       long lTuningSpace);
        HRESULT ( STDMETHODCALLTYPE *get_TuningSpace )(
            IAMTVTuner * This,
            _Out_ long *plTuningSpace);
                      HRESULT ( STDMETHODCALLTYPE *Logon )(
            IAMTVTuner * This,
                       HANDLE hCurrentUser);
        HRESULT ( STDMETHODCALLTYPE *Logout )(
            IAMTVTuner * This);
        HRESULT ( STDMETHODCALLTYPE *SignalPresent )(
            IAMTVTuner * This,
            _Out_ long *plSignalStrength);
        HRESULT ( STDMETHODCALLTYPE *put_Mode )(
            IAMTVTuner * This,
                       AMTunerModeType lMode);
        HRESULT ( STDMETHODCALLTYPE *get_Mode )(
            IAMTVTuner * This,
            _Out_ AMTunerModeType *plMode);
        HRESULT ( STDMETHODCALLTYPE *GetAvailableModes )(
            IAMTVTuner * This,
            _Out_ long *plModes);
        HRESULT ( STDMETHODCALLTYPE *RegisterNotificationCallBack )(
            IAMTVTuner * This,
                       IAMTunerNotification *pNotify,
                       long lEvents);
        HRESULT ( STDMETHODCALLTYPE *UnRegisterNotificationCallBack )(
            IAMTVTuner * This,
                       IAMTunerNotification *pNotify);
        HRESULT ( STDMETHODCALLTYPE *get_AvailableTVFormats )(
            IAMTVTuner * This,
            _Out_ long *lAnalogVideoStandard);
        HRESULT ( STDMETHODCALLTYPE *get_TVFormat )(
            IAMTVTuner * This,
            _Out_ long *plAnalogVideoStandard);
        HRESULT ( STDMETHODCALLTYPE *AutoTune )(
            IAMTVTuner * This,
                       long lChannel,
            _Out_ long *plFoundSignal);
        HRESULT ( STDMETHODCALLTYPE *StoreAutoTune )(
            IAMTVTuner * This);
        HRESULT ( STDMETHODCALLTYPE *get_NumInputConnections )(
            IAMTVTuner * This,
            _Out_ long *plNumInputConnections);
        HRESULT ( STDMETHODCALLTYPE *put_InputType )(
            IAMTVTuner * This,
                       long lIndex,
                       TunerInputType InputType);
        HRESULT ( STDMETHODCALLTYPE *get_InputType )(
            IAMTVTuner * This,
                       long lIndex,
            _Out_ TunerInputType *pInputType);
        HRESULT ( STDMETHODCALLTYPE *put_ConnectInput )(
            IAMTVTuner * This,
                       long lIndex);
        HRESULT ( STDMETHODCALLTYPE *get_ConnectInput )(
            IAMTVTuner * This,
            _Out_ long *plIndex);
        HRESULT ( STDMETHODCALLTYPE *get_VideoFrequency )(
            IAMTVTuner * This,
            _Out_ long *lFreq);
        HRESULT ( STDMETHODCALLTYPE *get_AudioFrequency )(
            IAMTVTuner * This,
            _Out_ long *lFreq);
        END_INTERFACE
    } IAMTVTunerVtbl;
    interface IAMTVTuner
    {
        CONST_VTBL struct IAMTVTunerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> put_Channel(This,lChannel,lVideoSubChannel,lAudioSubChannel) )
    ( (This)->lpVtbl -> get_Channel(This,plChannel,plVideoSubChannel,plAudioSubChannel) )
    ( (This)->lpVtbl -> ChannelMinMax(This,lChannelMin,lChannelMax) )
    ( (This)->lpVtbl -> put_CountryCode(This,lCountryCode) )
    ( (This)->lpVtbl -> get_CountryCode(This,plCountryCode) )
    ( (This)->lpVtbl -> put_TuningSpace(This,lTuningSpace) )
    ( (This)->lpVtbl -> get_TuningSpace(This,plTuningSpace) )
    ( (This)->lpVtbl -> Logon(This,hCurrentUser) )
    ( (This)->lpVtbl -> Logout(This) )
    ( (This)->lpVtbl -> SignalPresent(This,plSignalStrength) )
    ( (This)->lpVtbl -> put_Mode(This,lMode) )
    ( (This)->lpVtbl -> get_Mode(This,plMode) )
    ( (This)->lpVtbl -> GetAvailableModes(This,plModes) )
    ( (This)->lpVtbl -> RegisterNotificationCallBack(This,pNotify,lEvents) )
    ( (This)->lpVtbl -> UnRegisterNotificationCallBack(This,pNotify) )
    ( (This)->lpVtbl -> get_AvailableTVFormats(This,lAnalogVideoStandard) )
    ( (This)->lpVtbl -> get_TVFormat(This,plAnalogVideoStandard) )
    ( (This)->lpVtbl -> AutoTune(This,lChannel,plFoundSignal) )
    ( (This)->lpVtbl -> StoreAutoTune(This) )
    ( (This)->lpVtbl -> get_NumInputConnections(This,plNumInputConnections) )
    ( (This)->lpVtbl -> put_InputType(This,lIndex,InputType) )
    ( (This)->lpVtbl -> get_InputType(This,lIndex,pInputType) )
    ( (This)->lpVtbl -> put_ConnectInput(This,lIndex) )
    ( (This)->lpVtbl -> get_ConnectInput(This,plIndex) )
    ( (This)->lpVtbl -> get_VideoFrequency(This,lFreq) )
    ( (This)->lpVtbl -> get_AudioFrequency(This,lFreq) )
EXTERN_C const IID IID_IBPCSatelliteTuner;
    typedef struct IBPCSatelliteTunerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IBPCSatelliteTuner * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IBPCSatelliteTuner * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IBPCSatelliteTuner * This);
        HRESULT ( STDMETHODCALLTYPE *put_Channel )(
            IBPCSatelliteTuner * This,
                       long lChannel,
                       long lVideoSubChannel,
                       long lAudioSubChannel);
        HRESULT ( STDMETHODCALLTYPE *get_Channel )(
            IBPCSatelliteTuner * This,
            _Out_ long *plChannel,
            _Out_ long *plVideoSubChannel,
            _Out_ long *plAudioSubChannel);
        HRESULT ( STDMETHODCALLTYPE *ChannelMinMax )(
            IBPCSatelliteTuner * This,
            _Out_ long *lChannelMin,
            _Out_ long *lChannelMax);
        HRESULT ( STDMETHODCALLTYPE *put_CountryCode )(
            IBPCSatelliteTuner * This,
                       long lCountryCode);
        HRESULT ( STDMETHODCALLTYPE *get_CountryCode )(
            IBPCSatelliteTuner * This,
            _Out_ long *plCountryCode);
        HRESULT ( STDMETHODCALLTYPE *put_TuningSpace )(
            IBPCSatelliteTuner * This,
                       long lTuningSpace);
        HRESULT ( STDMETHODCALLTYPE *get_TuningSpace )(
            IBPCSatelliteTuner * This,
            _Out_ long *plTuningSpace);
                      HRESULT ( STDMETHODCALLTYPE *Logon )(
            IBPCSatelliteTuner * This,
                       HANDLE hCurrentUser);
        HRESULT ( STDMETHODCALLTYPE *Logout )(
            IBPCSatelliteTuner * This);
        HRESULT ( STDMETHODCALLTYPE *SignalPresent )(
            IBPCSatelliteTuner * This,
            _Out_ long *plSignalStrength);
        HRESULT ( STDMETHODCALLTYPE *put_Mode )(
            IBPCSatelliteTuner * This,
                       AMTunerModeType lMode);
        HRESULT ( STDMETHODCALLTYPE *get_Mode )(
            IBPCSatelliteTuner * This,
            _Out_ AMTunerModeType *plMode);
        HRESULT ( STDMETHODCALLTYPE *GetAvailableModes )(
            IBPCSatelliteTuner * This,
            _Out_ long *plModes);
        HRESULT ( STDMETHODCALLTYPE *RegisterNotificationCallBack )(
            IBPCSatelliteTuner * This,
                       IAMTunerNotification *pNotify,
                       long lEvents);
        HRESULT ( STDMETHODCALLTYPE *UnRegisterNotificationCallBack )(
            IBPCSatelliteTuner * This,
                       IAMTunerNotification *pNotify);
        HRESULT ( STDMETHODCALLTYPE *get_DefaultSubChannelTypes )(
            IBPCSatelliteTuner * This,
            _Out_ long *plDefaultVideoType,
            _Out_ long *plDefaultAudioType);
        HRESULT ( STDMETHODCALLTYPE *put_DefaultSubChannelTypes )(
            IBPCSatelliteTuner * This,
                       long lDefaultVideoType,
                       long lDefaultAudioType);
        HRESULT ( STDMETHODCALLTYPE *IsTapingPermitted )(
            IBPCSatelliteTuner * This);
        END_INTERFACE
    } IBPCSatelliteTunerVtbl;
    interface IBPCSatelliteTuner
    {
        CONST_VTBL struct IBPCSatelliteTunerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> put_Channel(This,lChannel,lVideoSubChannel,lAudioSubChannel) )
    ( (This)->lpVtbl -> get_Channel(This,plChannel,plVideoSubChannel,plAudioSubChannel) )
    ( (This)->lpVtbl -> ChannelMinMax(This,lChannelMin,lChannelMax) )
    ( (This)->lpVtbl -> put_CountryCode(This,lCountryCode) )
    ( (This)->lpVtbl -> get_CountryCode(This,plCountryCode) )
    ( (This)->lpVtbl -> put_TuningSpace(This,lTuningSpace) )
    ( (This)->lpVtbl -> get_TuningSpace(This,plTuningSpace) )
    ( (This)->lpVtbl -> Logon(This,hCurrentUser) )
    ( (This)->lpVtbl -> Logout(This) )
    ( (This)->lpVtbl -> SignalPresent(This,plSignalStrength) )
    ( (This)->lpVtbl -> put_Mode(This,lMode) )
    ( (This)->lpVtbl -> get_Mode(This,plMode) )
    ( (This)->lpVtbl -> GetAvailableModes(This,plModes) )
    ( (This)->lpVtbl -> RegisterNotificationCallBack(This,pNotify,lEvents) )
    ( (This)->lpVtbl -> UnRegisterNotificationCallBack(This,pNotify) )
    ( (This)->lpVtbl -> get_DefaultSubChannelTypes(This,plDefaultVideoType,plDefaultAudioType) )
    ( (This)->lpVtbl -> put_DefaultSubChannelTypes(This,lDefaultVideoType,lDefaultAudioType) )
    ( (This)->lpVtbl -> IsTapingPermitted(This) )
typedef
enum tagTVAudioMode
    {
        AMTVAUDIO_MODE_MONO = 0x1,
        AMTVAUDIO_MODE_STEREO = 0x2,
        AMTVAUDIO_MODE_LANG_A = 0x10,
        AMTVAUDIO_MODE_LANG_B = 0x20,
        AMTVAUDIO_MODE_LANG_C = 0x40,
        AMTVAUDIO_PRESET_STEREO = 0x200,
        AMTVAUDIO_PRESET_LANG_A = 0x1000,
        AMTVAUDIO_PRESET_LANG_B = 0x2000,
        AMTVAUDIO_PRESET_LANG_C = 0x4000
    } TVAudioMode;
typedef
enum tagAMTVAudioEventType
    {
        AMTVAUDIO_EVENT_CHANGED = 0x1
    } AMTVAudioEventType;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0065_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0065_v0_0_s_ifspec;
EXTERN_C const IID IID_IAMTVAudio;
    typedef struct IAMTVAudioVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IAMTVAudio * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IAMTVAudio * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IAMTVAudio * This);
        HRESULT ( STDMETHODCALLTYPE *GetHardwareSupportedTVAudioModes )(
            IAMTVAudio * This,
            _Out_ long *plModes);
        HRESULT ( STDMETHODCALLTYPE *GetAvailableTVAudioModes )(
            IAMTVAudio * This,
            _Out_ long *plModes);
        HRESULT ( STDMETHODCALLTYPE *get_TVAudioMode )(
            IAMTVAudio * This,
            _Out_ long *plMode);
        HRESULT ( STDMETHODCALLTYPE *put_TVAudioMode )(
            IAMTVAudio * This,
                       long lMode);
        HRESULT ( STDMETHODCALLTYPE *RegisterNotificationCallBack )(
            IAMTVAudio * This,
                       IAMTunerNotification *pNotify,
                       long lEvents);
        HRESULT ( STDMETHODCALLTYPE *UnRegisterNotificationCallBack )(
            IAMTVAudio * This,
            IAMTunerNotification *pNotify);
        END_INTERFACE
    } IAMTVAudioVtbl;
    interface IAMTVAudio
    {
        CONST_VTBL struct IAMTVAudioVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetHardwareSupportedTVAudioModes(This,plModes) )
    ( (This)->lpVtbl -> GetAvailableTVAudioModes(This,plModes) )
    ( (This)->lpVtbl -> get_TVAudioMode(This,plMode) )
    ( (This)->lpVtbl -> put_TVAudioMode(This,lMode) )
    ( (This)->lpVtbl -> RegisterNotificationCallBack(This,pNotify,lEvents) )
    ( (This)->lpVtbl -> UnRegisterNotificationCallBack(This,pNotify) )
EXTERN_C const IID IID_IAMTVAudioNotification;
    typedef struct IAMTVAudioNotificationVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IAMTVAudioNotification * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IAMTVAudioNotification * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IAMTVAudioNotification * This);
        HRESULT ( STDMETHODCALLTYPE *OnEvent )(
            IAMTVAudioNotification * This,
                       AMTVAudioEventType Event);
        END_INTERFACE
    } IAMTVAudioNotificationVtbl;
    interface IAMTVAudioNotification
    {
        CONST_VTBL struct IAMTVAudioNotificationVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnEvent(This,Event) )
EXTERN_C const IID IID_IAMAnalogVideoEncoder;
    typedef struct IAMAnalogVideoEncoderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IAMAnalogVideoEncoder * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IAMAnalogVideoEncoder * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IAMAnalogVideoEncoder * This);
        HRESULT ( STDMETHODCALLTYPE *get_AvailableTVFormats )(
            IAMAnalogVideoEncoder * This,
            _Out_ long *lAnalogVideoStandard);
        HRESULT ( STDMETHODCALLTYPE *put_TVFormat )(
            IAMAnalogVideoEncoder * This,
                       long lAnalogVideoStandard);
        HRESULT ( STDMETHODCALLTYPE *get_TVFormat )(
            IAMAnalogVideoEncoder * This,
            _Out_ long *plAnalogVideoStandard);
        HRESULT ( STDMETHODCALLTYPE *put_CopyProtection )(
            IAMAnalogVideoEncoder * This,
                       long lVideoCopyProtection);
        HRESULT ( STDMETHODCALLTYPE *get_CopyProtection )(
            IAMAnalogVideoEncoder * This,
            _Out_ long *lVideoCopyProtection);
        HRESULT ( STDMETHODCALLTYPE *put_CCEnable )(
            IAMAnalogVideoEncoder * This,
                       long lCCEnable);
        HRESULT ( STDMETHODCALLTYPE *get_CCEnable )(
            IAMAnalogVideoEncoder * This,
            _Out_ long *lCCEnable);
        END_INTERFACE
    } IAMAnalogVideoEncoderVtbl;
    interface IAMAnalogVideoEncoder
    {
        CONST_VTBL struct IAMAnalogVideoEncoderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_AvailableTVFormats(This,lAnalogVideoStandard) )
    ( (This)->lpVtbl -> put_TVFormat(This,lAnalogVideoStandard) )
    ( (This)->lpVtbl -> get_TVFormat(This,plAnalogVideoStandard) )
    ( (This)->lpVtbl -> put_CopyProtection(This,lVideoCopyProtection) )
    ( (This)->lpVtbl -> get_CopyProtection(This,lVideoCopyProtection) )
    ( (This)->lpVtbl -> put_CCEnable(This,lCCEnable) )
    ( (This)->lpVtbl -> get_CCEnable(This,lCCEnable) )
typedef
enum AMPROPERTY_PIN
    {
        AMPROPERTY_PIN_CATEGORY = 0,
        AMPROPERTY_PIN_MEDIUM = ( AMPROPERTY_PIN_CATEGORY + 1 )
    } AMPROPERTY_PIN;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0068_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0068_v0_0_s_ifspec;
EXTERN_C const IID IID_IKsPropertySet;
    typedef struct IKsPropertySetVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IKsPropertySet * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IKsPropertySet * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IKsPropertySet * This);
                      HRESULT ( STDMETHODCALLTYPE *Set )(
            IKsPropertySet * This,
                       REFGUID guidPropSet,
                       DWORD dwPropID,
            _In_reads_bytes_(cbInstanceData) LPVOID pInstanceData,
                       DWORD cbInstanceData,
            _In_reads_bytes_(cbPropData) LPVOID pPropData,
                       DWORD cbPropData);
                      HRESULT ( STDMETHODCALLTYPE *Get )(
            IKsPropertySet * This,
                       REFGUID guidPropSet,
                       DWORD dwPropID,
            _In_reads_bytes_(cbInstanceData) LPVOID pInstanceData,
                       DWORD cbInstanceData,
            _Out_writes_bytes_to_(cbPropData, *pcbReturned) LPVOID pPropData,
                       DWORD cbPropData,
            _Out_ DWORD *pcbReturned);
        HRESULT ( STDMETHODCALLTYPE *QuerySupported )(
            IKsPropertySet * This,
                       REFGUID guidPropSet,
                       DWORD dwPropID,
            _Out_ DWORD *pTypeSupport);
        END_INTERFACE
    } IKsPropertySetVtbl;
    interface IKsPropertySet
    {
        CONST_VTBL struct IKsPropertySetVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Set(This,guidPropSet,dwPropID,pInstanceData,cbInstanceData,pPropData,cbPropData) )
    ( (This)->lpVtbl -> Get(This,guidPropSet,dwPropID,pInstanceData,cbInstanceData,pPropData,cbPropData,pcbReturned) )
    ( (This)->lpVtbl -> QuerySupported(This,guidPropSet,dwPropID,pTypeSupport) )
                HRESULT STDMETHODCALLTYPE IKsPropertySet_RemoteSet_Proxy(
    IKsPropertySet * This,
               REFGUID guidPropSet,
               DWORD dwPropID,
                        byte *pInstanceData,
               DWORD cbInstanceData,
                        byte *pPropData,
               DWORD cbPropData);
void __RPC_STUB IKsPropertySet_RemoteSet_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                HRESULT STDMETHODCALLTYPE IKsPropertySet_RemoteGet_Proxy(
    IKsPropertySet * This,
               REFGUID guidPropSet,
               DWORD dwPropID,
                        byte *pInstanceData,
               DWORD cbInstanceData,
                         byte *pPropData,
               DWORD cbPropData,
    _Out_ DWORD *pcbReturned);
void __RPC_STUB IKsPropertySet_RemoteGet_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0069_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0069_v0_0_s_ifspec;
typedef IMediaPropertyBag *LPMEDIAPROPERTYBAG;
EXTERN_C const IID IID_IMediaPropertyBag;
    typedef struct IMediaPropertyBagVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMediaPropertyBag * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMediaPropertyBag * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMediaPropertyBag * This);
                      HRESULT ( STDMETHODCALLTYPE *Read )(
            IMediaPropertyBag * This,
                       LPCOLESTR pszPropName,
                            VARIANT *pVar,
                               IErrorLog *pErrorLog);
        HRESULT ( STDMETHODCALLTYPE *Write )(
            IMediaPropertyBag * This,
                       LPCOLESTR pszPropName,
                       VARIANT *pVar);
        HRESULT ( STDMETHODCALLTYPE *EnumProperty )(
            IMediaPropertyBag * This,
                       ULONG iProperty,
                            VARIANT *pvarPropertyName,
                            VARIANT *pvarPropertyValue);
        END_INTERFACE
    } IMediaPropertyBagVtbl;
    interface IMediaPropertyBag
    {
        CONST_VTBL struct IMediaPropertyBagVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Read(This,pszPropName,pVar,pErrorLog) )
    ( (This)->lpVtbl -> Write(This,pszPropName,pVar) )
    ( (This)->lpVtbl -> EnumProperty(This,iProperty,pvarPropertyName,pvarPropertyValue) )
typedef IPersistMediaPropertyBag *LPPERSISTMEDIAPROPERTYBAG;
EXTERN_C const IID IID_IPersistMediaPropertyBag;
    typedef struct IPersistMediaPropertyBagVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IPersistMediaPropertyBag * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IPersistMediaPropertyBag * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IPersistMediaPropertyBag * This);
        HRESULT ( STDMETHODCALLTYPE *GetClassID )(
            IPersistMediaPropertyBag * This,
                        CLSID *pClassID);
        HRESULT ( STDMETHODCALLTYPE *InitNew )(
            IPersistMediaPropertyBag * This);
        HRESULT ( STDMETHODCALLTYPE *Load )(
            IPersistMediaPropertyBag * This,
                       IMediaPropertyBag *pPropBag,
                       IErrorLog *pErrorLog);
        HRESULT ( STDMETHODCALLTYPE *Save )(
            IPersistMediaPropertyBag * This,
                       IMediaPropertyBag *pPropBag,
                       BOOL fClearDirty,
                       BOOL fSaveAllProperties);
        END_INTERFACE
    } IPersistMediaPropertyBagVtbl;
    interface IPersistMediaPropertyBag
    {
        CONST_VTBL struct IPersistMediaPropertyBagVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetClassID(This,pClassID) )
    ( (This)->lpVtbl -> InitNew(This) )
    ( (This)->lpVtbl -> Load(This,pPropBag,pErrorLog) )
    ( (This)->lpVtbl -> Save(This,pPropBag,fClearDirty,fSaveAllProperties) )
EXTERN_C const IID IID_IAMPhysicalPinInfo;
    typedef struct IAMPhysicalPinInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IAMPhysicalPinInfo * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IAMPhysicalPinInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IAMPhysicalPinInfo * This);
        HRESULT ( STDMETHODCALLTYPE *GetPhysicalType )(
            IAMPhysicalPinInfo * This,
            _Out_ long *pType,
            _Out_ LPOLESTR *ppszType);
        END_INTERFACE
    } IAMPhysicalPinInfoVtbl;
    interface IAMPhysicalPinInfo
    {
        CONST_VTBL struct IAMPhysicalPinInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetPhysicalType(This,pType,ppszType) )
typedef IAMPhysicalPinInfo *PAMPHYSICALPININFO;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0072_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0072_v0_0_s_ifspec;
EXTERN_C const IID IID_IAMExtDevice;
    typedef struct IAMExtDeviceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IAMExtDevice * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IAMExtDevice * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IAMExtDevice * This);
        HRESULT ( STDMETHODCALLTYPE *GetCapability )(
            IAMExtDevice * This,
                       long Capability,
            _Out_ long *pValue,
            _Out_ double *pdblValue);
        HRESULT ( STDMETHODCALLTYPE *get_ExternalDeviceID )(
            IAMExtDevice * This,
            _Out_ LPOLESTR *ppszData);
        HRESULT ( STDMETHODCALLTYPE *get_ExternalDeviceVersion )(
            IAMExtDevice * This,
            _Out_ LPOLESTR *ppszData);
        HRESULT ( STDMETHODCALLTYPE *put_DevicePower )(
            IAMExtDevice * This,
                       long PowerMode);
        HRESULT ( STDMETHODCALLTYPE *get_DevicePower )(
            IAMExtDevice * This,
            _Out_ long *pPowerMode);
        HRESULT ( STDMETHODCALLTYPE *Calibrate )(
            IAMExtDevice * This,
                       HEVENT hEvent,
                       long Mode,
            _Out_ long *pStatus);
        HRESULT ( STDMETHODCALLTYPE *put_DevicePort )(
            IAMExtDevice * This,
                       long DevicePort);
        HRESULT ( STDMETHODCALLTYPE *get_DevicePort )(
            IAMExtDevice * This,
            _Out_ long *pDevicePort);
        END_INTERFACE
    } IAMExtDeviceVtbl;
    interface IAMExtDevice
    {
        CONST_VTBL struct IAMExtDeviceVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetCapability(This,Capability,pValue,pdblValue) )
    ( (This)->lpVtbl -> get_ExternalDeviceID(This,ppszData) )
    ( (This)->lpVtbl -> get_ExternalDeviceVersion(This,ppszData) )
    ( (This)->lpVtbl -> put_DevicePower(This,PowerMode) )
    ( (This)->lpVtbl -> get_DevicePower(This,pPowerMode) )
    ( (This)->lpVtbl -> Calibrate(This,hEvent,Mode,pStatus) )
    ( (This)->lpVtbl -> put_DevicePort(This,DevicePort) )
    ( (This)->lpVtbl -> get_DevicePort(This,pDevicePort) )
typedef IAMExtDevice *PEXTDEVICE;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0073_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0073_v0_0_s_ifspec;
EXTERN_C const IID IID_IAMExtTransport;
    typedef struct IAMExtTransportVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IAMExtTransport * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IAMExtTransport * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IAMExtTransport * This);
        HRESULT ( STDMETHODCALLTYPE *GetCapability )(
            IAMExtTransport * This,
                       long Capability,
            _Out_ long *pValue,
            _Out_ double *pdblValue);
        HRESULT ( STDMETHODCALLTYPE *put_MediaState )(
            IAMExtTransport * This,
                       long State);
        HRESULT ( STDMETHODCALLTYPE *get_MediaState )(
            IAMExtTransport * This,
            _Out_ long *pState);
        HRESULT ( STDMETHODCALLTYPE *put_LocalControl )(
            IAMExtTransport * This,
                       long State);
        HRESULT ( STDMETHODCALLTYPE *get_LocalControl )(
            IAMExtTransport * This,
            _Out_ long *pState);
        HRESULT ( STDMETHODCALLTYPE *GetStatus )(
            IAMExtTransport * This,
                       long StatusItem,
            _Out_ long *pValue);
                      HRESULT ( STDMETHODCALLTYPE *GetTransportBasicParameters )(
            IAMExtTransport * This,
                       long Param,
            _Inout_ long *pValue,
            _Inout_ LPOLESTR *ppszData);
        HRESULT ( STDMETHODCALLTYPE *SetTransportBasicParameters )(
            IAMExtTransport * This,
                       long Param,
                       long Value,
                       LPCOLESTR pszData);
        HRESULT ( STDMETHODCALLTYPE *GetTransportVideoParameters )(
            IAMExtTransport * This,
                       long Param,
            _Out_ long *pValue);
        HRESULT ( STDMETHODCALLTYPE *SetTransportVideoParameters )(
            IAMExtTransport * This,
                       long Param,
                       long Value);
        HRESULT ( STDMETHODCALLTYPE *GetTransportAudioParameters )(
            IAMExtTransport * This,
                       long Param,
            _Out_ long *pValue);
        HRESULT ( STDMETHODCALLTYPE *SetTransportAudioParameters )(
            IAMExtTransport * This,
                       long Param,
                       long Value);
        HRESULT ( STDMETHODCALLTYPE *put_Mode )(
            IAMExtTransport * This,
                       long Mode);
        HRESULT ( STDMETHODCALLTYPE *get_Mode )(
            IAMExtTransport * This,
            _Out_ long *pMode);
        HRESULT ( STDMETHODCALLTYPE *put_Rate )(
            IAMExtTransport * This,
                       double dblRate);
        HRESULT ( STDMETHODCALLTYPE *get_Rate )(
            IAMExtTransport * This,
            _Out_ double *pdblRate);
        HRESULT ( STDMETHODCALLTYPE *GetChase )(
            IAMExtTransport * This,
            _Out_ long *pEnabled,
            _Out_ long *pOffset,
            _Out_ HEVENT *phEvent);
        HRESULT ( STDMETHODCALLTYPE *SetChase )(
            IAMExtTransport * This,
                       long Enable,
                       long Offset,
                       HEVENT hEvent);
        HRESULT ( STDMETHODCALLTYPE *GetBump )(
            IAMExtTransport * This,
            _Out_ long *pSpeed,
            _Out_ long *pDuration);
        HRESULT ( STDMETHODCALLTYPE *SetBump )(
            IAMExtTransport * This,
                       long Speed,
                       long Duration);
        HRESULT ( STDMETHODCALLTYPE *get_AntiClogControl )(
            IAMExtTransport * This,
            _Out_ long *pEnabled);
        HRESULT ( STDMETHODCALLTYPE *put_AntiClogControl )(
            IAMExtTransport * This,
                       long Enable);
        HRESULT ( STDMETHODCALLTYPE *GetEditPropertySet )(
            IAMExtTransport * This,
                       long EditID,
            _Out_ long *pState);
        HRESULT ( STDMETHODCALLTYPE *SetEditPropertySet )(
            IAMExtTransport * This,
                            long *pEditID,
                       long State);
        HRESULT ( STDMETHODCALLTYPE *GetEditProperty )(
            IAMExtTransport * This,
                       long EditID,
                       long Param,
            _Out_ long *pValue);
        HRESULT ( STDMETHODCALLTYPE *SetEditProperty )(
            IAMExtTransport * This,
                       long EditID,
                       long Param,
                       long Value);
        HRESULT ( STDMETHODCALLTYPE *get_EditStart )(
            IAMExtTransport * This,
            _Out_ long *pValue);
        HRESULT ( STDMETHODCALLTYPE *put_EditStart )(
            IAMExtTransport * This,
                       long Value);
        END_INTERFACE
    } IAMExtTransportVtbl;
    interface IAMExtTransport
    {
        CONST_VTBL struct IAMExtTransportVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetCapability(This,Capability,pValue,pdblValue) )
    ( (This)->lpVtbl -> put_MediaState(This,State) )
    ( (This)->lpVtbl -> get_MediaState(This,pState) )
    ( (This)->lpVtbl -> put_LocalControl(This,State) )
    ( (This)->lpVtbl -> get_LocalControl(This,pState) )
    ( (This)->lpVtbl -> GetStatus(This,StatusItem,pValue) )
    ( (This)->lpVtbl -> GetTransportBasicParameters(This,Param,pValue,ppszData) )
    ( (This)->lpVtbl -> SetTransportBasicParameters(This,Param,Value,pszData) )
    ( (This)->lpVtbl -> GetTransportVideoParameters(This,Param,pValue) )
    ( (This)->lpVtbl -> SetTransportVideoParameters(This,Param,Value) )
    ( (This)->lpVtbl -> GetTransportAudioParameters(This,Param,pValue) )
    ( (This)->lpVtbl -> SetTransportAudioParameters(This,Param,Value) )
    ( (This)->lpVtbl -> put_Mode(This,Mode) )
    ( (This)->lpVtbl -> get_Mode(This,pMode) )
    ( (This)->lpVtbl -> put_Rate(This,dblRate) )
    ( (This)->lpVtbl -> get_Rate(This,pdblRate) )
    ( (This)->lpVtbl -> GetChase(This,pEnabled,pOffset,phEvent) )
    ( (This)->lpVtbl -> SetChase(This,Enable,Offset,hEvent) )
    ( (This)->lpVtbl -> GetBump(This,pSpeed,pDuration) )
    ( (This)->lpVtbl -> SetBump(This,Speed,Duration) )
    ( (This)->lpVtbl -> get_AntiClogControl(This,pEnabled) )
    ( (This)->lpVtbl -> put_AntiClogControl(This,Enable) )
    ( (This)->lpVtbl -> GetEditPropertySet(This,EditID,pState) )
    ( (This)->lpVtbl -> SetEditPropertySet(This,pEditID,State) )
    ( (This)->lpVtbl -> GetEditProperty(This,EditID,Param,pValue) )
    ( (This)->lpVtbl -> SetEditProperty(This,EditID,Param,Value) )
    ( (This)->lpVtbl -> get_EditStart(This,pValue) )
    ( (This)->lpVtbl -> put_EditStart(This,Value) )
typedef IAMExtTransport *PIAMEXTTRANSPORT;
#if 0
typedef struct tagTIMECODE
    {
    WORD wFrameRate;
    WORD wFrameFract;
    DWORD dwFrames;
    } TIMECODE;
#else
typedef union _timecode {
   struct {
  WORD wFrameRate;
  WORD wFrameFract;
  DWORD dwFrames;
  };
   DWORDLONG qw;
   } TIMECODE;
typedef struct tagTIMECODE_SAMPLE
    {
    LONGLONG qwTick;
    TIMECODE timecode;
    DWORD dwUser;
    DWORD dwFlags;
    } TIMECODE_SAMPLE;
#endif
typedef TIMECODE *PTIMECODE;
typedef TIMECODE_SAMPLE *PTIMECODE_SAMPLE;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0074_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0074_v0_0_s_ifspec;
EXTERN_C const IID IID_IAMTimecodeReader;
    typedef struct IAMTimecodeReaderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IAMTimecodeReader * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IAMTimecodeReader * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IAMTimecodeReader * This);
        HRESULT ( STDMETHODCALLTYPE *GetTCRMode )(
            IAMTimecodeReader * This,
                       long Param,
            _Out_ long *pValue);
        HRESULT ( STDMETHODCALLTYPE *SetTCRMode )(
            IAMTimecodeReader * This,
                       long Param,
                       long Value);
        HRESULT ( STDMETHODCALLTYPE *put_VITCLine )(
            IAMTimecodeReader * This,
                       long Line);
        HRESULT ( STDMETHODCALLTYPE *get_VITCLine )(
            IAMTimecodeReader * This,
            _Out_ long *pLine);
        HRESULT ( STDMETHODCALLTYPE *GetTimecode )(
            IAMTimecodeReader * This,
            _Out_ PTIMECODE_SAMPLE pTimecodeSample);
        END_INTERFACE
    } IAMTimecodeReaderVtbl;
    interface IAMTimecodeReader
    {
        CONST_VTBL struct IAMTimecodeReaderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTCRMode(This,Param,pValue) )
    ( (This)->lpVtbl -> SetTCRMode(This,Param,Value) )
    ( (This)->lpVtbl -> put_VITCLine(This,Line) )
    ( (This)->lpVtbl -> get_VITCLine(This,pLine) )
    ( (This)->lpVtbl -> GetTimecode(This,pTimecodeSample) )
typedef IAMTimecodeReader *PIAMTIMECODEREADER;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0075_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0075_v0_0_s_ifspec;
EXTERN_C const IID IID_IAMTimecodeGenerator;
    typedef struct IAMTimecodeGeneratorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IAMTimecodeGenerator * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IAMTimecodeGenerator * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IAMTimecodeGenerator * This);
        HRESULT ( STDMETHODCALLTYPE *GetTCGMode )(
            IAMTimecodeGenerator * This,
                       long Param,
            _Out_ long *pValue);
        HRESULT ( STDMETHODCALLTYPE *SetTCGMode )(
            IAMTimecodeGenerator * This,
                       long Param,
                       long Value);
        HRESULT ( STDMETHODCALLTYPE *put_VITCLine )(
            IAMTimecodeGenerator * This,
                       long Line);
        HRESULT ( STDMETHODCALLTYPE *get_VITCLine )(
            IAMTimecodeGenerator * This,
            _Out_ long *pLine);
        HRESULT ( STDMETHODCALLTYPE *SetTimecode )(
            IAMTimecodeGenerator * This,
                       PTIMECODE_SAMPLE pTimecodeSample);
        HRESULT ( STDMETHODCALLTYPE *GetTimecode )(
            IAMTimecodeGenerator * This,
            _Out_ PTIMECODE_SAMPLE pTimecodeSample);
        END_INTERFACE
    } IAMTimecodeGeneratorVtbl;
    interface IAMTimecodeGenerator
    {
        CONST_VTBL struct IAMTimecodeGeneratorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTCGMode(This,Param,pValue) )
    ( (This)->lpVtbl -> SetTCGMode(This,Param,Value) )
    ( (This)->lpVtbl -> put_VITCLine(This,Line) )
    ( (This)->lpVtbl -> get_VITCLine(This,pLine) )
    ( (This)->lpVtbl -> SetTimecode(This,pTimecodeSample) )
    ( (This)->lpVtbl -> GetTimecode(This,pTimecodeSample) )
typedef IAMTimecodeGenerator *PIAMTIMECODEGENERATOR;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0076_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0076_v0_0_s_ifspec;
EXTERN_C const IID IID_IAMTimecodeDisplay;
    typedef struct IAMTimecodeDisplayVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IAMTimecodeDisplay * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IAMTimecodeDisplay * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IAMTimecodeDisplay * This);
        HRESULT ( STDMETHODCALLTYPE *GetTCDisplayEnable )(
            IAMTimecodeDisplay * This,
            _Out_ long *pState);
        HRESULT ( STDMETHODCALLTYPE *SetTCDisplayEnable )(
            IAMTimecodeDisplay * This,
                       long State);
        HRESULT ( STDMETHODCALLTYPE *GetTCDisplay )(
            IAMTimecodeDisplay * This,
                       long Param,
            _Out_ long *pValue);
        HRESULT ( STDMETHODCALLTYPE *SetTCDisplay )(
            IAMTimecodeDisplay * This,
                       long Param,
                       long Value);
        END_INTERFACE
    } IAMTimecodeDisplayVtbl;
    interface IAMTimecodeDisplay
    {
        CONST_VTBL struct IAMTimecodeDisplayVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTCDisplayEnable(This,pState) )
    ( (This)->lpVtbl -> SetTCDisplayEnable(This,State) )
    ( (This)->lpVtbl -> GetTCDisplay(This,Param,pValue) )
    ( (This)->lpVtbl -> SetTCDisplay(This,Param,Value) )
typedef IAMTimecodeDisplay *PIAMTIMECODEDISPLAY;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0077_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0077_v0_0_s_ifspec;
EXTERN_C const IID IID_IAMDevMemoryAllocator;
    typedef struct IAMDevMemoryAllocatorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IAMDevMemoryAllocator * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IAMDevMemoryAllocator * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IAMDevMemoryAllocator * This);
        HRESULT ( STDMETHODCALLTYPE *GetInfo )(
            IAMDevMemoryAllocator * This,
            _Out_ DWORD *pdwcbTotalFree,
            _Out_ DWORD *pdwcbLargestFree,
            _Out_ DWORD *pdwcbTotalMemory,
            _Out_ DWORD *pdwcbMinimumChunk);
        HRESULT ( STDMETHODCALLTYPE *CheckMemory )(
            IAMDevMemoryAllocator * This,
                       const BYTE *pBuffer);
        HRESULT ( STDMETHODCALLTYPE *Alloc )(
            IAMDevMemoryAllocator * This,
            _Outptr_result_bytebuffer_(*pdwcbBuffer) BYTE **ppBuffer,
            _Inout_ DWORD *pdwcbBuffer);
        HRESULT ( STDMETHODCALLTYPE *Free )(
            IAMDevMemoryAllocator * This,
                       BYTE *pBuffer);
        HRESULT ( STDMETHODCALLTYPE *GetDevMemoryObject )(
            IAMDevMemoryAllocator * This,
            _Out_ IUnknown **ppUnkInnner,
                       IUnknown *pUnkOuter);
        END_INTERFACE
    } IAMDevMemoryAllocatorVtbl;
    interface IAMDevMemoryAllocator
    {
        CONST_VTBL struct IAMDevMemoryAllocatorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetInfo(This,pdwcbTotalFree,pdwcbLargestFree,pdwcbTotalMemory,pdwcbMinimumChunk) )
    ( (This)->lpVtbl -> CheckMemory(This,pBuffer) )
    ( (This)->lpVtbl -> Alloc(This,ppBuffer,pdwcbBuffer) )
    ( (This)->lpVtbl -> Free(This,pBuffer) )
    ( (This)->lpVtbl -> GetDevMemoryObject(This,ppUnkInnner,pUnkOuter) )
typedef IAMDevMemoryAllocator *PAMDEVMEMORYALLOCATOR;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0078_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0078_v0_0_s_ifspec;
EXTERN_C const IID IID_IAMDevMemoryControl;
    typedef struct IAMDevMemoryControlVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IAMDevMemoryControl * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IAMDevMemoryControl * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IAMDevMemoryControl * This);
        HRESULT ( STDMETHODCALLTYPE *QueryWriteSync )(
            IAMDevMemoryControl * This);
        HRESULT ( STDMETHODCALLTYPE *WriteSync )(
            IAMDevMemoryControl * This);
        HRESULT ( STDMETHODCALLTYPE *GetDevId )(
            IAMDevMemoryControl * This,
            _Out_ DWORD *pdwDevId);
        END_INTERFACE
    } IAMDevMemoryControlVtbl;
    interface IAMDevMemoryControl
    {
        CONST_VTBL struct IAMDevMemoryControlVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> QueryWriteSync(This) )
    ( (This)->lpVtbl -> WriteSync(This) )
    ( (This)->lpVtbl -> GetDevId(This,pdwDevId) )
typedef IAMDevMemoryControl *PAMDEVMEMORYCONTROL;
enum _AMSTREAMSELECTINFOFLAGS
    {
        AMSTREAMSELECTINFO_ENABLED = 0x1,
        AMSTREAMSELECTINFO_EXCLUSIVE = 0x2
    } ;
enum _AMSTREAMSELECTENABLEFLAGS
    {
        AMSTREAMSELECTENABLE_ENABLE = 0x1,
        AMSTREAMSELECTENABLE_ENABLEALL = 0x2
    } ;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0079_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0079_v0_0_s_ifspec;
EXTERN_C const IID IID_IAMStreamSelect;
    typedef struct IAMStreamSelectVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IAMStreamSelect * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IAMStreamSelect * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IAMStreamSelect * This);
        HRESULT ( STDMETHODCALLTYPE *Count )(
            IAMStreamSelect * This,
            _Out_ DWORD *pcStreams);
        HRESULT ( STDMETHODCALLTYPE *Info )(
            IAMStreamSelect * This,
                       long lIndex,
            _Out_opt_ AM_MEDIA_TYPE **ppmt,
            _Out_opt_ DWORD *pdwFlags,
            _Out_opt_ LCID *plcid,
            _Out_opt_ DWORD *pdwGroup,
            _Out_opt_ LPWSTR *ppszName,
            _Out_opt_ IUnknown **ppObject,
            _Out_opt_ IUnknown **ppUnk);
        HRESULT ( STDMETHODCALLTYPE *Enable )(
            IAMStreamSelect * This,
                       long lIndex,
                       DWORD dwFlags);
        END_INTERFACE
    } IAMStreamSelectVtbl;
    interface IAMStreamSelect
    {
        CONST_VTBL struct IAMStreamSelectVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Count(This,pcStreams) )
    ( (This)->lpVtbl -> Info(This,lIndex,ppmt,pdwFlags,plcid,pdwGroup,ppszName,ppObject,ppUnk) )
    ( (This)->lpVtbl -> Enable(This,lIndex,dwFlags) )
typedef IAMStreamSelect *PAMSTREAMSELECT;
enum _AMRESCTL_RESERVEFLAGS
    {
        AMRESCTL_RESERVEFLAGS_RESERVE = 0,
        AMRESCTL_RESERVEFLAGS_UNRESERVE = 0x1
    } ;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0080_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0080_v0_0_s_ifspec;
EXTERN_C const IID IID_IAMResourceControl;
    typedef struct IAMResourceControlVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IAMResourceControl * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IAMResourceControl * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IAMResourceControl * This);
        HRESULT ( STDMETHODCALLTYPE *Reserve )(
            IAMResourceControl * This,
                       DWORD dwFlags,
            _Reserved_ PVOID pvReserved);
        END_INTERFACE
    } IAMResourceControlVtbl;
    interface IAMResourceControl
    {
        CONST_VTBL struct IAMResourceControlVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Reserve(This,dwFlags,pvReserved) )
EXTERN_C const IID IID_IAMClockAdjust;
    typedef struct IAMClockAdjustVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IAMClockAdjust * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IAMClockAdjust * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IAMClockAdjust * This);
        HRESULT ( STDMETHODCALLTYPE *SetClockDelta )(
            IAMClockAdjust * This,
                       REFERENCE_TIME rtDelta);
        END_INTERFACE
    } IAMClockAdjustVtbl;
    interface IAMClockAdjust
    {
        CONST_VTBL struct IAMClockAdjustVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetClockDelta(This,rtDelta) )
enum _AM_FILTER_MISC_FLAGS
    {
        AM_FILTER_MISC_FLAGS_IS_RENDERER = 0x1,
        AM_FILTER_MISC_FLAGS_IS_SOURCE = 0x2
    } ;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0082_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0082_v0_0_s_ifspec;
EXTERN_C const IID IID_IAMFilterMiscFlags;
    typedef struct IAMFilterMiscFlagsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IAMFilterMiscFlags * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IAMFilterMiscFlags * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IAMFilterMiscFlags * This);
        ULONG ( STDMETHODCALLTYPE *GetMiscFlags )(
            IAMFilterMiscFlags * This);
        END_INTERFACE
    } IAMFilterMiscFlagsVtbl;
    interface IAMFilterMiscFlags
    {
        CONST_VTBL struct IAMFilterMiscFlagsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetMiscFlags(This) )
EXTERN_C const IID IID_IDrawVideoImage;
    typedef struct IDrawVideoImageVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDrawVideoImage * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDrawVideoImage * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDrawVideoImage * This);
        HRESULT ( STDMETHODCALLTYPE *DrawVideoImageBegin )(
            IDrawVideoImage * This);
        HRESULT ( STDMETHODCALLTYPE *DrawVideoImageEnd )(
            IDrawVideoImage * This);
        HRESULT ( STDMETHODCALLTYPE *DrawVideoImageDraw )(
            IDrawVideoImage * This,
                       HDC hdc,
            _In_ LPRECT lprcSrc,
            _In_ LPRECT lprcDst);
        END_INTERFACE
    } IDrawVideoImageVtbl;
    interface IDrawVideoImage
    {
        CONST_VTBL struct IDrawVideoImageVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> DrawVideoImageBegin(This) )
    ( (This)->lpVtbl -> DrawVideoImageEnd(This) )
    ( (This)->lpVtbl -> DrawVideoImageDraw(This,hdc,lprcSrc,lprcDst) )
EXTERN_C const IID IID_IDecimateVideoImage;
    typedef struct IDecimateVideoImageVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDecimateVideoImage * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDecimateVideoImage * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDecimateVideoImage * This);
        HRESULT ( STDMETHODCALLTYPE *SetDecimationImageSize )(
            IDecimateVideoImage * This,
                       long lWidth,
                       long lHeight);
        HRESULT ( STDMETHODCALLTYPE *ResetDecimationImageSize )(
            IDecimateVideoImage * This);
        END_INTERFACE
    } IDecimateVideoImageVtbl;
    interface IDecimateVideoImage
    {
        CONST_VTBL struct IDecimateVideoImageVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetDecimationImageSize(This,lWidth,lHeight) )
    ( (This)->lpVtbl -> ResetDecimationImageSize(This) )
typedef
enum _DECIMATION_USAGE
    {
        DECIMATION_LEGACY = 0,
        DECIMATION_USE_DECODER_ONLY = ( DECIMATION_LEGACY + 1 ) ,
        DECIMATION_USE_VIDEOPORT_ONLY = ( DECIMATION_USE_DECODER_ONLY + 1 ) ,
        DECIMATION_USE_OVERLAY_ONLY = ( DECIMATION_USE_VIDEOPORT_ONLY + 1 ) ,
        DECIMATION_DEFAULT = ( DECIMATION_USE_OVERLAY_ONLY + 1 )
    } DECIMATION_USAGE;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0085_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0085_v0_0_s_ifspec;
EXTERN_C const IID IID_IAMVideoDecimationProperties;
    typedef struct IAMVideoDecimationPropertiesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IAMVideoDecimationProperties * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IAMVideoDecimationProperties * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IAMVideoDecimationProperties * This);
        HRESULT ( STDMETHODCALLTYPE *QueryDecimationUsage )(
            IAMVideoDecimationProperties * This,
            _Out_ DECIMATION_USAGE *lpUsage);
        HRESULT ( STDMETHODCALLTYPE *SetDecimationUsage )(
            IAMVideoDecimationProperties * This,
                       DECIMATION_USAGE Usage);
        END_INTERFACE
    } IAMVideoDecimationPropertiesVtbl;
    interface IAMVideoDecimationProperties
    {
        CONST_VTBL struct IAMVideoDecimationPropertiesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> QueryDecimationUsage(This,lpUsage) )
    ( (This)->lpVtbl -> SetDecimationUsage(This,Usage) )
EXTERN_C const IID IID_IVideoFrameStep;
    typedef struct IVideoFrameStepVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IVideoFrameStep * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IVideoFrameStep * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IVideoFrameStep * This);
        HRESULT ( STDMETHODCALLTYPE *Step )(
            IVideoFrameStep * This,
            DWORD dwFrames,
            _In_opt_ IUnknown *pStepObject);
        HRESULT ( STDMETHODCALLTYPE *CanStep )(
            IVideoFrameStep * This,
            long bMultiple,
            _In_opt_ IUnknown *pStepObject);
        HRESULT ( STDMETHODCALLTYPE *CancelStep )(
            IVideoFrameStep * This);
        END_INTERFACE
    } IVideoFrameStepVtbl;
    interface IVideoFrameStep
    {
        CONST_VTBL struct IVideoFrameStepVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Step(This,dwFrames,pStepObject) )
    ( (This)->lpVtbl -> CanStep(This,bMultiple,pStepObject) )
    ( (This)->lpVtbl -> CancelStep(This) )
enum _AM_PUSHSOURCE_FLAGS
    {
        AM_PUSHSOURCECAPS_INTERNAL_RM = 0x1,
        AM_PUSHSOURCECAPS_NOT_LIVE = 0x2,
        AM_PUSHSOURCECAPS_PRIVATE_CLOCK = 0x4,
        AM_PUSHSOURCEREQS_USE_STREAM_CLOCK = 0x10000,
        AM_PUSHSOURCEREQS_USE_CLOCK_CHAIN = 0x20000
    } ;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0087_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0087_v0_0_s_ifspec;
EXTERN_C const IID IID_IAMLatency;
    typedef struct IAMLatencyVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IAMLatency * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IAMLatency * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IAMLatency * This);
        HRESULT ( STDMETHODCALLTYPE *GetLatency )(
            IAMLatency * This,
            _Out_ REFERENCE_TIME *prtLatency);
        END_INTERFACE
    } IAMLatencyVtbl;
    interface IAMLatency
    {
        CONST_VTBL struct IAMLatencyVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetLatency(This,prtLatency) )
EXTERN_C const IID IID_IAMPushSource;
    typedef struct IAMPushSourceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IAMPushSource * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IAMPushSource * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IAMPushSource * This);
        HRESULT ( STDMETHODCALLTYPE *GetLatency )(
            IAMPushSource * This,
            _Out_ REFERENCE_TIME *prtLatency);
        HRESULT ( STDMETHODCALLTYPE *GetPushSourceFlags )(
            IAMPushSource * This,
            _Out_ ULONG *pFlags);
        HRESULT ( STDMETHODCALLTYPE *SetPushSourceFlags )(
            IAMPushSource * This,
                       ULONG Flags);
        HRESULT ( STDMETHODCALLTYPE *SetStreamOffset )(
            IAMPushSource * This,
                       REFERENCE_TIME rtOffset);
        HRESULT ( STDMETHODCALLTYPE *GetStreamOffset )(
            IAMPushSource * This,
            _Out_ REFERENCE_TIME *prtOffset);
        HRESULT ( STDMETHODCALLTYPE *GetMaxStreamOffset )(
            IAMPushSource * This,
            _Out_ REFERENCE_TIME *prtMaxOffset);
        HRESULT ( STDMETHODCALLTYPE *SetMaxStreamOffset )(
            IAMPushSource * This,
                       REFERENCE_TIME rtMaxOffset);
        END_INTERFACE
    } IAMPushSourceVtbl;
    interface IAMPushSource
    {
        CONST_VTBL struct IAMPushSourceVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetLatency(This,prtLatency) )
    ( (This)->lpVtbl -> GetPushSourceFlags(This,pFlags) )
    ( (This)->lpVtbl -> SetPushSourceFlags(This,Flags) )
    ( (This)->lpVtbl -> SetStreamOffset(This,rtOffset) )
    ( (This)->lpVtbl -> GetStreamOffset(This,prtOffset) )
    ( (This)->lpVtbl -> GetMaxStreamOffset(This,prtMaxOffset) )
    ( (This)->lpVtbl -> SetMaxStreamOffset(This,rtMaxOffset) )
EXTERN_C const IID IID_IAMDeviceRemoval;
    typedef struct IAMDeviceRemovalVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IAMDeviceRemoval * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IAMDeviceRemoval * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IAMDeviceRemoval * This);
        HRESULT ( STDMETHODCALLTYPE *DeviceInfo )(
            IAMDeviceRemoval * This,
            _Out_ CLSID *pclsidInterfaceClass,
            _Out_ LPWSTR *pwszSymbolicLink);
        HRESULT ( STDMETHODCALLTYPE *Reassociate )(
            IAMDeviceRemoval * This);
        HRESULT ( STDMETHODCALLTYPE *Disassociate )(
            IAMDeviceRemoval * This);
        END_INTERFACE
    } IAMDeviceRemovalVtbl;
    interface IAMDeviceRemoval
    {
        CONST_VTBL struct IAMDeviceRemovalVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> DeviceInfo(This,pclsidInterfaceClass,pwszSymbolicLink) )
    ( (This)->lpVtbl -> Reassociate(This) )
    ( (This)->lpVtbl -> Disassociate(This) )
typedef struct DVINFO
    {
    DWORD dwDVAAuxSrc;
    DWORD dwDVAAuxCtl;
    DWORD dwDVAAuxSrc1;
    DWORD dwDVAAuxCtl1;
    DWORD dwDVVAuxSrc;
    DWORD dwDVVAuxCtl;
    DWORD dwDVReserved[ 2 ];
    } DVINFO;
typedef struct DVINFO *PDVINFO;
enum _DVENCODERRESOLUTION
    {
        DVENCODERRESOLUTION_720x480 = 2012,
        DVENCODERRESOLUTION_360x240 = 2013,
        DVENCODERRESOLUTION_180x120 = 2014,
        DVENCODERRESOLUTION_88x60 = 2015
    } ;
enum _DVENCODERVIDEOFORMAT
    {
        DVENCODERVIDEOFORMAT_NTSC = 2000,
        DVENCODERVIDEOFORMAT_PAL = 2001
    } ;
enum _DVENCODERFORMAT
    {
        DVENCODERFORMAT_DVSD = 2007,
        DVENCODERFORMAT_DVHD = 2008,
        DVENCODERFORMAT_DVSL = 2009
    } ;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0089_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0089_v0_0_s_ifspec;
EXTERN_C const IID IID_IDVEnc;
    typedef struct IDVEncVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDVEnc * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDVEnc * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDVEnc * This);
        HRESULT ( STDMETHODCALLTYPE *get_IFormatResolution )(
            IDVEnc * This,
            _Out_ int *VideoFormat,
            _Out_ int *DVFormat,
            _Out_ int *Resolution,
                       BYTE fDVInfo,
            _Out_ DVINFO *sDVInfo);
        HRESULT ( STDMETHODCALLTYPE *put_IFormatResolution )(
            IDVEnc * This,
                       int VideoFormat,
                       int DVFormat,
                       int Resolution,
                       BYTE fDVInfo,
            _In_ DVINFO *sDVInfo);
        END_INTERFACE
    } IDVEncVtbl;
    interface IDVEnc
    {
        CONST_VTBL struct IDVEncVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_IFormatResolution(This,VideoFormat,DVFormat,Resolution,fDVInfo,sDVInfo) )
    ( (This)->lpVtbl -> put_IFormatResolution(This,VideoFormat,DVFormat,Resolution,fDVInfo,sDVInfo) )
enum _DVDECODERRESOLUTION
    {
        DVDECODERRESOLUTION_720x480 = 1000,
        DVDECODERRESOLUTION_360x240 = 1001,
        DVDECODERRESOLUTION_180x120 = 1002,
        DVDECODERRESOLUTION_88x60 = 1003
    } ;
enum _DVRESOLUTION
    {
        DVRESOLUTION_FULL = 1000,
        DVRESOLUTION_HALF = 1001,
        DVRESOLUTION_QUARTER = 1002,
        DVRESOLUTION_DC = 1003
    } ;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0090_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0090_v0_0_s_ifspec;
EXTERN_C const IID IID_IIPDVDec;
    typedef struct IIPDVDecVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IIPDVDec * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IIPDVDec * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IIPDVDec * This);
        HRESULT ( STDMETHODCALLTYPE *get_IPDisplay )(
            IIPDVDec * This,
            _Out_ int *displayPix);
        HRESULT ( STDMETHODCALLTYPE *put_IPDisplay )(
            IIPDVDec * This,
                       int displayPix);
        END_INTERFACE
    } IIPDVDecVtbl;
    interface IIPDVDec
    {
        CONST_VTBL struct IIPDVDecVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_IPDisplay(This,displayPix) )
    ( (This)->lpVtbl -> put_IPDisplay(This,displayPix) )
EXTERN_C const IID IID_IDVRGB219;
    typedef struct IDVRGB219Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDVRGB219 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDVRGB219 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDVRGB219 * This);
        HRESULT ( STDMETHODCALLTYPE *SetRGB219 )(
            IDVRGB219 * This,
                       BOOL bState);
        END_INTERFACE
    } IDVRGB219Vtbl;
    interface IDVRGB219
    {
        CONST_VTBL struct IDVRGB219Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetRGB219(This,bState) )
EXTERN_C const IID IID_IDVSplitter;
    typedef struct IDVSplitterVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDVSplitter * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDVSplitter * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDVSplitter * This);
        HRESULT ( STDMETHODCALLTYPE *DiscardAlternateVideoFrames )(
            IDVSplitter * This,
                       int nDiscard);
        END_INTERFACE
    } IDVSplitterVtbl;
    interface IDVSplitter
    {
        CONST_VTBL struct IDVSplitterVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> DiscardAlternateVideoFrames(This,nDiscard) )
enum _AM_AUDIO_RENDERER_STAT_PARAM
    {
        AM_AUDREND_STAT_PARAM_BREAK_COUNT = 1,
        AM_AUDREND_STAT_PARAM_SLAVE_MODE = ( AM_AUDREND_STAT_PARAM_BREAK_COUNT + 1 ) ,
        AM_AUDREND_STAT_PARAM_SILENCE_DUR = ( AM_AUDREND_STAT_PARAM_SLAVE_MODE + 1 ) ,
        AM_AUDREND_STAT_PARAM_LAST_BUFFER_DUR = ( AM_AUDREND_STAT_PARAM_SILENCE_DUR + 1 ) ,
        AM_AUDREND_STAT_PARAM_DISCONTINUITIES = ( AM_AUDREND_STAT_PARAM_LAST_BUFFER_DUR + 1 ) ,
        AM_AUDREND_STAT_PARAM_SLAVE_RATE = ( AM_AUDREND_STAT_PARAM_DISCONTINUITIES + 1 ) ,
        AM_AUDREND_STAT_PARAM_SLAVE_DROPWRITE_DUR = ( AM_AUDREND_STAT_PARAM_SLAVE_RATE + 1 ) ,
        AM_AUDREND_STAT_PARAM_SLAVE_HIGHLOWERROR = ( AM_AUDREND_STAT_PARAM_SLAVE_DROPWRITE_DUR + 1 ) ,
        AM_AUDREND_STAT_PARAM_SLAVE_LASTHIGHLOWERROR = ( AM_AUDREND_STAT_PARAM_SLAVE_HIGHLOWERROR + 1 ) ,
        AM_AUDREND_STAT_PARAM_SLAVE_ACCUMERROR = ( AM_AUDREND_STAT_PARAM_SLAVE_LASTHIGHLOWERROR + 1 ) ,
        AM_AUDREND_STAT_PARAM_BUFFERFULLNESS = ( AM_AUDREND_STAT_PARAM_SLAVE_ACCUMERROR + 1 ) ,
        AM_AUDREND_STAT_PARAM_JITTER = ( AM_AUDREND_STAT_PARAM_BUFFERFULLNESS + 1 )
    } ;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0093_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0093_v0_0_s_ifspec;
EXTERN_C const IID IID_IAMAudioRendererStats;
    typedef struct IAMAudioRendererStatsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IAMAudioRendererStats * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IAMAudioRendererStats * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IAMAudioRendererStats * This);
        HRESULT ( STDMETHODCALLTYPE *GetStatParam )(
            IAMAudioRendererStats * This,
                       DWORD dwParam,
            _Out_ DWORD *pdwParam1,
            _Out_ DWORD *pdwParam2);
        END_INTERFACE
    } IAMAudioRendererStatsVtbl;
    interface IAMAudioRendererStats
    {
        CONST_VTBL struct IAMAudioRendererStatsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetStatParam(This,dwParam,pdwParam1,pdwParam2) )
enum _AM_INTF_SEARCH_FLAGS
    {
        AM_INTF_SEARCH_INPUT_PIN = 0x1,
        AM_INTF_SEARCH_OUTPUT_PIN = 0x2,
        AM_INTF_SEARCH_FILTER = 0x4
    } ;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0095_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0095_v0_0_s_ifspec;
EXTERN_C const IID IID_IAMGraphStreams;
    typedef struct IAMGraphStreamsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IAMGraphStreams * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IAMGraphStreams * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IAMGraphStreams * This);
        HRESULT ( STDMETHODCALLTYPE *FindUpstreamInterface )(
            IAMGraphStreams * This,
                       IPin *pPin,
                       REFIID riid,
            _Out_ void **ppvInterface,
                       DWORD dwFlags);
        HRESULT ( STDMETHODCALLTYPE *SyncUsingStreamOffset )(
            IAMGraphStreams * This,
                       BOOL bUseStreamOffset);
        HRESULT ( STDMETHODCALLTYPE *SetMaxGraphLatency )(
            IAMGraphStreams * This,
                       REFERENCE_TIME rtMaxGraphLatency);
        END_INTERFACE
    } IAMGraphStreamsVtbl;
    interface IAMGraphStreams
    {
        CONST_VTBL struct IAMGraphStreamsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> FindUpstreamInterface(This,pPin,riid,ppvInterface,dwFlags) )
    ( (This)->lpVtbl -> SyncUsingStreamOffset(This,bUseStreamOffset) )
    ( (This)->lpVtbl -> SetMaxGraphLatency(This,rtMaxGraphLatency) )
enum AMOVERLAYFX
    {
        AMOVERFX_NOFX = 0,
        AMOVERFX_MIRRORLEFTRIGHT = 0x2,
        AMOVERFX_MIRRORUPDOWN = 0x4,
        AMOVERFX_DEINTERLACE = 0x8
    } ;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0096_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0096_v0_0_s_ifspec;
EXTERN_C const IID IID_IAMOverlayFX;
    typedef struct IAMOverlayFXVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IAMOverlayFX * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IAMOverlayFX * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IAMOverlayFX * This);
        HRESULT ( STDMETHODCALLTYPE *QueryOverlayFXCaps )(
            IAMOverlayFX * This,
            _Out_ DWORD *lpdwOverlayFXCaps);
        HRESULT ( STDMETHODCALLTYPE *SetOverlayFX )(
            IAMOverlayFX * This,
                       DWORD dwOverlayFX);
        HRESULT ( STDMETHODCALLTYPE *GetOverlayFX )(
            IAMOverlayFX * This,
            _Out_ DWORD *lpdwOverlayFX);
        END_INTERFACE
    } IAMOverlayFXVtbl;
    interface IAMOverlayFX
    {
        CONST_VTBL struct IAMOverlayFXVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> QueryOverlayFXCaps(This,lpdwOverlayFXCaps) )
    ( (This)->lpVtbl -> SetOverlayFX(This,dwOverlayFX) )
    ( (This)->lpVtbl -> GetOverlayFX(This,lpdwOverlayFX) )
EXTERN_C const IID IID_IAMOpenProgress;
    typedef struct IAMOpenProgressVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IAMOpenProgress * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IAMOpenProgress * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IAMOpenProgress * This);
        HRESULT ( STDMETHODCALLTYPE *QueryProgress )(
            IAMOpenProgress * This,
            _Out_ LONGLONG *pllTotal,
            _Out_ LONGLONG *pllCurrent);
        HRESULT ( STDMETHODCALLTYPE *AbortOperation )(
            IAMOpenProgress * This);
        END_INTERFACE
    } IAMOpenProgressVtbl;
    interface IAMOpenProgress
    {
        CONST_VTBL struct IAMOpenProgressVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> QueryProgress(This,pllTotal,pllCurrent) )
    ( (This)->lpVtbl -> AbortOperation(This) )
EXTERN_C const IID IID_IMpeg2Demultiplexer;
    typedef struct IMpeg2DemultiplexerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMpeg2Demultiplexer * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMpeg2Demultiplexer * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMpeg2Demultiplexer * This);
        HRESULT ( STDMETHODCALLTYPE *CreateOutputPin )(
            IMpeg2Demultiplexer * This,
                       AM_MEDIA_TYPE *pMediaType,
            _In_ LPWSTR pszPinName,
            _Out_ IPin **ppIPin);
        HRESULT ( STDMETHODCALLTYPE *SetOutputPinMediaType )(
            IMpeg2Demultiplexer * This,
            _In_ LPWSTR pszPinName,
            _In_ AM_MEDIA_TYPE *pMediaType);
        HRESULT ( STDMETHODCALLTYPE *DeleteOutputPin )(
            IMpeg2Demultiplexer * This,
            _In_ LPWSTR pszPinName);
        END_INTERFACE
    } IMpeg2DemultiplexerVtbl;
    interface IMpeg2Demultiplexer
    {
        CONST_VTBL struct IMpeg2DemultiplexerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CreateOutputPin(This,pMediaType,pszPinName,ppIPin) )
    ( (This)->lpVtbl -> SetOutputPinMediaType(This,pszPinName,pMediaType) )
    ( (This)->lpVtbl -> DeleteOutputPin(This,pszPinName) )
typedef struct STREAM_ID_MAP
    {
    ULONG stream_id;
    DWORD dwMediaSampleContent;
    ULONG ulSubstreamFilterValue;
    int iDataOffset;
    } STREAM_ID_MAP;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0099_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0099_v0_0_s_ifspec;
EXTERN_C const IID IID_IEnumStreamIdMap;
    typedef struct IEnumStreamIdMapVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IEnumStreamIdMap * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IEnumStreamIdMap * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IEnumStreamIdMap * This);
        HRESULT ( STDMETHODCALLTYPE *Next )(
            IEnumStreamIdMap * This,
                       ULONG cRequest,
            _Out_writes_to_(cRequest, *pcReceived) STREAM_ID_MAP *pStreamIdMap,
            _Out_opt_ ULONG *pcReceived);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            IEnumStreamIdMap * This,
                       ULONG cRecords);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            IEnumStreamIdMap * This);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            IEnumStreamIdMap * This,
            _Out_ IEnumStreamIdMap **ppIEnumStreamIdMap);
        END_INTERFACE
    } IEnumStreamIdMapVtbl;
    interface IEnumStreamIdMap
    {
        CONST_VTBL struct IEnumStreamIdMapVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Next(This,cRequest,pStreamIdMap,pcReceived) )
    ( (This)->lpVtbl -> Skip(This,cRecords) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Clone(This,ppIEnumStreamIdMap) )
EXTERN_C const IID IID_IMPEG2StreamIdMap;
    typedef struct IMPEG2StreamIdMapVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMPEG2StreamIdMap * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMPEG2StreamIdMap * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMPEG2StreamIdMap * This);
        HRESULT ( STDMETHODCALLTYPE *MapStreamId )(
            IMPEG2StreamIdMap * This,
                       ULONG ulStreamId,
                       DWORD MediaSampleContent,
                       ULONG ulSubstreamFilterValue,
                       int iDataOffset);
        HRESULT ( STDMETHODCALLTYPE *UnmapStreamId )(
            IMPEG2StreamIdMap * This,
                       ULONG culStreamId,
            _In_reads_(culStreamId) ULONG *pulStreamId);
        HRESULT ( STDMETHODCALLTYPE *EnumStreamIdMap )(
            IMPEG2StreamIdMap * This,
            _Out_ IEnumStreamIdMap **ppIEnumStreamIdMap);
        END_INTERFACE
    } IMPEG2StreamIdMapVtbl;
    interface IMPEG2StreamIdMap
    {
        CONST_VTBL struct IMPEG2StreamIdMapVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> MapStreamId(This,ulStreamId,MediaSampleContent,ulSubstreamFilterValue,iDataOffset) )
    ( (This)->lpVtbl -> UnmapStreamId(This,culStreamId,pulStreamId) )
    ( (This)->lpVtbl -> EnumStreamIdMap(This,ppIEnumStreamIdMap) )
EXTERN_C const IID IID_IRegisterServiceProvider;
    typedef struct IRegisterServiceProviderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IRegisterServiceProvider * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IRegisterServiceProvider * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IRegisterServiceProvider * This);
        HRESULT ( STDMETHODCALLTYPE *RegisterService )(
            IRegisterServiceProvider * This,
                       REFGUID guidService,
                       IUnknown *pUnkObject);
        END_INTERFACE
    } IRegisterServiceProviderVtbl;
    interface IRegisterServiceProvider
    {
        CONST_VTBL struct IRegisterServiceProviderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> RegisterService(This,guidService,pUnkObject) )
EXTERN_C const IID IID_IAMClockSlave;
    typedef struct IAMClockSlaveVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IAMClockSlave * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IAMClockSlave * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IAMClockSlave * This);
        HRESULT ( STDMETHODCALLTYPE *SetErrorTolerance )(
            IAMClockSlave * This,
                       DWORD dwTolerance);
        HRESULT ( STDMETHODCALLTYPE *GetErrorTolerance )(
            IAMClockSlave * This,
            _Out_ DWORD *pdwTolerance);
        END_INTERFACE
    } IAMClockSlaveVtbl;
    interface IAMClockSlave
    {
        CONST_VTBL struct IAMClockSlaveVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetErrorTolerance(This,dwTolerance) )
    ( (This)->lpVtbl -> GetErrorTolerance(This,pdwTolerance) )
EXTERN_C const IID IID_IAMGraphBuilderCallback;
    typedef struct IAMGraphBuilderCallbackVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IAMGraphBuilderCallback * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IAMGraphBuilderCallback * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IAMGraphBuilderCallback * This);
        HRESULT ( STDMETHODCALLTYPE *SelectedFilter )(
            IAMGraphBuilderCallback * This,
                       IMoniker *pMon);
        HRESULT ( STDMETHODCALLTYPE *CreatedFilter )(
            IAMGraphBuilderCallback * This,
                       IBaseFilter *pFil);
        END_INTERFACE
    } IAMGraphBuilderCallbackVtbl;
    interface IAMGraphBuilderCallback
    {
        CONST_VTBL struct IAMGraphBuilderCallbackVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SelectedFilter(This,pMon) )
    ( (This)->lpVtbl -> CreatedFilter(This,pFil) )
EXTERN_GUID(IID_IAMFilterGraphCallback,0x56a868fd,0x0ad4,0x11ce,0xb0,0xa3,0x0,0x20,0xaf,0x0b,0xa7,0x70);
interface IAMFilterGraphCallback : public IUnknown
{
    virtual HRESULT UnableToRender(IPin *pPin) = 0;
};
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0104_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0104_v0_0_s_ifspec;
EXTERN_C const IID IID_IGetCapabilitiesKey;
    typedef struct IGetCapabilitiesKeyVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IGetCapabilitiesKey * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IGetCapabilitiesKey * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IGetCapabilitiesKey * This);
        HRESULT ( STDMETHODCALLTYPE *GetCapabilitiesKey )(
            IGetCapabilitiesKey * This,
            _Out_ HKEY *pHKey);
        END_INTERFACE
    } IGetCapabilitiesKeyVtbl;
    interface IGetCapabilitiesKey
    {
        CONST_VTBL struct IGetCapabilitiesKeyVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetCapabilitiesKey(This,pHKey) )
EXTERN_C const IID IID_IEncoderAPI;
    typedef struct IEncoderAPIVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IEncoderAPI * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IEncoderAPI * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IEncoderAPI * This);
        HRESULT ( STDMETHODCALLTYPE *IsSupported )(
            IEncoderAPI * This,
                       const GUID *Api);
        HRESULT ( STDMETHODCALLTYPE *IsAvailable )(
            IEncoderAPI * This,
                       const GUID *Api);
        HRESULT ( STDMETHODCALLTYPE *GetParameterRange )(
            IEncoderAPI * This,
                       const GUID *Api,
            _Out_ VARIANT *ValueMin,
            _Out_ VARIANT *ValueMax,
            _Out_ VARIANT *SteppingDelta);
        HRESULT ( STDMETHODCALLTYPE *GetParameterValues )(
            IEncoderAPI * This,
                       const GUID *Api,
            _Outptr_result_buffer_all_(*ValuesCount) VARIANT **Values,
            _Out_ ULONG *ValuesCount);
        HRESULT ( STDMETHODCALLTYPE *GetDefaultValue )(
            IEncoderAPI * This,
                       const GUID *Api,
            _Out_ VARIANT *Value);
        HRESULT ( STDMETHODCALLTYPE *GetValue )(
            IEncoderAPI * This,
                       const GUID *Api,
            _Out_ VARIANT *Value);
        HRESULT ( STDMETHODCALLTYPE *SetValue )(
            IEncoderAPI * This,
                       const GUID *Api,
            _In_ VARIANT *Value);
        END_INTERFACE
    } IEncoderAPIVtbl;
    interface IEncoderAPI
    {
        CONST_VTBL struct IEncoderAPIVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> IsSupported(This,Api) )
    ( (This)->lpVtbl -> IsAvailable(This,Api) )
    ( (This)->lpVtbl -> GetParameterRange(This,Api,ValueMin,ValueMax,SteppingDelta) )
    ( (This)->lpVtbl -> GetParameterValues(This,Api,Values,ValuesCount) )
    ( (This)->lpVtbl -> GetDefaultValue(This,Api,Value) )
    ( (This)->lpVtbl -> GetValue(This,Api,Value) )
    ( (This)->lpVtbl -> SetValue(This,Api,Value) )
EXTERN_C const IID IID_IVideoEncoder;
    typedef struct IVideoEncoderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IVideoEncoder * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IVideoEncoder * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IVideoEncoder * This);
        HRESULT ( STDMETHODCALLTYPE *IsSupported )(
            IVideoEncoder * This,
                       const GUID *Api);
        HRESULT ( STDMETHODCALLTYPE *IsAvailable )(
            IVideoEncoder * This,
                       const GUID *Api);
        HRESULT ( STDMETHODCALLTYPE *GetParameterRange )(
            IVideoEncoder * This,
                       const GUID *Api,
            _Out_ VARIANT *ValueMin,
            _Out_ VARIANT *ValueMax,
            _Out_ VARIANT *SteppingDelta);
        HRESULT ( STDMETHODCALLTYPE *GetParameterValues )(
            IVideoEncoder * This,
                       const GUID *Api,
            _Outptr_result_buffer_all_(*ValuesCount) VARIANT **Values,
            _Out_ ULONG *ValuesCount);
        HRESULT ( STDMETHODCALLTYPE *GetDefaultValue )(
            IVideoEncoder * This,
                       const GUID *Api,
            _Out_ VARIANT *Value);
        HRESULT ( STDMETHODCALLTYPE *GetValue )(
            IVideoEncoder * This,
                       const GUID *Api,
            _Out_ VARIANT *Value);
        HRESULT ( STDMETHODCALLTYPE *SetValue )(
            IVideoEncoder * This,
                       const GUID *Api,
            _In_ VARIANT *Value);
        END_INTERFACE
    } IVideoEncoderVtbl;
    interface IVideoEncoder
    {
        CONST_VTBL struct IVideoEncoderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> IsSupported(This,Api) )
    ( (This)->lpVtbl -> IsAvailable(This,Api) )
    ( (This)->lpVtbl -> GetParameterRange(This,Api,ValueMin,ValueMax,SteppingDelta) )
    ( (This)->lpVtbl -> GetParameterValues(This,Api,Values,ValuesCount) )
    ( (This)->lpVtbl -> GetDefaultValue(This,Api,Value) )
    ( (This)->lpVtbl -> GetValue(This,Api,Value) )
    ( (This)->lpVtbl -> SetValue(This,Api,Value) )
typedef
enum VIDEOENCODER_BITRATE_MODE
    {
        ConstantBitRate = 0,
        VariableBitRateAverage = ( ConstantBitRate + 1 ) ,
        VariableBitRatePeak = ( VariableBitRateAverage + 1 )
    } VIDEOENCODER_BITRATE_MODE;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0107_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0107_v0_0_s_ifspec;
EXTERN_C const IID IID_IAMDecoderCaps;
    typedef struct IAMDecoderCapsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IAMDecoderCaps * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IAMDecoderCaps * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IAMDecoderCaps * This);
        HRESULT ( STDMETHODCALLTYPE *GetDecoderCaps )(
            IAMDecoderCaps * This,
                       DWORD dwCapIndex,
            _Out_ DWORD *lpdwCap);
        END_INTERFACE
    } IAMDecoderCapsVtbl;
    interface IAMDecoderCaps
    {
        CONST_VTBL struct IAMDecoderCapsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetDecoderCaps(This,dwCapIndex,lpdwCap) )
typedef struct _AMCOPPSignature
    {
    BYTE Signature[ 256 ];
    } AMCOPPSignature;
typedef struct _AMCOPPCommand
    {
    GUID macKDI;
    GUID guidCommandID;
    DWORD dwSequence;
    DWORD cbSizeData;
    BYTE CommandData[ 4056 ];
    } AMCOPPCommand;
typedef struct _AMCOPPCommand *LPAMCOPPCommand;
typedef struct _AMCOPPStatusInput
    {
    GUID rApp;
    GUID guidStatusRequestID;
    DWORD dwSequence;
    DWORD cbSizeData;
    BYTE StatusData[ 4056 ];
    } AMCOPPStatusInput;
typedef struct _AMCOPPStatusInput *LPAMCOPPStatusInput;
typedef struct _AMCOPPStatusOutput
    {
    GUID macKDI;
    DWORD cbSizeData;
    BYTE COPPStatus[ 4076 ];
    } AMCOPPStatusOutput;
typedef struct _AMCOPPStatusOutput *LPAMCOPPStatusOutput;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0108_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0108_v0_0_s_ifspec;
EXTERN_C const IID IID_IAMCertifiedOutputProtection;
    typedef struct IAMCertifiedOutputProtectionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IAMCertifiedOutputProtection * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IAMCertifiedOutputProtection * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IAMCertifiedOutputProtection * This);
        HRESULT ( STDMETHODCALLTYPE *KeyExchange )(
            IAMCertifiedOutputProtection * This,
            _Out_ GUID *pRandom,
            _Outptr_result_bytebuffer_(*pdwLengthCertGH) BYTE **VarLenCertGH,
            _Out_ DWORD *pdwLengthCertGH);
        HRESULT ( STDMETHODCALLTYPE *SessionSequenceStart )(
            IAMCertifiedOutputProtection * This,
                       AMCOPPSignature *pSig);
        HRESULT ( STDMETHODCALLTYPE *ProtectionCommand )(
            IAMCertifiedOutputProtection * This,
                       const AMCOPPCommand *cmd);
        HRESULT ( STDMETHODCALLTYPE *ProtectionStatus )(
            IAMCertifiedOutputProtection * This,
                       const AMCOPPStatusInput *pStatusInput,
            _Out_ AMCOPPStatusOutput *pStatusOutput);
        END_INTERFACE
    } IAMCertifiedOutputProtectionVtbl;
    interface IAMCertifiedOutputProtection
    {
        CONST_VTBL struct IAMCertifiedOutputProtectionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> KeyExchange(This,pRandom,VarLenCertGH,pdwLengthCertGH) )
    ( (This)->lpVtbl -> SessionSequenceStart(This,pSig) )
    ( (This)->lpVtbl -> ProtectionCommand(This,cmd) )
    ( (This)->lpVtbl -> ProtectionStatus(This,pStatusInput,pStatusOutput) )
EXTERN_C const IID IID_IAMAsyncReaderTimestampScaling;
    typedef struct IAMAsyncReaderTimestampScalingVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IAMAsyncReaderTimestampScaling * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IAMAsyncReaderTimestampScaling * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IAMAsyncReaderTimestampScaling * This);
        HRESULT ( STDMETHODCALLTYPE *GetTimestampMode )(
            IAMAsyncReaderTimestampScaling * This,
            _Out_ BOOL *pfRaw);
        HRESULT ( STDMETHODCALLTYPE *SetTimestampMode )(
            IAMAsyncReaderTimestampScaling * This,
            BOOL fRaw);
        END_INTERFACE
    } IAMAsyncReaderTimestampScalingVtbl;
    interface IAMAsyncReaderTimestampScaling
    {
        CONST_VTBL struct IAMAsyncReaderTimestampScalingVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTimestampMode(This,pfRaw) )
    ( (This)->lpVtbl -> SetTimestampMode(This,fRaw) )
EXTERN_C const IID IID_IAMPluginControl;
    typedef struct IAMPluginControlVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IAMPluginControl * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IAMPluginControl * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IAMPluginControl * This);
        HRESULT ( STDMETHODCALLTYPE *GetPreferredClsid )(
            IAMPluginControl * This,
            _In_ REFGUID subType,
            _Out_ CLSID *clsid);
        HRESULT ( STDMETHODCALLTYPE *GetPreferredClsidByIndex )(
            IAMPluginControl * This,
            DWORD index,
            _Out_ GUID *subType,
            _Out_ CLSID *clsid);
        HRESULT ( STDMETHODCALLTYPE *SetPreferredClsid )(
            IAMPluginControl * This,
            _In_ REFGUID subType,
            _In_opt_ const CLSID *clsid);
        HRESULT ( STDMETHODCALLTYPE *IsDisabled )(
            IAMPluginControl * This,
            REFCLSID clsid);
        HRESULT ( STDMETHODCALLTYPE *GetDisabledByIndex )(
            IAMPluginControl * This,
            DWORD index,
            _Out_ CLSID *clsid);
        HRESULT ( STDMETHODCALLTYPE *SetDisabled )(
            IAMPluginControl * This,
            REFCLSID clsid,
            BOOL disabled);
        HRESULT ( STDMETHODCALLTYPE *IsLegacyDisabled )(
            IAMPluginControl * This,
            LPCWSTR dllName);
        END_INTERFACE
    } IAMPluginControlVtbl;
    interface IAMPluginControl
    {
        CONST_VTBL struct IAMPluginControlVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetPreferredClsid(This,subType,clsid) )
    ( (This)->lpVtbl -> GetPreferredClsidByIndex(This,index,subType,clsid) )
    ( (This)->lpVtbl -> SetPreferredClsid(This,subType,clsid) )
    ( (This)->lpVtbl -> IsDisabled(This,clsid) )
    ( (This)->lpVtbl -> GetDisabledByIndex(This,index,clsid) )
    ( (This)->lpVtbl -> SetDisabled(This,clsid,disabled) )
    ( (This)->lpVtbl -> IsLegacyDisabled(This,dllName) )
#endif
#pragma endregion
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0111_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0111_v0_0_s_ifspec;
EXTERN_C const IID IID_IPinConnection;
    typedef struct IPinConnectionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IPinConnection * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IPinConnection * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IPinConnection * This);
        HRESULT ( STDMETHODCALLTYPE *DynamicQueryAccept )(
            IPinConnection * This,
                       const AM_MEDIA_TYPE *pmt);
        HRESULT ( STDMETHODCALLTYPE *NotifyEndOfStream )(
            IPinConnection * This,
                       HANDLE hNotifyEvent);
        HRESULT ( STDMETHODCALLTYPE *IsEndPin )(
            IPinConnection * This);
        HRESULT ( STDMETHODCALLTYPE *DynamicDisconnect )(
            IPinConnection * This);
        END_INTERFACE
    } IPinConnectionVtbl;
    interface IPinConnection
    {
        CONST_VTBL struct IPinConnectionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> DynamicQueryAccept(This,pmt) )
    ( (This)->lpVtbl -> NotifyEndOfStream(This,hNotifyEvent) )
    ( (This)->lpVtbl -> IsEndPin(This) )
    ( (This)->lpVtbl -> DynamicDisconnect(This) )
EXTERN_C const IID IID_IPinFlowControl;
    typedef struct IPinFlowControlVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IPinFlowControl * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IPinFlowControl * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IPinFlowControl * This);
        HRESULT ( STDMETHODCALLTYPE *Block )(
            IPinFlowControl * This,
                       DWORD dwBlockFlags,
                       HANDLE hEvent);
        END_INTERFACE
    } IPinFlowControlVtbl;
    interface IPinFlowControl
    {
        CONST_VTBL struct IPinFlowControlVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Block(This,dwBlockFlags,hEvent) )
enum _AM_PIN_FLOW_CONTROL_BLOCK_FLAGS
    {
        AM_PIN_FLOW_CONTROL_BLOCK = 0x1
    } ;
typedef
enum _AM_GRAPH_CONFIG_RECONNECT_FLAGS
    {
        AM_GRAPH_CONFIG_RECONNECT_DIRECTCONNECT = 0x1,
        AM_GRAPH_CONFIG_RECONNECT_CACHE_REMOVED_FILTERS = 0x2,
        AM_GRAPH_CONFIG_RECONNECT_USE_ONLY_CACHED_FILTERS = 0x4
    } AM_GRAPH_CONFIG_RECONNECT_FLAGS;
enum _REM_FILTER_FLAGS
    {
        REMFILTERF_LEAVECONNECTED = 0x1
    } ;
typedef
enum _AM_FILTER_FLAGS
    {
        AM_FILTER_FLAGS_REMOVABLE = 0x1
    } AM_FILTER_FLAGS;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0113_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0113_v0_0_s_ifspec;
EXTERN_C const IID IID_IGraphConfig;
    typedef struct IGraphConfigVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IGraphConfig * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IGraphConfig * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IGraphConfig * This);
        HRESULT ( STDMETHODCALLTYPE *Reconnect )(
            IGraphConfig * This,
                       IPin *pOutputPin,
                       IPin *pInputPin,
                       const AM_MEDIA_TYPE *pmtFirstConnection,
                       IBaseFilter *pUsingFilter,
                       HANDLE hAbortEvent,
                       DWORD dwFlags);
        HRESULT ( STDMETHODCALLTYPE *Reconfigure )(
            IGraphConfig * This,
                       IGraphConfigCallback *pCallback,
                       PVOID pvContext,
                       DWORD dwFlags,
                       HANDLE hAbortEvent);
        HRESULT ( STDMETHODCALLTYPE *AddFilterToCache )(
            IGraphConfig * This,
                       IBaseFilter *pFilter);
        HRESULT ( STDMETHODCALLTYPE *EnumCacheFilter )(
            IGraphConfig * This,
                        IEnumFilters **pEnum);
        HRESULT ( STDMETHODCALLTYPE *RemoveFilterFromCache )(
            IGraphConfig * This,
                       IBaseFilter *pFilter);
        HRESULT ( STDMETHODCALLTYPE *GetStartTime )(
            IGraphConfig * This,
                        REFERENCE_TIME *prtStart);
        HRESULT ( STDMETHODCALLTYPE *PushThroughData )(
            IGraphConfig * This,
                       IPin *pOutputPin,
                       IPinConnection *pConnection,
                       HANDLE hEventAbort);
        HRESULT ( STDMETHODCALLTYPE *SetFilterFlags )(
            IGraphConfig * This,
                       IBaseFilter *pFilter,
                       DWORD dwFlags);
        HRESULT ( STDMETHODCALLTYPE *GetFilterFlags )(
            IGraphConfig * This,
                       IBaseFilter *pFilter,
                        DWORD *pdwFlags);
        HRESULT ( STDMETHODCALLTYPE *RemoveFilterEx )(
            IGraphConfig * This,
                       IBaseFilter *pFilter,
            DWORD Flags);
        END_INTERFACE
    } IGraphConfigVtbl;
    interface IGraphConfig
    {
        CONST_VTBL struct IGraphConfigVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Reconnect(This,pOutputPin,pInputPin,pmtFirstConnection,pUsingFilter,hAbortEvent,dwFlags) )
    ( (This)->lpVtbl -> Reconfigure(This,pCallback,pvContext,dwFlags,hAbortEvent) )
    ( (This)->lpVtbl -> AddFilterToCache(This,pFilter) )
    ( (This)->lpVtbl -> EnumCacheFilter(This,pEnum) )
    ( (This)->lpVtbl -> RemoveFilterFromCache(This,pFilter) )
    ( (This)->lpVtbl -> GetStartTime(This,prtStart) )
    ( (This)->lpVtbl -> PushThroughData(This,pOutputPin,pConnection,hEventAbort) )
    ( (This)->lpVtbl -> SetFilterFlags(This,pFilter,dwFlags) )
    ( (This)->lpVtbl -> GetFilterFlags(This,pFilter,pdwFlags) )
    ( (This)->lpVtbl -> RemoveFilterEx(This,pFilter,Flags) )
EXTERN_C const IID IID_IGraphConfigCallback;
    typedef struct IGraphConfigCallbackVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IGraphConfigCallback * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IGraphConfigCallback * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IGraphConfigCallback * This);
        HRESULT ( STDMETHODCALLTYPE *Reconfigure )(
            IGraphConfigCallback * This,
            PVOID pvContext,
            DWORD dwFlags);
        END_INTERFACE
    } IGraphConfigCallbackVtbl;
    interface IGraphConfigCallback
    {
        CONST_VTBL struct IGraphConfigCallbackVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Reconfigure(This,pvContext,dwFlags) )
EXTERN_C const IID IID_IFilterChain;
    typedef struct IFilterChainVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IFilterChain * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IFilterChain * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IFilterChain * This);
        HRESULT ( STDMETHODCALLTYPE *StartChain )(
            IFilterChain * This,
                       IBaseFilter *pStartFilter,
                       IBaseFilter *pEndFilter);
        HRESULT ( STDMETHODCALLTYPE *PauseChain )(
            IFilterChain * This,
                       IBaseFilter *pStartFilter,
                       IBaseFilter *pEndFilter);
        HRESULT ( STDMETHODCALLTYPE *StopChain )(
            IFilterChain * This,
                       IBaseFilter *pStartFilter,
                       IBaseFilter *pEndFilter);
        HRESULT ( STDMETHODCALLTYPE *RemoveChain )(
            IFilterChain * This,
                       IBaseFilter *pStartFilter,
                       IBaseFilter *pEndFilter);
        END_INTERFACE
    } IFilterChainVtbl;
    interface IFilterChain
    {
        CONST_VTBL struct IFilterChainVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> StartChain(This,pStartFilter,pEndFilter) )
    ( (This)->lpVtbl -> PauseChain(This,pStartFilter,pEndFilter) )
    ( (This)->lpVtbl -> StopChain(This,pStartFilter,pEndFilter) )
    ( (This)->lpVtbl -> RemoveChain(This,pStartFilter,pEndFilter) )
#endif
#pragma endregion
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#if 0
typedef DWORD *LPDIRECTDRAW7;
typedef DWORD *LPDIRECTDRAWSURFACE7;
typedef DWORD *LPDDPIXELFORMAT;
typedef DWORD *LPBITMAPINFOHEADER;
typedef struct DDCOLORKEY
    {
    DWORD dw1;
    DWORD dw2;
    } DDCOLORKEY;
typedef DDCOLORKEY *LPDDCOLORKEY;
#endif
#include <ddraw.h>
typedef
enum VMRPresentationFlags
    {
        VMRSample_SyncPoint = 0x1,
        VMRSample_Preroll = 0x2,
        VMRSample_Discontinuity = 0x4,
        VMRSample_TimeValid = 0x8,
        VMRSample_SrcDstRectsValid = 0x10
    } VMRPresentationFlags;
typedef struct tagVMRPRESENTATIONINFO
    {
    DWORD dwFlags;
    LPDIRECTDRAWSURFACE7 lpSurf;
    REFERENCE_TIME rtStart;
    REFERENCE_TIME rtEnd;
    SIZE szAspectRatio;
    RECT rcSrc;
    RECT rcDst;
    DWORD dwTypeSpecificFlags;
    DWORD dwInterlaceFlags;
    } VMRPRESENTATIONINFO;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0116_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0116_v0_0_s_ifspec;
EXTERN_C const IID IID_IVMRImagePresenter;
    typedef struct IVMRImagePresenterVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IVMRImagePresenter * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IVMRImagePresenter * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IVMRImagePresenter * This);
        HRESULT ( STDMETHODCALLTYPE *StartPresenting )(
            IVMRImagePresenter * This,
                       DWORD_PTR dwUserID);
        HRESULT ( STDMETHODCALLTYPE *StopPresenting )(
            IVMRImagePresenter * This,
                       DWORD_PTR dwUserID);
        HRESULT ( STDMETHODCALLTYPE *PresentImage )(
            IVMRImagePresenter * This,
                       DWORD_PTR dwUserID,
                       VMRPRESENTATIONINFO *lpPresInfo);
        END_INTERFACE
    } IVMRImagePresenterVtbl;
    interface IVMRImagePresenter
    {
        CONST_VTBL struct IVMRImagePresenterVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> StartPresenting(This,dwUserID) )
    ( (This)->lpVtbl -> StopPresenting(This,dwUserID) )
    ( (This)->lpVtbl -> PresentImage(This,dwUserID,lpPresInfo) )
typedef
enum VMRSurfaceAllocationFlags
    {
        AMAP_PIXELFORMAT_VALID = 0x1,
        AMAP_3D_TARGET = 0x2,
        AMAP_ALLOW_SYSMEM = 0x4,
        AMAP_FORCE_SYSMEM = 0x8,
        AMAP_DIRECTED_FLIP = 0x10,
        AMAP_DXVA_TARGET = 0x20
    } VMRSurfaceAllocationFlags;
typedef struct tagVMRALLOCATIONINFO
    {
    DWORD dwFlags;
    LPBITMAPINFOHEADER lpHdr;
    LPDDPIXELFORMAT lpPixFmt;
    SIZE szAspectRatio;
    DWORD dwMinBuffers;
    DWORD dwMaxBuffers;
    DWORD dwInterlaceFlags;
    SIZE szNativeSize;
    } VMRALLOCATIONINFO;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0117_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0117_v0_0_s_ifspec;
EXTERN_C const IID IID_IVMRSurfaceAllocator;
    typedef struct IVMRSurfaceAllocatorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IVMRSurfaceAllocator * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IVMRSurfaceAllocator * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IVMRSurfaceAllocator * This);
        HRESULT ( STDMETHODCALLTYPE *AllocateSurface )(
            IVMRSurfaceAllocator * This,
                       DWORD_PTR dwUserID,
                       VMRALLOCATIONINFO *lpAllocInfo,
                            DWORD *lpdwActualBuffers,
                        LPDIRECTDRAWSURFACE7 *lplpSurface);
        HRESULT ( STDMETHODCALLTYPE *FreeSurface )(
            IVMRSurfaceAllocator * This,
                       DWORD_PTR dwID);
        HRESULT ( STDMETHODCALLTYPE *PrepareSurface )(
            IVMRSurfaceAllocator * This,
                       DWORD_PTR dwUserID,
                       LPDIRECTDRAWSURFACE7 lpSurface,
                       DWORD dwSurfaceFlags);
        HRESULT ( STDMETHODCALLTYPE *AdviseNotify )(
            IVMRSurfaceAllocator * This,
                       IVMRSurfaceAllocatorNotify *lpIVMRSurfAllocNotify);
        END_INTERFACE
    } IVMRSurfaceAllocatorVtbl;
    interface IVMRSurfaceAllocator
    {
        CONST_VTBL struct IVMRSurfaceAllocatorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AllocateSurface(This,dwUserID,lpAllocInfo,lpdwActualBuffers,lplpSurface) )
    ( (This)->lpVtbl -> FreeSurface(This,dwID) )
    ( (This)->lpVtbl -> PrepareSurface(This,dwUserID,lpSurface,dwSurfaceFlags) )
    ( (This)->lpVtbl -> AdviseNotify(This,lpIVMRSurfAllocNotify) )
EXTERN_C const IID IID_IVMRSurfaceAllocatorNotify;
    typedef struct IVMRSurfaceAllocatorNotifyVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IVMRSurfaceAllocatorNotify * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IVMRSurfaceAllocatorNotify * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IVMRSurfaceAllocatorNotify * This);
        HRESULT ( STDMETHODCALLTYPE *AdviseSurfaceAllocator )(
            IVMRSurfaceAllocatorNotify * This,
                       DWORD_PTR dwUserID,
                       IVMRSurfaceAllocator *lpIVRMSurfaceAllocator);
        HRESULT ( STDMETHODCALLTYPE *SetDDrawDevice )(
            IVMRSurfaceAllocatorNotify * This,
                       LPDIRECTDRAW7 lpDDrawDevice,
                       HMONITOR hMonitor);
        HRESULT ( STDMETHODCALLTYPE *ChangeDDrawDevice )(
            IVMRSurfaceAllocatorNotify * This,
                       LPDIRECTDRAW7 lpDDrawDevice,
                       HMONITOR hMonitor);
        HRESULT ( STDMETHODCALLTYPE *RestoreDDrawSurfaces )(
            IVMRSurfaceAllocatorNotify * This);
        HRESULT ( STDMETHODCALLTYPE *NotifyEvent )(
            IVMRSurfaceAllocatorNotify * This,
                       LONG EventCode,
                       LONG_PTR Param1,
                       LONG_PTR Param2);
        HRESULT ( STDMETHODCALLTYPE *SetBorderColor )(
            IVMRSurfaceAllocatorNotify * This,
                       COLORREF clrBorder);
        END_INTERFACE
    } IVMRSurfaceAllocatorNotifyVtbl;
    interface IVMRSurfaceAllocatorNotify
    {
        CONST_VTBL struct IVMRSurfaceAllocatorNotifyVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AdviseSurfaceAllocator(This,dwUserID,lpIVRMSurfaceAllocator) )
    ( (This)->lpVtbl -> SetDDrawDevice(This,lpDDrawDevice,hMonitor) )
    ( (This)->lpVtbl -> ChangeDDrawDevice(This,lpDDrawDevice,hMonitor) )
    ( (This)->lpVtbl -> RestoreDDrawSurfaces(This) )
    ( (This)->lpVtbl -> NotifyEvent(This,EventCode,Param1,Param2) )
    ( (This)->lpVtbl -> SetBorderColor(This,clrBorder) )
typedef
enum VMR_ASPECT_RATIO_MODE
    {
        VMR_ARMODE_NONE = 0,
        VMR_ARMODE_LETTER_BOX = ( VMR_ARMODE_NONE + 1 )
    } VMR_ASPECT_RATIO_MODE;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0119_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0119_v0_0_s_ifspec;
EXTERN_C const IID IID_IVMRWindowlessControl;
    typedef struct IVMRWindowlessControlVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IVMRWindowlessControl * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IVMRWindowlessControl * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IVMRWindowlessControl * This);
        HRESULT ( STDMETHODCALLTYPE *GetNativeVideoSize )(
            IVMRWindowlessControl * This,
                        LONG *lpWidth,
                        LONG *lpHeight,
                        LONG *lpARWidth,
                        LONG *lpARHeight);
        HRESULT ( STDMETHODCALLTYPE *GetMinIdealVideoSize )(
            IVMRWindowlessControl * This,
                        LONG *lpWidth,
                        LONG *lpHeight);
        HRESULT ( STDMETHODCALLTYPE *GetMaxIdealVideoSize )(
            IVMRWindowlessControl * This,
                        LONG *lpWidth,
                        LONG *lpHeight);
        HRESULT ( STDMETHODCALLTYPE *SetVideoPosition )(
            IVMRWindowlessControl * This,
                       const LPRECT lpSRCRect,
                       const LPRECT lpDSTRect);
        HRESULT ( STDMETHODCALLTYPE *GetVideoPosition )(
            IVMRWindowlessControl * This,
                        LPRECT lpSRCRect,
                        LPRECT lpDSTRect);
        HRESULT ( STDMETHODCALLTYPE *GetAspectRatioMode )(
            IVMRWindowlessControl * This,
                        DWORD *lpAspectRatioMode);
        HRESULT ( STDMETHODCALLTYPE *SetAspectRatioMode )(
            IVMRWindowlessControl * This,
                       DWORD AspectRatioMode);
        HRESULT ( STDMETHODCALLTYPE *SetVideoClippingWindow )(
            IVMRWindowlessControl * This,
                       HWND hwnd);
        HRESULT ( STDMETHODCALLTYPE *RepaintVideo )(
            IVMRWindowlessControl * This,
                       HWND hwnd,
                       HDC hdc);
        HRESULT ( STDMETHODCALLTYPE *DisplayModeChanged )(
            IVMRWindowlessControl * This);
        HRESULT ( STDMETHODCALLTYPE *GetCurrentImage )(
            IVMRWindowlessControl * This,
                        BYTE **lpDib);
        HRESULT ( STDMETHODCALLTYPE *SetBorderColor )(
            IVMRWindowlessControl * This,
                       COLORREF Clr);
        HRESULT ( STDMETHODCALLTYPE *GetBorderColor )(
            IVMRWindowlessControl * This,
                        COLORREF *lpClr);
        HRESULT ( STDMETHODCALLTYPE *SetColorKey )(
            IVMRWindowlessControl * This,
                       COLORREF Clr);
        HRESULT ( STDMETHODCALLTYPE *GetColorKey )(
            IVMRWindowlessControl * This,
                        COLORREF *lpClr);
        END_INTERFACE
    } IVMRWindowlessControlVtbl;
    interface IVMRWindowlessControl
    {
        CONST_VTBL struct IVMRWindowlessControlVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetNativeVideoSize(This,lpWidth,lpHeight,lpARWidth,lpARHeight) )
    ( (This)->lpVtbl -> GetMinIdealVideoSize(This,lpWidth,lpHeight) )
    ( (This)->lpVtbl -> GetMaxIdealVideoSize(This,lpWidth,lpHeight) )
    ( (This)->lpVtbl -> SetVideoPosition(This,lpSRCRect,lpDSTRect) )
    ( (This)->lpVtbl -> GetVideoPosition(This,lpSRCRect,lpDSTRect) )
    ( (This)->lpVtbl -> GetAspectRatioMode(This,lpAspectRatioMode) )
    ( (This)->lpVtbl -> SetAspectRatioMode(This,AspectRatioMode) )
    ( (This)->lpVtbl -> SetVideoClippingWindow(This,hwnd) )
    ( (This)->lpVtbl -> RepaintVideo(This,hwnd,hdc) )
    ( (This)->lpVtbl -> DisplayModeChanged(This) )
    ( (This)->lpVtbl -> GetCurrentImage(This,lpDib) )
    ( (This)->lpVtbl -> SetBorderColor(This,Clr) )
    ( (This)->lpVtbl -> GetBorderColor(This,lpClr) )
    ( (This)->lpVtbl -> SetColorKey(This,Clr) )
    ( (This)->lpVtbl -> GetColorKey(This,lpClr) )
typedef
enum VMRMixerPrefs
    {
        MixerPref_NoDecimation = 0x1,
        MixerPref_DecimateOutput = 0x2,
        MixerPref_ARAdjustXorY = 0x4,
        MixerPref_DecimationReserved = 0x8,
        MixerPref_DecimateMask = 0xf,
        MixerPref_BiLinearFiltering = 0x10,
        MixerPref_PointFiltering = 0x20,
        MixerPref_FilteringMask = 0xf0,
        MixerPref_RenderTargetRGB = 0x100,
        MixerPref_RenderTargetYUV = 0x1000,
        MixerPref_RenderTargetYUV420 = 0x200,
        MixerPref_RenderTargetYUV422 = 0x400,
        MixerPref_RenderTargetYUV444 = 0x800,
        MixerPref_RenderTargetReserved = 0xe000,
        MixerPref_RenderTargetMask = 0xff00,
        MixerPref_DynamicSwitchToBOB = 0x10000,
        MixerPref_DynamicDecimateBy2 = 0x20000,
        MixerPref_DynamicReserved = 0xc0000,
        MixerPref_DynamicMask = 0xf0000
    } VMRMixerPrefs;
typedef struct _NORMALIZEDRECT
    {
    float left;
    float top;
    float right;
    float bottom;
    } NORMALIZEDRECT;
typedef struct _NORMALIZEDRECT *PNORMALIZEDRECT;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0120_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0120_v0_0_s_ifspec;
EXTERN_C const IID IID_IVMRMixerControl;
    typedef struct IVMRMixerControlVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IVMRMixerControl * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IVMRMixerControl * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IVMRMixerControl * This);
        HRESULT ( STDMETHODCALLTYPE *SetAlpha )(
            IVMRMixerControl * This,
                       DWORD dwStreamID,
                       float Alpha);
        HRESULT ( STDMETHODCALLTYPE *GetAlpha )(
            IVMRMixerControl * This,
                       DWORD dwStreamID,
                        float *pAlpha);
        HRESULT ( STDMETHODCALLTYPE *SetZOrder )(
            IVMRMixerControl * This,
                       DWORD dwStreamID,
                       DWORD dwZ);
        HRESULT ( STDMETHODCALLTYPE *GetZOrder )(
            IVMRMixerControl * This,
                       DWORD dwStreamID,
                        DWORD *pZ);
        HRESULT ( STDMETHODCALLTYPE *SetOutputRect )(
            IVMRMixerControl * This,
                       DWORD dwStreamID,
                       const NORMALIZEDRECT *pRect);
        HRESULT ( STDMETHODCALLTYPE *GetOutputRect )(
            IVMRMixerControl * This,
                       DWORD dwStreamID,
                        NORMALIZEDRECT *pRect);
        HRESULT ( STDMETHODCALLTYPE *SetBackgroundClr )(
            IVMRMixerControl * This,
                       COLORREF ClrBkg);
        HRESULT ( STDMETHODCALLTYPE *GetBackgroundClr )(
            IVMRMixerControl * This,
                       COLORREF *lpClrBkg);
        HRESULT ( STDMETHODCALLTYPE *SetMixingPrefs )(
            IVMRMixerControl * This,
                       DWORD dwMixerPrefs);
        HRESULT ( STDMETHODCALLTYPE *GetMixingPrefs )(
            IVMRMixerControl * This,
                        DWORD *pdwMixerPrefs);
        END_INTERFACE
    } IVMRMixerControlVtbl;
    interface IVMRMixerControl
    {
        CONST_VTBL struct IVMRMixerControlVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetAlpha(This,dwStreamID,Alpha) )
    ( (This)->lpVtbl -> GetAlpha(This,dwStreamID,pAlpha) )
    ( (This)->lpVtbl -> SetZOrder(This,dwStreamID,dwZ) )
    ( (This)->lpVtbl -> GetZOrder(This,dwStreamID,pZ) )
    ( (This)->lpVtbl -> SetOutputRect(This,dwStreamID,pRect) )
    ( (This)->lpVtbl -> GetOutputRect(This,dwStreamID,pRect) )
    ( (This)->lpVtbl -> SetBackgroundClr(This,ClrBkg) )
    ( (This)->lpVtbl -> GetBackgroundClr(This,lpClrBkg) )
    ( (This)->lpVtbl -> SetMixingPrefs(This,dwMixerPrefs) )
    ( (This)->lpVtbl -> GetMixingPrefs(This,pdwMixerPrefs) )
typedef struct tagVMRGUID
    {
    GUID *pGUID;
    GUID GUID;
    } VMRGUID;
typedef struct tagVMRMONITORINFO
    {
    VMRGUID guid;
    RECT rcMonitor;
    HMONITOR hMon;
    DWORD dwFlags;
    wchar_t szDevice[ 32 ];
    wchar_t szDescription[ 256 ];
    LARGE_INTEGER liDriverVersion;
    DWORD dwVendorId;
    DWORD dwDeviceId;
    DWORD dwSubSysId;
    DWORD dwRevision;
    } VMRMONITORINFO;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0121_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0121_v0_0_s_ifspec;
EXTERN_C const IID IID_IVMRMonitorConfig;
    typedef struct IVMRMonitorConfigVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IVMRMonitorConfig * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IVMRMonitorConfig * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IVMRMonitorConfig * This);
        HRESULT ( STDMETHODCALLTYPE *SetMonitor )(
            IVMRMonitorConfig * This,
                       const VMRGUID *pGUID);
        HRESULT ( STDMETHODCALLTYPE *GetMonitor )(
            IVMRMonitorConfig * This,
                        VMRGUID *pGUID);
        HRESULT ( STDMETHODCALLTYPE *SetDefaultMonitor )(
            IVMRMonitorConfig * This,
                       const VMRGUID *pGUID);
        HRESULT ( STDMETHODCALLTYPE *GetDefaultMonitor )(
            IVMRMonitorConfig * This,
                        VMRGUID *pGUID);
        HRESULT ( STDMETHODCALLTYPE *GetAvailableMonitors )(
            IVMRMonitorConfig * This,
                                 VMRMONITORINFO *pInfo,
                       DWORD dwMaxInfoArraySize,
                        DWORD *pdwNumDevices);
        END_INTERFACE
    } IVMRMonitorConfigVtbl;
    interface IVMRMonitorConfig
    {
        CONST_VTBL struct IVMRMonitorConfigVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetMonitor(This,pGUID) )
    ( (This)->lpVtbl -> GetMonitor(This,pGUID) )
    ( (This)->lpVtbl -> SetDefaultMonitor(This,pGUID) )
    ( (This)->lpVtbl -> GetDefaultMonitor(This,pGUID) )
    ( (This)->lpVtbl -> GetAvailableMonitors(This,pInfo,dwMaxInfoArraySize,pdwNumDevices) )
typedef
enum VMRRenderPrefs
    {
        RenderPrefs_RestrictToInitialMonitor = 0,
        RenderPrefs_ForceOffscreen = 0x1,
        RenderPrefs_ForceOverlays = 0x2,
        RenderPrefs_AllowOverlays = 0,
        RenderPrefs_AllowOffscreen = 0,
        RenderPrefs_DoNotRenderColorKeyAndBorder = 0x8,
        RenderPrefs_Reserved = 0x10,
        RenderPrefs_PreferAGPMemWhenMixing = 0x20,
        RenderPrefs_Mask = 0x3f
    } VMRRenderPrefs;
typedef
enum VMRMode
    {
        VMRMode_Windowed = 0x1,
        VMRMode_Windowless = 0x2,
        VMRMode_Renderless = 0x4,
        VMRMode_Mask = 0x7
    } VMRMode;
enum __MIDL___MIDL_itf_strmif_0000_0122_0001
    {
        MAX_NUMBER_OF_STREAMS = 16
    } ;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0122_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0122_v0_0_s_ifspec;
EXTERN_C const IID IID_IVMRFilterConfig;
    typedef struct IVMRFilterConfigVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IVMRFilterConfig * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IVMRFilterConfig * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IVMRFilterConfig * This);
        HRESULT ( STDMETHODCALLTYPE *SetImageCompositor )(
            IVMRFilterConfig * This,
                       IVMRImageCompositor *lpVMRImgCompositor);
        HRESULT ( STDMETHODCALLTYPE *SetNumberOfStreams )(
            IVMRFilterConfig * This,
                       DWORD dwMaxStreams);
        HRESULT ( STDMETHODCALLTYPE *GetNumberOfStreams )(
            IVMRFilterConfig * This,
                        DWORD *pdwMaxStreams);
        HRESULT ( STDMETHODCALLTYPE *SetRenderingPrefs )(
            IVMRFilterConfig * This,
                       DWORD dwRenderFlags);
        HRESULT ( STDMETHODCALLTYPE *GetRenderingPrefs )(
            IVMRFilterConfig * This,
                        DWORD *pdwRenderFlags);
        HRESULT ( STDMETHODCALLTYPE *SetRenderingMode )(
            IVMRFilterConfig * This,
                       DWORD Mode);
        HRESULT ( STDMETHODCALLTYPE *GetRenderingMode )(
            IVMRFilterConfig * This,
                        DWORD *pMode);
        END_INTERFACE
    } IVMRFilterConfigVtbl;
    interface IVMRFilterConfig
    {
        CONST_VTBL struct IVMRFilterConfigVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetImageCompositor(This,lpVMRImgCompositor) )
    ( (This)->lpVtbl -> SetNumberOfStreams(This,dwMaxStreams) )
    ( (This)->lpVtbl -> GetNumberOfStreams(This,pdwMaxStreams) )
    ( (This)->lpVtbl -> SetRenderingPrefs(This,dwRenderFlags) )
    ( (This)->lpVtbl -> GetRenderingPrefs(This,pdwRenderFlags) )
    ( (This)->lpVtbl -> SetRenderingMode(This,Mode) )
    ( (This)->lpVtbl -> GetRenderingMode(This,pMode) )
EXTERN_C const IID IID_IVMRAspectRatioControl;
    typedef struct IVMRAspectRatioControlVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IVMRAspectRatioControl * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IVMRAspectRatioControl * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IVMRAspectRatioControl * This);
        HRESULT ( STDMETHODCALLTYPE *GetAspectRatioMode )(
            IVMRAspectRatioControl * This,
                        LPDWORD lpdwARMode);
        HRESULT ( STDMETHODCALLTYPE *SetAspectRatioMode )(
            IVMRAspectRatioControl * This,
                       DWORD dwARMode);
        END_INTERFACE
    } IVMRAspectRatioControlVtbl;
    interface IVMRAspectRatioControl
    {
        CONST_VTBL struct IVMRAspectRatioControlVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetAspectRatioMode(This,lpdwARMode) )
    ( (This)->lpVtbl -> SetAspectRatioMode(This,dwARMode) )
typedef
enum VMRDeinterlacePrefs
    {
        DeinterlacePref_NextBest = 0x1,
        DeinterlacePref_BOB = 0x2,
        DeinterlacePref_Weave = 0x4,
        DeinterlacePref_Mask = 0x7
    } VMRDeinterlacePrefs;
typedef
enum VMRDeinterlaceTech
    {
        DeinterlaceTech_Unknown = 0,
        DeinterlaceTech_BOBLineReplicate = 0x1,
        DeinterlaceTech_BOBVerticalStretch = 0x2,
        DeinterlaceTech_MedianFiltering = 0x4,
        DeinterlaceTech_EdgeFiltering = 0x10,
        DeinterlaceTech_FieldAdaptive = 0x20,
        DeinterlaceTech_PixelAdaptive = 0x40,
        DeinterlaceTech_MotionVectorSteered = 0x80
    } VMRDeinterlaceTech;
typedef struct _VMRFrequency
    {
    DWORD dwNumerator;
    DWORD dwDenominator;
    } VMRFrequency;
typedef struct _VMRVideoDesc
    {
    DWORD dwSize;
    DWORD dwSampleWidth;
    DWORD dwSampleHeight;
    BOOL SingleFieldPerSample;
    DWORD dwFourCC;
    VMRFrequency InputSampleFreq;
    VMRFrequency OutputFrameFreq;
    } VMRVideoDesc;
typedef struct _VMRDeinterlaceCaps
    {
    DWORD dwSize;
    DWORD dwNumPreviousOutputFrames;
    DWORD dwNumForwardRefSamples;
    DWORD dwNumBackwardRefSamples;
    VMRDeinterlaceTech DeinterlaceTechnology;
    } VMRDeinterlaceCaps;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0124_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0124_v0_0_s_ifspec;
EXTERN_C const IID IID_IVMRDeinterlaceControl;
    typedef struct IVMRDeinterlaceControlVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IVMRDeinterlaceControl * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IVMRDeinterlaceControl * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IVMRDeinterlaceControl * This);
        HRESULT ( STDMETHODCALLTYPE *GetNumberOfDeinterlaceModes )(
            IVMRDeinterlaceControl * This,
                       VMRVideoDesc *lpVideoDescription,
                            LPDWORD lpdwNumDeinterlaceModes,
                        LPGUID lpDeinterlaceModes);
        HRESULT ( STDMETHODCALLTYPE *GetDeinterlaceModeCaps )(
            IVMRDeinterlaceControl * This,
                       LPGUID lpDeinterlaceMode,
                       VMRVideoDesc *lpVideoDescription,
                            VMRDeinterlaceCaps *lpDeinterlaceCaps);
        HRESULT ( STDMETHODCALLTYPE *GetDeinterlaceMode )(
            IVMRDeinterlaceControl * This,
                       DWORD dwStreamID,
                        LPGUID lpDeinterlaceMode);
        HRESULT ( STDMETHODCALLTYPE *SetDeinterlaceMode )(
            IVMRDeinterlaceControl * This,
                       DWORD dwStreamID,
                       LPGUID lpDeinterlaceMode);
        HRESULT ( STDMETHODCALLTYPE *GetDeinterlacePrefs )(
            IVMRDeinterlaceControl * This,
                        LPDWORD lpdwDeinterlacePrefs);
        HRESULT ( STDMETHODCALLTYPE *SetDeinterlacePrefs )(
            IVMRDeinterlaceControl * This,
                       DWORD dwDeinterlacePrefs);
        HRESULT ( STDMETHODCALLTYPE *GetActualDeinterlaceMode )(
            IVMRDeinterlaceControl * This,
                       DWORD dwStreamID,
                        LPGUID lpDeinterlaceMode);
        END_INTERFACE
    } IVMRDeinterlaceControlVtbl;
    interface IVMRDeinterlaceControl
    {
        CONST_VTBL struct IVMRDeinterlaceControlVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetNumberOfDeinterlaceModes(This,lpVideoDescription,lpdwNumDeinterlaceModes,lpDeinterlaceModes) )
    ( (This)->lpVtbl -> GetDeinterlaceModeCaps(This,lpDeinterlaceMode,lpVideoDescription,lpDeinterlaceCaps) )
    ( (This)->lpVtbl -> GetDeinterlaceMode(This,dwStreamID,lpDeinterlaceMode) )
    ( (This)->lpVtbl -> SetDeinterlaceMode(This,dwStreamID,lpDeinterlaceMode) )
    ( (This)->lpVtbl -> GetDeinterlacePrefs(This,lpdwDeinterlacePrefs) )
    ( (This)->lpVtbl -> SetDeinterlacePrefs(This,dwDeinterlacePrefs) )
    ( (This)->lpVtbl -> GetActualDeinterlaceMode(This,dwStreamID,lpDeinterlaceMode) )
typedef struct _VMRALPHABITMAP
    {
    DWORD dwFlags;
    HDC hdc;
    LPDIRECTDRAWSURFACE7 pDDS;
    RECT rSrc;
    NORMALIZEDRECT rDest;
    FLOAT fAlpha;
    COLORREF clrSrcKey;
    } VMRALPHABITMAP;
typedef struct _VMRALPHABITMAP *PVMRALPHABITMAP;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0125_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0125_v0_0_s_ifspec;
EXTERN_C const IID IID_IVMRMixerBitmap;
    typedef struct IVMRMixerBitmapVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IVMRMixerBitmap * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IVMRMixerBitmap * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IVMRMixerBitmap * This);
        HRESULT ( STDMETHODCALLTYPE *SetAlphaBitmap )(
            IVMRMixerBitmap * This,
                       const VMRALPHABITMAP *pBmpParms);
        HRESULT ( STDMETHODCALLTYPE *UpdateAlphaBitmapParameters )(
            IVMRMixerBitmap * This,
                       PVMRALPHABITMAP pBmpParms);
        HRESULT ( STDMETHODCALLTYPE *GetAlphaBitmapParameters )(
            IVMRMixerBitmap * This,
                        PVMRALPHABITMAP pBmpParms);
        END_INTERFACE
    } IVMRMixerBitmapVtbl;
    interface IVMRMixerBitmap
    {
        CONST_VTBL struct IVMRMixerBitmapVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetAlphaBitmap(This,pBmpParms) )
    ( (This)->lpVtbl -> UpdateAlphaBitmapParameters(This,pBmpParms) )
    ( (This)->lpVtbl -> GetAlphaBitmapParameters(This,pBmpParms) )
typedef struct _VMRVIDEOSTREAMINFO
    {
    LPDIRECTDRAWSURFACE7 pddsVideoSurface;
    DWORD dwWidth;
    DWORD dwHeight;
    DWORD dwStrmID;
    FLOAT fAlpha;
    DDCOLORKEY ddClrKey;
    NORMALIZEDRECT rNormal;
    } VMRVIDEOSTREAMINFO;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0126_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0126_v0_0_s_ifspec;
EXTERN_C const IID IID_IVMRImageCompositor;
    typedef struct IVMRImageCompositorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IVMRImageCompositor * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IVMRImageCompositor * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IVMRImageCompositor * This);
        HRESULT ( STDMETHODCALLTYPE *InitCompositionTarget )(
            IVMRImageCompositor * This,
                       IUnknown *pD3DDevice,
                       LPDIRECTDRAWSURFACE7 pddsRenderTarget);
        HRESULT ( STDMETHODCALLTYPE *TermCompositionTarget )(
            IVMRImageCompositor * This,
                       IUnknown *pD3DDevice,
                       LPDIRECTDRAWSURFACE7 pddsRenderTarget);
        HRESULT ( STDMETHODCALLTYPE *SetStreamMediaType )(
            IVMRImageCompositor * This,
                       DWORD dwStrmID,
                       AM_MEDIA_TYPE *pmt,
                       BOOL fTexture);
        HRESULT ( STDMETHODCALLTYPE *CompositeImage )(
            IVMRImageCompositor * This,
                       IUnknown *pD3DDevice,
                       LPDIRECTDRAWSURFACE7 pddsRenderTarget,
                       AM_MEDIA_TYPE *pmtRenderTarget,
                       REFERENCE_TIME rtStart,
                       REFERENCE_TIME rtEnd,
                       DWORD dwClrBkGnd,
                       VMRVIDEOSTREAMINFO *pVideoStreamInfo,
                       UINT cStreams);
        END_INTERFACE
    } IVMRImageCompositorVtbl;
    interface IVMRImageCompositor
    {
        CONST_VTBL struct IVMRImageCompositorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> InitCompositionTarget(This,pD3DDevice,pddsRenderTarget) )
    ( (This)->lpVtbl -> TermCompositionTarget(This,pD3DDevice,pddsRenderTarget) )
    ( (This)->lpVtbl -> SetStreamMediaType(This,dwStrmID,pmt,fTexture) )
    ( (This)->lpVtbl -> CompositeImage(This,pD3DDevice,pddsRenderTarget,pmtRenderTarget,rtStart,rtEnd,dwClrBkGnd,pVideoStreamInfo,cStreams) )
EXTERN_C const IID IID_IVMRVideoStreamControl;
    typedef struct IVMRVideoStreamControlVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IVMRVideoStreamControl * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IVMRVideoStreamControl * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IVMRVideoStreamControl * This);
        HRESULT ( STDMETHODCALLTYPE *SetColorKey )(
            IVMRVideoStreamControl * This,
                       LPDDCOLORKEY lpClrKey);
        HRESULT ( STDMETHODCALLTYPE *GetColorKey )(
            IVMRVideoStreamControl * This,
                        LPDDCOLORKEY lpClrKey);
        HRESULT ( STDMETHODCALLTYPE *SetStreamActiveState )(
            IVMRVideoStreamControl * This,
                       BOOL fActive);
        HRESULT ( STDMETHODCALLTYPE *GetStreamActiveState )(
            IVMRVideoStreamControl * This,
                        BOOL *lpfActive);
        END_INTERFACE
    } IVMRVideoStreamControlVtbl;
    interface IVMRVideoStreamControl
    {
        CONST_VTBL struct IVMRVideoStreamControlVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetColorKey(This,lpClrKey) )
    ( (This)->lpVtbl -> GetColorKey(This,lpClrKey) )
    ( (This)->lpVtbl -> SetStreamActiveState(This,fActive) )
    ( (This)->lpVtbl -> GetStreamActiveState(This,lpfActive) )
EXTERN_C const IID IID_IVMRSurface;
    typedef struct IVMRSurfaceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IVMRSurface * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IVMRSurface * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IVMRSurface * This);
        HRESULT ( STDMETHODCALLTYPE *IsSurfaceLocked )(
            IVMRSurface * This);
        HRESULT ( STDMETHODCALLTYPE *LockSurface )(
            IVMRSurface * This,
                        BYTE **lpSurface);
        HRESULT ( STDMETHODCALLTYPE *UnlockSurface )(
            IVMRSurface * This);
        HRESULT ( STDMETHODCALLTYPE *GetSurface )(
            IVMRSurface * This,
                        LPDIRECTDRAWSURFACE7 *lplpSurface);
        END_INTERFACE
    } IVMRSurfaceVtbl;
    interface IVMRSurface
    {
        CONST_VTBL struct IVMRSurfaceVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> IsSurfaceLocked(This) )
    ( (This)->lpVtbl -> LockSurface(This,lpSurface) )
    ( (This)->lpVtbl -> UnlockSurface(This) )
    ( (This)->lpVtbl -> GetSurface(This,lplpSurface) )
EXTERN_C const IID IID_IVMRImagePresenterConfig;
    typedef struct IVMRImagePresenterConfigVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IVMRImagePresenterConfig * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IVMRImagePresenterConfig * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IVMRImagePresenterConfig * This);
        HRESULT ( STDMETHODCALLTYPE *SetRenderingPrefs )(
            IVMRImagePresenterConfig * This,
                       DWORD dwRenderFlags);
        HRESULT ( STDMETHODCALLTYPE *GetRenderingPrefs )(
            IVMRImagePresenterConfig * This,
                        DWORD *dwRenderFlags);
        END_INTERFACE
    } IVMRImagePresenterConfigVtbl;
    interface IVMRImagePresenterConfig
    {
        CONST_VTBL struct IVMRImagePresenterConfigVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetRenderingPrefs(This,dwRenderFlags) )
    ( (This)->lpVtbl -> GetRenderingPrefs(This,dwRenderFlags) )
EXTERN_C const IID IID_IVMRImagePresenterExclModeConfig;
    typedef struct IVMRImagePresenterExclModeConfigVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IVMRImagePresenterExclModeConfig * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IVMRImagePresenterExclModeConfig * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IVMRImagePresenterExclModeConfig * This);
        HRESULT ( STDMETHODCALLTYPE *SetRenderingPrefs )(
            IVMRImagePresenterExclModeConfig * This,
                       DWORD dwRenderFlags);
        HRESULT ( STDMETHODCALLTYPE *GetRenderingPrefs )(
            IVMRImagePresenterExclModeConfig * This,
                        DWORD *dwRenderFlags);
        HRESULT ( STDMETHODCALLTYPE *SetXlcModeDDObjAndPrimarySurface )(
            IVMRImagePresenterExclModeConfig * This,
                       LPDIRECTDRAW7 lpDDObj,
                       LPDIRECTDRAWSURFACE7 lpPrimarySurf);
        HRESULT ( STDMETHODCALLTYPE *GetXlcModeDDObjAndPrimarySurface )(
            IVMRImagePresenterExclModeConfig * This,
                        LPDIRECTDRAW7 *lpDDObj,
                        LPDIRECTDRAWSURFACE7 *lpPrimarySurf);
        END_INTERFACE
    } IVMRImagePresenterExclModeConfigVtbl;
    interface IVMRImagePresenterExclModeConfig
    {
        CONST_VTBL struct IVMRImagePresenterExclModeConfigVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetRenderingPrefs(This,dwRenderFlags) )
    ( (This)->lpVtbl -> GetRenderingPrefs(This,dwRenderFlags) )
    ( (This)->lpVtbl -> SetXlcModeDDObjAndPrimarySurface(This,lpDDObj,lpPrimarySurf) )
    ( (This)->lpVtbl -> GetXlcModeDDObjAndPrimarySurface(This,lpDDObj,lpPrimarySurf) )
EXTERN_C const IID IID_IVPManager;
    typedef struct IVPManagerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IVPManager * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IVPManager * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IVPManager * This);
        HRESULT ( STDMETHODCALLTYPE *SetVideoPortIndex )(
            IVPManager * This,
                       DWORD dwVideoPortIndex);
        HRESULT ( STDMETHODCALLTYPE *GetVideoPortIndex )(
            IVPManager * This,
                        DWORD *pdwVideoPortIndex);
        END_INTERFACE
    } IVPManagerVtbl;
    interface IVPManager
    {
        CONST_VTBL struct IVPManagerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetVideoPortIndex(This,dwVideoPortIndex) )
    ( (This)->lpVtbl -> GetVideoPortIndex(This,pdwVideoPortIndex) )
#endif
#pragma endregion
#endif
#pragma endregion
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include <ddraw.h>
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
typedef
enum tagDVD_DOMAIN
    {
        DVD_DOMAIN_FirstPlay = 1,
        DVD_DOMAIN_VideoManagerMenu = ( DVD_DOMAIN_FirstPlay + 1 ) ,
        DVD_DOMAIN_VideoTitleSetMenu = ( DVD_DOMAIN_VideoManagerMenu + 1 ) ,
        DVD_DOMAIN_Title = ( DVD_DOMAIN_VideoTitleSetMenu + 1 ) ,
        DVD_DOMAIN_Stop = ( DVD_DOMAIN_Title + 1 )
    } DVD_DOMAIN;
typedef
enum tagDVD_MENU_ID
    {
        DVD_MENU_Title = 2,
        DVD_MENU_Root = 3,
        DVD_MENU_Subpicture = 4,
        DVD_MENU_Audio = 5,
        DVD_MENU_Angle = 6,
        DVD_MENU_Chapter = 7
    } DVD_MENU_ID;
typedef
enum tagDVD_DISC_SIDE
    {
        DVD_SIDE_A = 1,
        DVD_SIDE_B = 2
    } DVD_DISC_SIDE;
typedef
enum tagDVD_PREFERRED_DISPLAY_MODE
    {
        DISPLAY_CONTENT_DEFAULT = 0,
        DISPLAY_16x9 = 1,
        DISPLAY_4x3_PANSCAN_PREFERRED = 2,
        DISPLAY_4x3_LETTERBOX_PREFERRED = 3
    } DVD_PREFERRED_DISPLAY_MODE;
typedef WORD DVD_REGISTER;
typedef DVD_REGISTER GPRMARRAY[ 16 ];
typedef DVD_REGISTER SPRMARRAY[ 24 ];
typedef struct tagDVD_ATR
    {
    ULONG ulCAT;
    BYTE pbATRI[ 768 ];
    } DVD_ATR;
typedef BYTE DVD_VideoATR[ 2 ];
typedef BYTE DVD_AudioATR[ 8 ];
typedef BYTE DVD_SubpictureATR[ 6 ];
typedef
enum tagDVD_FRAMERATE
    {
        DVD_FPS_25 = 1,
        DVD_FPS_30NonDrop = 3
    } DVD_FRAMERATE;
typedef struct tagDVD_TIMECODE
{
   ULONG Hours1 :4;
   ULONG Hours10 :4;
   ULONG Minutes1 :4;
   ULONG Minutes10:4;
   ULONG Seconds1 :4;
   ULONG Seconds10:4;
   ULONG Frames1 :4;
   ULONG Frames10 :2;
   ULONG FrameRateCode: 2;
} DVD_TIMECODE;
typedef
enum tagDVD_NavCmdType
    {
        DVD_NavCmdType_Pre = 1,
        DVD_NavCmdType_Post = 2,
        DVD_NavCmdType_Cell = 3,
        DVD_NavCmdType_Button = 4
    } DVD_NavCmdType;
typedef
enum tagDVD_TIMECODE_FLAGS
    {
        DVD_TC_FLAG_25fps = 0x1,
        DVD_TC_FLAG_30fps = 0x2,
        DVD_TC_FLAG_DropFrame = 0x4,
        DVD_TC_FLAG_Interpolated = 0x8
    } DVD_TIMECODE_FLAGS;
typedef struct tagDVD_HMSF_TIMECODE
    {
    BYTE bHours;
    BYTE bMinutes;
    BYTE bSeconds;
    BYTE bFrames;
    } DVD_HMSF_TIMECODE;
typedef struct tagDVD_PLAYBACK_LOCATION2
    {
    ULONG TitleNum;
    ULONG ChapterNum;
    DVD_HMSF_TIMECODE TimeCode;
    ULONG TimeCodeFlags;
    } DVD_PLAYBACK_LOCATION2;
typedef struct tagDVD_PLAYBACK_LOCATION
    {
    ULONG TitleNum;
    ULONG ChapterNum;
    ULONG TimeCode;
    } DVD_PLAYBACK_LOCATION;
typedef DWORD VALID_UOP_SOMTHING_OR_OTHER;
typedef
enum __MIDL___MIDL_itf_strmif_0000_0132_0001
    {
        UOP_FLAG_Play_Title_Or_AtTime = 0x1,
        UOP_FLAG_Play_Chapter = 0x2,
        UOP_FLAG_Play_Title = 0x4,
        UOP_FLAG_Stop = 0x8,
        UOP_FLAG_ReturnFromSubMenu = 0x10,
        UOP_FLAG_Play_Chapter_Or_AtTime = 0x20,
        UOP_FLAG_PlayPrev_Or_Replay_Chapter = 0x40,
        UOP_FLAG_PlayNext_Chapter = 0x80,
        UOP_FLAG_Play_Forwards = 0x100,
        UOP_FLAG_Play_Backwards = 0x200,
        UOP_FLAG_ShowMenu_Title = 0x400,
        UOP_FLAG_ShowMenu_Root = 0x800,
        UOP_FLAG_ShowMenu_SubPic = 0x1000,
        UOP_FLAG_ShowMenu_Audio = 0x2000,
        UOP_FLAG_ShowMenu_Angle = 0x4000,
        UOP_FLAG_ShowMenu_Chapter = 0x8000,
        UOP_FLAG_Resume = 0x10000,
        UOP_FLAG_Select_Or_Activate_Button = 0x20000,
        UOP_FLAG_Still_Off = 0x40000,
        UOP_FLAG_Pause_On = 0x80000,
        UOP_FLAG_Select_Audio_Stream = 0x100000,
        UOP_FLAG_Select_SubPic_Stream = 0x200000,
        UOP_FLAG_Select_Angle = 0x400000,
        UOP_FLAG_Select_Karaoke_Audio_Presentation_Mode = 0x800000,
        UOP_FLAG_Select_Video_Mode_Preference = 0x1000000
    } VALID_UOP_FLAG;
typedef
enum __MIDL___MIDL_itf_strmif_0000_0132_0002
    {
        DVD_CMD_FLAG_None = 0,
        DVD_CMD_FLAG_Flush = 0x1,
        DVD_CMD_FLAG_SendEvents = 0x2,
        DVD_CMD_FLAG_Block = 0x4,
        DVD_CMD_FLAG_StartWhenRendered = 0x8,
        DVD_CMD_FLAG_EndAfterRendered = 0x10
    } DVD_CMD_FLAGS;
typedef
enum __MIDL___MIDL_itf_strmif_0000_0132_0003
    {
        DVD_ResetOnStop = 1,
        DVD_NotifyParentalLevelChange = 2,
        DVD_HMSF_TimeCodeEvents = 3,
        DVD_AudioDuringFFwdRew = 4,
        DVD_EnableNonblockingAPIs = 5,
        DVD_CacheSizeInMB = 6,
        DVD_EnablePortableBookmarks = 7,
        DVD_EnableExtendedCopyProtectErrors = 8,
        DVD_NotifyPositionChange = 9,
        DVD_IncreaseOutputControl = 10,
        DVD_EnableStreaming = 11,
        DVD_EnableESOutput = 12,
        DVD_EnableTitleLength = 13,
        DVD_DisableStillThrottle = 14,
        DVD_EnableLoggingEvents = 15,
        DVD_MaxReadBurstInKB = 16,
        DVD_ReadBurstPeriodInMS = 17,
        DVD_RestartDisc = 18,
        DVD_EnableCC = 19
    } DVD_OPTION_FLAG;
typedef
enum __MIDL___MIDL_itf_strmif_0000_0132_0004
    {
        DVD_Relative_Upper = 1,
        DVD_Relative_Lower = 2,
        DVD_Relative_Left = 3,
        DVD_Relative_Right = 4
    } DVD_RELATIVE_BUTTON;
typedef
enum tagDVD_PARENTAL_LEVEL
    {
        DVD_PARENTAL_LEVEL_8 = 0x8000,
        DVD_PARENTAL_LEVEL_7 = 0x4000,
        DVD_PARENTAL_LEVEL_6 = 0x2000,
        DVD_PARENTAL_LEVEL_5 = 0x1000,
        DVD_PARENTAL_LEVEL_4 = 0x800,
        DVD_PARENTAL_LEVEL_3 = 0x400,
        DVD_PARENTAL_LEVEL_2 = 0x200,
        DVD_PARENTAL_LEVEL_1 = 0x100
    } DVD_PARENTAL_LEVEL;
typedef
enum tagDVD_AUDIO_LANG_EXT
    {
        DVD_AUD_EXT_NotSpecified = 0,
        DVD_AUD_EXT_Captions = 1,
        DVD_AUD_EXT_VisuallyImpaired = 2,
        DVD_AUD_EXT_DirectorComments1 = 3,
        DVD_AUD_EXT_DirectorComments2 = 4
    } DVD_AUDIO_LANG_EXT;
typedef
enum tagDVD_SUBPICTURE_LANG_EXT
    {
        DVD_SP_EXT_NotSpecified = 0,
        DVD_SP_EXT_Caption_Normal = 1,
        DVD_SP_EXT_Caption_Big = 2,
        DVD_SP_EXT_Caption_Children = 3,
        DVD_SP_EXT_CC_Normal = 5,
        DVD_SP_EXT_CC_Big = 6,
        DVD_SP_EXT_CC_Children = 7,
        DVD_SP_EXT_Forced = 9,
        DVD_SP_EXT_DirectorComments_Normal = 13,
        DVD_SP_EXT_DirectorComments_Big = 14,
        DVD_SP_EXT_DirectorComments_Children = 15
    } DVD_SUBPICTURE_LANG_EXT;
typedef
enum tagDVD_AUDIO_APPMODE
    {
        DVD_AudioMode_None = 0,
        DVD_AudioMode_Karaoke = 1,
        DVD_AudioMode_Surround = 2,
        DVD_AudioMode_Other = 3
    } DVD_AUDIO_APPMODE;
typedef
enum tagDVD_AUDIO_FORMAT
    {
        DVD_AudioFormat_AC3 = 0,
        DVD_AudioFormat_MPEG1 = 1,
        DVD_AudioFormat_MPEG1_DRC = 2,
        DVD_AudioFormat_MPEG2 = 3,
        DVD_AudioFormat_MPEG2_DRC = 4,
        DVD_AudioFormat_LPCM = 5,
        DVD_AudioFormat_DTS = 6,
        DVD_AudioFormat_SDDS = 7,
        DVD_AudioFormat_Other = 8
    } DVD_AUDIO_FORMAT;
typedef
enum tagDVD_KARAOKE_DOWNMIX
    {
        DVD_Mix_0to0 = 0x1,
        DVD_Mix_1to0 = 0x2,
        DVD_Mix_2to0 = 0x4,
        DVD_Mix_3to0 = 0x8,
        DVD_Mix_4to0 = 0x10,
        DVD_Mix_Lto0 = 0x20,
        DVD_Mix_Rto0 = 0x40,
        DVD_Mix_0to1 = 0x100,
        DVD_Mix_1to1 = 0x200,
        DVD_Mix_2to1 = 0x400,
        DVD_Mix_3to1 = 0x800,
        DVD_Mix_4to1 = 0x1000,
        DVD_Mix_Lto1 = 0x2000,
        DVD_Mix_Rto1 = 0x4000
    } DVD_KARAOKE_DOWNMIX;
typedef struct tagDVD_AudioAttributes
    {
    DVD_AUDIO_APPMODE AppMode;
    BYTE AppModeData;
    DVD_AUDIO_FORMAT AudioFormat;
    LCID Language;
    DVD_AUDIO_LANG_EXT LanguageExtension;
    BOOL fHasMultichannelInfo;
    DWORD dwFrequency;
    BYTE bQuantization;
    BYTE bNumberOfChannels;
    DWORD dwReserved[ 2 ];
    } DVD_AudioAttributes;
typedef struct tagDVD_MUA_MixingInfo
    {
    BOOL fMixTo0;
    BOOL fMixTo1;
    BOOL fMix0InPhase;
    BOOL fMix1InPhase;
    DWORD dwSpeakerPosition;
    } DVD_MUA_MixingInfo;
typedef struct tagDVD_MUA_Coeff
    {
    double log2_alpha;
    double log2_beta;
    } DVD_MUA_Coeff;
typedef struct tagDVD_MultichannelAudioAttributes
    {
    DVD_MUA_MixingInfo Info[ 8 ];
    DVD_MUA_Coeff Coeff[ 8 ];
    } DVD_MultichannelAudioAttributes;
typedef
enum tagDVD_KARAOKE_CONTENTS
    {
        DVD_Karaoke_GuideVocal1 = 0x1,
        DVD_Karaoke_GuideVocal2 = 0x2,
        DVD_Karaoke_GuideMelody1 = 0x4,
        DVD_Karaoke_GuideMelody2 = 0x8,
        DVD_Karaoke_GuideMelodyA = 0x10,
        DVD_Karaoke_GuideMelodyB = 0x20,
        DVD_Karaoke_SoundEffectA = 0x40,
        DVD_Karaoke_SoundEffectB = 0x80
    } DVD_KARAOKE_CONTENTS;
typedef
enum tagDVD_KARAOKE_ASSIGNMENT
    {
        DVD_Assignment_reserved0 = 0,
        DVD_Assignment_reserved1 = 1,
        DVD_Assignment_LR = 2,
        DVD_Assignment_LRM = 3,
        DVD_Assignment_LR1 = 4,
        DVD_Assignment_LRM1 = 5,
        DVD_Assignment_LR12 = 6,
        DVD_Assignment_LRM12 = 7
    } DVD_KARAOKE_ASSIGNMENT;
typedef struct tagDVD_KaraokeAttributes
    {
    BYTE bVersion;
    BOOL fMasterOfCeremoniesInGuideVocal1;
    BOOL fDuet;
    DVD_KARAOKE_ASSIGNMENT ChannelAssignment;
    WORD wChannelContents[ 8 ];
    } DVD_KaraokeAttributes;
typedef
enum tagDVD_VIDEO_COMPRESSION
    {
        DVD_VideoCompression_Other = 0,
        DVD_VideoCompression_MPEG1 = 1,
        DVD_VideoCompression_MPEG2 = 2
    } DVD_VIDEO_COMPRESSION;
typedef struct tagDVD_VideoAttributes
    {
    BOOL fPanscanPermitted;
    BOOL fLetterboxPermitted;
    ULONG ulAspectX;
    ULONG ulAspectY;
    ULONG ulFrameRate;
    ULONG ulFrameHeight;
    DVD_VIDEO_COMPRESSION Compression;
    BOOL fLine21Field1InGOP;
    BOOL fLine21Field2InGOP;
    ULONG ulSourceResolutionX;
    ULONG ulSourceResolutionY;
    BOOL fIsSourceLetterboxed;
    BOOL fIsFilmMode;
    } DVD_VideoAttributes;
typedef
enum tagDVD_SUBPICTURE_TYPE
    {
        DVD_SPType_NotSpecified = 0,
        DVD_SPType_Language = 1,
        DVD_SPType_Other = 2
    } DVD_SUBPICTURE_TYPE;
typedef
enum tagDVD_SUBPICTURE_CODING
    {
        DVD_SPCoding_RunLength = 0,
        DVD_SPCoding_Extended = 1,
        DVD_SPCoding_Other = 2
    } DVD_SUBPICTURE_CODING;
typedef struct tagDVD_SubpictureAttributes
    {
    DVD_SUBPICTURE_TYPE Type;
    DVD_SUBPICTURE_CODING CodingMode;
    LCID Language;
    DVD_SUBPICTURE_LANG_EXT LanguageExtension;
    } DVD_SubpictureAttributes;
typedef
enum tagDVD_TITLE_APPMODE
    {
        DVD_AppMode_Not_Specified = 0,
        DVD_AppMode_Karaoke = 1,
        DVD_AppMode_Other = 3
    } DVD_TITLE_APPMODE;
typedef struct tagDVD_TitleMainAttributes
    {
    union
        {
        DVD_TITLE_APPMODE AppMode;
        DVD_HMSF_TIMECODE TitleLength;
        } ;
    DVD_VideoAttributes VideoAttributes;
    ULONG ulNumberOfAudioStreams;
    DVD_AudioAttributes AudioAttributes[ 8 ];
    DVD_MultichannelAudioAttributes MultichannelAudioAttributes[ 8 ];
    ULONG ulNumberOfSubpictureStreams;
    DVD_SubpictureAttributes SubpictureAttributes[ 32 ];
    } DVD_TitleAttributes;
typedef struct tagDVD_MenuAttributes
    {
    BOOL fCompatibleRegion[ 8 ];
    DVD_VideoAttributes VideoAttributes;
    BOOL fAudioPresent;
    DVD_AudioAttributes AudioAttributes;
    BOOL fSubpicturePresent;
    DVD_SubpictureAttributes SubpictureAttributes;
    } DVD_MenuAttributes;
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0132_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0132_v0_0_s_ifspec;
EXTERN_C const IID IID_IDvdControl;
    typedef struct IDvdControlVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDvdControl * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDvdControl * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDvdControl * This);
        HRESULT ( STDMETHODCALLTYPE *TitlePlay )(
            IDvdControl * This,
                       ULONG ulTitle);
        HRESULT ( STDMETHODCALLTYPE *ChapterPlay )(
            IDvdControl * This,
                       ULONG ulTitle,
                       ULONG ulChapter);
        HRESULT ( STDMETHODCALLTYPE *TimePlay )(
            IDvdControl * This,
                       ULONG ulTitle,
                       ULONG bcdTime);
        HRESULT ( STDMETHODCALLTYPE *StopForResume )(
            IDvdControl * This);
        HRESULT ( STDMETHODCALLTYPE *GoUp )(
            IDvdControl * This);
        HRESULT ( STDMETHODCALLTYPE *TimeSearch )(
            IDvdControl * This,
                       ULONG bcdTime);
        HRESULT ( STDMETHODCALLTYPE *ChapterSearch )(
            IDvdControl * This,
                       ULONG ulChapter);
        HRESULT ( STDMETHODCALLTYPE *PrevPGSearch )(
            IDvdControl * This);
        HRESULT ( STDMETHODCALLTYPE *TopPGSearch )(
            IDvdControl * This);
        HRESULT ( STDMETHODCALLTYPE *NextPGSearch )(
            IDvdControl * This);
        HRESULT ( STDMETHODCALLTYPE *ForwardScan )(
            IDvdControl * This,
                       double dwSpeed);
        HRESULT ( STDMETHODCALLTYPE *BackwardScan )(
            IDvdControl * This,
                       double dwSpeed);
        HRESULT ( STDMETHODCALLTYPE *MenuCall )(
            IDvdControl * This,
                       DVD_MENU_ID MenuID);
        HRESULT ( STDMETHODCALLTYPE *Resume )(
            IDvdControl * This);
        HRESULT ( STDMETHODCALLTYPE *UpperButtonSelect )(
            IDvdControl * This);
        HRESULT ( STDMETHODCALLTYPE *LowerButtonSelect )(
            IDvdControl * This);
        HRESULT ( STDMETHODCALLTYPE *LeftButtonSelect )(
            IDvdControl * This);
        HRESULT ( STDMETHODCALLTYPE *RightButtonSelect )(
            IDvdControl * This);
        HRESULT ( STDMETHODCALLTYPE *ButtonActivate )(
            IDvdControl * This);
        HRESULT ( STDMETHODCALLTYPE *ButtonSelectAndActivate )(
            IDvdControl * This,
                       ULONG ulButton);
        HRESULT ( STDMETHODCALLTYPE *StillOff )(
            IDvdControl * This);
        HRESULT ( STDMETHODCALLTYPE *PauseOn )(
            IDvdControl * This);
        HRESULT ( STDMETHODCALLTYPE *PauseOff )(
            IDvdControl * This);
        HRESULT ( STDMETHODCALLTYPE *MenuLanguageSelect )(
            IDvdControl * This,
                       LCID Language);
        HRESULT ( STDMETHODCALLTYPE *AudioStreamChange )(
            IDvdControl * This,
                       ULONG ulAudio);
        HRESULT ( STDMETHODCALLTYPE *SubpictureStreamChange )(
            IDvdControl * This,
                       ULONG ulSubPicture,
                       BOOL bDisplay);
        HRESULT ( STDMETHODCALLTYPE *AngleChange )(
            IDvdControl * This,
                       ULONG ulAngle);
        HRESULT ( STDMETHODCALLTYPE *ParentalLevelSelect )(
            IDvdControl * This,
                       ULONG ulParentalLevel);
        HRESULT ( STDMETHODCALLTYPE *ParentalCountrySelect )(
            IDvdControl * This,
                       WORD wCountry);
        HRESULT ( STDMETHODCALLTYPE *KaraokeAudioPresentationModeChange )(
            IDvdControl * This,
                       ULONG ulMode);
        HRESULT ( STDMETHODCALLTYPE *VideoModePreferrence )(
            IDvdControl * This,
                       ULONG ulPreferredDisplayMode);
        HRESULT ( STDMETHODCALLTYPE *SetRoot )(
            IDvdControl * This,
                       LPCWSTR pszPath);
        HRESULT ( STDMETHODCALLTYPE *MouseActivate )(
            IDvdControl * This,
                       POINT point);
        HRESULT ( STDMETHODCALLTYPE *MouseSelect )(
            IDvdControl * This,
                       POINT point);
        HRESULT ( STDMETHODCALLTYPE *ChapterPlayAutoStop )(
            IDvdControl * This,
                       ULONG ulTitle,
                       ULONG ulChapter,
                       ULONG ulChaptersToPlay);
        END_INTERFACE
    } IDvdControlVtbl;
    interface IDvdControl
    {
        CONST_VTBL struct IDvdControlVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> TitlePlay(This,ulTitle) )
    ( (This)->lpVtbl -> ChapterPlay(This,ulTitle,ulChapter) )
    ( (This)->lpVtbl -> TimePlay(This,ulTitle,bcdTime) )
    ( (This)->lpVtbl -> StopForResume(This) )
    ( (This)->lpVtbl -> GoUp(This) )
    ( (This)->lpVtbl -> TimeSearch(This,bcdTime) )
    ( (This)->lpVtbl -> ChapterSearch(This,ulChapter) )
    ( (This)->lpVtbl -> PrevPGSearch(This) )
    ( (This)->lpVtbl -> TopPGSearch(This) )
    ( (This)->lpVtbl -> NextPGSearch(This) )
    ( (This)->lpVtbl -> ForwardScan(This,dwSpeed) )
    ( (This)->lpVtbl -> BackwardScan(This,dwSpeed) )
    ( (This)->lpVtbl -> MenuCall(This,MenuID) )
    ( (This)->lpVtbl -> Resume(This) )
    ( (This)->lpVtbl -> UpperButtonSelect(This) )
    ( (This)->lpVtbl -> LowerButtonSelect(This) )
    ( (This)->lpVtbl -> LeftButtonSelect(This) )
    ( (This)->lpVtbl -> RightButtonSelect(This) )
    ( (This)->lpVtbl -> ButtonActivate(This) )
    ( (This)->lpVtbl -> ButtonSelectAndActivate(This,ulButton) )
    ( (This)->lpVtbl -> StillOff(This) )
    ( (This)->lpVtbl -> PauseOn(This) )
    ( (This)->lpVtbl -> PauseOff(This) )
    ( (This)->lpVtbl -> MenuLanguageSelect(This,Language) )
    ( (This)->lpVtbl -> AudioStreamChange(This,ulAudio) )
    ( (This)->lpVtbl -> SubpictureStreamChange(This,ulSubPicture,bDisplay) )
    ( (This)->lpVtbl -> AngleChange(This,ulAngle) )
    ( (This)->lpVtbl -> ParentalLevelSelect(This,ulParentalLevel) )
    ( (This)->lpVtbl -> ParentalCountrySelect(This,wCountry) )
    ( (This)->lpVtbl -> KaraokeAudioPresentationModeChange(This,ulMode) )
    ( (This)->lpVtbl -> VideoModePreferrence(This,ulPreferredDisplayMode) )
    ( (This)->lpVtbl -> SetRoot(This,pszPath) )
    ( (This)->lpVtbl -> MouseActivate(This,point) )
    ( (This)->lpVtbl -> MouseSelect(This,point) )
    ( (This)->lpVtbl -> ChapterPlayAutoStop(This,ulTitle,ulChapter,ulChaptersToPlay) )
EXTERN_C const IID IID_IDvdInfo;
    typedef struct IDvdInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDvdInfo * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDvdInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDvdInfo * This);
        HRESULT ( STDMETHODCALLTYPE *GetCurrentDomain )(
            IDvdInfo * This,
                        DVD_DOMAIN *pDomain);
        HRESULT ( STDMETHODCALLTYPE *GetCurrentLocation )(
            IDvdInfo * This,
            _Out_ DVD_PLAYBACK_LOCATION *pLocation);
        HRESULT ( STDMETHODCALLTYPE *GetTotalTitleTime )(
            IDvdInfo * This,
            _Out_ ULONG *pulTotalTime);
        HRESULT ( STDMETHODCALLTYPE *GetCurrentButton )(
            IDvdInfo * This,
            _Out_ ULONG *pulButtonsAvailable,
            _Out_ ULONG *pulCurrentButton);
        HRESULT ( STDMETHODCALLTYPE *GetCurrentAngle )(
            IDvdInfo * This,
            _Out_ ULONG *pulAnglesAvailable,
            _Out_ ULONG *pulCurrentAngle);
        HRESULT ( STDMETHODCALLTYPE *GetCurrentAudio )(
            IDvdInfo * This,
            _Out_ ULONG *pulStreamsAvailable,
            _Out_ ULONG *pulCurrentStream);
        HRESULT ( STDMETHODCALLTYPE *GetCurrentSubpicture )(
            IDvdInfo * This,
            _Out_ ULONG *pulStreamsAvailable,
            _Out_ ULONG *pulCurrentStream,
            _Out_ BOOL *pIsDisabled);
        HRESULT ( STDMETHODCALLTYPE *GetCurrentUOPS )(
            IDvdInfo * This,
            _Out_ VALID_UOP_SOMTHING_OR_OTHER *pUOP);
        HRESULT ( STDMETHODCALLTYPE *GetAllSPRMs )(
            IDvdInfo * This,
            _Out_ SPRMARRAY *pRegisterArray);
        HRESULT ( STDMETHODCALLTYPE *GetAllGPRMs )(
            IDvdInfo * This,
            _Out_ GPRMARRAY *pRegisterArray);
        HRESULT ( STDMETHODCALLTYPE *GetAudioLanguage )(
            IDvdInfo * This,
                       ULONG ulStream,
            _Out_ LCID *pLanguage);
        HRESULT ( STDMETHODCALLTYPE *GetSubpictureLanguage )(
            IDvdInfo * This,
                       ULONG ulStream,
            _Out_ LCID *pLanguage);
        HRESULT ( STDMETHODCALLTYPE *GetTitleAttributes )(
            IDvdInfo * This,
                       ULONG ulTitle,
            _Out_ DVD_ATR *pATR);
        HRESULT ( STDMETHODCALLTYPE *GetVMGAttributes )(
            IDvdInfo * This,
            _Out_ DVD_ATR *pATR);
        HRESULT ( STDMETHODCALLTYPE *GetCurrentVideoAttributes )(
            IDvdInfo * This,
            _Out_ DVD_VideoATR *pATR);
        HRESULT ( STDMETHODCALLTYPE *GetCurrentAudioAttributes )(
            IDvdInfo * This,
            _Out_ DVD_AudioATR *pATR);
        HRESULT ( STDMETHODCALLTYPE *GetCurrentSubpictureAttributes )(
            IDvdInfo * This,
            _Out_ DVD_SubpictureATR *pATR);
        HRESULT ( STDMETHODCALLTYPE *GetCurrentVolumeInfo )(
            IDvdInfo * This,
            _Out_ ULONG *pulNumOfVol,
            _Out_ ULONG *pulThisVolNum,
            _Out_ DVD_DISC_SIDE *pSide,
            _Out_ ULONG *pulNumOfTitles);
        HRESULT ( STDMETHODCALLTYPE *GetDVDTextInfo )(
            IDvdInfo * This,
            _Out_writes_bytes_to_(ulBufSize, *pulActualSize) BYTE *pTextManager,
                       ULONG ulBufSize,
            _Out_ ULONG *pulActualSize);
        HRESULT ( STDMETHODCALLTYPE *GetPlayerParentalLevel )(
            IDvdInfo * This,
            _Out_ ULONG *pulParentalLevel,
            _Out_ ULONG *pulCountryCode);
        HRESULT ( STDMETHODCALLTYPE *GetNumberOfChapters )(
            IDvdInfo * This,
                       ULONG ulTitle,
            _Out_ ULONG *pulNumberOfChapters);
        HRESULT ( STDMETHODCALLTYPE *GetTitleParentalLevels )(
            IDvdInfo * This,
                       ULONG ulTitle,
            _Out_ ULONG *pulParentalLevels);
        HRESULT ( STDMETHODCALLTYPE *GetRoot )(
            IDvdInfo * This,
            _Out_writes_to_(ulBufSize, *pulActualSize) LPSTR pRoot,
                       ULONG ulBufSize,
            _Out_ ULONG *pulActualSize);
        END_INTERFACE
    } IDvdInfoVtbl;
    interface IDvdInfo
    {
        CONST_VTBL struct IDvdInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetCurrentDomain(This,pDomain) )
    ( (This)->lpVtbl -> GetCurrentLocation(This,pLocation) )
    ( (This)->lpVtbl -> GetTotalTitleTime(This,pulTotalTime) )
    ( (This)->lpVtbl -> GetCurrentButton(This,pulButtonsAvailable,pulCurrentButton) )
    ( (This)->lpVtbl -> GetCurrentAngle(This,pulAnglesAvailable,pulCurrentAngle) )
    ( (This)->lpVtbl -> GetCurrentAudio(This,pulStreamsAvailable,pulCurrentStream) )
    ( (This)->lpVtbl -> GetCurrentSubpicture(This,pulStreamsAvailable,pulCurrentStream,pIsDisabled) )
    ( (This)->lpVtbl -> GetCurrentUOPS(This,pUOP) )
    ( (This)->lpVtbl -> GetAllSPRMs(This,pRegisterArray) )
    ( (This)->lpVtbl -> GetAllGPRMs(This,pRegisterArray) )
    ( (This)->lpVtbl -> GetAudioLanguage(This,ulStream,pLanguage) )
    ( (This)->lpVtbl -> GetSubpictureLanguage(This,ulStream,pLanguage) )
    ( (This)->lpVtbl -> GetTitleAttributes(This,ulTitle,pATR) )
    ( (This)->lpVtbl -> GetVMGAttributes(This,pATR) )
    ( (This)->lpVtbl -> GetCurrentVideoAttributes(This,pATR) )
    ( (This)->lpVtbl -> GetCurrentAudioAttributes(This,pATR) )
    ( (This)->lpVtbl -> GetCurrentSubpictureAttributes(This,pATR) )
    ( (This)->lpVtbl -> GetCurrentVolumeInfo(This,pulNumOfVol,pulThisVolNum,pSide,pulNumOfTitles) )
    ( (This)->lpVtbl -> GetDVDTextInfo(This,pTextManager,ulBufSize,pulActualSize) )
    ( (This)->lpVtbl -> GetPlayerParentalLevel(This,pulParentalLevel,pulCountryCode) )
    ( (This)->lpVtbl -> GetNumberOfChapters(This,ulTitle,pulNumberOfChapters) )
    ( (This)->lpVtbl -> GetTitleParentalLevels(This,ulTitle,pulParentalLevels) )
    ( (This)->lpVtbl -> GetRoot(This,pRoot,ulBufSize,pulActualSize) )
EXTERN_C const IID IID_IDvdCmd;
    typedef struct IDvdCmdVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDvdCmd * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDvdCmd * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDvdCmd * This);
        HRESULT ( STDMETHODCALLTYPE *WaitForStart )(
            IDvdCmd * This);
        HRESULT ( STDMETHODCALLTYPE *WaitForEnd )(
            IDvdCmd * This);
        END_INTERFACE
    } IDvdCmdVtbl;
    interface IDvdCmd
    {
        CONST_VTBL struct IDvdCmdVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> WaitForStart(This) )
    ( (This)->lpVtbl -> WaitForEnd(This) )
EXTERN_C const IID IID_IDvdState;
    typedef struct IDvdStateVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDvdState * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDvdState * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDvdState * This);
        HRESULT ( STDMETHODCALLTYPE *GetDiscID )(
            IDvdState * This,
            _Out_ ULONGLONG *pullUniqueID);
        HRESULT ( STDMETHODCALLTYPE *GetParentalLevel )(
            IDvdState * This,
            _Out_ ULONG *pulParentalLevel);
        END_INTERFACE
    } IDvdStateVtbl;
    interface IDvdState
    {
        CONST_VTBL struct IDvdStateVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetDiscID(This,pullUniqueID) )
    ( (This)->lpVtbl -> GetParentalLevel(This,pulParentalLevel) )
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0136_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0136_v0_0_s_ifspec;
EXTERN_C const IID IID_IDvdControl2;
    typedef struct IDvdControl2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDvdControl2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDvdControl2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDvdControl2 * This);
        HRESULT ( STDMETHODCALLTYPE *PlayTitle )(
            IDvdControl2 * This,
                       ULONG ulTitle,
                       DWORD dwFlags,
            _Out_ IDvdCmd **ppCmd);
        HRESULT ( STDMETHODCALLTYPE *PlayChapterInTitle )(
            IDvdControl2 * This,
                       ULONG ulTitle,
                       ULONG ulChapter,
                       DWORD dwFlags,
            _Out_ IDvdCmd **ppCmd);
        HRESULT ( STDMETHODCALLTYPE *PlayAtTimeInTitle )(
            IDvdControl2 * This,
                       ULONG ulTitle,
                       DVD_HMSF_TIMECODE *pStartTime,
                       DWORD dwFlags,
            _Out_ IDvdCmd **ppCmd);
        HRESULT ( STDMETHODCALLTYPE *Stop )(
            IDvdControl2 * This);
        HRESULT ( STDMETHODCALLTYPE *ReturnFromSubmenu )(
            IDvdControl2 * This,
                       DWORD dwFlags,
            _Out_ IDvdCmd **ppCmd);
        HRESULT ( STDMETHODCALLTYPE *PlayAtTime )(
            IDvdControl2 * This,
                       DVD_HMSF_TIMECODE *pTime,
                       DWORD dwFlags,
            _Out_ IDvdCmd **ppCmd);
        HRESULT ( STDMETHODCALLTYPE *PlayChapter )(
            IDvdControl2 * This,
                       ULONG ulChapter,
                       DWORD dwFlags,
            _Out_ IDvdCmd **ppCmd);
        HRESULT ( STDMETHODCALLTYPE *PlayPrevChapter )(
            IDvdControl2 * This,
                       DWORD dwFlags,
            _Out_ IDvdCmd **ppCmd);
        HRESULT ( STDMETHODCALLTYPE *ReplayChapter )(
            IDvdControl2 * This,
                       DWORD dwFlags,
            _Out_ IDvdCmd **ppCmd);
        HRESULT ( STDMETHODCALLTYPE *PlayNextChapter )(
            IDvdControl2 * This,
                       DWORD dwFlags,
            _Out_ IDvdCmd **ppCmd);
        HRESULT ( STDMETHODCALLTYPE *PlayForwards )(
            IDvdControl2 * This,
                       double dSpeed,
                       DWORD dwFlags,
            _Out_ IDvdCmd **ppCmd);
        HRESULT ( STDMETHODCALLTYPE *PlayBackwards )(
            IDvdControl2 * This,
                       double dSpeed,
                       DWORD dwFlags,
            _Out_ IDvdCmd **ppCmd);
        HRESULT ( STDMETHODCALLTYPE *ShowMenu )(
            IDvdControl2 * This,
                       DVD_MENU_ID MenuID,
                       DWORD dwFlags,
            _Out_ IDvdCmd **ppCmd);
        HRESULT ( STDMETHODCALLTYPE *Resume )(
            IDvdControl2 * This,
                       DWORD dwFlags,
            _Out_ IDvdCmd **ppCmd);
        HRESULT ( STDMETHODCALLTYPE *SelectRelativeButton )(
            IDvdControl2 * This,
            DVD_RELATIVE_BUTTON buttonDir);
        HRESULT ( STDMETHODCALLTYPE *ActivateButton )(
            IDvdControl2 * This);
        HRESULT ( STDMETHODCALLTYPE *SelectButton )(
            IDvdControl2 * This,
                       ULONG ulButton);
        HRESULT ( STDMETHODCALLTYPE *SelectAndActivateButton )(
            IDvdControl2 * This,
                       ULONG ulButton);
        HRESULT ( STDMETHODCALLTYPE *StillOff )(
            IDvdControl2 * This);
        HRESULT ( STDMETHODCALLTYPE *Pause )(
            IDvdControl2 * This,
                       BOOL bState);
        HRESULT ( STDMETHODCALLTYPE *SelectAudioStream )(
            IDvdControl2 * This,
                       ULONG ulAudio,
                       DWORD dwFlags,
            _Out_ IDvdCmd **ppCmd);
        HRESULT ( STDMETHODCALLTYPE *SelectSubpictureStream )(
            IDvdControl2 * This,
                       ULONG ulSubPicture,
                       DWORD dwFlags,
            _Out_ IDvdCmd **ppCmd);
        HRESULT ( STDMETHODCALLTYPE *SetSubpictureState )(
            IDvdControl2 * This,
                       BOOL bState,
                       DWORD dwFlags,
            _Out_ IDvdCmd **ppCmd);
        HRESULT ( STDMETHODCALLTYPE *SelectAngle )(
            IDvdControl2 * This,
                       ULONG ulAngle,
                       DWORD dwFlags,
            _Out_ IDvdCmd **ppCmd);
        HRESULT ( STDMETHODCALLTYPE *SelectParentalLevel )(
            IDvdControl2 * This,
                       ULONG ulParentalLevel);
        HRESULT ( STDMETHODCALLTYPE *SelectParentalCountry )(
            IDvdControl2 * This,
                       BYTE bCountry[ 2 ]);
        HRESULT ( STDMETHODCALLTYPE *SelectKaraokeAudioPresentationMode )(
            IDvdControl2 * This,
                       ULONG ulMode);
        HRESULT ( STDMETHODCALLTYPE *SelectVideoModePreference )(
            IDvdControl2 * This,
                       ULONG ulPreferredDisplayMode);
        HRESULT ( STDMETHODCALLTYPE *SetDVDDirectory )(
            IDvdControl2 * This,
                       LPCWSTR pszwPath);
        HRESULT ( STDMETHODCALLTYPE *ActivateAtPosition )(
            IDvdControl2 * This,
                       POINT point);
        HRESULT ( STDMETHODCALLTYPE *SelectAtPosition )(
            IDvdControl2 * This,
                       POINT point);
        HRESULT ( STDMETHODCALLTYPE *PlayChaptersAutoStop )(
            IDvdControl2 * This,
                       ULONG ulTitle,
                       ULONG ulChapter,
                       ULONG ulChaptersToPlay,
                       DWORD dwFlags,
            _Out_ IDvdCmd **ppCmd);
        HRESULT ( STDMETHODCALLTYPE *AcceptParentalLevelChange )(
            IDvdControl2 * This,
                       BOOL bAccept);
        HRESULT ( STDMETHODCALLTYPE *SetOption )(
            IDvdControl2 * This,
                       DVD_OPTION_FLAG flag,
                       BOOL fState);
        HRESULT ( STDMETHODCALLTYPE *SetState )(
            IDvdControl2 * This,
                       IDvdState *pState,
                       DWORD dwFlags,
            _Out_ IDvdCmd **ppCmd);
        HRESULT ( STDMETHODCALLTYPE *PlayPeriodInTitleAutoStop )(
            IDvdControl2 * This,
                       ULONG ulTitle,
                       DVD_HMSF_TIMECODE *pStartTime,
                       DVD_HMSF_TIMECODE *pEndTime,
                       DWORD dwFlags,
            _Out_ IDvdCmd **ppCmd);
        HRESULT ( STDMETHODCALLTYPE *SetGPRM )(
            IDvdControl2 * This,
                       ULONG ulIndex,
                       WORD wValue,
                       DWORD dwFlags,
            _Out_ IDvdCmd **ppCmd);
        HRESULT ( STDMETHODCALLTYPE *SelectDefaultMenuLanguage )(
            IDvdControl2 * This,
                       LCID Language);
        HRESULT ( STDMETHODCALLTYPE *SelectDefaultAudioLanguage )(
            IDvdControl2 * This,
                       LCID Language,
                       DVD_AUDIO_LANG_EXT audioExtension);
        HRESULT ( STDMETHODCALLTYPE *SelectDefaultSubpictureLanguage )(
            IDvdControl2 * This,
                       LCID Language,
                       DVD_SUBPICTURE_LANG_EXT subpictureExtension);
        END_INTERFACE
    } IDvdControl2Vtbl;
    interface IDvdControl2
    {
        CONST_VTBL struct IDvdControl2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> PlayTitle(This,ulTitle,dwFlags,ppCmd) )
    ( (This)->lpVtbl -> PlayChapterInTitle(This,ulTitle,ulChapter,dwFlags,ppCmd) )
    ( (This)->lpVtbl -> PlayAtTimeInTitle(This,ulTitle,pStartTime,dwFlags,ppCmd) )
    ( (This)->lpVtbl -> Stop(This) )
    ( (This)->lpVtbl -> ReturnFromSubmenu(This,dwFlags,ppCmd) )
    ( (This)->lpVtbl -> PlayAtTime(This,pTime,dwFlags,ppCmd) )
    ( (This)->lpVtbl -> PlayChapter(This,ulChapter,dwFlags,ppCmd) )
    ( (This)->lpVtbl -> PlayPrevChapter(This,dwFlags,ppCmd) )
    ( (This)->lpVtbl -> ReplayChapter(This,dwFlags,ppCmd) )
    ( (This)->lpVtbl -> PlayNextChapter(This,dwFlags,ppCmd) )
    ( (This)->lpVtbl -> PlayForwards(This,dSpeed,dwFlags,ppCmd) )
    ( (This)->lpVtbl -> PlayBackwards(This,dSpeed,dwFlags,ppCmd) )
    ( (This)->lpVtbl -> ShowMenu(This,MenuID,dwFlags,ppCmd) )
    ( (This)->lpVtbl -> Resume(This,dwFlags,ppCmd) )
    ( (This)->lpVtbl -> SelectRelativeButton(This,buttonDir) )
    ( (This)->lpVtbl -> ActivateButton(This) )
    ( (This)->lpVtbl -> SelectButton(This,ulButton) )
    ( (This)->lpVtbl -> SelectAndActivateButton(This,ulButton) )
    ( (This)->lpVtbl -> StillOff(This) )
    ( (This)->lpVtbl -> Pause(This,bState) )
    ( (This)->lpVtbl -> SelectAudioStream(This,ulAudio,dwFlags,ppCmd) )
    ( (This)->lpVtbl -> SelectSubpictureStream(This,ulSubPicture,dwFlags,ppCmd) )
    ( (This)->lpVtbl -> SetSubpictureState(This,bState,dwFlags,ppCmd) )
    ( (This)->lpVtbl -> SelectAngle(This,ulAngle,dwFlags,ppCmd) )
    ( (This)->lpVtbl -> SelectParentalLevel(This,ulParentalLevel) )
    ( (This)->lpVtbl -> SelectParentalCountry(This,bCountry) )
    ( (This)->lpVtbl -> SelectKaraokeAudioPresentationMode(This,ulMode) )
    ( (This)->lpVtbl -> SelectVideoModePreference(This,ulPreferredDisplayMode) )
    ( (This)->lpVtbl -> SetDVDDirectory(This,pszwPath) )
    ( (This)->lpVtbl -> ActivateAtPosition(This,point) )
    ( (This)->lpVtbl -> SelectAtPosition(This,point) )
    ( (This)->lpVtbl -> PlayChaptersAutoStop(This,ulTitle,ulChapter,ulChaptersToPlay,dwFlags,ppCmd) )
    ( (This)->lpVtbl -> AcceptParentalLevelChange(This,bAccept) )
    ( (This)->lpVtbl -> SetOption(This,flag,fState) )
    ( (This)->lpVtbl -> SetState(This,pState,dwFlags,ppCmd) )
    ( (This)->lpVtbl -> PlayPeriodInTitleAutoStop(This,ulTitle,pStartTime,pEndTime,dwFlags,ppCmd) )
    ( (This)->lpVtbl -> SetGPRM(This,ulIndex,wValue,dwFlags,ppCmd) )
    ( (This)->lpVtbl -> SelectDefaultMenuLanguage(This,Language) )
    ( (This)->lpVtbl -> SelectDefaultAudioLanguage(This,Language,audioExtension) )
    ( (This)->lpVtbl -> SelectDefaultSubpictureLanguage(This,Language,subpictureExtension) )
enum DVD_TextStringType
    {
        DVD_Struct_Volume = 0x1,
        DVD_Struct_Title = 0x2,
        DVD_Struct_ParentalID = 0x3,
        DVD_Struct_PartOfTitle = 0x4,
        DVD_Struct_Cell = 0x5,
        DVD_Stream_Audio = 0x10,
        DVD_Stream_Subpicture = 0x11,
        DVD_Stream_Angle = 0x12,
        DVD_Channel_Audio = 0x20,
        DVD_General_Name = 0x30,
        DVD_General_Comments = 0x31,
        DVD_Title_Series = 0x38,
        DVD_Title_Movie = 0x39,
        DVD_Title_Video = 0x3a,
        DVD_Title_Album = 0x3b,
        DVD_Title_Song = 0x3c,
        DVD_Title_Other = 0x3f,
        DVD_Title_Sub_Series = 0x40,
        DVD_Title_Sub_Movie = 0x41,
        DVD_Title_Sub_Video = 0x42,
        DVD_Title_Sub_Album = 0x43,
        DVD_Title_Sub_Song = 0x44,
        DVD_Title_Sub_Other = 0x47,
        DVD_Title_Orig_Series = 0x48,
        DVD_Title_Orig_Movie = 0x49,
        DVD_Title_Orig_Video = 0x4a,
        DVD_Title_Orig_Album = 0x4b,
        DVD_Title_Orig_Song = 0x4c,
        DVD_Title_Orig_Other = 0x4f,
        DVD_Other_Scene = 0x50,
        DVD_Other_Cut = 0x51,
        DVD_Other_Take = 0x52
    } ;
enum DVD_TextCharSet
    {
        DVD_CharSet_Unicode = 0,
        DVD_CharSet_ISO646 = 1,
        DVD_CharSet_JIS_Roman_Kanji = 2,
        DVD_CharSet_ISO8859_1 = 3,
        DVD_CharSet_ShiftJIS_Kanji_Roman_Katakana = 4
    } ;
typedef struct tagDVD_DECODER_CAPS
    {
    DWORD dwSize;
    DWORD dwAudioCaps;
    double dFwdMaxRateVideo;
    double dFwdMaxRateAudio;
    double dFwdMaxRateSP;
    double dBwdMaxRateVideo;
    double dBwdMaxRateAudio;
    double dBwdMaxRateSP;
    DWORD dwRes1;
    DWORD dwRes2;
    DWORD dwRes3;
    DWORD dwRes4;
    } DVD_DECODER_CAPS;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0137_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0137_v0_0_s_ifspec;
EXTERN_C const IID IID_IDvdInfo2;
    typedef struct IDvdInfo2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDvdInfo2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDvdInfo2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDvdInfo2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetCurrentDomain )(
            IDvdInfo2 * This,
            _Out_ DVD_DOMAIN *pDomain);
        HRESULT ( STDMETHODCALLTYPE *GetCurrentLocation )(
            IDvdInfo2 * This,
            _Out_ DVD_PLAYBACK_LOCATION2 *pLocation);
        HRESULT ( STDMETHODCALLTYPE *GetTotalTitleTime )(
            IDvdInfo2 * This,
            _Out_ DVD_HMSF_TIMECODE *pTotalTime,
            _Out_ ULONG *ulTimeCodeFlags);
        HRESULT ( STDMETHODCALLTYPE *GetCurrentButton )(
            IDvdInfo2 * This,
            _Out_ ULONG *pulButtonsAvailable,
            _Out_ ULONG *pulCurrentButton);
        HRESULT ( STDMETHODCALLTYPE *GetCurrentAngle )(
            IDvdInfo2 * This,
            _Out_ ULONG *pulAnglesAvailable,
            _Out_ ULONG *pulCurrentAngle);
        HRESULT ( STDMETHODCALLTYPE *GetCurrentAudio )(
            IDvdInfo2 * This,
            _Out_ ULONG *pulStreamsAvailable,
            _Out_ ULONG *pulCurrentStream);
        HRESULT ( STDMETHODCALLTYPE *GetCurrentSubpicture )(
            IDvdInfo2 * This,
            _Out_ ULONG *pulStreamsAvailable,
            _Out_ ULONG *pulCurrentStream,
            _Out_ BOOL *pbIsDisabled);
        HRESULT ( STDMETHODCALLTYPE *GetCurrentUOPS )(
            IDvdInfo2 * This,
            _Out_ ULONG *pulUOPs);
        HRESULT ( STDMETHODCALLTYPE *GetAllSPRMs )(
            IDvdInfo2 * This,
            _Out_ SPRMARRAY *pRegisterArray);
        HRESULT ( STDMETHODCALLTYPE *GetAllGPRMs )(
            IDvdInfo2 * This,
            _Out_ GPRMARRAY *pRegisterArray);
        HRESULT ( STDMETHODCALLTYPE *GetAudioLanguage )(
            IDvdInfo2 * This,
                       ULONG ulStream,
            _Out_ LCID *pLanguage);
        HRESULT ( STDMETHODCALLTYPE *GetSubpictureLanguage )(
            IDvdInfo2 * This,
                       ULONG ulStream,
            _Out_ LCID *pLanguage);
        HRESULT ( STDMETHODCALLTYPE *GetTitleAttributes )(
            IDvdInfo2 * This,
                       ULONG ulTitle,
            _Out_ DVD_MenuAttributes *pMenu,
            _Out_ DVD_TitleAttributes *pTitle);
        HRESULT ( STDMETHODCALLTYPE *GetVMGAttributes )(
            IDvdInfo2 * This,
            _Out_ DVD_MenuAttributes *pATR);
        HRESULT ( STDMETHODCALLTYPE *GetCurrentVideoAttributes )(
            IDvdInfo2 * This,
            _Out_ DVD_VideoAttributes *pATR);
        HRESULT ( STDMETHODCALLTYPE *GetAudioAttributes )(
            IDvdInfo2 * This,
                       ULONG ulStream,
            _Out_ DVD_AudioAttributes *pATR);
        HRESULT ( STDMETHODCALLTYPE *GetKaraokeAttributes )(
            IDvdInfo2 * This,
                       ULONG ulStream,
            _Out_ DVD_KaraokeAttributes *pAttributes);
        HRESULT ( STDMETHODCALLTYPE *GetSubpictureAttributes )(
            IDvdInfo2 * This,
                       ULONG ulStream,
            _Out_ DVD_SubpictureAttributes *pATR);
        HRESULT ( STDMETHODCALLTYPE *GetDVDVolumeInfo )(
            IDvdInfo2 * This,
            _Out_ ULONG *pulNumOfVolumes,
            _Out_ ULONG *pulVolume,
            _Out_ DVD_DISC_SIDE *pSide,
            _Out_ ULONG *pulNumOfTitles);
        HRESULT ( STDMETHODCALLTYPE *GetDVDTextNumberOfLanguages )(
            IDvdInfo2 * This,
            _Out_ ULONG *pulNumOfLangs);
        HRESULT ( STDMETHODCALLTYPE *GetDVDTextLanguageInfo )(
            IDvdInfo2 * This,
                       ULONG ulLangIndex,
            _Out_ ULONG *pulNumOfStrings,
            _Out_ LCID *pLangCode,
            _Out_ enum DVD_TextCharSet *pbCharacterSet);
        HRESULT ( STDMETHODCALLTYPE *GetDVDTextStringAsNative )(
            IDvdInfo2 * This,
                       ULONG ulLangIndex,
                       ULONG ulStringIndex,
            _Out_ BYTE *pbBuffer,
                       ULONG ulMaxBufferSize,
            _Out_ ULONG *pulActualSize,
            _Out_ enum DVD_TextStringType *pType);
        HRESULT ( STDMETHODCALLTYPE *GetDVDTextStringAsUnicode )(
            IDvdInfo2 * This,
                       ULONG ulLangIndex,
                       ULONG ulStringIndex,
            _Out_ WCHAR *pchwBuffer,
                       ULONG ulMaxBufferSize,
            _Out_ ULONG *pulActualSize,
            _Out_ enum DVD_TextStringType *pType);
        HRESULT ( STDMETHODCALLTYPE *GetPlayerParentalLevel )(
            IDvdInfo2 * This,
            _Out_ ULONG *pulParentalLevel,
            _Out_ BYTE pbCountryCode[ 2 ]);
        HRESULT ( STDMETHODCALLTYPE *GetNumberOfChapters )(
            IDvdInfo2 * This,
                       ULONG ulTitle,
            _Out_ ULONG *pulNumOfChapters);
        HRESULT ( STDMETHODCALLTYPE *GetTitleParentalLevels )(
            IDvdInfo2 * This,
                       ULONG ulTitle,
            _Out_ ULONG *pulParentalLevels);
        HRESULT ( STDMETHODCALLTYPE *GetDVDDirectory )(
            IDvdInfo2 * This,
            _Out_writes_to_(ulMaxSize, *pulActualSize) LPWSTR pszwPath,
                       ULONG ulMaxSize,
            _Out_ ULONG *pulActualSize);
        HRESULT ( STDMETHODCALLTYPE *IsAudioStreamEnabled )(
            IDvdInfo2 * This,
                       ULONG ulStreamNum,
            _Out_ BOOL *pbEnabled);
        HRESULT ( STDMETHODCALLTYPE *GetDiscID )(
            IDvdInfo2 * This,
                       LPCWSTR pszwPath,
            _Out_ ULONGLONG *pullDiscID);
        HRESULT ( STDMETHODCALLTYPE *GetState )(
            IDvdInfo2 * This,
            _Out_ IDvdState **pStateData);
        HRESULT ( STDMETHODCALLTYPE *GetMenuLanguages )(
            IDvdInfo2 * This,
            _Out_ LCID *pLanguages,
                       ULONG ulMaxLanguages,
            _Out_ ULONG *pulActualLanguages);
        HRESULT ( STDMETHODCALLTYPE *GetButtonAtPosition )(
            IDvdInfo2 * This,
                       POINT point,
            _Out_ ULONG *pulButtonIndex);
        HRESULT ( STDMETHODCALLTYPE *GetCmdFromEvent )(
            IDvdInfo2 * This,
                       LONG_PTR lParam1,
            _Out_ IDvdCmd **pCmdObj);
        HRESULT ( STDMETHODCALLTYPE *GetDefaultMenuLanguage )(
            IDvdInfo2 * This,
            _Out_ LCID *pLanguage);
        HRESULT ( STDMETHODCALLTYPE *GetDefaultAudioLanguage )(
            IDvdInfo2 * This,
            _Out_ LCID *pLanguage,
            _Out_ DVD_AUDIO_LANG_EXT *pAudioExtension);
        HRESULT ( STDMETHODCALLTYPE *GetDefaultSubpictureLanguage )(
            IDvdInfo2 * This,
            _Out_ LCID *pLanguage,
            _Out_ DVD_SUBPICTURE_LANG_EXT *pSubpictureExtension);
        HRESULT ( STDMETHODCALLTYPE *GetDecoderCaps )(
            IDvdInfo2 * This,
            _Out_ DVD_DECODER_CAPS *pCaps);
        HRESULT ( STDMETHODCALLTYPE *GetButtonRect )(
            IDvdInfo2 * This,
                       ULONG ulButton,
            _Out_ RECT *pRect);
        HRESULT ( STDMETHODCALLTYPE *IsSubpictureStreamEnabled )(
            IDvdInfo2 * This,
                       ULONG ulStreamNum,
            _Out_ BOOL *pbEnabled);
        END_INTERFACE
    } IDvdInfo2Vtbl;
    interface IDvdInfo2
    {
        CONST_VTBL struct IDvdInfo2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetCurrentDomain(This,pDomain) )
    ( (This)->lpVtbl -> GetCurrentLocation(This,pLocation) )
    ( (This)->lpVtbl -> GetTotalTitleTime(This,pTotalTime,ulTimeCodeFlags) )
    ( (This)->lpVtbl -> GetCurrentButton(This,pulButtonsAvailable,pulCurrentButton) )
    ( (This)->lpVtbl -> GetCurrentAngle(This,pulAnglesAvailable,pulCurrentAngle) )
    ( (This)->lpVtbl -> GetCurrentAudio(This,pulStreamsAvailable,pulCurrentStream) )
    ( (This)->lpVtbl -> GetCurrentSubpicture(This,pulStreamsAvailable,pulCurrentStream,pbIsDisabled) )
    ( (This)->lpVtbl -> GetCurrentUOPS(This,pulUOPs) )
    ( (This)->lpVtbl -> GetAllSPRMs(This,pRegisterArray) )
    ( (This)->lpVtbl -> GetAllGPRMs(This,pRegisterArray) )
    ( (This)->lpVtbl -> GetAudioLanguage(This,ulStream,pLanguage) )
    ( (This)->lpVtbl -> GetSubpictureLanguage(This,ulStream,pLanguage) )
    ( (This)->lpVtbl -> GetTitleAttributes(This,ulTitle,pMenu,pTitle) )
    ( (This)->lpVtbl -> GetVMGAttributes(This,pATR) )
    ( (This)->lpVtbl -> GetCurrentVideoAttributes(This,pATR) )
    ( (This)->lpVtbl -> GetAudioAttributes(This,ulStream,pATR) )
    ( (This)->lpVtbl -> GetKaraokeAttributes(This,ulStream,pAttributes) )
    ( (This)->lpVtbl -> GetSubpictureAttributes(This,ulStream,pATR) )
    ( (This)->lpVtbl -> GetDVDVolumeInfo(This,pulNumOfVolumes,pulVolume,pSide,pulNumOfTitles) )
    ( (This)->lpVtbl -> GetDVDTextNumberOfLanguages(This,pulNumOfLangs) )
    ( (This)->lpVtbl -> GetDVDTextLanguageInfo(This,ulLangIndex,pulNumOfStrings,pLangCode,pbCharacterSet) )
    ( (This)->lpVtbl -> GetDVDTextStringAsNative(This,ulLangIndex,ulStringIndex,pbBuffer,ulMaxBufferSize,pulActualSize,pType) )
    ( (This)->lpVtbl -> GetDVDTextStringAsUnicode(This,ulLangIndex,ulStringIndex,pchwBuffer,ulMaxBufferSize,pulActualSize,pType) )
    ( (This)->lpVtbl -> GetPlayerParentalLevel(This,pulParentalLevel,pbCountryCode) )
    ( (This)->lpVtbl -> GetNumberOfChapters(This,ulTitle,pulNumOfChapters) )
    ( (This)->lpVtbl -> GetTitleParentalLevels(This,ulTitle,pulParentalLevels) )
    ( (This)->lpVtbl -> GetDVDDirectory(This,pszwPath,ulMaxSize,pulActualSize) )
    ( (This)->lpVtbl -> IsAudioStreamEnabled(This,ulStreamNum,pbEnabled) )
    ( (This)->lpVtbl -> GetDiscID(This,pszwPath,pullDiscID) )
    ( (This)->lpVtbl -> GetState(This,pStateData) )
    ( (This)->lpVtbl -> GetMenuLanguages(This,pLanguages,ulMaxLanguages,pulActualLanguages) )
    ( (This)->lpVtbl -> GetButtonAtPosition(This,point,pulButtonIndex) )
    ( (This)->lpVtbl -> GetCmdFromEvent(This,lParam1,pCmdObj) )
    ( (This)->lpVtbl -> GetDefaultMenuLanguage(This,pLanguage) )
    ( (This)->lpVtbl -> GetDefaultAudioLanguage(This,pLanguage,pAudioExtension) )
    ( (This)->lpVtbl -> GetDefaultSubpictureLanguage(This,pLanguage,pSubpictureExtension) )
    ( (This)->lpVtbl -> GetDecoderCaps(This,pCaps) )
    ( (This)->lpVtbl -> GetButtonRect(This,ulButton,pRect) )
    ( (This)->lpVtbl -> IsSubpictureStreamEnabled(This,ulStreamNum,pbEnabled) )
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef
enum _AM_DVD_GRAPH_FLAGS
    {
        AM_DVD_HWDEC_PREFER = 0x1,
        AM_DVD_HWDEC_ONLY = 0x2,
        AM_DVD_SWDEC_PREFER = 0x4,
        AM_DVD_SWDEC_ONLY = 0x8,
        AM_DVD_NOVPE = 0x100,
        AM_DVD_DO_NOT_CLEAR = 0x200,
        AM_DVD_VMR9_ONLY = 0x800,
        AM_DVD_EVR_ONLY = 0x1000,
        AM_DVD_EVR_QOS = 0x2000,
        AM_DVD_ADAPT_GRAPH = 0x4000,
        AM_DVD_MASK = 0xffff
    } AM_DVD_GRAPH_FLAGS;
typedef
enum _AM_DVD_STREAM_FLAGS
    {
        AM_DVD_STREAM_VIDEO = 0x1,
        AM_DVD_STREAM_AUDIO = 0x2,
        AM_DVD_STREAM_SUBPIC = 0x4
    } AM_DVD_STREAM_FLAGS;
typedef struct __MIDL___MIDL_itf_strmif_0000_0138_0001
    {
    HRESULT hrVPEStatus;
    BOOL bDvdVolInvalid;
    BOOL bDvdVolUnknown;
    BOOL bNoLine21In;
    BOOL bNoLine21Out;
    int iNumStreams;
    int iNumStreamsFailed;
    DWORD dwFailedStreamsFlag;
    } AM_DVD_RENDERSTATUS;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0138_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0138_v0_0_s_ifspec;
EXTERN_C const IID IID_IDvdGraphBuilder;
    typedef struct IDvdGraphBuilderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDvdGraphBuilder * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDvdGraphBuilder * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDvdGraphBuilder * This);
        HRESULT ( STDMETHODCALLTYPE *GetFiltergraph )(
            IDvdGraphBuilder * This,
            _Out_ IGraphBuilder **ppGB);
        HRESULT ( STDMETHODCALLTYPE *GetDvdInterface )(
            IDvdGraphBuilder * This,
                       REFIID riid,
            _Out_ void **ppvIF);
        HRESULT ( STDMETHODCALLTYPE *RenderDvdVideoVolume )(
            IDvdGraphBuilder * This,
                       LPCWSTR lpcwszPathName,
                       DWORD dwFlags,
            _Out_ AM_DVD_RENDERSTATUS *pStatus);
        END_INTERFACE
    } IDvdGraphBuilderVtbl;
    interface IDvdGraphBuilder
    {
        CONST_VTBL struct IDvdGraphBuilderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetFiltergraph(This,ppGB) )
    ( (This)->lpVtbl -> GetDvdInterface(This,riid,ppvIF) )
    ( (This)->lpVtbl -> RenderDvdVideoVolume(This,lpcwszPathName,dwFlags,pStatus) )
EXTERN_C const IID IID_IDDrawExclModeVideo;
    typedef struct IDDrawExclModeVideoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDDrawExclModeVideo * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDDrawExclModeVideo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDDrawExclModeVideo * This);
        HRESULT ( STDMETHODCALLTYPE *SetDDrawObject )(
            IDDrawExclModeVideo * This,
                       IDirectDraw *pDDrawObject);
        HRESULT ( STDMETHODCALLTYPE *GetDDrawObject )(
            IDDrawExclModeVideo * This,
            _Out_ IDirectDraw **ppDDrawObject,
            _Out_ BOOL *pbUsingExternal);
        HRESULT ( STDMETHODCALLTYPE *SetDDrawSurface )(
            IDDrawExclModeVideo * This,
                       IDirectDrawSurface *pDDrawSurface);
        HRESULT ( STDMETHODCALLTYPE *GetDDrawSurface )(
            IDDrawExclModeVideo * This,
            _Out_ IDirectDrawSurface **ppDDrawSurface,
            _Out_ BOOL *pbUsingExternal);
        HRESULT ( STDMETHODCALLTYPE *SetDrawParameters )(
            IDDrawExclModeVideo * This,
                       const RECT *prcSource,
                       const RECT *prcTarget);
        HRESULT ( STDMETHODCALLTYPE *GetNativeVideoProps )(
            IDDrawExclModeVideo * This,
            _Out_ DWORD *pdwVideoWidth,
            _Out_ DWORD *pdwVideoHeight,
            _Out_ DWORD *pdwPictAspectRatioX,
            _Out_ DWORD *pdwPictAspectRatioY);
        HRESULT ( STDMETHODCALLTYPE *SetCallbackInterface )(
            IDDrawExclModeVideo * This,
                       IDDrawExclModeVideoCallback *pCallback,
                       DWORD dwFlags);
        END_INTERFACE
    } IDDrawExclModeVideoVtbl;
    interface IDDrawExclModeVideo
    {
        CONST_VTBL struct IDDrawExclModeVideoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetDDrawObject(This,pDDrawObject) )
    ( (This)->lpVtbl -> GetDDrawObject(This,ppDDrawObject,pbUsingExternal) )
    ( (This)->lpVtbl -> SetDDrawSurface(This,pDDrawSurface) )
    ( (This)->lpVtbl -> GetDDrawSurface(This,ppDDrawSurface,pbUsingExternal) )
    ( (This)->lpVtbl -> SetDrawParameters(This,prcSource,prcTarget) )
    ( (This)->lpVtbl -> GetNativeVideoProps(This,pdwVideoWidth,pdwVideoHeight,pdwPictAspectRatioX,pdwPictAspectRatioY) )
    ( (This)->lpVtbl -> SetCallbackInterface(This,pCallback,dwFlags) )
enum _AM_OVERLAY_NOTIFY_FLAGS
    {
        AM_OVERLAY_NOTIFY_VISIBLE_CHANGE = 0x1,
        AM_OVERLAY_NOTIFY_SOURCE_CHANGE = 0x2,
        AM_OVERLAY_NOTIFY_DEST_CHANGE = 0x4
    } ;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0140_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0140_v0_0_s_ifspec;
EXTERN_C const IID IID_IDDrawExclModeVideoCallback;
    typedef struct IDDrawExclModeVideoCallbackVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDDrawExclModeVideoCallback * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDDrawExclModeVideoCallback * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDDrawExclModeVideoCallback * This);
        HRESULT ( STDMETHODCALLTYPE *OnUpdateOverlay )(
            IDDrawExclModeVideoCallback * This,
                       BOOL bBefore,
                       DWORD dwFlags,
                       BOOL bOldVisible,
                       const RECT *prcOldSrc,
                       const RECT *prcOldDest,
                       BOOL bNewVisible,
                       const RECT *prcNewSrc,
                       const RECT *prcNewDest);
        HRESULT ( STDMETHODCALLTYPE *OnUpdateColorKey )(
            IDDrawExclModeVideoCallback * This,
                       const COLORKEY *pKey,
                       DWORD dwColor);
        HRESULT ( STDMETHODCALLTYPE *OnUpdateSize )(
            IDDrawExclModeVideoCallback * This,
                       DWORD dwWidth,
                       DWORD dwHeight,
                       DWORD dwARWidth,
                       DWORD dwARHeight);
        END_INTERFACE
    } IDDrawExclModeVideoCallbackVtbl;
    interface IDDrawExclModeVideoCallback
    {
        CONST_VTBL struct IDDrawExclModeVideoCallbackVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnUpdateOverlay(This,bBefore,dwFlags,bOldVisible,prcOldSrc,prcOldDest,bNewVisible,prcNewSrc,prcNewDest) )
    ( (This)->lpVtbl -> OnUpdateColorKey(This,pKey,dwColor) )
    ( (This)->lpVtbl -> OnUpdateSize(This,dwWidth,dwHeight,dwARWidth,dwARHeight) )
#endif
#pragma endregion
#pragma warning(pop)
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0141_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0141_v0_0_s_ifspec;
}

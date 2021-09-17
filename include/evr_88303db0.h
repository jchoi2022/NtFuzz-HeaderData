#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IMFVideoPositionMapper IMFVideoPositionMapper;
typedef interface IMFVideoDeviceID IMFVideoDeviceID;
typedef interface IMFVideoDisplayControl IMFVideoDisplayControl;
typedef interface IMFVideoPresenter IMFVideoPresenter;
typedef interface IMFDesiredSample IMFDesiredSample;
typedef interface IMFVideoMixerControl IMFVideoMixerControl;
typedef interface IMFVideoMixerControl2 IMFVideoMixerControl2;
typedef interface IMFVideoRenderer IMFVideoRenderer;
typedef interface IEVRFilterConfig IEVRFilterConfig;
typedef interface IEVRFilterConfigEx IEVRFilterConfigEx;
typedef interface IMFTopologyServiceLookup IMFTopologyServiceLookup;
typedef interface IMFTopologyServiceLookupClient IMFTopologyServiceLookupClient;
typedef interface IEVRTrustedVideoPlugin IEVRTrustedVideoPlugin;
#include "unknwn.h"
#include "propidl.h"
#include "mfidl.h"
#include "strmif.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
DEFINE_GUID(MR_VIDEO_RENDER_SERVICE,
    0x1092a86c,
    0xab1a,
    0x459a,
    0xa3, 0x36, 0x83, 0x1f, 0xbc, 0x4d, 0x11, 0xff
);
DEFINE_GUID(MR_VIDEO_MIXER_SERVICE,
    0x73cd2fc,
    0x6cf4,
    0x40b7,
    0x88, 0x59, 0xe8, 0x95, 0x52, 0xc8, 0x41, 0xf8
);
DEFINE_GUID(MR_VIDEO_ACCELERATION_SERVICE,
    0xefef5175,
    0x5c7d,
    0x4ce2,
    0xbb, 0xbd, 0x34, 0xff, 0x8b, 0xca, 0x65, 0x54
);
DEFINE_GUID(MR_BUFFER_SERVICE,
    0xa562248c,
    0x9ac6,
    0x4ffc,
    0x9f, 0xba, 0x3a, 0xf8, 0xf8, 0xad, 0x1a, 0x4d
);
DEFINE_GUID(VIDEO_ZOOM_RECT,
    0x7aaa1638,
    0x1b7f,
    0x4c93,
    0xbd, 0x89, 0x5b, 0x9c, 0x9f, 0xb6, 0xfc, 0xf0
);
extern RPC_IF_HANDLE __MIDL_itf_evr_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_evr_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFVideoPositionMapper;
    typedef struct IMFVideoPositionMapperVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFVideoPositionMapper * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFVideoPositionMapper * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFVideoPositionMapper * This);
        HRESULT ( STDMETHODCALLTYPE *MapOutputCoordinateToInputStream )(
            IMFVideoPositionMapper * This,
                       float xOut,
                       float yOut,
                       DWORD dwOutputStreamIndex,
                       DWORD dwInputStreamIndex,
            _Out_ float *pxIn,
            _Out_ float *pyIn);
        END_INTERFACE
    } IMFVideoPositionMapperVtbl;
    interface IMFVideoPositionMapper
    {
        CONST_VTBL struct IMFVideoPositionMapperVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> MapOutputCoordinateToInputStream(This,xOut,yOut,dwOutputStreamIndex,dwInputStreamIndex,pxIn,pyIn) )
EXTERN_C const IID IID_IMFVideoDeviceID;
    typedef struct IMFVideoDeviceIDVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFVideoDeviceID * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFVideoDeviceID * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFVideoDeviceID * This);
        HRESULT ( STDMETHODCALLTYPE *GetDeviceID )(
            IMFVideoDeviceID * This,
            _Out_ IID *pDeviceID);
        END_INTERFACE
    } IMFVideoDeviceIDVtbl;
    interface IMFVideoDeviceID
    {
        CONST_VTBL struct IMFVideoDeviceIDVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetDeviceID(This,pDeviceID) )
typedef
enum MFVideoAspectRatioMode
    {
        MFVideoARMode_None = 0,
        MFVideoARMode_PreservePicture = 0x1,
        MFVideoARMode_PreservePixel = 0x2,
        MFVideoARMode_NonLinearStretch = 0x4,
        MFVideoARMode_Mask = 0x7
    } MFVideoAspectRatioMode;
typedef
enum MFVideoRenderPrefs
    {
        MFVideoRenderPrefs_DoNotRenderBorder = 0x1,
        MFVideoRenderPrefs_DoNotClipToDevice = 0x2,
        MFVideoRenderPrefs_AllowOutputThrottling = 0x4,
        MFVideoRenderPrefs_ForceOutputThrottling = 0x8,
        MFVideoRenderPrefs_ForceBatching = 0x10,
        MFVideoRenderPrefs_AllowBatching = 0x20,
        MFVideoRenderPrefs_ForceScaling = 0x40,
        MFVideoRenderPrefs_AllowScaling = 0x80,
        MFVideoRenderPrefs_DoNotRepaintOnStop = 0x100,
        MFVideoRenderPrefs_Mask = 0x1ff
    } MFVideoRenderPrefs;
typedef struct MFVideoNormalizedRect
    {
    float left;
    float top;
    float right;
    float bottom;
    } MFVideoNormalizedRect;
extern RPC_IF_HANDLE __MIDL_itf_evr_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_evr_0000_0002_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFVideoDisplayControl;
    typedef struct IMFVideoDisplayControlVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMFVideoDisplayControl * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMFVideoDisplayControl * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMFVideoDisplayControl * This);
        HRESULT ( STDMETHODCALLTYPE *GetNativeVideoSize )(
            __RPC__in IMFVideoDisplayControl * This,
                                    __RPC__inout_opt SIZE *pszVideo,
                                    __RPC__inout_opt SIZE *pszARVideo);
        HRESULT ( STDMETHODCALLTYPE *GetIdealVideoSize )(
            __RPC__in IMFVideoDisplayControl * This,
                                    __RPC__inout_opt SIZE *pszMin,
                                    __RPC__inout_opt SIZE *pszMax);
        HRESULT ( STDMETHODCALLTYPE *SetVideoPosition )(
            __RPC__in IMFVideoDisplayControl * This,
                               __RPC__in_opt const MFVideoNormalizedRect *pnrcSource,
                               __RPC__in_opt const LPRECT prcDest);
        HRESULT ( STDMETHODCALLTYPE *GetVideoPosition )(
            __RPC__in IMFVideoDisplayControl * This,
                        __RPC__out MFVideoNormalizedRect *pnrcSource,
                        __RPC__out LPRECT prcDest);
        HRESULT ( STDMETHODCALLTYPE *SetAspectRatioMode )(
            __RPC__in IMFVideoDisplayControl * This,
                       DWORD dwAspectRatioMode);
        HRESULT ( STDMETHODCALLTYPE *GetAspectRatioMode )(
            __RPC__in IMFVideoDisplayControl * This,
                        __RPC__out DWORD *pdwAspectRatioMode);
        HRESULT ( STDMETHODCALLTYPE *SetVideoWindow )(
            __RPC__in IMFVideoDisplayControl * This,
                       __RPC__in HWND hwndVideo);
        HRESULT ( STDMETHODCALLTYPE *GetVideoWindow )(
            __RPC__in IMFVideoDisplayControl * This,
                        __RPC__deref_out_opt HWND *phwndVideo);
        HRESULT ( STDMETHODCALLTYPE *RepaintVideo )(
            __RPC__in IMFVideoDisplayControl * This);
        HRESULT ( STDMETHODCALLTYPE *GetCurrentImage )(
            __RPC__in IMFVideoDisplayControl * This,
                            __RPC__inout BITMAPINFOHEADER *pBih,
                                          __RPC__deref_out_ecount_full_opt(*pcbDib) BYTE **pDib,
                        __RPC__out DWORD *pcbDib,
                                    __RPC__inout_opt LONGLONG *pTimeStamp);
        HRESULT ( STDMETHODCALLTYPE *SetBorderColor )(
            __RPC__in IMFVideoDisplayControl * This,
                       COLORREF Clr);
        HRESULT ( STDMETHODCALLTYPE *GetBorderColor )(
            __RPC__in IMFVideoDisplayControl * This,
                        __RPC__out COLORREF *pClr);
        HRESULT ( STDMETHODCALLTYPE *SetRenderingPrefs )(
            __RPC__in IMFVideoDisplayControl * This,
                       DWORD dwRenderFlags);
        HRESULT ( STDMETHODCALLTYPE *GetRenderingPrefs )(
            __RPC__in IMFVideoDisplayControl * This,
                        __RPC__out DWORD *pdwRenderFlags);
        HRESULT ( STDMETHODCALLTYPE *SetFullscreen )(
            __RPC__in IMFVideoDisplayControl * This,
                       BOOL fFullscreen);
        HRESULT ( STDMETHODCALLTYPE *GetFullscreen )(
            __RPC__in IMFVideoDisplayControl * This,
                        __RPC__out BOOL *pfFullscreen);
        END_INTERFACE
    } IMFVideoDisplayControlVtbl;
    interface IMFVideoDisplayControl
    {
        CONST_VTBL struct IMFVideoDisplayControlVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetNativeVideoSize(This,pszVideo,pszARVideo) )
    ( (This)->lpVtbl -> GetIdealVideoSize(This,pszMin,pszMax) )
    ( (This)->lpVtbl -> SetVideoPosition(This,pnrcSource,prcDest) )
    ( (This)->lpVtbl -> GetVideoPosition(This,pnrcSource,prcDest) )
    ( (This)->lpVtbl -> SetAspectRatioMode(This,dwAspectRatioMode) )
    ( (This)->lpVtbl -> GetAspectRatioMode(This,pdwAspectRatioMode) )
    ( (This)->lpVtbl -> SetVideoWindow(This,hwndVideo) )
    ( (This)->lpVtbl -> GetVideoWindow(This,phwndVideo) )
    ( (This)->lpVtbl -> RepaintVideo(This) )
    ( (This)->lpVtbl -> GetCurrentImage(This,pBih,pDib,pcbDib,pTimeStamp) )
    ( (This)->lpVtbl -> SetBorderColor(This,Clr) )
    ( (This)->lpVtbl -> GetBorderColor(This,pClr) )
    ( (This)->lpVtbl -> SetRenderingPrefs(This,dwRenderFlags) )
    ( (This)->lpVtbl -> GetRenderingPrefs(This,pdwRenderFlags) )
    ( (This)->lpVtbl -> SetFullscreen(This,fFullscreen) )
    ( (This)->lpVtbl -> GetFullscreen(This,pfFullscreen) )
typedef
enum MFVP_MESSAGE_TYPE
    {
        MFVP_MESSAGE_FLUSH = 0,
        MFVP_MESSAGE_INVALIDATEMEDIATYPE = 0x1,
        MFVP_MESSAGE_PROCESSINPUTNOTIFY = 0x2,
        MFVP_MESSAGE_BEGINSTREAMING = 0x3,
        MFVP_MESSAGE_ENDSTREAMING = 0x4,
        MFVP_MESSAGE_ENDOFSTREAM = 0x5,
        MFVP_MESSAGE_STEP = 0x6,
        MFVP_MESSAGE_CANCELSTEP = 0x7
    } MFVP_MESSAGE_TYPE;
extern RPC_IF_HANDLE __MIDL_itf_evr_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_evr_0000_0003_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFVideoPresenter;
    typedef struct IMFVideoPresenterVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFVideoPresenter * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFVideoPresenter * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFVideoPresenter * This);
        HRESULT ( STDMETHODCALLTYPE *OnClockStart )(
            IMFVideoPresenter * This,
                       MFTIME hnsSystemTime,
                       LONGLONG llClockStartOffset);
        HRESULT ( STDMETHODCALLTYPE *OnClockStop )(
            IMFVideoPresenter * This,
                       MFTIME hnsSystemTime);
        HRESULT ( STDMETHODCALLTYPE *OnClockPause )(
            IMFVideoPresenter * This,
                       MFTIME hnsSystemTime);
        HRESULT ( STDMETHODCALLTYPE *OnClockRestart )(
            IMFVideoPresenter * This,
                       MFTIME hnsSystemTime);
        HRESULT ( STDMETHODCALLTYPE *OnClockSetRate )(
            IMFVideoPresenter * This,
                       MFTIME hnsSystemTime,
                       float flRate);
        HRESULT ( STDMETHODCALLTYPE *ProcessMessage )(
            IMFVideoPresenter * This,
            MFVP_MESSAGE_TYPE eMessage,
            ULONG_PTR ulParam);
        HRESULT ( STDMETHODCALLTYPE *GetCurrentMediaType )(
            IMFVideoPresenter * This,
            _Outptr_ IMFVideoMediaType **ppMediaType);
        END_INTERFACE
    } IMFVideoPresenterVtbl;
    interface IMFVideoPresenter
    {
        CONST_VTBL struct IMFVideoPresenterVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnClockStart(This,hnsSystemTime,llClockStartOffset) )
    ( (This)->lpVtbl -> OnClockStop(This,hnsSystemTime) )
    ( (This)->lpVtbl -> OnClockPause(This,hnsSystemTime) )
    ( (This)->lpVtbl -> OnClockRestart(This,hnsSystemTime) )
    ( (This)->lpVtbl -> OnClockSetRate(This,hnsSystemTime,flRate) )
    ( (This)->lpVtbl -> ProcessMessage(This,eMessage,ulParam) )
    ( (This)->lpVtbl -> GetCurrentMediaType(This,ppMediaType) )
EXTERN_C const IID IID_IMFDesiredSample;
    typedef struct IMFDesiredSampleVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFDesiredSample * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFDesiredSample * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFDesiredSample * This);
        HRESULT ( STDMETHODCALLTYPE *GetDesiredSampleTimeAndDuration )(
            IMFDesiredSample * This,
            _Out_ LONGLONG *phnsSampleTime,
            _Out_ LONGLONG *phnsSampleDuration);
        void ( STDMETHODCALLTYPE *SetDesiredSampleTimeAndDuration )(
            IMFDesiredSample * This,
                       LONGLONG hnsSampleTime,
                       LONGLONG hnsSampleDuration);
        void ( STDMETHODCALLTYPE *Clear )(
            IMFDesiredSample * This);
        END_INTERFACE
    } IMFDesiredSampleVtbl;
    interface IMFDesiredSample
    {
        CONST_VTBL struct IMFDesiredSampleVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetDesiredSampleTimeAndDuration(This,phnsSampleTime,phnsSampleDuration) )
    ( (This)->lpVtbl -> SetDesiredSampleTimeAndDuration(This,hnsSampleTime,hnsSampleDuration) )
    ( (This)->lpVtbl -> Clear(This) )
EXTERN_C const IID IID_IMFVideoMixerControl;
    typedef struct IMFVideoMixerControlVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMFVideoMixerControl * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMFVideoMixerControl * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMFVideoMixerControl * This);
        HRESULT ( STDMETHODCALLTYPE *SetStreamZOrder )(
            __RPC__in IMFVideoMixerControl * This,
                       DWORD dwStreamID,
                       DWORD dwZ);
        HRESULT ( STDMETHODCALLTYPE *GetStreamZOrder )(
            __RPC__in IMFVideoMixerControl * This,
                       DWORD dwStreamID,
                        __RPC__out DWORD *pdwZ);
        HRESULT ( STDMETHODCALLTYPE *SetStreamOutputRect )(
            __RPC__in IMFVideoMixerControl * This,
                       DWORD dwStreamID,
                       __RPC__in const MFVideoNormalizedRect *pnrcOutput);
        HRESULT ( STDMETHODCALLTYPE *GetStreamOutputRect )(
            __RPC__in IMFVideoMixerControl * This,
                       DWORD dwStreamID,
                        __RPC__out MFVideoNormalizedRect *pnrcOutput);
        END_INTERFACE
    } IMFVideoMixerControlVtbl;
    interface IMFVideoMixerControl
    {
        CONST_VTBL struct IMFVideoMixerControlVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetStreamZOrder(This,dwStreamID,dwZ) )
    ( (This)->lpVtbl -> GetStreamZOrder(This,dwStreamID,pdwZ) )
    ( (This)->lpVtbl -> SetStreamOutputRect(This,dwStreamID,pnrcOutput) )
    ( (This)->lpVtbl -> GetStreamOutputRect(This,dwStreamID,pnrcOutput) )
typedef
enum _MFVideoMixPrefs
    {
        MFVideoMixPrefs_ForceHalfInterlace = 0x1,
        MFVideoMixPrefs_AllowDropToHalfInterlace = 0x2,
        MFVideoMixPrefs_AllowDropToBob = 0x4,
        MFVideoMixPrefs_ForceBob = 0x8,
        MFVideoMixPrefs_EnableRotation = 0x10,
        MFVideoMixPrefs_Mask = 0x1f
    } MFVideoMixPrefs;
extern RPC_IF_HANDLE __MIDL_itf_evr_0000_0006_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_evr_0000_0006_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFVideoMixerControl2;
    typedef struct IMFVideoMixerControl2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMFVideoMixerControl2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMFVideoMixerControl2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMFVideoMixerControl2 * This);
        HRESULT ( STDMETHODCALLTYPE *SetStreamZOrder )(
            __RPC__in IMFVideoMixerControl2 * This,
                       DWORD dwStreamID,
                       DWORD dwZ);
        HRESULT ( STDMETHODCALLTYPE *GetStreamZOrder )(
            __RPC__in IMFVideoMixerControl2 * This,
                       DWORD dwStreamID,
                        __RPC__out DWORD *pdwZ);
        HRESULT ( STDMETHODCALLTYPE *SetStreamOutputRect )(
            __RPC__in IMFVideoMixerControl2 * This,
                       DWORD dwStreamID,
                       __RPC__in const MFVideoNormalizedRect *pnrcOutput);
        HRESULT ( STDMETHODCALLTYPE *GetStreamOutputRect )(
            __RPC__in IMFVideoMixerControl2 * This,
                       DWORD dwStreamID,
                        __RPC__out MFVideoNormalizedRect *pnrcOutput);
        HRESULT ( STDMETHODCALLTYPE *SetMixingPrefs )(
            __RPC__in IMFVideoMixerControl2 * This,
                       DWORD dwMixFlags);
        HRESULT ( STDMETHODCALLTYPE *GetMixingPrefs )(
            __RPC__in IMFVideoMixerControl2 * This,
                        __RPC__out DWORD *pdwMixFlags);
        END_INTERFACE
    } IMFVideoMixerControl2Vtbl;
    interface IMFVideoMixerControl2
    {
        CONST_VTBL struct IMFVideoMixerControl2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetStreamZOrder(This,dwStreamID,dwZ) )
    ( (This)->lpVtbl -> GetStreamZOrder(This,dwStreamID,pdwZ) )
    ( (This)->lpVtbl -> SetStreamOutputRect(This,dwStreamID,pnrcOutput) )
    ( (This)->lpVtbl -> GetStreamOutputRect(This,dwStreamID,pnrcOutput) )
    ( (This)->lpVtbl -> SetMixingPrefs(This,dwMixFlags) )
    ( (This)->lpVtbl -> GetMixingPrefs(This,pdwMixFlags) )
EXTERN_C const IID IID_IMFVideoRenderer;
    typedef struct IMFVideoRendererVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFVideoRenderer * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFVideoRenderer * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFVideoRenderer * This);
        HRESULT ( STDMETHODCALLTYPE *InitializeRenderer )(
            IMFVideoRenderer * This,
            _In_opt_ IMFTransform *pVideoMixer,
            _In_opt_ IMFVideoPresenter *pVideoPresenter);
        END_INTERFACE
    } IMFVideoRendererVtbl;
    interface IMFVideoRenderer
    {
        CONST_VTBL struct IMFVideoRendererVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> InitializeRenderer(This,pVideoMixer,pVideoPresenter) )
EXTERN_C const IID IID_IEVRFilterConfig;
    typedef struct IEVRFilterConfigVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IEVRFilterConfig * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IEVRFilterConfig * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IEVRFilterConfig * This);
        HRESULT ( STDMETHODCALLTYPE *SetNumberOfStreams )(
            IEVRFilterConfig * This,
                       DWORD dwMaxStreams);
        HRESULT ( STDMETHODCALLTYPE *GetNumberOfStreams )(
            IEVRFilterConfig * This,
            _Out_ DWORD *pdwMaxStreams);
        END_INTERFACE
    } IEVRFilterConfigVtbl;
    interface IEVRFilterConfig
    {
        CONST_VTBL struct IEVRFilterConfigVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetNumberOfStreams(This,dwMaxStreams) )
    ( (This)->lpVtbl -> GetNumberOfStreams(This,pdwMaxStreams) )
typedef
enum _EVRFilterConfig_Prefs
    {
        EVRFilterConfigPrefs_EnableQoS = 0x1,
        EVRFilterConfigPrefs_Mask = 0x1
    } EVRFilterConfigPrefs;
extern RPC_IF_HANDLE __MIDL_itf_evr_0000_0009_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_evr_0000_0009_v0_0_s_ifspec;
EXTERN_C const IID IID_IEVRFilterConfigEx;
    typedef struct IEVRFilterConfigExVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IEVRFilterConfigEx * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IEVRFilterConfigEx * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IEVRFilterConfigEx * This);
        HRESULT ( STDMETHODCALLTYPE *SetNumberOfStreams )(
            __RPC__in IEVRFilterConfigEx * This,
                       DWORD dwMaxStreams);
        HRESULT ( STDMETHODCALLTYPE *GetNumberOfStreams )(
            __RPC__in IEVRFilterConfigEx * This,
            _Out_ DWORD *pdwMaxStreams);
        HRESULT ( STDMETHODCALLTYPE *SetConfigPrefs )(
            __RPC__in IEVRFilterConfigEx * This,
                       DWORD dwConfigFlags);
        HRESULT ( STDMETHODCALLTYPE *GetConfigPrefs )(
            __RPC__in IEVRFilterConfigEx * This,
                        __RPC__out DWORD *pdwConfigFlags);
        END_INTERFACE
    } IEVRFilterConfigExVtbl;
    interface IEVRFilterConfigEx
    {
        CONST_VTBL struct IEVRFilterConfigExVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetNumberOfStreams(This,dwMaxStreams) )
    ( (This)->lpVtbl -> GetNumberOfStreams(This,pdwMaxStreams) )
    ( (This)->lpVtbl -> SetConfigPrefs(This,dwConfigFlags) )
    ( (This)->lpVtbl -> GetConfigPrefs(This,pdwConfigFlags) )
typedef
enum _MF_SERVICE_LOOKUP_TYPE
    {
        MF_SERVICE_LOOKUP_UPSTREAM = 0,
        MF_SERVICE_LOOKUP_UPSTREAM_DIRECT = ( MF_SERVICE_LOOKUP_UPSTREAM + 1 ) ,
        MF_SERVICE_LOOKUP_DOWNSTREAM = ( MF_SERVICE_LOOKUP_UPSTREAM_DIRECT + 1 ) ,
        MF_SERVICE_LOOKUP_DOWNSTREAM_DIRECT = ( MF_SERVICE_LOOKUP_DOWNSTREAM + 1 ) ,
        MF_SERVICE_LOOKUP_ALL = ( MF_SERVICE_LOOKUP_DOWNSTREAM_DIRECT + 1 ) ,
        MF_SERVICE_LOOKUP_GLOBAL = ( MF_SERVICE_LOOKUP_ALL + 1 )
    } MF_SERVICE_LOOKUP_TYPE;
extern RPC_IF_HANDLE __MIDL_itf_evr_0000_0010_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_evr_0000_0010_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFTopologyServiceLookup;
    typedef struct IMFTopologyServiceLookupVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFTopologyServiceLookup * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFTopologyServiceLookup * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFTopologyServiceLookup * This);
        HRESULT ( STDMETHODCALLTYPE *LookupService )(
            IMFTopologyServiceLookup * This,
                       MF_SERVICE_LOOKUP_TYPE Type,
                       DWORD dwIndex,
                       REFGUID guidService,
                       REFIID riid,
            _Out_writes_to_(1,*pnObjects) LPVOID *ppvObjects,
            _Inout_ DWORD *pnObjects);
        END_INTERFACE
    } IMFTopologyServiceLookupVtbl;
    interface IMFTopologyServiceLookup
    {
        CONST_VTBL struct IMFTopologyServiceLookupVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> LookupService(This,Type,dwIndex,guidService,riid,ppvObjects,pnObjects) )
EXTERN_C const IID IID_IMFTopologyServiceLookupClient;
    typedef struct IMFTopologyServiceLookupClientVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFTopologyServiceLookupClient * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFTopologyServiceLookupClient * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFTopologyServiceLookupClient * This);
        HRESULT ( STDMETHODCALLTYPE *InitServicePointers )(
            IMFTopologyServiceLookupClient * This,
            _In_ IMFTopologyServiceLookup *pLookup);
        HRESULT ( STDMETHODCALLTYPE *ReleaseServicePointers )(
            IMFTopologyServiceLookupClient * This);
        END_INTERFACE
    } IMFTopologyServiceLookupClientVtbl;
    interface IMFTopologyServiceLookupClient
    {
        CONST_VTBL struct IMFTopologyServiceLookupClientVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> InitServicePointers(This,pLookup) )
    ( (This)->lpVtbl -> ReleaseServicePointers(This) )
EXTERN_C const IID IID_IEVRTrustedVideoPlugin;
    typedef struct IEVRTrustedVideoPluginVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IEVRTrustedVideoPlugin * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IEVRTrustedVideoPlugin * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IEVRTrustedVideoPlugin * This);
        HRESULT ( STDMETHODCALLTYPE *IsInTrustedVideoMode )(
            IEVRTrustedVideoPlugin * This,
                        BOOL *pYes);
        HRESULT ( STDMETHODCALLTYPE *CanConstrict )(
            IEVRTrustedVideoPlugin * This,
                        BOOL *pYes);
        HRESULT ( STDMETHODCALLTYPE *SetConstriction )(
            IEVRTrustedVideoPlugin * This,
            DWORD dwKPix);
        HRESULT ( STDMETHODCALLTYPE *DisableImageExport )(
            IEVRTrustedVideoPlugin * This,
            BOOL bDisable);
        END_INTERFACE
    } IEVRTrustedVideoPluginVtbl;
    interface IEVRTrustedVideoPlugin
    {
        CONST_VTBL struct IEVRTrustedVideoPluginVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> IsInTrustedVideoMode(This,pYes) )
    ( (This)->lpVtbl -> CanConstrict(This,pYes) )
    ( (This)->lpVtbl -> SetConstriction(This,dwKPix) )
    ( (This)->lpVtbl -> DisableImageExport(This,bDisable) )
EVRPUBLIC(MFCreateVideoPresenter)(
    _In_opt_ IUnknown * pOwner,
    REFIID riidDevice,
    REFIID riid,
    _Outptr_result_maybenull_ void ** ppVideoPresenter
    );
EVRPUBLIC(MFCreateVideoMixer)(
    _In_opt_ IUnknown * pOwner,
    REFIID riidDevice,
    REFIID riid,
    _Outptr_ void ** ppv
    );
EVRPUBLIC(MFCreateVideoMixerAndPresenter)(
    _In_opt_ IUnknown * pMixerOwner,
    _In_opt_ IUnknown * pPresenterOwner,
    REFIID riidMixer,
    _Outptr_ void ** ppvVideoMixer,
    REFIID riidPresenter,
    _Outptr_ void ** ppvVideoPresenter
    );
EVRPUBLIC(MFCreateVideoRenderer)(
    REFIID riidRenderer,
    _Outptr_result_maybenull_ void ** ppVideoRenderer
    );
EVRPUBLIC(MFCreateVideoSampleFromSurface)(
    _In_ IUnknown* pUnkSurface,
    _Out_ IMFSample** ppSample
    );
EVRPUBLIC(MFCreateVideoSampleAllocator)(
    _In_ REFIID riid,
    _Outptr_ void** ppSampleAllocator
    );
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_evr_0000_0013_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_evr_0000_0013_v0_0_s_ifspec;
unsigned long __RPC_USER HWND_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HWND * );
void __RPC_USER HWND_UserFree( __RPC__in unsigned long *, __RPC__in HWND * );
unsigned long __RPC_USER HWND_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HWND * );
void __RPC_USER HWND_UserFree64( __RPC__in unsigned long *, __RPC__in HWND * );
}

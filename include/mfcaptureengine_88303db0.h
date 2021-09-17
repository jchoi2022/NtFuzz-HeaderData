#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IMFCaptureEngineOnEventCallback IMFCaptureEngineOnEventCallback;
typedef interface IMFCaptureEngineOnSampleCallback IMFCaptureEngineOnSampleCallback;
typedef interface IMFCaptureSink IMFCaptureSink;
typedef interface IMFCaptureRecordSink IMFCaptureRecordSink;
typedef interface IMFCapturePreviewSink IMFCapturePreviewSink;
typedef interface IMFCapturePhotoSink IMFCapturePhotoSink;
typedef interface IMFCaptureSource IMFCaptureSource;
typedef interface IMFCaptureEngine IMFCaptureEngine;
typedef interface IMFCaptureEngineClassFactory IMFCaptureEngineClassFactory;
typedef interface IMFCaptureEngineOnSampleCallback2 IMFCaptureEngineOnSampleCallback2;
typedef interface IMFCaptureSink2 IMFCaptureSink2;
#include "mfobjects.h"
#include "mfidl.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef struct MFVideoNormalizedRect
    {
    float left;
    float top;
    float right;
    float bottom;
    } MFVideoNormalizedRect;
typedef
enum MF_CAPTURE_ENGINE_DEVICE_TYPE
    {
        MF_CAPTURE_ENGINE_DEVICE_TYPE_AUDIO = 0,
        MF_CAPTURE_ENGINE_DEVICE_TYPE_VIDEO = 0x1
    } MF_CAPTURE_ENGINE_DEVICE_TYPE;
typedef
enum MF_CAPTURE_ENGINE_SINK_TYPE
    {
        MF_CAPTURE_ENGINE_SINK_TYPE_RECORD = 0,
        MF_CAPTURE_ENGINE_SINK_TYPE_PREVIEW = 0x1,
        MF_CAPTURE_ENGINE_SINK_TYPE_PHOTO = 0x2
    } MF_CAPTURE_ENGINE_SINK_TYPE;
enum __MIDL___MIDL_itf_mfcaptureengine_0000_0000_0001
    {
        MF_CAPTURE_ENGINE_PREFERRED_SOURCE_STREAM_FOR_VIDEO_PREVIEW = 0xfffffffa,
        MF_CAPTURE_ENGINE_PREFERRED_SOURCE_STREAM_FOR_VIDEO_RECORD = 0xfffffff9,
        MF_CAPTURE_ENGINE_PREFERRED_SOURCE_STREAM_FOR_PHOTO = 0xfffffff8,
        MF_CAPTURE_ENGINE_PREFERRED_SOURCE_STREAM_FOR_AUDIO = 0xfffffff7,
        MF_CAPTURE_ENGINE_MEDIASOURCE = 0xffffffff
    } ;
typedef
enum MF_CAPTURE_ENGINE_STREAM_CATEGORY
    {
        MF_CAPTURE_ENGINE_STREAM_CATEGORY_VIDEO_PREVIEW = 0,
        MF_CAPTURE_ENGINE_STREAM_CATEGORY_VIDEO_CAPTURE = 0x1,
        MF_CAPTURE_ENGINE_STREAM_CATEGORY_PHOTO_INDEPENDENT = 0x2,
        MF_CAPTURE_ENGINE_STREAM_CATEGORY_PHOTO_DEPENDENT = 0x3,
        MF_CAPTURE_ENGINE_STREAM_CATEGORY_AUDIO = 0x4,
        MF_CAPTURE_ENGINE_STREAM_CATEGORY_UNSUPPORTED = 0x5
    } MF_CAPTURE_ENGINE_STREAM_CATEGORY;
typedef
enum MF_CAPTURE_ENGINE_MEDIA_CATEGORY_TYPE
    {
        MF_CAPTURE_ENGINE_MEDIA_CATEGORY_TYPE_OTHER = 0,
        MF_CAPTURE_ENGINE_MEDIA_CATEGORY_TYPE_COMMUNICATIONS = 1,
        MF_CAPTURE_ENGINE_MEDIA_CATEGORY_TYPE_MEDIA = 2,
        MF_CAPTURE_ENGINE_MEDIA_CATEGORY_TYPE_GAMECHAT = 3,
        MF_CAPTURE_ENGINE_MEDIA_CATEGORY_TYPE_SPEECH = 4
    } MF_CAPTURE_ENGINE_MEDIA_CATEGORY_TYPE;
typedef
enum MF_CAPTURE_ENGINE_AUDIO_PROCESSING_MODE
    {
        MF_CAPTURE_ENGINE_AUDIO_PROCESSING_DEFAULT = 0,
        MF_CAPTURE_ENGINE_AUDIO_PROCESSING_RAW = 1
    } MF_CAPTURE_ENGINE_AUDIO_PROCESSING_MODE;
EXTERN_GUID( MF_CAPTURE_ENGINE_INITIALIZED, 0x219992bc, 0xcf92, 0x4531, 0xa1, 0xae, 0x96, 0xe1, 0xe8, 0x86, 0xc8, 0xf1 );
EXTERN_GUID( MF_CAPTURE_ENGINE_PREVIEW_STARTED, 0xa416df21, 0xf9d3, 0x4a74, 0x99, 0x1b, 0xb8, 0x17, 0x29, 0x89, 0x52, 0xc4 );
EXTERN_GUID( MF_CAPTURE_ENGINE_PREVIEW_STOPPED, 0x13d5143c, 0x1edd, 0x4e50,0xa2, 0xef, 0x35, 0x0a, 0x47, 0x67, 0x80, 0x60 );
EXTERN_GUID( MF_CAPTURE_ENGINE_RECORD_STARTED, 0xac2b027b, 0xddf9, 0x48a0,0x89, 0xbe, 0x38, 0xab, 0x35, 0xef, 0x45, 0xc0 );
EXTERN_GUID( MF_CAPTURE_ENGINE_RECORD_STOPPED, 0x55e5200a, 0xf98f, 0x4c0d, 0xa9, 0xec, 0x9e, 0xb2, 0x5e, 0xd3, 0xd7, 0x73 );
EXTERN_GUID( MF_CAPTURE_ENGINE_PHOTO_TAKEN, 0x3c50c445, 0x7304, 0x48eb,0x86, 0x5d, 0xbb, 0xa1, 0x9b, 0xa3, 0xaf, 0x5c );
EXTERN_GUID( MF_CAPTURE_SOURCE_CURRENT_DEVICE_MEDIA_TYPE_SET, 0xe7e75e4c, 0x039c, 0x4410, 0x81, 0x5b, 0x87, 0x41, 0x30, 0x7b, 0x63, 0xaa );
EXTERN_GUID( MF_CAPTURE_ENGINE_ERROR, 0x46b89fc6, 0x33cc, 0x4399,0x9d, 0xad, 0x78, 0x4d, 0xe7, 0x7d, 0x58, 0x7c );
EXTERN_GUID( MF_CAPTURE_ENGINE_EFFECT_ADDED, 0xaa8dc7b5, 0xa048, 0x4e13, 0x8e, 0xbe, 0xf2, 0x3c, 0x46, 0xc8, 0x30, 0xc1 );
EXTERN_GUID( MF_CAPTURE_ENGINE_EFFECT_REMOVED, 0xc6e8db07, 0xfb09, 0x4a48, 0x89, 0xc6, 0xbf, 0x92, 0xa0, 0x42, 0x22, 0xc9);
EXTERN_GUID( MF_CAPTURE_ENGINE_ALL_EFFECTS_REMOVED, 0xfded7521, 0x8ed8, 0x431a, 0xa9, 0x6b, 0xf3, 0xe2, 0x56, 0x5e, 0x98, 0x1c);
EXTERN_GUID( MF_CAPTURE_SINK_PREPARED, 0x7BFCE257, 0x12B1, 0x4409, 0x8C, 0x34, 0xD4, 0x45, 0xDA, 0xAB, 0x75, 0x78);
EXTERN_GUID( MF_CAPTURE_ENGINE_OUTPUT_MEDIA_TYPE_SET, 0xcaaad994, 0x83ec, 0x45e9,0xa3, 0x0a, 0x1f, 0x20, 0xaa, 0xdb, 0x98, 0x31);
EXTERN_GUID(MF_CAPTURE_ENGINE_CAMERA_STREAM_BLOCKED, 0xA4209417, 0x8D39, 0x46F3, 0xB7, 0x59, 0x59, 0x12, 0x52, 0x8F, 0x42, 0x07);
EXTERN_GUID(MF_CAPTURE_ENGINE_CAMERA_STREAM_UNBLOCKED, 0x9BE9EEF0, 0xCDAF, 0x4717, 0x85, 0x64, 0x83, 0x4A, 0xAE, 0x66, 0x41, 0x5C);
EXTERN_GUID( MF_CAPTURE_ENGINE_D3D_MANAGER, 0x76e25e7b, 0xd595, 0x4283, 0x96, 0x2c, 0xc5, 0x94, 0xaf, 0xd7, 0x8d, 0xdf);
EXTERN_GUID( MF_CAPTURE_ENGINE_RECORD_SINK_VIDEO_MAX_UNPROCESSED_SAMPLES, 0xb467f705, 0x7913, 0x4894, 0x9d, 0x42, 0xa2, 0x15, 0xfe, 0xa2, 0x3d, 0xa9);
EXTERN_GUID( MF_CAPTURE_ENGINE_RECORD_SINK_AUDIO_MAX_UNPROCESSED_SAMPLES, 0x1cddb141, 0xa7f4, 0x4d58, 0x98, 0x96, 0x4d, 0x15, 0xa5, 0x3c, 0x4e, 0xfe);
EXTERN_GUID(MF_CAPTURE_ENGINE_RECORD_SINK_VIDEO_MAX_PROCESSED_SAMPLES, 0xe7b4a49e, 0x382c, 0x4aef, 0xa9, 0x46, 0xae, 0xd5, 0x49, 0xb, 0x71, 0x11);
EXTERN_GUID(MF_CAPTURE_ENGINE_RECORD_SINK_AUDIO_MAX_PROCESSED_SAMPLES, 0x9896e12a, 0xf707, 0x4500, 0xb6, 0xbd, 0xdb, 0x8e, 0xb8, 0x10, 0xb5, 0xf);
EXTERN_GUID( MF_CAPTURE_ENGINE_USE_AUDIO_DEVICE_ONLY, 0x1c8077da, 0x8466, 0x4dc4, 0x8b, 0x8e, 0x27, 0x6b, 0x3f, 0x85, 0x92, 0x3b);
EXTERN_GUID( MF_CAPTURE_ENGINE_USE_VIDEO_DEVICE_ONLY, 0x7e025171, 0xcf32, 0x4f2e, 0x8f, 0x19, 0x41, 0x5, 0x77, 0xb7, 0x3a, 0x66);
EXTERN_GUID(MF_CAPTURE_ENGINE_DISABLE_HARDWARE_TRANSFORMS, 0xb7c42a6b, 0x3207, 0x4495, 0xb4, 0xe7, 0x81, 0xf9, 0xc3, 0x5d, 0x59, 0x91);
EXTERN_GUID(MF_CAPTURE_ENGINE_DISABLE_DXVA, 0xf9818862, 0x179d, 0x433f, 0xa3, 0x2f, 0x74, 0xcb, 0xcf, 0x74, 0x46, 0x6d);
EXTERN_GUID(MF_CAPTURE_ENGINE_MEDIASOURCE_CONFIG, 0xbc6989d2, 0x0fc1, 0x46e1, 0xa7, 0x4f, 0xef, 0xd3, 0x6b, 0xc7, 0x88, 0xde);
EXTERN_GUID(MF_CAPTURE_ENGINE_DECODER_MFT_FIELDOFUSE_UNLOCK_Attribute, 0x2b8ad2e8, 0x7acb, 0x4321, 0xa6, 0x06, 0x32, 0x5c, 0x42, 0x49, 0xf4, 0xfc);
EXTERN_GUID(MF_CAPTURE_ENGINE_ENCODER_MFT_FIELDOFUSE_UNLOCK_Attribute, 0x54c63a00, 0x78d5, 0x422f, 0xaa, 0x3e, 0x5e, 0x99, 0xac, 0x64, 0x92, 0x69);
EXTERN_GUID(MF_CAPTURE_ENGINE_ENABLE_CAMERA_STREAMSTATE_NOTIFICATION, 0x4C808E9D, 0xAAED, 0x4713, 0x90, 0xFB, 0xCB, 0x24, 0x06, 0x4A, 0xB8, 0xDA);
EXTERN_GUID(MF_CAPTURE_ENGINE_MEDIA_CATEGORY, 0x8e3f5bd5, 0xdbbf, 0x42f0, 0x85, 0x42, 0xd0, 0x7a, 0x39, 0x71, 0x76, 0x2a);
EXTERN_GUID(MF_CAPTURE_ENGINE_AUDIO_PROCESSING, 0x10f1be5e, 0x7e11, 0x410b, 0x97, 0x3d, 0xf4, 0xb6, 0x10, 0x90, 0x0, 0xfe);
EXTERN_GUID( MF_CAPTURE_ENGINE_EVENT_GENERATOR_GUID, 0xabfa8ad5, 0xfc6d, 0x4911, 0x87, 0xe0, 0x96, 0x19, 0x45, 0xf8, 0xf7, 0xce);
EXTERN_GUID( MF_CAPTURE_ENGINE_EVENT_STREAM_INDEX, 0x82697f44, 0xb1cf, 0x42eb, 0x97, 0x53, 0xf8, 0x6d, 0x64, 0x9c, 0x88, 0x65);
EXTERN_GUID(MF_CAPTURE_ENGINE_SELECTEDCAMERAPROFILE, 0x03160B7E, 0x1C6F, 0x4DB2, 0xAD, 0x56, 0xA7, 0xC4, 0x30, 0xF8, 0x23, 0x92);
EXTERN_GUID(MF_CAPTURE_ENGINE_SELECTEDCAMERAPROFILE_INDEX, 0x3CE88613, 0x2214, 0x46C3, 0xB4, 0x17, 0x82, 0xF8, 0xA3, 0x13, 0xC9, 0xC3);
extern RPC_IF_HANDLE __MIDL_itf_mfcaptureengine_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfcaptureengine_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFCaptureEngineOnEventCallback;
    typedef struct IMFCaptureEngineOnEventCallbackVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFCaptureEngineOnEventCallback * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFCaptureEngineOnEventCallback * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFCaptureEngineOnEventCallback * This);
        HRESULT ( STDMETHODCALLTYPE *OnEvent )(
            IMFCaptureEngineOnEventCallback * This,
            _In_ IMFMediaEvent *pEvent);
        END_INTERFACE
    } IMFCaptureEngineOnEventCallbackVtbl;
    interface IMFCaptureEngineOnEventCallback
    {
        CONST_VTBL struct IMFCaptureEngineOnEventCallbackVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnEvent(This,pEvent) )
EXTERN_C const IID IID_IMFCaptureEngineOnSampleCallback;
    typedef struct IMFCaptureEngineOnSampleCallbackVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFCaptureEngineOnSampleCallback * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFCaptureEngineOnSampleCallback * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFCaptureEngineOnSampleCallback * This);
        HRESULT ( STDMETHODCALLTYPE *OnSample )(
            IMFCaptureEngineOnSampleCallback * This,
            _In_opt_ IMFSample *pSample);
        END_INTERFACE
    } IMFCaptureEngineOnSampleCallbackVtbl;
    interface IMFCaptureEngineOnSampleCallback
    {
        CONST_VTBL struct IMFCaptureEngineOnSampleCallbackVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnSample(This,pSample) )
EXTERN_C const IID IID_IMFCaptureSink;
    typedef struct IMFCaptureSinkVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFCaptureSink * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFCaptureSink * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFCaptureSink * This);
        HRESULT ( STDMETHODCALLTYPE *GetOutputMediaType )(
            IMFCaptureSink * This,
            _In_ DWORD dwSinkStreamIndex,
            _Out_opt_ IMFMediaType **ppMediaType);
        HRESULT ( STDMETHODCALLTYPE *GetService )(
            IMFCaptureSink * This,
            _In_ DWORD dwSinkStreamIndex,
            _In_ REFGUID rguidService,
            _In_ REFIID riid,
            _Out_opt_ IUnknown **ppUnknown);
        HRESULT ( STDMETHODCALLTYPE *AddStream )(
            IMFCaptureSink * This,
            _In_ DWORD dwSourceStreamIndex,
            _In_ IMFMediaType *pMediaType,
            _In_opt_ IMFAttributes *pAttributes,
            _Out_opt_ DWORD *pdwSinkStreamIndex);
        HRESULT ( STDMETHODCALLTYPE *Prepare )(
            IMFCaptureSink * This);
        HRESULT ( STDMETHODCALLTYPE *RemoveAllStreams )(
            IMFCaptureSink * This);
        END_INTERFACE
    } IMFCaptureSinkVtbl;
    interface IMFCaptureSink
    {
        CONST_VTBL struct IMFCaptureSinkVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetOutputMediaType(This,dwSinkStreamIndex,ppMediaType) )
    ( (This)->lpVtbl -> GetService(This,dwSinkStreamIndex,rguidService,riid,ppUnknown) )
    ( (This)->lpVtbl -> AddStream(This,dwSourceStreamIndex,pMediaType,pAttributes,pdwSinkStreamIndex) )
    ( (This)->lpVtbl -> Prepare(This) )
    ( (This)->lpVtbl -> RemoveAllStreams(This) )
EXTERN_C const IID IID_IMFCaptureRecordSink;
    typedef struct IMFCaptureRecordSinkVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFCaptureRecordSink * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFCaptureRecordSink * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFCaptureRecordSink * This);
        HRESULT ( STDMETHODCALLTYPE *GetOutputMediaType )(
            IMFCaptureRecordSink * This,
            _In_ DWORD dwSinkStreamIndex,
            _Out_opt_ IMFMediaType **ppMediaType);
        HRESULT ( STDMETHODCALLTYPE *GetService )(
            IMFCaptureRecordSink * This,
            _In_ DWORD dwSinkStreamIndex,
            _In_ REFGUID rguidService,
            _In_ REFIID riid,
            _Out_opt_ IUnknown **ppUnknown);
        HRESULT ( STDMETHODCALLTYPE *AddStream )(
            IMFCaptureRecordSink * This,
            _In_ DWORD dwSourceStreamIndex,
            _In_ IMFMediaType *pMediaType,
            _In_opt_ IMFAttributes *pAttributes,
            _Out_opt_ DWORD *pdwSinkStreamIndex);
        HRESULT ( STDMETHODCALLTYPE *Prepare )(
            IMFCaptureRecordSink * This);
        HRESULT ( STDMETHODCALLTYPE *RemoveAllStreams )(
            IMFCaptureRecordSink * This);
        HRESULT ( STDMETHODCALLTYPE *SetOutputByteStream )(
            IMFCaptureRecordSink * This,
            _In_ IMFByteStream *pByteStream,
            _In_ REFGUID guidContainerType);
        HRESULT ( STDMETHODCALLTYPE *SetOutputFileName )(
            IMFCaptureRecordSink * This,
            _In_ LPCWSTR fileName);
        HRESULT ( STDMETHODCALLTYPE *SetSampleCallback )(
            IMFCaptureRecordSink * This,
            _In_ DWORD dwStreamSinkIndex,
            _In_ IMFCaptureEngineOnSampleCallback *pCallback);
        HRESULT ( STDMETHODCALLTYPE *SetCustomSink )(
            IMFCaptureRecordSink * This,
            _In_ IMFMediaSink *pMediaSink);
        HRESULT ( STDMETHODCALLTYPE *GetRotation )(
            IMFCaptureRecordSink * This,
            _In_ DWORD dwStreamIndex,
            _Out_ DWORD *pdwRotationValue);
        HRESULT ( STDMETHODCALLTYPE *SetRotation )(
            IMFCaptureRecordSink * This,
            _In_ DWORD dwStreamIndex,
            _In_ DWORD dwRotationValue);
        END_INTERFACE
    } IMFCaptureRecordSinkVtbl;
    interface IMFCaptureRecordSink
    {
        CONST_VTBL struct IMFCaptureRecordSinkVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetOutputMediaType(This,dwSinkStreamIndex,ppMediaType) )
    ( (This)->lpVtbl -> GetService(This,dwSinkStreamIndex,rguidService,riid,ppUnknown) )
    ( (This)->lpVtbl -> AddStream(This,dwSourceStreamIndex,pMediaType,pAttributes,pdwSinkStreamIndex) )
    ( (This)->lpVtbl -> Prepare(This) )
    ( (This)->lpVtbl -> RemoveAllStreams(This) )
    ( (This)->lpVtbl -> SetOutputByteStream(This,pByteStream,guidContainerType) )
    ( (This)->lpVtbl -> SetOutputFileName(This,fileName) )
    ( (This)->lpVtbl -> SetSampleCallback(This,dwStreamSinkIndex,pCallback) )
    ( (This)->lpVtbl -> SetCustomSink(This,pMediaSink) )
    ( (This)->lpVtbl -> GetRotation(This,dwStreamIndex,pdwRotationValue) )
    ( (This)->lpVtbl -> SetRotation(This,dwStreamIndex,dwRotationValue) )
EXTERN_C const IID IID_IMFCapturePreviewSink;
    typedef struct IMFCapturePreviewSinkVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFCapturePreviewSink * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFCapturePreviewSink * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFCapturePreviewSink * This);
        HRESULT ( STDMETHODCALLTYPE *GetOutputMediaType )(
            IMFCapturePreviewSink * This,
            _In_ DWORD dwSinkStreamIndex,
            _Out_opt_ IMFMediaType **ppMediaType);
        HRESULT ( STDMETHODCALLTYPE *GetService )(
            IMFCapturePreviewSink * This,
            _In_ DWORD dwSinkStreamIndex,
            _In_ REFGUID rguidService,
            _In_ REFIID riid,
            _Out_opt_ IUnknown **ppUnknown);
        HRESULT ( STDMETHODCALLTYPE *AddStream )(
            IMFCapturePreviewSink * This,
            _In_ DWORD dwSourceStreamIndex,
            _In_ IMFMediaType *pMediaType,
            _In_opt_ IMFAttributes *pAttributes,
            _Out_opt_ DWORD *pdwSinkStreamIndex);
        HRESULT ( STDMETHODCALLTYPE *Prepare )(
            IMFCapturePreviewSink * This);
        HRESULT ( STDMETHODCALLTYPE *RemoveAllStreams )(
            IMFCapturePreviewSink * This);
        HRESULT ( STDMETHODCALLTYPE *SetRenderHandle )(
            IMFCapturePreviewSink * This,
            _In_ HANDLE handle);
        HRESULT ( STDMETHODCALLTYPE *SetRenderSurface )(
            IMFCapturePreviewSink * This,
            _In_ IUnknown *pSurface);
        HRESULT ( STDMETHODCALLTYPE *UpdateVideo )(
            IMFCapturePreviewSink * This,
            _In_opt_ const MFVideoNormalizedRect *pSrc,
            _In_opt_ const RECT *pDst,
            _In_opt_ const COLORREF *pBorderClr);
        HRESULT ( STDMETHODCALLTYPE *SetSampleCallback )(
            IMFCapturePreviewSink * This,
            _In_ DWORD dwStreamSinkIndex,
            _In_ IMFCaptureEngineOnSampleCallback *pCallback);
        HRESULT ( STDMETHODCALLTYPE *GetMirrorState )(
            IMFCapturePreviewSink * This,
            _Out_ BOOL *pfMirrorState);
        HRESULT ( STDMETHODCALLTYPE *SetMirrorState )(
            IMFCapturePreviewSink * This,
            _In_ BOOL fMirrorState);
        HRESULT ( STDMETHODCALLTYPE *GetRotation )(
            IMFCapturePreviewSink * This,
            _In_ DWORD dwStreamIndex,
            _Out_ DWORD *pdwRotationValue);
        HRESULT ( STDMETHODCALLTYPE *SetRotation )(
            IMFCapturePreviewSink * This,
            _In_ DWORD dwStreamIndex,
            _In_ DWORD dwRotationValue);
        HRESULT ( STDMETHODCALLTYPE *SetCustomSink )(
            IMFCapturePreviewSink * This,
            _In_ IMFMediaSink *pMediaSink);
        END_INTERFACE
    } IMFCapturePreviewSinkVtbl;
    interface IMFCapturePreviewSink
    {
        CONST_VTBL struct IMFCapturePreviewSinkVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetOutputMediaType(This,dwSinkStreamIndex,ppMediaType) )
    ( (This)->lpVtbl -> GetService(This,dwSinkStreamIndex,rguidService,riid,ppUnknown) )
    ( (This)->lpVtbl -> AddStream(This,dwSourceStreamIndex,pMediaType,pAttributes,pdwSinkStreamIndex) )
    ( (This)->lpVtbl -> Prepare(This) )
    ( (This)->lpVtbl -> RemoveAllStreams(This) )
    ( (This)->lpVtbl -> SetRenderHandle(This,handle) )
    ( (This)->lpVtbl -> SetRenderSurface(This,pSurface) )
    ( (This)->lpVtbl -> UpdateVideo(This,pSrc,pDst,pBorderClr) )
    ( (This)->lpVtbl -> SetSampleCallback(This,dwStreamSinkIndex,pCallback) )
    ( (This)->lpVtbl -> GetMirrorState(This,pfMirrorState) )
    ( (This)->lpVtbl -> SetMirrorState(This,fMirrorState) )
    ( (This)->lpVtbl -> GetRotation(This,dwStreamIndex,pdwRotationValue) )
    ( (This)->lpVtbl -> SetRotation(This,dwStreamIndex,dwRotationValue) )
    ( (This)->lpVtbl -> SetCustomSink(This,pMediaSink) )
EXTERN_C const IID IID_IMFCapturePhotoSink;
    typedef struct IMFCapturePhotoSinkVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFCapturePhotoSink * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFCapturePhotoSink * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFCapturePhotoSink * This);
        HRESULT ( STDMETHODCALLTYPE *GetOutputMediaType )(
            IMFCapturePhotoSink * This,
            _In_ DWORD dwSinkStreamIndex,
            _Out_opt_ IMFMediaType **ppMediaType);
        HRESULT ( STDMETHODCALLTYPE *GetService )(
            IMFCapturePhotoSink * This,
            _In_ DWORD dwSinkStreamIndex,
            _In_ REFGUID rguidService,
            _In_ REFIID riid,
            _Out_opt_ IUnknown **ppUnknown);
        HRESULT ( STDMETHODCALLTYPE *AddStream )(
            IMFCapturePhotoSink * This,
            _In_ DWORD dwSourceStreamIndex,
            _In_ IMFMediaType *pMediaType,
            _In_opt_ IMFAttributes *pAttributes,
            _Out_opt_ DWORD *pdwSinkStreamIndex);
        HRESULT ( STDMETHODCALLTYPE *Prepare )(
            IMFCapturePhotoSink * This);
        HRESULT ( STDMETHODCALLTYPE *RemoveAllStreams )(
            IMFCapturePhotoSink * This);
        HRESULT ( STDMETHODCALLTYPE *SetOutputFileName )(
            IMFCapturePhotoSink * This,
            _In_ LPCWSTR fileName);
        HRESULT ( STDMETHODCALLTYPE *SetSampleCallback )(
            IMFCapturePhotoSink * This,
            _In_ IMFCaptureEngineOnSampleCallback *pCallback);
        HRESULT ( STDMETHODCALLTYPE *SetOutputByteStream )(
            IMFCapturePhotoSink * This,
            _In_ IMFByteStream *pByteStream);
        END_INTERFACE
    } IMFCapturePhotoSinkVtbl;
    interface IMFCapturePhotoSink
    {
        CONST_VTBL struct IMFCapturePhotoSinkVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetOutputMediaType(This,dwSinkStreamIndex,ppMediaType) )
    ( (This)->lpVtbl -> GetService(This,dwSinkStreamIndex,rguidService,riid,ppUnknown) )
    ( (This)->lpVtbl -> AddStream(This,dwSourceStreamIndex,pMediaType,pAttributes,pdwSinkStreamIndex) )
    ( (This)->lpVtbl -> Prepare(This) )
    ( (This)->lpVtbl -> RemoveAllStreams(This) )
    ( (This)->lpVtbl -> SetOutputFileName(This,fileName) )
    ( (This)->lpVtbl -> SetSampleCallback(This,pCallback) )
    ( (This)->lpVtbl -> SetOutputByteStream(This,pByteStream) )
EXTERN_C const IID IID_IMFCaptureSource;
    typedef struct IMFCaptureSourceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFCaptureSource * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFCaptureSource * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFCaptureSource * This);
        HRESULT ( STDMETHODCALLTYPE *GetCaptureDeviceSource )(
            IMFCaptureSource * This,
            _In_ MF_CAPTURE_ENGINE_DEVICE_TYPE mfCaptureEngineDeviceType,
            _Out_opt_ IMFMediaSource **ppMediaSource);
        HRESULT ( STDMETHODCALLTYPE *GetCaptureDeviceActivate )(
            IMFCaptureSource * This,
            _In_ MF_CAPTURE_ENGINE_DEVICE_TYPE mfCaptureEngineDeviceType,
            _Out_opt_ IMFActivate **ppActivate);
        HRESULT ( STDMETHODCALLTYPE *GetService )(
            IMFCaptureSource * This,
            _In_ REFIID rguidService,
            _In_ REFIID riid,
            _Out_opt_ IUnknown **ppUnknown);
        HRESULT ( STDMETHODCALLTYPE *AddEffect )(
            IMFCaptureSource * This,
            _In_ DWORD dwSourceStreamIndex,
            _In_ IUnknown *pUnknown);
        HRESULT ( STDMETHODCALLTYPE *RemoveEffect )(
            IMFCaptureSource * This,
            _In_ DWORD dwSourceStreamIndex,
            _In_ IUnknown *pUnknown);
        HRESULT ( STDMETHODCALLTYPE *RemoveAllEffects )(
            IMFCaptureSource * This,
            _In_ DWORD dwSourceStreamIndex);
        HRESULT ( STDMETHODCALLTYPE *GetAvailableDeviceMediaType )(
            IMFCaptureSource * This,
            _In_ DWORD dwSourceStreamIndex,
            _In_ DWORD dwMediaTypeIndex,
            _Out_opt_ IMFMediaType **ppMediaType);
        HRESULT ( STDMETHODCALLTYPE *SetCurrentDeviceMediaType )(
            IMFCaptureSource * This,
            _In_ DWORD dwSourceStreamIndex,
            _In_ IMFMediaType *pMediaType);
        HRESULT ( STDMETHODCALLTYPE *GetCurrentDeviceMediaType )(
            IMFCaptureSource * This,
            _In_ DWORD dwSourceStreamIndex,
            _Out_ IMFMediaType **ppMediaType);
        HRESULT ( STDMETHODCALLTYPE *GetDeviceStreamCount )(
            IMFCaptureSource * This,
            _Out_ DWORD *pdwStreamCount);
        HRESULT ( STDMETHODCALLTYPE *GetDeviceStreamCategory )(
            IMFCaptureSource * This,
            _In_ DWORD dwSourceStreamIndex,
            _Out_ MF_CAPTURE_ENGINE_STREAM_CATEGORY *pStreamCategory);
        HRESULT ( STDMETHODCALLTYPE *GetMirrorState )(
            IMFCaptureSource * This,
            _In_ DWORD dwStreamIndex,
            _Out_ BOOL *pfMirrorState);
        HRESULT ( STDMETHODCALLTYPE *SetMirrorState )(
            IMFCaptureSource * This,
            _In_ DWORD dwStreamIndex,
            _In_ BOOL fMirrorState);
        HRESULT ( STDMETHODCALLTYPE *GetStreamIndexFromFriendlyName )(
            IMFCaptureSource * This,
            _In_ UINT32 uifriendlyName,
            _Out_ DWORD *pdwActualStreamIndex);
        END_INTERFACE
    } IMFCaptureSourceVtbl;
    interface IMFCaptureSource
    {
        CONST_VTBL struct IMFCaptureSourceVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetCaptureDeviceSource(This,mfCaptureEngineDeviceType,ppMediaSource) )
    ( (This)->lpVtbl -> GetCaptureDeviceActivate(This,mfCaptureEngineDeviceType,ppActivate) )
    ( (This)->lpVtbl -> GetService(This,rguidService,riid,ppUnknown) )
    ( (This)->lpVtbl -> AddEffect(This,dwSourceStreamIndex,pUnknown) )
    ( (This)->lpVtbl -> RemoveEffect(This,dwSourceStreamIndex,pUnknown) )
    ( (This)->lpVtbl -> RemoveAllEffects(This,dwSourceStreamIndex) )
    ( (This)->lpVtbl -> GetAvailableDeviceMediaType(This,dwSourceStreamIndex,dwMediaTypeIndex,ppMediaType) )
    ( (This)->lpVtbl -> SetCurrentDeviceMediaType(This,dwSourceStreamIndex,pMediaType) )
    ( (This)->lpVtbl -> GetCurrentDeviceMediaType(This,dwSourceStreamIndex,ppMediaType) )
    ( (This)->lpVtbl -> GetDeviceStreamCount(This,pdwStreamCount) )
    ( (This)->lpVtbl -> GetDeviceStreamCategory(This,dwSourceStreamIndex,pStreamCategory) )
    ( (This)->lpVtbl -> GetMirrorState(This,dwStreamIndex,pfMirrorState) )
    ( (This)->lpVtbl -> SetMirrorState(This,dwStreamIndex,fMirrorState) )
    ( (This)->lpVtbl -> GetStreamIndexFromFriendlyName(This,uifriendlyName,pdwActualStreamIndex) )
EXTERN_GUID(CLSID_MFCaptureEngine, 0xefce38d3, 0x8914, 0x4674,0xa7, 0xdf, 0xae, 0x1b, 0x3d, 0x65, 0x4b, 0x8a);
extern RPC_IF_HANDLE __MIDL_itf_mfcaptureengine_0000_0007_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfcaptureengine_0000_0007_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFCaptureEngine;
    typedef struct IMFCaptureEngineVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFCaptureEngine * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFCaptureEngine * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFCaptureEngine * This);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            IMFCaptureEngine * This,
            _In_ IMFCaptureEngineOnEventCallback *pEventCallback,
            _In_opt_ IMFAttributes *pAttributes,
            _In_opt_ IUnknown *pAudioSource,
            _In_opt_ IUnknown *pVideoSource);
        HRESULT ( STDMETHODCALLTYPE *StartPreview )(
            IMFCaptureEngine * This);
        HRESULT ( STDMETHODCALLTYPE *StopPreview )(
            IMFCaptureEngine * This);
        HRESULT ( STDMETHODCALLTYPE *StartRecord )(
            IMFCaptureEngine * This);
        HRESULT ( STDMETHODCALLTYPE *StopRecord )(
            IMFCaptureEngine * This,
            _In_ BOOL bFinalize,
            _In_ BOOL bFlushUnprocessedSamples);
        HRESULT ( STDMETHODCALLTYPE *TakePhoto )(
            IMFCaptureEngine * This);
        HRESULT ( STDMETHODCALLTYPE *GetSink )(
            IMFCaptureEngine * This,
            _In_ MF_CAPTURE_ENGINE_SINK_TYPE mfCaptureEngineSinkType,
            _Out_ IMFCaptureSink **ppSink);
        HRESULT ( STDMETHODCALLTYPE *GetSource )(
            IMFCaptureEngine * This,
            _Out_ IMFCaptureSource **ppSource);
        END_INTERFACE
    } IMFCaptureEngineVtbl;
    interface IMFCaptureEngine
    {
        CONST_VTBL struct IMFCaptureEngineVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Initialize(This,pEventCallback,pAttributes,pAudioSource,pVideoSource) )
    ( (This)->lpVtbl -> StartPreview(This) )
    ( (This)->lpVtbl -> StopPreview(This) )
    ( (This)->lpVtbl -> StartRecord(This) )
    ( (This)->lpVtbl -> StopRecord(This,bFinalize,bFlushUnprocessedSamples) )
    ( (This)->lpVtbl -> TakePhoto(This) )
    ( (This)->lpVtbl -> GetSink(This,mfCaptureEngineSinkType,ppSink) )
    ( (This)->lpVtbl -> GetSource(This,ppSource) )
EXTERN_GUID(CLSID_MFCaptureEngineClassFactory, 0xefce38d3, 0x8914, 0x4674,0xa7, 0xdf, 0xae, 0x1b, 0x3d, 0x65, 0x4b, 0x8a);
extern RPC_IF_HANDLE __MIDL_itf_mfcaptureengine_0000_0008_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfcaptureengine_0000_0008_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFCaptureEngineClassFactory;
    typedef struct IMFCaptureEngineClassFactoryVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFCaptureEngineClassFactory * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFCaptureEngineClassFactory * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFCaptureEngineClassFactory * This);
        HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
            IMFCaptureEngineClassFactory * This,
            _In_ REFCLSID clsid,
            _In_ REFIID riid,
            _Out_ LPVOID *ppvObject);
        END_INTERFACE
    } IMFCaptureEngineClassFactoryVtbl;
    interface IMFCaptureEngineClassFactory
    {
        CONST_VTBL struct IMFCaptureEngineClassFactoryVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CreateInstance(This,clsid,riid,ppvObject) )
EXTERN_GUID(MFSampleExtension_DeviceReferenceSystemTime, 0x6523775a, 0xba2d, 0x405f,0xb2, 0xc5, 0x01, 0xff, 0x88, 0xe2, 0xe8, 0xf6);
extern RPC_IF_HANDLE __MIDL_itf_mfcaptureengine_0000_0009_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfcaptureengine_0000_0009_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFCaptureEngineOnSampleCallback2;
    typedef struct IMFCaptureEngineOnSampleCallback2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFCaptureEngineOnSampleCallback2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFCaptureEngineOnSampleCallback2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFCaptureEngineOnSampleCallback2 * This);
        HRESULT ( STDMETHODCALLTYPE *OnSample )(
            IMFCaptureEngineOnSampleCallback2 * This,
            _In_opt_ IMFSample *pSample);
        HRESULT ( STDMETHODCALLTYPE *OnSynchronizedEvent )(
            IMFCaptureEngineOnSampleCallback2 * This,
            _In_ IMFMediaEvent *pEvent);
        END_INTERFACE
    } IMFCaptureEngineOnSampleCallback2Vtbl;
    interface IMFCaptureEngineOnSampleCallback2
    {
        CONST_VTBL struct IMFCaptureEngineOnSampleCallback2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnSample(This,pSample) )
    ( (This)->lpVtbl -> OnSynchronizedEvent(This,pEvent) )
EXTERN_C const IID IID_IMFCaptureSink2;
    typedef struct IMFCaptureSink2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFCaptureSink2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFCaptureSink2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFCaptureSink2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetOutputMediaType )(
            IMFCaptureSink2 * This,
            _In_ DWORD dwSinkStreamIndex,
            _Out_opt_ IMFMediaType **ppMediaType);
        HRESULT ( STDMETHODCALLTYPE *GetService )(
            IMFCaptureSink2 * This,
            _In_ DWORD dwSinkStreamIndex,
            _In_ REFGUID rguidService,
            _In_ REFIID riid,
            _Out_opt_ IUnknown **ppUnknown);
        HRESULT ( STDMETHODCALLTYPE *AddStream )(
            IMFCaptureSink2 * This,
            _In_ DWORD dwSourceStreamIndex,
            _In_ IMFMediaType *pMediaType,
            _In_opt_ IMFAttributes *pAttributes,
            _Out_opt_ DWORD *pdwSinkStreamIndex);
        HRESULT ( STDMETHODCALLTYPE *Prepare )(
            IMFCaptureSink2 * This);
        HRESULT ( STDMETHODCALLTYPE *RemoveAllStreams )(
            IMFCaptureSink2 * This);
        HRESULT ( STDMETHODCALLTYPE *SetOutputMediaType )(
            IMFCaptureSink2 * This,
            _In_ DWORD dwStreamIndex,
            _In_ IMFMediaType *pMediaType,
            _In_opt_ IMFAttributes *pEncodingAttributes);
        END_INTERFACE
    } IMFCaptureSink2Vtbl;
    interface IMFCaptureSink2
    {
        CONST_VTBL struct IMFCaptureSink2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetOutputMediaType(This,dwSinkStreamIndex,ppMediaType) )
    ( (This)->lpVtbl -> GetService(This,dwSinkStreamIndex,rguidService,riid,ppUnknown) )
    ( (This)->lpVtbl -> AddStream(This,dwSourceStreamIndex,pMediaType,pAttributes,pdwSinkStreamIndex) )
    ( (This)->lpVtbl -> Prepare(This) )
    ( (This)->lpVtbl -> RemoveAllStreams(This) )
    ( (This)->lpVtbl -> SetOutputMediaType(This,dwStreamIndex,pMediaType,pEncodingAttributes) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_mfcaptureengine_0000_0011_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfcaptureengine_0000_0011_v0_0_s_ifspec;
}

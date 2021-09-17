#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IMFReadWriteClassFactory IMFReadWriteClassFactory;
typedef interface IMFSourceReader IMFSourceReader;
typedef interface IMFSourceReaderEx IMFSourceReaderEx;
typedef interface IMFSourceReaderCallback IMFSourceReaderCallback;
typedef interface IMFSourceReaderCallback2 IMFSourceReaderCallback2;
typedef interface IMFSinkWriter IMFSinkWriter;
typedef interface IMFSinkWriterEx IMFSinkWriterEx;
typedef interface IMFSinkWriterEncoderConfig IMFSinkWriterEncoderConfig;
typedef interface IMFSinkWriterCallback IMFSinkWriterCallback;
typedef interface IMFSinkWriterCallback2 IMFSinkWriterCallback2;
#include "mfobjects.h"
#include "MFTransform.h"
extern "C"{
#include <winapifamily.h>
#pragma region Application or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_GAMES)
EXTERN_GUID(CLSID_MFReadWriteClassFactory, 0x48e2ed0f, 0x98c2, 0x4a37, 0xbe, 0xd5, 0x16, 0x63, 0x12, 0xdd, 0xd8, 0x3f);
extern RPC_IF_HANDLE __MIDL_itf_mfreadwrite_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfreadwrite_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFReadWriteClassFactory;
    typedef struct IMFReadWriteClassFactoryVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFReadWriteClassFactory * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFReadWriteClassFactory * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFReadWriteClassFactory * This);
        HRESULT ( STDMETHODCALLTYPE *CreateInstanceFromURL )(
            IMFReadWriteClassFactory * This,
            _In_ REFCLSID clsid,
            _In_ LPCWSTR pwszURL,
            _In_opt_ IMFAttributes *pAttributes,
            _In_ REFIID riid,
            _Out_ LPVOID *ppvObject);
        HRESULT ( STDMETHODCALLTYPE *CreateInstanceFromObject )(
            IMFReadWriteClassFactory * This,
            _In_ REFCLSID clsid,
            _In_ IUnknown *punkObject,
            _In_opt_ IMFAttributes *pAttributes,
            _In_ REFIID riid,
            _Out_ LPVOID *ppvObject);
        END_INTERFACE
    } IMFReadWriteClassFactoryVtbl;
    interface IMFReadWriteClassFactory
    {
        CONST_VTBL struct IMFReadWriteClassFactoryVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CreateInstanceFromURL(This,clsid,pwszURL,pAttributes,riid,ppvObject) )
    ( (This)->lpVtbl -> CreateInstanceFromObject(This,clsid,punkObject,pAttributes,riid,ppvObject) )
EXTERN_GUID(CLSID_MFSourceReader, 0x1777133c, 0x0881, 0x411b, 0xa5, 0x77, 0xad, 0x54, 0x5f, 0x07, 0x14, 0xc4);
STDAPI MFCreateSourceReaderFromURL(
    _In_ LPCWSTR pwszURL,
    _In_opt_ IMFAttributes *pAttributes,
    _Out_ IMFSourceReader **ppSourceReader );
STDAPI MFCreateSourceReaderFromByteStream(
    _In_ IMFByteStream *pByteStream,
    _In_opt_ IMFAttributes *pAttributes,
    _Out_ IMFSourceReader **ppSourceReader );
STDAPI MFCreateSourceReaderFromMediaSource(
    _In_ IMFMediaSource *pMediaSource,
    _In_opt_ IMFAttributes *pAttributes,
    _Out_ IMFSourceReader **ppSourceReader );
EXTERN_GUID( MF_SOURCE_READER_ASYNC_CALLBACK, 0x1e3dbeac, 0xbb43, 0x4c35, 0xb5, 0x07, 0xcd, 0x64, 0x44, 0x64, 0xc9, 0x65);
EXTERN_GUID( MF_SOURCE_READER_D3D_MANAGER, 0xec822da2, 0xe1e9, 0x4b29, 0xa0, 0xd8, 0x56, 0x3c, 0x71, 0x9f, 0x52, 0x69);
EXTERN_GUID( MF_SOURCE_READER_DISABLE_DXVA, 0xaa456cfd, 0x3943, 0x4a1e, 0xa7, 0x7d, 0x18, 0x38, 0xc0, 0xea, 0x2e, 0x35);
EXTERN_GUID( MF_SOURCE_READER_MEDIASOURCE_CONFIG, 0x9085abeb, 0x0354, 0x48f9, 0xab, 0xb5, 0x20, 0x0d, 0xf8, 0x38, 0xc6, 0x8e);
EXTERN_GUID( MF_SOURCE_READER_MEDIASOURCE_CHARACTERISTICS, 0x6d23f5c8, 0xc5d7, 0x4a9b, 0x99, 0x71, 0x5d, 0x11, 0xf8, 0xbc, 0xa8, 0x80);
EXTERN_GUID( MF_SOURCE_READER_ENABLE_VIDEO_PROCESSING, 0xfb394f3d, 0xccf1, 0x42ee, 0xbb, 0xb3, 0xf9, 0xb8, 0x45, 0xd5, 0x68, 0x1d);
EXTERN_GUID( MF_SOURCE_READER_ENABLE_ADVANCED_VIDEO_PROCESSING, 0xf81da2c, 0xb537, 0x4672, 0xa8, 0xb2, 0xa6, 0x81, 0xb1, 0x73, 0x7, 0xa3);
EXTERN_GUID( MF_SOURCE_READER_DISABLE_CAMERA_PLUGINS, 0x9d3365dd, 0x58f, 0x4cfb, 0x9f, 0x97, 0xb3, 0x14, 0xcc, 0x99, 0xc8, 0xad );
EXTERN_GUID( MF_SOURCE_READER_DISCONNECT_MEDIASOURCE_ON_SHUTDOWN, 0x56b67165, 0x219e, 0x456d, 0xa2, 0x2e, 0x2d, 0x30, 0x04, 0xc7, 0xfe, 0x56);
EXTERN_GUID( MF_SOURCE_READER_ENABLE_TRANSCODE_ONLY_TRANSFORMS, 0xdfd4f008, 0xb5fd, 0x4e78, 0xae, 0x44, 0x62, 0xa1, 0xe6, 0x7b, 0xbe, 0x27);
EXTERN_GUID( MF_SOURCE_READER_D3D11_BIND_FLAGS, 0x33f3197b, 0xf73a, 0x4e14, 0x8d, 0x85, 0xe, 0x4c, 0x43, 0x68, 0x78, 0x8d);
typedef
enum MF_SOURCE_READER_FLAG
    {
        MF_SOURCE_READERF_ERROR = 0x1,
        MF_SOURCE_READERF_ENDOFSTREAM = 0x2,
        MF_SOURCE_READERF_NEWSTREAM = 0x4,
        MF_SOURCE_READERF_NATIVEMEDIATYPECHANGED = 0x10,
        MF_SOURCE_READERF_CURRENTMEDIATYPECHANGED = 0x20,
        MF_SOURCE_READERF_STREAMTICK = 0x100,
        MF_SOURCE_READERF_ALLEFFECTSREMOVED = 0x200
    } MF_SOURCE_READER_FLAG;
DEFINE_ENUM_FLAG_OPERATORS(MF_SOURCE_READER_FLAG)
typedef
enum MF_SOURCE_READER_CONTROL_FLAG
    {
        MF_SOURCE_READER_CONTROLF_DRAIN = 0x1
    } MF_SOURCE_READER_CONTROL_FLAG;
DEFINE_ENUM_FLAG_OPERATORS(MF_SOURCE_READER_CONTROL_FLAG)
enum __MIDL___MIDL_itf_mfreadwrite_0000_0001_0001
    {
        MF_SOURCE_READER_INVALID_STREAM_INDEX = 0xffffffff,
        MF_SOURCE_READER_ALL_STREAMS = 0xfffffffe,
        MF_SOURCE_READER_ANY_STREAM = 0xfffffffe,
        MF_SOURCE_READER_FIRST_AUDIO_STREAM = 0xfffffffd,
        MF_SOURCE_READER_FIRST_VIDEO_STREAM = 0xfffffffc,
        MF_SOURCE_READER_MEDIASOURCE = 0xffffffff
    } ;
enum __MIDL___MIDL_itf_mfreadwrite_0000_0001_0002
    {
        MF_SOURCE_READER_CURRENT_TYPE_INDEX = 0xffffffff
    } ;
extern RPC_IF_HANDLE __MIDL_itf_mfreadwrite_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfreadwrite_0000_0001_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFSourceReader;
    typedef struct IMFSourceReaderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFSourceReader * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFSourceReader * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFSourceReader * This);
        HRESULT ( STDMETHODCALLTYPE *GetStreamSelection )(
            IMFSourceReader * This,
            _In_ DWORD dwStreamIndex,
            _Out_ BOOL *pfSelected);
        HRESULT ( STDMETHODCALLTYPE *SetStreamSelection )(
            IMFSourceReader * This,
            _In_ DWORD dwStreamIndex,
            _In_ BOOL fSelected);
        HRESULT ( STDMETHODCALLTYPE *GetNativeMediaType )(
            IMFSourceReader * This,
            _In_ DWORD dwStreamIndex,
            _In_ DWORD dwMediaTypeIndex,
            _Out_ IMFMediaType **ppMediaType);
        HRESULT ( STDMETHODCALLTYPE *GetCurrentMediaType )(
            IMFSourceReader * This,
            _In_ DWORD dwStreamIndex,
            _Out_ IMFMediaType **ppMediaType);
        HRESULT ( STDMETHODCALLTYPE *SetCurrentMediaType )(
            IMFSourceReader * This,
            _In_ DWORD dwStreamIndex,
            _Reserved_ DWORD *pdwReserved,
            _In_ IMFMediaType *pMediaType);
        HRESULT ( STDMETHODCALLTYPE *SetCurrentPosition )(
            IMFSourceReader * This,
            _In_ REFGUID guidTimeFormat,
            _In_ REFPROPVARIANT varPosition);
        HRESULT ( STDMETHODCALLTYPE *ReadSample )(
            IMFSourceReader * This,
            _In_ DWORD dwStreamIndex,
            _In_ DWORD dwControlFlags,
            _Out_opt_ DWORD *pdwActualStreamIndex,
            _Out_opt_ DWORD *pdwStreamFlags,
            _Out_opt_ LONGLONG *pllTimestamp,
            _Out_opt_ IMFSample **ppSample);
        HRESULT ( STDMETHODCALLTYPE *Flush )(
            IMFSourceReader * This,
            _In_ DWORD dwStreamIndex);
        HRESULT ( STDMETHODCALLTYPE *GetServiceForStream )(
            IMFSourceReader * This,
            _In_ DWORD dwStreamIndex,
            _In_ REFGUID guidService,
            _In_ REFIID riid,
            _Out_ LPVOID *ppvObject);
        HRESULT ( STDMETHODCALLTYPE *GetPresentationAttribute )(
            IMFSourceReader * This,
            _In_ DWORD dwStreamIndex,
            _In_ REFGUID guidAttribute,
            _Out_ PROPVARIANT *pvarAttribute);
        END_INTERFACE
    } IMFSourceReaderVtbl;
    interface IMFSourceReader
    {
        CONST_VTBL struct IMFSourceReaderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetStreamSelection(This,dwStreamIndex,pfSelected) )
    ( (This)->lpVtbl -> SetStreamSelection(This,dwStreamIndex,fSelected) )
    ( (This)->lpVtbl -> GetNativeMediaType(This,dwStreamIndex,dwMediaTypeIndex,ppMediaType) )
    ( (This)->lpVtbl -> GetCurrentMediaType(This,dwStreamIndex,ppMediaType) )
    ( (This)->lpVtbl -> SetCurrentMediaType(This,dwStreamIndex,pdwReserved,pMediaType) )
    ( (This)->lpVtbl -> SetCurrentPosition(This,guidTimeFormat,varPosition) )
    ( (This)->lpVtbl -> ReadSample(This,dwStreamIndex,dwControlFlags,pdwActualStreamIndex,pdwStreamFlags,pllTimestamp,ppSample) )
    ( (This)->lpVtbl -> Flush(This,dwStreamIndex) )
    ( (This)->lpVtbl -> GetServiceForStream(This,dwStreamIndex,guidService,riid,ppvObject) )
    ( (This)->lpVtbl -> GetPresentationAttribute(This,dwStreamIndex,guidAttribute,pvarAttribute) )
#endif
#pragma endregion
#pragma region Application or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_GAMES)
extern RPC_IF_HANDLE __MIDL_itf_mfreadwrite_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfreadwrite_0000_0002_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFSourceReaderEx;
    typedef struct IMFSourceReaderExVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFSourceReaderEx * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFSourceReaderEx * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFSourceReaderEx * This);
        HRESULT ( STDMETHODCALLTYPE *GetStreamSelection )(
            IMFSourceReaderEx * This,
            _In_ DWORD dwStreamIndex,
            _Out_ BOOL *pfSelected);
        HRESULT ( STDMETHODCALLTYPE *SetStreamSelection )(
            IMFSourceReaderEx * This,
            _In_ DWORD dwStreamIndex,
            _In_ BOOL fSelected);
        HRESULT ( STDMETHODCALLTYPE *GetNativeMediaType )(
            IMFSourceReaderEx * This,
            _In_ DWORD dwStreamIndex,
            _In_ DWORD dwMediaTypeIndex,
            _Out_ IMFMediaType **ppMediaType);
        HRESULT ( STDMETHODCALLTYPE *GetCurrentMediaType )(
            IMFSourceReaderEx * This,
            _In_ DWORD dwStreamIndex,
            _Out_ IMFMediaType **ppMediaType);
        HRESULT ( STDMETHODCALLTYPE *SetCurrentMediaType )(
            IMFSourceReaderEx * This,
            _In_ DWORD dwStreamIndex,
            _Reserved_ DWORD *pdwReserved,
            _In_ IMFMediaType *pMediaType);
        HRESULT ( STDMETHODCALLTYPE *SetCurrentPosition )(
            IMFSourceReaderEx * This,
            _In_ REFGUID guidTimeFormat,
            _In_ REFPROPVARIANT varPosition);
        HRESULT ( STDMETHODCALLTYPE *ReadSample )(
            IMFSourceReaderEx * This,
            _In_ DWORD dwStreamIndex,
            _In_ DWORD dwControlFlags,
            _Out_opt_ DWORD *pdwActualStreamIndex,
            _Out_opt_ DWORD *pdwStreamFlags,
            _Out_opt_ LONGLONG *pllTimestamp,
            _Out_opt_ IMFSample **ppSample);
        HRESULT ( STDMETHODCALLTYPE *Flush )(
            IMFSourceReaderEx * This,
            _In_ DWORD dwStreamIndex);
        HRESULT ( STDMETHODCALLTYPE *GetServiceForStream )(
            IMFSourceReaderEx * This,
            _In_ DWORD dwStreamIndex,
            _In_ REFGUID guidService,
            _In_ REFIID riid,
            _Out_ LPVOID *ppvObject);
        HRESULT ( STDMETHODCALLTYPE *GetPresentationAttribute )(
            IMFSourceReaderEx * This,
            _In_ DWORD dwStreamIndex,
            _In_ REFGUID guidAttribute,
            _Out_ PROPVARIANT *pvarAttribute);
        HRESULT ( STDMETHODCALLTYPE *SetNativeMediaType )(
            IMFSourceReaderEx * This,
            _In_ DWORD dwStreamIndex,
            _In_opt_ IMFMediaType *pMediaType,
            _Out_ DWORD *pdwStreamFlags);
        HRESULT ( STDMETHODCALLTYPE *AddTransformForStream )(
            IMFSourceReaderEx * This,
            _In_ DWORD dwStreamIndex,
            _In_ IUnknown *pTransformOrActivate);
        HRESULT ( STDMETHODCALLTYPE *RemoveAllTransformsForStream )(
            IMFSourceReaderEx * This,
            _In_ DWORD dwStreamIndex);
        HRESULT ( STDMETHODCALLTYPE *GetTransformForStream )(
            IMFSourceReaderEx * This,
            _In_ DWORD dwStreamIndex,
            _In_ DWORD dwTransformIndex,
            _Out_opt_ GUID *pGuidCategory,
            _Out_ IMFTransform **ppTransform);
        END_INTERFACE
    } IMFSourceReaderExVtbl;
    interface IMFSourceReaderEx
    {
        CONST_VTBL struct IMFSourceReaderExVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetStreamSelection(This,dwStreamIndex,pfSelected) )
    ( (This)->lpVtbl -> SetStreamSelection(This,dwStreamIndex,fSelected) )
    ( (This)->lpVtbl -> GetNativeMediaType(This,dwStreamIndex,dwMediaTypeIndex,ppMediaType) )
    ( (This)->lpVtbl -> GetCurrentMediaType(This,dwStreamIndex,ppMediaType) )
    ( (This)->lpVtbl -> SetCurrentMediaType(This,dwStreamIndex,pdwReserved,pMediaType) )
    ( (This)->lpVtbl -> SetCurrentPosition(This,guidTimeFormat,varPosition) )
    ( (This)->lpVtbl -> ReadSample(This,dwStreamIndex,dwControlFlags,pdwActualStreamIndex,pdwStreamFlags,pllTimestamp,ppSample) )
    ( (This)->lpVtbl -> Flush(This,dwStreamIndex) )
    ( (This)->lpVtbl -> GetServiceForStream(This,dwStreamIndex,guidService,riid,ppvObject) )
    ( (This)->lpVtbl -> GetPresentationAttribute(This,dwStreamIndex,guidAttribute,pvarAttribute) )
    ( (This)->lpVtbl -> SetNativeMediaType(This,dwStreamIndex,pMediaType,pdwStreamFlags) )
    ( (This)->lpVtbl -> AddTransformForStream(This,dwStreamIndex,pTransformOrActivate) )
    ( (This)->lpVtbl -> RemoveAllTransformsForStream(This,dwStreamIndex) )
    ( (This)->lpVtbl -> GetTransformForStream(This,dwStreamIndex,dwTransformIndex,pGuidCategory,ppTransform) )
#endif
#pragma endregion
#pragma region Application or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_GAMES)
extern RPC_IF_HANDLE __MIDL_itf_mfreadwrite_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfreadwrite_0000_0003_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFSourceReaderCallback;
    typedef struct IMFSourceReaderCallbackVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFSourceReaderCallback * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFSourceReaderCallback * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFSourceReaderCallback * This);
        HRESULT ( STDMETHODCALLTYPE *OnReadSample )(
            IMFSourceReaderCallback * This,
            _In_ HRESULT hrStatus,
            _In_ DWORD dwStreamIndex,
            _In_ DWORD dwStreamFlags,
            _In_ LONGLONG llTimestamp,
            _In_opt_ IMFSample *pSample);
        HRESULT ( STDMETHODCALLTYPE *OnFlush )(
            IMFSourceReaderCallback * This,
            _In_ DWORD dwStreamIndex);
        HRESULT ( STDMETHODCALLTYPE *OnEvent )(
            IMFSourceReaderCallback * This,
            _In_ DWORD dwStreamIndex,
            _In_ IMFMediaEvent *pEvent);
        END_INTERFACE
    } IMFSourceReaderCallbackVtbl;
    interface IMFSourceReaderCallback
    {
        CONST_VTBL struct IMFSourceReaderCallbackVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnReadSample(This,hrStatus,dwStreamIndex,dwStreamFlags,llTimestamp,pSample) )
    ( (This)->lpVtbl -> OnFlush(This,dwStreamIndex) )
    ( (This)->lpVtbl -> OnEvent(This,dwStreamIndex,pEvent) )
EXTERN_C const IID IID_IMFSourceReaderCallback2;
    typedef struct IMFSourceReaderCallback2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFSourceReaderCallback2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFSourceReaderCallback2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFSourceReaderCallback2 * This);
        HRESULT ( STDMETHODCALLTYPE *OnReadSample )(
            IMFSourceReaderCallback2 * This,
            _In_ HRESULT hrStatus,
            _In_ DWORD dwStreamIndex,
            _In_ DWORD dwStreamFlags,
            _In_ LONGLONG llTimestamp,
            _In_opt_ IMFSample *pSample);
        HRESULT ( STDMETHODCALLTYPE *OnFlush )(
            IMFSourceReaderCallback2 * This,
            _In_ DWORD dwStreamIndex);
        HRESULT ( STDMETHODCALLTYPE *OnEvent )(
            IMFSourceReaderCallback2 * This,
            _In_ DWORD dwStreamIndex,
            _In_ IMFMediaEvent *pEvent);
        HRESULT ( STDMETHODCALLTYPE *OnTransformChange )(
            IMFSourceReaderCallback2 * This);
        HRESULT ( STDMETHODCALLTYPE *OnStreamError )(
            IMFSourceReaderCallback2 * This,
            _In_ DWORD dwStreamIndex,
            _In_ HRESULT hrStatus);
        END_INTERFACE
    } IMFSourceReaderCallback2Vtbl;
    interface IMFSourceReaderCallback2
    {
        CONST_VTBL struct IMFSourceReaderCallback2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnReadSample(This,hrStatus,dwStreamIndex,dwStreamFlags,llTimestamp,pSample) )
    ( (This)->lpVtbl -> OnFlush(This,dwStreamIndex) )
    ( (This)->lpVtbl -> OnEvent(This,dwStreamIndex,pEvent) )
    ( (This)->lpVtbl -> OnTransformChange(This) )
    ( (This)->lpVtbl -> OnStreamError(This,dwStreamIndex,hrStatus) )
EXTERN_GUID(CLSID_MFSinkWriter, 0xa3bbfb17, 0x8273, 0x4e52, 0x9e, 0x0e, 0x97, 0x39, 0xdc, 0x88, 0x79, 0x90);
STDAPI MFCreateSinkWriterFromURL(
    _In_opt_ LPCWSTR pwszOutputURL,
    _In_opt_ IMFByteStream *pByteStream,
    _In_opt_ IMFAttributes *pAttributes,
    _Out_ IMFSinkWriter **ppSinkWriter );
STDAPI MFCreateSinkWriterFromMediaSink(
    _In_ IMFMediaSink *pMediaSink,
    _In_opt_ IMFAttributes *pAttributes,
    _Out_ IMFSinkWriter **ppSinkWriter );
EXTERN_GUID( MF_SINK_WRITER_ASYNC_CALLBACK, 0x48cb183e, 0x7b0b, 0x46f4, 0x82, 0x2e, 0x5e, 0x1d, 0x2d, 0xda, 0x43, 0x54);
EXTERN_GUID( MF_SINK_WRITER_DISABLE_THROTTLING, 0x08b845d8, 0x2b74, 0x4afe, 0x9d, 0x53, 0xbe, 0x16, 0xd2, 0xd5, 0xae, 0x4f);
EXTERN_GUID( MF_SINK_WRITER_D3D_MANAGER, 0xec822da2, 0xe1e9, 0x4b29, 0xa0, 0xd8, 0x56, 0x3c, 0x71, 0x9f, 0x52, 0x69);
EXTERN_GUID( MF_SINK_WRITER_ENCODER_CONFIG, 0xad91cd04, 0xa7cc, 0x4ac7, 0x99, 0xb6, 0xa5, 0x7b, 0x9a, 0x4a, 0x7c, 0x70);
enum __MIDL___MIDL_itf_mfreadwrite_0000_0005_0001
    {
        MF_SINK_WRITER_INVALID_STREAM_INDEX = 0xffffffff,
        MF_SINK_WRITER_ALL_STREAMS = 0xfffffffe,
        MF_SINK_WRITER_MEDIASINK = 0xffffffff
    } ;
typedef struct _MF_SINK_WRITER_STATISTICS
    {
    DWORD cb;
    LONGLONG llLastTimestampReceived;
    LONGLONG llLastTimestampEncoded;
    LONGLONG llLastTimestampProcessed;
    LONGLONG llLastStreamTickReceived;
    LONGLONG llLastSinkSampleRequest;
    QWORD qwNumSamplesReceived;
    QWORD qwNumSamplesEncoded;
    QWORD qwNumSamplesProcessed;
    QWORD qwNumStreamTicksReceived;
    DWORD dwByteCountQueued;
    QWORD qwByteCountProcessed;
    DWORD dwNumOutstandingSinkSampleRequests;
    DWORD dwAverageSampleRateReceived;
    DWORD dwAverageSampleRateEncoded;
    DWORD dwAverageSampleRateProcessed;
    } MF_SINK_WRITER_STATISTICS;
#endif
#pragma endregion
#pragma region Application or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_GAMES)
extern RPC_IF_HANDLE __MIDL_itf_mfreadwrite_0000_0005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfreadwrite_0000_0005_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFSinkWriter;
    typedef struct IMFSinkWriterVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFSinkWriter * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFSinkWriter * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFSinkWriter * This);
        HRESULT ( STDMETHODCALLTYPE *AddStream )(
            IMFSinkWriter * This,
            _In_ IMFMediaType *pTargetMediaType,
            _Out_ DWORD *pdwStreamIndex);
        HRESULT ( STDMETHODCALLTYPE *SetInputMediaType )(
            IMFSinkWriter * This,
            _In_ DWORD dwStreamIndex,
            _In_ IMFMediaType *pInputMediaType,
            _In_opt_ IMFAttributes *pEncodingParameters);
        HRESULT ( STDMETHODCALLTYPE *BeginWriting )(
            IMFSinkWriter * This);
        HRESULT ( STDMETHODCALLTYPE *WriteSample )(
            IMFSinkWriter * This,
            _In_ DWORD dwStreamIndex,
            _In_ IMFSample *pSample);
        HRESULT ( STDMETHODCALLTYPE *SendStreamTick )(
            IMFSinkWriter * This,
            _In_ DWORD dwStreamIndex,
            _In_ LONGLONG llTimestamp);
        HRESULT ( STDMETHODCALLTYPE *PlaceMarker )(
            IMFSinkWriter * This,
            _In_ DWORD dwStreamIndex,
            _In_ LPVOID pvContext);
        HRESULT ( STDMETHODCALLTYPE *NotifyEndOfSegment )(
            IMFSinkWriter * This,
            _In_ DWORD dwStreamIndex);
        HRESULT ( STDMETHODCALLTYPE *Flush )(
            IMFSinkWriter * This,
            _In_ DWORD dwStreamIndex);
        HRESULT ( STDMETHODCALLTYPE *Finalize )(
            IMFSinkWriter * This);
        HRESULT ( STDMETHODCALLTYPE *GetServiceForStream )(
            IMFSinkWriter * This,
            _In_ DWORD dwStreamIndex,
            _In_ REFGUID guidService,
            _In_ REFIID riid,
            _Out_ LPVOID *ppvObject);
        HRESULT ( STDMETHODCALLTYPE *GetStatistics )(
            IMFSinkWriter * This,
            _In_ DWORD dwStreamIndex,
            _Out_ MF_SINK_WRITER_STATISTICS *pStats);
        END_INTERFACE
    } IMFSinkWriterVtbl;
    interface IMFSinkWriter
    {
        CONST_VTBL struct IMFSinkWriterVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AddStream(This,pTargetMediaType,pdwStreamIndex) )
    ( (This)->lpVtbl -> SetInputMediaType(This,dwStreamIndex,pInputMediaType,pEncodingParameters) )
    ( (This)->lpVtbl -> BeginWriting(This) )
    ( (This)->lpVtbl -> WriteSample(This,dwStreamIndex,pSample) )
    ( (This)->lpVtbl -> SendStreamTick(This,dwStreamIndex,llTimestamp) )
    ( (This)->lpVtbl -> PlaceMarker(This,dwStreamIndex,pvContext) )
    ( (This)->lpVtbl -> NotifyEndOfSegment(This,dwStreamIndex) )
    ( (This)->lpVtbl -> Flush(This,dwStreamIndex) )
    ( (This)->lpVtbl -> Finalize(This) )
    ( (This)->lpVtbl -> GetServiceForStream(This,dwStreamIndex,guidService,riid,ppvObject) )
    ( (This)->lpVtbl -> GetStatistics(This,dwStreamIndex,pStats) )
extern RPC_IF_HANDLE __MIDL_itf_mfreadwrite_0000_0006_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfreadwrite_0000_0006_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFSinkWriterEx;
    typedef struct IMFSinkWriterExVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFSinkWriterEx * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFSinkWriterEx * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFSinkWriterEx * This);
        HRESULT ( STDMETHODCALLTYPE *AddStream )(
            IMFSinkWriterEx * This,
            _In_ IMFMediaType *pTargetMediaType,
            _Out_ DWORD *pdwStreamIndex);
        HRESULT ( STDMETHODCALLTYPE *SetInputMediaType )(
            IMFSinkWriterEx * This,
            _In_ DWORD dwStreamIndex,
            _In_ IMFMediaType *pInputMediaType,
            _In_opt_ IMFAttributes *pEncodingParameters);
        HRESULT ( STDMETHODCALLTYPE *BeginWriting )(
            IMFSinkWriterEx * This);
        HRESULT ( STDMETHODCALLTYPE *WriteSample )(
            IMFSinkWriterEx * This,
            _In_ DWORD dwStreamIndex,
            _In_ IMFSample *pSample);
        HRESULT ( STDMETHODCALLTYPE *SendStreamTick )(
            IMFSinkWriterEx * This,
            _In_ DWORD dwStreamIndex,
            _In_ LONGLONG llTimestamp);
        HRESULT ( STDMETHODCALLTYPE *PlaceMarker )(
            IMFSinkWriterEx * This,
            _In_ DWORD dwStreamIndex,
            _In_ LPVOID pvContext);
        HRESULT ( STDMETHODCALLTYPE *NotifyEndOfSegment )(
            IMFSinkWriterEx * This,
            _In_ DWORD dwStreamIndex);
        HRESULT ( STDMETHODCALLTYPE *Flush )(
            IMFSinkWriterEx * This,
            _In_ DWORD dwStreamIndex);
        HRESULT ( STDMETHODCALLTYPE *Finalize )(
            IMFSinkWriterEx * This);
        HRESULT ( STDMETHODCALLTYPE *GetServiceForStream )(
            IMFSinkWriterEx * This,
            _In_ DWORD dwStreamIndex,
            _In_ REFGUID guidService,
            _In_ REFIID riid,
            _Out_ LPVOID *ppvObject);
        HRESULT ( STDMETHODCALLTYPE *GetStatistics )(
            IMFSinkWriterEx * This,
            _In_ DWORD dwStreamIndex,
            _Out_ MF_SINK_WRITER_STATISTICS *pStats);
        HRESULT ( STDMETHODCALLTYPE *GetTransformForStream )(
            IMFSinkWriterEx * This,
            _In_ DWORD dwStreamIndex,
            _In_ DWORD dwTransformIndex,
            _Out_opt_ GUID *pGuidCategory,
            _Out_ IMFTransform **ppTransform);
        END_INTERFACE
    } IMFSinkWriterExVtbl;
    interface IMFSinkWriterEx
    {
        CONST_VTBL struct IMFSinkWriterExVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AddStream(This,pTargetMediaType,pdwStreamIndex) )
    ( (This)->lpVtbl -> SetInputMediaType(This,dwStreamIndex,pInputMediaType,pEncodingParameters) )
    ( (This)->lpVtbl -> BeginWriting(This) )
    ( (This)->lpVtbl -> WriteSample(This,dwStreamIndex,pSample) )
    ( (This)->lpVtbl -> SendStreamTick(This,dwStreamIndex,llTimestamp) )
    ( (This)->lpVtbl -> PlaceMarker(This,dwStreamIndex,pvContext) )
    ( (This)->lpVtbl -> NotifyEndOfSegment(This,dwStreamIndex) )
    ( (This)->lpVtbl -> Flush(This,dwStreamIndex) )
    ( (This)->lpVtbl -> Finalize(This) )
    ( (This)->lpVtbl -> GetServiceForStream(This,dwStreamIndex,guidService,riid,ppvObject) )
    ( (This)->lpVtbl -> GetStatistics(This,dwStreamIndex,pStats) )
    ( (This)->lpVtbl -> GetTransformForStream(This,dwStreamIndex,dwTransformIndex,pGuidCategory,ppTransform) )
EXTERN_C const IID IID_IMFSinkWriterEncoderConfig;
    typedef struct IMFSinkWriterEncoderConfigVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFSinkWriterEncoderConfig * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFSinkWriterEncoderConfig * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFSinkWriterEncoderConfig * This);
        HRESULT ( STDMETHODCALLTYPE *SetTargetMediaType )(
            IMFSinkWriterEncoderConfig * This,
            _In_ DWORD dwStreamIndex,
            _In_ IMFMediaType *pTargetMediaType,
            _In_opt_ IMFAttributes *pEncodingParameters);
        HRESULT ( STDMETHODCALLTYPE *PlaceEncodingParameters )(
            IMFSinkWriterEncoderConfig * This,
            _In_ DWORD dwStreamIndex,
            _In_ IMFAttributes *pEncodingParameters);
        END_INTERFACE
    } IMFSinkWriterEncoderConfigVtbl;
    interface IMFSinkWriterEncoderConfig
    {
        CONST_VTBL struct IMFSinkWriterEncoderConfigVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetTargetMediaType(This,dwStreamIndex,pTargetMediaType,pEncodingParameters) )
    ( (This)->lpVtbl -> PlaceEncodingParameters(This,dwStreamIndex,pEncodingParameters) )
extern RPC_IF_HANDLE __MIDL_itf_mfreadwrite_0000_0008_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfreadwrite_0000_0008_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFSinkWriterCallback;
    typedef struct IMFSinkWriterCallbackVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFSinkWriterCallback * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFSinkWriterCallback * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFSinkWriterCallback * This);
        HRESULT ( STDMETHODCALLTYPE *OnFinalize )(
            IMFSinkWriterCallback * This,
            _In_ HRESULT hrStatus);
        HRESULT ( STDMETHODCALLTYPE *OnMarker )(
            IMFSinkWriterCallback * This,
            _In_ DWORD dwStreamIndex,
            _In_ LPVOID pvContext);
        END_INTERFACE
    } IMFSinkWriterCallbackVtbl;
    interface IMFSinkWriterCallback
    {
        CONST_VTBL struct IMFSinkWriterCallbackVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnFinalize(This,hrStatus) )
    ( (This)->lpVtbl -> OnMarker(This,dwStreamIndex,pvContext) )
EXTERN_C const IID IID_IMFSinkWriterCallback2;
    typedef struct IMFSinkWriterCallback2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFSinkWriterCallback2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFSinkWriterCallback2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFSinkWriterCallback2 * This);
        HRESULT ( STDMETHODCALLTYPE *OnFinalize )(
            IMFSinkWriterCallback2 * This,
            _In_ HRESULT hrStatus);
        HRESULT ( STDMETHODCALLTYPE *OnMarker )(
            IMFSinkWriterCallback2 * This,
            _In_ DWORD dwStreamIndex,
            _In_ LPVOID pvContext);
        HRESULT ( STDMETHODCALLTYPE *OnTransformChange )(
            IMFSinkWriterCallback2 * This);
        HRESULT ( STDMETHODCALLTYPE *OnStreamError )(
            IMFSinkWriterCallback2 * This,
            _In_ DWORD dwStreamIndex,
            _In_ HRESULT hrStatus);
        END_INTERFACE
    } IMFSinkWriterCallback2Vtbl;
    interface IMFSinkWriterCallback2
    {
        CONST_VTBL struct IMFSinkWriterCallback2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnFinalize(This,hrStatus) )
    ( (This)->lpVtbl -> OnMarker(This,dwStreamIndex,pvContext) )
    ( (This)->lpVtbl -> OnTransformChange(This) )
    ( (This)->lpVtbl -> OnStreamError(This,dwStreamIndex,hrStatus) )
EXTERN_GUID( MF_READWRITE_DISABLE_CONVERTERS, 0x98d5b065, 0x1374, 0x4847, 0x8d, 0x5d, 0x31, 0x52, 0x0f, 0xee, 0x71, 0x56);
EXTERN_GUID( MF_READWRITE_ENABLE_HARDWARE_TRANSFORMS, 0xa634a91c, 0x822b, 0x41b9, 0xa4, 0x94, 0x4d, 0xe4, 0x64, 0x36, 0x12, 0xb0);
#endif
#pragma endregion
#pragma region Application or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_GAMES)
EXTERN_GUID( MF_READWRITE_MMCSS_CLASS, 0x39384300, 0xd0eb, 0x40b1, 0x87, 0xa0, 0x33, 0x18, 0x87, 0x1b, 0x5a, 0x53);
EXTERN_GUID( MF_READWRITE_MMCSS_PRIORITY, 0x43ad19ce, 0xf33f, 0x4ba9, 0xa5, 0x80, 0xe4, 0xcd, 0x12, 0xf2, 0xd1, 0x44);
EXTERN_GUID( MF_READWRITE_MMCSS_CLASS_AUDIO, 0x430847da, 0x0890, 0x4b0e, 0x93, 0x8c, 0x05, 0x43, 0x32, 0xc5, 0x47, 0xe1);
EXTERN_GUID( MF_READWRITE_MMCSS_PRIORITY_AUDIO, 0x273db885, 0x2de2, 0x4db2, 0xa6, 0xa7, 0xfd, 0xb6, 0x6f, 0xb4, 0x0b, 0x61);
EXTERN_GUID( MF_READWRITE_D3D_OPTIONAL, 0x216479d9, 0x3071, 0x42ca, 0xbb, 0x6c, 0x4c, 0x22, 0x10, 0x2e, 0x1d, 0x18);
EXTERN_GUID( MF_MEDIASINK_AUTOFINALIZE_SUPPORTED, 0x48c131be, 0x135a, 0x41cb, 0x82, 0x90, 0x3, 0x65, 0x25, 0x9, 0xc9, 0x99);
EXTERN_GUID( MF_MEDIASINK_ENABLE_AUTOFINALIZE, 0x34014265, 0xcb7e, 0x4cde, 0xac, 0x7c, 0xef, 0xfd, 0x3b, 0x3c, 0x25, 0x30);
EXTERN_GUID( MF_READWRITE_ENABLE_AUTOFINALIZE, 0xdd7ca129, 0x8cd1, 0x4dc5, 0x9d, 0xde, 0xce, 0x16, 0x86, 0x75, 0xde, 0x61);
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_mfreadwrite_0000_0010_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfreadwrite_0000_0010_v0_0_s_ifspec;
}

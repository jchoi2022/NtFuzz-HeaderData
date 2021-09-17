#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IMediaBuffer IMediaBuffer;
typedef interface IMediaObject IMediaObject;
typedef interface IEnumDMO IEnumDMO;
typedef interface IMediaObjectInPlace IMediaObjectInPlace;
typedef interface IDMOQualityControl IDMOQualityControl;
typedef interface IDMOVideoOutputOptimizations IDMOVideoOutputOptimizations;
#include "unknwn.h"
#include "objidl.h"
extern "C"{
#include <winapifamily.h>
typedef AM_MEDIA_TYPE DMO_MEDIA_TYPE;
enum _DMO_INPUT_DATA_BUFFER_FLAGS
    {
        DMO_INPUT_DATA_BUFFERF_SYNCPOINT = 0x1,
        DMO_INPUT_DATA_BUFFERF_TIME = 0x2,
        DMO_INPUT_DATA_BUFFERF_TIMELENGTH = 0x4,
        DMO_INPUT_DATA_BUFFERF_DISCONTINUITY = 0x8
    } ;
enum _DMO_OUTPUT_DATA_BUFFER_FLAGS
    {
        DMO_OUTPUT_DATA_BUFFERF_SYNCPOINT = 0x1,
        DMO_OUTPUT_DATA_BUFFERF_TIME = 0x2,
        DMO_OUTPUT_DATA_BUFFERF_TIMELENGTH = 0x4,
        DMO_OUTPUT_DATA_BUFFERF_DISCONTINUITY = 0x8,
        DMO_OUTPUT_DATA_BUFFERF_INCOMPLETE = 0x1000000
    } ;
enum _DMO_INPUT_STATUS_FLAGS
    {
        DMO_INPUT_STATUSF_ACCEPT_DATA = 0x1
    } ;
enum _DMO_INPUT_STREAM_INFO_FLAGS
    {
        DMO_INPUT_STREAMF_WHOLE_SAMPLES = 0x1,
        DMO_INPUT_STREAMF_SINGLE_SAMPLE_PER_BUFFER = 0x2,
        DMO_INPUT_STREAMF_FIXED_SAMPLE_SIZE = 0x4,
        DMO_INPUT_STREAMF_HOLDS_BUFFERS = 0x8
    } ;
enum _DMO_OUTPUT_STREAM_INFO_FLAGS
    {
        DMO_OUTPUT_STREAMF_WHOLE_SAMPLES = 0x1,
        DMO_OUTPUT_STREAMF_SINGLE_SAMPLE_PER_BUFFER = 0x2,
        DMO_OUTPUT_STREAMF_FIXED_SAMPLE_SIZE = 0x4,
        DMO_OUTPUT_STREAMF_DISCARDABLE = 0x8,
        DMO_OUTPUT_STREAMF_OPTIONAL = 0x10
    } ;
enum _DMO_SET_TYPE_FLAGS
    {
        DMO_SET_TYPEF_TEST_ONLY = 0x1,
        DMO_SET_TYPEF_CLEAR = 0x2
    } ;
enum _DMO_PROCESS_OUTPUT_FLAGS
    {
        DMO_PROCESS_OUTPUT_DISCARD_WHEN_NO_BUFFER = 0x1
    } ;
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_mediaobj_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mediaobj_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IMediaBuffer;
    typedef struct IMediaBufferVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMediaBuffer * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMediaBuffer * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMediaBuffer * This);
        HRESULT ( STDMETHODCALLTYPE *SetLength )(
            IMediaBuffer * This,
            DWORD cbLength);
        HRESULT ( STDMETHODCALLTYPE *GetMaxLength )(
            IMediaBuffer * This,
            _Out_ DWORD *pcbMaxLength);
        HRESULT ( STDMETHODCALLTYPE *GetBufferAndLength )(
            IMediaBuffer * This,
            _Outptr_opt_result_bytebuffer_(*pcbLength) BYTE **ppBuffer,
            _Out_opt_ DWORD *pcbLength);
        END_INTERFACE
    } IMediaBufferVtbl;
    interface IMediaBuffer
    {
        CONST_VTBL struct IMediaBufferVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetLength(This,cbLength) )
    ( (This)->lpVtbl -> GetMaxLength(This,pcbMaxLength) )
    ( (This)->lpVtbl -> GetBufferAndLength(This,ppBuffer,pcbLength) )
typedef struct _DMO_OUTPUT_DATA_BUFFER
    {
    IMediaBuffer *pBuffer;
    DWORD dwStatus;
    REFERENCE_TIME rtTimestamp;
    REFERENCE_TIME rtTimelength;
    } DMO_OUTPUT_DATA_BUFFER;
typedef struct _DMO_OUTPUT_DATA_BUFFER *PDMO_OUTPUT_DATA_BUFFER;
extern RPC_IF_HANDLE __MIDL_itf_mediaobj_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mediaobj_0000_0001_v0_0_s_ifspec;
EXTERN_C const IID IID_IMediaObject;
    typedef struct IMediaObjectVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMediaObject * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMediaObject * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMediaObject * This);
        HRESULT ( STDMETHODCALLTYPE *GetStreamCount )(
            IMediaObject * This,
            _Out_ DWORD *pcInputStreams,
            _Out_ DWORD *pcOutputStreams);
        HRESULT ( STDMETHODCALLTYPE *GetInputStreamInfo )(
            IMediaObject * This,
            DWORD dwInputStreamIndex,
            _Out_ DWORD *pdwFlags);
        HRESULT ( STDMETHODCALLTYPE *GetOutputStreamInfo )(
            IMediaObject * This,
            DWORD dwOutputStreamIndex,
            _Out_ DWORD *pdwFlags);
        HRESULT ( STDMETHODCALLTYPE *GetInputType )(
            IMediaObject * This,
            DWORD dwInputStreamIndex,
            DWORD dwTypeIndex,
            _Out_opt_ DMO_MEDIA_TYPE *pmt);
        HRESULT ( STDMETHODCALLTYPE *GetOutputType )(
            IMediaObject * This,
            DWORD dwOutputStreamIndex,
            DWORD dwTypeIndex,
            _Out_opt_ DMO_MEDIA_TYPE *pmt);
        HRESULT ( STDMETHODCALLTYPE *SetInputType )(
            IMediaObject * This,
            DWORD dwInputStreamIndex,
            _In_opt_ const DMO_MEDIA_TYPE *pmt,
            DWORD dwFlags);
        HRESULT ( STDMETHODCALLTYPE *SetOutputType )(
            IMediaObject * This,
            DWORD dwOutputStreamIndex,
            _In_opt_ const DMO_MEDIA_TYPE *pmt,
            DWORD dwFlags);
        HRESULT ( STDMETHODCALLTYPE *GetInputCurrentType )(
            IMediaObject * This,
            DWORD dwInputStreamIndex,
            _Out_ DMO_MEDIA_TYPE *pmt);
        HRESULT ( STDMETHODCALLTYPE *GetOutputCurrentType )(
            IMediaObject * This,
            DWORD dwOutputStreamIndex,
            _Out_ DMO_MEDIA_TYPE *pmt);
        HRESULT ( STDMETHODCALLTYPE *GetInputSizeInfo )(
            IMediaObject * This,
            DWORD dwInputStreamIndex,
            _Out_ DWORD *pcbSize,
            _Out_ DWORD *pcbMaxLookahead,
            _Out_ DWORD *pcbAlignment);
        HRESULT ( STDMETHODCALLTYPE *GetOutputSizeInfo )(
            IMediaObject * This,
            DWORD dwOutputStreamIndex,
            _Out_ DWORD *pcbSize,
            _Out_ DWORD *pcbAlignment);
        HRESULT ( STDMETHODCALLTYPE *GetInputMaxLatency )(
            IMediaObject * This,
            DWORD dwInputStreamIndex,
            _Out_ REFERENCE_TIME *prtMaxLatency);
        HRESULT ( STDMETHODCALLTYPE *SetInputMaxLatency )(
            IMediaObject * This,
            DWORD dwInputStreamIndex,
            REFERENCE_TIME rtMaxLatency);
        HRESULT ( STDMETHODCALLTYPE *Flush )(
            IMediaObject * This);
        HRESULT ( STDMETHODCALLTYPE *Discontinuity )(
            IMediaObject * This,
            DWORD dwInputStreamIndex);
        HRESULT ( STDMETHODCALLTYPE *AllocateStreamingResources )(
            IMediaObject * This);
        HRESULT ( STDMETHODCALLTYPE *FreeStreamingResources )(
            IMediaObject * This);
        HRESULT ( STDMETHODCALLTYPE *GetInputStatus )(
            IMediaObject * This,
            DWORD dwInputStreamIndex,
            _Out_ DWORD *dwFlags);
        HRESULT ( STDMETHODCALLTYPE *ProcessInput )(
            IMediaObject * This,
            DWORD dwInputStreamIndex,
            IMediaBuffer *pBuffer,
            DWORD dwFlags,
            REFERENCE_TIME rtTimestamp,
            REFERENCE_TIME rtTimelength);
        HRESULT ( STDMETHODCALLTYPE *ProcessOutput )(
            IMediaObject * This,
            DWORD dwFlags,
            DWORD cOutputBufferCount,
            _Out_writes_(cOutputBufferCount) DMO_OUTPUT_DATA_BUFFER *pOutputBuffers,
            _Out_ DWORD *pdwStatus);
        HRESULT ( STDMETHODCALLTYPE *Lock )(
            IMediaObject * This,
            LONG bLock);
        END_INTERFACE
    } IMediaObjectVtbl;
    interface IMediaObject
    {
        CONST_VTBL struct IMediaObjectVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetStreamCount(This,pcInputStreams,pcOutputStreams) )
    ( (This)->lpVtbl -> GetInputStreamInfo(This,dwInputStreamIndex,pdwFlags) )
    ( (This)->lpVtbl -> GetOutputStreamInfo(This,dwOutputStreamIndex,pdwFlags) )
    ( (This)->lpVtbl -> GetInputType(This,dwInputStreamIndex,dwTypeIndex,pmt) )
    ( (This)->lpVtbl -> GetOutputType(This,dwOutputStreamIndex,dwTypeIndex,pmt) )
    ( (This)->lpVtbl -> SetInputType(This,dwInputStreamIndex,pmt,dwFlags) )
    ( (This)->lpVtbl -> SetOutputType(This,dwOutputStreamIndex,pmt,dwFlags) )
    ( (This)->lpVtbl -> GetInputCurrentType(This,dwInputStreamIndex,pmt) )
    ( (This)->lpVtbl -> GetOutputCurrentType(This,dwOutputStreamIndex,pmt) )
    ( (This)->lpVtbl -> GetInputSizeInfo(This,dwInputStreamIndex,pcbSize,pcbMaxLookahead,pcbAlignment) )
    ( (This)->lpVtbl -> GetOutputSizeInfo(This,dwOutputStreamIndex,pcbSize,pcbAlignment) )
    ( (This)->lpVtbl -> GetInputMaxLatency(This,dwInputStreamIndex,prtMaxLatency) )
    ( (This)->lpVtbl -> SetInputMaxLatency(This,dwInputStreamIndex,rtMaxLatency) )
    ( (This)->lpVtbl -> Flush(This) )
    ( (This)->lpVtbl -> Discontinuity(This,dwInputStreamIndex) )
    ( (This)->lpVtbl -> AllocateStreamingResources(This) )
    ( (This)->lpVtbl -> FreeStreamingResources(This) )
    ( (This)->lpVtbl -> GetInputStatus(This,dwInputStreamIndex,dwFlags) )
    ( (This)->lpVtbl -> ProcessInput(This,dwInputStreamIndex,pBuffer,dwFlags,rtTimestamp,rtTimelength) )
    ( (This)->lpVtbl -> ProcessOutput(This,dwFlags,cOutputBufferCount,pOutputBuffers,pdwStatus) )
    ( (This)->lpVtbl -> Lock(This,bLock) )
EXTERN_C const IID IID_IEnumDMO;
    typedef struct IEnumDMOVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IEnumDMO * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IEnumDMO * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IEnumDMO * This);
        HRESULT ( STDMETHODCALLTYPE *Next )(
            IEnumDMO * This,
            DWORD cItemsToFetch,
            _Out_writes_to_(cItemsToFetch, *pcItemsFetched) CLSID *pCLSID,
            _Out_writes_to_(cItemsToFetch, *pcItemsFetched) LPWSTR *Names,
            _Out_ DWORD *pcItemsFetched);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            IEnumDMO * This,
            DWORD cItemsToSkip);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            IEnumDMO * This);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            IEnumDMO * This,
            _Out_ IEnumDMO **ppEnum);
        END_INTERFACE
    } IEnumDMOVtbl;
    interface IEnumDMO
    {
        CONST_VTBL struct IEnumDMOVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Next(This,cItemsToFetch,pCLSID,Names,pcItemsFetched) )
    ( (This)->lpVtbl -> Skip(This,cItemsToSkip) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Clone(This,ppEnum) )
enum _DMO_INPLACE_PROCESS_FLAGS
    {
        DMO_INPLACE_NORMAL = 0,
        DMO_INPLACE_ZERO = 0x1
    } ;
extern RPC_IF_HANDLE __MIDL_itf_mediaobj_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mediaobj_0000_0003_v0_0_s_ifspec;
EXTERN_C const IID IID_IMediaObjectInPlace;
    typedef struct IMediaObjectInPlaceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMediaObjectInPlace * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMediaObjectInPlace * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMediaObjectInPlace * This);
        HRESULT ( STDMETHODCALLTYPE *Process )(
            IMediaObjectInPlace * This,
                       ULONG ulSize,
            _Out_writes_bytes_(ulSize) BYTE *pData,
                       REFERENCE_TIME refTimeStart,
                       DWORD dwFlags);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            IMediaObjectInPlace * This,
            _Out_ IMediaObjectInPlace **ppMediaObject);
        HRESULT ( STDMETHODCALLTYPE *GetLatency )(
            IMediaObjectInPlace * This,
            _Out_ REFERENCE_TIME *pLatencyTime);
        END_INTERFACE
    } IMediaObjectInPlaceVtbl;
    interface IMediaObjectInPlace
    {
        CONST_VTBL struct IMediaObjectInPlaceVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Process(This,ulSize,pData,refTimeStart,dwFlags) )
    ( (This)->lpVtbl -> Clone(This,ppMediaObject) )
    ( (This)->lpVtbl -> GetLatency(This,pLatencyTime) )
enum _DMO_QUALITY_STATUS_FLAGS
    {
        DMO_QUALITY_STATUS_ENABLED = 0x1
    } ;
extern RPC_IF_HANDLE __MIDL_itf_mediaobj_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mediaobj_0000_0004_v0_0_s_ifspec;
EXTERN_C const IID IID_IDMOQualityControl;
    typedef struct IDMOQualityControlVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDMOQualityControl * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDMOQualityControl * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDMOQualityControl * This);
        HRESULT ( STDMETHODCALLTYPE *SetNow )(
            IDMOQualityControl * This,
                       REFERENCE_TIME rtNow);
        HRESULT ( STDMETHODCALLTYPE *SetStatus )(
            IDMOQualityControl * This,
                       DWORD dwFlags);
        HRESULT ( STDMETHODCALLTYPE *GetStatus )(
            IDMOQualityControl * This,
            _Out_ DWORD *pdwFlags);
        END_INTERFACE
    } IDMOQualityControlVtbl;
    interface IDMOQualityControl
    {
        CONST_VTBL struct IDMOQualityControlVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetNow(This,rtNow) )
    ( (This)->lpVtbl -> SetStatus(This,dwFlags) )
    ( (This)->lpVtbl -> GetStatus(This,pdwFlags) )
enum _DMO_VIDEO_OUTPUT_STREAM_FLAGS
    {
        DMO_VOSF_NEEDS_PREVIOUS_SAMPLE = 0x1
    } ;
extern RPC_IF_HANDLE __MIDL_itf_mediaobj_0000_0005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mediaobj_0000_0005_v0_0_s_ifspec;
EXTERN_C const IID IID_IDMOVideoOutputOptimizations;
    typedef struct IDMOVideoOutputOptimizationsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDMOVideoOutputOptimizations * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDMOVideoOutputOptimizations * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDMOVideoOutputOptimizations * This);
        HRESULT ( STDMETHODCALLTYPE *QueryOperationModePreferences )(
            IDMOVideoOutputOptimizations * This,
            ULONG ulOutputStreamIndex,
            _Out_ DWORD *pdwRequestedCapabilities);
        HRESULT ( STDMETHODCALLTYPE *SetOperationMode )(
            IDMOVideoOutputOptimizations * This,
            ULONG ulOutputStreamIndex,
            DWORD dwEnabledFeatures);
        HRESULT ( STDMETHODCALLTYPE *GetCurrentOperationMode )(
            IDMOVideoOutputOptimizations * This,
            ULONG ulOutputStreamIndex,
            _Out_ DWORD *pdwEnabledFeatures);
        HRESULT ( STDMETHODCALLTYPE *GetCurrentSampleRequirements )(
            IDMOVideoOutputOptimizations * This,
            ULONG ulOutputStreamIndex,
            _Out_ DWORD *pdwRequestedFeatures);
        END_INTERFACE
    } IDMOVideoOutputOptimizationsVtbl;
    interface IDMOVideoOutputOptimizations
    {
        CONST_VTBL struct IDMOVideoOutputOptimizationsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> QueryOperationModePreferences(This,ulOutputStreamIndex,pdwRequestedCapabilities) )
    ( (This)->lpVtbl -> SetOperationMode(This,ulOutputStreamIndex,dwEnabledFeatures) )
    ( (This)->lpVtbl -> GetCurrentOperationMode(This,ulOutputStreamIndex,pdwEnabledFeatures) )
    ( (This)->lpVtbl -> GetCurrentSampleRequirements(This,ulOutputStreamIndex,pdwRequestedFeatures) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_mediaobj_0000_0006_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mediaobj_0000_0006_v0_0_s_ifspec;
}

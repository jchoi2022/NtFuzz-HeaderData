#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IMFTransform IMFTransform;
typedef interface IMFDeviceTransform IMFDeviceTransform;
typedef interface IMFDeviceTransformCallback IMFDeviceTransformCallback;
#include "mfobjects.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_GAMES)
#endif
#pragma endregion
#pragma region Application or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_GAMES)
enum _MFT_INPUT_DATA_BUFFER_FLAGS
    {
        MFT_INPUT_DATA_BUFFER_PLACEHOLDER = 0xffffffff
    } ;
enum _MFT_OUTPUT_DATA_BUFFER_FLAGS
    {
        MFT_OUTPUT_DATA_BUFFER_INCOMPLETE = 0x1000000,
        MFT_OUTPUT_DATA_BUFFER_FORMAT_CHANGE = 0x100,
        MFT_OUTPUT_DATA_BUFFER_STREAM_END = 0x200,
        MFT_OUTPUT_DATA_BUFFER_NO_SAMPLE = 0x300
    } ;
enum _MFT_INPUT_STATUS_FLAGS
    {
        MFT_INPUT_STATUS_ACCEPT_DATA = 0x1
    } ;
enum _MFT_OUTPUT_STATUS_FLAGS
    {
        MFT_OUTPUT_STATUS_SAMPLE_READY = 0x1
    } ;
enum _MFT_INPUT_STREAM_INFO_FLAGS
    {
        MFT_INPUT_STREAM_WHOLE_SAMPLES = 0x1,
        MFT_INPUT_STREAM_SINGLE_SAMPLE_PER_BUFFER = 0x2,
        MFT_INPUT_STREAM_FIXED_SAMPLE_SIZE = 0x4,
        MFT_INPUT_STREAM_HOLDS_BUFFERS = 0x8,
        MFT_INPUT_STREAM_DOES_NOT_ADDREF = 0x100,
        MFT_INPUT_STREAM_REMOVABLE = 0x200,
        MFT_INPUT_STREAM_OPTIONAL = 0x400,
        MFT_INPUT_STREAM_PROCESSES_IN_PLACE = 0x800
    } ;
enum _MFT_OUTPUT_STREAM_INFO_FLAGS
    {
        MFT_OUTPUT_STREAM_WHOLE_SAMPLES = 0x1,
        MFT_OUTPUT_STREAM_SINGLE_SAMPLE_PER_BUFFER = 0x2,
        MFT_OUTPUT_STREAM_FIXED_SAMPLE_SIZE = 0x4,
        MFT_OUTPUT_STREAM_DISCARDABLE = 0x8,
        MFT_OUTPUT_STREAM_OPTIONAL = 0x10,
        MFT_OUTPUT_STREAM_PROVIDES_SAMPLES = 0x100,
        MFT_OUTPUT_STREAM_CAN_PROVIDE_SAMPLES = 0x200,
        MFT_OUTPUT_STREAM_LAZY_READ = 0x400,
        MFT_OUTPUT_STREAM_REMOVABLE = 0x800
    } ;
enum _MFT_SET_TYPE_FLAGS
    {
        MFT_SET_TYPE_TEST_ONLY = 0x1
    } ;
enum _MFT_PROCESS_OUTPUT_FLAGS
    {
        MFT_PROCESS_OUTPUT_DISCARD_WHEN_NO_BUFFER = 0x1,
        MFT_PROCESS_OUTPUT_REGENERATE_LAST_OUTPUT = 0x2
    } ;
enum _MFT_PROCESS_OUTPUT_STATUS
    {
        MFT_PROCESS_OUTPUT_STATUS_NEW_STREAMS = 0x100
    } ;
enum _MFT_DRAIN_TYPE
    {
        MFT_DRAIN_PRODUCE_TAILS = 0,
        MFT_DRAIN_NO_TAILS = 0x1
    } ;
typedef
enum _MFT_MESSAGE_TYPE
    {
        MFT_MESSAGE_COMMAND_FLUSH = 0,
        MFT_MESSAGE_COMMAND_DRAIN = 0x1,
        MFT_MESSAGE_SET_D3D_MANAGER = 0x2,
        MFT_MESSAGE_DROP_SAMPLES = 0x3,
        MFT_MESSAGE_COMMAND_TICK = 0x4,
        MFT_MESSAGE_NOTIFY_BEGIN_STREAMING = 0x10000000,
        MFT_MESSAGE_NOTIFY_END_STREAMING = 0x10000001,
        MFT_MESSAGE_NOTIFY_END_OF_STREAM = 0x10000002,
        MFT_MESSAGE_NOTIFY_START_OF_STREAM = 0x10000003,
        MFT_MESSAGE_NOTIFY_RELEASE_RESOURCES = 0x10000004,
        MFT_MESSAGE_NOTIFY_REACQUIRE_RESOURCES = 0x10000005,
        MFT_MESSAGE_NOTIFY_EVENT = 0x10000006,
        MFT_MESSAGE_COMMAND_SET_OUTPUT_STREAM_STATE = 0x10000007,
        MFT_MESSAGE_COMMAND_FLUSH_OUTPUT_STREAM = 0x10000008,
        MFT_MESSAGE_COMMAND_MARKER = 0x20000000
    } MFT_MESSAGE_TYPE;
typedef struct _MFT_INPUT_STREAM_INFO
    {
    LONGLONG hnsMaxLatency;
    DWORD dwFlags;
    DWORD cbSize;
    DWORD cbMaxLookahead;
    DWORD cbAlignment;
    } MFT_INPUT_STREAM_INFO;
typedef struct _MFT_OUTPUT_STREAM_INFO
    {
    DWORD dwFlags;
    DWORD cbSize;
    DWORD cbAlignment;
    } MFT_OUTPUT_STREAM_INFO;
typedef struct _MFT_OUTPUT_DATA_BUFFER
    {
    DWORD dwStreamID;
    IMFSample *pSample;
    DWORD dwStatus;
    IMFCollection *pEvents;
    } MFT_OUTPUT_DATA_BUFFER;
typedef struct _MFT_OUTPUT_DATA_BUFFER *PMFT_OUTPUT_DATA_BUFFER;
extern RPC_IF_HANDLE __MIDL_itf_mftransform_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mftransform_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFTransform;
    typedef struct IMFTransformVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMFTransform * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMFTransform * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMFTransform * This);
        HRESULT ( STDMETHODCALLTYPE *GetStreamLimits )(
            __RPC__in IMFTransform * This,
                        __RPC__out DWORD *pdwInputMinimum,
                        __RPC__out DWORD *pdwInputMaximum,
                        __RPC__out DWORD *pdwOutputMinimum,
                        __RPC__out DWORD *pdwOutputMaximum);
        HRESULT ( STDMETHODCALLTYPE *GetStreamCount )(
            __RPC__in IMFTransform * This,
                        __RPC__out DWORD *pcInputStreams,
                        __RPC__out DWORD *pcOutputStreams);
        HRESULT ( STDMETHODCALLTYPE *GetStreamIDs )(
            __RPC__in IMFTransform * This,
            DWORD dwInputIDArraySize,
                                 __RPC__out_ecount_full(dwInputIDArraySize) DWORD *pdwInputIDs,
            DWORD dwOutputIDArraySize,
                                 __RPC__out_ecount_full(dwOutputIDArraySize) DWORD *pdwOutputIDs);
        HRESULT ( STDMETHODCALLTYPE *GetInputStreamInfo )(
            __RPC__in IMFTransform * This,
            DWORD dwInputStreamID,
                        __RPC__out MFT_INPUT_STREAM_INFO *pStreamInfo);
        HRESULT ( STDMETHODCALLTYPE *GetOutputStreamInfo )(
            __RPC__in IMFTransform * This,
            DWORD dwOutputStreamID,
                        __RPC__out MFT_OUTPUT_STREAM_INFO *pStreamInfo);
        HRESULT ( STDMETHODCALLTYPE *GetAttributes )(
            __RPC__in IMFTransform * This,
                        __RPC__deref_out_opt IMFAttributes **pAttributes);
        HRESULT ( STDMETHODCALLTYPE *GetInputStreamAttributes )(
            __RPC__in IMFTransform * This,
            DWORD dwInputStreamID,
                        __RPC__deref_out_opt IMFAttributes **pAttributes);
        HRESULT ( STDMETHODCALLTYPE *GetOutputStreamAttributes )(
            __RPC__in IMFTransform * This,
            DWORD dwOutputStreamID,
                        __RPC__deref_out_opt IMFAttributes **pAttributes);
        HRESULT ( STDMETHODCALLTYPE *DeleteInputStream )(
            __RPC__in IMFTransform * This,
            DWORD dwStreamID);
        HRESULT ( STDMETHODCALLTYPE *AddInputStreams )(
            __RPC__in IMFTransform * This,
            DWORD cStreams,
                       __RPC__in DWORD *adwStreamIDs);
        HRESULT ( STDMETHODCALLTYPE *GetInputAvailableType )(
            __RPC__in IMFTransform * This,
            DWORD dwInputStreamID,
            DWORD dwTypeIndex,
                        __RPC__deref_out_opt IMFMediaType **ppType);
        HRESULT ( STDMETHODCALLTYPE *GetOutputAvailableType )(
            __RPC__in IMFTransform * This,
            DWORD dwOutputStreamID,
            DWORD dwTypeIndex,
                        __RPC__deref_out_opt IMFMediaType **ppType);
        HRESULT ( STDMETHODCALLTYPE *SetInputType )(
            __RPC__in IMFTransform * This,
            DWORD dwInputStreamID,
                       __RPC__in_opt IMFMediaType *pType,
            DWORD dwFlags);
        HRESULT ( STDMETHODCALLTYPE *SetOutputType )(
            __RPC__in IMFTransform * This,
            DWORD dwOutputStreamID,
                       __RPC__in_opt IMFMediaType *pType,
            DWORD dwFlags);
        HRESULT ( STDMETHODCALLTYPE *GetInputCurrentType )(
            __RPC__in IMFTransform * This,
            DWORD dwInputStreamID,
                        __RPC__deref_out_opt IMFMediaType **ppType);
        HRESULT ( STDMETHODCALLTYPE *GetOutputCurrentType )(
            __RPC__in IMFTransform * This,
            DWORD dwOutputStreamID,
                        __RPC__deref_out_opt IMFMediaType **ppType);
        HRESULT ( STDMETHODCALLTYPE *GetInputStatus )(
            __RPC__in IMFTransform * This,
            DWORD dwInputStreamID,
                        __RPC__out DWORD *pdwFlags);
        HRESULT ( STDMETHODCALLTYPE *GetOutputStatus )(
            __RPC__in IMFTransform * This,
                        __RPC__out DWORD *pdwFlags);
        HRESULT ( STDMETHODCALLTYPE *SetOutputBounds )(
            __RPC__in IMFTransform * This,
            LONGLONG hnsLowerBound,
            LONGLONG hnsUpperBound);
        HRESULT ( STDMETHODCALLTYPE *ProcessEvent )(
            __RPC__in IMFTransform * This,
            DWORD dwInputStreamID,
                       __RPC__in_opt IMFMediaEvent *pEvent);
        HRESULT ( STDMETHODCALLTYPE *ProcessMessage )(
            __RPC__in IMFTransform * This,
            MFT_MESSAGE_TYPE eMessage,
            ULONG_PTR ulParam);
                      HRESULT ( STDMETHODCALLTYPE *ProcessInput )(
            IMFTransform * This,
            DWORD dwInputStreamID,
            IMFSample *pSample,
            DWORD dwFlags);
                      HRESULT ( STDMETHODCALLTYPE *ProcessOutput )(
            IMFTransform * This,
            DWORD dwFlags,
            DWORD cOutputBufferCount,
                                     MFT_OUTPUT_DATA_BUFFER *pOutputSamples,
                        DWORD *pdwStatus);
        END_INTERFACE
    } IMFTransformVtbl;
    interface IMFTransform
    {
        CONST_VTBL struct IMFTransformVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetStreamLimits(This,pdwInputMinimum,pdwInputMaximum,pdwOutputMinimum,pdwOutputMaximum) )
    ( (This)->lpVtbl -> GetStreamCount(This,pcInputStreams,pcOutputStreams) )
    ( (This)->lpVtbl -> GetStreamIDs(This,dwInputIDArraySize,pdwInputIDs,dwOutputIDArraySize,pdwOutputIDs) )
    ( (This)->lpVtbl -> GetInputStreamInfo(This,dwInputStreamID,pStreamInfo) )
    ( (This)->lpVtbl -> GetOutputStreamInfo(This,dwOutputStreamID,pStreamInfo) )
    ( (This)->lpVtbl -> GetAttributes(This,pAttributes) )
    ( (This)->lpVtbl -> GetInputStreamAttributes(This,dwInputStreamID,pAttributes) )
    ( (This)->lpVtbl -> GetOutputStreamAttributes(This,dwOutputStreamID,pAttributes) )
    ( (This)->lpVtbl -> DeleteInputStream(This,dwStreamID) )
    ( (This)->lpVtbl -> AddInputStreams(This,cStreams,adwStreamIDs) )
    ( (This)->lpVtbl -> GetInputAvailableType(This,dwInputStreamID,dwTypeIndex,ppType) )
    ( (This)->lpVtbl -> GetOutputAvailableType(This,dwOutputStreamID,dwTypeIndex,ppType) )
    ( (This)->lpVtbl -> SetInputType(This,dwInputStreamID,pType,dwFlags) )
    ( (This)->lpVtbl -> SetOutputType(This,dwOutputStreamID,pType,dwFlags) )
    ( (This)->lpVtbl -> GetInputCurrentType(This,dwInputStreamID,ppType) )
    ( (This)->lpVtbl -> GetOutputCurrentType(This,dwOutputStreamID,ppType) )
    ( (This)->lpVtbl -> GetInputStatus(This,dwInputStreamID,pdwFlags) )
    ( (This)->lpVtbl -> GetOutputStatus(This,pdwFlags) )
    ( (This)->lpVtbl -> SetOutputBounds(This,hnsLowerBound,hnsUpperBound) )
    ( (This)->lpVtbl -> ProcessEvent(This,dwInputStreamID,pEvent) )
    ( (This)->lpVtbl -> ProcessMessage(This,eMessage,ulParam) )
    ( (This)->lpVtbl -> ProcessInput(This,dwInputStreamID,pSample,dwFlags) )
    ( (This)->lpVtbl -> ProcessOutput(This,dwFlags,cOutputBufferCount,pOutputSamples,pdwStatus) )
#endif
#pragma endregion
typedef
enum _DeviceStreamState
    {
        DeviceStreamState_Stop = 0,
        DeviceStreamState_Pause = ( DeviceStreamState_Stop + 1 ) ,
        DeviceStreamState_Run = ( DeviceStreamState_Pause + 1 ) ,
        DeviceStreamState_Disabled = ( DeviceStreamState_Run + 1 )
    } DeviceStreamState;
typedef enum _DeviceStreamState *PDeviceStreamState;
EXTERN_GUID(MEDeviceStreamCreated, 0x0252a1cf, 0x3540, 0x43b4, 0x91, 0x64, 0xd7, 0x2e, 0xb4, 0x05, 0xfa, 0x40);
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef struct _STREAM_MEDIUM
    {
    GUID gidMedium;
    UINT32 unMediumInstance;
    } STREAM_MEDIUM;
typedef struct _STREAM_MEDIUM *PSTREAM_MEDIUM;
#endif
#pragma endregion
#pragma region Application or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_GAMES)
EXTERN_C const DECLSPEC_SELECTANY PROPERTYKEY MFPKEY_CLSID = { { 0xc57a84c0, 0x1a80, 0x40a3, {0x97, 0xb5, 0x92, 0x72, 0xa4, 0x3, 0xc8, 0xae} }, 0x01 };
EXTERN_C const DECLSPEC_SELECTANY PROPERTYKEY MFPKEY_CATEGORY = { { 0xc57a84c0, 0x1a80, 0x40a3, {0x97, 0xb5, 0x92, 0x72, 0xa4, 0x3, 0xc8, 0xae} }, 0x02 };
EXTERN_C const DECLSPEC_SELECTANY PROPERTYKEY MFPKEY_EXATTRIBUTE_SUPPORTED = { { 0x456fe843, 0x3c87, 0x40c0, {0x94, 0x9d, 0x14, 0x9, 0xc9, 0x7d, 0xab, 0x2c} }, 0x01 };
EXTERN_C const DECLSPEC_SELECTANY PROPERTYKEY MFPKEY_MULTICHANNEL_CHANNEL_MASK = { { 0x58bdaf8c, 0x3224, 0x4692, { 0x86, 0xd0, 0x44, 0xd6, 0x5c, 0x5b, 0xf8, 0x2b } }, 0x01 };
EXTERN_C const DECLSPEC_SELECTANY GUID MF_SA_D3D_AWARE = { 0xeaa35c29, 0x775e, 0x488e, { 0x9b, 0x61, 0xb3, 0x28, 0x3e, 0x49, 0x58, 0x3b } };
EXTERN_C const DECLSPEC_SELECTANY GUID MF_SA_REQUIRED_SAMPLE_COUNT = { 0x18802c61, 0x324b, 0x4952, { 0xab, 0xd0, 0x17, 0x6f, 0xf5, 0xc6, 0x96, 0xff } };
 EXTERN_C const DECLSPEC_SELECTANY GUID MFT_END_STREAMING_AWARE = { 0x70fbc845, 0xb07e, 0x4089, { 0xb0, 0x64, 0x39, 0x9d, 0xc6, 0x11, 0xf, 0x29 } };
 EXTERN_C const DECLSPEC_SELECTANY GUID MF_SA_AUDIO_ENDPOINT_AWARE = { 0xc0381701, 0x805c, 0x42b2,{ 0xac, 0x8d, 0xe2, 0xb4, 0xbf, 0x21, 0xf4, 0xf8 } };
 EXTERN_C const DECLSPEC_SELECTANY GUID MFT_AUDIO_DECODER_AUDIO_ENDPOINT_ID = { 0xc7ccdd6e, 0x5398, 0x4695,{ 0x8b, 0xe7, 0x51, 0xb3, 0xe9, 0x51, 0x11, 0xbd } };
 EXTERN_C const DECLSPEC_SELECTANY GUID MFT_AUDIO_DECODER_SPATIAL_METADATA_CLIENT = { 0x5987df4, 0x1270, 0x4999,{ 0x92, 0x5f, 0x8e, 0x93, 0x9a, 0x7c, 0xa, 0xf7 } };
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_mftransform_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mftransform_0000_0001_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFDeviceTransform;
    typedef struct IMFDeviceTransformVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFDeviceTransform * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFDeviceTransform * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFDeviceTransform * This);
        HRESULT ( STDMETHODCALLTYPE *InitializeTransform )(
            IMFDeviceTransform * This,
            _In_ IMFAttributes *pAttributes);
        HRESULT ( STDMETHODCALLTYPE *GetInputAvailableType )(
            IMFDeviceTransform * This,
            _In_ DWORD dwInputStreamID,
            _In_ DWORD dwTypeIndex,
            _COM_Outptr_ IMFMediaType **pMediaType);
        HRESULT ( STDMETHODCALLTYPE *GetInputCurrentType )(
            IMFDeviceTransform * This,
            _In_ DWORD dwInputStreamID,
            _COM_Outptr_ IMFMediaType **pMediaType);
        HRESULT ( STDMETHODCALLTYPE *GetInputStreamAttributes )(
            IMFDeviceTransform * This,
            _In_ DWORD dwInputStreamID,
            _COM_Outptr_ IMFAttributes **ppAttributes);
        HRESULT ( STDMETHODCALLTYPE *GetOutputAvailableType )(
            IMFDeviceTransform * This,
            _In_ DWORD dwOutputStreamID,
            _In_ DWORD dwTypeIndex,
            _COM_Outptr_ IMFMediaType **pMediaType);
        HRESULT ( STDMETHODCALLTYPE *GetOutputCurrentType )(
            IMFDeviceTransform * This,
            _In_ DWORD dwOutputStreamID,
            _COM_Outptr_ IMFMediaType **pMediaType);
        HRESULT ( STDMETHODCALLTYPE *GetOutputStreamAttributes )(
            IMFDeviceTransform * This,
            _In_ DWORD dwOutputStreamID,
            _COM_Outptr_ IMFAttributes **ppAttributes);
        HRESULT ( STDMETHODCALLTYPE *GetStreamCount )(
            IMFDeviceTransform * This,
            _Out_ DWORD *pcInputStreams,
            _Out_ DWORD *pcOutputStreams);
        HRESULT ( STDMETHODCALLTYPE *GetStreamIDs )(
            IMFDeviceTransform * This,
            _In_ DWORD dwInputIDArraySize,
            _Out_ DWORD *pdwInputStreamIds,
            _In_ DWORD dwOutputIDArraySize,
            _Out_ DWORD *pdwOutputStreamIds);
        HRESULT ( STDMETHODCALLTYPE *ProcessEvent )(
            IMFDeviceTransform * This,
            _In_ DWORD dwInputStreamID,
            _In_ IMFMediaEvent *pEvent);
        HRESULT ( STDMETHODCALLTYPE *ProcessInput )(
            IMFDeviceTransform * This,
            _In_ DWORD dwInputStreamID,
            _In_ IMFSample *pSample,
            _In_ DWORD dwFlags);
        HRESULT ( STDMETHODCALLTYPE *ProcessMessage )(
            IMFDeviceTransform * This,
            _In_ MFT_MESSAGE_TYPE eMessage,
            _In_ ULONG_PTR ulParam);
        HRESULT ( STDMETHODCALLTYPE *ProcessOutput )(
            IMFDeviceTransform * This,
            _In_ DWORD dwFlags,
            _In_ DWORD cOutputBufferCount,
            _Inout_ MFT_OUTPUT_DATA_BUFFER *pOutputSample,
            _Out_ DWORD *pdwStatus);
        HRESULT ( STDMETHODCALLTYPE *SetInputStreamState )(
            IMFDeviceTransform * This,
            _In_ DWORD dwStreamID,
            _In_ IMFMediaType *pMediaType,
            _In_ DeviceStreamState value,
            _In_ DWORD dwFlags);
        HRESULT ( STDMETHODCALLTYPE *GetInputStreamState )(
            IMFDeviceTransform * This,
            _In_ DWORD dwStreamID,
            _Out_ DeviceStreamState *value);
        HRESULT ( STDMETHODCALLTYPE *SetOutputStreamState )(
            IMFDeviceTransform * This,
            _In_ DWORD dwStreamID,
            _In_ IMFMediaType *pMediaType,
            _In_ DeviceStreamState value,
            _In_ DWORD dwFlags);
        HRESULT ( STDMETHODCALLTYPE *GetOutputStreamState )(
            IMFDeviceTransform * This,
            _In_ DWORD dwStreamID,
            _Out_ DeviceStreamState *value);
        HRESULT ( STDMETHODCALLTYPE *GetInputStreamPreferredState )(
            IMFDeviceTransform * This,
            _In_ DWORD dwStreamID,
            _Out_ DeviceStreamState *value,
            _COM_Outptr_ IMFMediaType **ppMediaType);
        HRESULT ( STDMETHODCALLTYPE *FlushInputStream )(
            IMFDeviceTransform * This,
            _In_ DWORD dwStreamIndex,
            _In_ DWORD dwFlags);
        HRESULT ( STDMETHODCALLTYPE *FlushOutputStream )(
            IMFDeviceTransform * This,
            _In_ DWORD dwStreamIndex,
            _In_ DWORD dwFlags);
        END_INTERFACE
    } IMFDeviceTransformVtbl;
    interface IMFDeviceTransform
    {
        CONST_VTBL struct IMFDeviceTransformVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> InitializeTransform(This,pAttributes) )
    ( (This)->lpVtbl -> GetInputAvailableType(This,dwInputStreamID,dwTypeIndex,pMediaType) )
    ( (This)->lpVtbl -> GetInputCurrentType(This,dwInputStreamID,pMediaType) )
    ( (This)->lpVtbl -> GetInputStreamAttributes(This,dwInputStreamID,ppAttributes) )
    ( (This)->lpVtbl -> GetOutputAvailableType(This,dwOutputStreamID,dwTypeIndex,pMediaType) )
    ( (This)->lpVtbl -> GetOutputCurrentType(This,dwOutputStreamID,pMediaType) )
    ( (This)->lpVtbl -> GetOutputStreamAttributes(This,dwOutputStreamID,ppAttributes) )
    ( (This)->lpVtbl -> GetStreamCount(This,pcInputStreams,pcOutputStreams) )
    ( (This)->lpVtbl -> GetStreamIDs(This,dwInputIDArraySize,pdwInputStreamIds,dwOutputIDArraySize,pdwOutputStreamIds) )
    ( (This)->lpVtbl -> ProcessEvent(This,dwInputStreamID,pEvent) )
    ( (This)->lpVtbl -> ProcessInput(This,dwInputStreamID,pSample,dwFlags) )
    ( (This)->lpVtbl -> ProcessMessage(This,eMessage,ulParam) )
    ( (This)->lpVtbl -> ProcessOutput(This,dwFlags,cOutputBufferCount,pOutputSample,pdwStatus) )
    ( (This)->lpVtbl -> SetInputStreamState(This,dwStreamID,pMediaType,value,dwFlags) )
    ( (This)->lpVtbl -> GetInputStreamState(This,dwStreamID,value) )
    ( (This)->lpVtbl -> SetOutputStreamState(This,dwStreamID,pMediaType,value,dwFlags) )
    ( (This)->lpVtbl -> GetOutputStreamState(This,dwStreamID,value) )
    ( (This)->lpVtbl -> GetInputStreamPreferredState(This,dwStreamID,value,ppMediaType) )
    ( (This)->lpVtbl -> FlushInputStream(This,dwStreamIndex,dwFlags) )
    ( (This)->lpVtbl -> FlushOutputStream(This,dwStreamIndex,dwFlags) )
EXTERN_GUID( MF_DMFT_FRAME_BUFFER_INFO, 0x396CE1C9, 0x67A9, 0x454C, 0x87, 0x97, 0x95, 0xA4, 0x57, 0x99, 0xD8, 0x04);
extern RPC_IF_HANDLE __MIDL_itf_mftransform_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mftransform_0000_0002_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFDeviceTransformCallback;
    typedef struct IMFDeviceTransformCallbackVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFDeviceTransformCallback * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFDeviceTransformCallback * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFDeviceTransformCallback * This);
        HRESULT ( STDMETHODCALLTYPE *OnBufferSent )(
            IMFDeviceTransformCallback * This,
            _In_ IMFAttributes *pCallbackAttributes,
            _In_ DWORD pinId);
        END_INTERFACE
    } IMFDeviceTransformCallbackVtbl;
    interface IMFDeviceTransformCallback
    {
        CONST_VTBL struct IMFDeviceTransformCallbackVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnBufferSent(This,pCallbackAttributes,pinId) )
#pragma region Application or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_GAMES)
EXTERN_C const DECLSPEC_SELECTANY GUID MF_SA_REQUIRED_SAMPLE_COUNT_PROGRESSIVE = { 0xb172d58e, 0xfa77, 0x4e48, { 0x8d, 0x2a, 0x1d, 0xf2, 0xd8, 0x50, 0xea, 0xc2 } };
EXTERN_C const DECLSPEC_SELECTANY GUID MF_SA_MINIMUM_OUTPUT_SAMPLE_COUNT = { 0x851745d5, 0xc3d6, 0x476d, { 0x95, 0x27, 0x49, 0x8e, 0xf2, 0xd1, 0xd, 0x18 } };
EXTERN_C const DECLSPEC_SELECTANY GUID MF_SA_MINIMUM_OUTPUT_SAMPLE_COUNT_PROGRESSIVE = { 0xf5523a5, 0x1cb2, 0x47c5, { 0xa5, 0x50, 0x2e, 0xeb, 0x84, 0xb4, 0xd1, 0x4a } };
EXTERN_C const DECLSPEC_SELECTANY GUID MFT_SUPPORT_3DVIDEO = { 0x93f81b1, 0x4f2e, 0x4631, { 0x81, 0x68, 0x79, 0x34, 0x3, 0x2a, 0x1, 0xd3 } };
typedef
enum _MF3DVideoOutputType
    {
        MF3DVideoOutputType_BaseView = 0,
        MF3DVideoOutputType_Stereo = 1
    } MF3DVideoOutputType;
EXTERN_C const DECLSPEC_SELECTANY GUID MF_ENABLE_3DVIDEO_OUTPUT = { 0xbdad7bca, 0xe5f, 0x4b10, { 0xab, 0x16, 0x26, 0xde, 0x38, 0x1b, 0x62, 0x93 } };
EXTERN_C const DECLSPEC_SELECTANY GUID MF_SA_D3D11_BINDFLAGS = { 0xeacf97ad, 0x065c, 0x4408, { 0xbe, 0xe3, 0xfd, 0xcb, 0xfd, 0x12, 0x8b, 0xe2 } };
EXTERN_C const DECLSPEC_SELECTANY GUID MF_SA_D3D11_USAGE = { 0xe85fe442, 0x2ca3, 0x486e, { 0xa9, 0xc7, 0x10, 0x9d, 0xda, 0x60, 0x98, 0x80 } };
EXTERN_C const DECLSPEC_SELECTANY GUID MF_SA_D3D11_AWARE = { 0x206b4fc8, 0xfcf9, 0x4c51, { 0xaf, 0xe3, 0x97, 0x64, 0x36, 0x9e, 0x33, 0xa0 } };
EXTERN_C const DECLSPEC_SELECTANY GUID MF_SA_D3D11_SHARED = { 0x7b8f32c3, 0x6d96, 0x4b89, { 0x92, 0x3, 0xdd, 0x38, 0xb6, 0x14, 0x14, 0xf3 } };
EXTERN_C const DECLSPEC_SELECTANY GUID MF_SA_D3D11_SHARED_WITHOUT_MUTEX = { 0x39dbd44d, 0x2e44, 0x4931, { 0xa4, 0xc8, 0x35, 0x2d, 0x3d, 0xc4, 0x21, 0x15 } };
EXTERN_C const DECLSPEC_SELECTANY GUID MF_SA_D3D11_ALLOW_DYNAMIC_YUV_TEXTURE = { 0xce06d49f, 0x613, 0x4b9d, { 0x86, 0xa6, 0xd8, 0xc4, 0xf9, 0xc1, 0x0, 0x75 } };
EXTERN_C const DECLSPEC_SELECTANY GUID MF_SA_D3D11_HW_PROTECTED = { 0x3a8ba9d9, 0x92ca, 0x4307, { 0xa3, 0x91, 0x69, 0x99, 0xdb, 0xf3, 0xb6, 0xce } };
EXTERN_C const DECLSPEC_SELECTANY GUID MF_SA_BUFFERS_PER_SAMPLE = { 0x873c5171, 0x1e3d, 0x4e25, { 0x98, 0x8d, 0xb4, 0x33, 0xce, 0x04, 0x19, 0x83 } };
EXTERN_C const DECLSPEC_SELECTANY GUID MFT_DECODER_EXPOSE_OUTPUT_TYPES_IN_NATIVE_ORDER = { 0xef80833f, 0xf8fa, 0x44d9, { 0x80, 0xd8, 0x41, 0xed, 0x62, 0x32, 0x67, 0xc } };
EXTERN_C const DECLSPEC_SELECTANY GUID MFT_DECODER_QUALITY_MANAGEMENT_CUSTOM_CONTROL = { 0xa24e30d7, 0xde25, 0x4558, { 0xbb, 0xfb, 0x71, 0x7, 0xa, 0x2d, 0x33, 0x2e } };
EXTERN_C const DECLSPEC_SELECTANY GUID MFT_DECODER_QUALITY_MANAGEMENT_RECOVERY_WITHOUT_ARTIFACTS = { 0xd8980deb, 0xa48, 0x425f, { 0x86, 0x23, 0x61, 0x1d, 0xb4, 0x1d, 0x38, 0x10 } };
EXTERN_C const DECLSPEC_SELECTANY GUID MFT_REMUX_MARK_I_PICTURE_AS_CLEAN_POINT = { 0x364e8f85, 0x3f2e, 0x436c, { 0xb2, 0xa2, 0x44, 0x40, 0xa0, 0x12, 0xa9, 0xe8} };
EXTERN_C const DECLSPEC_SELECTANY GUID MFT_DECODER_FINAL_VIDEO_RESOLUTION_HINT = { 0xdc2f8496, 0x15c4, 0x407a, { 0xb6, 0xf0, 0x1b, 0x66, 0xab, 0x5f, 0xbf, 0x53 } };
EXTERN_C const DECLSPEC_SELECTANY GUID MFT_ENCODER_SUPPORTS_CONFIG_EVENT = { 0x86a355ae, 0x3a77, 0x4ec4, { 0x9f, 0x31, 0x1, 0x14, 0x9a, 0x4e, 0x92, 0xde } };
EXTERN_C const DECLSPEC_SELECTANY GUID MFT_ENUM_HARDWARE_VENDOR_ID_Attribute = { 0x3aecb0cc, 0x35b, 0x4bcc, { 0x81, 0x85, 0x2b, 0x8d, 0x55, 0x1e, 0xf3, 0xaf } };
#endif
#pragma endregion
#pragma region Application or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_GAMES)
EXTERN_C const DECLSPEC_SELECTANY GUID MF_TRANSFORM_ASYNC = { 0xf81a699a, 0x649a, 0x497d, { 0x8c, 0x73, 0x29, 0xf8, 0xfe, 0xd6, 0xad, 0x7a } };
EXTERN_C const DECLSPEC_SELECTANY GUID MF_TRANSFORM_ASYNC_UNLOCK = { 0xe5666d6b, 0x3422, 0x4eb6, { 0xa4, 0x21, 0xda, 0x7d, 0xb1, 0xf8, 0xe2, 0x7 } };
EXTERN_C const DECLSPEC_SELECTANY GUID MF_TRANSFORM_FLAGS_Attribute = { 0x9359bb7e, 0x6275, 0x46c4, { 0xa0, 0x25, 0x1c, 0x1, 0xe4, 0x5f, 0x1a, 0x86 } };
EXTERN_C const DECLSPEC_SELECTANY GUID MF_TRANSFORM_CATEGORY_Attribute = { 0xceabba49, 0x506d, 0x4757, { 0xa6, 0xff, 0x66, 0xc1, 0x84, 0x98, 0x7e, 0x4e } };
EXTERN_C const DECLSPEC_SELECTANY GUID MFT_TRANSFORM_CLSID_Attribute = { 0x6821c42b, 0x65a4, 0x4e82, { 0x99, 0xbc, 0x9a, 0x88, 0x20, 0x5e, 0xcd, 0xc } };
EXTERN_C const DECLSPEC_SELECTANY GUID MFT_INPUT_TYPES_Attributes = { 0x4276c9b1, 0x759d, 0x4bf3, { 0x9c, 0xd0, 0xd, 0x72, 0x3d, 0x13, 0x8f, 0x96 } };
EXTERN_C const DECLSPEC_SELECTANY GUID MFT_OUTPUT_TYPES_Attributes = { 0x8eae8cf3, 0xa44f, 0x4306, { 0xba, 0x5c, 0xbf, 0x5d, 0xda, 0x24, 0x28, 0x18 } };
EXTERN_C const DECLSPEC_SELECTANY GUID MFT_ENUM_HARDWARE_URL_Attribute = { 0x2fb866ac, 0xb078, 0x4942, { 0xab, 0x6c, 0x0, 0x3d, 0x5, 0xcd, 0xa6, 0x74 } };
EXTERN_C const DECLSPEC_SELECTANY GUID MFT_FRIENDLY_NAME_Attribute = { 0x314ffbae, 0x5b41, 0x4c95, { 0x9c, 0x19, 0x4e, 0x7d, 0x58, 0x6f, 0xac, 0xe3 } };
EXTERN_C const DECLSPEC_SELECTANY GUID MFT_CONNECTED_STREAM_ATTRIBUTE = { 0x71eeb820, 0xa59f, 0x4de2, {0xbc, 0xec, 0x38, 0xdb, 0x1d, 0xd6, 0x11, 0xa4} };
EXTERN_C const DECLSPEC_SELECTANY GUID MFT_CONNECTED_TO_HW_STREAM = { 0x34e6e728, 0x6d6, 0x4491, { 0xa5, 0x53, 0x47, 0x95, 0x65, 0xd, 0xb9, 0x12 } };
EXTERN_C const DECLSPEC_SELECTANY GUID MFT_PREFERRED_OUTPUTTYPE_Attribute = { 0x7e700499, 0x396a, 0x49ee, { 0xb1, 0xb4, 0xf6, 0x28, 0x2, 0x1e, 0x8c, 0x9d } };
EXTERN_C const DECLSPEC_SELECTANY GUID MFT_PROCESS_LOCAL_Attribute = { 0x543186e4, 0x4649, 0x4e65, { 0xb5, 0x88, 0x4a, 0xa3, 0x52, 0xaf, 0xf3, 0x79 } };
EXTERN_C const DECLSPEC_SELECTANY GUID MFT_PREFERRED_ENCODER_PROFILE = { 0x53004909, 0x1ef5, 0x46d7, { 0xa1, 0x8e, 0x5a, 0x75, 0xf8, 0xb5, 0x90, 0x5f } };
EXTERN_C const DECLSPEC_SELECTANY GUID MFT_HW_TIMESTAMP_WITH_QPC_Attribute = { 0x8d030fb8, 0xcc43, 0x4258, { 0xa2, 0x2e, 0x92, 0x10, 0xbe, 0xf8, 0x9b, 0xe4 } };
EXTERN_C const DECLSPEC_SELECTANY GUID MFT_FIELDOFUSE_UNLOCK_Attribute = { 0x8ec2e9fd, 0x9148, 0x410d, { 0x83, 0x1e, 0x70, 0x24, 0x39, 0x46, 0x1a, 0x8e } };
EXTERN_C const DECLSPEC_SELECTANY GUID MFT_CODEC_MERIT_Attribute = { 0x88a7cb15, 0x7b07, 0x4a34, { 0x91, 0x28, 0xe6, 0x4c, 0x67, 0x3, 0xc4, 0xd3 } };
EXTERN_C const DECLSPEC_SELECTANY GUID MFT_ENUM_TRANSCODE_ONLY_ATTRIBUTE = { 0x111ea8cd, 0xb62a, 0x4bdb, { 0x89, 0xf6, 0x67, 0xff, 0xcd, 0xc2, 0x45, 0x8b } };
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
STDAPI
MFCreateTransformActivate(
    _Out_ IMFActivate** ppActivate
    );
#endif
#pragma endregion
#pragma region Track Error Improvements
EXTERN_GUID( MFT_AUDIO_DECODER_DEGRADATION_INFO_ATTRIBUTE, 0x6c3386ad, 0xec20, 0x430d, 0xb2, 0xa5, 0x50, 0x5c, 0x71, 0x78, 0xd9, 0xc4);
typedef
enum MFT_AUDIO_DECODER_DEGRADATION_REASON
    {
        MFT_AUDIO_DECODER_DEGRADATION_REASON_NONE = 0,
        MFT_AUDIO_DECODER_DEGRADATION_REASON_LICENSING_REQUIREMENT = 1
    } MFT_AUDIO_DECODER_DEGRADATION_REASON;
typedef
enum MFT_AUDIO_DECODER_DEGRADATION_TYPE
    {
        MFT_AUDIO_DECODER_DEGRADATION_TYPE_NONE = 0,
        MFT_AUDIO_DECODER_DEGRADATION_TYPE_DOWNMIX2CHANNEL = 1,
        MFT_AUDIO_DECODER_DEGRADATION_TYPE_DOWNMIX6CHANNEL = 2,
        MFT_AUDIO_DECODER_DEGRADATION_TYPE_DOWNMIX8CHANNEL = 3
    } MFT_AUDIO_DECODER_DEGRADATION_TYPE;
typedef struct MFAudioDecoderDegradationInfo
    {
    MFT_AUDIO_DECODER_DEGRADATION_REASON eDegradationReason;
    MFT_AUDIO_DECODER_DEGRADATION_TYPE eType;
    } MFAudioDecoderDegradationInfo;
typedef struct _MFT_STREAM_STATE_PARAM
    {
    DWORD StreamId;
    MF_STREAM_STATE State;
    } MFT_STREAM_STATE_PARAM;
typedef struct _MFT_STREAM_STATE_PARAM *PMFT_STREAM_STATE_PARAM;
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_mftransform_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mftransform_0000_0003_v0_0_s_ifspec;
}

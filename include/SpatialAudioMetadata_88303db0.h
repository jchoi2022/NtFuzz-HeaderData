#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface ISpatialAudioMetadataItems ISpatialAudioMetadataItems;
typedef interface ISpatialAudioMetadataWriter ISpatialAudioMetadataWriter;
typedef interface ISpatialAudioMetadataReader ISpatialAudioMetadataReader;
typedef interface ISpatialAudioMetadataCopier ISpatialAudioMetadataCopier;
typedef interface ISpatialAudioMetadataItemsBuffer ISpatialAudioMetadataItemsBuffer;
typedef interface ISpatialAudioMetadataClient ISpatialAudioMetadataClient;
typedef interface ISpatialAudioObjectForMetadataCommands ISpatialAudioObjectForMetadataCommands;
typedef interface ISpatialAudioObjectForMetadataItems ISpatialAudioObjectForMetadataItems;
typedef interface ISpatialAudioObjectRenderStreamForMetadata ISpatialAudioObjectRenderStreamForMetadata;
#include "wtypes.h"
#include "unknwn.h"
#include "hstring.h"
#include "propidl.h"
#include "SpatialAudioClient.h"
extern "C"{
#include <winapifamily.h>
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
typedef
enum SpatialAudioMetadataWriterOverflowMode
    {
        SpatialAudioMetadataWriterOverflow_Fail = 0,
        SpatialAudioMetadataWriterOverflow_MergeWithNew = ( SpatialAudioMetadataWriterOverflow_Fail + 1 ) ,
        SpatialAudioMetadataWriterOverflow_MergeWithLast = ( SpatialAudioMetadataWriterOverflow_MergeWithNew + 1 )
    } SpatialAudioMetadataWriterOverflowMode;
typedef
enum SpatialAudioMetadataCopyMode
    {
        SpatialAudioMetadataCopy_Overwrite = 0,
        SpatialAudioMetadataCopy_Append = ( SpatialAudioMetadataCopy_Overwrite + 1 ) ,
        SpatialAudioMetadataCopy_AppendMergeWithLast = ( SpatialAudioMetadataCopy_Append + 1 ) ,
        SpatialAudioMetadataCopy_AppendMergeWithFirst = ( SpatialAudioMetadataCopy_AppendMergeWithLast + 1 )
    } SpatialAudioMetadataCopyMode;
#pragma pack(push, 1)
typedef struct SpatialAudioMetadataItemsInfo
    {
    UINT16 FrameCount;
    UINT16 ItemCount;
    UINT16 MaxItemCount;
    UINT32 MaxValueBufferLength;
    } SpatialAudioMetadataItemsInfo;
typedef struct SpatialAudioObjectRenderStreamForMetadataActivationParams
    {
    const WAVEFORMATEX *ObjectFormat;
    AudioObjectType StaticObjectTypeMask;
    UINT32 MinDynamicObjectCount;
    UINT32 MaxDynamicObjectCount;
    AUDIO_STREAM_CATEGORY Category;
    HANDLE EventHandle;
    GUID MetadataFormatId;
    UINT16 MaxMetadataItemCount;
    const PROPVARIANT *MetadataActivationParams;
    ISpatialAudioObjectRenderStreamNotify *NotifyObject;
    } SpatialAudioObjectRenderStreamForMetadataActivationParams;
#pragma pack(pop)
extern RPC_IF_HANDLE __MIDL_itf_spatialaudiometadata_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_spatialaudiometadata_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_ISpatialAudioMetadataItems;
    typedef struct ISpatialAudioMetadataItemsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISpatialAudioMetadataItems * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISpatialAudioMetadataItems * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISpatialAudioMetadataItems * This);
        HRESULT ( STDMETHODCALLTYPE *GetFrameCount )(
            ISpatialAudioMetadataItems * This,
            _Out_ UINT16 *frameCount);
        HRESULT ( STDMETHODCALLTYPE *GetItemCount )(
            ISpatialAudioMetadataItems * This,
            _Out_ UINT16 *itemCount);
        HRESULT ( STDMETHODCALLTYPE *GetMaxItemCount )(
            ISpatialAudioMetadataItems * This,
            _Out_ UINT16 *maxItemCount);
        HRESULT ( STDMETHODCALLTYPE *GetMaxValueBufferLength )(
            ISpatialAudioMetadataItems * This,
            _Out_ UINT32 *maxValueBufferLength);
        HRESULT ( STDMETHODCALLTYPE *GetInfo )(
            ISpatialAudioMetadataItems * This,
            _Out_ SpatialAudioMetadataItemsInfo *info);
        END_INTERFACE
    } ISpatialAudioMetadataItemsVtbl;
    interface ISpatialAudioMetadataItems
    {
        CONST_VTBL struct ISpatialAudioMetadataItemsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetFrameCount(This,frameCount) )
    ( (This)->lpVtbl -> GetItemCount(This,itemCount) )
    ( (This)->lpVtbl -> GetMaxItemCount(This,maxItemCount) )
    ( (This)->lpVtbl -> GetMaxValueBufferLength(This,maxValueBufferLength) )
    ( (This)->lpVtbl -> GetInfo(This,info) )
EXTERN_C const IID IID_ISpatialAudioMetadataWriter;
    typedef struct ISpatialAudioMetadataWriterVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISpatialAudioMetadataWriter * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISpatialAudioMetadataWriter * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISpatialAudioMetadataWriter * This);
        HRESULT ( STDMETHODCALLTYPE *Open )(
            ISpatialAudioMetadataWriter * This,
            _In_ ISpatialAudioMetadataItems *metadataItems);
        HRESULT ( STDMETHODCALLTYPE *WriteNextItem )(
            ISpatialAudioMetadataWriter * This,
            _In_ UINT16 frameOffset);
        HRESULT ( STDMETHODCALLTYPE *WriteNextItemCommand )(
            ISpatialAudioMetadataWriter * This,
            _In_ BYTE commandID,
            _In_reads_bytes_opt_(valueBufferLength) const void *valueBuffer,
            _In_ UINT32 valueBufferLength);
        HRESULT ( STDMETHODCALLTYPE *Close )(
            ISpatialAudioMetadataWriter * This);
        END_INTERFACE
    } ISpatialAudioMetadataWriterVtbl;
    interface ISpatialAudioMetadataWriter
    {
        CONST_VTBL struct ISpatialAudioMetadataWriterVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Open(This,metadataItems) )
    ( (This)->lpVtbl -> WriteNextItem(This,frameOffset) )
    ( (This)->lpVtbl -> WriteNextItemCommand(This,commandID,valueBuffer,valueBufferLength) )
    ( (This)->lpVtbl -> Close(This) )
EXTERN_C const IID IID_ISpatialAudioMetadataReader;
    typedef struct ISpatialAudioMetadataReaderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISpatialAudioMetadataReader * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISpatialAudioMetadataReader * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISpatialAudioMetadataReader * This);
        HRESULT ( STDMETHODCALLTYPE *Open )(
            ISpatialAudioMetadataReader * This,
            _In_ ISpatialAudioMetadataItems *metadataItems);
        HRESULT ( STDMETHODCALLTYPE *ReadNextItem )(
            ISpatialAudioMetadataReader * This,
            _Out_ UINT8 *commandCount,
            _Out_ UINT16 *frameOffset);
        HRESULT ( STDMETHODCALLTYPE *ReadNextItemCommand )(
            ISpatialAudioMetadataReader * This,
            _Out_ BYTE *commandID,
            _Out_writes_bytes_(maxValueBufferLength) void *valueBuffer,
            _In_ UINT32 maxValueBufferLength,
            _Out_ UINT32 *valueBufferLength);
        HRESULT ( STDMETHODCALLTYPE *Close )(
            ISpatialAudioMetadataReader * This);
        END_INTERFACE
    } ISpatialAudioMetadataReaderVtbl;
    interface ISpatialAudioMetadataReader
    {
        CONST_VTBL struct ISpatialAudioMetadataReaderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Open(This,metadataItems) )
    ( (This)->lpVtbl -> ReadNextItem(This,commandCount,frameOffset) )
    ( (This)->lpVtbl -> ReadNextItemCommand(This,commandID,valueBuffer,maxValueBufferLength,valueBufferLength) )
    ( (This)->lpVtbl -> Close(This) )
EXTERN_C const IID IID_ISpatialAudioMetadataCopier;
    typedef struct ISpatialAudioMetadataCopierVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISpatialAudioMetadataCopier * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISpatialAudioMetadataCopier * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISpatialAudioMetadataCopier * This);
        HRESULT ( STDMETHODCALLTYPE *Open )(
            ISpatialAudioMetadataCopier * This,
            _In_ ISpatialAudioMetadataItems *metadataItems);
        HRESULT ( STDMETHODCALLTYPE *CopyMetadataForFrames )(
            ISpatialAudioMetadataCopier * This,
            _In_ UINT16 copyFrameCount,
            _In_ SpatialAudioMetadataCopyMode copyMode,
            _In_ ISpatialAudioMetadataItems *dstMetadataItems,
            _Out_ UINT16 *itemsCopied);
        HRESULT ( STDMETHODCALLTYPE *Close )(
            ISpatialAudioMetadataCopier * This);
        END_INTERFACE
    } ISpatialAudioMetadataCopierVtbl;
    interface ISpatialAudioMetadataCopier
    {
        CONST_VTBL struct ISpatialAudioMetadataCopierVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Open(This,metadataItems) )
    ( (This)->lpVtbl -> CopyMetadataForFrames(This,copyFrameCount,copyMode,dstMetadataItems,itemsCopied) )
    ( (This)->lpVtbl -> Close(This) )
EXTERN_C const IID IID_ISpatialAudioMetadataItemsBuffer;
    typedef struct ISpatialAudioMetadataItemsBufferVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISpatialAudioMetadataItemsBuffer * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISpatialAudioMetadataItemsBuffer * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISpatialAudioMetadataItemsBuffer * This);
        HRESULT ( STDMETHODCALLTYPE *AttachToBuffer )(
            ISpatialAudioMetadataItemsBuffer * This,
            _Out_writes_bytes_(bufferLength) BYTE *buffer,
            _In_ UINT32 bufferLength);
        HRESULT ( STDMETHODCALLTYPE *AttachToPopulatedBuffer )(
            ISpatialAudioMetadataItemsBuffer * This,
            _Out_writes_bytes_(bufferLength) BYTE *buffer,
            _In_ UINT32 bufferLength);
        HRESULT ( STDMETHODCALLTYPE *DetachBuffer )(
            ISpatialAudioMetadataItemsBuffer * This);
        END_INTERFACE
    } ISpatialAudioMetadataItemsBufferVtbl;
    interface ISpatialAudioMetadataItemsBuffer
    {
        CONST_VTBL struct ISpatialAudioMetadataItemsBufferVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AttachToBuffer(This,buffer,bufferLength) )
    ( (This)->lpVtbl -> AttachToPopulatedBuffer(This,buffer,bufferLength) )
    ( (This)->lpVtbl -> DetachBuffer(This) )
EXTERN_C const IID IID_ISpatialAudioMetadataClient;
    typedef struct ISpatialAudioMetadataClientVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISpatialAudioMetadataClient * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISpatialAudioMetadataClient * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISpatialAudioMetadataClient * This);
        HRESULT ( STDMETHODCALLTYPE *ActivateSpatialAudioMetadataItems )(
            ISpatialAudioMetadataClient * This,
            _In_ UINT16 maxItemCount,
            _In_ UINT16 frameCount,
            _Outptr_opt_result_nullonfailure_ ISpatialAudioMetadataItemsBuffer **metadataItemsBuffer,
            _Outptr_result_nullonfailure_ ISpatialAudioMetadataItems **metadataItems);
        HRESULT ( STDMETHODCALLTYPE *GetSpatialAudioMetadataItemsBufferLength )(
            ISpatialAudioMetadataClient * This,
            _In_ UINT16 maxItemCount,
            _Out_ UINT32 *bufferLength);
        HRESULT ( STDMETHODCALLTYPE *ActivateSpatialAudioMetadataWriter )(
            ISpatialAudioMetadataClient * This,
            _In_ SpatialAudioMetadataWriterOverflowMode overflowMode,
            _Outptr_result_nullonfailure_ ISpatialAudioMetadataWriter **metadataWriter);
        HRESULT ( STDMETHODCALLTYPE *ActivateSpatialAudioMetadataCopier )(
            ISpatialAudioMetadataClient * This,
            _Outptr_result_nullonfailure_ ISpatialAudioMetadataCopier **metadataCopier);
        HRESULT ( STDMETHODCALLTYPE *ActivateSpatialAudioMetadataReader )(
            ISpatialAudioMetadataClient * This,
            _Outptr_result_nullonfailure_ ISpatialAudioMetadataReader **metadataReader);
        END_INTERFACE
    } ISpatialAudioMetadataClientVtbl;
    interface ISpatialAudioMetadataClient
    {
        CONST_VTBL struct ISpatialAudioMetadataClientVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> ActivateSpatialAudioMetadataItems(This,maxItemCount,frameCount,metadataItemsBuffer,metadataItems) )
    ( (This)->lpVtbl -> GetSpatialAudioMetadataItemsBufferLength(This,maxItemCount,bufferLength) )
    ( (This)->lpVtbl -> ActivateSpatialAudioMetadataWriter(This,overflowMode,metadataWriter) )
    ( (This)->lpVtbl -> ActivateSpatialAudioMetadataCopier(This,metadataCopier) )
    ( (This)->lpVtbl -> ActivateSpatialAudioMetadataReader(This,metadataReader) )
EXTERN_C const IID IID_ISpatialAudioObjectForMetadataCommands;
    typedef struct ISpatialAudioObjectForMetadataCommandsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISpatialAudioObjectForMetadataCommands * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISpatialAudioObjectForMetadataCommands * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISpatialAudioObjectForMetadataCommands * This);
        HRESULT ( STDMETHODCALLTYPE *GetBuffer )(
            ISpatialAudioObjectForMetadataCommands * This,
            _Outptr_result_bytebuffer_(*bufferLength) BYTE **buffer,
            _Out_ UINT32 *bufferLength);
        HRESULT ( STDMETHODCALLTYPE *SetEndOfStream )(
            ISpatialAudioObjectForMetadataCommands * This,
            _In_ UINT32 frameCount);
        HRESULT ( STDMETHODCALLTYPE *IsActive )(
            ISpatialAudioObjectForMetadataCommands * This,
            _Out_ BOOL *isActive);
        HRESULT ( STDMETHODCALLTYPE *GetAudioObjectType )(
            ISpatialAudioObjectForMetadataCommands * This,
            _Out_ AudioObjectType *audioObjectType);
        HRESULT ( STDMETHODCALLTYPE *WriteNextMetadataCommand )(
            ISpatialAudioObjectForMetadataCommands * This,
            _In_ BYTE commandID,
            _In_reads_bytes_opt_(valueBufferLength) void *valueBuffer,
            _In_ UINT32 valueBufferLength);
        END_INTERFACE
    } ISpatialAudioObjectForMetadataCommandsVtbl;
    interface ISpatialAudioObjectForMetadataCommands
    {
        CONST_VTBL struct ISpatialAudioObjectForMetadataCommandsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetBuffer(This,buffer,bufferLength) )
    ( (This)->lpVtbl -> SetEndOfStream(This,frameCount) )
    ( (This)->lpVtbl -> IsActive(This,isActive) )
    ( (This)->lpVtbl -> GetAudioObjectType(This,audioObjectType) )
    ( (This)->lpVtbl -> WriteNextMetadataCommand(This,commandID,valueBuffer,valueBufferLength) )
EXTERN_C const IID IID_ISpatialAudioObjectForMetadataItems;
    typedef struct ISpatialAudioObjectForMetadataItemsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISpatialAudioObjectForMetadataItems * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISpatialAudioObjectForMetadataItems * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISpatialAudioObjectForMetadataItems * This);
        HRESULT ( STDMETHODCALLTYPE *GetBuffer )(
            ISpatialAudioObjectForMetadataItems * This,
            _Outptr_result_bytebuffer_(*bufferLength) BYTE **buffer,
            _Out_ UINT32 *bufferLength);
        HRESULT ( STDMETHODCALLTYPE *SetEndOfStream )(
            ISpatialAudioObjectForMetadataItems * This,
            _In_ UINT32 frameCount);
        HRESULT ( STDMETHODCALLTYPE *IsActive )(
            ISpatialAudioObjectForMetadataItems * This,
            _Out_ BOOL *isActive);
        HRESULT ( STDMETHODCALLTYPE *GetAudioObjectType )(
            ISpatialAudioObjectForMetadataItems * This,
            _Out_ AudioObjectType *audioObjectType);
        HRESULT ( STDMETHODCALLTYPE *GetSpatialAudioMetadataItems )(
            ISpatialAudioObjectForMetadataItems * This,
            _Outptr_result_nullonfailure_ ISpatialAudioMetadataItems **metadataItems);
        END_INTERFACE
    } ISpatialAudioObjectForMetadataItemsVtbl;
    interface ISpatialAudioObjectForMetadataItems
    {
        CONST_VTBL struct ISpatialAudioObjectForMetadataItemsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetBuffer(This,buffer,bufferLength) )
    ( (This)->lpVtbl -> SetEndOfStream(This,frameCount) )
    ( (This)->lpVtbl -> IsActive(This,isActive) )
    ( (This)->lpVtbl -> GetAudioObjectType(This,audioObjectType) )
    ( (This)->lpVtbl -> GetSpatialAudioMetadataItems(This,metadataItems) )
EXTERN_C const IID IID_ISpatialAudioObjectRenderStreamForMetadata;
    typedef struct ISpatialAudioObjectRenderStreamForMetadataVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISpatialAudioObjectRenderStreamForMetadata * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISpatialAudioObjectRenderStreamForMetadata * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISpatialAudioObjectRenderStreamForMetadata * This);
        HRESULT ( STDMETHODCALLTYPE *GetAvailableDynamicObjectCount )(
            ISpatialAudioObjectRenderStreamForMetadata * This,
            _Out_ UINT32 *value);
        HRESULT ( STDMETHODCALLTYPE *GetService )(
            ISpatialAudioObjectRenderStreamForMetadata * This,
            _In_ REFIID riid,
            _COM_Outptr_ void **service);
        HRESULT ( STDMETHODCALLTYPE *Start )(
            ISpatialAudioObjectRenderStreamForMetadata * This);
        HRESULT ( STDMETHODCALLTYPE *Stop )(
            ISpatialAudioObjectRenderStreamForMetadata * This);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            ISpatialAudioObjectRenderStreamForMetadata * This);
        HRESULT ( STDMETHODCALLTYPE *BeginUpdatingAudioObjects )(
            ISpatialAudioObjectRenderStreamForMetadata * This,
            _Out_ UINT32 *availableDynamicObjectCount,
            _Out_ UINT32 *frameCountPerBuffer);
        HRESULT ( STDMETHODCALLTYPE *EndUpdatingAudioObjects )(
            ISpatialAudioObjectRenderStreamForMetadata * This);
        HRESULT ( STDMETHODCALLTYPE *ActivateSpatialAudioObjectForMetadataCommands )(
            ISpatialAudioObjectRenderStreamForMetadata * This,
            _In_ AudioObjectType type,
            _COM_Outptr_ ISpatialAudioObjectForMetadataCommands **audioObject);
        HRESULT ( STDMETHODCALLTYPE *ActivateSpatialAudioObjectForMetadataItems )(
            ISpatialAudioObjectRenderStreamForMetadata * This,
            _In_ AudioObjectType type,
            _COM_Outptr_ ISpatialAudioObjectForMetadataItems **audioObject);
        END_INTERFACE
    } ISpatialAudioObjectRenderStreamForMetadataVtbl;
    interface ISpatialAudioObjectRenderStreamForMetadata
    {
        CONST_VTBL struct ISpatialAudioObjectRenderStreamForMetadataVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetAvailableDynamicObjectCount(This,value) )
    ( (This)->lpVtbl -> GetService(This,riid,service) )
    ( (This)->lpVtbl -> Start(This) )
    ( (This)->lpVtbl -> Stop(This) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> BeginUpdatingAudioObjects(This,availableDynamicObjectCount,frameCountPerBuffer) )
    ( (This)->lpVtbl -> EndUpdatingAudioObjects(This) )
    ( (This)->lpVtbl -> ActivateSpatialAudioObjectForMetadataCommands(This,type,audioObject) )
    ( (This)->lpVtbl -> ActivateSpatialAudioObjectForMetadataItems(This,type,audioObject) )
#endif
extern RPC_IF_HANDLE __MIDL_itf_spatialaudiometadata_0000_0009_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_spatialaudiometadata_0000_0009_v0_0_s_ifspec;
}

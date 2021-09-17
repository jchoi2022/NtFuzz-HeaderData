#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IDedupDataPort IDedupDataPort;
typedef interface IDedupDataPortManager IDedupDataPortManager;
typedef class DedupDataPort DedupDataPort;
#include "oaidl.h"
#include "ocidl.h"
#include "ddpcommon.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_ddpdataport_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_ddpdataport_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IDedupDataPort;
    typedef struct IDedupDataPortVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDedupDataPort * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDedupDataPort * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDedupDataPort * This);
        HRESULT ( STDMETHODCALLTYPE *GetStatus )(
            __RPC__in IDedupDataPort * This,
                        __RPC__out DedupDataPortVolumeStatus *pStatus,
                                  __RPC__out DWORD *pDataHeadroomMb);
        HRESULT ( STDMETHODCALLTYPE *LookupChunks )(
            __RPC__in IDedupDataPort * This,
                       DWORD Count,
                                __RPC__in_ecount_full(Count) DedupHash *pHashes,
                        __RPC__out GUID *pRequestId);
        HRESULT ( STDMETHODCALLTYPE *InsertChunks )(
            __RPC__in IDedupDataPort * This,
                       DWORD ChunkCount,
                                __RPC__in_ecount_full(ChunkCount) DedupChunk *pChunkMetadata,
                       DWORD DataByteCount,
                                __RPC__in_ecount_full(DataByteCount) BYTE *pChunkData,
                        __RPC__out GUID *pRequestId);
        HRESULT ( STDMETHODCALLTYPE *InsertChunksWithStream )(
            __RPC__in IDedupDataPort * This,
                       DWORD ChunkCount,
                                __RPC__in_ecount_full(ChunkCount) DedupChunk *pChunkMetadata,
                       DWORD DataByteCount,
                       __RPC__in_opt IStream *pChunkDataStream,
                        __RPC__out GUID *pRequestId);
        HRESULT ( STDMETHODCALLTYPE *CommitStreams )(
            __RPC__in IDedupDataPort * This,
                       DWORD StreamCount,
                                __RPC__in_ecount_full(StreamCount) DedupStream *pStreams,
                       DWORD EntryCount,
                                __RPC__in_ecount_full(EntryCount) DedupStreamEntry *pEntries,
                        __RPC__out GUID *pRequestId);
        HRESULT ( STDMETHODCALLTYPE *CommitStreamsWithStream )(
            __RPC__in IDedupDataPort * This,
                       DWORD StreamCount,
                                __RPC__in_ecount_full(StreamCount) DedupStream *pStreams,
                       DWORD EntryCount,
                       __RPC__in_opt IStream *pEntriesStream,
                        __RPC__out GUID *pRequestId);
        HRESULT ( STDMETHODCALLTYPE *GetStreams )(
            __RPC__in IDedupDataPort * This,
                       DWORD StreamCount,
                                __RPC__in_ecount_full(StreamCount) BSTR *pStreamPaths,
                        __RPC__out GUID *pRequestId);
        HRESULT ( STDMETHODCALLTYPE *GetStreamsResults )(
            __RPC__in IDedupDataPort * This,
                       GUID RequestId,
                       DWORD MaxWaitMs,
                       DWORD StreamEntryIndex,
                        __RPC__out DWORD *pStreamCount,
                                          __RPC__deref_out_ecount_full_opt(*pStreamCount) DedupStream **ppStreams,
                        __RPC__out DWORD *pEntryCount,
                                          __RPC__deref_out_ecount_full_opt(*pEntryCount) DedupStreamEntry **ppEntries,
                        __RPC__out DedupDataPortRequestStatus *pStatus,
                                          __RPC__deref_out_ecount_full_opt(*pStreamCount) HRESULT **ppItemResults);
        HRESULT ( STDMETHODCALLTYPE *GetChunks )(
            __RPC__in IDedupDataPort * This,
                       DWORD Count,
                                __RPC__in_ecount_full(Count) DedupHash *pHashes,
                        __RPC__out GUID *pRequestId);
        HRESULT ( STDMETHODCALLTYPE *GetChunksResults )(
            __RPC__in IDedupDataPort * This,
                       GUID RequestId,
                       DWORD MaxWaitMs,
                       DWORD ChunkIndex,
                        __RPC__out DWORD *pChunkCount,
                                          __RPC__deref_out_ecount_full_opt(*pChunkCount) DedupChunk **ppChunkMetadata,
                        __RPC__out DWORD *pDataByteCount,
                                          __RPC__deref_out_ecount_full_opt(*pDataByteCount) BYTE **ppChunkData,
                        __RPC__out DedupDataPortRequestStatus *pStatus,
                                          __RPC__deref_out_ecount_full_opt(*pChunkCount) HRESULT **ppItemResults);
        HRESULT ( STDMETHODCALLTYPE *GetRequestStatus )(
            __RPC__in IDedupDataPort * This,
                       GUID RequestId,
                        __RPC__out DedupDataPortRequestStatus *pStatus);
        HRESULT ( STDMETHODCALLTYPE *GetRequestResults )(
            __RPC__in IDedupDataPort * This,
                       GUID RequestId,
                       DWORD MaxWaitMs,
                        __RPC__out HRESULT *pBatchResult,
                        __RPC__out DWORD *pBatchCount,
                        __RPC__out DedupDataPortRequestStatus *pStatus,
                                          __RPC__deref_out_ecount_full_opt(*pBatchCount) HRESULT **ppItemResults);
        END_INTERFACE
    } IDedupDataPortVtbl;
    interface IDedupDataPort
    {
        CONST_VTBL struct IDedupDataPortVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetStatus(This,pStatus,pDataHeadroomMb) )
    ( (This)->lpVtbl -> LookupChunks(This,Count,pHashes,pRequestId) )
    ( (This)->lpVtbl -> InsertChunks(This,ChunkCount,pChunkMetadata,DataByteCount,pChunkData,pRequestId) )
    ( (This)->lpVtbl -> InsertChunksWithStream(This,ChunkCount,pChunkMetadata,DataByteCount,pChunkDataStream,pRequestId) )
    ( (This)->lpVtbl -> CommitStreams(This,StreamCount,pStreams,EntryCount,pEntries,pRequestId) )
    ( (This)->lpVtbl -> CommitStreamsWithStream(This,StreamCount,pStreams,EntryCount,pEntriesStream,pRequestId) )
    ( (This)->lpVtbl -> GetStreams(This,StreamCount,pStreamPaths,pRequestId) )
    ( (This)->lpVtbl -> GetStreamsResults(This,RequestId,MaxWaitMs,StreamEntryIndex,pStreamCount,ppStreams,pEntryCount,ppEntries,pStatus,ppItemResults) )
    ( (This)->lpVtbl -> GetChunks(This,Count,pHashes,pRequestId) )
    ( (This)->lpVtbl -> GetChunksResults(This,RequestId,MaxWaitMs,ChunkIndex,pChunkCount,ppChunkMetadata,pDataByteCount,ppChunkData,pStatus,ppItemResults) )
    ( (This)->lpVtbl -> GetRequestStatus(This,RequestId,pStatus) )
    ( (This)->lpVtbl -> GetRequestResults(This,RequestId,MaxWaitMs,pBatchResult,pBatchCount,pStatus,ppItemResults) )
EXTERN_C const IID IID_IDedupDataPortManager;
    typedef struct IDedupDataPortManagerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDedupDataPortManager * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDedupDataPortManager * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDedupDataPortManager * This);
        HRESULT ( STDMETHODCALLTYPE *GetConfiguration )(
            __RPC__in IDedupDataPortManager * This,
                        __RPC__out DWORD *pMinChunkSize,
                        __RPC__out DWORD *pMaxChunkSize,
                        __RPC__out DedupChunkingAlgorithm *pChunkingAlgorithm,
                        __RPC__out DedupHashingAlgorithm *pHashingAlgorithm,
                        __RPC__out DedupCompressionAlgorithm *pCompressionAlgorithm);
        HRESULT ( STDMETHODCALLTYPE *GetVolumeStatus )(
            __RPC__in IDedupDataPortManager * This,
                       DWORD Options,
                       __RPC__in BSTR Path,
                        __RPC__out DedupDataPortVolumeStatus *pStatus);
        HRESULT ( STDMETHODCALLTYPE *GetVolumeDataPort )(
            __RPC__in IDedupDataPortManager * This,
                       DWORD Options,
                       __RPC__in BSTR Path,
                        __RPC__deref_out_opt IDedupDataPort **ppDataPort);
        END_INTERFACE
    } IDedupDataPortManagerVtbl;
    interface IDedupDataPortManager
    {
        CONST_VTBL struct IDedupDataPortManagerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetConfiguration(This,pMinChunkSize,pMaxChunkSize,pChunkingAlgorithm,pHashingAlgorithm,pCompressionAlgorithm) )
    ( (This)->lpVtbl -> GetVolumeStatus(This,Options,Path,pStatus) )
    ( (This)->lpVtbl -> GetVolumeDataPort(This,Options,Path,ppDataPort) )
EXTERN_C const IID LIBID_DedupDataPort;
EXTERN_C const CLSID CLSID_DedupDataPort;
class DECLSPEC_UUID("8f107207-1829-48b2-a64b-e61f8e0d9acb")
DedupDataPort;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_ddpdataport_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_ddpdataport_0000_0003_v0_0_s_ifspec;
unsigned long __RPC_USER BSTR_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER BSTR_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree64( __RPC__in unsigned long *, __RPC__in BSTR * );
}

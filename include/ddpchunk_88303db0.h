#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IDedupChunkLibrary IDedupChunkLibrary;
typedef interface IDedupIterateChunksHash32 IDedupIterateChunksHash32;
#include "oaidl.h"
#include "ocidl.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
enum _DEDUP_SET_PARAM_TYPE
    {
        DEDUP_PT_MinChunkSizeBytes = 1,
        DEDUP_PT_MaxChunkSizeBytes = 2,
        DEDUP_PT_AvgChunkSizeBytes = 3,
        DEDUP_PT_InvariantChunking = 4,
        DEDUP_PT_DisableStrongHashComputation = 5
    } ;
typedef struct _DEDUP_CHUNK_INFO_HASH32
    {
    DWORD ChunkFlags;
    ULONGLONG ChunkOffsetInStream;
    ULONGLONG ChunkSize;
    BYTE HashVal[ 32 ];
    } DEDUP_CHUNK_INFO_HASH32;
extern RPC_IF_HANDLE __MIDL_itf_ddpchunk_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_ddpchunk_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IDedupChunkLibrary;
    typedef struct IDedupChunkLibraryVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDedupChunkLibrary * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDedupChunkLibrary * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDedupChunkLibrary * This);
        HRESULT ( STDMETHODCALLTYPE *InitializeForPushBuffers )(
            __RPC__in IDedupChunkLibrary * This);
        HRESULT ( STDMETHODCALLTYPE *Uninitialize )(
            __RPC__in IDedupChunkLibrary * This);
        HRESULT ( STDMETHODCALLTYPE *SetParameter )(
            __RPC__in IDedupChunkLibrary * This,
                       DWORD dwParamType,
                       VARIANT vParamValue);
        HRESULT ( STDMETHODCALLTYPE *StartChunking )(
            __RPC__in IDedupChunkLibrary * This,
                       IID iidIteratorInterfaceID,
                        __RPC__deref_out_opt IUnknown **ppChunksEnum);
        END_INTERFACE
    } IDedupChunkLibraryVtbl;
    interface IDedupChunkLibrary
    {
        CONST_VTBL struct IDedupChunkLibraryVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> InitializeForPushBuffers(This) )
    ( (This)->lpVtbl -> Uninitialize(This) )
    ( (This)->lpVtbl -> SetParameter(This,dwParamType,vParamValue) )
    ( (This)->lpVtbl -> StartChunking(This,iidIteratorInterfaceID,ppChunksEnum) )
EXTERN_C const IID IID_IDedupIterateChunksHash32;
    typedef struct IDedupIterateChunksHash32Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDedupIterateChunksHash32 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDedupIterateChunksHash32 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDedupIterateChunksHash32 * This);
        HRESULT ( STDMETHODCALLTYPE *PushBuffer )(
            __RPC__in IDedupIterateChunksHash32 * This,
                                __RPC__in_ecount_full(ulBufferLength) BYTE *pBuffer,
                       ULONG ulBufferLength);
        HRESULT ( STDMETHODCALLTYPE *Next )(
            __RPC__in IDedupIterateChunksHash32 * This,
                              __RPC__in_range(0,DEDUP_CHUNKLIB_MAX_CHUNKS_ENUM) ULONG ulMaxChunks,
                                            __RPC__out_ecount_part(ulMaxChunks, *pulFetched) DEDUP_CHUNK_INFO_HASH32 *pArrChunks,
                        __RPC__out ULONG *pulFetched);
        HRESULT ( STDMETHODCALLTYPE *Drain )(
            __RPC__in IDedupIterateChunksHash32 * This);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IDedupIterateChunksHash32 * This);
        END_INTERFACE
    } IDedupIterateChunksHash32Vtbl;
    interface IDedupIterateChunksHash32
    {
        CONST_VTBL struct IDedupIterateChunksHash32Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> PushBuffer(This,pBuffer,ulBufferLength) )
    ( (This)->lpVtbl -> Next(This,ulMaxChunks,pArrChunks,pulFetched) )
    ( (This)->lpVtbl -> Drain(This) )
    ( (This)->lpVtbl -> Reset(This) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_ddpchunk_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_ddpchunk_0000_0002_v0_0_s_ifspec;
unsigned long __RPC_USER VARIANT_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out VARIANT * );
void __RPC_USER VARIANT_UserFree( __RPC__in unsigned long *, __RPC__in VARIANT * );
unsigned long __RPC_USER VARIANT_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out VARIANT * );
void __RPC_USER VARIANT_UserFree64( __RPC__in unsigned long *, __RPC__in VARIANT * );
}

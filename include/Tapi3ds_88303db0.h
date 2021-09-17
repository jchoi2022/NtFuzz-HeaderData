#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface ITAMMediaFormat ITAMMediaFormat;
typedef interface ITAllocatorProperties ITAllocatorProperties;
#include "oaidl.h"
#include "strmif.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_tapi3ds_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_tapi3ds_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_ITAMMediaFormat;
    typedef struct ITAMMediaFormatVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITAMMediaFormat * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITAMMediaFormat * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITAMMediaFormat * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_MediaFormat )(
            __RPC__in ITAMMediaFormat * This,
                                __RPC__deref_out_opt AM_MEDIA_TYPE **ppmt);
                                        HRESULT ( STDMETHODCALLTYPE *put_MediaFormat )(
            __RPC__in ITAMMediaFormat * This,
                       __RPC__in const AM_MEDIA_TYPE *pmt);
        END_INTERFACE
    } ITAMMediaFormatVtbl;
    interface ITAMMediaFormat
    {
        CONST_VTBL struct ITAMMediaFormatVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_MediaFormat(This,ppmt) )
    ( (This)->lpVtbl -> put_MediaFormat(This,pmt) )
EXTERN_C const IID IID_ITAllocatorProperties;
    typedef struct ITAllocatorPropertiesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITAllocatorProperties * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITAllocatorProperties * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITAllocatorProperties * This);
                               HRESULT ( STDMETHODCALLTYPE *SetAllocatorProperties )(
            __RPC__in ITAllocatorProperties * This,
                       __RPC__in ALLOCATOR_PROPERTIES *pAllocProperties);
                               HRESULT ( STDMETHODCALLTYPE *GetAllocatorProperties )(
            __RPC__in ITAllocatorProperties * This,
                        __RPC__out ALLOCATOR_PROPERTIES *pAllocProperties);
                               HRESULT ( STDMETHODCALLTYPE *SetAllocateBuffers )(
            __RPC__in ITAllocatorProperties * This,
                       BOOL bAllocBuffers);
                               HRESULT ( STDMETHODCALLTYPE *GetAllocateBuffers )(
            __RPC__in ITAllocatorProperties * This,
                        __RPC__out BOOL *pbAllocBuffers);
                               HRESULT ( STDMETHODCALLTYPE *SetBufferSize )(
            __RPC__in ITAllocatorProperties * This,
                       DWORD BufferSize);
                               HRESULT ( STDMETHODCALLTYPE *GetBufferSize )(
            __RPC__in ITAllocatorProperties * This,
                        __RPC__out DWORD *pBufferSize);
        END_INTERFACE
    } ITAllocatorPropertiesVtbl;
    interface ITAllocatorProperties
    {
        CONST_VTBL struct ITAllocatorPropertiesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetAllocatorProperties(This,pAllocProperties) )
    ( (This)->lpVtbl -> GetAllocatorProperties(This,pAllocProperties) )
    ( (This)->lpVtbl -> SetAllocateBuffers(This,bAllocBuffers) )
    ( (This)->lpVtbl -> GetAllocateBuffers(This,pbAllocBuffers) )
    ( (This)->lpVtbl -> SetBufferSize(This,BufferSize) )
    ( (This)->lpVtbl -> GetBufferSize(This,pBufferSize) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_tapi3ds_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_tapi3ds_0000_0002_v0_0_s_ifspec;
}

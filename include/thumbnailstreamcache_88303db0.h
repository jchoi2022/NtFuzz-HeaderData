#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IThumbnailStreamCache IThumbnailStreamCache;
typedef class ThumbnailStreamCache ThumbnailStreamCache;
#include "oaidl.h"
#include "shtypes.h"
#include "shobjidl_core.h"
extern "C"{
#include <winapifamily.h>
#pragma region App Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
typedef
enum ThumbnailStreamCacheOptions
    {
        ExtractIfNotCached = 0,
        ReturnOnlyIfCached = 0x1,
        ResizeThumbnail = 0x2,
        AllowSmallerSize = 0x4
    } ThumbnailStreamCacheOptions;
DEFINE_ENUM_FLAG_OPERATORS(ThumbnailStreamCacheOptions)
extern RPC_IF_HANDLE __MIDL_itf_thumbnailstreamcache_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_thumbnailstreamcache_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IThumbnailStreamCache;
    typedef struct IThumbnailStreamCacheVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IThumbnailStreamCache * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IThumbnailStreamCache * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IThumbnailStreamCache * This);
        HRESULT ( STDMETHODCALLTYPE *GetThumbnailStream )(
            __RPC__in IThumbnailStreamCache * This,
                       __RPC__in LPCWSTR path,
                       ULONGLONG cacheId,
                       ThumbnailStreamCacheOptions options,
                       UINT requestedThumbnailSize,
                        __RPC__out SIZE *thumbnailSize,
                        __RPC__deref_out_opt IStream **thumbnailStream);
        HRESULT ( STDMETHODCALLTYPE *SetThumbnailStream )(
            __RPC__in IThumbnailStreamCache * This,
                       __RPC__in LPCWSTR path,
                       ULONGLONG cacheId,
                       SIZE thumbnailSize,
                       __RPC__in_opt IStream *thumbnailStream);
        END_INTERFACE
    } IThumbnailStreamCacheVtbl;
    interface IThumbnailStreamCache
    {
        CONST_VTBL struct IThumbnailStreamCacheVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetThumbnailStream(This,path,cacheId,options,requestedThumbnailSize,thumbnailSize,thumbnailStream) )
    ( (This)->lpVtbl -> SetThumbnailStream(This,path,cacheId,thumbnailSize,thumbnailStream) )
EXTERN_C const IID LIBID_ThumbnailStreamCacheLib;
EXTERN_C const CLSID CLSID_ThumbnailStreamCache;
class DECLSPEC_UUID("CBE0FED3-4B91-4E90-8354-8A8C84EC6872")
ThumbnailStreamCache;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_thumbnailstreamcache_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_thumbnailstreamcache_0000_0002_v0_0_s_ifspec;
}

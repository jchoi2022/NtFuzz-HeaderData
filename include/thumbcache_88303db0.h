#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface ISharedBitmap ISharedBitmap;
typedef interface IThumbnailCache IThumbnailCache;
typedef interface IThumbnailProvider IThumbnailProvider;
typedef interface IThumbnailSettings IThumbnailSettings;
typedef interface IThumbnailCachePrimer IThumbnailCachePrimer;
typedef class LocalThumbnailCache LocalThumbnailCache;
typedef class SharedBitmap SharedBitmap;
#include "oaidl.h"
#include "shtypes.h"
#include "shobjidl_core.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef
enum WTS_FLAGS
    {
        WTS_NONE = 0,
        WTS_EXTRACT = 0,
        WTS_INCACHEONLY = 0x1,
        WTS_FASTEXTRACT = 0x2,
        WTS_FORCEEXTRACTION = 0x4,
        WTS_SLOWRECLAIM = 0x8,
        WTS_EXTRACTDONOTCACHE = 0x20,
        WTS_SCALETOREQUESTEDSIZE = 0x40,
        WTS_SKIPFASTEXTRACT = 0x80,
        WTS_EXTRACTINPROC = 0x100,
        WTS_CROPTOSQUARE = 0x200,
        WTS_INSTANCESURROGATE = 0x400,
        WTS_REQUIRESURROGATE = 0x800,
        WTS_APPSTYLE = 0x2000,
        WTS_WIDETHUMBNAILS = 0x4000,
        WTS_IDEALCACHESIZEONLY = 0x8000,
        WTS_SCALEUP = 0x10000
    } WTS_FLAGS;
DEFINE_ENUM_FLAG_OPERATORS(WTS_FLAGS)
typedef
enum WTS_CACHEFLAGS
    {
        WTS_DEFAULT = 0,
        WTS_LOWQUALITY = 0x1,
        WTS_CACHED = 0x2
    } WTS_CACHEFLAGS;
DEFINE_ENUM_FLAG_OPERATORS(WTS_CACHEFLAGS)
typedef
enum WTS_CONTEXTFLAGS
    {
        WTSCF_DEFAULT = 0,
        WTSCF_APPSTYLE = 0x1,
        WTSCF_SQUARE = 0x2,
        WTSCF_WIDE = 0x4,
        WTSCF_FAST = 0x8
    } WTS_CONTEXTFLAGS;
DEFINE_ENUM_FLAG_OPERATORS(WTS_CONTEXTFLAGS)
typedef
enum WTS_ALPHATYPE
    {
        WTSAT_UNKNOWN = 0,
        WTSAT_RGB = 1,
        WTSAT_ARGB = 2
    } WTS_ALPHATYPE;
typedef struct WTS_THUMBNAILID
    {
    BYTE rgbKey[ 16 ];
    } WTS_THUMBNAILID;
extern RPC_IF_HANDLE __MIDL_itf_thumbcache_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_thumbcache_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_ISharedBitmap;
    typedef struct ISharedBitmapVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISharedBitmap * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISharedBitmap * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISharedBitmap * This);
        HRESULT ( STDMETHODCALLTYPE *GetSharedBitmap )(
            __RPC__in ISharedBitmap * This,
                        __RPC__deref_out_opt HBITMAP *phbm);
        HRESULT ( STDMETHODCALLTYPE *GetSize )(
            __RPC__in ISharedBitmap * This,
                        __RPC__out SIZE *pSize);
        HRESULT ( STDMETHODCALLTYPE *GetFormat )(
            __RPC__in ISharedBitmap * This,
                        __RPC__out WTS_ALPHATYPE *pat);
        HRESULT ( STDMETHODCALLTYPE *InitializeBitmap )(
            __RPC__in ISharedBitmap * This,
                       __RPC__in HBITMAP hbm,
                       WTS_ALPHATYPE wtsAT);
        HRESULT ( STDMETHODCALLTYPE *Detach )(
            __RPC__in ISharedBitmap * This,
                        __RPC__deref_out_opt HBITMAP *phbm);
        END_INTERFACE
    } ISharedBitmapVtbl;
    interface ISharedBitmap
    {
        CONST_VTBL struct ISharedBitmapVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetSharedBitmap(This,phbm) )
    ( (This)->lpVtbl -> GetSize(This,pSize) )
    ( (This)->lpVtbl -> GetFormat(This,pat) )
    ( (This)->lpVtbl -> InitializeBitmap(This,hbm,wtsAT) )
    ( (This)->lpVtbl -> Detach(This,phbm) )
EXTERN_C const IID IID_IThumbnailCache;
    typedef struct IThumbnailCacheVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IThumbnailCache * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IThumbnailCache * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IThumbnailCache * This);
                      HRESULT ( STDMETHODCALLTYPE *GetThumbnail )(
            IThumbnailCache * This,
                       IShellItem *pShellItem,
                       UINT cxyRequestedThumbSize,
                       WTS_FLAGS flags,
            _Out_opt_ ISharedBitmap **ppvThumb,
            _Out_opt_ WTS_CACHEFLAGS *pOutFlags,
            _Out_opt_ WTS_THUMBNAILID *pThumbnailID);
                      HRESULT ( STDMETHODCALLTYPE *GetThumbnailByID )(
            IThumbnailCache * This,
                       WTS_THUMBNAILID thumbnailID,
                       UINT cxyRequestedThumbSize,
            _Out_opt_ ISharedBitmap **ppvThumb,
            _Out_opt_ WTS_CACHEFLAGS *pOutFlags);
        END_INTERFACE
    } IThumbnailCacheVtbl;
    interface IThumbnailCache
    {
        CONST_VTBL struct IThumbnailCacheVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetThumbnail(This,pShellItem,cxyRequestedThumbSize,flags,ppvThumb,pOutFlags,pThumbnailID) )
    ( (This)->lpVtbl -> GetThumbnailByID(This,thumbnailID,cxyRequestedThumbSize,ppvThumb,pOutFlags) )
                HRESULT STDMETHODCALLTYPE IThumbnailCache_RemoteGetThumbnail_Proxy(
    __RPC__in IThumbnailCache * This,
               __RPC__in_opt IShellItem *pShellItem,
               UINT cxyRequestedThumbSize,
               WTS_FLAGS flags,
                __RPC__deref_out_opt ISharedBitmap **ppvThumb,
                __RPC__out WTS_CACHEFLAGS *pOutFlags,
                __RPC__out WTS_THUMBNAILID *pThumbnailID);
void __RPC_STUB IThumbnailCache_RemoteGetThumbnail_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                HRESULT STDMETHODCALLTYPE IThumbnailCache_RemoteGetThumbnailByID_Proxy(
    __RPC__in IThumbnailCache * This,
               WTS_THUMBNAILID thumbnailID,
               UINT cxyRequestedThumbSize,
                __RPC__deref_out_opt ISharedBitmap **ppvThumb,
                __RPC__out WTS_CACHEFLAGS *pOutFlags);
void __RPC_STUB IThumbnailCache_RemoteGetThumbnailByID_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
EXTERN_C const IID IID_IThumbnailProvider;
    typedef struct IThumbnailProviderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IThumbnailProvider * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IThumbnailProvider * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IThumbnailProvider * This);
        HRESULT ( STDMETHODCALLTYPE *GetThumbnail )(
            __RPC__in IThumbnailProvider * This,
                       UINT cx,
                        __RPC__deref_out_opt HBITMAP *phbmp,
                        __RPC__out WTS_ALPHATYPE *pdwAlpha);
        END_INTERFACE
    } IThumbnailProviderVtbl;
    interface IThumbnailProvider
    {
        CONST_VTBL struct IThumbnailProviderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetThumbnail(This,cx,phbmp,pdwAlpha) )
EXTERN_C const IID IID_IThumbnailSettings;
    typedef struct IThumbnailSettingsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IThumbnailSettings * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IThumbnailSettings * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IThumbnailSettings * This);
        HRESULT ( STDMETHODCALLTYPE *SetContext )(
            __RPC__in IThumbnailSettings * This,
                       WTS_CONTEXTFLAGS dwContext);
        END_INTERFACE
    } IThumbnailSettingsVtbl;
    interface IThumbnailSettings
    {
        CONST_VTBL struct IThumbnailSettingsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetContext(This,dwContext) )
EXTERN_C const IID IID_IThumbnailCachePrimer;
    typedef struct IThumbnailCachePrimerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IThumbnailCachePrimer * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IThumbnailCachePrimer * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IThumbnailCachePrimer * This);
        HRESULT ( STDMETHODCALLTYPE *PageInThumbnail )(
            __RPC__in IThumbnailCachePrimer * This,
                       __RPC__in_opt IShellItem *psi,
                       WTS_FLAGS wtsFlags,
                       UINT cxyRequestedThumbSize);
        END_INTERFACE
    } IThumbnailCachePrimerVtbl;
    interface IThumbnailCachePrimer
    {
        CONST_VTBL struct IThumbnailCachePrimerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> PageInThumbnail(This,psi,wtsFlags,cxyRequestedThumbSize) )
EXTERN_C const IID LIBID_ThumbCacheLib;
EXTERN_C const CLSID CLSID_LocalThumbnailCache;
class DECLSPEC_UUID("50EF4544-AC9F-4A8E-B21B-8A26180DB13F")
LocalThumbnailCache;
EXTERN_C const CLSID CLSID_SharedBitmap;
class DECLSPEC_UUID("4db26476-6787-4046-b836-e8412a9e8a27")
SharedBitmap;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_thumbcache_0000_0006_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_thumbcache_0000_0006_v0_0_s_ifspec;
unsigned long __RPC_USER HBITMAP_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in HBITMAP * );
unsigned char * __RPC_USER HBITMAP_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HBITMAP * );
unsigned char * __RPC_USER HBITMAP_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HBITMAP * );
void __RPC_USER HBITMAP_UserFree( __RPC__in unsigned long *, __RPC__in HBITMAP * );
unsigned long __RPC_USER HBITMAP_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in HBITMAP * );
unsigned char * __RPC_USER HBITMAP_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HBITMAP * );
unsigned char * __RPC_USER HBITMAP_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HBITMAP * );
void __RPC_USER HBITMAP_UserFree64( __RPC__in unsigned long *, __RPC__in HBITMAP * );
              HRESULT STDMETHODCALLTYPE IThumbnailCache_GetThumbnail_Proxy(
    IThumbnailCache * This,
               IShellItem *pShellItem,
               UINT cxyRequestedThumbSize,
               WTS_FLAGS flags,
    _Out_opt_ ISharedBitmap **ppvThumb,
    _Out_opt_ WTS_CACHEFLAGS *pOutFlags,
    _Out_opt_ WTS_THUMBNAILID *pThumbnailID);
                HRESULT STDMETHODCALLTYPE IThumbnailCache_GetThumbnail_Stub(
    __RPC__in IThumbnailCache * This,
               __RPC__in_opt IShellItem *pShellItem,
               UINT cxyRequestedThumbSize,
               WTS_FLAGS flags,
                __RPC__deref_out_opt ISharedBitmap **ppvThumb,
                __RPC__out WTS_CACHEFLAGS *pOutFlags,
                __RPC__out WTS_THUMBNAILID *pThumbnailID);
              HRESULT STDMETHODCALLTYPE IThumbnailCache_GetThumbnailByID_Proxy(
    IThumbnailCache * This,
               WTS_THUMBNAILID thumbnailID,
               UINT cxyRequestedThumbSize,
    _Out_opt_ ISharedBitmap **ppvThumb,
    _Out_opt_ WTS_CACHEFLAGS *pOutFlags);
                HRESULT STDMETHODCALLTYPE IThumbnailCache_GetThumbnailByID_Stub(
    __RPC__in IThumbnailCache * This,
               WTS_THUMBNAILID thumbnailID,
               UINT cxyRequestedThumbSize,
                __RPC__deref_out_opt ISharedBitmap **ppvThumb,
                __RPC__out WTS_CACHEFLAGS *pOutFlags);
}

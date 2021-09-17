#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface ILoadFilter ILoadFilter;
typedef interface ILoadFilterWithPrivateComActivation ILoadFilterWithPrivateComActivation;
#include "oaidl.h"
#include "ocidl.h"
#include "filter.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
EXTERN_C const CLSID CLSID_FilterRegistration;
extern RPC_IF_HANDLE __MIDL_itf_filtereg_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_filtereg_0000_0000_v0_0_s_ifspec;
typedef struct _FILTERED_DATA_SOURCES
    {
    const WCHAR *pwcsExtension;
    const WCHAR *pwcsMime;
    const CLSID *pClsid;
    const WCHAR *pwcsOverride;
    } FILTERED_DATA_SOURCES;
EXTERN_C const IID IID_ILoadFilter;
    typedef struct ILoadFilterVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ILoadFilter * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ILoadFilter * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ILoadFilter * This);
        HRESULT ( STDMETHODCALLTYPE *LoadIFilter )(
            __RPC__in ILoadFilter * This,
                               __RPC__in_opt LPCWSTR pwcsPath,
                               __RPC__in_opt FILTERED_DATA_SOURCES *pFilteredSources,
                               __RPC__in_opt IUnknown *pUnkOuter,
                       BOOL fUseDefault,
                                    __RPC__inout_opt CLSID *pFilterClsid,
                                    __RPC__inout_opt int *SearchDecSize,
                                                                            __RPC__deref_opt_inout_ecount_part_opt(( *SearchDecSize + 1 ) , ( *SearchDecSize + 1 ) ) WCHAR **pwcsSearchDesc,
                                    __RPC__deref_opt_inout_opt IFilter **ppIFilt);
        HRESULT ( STDMETHODCALLTYPE *LoadIFilterFromStorage )(
            __RPC__in ILoadFilter * This,
                       __RPC__in_opt IStorage *pStg,
                               __RPC__in_opt IUnknown *pUnkOuter,
                               __RPC__in_opt LPCWSTR pwcsOverride,
                       BOOL fUseDefault,
                                    __RPC__inout_opt CLSID *pFilterClsid,
                                    __RPC__inout_opt int *SearchDecSize,
                                                                            __RPC__deref_opt_inout_ecount_part_opt(( *SearchDecSize + 1 ) , ( *SearchDecSize + 1 ) ) WCHAR **pwcsSearchDesc,
                                    __RPC__deref_opt_inout_opt IFilter **ppIFilt);
        HRESULT ( STDMETHODCALLTYPE *LoadIFilterFromStream )(
            __RPC__in ILoadFilter * This,
                       __RPC__in_opt IStream *pStm,
                               __RPC__in_opt FILTERED_DATA_SOURCES *pFilteredSources,
                               __RPC__in_opt IUnknown *pUnkOuter,
                       BOOL fUseDefault,
                                    __RPC__inout_opt CLSID *pFilterClsid,
                                    __RPC__inout_opt int *SearchDecSize,
                                                                            __RPC__deref_opt_inout_ecount_part_opt(( *SearchDecSize + 1 ) , ( *SearchDecSize + 1 ) ) WCHAR **pwcsSearchDesc,
                                    __RPC__deref_opt_inout_opt IFilter **ppIFilt);
        END_INTERFACE
    } ILoadFilterVtbl;
    interface ILoadFilter
    {
        CONST_VTBL struct ILoadFilterVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> LoadIFilter(This,pwcsPath,pFilteredSources,pUnkOuter,fUseDefault,pFilterClsid,SearchDecSize,pwcsSearchDesc,ppIFilt) )
    ( (This)->lpVtbl -> LoadIFilterFromStorage(This,pStg,pUnkOuter,pwcsOverride,fUseDefault,pFilterClsid,SearchDecSize,pwcsSearchDesc,ppIFilt) )
    ( (This)->lpVtbl -> LoadIFilterFromStream(This,pStm,pFilteredSources,pUnkOuter,fUseDefault,pFilterClsid,SearchDecSize,pwcsSearchDesc,ppIFilt) )
EXTERN_C const IID IID_ILoadFilterWithPrivateComActivation;
    typedef struct ILoadFilterWithPrivateComActivationVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ILoadFilterWithPrivateComActivation * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ILoadFilterWithPrivateComActivation * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ILoadFilterWithPrivateComActivation * This);
        HRESULT ( STDMETHODCALLTYPE *LoadIFilter )(
            __RPC__in ILoadFilterWithPrivateComActivation * This,
                               __RPC__in_opt LPCWSTR pwcsPath,
                               __RPC__in_opt FILTERED_DATA_SOURCES *pFilteredSources,
                               __RPC__in_opt IUnknown *pUnkOuter,
                       BOOL fUseDefault,
                                    __RPC__inout_opt CLSID *pFilterClsid,
                                    __RPC__inout_opt int *SearchDecSize,
                                                                            __RPC__deref_opt_inout_ecount_part_opt(( *SearchDecSize + 1 ) , ( *SearchDecSize + 1 ) ) WCHAR **pwcsSearchDesc,
                                    __RPC__deref_opt_inout_opt IFilter **ppIFilt);
        HRESULT ( STDMETHODCALLTYPE *LoadIFilterFromStorage )(
            __RPC__in ILoadFilterWithPrivateComActivation * This,
                       __RPC__in_opt IStorage *pStg,
                               __RPC__in_opt IUnknown *pUnkOuter,
                               __RPC__in_opt LPCWSTR pwcsOverride,
                       BOOL fUseDefault,
                                    __RPC__inout_opt CLSID *pFilterClsid,
                                    __RPC__inout_opt int *SearchDecSize,
                                                                            __RPC__deref_opt_inout_ecount_part_opt(( *SearchDecSize + 1 ) , ( *SearchDecSize + 1 ) ) WCHAR **pwcsSearchDesc,
                                    __RPC__deref_opt_inout_opt IFilter **ppIFilt);
        HRESULT ( STDMETHODCALLTYPE *LoadIFilterFromStream )(
            __RPC__in ILoadFilterWithPrivateComActivation * This,
                       __RPC__in_opt IStream *pStm,
                               __RPC__in_opt FILTERED_DATA_SOURCES *pFilteredSources,
                               __RPC__in_opt IUnknown *pUnkOuter,
                       BOOL fUseDefault,
                                    __RPC__inout_opt CLSID *pFilterClsid,
                                    __RPC__inout_opt int *SearchDecSize,
                                                                            __RPC__deref_opt_inout_ecount_part_opt(( *SearchDecSize + 1 ) , ( *SearchDecSize + 1 ) ) WCHAR **pwcsSearchDesc,
                                    __RPC__deref_opt_inout_opt IFilter **ppIFilt);
        HRESULT ( STDMETHODCALLTYPE *LoadIFilterWithPrivateComActivation )(
            __RPC__in ILoadFilterWithPrivateComActivation * This,
                               __RPC__in_opt FILTERED_DATA_SOURCES *filteredSources,
                       BOOL useDefault,
                        __RPC__out CLSID *filterClsid,
                        __RPC__out BOOL *isFilterPrivateComActivated,
                                    __RPC__deref_opt_inout_opt IFilter **filterObj);
        END_INTERFACE
    } ILoadFilterWithPrivateComActivationVtbl;
    interface ILoadFilterWithPrivateComActivation
    {
        CONST_VTBL struct ILoadFilterWithPrivateComActivationVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> LoadIFilter(This,pwcsPath,pFilteredSources,pUnkOuter,fUseDefault,pFilterClsid,SearchDecSize,pwcsSearchDesc,ppIFilt) )
    ( (This)->lpVtbl -> LoadIFilterFromStorage(This,pStg,pUnkOuter,pwcsOverride,fUseDefault,pFilterClsid,SearchDecSize,pwcsSearchDesc,ppIFilt) )
    ( (This)->lpVtbl -> LoadIFilterFromStream(This,pStm,pFilteredSources,pUnkOuter,fUseDefault,pFilterClsid,SearchDecSize,pwcsSearchDesc,ppIFilt) )
    ( (This)->lpVtbl -> LoadIFilterWithPrivateComActivation(This,filteredSources,useDefault,filterClsid,isFilterPrivateComActivated,filterObj) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_filtereg_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_filtereg_0000_0002_v0_0_s_ifspec;
}

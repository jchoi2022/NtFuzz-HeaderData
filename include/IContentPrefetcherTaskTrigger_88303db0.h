#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IContentPrefetcherTaskTrigger IContentPrefetcherTaskTrigger;
#include "oaidl.h"
#include "inspectable.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_icontentprefetchertasktrigger_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_icontentprefetchertasktrigger_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IContentPrefetcherTaskTrigger;
    typedef struct IContentPrefetcherTaskTriggerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IContentPrefetcherTaskTrigger * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IContentPrefetcherTaskTrigger * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IContentPrefetcherTaskTrigger * This);
        HRESULT ( STDMETHODCALLTYPE *GetIids )(
            __RPC__in IContentPrefetcherTaskTrigger * This,
                        __RPC__out ULONG *iidCount,
                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
            __RPC__in IContentPrefetcherTaskTrigger * This,
                        __RPC__deref_out_opt HSTRING *className);
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
            __RPC__in IContentPrefetcherTaskTrigger * This,
                        __RPC__out TrustLevel *trustLevel);
        HRESULT ( STDMETHODCALLTYPE *TriggerContentPrefetcherTask )(
            __RPC__in IContentPrefetcherTaskTrigger * This,
                       __RPC__in LPCWSTR packageFullName);
        _On_failure_(_Post_satisfies_(*isRegistered == false))
        HRESULT ( STDMETHODCALLTYPE *IsRegisteredForContentPrefetch )(
            IContentPrefetcherTaskTrigger * This,
                       LPCWSTR packageFullName,
                        boolean *isRegistered);
        END_INTERFACE
    } IContentPrefetcherTaskTriggerVtbl;
    interface IContentPrefetcherTaskTrigger
    {
        CONST_VTBL struct IContentPrefetcherTaskTriggerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> TriggerContentPrefetcherTask(This,packageFullName) )
    ( (This)->lpVtbl -> IsRegisteredForContentPrefetch(This,packageFullName,isRegistered) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_icontentprefetchertasktrigger_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_icontentprefetchertasktrigger_0000_0001_v0_0_s_ifspec;
}

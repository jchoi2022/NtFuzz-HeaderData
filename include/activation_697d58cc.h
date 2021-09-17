#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IActivationFactory IActivationFactory;
#include "inspectable.h"
extern "C"{
extern RPC_IF_HANDLE __MIDL_itf_activation_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_activation_0000_0000_v0_0_s_ifspec;
typedef __RPC_unique_pointer IActivationFactory *PACTIVATIONFACTORY;
EXTERN_C const IID IID_IActivationFactory;
    typedef struct IActivationFactoryVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IActivationFactory * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IActivationFactory * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IActivationFactory * This);
        HRESULT ( STDMETHODCALLTYPE *GetIids )(
            __RPC__in IActivationFactory * This,
                        __RPC__out ULONG *iidCount,
                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
            __RPC__in IActivationFactory * This,
                        __RPC__deref_out_opt HSTRING *className);
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
            __RPC__in IActivationFactory * This,
                        __RPC__out TrustLevel *trustLevel);
        HRESULT ( STDMETHODCALLTYPE *ActivateInstance )(
            __RPC__in IActivationFactory * This,
                        __RPC__deref_out_opt IInspectable **instance);
        END_INTERFACE
    } IActivationFactoryVtbl;
    interface IActivationFactory
    {
        CONST_VTBL struct IActivationFactoryVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> ActivateInstance(This,instance) )
}

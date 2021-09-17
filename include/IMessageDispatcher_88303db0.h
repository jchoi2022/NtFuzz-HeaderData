#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IMessageDispatcher IMessageDispatcher;
#include "Inspectable.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#pragma warning(push)
#pragma warning(disable:4668)
#pragma warning(disable:4001)
       
#pragma warning(pop)
extern RPC_IF_HANDLE __MIDL_itf_imessagedispatcher_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_imessagedispatcher_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IMessageDispatcher;
    typedef struct IMessageDispatcherVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMessageDispatcher * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMessageDispatcher * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMessageDispatcher * This);
        HRESULT ( STDMETHODCALLTYPE *GetIids )(
            IMessageDispatcher * This,
                        ULONG *iidCount,
                                          IID **iids);
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
            IMessageDispatcher * This,
                        HSTRING *className);
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
            IMessageDispatcher * This,
                        TrustLevel *trustLevel);
        HRESULT ( STDMETHODCALLTYPE *PumpMessages )(
            IMessageDispatcher * This);
        END_INTERFACE
    } IMessageDispatcherVtbl;
    interface IMessageDispatcher
    {
        CONST_VTBL struct IMessageDispatcherVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> PumpMessages(This) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_imessagedispatcher_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_imessagedispatcher_0000_0001_v0_0_s_ifspec;
}

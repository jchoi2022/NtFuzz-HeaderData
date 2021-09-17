#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IAppServiceConnectionExtendedExecution IAppServiceConnectionExtendedExecution;
#include "oaidl.h"
#include "ocidl.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_appserviceinterop_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_appserviceinterop_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IAppServiceConnectionExtendedExecution;
    typedef struct IAppServiceConnectionExtendedExecutionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAppServiceConnectionExtendedExecution * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAppServiceConnectionExtendedExecution * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAppServiceConnectionExtendedExecution * This);
        HRESULT ( STDMETHODCALLTYPE *OpenForExtendedExecutionAsync )(
            __RPC__in IAppServiceConnectionExtendedExecution * This,
                       __RPC__in REFIID riid,
                                __RPC__deref_out_opt void **operation);
        END_INTERFACE
    } IAppServiceConnectionExtendedExecutionVtbl;
    interface IAppServiceConnectionExtendedExecution
    {
        CONST_VTBL struct IAppServiceConnectionExtendedExecutionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OpenForExtendedExecutionAsync(This,riid,operation) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_appserviceinterop_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_appserviceinterop_0000_0001_v0_0_s_ifspec;
}

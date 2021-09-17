#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IDragDropManagerInterop IDragDropManagerInterop;
#include "inspectable.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_dragdropinterop_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_dragdropinterop_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IDragDropManagerInterop;
    typedef struct IDragDropManagerInteropVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDragDropManagerInterop * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDragDropManagerInterop * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDragDropManagerInterop * This);
        HRESULT ( STDMETHODCALLTYPE *GetIids )(
            IDragDropManagerInterop * This,
                        ULONG *iidCount,
                                          IID **iids);
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
            IDragDropManagerInterop * This,
                        HSTRING *className);
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
            IDragDropManagerInterop * This,
                        TrustLevel *trustLevel);
        HRESULT ( STDMETHODCALLTYPE *GetForWindow )(
            IDragDropManagerInterop * This,
                       HWND hwnd,
                       REFIID riid,
                                void **ppv);
        END_INTERFACE
    } IDragDropManagerInteropVtbl;
    interface IDragDropManagerInterop
    {
        CONST_VTBL struct IDragDropManagerInteropVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> GetForWindow(This,hwnd,riid,ppv) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_dragdropinterop_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_dragdropinterop_0000_0001_v0_0_s_ifspec;
}

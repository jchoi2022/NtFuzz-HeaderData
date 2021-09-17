#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IInputPaneInterop IInputPaneInterop;
#include "inspectable.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_inputpaneinterop_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_inputpaneinterop_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IInputPaneInterop;
    typedef struct IInputPaneInteropVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IInputPaneInterop * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IInputPaneInterop * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IInputPaneInterop * This);
        HRESULT ( STDMETHODCALLTYPE *GetIids )(
            __RPC__in IInputPaneInterop * This,
                        __RPC__out ULONG *iidCount,
                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
            __RPC__in IInputPaneInterop * This,
                        __RPC__deref_out_opt HSTRING *className);
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
            __RPC__in IInputPaneInterop * This,
                        __RPC__out TrustLevel *trustLevel);
        HRESULT ( STDMETHODCALLTYPE *GetForWindow )(
            __RPC__in IInputPaneInterop * This,
                       __RPC__in HWND appWindow,
                       __RPC__in REFIID riid,
                                        __RPC__deref_out_opt void **inputPane);
        END_INTERFACE
    } IInputPaneInteropVtbl;
    interface IInputPaneInterop
    {
        CONST_VTBL struct IInputPaneInteropVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> GetForWindow(This,appWindow,riid,inputPane) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_inputpaneinterop_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_inputpaneinterop_0000_0001_v0_0_s_ifspec;
unsigned long __RPC_USER HWND_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HWND * );
void __RPC_USER HWND_UserFree( __RPC__in unsigned long *, __RPC__in HWND * );
unsigned long __RPC_USER HWND_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HWND * );
void __RPC_USER HWND_UserFree64( __RPC__in unsigned long *, __RPC__in HWND * );
}

#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IUserActivityInterop IUserActivityInterop;
typedef interface IUserActivitySourceHostInterop IUserActivitySourceHostInterop;
typedef interface IUserActivityRequestManagerInterop IUserActivityRequestManagerInterop;
#include "oaidl.h"
#include "Inspectable.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_useractivityinterop_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_useractivityinterop_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IUserActivityInterop;
    typedef struct IUserActivityInteropVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IUserActivityInterop * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IUserActivityInterop * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IUserActivityInterop * This);
        HRESULT ( STDMETHODCALLTYPE *GetIids )(
            IUserActivityInterop * This,
                        ULONG *iidCount,
                                          IID **iids);
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
            IUserActivityInterop * This,
                        HSTRING *className);
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
            IUserActivityInterop * This,
                        TrustLevel *trustLevel);
        HRESULT ( STDMETHODCALLTYPE *CreateSessionForWindow )(
            IUserActivityInterop * This,
                       HWND window,
                       REFIID iid,
                                        void **value);
        END_INTERFACE
    } IUserActivityInteropVtbl;
    interface IUserActivityInterop
    {
        CONST_VTBL struct IUserActivityInteropVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> CreateSessionForWindow(This,window,iid,value) )
EXTERN_C const IID IID_IUserActivitySourceHostInterop;
    typedef struct IUserActivitySourceHostInteropVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IUserActivitySourceHostInterop * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IUserActivitySourceHostInterop * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IUserActivitySourceHostInterop * This);
        HRESULT ( STDMETHODCALLTYPE *GetIids )(
            IUserActivitySourceHostInterop * This,
                        ULONG *iidCount,
                                          IID **iids);
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
            IUserActivitySourceHostInterop * This,
                        HSTRING *className);
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
            IUserActivitySourceHostInterop * This,
                        TrustLevel *trustLevel);
        HRESULT ( STDMETHODCALLTYPE *SetActivitySourceHost )(
            IUserActivitySourceHostInterop * This,
                       HSTRING activitySourceHost);
        END_INTERFACE
    } IUserActivitySourceHostInteropVtbl;
    interface IUserActivitySourceHostInterop
    {
        CONST_VTBL struct IUserActivitySourceHostInteropVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> SetActivitySourceHost(This,activitySourceHost) )
EXTERN_C const IID IID_IUserActivityRequestManagerInterop;
    typedef struct IUserActivityRequestManagerInteropVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IUserActivityRequestManagerInterop * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IUserActivityRequestManagerInterop * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IUserActivityRequestManagerInterop * This);
        HRESULT ( STDMETHODCALLTYPE *GetIids )(
            IUserActivityRequestManagerInterop * This,
                        ULONG *iidCount,
                                          IID **iids);
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
            IUserActivityRequestManagerInterop * This,
                        HSTRING *className);
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
            IUserActivityRequestManagerInterop * This,
                        TrustLevel *trustLevel);
        HRESULT ( STDMETHODCALLTYPE *GetForWindow )(
            IUserActivityRequestManagerInterop * This,
                       HWND window,
                       REFIID iid,
                                        void **value);
        END_INTERFACE
    } IUserActivityRequestManagerInteropVtbl;
    interface IUserActivityRequestManagerInterop
    {
        CONST_VTBL struct IUserActivityRequestManagerInteropVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> GetForWindow(This,window,iid,value) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_useractivityinterop_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_useractivityinterop_0000_0003_v0_0_s_ifspec;
}

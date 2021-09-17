#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IRadialControllerInterop IRadialControllerInterop;
typedef interface IRadialControllerConfigurationInterop IRadialControllerConfigurationInterop;
typedef interface IRadialControllerIndependentInputSourceInterop IRadialControllerIndependentInputSourceInterop;
#include "inspectable.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_radialcontrollerinterop_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_radialcontrollerinterop_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IRadialControllerInterop;
    typedef struct IRadialControllerInteropVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IRadialControllerInterop * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IRadialControllerInterop * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IRadialControllerInterop * This);
        HRESULT ( STDMETHODCALLTYPE *GetIids )(
            IRadialControllerInterop * This,
                        ULONG *iidCount,
                                          IID **iids);
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
            IRadialControllerInterop * This,
                        HSTRING *className);
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
            IRadialControllerInterop * This,
                        TrustLevel *trustLevel);
        HRESULT ( STDMETHODCALLTYPE *CreateForWindow )(
            IRadialControllerInterop * This,
            _In_ HWND hwnd,
            _In_ REFIID riid,
            _COM_Outptr_ void **ppv);
        END_INTERFACE
    } IRadialControllerInteropVtbl;
    interface IRadialControllerInterop
    {
        CONST_VTBL struct IRadialControllerInteropVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> CreateForWindow(This,hwnd,riid,ppv) )
EXTERN_C const IID IID_IRadialControllerConfigurationInterop;
    typedef struct IRadialControllerConfigurationInteropVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IRadialControllerConfigurationInterop * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IRadialControllerConfigurationInterop * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IRadialControllerConfigurationInterop * This);
        HRESULT ( STDMETHODCALLTYPE *GetIids )(
            IRadialControllerConfigurationInterop * This,
                        ULONG *iidCount,
                                          IID **iids);
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
            IRadialControllerConfigurationInterop * This,
                        HSTRING *className);
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
            IRadialControllerConfigurationInterop * This,
                        TrustLevel *trustLevel);
        HRESULT ( STDMETHODCALLTYPE *GetForWindow )(
            IRadialControllerConfigurationInterop * This,
            _In_ HWND hwnd,
            _In_ REFIID riid,
            _COM_Outptr_ void **ppv);
        END_INTERFACE
    } IRadialControllerConfigurationInteropVtbl;
    interface IRadialControllerConfigurationInterop
    {
        CONST_VTBL struct IRadialControllerConfigurationInteropVtbl *lpVtbl;
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
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_radialcontrollerinterop_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_radialcontrollerinterop_0000_0002_v0_0_s_ifspec;
EXTERN_C const IID IID_IRadialControllerIndependentInputSourceInterop;
    typedef struct IRadialControllerIndependentInputSourceInteropVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IRadialControllerIndependentInputSourceInterop * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IRadialControllerIndependentInputSourceInterop * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IRadialControllerIndependentInputSourceInterop * This);
        HRESULT ( STDMETHODCALLTYPE *GetIids )(
            IRadialControllerIndependentInputSourceInterop * This,
                        ULONG *iidCount,
                                          IID **iids);
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
            IRadialControllerIndependentInputSourceInterop * This,
                        HSTRING *className);
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
            IRadialControllerIndependentInputSourceInterop * This,
                        TrustLevel *trustLevel);
        HRESULT ( STDMETHODCALLTYPE *CreateForWindow )(
            IRadialControllerIndependentInputSourceInterop * This,
            _In_ HWND hwnd,
            _In_ REFIID riid,
            _COM_Outptr_ void **ppv);
        END_INTERFACE
    } IRadialControllerIndependentInputSourceInteropVtbl;
    interface IRadialControllerIndependentInputSourceInterop
    {
        CONST_VTBL struct IRadialControllerIndependentInputSourceInteropVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> CreateForWindow(This,hwnd,riid,ppv) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_radialcontrollerinterop_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_radialcontrollerinterop_0000_0003_v0_0_s_ifspec;
}

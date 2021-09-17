#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IObjectSafety IObjectSafety;
#include "unknwn.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#pragma comment(lib,"uuid.lib")
DEFINE_GUID(IID_IObjectSafety, 0xcb5bdc81, 0x93c1, 0x11cf, 0x8f, 0x20, 0x0, 0x80, 0x5f, 0x2c, 0xd0, 0x64);
EXTERN_C GUID CATID_SafeForScripting;
EXTERN_C GUID CATID_SafeForInitializing;
extern RPC_IF_HANDLE __MIDL_itf_objsafe_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_objsafe_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IObjectSafety;
    typedef struct IObjectSafetyVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IObjectSafety * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IObjectSafety * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IObjectSafety * This);
        HRESULT ( STDMETHODCALLTYPE *GetInterfaceSafetyOptions )(
            __RPC__in IObjectSafety * This,
                       __RPC__in REFIID riid,
                        __RPC__out DWORD *pdwSupportedOptions,
                        __RPC__out DWORD *pdwEnabledOptions);
        HRESULT ( STDMETHODCALLTYPE *SetInterfaceSafetyOptions )(
            __RPC__in IObjectSafety * This,
                       __RPC__in REFIID riid,
                       DWORD dwOptionSetMask,
                       DWORD dwEnabledOptions);
        END_INTERFACE
    } IObjectSafetyVtbl;
    interface IObjectSafety
    {
        CONST_VTBL struct IObjectSafetyVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetInterfaceSafetyOptions(This,riid,pdwSupportedOptions,pdwEnabledOptions) )
    ( (This)->lpVtbl -> SetInterfaceSafetyOptions(This,riid,dwOptionSetMask,dwEnabledOptions) )
typedef __RPC_unique_pointer IObjectSafety *LPOBJECTSAFETY;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_objsafe_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_objsafe_0000_0001_v0_0_s_ifspec;
}

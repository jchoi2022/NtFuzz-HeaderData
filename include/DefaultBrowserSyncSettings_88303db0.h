#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IDefaultBrowserSyncSettings IDefaultBrowserSyncSettings;
typedef class DefaultBrowserSyncSettings DefaultBrowserSyncSettings;
#include "oleidl.h"
extern "C"{
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_defaultbrowsersyncsettings_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_defaultbrowsersyncsettings_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IDefaultBrowserSyncSettings;
    typedef struct IDefaultBrowserSyncSettingsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDefaultBrowserSyncSettings * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDefaultBrowserSyncSettings * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDefaultBrowserSyncSettings * This);
        BOOL ( STDMETHODCALLTYPE *IsEnabled )(
            IDefaultBrowserSyncSettings * This);
        END_INTERFACE
    } IDefaultBrowserSyncSettingsVtbl;
    interface IDefaultBrowserSyncSettings
    {
        CONST_VTBL struct IDefaultBrowserSyncSettingsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> IsEnabled(This) )
EXTERN_C const IID LIBID_BrowserSyncSettings;
EXTERN_C const CLSID CLSID_DefaultBrowserSyncSettings;
class DECLSPEC_UUID("3AC83423-3112-4AA6-9B5B-1FEB23D0C5F9")
DefaultBrowserSyncSettings;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_defaultbrowsersyncsettings_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_defaultbrowsersyncsettings_0000_0002_v0_0_s_ifspec;
}

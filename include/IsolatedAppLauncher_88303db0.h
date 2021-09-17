#pragma warning( disable: 4049 )
#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IIsolatedAppLauncher IIsolatedAppLauncher;
typedef class IsolatedAppLauncher IsolatedAppLauncher;
#include "oaidl.h"
#include "ocidl.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef struct _IsolatedAppLauncherTelemetryParameters
    {
    BOOL EnableForLaunch;
    GUID CorrelationGUID;
    } IsolatedAppLauncherTelemetryParameters;
extern RPC_IF_HANDLE __MIDL_itf_isolatedapplauncher_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_isolatedapplauncher_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IIsolatedAppLauncher;
    typedef struct IIsolatedAppLauncherVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IIsolatedAppLauncher * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IIsolatedAppLauncher * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IIsolatedAppLauncher * This);
        HRESULT ( STDMETHODCALLTYPE *Launch )(
            __RPC__in IIsolatedAppLauncher * This,
                               __RPC__in_string LPCWSTR appUserModelId,
                               __RPC__in_string LPCWSTR arguments,
                       __RPC__in const IsolatedAppLauncherTelemetryParameters *telemetryParameters);
        END_INTERFACE
    } IIsolatedAppLauncherVtbl;
    interface IIsolatedAppLauncher
    {
        CONST_VTBL struct IIsolatedAppLauncherVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Launch(This,appUserModelId,arguments,telemetryParameters) )
EXTERN_C const IID LIBID_IsolatedAppLauncherLibrary;
EXTERN_C const CLSID CLSID_IsolatedAppLauncher;
class DECLSPEC_UUID("BC812430-E75E-4FD1-9641-1F9F1E2D9A1F")
IsolatedAppLauncher;
#endif
#pragma endregion
#pragma region App Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
STDAPI IsProcessInWDAGContainer(_In_ PVOID Reserved, _Out_ BOOL *isProcessInWDAGContainer);
STDAPI IsProcessInIsolatedContainer(_Out_ BOOL *isProcessInIsolatedContainer);
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_isolatedapplauncher_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_isolatedapplauncher_0000_0002_v0_0_s_ifspec;
}

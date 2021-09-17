#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IPortableDeviceClassExtension IPortableDeviceClassExtension;
typedef class PortableDeviceClassExtension PortableDeviceClassExtension;
#include "oaidl.h"
#include "ocidl.h"
#include "propidl.h"
#include "PortableDeviceTypes.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_PortableDeviceClassExtension_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_PortableDeviceClassExtension_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IPortableDeviceClassExtension;
    typedef struct IPortableDeviceClassExtensionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPortableDeviceClassExtension * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPortableDeviceClassExtension * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPortableDeviceClassExtension * This);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in IPortableDeviceClassExtension * This,
            __RPC__in_opt IUnknown *pWdfDeviceUnknown,
            __RPC__in_opt IPortableDeviceValues *pOptions);
        HRESULT ( STDMETHODCALLTYPE *Uninitialize )(
            __RPC__in IPortableDeviceClassExtension * This);
        HRESULT ( STDMETHODCALLTYPE *ProcessLibraryMessage )(
            __RPC__in IPortableDeviceClassExtension * This,
            __RPC__in_opt IPortableDeviceValues *pParams,
            __RPC__in_opt IPortableDeviceValues *pResults);
        END_INTERFACE
    } IPortableDeviceClassExtensionVtbl;
    interface IPortableDeviceClassExtension
    {
        CONST_VTBL struct IPortableDeviceClassExtensionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Initialize(This,pWdfDeviceUnknown,pOptions) )
    ( (This)->lpVtbl -> Uninitialize(This) )
    ( (This)->lpVtbl -> ProcessLibraryMessage(This,pParams,pResults) )
EXTERN_C const IID LIBID_PortableDeviceClassExtension;
EXTERN_C const CLSID CLSID_PortableDeviceClassExtension;
class DECLSPEC_UUID("4cadfae1-5512-456a-9d65-5b5e7e9ca9a3")
PortableDeviceClassExtension;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_PortableDeviceClassExtension_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_PortableDeviceClassExtension_0000_0002_v0_0_s_ifspec;
}

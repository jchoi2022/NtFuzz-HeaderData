#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IInputPanelConfiguration IInputPanelConfiguration;
typedef interface IInputPanelInvocationConfiguration IInputPanelInvocationConfiguration;
typedef class InputPanelConfiguration InputPanelConfiguration;
#include "oaidl.h"
#include "ocidl.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_inputpanelconfiguration_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_inputpanelconfiguration_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IInputPanelConfiguration;
    typedef struct IInputPanelConfigurationVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IInputPanelConfiguration * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IInputPanelConfiguration * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IInputPanelConfiguration * This);
                           HRESULT ( STDMETHODCALLTYPE *EnableFocusTracking )(
            __RPC__in IInputPanelConfiguration * This);
        END_INTERFACE
    } IInputPanelConfigurationVtbl;
    interface IInputPanelConfiguration
    {
        CONST_VTBL struct IInputPanelConfigurationVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> EnableFocusTracking(This) )
EXTERN_C const IID IID_IInputPanelInvocationConfiguration;
    typedef struct IInputPanelInvocationConfigurationVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IInputPanelInvocationConfiguration * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IInputPanelInvocationConfiguration * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IInputPanelInvocationConfiguration * This);
                           HRESULT ( STDMETHODCALLTYPE *RequireTouchInEditControl )(
            __RPC__in IInputPanelInvocationConfiguration * This);
        END_INTERFACE
    } IInputPanelInvocationConfigurationVtbl;
    interface IInputPanelInvocationConfiguration
    {
        CONST_VTBL struct IInputPanelInvocationConfigurationVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> RequireTouchInEditControl(This) )
EXTERN_C const IID LIBID_InputPanelConfigurationLib;
EXTERN_C const CLSID CLSID_InputPanelConfiguration;
class DECLSPEC_UUID("2853ADD3-F096-4C63-A78F-7FA3EA837FB7")
InputPanelConfiguration;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_inputpanelconfiguration_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_inputpanelconfiguration_0000_0003_v0_0_s_ifspec;
}

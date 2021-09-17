#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IPNPXAssociation IPNPXAssociation;
typedef interface IPNPXDeviceAssociation IPNPXDeviceAssociation;
typedef class PNPXAssociation PNPXAssociation;
typedef class PNPXPairingHandler PNPXPairingHandler;
#include "oaidl.h"
#include "ocidl.h"
#include "FunctionDiscoveryProvider.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_pnpxassoc_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_pnpxassoc_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IPNPXAssociation;
    typedef struct IPNPXAssociationVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPNPXAssociation * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPNPXAssociation * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPNPXAssociation * This);
        HRESULT ( STDMETHODCALLTYPE *Associate )(
            __RPC__in IPNPXAssociation * This,
                                       __RPC__in_opt_string const WCHAR *pszSubcategory);
        HRESULT ( STDMETHODCALLTYPE *Unassociate )(
            __RPC__in IPNPXAssociation * This,
                                       __RPC__in_opt_string const WCHAR *pszSubcategory);
        HRESULT ( STDMETHODCALLTYPE *Delete )(
            __RPC__in IPNPXAssociation * This,
                                       __RPC__in_opt_string const WCHAR *pszSubcategory);
        END_INTERFACE
    } IPNPXAssociationVtbl;
    interface IPNPXAssociation
    {
        CONST_VTBL struct IPNPXAssociationVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Associate(This,pszSubcategory) )
    ( (This)->lpVtbl -> Unassociate(This,pszSubcategory) )
    ( (This)->lpVtbl -> Delete(This,pszSubcategory) )
EXTERN_C const IID IID_IPNPXDeviceAssociation;
    typedef struct IPNPXDeviceAssociationVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPNPXDeviceAssociation * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPNPXDeviceAssociation * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPNPXDeviceAssociation * This);
        HRESULT ( STDMETHODCALLTYPE *Associate )(
            __RPC__in IPNPXDeviceAssociation * This,
                                       __RPC__in_opt_string const WCHAR *pszSubCategory,
                       __RPC__in_opt IFunctionDiscoveryNotification *pIFunctionDiscoveryNotification);
        HRESULT ( STDMETHODCALLTYPE *Unassociate )(
            __RPC__in IPNPXDeviceAssociation * This,
                                       __RPC__in_opt_string const WCHAR *pszSubCategory,
                       __RPC__in_opt IFunctionDiscoveryNotification *pIFunctionDiscoveryNotification);
        HRESULT ( STDMETHODCALLTYPE *Delete )(
            __RPC__in IPNPXDeviceAssociation * This,
                                       __RPC__in_opt_string const WCHAR *pszSubcategory,
                       __RPC__in_opt IFunctionDiscoveryNotification *pIFunctionDiscoveryNotification);
        END_INTERFACE
    } IPNPXDeviceAssociationVtbl;
    interface IPNPXDeviceAssociation
    {
        CONST_VTBL struct IPNPXDeviceAssociationVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Associate(This,pszSubCategory,pIFunctionDiscoveryNotification) )
    ( (This)->lpVtbl -> Unassociate(This,pszSubCategory,pIFunctionDiscoveryNotification) )
    ( (This)->lpVtbl -> Delete(This,pszSubcategory,pIFunctionDiscoveryNotification) )
EXTERN_C const IID LIBID_PNPXAssociation;
EXTERN_C const CLSID CLSID_PNPXAssociation;
class DECLSPEC_UUID("cee8ccc9-4f6b-4469-a235-5a22869eef03")
PNPXAssociation;
EXTERN_C const CLSID CLSID_PNPXPairingHandler;
class DECLSPEC_UUID("B8A27942-ADE7-4085-AA6E-4FADC7ADA1EF")
PNPXPairingHandler;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_pnpxassoc_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_pnpxassoc_0000_0003_v0_0_s_ifspec;
}

#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IVssAdmin IVssAdmin;
typedef interface IVssAdminEx IVssAdminEx;
typedef class VSSCoordinator VSSCoordinator;
#include "oaidl.h"
#include "ocidl.h"
#include "vss.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_vsadmin_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vsadmin_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IVssAdmin;
    typedef struct IVssAdminVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IVssAdmin * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IVssAdmin * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IVssAdmin * This);
                           HRESULT ( STDMETHODCALLTYPE *RegisterProvider )(
            __RPC__in IVssAdmin * This,
                       VSS_ID pProviderId,
                       CLSID ClassId,
                       __RPC__in VSS_PWSZ pwszProviderName,
                       VSS_PROVIDER_TYPE eProviderType,
                       __RPC__in VSS_PWSZ pwszProviderVersion,
                       VSS_ID ProviderVersionId);
                           HRESULT ( STDMETHODCALLTYPE *UnregisterProvider )(
            __RPC__in IVssAdmin * This,
                       VSS_ID ProviderId);
                           HRESULT ( STDMETHODCALLTYPE *QueryProviders )(
            __RPC__in IVssAdmin * This,
                        __RPC__deref_out_opt IVssEnumObject **ppEnum);
                           HRESULT ( STDMETHODCALLTYPE *AbortAllSnapshotsInProgress )(
            __RPC__in IVssAdmin * This);
        END_INTERFACE
    } IVssAdminVtbl;
    interface IVssAdmin
    {
        CONST_VTBL struct IVssAdminVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> RegisterProvider(This,pProviderId,ClassId,pwszProviderName,eProviderType,pwszProviderVersion,ProviderVersionId) )
    ( (This)->lpVtbl -> UnregisterProvider(This,ProviderId) )
    ( (This)->lpVtbl -> QueryProviders(This,ppEnum) )
    ( (This)->lpVtbl -> AbortAllSnapshotsInProgress(This) )
EXTERN_C const IID IID_IVssAdminEx;
    typedef struct IVssAdminExVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IVssAdminEx * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IVssAdminEx * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IVssAdminEx * This);
                           HRESULT ( STDMETHODCALLTYPE *RegisterProvider )(
            __RPC__in IVssAdminEx * This,
                       VSS_ID pProviderId,
                       CLSID ClassId,
                       __RPC__in VSS_PWSZ pwszProviderName,
                       VSS_PROVIDER_TYPE eProviderType,
                       __RPC__in VSS_PWSZ pwszProviderVersion,
                       VSS_ID ProviderVersionId);
                           HRESULT ( STDMETHODCALLTYPE *UnregisterProvider )(
            __RPC__in IVssAdminEx * This,
                       VSS_ID ProviderId);
                           HRESULT ( STDMETHODCALLTYPE *QueryProviders )(
            __RPC__in IVssAdminEx * This,
                        __RPC__deref_out_opt IVssEnumObject **ppEnum);
                           HRESULT ( STDMETHODCALLTYPE *AbortAllSnapshotsInProgress )(
            __RPC__in IVssAdminEx * This);
                           HRESULT ( STDMETHODCALLTYPE *GetProviderCapability )(
            __RPC__in IVssAdminEx * This,
                       VSS_ID pProviderId,
                        __RPC__out ULONGLONG *pllOriginalCapabilityMask);
                           HRESULT ( STDMETHODCALLTYPE *GetProviderContext )(
            __RPC__in IVssAdminEx * This,
                       VSS_ID ProviderId,
                        __RPC__out LONG *plContext);
                           HRESULT ( STDMETHODCALLTYPE *SetProviderContext )(
            __RPC__in IVssAdminEx * This,
                       VSS_ID ProviderId,
                       LONG lContext);
        END_INTERFACE
    } IVssAdminExVtbl;
    interface IVssAdminEx
    {
        CONST_VTBL struct IVssAdminExVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> RegisterProvider(This,pProviderId,ClassId,pwszProviderName,eProviderType,pwszProviderVersion,ProviderVersionId) )
    ( (This)->lpVtbl -> UnregisterProvider(This,ProviderId) )
    ( (This)->lpVtbl -> QueryProviders(This,ppEnum) )
    ( (This)->lpVtbl -> AbortAllSnapshotsInProgress(This) )
    ( (This)->lpVtbl -> GetProviderCapability(This,pProviderId,pllOriginalCapabilityMask) )
    ( (This)->lpVtbl -> GetProviderContext(This,ProviderId,plContext) )
    ( (This)->lpVtbl -> SetProviderContext(This,ProviderId,lContext) )
EXTERN_C const IID LIBID_VSSAdmin;
EXTERN_C const CLSID CLSID_VSSCoordinator;
class DECLSPEC_UUID("E579AB5F-1CC4-44b4-BED9-DE0991FF0623")
VSSCoordinator;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_vsadmin_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vsadmin_0000_0003_v0_0_s_ifspec;
}

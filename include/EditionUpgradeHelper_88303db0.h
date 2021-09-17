#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IEditionUpgradeHelper IEditionUpgradeHelper;
typedef interface IWindowsLockModeHelper IWindowsLockModeHelper;
typedef interface IEditionUpgradeBroker IEditionUpgradeBroker;
typedef interface IContainerActivationHelper IContainerActivationHelper;
typedef interface IClipServiceNotificationHelper IClipServiceNotificationHelper;
typedef class EditionUpgradeHelper EditionUpgradeHelper;
typedef class EditionUpgradeBroker EditionUpgradeBroker;
#include "ocidl.h"
extern "C"{
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
extern RPC_IF_HANDLE __MIDL_itf_editionupgradehelper_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_editionupgradehelper_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IEditionUpgradeHelper;
    typedef struct IEditionUpgradeHelperVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IEditionUpgradeHelper * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IEditionUpgradeHelper * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IEditionUpgradeHelper * This);
        HRESULT ( STDMETHODCALLTYPE *CanUpgrade )(
            __RPC__in IEditionUpgradeHelper * This,
                        __RPC__out BOOL *isAllowed);
        HRESULT ( STDMETHODCALLTYPE *UpdateOperatingSystem )(
            __RPC__in IEditionUpgradeHelper * This,
                               __RPC__in_string LPCWSTR contentId);
        HRESULT ( STDMETHODCALLTYPE *ShowProductKeyUI )(
            __RPC__in IEditionUpgradeHelper * This);
        HRESULT ( STDMETHODCALLTYPE *GetOsProductContentId )(
            __RPC__in IEditionUpgradeHelper * This,
                                __RPC__deref_out_opt_string LPWSTR *contentId);
        HRESULT ( STDMETHODCALLTYPE *GetGenuineLocalStatus )(
            __RPC__in IEditionUpgradeHelper * This,
                        __RPC__out BOOL *isGenuine);
        END_INTERFACE
    } IEditionUpgradeHelperVtbl;
    interface IEditionUpgradeHelper
    {
        CONST_VTBL struct IEditionUpgradeHelperVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CanUpgrade(This,isAllowed) )
    ( (This)->lpVtbl -> UpdateOperatingSystem(This,contentId) )
    ( (This)->lpVtbl -> ShowProductKeyUI(This) )
    ( (This)->lpVtbl -> GetOsProductContentId(This,contentId) )
    ( (This)->lpVtbl -> GetGenuineLocalStatus(This,isGenuine) )
EXTERN_C const IID IID_IWindowsLockModeHelper;
    typedef struct IWindowsLockModeHelperVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWindowsLockModeHelper * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWindowsLockModeHelper * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWindowsLockModeHelper * This);
        HRESULT ( STDMETHODCALLTYPE *GetSMode )(
            __RPC__in IWindowsLockModeHelper * This,
                        __RPC__out BOOL *isSmode);
        END_INTERFACE
    } IWindowsLockModeHelperVtbl;
    interface IWindowsLockModeHelper
    {
        CONST_VTBL struct IWindowsLockModeHelperVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetSMode(This,isSmode) )
EXTERN_C const IID IID_IEditionUpgradeBroker;
    typedef struct IEditionUpgradeBrokerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IEditionUpgradeBroker * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IEditionUpgradeBroker * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IEditionUpgradeBroker * This);
        HRESULT ( STDMETHODCALLTYPE *InitializeParentWindow )(
            __RPC__in IEditionUpgradeBroker * This,
                       OLE_HANDLE parentHandle);
        HRESULT ( STDMETHODCALLTYPE *UpdateOperatingSystem )(
            __RPC__in IEditionUpgradeBroker * This,
                               __RPC__in_string BSTR parameter);
        HRESULT ( STDMETHODCALLTYPE *ShowProductKeyUI )(
            __RPC__in IEditionUpgradeBroker * This);
        HRESULT ( STDMETHODCALLTYPE *CanUpgrade )(
            __RPC__in IEditionUpgradeBroker * This);
        END_INTERFACE
    } IEditionUpgradeBrokerVtbl;
    interface IEditionUpgradeBroker
    {
        CONST_VTBL struct IEditionUpgradeBrokerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> InitializeParentWindow(This,parentHandle) )
    ( (This)->lpVtbl -> UpdateOperatingSystem(This,parameter) )
    ( (This)->lpVtbl -> ShowProductKeyUI(This) )
    ( (This)->lpVtbl -> CanUpgrade(This) )
EXTERN_C const IID IID_IContainerActivationHelper;
    typedef struct IContainerActivationHelperVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IContainerActivationHelper * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IContainerActivationHelper * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IContainerActivationHelper * This);
        HRESULT ( STDMETHODCALLTYPE *CanActivateClientVM )(
            __RPC__in IContainerActivationHelper * This,
                                __RPC__out VARIANT_BOOL *isAllowed);
        END_INTERFACE
    } IContainerActivationHelperVtbl;
    interface IContainerActivationHelper
    {
        CONST_VTBL struct IContainerActivationHelperVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CanActivateClientVM(This,isAllowed) )
EXTERN_C const IID IID_IClipServiceNotificationHelper;
    typedef struct IClipServiceNotificationHelperVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IClipServiceNotificationHelper * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IClipServiceNotificationHelper * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IClipServiceNotificationHelper * This);
        HRESULT ( STDMETHODCALLTYPE *ShowToast )(
            __RPC__in IClipServiceNotificationHelper * This,
                               __RPC__in_string BSTR titleText,
                               __RPC__in_string BSTR bodyText,
                               __RPC__in_string BSTR packageName,
                               __RPC__in_string BSTR appId,
                               __RPC__in_string BSTR launchCommand);
        END_INTERFACE
    } IClipServiceNotificationHelperVtbl;
    interface IClipServiceNotificationHelper
    {
        CONST_VTBL struct IClipServiceNotificationHelperVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> ShowToast(This,titleText,bodyText,packageName,appId,launchCommand) )
EXTERN_C const IID LIBID_EditionUpgradeHelperLib;
EXTERN_C const CLSID CLSID_EditionUpgradeHelper;
class DECLSPEC_UUID("01776DF3-B9AF-4E50-9B1C-56E93116D704")
EditionUpgradeHelper;
EXTERN_C const CLSID CLSID_EditionUpgradeBroker;
class DECLSPEC_UUID("C4270827-4F39-45DF-9288-12FF6B85A921")
EditionUpgradeBroker;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_editionupgradehelper_0000_0006_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_editionupgradehelper_0000_0006_v0_0_s_ifspec;
unsigned long __RPC_USER BSTR_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER BSTR_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree64( __RPC__in unsigned long *, __RPC__in BSTR * );
}

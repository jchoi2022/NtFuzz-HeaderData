#pragma warning( disable: 4049 )
#include <rpc.h>
#include <rpcndr.h>
#error this stub requires an updated version of <rpcndr.h>
#include <windows.h>
#include <ole2.h>
       
       
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
       
#include "inspectable.h"
#include "AsyncInfo.h"
#include "EventToken.h"
#include "windowscontracts.h"
#include "Windows.Foundation.h"
#include "Windows.ApplicationModel.Activation.h"
#include "Windows.ApplicationModel.Core.h"
#include "Windows.Storage.h"
#include "Windows.Storage.Streams.h"
#include "Windows.System.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CApplicationModel_CIAppDisplayInfo __x_ABI_CWindows_CApplicationModel_CIAppDisplayInfo;
typedef interface __x_ABI_CWindows_CApplicationModel_CIAppInfo __x_ABI_CWindows_CApplicationModel_CIAppInfo;
typedef interface __x_ABI_CWindows_CApplicationModel_CIAppInstallerInfo __x_ABI_CWindows_CApplicationModel_CIAppInstallerInfo;
typedef interface __x_ABI_CWindows_CApplicationModel_CIAppInstance __x_ABI_CWindows_CApplicationModel_CIAppInstance;
typedef interface __x_ABI_CWindows_CApplicationModel_CIAppInstanceStatics __x_ABI_CWindows_CApplicationModel_CIAppInstanceStatics;
typedef interface __x_ABI_CWindows_CApplicationModel_CIDesignModeStatics __x_ABI_CWindows_CApplicationModel_CIDesignModeStatics;
typedef interface __x_ABI_CWindows_CApplicationModel_CIDesignModeStatics2 __x_ABI_CWindows_CApplicationModel_CIDesignModeStatics2;
typedef interface __x_ABI_CWindows_CApplicationModel_CIEnteredBackgroundEventArgs __x_ABI_CWindows_CApplicationModel_CIEnteredBackgroundEventArgs;
typedef interface __x_ABI_CWindows_CApplicationModel_CIFullTrustProcessLauncherStatics __x_ABI_CWindows_CApplicationModel_CIFullTrustProcessLauncherStatics;
typedef interface __x_ABI_CWindows_CApplicationModel_CILeavingBackgroundEventArgs __x_ABI_CWindows_CApplicationModel_CILeavingBackgroundEventArgs;
typedef interface __x_ABI_CWindows_CApplicationModel_CILimitedAccessFeatureRequestResult __x_ABI_CWindows_CApplicationModel_CILimitedAccessFeatureRequestResult;
typedef interface __x_ABI_CWindows_CApplicationModel_CILimitedAccessFeaturesStatics __x_ABI_CWindows_CApplicationModel_CILimitedAccessFeaturesStatics;
typedef interface __x_ABI_CWindows_CApplicationModel_CIPackage __x_ABI_CWindows_CApplicationModel_CIPackage;
typedef interface __x_ABI_CWindows_CApplicationModel_CIPackage2 __x_ABI_CWindows_CApplicationModel_CIPackage2;
typedef interface __x_ABI_CWindows_CApplicationModel_CIPackage3 __x_ABI_CWindows_CApplicationModel_CIPackage3;
typedef interface __x_ABI_CWindows_CApplicationModel_CIPackage4 __x_ABI_CWindows_CApplicationModel_CIPackage4;
typedef interface __x_ABI_CWindows_CApplicationModel_CIPackage5 __x_ABI_CWindows_CApplicationModel_CIPackage5;
typedef interface __x_ABI_CWindows_CApplicationModel_CIPackage6 __x_ABI_CWindows_CApplicationModel_CIPackage6;
typedef interface __x_ABI_CWindows_CApplicationModel_CIPackage7 __x_ABI_CWindows_CApplicationModel_CIPackage7;
typedef interface __x_ABI_CWindows_CApplicationModel_CIPackageCatalog __x_ABI_CWindows_CApplicationModel_CIPackageCatalog;
typedef interface __x_ABI_CWindows_CApplicationModel_CIPackageCatalog2 __x_ABI_CWindows_CApplicationModel_CIPackageCatalog2;
typedef interface __x_ABI_CWindows_CApplicationModel_CIPackageCatalog3 __x_ABI_CWindows_CApplicationModel_CIPackageCatalog3;
typedef interface __x_ABI_CWindows_CApplicationModel_CIPackageCatalog4 __x_ABI_CWindows_CApplicationModel_CIPackageCatalog4;
typedef interface __x_ABI_CWindows_CApplicationModel_CIPackageCatalogAddOptionalPackageResult __x_ABI_CWindows_CApplicationModel_CIPackageCatalogAddOptionalPackageResult;
typedef interface __x_ABI_CWindows_CApplicationModel_CIPackageCatalogAddResourcePackageResult __x_ABI_CWindows_CApplicationModel_CIPackageCatalogAddResourcePackageResult;
typedef interface __x_ABI_CWindows_CApplicationModel_CIPackageCatalogRemoveOptionalPackagesResult __x_ABI_CWindows_CApplicationModel_CIPackageCatalogRemoveOptionalPackagesResult;
typedef interface __x_ABI_CWindows_CApplicationModel_CIPackageCatalogRemoveResourcePackagesResult __x_ABI_CWindows_CApplicationModel_CIPackageCatalogRemoveResourcePackagesResult;
typedef interface __x_ABI_CWindows_CApplicationModel_CIPackageCatalogStatics __x_ABI_CWindows_CApplicationModel_CIPackageCatalogStatics;
typedef interface __x_ABI_CWindows_CApplicationModel_CIPackageContentGroup __x_ABI_CWindows_CApplicationModel_CIPackageContentGroup;
typedef interface __x_ABI_CWindows_CApplicationModel_CIPackageContentGroupStagingEventArgs __x_ABI_CWindows_CApplicationModel_CIPackageContentGroupStagingEventArgs;
typedef interface __x_ABI_CWindows_CApplicationModel_CIPackageContentGroupStatics __x_ABI_CWindows_CApplicationModel_CIPackageContentGroupStatics;
typedef interface __x_ABI_CWindows_CApplicationModel_CIPackageId __x_ABI_CWindows_CApplicationModel_CIPackageId;
typedef interface __x_ABI_CWindows_CApplicationModel_CIPackageIdWithMetadata __x_ABI_CWindows_CApplicationModel_CIPackageIdWithMetadata;
typedef interface __x_ABI_CWindows_CApplicationModel_CIPackageInstallingEventArgs __x_ABI_CWindows_CApplicationModel_CIPackageInstallingEventArgs;
typedef interface __x_ABI_CWindows_CApplicationModel_CIPackageStagingEventArgs __x_ABI_CWindows_CApplicationModel_CIPackageStagingEventArgs;
typedef interface __x_ABI_CWindows_CApplicationModel_CIPackageStatics __x_ABI_CWindows_CApplicationModel_CIPackageStatics;
typedef interface __x_ABI_CWindows_CApplicationModel_CIPackageStatus __x_ABI_CWindows_CApplicationModel_CIPackageStatus;
typedef interface __x_ABI_CWindows_CApplicationModel_CIPackageStatus2 __x_ABI_CWindows_CApplicationModel_CIPackageStatus2;
typedef interface __x_ABI_CWindows_CApplicationModel_CIPackageStatusChangedEventArgs __x_ABI_CWindows_CApplicationModel_CIPackageStatusChangedEventArgs;
typedef interface __x_ABI_CWindows_CApplicationModel_CIPackageUninstallingEventArgs __x_ABI_CWindows_CApplicationModel_CIPackageUninstallingEventArgs;
typedef interface __x_ABI_CWindows_CApplicationModel_CIPackageUpdateAvailabilityResult __x_ABI_CWindows_CApplicationModel_CIPackageUpdateAvailabilityResult;
typedef interface __x_ABI_CWindows_CApplicationModel_CIPackageUpdatingEventArgs __x_ABI_CWindows_CApplicationModel_CIPackageUpdatingEventArgs;
typedef interface __x_ABI_CWindows_CApplicationModel_CIPackageWithMetadata __x_ABI_CWindows_CApplicationModel_CIPackageWithMetadata;
typedef interface __x_ABI_CWindows_CApplicationModel_CIStartupTask __x_ABI_CWindows_CApplicationModel_CIStartupTask;
typedef interface __x_ABI_CWindows_CApplicationModel_CIStartupTaskStatics __x_ABI_CWindows_CApplicationModel_CIStartupTaskStatics;
typedef interface __x_ABI_CWindows_CApplicationModel_CISuspendingDeferral __x_ABI_CWindows_CApplicationModel_CISuspendingDeferral;
typedef interface __x_ABI_CWindows_CApplicationModel_CISuspendingEventArgs __x_ABI_CWindows_CApplicationModel_CISuspendingEventArgs;
typedef interface __x_ABI_CWindows_CApplicationModel_CISuspendingOperation __x_ABI_CWindows_CApplicationModel_CISuspendingOperation;
typedef interface __FIIterator_1_Windows__CApplicationModel__CAppInfo __FIIterator_1_Windows__CApplicationModel__CAppInfo;
EXTERN_C const IID IID___FIIterator_1_Windows__CApplicationModel__CAppInfo;
typedef struct __FIIterator_1_Windows__CApplicationModel__CAppInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CApplicationModel__CAppInfo * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppInfo * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppInfo * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppInfo * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppInfo * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CIAppInfo * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppInfo * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppInfo * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppInfo * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CIAppInfo * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CApplicationModel__CAppInfoVtbl;
interface __FIIterator_1_Windows__CApplicationModel__CAppInfo
{
    CONST_VTBL struct __FIIterator_1_Windows__CApplicationModel__CAppInfoVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Current(This,current) )
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) )
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) )
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) )
typedef interface __FIIterable_1_Windows__CApplicationModel__CAppInfo __FIIterable_1_Windows__CApplicationModel__CAppInfo;
EXTERN_C const IID IID___FIIterable_1_Windows__CApplicationModel__CAppInfo;
typedef struct __FIIterable_1_Windows__CApplicationModel__CAppInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CApplicationModel__CAppInfo * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CAppInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CAppInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CAppInfo * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CAppInfo * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CAppInfo * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CAppInfo * This, __RPC__deref_out_opt __FIIterator_1_Windows__CApplicationModel__CAppInfo **first);
    END_INTERFACE
} __FIIterable_1_Windows__CApplicationModel__CAppInfoVtbl;
interface __FIIterable_1_Windows__CApplicationModel__CAppInfo
{
    CONST_VTBL struct __FIIterable_1_Windows__CApplicationModel__CAppInfoVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CApplicationModel__CAppInstance __FIIterator_1_Windows__CApplicationModel__CAppInstance;
EXTERN_C const IID IID___FIIterator_1_Windows__CApplicationModel__CAppInstance;
typedef struct __FIIterator_1_Windows__CApplicationModel__CAppInstanceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CApplicationModel__CAppInstance * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppInstance * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppInstance * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppInstance * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppInstance * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppInstance * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppInstance * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CIAppInstance * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppInstance * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppInstance * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppInstance * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CIAppInstance * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CApplicationModel__CAppInstanceVtbl;
interface __FIIterator_1_Windows__CApplicationModel__CAppInstance
{
    CONST_VTBL struct __FIIterator_1_Windows__CApplicationModel__CAppInstanceVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Current(This,current) )
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) )
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) )
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) )
typedef interface __FIIterable_1_Windows__CApplicationModel__CAppInstance __FIIterable_1_Windows__CApplicationModel__CAppInstance;
EXTERN_C const IID IID___FIIterable_1_Windows__CApplicationModel__CAppInstance;
typedef struct __FIIterable_1_Windows__CApplicationModel__CAppInstanceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CApplicationModel__CAppInstance * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CAppInstance * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CAppInstance * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CAppInstance * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CAppInstance * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CAppInstance * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CAppInstance * This, __RPC__deref_out_opt __FIIterator_1_Windows__CApplicationModel__CAppInstance **first);
    END_INTERFACE
} __FIIterable_1_Windows__CApplicationModel__CAppInstanceVtbl;
interface __FIIterable_1_Windows__CApplicationModel__CAppInstance
{
    CONST_VTBL struct __FIIterable_1_Windows__CApplicationModel__CAppInstanceVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CApplicationModel__CPackage __FIIterator_1_Windows__CApplicationModel__CPackage;
EXTERN_C const IID IID___FIIterator_1_Windows__CApplicationModel__CPackage;
typedef struct __FIIterator_1_Windows__CApplicationModel__CPackageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CApplicationModel__CPackage * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CPackage * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CPackage * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CPackage * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CPackage * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CPackage * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CPackage * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CIPackage * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CPackage * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CPackage * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CPackage * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CIPackage * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CApplicationModel__CPackageVtbl;
interface __FIIterator_1_Windows__CApplicationModel__CPackage
{
    CONST_VTBL struct __FIIterator_1_Windows__CApplicationModel__CPackageVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Current(This,current) )
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) )
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) )
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) )
typedef interface __FIIterable_1_Windows__CApplicationModel__CPackage __FIIterable_1_Windows__CApplicationModel__CPackage;
EXTERN_C const IID IID___FIIterable_1_Windows__CApplicationModel__CPackage;
typedef struct __FIIterable_1_Windows__CApplicationModel__CPackageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CApplicationModel__CPackage * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CPackage * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CPackage * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CPackage * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CPackage * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CPackage * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CPackage * This, __RPC__deref_out_opt __FIIterator_1_Windows__CApplicationModel__CPackage **first);
    END_INTERFACE
} __FIIterable_1_Windows__CApplicationModel__CPackageVtbl;
interface __FIIterable_1_Windows__CApplicationModel__CPackage
{
    CONST_VTBL struct __FIIterable_1_Windows__CApplicationModel__CPackageVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CApplicationModel__CPackageContentGroup __FIIterator_1_Windows__CApplicationModel__CPackageContentGroup;
EXTERN_C const IID IID___FIIterator_1_Windows__CApplicationModel__CPackageContentGroup;
typedef struct __FIIterator_1_Windows__CApplicationModel__CPackageContentGroupVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CApplicationModel__CPackageContentGroup * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CPackageContentGroup * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CPackageContentGroup * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CPackageContentGroup * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CPackageContentGroup * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CPackageContentGroup * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CPackageContentGroup * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CIPackageContentGroup * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CPackageContentGroup * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CPackageContentGroup * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CPackageContentGroup * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CIPackageContentGroup * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CApplicationModel__CPackageContentGroupVtbl;
interface __FIIterator_1_Windows__CApplicationModel__CPackageContentGroup
{
    CONST_VTBL struct __FIIterator_1_Windows__CApplicationModel__CPackageContentGroupVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Current(This,current) )
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) )
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) )
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) )
typedef interface __FIIterable_1_Windows__CApplicationModel__CPackageContentGroup __FIIterable_1_Windows__CApplicationModel__CPackageContentGroup;
EXTERN_C const IID IID___FIIterable_1_Windows__CApplicationModel__CPackageContentGroup;
typedef struct __FIIterable_1_Windows__CApplicationModel__CPackageContentGroupVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CApplicationModel__CPackageContentGroup * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CPackageContentGroup * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CPackageContentGroup * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CPackageContentGroup * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CPackageContentGroup * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CPackageContentGroup * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CPackageContentGroup * This, __RPC__deref_out_opt __FIIterator_1_Windows__CApplicationModel__CPackageContentGroup **first);
    END_INTERFACE
} __FIIterable_1_Windows__CApplicationModel__CPackageContentGroupVtbl;
interface __FIIterable_1_Windows__CApplicationModel__CPackageContentGroup
{
    CONST_VTBL struct __FIIterable_1_Windows__CApplicationModel__CPackageContentGroupVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CApplicationModel__CStartupTask __FIIterator_1_Windows__CApplicationModel__CStartupTask;
EXTERN_C const IID IID___FIIterator_1_Windows__CApplicationModel__CStartupTask;
typedef struct __FIIterator_1_Windows__CApplicationModel__CStartupTaskVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CApplicationModel__CStartupTask * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CStartupTask * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CStartupTask * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CStartupTask * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CStartupTask * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CStartupTask * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CStartupTask * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CIStartupTask * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CStartupTask * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CStartupTask * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CStartupTask * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CIStartupTask * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CApplicationModel__CStartupTaskVtbl;
interface __FIIterator_1_Windows__CApplicationModel__CStartupTask
{
    CONST_VTBL struct __FIIterator_1_Windows__CApplicationModel__CStartupTaskVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Current(This,current) )
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) )
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) )
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) )
typedef interface __FIIterable_1_Windows__CApplicationModel__CStartupTask __FIIterable_1_Windows__CApplicationModel__CStartupTask;
EXTERN_C const IID IID___FIIterable_1_Windows__CApplicationModel__CStartupTask;
typedef struct __FIIterable_1_Windows__CApplicationModel__CStartupTaskVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CApplicationModel__CStartupTask * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CStartupTask * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CStartupTask * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CStartupTask * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CStartupTask * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CStartupTask * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CStartupTask * This, __RPC__deref_out_opt __FIIterator_1_Windows__CApplicationModel__CStartupTask **first);
    END_INTERFACE
} __FIIterable_1_Windows__CApplicationModel__CStartupTaskVtbl;
interface __FIIterable_1_Windows__CApplicationModel__CStartupTask
{
    CONST_VTBL struct __FIIterable_1_Windows__CApplicationModel__CStartupTaskVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CApplicationModel__CAppInfo __FIVectorView_1_Windows__CApplicationModel__CAppInfo;
EXTERN_C const IID IID___FIVectorView_1_Windows__CApplicationModel__CAppInfo;
typedef struct __FIVectorView_1_Windows__CApplicationModel__CAppInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppInfo * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppInfo * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppInfo * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppInfo * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppInfo * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CApplicationModel_CIAppInfo * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppInfo * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppInfo * This,
                       __x_ABI_CWindows_CApplicationModel_CIAppInfo * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppInfo * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CIAppInfo * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CApplicationModel__CAppInfoVtbl;
interface __FIVectorView_1_Windows__CApplicationModel__CAppInfo
{
    CONST_VTBL struct __FIVectorView_1_Windows__CApplicationModel__CAppInfoVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> GetAt(This,index,item) )
    ( (This)->lpVtbl -> get_Size(This,size) )
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) )
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) )
typedef interface __FIVectorView_1_Windows__CApplicationModel__CAppInstance __FIVectorView_1_Windows__CApplicationModel__CAppInstance;
EXTERN_C const IID IID___FIVectorView_1_Windows__CApplicationModel__CAppInstance;
typedef struct __FIVectorView_1_Windows__CApplicationModel__CAppInstanceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppInstance * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppInstance * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppInstance * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppInstance * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppInstance * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppInstance * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppInstance * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CApplicationModel_CIAppInstance * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppInstance * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppInstance * This,
                       __x_ABI_CWindows_CApplicationModel_CIAppInstance * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppInstance * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CIAppInstance * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CApplicationModel__CAppInstanceVtbl;
interface __FIVectorView_1_Windows__CApplicationModel__CAppInstance
{
    CONST_VTBL struct __FIVectorView_1_Windows__CApplicationModel__CAppInstanceVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> GetAt(This,index,item) )
    ( (This)->lpVtbl -> get_Size(This,size) )
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) )
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) )
typedef interface __FIVectorView_1_Windows__CApplicationModel__CPackage __FIVectorView_1_Windows__CApplicationModel__CPackage;
EXTERN_C const IID IID___FIVectorView_1_Windows__CApplicationModel__CPackage;
typedef struct __FIVectorView_1_Windows__CApplicationModel__CPackageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CPackage * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CPackage * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CPackage * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CPackage * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CPackage * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CPackage * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CApplicationModel__CPackage * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CApplicationModel_CIPackage * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CApplicationModel__CPackage * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CPackage * This,
                       __x_ABI_CWindows_CApplicationModel_CIPackage * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CPackage * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CIPackage * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CApplicationModel__CPackageVtbl;
interface __FIVectorView_1_Windows__CApplicationModel__CPackage
{
    CONST_VTBL struct __FIVectorView_1_Windows__CApplicationModel__CPackageVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> GetAt(This,index,item) )
    ( (This)->lpVtbl -> get_Size(This,size) )
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) )
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) )
typedef interface __FIVectorView_1_Windows__CApplicationModel__CPackageContentGroup __FIVectorView_1_Windows__CApplicationModel__CPackageContentGroup;
EXTERN_C const IID IID___FIVectorView_1_Windows__CApplicationModel__CPackageContentGroup;
typedef struct __FIVectorView_1_Windows__CApplicationModel__CPackageContentGroupVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CPackageContentGroup * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CPackageContentGroup * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CPackageContentGroup * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CPackageContentGroup * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CPackageContentGroup * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CPackageContentGroup * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CApplicationModel__CPackageContentGroup * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CApplicationModel_CIPackageContentGroup * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CApplicationModel__CPackageContentGroup * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CPackageContentGroup * This,
                       __x_ABI_CWindows_CApplicationModel_CIPackageContentGroup * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CPackageContentGroup * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CIPackageContentGroup * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CApplicationModel__CPackageContentGroupVtbl;
interface __FIVectorView_1_Windows__CApplicationModel__CPackageContentGroup
{
    CONST_VTBL struct __FIVectorView_1_Windows__CApplicationModel__CPackageContentGroupVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> GetAt(This,index,item) )
    ( (This)->lpVtbl -> get_Size(This,size) )
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) )
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) )
typedef interface __FIVectorView_1_Windows__CApplicationModel__CStartupTask __FIVectorView_1_Windows__CApplicationModel__CStartupTask;
EXTERN_C const IID IID___FIVectorView_1_Windows__CApplicationModel__CStartupTask;
typedef struct __FIVectorView_1_Windows__CApplicationModel__CStartupTaskVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CStartupTask * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CStartupTask * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CStartupTask * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CStartupTask * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CStartupTask * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CStartupTask * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CApplicationModel__CStartupTask * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CApplicationModel_CIStartupTask * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CApplicationModel__CStartupTask * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CStartupTask * This,
                       __x_ABI_CWindows_CApplicationModel_CIStartupTask * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CStartupTask * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CIStartupTask * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CApplicationModel__CStartupTaskVtbl;
interface __FIVectorView_1_Windows__CApplicationModel__CStartupTask
{
    CONST_VTBL struct __FIVectorView_1_Windows__CApplicationModel__CStartupTaskVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> GetAt(This,index,item) )
    ( (This)->lpVtbl -> get_Size(This,size) )
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) )
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) )
typedef interface __FIVector_1_Windows__CApplicationModel__CAppInstance __FIVector_1_Windows__CApplicationModel__CAppInstance;
EXTERN_C const IID IID___FIVector_1_Windows__CApplicationModel__CAppInstance;
typedef struct __FIVector_1_Windows__CApplicationModel__CAppInstanceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CApplicationModel__CAppInstance * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CApplicationModel__CAppInstance * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CApplicationModel__CAppInstance * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CApplicationModel__CAppInstance * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CApplicationModel__CAppInstance * This, __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CIAppInstance * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CApplicationModel__CAppInstance * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CApplicationModel__CAppInstance * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CIAppInstance * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CApplicationModel__CAppInstance * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CApplicationModel__CAppInstance * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CApplicationModel__CAppInstance **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CApplicationModel__CAppInstance * This,
                   __RPC__in __x_ABI_CWindows_CApplicationModel_CIAppInstance * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CApplicationModel__CAppInstance * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CApplicationModel_CIAppInstance * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CApplicationModel__CAppInstance * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CApplicationModel_CIAppInstance * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CApplicationModel__CAppInstance * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CApplicationModel__CAppInstance * This, __RPC__in __x_ABI_CWindows_CApplicationModel_CIAppInstance * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CApplicationModel__CAppInstance * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CApplicationModel__CAppInstance * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CApplicationModel__CAppInstance * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CIAppInstance * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CApplicationModel__CAppInstance * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CApplicationModel_CIAppInstance * *value);
    END_INTERFACE
} __FIVector_1_Windows__CApplicationModel__CAppInstanceVtbl;
interface __FIVector_1_Windows__CApplicationModel__CAppInstance
{
    CONST_VTBL struct __FIVector_1_Windows__CApplicationModel__CAppInstanceVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> GetAt(This,index,item) )
    ( (This)->lpVtbl -> get_Size(This,size) )
    ( (This)->lpVtbl -> GetView(This,view) )
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) )
    ( (This)->lpVtbl -> SetAt(This,index,item) )
    ( (This)->lpVtbl -> InsertAt(This,index,item) )
    ( (This)->lpVtbl -> RemoveAt(This,index) )
    ( (This)->lpVtbl -> Append(This,item) )
    ( (This)->lpVtbl -> RemoveAtEnd(This) )
    ( (This)->lpVtbl -> Clear(This) )
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) )
    ( (This)->lpVtbl -> ReplaceAll(This,count,value) )
typedef interface __FIVector_1_Windows__CApplicationModel__CPackage __FIVector_1_Windows__CApplicationModel__CPackage;
EXTERN_C const IID IID___FIVector_1_Windows__CApplicationModel__CPackage;
typedef struct __FIVector_1_Windows__CApplicationModel__CPackageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CApplicationModel__CPackage * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CApplicationModel__CPackage * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CApplicationModel__CPackage * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CApplicationModel__CPackage * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CApplicationModel__CPackage * This, __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CIPackage * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CApplicationModel__CPackage * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CApplicationModel__CPackage * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CIPackage * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CApplicationModel__CPackage * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CApplicationModel__CPackage * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CApplicationModel__CPackage **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CApplicationModel__CPackage * This,
                   __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackage * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CApplicationModel__CPackage * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackage * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CApplicationModel__CPackage * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackage * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CApplicationModel__CPackage * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CApplicationModel__CPackage * This, __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackage * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CApplicationModel__CPackage * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CApplicationModel__CPackage * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CApplicationModel__CPackage * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CIPackage * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CApplicationModel__CPackage * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CApplicationModel_CIPackage * *value);
    END_INTERFACE
} __FIVector_1_Windows__CApplicationModel__CPackageVtbl;
interface __FIVector_1_Windows__CApplicationModel__CPackage
{
    CONST_VTBL struct __FIVector_1_Windows__CApplicationModel__CPackageVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> GetAt(This,index,item) )
    ( (This)->lpVtbl -> get_Size(This,size) )
    ( (This)->lpVtbl -> GetView(This,view) )
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) )
    ( (This)->lpVtbl -> SetAt(This,index,item) )
    ( (This)->lpVtbl -> InsertAt(This,index,item) )
    ( (This)->lpVtbl -> RemoveAt(This,index) )
    ( (This)->lpVtbl -> Append(This,item) )
    ( (This)->lpVtbl -> RemoveAtEnd(This) )
    ( (This)->lpVtbl -> Clear(This) )
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) )
    ( (This)->lpVtbl -> ReplaceAll(This,count,value) )
typedef interface __FIVector_1_Windows__CApplicationModel__CPackageContentGroup __FIVector_1_Windows__CApplicationModel__CPackageContentGroup;
EXTERN_C const IID IID___FIVector_1_Windows__CApplicationModel__CPackageContentGroup;
typedef struct __FIVector_1_Windows__CApplicationModel__CPackageContentGroupVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CApplicationModel__CPackageContentGroup * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CApplicationModel__CPackageContentGroup * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CApplicationModel__CPackageContentGroup * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CApplicationModel__CPackageContentGroup * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CApplicationModel__CPackageContentGroup * This, __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CIPackageContentGroup * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CApplicationModel__CPackageContentGroup * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CApplicationModel__CPackageContentGroup * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CIPackageContentGroup * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CApplicationModel__CPackageContentGroup * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CApplicationModel__CPackageContentGroup * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CApplicationModel__CPackageContentGroup **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CApplicationModel__CPackageContentGroup * This,
                   __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageContentGroup * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CApplicationModel__CPackageContentGroup * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageContentGroup * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CApplicationModel__CPackageContentGroup * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageContentGroup * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CApplicationModel__CPackageContentGroup * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CApplicationModel__CPackageContentGroup * This, __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageContentGroup * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CApplicationModel__CPackageContentGroup * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CApplicationModel__CPackageContentGroup * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CApplicationModel__CPackageContentGroup * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CIPackageContentGroup * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CApplicationModel__CPackageContentGroup * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CApplicationModel_CIPackageContentGroup * *value);
    END_INTERFACE
} __FIVector_1_Windows__CApplicationModel__CPackageContentGroupVtbl;
interface __FIVector_1_Windows__CApplicationModel__CPackageContentGroup
{
    CONST_VTBL struct __FIVector_1_Windows__CApplicationModel__CPackageContentGroupVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> GetAt(This,index,item) )
    ( (This)->lpVtbl -> get_Size(This,size) )
    ( (This)->lpVtbl -> GetView(This,view) )
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) )
    ( (This)->lpVtbl -> SetAt(This,index,item) )
    ( (This)->lpVtbl -> InsertAt(This,index,item) )
    ( (This)->lpVtbl -> RemoveAt(This,index) )
    ( (This)->lpVtbl -> Append(This,item) )
    ( (This)->lpVtbl -> RemoveAtEnd(This) )
    ( (This)->lpVtbl -> Clear(This) )
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) )
    ( (This)->lpVtbl -> ReplaceAll(This,count,value) )
typedef interface __FIEventHandler_1_Windows__CApplicationModel__CEnteredBackgroundEventArgs __FIEventHandler_1_Windows__CApplicationModel__CEnteredBackgroundEventArgs;
EXTERN_C const IID IID___FIEventHandler_1_Windows__CApplicationModel__CEnteredBackgroundEventArgs;
typedef struct __FIEventHandler_1_Windows__CApplicationModel__CEnteredBackgroundEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIEventHandler_1_Windows__CApplicationModel__CEnteredBackgroundEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIEventHandler_1_Windows__CApplicationModel__CEnteredBackgroundEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIEventHandler_1_Windows__CApplicationModel__CEnteredBackgroundEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIEventHandler_1_Windows__CApplicationModel__CEnteredBackgroundEventArgs * This, __RPC__in_opt IInspectable *sender, __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CIEnteredBackgroundEventArgs * *e);
    END_INTERFACE
} __FIEventHandler_1_Windows__CApplicationModel__CEnteredBackgroundEventArgsVtbl;
interface __FIEventHandler_1_Windows__CApplicationModel__CEnteredBackgroundEventArgs
{
    CONST_VTBL struct __FIEventHandler_1_Windows__CApplicationModel__CEnteredBackgroundEventArgsVtbl *lpVtbl;
};
        ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl -> AddRef(This) )
        ( (This)->lpVtbl -> Release(This) )
        ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FIEventHandler_1_Windows__CApplicationModel__CLeavingBackgroundEventArgs __FIEventHandler_1_Windows__CApplicationModel__CLeavingBackgroundEventArgs;
EXTERN_C const IID IID___FIEventHandler_1_Windows__CApplicationModel__CLeavingBackgroundEventArgs;
typedef struct __FIEventHandler_1_Windows__CApplicationModel__CLeavingBackgroundEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIEventHandler_1_Windows__CApplicationModel__CLeavingBackgroundEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIEventHandler_1_Windows__CApplicationModel__CLeavingBackgroundEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIEventHandler_1_Windows__CApplicationModel__CLeavingBackgroundEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIEventHandler_1_Windows__CApplicationModel__CLeavingBackgroundEventArgs * This, __RPC__in_opt IInspectable *sender, __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CILeavingBackgroundEventArgs * *e);
    END_INTERFACE
} __FIEventHandler_1_Windows__CApplicationModel__CLeavingBackgroundEventArgsVtbl;
interface __FIEventHandler_1_Windows__CApplicationModel__CLeavingBackgroundEventArgs
{
    CONST_VTBL struct __FIEventHandler_1_Windows__CApplicationModel__CLeavingBackgroundEventArgsVtbl *lpVtbl;
};
        ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl -> AddRef(This) )
        ( (This)->lpVtbl -> Release(This) )
        ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FIEventHandler_1_Windows__CApplicationModel__CSuspendingEventArgs __FIEventHandler_1_Windows__CApplicationModel__CSuspendingEventArgs;
EXTERN_C const IID IID___FIEventHandler_1_Windows__CApplicationModel__CSuspendingEventArgs;
typedef struct __FIEventHandler_1_Windows__CApplicationModel__CSuspendingEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIEventHandler_1_Windows__CApplicationModel__CSuspendingEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIEventHandler_1_Windows__CApplicationModel__CSuspendingEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIEventHandler_1_Windows__CApplicationModel__CSuspendingEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIEventHandler_1_Windows__CApplicationModel__CSuspendingEventArgs * This, __RPC__in_opt IInspectable *sender, __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CISuspendingEventArgs * *e);
    END_INTERFACE
} __FIEventHandler_1_Windows__CApplicationModel__CSuspendingEventArgsVtbl;
interface __FIEventHandler_1_Windows__CApplicationModel__CSuspendingEventArgs
{
    CONST_VTBL struct __FIEventHandler_1_Windows__CApplicationModel__CSuspendingEventArgsVtbl *lpVtbl;
};
        ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl -> AddRef(This) )
        ( (This)->lpVtbl -> Release(This) )
        ( (This)->lpVtbl -> Invoke(This,sender,e) )
struct __x_ABI_CWindows_CApplicationModel_CPackageInstallProgress;
typedef interface __FIAsyncOperationProgressHandler_2_Windows__CApplicationModel__CPackageCatalogAddResourcePackageResult_Windows__CApplicationModel__CPackageInstallProgress __FIAsyncOperationProgressHandler_2_Windows__CApplicationModel__CPackageCatalogAddResourcePackageResult_Windows__CApplicationModel__CPackageInstallProgress;
EXTERN_C const IID IID___FIAsyncOperationProgressHandler_2_Windows__CApplicationModel__CPackageCatalogAddResourcePackageResult_Windows__CApplicationModel__CPackageInstallProgress;
typedef interface __FIAsyncOperationWithProgress_2_Windows__CApplicationModel__CPackageCatalogAddResourcePackageResult_Windows__CApplicationModel__CPackageInstallProgress __FIAsyncOperationWithProgress_2_Windows__CApplicationModel__CPackageCatalogAddResourcePackageResult_Windows__CApplicationModel__CPackageInstallProgress;
typedef struct __FIAsyncOperationProgressHandler_2_Windows__CApplicationModel__CPackageCatalogAddResourcePackageResult_Windows__CApplicationModel__CPackageInstallProgressVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CApplicationModel__CPackageCatalogAddResourcePackageResult_Windows__CApplicationModel__CPackageInstallProgress * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CApplicationModel__CPackageCatalogAddResourcePackageResult_Windows__CApplicationModel__CPackageInstallProgress * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CApplicationModel__CPackageCatalogAddResourcePackageResult_Windows__CApplicationModel__CPackageInstallProgress * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CApplicationModel__CPackageCatalogAddResourcePackageResult_Windows__CApplicationModel__CPackageInstallProgress * This, __RPC__in_opt __FIAsyncOperationWithProgress_2_Windows__CApplicationModel__CPackageCatalogAddResourcePackageResult_Windows__CApplicationModel__CPackageInstallProgress *asyncInfo, struct __x_ABI_CWindows_CApplicationModel_CPackageInstallProgress progressInfo);
    END_INTERFACE
} __FIAsyncOperationProgressHandler_2_Windows__CApplicationModel__CPackageCatalogAddResourcePackageResult_Windows__CApplicationModel__CPackageInstallProgressVtbl;
interface __FIAsyncOperationProgressHandler_2_Windows__CApplicationModel__CPackageCatalogAddResourcePackageResult_Windows__CApplicationModel__CPackageInstallProgress
{
    CONST_VTBL struct __FIAsyncOperationProgressHandler_2_Windows__CApplicationModel__CPackageCatalogAddResourcePackageResult_Windows__CApplicationModel__CPackageInstallProgressVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,progressInfo) )
typedef interface __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CApplicationModel__CPackageCatalogAddResourcePackageResult_Windows__CApplicationModel__CPackageInstallProgress __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CApplicationModel__CPackageCatalogAddResourcePackageResult_Windows__CApplicationModel__CPackageInstallProgress;
EXTERN_C const IID IID___FIAsyncOperationWithProgressCompletedHandler_2_Windows__CApplicationModel__CPackageCatalogAddResourcePackageResult_Windows__CApplicationModel__CPackageInstallProgress;
typedef interface __FIAsyncOperationWithProgress_2_Windows__CApplicationModel__CPackageCatalogAddResourcePackageResult_Windows__CApplicationModel__CPackageInstallProgress __FIAsyncOperationWithProgress_2_Windows__CApplicationModel__CPackageCatalogAddResourcePackageResult_Windows__CApplicationModel__CPackageInstallProgress;
typedef struct __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CApplicationModel__CPackageCatalogAddResourcePackageResult_Windows__CApplicationModel__CPackageInstallProgressVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CApplicationModel__CPackageCatalogAddResourcePackageResult_Windows__CApplicationModel__CPackageInstallProgress * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CApplicationModel__CPackageCatalogAddResourcePackageResult_Windows__CApplicationModel__CPackageInstallProgress * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CApplicationModel__CPackageCatalogAddResourcePackageResult_Windows__CApplicationModel__CPackageInstallProgress * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CApplicationModel__CPackageCatalogAddResourcePackageResult_Windows__CApplicationModel__CPackageInstallProgress * This, __RPC__in_opt __FIAsyncOperationWithProgress_2_Windows__CApplicationModel__CPackageCatalogAddResourcePackageResult_Windows__CApplicationModel__CPackageInstallProgress *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CApplicationModel__CPackageCatalogAddResourcePackageResult_Windows__CApplicationModel__CPackageInstallProgressVtbl;
interface __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CApplicationModel__CPackageCatalogAddResourcePackageResult_Windows__CApplicationModel__CPackageInstallProgress
{
    CONST_VTBL struct __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CApplicationModel__CPackageCatalogAddResourcePackageResult_Windows__CApplicationModel__CPackageInstallProgressVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperationWithProgress_2_Windows__CApplicationModel__CPackageCatalogAddResourcePackageResult_Windows__CApplicationModel__CPackageInstallProgress __FIAsyncOperationWithProgress_2_Windows__CApplicationModel__CPackageCatalogAddResourcePackageResult_Windows__CApplicationModel__CPackageInstallProgress;
EXTERN_C const IID IID___FIAsyncOperationWithProgress_2_Windows__CApplicationModel__CPackageCatalogAddResourcePackageResult_Windows__CApplicationModel__CPackageInstallProgress;
typedef struct __FIAsyncOperationWithProgress_2_Windows__CApplicationModel__CPackageCatalogAddResourcePackageResult_Windows__CApplicationModel__CPackageInstallProgressVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CApplicationModel__CPackageCatalogAddResourcePackageResult_Windows__CApplicationModel__CPackageInstallProgress * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CApplicationModel__CPackageCatalogAddResourcePackageResult_Windows__CApplicationModel__CPackageInstallProgress * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CApplicationModel__CPackageCatalogAddResourcePackageResult_Windows__CApplicationModel__CPackageInstallProgress * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CApplicationModel__CPackageCatalogAddResourcePackageResult_Windows__CApplicationModel__CPackageInstallProgress * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CApplicationModel__CPackageCatalogAddResourcePackageResult_Windows__CApplicationModel__CPackageInstallProgress * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CApplicationModel__CPackageCatalogAddResourcePackageResult_Windows__CApplicationModel__CPackageInstallProgress * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Progress )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CApplicationModel__CPackageCatalogAddResourcePackageResult_Windows__CApplicationModel__CPackageInstallProgress * This, __RPC__in_opt __FIAsyncOperationProgressHandler_2_Windows__CApplicationModel__CPackageCatalogAddResourcePackageResult_Windows__CApplicationModel__CPackageInstallProgress *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Progress )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CApplicationModel__CPackageCatalogAddResourcePackageResult_Windows__CApplicationModel__CPackageInstallProgress * This, __RPC__deref_out_opt __FIAsyncOperationProgressHandler_2_Windows__CApplicationModel__CPackageCatalogAddResourcePackageResult_Windows__CApplicationModel__CPackageInstallProgress **handler);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CApplicationModel__CPackageCatalogAddResourcePackageResult_Windows__CApplicationModel__CPackageInstallProgress * This, __RPC__in_opt __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CApplicationModel__CPackageCatalogAddResourcePackageResult_Windows__CApplicationModel__CPackageInstallProgress *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CApplicationModel__CPackageCatalogAddResourcePackageResult_Windows__CApplicationModel__CPackageInstallProgress * This, __RPC__deref_out_opt __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CApplicationModel__CPackageCatalogAddResourcePackageResult_Windows__CApplicationModel__CPackageInstallProgress **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CApplicationModel__CPackageCatalogAddResourcePackageResult_Windows__CApplicationModel__CPackageInstallProgress * This, __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CIPackageCatalogAddResourcePackageResult * *results);
    END_INTERFACE
} __FIAsyncOperationWithProgress_2_Windows__CApplicationModel__CPackageCatalogAddResourcePackageResult_Windows__CApplicationModel__CPackageInstallProgressVtbl;
interface __FIAsyncOperationWithProgress_2_Windows__CApplicationModel__CPackageCatalogAddResourcePackageResult_Windows__CApplicationModel__CPackageInstallProgress
{
    CONST_VTBL struct __FIAsyncOperationWithProgress_2_Windows__CApplicationModel__CPackageCatalogAddResourcePackageResult_Windows__CApplicationModel__CPackageInstallProgressVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> put_Progress(This,handler) )
    ( (This)->lpVtbl -> get_Progress(This,handler) )
    ( (This)->lpVtbl -> put_Completed(This,handler) )
    ( (This)->lpVtbl -> get_Completed(This,handler) )
    ( (This)->lpVtbl -> GetResults(This,results) )
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPackageCatalogAddOptionalPackageResult __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPackageCatalogAddOptionalPackageResult;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPackageCatalogAddOptionalPackageResult;
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CPackageCatalogAddOptionalPackageResult __FIAsyncOperation_1_Windows__CApplicationModel__CPackageCatalogAddOptionalPackageResult;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPackageCatalogAddOptionalPackageResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPackageCatalogAddOptionalPackageResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPackageCatalogAddOptionalPackageResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPackageCatalogAddOptionalPackageResult * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPackageCatalogAddOptionalPackageResult * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CApplicationModel__CPackageCatalogAddOptionalPackageResult *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPackageCatalogAddOptionalPackageResultVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPackageCatalogAddOptionalPackageResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPackageCatalogAddOptionalPackageResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CPackageCatalogAddOptionalPackageResult __FIAsyncOperation_1_Windows__CApplicationModel__CPackageCatalogAddOptionalPackageResult;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CApplicationModel__CPackageCatalogAddOptionalPackageResult;
typedef struct __FIAsyncOperation_1_Windows__CApplicationModel__CPackageCatalogAddOptionalPackageResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPackageCatalogAddOptionalPackageResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPackageCatalogAddOptionalPackageResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPackageCatalogAddOptionalPackageResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPackageCatalogAddOptionalPackageResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPackageCatalogAddOptionalPackageResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPackageCatalogAddOptionalPackageResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPackageCatalogAddOptionalPackageResult * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPackageCatalogAddOptionalPackageResult *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPackageCatalogAddOptionalPackageResult * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPackageCatalogAddOptionalPackageResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPackageCatalogAddOptionalPackageResult * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CIPackageCatalogAddOptionalPackageResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CApplicationModel__CPackageCatalogAddOptionalPackageResultVtbl;
interface __FIAsyncOperation_1_Windows__CApplicationModel__CPackageCatalogAddOptionalPackageResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CApplicationModel__CPackageCatalogAddOptionalPackageResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> put_Completed(This,handler) )
    ( (This)->lpVtbl -> get_Completed(This,handler) )
    ( (This)->lpVtbl -> GetResults(This,results) )
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPackageCatalogRemoveOptionalPackagesResult __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPackageCatalogRemoveOptionalPackagesResult;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPackageCatalogRemoveOptionalPackagesResult;
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CPackageCatalogRemoveOptionalPackagesResult __FIAsyncOperation_1_Windows__CApplicationModel__CPackageCatalogRemoveOptionalPackagesResult;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPackageCatalogRemoveOptionalPackagesResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPackageCatalogRemoveOptionalPackagesResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPackageCatalogRemoveOptionalPackagesResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPackageCatalogRemoveOptionalPackagesResult * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPackageCatalogRemoveOptionalPackagesResult * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CApplicationModel__CPackageCatalogRemoveOptionalPackagesResult *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPackageCatalogRemoveOptionalPackagesResultVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPackageCatalogRemoveOptionalPackagesResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPackageCatalogRemoveOptionalPackagesResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CPackageCatalogRemoveOptionalPackagesResult __FIAsyncOperation_1_Windows__CApplicationModel__CPackageCatalogRemoveOptionalPackagesResult;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CApplicationModel__CPackageCatalogRemoveOptionalPackagesResult;
typedef struct __FIAsyncOperation_1_Windows__CApplicationModel__CPackageCatalogRemoveOptionalPackagesResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPackageCatalogRemoveOptionalPackagesResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPackageCatalogRemoveOptionalPackagesResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPackageCatalogRemoveOptionalPackagesResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPackageCatalogRemoveOptionalPackagesResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPackageCatalogRemoveOptionalPackagesResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPackageCatalogRemoveOptionalPackagesResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPackageCatalogRemoveOptionalPackagesResult * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPackageCatalogRemoveOptionalPackagesResult *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPackageCatalogRemoveOptionalPackagesResult * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPackageCatalogRemoveOptionalPackagesResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPackageCatalogRemoveOptionalPackagesResult * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CIPackageCatalogRemoveOptionalPackagesResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CApplicationModel__CPackageCatalogRemoveOptionalPackagesResultVtbl;
interface __FIAsyncOperation_1_Windows__CApplicationModel__CPackageCatalogRemoveOptionalPackagesResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CApplicationModel__CPackageCatalogRemoveOptionalPackagesResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> put_Completed(This,handler) )
    ( (This)->lpVtbl -> get_Completed(This,handler) )
    ( (This)->lpVtbl -> GetResults(This,results) )
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPackageCatalogRemoveResourcePackagesResult __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPackageCatalogRemoveResourcePackagesResult;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPackageCatalogRemoveResourcePackagesResult;
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CPackageCatalogRemoveResourcePackagesResult __FIAsyncOperation_1_Windows__CApplicationModel__CPackageCatalogRemoveResourcePackagesResult;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPackageCatalogRemoveResourcePackagesResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPackageCatalogRemoveResourcePackagesResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPackageCatalogRemoveResourcePackagesResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPackageCatalogRemoveResourcePackagesResult * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPackageCatalogRemoveResourcePackagesResult * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CApplicationModel__CPackageCatalogRemoveResourcePackagesResult *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPackageCatalogRemoveResourcePackagesResultVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPackageCatalogRemoveResourcePackagesResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPackageCatalogRemoveResourcePackagesResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CPackageCatalogRemoveResourcePackagesResult __FIAsyncOperation_1_Windows__CApplicationModel__CPackageCatalogRemoveResourcePackagesResult;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CApplicationModel__CPackageCatalogRemoveResourcePackagesResult;
typedef struct __FIAsyncOperation_1_Windows__CApplicationModel__CPackageCatalogRemoveResourcePackagesResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPackageCatalogRemoveResourcePackagesResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPackageCatalogRemoveResourcePackagesResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPackageCatalogRemoveResourcePackagesResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPackageCatalogRemoveResourcePackagesResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPackageCatalogRemoveResourcePackagesResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPackageCatalogRemoveResourcePackagesResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPackageCatalogRemoveResourcePackagesResult * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPackageCatalogRemoveResourcePackagesResult *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPackageCatalogRemoveResourcePackagesResult * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPackageCatalogRemoveResourcePackagesResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPackageCatalogRemoveResourcePackagesResult * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CIPackageCatalogRemoveResourcePackagesResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CApplicationModel__CPackageCatalogRemoveResourcePackagesResultVtbl;
interface __FIAsyncOperation_1_Windows__CApplicationModel__CPackageCatalogRemoveResourcePackagesResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CApplicationModel__CPackageCatalogRemoveResourcePackagesResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> put_Completed(This,handler) )
    ( (This)->lpVtbl -> get_Completed(This,handler) )
    ( (This)->lpVtbl -> GetResults(This,results) )
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPackageContentGroup __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPackageContentGroup;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPackageContentGroup;
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CPackageContentGroup __FIAsyncOperation_1_Windows__CApplicationModel__CPackageContentGroup;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPackageContentGroupVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPackageContentGroup * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPackageContentGroup * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPackageContentGroup * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPackageContentGroup * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CApplicationModel__CPackageContentGroup *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPackageContentGroupVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPackageContentGroup
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPackageContentGroupVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CPackageContentGroup __FIAsyncOperation_1_Windows__CApplicationModel__CPackageContentGroup;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CApplicationModel__CPackageContentGroup;
typedef struct __FIAsyncOperation_1_Windows__CApplicationModel__CPackageContentGroupVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPackageContentGroup * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPackageContentGroup * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPackageContentGroup * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPackageContentGroup * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPackageContentGroup * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPackageContentGroup * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPackageContentGroup * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPackageContentGroup *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPackageContentGroup * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPackageContentGroup **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPackageContentGroup * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CIPackageContentGroup * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CApplicationModel__CPackageContentGroupVtbl;
interface __FIAsyncOperation_1_Windows__CApplicationModel__CPackageContentGroup
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CApplicationModel__CPackageContentGroupVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> put_Completed(This,handler) )
    ( (This)->lpVtbl -> get_Completed(This,handler) )
    ( (This)->lpVtbl -> GetResults(This,results) )
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPackageUpdateAvailabilityResult __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPackageUpdateAvailabilityResult;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPackageUpdateAvailabilityResult;
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CPackageUpdateAvailabilityResult __FIAsyncOperation_1_Windows__CApplicationModel__CPackageUpdateAvailabilityResult;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPackageUpdateAvailabilityResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPackageUpdateAvailabilityResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPackageUpdateAvailabilityResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPackageUpdateAvailabilityResult * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPackageUpdateAvailabilityResult * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CApplicationModel__CPackageUpdateAvailabilityResult *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPackageUpdateAvailabilityResultVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPackageUpdateAvailabilityResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPackageUpdateAvailabilityResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CPackageUpdateAvailabilityResult __FIAsyncOperation_1_Windows__CApplicationModel__CPackageUpdateAvailabilityResult;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CApplicationModel__CPackageUpdateAvailabilityResult;
typedef struct __FIAsyncOperation_1_Windows__CApplicationModel__CPackageUpdateAvailabilityResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPackageUpdateAvailabilityResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPackageUpdateAvailabilityResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPackageUpdateAvailabilityResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPackageUpdateAvailabilityResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPackageUpdateAvailabilityResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPackageUpdateAvailabilityResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPackageUpdateAvailabilityResult * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPackageUpdateAvailabilityResult *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPackageUpdateAvailabilityResult * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPackageUpdateAvailabilityResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPackageUpdateAvailabilityResult * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CIPackageUpdateAvailabilityResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CApplicationModel__CPackageUpdateAvailabilityResultVtbl;
interface __FIAsyncOperation_1_Windows__CApplicationModel__CPackageUpdateAvailabilityResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CApplicationModel__CPackageUpdateAvailabilityResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> put_Completed(This,handler) )
    ( (This)->lpVtbl -> get_Completed(This,handler) )
    ( (This)->lpVtbl -> GetResults(This,results) )
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStartupTask __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStartupTask;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStartupTask;
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CStartupTask __FIAsyncOperation_1_Windows__CApplicationModel__CStartupTask;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStartupTaskVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStartupTask * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStartupTask * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStartupTask * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStartupTask * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CApplicationModel__CStartupTask *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStartupTaskVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStartupTask
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStartupTaskVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CStartupTask __FIAsyncOperation_1_Windows__CApplicationModel__CStartupTask;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CApplicationModel__CStartupTask;
typedef struct __FIAsyncOperation_1_Windows__CApplicationModel__CStartupTaskVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStartupTask * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStartupTask * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStartupTask * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStartupTask * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStartupTask * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStartupTask * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStartupTask * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStartupTask *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStartupTask * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStartupTask **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStartupTask * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CIStartupTask * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CApplicationModel__CStartupTaskVtbl;
interface __FIAsyncOperation_1_Windows__CApplicationModel__CStartupTask
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CApplicationModel__CStartupTaskVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> put_Completed(This,handler) )
    ( (This)->lpVtbl -> get_Completed(This,handler) )
    ( (This)->lpVtbl -> GetResults(This,results) )
enum __x_ABI_CWindows_CApplicationModel_CStartupTaskState;
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStartupTaskState __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStartupTaskState;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStartupTaskState;
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CStartupTaskState __FIAsyncOperation_1_Windows__CApplicationModel__CStartupTaskState;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStartupTaskStateVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStartupTaskState * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStartupTaskState * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStartupTaskState * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStartupTaskState * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CApplicationModel__CStartupTaskState *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStartupTaskStateVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStartupTaskState
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStartupTaskStateVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CStartupTaskState __FIAsyncOperation_1_Windows__CApplicationModel__CStartupTaskState;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CApplicationModel__CStartupTaskState;
typedef struct __FIAsyncOperation_1_Windows__CApplicationModel__CStartupTaskStateVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStartupTaskState * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStartupTaskState * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStartupTaskState * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStartupTaskState * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStartupTaskState * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStartupTaskState * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStartupTaskState * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStartupTaskState *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStartupTaskState * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStartupTaskState **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStartupTaskState * This, __RPC__out enum __x_ABI_CWindows_CApplicationModel_CStartupTaskState *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CApplicationModel__CStartupTaskStateVtbl;
interface __FIAsyncOperation_1_Windows__CApplicationModel__CStartupTaskState
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CApplicationModel__CStartupTaskStateVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> put_Completed(This,handler) )
    ( (This)->lpVtbl -> get_Completed(This,handler) )
    ( (This)->lpVtbl -> GetResults(This,results) )
typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo;
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo;
typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo * This, __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppInfoVtbl;
interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppInfoVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo;
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo;
typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo * This, __RPC__out __FIVectorView_1_Windows__CApplicationModel__CAppInfo * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppInfoVtbl;
interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppInfoVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> put_Completed(This,handler) )
    ( (This)->lpVtbl -> get_Completed(This,handler) )
    ( (This)->lpVtbl -> GetResults(This,results) )
typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStartupTask __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStartupTask;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStartupTask;
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStartupTask __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStartupTask;
typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStartupTaskVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStartupTask * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStartupTask * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStartupTask * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStartupTask * This, __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStartupTask *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStartupTaskVtbl;
interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStartupTask
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStartupTaskVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStartupTask __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStartupTask;
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStartupTask;
typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStartupTaskVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStartupTask * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStartupTask * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStartupTask * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStartupTask * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStartupTask * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStartupTask * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStartupTask * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStartupTask *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStartupTask * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStartupTask **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStartupTask * This, __RPC__out __FIVectorView_1_Windows__CApplicationModel__CStartupTask * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStartupTaskVtbl;
interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStartupTask
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStartupTaskVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> put_Completed(This,handler) )
    ( (This)->lpVtbl -> get_Completed(This,handler) )
    ( (This)->lpVtbl -> GetResults(This,results) )
typedef interface __FIAsyncOperationCompletedHandler_1___FIVector_1_Windows__CApplicationModel__CPackageContentGroup __FIAsyncOperationCompletedHandler_1___FIVector_1_Windows__CApplicationModel__CPackageContentGroup;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVector_1_Windows__CApplicationModel__CPackageContentGroup;
typedef interface __FIAsyncOperation_1___FIVector_1_Windows__CApplicationModel__CPackageContentGroup __FIAsyncOperation_1___FIVector_1_Windows__CApplicationModel__CPackageContentGroup;
typedef struct __FIAsyncOperationCompletedHandler_1___FIVector_1_Windows__CApplicationModel__CPackageContentGroupVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVector_1_Windows__CApplicationModel__CPackageContentGroup * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVector_1_Windows__CApplicationModel__CPackageContentGroup * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVector_1_Windows__CApplicationModel__CPackageContentGroup * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVector_1_Windows__CApplicationModel__CPackageContentGroup * This, __RPC__in_opt __FIAsyncOperation_1___FIVector_1_Windows__CApplicationModel__CPackageContentGroup *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVector_1_Windows__CApplicationModel__CPackageContentGroupVtbl;
interface __FIAsyncOperationCompletedHandler_1___FIVector_1_Windows__CApplicationModel__CPackageContentGroup
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVector_1_Windows__CApplicationModel__CPackageContentGroupVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1___FIVector_1_Windows__CApplicationModel__CPackageContentGroup __FIAsyncOperation_1___FIVector_1_Windows__CApplicationModel__CPackageContentGroup;
EXTERN_C const IID IID___FIAsyncOperation_1___FIVector_1_Windows__CApplicationModel__CPackageContentGroup;
typedef struct __FIAsyncOperation_1___FIVector_1_Windows__CApplicationModel__CPackageContentGroupVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVector_1_Windows__CApplicationModel__CPackageContentGroup * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVector_1_Windows__CApplicationModel__CPackageContentGroup * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVector_1_Windows__CApplicationModel__CPackageContentGroup * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVector_1_Windows__CApplicationModel__CPackageContentGroup * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVector_1_Windows__CApplicationModel__CPackageContentGroup * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVector_1_Windows__CApplicationModel__CPackageContentGroup * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVector_1_Windows__CApplicationModel__CPackageContentGroup * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVector_1_Windows__CApplicationModel__CPackageContentGroup *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVector_1_Windows__CApplicationModel__CPackageContentGroup * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVector_1_Windows__CApplicationModel__CPackageContentGroup **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVector_1_Windows__CApplicationModel__CPackageContentGroup * This, __RPC__out __FIVector_1_Windows__CApplicationModel__CPackageContentGroup * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVector_1_Windows__CApplicationModel__CPackageContentGroupVtbl;
interface __FIAsyncOperation_1___FIVector_1_Windows__CApplicationModel__CPackageContentGroup
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVector_1_Windows__CApplicationModel__CPackageContentGroupVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> put_Completed(This,handler) )
    ( (This)->lpVtbl -> get_Completed(This,handler) )
    ( (This)->lpVtbl -> GetResults(This,results) )
typedef interface __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageContentGroupStagingEventArgs __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageContentGroupStagingEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageContentGroupStagingEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageContentGroupStagingEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageContentGroupStagingEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageContentGroupStagingEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageContentGroupStagingEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageContentGroupStagingEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CIPackageCatalog * sender, __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CIPackageContentGroupStagingEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageContentGroupStagingEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageContentGroupStagingEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageContentGroupStagingEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageInstallingEventArgs __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageInstallingEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageInstallingEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageInstallingEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageInstallingEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageInstallingEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageInstallingEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageInstallingEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CIPackageCatalog * sender, __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CIPackageInstallingEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageInstallingEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageInstallingEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageInstallingEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageStagingEventArgs __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageStagingEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageStagingEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageStagingEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageStagingEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageStagingEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageStagingEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageStagingEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CIPackageCatalog * sender, __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CIPackageStagingEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageStagingEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageStagingEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageStagingEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageStatusChangedEventArgs __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageStatusChangedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageStatusChangedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageStatusChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageStatusChangedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageStatusChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageStatusChangedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageStatusChangedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CIPackageCatalog * sender, __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CIPackageStatusChangedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageStatusChangedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageStatusChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageStatusChangedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageUninstallingEventArgs __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageUninstallingEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageUninstallingEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageUninstallingEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageUninstallingEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageUninstallingEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageUninstallingEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageUninstallingEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CIPackageCatalog * sender, __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CIPackageUninstallingEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageUninstallingEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageUninstallingEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageUninstallingEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageUpdatingEventArgs __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageUpdatingEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageUpdatingEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageUpdatingEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageUpdatingEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageUpdatingEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageUpdatingEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageUpdatingEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CIPackageCatalog * sender, __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CIPackageUpdatingEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageUpdatingEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageUpdatingEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageUpdatingEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
struct __x_ABI_CWindows_CFoundation_CDateTime;
typedef interface __FIReference_1_Windows__CFoundation__CDateTime __FIReference_1_Windows__CFoundation__CDateTime;
EXTERN_C const IID IID___FIReference_1_Windows__CFoundation__CDateTime;
typedef struct __FIReference_1_Windows__CFoundation__CDateTimeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_Windows__CFoundation__CDateTime * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_Windows__CFoundation__CDateTime * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_Windows__CFoundation__CDateTime * This );
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_Windows__CFoundation__CDateTime * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_Windows__CFoundation__CDateTime * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_Windows__CFoundation__CDateTime * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_Windows__CFoundation__CDateTime * This, __RPC__out struct __x_ABI_CWindows_CFoundation_CDateTime *value);
    END_INTERFACE
} __FIReference_1_Windows__CFoundation__CDateTimeVtbl;
interface __FIReference_1_Windows__CFoundation__CDateTime
{
    CONST_VTBL struct __FIReference_1_Windows__CFoundation__CDateTimeVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Value(This,value) )
typedef interface __x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntry __x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntry;
typedef interface __FIIterator_1_Windows__CApplicationModel__CCore__CAppListEntry __FIIterator_1_Windows__CApplicationModel__CCore__CAppListEntry;
EXTERN_C const IID IID___FIIterator_1_Windows__CApplicationModel__CCore__CAppListEntry;
typedef struct __FIIterator_1_Windows__CApplicationModel__CCore__CAppListEntryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CApplicationModel__CCore__CAppListEntry * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CCore__CAppListEntry * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CCore__CAppListEntry * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CCore__CAppListEntry * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CCore__CAppListEntry * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CCore__CAppListEntry * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CCore__CAppListEntry * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntry * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CCore__CAppListEntry * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CCore__CAppListEntry * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CCore__CAppListEntry * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntry * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CApplicationModel__CCore__CAppListEntryVtbl;
interface __FIIterator_1_Windows__CApplicationModel__CCore__CAppListEntry
{
    CONST_VTBL struct __FIIterator_1_Windows__CApplicationModel__CCore__CAppListEntryVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Current(This,current) )
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) )
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) )
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) )
typedef interface __FIIterable_1_Windows__CApplicationModel__CCore__CAppListEntry __FIIterable_1_Windows__CApplicationModel__CCore__CAppListEntry;
EXTERN_C const IID IID___FIIterable_1_Windows__CApplicationModel__CCore__CAppListEntry;
typedef struct __FIIterable_1_Windows__CApplicationModel__CCore__CAppListEntryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CApplicationModel__CCore__CAppListEntry * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CCore__CAppListEntry * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CCore__CAppListEntry * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CCore__CAppListEntry * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CCore__CAppListEntry * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CCore__CAppListEntry * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CCore__CAppListEntry * This, __RPC__deref_out_opt __FIIterator_1_Windows__CApplicationModel__CCore__CAppListEntry **first);
    END_INTERFACE
} __FIIterable_1_Windows__CApplicationModel__CCore__CAppListEntryVtbl;
interface __FIIterable_1_Windows__CApplicationModel__CCore__CAppListEntry
{
    CONST_VTBL struct __FIIterable_1_Windows__CApplicationModel__CCore__CAppListEntryVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry __FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry;
EXTERN_C const IID IID___FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry;
typedef struct __FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntry * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry * This,
                       __x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntry * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntry * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntryVtbl;
interface __FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry
{
    CONST_VTBL struct __FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntryVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> GetAt(This,index,item) )
    ( (This)->lpVtbl -> get_Size(This,size) )
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) )
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) )
typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry;
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry;
typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry * This, __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntryVtbl;
interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntryVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry;
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry;
typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry * This, __RPC__out __FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntryVtbl;
interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntryVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> put_Completed(This,handler) )
    ( (This)->lpVtbl -> get_Completed(This,handler) )
    ( (This)->lpVtbl -> GetResults(This,results) )
typedef interface __FIAsyncOperationCompletedHandler_1_boolean __FIAsyncOperationCompletedHandler_1_boolean;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_boolean;
typedef interface __FIAsyncOperation_1_boolean __FIAsyncOperation_1_boolean;
typedef struct __FIAsyncOperationCompletedHandler_1_booleanVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_boolean * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_boolean * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_boolean * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_boolean * This, __RPC__in_opt __FIAsyncOperation_1_boolean *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_booleanVtbl;
interface __FIAsyncOperationCompletedHandler_1_boolean
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_booleanVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_boolean __FIAsyncOperation_1_boolean;
EXTERN_C const IID IID___FIAsyncOperation_1_boolean;
typedef struct __FIAsyncOperation_1_booleanVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_boolean * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_boolean * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_boolean * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_boolean * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_boolean * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_boolean * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_boolean * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_boolean *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_boolean * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_boolean **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_boolean * This, __RPC__out boolean *results);
    END_INTERFACE
} __FIAsyncOperation_1_booleanVtbl;
interface __FIAsyncOperation_1_boolean
{
    CONST_VTBL struct __FIAsyncOperation_1_booleanVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> put_Completed(This,handler) )
    ( (This)->lpVtbl -> get_Completed(This,handler) )
    ( (This)->lpVtbl -> GetResults(This,results) )
typedef interface __FIIterator_1_HSTRING __FIIterator_1_HSTRING;
EXTERN_C const IID IID___FIIterator_1_HSTRING;
typedef struct __FIIterator_1_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_HSTRING * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_HSTRING * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_HSTRING * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_HSTRING * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_HSTRING * This, __RPC__out HSTRING *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_HSTRING * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_HSTRING * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_HSTRING * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) HSTRING *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_HSTRINGVtbl;
interface __FIIterator_1_HSTRING
{
    CONST_VTBL struct __FIIterator_1_HSTRINGVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Current(This,current) )
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) )
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) )
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) )
typedef interface __FIIterable_1_HSTRING __FIIterable_1_HSTRING;
EXTERN_C const IID IID___FIIterable_1_HSTRING;
typedef struct __FIIterable_1_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_HSTRING * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_HSTRING * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_HSTRING * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_HSTRING * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_HSTRING * This, __RPC__deref_out_opt __FIIterator_1_HSTRING **first);
    END_INTERFACE
} __FIIterable_1_HSTRINGVtbl;
interface __FIIterable_1_HSTRING
{
    CONST_VTBL struct __FIIterable_1_HSTRINGVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CIActivatedEventArgs;
typedef struct __x_ABI_CWindows_CFoundation_CDateTime __x_ABI_CWindows_CFoundation_CDateTime;
typedef interface __x_ABI_CWindows_CFoundation_CIDeferral __x_ABI_CWindows_CFoundation_CIDeferral;
typedef interface __x_ABI_CWindows_CFoundation_CIAsyncAction __x_ABI_CWindows_CFoundation_CIAsyncAction;
typedef struct __x_ABI_CWindows_CFoundation_CSize __x_ABI_CWindows_CFoundation_CSize;
typedef interface __x_ABI_CWindows_CFoundation_CIUriRuntimeClass __x_ABI_CWindows_CFoundation_CIUriRuntimeClass;
typedef interface __x_ABI_CWindows_CStorage_CIStorageFolder __x_ABI_CWindows_CStorage_CIStorageFolder;
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference;
typedef enum __x_ABI_CWindows_CSystem_CProcessorArchitecture __x_ABI_CWindows_CSystem_CProcessorArchitecture;
typedef enum __x_ABI_CWindows_CApplicationModel_CAddResourcePackageOptions __x_ABI_CWindows_CApplicationModel_CAddResourcePackageOptions;
typedef enum __x_ABI_CWindows_CApplicationModel_CLimitedAccessFeatureStatus __x_ABI_CWindows_CApplicationModel_CLimitedAccessFeatureStatus;
typedef enum __x_ABI_CWindows_CApplicationModel_CPackageContentGroupState __x_ABI_CWindows_CApplicationModel_CPackageContentGroupState;
typedef enum __x_ABI_CWindows_CApplicationModel_CPackageSignatureKind __x_ABI_CWindows_CApplicationModel_CPackageSignatureKind;
typedef enum __x_ABI_CWindows_CApplicationModel_CPackageUpdateAvailability __x_ABI_CWindows_CApplicationModel_CPackageUpdateAvailability;
typedef enum __x_ABI_CWindows_CApplicationModel_CStartupTaskState __x_ABI_CWindows_CApplicationModel_CStartupTaskState;
typedef struct __x_ABI_CWindows_CApplicationModel_CPackageInstallProgress __x_ABI_CWindows_CApplicationModel_CPackageInstallProgress;
typedef struct __x_ABI_CWindows_CApplicationModel_CPackageVersion __x_ABI_CWindows_CApplicationModel_CPackageVersion;
enum __x_ABI_CWindows_CApplicationModel_CAddResourcePackageOptions
{
    AddResourcePackageOptions_None = 0,
    AddResourcePackageOptions_ForceTargetAppShutdown = 0x1,
    AddResourcePackageOptions_ApplyUpdateIfAvailable = 0x2,
};
enum __x_ABI_CWindows_CApplicationModel_CLimitedAccessFeatureStatus
{
    LimitedAccessFeatureStatus_Unavailable = 0,
    LimitedAccessFeatureStatus_Available = 1,
    LimitedAccessFeatureStatus_AvailableWithoutToken = 2,
    LimitedAccessFeatureStatus_Unknown = 3,
};
enum __x_ABI_CWindows_CApplicationModel_CPackageContentGroupState
{
    PackageContentGroupState_NotStaged = 0,
    PackageContentGroupState_Queued = 1,
    PackageContentGroupState_Staging = 2,
    PackageContentGroupState_Staged = 3,
};
enum __x_ABI_CWindows_CApplicationModel_CPackageSignatureKind
{
    PackageSignatureKind_None = 0,
    PackageSignatureKind_Developer = 1,
    PackageSignatureKind_Enterprise = 2,
    PackageSignatureKind_Store = 3,
    PackageSignatureKind_System = 4,
};
enum __x_ABI_CWindows_CApplicationModel_CPackageUpdateAvailability
{
    PackageUpdateAvailability_Unknown = 0,
    PackageUpdateAvailability_NoUpdates = 1,
    PackageUpdateAvailability_Available = 2,
    PackageUpdateAvailability_Required = 3,
    PackageUpdateAvailability_Error = 4,
};
enum __x_ABI_CWindows_CApplicationModel_CStartupTaskState
{
    StartupTaskState_Disabled = 0,
    StartupTaskState_DisabledByUser = 1,
    StartupTaskState_Enabled = 2,
    StartupTaskState_DisabledByPolicy = 3,
    StartupTaskState_EnabledByPolicy = 4,
};
struct __x_ABI_CWindows_CApplicationModel_CPackageInstallProgress
{
    UINT32 PercentComplete;
};
struct __x_ABI_CWindows_CApplicationModel_CPackageVersion
{
    UINT16 Major;
    UINT16 Minor;
    UINT16 Build;
    UINT16 Revision;
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_IAppDisplayInfo[] = L"Windows.ApplicationModel.IAppDisplayInfo";
typedef struct __x_ABI_CWindows_CApplicationModel_CIAppDisplayInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIAppDisplayInfo * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIAppDisplayInfo * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIAppDisplayInfo * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIAppDisplayInfo * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIAppDisplayInfo * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIAppDisplayInfo * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DisplayName )(
        __x_ABI_CWindows_CApplicationModel_CIAppDisplayInfo * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Description )(
        __x_ABI_CWindows_CApplicationModel_CIAppDisplayInfo * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetLogo )(
        __x_ABI_CWindows_CApplicationModel_CIAppDisplayInfo * This,
                  __x_ABI_CWindows_CFoundation_CSize size,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CIAppDisplayInfoVtbl;
interface __x_ABI_CWindows_CApplicationModel_CIAppDisplayInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CIAppDisplayInfoVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DisplayName(This,value) )
    ( (This)->lpVtbl->get_Description(This,value) )
    ( (This)->lpVtbl->GetLogo(This,size,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CIAppDisplayInfo;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_IAppInfo[] = L"Windows.ApplicationModel.IAppInfo";
typedef struct __x_ABI_CWindows_CApplicationModel_CIAppInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIAppInfo * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIAppInfo * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIAppInfo * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIAppInfo * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIAppInfo * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIAppInfo * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CApplicationModel_CIAppInfo * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AppUserModelId )(
        __x_ABI_CWindows_CApplicationModel_CIAppInfo * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DisplayInfo )(
        __x_ABI_CWindows_CApplicationModel_CIAppInfo * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CIAppDisplayInfo * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PackageFamilyName )(
        __x_ABI_CWindows_CApplicationModel_CIAppInfo * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CIAppInfoVtbl;
interface __x_ABI_CWindows_CApplicationModel_CIAppInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CIAppInfoVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Id(This,value) )
    ( (This)->lpVtbl->get_AppUserModelId(This,value) )
    ( (This)->lpVtbl->get_DisplayInfo(This,value) )
    ( (This)->lpVtbl->get_PackageFamilyName(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CIAppInfo;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_IAppInstallerInfo[] = L"Windows.ApplicationModel.IAppInstallerInfo";
typedef struct __x_ABI_CWindows_CApplicationModel_CIAppInstallerInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIAppInstallerInfo * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIAppInstallerInfo * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIAppInstallerInfo * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIAppInstallerInfo * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIAppInstallerInfo * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIAppInstallerInfo * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Uri )(
        __x_ABI_CWindows_CApplicationModel_CIAppInstallerInfo * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CIAppInstallerInfoVtbl;
interface __x_ABI_CWindows_CApplicationModel_CIAppInstallerInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CIAppInstallerInfoVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Uri(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CIAppInstallerInfo;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_IAppInstance[] = L"Windows.ApplicationModel.IAppInstance";
typedef struct __x_ABI_CWindows_CApplicationModel_CIAppInstanceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIAppInstance * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIAppInstance * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIAppInstance * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIAppInstance * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIAppInstance * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIAppInstance * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Key )(
        __x_ABI_CWindows_CApplicationModel_CIAppInstance * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsCurrentInstance )(
        __x_ABI_CWindows_CApplicationModel_CIAppInstance * This,
                           __RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *RedirectActivationTo )(
        __x_ABI_CWindows_CApplicationModel_CIAppInstance * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CIAppInstanceVtbl;
interface __x_ABI_CWindows_CApplicationModel_CIAppInstance
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CIAppInstanceVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Key(This,value) )
    ( (This)->lpVtbl->get_IsCurrentInstance(This,value) )
    ( (This)->lpVtbl->RedirectActivationTo(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CIAppInstance;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_IAppInstanceStatics[] = L"Windows.ApplicationModel.IAppInstanceStatics";
typedef struct __x_ABI_CWindows_CApplicationModel_CIAppInstanceStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIAppInstanceStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIAppInstanceStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIAppInstanceStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIAppInstanceStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIAppInstanceStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIAppInstanceStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_RecommendedInstance )(
        __x_ABI_CWindows_CApplicationModel_CIAppInstanceStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CIAppInstance * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetActivatedEventArgs )(
        __x_ABI_CWindows_CApplicationModel_CIAppInstanceStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CActivation_CIActivatedEventArgs * * result
        );
    HRESULT ( STDMETHODCALLTYPE *FindOrRegisterInstanceForKey )(
        __x_ABI_CWindows_CApplicationModel_CIAppInstanceStatics * This,
                  __RPC__in HSTRING key,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CIAppInstance * * result
        );
    HRESULT ( STDMETHODCALLTYPE *Unregister )(
        __x_ABI_CWindows_CApplicationModel_CIAppInstanceStatics * This
        );
    HRESULT ( STDMETHODCALLTYPE *GetInstances )(
        __x_ABI_CWindows_CApplicationModel_CIAppInstanceStatics * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CApplicationModel__CAppInstance * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CIAppInstanceStaticsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CIAppInstanceStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CIAppInstanceStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_RecommendedInstance(This,value) )
    ( (This)->lpVtbl->GetActivatedEventArgs(This,result) )
    ( (This)->lpVtbl->FindOrRegisterInstanceForKey(This,key,result) )
    ( (This)->lpVtbl->Unregister(This) )
    ( (This)->lpVtbl->GetInstances(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CIAppInstanceStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_IDesignModeStatics[] = L"Windows.ApplicationModel.IDesignModeStatics";
typedef struct __x_ABI_CWindows_CApplicationModel_CIDesignModeStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIDesignModeStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIDesignModeStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIDesignModeStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIDesignModeStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIDesignModeStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIDesignModeStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DesignModeEnabled )(
        __x_ABI_CWindows_CApplicationModel_CIDesignModeStatics * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CIDesignModeStaticsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CIDesignModeStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CIDesignModeStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DesignModeEnabled(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CIDesignModeStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_IDesignModeStatics2[] = L"Windows.ApplicationModel.IDesignModeStatics2";
typedef struct __x_ABI_CWindows_CApplicationModel_CIDesignModeStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIDesignModeStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIDesignModeStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIDesignModeStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIDesignModeStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIDesignModeStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIDesignModeStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DesignMode2Enabled )(
        __x_ABI_CWindows_CApplicationModel_CIDesignModeStatics2 * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CIDesignModeStatics2Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CIDesignModeStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CIDesignModeStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DesignMode2Enabled(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CIDesignModeStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_IEnteredBackgroundEventArgs[] = L"Windows.ApplicationModel.IEnteredBackgroundEventArgs";
typedef struct __x_ABI_CWindows_CApplicationModel_CIEnteredBackgroundEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIEnteredBackgroundEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIEnteredBackgroundEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIEnteredBackgroundEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIEnteredBackgroundEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIEnteredBackgroundEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIEnteredBackgroundEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CApplicationModel_CIEnteredBackgroundEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIDeferral * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CIEnteredBackgroundEventArgsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CIEnteredBackgroundEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CIEnteredBackgroundEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetDeferral(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CIEnteredBackgroundEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_IFullTrustProcessLauncherStatics[] = L"Windows.ApplicationModel.IFullTrustProcessLauncherStatics";
typedef struct __x_ABI_CWindows_CApplicationModel_CIFullTrustProcessLauncherStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIFullTrustProcessLauncherStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIFullTrustProcessLauncherStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIFullTrustProcessLauncherStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIFullTrustProcessLauncherStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIFullTrustProcessLauncherStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIFullTrustProcessLauncherStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *LaunchFullTrustProcessForCurrentAppAsync )(
        __x_ABI_CWindows_CApplicationModel_CIFullTrustProcessLauncherStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * asyncAction
        );
                    HRESULT ( STDMETHODCALLTYPE *LaunchFullTrustProcessForCurrentAppWithParametersAsync )(
        __x_ABI_CWindows_CApplicationModel_CIFullTrustProcessLauncherStatics * This,
                  __RPC__in HSTRING parameterGroupId,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * asyncAction
        );
                    HRESULT ( STDMETHODCALLTYPE *LaunchFullTrustProcessForAppAsync )(
        __x_ABI_CWindows_CApplicationModel_CIFullTrustProcessLauncherStatics * This,
                  __RPC__in HSTRING fullTrustPackageRelativeAppId,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * asyncAction
        );
                    HRESULT ( STDMETHODCALLTYPE *LaunchFullTrustProcessForAppWithParametersAsync )(
        __x_ABI_CWindows_CApplicationModel_CIFullTrustProcessLauncherStatics * This,
                  __RPC__in HSTRING fullTrustPackageRelativeAppId,
                  __RPC__in HSTRING parameterGroupId,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * asyncAction
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CIFullTrustProcessLauncherStaticsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CIFullTrustProcessLauncherStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CIFullTrustProcessLauncherStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->LaunchFullTrustProcessForCurrentAppAsync(This,asyncAction) )
    ( (This)->lpVtbl->LaunchFullTrustProcessForCurrentAppWithParametersAsync(This,parameterGroupId,asyncAction) )
    ( (This)->lpVtbl->LaunchFullTrustProcessForAppAsync(This,fullTrustPackageRelativeAppId,asyncAction) )
    ( (This)->lpVtbl->LaunchFullTrustProcessForAppWithParametersAsync(This,fullTrustPackageRelativeAppId,parameterGroupId,asyncAction) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CIFullTrustProcessLauncherStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_ILeavingBackgroundEventArgs[] = L"Windows.ApplicationModel.ILeavingBackgroundEventArgs";
typedef struct __x_ABI_CWindows_CApplicationModel_CILeavingBackgroundEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CILeavingBackgroundEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CILeavingBackgroundEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CILeavingBackgroundEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CILeavingBackgroundEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CILeavingBackgroundEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CILeavingBackgroundEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CApplicationModel_CILeavingBackgroundEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIDeferral * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CILeavingBackgroundEventArgsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CILeavingBackgroundEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CILeavingBackgroundEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetDeferral(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CILeavingBackgroundEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_ILimitedAccessFeatureRequestResult[] = L"Windows.ApplicationModel.ILimitedAccessFeatureRequestResult";
typedef struct __x_ABI_CWindows_CApplicationModel_CILimitedAccessFeatureRequestResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CILimitedAccessFeatureRequestResult * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CILimitedAccessFeatureRequestResult * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CILimitedAccessFeatureRequestResult * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CILimitedAccessFeatureRequestResult * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CILimitedAccessFeatureRequestResult * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CILimitedAccessFeatureRequestResult * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_FeatureId )(
        __x_ABI_CWindows_CApplicationModel_CILimitedAccessFeatureRequestResult * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CApplicationModel_CILimitedAccessFeatureRequestResult * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CLimitedAccessFeatureStatus * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_EstimatedRemovalDate )(
        __x_ABI_CWindows_CApplicationModel_CILimitedAccessFeatureRequestResult * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CDateTime * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CILimitedAccessFeatureRequestResultVtbl;
interface __x_ABI_CWindows_CApplicationModel_CILimitedAccessFeatureRequestResult
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CILimitedAccessFeatureRequestResultVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_FeatureId(This,value) )
    ( (This)->lpVtbl->get_Status(This,value) )
    ( (This)->lpVtbl->get_EstimatedRemovalDate(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CILimitedAccessFeatureRequestResult;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_ILimitedAccessFeaturesStatics[] = L"Windows.ApplicationModel.ILimitedAccessFeaturesStatics";
typedef struct __x_ABI_CWindows_CApplicationModel_CILimitedAccessFeaturesStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CILimitedAccessFeaturesStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CILimitedAccessFeaturesStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CILimitedAccessFeaturesStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CILimitedAccessFeaturesStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CILimitedAccessFeaturesStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CILimitedAccessFeaturesStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *TryUnlockFeature )(
        __x_ABI_CWindows_CApplicationModel_CILimitedAccessFeaturesStatics * This,
                  __RPC__in HSTRING featureId,
                  __RPC__in HSTRING token,
                  __RPC__in HSTRING attestation,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CILimitedAccessFeatureRequestResult * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CILimitedAccessFeaturesStaticsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CILimitedAccessFeaturesStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CILimitedAccessFeaturesStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->TryUnlockFeature(This,featureId,token,attestation,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CILimitedAccessFeaturesStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_IPackage[] = L"Windows.ApplicationModel.IPackage";
typedef struct __x_ABI_CWindows_CApplicationModel_CIPackageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackage * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackage * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackage * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackage * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackage * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackage * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CApplicationModel_CIPackage * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CIPackageId * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_InstalledLocation )(
        __x_ABI_CWindows_CApplicationModel_CIPackage * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CIStorageFolder * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsFramework )(
        __x_ABI_CWindows_CApplicationModel_CIPackage * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Dependencies )(
        __x_ABI_CWindows_CApplicationModel_CIPackage * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CApplicationModel__CPackage * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CIPackageVtbl;
interface __x_ABI_CWindows_CApplicationModel_CIPackage
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CIPackageVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Id(This,value) )
    ( (This)->lpVtbl->get_InstalledLocation(This,value) )
    ( (This)->lpVtbl->get_IsFramework(This,value) )
    ( (This)->lpVtbl->get_Dependencies(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CIPackage;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_IPackage2[] = L"Windows.ApplicationModel.IPackage2";
typedef struct __x_ABI_CWindows_CApplicationModel_CIPackage2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackage2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackage2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackage2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackage2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackage2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackage2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DisplayName )(
        __x_ABI_CWindows_CApplicationModel_CIPackage2 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PublisherDisplayName )(
        __x_ABI_CWindows_CApplicationModel_CIPackage2 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Description )(
        __x_ABI_CWindows_CApplicationModel_CIPackage2 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Logo )(
        __x_ABI_CWindows_CApplicationModel_CIPackage2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsResourcePackage )(
        __x_ABI_CWindows_CApplicationModel_CIPackage2 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsBundle )(
        __x_ABI_CWindows_CApplicationModel_CIPackage2 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsDevelopmentMode )(
        __x_ABI_CWindows_CApplicationModel_CIPackage2 * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CIPackage2Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CIPackage2
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CIPackage2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DisplayName(This,value) )
    ( (This)->lpVtbl->get_PublisherDisplayName(This,value) )
    ( (This)->lpVtbl->get_Description(This,value) )
    ( (This)->lpVtbl->get_Logo(This,value) )
    ( (This)->lpVtbl->get_IsResourcePackage(This,value) )
    ( (This)->lpVtbl->get_IsBundle(This,value) )
    ( (This)->lpVtbl->get_IsDevelopmentMode(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CIPackage2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_IPackage3[] = L"Windows.ApplicationModel.IPackage3";
typedef struct __x_ABI_CWindows_CApplicationModel_CIPackage3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackage3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackage3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackage3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackage3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackage3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackage3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CApplicationModel_CIPackage3 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CIPackageStatus * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_InstalledDate )(
        __x_ABI_CWindows_CApplicationModel_CIPackage3 * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetAppListEntriesAsync )(
        __x_ABI_CWindows_CApplicationModel_CIPackage3 * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CIPackage3Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CIPackage3
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CIPackage3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Status(This,value) )
    ( (This)->lpVtbl->get_InstalledDate(This,value) )
    ( (This)->lpVtbl->GetAppListEntriesAsync(This,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CIPackage3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_IPackage4[] = L"Windows.ApplicationModel.IPackage4";
typedef struct __x_ABI_CWindows_CApplicationModel_CIPackage4Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackage4 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackage4 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackage4 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackage4 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackage4 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackage4 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_SignatureKind )(
        __x_ABI_CWindows_CApplicationModel_CIPackage4 * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CPackageSignatureKind * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsOptional )(
        __x_ABI_CWindows_CApplicationModel_CIPackage4 * This,
                           __RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *VerifyContentIntegrityAsync )(
        __x_ABI_CWindows_CApplicationModel_CIPackage4 * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CIPackage4Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CIPackage4
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CIPackage4Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_SignatureKind(This,value) )
    ( (This)->lpVtbl->get_IsOptional(This,value) )
    ( (This)->lpVtbl->VerifyContentIntegrityAsync(This,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CIPackage4;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_IPackage5[] = L"Windows.ApplicationModel.IPackage5";
typedef struct __x_ABI_CWindows_CApplicationModel_CIPackage5Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackage5 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackage5 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackage5 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackage5 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackage5 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackage5 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetContentGroupsAsync )(
        __x_ABI_CWindows_CApplicationModel_CIPackage5 * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVector_1_Windows__CApplicationModel__CPackageContentGroup * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *GetContentGroupAsync )(
        __x_ABI_CWindows_CApplicationModel_CIPackage5 * This,
                  __RPC__in HSTRING name,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CPackageContentGroup * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *StageContentGroupsAsync )(
        __x_ABI_CWindows_CApplicationModel_CIPackage5 * This,
                  __RPC__in_opt __FIIterable_1_HSTRING * names,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVector_1_Windows__CApplicationModel__CPackageContentGroup * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *StageContentGroupsWithPriorityAsync )(
        __x_ABI_CWindows_CApplicationModel_CIPackage5 * This,
                  __RPC__in_opt __FIIterable_1_HSTRING * names,
                  boolean moveToHeadOfQueue,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVector_1_Windows__CApplicationModel__CPackageContentGroup * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *SetInUseAsync )(
        __x_ABI_CWindows_CApplicationModel_CIPackage5 * This,
                  boolean inUse,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CIPackage5Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CIPackage5
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CIPackage5Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetContentGroupsAsync(This,operation) )
    ( (This)->lpVtbl->GetContentGroupAsync(This,name,operation) )
    ( (This)->lpVtbl->StageContentGroupsAsync(This,names,operation) )
    ( (This)->lpVtbl->StageContentGroupsWithPriorityAsync(This,names,moveToHeadOfQueue,operation) )
    ( (This)->lpVtbl->SetInUseAsync(This,inUse,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CIPackage5;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_IPackage6[] = L"Windows.ApplicationModel.IPackage6";
typedef struct __x_ABI_CWindows_CApplicationModel_CIPackage6Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackage6 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackage6 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackage6 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackage6 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackage6 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackage6 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetAppInstallerInfo )(
        __x_ABI_CWindows_CApplicationModel_CIPackage6 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CIAppInstallerInfo * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CheckUpdateAvailabilityAsync )(
        __x_ABI_CWindows_CApplicationModel_CIPackage6 * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CPackageUpdateAvailabilityResult * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CIPackage6Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CIPackage6
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CIPackage6Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetAppInstallerInfo(This,value) )
    ( (This)->lpVtbl->CheckUpdateAvailabilityAsync(This,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CIPackage6;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_IPackage7[] = L"Windows.ApplicationModel.IPackage7";
typedef struct __x_ABI_CWindows_CApplicationModel_CIPackage7Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackage7 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackage7 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackage7 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackage7 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackage7 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackage7 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_MutableLocation )(
        __x_ABI_CWindows_CApplicationModel_CIPackage7 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CIStorageFolder * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_EffectiveLocation )(
        __x_ABI_CWindows_CApplicationModel_CIPackage7 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CIStorageFolder * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CIPackage7Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CIPackage7
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CIPackage7Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_MutableLocation(This,value) )
    ( (This)->lpVtbl->get_EffectiveLocation(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CIPackage7;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_IPackageCatalog[] = L"Windows.ApplicationModel.IPackageCatalog";
typedef struct __x_ABI_CWindows_CApplicationModel_CIPackageCatalogVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageCatalog * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageCatalog * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageCatalog * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageCatalog * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageCatalog * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageCatalog * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_PackageStaging )(
        __x_ABI_CWindows_CApplicationModel_CIPackageCatalog * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageStagingEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_PackageStaging )(
        __x_ABI_CWindows_CApplicationModel_CIPackageCatalog * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_PackageInstalling )(
        __x_ABI_CWindows_CApplicationModel_CIPackageCatalog * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageInstallingEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_PackageInstalling )(
        __x_ABI_CWindows_CApplicationModel_CIPackageCatalog * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_PackageUpdating )(
        __x_ABI_CWindows_CApplicationModel_CIPackageCatalog * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageUpdatingEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_PackageUpdating )(
        __x_ABI_CWindows_CApplicationModel_CIPackageCatalog * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_PackageUninstalling )(
        __x_ABI_CWindows_CApplicationModel_CIPackageCatalog * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageUninstallingEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_PackageUninstalling )(
        __x_ABI_CWindows_CApplicationModel_CIPackageCatalog * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_PackageStatusChanged )(
        __x_ABI_CWindows_CApplicationModel_CIPackageCatalog * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageStatusChangedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_PackageStatusChanged )(
        __x_ABI_CWindows_CApplicationModel_CIPackageCatalog * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CIPackageCatalogVtbl;
interface __x_ABI_CWindows_CApplicationModel_CIPackageCatalog
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CIPackageCatalogVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_PackageStaging(This,handler,token) )
    ( (This)->lpVtbl->remove_PackageStaging(This,token) )
    ( (This)->lpVtbl->add_PackageInstalling(This,handler,token) )
    ( (This)->lpVtbl->remove_PackageInstalling(This,token) )
    ( (This)->lpVtbl->add_PackageUpdating(This,handler,token) )
    ( (This)->lpVtbl->remove_PackageUpdating(This,token) )
    ( (This)->lpVtbl->add_PackageUninstalling(This,handler,token) )
    ( (This)->lpVtbl->remove_PackageUninstalling(This,token) )
    ( (This)->lpVtbl->add_PackageStatusChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_PackageStatusChanged(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CIPackageCatalog;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_IPackageCatalog2[] = L"Windows.ApplicationModel.IPackageCatalog2";
typedef struct __x_ABI_CWindows_CApplicationModel_CIPackageCatalog2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageCatalog2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageCatalog2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageCatalog2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageCatalog2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageCatalog2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageCatalog2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_PackageContentGroupStaging )(
        __x_ABI_CWindows_CApplicationModel_CIPackageCatalog2 * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageContentGroupStagingEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_PackageContentGroupStaging )(
        __x_ABI_CWindows_CApplicationModel_CIPackageCatalog2 * This,
                  EventRegistrationToken token
        );
    HRESULT ( STDMETHODCALLTYPE *AddOptionalPackageAsync )(
        __x_ABI_CWindows_CApplicationModel_CIPackageCatalog2 * This,
                  __RPC__in HSTRING optionalPackageFamilyName,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CPackageCatalogAddOptionalPackageResult * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CIPackageCatalog2Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CIPackageCatalog2
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CIPackageCatalog2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_PackageContentGroupStaging(This,handler,token) )
    ( (This)->lpVtbl->remove_PackageContentGroupStaging(This,token) )
    ( (This)->lpVtbl->AddOptionalPackageAsync(This,optionalPackageFamilyName,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CIPackageCatalog2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_IPackageCatalog3[] = L"Windows.ApplicationModel.IPackageCatalog3";
typedef struct __x_ABI_CWindows_CApplicationModel_CIPackageCatalog3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageCatalog3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageCatalog3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageCatalog3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageCatalog3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageCatalog3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageCatalog3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *RemoveOptionalPackagesAsync )(
        __x_ABI_CWindows_CApplicationModel_CIPackageCatalog3 * This,
                  __RPC__in_opt __FIIterable_1_HSTRING * optionalPackageFamilyNames,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CPackageCatalogRemoveOptionalPackagesResult * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CIPackageCatalog3Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CIPackageCatalog3
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CIPackageCatalog3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->RemoveOptionalPackagesAsync(This,optionalPackageFamilyNames,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CIPackageCatalog3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_IPackageCatalog4[] = L"Windows.ApplicationModel.IPackageCatalog4";
typedef struct __x_ABI_CWindows_CApplicationModel_CIPackageCatalog4Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageCatalog4 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageCatalog4 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageCatalog4 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageCatalog4 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageCatalog4 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageCatalog4 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *AddResourcePackageAsync )(
        __x_ABI_CWindows_CApplicationModel_CIPackageCatalog4 * This,
                  __RPC__in HSTRING resourcePackageFamilyName,
                  __RPC__in HSTRING resourceID,
                  __x_ABI_CWindows_CApplicationModel_CAddResourcePackageOptions options,
                           __RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CApplicationModel__CPackageCatalogAddResourcePackageResult_Windows__CApplicationModel__CPackageInstallProgress * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *RemoveResourcePackagesAsync )(
        __x_ABI_CWindows_CApplicationModel_CIPackageCatalog4 * This,
                  __RPC__in_opt __FIIterable_1_Windows__CApplicationModel__CPackage * resourcePackages,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CPackageCatalogRemoveResourcePackagesResult * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CIPackageCatalog4Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CIPackageCatalog4
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CIPackageCatalog4Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->AddResourcePackageAsync(This,resourcePackageFamilyName,resourceID,options,operation) )
    ( (This)->lpVtbl->RemoveResourcePackagesAsync(This,resourcePackages,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CIPackageCatalog4;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_IPackageCatalogAddOptionalPackageResult[] = L"Windows.ApplicationModel.IPackageCatalogAddOptionalPackageResult";
typedef struct __x_ABI_CWindows_CApplicationModel_CIPackageCatalogAddOptionalPackageResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageCatalogAddOptionalPackageResult * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageCatalogAddOptionalPackageResult * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageCatalogAddOptionalPackageResult * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageCatalogAddOptionalPackageResult * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageCatalogAddOptionalPackageResult * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageCatalogAddOptionalPackageResult * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Package )(
        __x_ABI_CWindows_CApplicationModel_CIPackageCatalogAddOptionalPackageResult * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CIPackage * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ExtendedError )(
        __x_ABI_CWindows_CApplicationModel_CIPackageCatalogAddOptionalPackageResult * This,
                           __RPC__out HRESULT * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CIPackageCatalogAddOptionalPackageResultVtbl;
interface __x_ABI_CWindows_CApplicationModel_CIPackageCatalogAddOptionalPackageResult
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CIPackageCatalogAddOptionalPackageResultVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Package(This,value) )
    ( (This)->lpVtbl->get_ExtendedError(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CIPackageCatalogAddOptionalPackageResult;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_IPackageCatalogAddResourcePackageResult[] = L"Windows.ApplicationModel.IPackageCatalogAddResourcePackageResult";
typedef struct __x_ABI_CWindows_CApplicationModel_CIPackageCatalogAddResourcePackageResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageCatalogAddResourcePackageResult * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageCatalogAddResourcePackageResult * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageCatalogAddResourcePackageResult * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageCatalogAddResourcePackageResult * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageCatalogAddResourcePackageResult * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageCatalogAddResourcePackageResult * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Package )(
        __x_ABI_CWindows_CApplicationModel_CIPackageCatalogAddResourcePackageResult * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CIPackage * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsComplete )(
        __x_ABI_CWindows_CApplicationModel_CIPackageCatalogAddResourcePackageResult * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ExtendedError )(
        __x_ABI_CWindows_CApplicationModel_CIPackageCatalogAddResourcePackageResult * This,
                           __RPC__out HRESULT * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CIPackageCatalogAddResourcePackageResultVtbl;
interface __x_ABI_CWindows_CApplicationModel_CIPackageCatalogAddResourcePackageResult
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CIPackageCatalogAddResourcePackageResultVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Package(This,value) )
    ( (This)->lpVtbl->get_IsComplete(This,value) )
    ( (This)->lpVtbl->get_ExtendedError(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CIPackageCatalogAddResourcePackageResult;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_IPackageCatalogRemoveOptionalPackagesResult[] = L"Windows.ApplicationModel.IPackageCatalogRemoveOptionalPackagesResult";
typedef struct __x_ABI_CWindows_CApplicationModel_CIPackageCatalogRemoveOptionalPackagesResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageCatalogRemoveOptionalPackagesResult * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageCatalogRemoveOptionalPackagesResult * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageCatalogRemoveOptionalPackagesResult * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageCatalogRemoveOptionalPackagesResult * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageCatalogRemoveOptionalPackagesResult * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageCatalogRemoveOptionalPackagesResult * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_PackagesRemoved )(
        __x_ABI_CWindows_CApplicationModel_CIPackageCatalogRemoveOptionalPackagesResult * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CApplicationModel__CPackage * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ExtendedError )(
        __x_ABI_CWindows_CApplicationModel_CIPackageCatalogRemoveOptionalPackagesResult * This,
                           __RPC__out HRESULT * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CIPackageCatalogRemoveOptionalPackagesResultVtbl;
interface __x_ABI_CWindows_CApplicationModel_CIPackageCatalogRemoveOptionalPackagesResult
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CIPackageCatalogRemoveOptionalPackagesResultVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_PackagesRemoved(This,value) )
    ( (This)->lpVtbl->get_ExtendedError(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CIPackageCatalogRemoveOptionalPackagesResult;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_IPackageCatalogRemoveResourcePackagesResult[] = L"Windows.ApplicationModel.IPackageCatalogRemoveResourcePackagesResult";
typedef struct __x_ABI_CWindows_CApplicationModel_CIPackageCatalogRemoveResourcePackagesResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageCatalogRemoveResourcePackagesResult * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageCatalogRemoveResourcePackagesResult * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageCatalogRemoveResourcePackagesResult * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageCatalogRemoveResourcePackagesResult * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageCatalogRemoveResourcePackagesResult * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageCatalogRemoveResourcePackagesResult * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_PackagesRemoved )(
        __x_ABI_CWindows_CApplicationModel_CIPackageCatalogRemoveResourcePackagesResult * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CApplicationModel__CPackage * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ExtendedError )(
        __x_ABI_CWindows_CApplicationModel_CIPackageCatalogRemoveResourcePackagesResult * This,
                           __RPC__out HRESULT * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CIPackageCatalogRemoveResourcePackagesResultVtbl;
interface __x_ABI_CWindows_CApplicationModel_CIPackageCatalogRemoveResourcePackagesResult
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CIPackageCatalogRemoveResourcePackagesResultVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_PackagesRemoved(This,value) )
    ( (This)->lpVtbl->get_ExtendedError(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CIPackageCatalogRemoveResourcePackagesResult;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_IPackageCatalogStatics[] = L"Windows.ApplicationModel.IPackageCatalogStatics";
typedef struct __x_ABI_CWindows_CApplicationModel_CIPackageCatalogStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageCatalogStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageCatalogStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageCatalogStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageCatalogStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageCatalogStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageCatalogStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *OpenForCurrentPackage )(
        __x_ABI_CWindows_CApplicationModel_CIPackageCatalogStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CIPackageCatalog * * value
        );
    HRESULT ( STDMETHODCALLTYPE *OpenForCurrentUser )(
        __x_ABI_CWindows_CApplicationModel_CIPackageCatalogStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CIPackageCatalog * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CIPackageCatalogStaticsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CIPackageCatalogStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CIPackageCatalogStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->OpenForCurrentPackage(This,value) )
    ( (This)->lpVtbl->OpenForCurrentUser(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CIPackageCatalogStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_IPackageContentGroup[] = L"Windows.ApplicationModel.IPackageContentGroup";
typedef struct __x_ABI_CWindows_CApplicationModel_CIPackageContentGroupVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageContentGroup * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageContentGroup * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageContentGroup * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageContentGroup * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageContentGroup * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageContentGroup * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Package )(
        __x_ABI_CWindows_CApplicationModel_CIPackageContentGroup * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CIPackage * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Name )(
        __x_ABI_CWindows_CApplicationModel_CIPackageContentGroup * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_State )(
        __x_ABI_CWindows_CApplicationModel_CIPackageContentGroup * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CPackageContentGroupState * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsRequired )(
        __x_ABI_CWindows_CApplicationModel_CIPackageContentGroup * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CIPackageContentGroupVtbl;
interface __x_ABI_CWindows_CApplicationModel_CIPackageContentGroup
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CIPackageContentGroupVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Package(This,value) )
    ( (This)->lpVtbl->get_Name(This,value) )
    ( (This)->lpVtbl->get_State(This,value) )
    ( (This)->lpVtbl->get_IsRequired(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CIPackageContentGroup;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_IPackageContentGroupStagingEventArgs[] = L"Windows.ApplicationModel.IPackageContentGroupStagingEventArgs";
typedef struct __x_ABI_CWindows_CApplicationModel_CIPackageContentGroupStagingEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageContentGroupStagingEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageContentGroupStagingEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageContentGroupStagingEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageContentGroupStagingEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageContentGroupStagingEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageContentGroupStagingEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ActivityId )(
        __x_ABI_CWindows_CApplicationModel_CIPackageContentGroupStagingEventArgs * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Package )(
        __x_ABI_CWindows_CApplicationModel_CIPackageContentGroupStagingEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CIPackage * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Progress )(
        __x_ABI_CWindows_CApplicationModel_CIPackageContentGroupStagingEventArgs * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsComplete )(
        __x_ABI_CWindows_CApplicationModel_CIPackageContentGroupStagingEventArgs * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ErrorCode )(
        __x_ABI_CWindows_CApplicationModel_CIPackageContentGroupStagingEventArgs * This,
                           __RPC__out HRESULT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ContentGroupName )(
        __x_ABI_CWindows_CApplicationModel_CIPackageContentGroupStagingEventArgs * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsContentGroupRequired )(
        __x_ABI_CWindows_CApplicationModel_CIPackageContentGroupStagingEventArgs * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CIPackageContentGroupStagingEventArgsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CIPackageContentGroupStagingEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CIPackageContentGroupStagingEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ActivityId(This,value) )
    ( (This)->lpVtbl->get_Package(This,value) )
    ( (This)->lpVtbl->get_Progress(This,value) )
    ( (This)->lpVtbl->get_IsComplete(This,value) )
    ( (This)->lpVtbl->get_ErrorCode(This,value) )
    ( (This)->lpVtbl->get_ContentGroupName(This,value) )
    ( (This)->lpVtbl->get_IsContentGroupRequired(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CIPackageContentGroupStagingEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_IPackageContentGroupStatics[] = L"Windows.ApplicationModel.IPackageContentGroupStatics";
typedef struct __x_ABI_CWindows_CApplicationModel_CIPackageContentGroupStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageContentGroupStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageContentGroupStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageContentGroupStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageContentGroupStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageContentGroupStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageContentGroupStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_RequiredGroupName )(
        __x_ABI_CWindows_CApplicationModel_CIPackageContentGroupStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CIPackageContentGroupStaticsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CIPackageContentGroupStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CIPackageContentGroupStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_RequiredGroupName(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CIPackageContentGroupStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_IPackageId[] = L"Windows.ApplicationModel.IPackageId";
typedef struct __x_ABI_CWindows_CApplicationModel_CIPackageIdVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageId * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageId * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageId * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageId * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageId * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageId * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Name )(
        __x_ABI_CWindows_CApplicationModel_CIPackageId * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Version )(
        __x_ABI_CWindows_CApplicationModel_CIPackageId * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CPackageVersion * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Architecture )(
        __x_ABI_CWindows_CApplicationModel_CIPackageId * This,
                           __RPC__out __x_ABI_CWindows_CSystem_CProcessorArchitecture * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ResourceId )(
        __x_ABI_CWindows_CApplicationModel_CIPackageId * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Publisher )(
        __x_ABI_CWindows_CApplicationModel_CIPackageId * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PublisherId )(
        __x_ABI_CWindows_CApplicationModel_CIPackageId * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FullName )(
        __x_ABI_CWindows_CApplicationModel_CIPackageId * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FamilyName )(
        __x_ABI_CWindows_CApplicationModel_CIPackageId * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CIPackageIdVtbl;
interface __x_ABI_CWindows_CApplicationModel_CIPackageId
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CIPackageIdVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Name(This,value) )
    ( (This)->lpVtbl->get_Version(This,value) )
    ( (This)->lpVtbl->get_Architecture(This,value) )
    ( (This)->lpVtbl->get_ResourceId(This,value) )
    ( (This)->lpVtbl->get_Publisher(This,value) )
    ( (This)->lpVtbl->get_PublisherId(This,value) )
    ( (This)->lpVtbl->get_FullName(This,value) )
    ( (This)->lpVtbl->get_FamilyName(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CIPackageId;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_IPackageIdWithMetadata[] = L"Windows.ApplicationModel.IPackageIdWithMetadata";
typedef struct __x_ABI_CWindows_CApplicationModel_CIPackageIdWithMetadataVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageIdWithMetadata * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageIdWithMetadata * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageIdWithMetadata * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageIdWithMetadata * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageIdWithMetadata * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageIdWithMetadata * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ProductId )(
        __x_ABI_CWindows_CApplicationModel_CIPackageIdWithMetadata * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Author )(
        __x_ABI_CWindows_CApplicationModel_CIPackageIdWithMetadata * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CIPackageIdWithMetadataVtbl;
interface __x_ABI_CWindows_CApplicationModel_CIPackageIdWithMetadata
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CIPackageIdWithMetadataVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ProductId(This,value) )
    ( (This)->lpVtbl->get_Author(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CIPackageIdWithMetadata;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_IPackageInstallingEventArgs[] = L"Windows.ApplicationModel.IPackageInstallingEventArgs";
typedef struct __x_ABI_CWindows_CApplicationModel_CIPackageInstallingEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageInstallingEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageInstallingEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageInstallingEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageInstallingEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageInstallingEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageInstallingEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ActivityId )(
        __x_ABI_CWindows_CApplicationModel_CIPackageInstallingEventArgs * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Package )(
        __x_ABI_CWindows_CApplicationModel_CIPackageInstallingEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CIPackage * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Progress )(
        __x_ABI_CWindows_CApplicationModel_CIPackageInstallingEventArgs * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsComplete )(
        __x_ABI_CWindows_CApplicationModel_CIPackageInstallingEventArgs * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ErrorCode )(
        __x_ABI_CWindows_CApplicationModel_CIPackageInstallingEventArgs * This,
                           __RPC__out HRESULT * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CIPackageInstallingEventArgsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CIPackageInstallingEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CIPackageInstallingEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ActivityId(This,value) )
    ( (This)->lpVtbl->get_Package(This,value) )
    ( (This)->lpVtbl->get_Progress(This,value) )
    ( (This)->lpVtbl->get_IsComplete(This,value) )
    ( (This)->lpVtbl->get_ErrorCode(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CIPackageInstallingEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_IPackageStagingEventArgs[] = L"Windows.ApplicationModel.IPackageStagingEventArgs";
typedef struct __x_ABI_CWindows_CApplicationModel_CIPackageStagingEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageStagingEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageStagingEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageStagingEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageStagingEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageStagingEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageStagingEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ActivityId )(
        __x_ABI_CWindows_CApplicationModel_CIPackageStagingEventArgs * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Package )(
        __x_ABI_CWindows_CApplicationModel_CIPackageStagingEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CIPackage * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Progress )(
        __x_ABI_CWindows_CApplicationModel_CIPackageStagingEventArgs * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsComplete )(
        __x_ABI_CWindows_CApplicationModel_CIPackageStagingEventArgs * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ErrorCode )(
        __x_ABI_CWindows_CApplicationModel_CIPackageStagingEventArgs * This,
                           __RPC__out HRESULT * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CIPackageStagingEventArgsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CIPackageStagingEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CIPackageStagingEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ActivityId(This,value) )
    ( (This)->lpVtbl->get_Package(This,value) )
    ( (This)->lpVtbl->get_Progress(This,value) )
    ( (This)->lpVtbl->get_IsComplete(This,value) )
    ( (This)->lpVtbl->get_ErrorCode(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CIPackageStagingEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_IPackageStatics[] = L"Windows.ApplicationModel.IPackageStatics";
typedef struct __x_ABI_CWindows_CApplicationModel_CIPackageStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Current )(
        __x_ABI_CWindows_CApplicationModel_CIPackageStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CIPackage * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CIPackageStaticsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CIPackageStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CIPackageStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Current(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CIPackageStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_IPackageStatus[] = L"Windows.ApplicationModel.IPackageStatus";
typedef struct __x_ABI_CWindows_CApplicationModel_CIPackageStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageStatus * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageStatus * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageStatus * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageStatus * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageStatus * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageStatus * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *VerifyIsOK )(
        __x_ABI_CWindows_CApplicationModel_CIPackageStatus * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NotAvailable )(
        __x_ABI_CWindows_CApplicationModel_CIPackageStatus * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PackageOffline )(
        __x_ABI_CWindows_CApplicationModel_CIPackageStatus * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DataOffline )(
        __x_ABI_CWindows_CApplicationModel_CIPackageStatus * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Disabled )(
        __x_ABI_CWindows_CApplicationModel_CIPackageStatus * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NeedsRemediation )(
        __x_ABI_CWindows_CApplicationModel_CIPackageStatus * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LicenseIssue )(
        __x_ABI_CWindows_CApplicationModel_CIPackageStatus * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Modified )(
        __x_ABI_CWindows_CApplicationModel_CIPackageStatus * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Tampered )(
        __x_ABI_CWindows_CApplicationModel_CIPackageStatus * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DependencyIssue )(
        __x_ABI_CWindows_CApplicationModel_CIPackageStatus * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Servicing )(
        __x_ABI_CWindows_CApplicationModel_CIPackageStatus * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DeploymentInProgress )(
        __x_ABI_CWindows_CApplicationModel_CIPackageStatus * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CIPackageStatusVtbl;
interface __x_ABI_CWindows_CApplicationModel_CIPackageStatus
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CIPackageStatusVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->VerifyIsOK(This,value) )
    ( (This)->lpVtbl->get_NotAvailable(This,value) )
    ( (This)->lpVtbl->get_PackageOffline(This,value) )
    ( (This)->lpVtbl->get_DataOffline(This,value) )
    ( (This)->lpVtbl->get_Disabled(This,value) )
    ( (This)->lpVtbl->get_NeedsRemediation(This,value) )
    ( (This)->lpVtbl->get_LicenseIssue(This,value) )
    ( (This)->lpVtbl->get_Modified(This,value) )
    ( (This)->lpVtbl->get_Tampered(This,value) )
    ( (This)->lpVtbl->get_DependencyIssue(This,value) )
    ( (This)->lpVtbl->get_Servicing(This,value) )
    ( (This)->lpVtbl->get_DeploymentInProgress(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CIPackageStatus;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_IPackageStatus2[] = L"Windows.ApplicationModel.IPackageStatus2";
typedef struct __x_ABI_CWindows_CApplicationModel_CIPackageStatus2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageStatus2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageStatus2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageStatus2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageStatus2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageStatus2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageStatus2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsPartiallyStaged )(
        __x_ABI_CWindows_CApplicationModel_CIPackageStatus2 * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CIPackageStatus2Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CIPackageStatus2
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CIPackageStatus2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsPartiallyStaged(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CIPackageStatus2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_IPackageStatusChangedEventArgs[] = L"Windows.ApplicationModel.IPackageStatusChangedEventArgs";
typedef struct __x_ABI_CWindows_CApplicationModel_CIPackageStatusChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageStatusChangedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageStatusChangedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageStatusChangedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageStatusChangedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageStatusChangedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageStatusChangedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Package )(
        __x_ABI_CWindows_CApplicationModel_CIPackageStatusChangedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CIPackage * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CIPackageStatusChangedEventArgsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CIPackageStatusChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CIPackageStatusChangedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Package(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CIPackageStatusChangedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_IPackageUninstallingEventArgs[] = L"Windows.ApplicationModel.IPackageUninstallingEventArgs";
typedef struct __x_ABI_CWindows_CApplicationModel_CIPackageUninstallingEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageUninstallingEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageUninstallingEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageUninstallingEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageUninstallingEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageUninstallingEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageUninstallingEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ActivityId )(
        __x_ABI_CWindows_CApplicationModel_CIPackageUninstallingEventArgs * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Package )(
        __x_ABI_CWindows_CApplicationModel_CIPackageUninstallingEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CIPackage * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Progress )(
        __x_ABI_CWindows_CApplicationModel_CIPackageUninstallingEventArgs * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsComplete )(
        __x_ABI_CWindows_CApplicationModel_CIPackageUninstallingEventArgs * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ErrorCode )(
        __x_ABI_CWindows_CApplicationModel_CIPackageUninstallingEventArgs * This,
                           __RPC__out HRESULT * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CIPackageUninstallingEventArgsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CIPackageUninstallingEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CIPackageUninstallingEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ActivityId(This,value) )
    ( (This)->lpVtbl->get_Package(This,value) )
    ( (This)->lpVtbl->get_Progress(This,value) )
    ( (This)->lpVtbl->get_IsComplete(This,value) )
    ( (This)->lpVtbl->get_ErrorCode(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CIPackageUninstallingEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_IPackageUpdateAvailabilityResult[] = L"Windows.ApplicationModel.IPackageUpdateAvailabilityResult";
typedef struct __x_ABI_CWindows_CApplicationModel_CIPackageUpdateAvailabilityResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageUpdateAvailabilityResult * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageUpdateAvailabilityResult * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageUpdateAvailabilityResult * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageUpdateAvailabilityResult * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageUpdateAvailabilityResult * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageUpdateAvailabilityResult * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Availability )(
        __x_ABI_CWindows_CApplicationModel_CIPackageUpdateAvailabilityResult * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CPackageUpdateAvailability * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ExtendedError )(
        __x_ABI_CWindows_CApplicationModel_CIPackageUpdateAvailabilityResult * This,
                           __RPC__out HRESULT * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CIPackageUpdateAvailabilityResultVtbl;
interface __x_ABI_CWindows_CApplicationModel_CIPackageUpdateAvailabilityResult
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CIPackageUpdateAvailabilityResultVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Availability(This,value) )
    ( (This)->lpVtbl->get_ExtendedError(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CIPackageUpdateAvailabilityResult;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_IPackageUpdatingEventArgs[] = L"Windows.ApplicationModel.IPackageUpdatingEventArgs";
typedef struct __x_ABI_CWindows_CApplicationModel_CIPackageUpdatingEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageUpdatingEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageUpdatingEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageUpdatingEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageUpdatingEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageUpdatingEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageUpdatingEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ActivityId )(
        __x_ABI_CWindows_CApplicationModel_CIPackageUpdatingEventArgs * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SourcePackage )(
        __x_ABI_CWindows_CApplicationModel_CIPackageUpdatingEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CIPackage * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TargetPackage )(
        __x_ABI_CWindows_CApplicationModel_CIPackageUpdatingEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CIPackage * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Progress )(
        __x_ABI_CWindows_CApplicationModel_CIPackageUpdatingEventArgs * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsComplete )(
        __x_ABI_CWindows_CApplicationModel_CIPackageUpdatingEventArgs * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ErrorCode )(
        __x_ABI_CWindows_CApplicationModel_CIPackageUpdatingEventArgs * This,
                           __RPC__out HRESULT * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CIPackageUpdatingEventArgsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CIPackageUpdatingEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CIPackageUpdatingEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ActivityId(This,value) )
    ( (This)->lpVtbl->get_SourcePackage(This,value) )
    ( (This)->lpVtbl->get_TargetPackage(This,value) )
    ( (This)->lpVtbl->get_Progress(This,value) )
    ( (This)->lpVtbl->get_IsComplete(This,value) )
    ( (This)->lpVtbl->get_ErrorCode(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CIPackageUpdatingEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_IPackageWithMetadata[] = L"Windows.ApplicationModel.IPackageWithMetadata";
typedef struct __x_ABI_CWindows_CApplicationModel_CIPackageWithMetadataVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageWithMetadata * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageWithMetadata * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageWithMetadata * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageWithMetadata * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageWithMetadata * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageWithMetadata * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_InstallDate )(
        __x_ABI_CWindows_CApplicationModel_CIPackageWithMetadata * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetThumbnailToken )(
        __x_ABI_CWindows_CApplicationModel_CIPackageWithMetadata * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    DEPRECATED("Launch may be altered or unavailable for releases after Windows 8.1. Instead, for SmartCardTrigger scenarios use SmartCardTriggerDetails.TryLaunchSelfAsync")
                      HRESULT ( STDMETHODCALLTYPE *Launch )(
        __x_ABI_CWindows_CApplicationModel_CIPackageWithMetadata * This,
                  __RPC__in HSTRING parameters
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CIPackageWithMetadataVtbl;
interface __x_ABI_CWindows_CApplicationModel_CIPackageWithMetadata
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CIPackageWithMetadataVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_InstallDate(This,value) )
    ( (This)->lpVtbl->GetThumbnailToken(This,value) )
DEPRECATED("Launch may be altered or unavailable for releases after Windows 8.1. Instead, for SmartCardTrigger scenarios use SmartCardTriggerDetails.TryLaunchSelfAsync")
    ( (This)->lpVtbl->Launch(This,parameters) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CIPackageWithMetadata;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_IStartupTask[] = L"Windows.ApplicationModel.IStartupTask";
typedef struct __x_ABI_CWindows_CApplicationModel_CIStartupTaskVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIStartupTask * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIStartupTask * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIStartupTask * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIStartupTask * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIStartupTask * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIStartupTask * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *RequestEnableAsync )(
        __x_ABI_CWindows_CApplicationModel_CIStartupTask * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CStartupTaskState * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *Disable )(
        __x_ABI_CWindows_CApplicationModel_CIStartupTask * This
        );
                   HRESULT ( STDMETHODCALLTYPE *get_State )(
        __x_ABI_CWindows_CApplicationModel_CIStartupTask * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CStartupTaskState * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TaskId )(
        __x_ABI_CWindows_CApplicationModel_CIStartupTask * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CIStartupTaskVtbl;
interface __x_ABI_CWindows_CApplicationModel_CIStartupTask
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CIStartupTaskVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->RequestEnableAsync(This,operation) )
    ( (This)->lpVtbl->Disable(This) )
    ( (This)->lpVtbl->get_State(This,value) )
    ( (This)->lpVtbl->get_TaskId(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CIStartupTask;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_IStartupTaskStatics[] = L"Windows.ApplicationModel.IStartupTaskStatics";
typedef struct __x_ABI_CWindows_CApplicationModel_CIStartupTaskStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIStartupTaskStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIStartupTaskStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIStartupTaskStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIStartupTaskStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIStartupTaskStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIStartupTaskStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetForCurrentPackageAsync )(
        __x_ABI_CWindows_CApplicationModel_CIStartupTaskStatics * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStartupTask * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *GetAsync )(
        __x_ABI_CWindows_CApplicationModel_CIStartupTaskStatics * This,
                  __RPC__in HSTRING taskId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CStartupTask * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CIStartupTaskStaticsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CIStartupTaskStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CIStartupTaskStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetForCurrentPackageAsync(This,operation) )
    ( (This)->lpVtbl->GetAsync(This,taskId,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CIStartupTaskStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_ISuspendingDeferral[] = L"Windows.ApplicationModel.ISuspendingDeferral";
typedef struct __x_ABI_CWindows_CApplicationModel_CISuspendingDeferralVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CISuspendingDeferral * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CISuspendingDeferral * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CISuspendingDeferral * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CISuspendingDeferral * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CISuspendingDeferral * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CISuspendingDeferral * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Complete )(
        __x_ABI_CWindows_CApplicationModel_CISuspendingDeferral * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CISuspendingDeferralVtbl;
interface __x_ABI_CWindows_CApplicationModel_CISuspendingDeferral
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CISuspendingDeferralVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Complete(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CISuspendingDeferral;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_ISuspendingEventArgs[] = L"Windows.ApplicationModel.ISuspendingEventArgs";
typedef struct __x_ABI_CWindows_CApplicationModel_CISuspendingEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CISuspendingEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CISuspendingEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CISuspendingEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CISuspendingEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CISuspendingEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CISuspendingEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_SuspendingOperation )(
        __x_ABI_CWindows_CApplicationModel_CISuspendingEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CISuspendingOperation * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CISuspendingEventArgsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CISuspendingEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CISuspendingEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_SuspendingOperation(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CISuspendingEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_ISuspendingOperation[] = L"Windows.ApplicationModel.ISuspendingOperation";
typedef struct __x_ABI_CWindows_CApplicationModel_CISuspendingOperationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CISuspendingOperation * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CISuspendingOperation * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CISuspendingOperation * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CISuspendingOperation * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CISuspendingOperation * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CISuspendingOperation * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CApplicationModel_CISuspendingOperation * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CISuspendingDeferral * * deferral
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Deadline )(
        __x_ABI_CWindows_CApplicationModel_CISuspendingOperation * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CISuspendingOperationVtbl;
interface __x_ABI_CWindows_CApplicationModel_CISuspendingOperation
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CISuspendingOperationVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetDeferral(This,deferral) )
    ( (This)->lpVtbl->get_Deadline(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CISuspendingOperation;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_AppDisplayInfo[] = L"Windows.ApplicationModel.AppDisplayInfo";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_AppInfo[] = L"Windows.ApplicationModel.AppInfo";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_AppInstallerInfo[] = L"Windows.ApplicationModel.AppInstallerInfo";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_AppInstance[] = L"Windows.ApplicationModel.AppInstance";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_DesignMode[] = L"Windows.ApplicationModel.DesignMode";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_EnteredBackgroundEventArgs[] = L"Windows.ApplicationModel.EnteredBackgroundEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_FullTrustProcessLauncher[] = L"Windows.ApplicationModel.FullTrustProcessLauncher";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_LeavingBackgroundEventArgs[] = L"Windows.ApplicationModel.LeavingBackgroundEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_LimitedAccessFeatureRequestResult[] = L"Windows.ApplicationModel.LimitedAccessFeatureRequestResult";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_LimitedAccessFeatures[] = L"Windows.ApplicationModel.LimitedAccessFeatures";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Package[] = L"Windows.ApplicationModel.Package";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_PackageCatalog[] = L"Windows.ApplicationModel.PackageCatalog";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_PackageCatalogAddOptionalPackageResult[] = L"Windows.ApplicationModel.PackageCatalogAddOptionalPackageResult";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_PackageCatalogAddResourcePackageResult[] = L"Windows.ApplicationModel.PackageCatalogAddResourcePackageResult";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_PackageCatalogRemoveOptionalPackagesResult[] = L"Windows.ApplicationModel.PackageCatalogRemoveOptionalPackagesResult";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_PackageCatalogRemoveResourcePackagesResult[] = L"Windows.ApplicationModel.PackageCatalogRemoveResourcePackagesResult";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_PackageContentGroup[] = L"Windows.ApplicationModel.PackageContentGroup";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_PackageContentGroupStagingEventArgs[] = L"Windows.ApplicationModel.PackageContentGroupStagingEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_PackageId[] = L"Windows.ApplicationModel.PackageId";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_PackageInstallingEventArgs[] = L"Windows.ApplicationModel.PackageInstallingEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_PackageStagingEventArgs[] = L"Windows.ApplicationModel.PackageStagingEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_PackageStatus[] = L"Windows.ApplicationModel.PackageStatus";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_PackageStatusChangedEventArgs[] = L"Windows.ApplicationModel.PackageStatusChangedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_PackageUninstallingEventArgs[] = L"Windows.ApplicationModel.PackageUninstallingEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_PackageUpdateAvailabilityResult[] = L"Windows.ApplicationModel.PackageUpdateAvailabilityResult";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_PackageUpdatingEventArgs[] = L"Windows.ApplicationModel.PackageUpdatingEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_StartupTask[] = L"Windows.ApplicationModel.StartupTask";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_SuspendingDeferral[] = L"Windows.ApplicationModel.SuspendingDeferral";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_SuspendingEventArgs[] = L"Windows.ApplicationModel.SuspendingEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_SuspendingOperation[] = L"Windows.ApplicationModel.SuspendingOperation";
       
       
#pragma clang diagnostic pop

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
#include "Windows.ApplicationModel.h"
#include "Windows.System.h"
#include "Windows.Web.Http.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CServices_CStore_CIStoreAcquireLicenseResult __x_ABI_CWindows_CServices_CStore_CIStoreAcquireLicenseResult;
typedef interface __x_ABI_CWindows_CServices_CStore_CIStoreAppLicense __x_ABI_CWindows_CServices_CStore_CIStoreAppLicense;
typedef interface __x_ABI_CWindows_CServices_CStore_CIStoreAppLicense2 __x_ABI_CWindows_CServices_CStore_CIStoreAppLicense2;
typedef interface __x_ABI_CWindows_CServices_CStore_CIStoreAvailability __x_ABI_CWindows_CServices_CStore_CIStoreAvailability;
typedef interface __x_ABI_CWindows_CServices_CStore_CIStoreCanAcquireLicenseResult __x_ABI_CWindows_CServices_CStore_CIStoreCanAcquireLicenseResult;
typedef interface __x_ABI_CWindows_CServices_CStore_CIStoreCollectionData __x_ABI_CWindows_CServices_CStore_CIStoreCollectionData;
typedef interface __x_ABI_CWindows_CServices_CStore_CIStoreConsumableResult __x_ABI_CWindows_CServices_CStore_CIStoreConsumableResult;
typedef interface __x_ABI_CWindows_CServices_CStore_CIStoreContext __x_ABI_CWindows_CServices_CStore_CIStoreContext;
typedef interface __x_ABI_CWindows_CServices_CStore_CIStoreContext2 __x_ABI_CWindows_CServices_CStore_CIStoreContext2;
typedef interface __x_ABI_CWindows_CServices_CStore_CIStoreContext3 __x_ABI_CWindows_CServices_CStore_CIStoreContext3;
typedef interface __x_ABI_CWindows_CServices_CStore_CIStoreContext4 __x_ABI_CWindows_CServices_CStore_CIStoreContext4;
typedef interface __x_ABI_CWindows_CServices_CStore_CIStoreContextStatics __x_ABI_CWindows_CServices_CStore_CIStoreContextStatics;
typedef interface __x_ABI_CWindows_CServices_CStore_CIStoreImage __x_ABI_CWindows_CServices_CStore_CIStoreImage;
typedef interface __x_ABI_CWindows_CServices_CStore_CIStoreLicense __x_ABI_CWindows_CServices_CStore_CIStoreLicense;
typedef interface __x_ABI_CWindows_CServices_CStore_CIStorePackageInstallOptions __x_ABI_CWindows_CServices_CStore_CIStorePackageInstallOptions;
typedef interface __x_ABI_CWindows_CServices_CStore_CIStorePackageLicense __x_ABI_CWindows_CServices_CStore_CIStorePackageLicense;
typedef interface __x_ABI_CWindows_CServices_CStore_CIStorePackageUpdate __x_ABI_CWindows_CServices_CStore_CIStorePackageUpdate;
typedef interface __x_ABI_CWindows_CServices_CStore_CIStorePackageUpdateResult __x_ABI_CWindows_CServices_CStore_CIStorePackageUpdateResult;
typedef interface __x_ABI_CWindows_CServices_CStore_CIStorePackageUpdateResult2 __x_ABI_CWindows_CServices_CStore_CIStorePackageUpdateResult2;
typedef interface __x_ABI_CWindows_CServices_CStore_CIStorePrice __x_ABI_CWindows_CServices_CStore_CIStorePrice;
typedef interface __x_ABI_CWindows_CServices_CStore_CIStoreProduct __x_ABI_CWindows_CServices_CStore_CIStoreProduct;
typedef interface __x_ABI_CWindows_CServices_CStore_CIStoreProductOptions __x_ABI_CWindows_CServices_CStore_CIStoreProductOptions;
typedef interface __x_ABI_CWindows_CServices_CStore_CIStoreProductPagedQueryResult __x_ABI_CWindows_CServices_CStore_CIStoreProductPagedQueryResult;
typedef interface __x_ABI_CWindows_CServices_CStore_CIStoreProductQueryResult __x_ABI_CWindows_CServices_CStore_CIStoreProductQueryResult;
typedef interface __x_ABI_CWindows_CServices_CStore_CIStoreProductResult __x_ABI_CWindows_CServices_CStore_CIStoreProductResult;
typedef interface __x_ABI_CWindows_CServices_CStore_CIStorePurchaseProperties __x_ABI_CWindows_CServices_CStore_CIStorePurchaseProperties;
typedef interface __x_ABI_CWindows_CServices_CStore_CIStorePurchasePropertiesFactory __x_ABI_CWindows_CServices_CStore_CIStorePurchasePropertiesFactory;
typedef interface __x_ABI_CWindows_CServices_CStore_CIStorePurchaseResult __x_ABI_CWindows_CServices_CStore_CIStorePurchaseResult;
typedef interface __x_ABI_CWindows_CServices_CStore_CIStoreQueueItem __x_ABI_CWindows_CServices_CStore_CIStoreQueueItem;
typedef interface __x_ABI_CWindows_CServices_CStore_CIStoreQueueItem2 __x_ABI_CWindows_CServices_CStore_CIStoreQueueItem2;
typedef interface __x_ABI_CWindows_CServices_CStore_CIStoreQueueItemCompletedEventArgs __x_ABI_CWindows_CServices_CStore_CIStoreQueueItemCompletedEventArgs;
typedef interface __x_ABI_CWindows_CServices_CStore_CIStoreQueueItemStatus __x_ABI_CWindows_CServices_CStore_CIStoreQueueItemStatus;
typedef interface __x_ABI_CWindows_CServices_CStore_CIStoreRateAndReviewResult __x_ABI_CWindows_CServices_CStore_CIStoreRateAndReviewResult;
typedef interface __x_ABI_CWindows_CServices_CStore_CIStoreRequestHelperStatics __x_ABI_CWindows_CServices_CStore_CIStoreRequestHelperStatics;
typedef interface __x_ABI_CWindows_CServices_CStore_CIStoreSendRequestResult __x_ABI_CWindows_CServices_CStore_CIStoreSendRequestResult;
typedef interface __x_ABI_CWindows_CServices_CStore_CIStoreSendRequestResult2 __x_ABI_CWindows_CServices_CStore_CIStoreSendRequestResult2;
typedef interface __x_ABI_CWindows_CServices_CStore_CIStoreSku __x_ABI_CWindows_CServices_CStore_CIStoreSku;
typedef interface __x_ABI_CWindows_CServices_CStore_CIStoreSubscriptionInfo __x_ABI_CWindows_CServices_CStore_CIStoreSubscriptionInfo;
typedef interface __x_ABI_CWindows_CServices_CStore_CIStoreUninstallStorePackageResult __x_ABI_CWindows_CServices_CStore_CIStoreUninstallStorePackageResult;
typedef interface __x_ABI_CWindows_CServices_CStore_CIStoreVideo __x_ABI_CWindows_CServices_CStore_CIStoreVideo;
typedef interface __FIKeyValuePair_2_HSTRING_Windows__CServices__CStore__CStoreLicense __FIKeyValuePair_2_HSTRING_Windows__CServices__CStore__CStoreLicense;
EXTERN_C const IID IID___FIKeyValuePair_2_HSTRING_Windows__CServices__CStore__CStoreLicense;
typedef struct __FIKeyValuePair_2_HSTRING_Windows__CServices__CStore__CStoreLicenseVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CServices__CStore__CStoreLicense * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CServices__CStore__CStoreLicense * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CServices__CStore__CStoreLicense * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CServices__CStore__CStoreLicense * This,
                        __RPC__out ULONG *iidCount,
                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CServices__CStore__CStoreLicense * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CServices__CStore__CStoreLicense * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Key )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CServices__CStore__CStoreLicense * This, __RPC__out HSTRING *key);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CServices__CStore__CStoreLicense * This, __RPC__deref_out_opt __x_ABI_CWindows_CServices_CStore_CIStoreLicense * *value);
    END_INTERFACE
} __FIKeyValuePair_2_HSTRING_Windows__CServices__CStore__CStoreLicenseVtbl;
interface __FIKeyValuePair_2_HSTRING_Windows__CServices__CStore__CStoreLicense
{
    CONST_VTBL struct __FIKeyValuePair_2_HSTRING_Windows__CServices__CStore__CStoreLicenseVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Key(This,key) )
    ( (This)->lpVtbl -> get_Value(This,value) )
typedef interface __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CServices__CStore__CStoreLicense __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CServices__CStore__CStoreLicense;
EXTERN_C const IID IID___FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CServices__CStore__CStoreLicense;
typedef struct __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CServices__CStore__CStoreLicenseVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CServices__CStore__CStoreLicense * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CServices__CStore__CStoreLicense * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CServices__CStore__CStoreLicense * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CServices__CStore__CStoreLicense * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CServices__CStore__CStoreLicense * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CServices__CStore__CStoreLicense * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CServices__CStore__CStoreLicense * This, __RPC__out __FIKeyValuePair_2_HSTRING_Windows__CServices__CStore__CStoreLicense * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CServices__CStore__CStoreLicense * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CServices__CStore__CStoreLicense * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CServices__CStore__CStoreLicense * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __FIKeyValuePair_2_HSTRING_Windows__CServices__CStore__CStoreLicense * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CServices__CStore__CStoreLicenseVtbl;
interface __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CServices__CStore__CStoreLicense
{
    CONST_VTBL struct __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CServices__CStore__CStoreLicenseVtbl *lpVtbl;
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
typedef interface __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CServices__CStore__CStoreLicense __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CServices__CStore__CStoreLicense;
EXTERN_C const IID IID___FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CServices__CStore__CStoreLicense;
typedef struct __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CServices__CStore__CStoreLicenseVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CServices__CStore__CStoreLicense * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CServices__CStore__CStoreLicense * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CServices__CStore__CStoreLicense * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CServices__CStore__CStoreLicense * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CServices__CStore__CStoreLicense * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CServices__CStore__CStoreLicense * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CServices__CStore__CStoreLicense * This, __RPC__deref_out_opt __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CServices__CStore__CStoreLicense **first);
    END_INTERFACE
} __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CServices__CStore__CStoreLicenseVtbl;
interface __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CServices__CStore__CStoreLicense
{
    CONST_VTBL struct __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CServices__CStore__CStoreLicenseVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIKeyValuePair_2_HSTRING_Windows__CServices__CStore__CStoreProduct __FIKeyValuePair_2_HSTRING_Windows__CServices__CStore__CStoreProduct;
EXTERN_C const IID IID___FIKeyValuePair_2_HSTRING_Windows__CServices__CStore__CStoreProduct;
typedef struct __FIKeyValuePair_2_HSTRING_Windows__CServices__CStore__CStoreProductVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CServices__CStore__CStoreProduct * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CServices__CStore__CStoreProduct * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CServices__CStore__CStoreProduct * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CServices__CStore__CStoreProduct * This,
                        __RPC__out ULONG *iidCount,
                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CServices__CStore__CStoreProduct * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CServices__CStore__CStoreProduct * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Key )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CServices__CStore__CStoreProduct * This, __RPC__out HSTRING *key);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CServices__CStore__CStoreProduct * This, __RPC__deref_out_opt __x_ABI_CWindows_CServices_CStore_CIStoreProduct * *value);
    END_INTERFACE
} __FIKeyValuePair_2_HSTRING_Windows__CServices__CStore__CStoreProductVtbl;
interface __FIKeyValuePair_2_HSTRING_Windows__CServices__CStore__CStoreProduct
{
    CONST_VTBL struct __FIKeyValuePair_2_HSTRING_Windows__CServices__CStore__CStoreProductVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Key(This,key) )
    ( (This)->lpVtbl -> get_Value(This,value) )
typedef interface __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CServices__CStore__CStoreProduct __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CServices__CStore__CStoreProduct;
EXTERN_C const IID IID___FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CServices__CStore__CStoreProduct;
typedef struct __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CServices__CStore__CStoreProductVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CServices__CStore__CStoreProduct * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CServices__CStore__CStoreProduct * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CServices__CStore__CStoreProduct * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CServices__CStore__CStoreProduct * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CServices__CStore__CStoreProduct * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CServices__CStore__CStoreProduct * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CServices__CStore__CStoreProduct * This, __RPC__out __FIKeyValuePair_2_HSTRING_Windows__CServices__CStore__CStoreProduct * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CServices__CStore__CStoreProduct * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CServices__CStore__CStoreProduct * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CServices__CStore__CStoreProduct * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __FIKeyValuePair_2_HSTRING_Windows__CServices__CStore__CStoreProduct * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CServices__CStore__CStoreProductVtbl;
interface __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CServices__CStore__CStoreProduct
{
    CONST_VTBL struct __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CServices__CStore__CStoreProductVtbl *lpVtbl;
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
typedef interface __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CServices__CStore__CStoreProduct __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CServices__CStore__CStoreProduct;
EXTERN_C const IID IID___FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CServices__CStore__CStoreProduct;
typedef struct __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CServices__CStore__CStoreProductVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CServices__CStore__CStoreProduct * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CServices__CStore__CStoreProduct * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CServices__CStore__CStoreProduct * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CServices__CStore__CStoreProduct * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CServices__CStore__CStoreProduct * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CServices__CStore__CStoreProduct * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CServices__CStore__CStoreProduct * This, __RPC__deref_out_opt __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CServices__CStore__CStoreProduct **first);
    END_INTERFACE
} __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CServices__CStore__CStoreProductVtbl;
interface __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CServices__CStore__CStoreProduct
{
    CONST_VTBL struct __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CServices__CStore__CStoreProductVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CServices__CStore__CStoreAvailability __FIIterator_1_Windows__CServices__CStore__CStoreAvailability;
EXTERN_C const IID IID___FIIterator_1_Windows__CServices__CStore__CStoreAvailability;
typedef struct __FIIterator_1_Windows__CServices__CStore__CStoreAvailabilityVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CServices__CStore__CStoreAvailability * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CServices__CStore__CStoreAvailability * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CServices__CStore__CStoreAvailability * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CServices__CStore__CStoreAvailability * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CServices__CStore__CStoreAvailability * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CServices__CStore__CStoreAvailability * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CServices__CStore__CStoreAvailability * This, __RPC__out __x_ABI_CWindows_CServices_CStore_CIStoreAvailability * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CServices__CStore__CStoreAvailability * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CServices__CStore__CStoreAvailability * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CServices__CStore__CStoreAvailability * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CServices_CStore_CIStoreAvailability * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CServices__CStore__CStoreAvailabilityVtbl;
interface __FIIterator_1_Windows__CServices__CStore__CStoreAvailability
{
    CONST_VTBL struct __FIIterator_1_Windows__CServices__CStore__CStoreAvailabilityVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CServices__CStore__CStoreAvailability __FIIterable_1_Windows__CServices__CStore__CStoreAvailability;
EXTERN_C const IID IID___FIIterable_1_Windows__CServices__CStore__CStoreAvailability;
typedef struct __FIIterable_1_Windows__CServices__CStore__CStoreAvailabilityVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CServices__CStore__CStoreAvailability * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CServices__CStore__CStoreAvailability * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CServices__CStore__CStoreAvailability * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CServices__CStore__CStoreAvailability * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CServices__CStore__CStoreAvailability * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CServices__CStore__CStoreAvailability * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CServices__CStore__CStoreAvailability * This, __RPC__deref_out_opt __FIIterator_1_Windows__CServices__CStore__CStoreAvailability **first);
    END_INTERFACE
} __FIIterable_1_Windows__CServices__CStore__CStoreAvailabilityVtbl;
interface __FIIterable_1_Windows__CServices__CStore__CStoreAvailability
{
    CONST_VTBL struct __FIIterable_1_Windows__CServices__CStore__CStoreAvailabilityVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CServices__CStore__CStoreImage __FIIterator_1_Windows__CServices__CStore__CStoreImage;
EXTERN_C const IID IID___FIIterator_1_Windows__CServices__CStore__CStoreImage;
typedef struct __FIIterator_1_Windows__CServices__CStore__CStoreImageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CServices__CStore__CStoreImage * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CServices__CStore__CStoreImage * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CServices__CStore__CStoreImage * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CServices__CStore__CStoreImage * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CServices__CStore__CStoreImage * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CServices__CStore__CStoreImage * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CServices__CStore__CStoreImage * This, __RPC__out __x_ABI_CWindows_CServices_CStore_CIStoreImage * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CServices__CStore__CStoreImage * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CServices__CStore__CStoreImage * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CServices__CStore__CStoreImage * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CServices_CStore_CIStoreImage * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CServices__CStore__CStoreImageVtbl;
interface __FIIterator_1_Windows__CServices__CStore__CStoreImage
{
    CONST_VTBL struct __FIIterator_1_Windows__CServices__CStore__CStoreImageVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CServices__CStore__CStoreImage __FIIterable_1_Windows__CServices__CStore__CStoreImage;
EXTERN_C const IID IID___FIIterable_1_Windows__CServices__CStore__CStoreImage;
typedef struct __FIIterable_1_Windows__CServices__CStore__CStoreImageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CServices__CStore__CStoreImage * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CServices__CStore__CStoreImage * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CServices__CStore__CStoreImage * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CServices__CStore__CStoreImage * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CServices__CStore__CStoreImage * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CServices__CStore__CStoreImage * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CServices__CStore__CStoreImage * This, __RPC__deref_out_opt __FIIterator_1_Windows__CServices__CStore__CStoreImage **first);
    END_INTERFACE
} __FIIterable_1_Windows__CServices__CStore__CStoreImageVtbl;
interface __FIIterable_1_Windows__CServices__CStore__CStoreImage
{
    CONST_VTBL struct __FIIterable_1_Windows__CServices__CStore__CStoreImageVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CServices__CStore__CStorePackageUpdate __FIIterator_1_Windows__CServices__CStore__CStorePackageUpdate;
EXTERN_C const IID IID___FIIterator_1_Windows__CServices__CStore__CStorePackageUpdate;
typedef struct __FIIterator_1_Windows__CServices__CStore__CStorePackageUpdateVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CServices__CStore__CStorePackageUpdate * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CServices__CStore__CStorePackageUpdate * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CServices__CStore__CStorePackageUpdate * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CServices__CStore__CStorePackageUpdate * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CServices__CStore__CStorePackageUpdate * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CServices__CStore__CStorePackageUpdate * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CServices__CStore__CStorePackageUpdate * This, __RPC__out __x_ABI_CWindows_CServices_CStore_CIStorePackageUpdate * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CServices__CStore__CStorePackageUpdate * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CServices__CStore__CStorePackageUpdate * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CServices__CStore__CStorePackageUpdate * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CServices_CStore_CIStorePackageUpdate * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CServices__CStore__CStorePackageUpdateVtbl;
interface __FIIterator_1_Windows__CServices__CStore__CStorePackageUpdate
{
    CONST_VTBL struct __FIIterator_1_Windows__CServices__CStore__CStorePackageUpdateVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CServices__CStore__CStorePackageUpdate __FIIterable_1_Windows__CServices__CStore__CStorePackageUpdate;
EXTERN_C const IID IID___FIIterable_1_Windows__CServices__CStore__CStorePackageUpdate;
typedef struct __FIIterable_1_Windows__CServices__CStore__CStorePackageUpdateVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CServices__CStore__CStorePackageUpdate * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CServices__CStore__CStorePackageUpdate * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CServices__CStore__CStorePackageUpdate * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CServices__CStore__CStorePackageUpdate * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CServices__CStore__CStorePackageUpdate * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CServices__CStore__CStorePackageUpdate * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CServices__CStore__CStorePackageUpdate * This, __RPC__deref_out_opt __FIIterator_1_Windows__CServices__CStore__CStorePackageUpdate **first);
    END_INTERFACE
} __FIIterable_1_Windows__CServices__CStore__CStorePackageUpdateVtbl;
interface __FIIterable_1_Windows__CServices__CStore__CStorePackageUpdate
{
    CONST_VTBL struct __FIIterable_1_Windows__CServices__CStore__CStorePackageUpdateVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
struct __x_ABI_CWindows_CServices_CStore_CStorePackageUpdateStatus;
typedef interface __FIIterator_1_Windows__CServices__CStore__CStorePackageUpdateStatus __FIIterator_1_Windows__CServices__CStore__CStorePackageUpdateStatus;
EXTERN_C const IID IID___FIIterator_1_Windows__CServices__CStore__CStorePackageUpdateStatus;
typedef struct __FIIterator_1_Windows__CServices__CStore__CStorePackageUpdateStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CServices__CStore__CStorePackageUpdateStatus * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CServices__CStore__CStorePackageUpdateStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CServices__CStore__CStorePackageUpdateStatus * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CServices__CStore__CStorePackageUpdateStatus * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CServices__CStore__CStorePackageUpdateStatus * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CServices__CStore__CStorePackageUpdateStatus * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CServices__CStore__CStorePackageUpdateStatus * This, __RPC__out struct __x_ABI_CWindows_CServices_CStore_CStorePackageUpdateStatus *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CServices__CStore__CStorePackageUpdateStatus * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CServices__CStore__CStorePackageUpdateStatus * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CServices__CStore__CStorePackageUpdateStatus * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) struct __x_ABI_CWindows_CServices_CStore_CStorePackageUpdateStatus *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CServices__CStore__CStorePackageUpdateStatusVtbl;
interface __FIIterator_1_Windows__CServices__CStore__CStorePackageUpdateStatus
{
    CONST_VTBL struct __FIIterator_1_Windows__CServices__CStore__CStorePackageUpdateStatusVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CServices__CStore__CStorePackageUpdateStatus __FIIterable_1_Windows__CServices__CStore__CStorePackageUpdateStatus;
EXTERN_C const IID IID___FIIterable_1_Windows__CServices__CStore__CStorePackageUpdateStatus;
typedef struct __FIIterable_1_Windows__CServices__CStore__CStorePackageUpdateStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CServices__CStore__CStorePackageUpdateStatus * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CServices__CStore__CStorePackageUpdateStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CServices__CStore__CStorePackageUpdateStatus * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CServices__CStore__CStorePackageUpdateStatus * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CServices__CStore__CStorePackageUpdateStatus * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CServices__CStore__CStorePackageUpdateStatus * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CServices__CStore__CStorePackageUpdateStatus * This, __RPC__deref_out_opt __FIIterator_1_Windows__CServices__CStore__CStorePackageUpdateStatus **first);
    END_INTERFACE
} __FIIterable_1_Windows__CServices__CStore__CStorePackageUpdateStatusVtbl;
interface __FIIterable_1_Windows__CServices__CStore__CStorePackageUpdateStatus
{
    CONST_VTBL struct __FIIterable_1_Windows__CServices__CStore__CStorePackageUpdateStatusVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CServices__CStore__CStoreQueueItem __FIIterator_1_Windows__CServices__CStore__CStoreQueueItem;
EXTERN_C const IID IID___FIIterator_1_Windows__CServices__CStore__CStoreQueueItem;
typedef struct __FIIterator_1_Windows__CServices__CStore__CStoreQueueItemVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CServices__CStore__CStoreQueueItem * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CServices__CStore__CStoreQueueItem * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CServices__CStore__CStoreQueueItem * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CServices__CStore__CStoreQueueItem * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CServices__CStore__CStoreQueueItem * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CServices__CStore__CStoreQueueItem * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CServices__CStore__CStoreQueueItem * This, __RPC__out __x_ABI_CWindows_CServices_CStore_CIStoreQueueItem * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CServices__CStore__CStoreQueueItem * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CServices__CStore__CStoreQueueItem * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CServices__CStore__CStoreQueueItem * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CServices_CStore_CIStoreQueueItem * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CServices__CStore__CStoreQueueItemVtbl;
interface __FIIterator_1_Windows__CServices__CStore__CStoreQueueItem
{
    CONST_VTBL struct __FIIterator_1_Windows__CServices__CStore__CStoreQueueItemVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CServices__CStore__CStoreQueueItem __FIIterable_1_Windows__CServices__CStore__CStoreQueueItem;
EXTERN_C const IID IID___FIIterable_1_Windows__CServices__CStore__CStoreQueueItem;
typedef struct __FIIterable_1_Windows__CServices__CStore__CStoreQueueItemVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CServices__CStore__CStoreQueueItem * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CServices__CStore__CStoreQueueItem * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CServices__CStore__CStoreQueueItem * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CServices__CStore__CStoreQueueItem * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CServices__CStore__CStoreQueueItem * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CServices__CStore__CStoreQueueItem * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CServices__CStore__CStoreQueueItem * This, __RPC__deref_out_opt __FIIterator_1_Windows__CServices__CStore__CStoreQueueItem **first);
    END_INTERFACE
} __FIIterable_1_Windows__CServices__CStore__CStoreQueueItemVtbl;
interface __FIIterable_1_Windows__CServices__CStore__CStoreQueueItem
{
    CONST_VTBL struct __FIIterable_1_Windows__CServices__CStore__CStoreQueueItemVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CServices__CStore__CStoreSku __FIIterator_1_Windows__CServices__CStore__CStoreSku;
EXTERN_C const IID IID___FIIterator_1_Windows__CServices__CStore__CStoreSku;
typedef struct __FIIterator_1_Windows__CServices__CStore__CStoreSkuVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CServices__CStore__CStoreSku * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CServices__CStore__CStoreSku * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CServices__CStore__CStoreSku * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CServices__CStore__CStoreSku * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CServices__CStore__CStoreSku * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CServices__CStore__CStoreSku * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CServices__CStore__CStoreSku * This, __RPC__out __x_ABI_CWindows_CServices_CStore_CIStoreSku * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CServices__CStore__CStoreSku * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CServices__CStore__CStoreSku * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CServices__CStore__CStoreSku * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CServices_CStore_CIStoreSku * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CServices__CStore__CStoreSkuVtbl;
interface __FIIterator_1_Windows__CServices__CStore__CStoreSku
{
    CONST_VTBL struct __FIIterator_1_Windows__CServices__CStore__CStoreSkuVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CServices__CStore__CStoreSku __FIIterable_1_Windows__CServices__CStore__CStoreSku;
EXTERN_C const IID IID___FIIterable_1_Windows__CServices__CStore__CStoreSku;
typedef struct __FIIterable_1_Windows__CServices__CStore__CStoreSkuVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CServices__CStore__CStoreSku * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CServices__CStore__CStoreSku * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CServices__CStore__CStoreSku * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CServices__CStore__CStoreSku * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CServices__CStore__CStoreSku * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CServices__CStore__CStoreSku * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CServices__CStore__CStoreSku * This, __RPC__deref_out_opt __FIIterator_1_Windows__CServices__CStore__CStoreSku **first);
    END_INTERFACE
} __FIIterable_1_Windows__CServices__CStore__CStoreSkuVtbl;
interface __FIIterable_1_Windows__CServices__CStore__CStoreSku
{
    CONST_VTBL struct __FIIterable_1_Windows__CServices__CStore__CStoreSkuVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CServices__CStore__CStoreVideo __FIIterator_1_Windows__CServices__CStore__CStoreVideo;
EXTERN_C const IID IID___FIIterator_1_Windows__CServices__CStore__CStoreVideo;
typedef struct __FIIterator_1_Windows__CServices__CStore__CStoreVideoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CServices__CStore__CStoreVideo * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CServices__CStore__CStoreVideo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CServices__CStore__CStoreVideo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CServices__CStore__CStoreVideo * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CServices__CStore__CStoreVideo * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CServices__CStore__CStoreVideo * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CServices__CStore__CStoreVideo * This, __RPC__out __x_ABI_CWindows_CServices_CStore_CIStoreVideo * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CServices__CStore__CStoreVideo * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CServices__CStore__CStoreVideo * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CServices__CStore__CStoreVideo * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CServices_CStore_CIStoreVideo * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CServices__CStore__CStoreVideoVtbl;
interface __FIIterator_1_Windows__CServices__CStore__CStoreVideo
{
    CONST_VTBL struct __FIIterator_1_Windows__CServices__CStore__CStoreVideoVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CServices__CStore__CStoreVideo __FIIterable_1_Windows__CServices__CStore__CStoreVideo;
EXTERN_C const IID IID___FIIterable_1_Windows__CServices__CStore__CStoreVideo;
typedef struct __FIIterable_1_Windows__CServices__CStore__CStoreVideoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CServices__CStore__CStoreVideo * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CServices__CStore__CStoreVideo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CServices__CStore__CStoreVideo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CServices__CStore__CStoreVideo * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CServices__CStore__CStoreVideo * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CServices__CStore__CStoreVideo * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CServices__CStore__CStoreVideo * This, __RPC__deref_out_opt __FIIterator_1_Windows__CServices__CStore__CStoreVideo **first);
    END_INTERFACE
} __FIIterable_1_Windows__CServices__CStore__CStoreVideoVtbl;
interface __FIIterable_1_Windows__CServices__CStore__CStoreVideo
{
    CONST_VTBL struct __FIIterable_1_Windows__CServices__CStore__CStoreVideoVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIMapView_2_HSTRING_Windows__CServices__CStore__CStoreLicense __FIMapView_2_HSTRING_Windows__CServices__CStore__CStoreLicense;
EXTERN_C const IID IID___FIMapView_2_HSTRING_Windows__CServices__CStore__CStoreLicense;
typedef struct __FIMapView_2_HSTRING_Windows__CServices__CStore__CStoreLicenseVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMapView_2_HSTRING_Windows__CServices__CStore__CStoreLicense * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMapView_2_HSTRING_Windows__CServices__CStore__CStoreLicense * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMapView_2_HSTRING_Windows__CServices__CStore__CStoreLicense * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMapView_2_HSTRING_Windows__CServices__CStore__CStoreLicense * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMapView_2_HSTRING_Windows__CServices__CStore__CStoreLicense * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMapView_2_HSTRING_Windows__CServices__CStore__CStoreLicense * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMapView_2_HSTRING_Windows__CServices__CStore__CStoreLicense * This,
                   __RPC__in HSTRING key,
                            __RPC__deref_out_opt __x_ABI_CWindows_CServices_CStore_CIStoreLicense * *value);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMapView_2_HSTRING_Windows__CServices__CStore__CStoreLicense * This, __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMapView_2_HSTRING_Windows__CServices__CStore__CStoreLicense * This, __RPC__in HSTRING key, __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *Split )(__RPC__in __FIMapView_2_HSTRING_Windows__CServices__CStore__CStoreLicense * This, __RPC__deref_out_opt __FIMapView_2_HSTRING_Windows__CServices__CStore__CStoreLicense **firstPartition,
                    __RPC__deref_out_opt __FIMapView_2_HSTRING_Windows__CServices__CStore__CStoreLicense **secondPartition);
    END_INTERFACE
} __FIMapView_2_HSTRING_Windows__CServices__CStore__CStoreLicenseVtbl;
interface __FIMapView_2_HSTRING_Windows__CServices__CStore__CStoreLicense
{
    CONST_VTBL struct __FIMapView_2_HSTRING_Windows__CServices__CStore__CStoreLicenseVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> Lookup(This,key,value) )
    ( (This)->lpVtbl -> get_Size(This,size) )
    ( (This)->lpVtbl -> HasKey(This,key,found) )
    ( (This)->lpVtbl -> Split(This,firstPartition,secondPartition) )
typedef interface __FIMapView_2_HSTRING_Windows__CServices__CStore__CStoreProduct __FIMapView_2_HSTRING_Windows__CServices__CStore__CStoreProduct;
EXTERN_C const IID IID___FIMapView_2_HSTRING_Windows__CServices__CStore__CStoreProduct;
typedef struct __FIMapView_2_HSTRING_Windows__CServices__CStore__CStoreProductVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMapView_2_HSTRING_Windows__CServices__CStore__CStoreProduct * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMapView_2_HSTRING_Windows__CServices__CStore__CStoreProduct * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMapView_2_HSTRING_Windows__CServices__CStore__CStoreProduct * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMapView_2_HSTRING_Windows__CServices__CStore__CStoreProduct * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMapView_2_HSTRING_Windows__CServices__CStore__CStoreProduct * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMapView_2_HSTRING_Windows__CServices__CStore__CStoreProduct * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMapView_2_HSTRING_Windows__CServices__CStore__CStoreProduct * This,
                   __RPC__in HSTRING key,
                            __RPC__deref_out_opt __x_ABI_CWindows_CServices_CStore_CIStoreProduct * *value);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMapView_2_HSTRING_Windows__CServices__CStore__CStoreProduct * This, __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMapView_2_HSTRING_Windows__CServices__CStore__CStoreProduct * This, __RPC__in HSTRING key, __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *Split )(__RPC__in __FIMapView_2_HSTRING_Windows__CServices__CStore__CStoreProduct * This, __RPC__deref_out_opt __FIMapView_2_HSTRING_Windows__CServices__CStore__CStoreProduct **firstPartition,
                    __RPC__deref_out_opt __FIMapView_2_HSTRING_Windows__CServices__CStore__CStoreProduct **secondPartition);
    END_INTERFACE
} __FIMapView_2_HSTRING_Windows__CServices__CStore__CStoreProductVtbl;
interface __FIMapView_2_HSTRING_Windows__CServices__CStore__CStoreProduct
{
    CONST_VTBL struct __FIMapView_2_HSTRING_Windows__CServices__CStore__CStoreProductVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> Lookup(This,key,value) )
    ( (This)->lpVtbl -> get_Size(This,size) )
    ( (This)->lpVtbl -> HasKey(This,key,found) )
    ( (This)->lpVtbl -> Split(This,firstPartition,secondPartition) )
typedef interface __FIVectorView_1_Windows__CServices__CStore__CStoreAvailability __FIVectorView_1_Windows__CServices__CStore__CStoreAvailability;
EXTERN_C const IID IID___FIVectorView_1_Windows__CServices__CStore__CStoreAvailability;
typedef struct __FIVectorView_1_Windows__CServices__CStore__CStoreAvailabilityVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CServices__CStore__CStoreAvailability * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CServices__CStore__CStoreAvailability * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CServices__CStore__CStoreAvailability * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CServices__CStore__CStoreAvailability * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CServices__CStore__CStoreAvailability * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CServices__CStore__CStoreAvailability * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CServices__CStore__CStoreAvailability * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CServices_CStore_CIStoreAvailability * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CServices__CStore__CStoreAvailability * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CServices__CStore__CStoreAvailability * This,
                       __x_ABI_CWindows_CServices_CStore_CIStoreAvailability * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CServices__CStore__CStoreAvailability * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CServices_CStore_CIStoreAvailability * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CServices__CStore__CStoreAvailabilityVtbl;
interface __FIVectorView_1_Windows__CServices__CStore__CStoreAvailability
{
    CONST_VTBL struct __FIVectorView_1_Windows__CServices__CStore__CStoreAvailabilityVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CServices__CStore__CStoreImage __FIVectorView_1_Windows__CServices__CStore__CStoreImage;
EXTERN_C const IID IID___FIVectorView_1_Windows__CServices__CStore__CStoreImage;
typedef struct __FIVectorView_1_Windows__CServices__CStore__CStoreImageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CServices__CStore__CStoreImage * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CServices__CStore__CStoreImage * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CServices__CStore__CStoreImage * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CServices__CStore__CStoreImage * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CServices__CStore__CStoreImage * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CServices__CStore__CStoreImage * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CServices__CStore__CStoreImage * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CServices_CStore_CIStoreImage * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CServices__CStore__CStoreImage * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CServices__CStore__CStoreImage * This,
                       __x_ABI_CWindows_CServices_CStore_CIStoreImage * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CServices__CStore__CStoreImage * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CServices_CStore_CIStoreImage * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CServices__CStore__CStoreImageVtbl;
interface __FIVectorView_1_Windows__CServices__CStore__CStoreImage
{
    CONST_VTBL struct __FIVectorView_1_Windows__CServices__CStore__CStoreImageVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CServices__CStore__CStorePackageUpdate __FIVectorView_1_Windows__CServices__CStore__CStorePackageUpdate;
EXTERN_C const IID IID___FIVectorView_1_Windows__CServices__CStore__CStorePackageUpdate;
typedef struct __FIVectorView_1_Windows__CServices__CStore__CStorePackageUpdateVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CServices__CStore__CStorePackageUpdate * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CServices__CStore__CStorePackageUpdate * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CServices__CStore__CStorePackageUpdate * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CServices__CStore__CStorePackageUpdate * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CServices__CStore__CStorePackageUpdate * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CServices__CStore__CStorePackageUpdate * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CServices__CStore__CStorePackageUpdate * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CServices_CStore_CIStorePackageUpdate * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CServices__CStore__CStorePackageUpdate * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CServices__CStore__CStorePackageUpdate * This,
                       __x_ABI_CWindows_CServices_CStore_CIStorePackageUpdate * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CServices__CStore__CStorePackageUpdate * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CServices_CStore_CIStorePackageUpdate * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CServices__CStore__CStorePackageUpdateVtbl;
interface __FIVectorView_1_Windows__CServices__CStore__CStorePackageUpdate
{
    CONST_VTBL struct __FIVectorView_1_Windows__CServices__CStore__CStorePackageUpdateVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CServices__CStore__CStorePackageUpdateStatus __FIVectorView_1_Windows__CServices__CStore__CStorePackageUpdateStatus;
EXTERN_C const IID IID___FIVectorView_1_Windows__CServices__CStore__CStorePackageUpdateStatus;
typedef struct __FIVectorView_1_Windows__CServices__CStore__CStorePackageUpdateStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CServices__CStore__CStorePackageUpdateStatus * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CServices__CStore__CStorePackageUpdateStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CServices__CStore__CStorePackageUpdateStatus * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CServices__CStore__CStorePackageUpdateStatus * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CServices__CStore__CStorePackageUpdateStatus * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CServices__CStore__CStorePackageUpdateStatus * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CServices__CStore__CStorePackageUpdateStatus * This,
                                                    unsigned int index,
                                                             __RPC__out struct __x_ABI_CWindows_CServices_CStore_CStorePackageUpdateStatus *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CServices__CStore__CStorePackageUpdateStatus * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CServices__CStore__CStorePackageUpdateStatus * This,
                       struct __x_ABI_CWindows_CServices_CStore_CStorePackageUpdateStatus item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CServices__CStore__CStorePackageUpdateStatus * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) struct __x_ABI_CWindows_CServices_CStore_CStorePackageUpdateStatus *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CServices__CStore__CStorePackageUpdateStatusVtbl;
interface __FIVectorView_1_Windows__CServices__CStore__CStorePackageUpdateStatus
{
    CONST_VTBL struct __FIVectorView_1_Windows__CServices__CStore__CStorePackageUpdateStatusVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CServices__CStore__CStoreQueueItem __FIVectorView_1_Windows__CServices__CStore__CStoreQueueItem;
EXTERN_C const IID IID___FIVectorView_1_Windows__CServices__CStore__CStoreQueueItem;
typedef struct __FIVectorView_1_Windows__CServices__CStore__CStoreQueueItemVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CServices__CStore__CStoreQueueItem * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CServices__CStore__CStoreQueueItem * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CServices__CStore__CStoreQueueItem * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CServices__CStore__CStoreQueueItem * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CServices__CStore__CStoreQueueItem * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CServices__CStore__CStoreQueueItem * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CServices__CStore__CStoreQueueItem * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CServices_CStore_CIStoreQueueItem * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CServices__CStore__CStoreQueueItem * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CServices__CStore__CStoreQueueItem * This,
                       __x_ABI_CWindows_CServices_CStore_CIStoreQueueItem * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CServices__CStore__CStoreQueueItem * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CServices_CStore_CIStoreQueueItem * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CServices__CStore__CStoreQueueItemVtbl;
interface __FIVectorView_1_Windows__CServices__CStore__CStoreQueueItem
{
    CONST_VTBL struct __FIVectorView_1_Windows__CServices__CStore__CStoreQueueItemVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CServices__CStore__CStoreSku __FIVectorView_1_Windows__CServices__CStore__CStoreSku;
EXTERN_C const IID IID___FIVectorView_1_Windows__CServices__CStore__CStoreSku;
typedef struct __FIVectorView_1_Windows__CServices__CStore__CStoreSkuVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CServices__CStore__CStoreSku * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CServices__CStore__CStoreSku * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CServices__CStore__CStoreSku * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CServices__CStore__CStoreSku * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CServices__CStore__CStoreSku * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CServices__CStore__CStoreSku * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CServices__CStore__CStoreSku * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CServices_CStore_CIStoreSku * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CServices__CStore__CStoreSku * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CServices__CStore__CStoreSku * This,
                       __x_ABI_CWindows_CServices_CStore_CIStoreSku * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CServices__CStore__CStoreSku * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CServices_CStore_CIStoreSku * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CServices__CStore__CStoreSkuVtbl;
interface __FIVectorView_1_Windows__CServices__CStore__CStoreSku
{
    CONST_VTBL struct __FIVectorView_1_Windows__CServices__CStore__CStoreSkuVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CServices__CStore__CStoreVideo __FIVectorView_1_Windows__CServices__CStore__CStoreVideo;
EXTERN_C const IID IID___FIVectorView_1_Windows__CServices__CStore__CStoreVideo;
typedef struct __FIVectorView_1_Windows__CServices__CStore__CStoreVideoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CServices__CStore__CStoreVideo * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CServices__CStore__CStoreVideo * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CServices__CStore__CStoreVideo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CServices__CStore__CStoreVideo * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CServices__CStore__CStoreVideo * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CServices__CStore__CStoreVideo * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CServices__CStore__CStoreVideo * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CServices_CStore_CIStoreVideo * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CServices__CStore__CStoreVideo * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CServices__CStore__CStoreVideo * This,
                       __x_ABI_CWindows_CServices_CStore_CIStoreVideo * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CServices__CStore__CStoreVideo * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CServices_CStore_CIStoreVideo * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CServices__CStore__CStoreVideoVtbl;
interface __FIVectorView_1_Windows__CServices__CStore__CStoreVideo
{
    CONST_VTBL struct __FIVectorView_1_Windows__CServices__CStore__CStoreVideoVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationProgressHandler_2_Windows__CServices__CStore__CStorePackageUpdateResult_Windows__CServices__CStore__CStorePackageUpdateStatus __FIAsyncOperationProgressHandler_2_Windows__CServices__CStore__CStorePackageUpdateResult_Windows__CServices__CStore__CStorePackageUpdateStatus;
EXTERN_C const IID IID___FIAsyncOperationProgressHandler_2_Windows__CServices__CStore__CStorePackageUpdateResult_Windows__CServices__CStore__CStorePackageUpdateStatus;
typedef interface __FIAsyncOperationWithProgress_2_Windows__CServices__CStore__CStorePackageUpdateResult_Windows__CServices__CStore__CStorePackageUpdateStatus __FIAsyncOperationWithProgress_2_Windows__CServices__CStore__CStorePackageUpdateResult_Windows__CServices__CStore__CStorePackageUpdateStatus;
typedef struct __FIAsyncOperationProgressHandler_2_Windows__CServices__CStore__CStorePackageUpdateResult_Windows__CServices__CStore__CStorePackageUpdateStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CServices__CStore__CStorePackageUpdateResult_Windows__CServices__CStore__CStorePackageUpdateStatus * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CServices__CStore__CStorePackageUpdateResult_Windows__CServices__CStore__CStorePackageUpdateStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CServices__CStore__CStorePackageUpdateResult_Windows__CServices__CStore__CStorePackageUpdateStatus * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CServices__CStore__CStorePackageUpdateResult_Windows__CServices__CStore__CStorePackageUpdateStatus * This, __RPC__in_opt __FIAsyncOperationWithProgress_2_Windows__CServices__CStore__CStorePackageUpdateResult_Windows__CServices__CStore__CStorePackageUpdateStatus *asyncInfo, struct __x_ABI_CWindows_CServices_CStore_CStorePackageUpdateStatus progressInfo);
    END_INTERFACE
} __FIAsyncOperationProgressHandler_2_Windows__CServices__CStore__CStorePackageUpdateResult_Windows__CServices__CStore__CStorePackageUpdateStatusVtbl;
interface __FIAsyncOperationProgressHandler_2_Windows__CServices__CStore__CStorePackageUpdateResult_Windows__CServices__CStore__CStorePackageUpdateStatus
{
    CONST_VTBL struct __FIAsyncOperationProgressHandler_2_Windows__CServices__CStore__CStorePackageUpdateResult_Windows__CServices__CStore__CStorePackageUpdateStatusVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,progressInfo) )
typedef interface __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CServices__CStore__CStorePackageUpdateResult_Windows__CServices__CStore__CStorePackageUpdateStatus __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CServices__CStore__CStorePackageUpdateResult_Windows__CServices__CStore__CStorePackageUpdateStatus;
EXTERN_C const IID IID___FIAsyncOperationWithProgressCompletedHandler_2_Windows__CServices__CStore__CStorePackageUpdateResult_Windows__CServices__CStore__CStorePackageUpdateStatus;
typedef interface __FIAsyncOperationWithProgress_2_Windows__CServices__CStore__CStorePackageUpdateResult_Windows__CServices__CStore__CStorePackageUpdateStatus __FIAsyncOperationWithProgress_2_Windows__CServices__CStore__CStorePackageUpdateResult_Windows__CServices__CStore__CStorePackageUpdateStatus;
typedef struct __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CServices__CStore__CStorePackageUpdateResult_Windows__CServices__CStore__CStorePackageUpdateStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CServices__CStore__CStorePackageUpdateResult_Windows__CServices__CStore__CStorePackageUpdateStatus * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CServices__CStore__CStorePackageUpdateResult_Windows__CServices__CStore__CStorePackageUpdateStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CServices__CStore__CStorePackageUpdateResult_Windows__CServices__CStore__CStorePackageUpdateStatus * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CServices__CStore__CStorePackageUpdateResult_Windows__CServices__CStore__CStorePackageUpdateStatus * This, __RPC__in_opt __FIAsyncOperationWithProgress_2_Windows__CServices__CStore__CStorePackageUpdateResult_Windows__CServices__CStore__CStorePackageUpdateStatus *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CServices__CStore__CStorePackageUpdateResult_Windows__CServices__CStore__CStorePackageUpdateStatusVtbl;
interface __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CServices__CStore__CStorePackageUpdateResult_Windows__CServices__CStore__CStorePackageUpdateStatus
{
    CONST_VTBL struct __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CServices__CStore__CStorePackageUpdateResult_Windows__CServices__CStore__CStorePackageUpdateStatusVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperationWithProgress_2_Windows__CServices__CStore__CStorePackageUpdateResult_Windows__CServices__CStore__CStorePackageUpdateStatus __FIAsyncOperationWithProgress_2_Windows__CServices__CStore__CStorePackageUpdateResult_Windows__CServices__CStore__CStorePackageUpdateStatus;
EXTERN_C const IID IID___FIAsyncOperationWithProgress_2_Windows__CServices__CStore__CStorePackageUpdateResult_Windows__CServices__CStore__CStorePackageUpdateStatus;
typedef struct __FIAsyncOperationWithProgress_2_Windows__CServices__CStore__CStorePackageUpdateResult_Windows__CServices__CStore__CStorePackageUpdateStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CServices__CStore__CStorePackageUpdateResult_Windows__CServices__CStore__CStorePackageUpdateStatus * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CServices__CStore__CStorePackageUpdateResult_Windows__CServices__CStore__CStorePackageUpdateStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CServices__CStore__CStorePackageUpdateResult_Windows__CServices__CStore__CStorePackageUpdateStatus * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CServices__CStore__CStorePackageUpdateResult_Windows__CServices__CStore__CStorePackageUpdateStatus * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CServices__CStore__CStorePackageUpdateResult_Windows__CServices__CStore__CStorePackageUpdateStatus * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CServices__CStore__CStorePackageUpdateResult_Windows__CServices__CStore__CStorePackageUpdateStatus * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Progress )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CServices__CStore__CStorePackageUpdateResult_Windows__CServices__CStore__CStorePackageUpdateStatus * This, __RPC__in_opt __FIAsyncOperationProgressHandler_2_Windows__CServices__CStore__CStorePackageUpdateResult_Windows__CServices__CStore__CStorePackageUpdateStatus *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Progress )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CServices__CStore__CStorePackageUpdateResult_Windows__CServices__CStore__CStorePackageUpdateStatus * This, __RPC__deref_out_opt __FIAsyncOperationProgressHandler_2_Windows__CServices__CStore__CStorePackageUpdateResult_Windows__CServices__CStore__CStorePackageUpdateStatus **handler);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CServices__CStore__CStorePackageUpdateResult_Windows__CServices__CStore__CStorePackageUpdateStatus * This, __RPC__in_opt __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CServices__CStore__CStorePackageUpdateResult_Windows__CServices__CStore__CStorePackageUpdateStatus *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CServices__CStore__CStorePackageUpdateResult_Windows__CServices__CStore__CStorePackageUpdateStatus * This, __RPC__deref_out_opt __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CServices__CStore__CStorePackageUpdateResult_Windows__CServices__CStore__CStorePackageUpdateStatus **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CServices__CStore__CStorePackageUpdateResult_Windows__CServices__CStore__CStorePackageUpdateStatus * This, __RPC__deref_out_opt __x_ABI_CWindows_CServices_CStore_CIStorePackageUpdateResult * *results);
    END_INTERFACE
} __FIAsyncOperationWithProgress_2_Windows__CServices__CStore__CStorePackageUpdateResult_Windows__CServices__CStore__CStorePackageUpdateStatusVtbl;
interface __FIAsyncOperationWithProgress_2_Windows__CServices__CStore__CStorePackageUpdateResult_Windows__CServices__CStore__CStorePackageUpdateStatus
{
    CONST_VTBL struct __FIAsyncOperationWithProgress_2_Windows__CServices__CStore__CStorePackageUpdateResult_Windows__CServices__CStore__CStorePackageUpdateStatusVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CServices__CStore__CStorePackageUpdate __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CServices__CStore__CStorePackageUpdate;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CServices__CStore__CStorePackageUpdate;
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CServices__CStore__CStorePackageUpdate __FIAsyncOperation_1___FIVectorView_1_Windows__CServices__CStore__CStorePackageUpdate;
typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CServices__CStore__CStorePackageUpdateVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CServices__CStore__CStorePackageUpdate * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CServices__CStore__CStorePackageUpdate * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CServices__CStore__CStorePackageUpdate * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CServices__CStore__CStorePackageUpdate * This, __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CServices__CStore__CStorePackageUpdate *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CServices__CStore__CStorePackageUpdateVtbl;
interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CServices__CStore__CStorePackageUpdate
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CServices__CStore__CStorePackageUpdateVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CServices__CStore__CStorePackageUpdate __FIAsyncOperation_1___FIVectorView_1_Windows__CServices__CStore__CStorePackageUpdate;
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CServices__CStore__CStorePackageUpdate;
typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CServices__CStore__CStorePackageUpdateVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CServices__CStore__CStorePackageUpdate * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CServices__CStore__CStorePackageUpdate * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CServices__CStore__CStorePackageUpdate * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CServices__CStore__CStorePackageUpdate * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CServices__CStore__CStorePackageUpdate * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CServices__CStore__CStorePackageUpdate * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CServices__CStore__CStorePackageUpdate * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CServices__CStore__CStorePackageUpdate *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CServices__CStore__CStorePackageUpdate * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CServices__CStore__CStorePackageUpdate **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CServices__CStore__CStorePackageUpdate * This, __RPC__out __FIVectorView_1_Windows__CServices__CStore__CStorePackageUpdate * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CServices__CStore__CStorePackageUpdateVtbl;
interface __FIAsyncOperation_1___FIVectorView_1_Windows__CServices__CStore__CStorePackageUpdate
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CServices__CStore__CStorePackageUpdateVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CServices__CStore__CStoreQueueItem __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CServices__CStore__CStoreQueueItem;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CServices__CStore__CStoreQueueItem;
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CServices__CStore__CStoreQueueItem __FIAsyncOperation_1___FIVectorView_1_Windows__CServices__CStore__CStoreQueueItem;
typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CServices__CStore__CStoreQueueItemVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CServices__CStore__CStoreQueueItem * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CServices__CStore__CStoreQueueItem * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CServices__CStore__CStoreQueueItem * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CServices__CStore__CStoreQueueItem * This, __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CServices__CStore__CStoreQueueItem *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CServices__CStore__CStoreQueueItemVtbl;
interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CServices__CStore__CStoreQueueItem
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CServices__CStore__CStoreQueueItemVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CServices__CStore__CStoreQueueItem __FIAsyncOperation_1___FIVectorView_1_Windows__CServices__CStore__CStoreQueueItem;
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CServices__CStore__CStoreQueueItem;
typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CServices__CStore__CStoreQueueItemVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CServices__CStore__CStoreQueueItem * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CServices__CStore__CStoreQueueItem * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CServices__CStore__CStoreQueueItem * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CServices__CStore__CStoreQueueItem * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CServices__CStore__CStoreQueueItem * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CServices__CStore__CStoreQueueItem * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CServices__CStore__CStoreQueueItem * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CServices__CStore__CStoreQueueItem *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CServices__CStore__CStoreQueueItem * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CServices__CStore__CStoreQueueItem **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CServices__CStore__CStoreQueueItem * This, __RPC__out __FIVectorView_1_Windows__CServices__CStore__CStoreQueueItem * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CServices__CStore__CStoreQueueItemVtbl;
interface __FIAsyncOperation_1___FIVectorView_1_Windows__CServices__CStore__CStoreQueueItem
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CServices__CStore__CStoreQueueItemVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CServices__CStore__CStoreAcquireLicenseResult __FIAsyncOperationCompletedHandler_1_Windows__CServices__CStore__CStoreAcquireLicenseResult;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CServices__CStore__CStoreAcquireLicenseResult;
typedef interface __FIAsyncOperation_1_Windows__CServices__CStore__CStoreAcquireLicenseResult __FIAsyncOperation_1_Windows__CServices__CStore__CStoreAcquireLicenseResult;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CServices__CStore__CStoreAcquireLicenseResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CServices__CStore__CStoreAcquireLicenseResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CServices__CStore__CStoreAcquireLicenseResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CServices__CStore__CStoreAcquireLicenseResult * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CServices__CStore__CStoreAcquireLicenseResult * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CServices__CStore__CStoreAcquireLicenseResult *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CServices__CStore__CStoreAcquireLicenseResultVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CServices__CStore__CStoreAcquireLicenseResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CServices__CStore__CStoreAcquireLicenseResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CServices__CStore__CStoreAcquireLicenseResult __FIAsyncOperation_1_Windows__CServices__CStore__CStoreAcquireLicenseResult;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CServices__CStore__CStoreAcquireLicenseResult;
typedef struct __FIAsyncOperation_1_Windows__CServices__CStore__CStoreAcquireLicenseResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CStore__CStoreAcquireLicenseResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CStore__CStoreAcquireLicenseResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CStore__CStoreAcquireLicenseResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CStore__CStoreAcquireLicenseResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CStore__CStoreAcquireLicenseResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CStore__CStoreAcquireLicenseResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CStore__CStoreAcquireLicenseResult * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CServices__CStore__CStoreAcquireLicenseResult *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CStore__CStoreAcquireLicenseResult * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CServices__CStore__CStoreAcquireLicenseResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CStore__CStoreAcquireLicenseResult * This, __RPC__out __x_ABI_CWindows_CServices_CStore_CIStoreAcquireLicenseResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CServices__CStore__CStoreAcquireLicenseResultVtbl;
interface __FIAsyncOperation_1_Windows__CServices__CStore__CStoreAcquireLicenseResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CServices__CStore__CStoreAcquireLicenseResultVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CServices__CStore__CStoreAppLicense __FIAsyncOperationCompletedHandler_1_Windows__CServices__CStore__CStoreAppLicense;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CServices__CStore__CStoreAppLicense;
typedef interface __FIAsyncOperation_1_Windows__CServices__CStore__CStoreAppLicense __FIAsyncOperation_1_Windows__CServices__CStore__CStoreAppLicense;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CServices__CStore__CStoreAppLicenseVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CServices__CStore__CStoreAppLicense * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CServices__CStore__CStoreAppLicense * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CServices__CStore__CStoreAppLicense * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CServices__CStore__CStoreAppLicense * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CServices__CStore__CStoreAppLicense *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CServices__CStore__CStoreAppLicenseVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CServices__CStore__CStoreAppLicense
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CServices__CStore__CStoreAppLicenseVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CServices__CStore__CStoreAppLicense __FIAsyncOperation_1_Windows__CServices__CStore__CStoreAppLicense;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CServices__CStore__CStoreAppLicense;
typedef struct __FIAsyncOperation_1_Windows__CServices__CStore__CStoreAppLicenseVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CStore__CStoreAppLicense * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CStore__CStoreAppLicense * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CStore__CStoreAppLicense * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CStore__CStoreAppLicense * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CStore__CStoreAppLicense * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CStore__CStoreAppLicense * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CStore__CStoreAppLicense * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CServices__CStore__CStoreAppLicense *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CStore__CStoreAppLicense * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CServices__CStore__CStoreAppLicense **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CStore__CStoreAppLicense * This, __RPC__out __x_ABI_CWindows_CServices_CStore_CIStoreAppLicense * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CServices__CStore__CStoreAppLicenseVtbl;
interface __FIAsyncOperation_1_Windows__CServices__CStore__CStoreAppLicense
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CServices__CStore__CStoreAppLicenseVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CServices__CStore__CStoreCanAcquireLicenseResult __FIAsyncOperationCompletedHandler_1_Windows__CServices__CStore__CStoreCanAcquireLicenseResult;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CServices__CStore__CStoreCanAcquireLicenseResult;
typedef interface __FIAsyncOperation_1_Windows__CServices__CStore__CStoreCanAcquireLicenseResult __FIAsyncOperation_1_Windows__CServices__CStore__CStoreCanAcquireLicenseResult;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CServices__CStore__CStoreCanAcquireLicenseResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CServices__CStore__CStoreCanAcquireLicenseResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CServices__CStore__CStoreCanAcquireLicenseResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CServices__CStore__CStoreCanAcquireLicenseResult * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CServices__CStore__CStoreCanAcquireLicenseResult * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CServices__CStore__CStoreCanAcquireLicenseResult *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CServices__CStore__CStoreCanAcquireLicenseResultVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CServices__CStore__CStoreCanAcquireLicenseResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CServices__CStore__CStoreCanAcquireLicenseResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CServices__CStore__CStoreCanAcquireLicenseResult __FIAsyncOperation_1_Windows__CServices__CStore__CStoreCanAcquireLicenseResult;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CServices__CStore__CStoreCanAcquireLicenseResult;
typedef struct __FIAsyncOperation_1_Windows__CServices__CStore__CStoreCanAcquireLicenseResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CStore__CStoreCanAcquireLicenseResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CStore__CStoreCanAcquireLicenseResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CStore__CStoreCanAcquireLicenseResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CStore__CStoreCanAcquireLicenseResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CStore__CStoreCanAcquireLicenseResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CStore__CStoreCanAcquireLicenseResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CStore__CStoreCanAcquireLicenseResult * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CServices__CStore__CStoreCanAcquireLicenseResult *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CStore__CStoreCanAcquireLicenseResult * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CServices__CStore__CStoreCanAcquireLicenseResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CStore__CStoreCanAcquireLicenseResult * This, __RPC__out __x_ABI_CWindows_CServices_CStore_CIStoreCanAcquireLicenseResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CServices__CStore__CStoreCanAcquireLicenseResultVtbl;
interface __FIAsyncOperation_1_Windows__CServices__CStore__CStoreCanAcquireLicenseResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CServices__CStore__CStoreCanAcquireLicenseResultVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CServices__CStore__CStoreConsumableResult __FIAsyncOperationCompletedHandler_1_Windows__CServices__CStore__CStoreConsumableResult;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CServices__CStore__CStoreConsumableResult;
typedef interface __FIAsyncOperation_1_Windows__CServices__CStore__CStoreConsumableResult __FIAsyncOperation_1_Windows__CServices__CStore__CStoreConsumableResult;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CServices__CStore__CStoreConsumableResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CServices__CStore__CStoreConsumableResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CServices__CStore__CStoreConsumableResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CServices__CStore__CStoreConsumableResult * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CServices__CStore__CStoreConsumableResult * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CServices__CStore__CStoreConsumableResult *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CServices__CStore__CStoreConsumableResultVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CServices__CStore__CStoreConsumableResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CServices__CStore__CStoreConsumableResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CServices__CStore__CStoreConsumableResult __FIAsyncOperation_1_Windows__CServices__CStore__CStoreConsumableResult;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CServices__CStore__CStoreConsumableResult;
typedef struct __FIAsyncOperation_1_Windows__CServices__CStore__CStoreConsumableResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CStore__CStoreConsumableResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CStore__CStoreConsumableResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CStore__CStoreConsumableResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CStore__CStoreConsumableResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CStore__CStoreConsumableResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CStore__CStoreConsumableResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CStore__CStoreConsumableResult * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CServices__CStore__CStoreConsumableResult *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CStore__CStoreConsumableResult * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CServices__CStore__CStoreConsumableResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CStore__CStoreConsumableResult * This, __RPC__out __x_ABI_CWindows_CServices_CStore_CIStoreConsumableResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CServices__CStore__CStoreConsumableResultVtbl;
interface __FIAsyncOperation_1_Windows__CServices__CStore__CStoreConsumableResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CServices__CStore__CStoreConsumableResultVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CServices__CStore__CStoreProductPagedQueryResult __FIAsyncOperationCompletedHandler_1_Windows__CServices__CStore__CStoreProductPagedQueryResult;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CServices__CStore__CStoreProductPagedQueryResult;
typedef interface __FIAsyncOperation_1_Windows__CServices__CStore__CStoreProductPagedQueryResult __FIAsyncOperation_1_Windows__CServices__CStore__CStoreProductPagedQueryResult;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CServices__CStore__CStoreProductPagedQueryResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CServices__CStore__CStoreProductPagedQueryResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CServices__CStore__CStoreProductPagedQueryResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CServices__CStore__CStoreProductPagedQueryResult * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CServices__CStore__CStoreProductPagedQueryResult * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CServices__CStore__CStoreProductPagedQueryResult *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CServices__CStore__CStoreProductPagedQueryResultVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CServices__CStore__CStoreProductPagedQueryResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CServices__CStore__CStoreProductPagedQueryResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CServices__CStore__CStoreProductPagedQueryResult __FIAsyncOperation_1_Windows__CServices__CStore__CStoreProductPagedQueryResult;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CServices__CStore__CStoreProductPagedQueryResult;
typedef struct __FIAsyncOperation_1_Windows__CServices__CStore__CStoreProductPagedQueryResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CStore__CStoreProductPagedQueryResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CStore__CStoreProductPagedQueryResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CStore__CStoreProductPagedQueryResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CStore__CStoreProductPagedQueryResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CStore__CStoreProductPagedQueryResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CStore__CStoreProductPagedQueryResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CStore__CStoreProductPagedQueryResult * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CServices__CStore__CStoreProductPagedQueryResult *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CStore__CStoreProductPagedQueryResult * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CServices__CStore__CStoreProductPagedQueryResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CStore__CStoreProductPagedQueryResult * This, __RPC__out __x_ABI_CWindows_CServices_CStore_CIStoreProductPagedQueryResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CServices__CStore__CStoreProductPagedQueryResultVtbl;
interface __FIAsyncOperation_1_Windows__CServices__CStore__CStoreProductPagedQueryResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CServices__CStore__CStoreProductPagedQueryResultVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CServices__CStore__CStoreProductQueryResult __FIAsyncOperationCompletedHandler_1_Windows__CServices__CStore__CStoreProductQueryResult;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CServices__CStore__CStoreProductQueryResult;
typedef interface __FIAsyncOperation_1_Windows__CServices__CStore__CStoreProductQueryResult __FIAsyncOperation_1_Windows__CServices__CStore__CStoreProductQueryResult;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CServices__CStore__CStoreProductQueryResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CServices__CStore__CStoreProductQueryResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CServices__CStore__CStoreProductQueryResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CServices__CStore__CStoreProductQueryResult * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CServices__CStore__CStoreProductQueryResult * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CServices__CStore__CStoreProductQueryResult *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CServices__CStore__CStoreProductQueryResultVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CServices__CStore__CStoreProductQueryResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CServices__CStore__CStoreProductQueryResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CServices__CStore__CStoreProductQueryResult __FIAsyncOperation_1_Windows__CServices__CStore__CStoreProductQueryResult;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CServices__CStore__CStoreProductQueryResult;
typedef struct __FIAsyncOperation_1_Windows__CServices__CStore__CStoreProductQueryResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CStore__CStoreProductQueryResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CStore__CStoreProductQueryResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CStore__CStoreProductQueryResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CStore__CStoreProductQueryResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CStore__CStoreProductQueryResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CStore__CStoreProductQueryResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CStore__CStoreProductQueryResult * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CServices__CStore__CStoreProductQueryResult *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CStore__CStoreProductQueryResult * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CServices__CStore__CStoreProductQueryResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CStore__CStoreProductQueryResult * This, __RPC__out __x_ABI_CWindows_CServices_CStore_CIStoreProductQueryResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CServices__CStore__CStoreProductQueryResultVtbl;
interface __FIAsyncOperation_1_Windows__CServices__CStore__CStoreProductQueryResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CServices__CStore__CStoreProductQueryResultVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CServices__CStore__CStoreProductResult __FIAsyncOperationCompletedHandler_1_Windows__CServices__CStore__CStoreProductResult;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CServices__CStore__CStoreProductResult;
typedef interface __FIAsyncOperation_1_Windows__CServices__CStore__CStoreProductResult __FIAsyncOperation_1_Windows__CServices__CStore__CStoreProductResult;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CServices__CStore__CStoreProductResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CServices__CStore__CStoreProductResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CServices__CStore__CStoreProductResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CServices__CStore__CStoreProductResult * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CServices__CStore__CStoreProductResult * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CServices__CStore__CStoreProductResult *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CServices__CStore__CStoreProductResultVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CServices__CStore__CStoreProductResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CServices__CStore__CStoreProductResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CServices__CStore__CStoreProductResult __FIAsyncOperation_1_Windows__CServices__CStore__CStoreProductResult;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CServices__CStore__CStoreProductResult;
typedef struct __FIAsyncOperation_1_Windows__CServices__CStore__CStoreProductResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CStore__CStoreProductResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CStore__CStoreProductResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CStore__CStoreProductResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CStore__CStoreProductResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CStore__CStoreProductResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CStore__CStoreProductResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CStore__CStoreProductResult * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CServices__CStore__CStoreProductResult *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CStore__CStoreProductResult * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CServices__CStore__CStoreProductResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CStore__CStoreProductResult * This, __RPC__out __x_ABI_CWindows_CServices_CStore_CIStoreProductResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CServices__CStore__CStoreProductResultVtbl;
interface __FIAsyncOperation_1_Windows__CServices__CStore__CStoreProductResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CServices__CStore__CStoreProductResultVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CServices__CStore__CStorePurchaseResult __FIAsyncOperationCompletedHandler_1_Windows__CServices__CStore__CStorePurchaseResult;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CServices__CStore__CStorePurchaseResult;
typedef interface __FIAsyncOperation_1_Windows__CServices__CStore__CStorePurchaseResult __FIAsyncOperation_1_Windows__CServices__CStore__CStorePurchaseResult;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CServices__CStore__CStorePurchaseResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CServices__CStore__CStorePurchaseResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CServices__CStore__CStorePurchaseResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CServices__CStore__CStorePurchaseResult * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CServices__CStore__CStorePurchaseResult * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CServices__CStore__CStorePurchaseResult *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CServices__CStore__CStorePurchaseResultVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CServices__CStore__CStorePurchaseResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CServices__CStore__CStorePurchaseResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CServices__CStore__CStorePurchaseResult __FIAsyncOperation_1_Windows__CServices__CStore__CStorePurchaseResult;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CServices__CStore__CStorePurchaseResult;
typedef struct __FIAsyncOperation_1_Windows__CServices__CStore__CStorePurchaseResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CStore__CStorePurchaseResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CStore__CStorePurchaseResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CStore__CStorePurchaseResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CStore__CStorePurchaseResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CStore__CStorePurchaseResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CStore__CStorePurchaseResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CStore__CStorePurchaseResult * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CServices__CStore__CStorePurchaseResult *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CStore__CStorePurchaseResult * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CServices__CStore__CStorePurchaseResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CStore__CStorePurchaseResult * This, __RPC__out __x_ABI_CWindows_CServices_CStore_CIStorePurchaseResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CServices__CStore__CStorePurchaseResultVtbl;
interface __FIAsyncOperation_1_Windows__CServices__CStore__CStorePurchaseResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CServices__CStore__CStorePurchaseResultVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CServices__CStore__CStoreRateAndReviewResult __FIAsyncOperationCompletedHandler_1_Windows__CServices__CStore__CStoreRateAndReviewResult;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CServices__CStore__CStoreRateAndReviewResult;
typedef interface __FIAsyncOperation_1_Windows__CServices__CStore__CStoreRateAndReviewResult __FIAsyncOperation_1_Windows__CServices__CStore__CStoreRateAndReviewResult;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CServices__CStore__CStoreRateAndReviewResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CServices__CStore__CStoreRateAndReviewResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CServices__CStore__CStoreRateAndReviewResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CServices__CStore__CStoreRateAndReviewResult * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CServices__CStore__CStoreRateAndReviewResult * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CServices__CStore__CStoreRateAndReviewResult *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CServices__CStore__CStoreRateAndReviewResultVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CServices__CStore__CStoreRateAndReviewResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CServices__CStore__CStoreRateAndReviewResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CServices__CStore__CStoreRateAndReviewResult __FIAsyncOperation_1_Windows__CServices__CStore__CStoreRateAndReviewResult;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CServices__CStore__CStoreRateAndReviewResult;
typedef struct __FIAsyncOperation_1_Windows__CServices__CStore__CStoreRateAndReviewResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CStore__CStoreRateAndReviewResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CStore__CStoreRateAndReviewResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CStore__CStoreRateAndReviewResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CStore__CStoreRateAndReviewResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CStore__CStoreRateAndReviewResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CStore__CStoreRateAndReviewResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CStore__CStoreRateAndReviewResult * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CServices__CStore__CStoreRateAndReviewResult *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CStore__CStoreRateAndReviewResult * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CServices__CStore__CStoreRateAndReviewResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CStore__CStoreRateAndReviewResult * This, __RPC__out __x_ABI_CWindows_CServices_CStore_CIStoreRateAndReviewResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CServices__CStore__CStoreRateAndReviewResultVtbl;
interface __FIAsyncOperation_1_Windows__CServices__CStore__CStoreRateAndReviewResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CServices__CStore__CStoreRateAndReviewResultVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CServices__CStore__CStoreSendRequestResult __FIAsyncOperationCompletedHandler_1_Windows__CServices__CStore__CStoreSendRequestResult;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CServices__CStore__CStoreSendRequestResult;
typedef interface __FIAsyncOperation_1_Windows__CServices__CStore__CStoreSendRequestResult __FIAsyncOperation_1_Windows__CServices__CStore__CStoreSendRequestResult;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CServices__CStore__CStoreSendRequestResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CServices__CStore__CStoreSendRequestResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CServices__CStore__CStoreSendRequestResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CServices__CStore__CStoreSendRequestResult * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CServices__CStore__CStoreSendRequestResult * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CServices__CStore__CStoreSendRequestResult *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CServices__CStore__CStoreSendRequestResultVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CServices__CStore__CStoreSendRequestResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CServices__CStore__CStoreSendRequestResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CServices__CStore__CStoreSendRequestResult __FIAsyncOperation_1_Windows__CServices__CStore__CStoreSendRequestResult;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CServices__CStore__CStoreSendRequestResult;
typedef struct __FIAsyncOperation_1_Windows__CServices__CStore__CStoreSendRequestResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CStore__CStoreSendRequestResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CStore__CStoreSendRequestResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CStore__CStoreSendRequestResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CStore__CStoreSendRequestResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CStore__CStoreSendRequestResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CStore__CStoreSendRequestResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CStore__CStoreSendRequestResult * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CServices__CStore__CStoreSendRequestResult *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CStore__CStoreSendRequestResult * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CServices__CStore__CStoreSendRequestResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CStore__CStoreSendRequestResult * This, __RPC__out __x_ABI_CWindows_CServices_CStore_CIStoreSendRequestResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CServices__CStore__CStoreSendRequestResultVtbl;
interface __FIAsyncOperation_1_Windows__CServices__CStore__CStoreSendRequestResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CServices__CStore__CStoreSendRequestResultVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CServices__CStore__CStoreUninstallStorePackageResult __FIAsyncOperationCompletedHandler_1_Windows__CServices__CStore__CStoreUninstallStorePackageResult;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CServices__CStore__CStoreUninstallStorePackageResult;
typedef interface __FIAsyncOperation_1_Windows__CServices__CStore__CStoreUninstallStorePackageResult __FIAsyncOperation_1_Windows__CServices__CStore__CStoreUninstallStorePackageResult;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CServices__CStore__CStoreUninstallStorePackageResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CServices__CStore__CStoreUninstallStorePackageResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CServices__CStore__CStoreUninstallStorePackageResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CServices__CStore__CStoreUninstallStorePackageResult * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CServices__CStore__CStoreUninstallStorePackageResult * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CServices__CStore__CStoreUninstallStorePackageResult *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CServices__CStore__CStoreUninstallStorePackageResultVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CServices__CStore__CStoreUninstallStorePackageResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CServices__CStore__CStoreUninstallStorePackageResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CServices__CStore__CStoreUninstallStorePackageResult __FIAsyncOperation_1_Windows__CServices__CStore__CStoreUninstallStorePackageResult;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CServices__CStore__CStoreUninstallStorePackageResult;
typedef struct __FIAsyncOperation_1_Windows__CServices__CStore__CStoreUninstallStorePackageResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CStore__CStoreUninstallStorePackageResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CStore__CStoreUninstallStorePackageResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CStore__CStoreUninstallStorePackageResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CStore__CStoreUninstallStorePackageResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CStore__CStoreUninstallStorePackageResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CStore__CStoreUninstallStorePackageResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CStore__CStoreUninstallStorePackageResult * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CServices__CStore__CStoreUninstallStorePackageResult *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CStore__CStoreUninstallStorePackageResult * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CServices__CStore__CStoreUninstallStorePackageResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CStore__CStoreUninstallStorePackageResult * This, __RPC__out __x_ABI_CWindows_CServices_CStore_CIStoreUninstallStorePackageResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CServices__CStore__CStoreUninstallStorePackageResultVtbl;
interface __FIAsyncOperation_1_Windows__CServices__CStore__CStoreUninstallStorePackageResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CServices__CStore__CStoreUninstallStorePackageResultVtbl *lpVtbl;
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
typedef interface __FITypedEventHandler_2_Windows__CServices__CStore__CStoreContext_IInspectable __FITypedEventHandler_2_Windows__CServices__CStore__CStoreContext_IInspectable;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CServices__CStore__CStoreContext_IInspectable;
typedef struct __FITypedEventHandler_2_Windows__CServices__CStore__CStoreContext_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CServices__CStore__CStoreContext_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CServices__CStore__CStoreContext_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CServices__CStore__CStoreContext_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CServices__CStore__CStoreContext_IInspectable * This, __RPC__in_opt __x_ABI_CWindows_CServices_CStore_CIStoreContext * sender, __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CServices__CStore__CStoreContext_IInspectableVtbl;
interface __FITypedEventHandler_2_Windows__CServices__CStore__CStoreContext_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CServices__CStore__CStoreContext_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CServices__CStore__CStorePackageLicense_IInspectable __FITypedEventHandler_2_Windows__CServices__CStore__CStorePackageLicense_IInspectable;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CServices__CStore__CStorePackageLicense_IInspectable;
typedef struct __FITypedEventHandler_2_Windows__CServices__CStore__CStorePackageLicense_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CServices__CStore__CStorePackageLicense_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CServices__CStore__CStorePackageLicense_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CServices__CStore__CStorePackageLicense_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CServices__CStore__CStorePackageLicense_IInspectable * This, __RPC__in_opt __x_ABI_CWindows_CServices_CStore_CIStorePackageLicense * sender, __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CServices__CStore__CStorePackageLicense_IInspectableVtbl;
interface __FITypedEventHandler_2_Windows__CServices__CStore__CStorePackageLicense_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CServices__CStore__CStorePackageLicense_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CServices__CStore__CStoreQueueItem_IInspectable __FITypedEventHandler_2_Windows__CServices__CStore__CStoreQueueItem_IInspectable;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CServices__CStore__CStoreQueueItem_IInspectable;
typedef struct __FITypedEventHandler_2_Windows__CServices__CStore__CStoreQueueItem_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CServices__CStore__CStoreQueueItem_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CServices__CStore__CStoreQueueItem_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CServices__CStore__CStoreQueueItem_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CServices__CStore__CStoreQueueItem_IInspectable * This, __RPC__in_opt __x_ABI_CWindows_CServices_CStore_CIStoreQueueItem * sender, __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CServices__CStore__CStoreQueueItem_IInspectableVtbl;
interface __FITypedEventHandler_2_Windows__CServices__CStore__CStoreQueueItem_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CServices__CStore__CStoreQueueItem_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CServices__CStore__CStoreQueueItem_Windows__CServices__CStore__CStoreQueueItemCompletedEventArgs __FITypedEventHandler_2_Windows__CServices__CStore__CStoreQueueItem_Windows__CServices__CStore__CStoreQueueItemCompletedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CServices__CStore__CStoreQueueItem_Windows__CServices__CStore__CStoreQueueItemCompletedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CServices__CStore__CStoreQueueItem_Windows__CServices__CStore__CStoreQueueItemCompletedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CServices__CStore__CStoreQueueItem_Windows__CServices__CStore__CStoreQueueItemCompletedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CServices__CStore__CStoreQueueItem_Windows__CServices__CStore__CStoreQueueItemCompletedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CServices__CStore__CStoreQueueItem_Windows__CServices__CStore__CStoreQueueItemCompletedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CServices__CStore__CStoreQueueItem_Windows__CServices__CStore__CStoreQueueItemCompletedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CServices_CStore_CIStoreQueueItem * sender, __RPC__in_opt __x_ABI_CWindows_CServices_CStore_CIStoreQueueItemCompletedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CServices__CStore__CStoreQueueItem_Windows__CServices__CStore__CStoreQueueItemCompletedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CServices__CStore__CStoreQueueItem_Windows__CServices__CStore__CStoreQueueItemCompletedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CServices__CStore__CStoreQueueItem_Windows__CServices__CStore__CStoreQueueItemCompletedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FIAsyncOperationCompletedHandler_1_HSTRING __FIAsyncOperationCompletedHandler_1_HSTRING;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_HSTRING;
typedef interface __FIAsyncOperation_1_HSTRING __FIAsyncOperation_1_HSTRING;
typedef struct __FIAsyncOperationCompletedHandler_1_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_HSTRING * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_HSTRING * This, __RPC__in_opt __FIAsyncOperation_1_HSTRING *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_HSTRINGVtbl;
interface __FIAsyncOperationCompletedHandler_1_HSTRING
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_HSTRINGVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_HSTRING __FIAsyncOperation_1_HSTRING;
EXTERN_C const IID IID___FIAsyncOperation_1_HSTRING;
typedef struct __FIAsyncOperation_1_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_HSTRING * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_HSTRING * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_HSTRING * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_HSTRING * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_HSTRING * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_HSTRING *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_HSTRING * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_HSTRING **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_HSTRING * This, __RPC__out HSTRING *results);
    END_INTERFACE
} __FIAsyncOperation_1_HSTRINGVtbl;
interface __FIAsyncOperation_1_HSTRING
{
    CONST_VTBL struct __FIAsyncOperation_1_HSTRINGVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_HSTRING __FIVectorView_1_HSTRING;
EXTERN_C const IID IID___FIVectorView_1_HSTRING;
typedef struct __FIVectorView_1_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_HSTRING * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_HSTRING * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_HSTRING * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_HSTRING * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_HSTRING * This,
                                                    unsigned int index,
                                                             __RPC__out HSTRING *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_HSTRING * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_HSTRING * This,
                       HSTRING item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_HSTRING * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) HSTRING *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_HSTRINGVtbl;
interface __FIVectorView_1_HSTRING
{
    CONST_VTBL struct __FIVectorView_1_HSTRINGVtbl *lpVtbl;
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
typedef interface __FIVector_1_HSTRING __FIVector_1_HSTRING;
EXTERN_C const IID IID___FIVector_1_HSTRING;
typedef struct __FIVector_1_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_HSTRING * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_HSTRING * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_HSTRING * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_HSTRING * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_HSTRING * This,
                   unsigned int index,
                            __RPC__deref_out_opt HSTRING *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_HSTRING * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_HSTRING * This, __RPC__deref_out_opt __FIVectorView_1_HSTRING **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_HSTRING * This,
                   __RPC__in HSTRING item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_HSTRING * This,
                   unsigned int index,
                   __RPC__in HSTRING item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_HSTRING * This,
                   unsigned int index,
                   __RPC__in HSTRING item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_HSTRING * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_HSTRING * This, __RPC__in HSTRING item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_HSTRING * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) HSTRING *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_HSTRING * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) HSTRING *value);
    END_INTERFACE
} __FIVector_1_HSTRINGVtbl;
interface __FIVector_1_HSTRING
{
    CONST_VTBL struct __FIVector_1_HSTRINGVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CApplicationModel_CIPackage __x_ABI_CWindows_CApplicationModel_CIPackage;
typedef struct __x_ABI_CWindows_CFoundation_CDateTime __x_ABI_CWindows_CFoundation_CDateTime;
typedef interface __x_ABI_CWindows_CFoundation_CIAsyncAction __x_ABI_CWindows_CFoundation_CIAsyncAction;
typedef interface __x_ABI_CWindows_CFoundation_CIClosable __x_ABI_CWindows_CFoundation_CIClosable;
typedef struct __x_ABI_CWindows_CFoundation_CTimeSpan __x_ABI_CWindows_CFoundation_CTimeSpan;
typedef interface __x_ABI_CWindows_CFoundation_CIUriRuntimeClass __x_ABI_CWindows_CFoundation_CIUriRuntimeClass;
typedef interface __x_ABI_CWindows_CSystem_CIUser __x_ABI_CWindows_CSystem_CIUser;
typedef enum __x_ABI_CWindows_CWeb_CHttp_CHttpStatusCode __x_ABI_CWindows_CWeb_CHttp_CHttpStatusCode;
typedef enum __x_ABI_CWindows_CServices_CStore_CStoreCanLicenseStatus __x_ABI_CWindows_CServices_CStore_CStoreCanLicenseStatus;
typedef enum __x_ABI_CWindows_CServices_CStore_CStoreConsumableStatus __x_ABI_CWindows_CServices_CStore_CStoreConsumableStatus;
typedef enum __x_ABI_CWindows_CServices_CStore_CStoreDurationUnit __x_ABI_CWindows_CServices_CStore_CStoreDurationUnit;
typedef enum __x_ABI_CWindows_CServices_CStore_CStorePackageUpdateState __x_ABI_CWindows_CServices_CStore_CStorePackageUpdateState;
typedef enum __x_ABI_CWindows_CServices_CStore_CStorePurchaseStatus __x_ABI_CWindows_CServices_CStore_CStorePurchaseStatus;
typedef enum __x_ABI_CWindows_CServices_CStore_CStoreQueueItemExtendedState __x_ABI_CWindows_CServices_CStore_CStoreQueueItemExtendedState;
typedef enum __x_ABI_CWindows_CServices_CStore_CStoreQueueItemKind __x_ABI_CWindows_CServices_CStore_CStoreQueueItemKind;
typedef enum __x_ABI_CWindows_CServices_CStore_CStoreQueueItemState __x_ABI_CWindows_CServices_CStore_CStoreQueueItemState;
typedef enum __x_ABI_CWindows_CServices_CStore_CStoreRateAndReviewStatus __x_ABI_CWindows_CServices_CStore_CStoreRateAndReviewStatus;
typedef enum __x_ABI_CWindows_CServices_CStore_CStoreUninstallStorePackageStatus __x_ABI_CWindows_CServices_CStore_CStoreUninstallStorePackageStatus;
typedef struct __x_ABI_CWindows_CServices_CStore_CStorePackageUpdateStatus __x_ABI_CWindows_CServices_CStore_CStorePackageUpdateStatus;
enum __x_ABI_CWindows_CServices_CStore_CStoreCanLicenseStatus
{
    StoreCanLicenseStatus_NotLicensableToUser = 0,
    StoreCanLicenseStatus_Licensable = 1,
    StoreCanLicenseStatus_LicenseActionNotApplicableToProduct = 2,
    StoreCanLicenseStatus_NetworkError = 3,
    StoreCanLicenseStatus_ServerError = 4,
};
enum __x_ABI_CWindows_CServices_CStore_CStoreConsumableStatus
{
    StoreConsumableStatus_Succeeded = 0,
    StoreConsumableStatus_InsufficentQuantity = 1,
    StoreConsumableStatus_NetworkError = 2,
    StoreConsumableStatus_ServerError = 3,
};
enum __x_ABI_CWindows_CServices_CStore_CStoreDurationUnit
{
    StoreDurationUnit_Minute = 0,
    StoreDurationUnit_Hour = 1,
    StoreDurationUnit_Day = 2,
    StoreDurationUnit_Week = 3,
    StoreDurationUnit_Month = 4,
    StoreDurationUnit_Year = 5,
};
enum __x_ABI_CWindows_CServices_CStore_CStorePackageUpdateState
{
    StorePackageUpdateState_Pending = 0,
    StorePackageUpdateState_Downloading = 1,
    StorePackageUpdateState_Deploying = 2,
    StorePackageUpdateState_Completed = 3,
    StorePackageUpdateState_Canceled = 4,
    StorePackageUpdateState_OtherError = 5,
    StorePackageUpdateState_ErrorLowBattery = 6,
    StorePackageUpdateState_ErrorWiFiRecommended = 7,
    StorePackageUpdateState_ErrorWiFiRequired = 8,
};
enum __x_ABI_CWindows_CServices_CStore_CStorePurchaseStatus
{
    StorePurchaseStatus_Succeeded = 0,
    StorePurchaseStatus_AlreadyPurchased = 1,
    StorePurchaseStatus_NotPurchased = 2,
    StorePurchaseStatus_NetworkError = 3,
    StorePurchaseStatus_ServerError = 4,
};
enum __x_ABI_CWindows_CServices_CStore_CStoreQueueItemExtendedState
{
    StoreQueueItemExtendedState_ActivePending = 0,
    StoreQueueItemExtendedState_ActiveStarting = 1,
    StoreQueueItemExtendedState_ActiveAcquiringLicense = 2,
    StoreQueueItemExtendedState_ActiveDownloading = 3,
    StoreQueueItemExtendedState_ActiveRestoringData = 4,
    StoreQueueItemExtendedState_ActiveInstalling = 5,
    StoreQueueItemExtendedState_Completed = 6,
    StoreQueueItemExtendedState_Canceled = 7,
    StoreQueueItemExtendedState_Paused = 8,
    StoreQueueItemExtendedState_Error = 9,
    StoreQueueItemExtendedState_PausedPackagesInUse = 10,
    StoreQueueItemExtendedState_PausedLowBattery = 11,
    StoreQueueItemExtendedState_PausedWiFiRecommended = 12,
    StoreQueueItemExtendedState_PausedWiFiRequired = 13,
    StoreQueueItemExtendedState_PausedReadyToInstall = 14,
};
enum __x_ABI_CWindows_CServices_CStore_CStoreQueueItemKind
{
    StoreQueueItemKind_Install = 0,
    StoreQueueItemKind_Update = 1,
    StoreQueueItemKind_Repair = 2,
};
enum __x_ABI_CWindows_CServices_CStore_CStoreQueueItemState
{
    StoreQueueItemState_Active = 0,
    StoreQueueItemState_Completed = 1,
    StoreQueueItemState_Canceled = 2,
    StoreQueueItemState_Error = 3,
    StoreQueueItemState_Paused = 4,
};
enum __x_ABI_CWindows_CServices_CStore_CStoreRateAndReviewStatus
{
    StoreRateAndReviewStatus_Succeeded = 0,
    StoreRateAndReviewStatus_CanceledByUser = 1,
    StoreRateAndReviewStatus_NetworkError = 2,
    StoreRateAndReviewStatus_Error = 3,
};
enum __x_ABI_CWindows_CServices_CStore_CStoreUninstallStorePackageStatus
{
    StoreUninstallStorePackageStatus_Succeeded = 0,
    StoreUninstallStorePackageStatus_CanceledByUser = 1,
    StoreUninstallStorePackageStatus_NetworkError = 2,
    StoreUninstallStorePackageStatus_UninstallNotApplicable = 3,
    StoreUninstallStorePackageStatus_Error = 4,
};
struct __x_ABI_CWindows_CServices_CStore_CStorePackageUpdateStatus
{
    HSTRING PackageFamilyName;
    UINT64 PackageDownloadSizeInBytes;
    UINT64 PackageBytesDownloaded;
    DOUBLE PackageDownloadProgress;
    DOUBLE TotalDownloadProgress;
    __x_ABI_CWindows_CServices_CStore_CStorePackageUpdateState PackageUpdateState;
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Store_IStoreAcquireLicenseResult[] = L"Windows.Services.Store.IStoreAcquireLicenseResult";
typedef struct __x_ABI_CWindows_CServices_CStore_CIStoreAcquireLicenseResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreAcquireLicenseResult * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreAcquireLicenseResult * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreAcquireLicenseResult * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreAcquireLicenseResult * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreAcquireLicenseResult * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreAcquireLicenseResult * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_StorePackageLicense )(
        __x_ABI_CWindows_CServices_CStore_CIStoreAcquireLicenseResult * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CServices_CStore_CIStorePackageLicense * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ExtendedError )(
        __x_ABI_CWindows_CServices_CStore_CIStoreAcquireLicenseResult * This,
                           __RPC__out HRESULT * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CServices_CStore_CIStoreAcquireLicenseResultVtbl;
interface __x_ABI_CWindows_CServices_CStore_CIStoreAcquireLicenseResult
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CStore_CIStoreAcquireLicenseResultVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_StorePackageLicense(This,value) )
    ( (This)->lpVtbl->get_ExtendedError(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CServices_CStore_CIStoreAcquireLicenseResult;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Store_IStoreAppLicense[] = L"Windows.Services.Store.IStoreAppLicense";
typedef struct __x_ABI_CWindows_CServices_CStore_CIStoreAppLicenseVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreAppLicense * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreAppLicense * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreAppLicense * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreAppLicense * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreAppLicense * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreAppLicense * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_SkuStoreId )(
        __x_ABI_CWindows_CServices_CStore_CIStoreAppLicense * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsActive )(
        __x_ABI_CWindows_CServices_CStore_CIStoreAppLicense * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsTrial )(
        __x_ABI_CWindows_CServices_CStore_CIStoreAppLicense * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ExpirationDate )(
        __x_ABI_CWindows_CServices_CStore_CIStoreAppLicense * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ExtendedJsonData )(
        __x_ABI_CWindows_CServices_CStore_CIStoreAppLicense * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AddOnLicenses )(
        __x_ABI_CWindows_CServices_CStore_CIStoreAppLicense * This,
                           __RPC__deref_out_opt __FIMapView_2_HSTRING_Windows__CServices__CStore__CStoreLicense * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TrialTimeRemaining )(
        __x_ABI_CWindows_CServices_CStore_CIStoreAppLicense * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsTrialOwnedByThisUser )(
        __x_ABI_CWindows_CServices_CStore_CIStoreAppLicense * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TrialUniqueId )(
        __x_ABI_CWindows_CServices_CStore_CIStoreAppLicense * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CServices_CStore_CIStoreAppLicenseVtbl;
interface __x_ABI_CWindows_CServices_CStore_CIStoreAppLicense
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CStore_CIStoreAppLicenseVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_SkuStoreId(This,value) )
    ( (This)->lpVtbl->get_IsActive(This,value) )
    ( (This)->lpVtbl->get_IsTrial(This,value) )
    ( (This)->lpVtbl->get_ExpirationDate(This,value) )
    ( (This)->lpVtbl->get_ExtendedJsonData(This,value) )
    ( (This)->lpVtbl->get_AddOnLicenses(This,value) )
    ( (This)->lpVtbl->get_TrialTimeRemaining(This,value) )
    ( (This)->lpVtbl->get_IsTrialOwnedByThisUser(This,value) )
    ( (This)->lpVtbl->get_TrialUniqueId(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CServices_CStore_CIStoreAppLicense;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Store_IStoreAppLicense2[] = L"Windows.Services.Store.IStoreAppLicense2";
typedef struct __x_ABI_CWindows_CServices_CStore_CIStoreAppLicense2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreAppLicense2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreAppLicense2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreAppLicense2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreAppLicense2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreAppLicense2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreAppLicense2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsDiscLicense )(
        __x_ABI_CWindows_CServices_CStore_CIStoreAppLicense2 * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CServices_CStore_CIStoreAppLicense2Vtbl;
interface __x_ABI_CWindows_CServices_CStore_CIStoreAppLicense2
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CStore_CIStoreAppLicense2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsDiscLicense(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CServices_CStore_CIStoreAppLicense2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Store_IStoreAvailability[] = L"Windows.Services.Store.IStoreAvailability";
typedef struct __x_ABI_CWindows_CServices_CStore_CIStoreAvailabilityVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreAvailability * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreAvailability * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreAvailability * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreAvailability * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreAvailability * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreAvailability * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_StoreId )(
        __x_ABI_CWindows_CServices_CStore_CIStoreAvailability * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_EndDate )(
        __x_ABI_CWindows_CServices_CStore_CIStoreAvailability * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Price )(
        __x_ABI_CWindows_CServices_CStore_CIStoreAvailability * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CServices_CStore_CIStorePrice * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ExtendedJsonData )(
        __x_ABI_CWindows_CServices_CStore_CIStoreAvailability * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                    HRESULT ( STDMETHODCALLTYPE *RequestPurchaseAsync )(
        __x_ABI_CWindows_CServices_CStore_CIStoreAvailability * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CServices__CStore__CStorePurchaseResult * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *RequestPurchaseWithPurchasePropertiesAsync )(
        __x_ABI_CWindows_CServices_CStore_CIStoreAvailability * This,
                  __RPC__in_opt __x_ABI_CWindows_CServices_CStore_CIStorePurchaseProperties * storePurchaseProperties,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CServices__CStore__CStorePurchaseResult * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CServices_CStore_CIStoreAvailabilityVtbl;
interface __x_ABI_CWindows_CServices_CStore_CIStoreAvailability
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CStore_CIStoreAvailabilityVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_StoreId(This,value) )
    ( (This)->lpVtbl->get_EndDate(This,value) )
    ( (This)->lpVtbl->get_Price(This,value) )
    ( (This)->lpVtbl->get_ExtendedJsonData(This,value) )
    ( (This)->lpVtbl->RequestPurchaseAsync(This,operation) )
    ( (This)->lpVtbl->RequestPurchaseWithPurchasePropertiesAsync(This,storePurchaseProperties,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CServices_CStore_CIStoreAvailability;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Store_IStoreCanAcquireLicenseResult[] = L"Windows.Services.Store.IStoreCanAcquireLicenseResult";
typedef struct __x_ABI_CWindows_CServices_CStore_CIStoreCanAcquireLicenseResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreCanAcquireLicenseResult * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreCanAcquireLicenseResult * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreCanAcquireLicenseResult * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreCanAcquireLicenseResult * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreCanAcquireLicenseResult * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreCanAcquireLicenseResult * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ExtendedError )(
        __x_ABI_CWindows_CServices_CStore_CIStoreCanAcquireLicenseResult * This,
                           __RPC__out HRESULT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LicensableSku )(
        __x_ABI_CWindows_CServices_CStore_CIStoreCanAcquireLicenseResult * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CServices_CStore_CIStoreCanAcquireLicenseResult * This,
                           __RPC__out __x_ABI_CWindows_CServices_CStore_CStoreCanLicenseStatus * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CServices_CStore_CIStoreCanAcquireLicenseResultVtbl;
interface __x_ABI_CWindows_CServices_CStore_CIStoreCanAcquireLicenseResult
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CStore_CIStoreCanAcquireLicenseResultVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ExtendedError(This,value) )
    ( (This)->lpVtbl->get_LicensableSku(This,value) )
    ( (This)->lpVtbl->get_Status(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CServices_CStore_CIStoreCanAcquireLicenseResult;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Store_IStoreCollectionData[] = L"Windows.Services.Store.IStoreCollectionData";
typedef struct __x_ABI_CWindows_CServices_CStore_CIStoreCollectionDataVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreCollectionData * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreCollectionData * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreCollectionData * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreCollectionData * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreCollectionData * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreCollectionData * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsTrial )(
        __x_ABI_CWindows_CServices_CStore_CIStoreCollectionData * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CampaignId )(
        __x_ABI_CWindows_CServices_CStore_CIStoreCollectionData * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DeveloperOfferId )(
        __x_ABI_CWindows_CServices_CStore_CIStoreCollectionData * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AcquiredDate )(
        __x_ABI_CWindows_CServices_CStore_CIStoreCollectionData * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_StartDate )(
        __x_ABI_CWindows_CServices_CStore_CIStoreCollectionData * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_EndDate )(
        __x_ABI_CWindows_CServices_CStore_CIStoreCollectionData * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TrialTimeRemaining )(
        __x_ABI_CWindows_CServices_CStore_CIStoreCollectionData * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ExtendedJsonData )(
        __x_ABI_CWindows_CServices_CStore_CIStoreCollectionData * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CServices_CStore_CIStoreCollectionDataVtbl;
interface __x_ABI_CWindows_CServices_CStore_CIStoreCollectionData
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CStore_CIStoreCollectionDataVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsTrial(This,value) )
    ( (This)->lpVtbl->get_CampaignId(This,value) )
    ( (This)->lpVtbl->get_DeveloperOfferId(This,value) )
    ( (This)->lpVtbl->get_AcquiredDate(This,value) )
    ( (This)->lpVtbl->get_StartDate(This,value) )
    ( (This)->lpVtbl->get_EndDate(This,value) )
    ( (This)->lpVtbl->get_TrialTimeRemaining(This,value) )
    ( (This)->lpVtbl->get_ExtendedJsonData(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CServices_CStore_CIStoreCollectionData;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Store_IStoreConsumableResult[] = L"Windows.Services.Store.IStoreConsumableResult";
typedef struct __x_ABI_CWindows_CServices_CStore_CIStoreConsumableResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreConsumableResult * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreConsumableResult * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreConsumableResult * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreConsumableResult * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreConsumableResult * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreConsumableResult * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CServices_CStore_CIStoreConsumableResult * This,
                           __RPC__out __x_ABI_CWindows_CServices_CStore_CStoreConsumableStatus * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TrackingId )(
        __x_ABI_CWindows_CServices_CStore_CIStoreConsumableResult * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BalanceRemaining )(
        __x_ABI_CWindows_CServices_CStore_CIStoreConsumableResult * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ExtendedError )(
        __x_ABI_CWindows_CServices_CStore_CIStoreConsumableResult * This,
                           __RPC__out HRESULT * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CServices_CStore_CIStoreConsumableResultVtbl;
interface __x_ABI_CWindows_CServices_CStore_CIStoreConsumableResult
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CStore_CIStoreConsumableResultVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Status(This,value) )
    ( (This)->lpVtbl->get_TrackingId(This,value) )
    ( (This)->lpVtbl->get_BalanceRemaining(This,value) )
    ( (This)->lpVtbl->get_ExtendedError(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CServices_CStore_CIStoreConsumableResult;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Store_IStoreContext[] = L"Windows.Services.Store.IStoreContext";
typedef struct __x_ABI_CWindows_CServices_CStore_CIStoreContextVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreContext * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreContext * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreContext * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreContext * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreContext * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreContext * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_User )(
        __x_ABI_CWindows_CServices_CStore_CIStoreContext * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CIUser * * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_OfflineLicensesChanged )(
        __x_ABI_CWindows_CServices_CStore_CIStoreContext * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CServices__CStore__CStoreContext_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_OfflineLicensesChanged )(
        __x_ABI_CWindows_CServices_CStore_CIStoreContext * This,
                  EventRegistrationToken token
        );
    HRESULT ( STDMETHODCALLTYPE *GetCustomerPurchaseIdAsync )(
        __x_ABI_CWindows_CServices_CStore_CIStoreContext * This,
                  __RPC__in HSTRING serviceTicket,
                  __RPC__in HSTRING publisherUserId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *GetCustomerCollectionsIdAsync )(
        __x_ABI_CWindows_CServices_CStore_CIStoreContext * This,
                  __RPC__in HSTRING serviceTicket,
                  __RPC__in HSTRING publisherUserId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *GetAppLicenseAsync )(
        __x_ABI_CWindows_CServices_CStore_CIStoreContext * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CServices__CStore__CStoreAppLicense * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *GetStoreProductForCurrentAppAsync )(
        __x_ABI_CWindows_CServices_CStore_CIStoreContext * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CServices__CStore__CStoreProductResult * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *GetStoreProductsAsync )(
        __x_ABI_CWindows_CServices_CStore_CIStoreContext * This,
                  __RPC__in_opt __FIIterable_1_HSTRING * productKinds,
                  __RPC__in_opt __FIIterable_1_HSTRING * storeIds,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CServices__CStore__CStoreProductQueryResult * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *GetAssociatedStoreProductsAsync )(
        __x_ABI_CWindows_CServices_CStore_CIStoreContext * This,
                  __RPC__in_opt __FIIterable_1_HSTRING * productKinds,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CServices__CStore__CStoreProductQueryResult * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *GetAssociatedStoreProductsWithPagingAsync )(
        __x_ABI_CWindows_CServices_CStore_CIStoreContext * This,
                  __RPC__in_opt __FIIterable_1_HSTRING * productKinds,
                  UINT32 maxItemsToRetrievePerPage,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CServices__CStore__CStoreProductPagedQueryResult * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *GetUserCollectionAsync )(
        __x_ABI_CWindows_CServices_CStore_CIStoreContext * This,
                  __RPC__in_opt __FIIterable_1_HSTRING * productKinds,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CServices__CStore__CStoreProductQueryResult * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *GetUserCollectionWithPagingAsync )(
        __x_ABI_CWindows_CServices_CStore_CIStoreContext * This,
                  __RPC__in_opt __FIIterable_1_HSTRING * productKinds,
                  UINT32 maxItemsToRetrievePerPage,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CServices__CStore__CStoreProductPagedQueryResult * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *ReportConsumableFulfillmentAsync )(
        __x_ABI_CWindows_CServices_CStore_CIStoreContext * This,
                  __RPC__in HSTRING productStoreId,
                  UINT32 quantity,
                  GUID trackingId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CServices__CStore__CStoreConsumableResult * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *GetConsumableBalanceRemainingAsync )(
        __x_ABI_CWindows_CServices_CStore_CIStoreContext * This,
                  __RPC__in HSTRING productStoreId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CServices__CStore__CStoreConsumableResult * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *AcquireStoreLicenseForOptionalPackageAsync )(
        __x_ABI_CWindows_CServices_CStore_CIStoreContext * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CIPackage * optionalPackage,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CServices__CStore__CStoreAcquireLicenseResult * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *RequestPurchaseAsync )(
        __x_ABI_CWindows_CServices_CStore_CIStoreContext * This,
                  __RPC__in HSTRING storeId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CServices__CStore__CStorePurchaseResult * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *RequestPurchaseWithPurchasePropertiesAsync )(
        __x_ABI_CWindows_CServices_CStore_CIStoreContext * This,
                  __RPC__in HSTRING storeId,
                  __RPC__in_opt __x_ABI_CWindows_CServices_CStore_CIStorePurchaseProperties * storePurchaseProperties,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CServices__CStore__CStorePurchaseResult * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *GetAppAndOptionalStorePackageUpdatesAsync )(
        __x_ABI_CWindows_CServices_CStore_CIStoreContext * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CServices__CStore__CStorePackageUpdate * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *RequestDownloadStorePackageUpdatesAsync )(
        __x_ABI_CWindows_CServices_CStore_CIStoreContext * This,
                  __RPC__in_opt __FIIterable_1_Windows__CServices__CStore__CStorePackageUpdate * storePackageUpdates,
                           __RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CServices__CStore__CStorePackageUpdateResult_Windows__CServices__CStore__CStorePackageUpdateStatus * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *RequestDownloadAndInstallStorePackageUpdatesAsync )(
        __x_ABI_CWindows_CServices_CStore_CIStoreContext * This,
                  __RPC__in_opt __FIIterable_1_Windows__CServices__CStore__CStorePackageUpdate * storePackageUpdates,
                           __RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CServices__CStore__CStorePackageUpdateResult_Windows__CServices__CStore__CStorePackageUpdateStatus * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *RequestDownloadAndInstallStorePackagesAsync )(
        __x_ABI_CWindows_CServices_CStore_CIStoreContext * This,
                  __RPC__in_opt __FIIterable_1_HSTRING * storeIds,
                           __RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CServices__CStore__CStorePackageUpdateResult_Windows__CServices__CStore__CStorePackageUpdateStatus * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CServices_CStore_CIStoreContextVtbl;
interface __x_ABI_CWindows_CServices_CStore_CIStoreContext
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CStore_CIStoreContextVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_User(This,value) )
    ( (This)->lpVtbl->add_OfflineLicensesChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_OfflineLicensesChanged(This,token) )
    ( (This)->lpVtbl->GetCustomerPurchaseIdAsync(This,serviceTicket,publisherUserId,operation) )
    ( (This)->lpVtbl->GetCustomerCollectionsIdAsync(This,serviceTicket,publisherUserId,operation) )
    ( (This)->lpVtbl->GetAppLicenseAsync(This,operation) )
    ( (This)->lpVtbl->GetStoreProductForCurrentAppAsync(This,operation) )
    ( (This)->lpVtbl->GetStoreProductsAsync(This,productKinds,storeIds,operation) )
    ( (This)->lpVtbl->GetAssociatedStoreProductsAsync(This,productKinds,operation) )
    ( (This)->lpVtbl->GetAssociatedStoreProductsWithPagingAsync(This,productKinds,maxItemsToRetrievePerPage,operation) )
    ( (This)->lpVtbl->GetUserCollectionAsync(This,productKinds,operation) )
    ( (This)->lpVtbl->GetUserCollectionWithPagingAsync(This,productKinds,maxItemsToRetrievePerPage,operation) )
    ( (This)->lpVtbl->ReportConsumableFulfillmentAsync(This,productStoreId,quantity,trackingId,operation) )
    ( (This)->lpVtbl->GetConsumableBalanceRemainingAsync(This,productStoreId,operation) )
    ( (This)->lpVtbl->AcquireStoreLicenseForOptionalPackageAsync(This,optionalPackage,operation) )
    ( (This)->lpVtbl->RequestPurchaseAsync(This,storeId,operation) )
    ( (This)->lpVtbl->RequestPurchaseWithPurchasePropertiesAsync(This,storeId,storePurchaseProperties,operation) )
    ( (This)->lpVtbl->GetAppAndOptionalStorePackageUpdatesAsync(This,operation) )
    ( (This)->lpVtbl->RequestDownloadStorePackageUpdatesAsync(This,storePackageUpdates,operation) )
    ( (This)->lpVtbl->RequestDownloadAndInstallStorePackageUpdatesAsync(This,storePackageUpdates,operation) )
    ( (This)->lpVtbl->RequestDownloadAndInstallStorePackagesAsync(This,storeIds,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CServices_CStore_CIStoreContext;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Store_IStoreContext2[] = L"Windows.Services.Store.IStoreContext2";
typedef struct __x_ABI_CWindows_CServices_CStore_CIStoreContext2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreContext2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreContext2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreContext2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreContext2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreContext2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreContext2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *FindStoreProductForPackageAsync )(
        __x_ABI_CWindows_CServices_CStore_CIStoreContext2 * This,
                  __RPC__in_opt __FIIterable_1_HSTRING * productKinds,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CIPackage * package,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CServices__CStore__CStoreProductResult * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CServices_CStore_CIStoreContext2Vtbl;
interface __x_ABI_CWindows_CServices_CStore_CIStoreContext2
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CStore_CIStoreContext2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->FindStoreProductForPackageAsync(This,productKinds,package,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CServices_CStore_CIStoreContext2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Store_IStoreContext3[] = L"Windows.Services.Store.IStoreContext3";
typedef struct __x_ABI_CWindows_CServices_CStore_CIStoreContext3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreContext3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreContext3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreContext3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreContext3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreContext3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreContext3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_CanSilentlyDownloadStorePackageUpdates )(
        __x_ABI_CWindows_CServices_CStore_CIStoreContext3 * This,
                           __RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *TrySilentDownloadStorePackageUpdatesAsync )(
        __x_ABI_CWindows_CServices_CStore_CIStoreContext3 * This,
                  __RPC__in_opt __FIIterable_1_Windows__CServices__CStore__CStorePackageUpdate * storePackageUpdates,
                           __RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CServices__CStore__CStorePackageUpdateResult_Windows__CServices__CStore__CStorePackageUpdateStatus * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *TrySilentDownloadAndInstallStorePackageUpdatesAsync )(
        __x_ABI_CWindows_CServices_CStore_CIStoreContext3 * This,
                  __RPC__in_opt __FIIterable_1_Windows__CServices__CStore__CStorePackageUpdate * storePackageUpdates,
                           __RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CServices__CStore__CStorePackageUpdateResult_Windows__CServices__CStore__CStorePackageUpdateStatus * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *CanAcquireStoreLicenseForOptionalPackageAsync )(
        __x_ABI_CWindows_CServices_CStore_CIStoreContext3 * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CIPackage * optionalPackage,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CServices__CStore__CStoreCanAcquireLicenseResult * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *CanAcquireStoreLicenseAsync )(
        __x_ABI_CWindows_CServices_CStore_CIStoreContext3 * This,
                  __RPC__in HSTRING productStoreId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CServices__CStore__CStoreCanAcquireLicenseResult * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *GetStoreProductsWithOptionsAsync )(
        __x_ABI_CWindows_CServices_CStore_CIStoreContext3 * This,
                  __RPC__in_opt __FIIterable_1_HSTRING * productKinds,
                  __RPC__in_opt __FIIterable_1_HSTRING * storeIds,
                  __RPC__in_opt __x_ABI_CWindows_CServices_CStore_CIStoreProductOptions * storeProductOptions,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CServices__CStore__CStoreProductQueryResult * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *GetAssociatedStoreQueueItemsAsync )(
        __x_ABI_CWindows_CServices_CStore_CIStoreContext3 * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CServices__CStore__CStoreQueueItem * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *GetStoreQueueItemsAsync )(
        __x_ABI_CWindows_CServices_CStore_CIStoreContext3 * This,
                  __RPC__in_opt __FIIterable_1_HSTRING * storeIds,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CServices__CStore__CStoreQueueItem * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *RequestDownloadAndInstallStorePackagesWithInstallOptionsAsync )(
        __x_ABI_CWindows_CServices_CStore_CIStoreContext3 * This,
                  __RPC__in_opt __FIIterable_1_HSTRING * storeIds,
                  __RPC__in_opt __x_ABI_CWindows_CServices_CStore_CIStorePackageInstallOptions * storePackageInstallOptions,
                           __RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CServices__CStore__CStorePackageUpdateResult_Windows__CServices__CStore__CStorePackageUpdateStatus * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *DownloadAndInstallStorePackagesAsync )(
        __x_ABI_CWindows_CServices_CStore_CIStoreContext3 * This,
                  __RPC__in_opt __FIIterable_1_HSTRING * storeIds,
                           __RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CServices__CStore__CStorePackageUpdateResult_Windows__CServices__CStore__CStorePackageUpdateStatus * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *RequestUninstallStorePackageAsync )(
        __x_ABI_CWindows_CServices_CStore_CIStoreContext3 * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CIPackage * package,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CServices__CStore__CStoreUninstallStorePackageResult * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *RequestUninstallStorePackageByStoreIdAsync )(
        __x_ABI_CWindows_CServices_CStore_CIStoreContext3 * This,
                  __RPC__in HSTRING storeId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CServices__CStore__CStoreUninstallStorePackageResult * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *UninstallStorePackageAsync )(
        __x_ABI_CWindows_CServices_CStore_CIStoreContext3 * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CIPackage * package,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CServices__CStore__CStoreUninstallStorePackageResult * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *UninstallStorePackageByStoreIdAsync )(
        __x_ABI_CWindows_CServices_CStore_CIStoreContext3 * This,
                  __RPC__in HSTRING storeId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CServices__CStore__CStoreUninstallStorePackageResult * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CServices_CStore_CIStoreContext3Vtbl;
interface __x_ABI_CWindows_CServices_CStore_CIStoreContext3
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CStore_CIStoreContext3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_CanSilentlyDownloadStorePackageUpdates(This,value) )
    ( (This)->lpVtbl->TrySilentDownloadStorePackageUpdatesAsync(This,storePackageUpdates,operation) )
    ( (This)->lpVtbl->TrySilentDownloadAndInstallStorePackageUpdatesAsync(This,storePackageUpdates,operation) )
    ( (This)->lpVtbl->CanAcquireStoreLicenseForOptionalPackageAsync(This,optionalPackage,operation) )
    ( (This)->lpVtbl->CanAcquireStoreLicenseAsync(This,productStoreId,operation) )
    ( (This)->lpVtbl->GetStoreProductsWithOptionsAsync(This,productKinds,storeIds,storeProductOptions,operation) )
    ( (This)->lpVtbl->GetAssociatedStoreQueueItemsAsync(This,operation) )
    ( (This)->lpVtbl->GetStoreQueueItemsAsync(This,storeIds,operation) )
    ( (This)->lpVtbl->RequestDownloadAndInstallStorePackagesWithInstallOptionsAsync(This,storeIds,storePackageInstallOptions,operation) )
    ( (This)->lpVtbl->DownloadAndInstallStorePackagesAsync(This,storeIds,operation) )
    ( (This)->lpVtbl->RequestUninstallStorePackageAsync(This,package,operation) )
    ( (This)->lpVtbl->RequestUninstallStorePackageByStoreIdAsync(This,storeId,operation) )
    ( (This)->lpVtbl->UninstallStorePackageAsync(This,package,operation) )
    ( (This)->lpVtbl->UninstallStorePackageByStoreIdAsync(This,storeId,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CServices_CStore_CIStoreContext3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Store_IStoreContext4[] = L"Windows.Services.Store.IStoreContext4";
typedef struct __x_ABI_CWindows_CServices_CStore_CIStoreContext4Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreContext4 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreContext4 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreContext4 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreContext4 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreContext4 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreContext4 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *RequestRateAndReviewAppAsync )(
        __x_ABI_CWindows_CServices_CStore_CIStoreContext4 * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CServices__CStore__CStoreRateAndReviewResult * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *SetInstallOrderForAssociatedStoreQueueItemsAsync )(
        __x_ABI_CWindows_CServices_CStore_CIStoreContext4 * This,
                  __RPC__in_opt __FIIterable_1_Windows__CServices__CStore__CStoreQueueItem * items,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CServices__CStore__CStoreQueueItem * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CServices_CStore_CIStoreContext4Vtbl;
interface __x_ABI_CWindows_CServices_CStore_CIStoreContext4
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CStore_CIStoreContext4Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->RequestRateAndReviewAppAsync(This,operation) )
    ( (This)->lpVtbl->SetInstallOrderForAssociatedStoreQueueItemsAsync(This,items,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CServices_CStore_CIStoreContext4;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Store_IStoreContextStatics[] = L"Windows.Services.Store.IStoreContextStatics";
typedef struct __x_ABI_CWindows_CServices_CStore_CIStoreContextStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreContextStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreContextStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreContextStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreContextStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreContextStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreContextStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetDefault )(
        __x_ABI_CWindows_CServices_CStore_CIStoreContextStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CServices_CStore_CIStoreContext * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetForUser )(
        __x_ABI_CWindows_CServices_CStore_CIStoreContextStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CSystem_CIUser * user,
                           __RPC__deref_out_opt __x_ABI_CWindows_CServices_CStore_CIStoreContext * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CServices_CStore_CIStoreContextStaticsVtbl;
interface __x_ABI_CWindows_CServices_CStore_CIStoreContextStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CStore_CIStoreContextStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetDefault(This,value) )
    ( (This)->lpVtbl->GetForUser(This,user,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CServices_CStore_CIStoreContextStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Store_IStoreImage[] = L"Windows.Services.Store.IStoreImage";
typedef struct __x_ABI_CWindows_CServices_CStore_CIStoreImageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreImage * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreImage * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreImage * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreImage * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreImage * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreImage * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Uri )(
        __x_ABI_CWindows_CServices_CStore_CIStoreImage * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ImagePurposeTag )(
        __x_ABI_CWindows_CServices_CStore_CIStoreImage * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Width )(
        __x_ABI_CWindows_CServices_CStore_CIStoreImage * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Height )(
        __x_ABI_CWindows_CServices_CStore_CIStoreImage * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Caption )(
        __x_ABI_CWindows_CServices_CStore_CIStoreImage * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CServices_CStore_CIStoreImageVtbl;
interface __x_ABI_CWindows_CServices_CStore_CIStoreImage
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CStore_CIStoreImageVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Uri(This,value) )
    ( (This)->lpVtbl->get_ImagePurposeTag(This,value) )
    ( (This)->lpVtbl->get_Width(This,value) )
    ( (This)->lpVtbl->get_Height(This,value) )
    ( (This)->lpVtbl->get_Caption(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CServices_CStore_CIStoreImage;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Store_IStoreLicense[] = L"Windows.Services.Store.IStoreLicense";
typedef struct __x_ABI_CWindows_CServices_CStore_CIStoreLicenseVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreLicense * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreLicense * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreLicense * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreLicense * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreLicense * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreLicense * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_SkuStoreId )(
        __x_ABI_CWindows_CServices_CStore_CIStoreLicense * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsActive )(
        __x_ABI_CWindows_CServices_CStore_CIStoreLicense * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ExpirationDate )(
        __x_ABI_CWindows_CServices_CStore_CIStoreLicense * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ExtendedJsonData )(
        __x_ABI_CWindows_CServices_CStore_CIStoreLicense * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_InAppOfferToken )(
        __x_ABI_CWindows_CServices_CStore_CIStoreLicense * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CServices_CStore_CIStoreLicenseVtbl;
interface __x_ABI_CWindows_CServices_CStore_CIStoreLicense
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CStore_CIStoreLicenseVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_SkuStoreId(This,value) )
    ( (This)->lpVtbl->get_IsActive(This,value) )
    ( (This)->lpVtbl->get_ExpirationDate(This,value) )
    ( (This)->lpVtbl->get_ExtendedJsonData(This,value) )
    ( (This)->lpVtbl->get_InAppOfferToken(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CServices_CStore_CIStoreLicense;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Store_IStorePackageInstallOptions[] = L"Windows.Services.Store.IStorePackageInstallOptions";
typedef struct __x_ABI_CWindows_CServices_CStore_CIStorePackageInstallOptionsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStorePackageInstallOptions * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStorePackageInstallOptions * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStorePackageInstallOptions * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStorePackageInstallOptions * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStorePackageInstallOptions * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStorePackageInstallOptions * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AllowForcedAppRestart )(
        __x_ABI_CWindows_CServices_CStore_CIStorePackageInstallOptions * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AllowForcedAppRestart )(
        __x_ABI_CWindows_CServices_CStore_CIStorePackageInstallOptions * This,
                  boolean value
        );
    END_INTERFACE
} __x_ABI_CWindows_CServices_CStore_CIStorePackageInstallOptionsVtbl;
interface __x_ABI_CWindows_CServices_CStore_CIStorePackageInstallOptions
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CStore_CIStorePackageInstallOptionsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AllowForcedAppRestart(This,value) )
    ( (This)->lpVtbl->put_AllowForcedAppRestart(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CServices_CStore_CIStorePackageInstallOptions;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Store_IStorePackageLicense[] = L"Windows.Services.Store.IStorePackageLicense";
typedef struct __x_ABI_CWindows_CServices_CStore_CIStorePackageLicenseVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStorePackageLicense * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStorePackageLicense * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStorePackageLicense * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStorePackageLicense * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStorePackageLicense * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStorePackageLicense * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_LicenseLost )(
        __x_ABI_CWindows_CServices_CStore_CIStorePackageLicense * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CServices__CStore__CStorePackageLicense_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_LicenseLost )(
        __x_ABI_CWindows_CServices_CStore_CIStorePackageLicense * This,
                  EventRegistrationToken token
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Package )(
        __x_ABI_CWindows_CServices_CStore_CIStorePackageLicense * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CIPackage * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsValid )(
        __x_ABI_CWindows_CServices_CStore_CIStorePackageLicense * This,
                           __RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *ReleaseLicense )(
        __x_ABI_CWindows_CServices_CStore_CIStorePackageLicense * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CServices_CStore_CIStorePackageLicenseVtbl;
interface __x_ABI_CWindows_CServices_CStore_CIStorePackageLicense
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CStore_CIStorePackageLicenseVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_LicenseLost(This,handler,token) )
    ( (This)->lpVtbl->remove_LicenseLost(This,token) )
    ( (This)->lpVtbl->get_Package(This,value) )
    ( (This)->lpVtbl->get_IsValid(This,value) )
    ( (This)->lpVtbl->ReleaseLicense(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CServices_CStore_CIStorePackageLicense;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Store_IStorePackageUpdate[] = L"Windows.Services.Store.IStorePackageUpdate";
typedef struct __x_ABI_CWindows_CServices_CStore_CIStorePackageUpdateVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStorePackageUpdate * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStorePackageUpdate * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStorePackageUpdate * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStorePackageUpdate * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStorePackageUpdate * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStorePackageUpdate * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Package )(
        __x_ABI_CWindows_CServices_CStore_CIStorePackageUpdate * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CIPackage * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Mandatory )(
        __x_ABI_CWindows_CServices_CStore_CIStorePackageUpdate * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CServices_CStore_CIStorePackageUpdateVtbl;
interface __x_ABI_CWindows_CServices_CStore_CIStorePackageUpdate
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CStore_CIStorePackageUpdateVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Package(This,value) )
    ( (This)->lpVtbl->get_Mandatory(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CServices_CStore_CIStorePackageUpdate;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Store_IStorePackageUpdateResult[] = L"Windows.Services.Store.IStorePackageUpdateResult";
typedef struct __x_ABI_CWindows_CServices_CStore_CIStorePackageUpdateResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStorePackageUpdateResult * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStorePackageUpdateResult * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStorePackageUpdateResult * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStorePackageUpdateResult * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStorePackageUpdateResult * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStorePackageUpdateResult * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_OverallState )(
        __x_ABI_CWindows_CServices_CStore_CIStorePackageUpdateResult * This,
                           __RPC__out __x_ABI_CWindows_CServices_CStore_CStorePackageUpdateState * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_StorePackageUpdateStatuses )(
        __x_ABI_CWindows_CServices_CStore_CIStorePackageUpdateResult * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CServices__CStore__CStorePackageUpdateStatus * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CServices_CStore_CIStorePackageUpdateResultVtbl;
interface __x_ABI_CWindows_CServices_CStore_CIStorePackageUpdateResult
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CStore_CIStorePackageUpdateResultVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_OverallState(This,value) )
    ( (This)->lpVtbl->get_StorePackageUpdateStatuses(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CServices_CStore_CIStorePackageUpdateResult;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Store_IStorePackageUpdateResult2[] = L"Windows.Services.Store.IStorePackageUpdateResult2";
typedef struct __x_ABI_CWindows_CServices_CStore_CIStorePackageUpdateResult2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStorePackageUpdateResult2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStorePackageUpdateResult2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStorePackageUpdateResult2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStorePackageUpdateResult2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStorePackageUpdateResult2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStorePackageUpdateResult2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_StoreQueueItems )(
        __x_ABI_CWindows_CServices_CStore_CIStorePackageUpdateResult2 * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CServices__CStore__CStoreQueueItem * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CServices_CStore_CIStorePackageUpdateResult2Vtbl;
interface __x_ABI_CWindows_CServices_CStore_CIStorePackageUpdateResult2
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CStore_CIStorePackageUpdateResult2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_StoreQueueItems(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CServices_CStore_CIStorePackageUpdateResult2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Store_IStorePrice[] = L"Windows.Services.Store.IStorePrice";
typedef struct __x_ABI_CWindows_CServices_CStore_CIStorePriceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStorePrice * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStorePrice * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStorePrice * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStorePrice * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStorePrice * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStorePrice * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_FormattedBasePrice )(
        __x_ABI_CWindows_CServices_CStore_CIStorePrice * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FormattedPrice )(
        __x_ABI_CWindows_CServices_CStore_CIStorePrice * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsOnSale )(
        __x_ABI_CWindows_CServices_CStore_CIStorePrice * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SaleEndDate )(
        __x_ABI_CWindows_CServices_CStore_CIStorePrice * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CurrencyCode )(
        __x_ABI_CWindows_CServices_CStore_CIStorePrice * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FormattedRecurrencePrice )(
        __x_ABI_CWindows_CServices_CStore_CIStorePrice * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CServices_CStore_CIStorePriceVtbl;
interface __x_ABI_CWindows_CServices_CStore_CIStorePrice
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CStore_CIStorePriceVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_FormattedBasePrice(This,value) )
    ( (This)->lpVtbl->get_FormattedPrice(This,value) )
    ( (This)->lpVtbl->get_IsOnSale(This,value) )
    ( (This)->lpVtbl->get_SaleEndDate(This,value) )
    ( (This)->lpVtbl->get_CurrencyCode(This,value) )
    ( (This)->lpVtbl->get_FormattedRecurrencePrice(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CServices_CStore_CIStorePrice;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Store_IStoreProduct[] = L"Windows.Services.Store.IStoreProduct";
typedef struct __x_ABI_CWindows_CServices_CStore_CIStoreProductVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreProduct * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreProduct * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreProduct * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreProduct * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreProduct * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreProduct * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_StoreId )(
        __x_ABI_CWindows_CServices_CStore_CIStoreProduct * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Language )(
        __x_ABI_CWindows_CServices_CStore_CIStoreProduct * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Title )(
        __x_ABI_CWindows_CServices_CStore_CIStoreProduct * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Description )(
        __x_ABI_CWindows_CServices_CStore_CIStoreProduct * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ProductKind )(
        __x_ABI_CWindows_CServices_CStore_CIStoreProduct * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HasDigitalDownload )(
        __x_ABI_CWindows_CServices_CStore_CIStoreProduct * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Keywords )(
        __x_ABI_CWindows_CServices_CStore_CIStoreProduct * This,
                           __RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Images )(
        __x_ABI_CWindows_CServices_CStore_CIStoreProduct * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CServices__CStore__CStoreImage * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Videos )(
        __x_ABI_CWindows_CServices_CStore_CIStoreProduct * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CServices__CStore__CStoreVideo * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Skus )(
        __x_ABI_CWindows_CServices_CStore_CIStoreProduct * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CServices__CStore__CStoreSku * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsInUserCollection )(
        __x_ABI_CWindows_CServices_CStore_CIStoreProduct * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Price )(
        __x_ABI_CWindows_CServices_CStore_CIStoreProduct * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CServices_CStore_CIStorePrice * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ExtendedJsonData )(
        __x_ABI_CWindows_CServices_CStore_CIStoreProduct * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LinkUri )(
        __x_ABI_CWindows_CServices_CStore_CIStoreProduct * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetIsAnySkuInstalledAsync )(
        __x_ABI_CWindows_CServices_CStore_CIStoreProduct * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *RequestPurchaseAsync )(
        __x_ABI_CWindows_CServices_CStore_CIStoreProduct * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CServices__CStore__CStorePurchaseResult * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *RequestPurchaseWithPurchasePropertiesAsync )(
        __x_ABI_CWindows_CServices_CStore_CIStoreProduct * This,
                  __RPC__in_opt __x_ABI_CWindows_CServices_CStore_CIStorePurchaseProperties * storePurchaseProperties,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CServices__CStore__CStorePurchaseResult * * operation
        );
                   HRESULT ( STDMETHODCALLTYPE *get_InAppOfferToken )(
        __x_ABI_CWindows_CServices_CStore_CIStoreProduct * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CServices_CStore_CIStoreProductVtbl;
interface __x_ABI_CWindows_CServices_CStore_CIStoreProduct
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CStore_CIStoreProductVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_StoreId(This,value) )
    ( (This)->lpVtbl->get_Language(This,value) )
    ( (This)->lpVtbl->get_Title(This,value) )
    ( (This)->lpVtbl->get_Description(This,value) )
    ( (This)->lpVtbl->get_ProductKind(This,value) )
    ( (This)->lpVtbl->get_HasDigitalDownload(This,value) )
    ( (This)->lpVtbl->get_Keywords(This,value) )
    ( (This)->lpVtbl->get_Images(This,value) )
    ( (This)->lpVtbl->get_Videos(This,value) )
    ( (This)->lpVtbl->get_Skus(This,value) )
    ( (This)->lpVtbl->get_IsInUserCollection(This,value) )
    ( (This)->lpVtbl->get_Price(This,value) )
    ( (This)->lpVtbl->get_ExtendedJsonData(This,value) )
    ( (This)->lpVtbl->get_LinkUri(This,value) )
    ( (This)->lpVtbl->GetIsAnySkuInstalledAsync(This,operation) )
    ( (This)->lpVtbl->RequestPurchaseAsync(This,operation) )
    ( (This)->lpVtbl->RequestPurchaseWithPurchasePropertiesAsync(This,storePurchaseProperties,operation) )
    ( (This)->lpVtbl->get_InAppOfferToken(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CServices_CStore_CIStoreProduct;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Store_IStoreProductOptions[] = L"Windows.Services.Store.IStoreProductOptions";
typedef struct __x_ABI_CWindows_CServices_CStore_CIStoreProductOptionsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreProductOptions * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreProductOptions * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreProductOptions * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreProductOptions * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreProductOptions * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreProductOptions * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ActionFilters )(
        __x_ABI_CWindows_CServices_CStore_CIStoreProductOptions * This,
                           __RPC__deref_out_opt __FIVector_1_HSTRING * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CServices_CStore_CIStoreProductOptionsVtbl;
interface __x_ABI_CWindows_CServices_CStore_CIStoreProductOptions
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CStore_CIStoreProductOptionsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ActionFilters(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CServices_CStore_CIStoreProductOptions;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Store_IStoreProductPagedQueryResult[] = L"Windows.Services.Store.IStoreProductPagedQueryResult";
typedef struct __x_ABI_CWindows_CServices_CStore_CIStoreProductPagedQueryResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreProductPagedQueryResult * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreProductPagedQueryResult * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreProductPagedQueryResult * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreProductPagedQueryResult * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreProductPagedQueryResult * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreProductPagedQueryResult * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Products )(
        __x_ABI_CWindows_CServices_CStore_CIStoreProductPagedQueryResult * This,
                           __RPC__deref_out_opt __FIMapView_2_HSTRING_Windows__CServices__CStore__CStoreProduct * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HasMoreResults )(
        __x_ABI_CWindows_CServices_CStore_CIStoreProductPagedQueryResult * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ExtendedError )(
        __x_ABI_CWindows_CServices_CStore_CIStoreProductPagedQueryResult * This,
                           __RPC__out HRESULT * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetNextAsync )(
        __x_ABI_CWindows_CServices_CStore_CIStoreProductPagedQueryResult * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CServices__CStore__CStoreProductPagedQueryResult * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CServices_CStore_CIStoreProductPagedQueryResultVtbl;
interface __x_ABI_CWindows_CServices_CStore_CIStoreProductPagedQueryResult
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CStore_CIStoreProductPagedQueryResultVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Products(This,value) )
    ( (This)->lpVtbl->get_HasMoreResults(This,value) )
    ( (This)->lpVtbl->get_ExtendedError(This,value) )
    ( (This)->lpVtbl->GetNextAsync(This,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CServices_CStore_CIStoreProductPagedQueryResult;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Store_IStoreProductQueryResult[] = L"Windows.Services.Store.IStoreProductQueryResult";
typedef struct __x_ABI_CWindows_CServices_CStore_CIStoreProductQueryResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreProductQueryResult * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreProductQueryResult * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreProductQueryResult * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreProductQueryResult * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreProductQueryResult * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreProductQueryResult * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Products )(
        __x_ABI_CWindows_CServices_CStore_CIStoreProductQueryResult * This,
                           __RPC__deref_out_opt __FIMapView_2_HSTRING_Windows__CServices__CStore__CStoreProduct * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ExtendedError )(
        __x_ABI_CWindows_CServices_CStore_CIStoreProductQueryResult * This,
                           __RPC__out HRESULT * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CServices_CStore_CIStoreProductQueryResultVtbl;
interface __x_ABI_CWindows_CServices_CStore_CIStoreProductQueryResult
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CStore_CIStoreProductQueryResultVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Products(This,value) )
    ( (This)->lpVtbl->get_ExtendedError(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CServices_CStore_CIStoreProductQueryResult;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Store_IStoreProductResult[] = L"Windows.Services.Store.IStoreProductResult";
typedef struct __x_ABI_CWindows_CServices_CStore_CIStoreProductResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreProductResult * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreProductResult * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreProductResult * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreProductResult * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreProductResult * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreProductResult * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Product )(
        __x_ABI_CWindows_CServices_CStore_CIStoreProductResult * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CServices_CStore_CIStoreProduct * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ExtendedError )(
        __x_ABI_CWindows_CServices_CStore_CIStoreProductResult * This,
                           __RPC__out HRESULT * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CServices_CStore_CIStoreProductResultVtbl;
interface __x_ABI_CWindows_CServices_CStore_CIStoreProductResult
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CStore_CIStoreProductResultVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Product(This,value) )
    ( (This)->lpVtbl->get_ExtendedError(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CServices_CStore_CIStoreProductResult;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Store_IStorePurchaseProperties[] = L"Windows.Services.Store.IStorePurchaseProperties";
typedef struct __x_ABI_CWindows_CServices_CStore_CIStorePurchasePropertiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStorePurchaseProperties * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStorePurchaseProperties * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStorePurchaseProperties * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStorePurchaseProperties * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStorePurchaseProperties * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStorePurchaseProperties * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Name )(
        __x_ABI_CWindows_CServices_CStore_CIStorePurchaseProperties * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Name )(
        __x_ABI_CWindows_CServices_CStore_CIStorePurchaseProperties * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ExtendedJsonData )(
        __x_ABI_CWindows_CServices_CStore_CIStorePurchaseProperties * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ExtendedJsonData )(
        __x_ABI_CWindows_CServices_CStore_CIStorePurchaseProperties * This,
                  __RPC__in HSTRING value
        );
    END_INTERFACE
} __x_ABI_CWindows_CServices_CStore_CIStorePurchasePropertiesVtbl;
interface __x_ABI_CWindows_CServices_CStore_CIStorePurchaseProperties
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CStore_CIStorePurchasePropertiesVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Name(This,value) )
    ( (This)->lpVtbl->put_Name(This,value) )
    ( (This)->lpVtbl->get_ExtendedJsonData(This,value) )
    ( (This)->lpVtbl->put_ExtendedJsonData(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CServices_CStore_CIStorePurchaseProperties;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Store_IStorePurchasePropertiesFactory[] = L"Windows.Services.Store.IStorePurchasePropertiesFactory";
typedef struct __x_ABI_CWindows_CServices_CStore_CIStorePurchasePropertiesFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStorePurchasePropertiesFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStorePurchasePropertiesFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStorePurchasePropertiesFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStorePurchasePropertiesFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStorePurchasePropertiesFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStorePurchasePropertiesFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CServices_CStore_CIStorePurchasePropertiesFactory * This,
                  __RPC__in HSTRING name,
                           __RPC__deref_out_opt __x_ABI_CWindows_CServices_CStore_CIStorePurchaseProperties * * storePurchaseProperties
        );
    END_INTERFACE
} __x_ABI_CWindows_CServices_CStore_CIStorePurchasePropertiesFactoryVtbl;
interface __x_ABI_CWindows_CServices_CStore_CIStorePurchasePropertiesFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CStore_CIStorePurchasePropertiesFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,name,storePurchaseProperties) )
EXTERN_C const IID IID___x_ABI_CWindows_CServices_CStore_CIStorePurchasePropertiesFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Store_IStorePurchaseResult[] = L"Windows.Services.Store.IStorePurchaseResult";
typedef struct __x_ABI_CWindows_CServices_CStore_CIStorePurchaseResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStorePurchaseResult * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStorePurchaseResult * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStorePurchaseResult * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStorePurchaseResult * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStorePurchaseResult * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStorePurchaseResult * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CServices_CStore_CIStorePurchaseResult * This,
                           __RPC__out __x_ABI_CWindows_CServices_CStore_CStorePurchaseStatus * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ExtendedError )(
        __x_ABI_CWindows_CServices_CStore_CIStorePurchaseResult * This,
                           __RPC__out HRESULT * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CServices_CStore_CIStorePurchaseResultVtbl;
interface __x_ABI_CWindows_CServices_CStore_CIStorePurchaseResult
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CStore_CIStorePurchaseResultVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Status(This,value) )
    ( (This)->lpVtbl->get_ExtendedError(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CServices_CStore_CIStorePurchaseResult;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Store_IStoreQueueItem[] = L"Windows.Services.Store.IStoreQueueItem";
typedef struct __x_ABI_CWindows_CServices_CStore_CIStoreQueueItemVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreQueueItem * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreQueueItem * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreQueueItem * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreQueueItem * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreQueueItem * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreQueueItem * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ProductId )(
        __x_ABI_CWindows_CServices_CStore_CIStoreQueueItem * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PackageFamilyName )(
        __x_ABI_CWindows_CServices_CStore_CIStoreQueueItem * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_InstallKind )(
        __x_ABI_CWindows_CServices_CStore_CIStoreQueueItem * This,
                           __RPC__out __x_ABI_CWindows_CServices_CStore_CStoreQueueItemKind * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetCurrentStatus )(
        __x_ABI_CWindows_CServices_CStore_CIStoreQueueItem * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CServices_CStore_CIStoreQueueItemStatus * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *add_Completed )(
        __x_ABI_CWindows_CServices_CStore_CIStoreQueueItem * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CServices__CStore__CStoreQueueItem_Windows__CServices__CStore__CStoreQueueItemCompletedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Completed )(
        __x_ABI_CWindows_CServices_CStore_CIStoreQueueItem * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_StatusChanged )(
        __x_ABI_CWindows_CServices_CStore_CIStoreQueueItem * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CServices__CStore__CStoreQueueItem_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_StatusChanged )(
        __x_ABI_CWindows_CServices_CStore_CIStoreQueueItem * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CServices_CStore_CIStoreQueueItemVtbl;
interface __x_ABI_CWindows_CServices_CStore_CIStoreQueueItem
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CStore_CIStoreQueueItemVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ProductId(This,value) )
    ( (This)->lpVtbl->get_PackageFamilyName(This,value) )
    ( (This)->lpVtbl->get_InstallKind(This,value) )
    ( (This)->lpVtbl->GetCurrentStatus(This,result) )
    ( (This)->lpVtbl->add_Completed(This,handler,token) )
    ( (This)->lpVtbl->remove_Completed(This,token) )
    ( (This)->lpVtbl->add_StatusChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_StatusChanged(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CServices_CStore_CIStoreQueueItem;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Store_IStoreQueueItem2[] = L"Windows.Services.Store.IStoreQueueItem2";
typedef struct __x_ABI_CWindows_CServices_CStore_CIStoreQueueItem2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreQueueItem2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreQueueItem2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreQueueItem2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreQueueItem2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreQueueItem2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreQueueItem2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CancelInstallAsync )(
        __x_ABI_CWindows_CServices_CStore_CIStoreQueueItem2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * action
        );
    HRESULT ( STDMETHODCALLTYPE *PauseInstallAsync )(
        __x_ABI_CWindows_CServices_CStore_CIStoreQueueItem2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * action
        );
    HRESULT ( STDMETHODCALLTYPE *ResumeInstallAsync )(
        __x_ABI_CWindows_CServices_CStore_CIStoreQueueItem2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * action
        );
    END_INTERFACE
} __x_ABI_CWindows_CServices_CStore_CIStoreQueueItem2Vtbl;
interface __x_ABI_CWindows_CServices_CStore_CIStoreQueueItem2
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CStore_CIStoreQueueItem2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CancelInstallAsync(This,action) )
    ( (This)->lpVtbl->PauseInstallAsync(This,action) )
    ( (This)->lpVtbl->ResumeInstallAsync(This,action) )
EXTERN_C const IID IID___x_ABI_CWindows_CServices_CStore_CIStoreQueueItem2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Store_IStoreQueueItemCompletedEventArgs[] = L"Windows.Services.Store.IStoreQueueItemCompletedEventArgs";
typedef struct __x_ABI_CWindows_CServices_CStore_CIStoreQueueItemCompletedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreQueueItemCompletedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreQueueItemCompletedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreQueueItemCompletedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreQueueItemCompletedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreQueueItemCompletedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreQueueItemCompletedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CServices_CStore_CIStoreQueueItemCompletedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CServices_CStore_CIStoreQueueItemStatus * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CServices_CStore_CIStoreQueueItemCompletedEventArgsVtbl;
interface __x_ABI_CWindows_CServices_CStore_CIStoreQueueItemCompletedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CStore_CIStoreQueueItemCompletedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Status(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CServices_CStore_CIStoreQueueItemCompletedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Store_IStoreQueueItemStatus[] = L"Windows.Services.Store.IStoreQueueItemStatus";
typedef struct __x_ABI_CWindows_CServices_CStore_CIStoreQueueItemStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreQueueItemStatus * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreQueueItemStatus * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreQueueItemStatus * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreQueueItemStatus * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreQueueItemStatus * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreQueueItemStatus * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_PackageInstallState )(
        __x_ABI_CWindows_CServices_CStore_CIStoreQueueItemStatus * This,
                           __RPC__out __x_ABI_CWindows_CServices_CStore_CStoreQueueItemState * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PackageInstallExtendedState )(
        __x_ABI_CWindows_CServices_CStore_CIStoreQueueItemStatus * This,
                           __RPC__out __x_ABI_CWindows_CServices_CStore_CStoreQueueItemExtendedState * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_UpdateStatus )(
        __x_ABI_CWindows_CServices_CStore_CIStoreQueueItemStatus * This,
                           __RPC__out __x_ABI_CWindows_CServices_CStore_CStorePackageUpdateStatus * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ExtendedError )(
        __x_ABI_CWindows_CServices_CStore_CIStoreQueueItemStatus * This,
                           __RPC__out HRESULT * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CServices_CStore_CIStoreQueueItemStatusVtbl;
interface __x_ABI_CWindows_CServices_CStore_CIStoreQueueItemStatus
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CStore_CIStoreQueueItemStatusVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_PackageInstallState(This,value) )
    ( (This)->lpVtbl->get_PackageInstallExtendedState(This,value) )
    ( (This)->lpVtbl->get_UpdateStatus(This,value) )
    ( (This)->lpVtbl->get_ExtendedError(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CServices_CStore_CIStoreQueueItemStatus;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Store_IStoreRateAndReviewResult[] = L"Windows.Services.Store.IStoreRateAndReviewResult";
typedef struct __x_ABI_CWindows_CServices_CStore_CIStoreRateAndReviewResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreRateAndReviewResult * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreRateAndReviewResult * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreRateAndReviewResult * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreRateAndReviewResult * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreRateAndReviewResult * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreRateAndReviewResult * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ExtendedError )(
        __x_ABI_CWindows_CServices_CStore_CIStoreRateAndReviewResult * This,
                           __RPC__out HRESULT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ExtendedJsonData )(
        __x_ABI_CWindows_CServices_CStore_CIStoreRateAndReviewResult * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_WasUpdated )(
        __x_ABI_CWindows_CServices_CStore_CIStoreRateAndReviewResult * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CServices_CStore_CIStoreRateAndReviewResult * This,
                           __RPC__out __x_ABI_CWindows_CServices_CStore_CStoreRateAndReviewStatus * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CServices_CStore_CIStoreRateAndReviewResultVtbl;
interface __x_ABI_CWindows_CServices_CStore_CIStoreRateAndReviewResult
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CStore_CIStoreRateAndReviewResultVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ExtendedError(This,value) )
    ( (This)->lpVtbl->get_ExtendedJsonData(This,value) )
    ( (This)->lpVtbl->get_WasUpdated(This,value) )
    ( (This)->lpVtbl->get_Status(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CServices_CStore_CIStoreRateAndReviewResult;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Store_IStoreRequestHelperStatics[] = L"Windows.Services.Store.IStoreRequestHelperStatics";
typedef struct __x_ABI_CWindows_CServices_CStore_CIStoreRequestHelperStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreRequestHelperStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreRequestHelperStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreRequestHelperStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreRequestHelperStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreRequestHelperStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreRequestHelperStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *SendRequestAsync )(
        __x_ABI_CWindows_CServices_CStore_CIStoreRequestHelperStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CServices_CStore_CIStoreContext * context,
                  UINT32 requestKind,
                  __RPC__in HSTRING parametersAsJson,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CServices__CStore__CStoreSendRequestResult * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CServices_CStore_CIStoreRequestHelperStaticsVtbl;
interface __x_ABI_CWindows_CServices_CStore_CIStoreRequestHelperStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CStore_CIStoreRequestHelperStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->SendRequestAsync(This,context,requestKind,parametersAsJson,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CServices_CStore_CIStoreRequestHelperStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Store_IStoreSendRequestResult[] = L"Windows.Services.Store.IStoreSendRequestResult";
typedef struct __x_ABI_CWindows_CServices_CStore_CIStoreSendRequestResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreSendRequestResult * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreSendRequestResult * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreSendRequestResult * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreSendRequestResult * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreSendRequestResult * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreSendRequestResult * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Response )(
        __x_ABI_CWindows_CServices_CStore_CIStoreSendRequestResult * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ExtendedError )(
        __x_ABI_CWindows_CServices_CStore_CIStoreSendRequestResult * This,
                           __RPC__out HRESULT * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CServices_CStore_CIStoreSendRequestResultVtbl;
interface __x_ABI_CWindows_CServices_CStore_CIStoreSendRequestResult
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CStore_CIStoreSendRequestResultVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Response(This,value) )
    ( (This)->lpVtbl->get_ExtendedError(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CServices_CStore_CIStoreSendRequestResult;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Store_IStoreSendRequestResult2[] = L"Windows.Services.Store.IStoreSendRequestResult2";
typedef struct __x_ABI_CWindows_CServices_CStore_CIStoreSendRequestResult2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreSendRequestResult2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreSendRequestResult2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreSendRequestResult2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreSendRequestResult2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreSendRequestResult2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreSendRequestResult2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_HttpStatusCode )(
        __x_ABI_CWindows_CServices_CStore_CIStoreSendRequestResult2 * This,
                           __RPC__out __x_ABI_CWindows_CWeb_CHttp_CHttpStatusCode * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CServices_CStore_CIStoreSendRequestResult2Vtbl;
interface __x_ABI_CWindows_CServices_CStore_CIStoreSendRequestResult2
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CStore_CIStoreSendRequestResult2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_HttpStatusCode(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CServices_CStore_CIStoreSendRequestResult2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Store_IStoreSku[] = L"Windows.Services.Store.IStoreSku";
typedef struct __x_ABI_CWindows_CServices_CStore_CIStoreSkuVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreSku * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreSku * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreSku * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreSku * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreSku * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreSku * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_StoreId )(
        __x_ABI_CWindows_CServices_CStore_CIStoreSku * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Language )(
        __x_ABI_CWindows_CServices_CStore_CIStoreSku * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Title )(
        __x_ABI_CWindows_CServices_CStore_CIStoreSku * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Description )(
        __x_ABI_CWindows_CServices_CStore_CIStoreSku * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsTrial )(
        __x_ABI_CWindows_CServices_CStore_CIStoreSku * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CustomDeveloperData )(
        __x_ABI_CWindows_CServices_CStore_CIStoreSku * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Images )(
        __x_ABI_CWindows_CServices_CStore_CIStoreSku * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CServices__CStore__CStoreImage * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Videos )(
        __x_ABI_CWindows_CServices_CStore_CIStoreSku * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CServices__CStore__CStoreVideo * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Availabilities )(
        __x_ABI_CWindows_CServices_CStore_CIStoreSku * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CServices__CStore__CStoreAvailability * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Price )(
        __x_ABI_CWindows_CServices_CStore_CIStoreSku * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CServices_CStore_CIStorePrice * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ExtendedJsonData )(
        __x_ABI_CWindows_CServices_CStore_CIStoreSku * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsInUserCollection )(
        __x_ABI_CWindows_CServices_CStore_CIStoreSku * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BundledSkus )(
        __x_ABI_CWindows_CServices_CStore_CIStoreSku * This,
                           __RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CollectionData )(
        __x_ABI_CWindows_CServices_CStore_CIStoreSku * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CServices_CStore_CIStoreCollectionData * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetIsInstalledAsync )(
        __x_ABI_CWindows_CServices_CStore_CIStoreSku * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *RequestPurchaseAsync )(
        __x_ABI_CWindows_CServices_CStore_CIStoreSku * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CServices__CStore__CStorePurchaseResult * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *RequestPurchaseWithPurchasePropertiesAsync )(
        __x_ABI_CWindows_CServices_CStore_CIStoreSku * This,
                  __RPC__in_opt __x_ABI_CWindows_CServices_CStore_CIStorePurchaseProperties * storePurchaseProperties,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CServices__CStore__CStorePurchaseResult * * operation
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsSubscription )(
        __x_ABI_CWindows_CServices_CStore_CIStoreSku * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SubscriptionInfo )(
        __x_ABI_CWindows_CServices_CStore_CIStoreSku * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CServices_CStore_CIStoreSubscriptionInfo * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CServices_CStore_CIStoreSkuVtbl;
interface __x_ABI_CWindows_CServices_CStore_CIStoreSku
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CStore_CIStoreSkuVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_StoreId(This,value) )
    ( (This)->lpVtbl->get_Language(This,value) )
    ( (This)->lpVtbl->get_Title(This,value) )
    ( (This)->lpVtbl->get_Description(This,value) )
    ( (This)->lpVtbl->get_IsTrial(This,value) )
    ( (This)->lpVtbl->get_CustomDeveloperData(This,value) )
    ( (This)->lpVtbl->get_Images(This,value) )
    ( (This)->lpVtbl->get_Videos(This,value) )
    ( (This)->lpVtbl->get_Availabilities(This,value) )
    ( (This)->lpVtbl->get_Price(This,value) )
    ( (This)->lpVtbl->get_ExtendedJsonData(This,value) )
    ( (This)->lpVtbl->get_IsInUserCollection(This,value) )
    ( (This)->lpVtbl->get_BundledSkus(This,value) )
    ( (This)->lpVtbl->get_CollectionData(This,value) )
    ( (This)->lpVtbl->GetIsInstalledAsync(This,operation) )
    ( (This)->lpVtbl->RequestPurchaseAsync(This,operation) )
    ( (This)->lpVtbl->RequestPurchaseWithPurchasePropertiesAsync(This,storePurchaseProperties,operation) )
    ( (This)->lpVtbl->get_IsSubscription(This,value) )
    ( (This)->lpVtbl->get_SubscriptionInfo(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CServices_CStore_CIStoreSku;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Store_IStoreSubscriptionInfo[] = L"Windows.Services.Store.IStoreSubscriptionInfo";
typedef struct __x_ABI_CWindows_CServices_CStore_CIStoreSubscriptionInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreSubscriptionInfo * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreSubscriptionInfo * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreSubscriptionInfo * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreSubscriptionInfo * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreSubscriptionInfo * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreSubscriptionInfo * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_BillingPeriod )(
        __x_ABI_CWindows_CServices_CStore_CIStoreSubscriptionInfo * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BillingPeriodUnit )(
        __x_ABI_CWindows_CServices_CStore_CIStoreSubscriptionInfo * This,
                           __RPC__out __x_ABI_CWindows_CServices_CStore_CStoreDurationUnit * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HasTrialPeriod )(
        __x_ABI_CWindows_CServices_CStore_CIStoreSubscriptionInfo * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TrialPeriod )(
        __x_ABI_CWindows_CServices_CStore_CIStoreSubscriptionInfo * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TrialPeriodUnit )(
        __x_ABI_CWindows_CServices_CStore_CIStoreSubscriptionInfo * This,
                           __RPC__out __x_ABI_CWindows_CServices_CStore_CStoreDurationUnit * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CServices_CStore_CIStoreSubscriptionInfoVtbl;
interface __x_ABI_CWindows_CServices_CStore_CIStoreSubscriptionInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CStore_CIStoreSubscriptionInfoVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_BillingPeriod(This,value) )
    ( (This)->lpVtbl->get_BillingPeriodUnit(This,value) )
    ( (This)->lpVtbl->get_HasTrialPeriod(This,value) )
    ( (This)->lpVtbl->get_TrialPeriod(This,value) )
    ( (This)->lpVtbl->get_TrialPeriodUnit(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CServices_CStore_CIStoreSubscriptionInfo;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Store_IStoreUninstallStorePackageResult[] = L"Windows.Services.Store.IStoreUninstallStorePackageResult";
typedef struct __x_ABI_CWindows_CServices_CStore_CIStoreUninstallStorePackageResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreUninstallStorePackageResult * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreUninstallStorePackageResult * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreUninstallStorePackageResult * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreUninstallStorePackageResult * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreUninstallStorePackageResult * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreUninstallStorePackageResult * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ExtendedError )(
        __x_ABI_CWindows_CServices_CStore_CIStoreUninstallStorePackageResult * This,
                           __RPC__out HRESULT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CServices_CStore_CIStoreUninstallStorePackageResult * This,
                           __RPC__out __x_ABI_CWindows_CServices_CStore_CStoreUninstallStorePackageStatus * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CServices_CStore_CIStoreUninstallStorePackageResultVtbl;
interface __x_ABI_CWindows_CServices_CStore_CIStoreUninstallStorePackageResult
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CStore_CIStoreUninstallStorePackageResultVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ExtendedError(This,value) )
    ( (This)->lpVtbl->get_Status(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CServices_CStore_CIStoreUninstallStorePackageResult;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Store_IStoreVideo[] = L"Windows.Services.Store.IStoreVideo";
typedef struct __x_ABI_CWindows_CServices_CStore_CIStoreVideoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreVideo * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreVideo * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreVideo * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreVideo * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreVideo * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CStore_CIStoreVideo * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Uri )(
        __x_ABI_CWindows_CServices_CStore_CIStoreVideo * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_VideoPurposeTag )(
        __x_ABI_CWindows_CServices_CStore_CIStoreVideo * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Width )(
        __x_ABI_CWindows_CServices_CStore_CIStoreVideo * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Height )(
        __x_ABI_CWindows_CServices_CStore_CIStoreVideo * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Caption )(
        __x_ABI_CWindows_CServices_CStore_CIStoreVideo * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PreviewImage )(
        __x_ABI_CWindows_CServices_CStore_CIStoreVideo * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CServices_CStore_CIStoreImage * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CServices_CStore_CIStoreVideoVtbl;
interface __x_ABI_CWindows_CServices_CStore_CIStoreVideo
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CStore_CIStoreVideoVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Uri(This,value) )
    ( (This)->lpVtbl->get_VideoPurposeTag(This,value) )
    ( (This)->lpVtbl->get_Width(This,value) )
    ( (This)->lpVtbl->get_Height(This,value) )
    ( (This)->lpVtbl->get_Caption(This,value) )
    ( (This)->lpVtbl->get_PreviewImage(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CServices_CStore_CIStoreVideo;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Store_StoreAcquireLicenseResult[] = L"Windows.Services.Store.StoreAcquireLicenseResult";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Store_StoreAppLicense[] = L"Windows.Services.Store.StoreAppLicense";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Store_StoreAvailability[] = L"Windows.Services.Store.StoreAvailability";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Store_StoreCanAcquireLicenseResult[] = L"Windows.Services.Store.StoreCanAcquireLicenseResult";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Store_StoreCollectionData[] = L"Windows.Services.Store.StoreCollectionData";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Store_StoreConsumableResult[] = L"Windows.Services.Store.StoreConsumableResult";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Store_StoreContext[] = L"Windows.Services.Store.StoreContext";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Store_StoreImage[] = L"Windows.Services.Store.StoreImage";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Store_StoreLicense[] = L"Windows.Services.Store.StoreLicense";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Store_StorePackageInstallOptions[] = L"Windows.Services.Store.StorePackageInstallOptions";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Store_StorePackageLicense[] = L"Windows.Services.Store.StorePackageLicense";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Store_StorePackageUpdate[] = L"Windows.Services.Store.StorePackageUpdate";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Store_StorePackageUpdateResult[] = L"Windows.Services.Store.StorePackageUpdateResult";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Store_StorePrice[] = L"Windows.Services.Store.StorePrice";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Store_StoreProduct[] = L"Windows.Services.Store.StoreProduct";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Store_StoreProductOptions[] = L"Windows.Services.Store.StoreProductOptions";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Store_StoreProductPagedQueryResult[] = L"Windows.Services.Store.StoreProductPagedQueryResult";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Store_StoreProductQueryResult[] = L"Windows.Services.Store.StoreProductQueryResult";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Store_StoreProductResult[] = L"Windows.Services.Store.StoreProductResult";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Store_StorePurchaseProperties[] = L"Windows.Services.Store.StorePurchaseProperties";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Store_StorePurchaseResult[] = L"Windows.Services.Store.StorePurchaseResult";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Store_StoreQueueItem[] = L"Windows.Services.Store.StoreQueueItem";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Store_StoreQueueItemCompletedEventArgs[] = L"Windows.Services.Store.StoreQueueItemCompletedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Store_StoreQueueItemStatus[] = L"Windows.Services.Store.StoreQueueItemStatus";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Store_StoreRateAndReviewResult[] = L"Windows.Services.Store.StoreRateAndReviewResult";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Store_StoreRequestHelper[] = L"Windows.Services.Store.StoreRequestHelper";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Store_StoreSendRequestResult[] = L"Windows.Services.Store.StoreSendRequestResult";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Store_StoreSku[] = L"Windows.Services.Store.StoreSku";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Store_StoreSubscriptionInfo[] = L"Windows.Services.Store.StoreSubscriptionInfo";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Store_StoreUninstallStorePackageResult[] = L"Windows.Services.Store.StoreUninstallStorePackageResult";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Store_StoreVideo[] = L"Windows.Services.Store.StoreVideo";
       
       
#pragma clang diagnostic pop

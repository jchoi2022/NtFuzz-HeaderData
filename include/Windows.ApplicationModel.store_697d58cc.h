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
#include "Windows.Storage.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CApplicationModel_CStore_CILicenseChangedEventHandler __x_ABI_CWindows_CApplicationModel_CStore_CILicenseChangedEventHandler;
typedef interface __x_ABI_CWindows_CApplicationModel_CStore_CICurrentApp __x_ABI_CWindows_CApplicationModel_CStore_CICurrentApp;
typedef interface __x_ABI_CWindows_CApplicationModel_CStore_CICurrentApp2Statics __x_ABI_CWindows_CApplicationModel_CStore_CICurrentApp2Statics;
typedef interface __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulator __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulator;
typedef interface __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorStaticsWithFiltering __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorStaticsWithFiltering;
typedef interface __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorWithCampaignId __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorWithCampaignId;
typedef interface __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorWithConsumables __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorWithConsumables;
typedef interface __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppStaticsWithFiltering __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppStaticsWithFiltering;
typedef interface __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppWithCampaignId __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppWithCampaignId;
typedef interface __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppWithConsumables __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppWithConsumables;
typedef interface __x_ABI_CWindows_CApplicationModel_CStore_CILicenseInformation __x_ABI_CWindows_CApplicationModel_CStore_CILicenseInformation;
typedef interface __x_ABI_CWindows_CApplicationModel_CStore_CIListingInformation __x_ABI_CWindows_CApplicationModel_CStore_CIListingInformation;
typedef interface __x_ABI_CWindows_CApplicationModel_CStore_CIListingInformation2 __x_ABI_CWindows_CApplicationModel_CStore_CIListingInformation2;
typedef interface __x_ABI_CWindows_CApplicationModel_CStore_CIProductLicense __x_ABI_CWindows_CApplicationModel_CStore_CIProductLicense;
typedef interface __x_ABI_CWindows_CApplicationModel_CStore_CIProductLicenseWithFulfillment __x_ABI_CWindows_CApplicationModel_CStore_CIProductLicenseWithFulfillment;
typedef interface __x_ABI_CWindows_CApplicationModel_CStore_CIProductListing __x_ABI_CWindows_CApplicationModel_CStore_CIProductListing;
typedef interface __x_ABI_CWindows_CApplicationModel_CStore_CIProductListing2 __x_ABI_CWindows_CApplicationModel_CStore_CIProductListing2;
typedef interface __x_ABI_CWindows_CApplicationModel_CStore_CIProductListingWithConsumables __x_ABI_CWindows_CApplicationModel_CStore_CIProductListingWithConsumables;
typedef interface __x_ABI_CWindows_CApplicationModel_CStore_CIProductListingWithMetadata __x_ABI_CWindows_CApplicationModel_CStore_CIProductListingWithMetadata;
typedef interface __x_ABI_CWindows_CApplicationModel_CStore_CIProductPurchaseDisplayProperties __x_ABI_CWindows_CApplicationModel_CStore_CIProductPurchaseDisplayProperties;
typedef interface __x_ABI_CWindows_CApplicationModel_CStore_CIProductPurchaseDisplayPropertiesFactory __x_ABI_CWindows_CApplicationModel_CStore_CIProductPurchaseDisplayPropertiesFactory;
typedef interface __x_ABI_CWindows_CApplicationModel_CStore_CIPurchaseResults __x_ABI_CWindows_CApplicationModel_CStore_CIPurchaseResults;
typedef interface __x_ABI_CWindows_CApplicationModel_CStore_CIUnfulfilledConsumable __x_ABI_CWindows_CApplicationModel_CStore_CIUnfulfilledConsumable;
typedef interface __FIIterator_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable __FIIterator_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable;
EXTERN_C const IID IID___FIIterator_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable;
typedef struct __FIIterator_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CStore_CIUnfulfilledConsumable * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CStore_CIUnfulfilledConsumable * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumableVtbl;
interface __FIIterator_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable
{
    CONST_VTBL struct __FIIterator_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumableVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable __FIIterable_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable;
EXTERN_C const IID IID___FIIterable_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable;
typedef struct __FIIterable_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable * This, __RPC__deref_out_opt __FIIterator_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable **first);
    END_INTERFACE
} __FIIterable_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumableVtbl;
interface __FIIterable_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable
{
    CONST_VTBL struct __FIIterable_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense;
EXTERN_C const IID IID___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense;
typedef struct __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicenseVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense * This,
                        __RPC__out ULONG *iidCount,
                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Key )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense * This, __RPC__out HSTRING *key);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense * This, __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CStore_CIProductLicense * *value);
    END_INTERFACE
} __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicenseVtbl;
interface __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense
{
    CONST_VTBL struct __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicenseVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Key(This,key) )
    ( (This)->lpVtbl -> get_Value(This,value) )
typedef interface __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense;
EXTERN_C const IID IID___FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense;
typedef struct __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicenseVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense * This, __RPC__out __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicenseVtbl;
interface __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense
{
    CONST_VTBL struct __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicenseVtbl *lpVtbl;
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
typedef interface __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense;
EXTERN_C const IID IID___FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense;
typedef struct __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicenseVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense * This, __RPC__deref_out_opt __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense **first);
    END_INTERFACE
} __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicenseVtbl;
interface __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense
{
    CONST_VTBL struct __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicenseVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing;
EXTERN_C const IID IID___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing;
typedef struct __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListingVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing * This,
                        __RPC__out ULONG *iidCount,
                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Key )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing * This, __RPC__out HSTRING *key);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing * This, __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CStore_CIProductListing * *value);
    END_INTERFACE
} __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListingVtbl;
interface __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing
{
    CONST_VTBL struct __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListingVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Key(This,key) )
    ( (This)->lpVtbl -> get_Value(This,value) )
typedef interface __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing;
EXTERN_C const IID IID___FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing;
typedef struct __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListingVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing * This, __RPC__out __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListingVtbl;
interface __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing
{
    CONST_VTBL struct __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListingVtbl *lpVtbl;
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
typedef interface __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing;
EXTERN_C const IID IID___FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing;
typedef struct __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListingVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing * This, __RPC__deref_out_opt __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing **first);
    END_INTERFACE
} __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListingVtbl;
interface __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing
{
    CONST_VTBL struct __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListingVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense;
EXTERN_C const IID IID___FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense;
typedef struct __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicenseVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense * This,
                   __RPC__in HSTRING key,
                            __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CStore_CIProductLicense * *value);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense * This, __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense * This, __RPC__in HSTRING key, __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *Split )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense * This, __RPC__deref_out_opt __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense **firstPartition,
                    __RPC__deref_out_opt __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense **secondPartition);
    END_INTERFACE
} __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicenseVtbl;
interface __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense
{
    CONST_VTBL struct __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicenseVtbl *lpVtbl;
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
typedef interface __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing;
EXTERN_C const IID IID___FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing;
typedef struct __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CProductListingVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing * This,
                   __RPC__in HSTRING key,
                            __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CStore_CIProductListing * *value);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing * This, __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing * This, __RPC__in HSTRING key, __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *Split )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing * This, __RPC__deref_out_opt __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing **firstPartition,
                    __RPC__deref_out_opt __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing **secondPartition);
    END_INTERFACE
} __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CProductListingVtbl;
interface __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing
{
    CONST_VTBL struct __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CProductListingVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable __FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable;
EXTERN_C const IID IID___FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable;
typedef struct __FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CApplicationModel_CStore_CIUnfulfilledConsumable * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable * This,
                       __x_ABI_CWindows_CApplicationModel_CStore_CIUnfulfilledConsumable * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CStore_CIUnfulfilledConsumable * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumableVtbl;
interface __FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable
{
    CONST_VTBL struct __FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumableVtbl *lpVtbl;
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
enum __x_ABI_CWindows_CApplicationModel_CStore_CFulfillmentResult;
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CFulfillmentResult __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CFulfillmentResult;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CFulfillmentResult;
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CFulfillmentResult __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CFulfillmentResult;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CFulfillmentResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CFulfillmentResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CFulfillmentResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CFulfillmentResult * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CFulfillmentResult * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CFulfillmentResult *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CFulfillmentResultVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CFulfillmentResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CFulfillmentResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CFulfillmentResult __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CFulfillmentResult;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CApplicationModel__CStore__CFulfillmentResult;
typedef struct __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CFulfillmentResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CFulfillmentResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CFulfillmentResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CFulfillmentResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CFulfillmentResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CFulfillmentResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CFulfillmentResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CFulfillmentResult * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CFulfillmentResult *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CFulfillmentResult * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CFulfillmentResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CFulfillmentResult * This, __RPC__out enum __x_ABI_CWindows_CApplicationModel_CStore_CFulfillmentResult *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CFulfillmentResultVtbl;
interface __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CFulfillmentResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CFulfillmentResultVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CListingInformation __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CListingInformation;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CListingInformation;
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CListingInformation __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CListingInformation;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CListingInformationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CListingInformation * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CListingInformation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CListingInformation * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CListingInformation * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CListingInformation *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CListingInformationVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CListingInformation
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CListingInformationVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CListingInformation __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CListingInformation;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CApplicationModel__CStore__CListingInformation;
typedef struct __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CListingInformationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CListingInformation * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CListingInformation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CListingInformation * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CListingInformation * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CListingInformation * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CListingInformation * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CListingInformation * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CListingInformation *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CListingInformation * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CListingInformation **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CListingInformation * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CStore_CIListingInformation * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CListingInformationVtbl;
interface __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CListingInformation
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CListingInformationVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPurchaseResults __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPurchaseResults;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPurchaseResults;
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPurchaseResults __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPurchaseResults;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPurchaseResultsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPurchaseResults * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPurchaseResults * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPurchaseResults * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPurchaseResults * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPurchaseResults *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPurchaseResultsVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPurchaseResults
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPurchaseResultsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPurchaseResults __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPurchaseResults;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPurchaseResults;
typedef struct __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPurchaseResultsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPurchaseResults * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPurchaseResults * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPurchaseResults * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPurchaseResults * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPurchaseResults * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPurchaseResults * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPurchaseResults * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPurchaseResults *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPurchaseResults * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPurchaseResults **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPurchaseResults * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CStore_CIPurchaseResults * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPurchaseResultsVtbl;
interface __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPurchaseResults
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPurchaseResultsVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable;
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable;
typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable * This, __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumableVtbl;
interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable;
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable;
typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable * This, __RPC__out __FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumableVtbl;
interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumableVtbl *lpVtbl;
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
typedef struct __x_ABI_CWindows_CFoundation_CDateTime __x_ABI_CWindows_CFoundation_CDateTime;
typedef interface __x_ABI_CWindows_CFoundation_CIAsyncAction __x_ABI_CWindows_CFoundation_CIAsyncAction;
typedef interface __x_ABI_CWindows_CFoundation_CIUriRuntimeClass __x_ABI_CWindows_CFoundation_CIUriRuntimeClass;
typedef interface __x_ABI_CWindows_CStorage_CIStorageFile __x_ABI_CWindows_CStorage_CIStorageFile;
typedef enum __x_ABI_CWindows_CApplicationModel_CStore_CFulfillmentResult __x_ABI_CWindows_CApplicationModel_CStore_CFulfillmentResult;
typedef enum __x_ABI_CWindows_CApplicationModel_CStore_CProductPurchaseStatus __x_ABI_CWindows_CApplicationModel_CStore_CProductPurchaseStatus;
typedef enum __x_ABI_CWindows_CApplicationModel_CStore_CProductType __x_ABI_CWindows_CApplicationModel_CStore_CProductType;
enum __x_ABI_CWindows_CApplicationModel_CStore_CFulfillmentResult
{
    FulfillmentResult_Succeeded = 0,
    FulfillmentResult_NothingToFulfill = 1,
    FulfillmentResult_PurchasePending = 2,
    FulfillmentResult_PurchaseReverted = 3,
    FulfillmentResult_ServerError = 4,
};
enum __x_ABI_CWindows_CApplicationModel_CStore_CProductPurchaseStatus
{
    ProductPurchaseStatus_Succeeded = 0,
    ProductPurchaseStatus_AlreadyPurchased = 1,
    ProductPurchaseStatus_NotFulfilled = 2,
    ProductPurchaseStatus_NotPurchased = 3,
};
enum __x_ABI_CWindows_CApplicationModel_CStore_CProductType
{
    ProductType_Unknown = 0,
    ProductType_Durable = 1,
    ProductType_Consumable = 2,
};
typedef struct __x_ABI_CWindows_CApplicationModel_CStore_CILicenseChangedEventHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CILicenseChangedEventHandler * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject);
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CILicenseChangedEventHandler * This);
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CILicenseChangedEventHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CApplicationModel_CStore_CILicenseChangedEventHandler * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CStore_CILicenseChangedEventHandlerVtbl;
interface __x_ABI_CWindows_CApplicationModel_CStore_CILicenseChangedEventHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CStore_CILicenseChangedEventHandlerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
    ( (This)->lpVtbl->Invoke(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CILicenseChangedEventHandler;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_ICurrentApp[] = L"Windows.ApplicationModel.Store.ICurrentApp";
typedef struct __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CICurrentApp * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CICurrentApp * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CICurrentApp * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CICurrentApp * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CICurrentApp * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CICurrentApp * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_LicenseInformation )(
        __x_ABI_CWindows_CApplicationModel_CStore_CICurrentApp * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CStore_CILicenseInformation * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LinkUri )(
        __x_ABI_CWindows_CApplicationModel_CStore_CICurrentApp * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AppId )(
        __x_ABI_CWindows_CApplicationModel_CStore_CICurrentApp * This,
                           __RPC__out GUID * value
        );
    HRESULT ( STDMETHODCALLTYPE *RequestAppPurchaseAsync )(
        __x_ABI_CWindows_CApplicationModel_CStore_CICurrentApp * This,
                  boolean includeReceipt,
                           __RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * requestAppPurchaseOperation
        );
    DEPRECATED("RequestProductPurchaseAsync(productId, includeReceipt) may be altered or unavailable for releases after Windows 8.1. Instead, use RequestProductPurchaseAsync(productId).")
                                HRESULT ( STDMETHODCALLTYPE *RequestProductPurchaseAsync )(
        __x_ABI_CWindows_CApplicationModel_CStore_CICurrentApp * This,
                  __RPC__in HSTRING productId,
                  boolean includeReceipt,
                           __RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * requestProductPurchaseOperation
        );
    HRESULT ( STDMETHODCALLTYPE *LoadListingInformationAsync )(
        __x_ABI_CWindows_CApplicationModel_CStore_CICurrentApp * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CListingInformation * * loadListingOperation
        );
    HRESULT ( STDMETHODCALLTYPE *GetAppReceiptAsync )(
        __x_ABI_CWindows_CApplicationModel_CStore_CICurrentApp * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * appReceiptOperation
        );
    HRESULT ( STDMETHODCALLTYPE *GetProductReceiptAsync )(
        __x_ABI_CWindows_CApplicationModel_CStore_CICurrentApp * This,
                  __RPC__in HSTRING productId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * getProductReceiptOperation
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppVtbl;
interface __x_ABI_CWindows_CApplicationModel_CStore_CICurrentApp
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_LicenseInformation(This,value) )
    ( (This)->lpVtbl->get_LinkUri(This,value) )
    ( (This)->lpVtbl->get_AppId(This,value) )
    ( (This)->lpVtbl->RequestAppPurchaseAsync(This,includeReceipt,requestAppPurchaseOperation) )
DEPRECATED("RequestProductPurchaseAsync(productId, includeReceipt) may be altered or unavailable for releases after Windows 8.1. Instead, use RequestProductPurchaseAsync(productId).")
    ( (This)->lpVtbl->RequestProductPurchaseAsync(This,productId,includeReceipt,requestProductPurchaseOperation) )
    ( (This)->lpVtbl->LoadListingInformationAsync(This,loadListingOperation) )
    ( (This)->lpVtbl->GetAppReceiptAsync(This,appReceiptOperation) )
    ( (This)->lpVtbl->GetProductReceiptAsync(This,productId,getProductReceiptOperation) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CICurrentApp;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_ICurrentApp2Statics[] = L"Windows.ApplicationModel.Store.ICurrentApp2Statics";
typedef struct __x_ABI_CWindows_CApplicationModel_CStore_CICurrentApp2StaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CICurrentApp2Statics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CICurrentApp2Statics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CICurrentApp2Statics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CICurrentApp2Statics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CICurrentApp2Statics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CICurrentApp2Statics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetCustomerPurchaseIdAsync )(
        __x_ABI_CWindows_CApplicationModel_CStore_CICurrentApp2Statics * This,
                  __RPC__in HSTRING serviceTicket,
                  __RPC__in HSTRING publisherUserId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *GetCustomerCollectionsIdAsync )(
        __x_ABI_CWindows_CApplicationModel_CStore_CICurrentApp2Statics * This,
                  __RPC__in HSTRING serviceTicket,
                  __RPC__in HSTRING publisherUserId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CStore_CICurrentApp2StaticsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CStore_CICurrentApp2Statics
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CStore_CICurrentApp2StaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetCustomerPurchaseIdAsync(This,serviceTicket,publisherUserId,operation) )
    ( (This)->lpVtbl->GetCustomerCollectionsIdAsync(This,serviceTicket,publisherUserId,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CICurrentApp2Statics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_ICurrentAppSimulator[] = L"Windows.ApplicationModel.Store.ICurrentAppSimulator";
typedef struct __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulator * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulator * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulator * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulator * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulator * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulator * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_LicenseInformation )(
        __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulator * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CStore_CILicenseInformation * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LinkUri )(
        __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulator * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AppId )(
        __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulator * This,
                           __RPC__out GUID * value
        );
    HRESULT ( STDMETHODCALLTYPE *RequestAppPurchaseAsync )(
        __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulator * This,
                  boolean includeReceipt,
                           __RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * requestAppPurchaseOperation
        );
    DEPRECATED("RequestProductPurchaseAsync(productId, includeReceipt) may be altered or unavailable for releases after Windows 8.1. Instead, use RequestProductPurchaseAsync(productId).")
                                HRESULT ( STDMETHODCALLTYPE *RequestProductPurchaseAsync )(
        __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulator * This,
                  __RPC__in HSTRING productId,
                  boolean includeReceipt,
                           __RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * requestProductPurchaseOperation
        );
    HRESULT ( STDMETHODCALLTYPE *LoadListingInformationAsync )(
        __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulator * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CListingInformation * * loadListingOperation
        );
    HRESULT ( STDMETHODCALLTYPE *GetAppReceiptAsync )(
        __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulator * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * appReceiptOperation
        );
    HRESULT ( STDMETHODCALLTYPE *GetProductReceiptAsync )(
        __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulator * This,
                  __RPC__in HSTRING productId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * getProductReceiptOperation
        );
    HRESULT ( STDMETHODCALLTYPE *ReloadSimulatorAsync )(
        __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulator * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * simulatorSettingsFile,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * reloadSimulatorOperation
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorVtbl;
interface __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulator
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_LicenseInformation(This,value) )
    ( (This)->lpVtbl->get_LinkUri(This,value) )
    ( (This)->lpVtbl->get_AppId(This,value) )
    ( (This)->lpVtbl->RequestAppPurchaseAsync(This,includeReceipt,requestAppPurchaseOperation) )
DEPRECATED("RequestProductPurchaseAsync(productId, includeReceipt) may be altered or unavailable for releases after Windows 8.1. Instead, use RequestProductPurchaseAsync(productId).")
    ( (This)->lpVtbl->RequestProductPurchaseAsync(This,productId,includeReceipt,requestProductPurchaseOperation) )
    ( (This)->lpVtbl->LoadListingInformationAsync(This,loadListingOperation) )
    ( (This)->lpVtbl->GetAppReceiptAsync(This,appReceiptOperation) )
    ( (This)->lpVtbl->GetProductReceiptAsync(This,productId,getProductReceiptOperation) )
    ( (This)->lpVtbl->ReloadSimulatorAsync(This,simulatorSettingsFile,reloadSimulatorOperation) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulator;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_ICurrentAppSimulatorStaticsWithFiltering[] = L"Windows.ApplicationModel.Store.ICurrentAppSimulatorStaticsWithFiltering";
typedef struct __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorStaticsWithFilteringVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorStaticsWithFiltering * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorStaticsWithFiltering * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorStaticsWithFiltering * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorStaticsWithFiltering * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorStaticsWithFiltering * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorStaticsWithFiltering * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *LoadListingInformationByProductIdsAsync )(
        __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorStaticsWithFiltering * This,
                  __RPC__in_opt __FIIterable_1_HSTRING * productIds,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CListingInformation * * loadListingOperation
        );
    HRESULT ( STDMETHODCALLTYPE *LoadListingInformationByKeywordsAsync )(
        __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorStaticsWithFiltering * This,
                  __RPC__in_opt __FIIterable_1_HSTRING * keywords,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CListingInformation * * loadListingOperation
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorStaticsWithFilteringVtbl;
interface __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorStaticsWithFiltering
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorStaticsWithFilteringVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->LoadListingInformationByProductIdsAsync(This,productIds,loadListingOperation) )
    ( (This)->lpVtbl->LoadListingInformationByKeywordsAsync(This,keywords,loadListingOperation) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorStaticsWithFiltering;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_ICurrentAppSimulatorWithCampaignId[] = L"Windows.ApplicationModel.Store.ICurrentAppSimulatorWithCampaignId";
typedef struct __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorWithCampaignIdVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorWithCampaignId * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorWithCampaignId * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorWithCampaignId * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorWithCampaignId * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorWithCampaignId * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorWithCampaignId * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetAppPurchaseCampaignIdAsync )(
        __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorWithCampaignId * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorWithCampaignIdVtbl;
interface __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorWithCampaignId
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorWithCampaignIdVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetAppPurchaseCampaignIdAsync(This,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorWithCampaignId;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_ICurrentAppSimulatorWithConsumables[] = L"Windows.ApplicationModel.Store.ICurrentAppSimulatorWithConsumables";
typedef struct __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorWithConsumablesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorWithConsumables * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorWithConsumables * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorWithConsumables * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorWithConsumables * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorWithConsumables * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorWithConsumables * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *ReportConsumableFulfillmentAsync )(
        __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorWithConsumables * This,
                  __RPC__in HSTRING productId,
                  GUID transactionId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CFulfillmentResult * * reportConsumableFulfillmentOperation
        );
                    HRESULT ( STDMETHODCALLTYPE *RequestProductPurchaseWithResultsAsync )(
        __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorWithConsumables * This,
                  __RPC__in HSTRING productId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPurchaseResults * * requestProductPurchaseWithResultsOperation
        );
                    HRESULT ( STDMETHODCALLTYPE *RequestProductPurchaseWithDisplayPropertiesAsync )(
        __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorWithConsumables * This,
                  __RPC__in HSTRING productId,
                  __RPC__in HSTRING offerId,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CStore_CIProductPurchaseDisplayProperties * displayProperties,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPurchaseResults * * requestProductPurchaseWithDisplayPropertiesOperation
        );
    HRESULT ( STDMETHODCALLTYPE *GetUnfulfilledConsumablesAsync )(
        __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorWithConsumables * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable * * getUnfulfilledConsumablesOperation
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorWithConsumablesVtbl;
interface __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorWithConsumables
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorWithConsumablesVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->ReportConsumableFulfillmentAsync(This,productId,transactionId,reportConsumableFulfillmentOperation) )
    ( (This)->lpVtbl->RequestProductPurchaseWithResultsAsync(This,productId,requestProductPurchaseWithResultsOperation) )
    ( (This)->lpVtbl->RequestProductPurchaseWithDisplayPropertiesAsync(This,productId,offerId,displayProperties,requestProductPurchaseWithDisplayPropertiesOperation) )
    ( (This)->lpVtbl->GetUnfulfilledConsumablesAsync(This,getUnfulfilledConsumablesOperation) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorWithConsumables;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_ICurrentAppStaticsWithFiltering[] = L"Windows.ApplicationModel.Store.ICurrentAppStaticsWithFiltering";
typedef struct __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppStaticsWithFilteringVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppStaticsWithFiltering * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppStaticsWithFiltering * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppStaticsWithFiltering * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppStaticsWithFiltering * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppStaticsWithFiltering * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppStaticsWithFiltering * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *LoadListingInformationByProductIdsAsync )(
        __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppStaticsWithFiltering * This,
                  __RPC__in_opt __FIIterable_1_HSTRING * productIds,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CListingInformation * * loadListingOperation
        );
    HRESULT ( STDMETHODCALLTYPE *LoadListingInformationByKeywordsAsync )(
        __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppStaticsWithFiltering * This,
                  __RPC__in_opt __FIIterable_1_HSTRING * keywords,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CListingInformation * * loadListingOperation
        );
    HRESULT ( STDMETHODCALLTYPE *ReportProductFulfillment )(
        __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppStaticsWithFiltering * This,
                  __RPC__in HSTRING productId
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppStaticsWithFilteringVtbl;
interface __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppStaticsWithFiltering
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppStaticsWithFilteringVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->LoadListingInformationByProductIdsAsync(This,productIds,loadListingOperation) )
    ( (This)->lpVtbl->LoadListingInformationByKeywordsAsync(This,keywords,loadListingOperation) )
    ( (This)->lpVtbl->ReportProductFulfillment(This,productId) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppStaticsWithFiltering;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_ICurrentAppWithCampaignId[] = L"Windows.ApplicationModel.Store.ICurrentAppWithCampaignId";
typedef struct __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppWithCampaignIdVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppWithCampaignId * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppWithCampaignId * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppWithCampaignId * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppWithCampaignId * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppWithCampaignId * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppWithCampaignId * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetAppPurchaseCampaignIdAsync )(
        __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppWithCampaignId * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppWithCampaignIdVtbl;
interface __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppWithCampaignId
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppWithCampaignIdVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetAppPurchaseCampaignIdAsync(This,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppWithCampaignId;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_ICurrentAppWithConsumables[] = L"Windows.ApplicationModel.Store.ICurrentAppWithConsumables";
typedef struct __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppWithConsumablesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppWithConsumables * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppWithConsumables * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppWithConsumables * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppWithConsumables * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppWithConsumables * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppWithConsumables * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *ReportConsumableFulfillmentAsync )(
        __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppWithConsumables * This,
                  __RPC__in HSTRING productId,
                  GUID transactionId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CFulfillmentResult * * reportConsumableFulfillmentOperation
        );
                    HRESULT ( STDMETHODCALLTYPE *RequestProductPurchaseWithResultsAsync )(
        __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppWithConsumables * This,
                  __RPC__in HSTRING productId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPurchaseResults * * requestProductPurchaseWithResultsOperation
        );
                    HRESULT ( STDMETHODCALLTYPE *RequestProductPurchaseWithDisplayPropertiesAsync )(
        __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppWithConsumables * This,
                  __RPC__in HSTRING productId,
                  __RPC__in HSTRING offerId,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CStore_CIProductPurchaseDisplayProperties * displayProperties,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPurchaseResults * * requestProductPurchaseWithDisplayPropertiesOperation
        );
    HRESULT ( STDMETHODCALLTYPE *GetUnfulfilledConsumablesAsync )(
        __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppWithConsumables * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable * * getUnfulfilledConsumablesOperation
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppWithConsumablesVtbl;
interface __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppWithConsumables
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppWithConsumablesVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->ReportConsumableFulfillmentAsync(This,productId,transactionId,reportConsumableFulfillmentOperation) )
    ( (This)->lpVtbl->RequestProductPurchaseWithResultsAsync(This,productId,requestProductPurchaseWithResultsOperation) )
    ( (This)->lpVtbl->RequestProductPurchaseWithDisplayPropertiesAsync(This,productId,offerId,displayProperties,requestProductPurchaseWithDisplayPropertiesOperation) )
    ( (This)->lpVtbl->GetUnfulfilledConsumablesAsync(This,getUnfulfilledConsumablesOperation) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppWithConsumables;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_ILicenseInformation[] = L"Windows.ApplicationModel.Store.ILicenseInformation";
typedef struct __x_ABI_CWindows_CApplicationModel_CStore_CILicenseInformationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CILicenseInformation * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CILicenseInformation * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CILicenseInformation * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CILicenseInformation * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CILicenseInformation * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CILicenseInformation * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ProductLicenses )(
        __x_ABI_CWindows_CApplicationModel_CStore_CILicenseInformation * This,
                           __RPC__deref_out_opt __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsActive )(
        __x_ABI_CWindows_CApplicationModel_CStore_CILicenseInformation * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsTrial )(
        __x_ABI_CWindows_CApplicationModel_CStore_CILicenseInformation * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ExpirationDate )(
        __x_ABI_CWindows_CApplicationModel_CStore_CILicenseInformation * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_LicenseChanged )(
        __x_ABI_CWindows_CApplicationModel_CStore_CILicenseInformation * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CStore_CILicenseChangedEventHandler * handler,
                           __RPC__out EventRegistrationToken * cookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_LicenseChanged )(
        __x_ABI_CWindows_CApplicationModel_CStore_CILicenseInformation * This,
                  EventRegistrationToken cookie
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CStore_CILicenseInformationVtbl;
interface __x_ABI_CWindows_CApplicationModel_CStore_CILicenseInformation
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CStore_CILicenseInformationVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ProductLicenses(This,value) )
    ( (This)->lpVtbl->get_IsActive(This,value) )
    ( (This)->lpVtbl->get_IsTrial(This,value) )
    ( (This)->lpVtbl->get_ExpirationDate(This,value) )
    ( (This)->lpVtbl->add_LicenseChanged(This,handler,cookie) )
    ( (This)->lpVtbl->remove_LicenseChanged(This,cookie) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CILicenseInformation;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_IListingInformation[] = L"Windows.ApplicationModel.Store.IListingInformation";
typedef struct __x_ABI_CWindows_CApplicationModel_CStore_CIListingInformationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CIListingInformation * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CIListingInformation * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CIListingInformation * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CIListingInformation * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CIListingInformation * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CIListingInformation * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_CurrentMarket )(
        __x_ABI_CWindows_CApplicationModel_CStore_CIListingInformation * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Description )(
        __x_ABI_CWindows_CApplicationModel_CStore_CIListingInformation * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ProductListings )(
        __x_ABI_CWindows_CApplicationModel_CStore_CIListingInformation * This,
                           __RPC__deref_out_opt __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FormattedPrice )(
        __x_ABI_CWindows_CApplicationModel_CStore_CIListingInformation * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Name )(
        __x_ABI_CWindows_CApplicationModel_CStore_CIListingInformation * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AgeRating )(
        __x_ABI_CWindows_CApplicationModel_CStore_CIListingInformation * This,
                           __RPC__out UINT32 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CStore_CIListingInformationVtbl;
interface __x_ABI_CWindows_CApplicationModel_CStore_CIListingInformation
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CStore_CIListingInformationVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_CurrentMarket(This,value) )
    ( (This)->lpVtbl->get_Description(This,value) )
    ( (This)->lpVtbl->get_ProductListings(This,value) )
    ( (This)->lpVtbl->get_FormattedPrice(This,value) )
    ( (This)->lpVtbl->get_Name(This,value) )
    ( (This)->lpVtbl->get_AgeRating(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CIListingInformation;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_IListingInformation2[] = L"Windows.ApplicationModel.Store.IListingInformation2";
typedef struct __x_ABI_CWindows_CApplicationModel_CStore_CIListingInformation2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CIListingInformation2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CIListingInformation2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CIListingInformation2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CIListingInformation2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CIListingInformation2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CIListingInformation2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_FormattedBasePrice )(
        __x_ABI_CWindows_CApplicationModel_CStore_CIListingInformation2 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SaleEndDate )(
        __x_ABI_CWindows_CApplicationModel_CStore_CIListingInformation2 * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsOnSale )(
        __x_ABI_CWindows_CApplicationModel_CStore_CIListingInformation2 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CurrencyCode )(
        __x_ABI_CWindows_CApplicationModel_CStore_CIListingInformation2 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CStore_CIListingInformation2Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CStore_CIListingInformation2
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CStore_CIListingInformation2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_FormattedBasePrice(This,value) )
    ( (This)->lpVtbl->get_SaleEndDate(This,value) )
    ( (This)->lpVtbl->get_IsOnSale(This,value) )
    ( (This)->lpVtbl->get_CurrencyCode(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CIListingInformation2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_IProductLicense[] = L"Windows.ApplicationModel.Store.IProductLicense";
typedef struct __x_ABI_CWindows_CApplicationModel_CStore_CIProductLicenseVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CIProductLicense * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CIProductLicense * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CIProductLicense * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CIProductLicense * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CIProductLicense * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CIProductLicense * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ProductId )(
        __x_ABI_CWindows_CApplicationModel_CStore_CIProductLicense * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsActive )(
        __x_ABI_CWindows_CApplicationModel_CStore_CIProductLicense * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ExpirationDate )(
        __x_ABI_CWindows_CApplicationModel_CStore_CIProductLicense * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CStore_CIProductLicenseVtbl;
interface __x_ABI_CWindows_CApplicationModel_CStore_CIProductLicense
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CStore_CIProductLicenseVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ProductId(This,value) )
    ( (This)->lpVtbl->get_IsActive(This,value) )
    ( (This)->lpVtbl->get_ExpirationDate(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CIProductLicense;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_IProductLicenseWithFulfillment[] = L"Windows.ApplicationModel.Store.IProductLicenseWithFulfillment";
typedef struct __x_ABI_CWindows_CApplicationModel_CStore_CIProductLicenseWithFulfillmentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CIProductLicenseWithFulfillment * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CIProductLicenseWithFulfillment * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CIProductLicenseWithFulfillment * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CIProductLicenseWithFulfillment * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CIProductLicenseWithFulfillment * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CIProductLicenseWithFulfillment * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsConsumable )(
        __x_ABI_CWindows_CApplicationModel_CStore_CIProductLicenseWithFulfillment * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CStore_CIProductLicenseWithFulfillmentVtbl;
interface __x_ABI_CWindows_CApplicationModel_CStore_CIProductLicenseWithFulfillment
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CStore_CIProductLicenseWithFulfillmentVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsConsumable(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CIProductLicenseWithFulfillment;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_IProductListing[] = L"Windows.ApplicationModel.Store.IProductListing";
typedef struct __x_ABI_CWindows_CApplicationModel_CStore_CIProductListingVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CIProductListing * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CIProductListing * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CIProductListing * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CIProductListing * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CIProductListing * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CIProductListing * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ProductId )(
        __x_ABI_CWindows_CApplicationModel_CStore_CIProductListing * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FormattedPrice )(
        __x_ABI_CWindows_CApplicationModel_CStore_CIProductListing * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Name )(
        __x_ABI_CWindows_CApplicationModel_CStore_CIProductListing * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CStore_CIProductListingVtbl;
interface __x_ABI_CWindows_CApplicationModel_CStore_CIProductListing
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CStore_CIProductListingVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ProductId(This,value) )
    ( (This)->lpVtbl->get_FormattedPrice(This,value) )
    ( (This)->lpVtbl->get_Name(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CIProductListing;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_IProductListing2[] = L"Windows.ApplicationModel.Store.IProductListing2";
typedef struct __x_ABI_CWindows_CApplicationModel_CStore_CIProductListing2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CIProductListing2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CIProductListing2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CIProductListing2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CIProductListing2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CIProductListing2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CIProductListing2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_FormattedBasePrice )(
        __x_ABI_CWindows_CApplicationModel_CStore_CIProductListing2 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SaleEndDate )(
        __x_ABI_CWindows_CApplicationModel_CStore_CIProductListing2 * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsOnSale )(
        __x_ABI_CWindows_CApplicationModel_CStore_CIProductListing2 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CurrencyCode )(
        __x_ABI_CWindows_CApplicationModel_CStore_CIProductListing2 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CStore_CIProductListing2Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CStore_CIProductListing2
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CStore_CIProductListing2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_FormattedBasePrice(This,value) )
    ( (This)->lpVtbl->get_SaleEndDate(This,value) )
    ( (This)->lpVtbl->get_IsOnSale(This,value) )
    ( (This)->lpVtbl->get_CurrencyCode(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CIProductListing2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_IProductListingWithConsumables[] = L"Windows.ApplicationModel.Store.IProductListingWithConsumables";
typedef struct __x_ABI_CWindows_CApplicationModel_CStore_CIProductListingWithConsumablesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CIProductListingWithConsumables * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CIProductListingWithConsumables * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CIProductListingWithConsumables * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CIProductListingWithConsumables * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CIProductListingWithConsumables * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CIProductListingWithConsumables * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ProductType )(
        __x_ABI_CWindows_CApplicationModel_CStore_CIProductListingWithConsumables * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CStore_CProductType * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CStore_CIProductListingWithConsumablesVtbl;
interface __x_ABI_CWindows_CApplicationModel_CStore_CIProductListingWithConsumables
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CStore_CIProductListingWithConsumablesVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ProductType(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CIProductListingWithConsumables;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_IProductListingWithMetadata[] = L"Windows.ApplicationModel.Store.IProductListingWithMetadata";
typedef struct __x_ABI_CWindows_CApplicationModel_CStore_CIProductListingWithMetadataVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CIProductListingWithMetadata * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CIProductListingWithMetadata * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CIProductListingWithMetadata * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CIProductListingWithMetadata * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CIProductListingWithMetadata * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CIProductListingWithMetadata * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Description )(
        __x_ABI_CWindows_CApplicationModel_CStore_CIProductListingWithMetadata * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Keywords )(
        __x_ABI_CWindows_CApplicationModel_CStore_CIProductListingWithMetadata * This,
                           __RPC__deref_out_opt __FIIterable_1_HSTRING * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ProductType )(
        __x_ABI_CWindows_CApplicationModel_CStore_CIProductListingWithMetadata * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CStore_CProductType * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Tag )(
        __x_ABI_CWindows_CApplicationModel_CStore_CIProductListingWithMetadata * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ImageUri )(
        __x_ABI_CWindows_CApplicationModel_CStore_CIProductListingWithMetadata * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CStore_CIProductListingWithMetadataVtbl;
interface __x_ABI_CWindows_CApplicationModel_CStore_CIProductListingWithMetadata
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CStore_CIProductListingWithMetadataVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Description(This,value) )
    ( (This)->lpVtbl->get_Keywords(This,value) )
    ( (This)->lpVtbl->get_ProductType(This,value) )
    ( (This)->lpVtbl->get_Tag(This,value) )
    ( (This)->lpVtbl->get_ImageUri(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CIProductListingWithMetadata;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_IProductPurchaseDisplayProperties[] = L"Windows.ApplicationModel.Store.IProductPurchaseDisplayProperties";
typedef struct __x_ABI_CWindows_CApplicationModel_CStore_CIProductPurchaseDisplayPropertiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CIProductPurchaseDisplayProperties * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CIProductPurchaseDisplayProperties * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CIProductPurchaseDisplayProperties * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CIProductPurchaseDisplayProperties * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CIProductPurchaseDisplayProperties * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CIProductPurchaseDisplayProperties * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Name )(
        __x_ABI_CWindows_CApplicationModel_CStore_CIProductPurchaseDisplayProperties * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Name )(
        __x_ABI_CWindows_CApplicationModel_CStore_CIProductPurchaseDisplayProperties * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Description )(
        __x_ABI_CWindows_CApplicationModel_CStore_CIProductPurchaseDisplayProperties * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Description )(
        __x_ABI_CWindows_CApplicationModel_CStore_CIProductPurchaseDisplayProperties * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Image )(
        __x_ABI_CWindows_CApplicationModel_CStore_CIProductPurchaseDisplayProperties * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Image )(
        __x_ABI_CWindows_CApplicationModel_CStore_CIProductPurchaseDisplayProperties * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CStore_CIProductPurchaseDisplayPropertiesVtbl;
interface __x_ABI_CWindows_CApplicationModel_CStore_CIProductPurchaseDisplayProperties
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CStore_CIProductPurchaseDisplayPropertiesVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Name(This,value) )
    ( (This)->lpVtbl->put_Name(This,value) )
    ( (This)->lpVtbl->get_Description(This,value) )
    ( (This)->lpVtbl->put_Description(This,value) )
    ( (This)->lpVtbl->get_Image(This,value) )
    ( (This)->lpVtbl->put_Image(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CIProductPurchaseDisplayProperties;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_IProductPurchaseDisplayPropertiesFactory[] = L"Windows.ApplicationModel.Store.IProductPurchaseDisplayPropertiesFactory";
typedef struct __x_ABI_CWindows_CApplicationModel_CStore_CIProductPurchaseDisplayPropertiesFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CIProductPurchaseDisplayPropertiesFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CIProductPurchaseDisplayPropertiesFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CIProductPurchaseDisplayPropertiesFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CIProductPurchaseDisplayPropertiesFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CIProductPurchaseDisplayPropertiesFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CIProductPurchaseDisplayPropertiesFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateProductPurchaseDisplayProperties )(
        __x_ABI_CWindows_CApplicationModel_CStore_CIProductPurchaseDisplayPropertiesFactory * This,
                  __RPC__in HSTRING name,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CStore_CIProductPurchaseDisplayProperties * * displayProperties
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CStore_CIProductPurchaseDisplayPropertiesFactoryVtbl;
interface __x_ABI_CWindows_CApplicationModel_CStore_CIProductPurchaseDisplayPropertiesFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CStore_CIProductPurchaseDisplayPropertiesFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateProductPurchaseDisplayProperties(This,name,displayProperties) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CIProductPurchaseDisplayPropertiesFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_IPurchaseResults[] = L"Windows.ApplicationModel.Store.IPurchaseResults";
typedef struct __x_ABI_CWindows_CApplicationModel_CStore_CIPurchaseResultsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CIPurchaseResults * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CIPurchaseResults * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CIPurchaseResults * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CIPurchaseResults * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CIPurchaseResults * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CIPurchaseResults * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CApplicationModel_CStore_CIPurchaseResults * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CStore_CProductPurchaseStatus * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TransactionId )(
        __x_ABI_CWindows_CApplicationModel_CStore_CIPurchaseResults * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ReceiptXml )(
        __x_ABI_CWindows_CApplicationModel_CStore_CIPurchaseResults * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_OfferId )(
        __x_ABI_CWindows_CApplicationModel_CStore_CIPurchaseResults * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CStore_CIPurchaseResultsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CStore_CIPurchaseResults
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CStore_CIPurchaseResultsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Status(This,value) )
    ( (This)->lpVtbl->get_TransactionId(This,value) )
    ( (This)->lpVtbl->get_ReceiptXml(This,value) )
    ( (This)->lpVtbl->get_OfferId(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CIPurchaseResults;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_IUnfulfilledConsumable[] = L"Windows.ApplicationModel.Store.IUnfulfilledConsumable";
typedef struct __x_ABI_CWindows_CApplicationModel_CStore_CIUnfulfilledConsumableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CIUnfulfilledConsumable * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CIUnfulfilledConsumable * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CIUnfulfilledConsumable * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CIUnfulfilledConsumable * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CIUnfulfilledConsumable * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CIUnfulfilledConsumable * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ProductId )(
        __x_ABI_CWindows_CApplicationModel_CStore_CIUnfulfilledConsumable * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TransactionId )(
        __x_ABI_CWindows_CApplicationModel_CStore_CIUnfulfilledConsumable * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_OfferId )(
        __x_ABI_CWindows_CApplicationModel_CStore_CIUnfulfilledConsumable * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CStore_CIUnfulfilledConsumableVtbl;
interface __x_ABI_CWindows_CApplicationModel_CStore_CIUnfulfilledConsumable
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CStore_CIUnfulfilledConsumableVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ProductId(This,value) )
    ( (This)->lpVtbl->get_TransactionId(This,value) )
    ( (This)->lpVtbl->get_OfferId(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CIUnfulfilledConsumable;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Store_CurrentApp[] = L"Windows.ApplicationModel.Store.CurrentApp";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Store_CurrentAppSimulator[] = L"Windows.ApplicationModel.Store.CurrentAppSimulator";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Store_LicenseInformation[] = L"Windows.ApplicationModel.Store.LicenseInformation";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Store_ListingInformation[] = L"Windows.ApplicationModel.Store.ListingInformation";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Store_ProductLicense[] = L"Windows.ApplicationModel.Store.ProductLicense";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Store_ProductListing[] = L"Windows.ApplicationModel.Store.ProductListing";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Store_ProductPurchaseDisplayProperties[] = L"Windows.ApplicationModel.Store.ProductPurchaseDisplayProperties";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Store_PurchaseResults[] = L"Windows.ApplicationModel.Store.PurchaseResults";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Store_UnfulfilledConsumable[] = L"Windows.ApplicationModel.Store.UnfulfilledConsumable";
       
       
#pragma clang diagnostic pop

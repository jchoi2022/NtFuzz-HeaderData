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
#include "Windows.Security.Authentication.Web.Core.h"
#include "Windows.Security.Credentials.h"
#include "Windows.Storage.Streams.h"
#include "Windows.System.h"
#include "Windows.UI.Xaml.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIDeliveryOptimizationSettings __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIDeliveryOptimizationSettings;
typedef interface __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIDeliveryOptimizationSettingsStatics __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIDeliveryOptimizationSettingsStatics;
typedef interface __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics;
typedef interface __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics2 __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics2;
typedef interface __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics3 __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics3;
typedef interface __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics4 __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics4;
typedef interface __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics5 __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics5;
typedef interface __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreHardwareManufacturerInfo __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreHardwareManufacturerInfo;
typedef interface __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreview __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreview;
typedef interface __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewProductInfo __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewProductInfo;
typedef interface __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewPurchaseResults __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewPurchaseResults;
typedef interface __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewSkuInfo __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewSkuInfo;
typedef interface __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIWebAuthenticationCoreManagerHelper __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIWebAuthenticationCoreManagerHelper;
typedef interface __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo;
EXTERN_C const IID IID___FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo;
typedef struct __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewProductInfo * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewProductInfo * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfoVtbl;
interface __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo
{
    CONST_VTBL struct __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfoVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo;
EXTERN_C const IID IID___FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo;
typedef struct __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo * This, __RPC__deref_out_opt __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo **first);
    END_INTERFACE
} __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfoVtbl;
interface __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo
{
    CONST_VTBL struct __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfoVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfo __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfo;
EXTERN_C const IID IID___FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfo;
typedef struct __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfo * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfo * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfo * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfo * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfo * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewSkuInfo * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfo * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfo * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfo * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewSkuInfo * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfoVtbl;
interface __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfo
{
    CONST_VTBL struct __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfoVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfo __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfo;
EXTERN_C const IID IID___FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfo;
typedef struct __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfo * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfo * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfo * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfo * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfo * This, __RPC__deref_out_opt __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfo **first);
    END_INTERFACE
} __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfoVtbl;
interface __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfo
{
    CONST_VTBL struct __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfoVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
enum __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CStoreSystemFeature;
typedef interface __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature;
EXTERN_C const IID IID___FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature;
typedef struct __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeatureVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature * This, __RPC__out enum __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CStoreSystemFeature *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CStoreSystemFeature *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeatureVtbl;
interface __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature
{
    CONST_VTBL struct __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeatureVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature;
EXTERN_C const IID IID___FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature;
typedef struct __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeatureVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature * This, __RPC__deref_out_opt __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature **first);
    END_INTERFACE
} __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeatureVtbl;
interface __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature
{
    CONST_VTBL struct __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeatureVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo;
EXTERN_C const IID IID___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo;
typedef struct __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewProductInfo * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo * This,
                       __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewProductInfo * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewProductInfo * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfoVtbl;
interface __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo
{
    CONST_VTBL struct __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfoVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfo __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfo;
EXTERN_C const IID IID___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfo;
typedef struct __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfo * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfo * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfo * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfo * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfo * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewSkuInfo * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfo * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfo * This,
                       __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewSkuInfo * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfo * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewSkuInfo * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfoVtbl;
interface __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfo
{
    CONST_VTBL struct __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfoVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature;
EXTERN_C const IID IID___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature;
typedef struct __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeatureVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature * This,
                                                    unsigned int index,
                                                             __RPC__out enum __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CStoreSystemFeature *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature * This,
                       enum __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CStoreSystemFeature item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CStoreSystemFeature *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeatureVtbl;
interface __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature
{
    CONST_VTBL struct __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeatureVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewPurchaseResults __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewPurchaseResults;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewPurchaseResults;
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewPurchaseResults __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewPurchaseResults;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewPurchaseResultsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewPurchaseResults * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewPurchaseResults * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewPurchaseResults * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewPurchaseResults * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewPurchaseResults *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewPurchaseResultsVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewPurchaseResults
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewPurchaseResultsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewPurchaseResults __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewPurchaseResults;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewPurchaseResults;
typedef struct __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewPurchaseResultsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewPurchaseResults * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewPurchaseResults * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewPurchaseResults * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewPurchaseResults * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewPurchaseResults * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewPurchaseResults * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewPurchaseResults * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewPurchaseResults *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewPurchaseResults * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewPurchaseResults **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewPurchaseResults * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewPurchaseResults * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewPurchaseResultsVtbl;
interface __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewPurchaseResults
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewPurchaseResultsVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo;
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo;
typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo * This, __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfoVtbl;
interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfoVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo;
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo;
typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo * This, __RPC__out __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfoVtbl;
interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfoVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature;
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature;
typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeatureVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature * This, __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeatureVtbl;
interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeatureVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature;
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature;
typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeatureVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature * This, __RPC__out __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeatureVtbl;
interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeatureVtbl *lpVtbl;
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
typedef interface __FIReference_1_UINT32 __FIReference_1_UINT32;
EXTERN_C const IID IID___FIReference_1_UINT32;
typedef struct __FIReference_1_UINT32Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_UINT32 * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_UINT32 * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_UINT32 * This );
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_UINT32 * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_UINT32 * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_UINT32 * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_UINT32 * This, __RPC__out unsigned int *value);
    END_INTERFACE
} __FIReference_1_UINT32Vtbl;
interface __FIReference_1_UINT32
{
    CONST_VTBL struct __FIReference_1_UINT32Vtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Value(This,value) )
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference;
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference;
typedef interface __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamReferenceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamReferenceVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamReferenceVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference;
typedef struct __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReferenceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference * This, __RPC__out __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReferenceVtbl;
interface __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReferenceVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequestResult __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequestResult;
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult;
typedef interface __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResultVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult;
typedef struct __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult * This, __RPC__out __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequestResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResultVtbl;
interface __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResultVtbl *lpVtbl;
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
typedef struct __x_ABI_CWindows_CFoundation_CDateTime __x_ABI_CWindows_CFoundation_CDateTime;
typedef interface __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest;
typedef interface __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccount __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccount;
typedef interface __x_ABI_CWindows_CSystem_CIUser __x_ABI_CWindows_CSystem_CIUser;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIUIElement __x_ABI_CWindows_CUI_CXaml_CIUIElement;
typedef enum __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CDeliveryOptimizationDownloadMode __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CDeliveryOptimizationDownloadMode;
typedef enum __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CDeliveryOptimizationDownloadModeSource __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CDeliveryOptimizationDownloadModeSource;
typedef enum __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CStoreLogOptions __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CStoreLogOptions;
typedef enum __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CStorePreviewProductPurchaseStatus __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CStorePreviewProductPurchaseStatus;
typedef enum __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CStoreSystemFeature __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CStoreSystemFeature;
enum __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CDeliveryOptimizationDownloadMode
{
    DeliveryOptimizationDownloadMode_Simple = 0,
    DeliveryOptimizationDownloadMode_HttpOnly = 1,
    DeliveryOptimizationDownloadMode_Lan = 2,
    DeliveryOptimizationDownloadMode_Group = 3,
    DeliveryOptimizationDownloadMode_Internet = 4,
    DeliveryOptimizationDownloadMode_Bypass = 5,
};
enum __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CDeliveryOptimizationDownloadModeSource
{
    DeliveryOptimizationDownloadModeSource_Default = 0,
    DeliveryOptimizationDownloadModeSource_Policy = 1,
};
enum __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CStoreLogOptions
{
    StoreLogOptions_None = 0,
    StoreLogOptions_TryElevate = 0x1,
};
enum __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CStorePreviewProductPurchaseStatus
{
    StorePreviewProductPurchaseStatus_Succeeded = 0,
    StorePreviewProductPurchaseStatus_AlreadyPurchased = 1,
    StorePreviewProductPurchaseStatus_NotFulfilled = 2,
    StorePreviewProductPurchaseStatus_NotPurchased = 3,
};
enum __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CStoreSystemFeature
{
    StoreSystemFeature_ArchitectureX86 = 0,
    StoreSystemFeature_ArchitectureX64 = 1,
    StoreSystemFeature_ArchitectureArm = 2,
    StoreSystemFeature_DirectX9 = 3,
    StoreSystemFeature_DirectX10 = 4,
    StoreSystemFeature_DirectX11 = 5,
    StoreSystemFeature_D3D12HardwareFL11 = 6,
    StoreSystemFeature_D3D12HardwareFL12 = 7,
    StoreSystemFeature_Memory300MB = 8,
    StoreSystemFeature_Memory750MB = 9,
    StoreSystemFeature_Memory1GB = 10,
    StoreSystemFeature_Memory2GB = 11,
    StoreSystemFeature_CameraFront = 12,
    StoreSystemFeature_CameraRear = 13,
    StoreSystemFeature_Gyroscope = 14,
    StoreSystemFeature_Hover = 15,
    StoreSystemFeature_Magnetometer = 16,
    StoreSystemFeature_Nfc = 17,
    StoreSystemFeature_Resolution720P = 18,
    StoreSystemFeature_ResolutionWvga = 19,
    StoreSystemFeature_ResolutionWvgaOr720P = 20,
    StoreSystemFeature_ResolutionWxga = 21,
    StoreSystemFeature_ResolutionWvgaOrWxga = 22,
    StoreSystemFeature_ResolutionWxgaOr720P = 23,
    StoreSystemFeature_Memory4GB = 24,
    StoreSystemFeature_Memory6GB = 25,
    StoreSystemFeature_Memory8GB = 26,
    StoreSystemFeature_Memory12GB = 27,
    StoreSystemFeature_Memory16GB = 28,
    StoreSystemFeature_Memory20GB = 29,
    StoreSystemFeature_VideoMemory2GB = 30,
    StoreSystemFeature_VideoMemory4GB = 31,
    StoreSystemFeature_VideoMemory6GB = 32,
    StoreSystemFeature_VideoMemory1GB = 33,
    StoreSystemFeature_ArchitectureArm64 = 34,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_Preview_IDeliveryOptimizationSettings[] = L"Windows.ApplicationModel.Store.Preview.IDeliveryOptimizationSettings";
typedef struct __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIDeliveryOptimizationSettingsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIDeliveryOptimizationSettings * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIDeliveryOptimizationSettings * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIDeliveryOptimizationSettings * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIDeliveryOptimizationSettings * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIDeliveryOptimizationSettings * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIDeliveryOptimizationSettings * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DownloadMode )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIDeliveryOptimizationSettings * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CDeliveryOptimizationDownloadMode * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DownloadModeSource )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIDeliveryOptimizationSettings * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CDeliveryOptimizationDownloadModeSource * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIDeliveryOptimizationSettingsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIDeliveryOptimizationSettings
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIDeliveryOptimizationSettingsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DownloadMode(This,value) )
    ( (This)->lpVtbl->get_DownloadModeSource(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIDeliveryOptimizationSettings;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_Preview_IDeliveryOptimizationSettingsStatics[] = L"Windows.ApplicationModel.Store.Preview.IDeliveryOptimizationSettingsStatics";
typedef struct __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIDeliveryOptimizationSettingsStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIDeliveryOptimizationSettingsStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIDeliveryOptimizationSettingsStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIDeliveryOptimizationSettingsStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIDeliveryOptimizationSettingsStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIDeliveryOptimizationSettingsStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIDeliveryOptimizationSettingsStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetCurrentSettings )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIDeliveryOptimizationSettingsStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIDeliveryOptimizationSettings * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIDeliveryOptimizationSettingsStaticsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIDeliveryOptimizationSettingsStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIDeliveryOptimizationSettingsStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetCurrentSettings(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIDeliveryOptimizationSettingsStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_Preview_IStoreConfigurationStatics[] = L"Windows.ApplicationModel.Store.Preview.IStoreConfigurationStatics";
typedef struct __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *SetSystemConfiguration )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics * This,
                  __RPC__in HSTRING catalogHardwareManufacturerId,
                  __RPC__in HSTRING catalogStoreContentModifierId,
                  __x_ABI_CWindows_CFoundation_CDateTime systemConfigurationExpiration,
                  __RPC__in HSTRING catalogHardwareDescriptor
        );
    HRESULT ( STDMETHODCALLTYPE *SetMobileOperatorConfiguration )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics * This,
                  __RPC__in HSTRING mobileOperatorId,
                  UINT32 appDownloadLimitInMegabytes,
                  UINT32 updateDownloadLimitInMegabytes
        );
    HRESULT ( STDMETHODCALLTYPE *SetStoreWebAccountId )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics * This,
                  __RPC__in HSTRING webAccountId
        );
    HRESULT ( STDMETHODCALLTYPE *IsStoreWebAccountId )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics * This,
                  __RPC__in HSTRING webAccountId,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HardwareManufacturerInfo )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreHardwareManufacturerInfo * * value
        );
    HRESULT ( STDMETHODCALLTYPE *FilterUnsupportedSystemFeaturesAsync )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics * This,
                  __RPC__in_opt __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature * systemFeatures,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStaticsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->SetSystemConfiguration(This,catalogHardwareManufacturerId,catalogStoreContentModifierId,systemConfigurationExpiration,catalogHardwareDescriptor) )
    ( (This)->lpVtbl->SetMobileOperatorConfiguration(This,mobileOperatorId,appDownloadLimitInMegabytes,updateDownloadLimitInMegabytes) )
    ( (This)->lpVtbl->SetStoreWebAccountId(This,webAccountId) )
    ( (This)->lpVtbl->IsStoreWebAccountId(This,webAccountId,value) )
    ( (This)->lpVtbl->get_HardwareManufacturerInfo(This,value) )
    ( (This)->lpVtbl->FilterUnsupportedSystemFeaturesAsync(This,systemFeatures,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_Preview_IStoreConfigurationStatics2[] = L"Windows.ApplicationModel.Store.Preview.IStoreConfigurationStatics2";
typedef struct __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_PurchasePromptingPolicy )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics2 * This,
                           __RPC__deref_out_opt __FIReference_1_UINT32 * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_PurchasePromptingPolicy )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics2 * This,
                  __RPC__in_opt __FIReference_1_UINT32 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics2Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_PurchasePromptingPolicy(This,value) )
    ( (This)->lpVtbl->put_PurchasePromptingPolicy(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_Preview_IStoreConfigurationStatics3[] = L"Windows.ApplicationModel.Store.Preview.IStoreConfigurationStatics3";
typedef struct __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *HasStoreWebAccount )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics3 * This,
                           __RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *HasStoreWebAccountForUser )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics3 * This,
                  __RPC__in_opt __x_ABI_CWindows_CSystem_CIUser * user,
                           __RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetStoreLogDataAsync )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics3 * This,
                  __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CStoreLogOptions options,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *SetStoreWebAccountIdForUser )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics3 * This,
                  __RPC__in_opt __x_ABI_CWindows_CSystem_CIUser * user,
                  __RPC__in HSTRING webAccountId
        );
    HRESULT ( STDMETHODCALLTYPE *IsStoreWebAccountIdForUser )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics3 * This,
                  __RPC__in_opt __x_ABI_CWindows_CSystem_CIUser * user,
                  __RPC__in HSTRING webAccountId,
                           __RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetPurchasePromptingPolicyForUser )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics3 * This,
                  __RPC__in_opt __x_ABI_CWindows_CSystem_CIUser * user,
                           __RPC__deref_out_opt __FIReference_1_UINT32 * * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetPurchasePromptingPolicyForUser )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics3 * This,
                  __RPC__in_opt __x_ABI_CWindows_CSystem_CIUser * user,
                  __RPC__in_opt __FIReference_1_UINT32 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics3Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics3
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->HasStoreWebAccount(This,value) )
    ( (This)->lpVtbl->HasStoreWebAccountForUser(This,user,value) )
    ( (This)->lpVtbl->GetStoreLogDataAsync(This,options,operation) )
    ( (This)->lpVtbl->SetStoreWebAccountIdForUser(This,user,webAccountId) )
    ( (This)->lpVtbl->IsStoreWebAccountIdForUser(This,user,webAccountId,value) )
    ( (This)->lpVtbl->GetPurchasePromptingPolicyForUser(This,user,value) )
    ( (This)->lpVtbl->SetPurchasePromptingPolicyForUser(This,user,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_Preview_IStoreConfigurationStatics4[] = L"Windows.ApplicationModel.Store.Preview.IStoreConfigurationStatics4";
typedef struct __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics4Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics4 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics4 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics4 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics4 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics4 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics4 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetStoreWebAccountId )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics4 * This,
                           __RPC__deref_out_opt HSTRING * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetStoreWebAccountIdForUser )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics4 * This,
                  __RPC__in_opt __x_ABI_CWindows_CSystem_CIUser * user,
                           __RPC__deref_out_opt HSTRING * result
        );
    HRESULT ( STDMETHODCALLTYPE *SetEnterpriseStoreWebAccountId )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics4 * This,
                  __RPC__in HSTRING webAccountId
        );
    HRESULT ( STDMETHODCALLTYPE *SetEnterpriseStoreWebAccountIdForUser )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics4 * This,
                  __RPC__in_opt __x_ABI_CWindows_CSystem_CIUser * user,
                  __RPC__in HSTRING webAccountId
        );
    HRESULT ( STDMETHODCALLTYPE *GetEnterpriseStoreWebAccountId )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics4 * This,
                           __RPC__deref_out_opt HSTRING * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetEnterpriseStoreWebAccountIdForUser )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics4 * This,
                  __RPC__in_opt __x_ABI_CWindows_CSystem_CIUser * user,
                           __RPC__deref_out_opt HSTRING * result
        );
    HRESULT ( STDMETHODCALLTYPE *ShouldRestrictToEnterpriseStoreOnly )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics4 * This,
                           __RPC__out boolean * result
        );
    HRESULT ( STDMETHODCALLTYPE *ShouldRestrictToEnterpriseStoreOnlyForUser )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics4 * This,
                  __RPC__in_opt __x_ABI_CWindows_CSystem_CIUser * user,
                           __RPC__out boolean * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics4Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics4
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics4Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetStoreWebAccountId(This,result) )
    ( (This)->lpVtbl->GetStoreWebAccountIdForUser(This,user,result) )
    ( (This)->lpVtbl->SetEnterpriseStoreWebAccountId(This,webAccountId) )
    ( (This)->lpVtbl->SetEnterpriseStoreWebAccountIdForUser(This,user,webAccountId) )
    ( (This)->lpVtbl->GetEnterpriseStoreWebAccountId(This,result) )
    ( (This)->lpVtbl->GetEnterpriseStoreWebAccountIdForUser(This,user,result) )
    ( (This)->lpVtbl->ShouldRestrictToEnterpriseStoreOnly(This,result) )
    ( (This)->lpVtbl->ShouldRestrictToEnterpriseStoreOnlyForUser(This,user,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics4;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_Preview_IStoreConfigurationStatics5[] = L"Windows.ApplicationModel.Store.Preview.IStoreConfigurationStatics5";
typedef struct __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics5Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics5 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics5 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics5 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics5 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics5 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics5 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *IsPinToDesktopSupported )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics5 * This,
                           __RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *IsPinToTaskbarSupported )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics5 * This,
                           __RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *IsPinToStartSupported )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics5 * This,
                           __RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *PinToDesktop )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics5 * This,
                  __RPC__in HSTRING appPackageFamilyName
        );
    HRESULT ( STDMETHODCALLTYPE *PinToDesktopForUser )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics5 * This,
                  __RPC__in_opt __x_ABI_CWindows_CSystem_CIUser * user,
                  __RPC__in HSTRING appPackageFamilyName
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics5Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics5
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics5Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->IsPinToDesktopSupported(This,value) )
    ( (This)->lpVtbl->IsPinToTaskbarSupported(This,value) )
    ( (This)->lpVtbl->IsPinToStartSupported(This,value) )
    ( (This)->lpVtbl->PinToDesktop(This,appPackageFamilyName) )
    ( (This)->lpVtbl->PinToDesktopForUser(This,user,appPackageFamilyName) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics5;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_Preview_IStoreHardwareManufacturerInfo[] = L"Windows.ApplicationModel.Store.Preview.IStoreHardwareManufacturerInfo";
typedef struct __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreHardwareManufacturerInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreHardwareManufacturerInfo * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreHardwareManufacturerInfo * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreHardwareManufacturerInfo * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreHardwareManufacturerInfo * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreHardwareManufacturerInfo * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreHardwareManufacturerInfo * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_HardwareManufacturerId )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreHardwareManufacturerInfo * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_StoreContentModifierId )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreHardwareManufacturerInfo * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ModelName )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreHardwareManufacturerInfo * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ManufacturerName )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreHardwareManufacturerInfo * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreHardwareManufacturerInfoVtbl;
interface __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreHardwareManufacturerInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreHardwareManufacturerInfoVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_HardwareManufacturerId(This,value) )
    ( (This)->lpVtbl->get_StoreContentModifierId(This,value) )
    ( (This)->lpVtbl->get_ModelName(This,value) )
    ( (This)->lpVtbl->get_ManufacturerName(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreHardwareManufacturerInfo;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_Preview_IStorePreview[] = L"Windows.ApplicationModel.Store.Preview.IStorePreview";
typedef struct __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreview * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreview * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreview * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreview * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreview * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreview * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *RequestProductPurchaseByProductIdAndSkuIdAsync )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreview * This,
                  __RPC__in HSTRING productId,
                  __RPC__in HSTRING skuId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewPurchaseResults * * requestPurchaseBySkuIdOperation
        );
    HRESULT ( STDMETHODCALLTYPE *LoadAddOnProductInfosAsync )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreview * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo * * loadAddOnProductInfosOperation
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewVtbl;
interface __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreview
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->RequestProductPurchaseByProductIdAndSkuIdAsync(This,productId,skuId,requestPurchaseBySkuIdOperation) )
    ( (This)->lpVtbl->LoadAddOnProductInfosAsync(This,loadAddOnProductInfosOperation) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreview;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_Preview_IStorePreviewProductInfo[] = L"Windows.ApplicationModel.Store.Preview.IStorePreviewProductInfo";
typedef struct __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewProductInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewProductInfo * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewProductInfo * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewProductInfo * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewProductInfo * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewProductInfo * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewProductInfo * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ProductId )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewProductInfo * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ProductType )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewProductInfo * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Title )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewProductInfo * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Description )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewProductInfo * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SkuInfoList )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewProductInfo * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfo * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewProductInfoVtbl;
interface __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewProductInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewProductInfoVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ProductId(This,value) )
    ( (This)->lpVtbl->get_ProductType(This,value) )
    ( (This)->lpVtbl->get_Title(This,value) )
    ( (This)->lpVtbl->get_Description(This,value) )
    ( (This)->lpVtbl->get_SkuInfoList(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewProductInfo;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_Preview_IStorePreviewPurchaseResults[] = L"Windows.ApplicationModel.Store.Preview.IStorePreviewPurchaseResults";
typedef struct __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewPurchaseResultsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewPurchaseResults * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewPurchaseResults * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewPurchaseResults * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewPurchaseResults * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewPurchaseResults * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewPurchaseResults * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ProductPurchaseStatus )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewPurchaseResults * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CStorePreviewProductPurchaseStatus * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewPurchaseResultsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewPurchaseResults
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewPurchaseResultsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ProductPurchaseStatus(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewPurchaseResults;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_Preview_IStorePreviewSkuInfo[] = L"Windows.ApplicationModel.Store.Preview.IStorePreviewSkuInfo";
typedef struct __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewSkuInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewSkuInfo * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewSkuInfo * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewSkuInfo * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewSkuInfo * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewSkuInfo * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewSkuInfo * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ProductId )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewSkuInfo * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SkuId )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewSkuInfo * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SkuType )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewSkuInfo * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Title )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewSkuInfo * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Description )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewSkuInfo * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CustomDeveloperData )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewSkuInfo * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CurrencyCode )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewSkuInfo * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FormattedListPrice )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewSkuInfo * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ExtendedData )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewSkuInfo * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewSkuInfoVtbl;
interface __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewSkuInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewSkuInfoVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ProductId(This,value) )
    ( (This)->lpVtbl->get_SkuId(This,value) )
    ( (This)->lpVtbl->get_SkuType(This,value) )
    ( (This)->lpVtbl->get_Title(This,value) )
    ( (This)->lpVtbl->get_Description(This,value) )
    ( (This)->lpVtbl->get_CustomDeveloperData(This,value) )
    ( (This)->lpVtbl->get_CurrencyCode(This,value) )
    ( (This)->lpVtbl->get_FormattedListPrice(This,value) )
    ( (This)->lpVtbl->get_ExtendedData(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewSkuInfo;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_Preview_IWebAuthenticationCoreManagerHelper[] = L"Windows.ApplicationModel.Store.Preview.IWebAuthenticationCoreManagerHelper";
typedef struct __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIWebAuthenticationCoreManagerHelperVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIWebAuthenticationCoreManagerHelper * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIWebAuthenticationCoreManagerHelper * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIWebAuthenticationCoreManagerHelper * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIWebAuthenticationCoreManagerHelper * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIWebAuthenticationCoreManagerHelper * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIWebAuthenticationCoreManagerHelper * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *RequestTokenWithUIElementHostingAsync )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIWebAuthenticationCoreManagerHelper * This,
                  __RPC__in_opt __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest * request,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * uiElement,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult * * asyncInfo
        );
                    HRESULT ( STDMETHODCALLTYPE *RequestTokenWithUIElementHostingAndWebAccountAsync )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIWebAuthenticationCoreManagerHelper * This,
                  __RPC__in_opt __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest * request,
                  __RPC__in_opt __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccount * webAccount,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * uiElement,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult * * asyncInfo
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIWebAuthenticationCoreManagerHelperVtbl;
interface __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIWebAuthenticationCoreManagerHelper
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIWebAuthenticationCoreManagerHelperVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->RequestTokenWithUIElementHostingAsync(This,request,uiElement,asyncInfo) )
    ( (This)->lpVtbl->RequestTokenWithUIElementHostingAndWebAccountAsync(This,request,webAccount,uiElement,asyncInfo) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIWebAuthenticationCoreManagerHelper;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Store_Preview_DeliveryOptimizationSettings[] = L"Windows.ApplicationModel.Store.Preview.DeliveryOptimizationSettings";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Store_Preview_StoreConfiguration[] = L"Windows.ApplicationModel.Store.Preview.StoreConfiguration";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Store_Preview_StoreHardwareManufacturerInfo[] = L"Windows.ApplicationModel.Store.Preview.StoreHardwareManufacturerInfo";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Store_Preview_StorePreview[] = L"Windows.ApplicationModel.Store.Preview.StorePreview";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Store_Preview_StorePreviewProductInfo[] = L"Windows.ApplicationModel.Store.Preview.StorePreviewProductInfo";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Store_Preview_StorePreviewPurchaseResults[] = L"Windows.ApplicationModel.Store.Preview.StorePreviewPurchaseResults";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Store_Preview_StorePreviewSkuInfo[] = L"Windows.ApplicationModel.Store.Preview.StorePreviewSkuInfo";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Store_Preview_WebAuthenticationCoreManagerHelper[] = L"Windows.ApplicationModel.Store.Preview.WebAuthenticationCoreManagerHelper";
       
       
#pragma clang diagnostic pop

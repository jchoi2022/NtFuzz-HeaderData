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
#include "Windows.Devices.Geolocation.h"
#include "Windows.Globalization.h"
#include "Windows.Services.Maps.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalCategoriesStatics __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalCategoriesStatics;
typedef interface __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocation __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocation;
typedef interface __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocation2 __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocation2;
typedef interface __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationFinderResult __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationFinderResult;
typedef interface __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationFinderStatics __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationFinderStatics;
typedef interface __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationHoursOfOperationItem __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationHoursOfOperationItem;
typedef interface __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationRatingInfo __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationRatingInfo;
typedef interface __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CIPlaceInfoHelperStatics __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CIPlaceInfoHelperStatics;
typedef interface __FIIterator_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation __FIIterator_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation;
EXTERN_C const IID IID___FIIterator_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation;
typedef struct __FIIterator_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation * This, __RPC__out __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocation * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocation * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationVtbl;
interface __FIIterator_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation
{
    CONST_VTBL struct __FIIterator_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation __FIIterable_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation;
EXTERN_C const IID IID___FIIterable_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation;
typedef struct __FIIterable_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation * This, __RPC__deref_out_opt __FIIterator_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation **first);
    END_INTERFACE
} __FIIterable_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationVtbl;
interface __FIIterable_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation
{
    CONST_VTBL struct __FIIterable_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItem __FIIterator_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItem;
EXTERN_C const IID IID___FIIterator_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItem;
typedef struct __FIIterator_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItemVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItem * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItem * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItem * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItem * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItem * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItem * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItem * This, __RPC__out __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationHoursOfOperationItem * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItem * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItem * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItem * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationHoursOfOperationItem * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItemVtbl;
interface __FIIterator_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItem
{
    CONST_VTBL struct __FIIterator_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItemVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItem __FIIterable_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItem;
EXTERN_C const IID IID___FIIterable_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItem;
typedef struct __FIIterable_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItemVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItem * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItem * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItem * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItem * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItem * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItem * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItem * This, __RPC__deref_out_opt __FIIterator_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItem **first);
    END_INTERFACE
} __FIIterable_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItemVtbl;
interface __FIIterable_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItem
{
    CONST_VTBL struct __FIIterable_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItemVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation __FIVectorView_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation;
EXTERN_C const IID IID___FIVectorView_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation;
typedef struct __FIVectorView_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocation * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation * This,
                       __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocation * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocation * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationVtbl;
interface __FIVectorView_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation
{
    CONST_VTBL struct __FIVectorView_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItem __FIVectorView_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItem;
EXTERN_C const IID IID___FIVectorView_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItem;
typedef struct __FIVectorView_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItemVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItem * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItem * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItem * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItem * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItem * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItem * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItem * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationHoursOfOperationItem * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItem * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItem * This,
                       __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationHoursOfOperationItem * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItem * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationHoursOfOperationItem * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItemVtbl;
interface __FIVectorView_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItem
{
    CONST_VTBL struct __FIVectorView_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItemVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationFinderResult __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationFinderResult;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationFinderResult;
typedef interface __FIAsyncOperation_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationFinderResult __FIAsyncOperation_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationFinderResult;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationFinderResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationFinderResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationFinderResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationFinderResult * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationFinderResult * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationFinderResult *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationFinderResultVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationFinderResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationFinderResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationFinderResult __FIAsyncOperation_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationFinderResult;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationFinderResult;
typedef struct __FIAsyncOperation_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationFinderResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationFinderResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationFinderResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationFinderResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationFinderResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationFinderResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationFinderResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationFinderResult * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationFinderResult *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationFinderResult * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationFinderResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationFinderResult * This, __RPC__out __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationFinderResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationFinderResultVtbl;
interface __FIAsyncOperation_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationFinderResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationFinderResultVtbl *lpVtbl;
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
typedef interface __FIReference_1_double __FIReference_1_double;
EXTERN_C const IID IID___FIReference_1_double;
typedef struct __FIReference_1_doubleVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_double * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_double * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_double * This );
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_double * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_double * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_double * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_double * This, __RPC__out double *value);
    END_INTERFACE
} __FIReference_1_doubleVtbl;
interface __FIReference_1_double
{
    CONST_VTBL struct __FIReference_1_doubleVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Value(This,value) )
typedef interface __FIReference_1_int __FIReference_1_int;
EXTERN_C const IID IID___FIReference_1_int;
typedef struct __FIReference_1_intVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_int * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_int * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_int * This );
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_int * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_int * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_int * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_int * This, __RPC__out int *value);
    END_INTERFACE
} __FIReference_1_intVtbl;
interface __FIReference_1_int
{
    CONST_VTBL struct __FIReference_1_intVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Value(This,value) )
typedef interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeocircle __x_ABI_CWindows_CDevices_CGeolocation_CIGeocircle;
typedef interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint;
typedef struct __x_ABI_CWindows_CFoundation_CTimeSpan __x_ABI_CWindows_CFoundation_CTimeSpan;
typedef enum __x_ABI_CWindows_CGlobalization_CDayOfWeek __x_ABI_CWindows_CGlobalization_CDayOfWeek;
typedef interface __x_ABI_CWindows_CServices_CMaps_CIMapAddress __x_ABI_CWindows_CServices_CMaps_CIMapAddress;
typedef interface __x_ABI_CWindows_CServices_CMaps_CIPlaceInfo __x_ABI_CWindows_CServices_CMaps_CIPlaceInfo;
typedef enum __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CLocalLocationFinderStatus __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CLocalLocationFinderStatus;
enum __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CLocalLocationFinderStatus
{
    LocalLocationFinderStatus_Success = 0,
    LocalLocationFinderStatus_UnknownError = 1,
    LocalLocationFinderStatus_InvalidCredentials = 2,
    LocalLocationFinderStatus_InvalidCategory = 3,
    LocalLocationFinderStatus_InvalidSearchTerm = 4,
    LocalLocationFinderStatus_InvalidSearchArea = 5,
    LocalLocationFinderStatus_NetworkFailure = 6,
    LocalLocationFinderStatus_NotSupported = 7,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_LocalSearch_ILocalCategoriesStatics[] = L"Windows.Services.Maps.LocalSearch.ILocalCategoriesStatics";
typedef struct __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalCategoriesStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalCategoriesStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalCategoriesStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalCategoriesStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalCategoriesStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalCategoriesStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalCategoriesStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_BankAndCreditUnions )(
        __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalCategoriesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_EatDrink )(
        __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalCategoriesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Hospitals )(
        __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalCategoriesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HotelsAndMotels )(
        __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalCategoriesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_All )(
        __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalCategoriesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Parking )(
        __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalCategoriesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SeeDo )(
        __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalCategoriesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Shop )(
        __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalCategoriesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalCategoriesStaticsVtbl;
interface __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalCategoriesStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalCategoriesStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_BankAndCreditUnions(This,value) )
    ( (This)->lpVtbl->get_EatDrink(This,value) )
    ( (This)->lpVtbl->get_Hospitals(This,value) )
    ( (This)->lpVtbl->get_HotelsAndMotels(This,value) )
    ( (This)->lpVtbl->get_All(This,value) )
    ( (This)->lpVtbl->get_Parking(This,value) )
    ( (This)->lpVtbl->get_SeeDo(This,value) )
    ( (This)->lpVtbl->get_Shop(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalCategoriesStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_LocalSearch_ILocalLocation[] = L"Windows.Services.Maps.LocalSearch.ILocalLocation";
typedef struct __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocation * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocation * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocation * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocation * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocation * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocation * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Address )(
        __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocation * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CServices_CMaps_CIMapAddress * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Identifier )(
        __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocation * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Description )(
        __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocation * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DisplayName )(
        __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocation * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Point )(
        __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocation * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PhoneNumber )(
        __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocation * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DataAttribution )(
        __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocation * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationVtbl;
interface __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocation
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Address(This,value) )
    ( (This)->lpVtbl->get_Identifier(This,value) )
    ( (This)->lpVtbl->get_Description(This,value) )
    ( (This)->lpVtbl->get_DisplayName(This,value) )
    ( (This)->lpVtbl->get_Point(This,value) )
    ( (This)->lpVtbl->get_PhoneNumber(This,value) )
    ( (This)->lpVtbl->get_DataAttribution(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocation;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_LocalSearch_ILocalLocation2[] = L"Windows.Services.Maps.LocalSearch.ILocalLocation2";
typedef struct __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocation2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocation2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocation2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocation2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocation2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocation2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocation2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Category )(
        __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocation2 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RatingInfo )(
        __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocation2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationRatingInfo * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HoursOfOperation )(
        __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocation2 * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItem * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocation2Vtbl;
interface __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocation2
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocation2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Category(This,value) )
    ( (This)->lpVtbl->get_RatingInfo(This,value) )
    ( (This)->lpVtbl->get_HoursOfOperation(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocation2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_LocalSearch_ILocalLocationFinderResult[] = L"Windows.Services.Maps.LocalSearch.ILocalLocationFinderResult";
typedef struct __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationFinderResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationFinderResult * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationFinderResult * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationFinderResult * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationFinderResult * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationFinderResult * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationFinderResult * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_LocalLocations )(
        __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationFinderResult * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationFinderResult * This,
                           __RPC__out __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CLocalLocationFinderStatus * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationFinderResultVtbl;
interface __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationFinderResult
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationFinderResultVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_LocalLocations(This,value) )
    ( (This)->lpVtbl->get_Status(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationFinderResult;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_LocalSearch_ILocalLocationFinderStatics[] = L"Windows.Services.Maps.LocalSearch.ILocalLocationFinderStatics";
typedef struct __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationFinderStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationFinderStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationFinderStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationFinderStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationFinderStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationFinderStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationFinderStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *FindLocalLocationsAsync )(
        __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationFinderStatics * This,
                  __RPC__in HSTRING searchTerm,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeocircle * searchArea,
                  __RPC__in HSTRING localCategory,
                  UINT32 maxResults,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationFinderResult * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationFinderStaticsVtbl;
interface __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationFinderStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationFinderStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->FindLocalLocationsAsync(This,searchTerm,searchArea,localCategory,maxResults,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationFinderStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_LocalSearch_ILocalLocationHoursOfOperationItem[] = L"Windows.Services.Maps.LocalSearch.ILocalLocationHoursOfOperationItem";
typedef struct __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationHoursOfOperationItemVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationHoursOfOperationItem * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationHoursOfOperationItem * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationHoursOfOperationItem * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationHoursOfOperationItem * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationHoursOfOperationItem * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationHoursOfOperationItem * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Day )(
        __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationHoursOfOperationItem * This,
                           __RPC__out __x_ABI_CWindows_CGlobalization_CDayOfWeek * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Start )(
        __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationHoursOfOperationItem * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Span )(
        __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationHoursOfOperationItem * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationHoursOfOperationItemVtbl;
interface __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationHoursOfOperationItem
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationHoursOfOperationItemVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Day(This,value) )
    ( (This)->lpVtbl->get_Start(This,value) )
    ( (This)->lpVtbl->get_Span(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationHoursOfOperationItem;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_LocalSearch_ILocalLocationRatingInfo[] = L"Windows.Services.Maps.LocalSearch.ILocalLocationRatingInfo";
typedef struct __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationRatingInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationRatingInfo * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationRatingInfo * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationRatingInfo * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationRatingInfo * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationRatingInfo * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationRatingInfo * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AggregateRating )(
        __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationRatingInfo * This,
                           __RPC__deref_out_opt __FIReference_1_double * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RatingCount )(
        __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationRatingInfo * This,
                           __RPC__deref_out_opt __FIReference_1_int * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ProviderIdentifier )(
        __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationRatingInfo * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationRatingInfoVtbl;
interface __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationRatingInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationRatingInfoVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AggregateRating(This,value) )
    ( (This)->lpVtbl->get_RatingCount(This,value) )
    ( (This)->lpVtbl->get_ProviderIdentifier(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationRatingInfo;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_LocalSearch_IPlaceInfoHelperStatics[] = L"Windows.Services.Maps.LocalSearch.IPlaceInfoHelperStatics";
typedef struct __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CIPlaceInfoHelperStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CIPlaceInfoHelperStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CIPlaceInfoHelperStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CIPlaceInfoHelperStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CIPlaceInfoHelperStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CIPlaceInfoHelperStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CIPlaceInfoHelperStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateFromLocalLocation )(
        __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CIPlaceInfoHelperStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocation * location,
                           __RPC__deref_out_opt __x_ABI_CWindows_CServices_CMaps_CIPlaceInfo * * resultValue
        );
    END_INTERFACE
} __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CIPlaceInfoHelperStaticsVtbl;
interface __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CIPlaceInfoHelperStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CIPlaceInfoHelperStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateFromLocalLocation(This,location,resultValue) )
EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CLocalSearch_CIPlaceInfoHelperStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Maps_LocalSearch_LocalCategories[] = L"Windows.Services.Maps.LocalSearch.LocalCategories";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Maps_LocalSearch_LocalLocation[] = L"Windows.Services.Maps.LocalSearch.LocalLocation";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Maps_LocalSearch_LocalLocationFinder[] = L"Windows.Services.Maps.LocalSearch.LocalLocationFinder";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Maps_LocalSearch_LocalLocationFinderResult[] = L"Windows.Services.Maps.LocalSearch.LocalLocationFinderResult";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Maps_LocalSearch_LocalLocationHoursOfOperationItem[] = L"Windows.Services.Maps.LocalSearch.LocalLocationHoursOfOperationItem";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Maps_LocalSearch_LocalLocationRatingInfo[] = L"Windows.Services.Maps.LocalSearch.LocalLocationRatingInfo";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Maps_LocalSearch_PlaceInfoHelper[] = L"Windows.Services.Maps.LocalSearch.PlaceInfoHelper";
       
       
#pragma clang diagnostic pop

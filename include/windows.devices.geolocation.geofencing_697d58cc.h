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
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofence __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofence;
typedef interface __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceFactory __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceFactory;
typedef interface __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceMonitor __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceMonitor;
typedef interface __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceMonitorStatics __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceMonitorStatics;
typedef interface __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceStateChangeReport __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceStateChangeReport;
typedef interface __FIIterator_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence __FIIterator_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence;
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence;
typedef struct __FIIterator_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence * This, __RPC__out __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofence * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofence * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceVtbl;
interface __FIIterator_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence __FIIterable_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence;
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence;
typedef struct __FIIterable_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence * This, __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence **first);
    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceVtbl;
interface __FIIterable_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReport __FIIterator_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReport;
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReport;
typedef struct __FIIterator_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReportVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReport * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReport * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReport * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReport * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReport * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReport * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReport * This, __RPC__out __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceStateChangeReport * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReport * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReport * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReport * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceStateChangeReport * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReportVtbl;
interface __FIIterator_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReport
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReportVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReport __FIIterable_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReport;
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReport;
typedef struct __FIIterable_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReportVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReport * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReport * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReport * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReport * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReport * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReport * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReport * This, __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReport **first);
    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReportVtbl;
interface __FIIterable_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReport
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReportVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence __FIVectorView_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence;
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence;
typedef struct __FIVectorView_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofence * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence * This,
                       __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofence * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofence * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceVtbl;
interface __FIVectorView_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReport __FIVectorView_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReport;
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReport;
typedef struct __FIVectorView_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReportVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReport * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReport * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReport * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReport * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReport * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReport * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReport * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceStateChangeReport * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReport * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReport * This,
                       __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceStateChangeReport * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReport * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceStateChangeReport * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReportVtbl;
interface __FIVectorView_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReport
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReportVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence __FIVector_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence;
EXTERN_C const IID IID___FIVector_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence;
typedef struct __FIVector_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence * This, __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofence * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofence * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence * This,
                   __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofence * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofence * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofence * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence * This, __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofence * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofence * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofence * *value);
    END_INTERFACE
} __FIVector_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceVtbl;
interface __FIVector_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence
{
    CONST_VTBL struct __FIVector_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceVtbl *lpVtbl;
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
typedef interface __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceMonitor_IInspectable __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceMonitor_IInspectable;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceMonitor_IInspectable;
typedef struct __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceMonitor_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceMonitor_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceMonitor_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceMonitor_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceMonitor_IInspectable * This, __RPC__in_opt __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceMonitor * sender, __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceMonitor_IInspectableVtbl;
interface __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceMonitor_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceMonitor_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition __x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition;
typedef interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeoshape __x_ABI_CWindows_CDevices_CGeolocation_CIGeoshape;
typedef struct __x_ABI_CWindows_CFoundation_CDateTime __x_ABI_CWindows_CFoundation_CDateTime;
typedef struct __x_ABI_CWindows_CFoundation_CTimeSpan __x_ABI_CWindows_CFoundation_CTimeSpan;
typedef enum __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CGeofenceMonitorStatus __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CGeofenceMonitorStatus;
typedef enum __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CGeofenceRemovalReason __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CGeofenceRemovalReason;
typedef enum __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CGeofenceState __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CGeofenceState;
typedef enum __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CMonitoredGeofenceStates __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CMonitoredGeofenceStates;
enum __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CGeofenceMonitorStatus
{
    GeofenceMonitorStatus_Ready = 0,
    GeofenceMonitorStatus_Initializing = 1,
    GeofenceMonitorStatus_NoData = 2,
    GeofenceMonitorStatus_Disabled = 3,
    GeofenceMonitorStatus_NotInitialized = 4,
    GeofenceMonitorStatus_NotAvailable = 5,
};
enum __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CGeofenceRemovalReason
{
    GeofenceRemovalReason_Used = 0,
    GeofenceRemovalReason_Expired = 1,
};
enum __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CGeofenceState
{
    GeofenceState_None = 0,
    GeofenceState_Entered = 0x1,
    GeofenceState_Exited = 0x2,
    GeofenceState_Removed = 0x4,
};
enum __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CMonitoredGeofenceStates
{
    MonitoredGeofenceStates_None = 0,
    MonitoredGeofenceStates_Entered = 0x1,
    MonitoredGeofenceStates_Exited = 0x2,
    MonitoredGeofenceStates_Removed = 0x4,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Geolocation_Geofencing_IGeofence[] = L"Windows.Devices.Geolocation.Geofencing.IGeofence";
typedef struct __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofence * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofence * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofence * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofence * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofence * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofence * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_StartTime )(
        __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofence * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Duration )(
        __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofence * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DwellTime )(
        __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofence * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofence * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MonitoredStates )(
        __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofence * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CMonitoredGeofenceStates * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Geoshape )(
        __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofence * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeoshape * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SingleUse )(
        __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofence * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceVtbl;
interface __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofence
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_StartTime(This,value) )
    ( (This)->lpVtbl->get_Duration(This,value) )
    ( (This)->lpVtbl->get_DwellTime(This,value) )
    ( (This)->lpVtbl->get_Id(This,value) )
    ( (This)->lpVtbl->get_MonitoredStates(This,value) )
    ( (This)->lpVtbl->get_Geoshape(This,value) )
    ( (This)->lpVtbl->get_SingleUse(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofence;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Geolocation_Geofencing_IGeofenceFactory[] = L"Windows.Devices.Geolocation.Geofencing.IGeofenceFactory";
typedef struct __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceFactory * This,
                  __RPC__in HSTRING id,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeoshape * geoshape,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofence * * geofence
        );
    HRESULT ( STDMETHODCALLTYPE *CreateWithMonitorStates )(
        __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceFactory * This,
                  __RPC__in HSTRING id,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeoshape * geoshape,
                  __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CMonitoredGeofenceStates monitoredStates,
                  boolean singleUse,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofence * * geofence
        );
    HRESULT ( STDMETHODCALLTYPE *CreateWithMonitorStatesAndDwellTime )(
        __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceFactory * This,
                  __RPC__in HSTRING id,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeoshape * geoshape,
                  __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CMonitoredGeofenceStates monitoredStates,
                  boolean singleUse,
                  __x_ABI_CWindows_CFoundation_CTimeSpan dwellTime,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofence * * geofence
        );
    HRESULT ( STDMETHODCALLTYPE *CreateWithMonitorStatesDwellTimeStartTimeAndDuration )(
        __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceFactory * This,
                  __RPC__in HSTRING id,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeoshape * geoshape,
                  __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CMonitoredGeofenceStates monitoredStates,
                  boolean singleUse,
                  __x_ABI_CWindows_CFoundation_CTimeSpan dwellTime,
                  __x_ABI_CWindows_CFoundation_CDateTime startTime,
                  __x_ABI_CWindows_CFoundation_CTimeSpan duration,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofence * * geofence
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceFactoryVtbl;
interface __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,id,geoshape,geofence) )
    ( (This)->lpVtbl->CreateWithMonitorStates(This,id,geoshape,monitoredStates,singleUse,geofence) )
    ( (This)->lpVtbl->CreateWithMonitorStatesAndDwellTime(This,id,geoshape,monitoredStates,singleUse,dwellTime,geofence) )
    ( (This)->lpVtbl->CreateWithMonitorStatesDwellTimeStartTimeAndDuration(This,id,geoshape,monitoredStates,singleUse,dwellTime,startTime,duration,geofence) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Geolocation_Geofencing_IGeofenceMonitor[] = L"Windows.Devices.Geolocation.Geofencing.IGeofenceMonitor";
typedef struct __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceMonitorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceMonitor * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceMonitor * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceMonitor * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceMonitor * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceMonitor * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceMonitor * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceMonitor * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CGeofenceMonitorStatus * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Geofences )(
        __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceMonitor * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LastKnownGeoposition )(
        __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceMonitor * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition * * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_GeofenceStateChanged )(
        __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceMonitor * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceMonitor_IInspectable * eventHandler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_GeofenceStateChanged )(
        __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceMonitor * This,
                  EventRegistrationToken token
        );
    HRESULT ( STDMETHODCALLTYPE *ReadReports )(
        __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceMonitor * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReport * * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_StatusChanged )(
        __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceMonitor * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceMonitor_IInspectable * eventHandler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_StatusChanged )(
        __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceMonitor * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceMonitorVtbl;
interface __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceMonitor
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceMonitorVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Status(This,value) )
    ( (This)->lpVtbl->get_Geofences(This,value) )
    ( (This)->lpVtbl->get_LastKnownGeoposition(This,value) )
    ( (This)->lpVtbl->add_GeofenceStateChanged(This,eventHandler,token) )
    ( (This)->lpVtbl->remove_GeofenceStateChanged(This,token) )
    ( (This)->lpVtbl->ReadReports(This,value) )
    ( (This)->lpVtbl->add_StatusChanged(This,eventHandler,token) )
    ( (This)->lpVtbl->remove_StatusChanged(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceMonitor;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Geolocation_Geofencing_IGeofenceMonitorStatics[] = L"Windows.Devices.Geolocation.Geofencing.IGeofenceMonitorStatics";
typedef struct __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceMonitorStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceMonitorStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceMonitorStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceMonitorStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceMonitorStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceMonitorStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceMonitorStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Current )(
        __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceMonitorStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceMonitor * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceMonitorStaticsVtbl;
interface __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceMonitorStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceMonitorStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Current(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceMonitorStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Geolocation_Geofencing_IGeofenceStateChangeReport[] = L"Windows.Devices.Geolocation.Geofencing.IGeofenceStateChangeReport";
typedef struct __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceStateChangeReportVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceStateChangeReport * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceStateChangeReport * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceStateChangeReport * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceStateChangeReport * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceStateChangeReport * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceStateChangeReport * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_NewState )(
        __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceStateChangeReport * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CGeofenceState * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Geofence )(
        __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceStateChangeReport * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofence * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Geoposition )(
        __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceStateChangeReport * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RemovalReason )(
        __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceStateChangeReport * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CGeofenceRemovalReason * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceStateChangeReportVtbl;
interface __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceStateChangeReport
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceStateChangeReportVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_NewState(This,value) )
    ( (This)->lpVtbl->get_Geofence(This,value) )
    ( (This)->lpVtbl->get_Geoposition(This,value) )
    ( (This)->lpVtbl->get_RemovalReason(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceStateChangeReport;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Geolocation_Geofencing_Geofence[] = L"Windows.Devices.Geolocation.Geofencing.Geofence";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Geolocation_Geofencing_GeofenceMonitor[] = L"Windows.Devices.Geolocation.Geofencing.GeofenceMonitor";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Geolocation_Geofencing_GeofenceStateChangeReport[] = L"Windows.Devices.Geolocation.Geofencing.GeofenceStateChangeReport";
       
       
#pragma clang diagnostic pop

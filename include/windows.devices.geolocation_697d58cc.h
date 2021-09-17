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
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CDevices_CGeolocation_CICivicAddress __x_ABI_CWindows_CDevices_CGeolocation_CICivicAddress;
typedef interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBox __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBox;
typedef interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBoxFactory __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBoxFactory;
typedef interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBoxStatics __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBoxStatics;
typedef interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeocircle __x_ABI_CWindows_CDevices_CGeolocation_CIGeocircle;
typedef interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeocircleFactory __x_ABI_CWindows_CDevices_CGeolocation_CIGeocircleFactory;
typedef interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinate __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinate;
typedef interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateSatelliteData __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateSatelliteData;
typedef interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPoint __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPoint;
typedef interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPositionData __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPositionData;
typedef interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPositionSourceTimestamp __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPositionSourceTimestamp;
typedef interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator;
typedef interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator2 __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator2;
typedef interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorStatics __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorStatics;
typedef interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorStatics2 __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorStatics2;
typedef interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorWithScalarAccuracy __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorWithScalarAccuracy;
typedef interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeopath __x_ABI_CWindows_CDevices_CGeolocation_CIGeopath;
typedef interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeopathFactory __x_ABI_CWindows_CDevices_CGeolocation_CIGeopathFactory;
typedef interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint;
typedef interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeopointFactory __x_ABI_CWindows_CDevices_CGeolocation_CIGeopointFactory;
typedef interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition __x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition;
typedef interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition2 __x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition2;
typedef interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeoshape __x_ABI_CWindows_CDevices_CGeolocation_CIGeoshape;
typedef interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisit __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisit;
typedef interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitMonitor __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitMonitor;
typedef interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitMonitorStatics __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitMonitorStatics;
typedef interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitStateChangedEventArgs __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitStateChangedEventArgs;
typedef interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitTriggerDetails __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitTriggerDetails;
typedef interface __x_ABI_CWindows_CDevices_CGeolocation_CIPositionChangedEventArgs __x_ABI_CWindows_CDevices_CGeolocation_CIPositionChangedEventArgs;
typedef interface __x_ABI_CWindows_CDevices_CGeolocation_CIStatusChangedEventArgs __x_ABI_CWindows_CDevices_CGeolocation_CIStatusChangedEventArgs;
typedef interface __x_ABI_CWindows_CDevices_CGeolocation_CIVenueData __x_ABI_CWindows_CDevices_CGeolocation_CIVenueData;
struct __x_ABI_CWindows_CDevices_CGeolocation_CBasicGeoposition;
typedef interface __FIIterator_1_Windows__CDevices__CGeolocation__CBasicGeoposition __FIIterator_1_Windows__CDevices__CGeolocation__CBasicGeoposition;
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CGeolocation__CBasicGeoposition;
typedef struct __FIIterator_1_Windows__CDevices__CGeolocation__CBasicGeopositionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CBasicGeoposition * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CBasicGeoposition * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CBasicGeoposition * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CBasicGeoposition * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CBasicGeoposition * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CBasicGeoposition * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CBasicGeoposition * This, __RPC__out struct __x_ABI_CWindows_CDevices_CGeolocation_CBasicGeoposition *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CBasicGeoposition * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CBasicGeoposition * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CBasicGeoposition * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) struct __x_ABI_CWindows_CDevices_CGeolocation_CBasicGeoposition *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CGeolocation__CBasicGeopositionVtbl;
interface __FIIterator_1_Windows__CDevices__CGeolocation__CBasicGeoposition
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CGeolocation__CBasicGeopositionVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CDevices__CGeolocation__CBasicGeoposition __FIIterable_1_Windows__CDevices__CGeolocation__CBasicGeoposition;
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CGeolocation__CBasicGeoposition;
typedef struct __FIIterable_1_Windows__CDevices__CGeolocation__CBasicGeopositionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CDevices__CGeolocation__CBasicGeoposition * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CGeolocation__CBasicGeoposition * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CGeolocation__CBasicGeoposition * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CGeolocation__CBasicGeoposition * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CGeolocation__CBasicGeoposition * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CGeolocation__CBasicGeoposition * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CGeolocation__CBasicGeoposition * This, __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CGeolocation__CBasicGeoposition **first);
    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CGeolocation__CBasicGeopositionVtbl;
interface __FIIterable_1_Windows__CDevices__CGeolocation__CBasicGeoposition
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CGeolocation__CBasicGeopositionVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CDevices__CGeolocation__CGeopath __FIIterator_1_Windows__CDevices__CGeolocation__CGeopath;
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CGeolocation__CGeopath;
typedef struct __FIIterator_1_Windows__CDevices__CGeolocation__CGeopathVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CGeopath * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CGeopath * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CGeopath * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CGeopath * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CGeopath * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CGeopath * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CGeopath * This, __RPC__out __x_ABI_CWindows_CDevices_CGeolocation_CIGeopath * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CGeopath * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CGeopath * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CGeopath * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CGeolocation_CIGeopath * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CGeolocation__CGeopathVtbl;
interface __FIIterator_1_Windows__CDevices__CGeolocation__CGeopath
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CGeolocation__CGeopathVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CDevices__CGeolocation__CGeopath __FIIterable_1_Windows__CDevices__CGeolocation__CGeopath;
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CGeolocation__CGeopath;
typedef struct __FIIterable_1_Windows__CDevices__CGeolocation__CGeopathVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CDevices__CGeolocation__CGeopath * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CGeolocation__CGeopath * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CGeolocation__CGeopath * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CGeolocation__CGeopath * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CGeolocation__CGeopath * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CGeolocation__CGeopath * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CGeolocation__CGeopath * This, __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CGeolocation__CGeopath **first);
    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CGeolocation__CGeopathVtbl;
interface __FIIterable_1_Windows__CDevices__CGeolocation__CGeopath
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CGeolocation__CGeopathVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CDevices__CGeolocation__CGeopoint __FIIterator_1_Windows__CDevices__CGeolocation__CGeopoint;
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CGeolocation__CGeopoint;
typedef struct __FIIterator_1_Windows__CDevices__CGeolocation__CGeopointVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CGeopoint * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CGeopoint * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CGeopoint * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CGeopoint * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CGeopoint * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CGeopoint * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CGeopoint * This, __RPC__out __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CGeopoint * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CGeopoint * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CGeopoint * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CGeolocation__CGeopointVtbl;
interface __FIIterator_1_Windows__CDevices__CGeolocation__CGeopoint
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CGeolocation__CGeopointVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CDevices__CGeolocation__CGeopoint __FIIterable_1_Windows__CDevices__CGeolocation__CGeopoint;
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CGeolocation__CGeopoint;
typedef struct __FIIterable_1_Windows__CDevices__CGeolocation__CGeopointVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CDevices__CGeolocation__CGeopoint * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CGeolocation__CGeopoint * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CGeolocation__CGeopoint * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CGeolocation__CGeopoint * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CGeolocation__CGeopoint * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CGeolocation__CGeopoint * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CGeolocation__CGeopoint * This, __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CGeolocation__CGeopoint **first);
    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CGeolocation__CGeopointVtbl;
interface __FIIterable_1_Windows__CDevices__CGeolocation__CGeopoint
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CGeolocation__CGeopointVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CDevices__CGeolocation__CGeoposition __FIIterator_1_Windows__CDevices__CGeolocation__CGeoposition;
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CGeolocation__CGeoposition;
typedef struct __FIIterator_1_Windows__CDevices__CGeolocation__CGeopositionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CGeoposition * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CGeoposition * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CGeoposition * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CGeoposition * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CGeoposition * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CGeoposition * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CGeoposition * This, __RPC__out __x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CGeoposition * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CGeoposition * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CGeoposition * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CGeolocation__CGeopositionVtbl;
interface __FIIterator_1_Windows__CDevices__CGeolocation__CGeoposition
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CGeolocation__CGeopositionVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CDevices__CGeolocation__CGeoposition __FIIterable_1_Windows__CDevices__CGeolocation__CGeoposition;
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CGeolocation__CGeoposition;
typedef struct __FIIterable_1_Windows__CDevices__CGeolocation__CGeopositionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CDevices__CGeolocation__CGeoposition * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CGeolocation__CGeoposition * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CGeolocation__CGeoposition * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CGeolocation__CGeoposition * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CGeolocation__CGeoposition * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CGeolocation__CGeoposition * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CGeolocation__CGeoposition * This, __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CGeolocation__CGeoposition **first);
    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CGeolocation__CGeopositionVtbl;
interface __FIIterable_1_Windows__CDevices__CGeolocation__CGeoposition
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CGeolocation__CGeopositionVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CDevices__CGeolocation__CGeovisit __FIIterator_1_Windows__CDevices__CGeolocation__CGeovisit;
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CGeolocation__CGeovisit;
typedef struct __FIIterator_1_Windows__CDevices__CGeolocation__CGeovisitVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CGeovisit * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CGeovisit * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CGeovisit * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CGeovisit * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CGeovisit * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CGeovisit * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CGeovisit * This, __RPC__out __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisit * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CGeovisit * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CGeovisit * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CGeovisit * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisit * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CGeolocation__CGeovisitVtbl;
interface __FIIterator_1_Windows__CDevices__CGeolocation__CGeovisit
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CGeolocation__CGeovisitVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CDevices__CGeolocation__CGeovisit __FIIterable_1_Windows__CDevices__CGeolocation__CGeovisit;
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CGeolocation__CGeovisit;
typedef struct __FIIterable_1_Windows__CDevices__CGeolocation__CGeovisitVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CDevices__CGeolocation__CGeovisit * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CGeolocation__CGeovisit * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CGeolocation__CGeovisit * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CGeolocation__CGeovisit * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CGeolocation__CGeovisit * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CGeolocation__CGeovisit * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CGeolocation__CGeovisit * This, __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CGeolocation__CGeovisit **first);
    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CGeolocation__CGeovisitVtbl;
interface __FIIterable_1_Windows__CDevices__CGeolocation__CGeovisit
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CGeolocation__CGeovisitVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CDevices__CGeolocation__CBasicGeoposition __FIVectorView_1_Windows__CDevices__CGeolocation__CBasicGeoposition;
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CGeolocation__CBasicGeoposition;
typedef struct __FIVectorView_1_Windows__CDevices__CGeolocation__CBasicGeopositionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CGeolocation__CBasicGeoposition * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CGeolocation__CBasicGeoposition * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CGeolocation__CBasicGeoposition * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CGeolocation__CBasicGeoposition * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CGeolocation__CBasicGeoposition * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CGeolocation__CBasicGeoposition * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CGeolocation__CBasicGeoposition * This,
                                                    unsigned int index,
                                                             __RPC__out struct __x_ABI_CWindows_CDevices_CGeolocation_CBasicGeoposition *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CDevices__CGeolocation__CBasicGeoposition * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CGeolocation__CBasicGeoposition * This,
                       struct __x_ABI_CWindows_CDevices_CGeolocation_CBasicGeoposition item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CGeolocation__CBasicGeoposition * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) struct __x_ABI_CWindows_CDevices_CGeolocation_CBasicGeoposition *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CGeolocation__CBasicGeopositionVtbl;
interface __FIVectorView_1_Windows__CDevices__CGeolocation__CBasicGeoposition
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CGeolocation__CBasicGeopositionVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CDevices__CGeolocation__CGeopath __FIVectorView_1_Windows__CDevices__CGeolocation__CGeopath;
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CGeolocation__CGeopath;
typedef struct __FIVectorView_1_Windows__CDevices__CGeolocation__CGeopathVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CGeolocation__CGeopath * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CGeolocation__CGeopath * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CGeolocation__CGeopath * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CGeolocation__CGeopath * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CGeolocation__CGeopath * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CGeolocation__CGeopath * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CGeolocation__CGeopath * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CDevices_CGeolocation_CIGeopath * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CDevices__CGeolocation__CGeopath * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CGeolocation__CGeopath * This,
                       __x_ABI_CWindows_CDevices_CGeolocation_CIGeopath * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CGeolocation__CGeopath * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CGeolocation_CIGeopath * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CGeolocation__CGeopathVtbl;
interface __FIVectorView_1_Windows__CDevices__CGeolocation__CGeopath
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CGeolocation__CGeopathVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition __FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition;
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition;
typedef struct __FIVectorView_1_Windows__CDevices__CGeolocation__CGeopositionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition * This,
                       __x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CGeolocation__CGeopositionVtbl;
interface __FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CGeolocation__CGeopositionVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CDevices__CGeolocation__CGeovisit __FIVectorView_1_Windows__CDevices__CGeolocation__CGeovisit;
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CGeolocation__CGeovisit;
typedef struct __FIVectorView_1_Windows__CDevices__CGeolocation__CGeovisitVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CGeolocation__CGeovisit * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CGeolocation__CGeovisit * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CGeolocation__CGeovisit * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CGeolocation__CGeovisit * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CGeolocation__CGeovisit * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CGeolocation__CGeovisit * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CGeolocation__CGeovisit * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisit * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CDevices__CGeolocation__CGeovisit * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CGeolocation__CGeovisit * This,
                       __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisit * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CGeolocation__CGeovisit * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisit * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CGeolocation__CGeovisitVtbl;
interface __FIVectorView_1_Windows__CDevices__CGeolocation__CGeovisit
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CGeolocation__CGeovisitVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CDevices__CGeolocation__CGeopath __FIVector_1_Windows__CDevices__CGeolocation__CGeopath;
EXTERN_C const IID IID___FIVector_1_Windows__CDevices__CGeolocation__CGeopath;
typedef struct __FIVector_1_Windows__CDevices__CGeolocation__CGeopathVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CDevices__CGeolocation__CGeopath * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CDevices__CGeolocation__CGeopath * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CDevices__CGeolocation__CGeopath * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CDevices__CGeolocation__CGeopath * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CDevices__CGeolocation__CGeopath * This, __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeopath * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CDevices__CGeolocation__CGeopath * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CDevices__CGeolocation__CGeopath * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeopath * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CDevices__CGeolocation__CGeopath * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CDevices__CGeolocation__CGeopath * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CGeolocation__CGeopath **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CDevices__CGeolocation__CGeopath * This,
                   __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeopath * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CDevices__CGeolocation__CGeopath * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeopath * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CDevices__CGeolocation__CGeopath * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeopath * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CDevices__CGeolocation__CGeopath * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CDevices__CGeolocation__CGeopath * This, __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeopath * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CDevices__CGeolocation__CGeopath * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CDevices__CGeolocation__CGeopath * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CDevices__CGeolocation__CGeopath * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CGeolocation_CIGeopath * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CDevices__CGeolocation__CGeopath * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CDevices_CGeolocation_CIGeopath * *value);
    END_INTERFACE
} __FIVector_1_Windows__CDevices__CGeolocation__CGeopathVtbl;
interface __FIVector_1_Windows__CDevices__CGeolocation__CGeopath
{
    CONST_VTBL struct __FIVector_1_Windows__CDevices__CGeolocation__CGeopathVtbl *lpVtbl;
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
enum __x_ABI_CWindows_CDevices_CGeolocation_CGeolocationAccessStatus;
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeolocationAccessStatus __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeolocationAccessStatus;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeolocationAccessStatus;
typedef interface __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeolocationAccessStatus __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeolocationAccessStatus;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeolocationAccessStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeolocationAccessStatus * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeolocationAccessStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeolocationAccessStatus * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeolocationAccessStatus * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeolocationAccessStatus *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeolocationAccessStatusVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeolocationAccessStatus
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeolocationAccessStatusVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeolocationAccessStatus __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeolocationAccessStatus;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeolocationAccessStatus;
typedef struct __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeolocationAccessStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeolocationAccessStatus * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeolocationAccessStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeolocationAccessStatus * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeolocationAccessStatus * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeolocationAccessStatus * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeolocationAccessStatus * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeolocationAccessStatus * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeolocationAccessStatus *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeolocationAccessStatus * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeolocationAccessStatus **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeolocationAccessStatus * This, __RPC__out enum __x_ABI_CWindows_CDevices_CGeolocation_CGeolocationAccessStatus *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeolocationAccessStatusVtbl;
interface __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeolocationAccessStatus
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeolocationAccessStatusVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeopoint __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeopoint;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeopoint;
typedef interface __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeopoint __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeopoint;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeopointVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeopoint * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeopoint * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeopoint * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeopoint * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeopoint *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeopointVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeopoint
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeopointVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeopoint __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeopoint;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeopoint;
typedef struct __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeopointVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeopoint * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeopoint * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeopoint * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeopoint * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeopoint * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeopoint * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeopoint * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeopoint *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeopoint * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeopoint **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeopoint * This, __RPC__out __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeopointVtbl;
interface __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeopoint
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeopointVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeoposition __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeoposition;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeoposition;
typedef interface __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeoposition __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeoposition;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeopositionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeoposition * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeoposition * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeoposition * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeoposition * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeoposition *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeopositionVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeoposition
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeopositionVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeoposition __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeoposition;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeoposition;
typedef struct __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeopositionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeoposition * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeoposition * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeoposition * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeoposition * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeoposition * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeoposition * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeoposition * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeoposition *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeoposition * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeoposition **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeoposition * This, __RPC__out __x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeopositionVtbl;
interface __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeoposition
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeopositionVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeovisit __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeovisit;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeovisit;
typedef interface __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeovisit __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeovisit;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeovisitVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeovisit * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeovisit * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeovisit * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeovisit * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeovisit *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeovisitVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeovisit
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeovisitVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeovisit __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeovisit;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeovisit;
typedef struct __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeovisitVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeovisit * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeovisit * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeovisit * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeovisit * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeovisit * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeovisit * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeovisit * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeovisit *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeovisit * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeovisit **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeovisit * This, __RPC__out __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisit * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeovisitVtbl;
interface __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeovisit
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeovisitVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition;
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition;
typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CGeolocation__CGeopositionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition * This, __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CGeolocation__CGeopositionVtbl;
interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CGeolocation__CGeopositionVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition;
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition;
typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CGeolocation__CGeopositionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition * This, __RPC__out __FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CGeolocation__CGeopositionVtbl;
interface __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CGeolocation__CGeopositionVtbl *lpVtbl;
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
typedef interface __FIReference_1_Windows__CDevices__CGeolocation__CBasicGeoposition __FIReference_1_Windows__CDevices__CGeolocation__CBasicGeoposition;
EXTERN_C const IID IID___FIReference_1_Windows__CDevices__CGeolocation__CBasicGeoposition;
typedef struct __FIReference_1_Windows__CDevices__CGeolocation__CBasicGeopositionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_Windows__CDevices__CGeolocation__CBasicGeoposition * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_Windows__CDevices__CGeolocation__CBasicGeoposition * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_Windows__CDevices__CGeolocation__CBasicGeoposition * This );
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_Windows__CDevices__CGeolocation__CBasicGeoposition * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_Windows__CDevices__CGeolocation__CBasicGeoposition * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_Windows__CDevices__CGeolocation__CBasicGeoposition * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_Windows__CDevices__CGeolocation__CBasicGeoposition * This, __RPC__out struct __x_ABI_CWindows_CDevices_CGeolocation_CBasicGeoposition *value);
    END_INTERFACE
} __FIReference_1_Windows__CDevices__CGeolocation__CBasicGeopositionVtbl;
interface __FIReference_1_Windows__CDevices__CGeolocation__CBasicGeoposition
{
    CONST_VTBL struct __FIReference_1_Windows__CDevices__CGeolocation__CBasicGeopositionVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Value(This,value) )
typedef interface __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CPositionChangedEventArgs __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CPositionChangedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CPositionChangedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CPositionChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CPositionChangedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CPositionChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CPositionChangedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CPositionChangedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator * sender, __RPC__in_opt __x_ABI_CWindows_CDevices_CGeolocation_CIPositionChangedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CPositionChangedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CPositionChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CPositionChangedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CStatusChangedEventArgs __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CStatusChangedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CStatusChangedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CStatusChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CStatusChangedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CStatusChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CStatusChangedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CStatusChangedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator * sender, __RPC__in_opt __x_ABI_CWindows_CDevices_CGeolocation_CIStatusChangedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CStatusChangedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CStatusChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CStatusChangedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeovisitMonitor_Windows__CDevices__CGeolocation__CGeovisitStateChangedEventArgs __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeovisitMonitor_Windows__CDevices__CGeolocation__CGeovisitStateChangedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeovisitMonitor_Windows__CDevices__CGeolocation__CGeovisitStateChangedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeovisitMonitor_Windows__CDevices__CGeolocation__CGeovisitStateChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeovisitMonitor_Windows__CDevices__CGeolocation__CGeovisitStateChangedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeovisitMonitor_Windows__CDevices__CGeolocation__CGeovisitStateChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeovisitMonitor_Windows__CDevices__CGeolocation__CGeovisitStateChangedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeovisitMonitor_Windows__CDevices__CGeolocation__CGeovisitStateChangedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitMonitor * sender, __RPC__in_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitStateChangedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeovisitMonitor_Windows__CDevices__CGeolocation__CGeovisitStateChangedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeovisitMonitor_Windows__CDevices__CGeolocation__CGeovisitStateChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeovisitMonitor_Windows__CDevices__CGeolocation__CGeovisitStateChangedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
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
typedef struct __x_ABI_CWindows_CFoundation_CDateTime __x_ABI_CWindows_CFoundation_CDateTime;
typedef struct __x_ABI_CWindows_CFoundation_CTimeSpan __x_ABI_CWindows_CFoundation_CTimeSpan;
typedef enum __x_ABI_CWindows_CDevices_CGeolocation_CAltitudeReferenceSystem __x_ABI_CWindows_CDevices_CGeolocation_CAltitudeReferenceSystem;
typedef enum __x_ABI_CWindows_CDevices_CGeolocation_CGeolocationAccessStatus __x_ABI_CWindows_CDevices_CGeolocation_CGeolocationAccessStatus;
typedef enum __x_ABI_CWindows_CDevices_CGeolocation_CGeoshapeType __x_ABI_CWindows_CDevices_CGeolocation_CGeoshapeType;
typedef enum __x_ABI_CWindows_CDevices_CGeolocation_CPositionAccuracy __x_ABI_CWindows_CDevices_CGeolocation_CPositionAccuracy;
typedef enum __x_ABI_CWindows_CDevices_CGeolocation_CPositionSource __x_ABI_CWindows_CDevices_CGeolocation_CPositionSource;
typedef enum __x_ABI_CWindows_CDevices_CGeolocation_CPositionStatus __x_ABI_CWindows_CDevices_CGeolocation_CPositionStatus;
typedef enum __x_ABI_CWindows_CDevices_CGeolocation_CVisitMonitoringScope __x_ABI_CWindows_CDevices_CGeolocation_CVisitMonitoringScope;
typedef enum __x_ABI_CWindows_CDevices_CGeolocation_CVisitStateChange __x_ABI_CWindows_CDevices_CGeolocation_CVisitStateChange;
typedef struct __x_ABI_CWindows_CDevices_CGeolocation_CBasicGeoposition __x_ABI_CWindows_CDevices_CGeolocation_CBasicGeoposition;
enum __x_ABI_CWindows_CDevices_CGeolocation_CAltitudeReferenceSystem
{
    AltitudeReferenceSystem_Unspecified = 0,
    AltitudeReferenceSystem_Terrain = 1,
    AltitudeReferenceSystem_Ellipsoid = 2,
    AltitudeReferenceSystem_Geoid = 3,
    AltitudeReferenceSystem_Surface = 4,
};
enum __x_ABI_CWindows_CDevices_CGeolocation_CGeolocationAccessStatus
{
    GeolocationAccessStatus_Unspecified = 0,
    GeolocationAccessStatus_Allowed = 1,
    GeolocationAccessStatus_Denied = 2,
};
enum __x_ABI_CWindows_CDevices_CGeolocation_CGeoshapeType
{
    GeoshapeType_Geopoint = 0,
    GeoshapeType_Geocircle = 1,
    GeoshapeType_Geopath = 2,
    GeoshapeType_GeoboundingBox = 3,
};
enum __x_ABI_CWindows_CDevices_CGeolocation_CPositionAccuracy
{
    PositionAccuracy_Default = 0,
    PositionAccuracy_High = 1,
};
enum __x_ABI_CWindows_CDevices_CGeolocation_CPositionSource
{
    PositionSource_Cellular = 0,
    PositionSource_Satellite = 1,
    PositionSource_WiFi = 2,
    PositionSource_IPAddress = 3,
    PositionSource_Unknown = 4,
    PositionSource_Default = 5,
    PositionSource_Obfuscated = 6,
};
enum __x_ABI_CWindows_CDevices_CGeolocation_CPositionStatus
{
    PositionStatus_Ready = 0,
    PositionStatus_Initializing = 1,
    PositionStatus_NoData = 2,
    PositionStatus_Disabled = 3,
    PositionStatus_NotInitialized = 4,
    PositionStatus_NotAvailable = 5,
};
enum __x_ABI_CWindows_CDevices_CGeolocation_CVisitMonitoringScope
{
    VisitMonitoringScope_Venue = 0,
    VisitMonitoringScope_City = 1,
};
enum __x_ABI_CWindows_CDevices_CGeolocation_CVisitStateChange
{
    VisitStateChange_TrackingLost = 0,
    VisitStateChange_Arrived = 1,
    VisitStateChange_Departed = 2,
    VisitStateChange_OtherMovement = 3,
};
struct __x_ABI_CWindows_CDevices_CGeolocation_CBasicGeoposition
{
    DOUBLE Latitude;
    DOUBLE Longitude;
    DOUBLE Altitude;
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Geolocation_ICivicAddress[] = L"Windows.Devices.Geolocation.ICivicAddress";
typedef struct __x_ABI_CWindows_CDevices_CGeolocation_CICivicAddressVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CICivicAddress * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CICivicAddress * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CICivicAddress * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CICivicAddress * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CICivicAddress * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CICivicAddress * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Country )(
        __x_ABI_CWindows_CDevices_CGeolocation_CICivicAddress * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_State )(
        __x_ABI_CWindows_CDevices_CGeolocation_CICivicAddress * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_City )(
        __x_ABI_CWindows_CDevices_CGeolocation_CICivicAddress * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PostalCode )(
        __x_ABI_CWindows_CDevices_CGeolocation_CICivicAddress * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Timestamp )(
        __x_ABI_CWindows_CDevices_CGeolocation_CICivicAddress * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CGeolocation_CICivicAddressVtbl;
interface __x_ABI_CWindows_CDevices_CGeolocation_CICivicAddress
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CGeolocation_CICivicAddressVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Country(This,value) )
    ( (This)->lpVtbl->get_State(This,value) )
    ( (This)->lpVtbl->get_City(This,value) )
    ( (This)->lpVtbl->get_PostalCode(This,value) )
    ( (This)->lpVtbl->get_Timestamp(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGeolocation_CICivicAddress;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Geolocation_IGeoboundingBox[] = L"Windows.Devices.Geolocation.IGeoboundingBox";
typedef struct __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBoxVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBox * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBox * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBox * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBox * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBox * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBox * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_NorthwestCorner )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBox * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CGeolocation_CBasicGeoposition * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SoutheastCorner )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBox * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CGeolocation_CBasicGeoposition * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Center )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBox * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CGeolocation_CBasicGeoposition * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MinAltitude )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBox * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaxAltitude )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBox * This,
                           __RPC__out DOUBLE * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBoxVtbl;
interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBox
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBoxVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_NorthwestCorner(This,value) )
    ( (This)->lpVtbl->get_SoutheastCorner(This,value) )
    ( (This)->lpVtbl->get_Center(This,value) )
    ( (This)->lpVtbl->get_MinAltitude(This,value) )
    ( (This)->lpVtbl->get_MaxAltitude(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBox;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Geolocation_IGeoboundingBoxFactory[] = L"Windows.Devices.Geolocation.IGeoboundingBoxFactory";
typedef struct __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBoxFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBoxFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBoxFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBoxFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBoxFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBoxFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBoxFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBoxFactory * This,
                  __x_ABI_CWindows_CDevices_CGeolocation_CBasicGeoposition northwestCorner,
                  __x_ABI_CWindows_CDevices_CGeolocation_CBasicGeoposition southeastCorner,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBox * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateWithAltitudeReference )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBoxFactory * This,
                  __x_ABI_CWindows_CDevices_CGeolocation_CBasicGeoposition northwestCorner,
                  __x_ABI_CWindows_CDevices_CGeolocation_CBasicGeoposition southeastCorner,
                  __x_ABI_CWindows_CDevices_CGeolocation_CAltitudeReferenceSystem altitudeReferenceSystem,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBox * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateWithAltitudeReferenceAndSpatialReference )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBoxFactory * This,
                  __x_ABI_CWindows_CDevices_CGeolocation_CBasicGeoposition northwestCorner,
                  __x_ABI_CWindows_CDevices_CGeolocation_CBasicGeoposition southeastCorner,
                  __x_ABI_CWindows_CDevices_CGeolocation_CAltitudeReferenceSystem altitudeReferenceSystem,
                  UINT32 spatialReferenceId,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBox * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBoxFactoryVtbl;
interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBoxFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBoxFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,northwestCorner,southeastCorner,value) )
    ( (This)->lpVtbl->CreateWithAltitudeReference(This,northwestCorner,southeastCorner,altitudeReferenceSystem,value) )
    ( (This)->lpVtbl->CreateWithAltitudeReferenceAndSpatialReference(This,northwestCorner,southeastCorner,altitudeReferenceSystem,spatialReferenceId,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBoxFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Geolocation_IGeoboundingBoxStatics[] = L"Windows.Devices.Geolocation.IGeoboundingBoxStatics";
typedef struct __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBoxStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBoxStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBoxStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBoxStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBoxStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBoxStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBoxStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *TryCompute )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBoxStatics * This,
                  __RPC__in_opt __FIIterable_1_Windows__CDevices__CGeolocation__CBasicGeoposition * positions,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBox * * value
        );
                    HRESULT ( STDMETHODCALLTYPE *TryComputeWithAltitudeReference )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBoxStatics * This,
                  __RPC__in_opt __FIIterable_1_Windows__CDevices__CGeolocation__CBasicGeoposition * positions,
                  __x_ABI_CWindows_CDevices_CGeolocation_CAltitudeReferenceSystem altitudeRefSystem,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBox * * value
        );
                    HRESULT ( STDMETHODCALLTYPE *TryComputeWithAltitudeReferenceAndSpatialReference )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBoxStatics * This,
                  __RPC__in_opt __FIIterable_1_Windows__CDevices__CGeolocation__CBasicGeoposition * positions,
                  __x_ABI_CWindows_CDevices_CGeolocation_CAltitudeReferenceSystem altitudeRefSystem,
                  UINT32 spatialReferenceId,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBox * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBoxStaticsVtbl;
interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBoxStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBoxStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->TryCompute(This,positions,value) )
    ( (This)->lpVtbl->TryComputeWithAltitudeReference(This,positions,altitudeRefSystem,value) )
    ( (This)->lpVtbl->TryComputeWithAltitudeReferenceAndSpatialReference(This,positions,altitudeRefSystem,spatialReferenceId,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBoxStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Geolocation_IGeocircle[] = L"Windows.Devices.Geolocation.IGeocircle";
typedef struct __x_ABI_CWindows_CDevices_CGeolocation_CIGeocircleVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeocircle * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeocircle * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeocircle * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeocircle * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeocircle * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeocircle * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Center )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeocircle * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CGeolocation_CBasicGeoposition * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Radius )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeocircle * This,
                           __RPC__out DOUBLE * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CGeolocation_CIGeocircleVtbl;
interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeocircle
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CGeolocation_CIGeocircleVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Center(This,value) )
    ( (This)->lpVtbl->get_Radius(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGeolocation_CIGeocircle;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Geolocation_IGeocircleFactory[] = L"Windows.Devices.Geolocation.IGeocircleFactory";
typedef struct __x_ABI_CWindows_CDevices_CGeolocation_CIGeocircleFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeocircleFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeocircleFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeocircleFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeocircleFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeocircleFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeocircleFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeocircleFactory * This,
                  __x_ABI_CWindows_CDevices_CGeolocation_CBasicGeoposition position,
                  DOUBLE radius,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeocircle * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateWithAltitudeReferenceSystem )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeocircleFactory * This,
                  __x_ABI_CWindows_CDevices_CGeolocation_CBasicGeoposition position,
                  DOUBLE radius,
                  __x_ABI_CWindows_CDevices_CGeolocation_CAltitudeReferenceSystem altitudeReferenceSystem,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeocircle * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateWithAltitudeReferenceSystemAndSpatialReferenceId )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeocircleFactory * This,
                  __x_ABI_CWindows_CDevices_CGeolocation_CBasicGeoposition position,
                  DOUBLE radius,
                  __x_ABI_CWindows_CDevices_CGeolocation_CAltitudeReferenceSystem altitudeReferenceSystem,
                  UINT32 spatialReferenceId,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeocircle * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CGeolocation_CIGeocircleFactoryVtbl;
interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeocircleFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CGeolocation_CIGeocircleFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,position,radius,value) )
    ( (This)->lpVtbl->CreateWithAltitudeReferenceSystem(This,position,radius,altitudeReferenceSystem,value) )
    ( (This)->lpVtbl->CreateWithAltitudeReferenceSystemAndSpatialReferenceId(This,position,radius,altitudeReferenceSystem,spatialReferenceId,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGeolocation_CIGeocircleFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Geolocation_IGeocoordinate[] = L"Windows.Devices.Geolocation.IGeocoordinate";
typedef struct __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinate * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinate * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinate * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinate * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinate * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinate * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("Latitude may be altered or unavailable after Windows 8.1. Instead, use Point.Position.Latitude")
                               HRESULT ( STDMETHODCALLTYPE *get_Latitude )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinate * This,
                           __RPC__out DOUBLE * value
        );
    DEPRECATED("Longitude may be altered or unavailable after Windows 8.1. Instead, use Point.Position.Longitude")
                               HRESULT ( STDMETHODCALLTYPE *get_Longitude )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinate * This,
                           __RPC__out DOUBLE * value
        );
    DEPRECATED("Altitude may be altered or unavailable after Windows 8.1. Instead, use Point.Position.Altitude")
                               HRESULT ( STDMETHODCALLTYPE *get_Altitude )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinate * This,
                           __RPC__deref_out_opt __FIReference_1_double * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Accuracy )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinate * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AltitudeAccuracy )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinate * This,
                           __RPC__deref_out_opt __FIReference_1_double * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Heading )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinate * This,
                           __RPC__deref_out_opt __FIReference_1_double * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Speed )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinate * This,
                           __RPC__deref_out_opt __FIReference_1_double * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Timestamp )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinate * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateVtbl;
interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinate
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("Latitude may be altered or unavailable after Windows 8.1. Instead, use Point.Position.Latitude")
    ( (This)->lpVtbl->get_Latitude(This,value) )
DEPRECATED("Longitude may be altered or unavailable after Windows 8.1. Instead, use Point.Position.Longitude")
    ( (This)->lpVtbl->get_Longitude(This,value) )
DEPRECATED("Altitude may be altered or unavailable after Windows 8.1. Instead, use Point.Position.Altitude")
    ( (This)->lpVtbl->get_Altitude(This,value) )
    ( (This)->lpVtbl->get_Accuracy(This,value) )
    ( (This)->lpVtbl->get_AltitudeAccuracy(This,value) )
    ( (This)->lpVtbl->get_Heading(This,value) )
    ( (This)->lpVtbl->get_Speed(This,value) )
    ( (This)->lpVtbl->get_Timestamp(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinate;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Geolocation_IGeocoordinateSatelliteData[] = L"Windows.Devices.Geolocation.IGeocoordinateSatelliteData";
typedef struct __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateSatelliteDataVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateSatelliteData * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateSatelliteData * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateSatelliteData * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateSatelliteData * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateSatelliteData * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateSatelliteData * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_PositionDilutionOfPrecision )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateSatelliteData * This,
                           __RPC__deref_out_opt __FIReference_1_double * * ppValue
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HorizontalDilutionOfPrecision )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateSatelliteData * This,
                           __RPC__deref_out_opt __FIReference_1_double * * ppValue
        );
                   HRESULT ( STDMETHODCALLTYPE *get_VerticalDilutionOfPrecision )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateSatelliteData * This,
                           __RPC__deref_out_opt __FIReference_1_double * * ppValue
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateSatelliteDataVtbl;
interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateSatelliteData
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateSatelliteDataVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_PositionDilutionOfPrecision(This,ppValue) )
    ( (This)->lpVtbl->get_HorizontalDilutionOfPrecision(This,ppValue) )
    ( (This)->lpVtbl->get_VerticalDilutionOfPrecision(This,ppValue) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateSatelliteData;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Geolocation_IGeocoordinateWithPoint[] = L"Windows.Devices.Geolocation.IGeocoordinateWithPoint";
typedef struct __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPointVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPoint * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPoint * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPoint * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPoint * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPoint * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPoint * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Point )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPoint * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPointVtbl;
interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPoint
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPointVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Point(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPoint;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Geolocation_IGeocoordinateWithPositionData[] = L"Windows.Devices.Geolocation.IGeocoordinateWithPositionData";
typedef struct __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPositionDataVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPositionData * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPositionData * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPositionData * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPositionData * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPositionData * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPositionData * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_PositionSource )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPositionData * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CGeolocation_CPositionSource * pValue
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SatelliteData )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPositionData * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateSatelliteData * * ppValue
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPositionDataVtbl;
interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPositionData
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPositionDataVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_PositionSource(This,pValue) )
    ( (This)->lpVtbl->get_SatelliteData(This,ppValue) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPositionData;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Geolocation_IGeocoordinateWithPositionSourceTimestamp[] = L"Windows.Devices.Geolocation.IGeocoordinateWithPositionSourceTimestamp";
typedef struct __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPositionSourceTimestampVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPositionSourceTimestamp * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPositionSourceTimestamp * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPositionSourceTimestamp * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPositionSourceTimestamp * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPositionSourceTimestamp * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPositionSourceTimestamp * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_PositionSourceTimestamp )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPositionSourceTimestamp * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CDateTime * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPositionSourceTimestampVtbl;
interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPositionSourceTimestamp
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPositionSourceTimestampVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_PositionSourceTimestamp(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPositionSourceTimestamp;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Geolocation_IGeolocator[] = L"Windows.Devices.Geolocation.IGeolocator";
typedef struct __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DesiredAccuracy )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CGeolocation_CPositionAccuracy * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DesiredAccuracy )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator * This,
                  __x_ABI_CWindows_CDevices_CGeolocation_CPositionAccuracy value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MovementThreshold )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_MovementThreshold )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ReportInterval )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ReportInterval )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator * This,
                  UINT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LocationStatus )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CGeolocation_CPositionStatus * value
        );
                    HRESULT ( STDMETHODCALLTYPE *GetGeopositionAsync )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeoposition * * value
        );
                    HRESULT ( STDMETHODCALLTYPE *GetGeopositionAsyncWithAgeAndTimeout )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator * This,
                  __x_ABI_CWindows_CFoundation_CTimeSpan maximumAge,
                  __x_ABI_CWindows_CFoundation_CTimeSpan timeout,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeoposition * * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_PositionChanged )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CPositionChangedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_PositionChanged )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_StatusChanged )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CStatusChangedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_StatusChanged )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorVtbl;
interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DesiredAccuracy(This,value) )
    ( (This)->lpVtbl->put_DesiredAccuracy(This,value) )
    ( (This)->lpVtbl->get_MovementThreshold(This,value) )
    ( (This)->lpVtbl->put_MovementThreshold(This,value) )
    ( (This)->lpVtbl->get_ReportInterval(This,value) )
    ( (This)->lpVtbl->put_ReportInterval(This,value) )
    ( (This)->lpVtbl->get_LocationStatus(This,value) )
    ( (This)->lpVtbl->GetGeopositionAsync(This,value) )
    ( (This)->lpVtbl->GetGeopositionAsyncWithAgeAndTimeout(This,maximumAge,timeout,value) )
    ( (This)->lpVtbl->add_PositionChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_PositionChanged(This,token) )
    ( (This)->lpVtbl->add_StatusChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_StatusChanged(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Geolocation_IGeolocator2[] = L"Windows.Devices.Geolocation.IGeolocator2";
typedef struct __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *AllowFallbackToConsentlessPositions )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator2 * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator2Vtbl;
interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator2
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->AllowFallbackToConsentlessPositions(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Geolocation_IGeolocatorStatics[] = L"Windows.Devices.Geolocation.IGeolocatorStatics";
typedef struct __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *RequestAccessAsync )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorStatics * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeolocationAccessStatus * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *GetGeopositionHistoryAsync )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorStatics * This,
                  __x_ABI_CWindows_CFoundation_CDateTime startTime,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *GetGeopositionHistoryWithDurationAsync )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorStatics * This,
                  __x_ABI_CWindows_CFoundation_CDateTime startTime,
                  __x_ABI_CWindows_CFoundation_CTimeSpan duration,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorStaticsVtbl;
interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->RequestAccessAsync(This,result) )
    ( (This)->lpVtbl->GetGeopositionHistoryAsync(This,startTime,result) )
    ( (This)->lpVtbl->GetGeopositionHistoryWithDurationAsync(This,startTime,duration,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Geolocation_IGeolocatorStatics2[] = L"Windows.Devices.Geolocation.IGeolocatorStatics2";
typedef struct __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsDefaultGeopositionRecommended )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorStatics2 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DefaultGeoposition )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorStatics2 * This,
                  __RPC__in_opt __FIReference_1_Windows__CDevices__CGeolocation__CBasicGeoposition * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DefaultGeoposition )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorStatics2 * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CDevices__CGeolocation__CBasicGeoposition * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorStatics2Vtbl;
interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsDefaultGeopositionRecommended(This,value) )
    ( (This)->lpVtbl->put_DefaultGeoposition(This,value) )
    ( (This)->lpVtbl->get_DefaultGeoposition(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Geolocation_IGeolocatorWithScalarAccuracy[] = L"Windows.Devices.Geolocation.IGeolocatorWithScalarAccuracy";
typedef struct __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorWithScalarAccuracyVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorWithScalarAccuracy * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorWithScalarAccuracy * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorWithScalarAccuracy * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorWithScalarAccuracy * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorWithScalarAccuracy * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorWithScalarAccuracy * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DesiredAccuracyInMeters )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorWithScalarAccuracy * This,
                           __RPC__deref_out_opt __FIReference_1_UINT32 * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DesiredAccuracyInMeters )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorWithScalarAccuracy * This,
                  __RPC__in_opt __FIReference_1_UINT32 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorWithScalarAccuracyVtbl;
interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorWithScalarAccuracy
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorWithScalarAccuracyVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DesiredAccuracyInMeters(This,value) )
    ( (This)->lpVtbl->put_DesiredAccuracyInMeters(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorWithScalarAccuracy;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Geolocation_IGeopath[] = L"Windows.Devices.Geolocation.IGeopath";
typedef struct __x_ABI_CWindows_CDevices_CGeolocation_CIGeopathVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeopath * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeopath * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeopath * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeopath * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeopath * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeopath * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Positions )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeopath * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CGeolocation__CBasicGeoposition * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CGeolocation_CIGeopathVtbl;
interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeopath
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CGeolocation_CIGeopathVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Positions(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGeolocation_CIGeopath;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Geolocation_IGeopathFactory[] = L"Windows.Devices.Geolocation.IGeopathFactory";
typedef struct __x_ABI_CWindows_CDevices_CGeolocation_CIGeopathFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeopathFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeopathFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeopathFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeopathFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeopathFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeopathFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeopathFactory * This,
                  __RPC__in_opt __FIIterable_1_Windows__CDevices__CGeolocation__CBasicGeoposition * positions,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeopath * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateWithAltitudeReference )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeopathFactory * This,
                  __RPC__in_opt __FIIterable_1_Windows__CDevices__CGeolocation__CBasicGeoposition * positions,
                  __x_ABI_CWindows_CDevices_CGeolocation_CAltitudeReferenceSystem altitudeReferenceSystem,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeopath * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateWithAltitudeReferenceAndSpatialReference )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeopathFactory * This,
                  __RPC__in_opt __FIIterable_1_Windows__CDevices__CGeolocation__CBasicGeoposition * positions,
                  __x_ABI_CWindows_CDevices_CGeolocation_CAltitudeReferenceSystem altitudeReferenceSystem,
                  UINT32 spatialReferenceId,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeopath * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CGeolocation_CIGeopathFactoryVtbl;
interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeopathFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CGeolocation_CIGeopathFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,positions,value) )
    ( (This)->lpVtbl->CreateWithAltitudeReference(This,positions,altitudeReferenceSystem,value) )
    ( (This)->lpVtbl->CreateWithAltitudeReferenceAndSpatialReference(This,positions,altitudeReferenceSystem,spatialReferenceId,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGeolocation_CIGeopathFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Geolocation_IGeopoint[] = L"Windows.Devices.Geolocation.IGeopoint";
typedef struct __x_ABI_CWindows_CDevices_CGeolocation_CIGeopointVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Position )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CGeolocation_CBasicGeoposition * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CGeolocation_CIGeopointVtbl;
interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CGeolocation_CIGeopointVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Position(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Geolocation_IGeopointFactory[] = L"Windows.Devices.Geolocation.IGeopointFactory";
typedef struct __x_ABI_CWindows_CDevices_CGeolocation_CIGeopointFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeopointFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeopointFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeopointFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeopointFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeopointFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeopointFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeopointFactory * This,
                  __x_ABI_CWindows_CDevices_CGeolocation_CBasicGeoposition position,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateWithAltitudeReferenceSystem )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeopointFactory * This,
                  __x_ABI_CWindows_CDevices_CGeolocation_CBasicGeoposition position,
                  __x_ABI_CWindows_CDevices_CGeolocation_CAltitudeReferenceSystem altitudeReferenceSystem,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateWithAltitudeReferenceSystemAndSpatialReferenceId )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeopointFactory * This,
                  __x_ABI_CWindows_CDevices_CGeolocation_CBasicGeoposition position,
                  __x_ABI_CWindows_CDevices_CGeolocation_CAltitudeReferenceSystem altitudeReferenceSystem,
                  UINT32 spatialReferenceId,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CGeolocation_CIGeopointFactoryVtbl;
interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeopointFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CGeolocation_CIGeopointFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,position,value) )
    ( (This)->lpVtbl->CreateWithAltitudeReferenceSystem(This,position,altitudeReferenceSystem,value) )
    ( (This)->lpVtbl->CreateWithAltitudeReferenceSystemAndSpatialReferenceId(This,position,altitudeReferenceSystem,spatialReferenceId,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGeolocation_CIGeopointFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Geolocation_IGeoposition[] = L"Windows.Devices.Geolocation.IGeoposition";
typedef struct __x_ABI_CWindows_CDevices_CGeolocation_CIGeopositionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Coordinate )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinate * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CivicAddress )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGeolocation_CICivicAddress * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CGeolocation_CIGeopositionVtbl;
interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CGeolocation_CIGeopositionVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Coordinate(This,value) )
    ( (This)->lpVtbl->get_CivicAddress(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Geolocation_IGeoposition2[] = L"Windows.Devices.Geolocation.IGeoposition2";
typedef struct __x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_VenueData )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGeolocation_CIVenueData * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition2Vtbl;
interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition2
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_VenueData(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Geolocation_IGeoshape[] = L"Windows.Devices.Geolocation.IGeoshape";
typedef struct __x_ABI_CWindows_CDevices_CGeolocation_CIGeoshapeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeoshape * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeoshape * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeoshape * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeoshape * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeoshape * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeoshape * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_GeoshapeType )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeoshape * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CGeolocation_CGeoshapeType * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SpatialReferenceId )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeoshape * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AltitudeReferenceSystem )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeoshape * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CGeolocation_CAltitudeReferenceSystem * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CGeolocation_CIGeoshapeVtbl;
interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeoshape
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CGeolocation_CIGeoshapeVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_GeoshapeType(This,value) )
    ( (This)->lpVtbl->get_SpatialReferenceId(This,value) )
    ( (This)->lpVtbl->get_AltitudeReferenceSystem(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGeolocation_CIGeoshape;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Geolocation_IGeovisit[] = L"Windows.Devices.Geolocation.IGeovisit";
typedef struct __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisit * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisit * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisit * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisit * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisit * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisit * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Position )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisit * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_StateChange )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisit * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CGeolocation_CVisitStateChange * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Timestamp )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisit * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitVtbl;
interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisit
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Position(This,value) )
    ( (This)->lpVtbl->get_StateChange(This,value) )
    ( (This)->lpVtbl->get_Timestamp(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGeolocation_CIGeovisit;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Geolocation_IGeovisitMonitor[] = L"Windows.Devices.Geolocation.IGeovisitMonitor";
typedef struct __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitMonitorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitMonitor * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitMonitor * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitMonitor * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitMonitor * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitMonitor * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitMonitor * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_MonitoringScope )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitMonitor * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CGeolocation_CVisitMonitoringScope * value
        );
    HRESULT ( STDMETHODCALLTYPE *Start )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitMonitor * This,
                  __x_ABI_CWindows_CDevices_CGeolocation_CVisitMonitoringScope value
        );
    HRESULT ( STDMETHODCALLTYPE *Stop )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitMonitor * This
        );
                    HRESULT ( STDMETHODCALLTYPE *add_VisitStateChanged )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitMonitor * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeovisitMonitor_Windows__CDevices__CGeolocation__CGeovisitStateChangedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_VisitStateChanged )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitMonitor * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitMonitorVtbl;
interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitMonitor
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitMonitorVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_MonitoringScope(This,value) )
    ( (This)->lpVtbl->Start(This,value) )
    ( (This)->lpVtbl->Stop(This) )
    ( (This)->lpVtbl->add_VisitStateChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_VisitStateChanged(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitMonitor;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Geolocation_IGeovisitMonitorStatics[] = L"Windows.Devices.Geolocation.IGeovisitMonitorStatics";
typedef struct __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitMonitorStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitMonitorStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitMonitorStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitMonitorStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitMonitorStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitMonitorStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitMonitorStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetLastReportAsync )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitMonitorStatics * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeovisit * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitMonitorStaticsVtbl;
interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitMonitorStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitMonitorStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetLastReportAsync(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitMonitorStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Geolocation_IGeovisitStateChangedEventArgs[] = L"Windows.Devices.Geolocation.IGeovisitStateChangedEventArgs";
typedef struct __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitStateChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitStateChangedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitStateChangedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitStateChangedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitStateChangedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitStateChangedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitStateChangedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Visit )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitStateChangedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisit * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitStateChangedEventArgsVtbl;
interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitStateChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitStateChangedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Visit(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitStateChangedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Geolocation_IGeovisitTriggerDetails[] = L"Windows.Devices.Geolocation.IGeovisitTriggerDetails";
typedef struct __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitTriggerDetailsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitTriggerDetails * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitTriggerDetails * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitTriggerDetails * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitTriggerDetails * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitTriggerDetails * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitTriggerDetails * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *ReadReports )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitTriggerDetails * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CGeolocation__CGeovisit * * values
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitTriggerDetailsVtbl;
interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitTriggerDetails
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitTriggerDetailsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->ReadReports(This,values) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitTriggerDetails;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Geolocation_IPositionChangedEventArgs[] = L"Windows.Devices.Geolocation.IPositionChangedEventArgs";
typedef struct __x_ABI_CWindows_CDevices_CGeolocation_CIPositionChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIPositionChangedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIPositionChangedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIPositionChangedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIPositionChangedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIPositionChangedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIPositionChangedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Position )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIPositionChangedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CGeolocation_CIPositionChangedEventArgsVtbl;
interface __x_ABI_CWindows_CDevices_CGeolocation_CIPositionChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CGeolocation_CIPositionChangedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Position(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGeolocation_CIPositionChangedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Geolocation_IStatusChangedEventArgs[] = L"Windows.Devices.Geolocation.IStatusChangedEventArgs";
typedef struct __x_ABI_CWindows_CDevices_CGeolocation_CIStatusChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIStatusChangedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIStatusChangedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIStatusChangedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIStatusChangedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIStatusChangedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIStatusChangedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIStatusChangedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CGeolocation_CPositionStatus * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CGeolocation_CIStatusChangedEventArgsVtbl;
interface __x_ABI_CWindows_CDevices_CGeolocation_CIStatusChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CGeolocation_CIStatusChangedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Status(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGeolocation_CIStatusChangedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Geolocation_IVenueData[] = L"Windows.Devices.Geolocation.IVenueData";
typedef struct __x_ABI_CWindows_CDevices_CGeolocation_CIVenueDataVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIVenueData * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIVenueData * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIVenueData * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIVenueData * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIVenueData * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIVenueData * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIVenueData * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Level )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIVenueData * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CGeolocation_CIVenueDataVtbl;
interface __x_ABI_CWindows_CDevices_CGeolocation_CIVenueData
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CGeolocation_CIVenueDataVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Id(This,value) )
    ( (This)->lpVtbl->get_Level(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGeolocation_CIVenueData;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Geolocation_CivicAddress[] = L"Windows.Devices.Geolocation.CivicAddress";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Geolocation_GeoboundingBox[] = L"Windows.Devices.Geolocation.GeoboundingBox";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Geolocation_Geocircle[] = L"Windows.Devices.Geolocation.Geocircle";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Geolocation_Geocoordinate[] = L"Windows.Devices.Geolocation.Geocoordinate";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Geolocation_GeocoordinateSatelliteData[] = L"Windows.Devices.Geolocation.GeocoordinateSatelliteData";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Geolocation_Geolocator[] = L"Windows.Devices.Geolocation.Geolocator";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Geolocation_Geopath[] = L"Windows.Devices.Geolocation.Geopath";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Geolocation_Geopoint[] = L"Windows.Devices.Geolocation.Geopoint";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Geolocation_Geoposition[] = L"Windows.Devices.Geolocation.Geoposition";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Geolocation_Geovisit[] = L"Windows.Devices.Geolocation.Geovisit";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Geolocation_GeovisitMonitor[] = L"Windows.Devices.Geolocation.GeovisitMonitor";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Geolocation_GeovisitStateChangedEventArgs[] = L"Windows.Devices.Geolocation.GeovisitStateChangedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Geolocation_GeovisitTriggerDetails[] = L"Windows.Devices.Geolocation.GeovisitTriggerDetails";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Geolocation_PositionChangedEventArgs[] = L"Windows.Devices.Geolocation.PositionChangedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Geolocation_StatusChangedEventArgs[] = L"Windows.Devices.Geolocation.StatusChangedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Geolocation_VenueData[] = L"Windows.Devices.Geolocation.VenueData";
       
       
#pragma clang diagnostic pop

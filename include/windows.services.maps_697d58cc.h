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
#include "Windows.UI.Popups.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CServices_CMaps_CIEnhancedWaypoint __x_ABI_CWindows_CServices_CMaps_CIEnhancedWaypoint;
typedef interface __x_ABI_CWindows_CServices_CMaps_CIEnhancedWaypointFactory __x_ABI_CWindows_CServices_CMaps_CIEnhancedWaypointFactory;
typedef interface __x_ABI_CWindows_CServices_CMaps_CIManeuverWarning __x_ABI_CWindows_CServices_CMaps_CIManeuverWarning;
typedef interface __x_ABI_CWindows_CServices_CMaps_CIMapAddress __x_ABI_CWindows_CServices_CMaps_CIMapAddress;
typedef interface __x_ABI_CWindows_CServices_CMaps_CIMapAddress2 __x_ABI_CWindows_CServices_CMaps_CIMapAddress2;
typedef interface __x_ABI_CWindows_CServices_CMaps_CIMapLocation __x_ABI_CWindows_CServices_CMaps_CIMapLocation;
typedef interface __x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderResult __x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderResult;
typedef interface __x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderStatics __x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderStatics;
typedef interface __x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderStatics2 __x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderStatics2;
typedef interface __x_ABI_CWindows_CServices_CMaps_CIMapManagerStatics __x_ABI_CWindows_CServices_CMaps_CIMapManagerStatics;
typedef interface __x_ABI_CWindows_CServices_CMaps_CIMapRoute __x_ABI_CWindows_CServices_CMaps_CIMapRoute;
typedef interface __x_ABI_CWindows_CServices_CMaps_CIMapRoute2 __x_ABI_CWindows_CServices_CMaps_CIMapRoute2;
typedef interface __x_ABI_CWindows_CServices_CMaps_CIMapRoute3 __x_ABI_CWindows_CServices_CMaps_CIMapRoute3;
typedef interface __x_ABI_CWindows_CServices_CMaps_CIMapRoute4 __x_ABI_CWindows_CServices_CMaps_CIMapRoute4;
typedef interface __x_ABI_CWindows_CServices_CMaps_CIMapRouteDrivingOptions __x_ABI_CWindows_CServices_CMaps_CIMapRouteDrivingOptions;
typedef interface __x_ABI_CWindows_CServices_CMaps_CIMapRouteDrivingOptions2 __x_ABI_CWindows_CServices_CMaps_CIMapRouteDrivingOptions2;
typedef interface __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderResult __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderResult;
typedef interface __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderResult2 __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderResult2;
typedef interface __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics;
typedef interface __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics2 __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics2;
typedef interface __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics3 __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics3;
typedef interface __x_ABI_CWindows_CServices_CMaps_CIMapRouteLeg __x_ABI_CWindows_CServices_CMaps_CIMapRouteLeg;
typedef interface __x_ABI_CWindows_CServices_CMaps_CIMapRouteLeg2 __x_ABI_CWindows_CServices_CMaps_CIMapRouteLeg2;
typedef interface __x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver __x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver;
typedef interface __x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver2 __x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver2;
typedef interface __x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver3 __x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver3;
typedef interface __x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics __x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics;
typedef interface __x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics2 __x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics2;
typedef interface __x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics3 __x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics3;
typedef interface __x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics4 __x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics4;
typedef interface __x_ABI_CWindows_CServices_CMaps_CIPlaceInfo __x_ABI_CWindows_CServices_CMaps_CIPlaceInfo;
typedef interface __x_ABI_CWindows_CServices_CMaps_CIPlaceInfoCreateOptions __x_ABI_CWindows_CServices_CMaps_CIPlaceInfoCreateOptions;
typedef interface __x_ABI_CWindows_CServices_CMaps_CIPlaceInfoStatics __x_ABI_CWindows_CServices_CMaps_CIPlaceInfoStatics;
typedef interface __x_ABI_CWindows_CServices_CMaps_CIPlaceInfoStatics2 __x_ABI_CWindows_CServices_CMaps_CIPlaceInfoStatics2;
typedef interface __FIIterator_1_Windows__CServices__CMaps__CEnhancedWaypoint __FIIterator_1_Windows__CServices__CMaps__CEnhancedWaypoint;
EXTERN_C const IID IID___FIIterator_1_Windows__CServices__CMaps__CEnhancedWaypoint;
typedef struct __FIIterator_1_Windows__CServices__CMaps__CEnhancedWaypointVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CServices__CMaps__CEnhancedWaypoint * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CEnhancedWaypoint * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CEnhancedWaypoint * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CEnhancedWaypoint * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CEnhancedWaypoint * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CEnhancedWaypoint * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CEnhancedWaypoint * This, __RPC__out __x_ABI_CWindows_CServices_CMaps_CIEnhancedWaypoint * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CEnhancedWaypoint * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CEnhancedWaypoint * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CEnhancedWaypoint * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CServices_CMaps_CIEnhancedWaypoint * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CServices__CMaps__CEnhancedWaypointVtbl;
interface __FIIterator_1_Windows__CServices__CMaps__CEnhancedWaypoint
{
    CONST_VTBL struct __FIIterator_1_Windows__CServices__CMaps__CEnhancedWaypointVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CServices__CMaps__CEnhancedWaypoint __FIIterable_1_Windows__CServices__CMaps__CEnhancedWaypoint;
EXTERN_C const IID IID___FIIterable_1_Windows__CServices__CMaps__CEnhancedWaypoint;
typedef struct __FIIterable_1_Windows__CServices__CMaps__CEnhancedWaypointVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CServices__CMaps__CEnhancedWaypoint * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__CEnhancedWaypoint * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__CEnhancedWaypoint * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__CEnhancedWaypoint * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__CEnhancedWaypoint * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__CEnhancedWaypoint * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__CEnhancedWaypoint * This, __RPC__deref_out_opt __FIIterator_1_Windows__CServices__CMaps__CEnhancedWaypoint **first);
    END_INTERFACE
} __FIIterable_1_Windows__CServices__CMaps__CEnhancedWaypointVtbl;
interface __FIIterable_1_Windows__CServices__CMaps__CEnhancedWaypoint
{
    CONST_VTBL struct __FIIterable_1_Windows__CServices__CMaps__CEnhancedWaypointVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CServices__CMaps__CManeuverWarning __FIIterator_1_Windows__CServices__CMaps__CManeuverWarning;
EXTERN_C const IID IID___FIIterator_1_Windows__CServices__CMaps__CManeuverWarning;
typedef struct __FIIterator_1_Windows__CServices__CMaps__CManeuverWarningVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CServices__CMaps__CManeuverWarning * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CManeuverWarning * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CManeuverWarning * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CManeuverWarning * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CManeuverWarning * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CManeuverWarning * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CManeuverWarning * This, __RPC__out __x_ABI_CWindows_CServices_CMaps_CIManeuverWarning * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CManeuverWarning * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CManeuverWarning * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CManeuverWarning * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CServices_CMaps_CIManeuverWarning * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CServices__CMaps__CManeuverWarningVtbl;
interface __FIIterator_1_Windows__CServices__CMaps__CManeuverWarning
{
    CONST_VTBL struct __FIIterator_1_Windows__CServices__CMaps__CManeuverWarningVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CServices__CMaps__CManeuverWarning __FIIterable_1_Windows__CServices__CMaps__CManeuverWarning;
EXTERN_C const IID IID___FIIterable_1_Windows__CServices__CMaps__CManeuverWarning;
typedef struct __FIIterable_1_Windows__CServices__CMaps__CManeuverWarningVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CServices__CMaps__CManeuverWarning * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__CManeuverWarning * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__CManeuverWarning * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__CManeuverWarning * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__CManeuverWarning * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__CManeuverWarning * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__CManeuverWarning * This, __RPC__deref_out_opt __FIIterator_1_Windows__CServices__CMaps__CManeuverWarning **first);
    END_INTERFACE
} __FIIterable_1_Windows__CServices__CMaps__CManeuverWarningVtbl;
interface __FIIterable_1_Windows__CServices__CMaps__CManeuverWarning
{
    CONST_VTBL struct __FIIterable_1_Windows__CServices__CMaps__CManeuverWarningVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CServices__CMaps__CMapLocation __FIIterator_1_Windows__CServices__CMaps__CMapLocation;
EXTERN_C const IID IID___FIIterator_1_Windows__CServices__CMaps__CMapLocation;
typedef struct __FIIterator_1_Windows__CServices__CMaps__CMapLocationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CServices__CMaps__CMapLocation * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CMapLocation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CMapLocation * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CMapLocation * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CMapLocation * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CMapLocation * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CMapLocation * This, __RPC__out __x_ABI_CWindows_CServices_CMaps_CIMapLocation * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CMapLocation * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CMapLocation * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CMapLocation * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CServices_CMaps_CIMapLocation * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CServices__CMaps__CMapLocationVtbl;
interface __FIIterator_1_Windows__CServices__CMaps__CMapLocation
{
    CONST_VTBL struct __FIIterator_1_Windows__CServices__CMaps__CMapLocationVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CServices__CMaps__CMapLocation __FIIterable_1_Windows__CServices__CMaps__CMapLocation;
EXTERN_C const IID IID___FIIterable_1_Windows__CServices__CMaps__CMapLocation;
typedef struct __FIIterable_1_Windows__CServices__CMaps__CMapLocationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CServices__CMaps__CMapLocation * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__CMapLocation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__CMapLocation * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__CMapLocation * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__CMapLocation * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__CMapLocation * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__CMapLocation * This, __RPC__deref_out_opt __FIIterator_1_Windows__CServices__CMaps__CMapLocation **first);
    END_INTERFACE
} __FIIterable_1_Windows__CServices__CMaps__CMapLocationVtbl;
interface __FIIterable_1_Windows__CServices__CMaps__CMapLocation
{
    CONST_VTBL struct __FIIterable_1_Windows__CServices__CMaps__CMapLocationVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CServices__CMaps__CMapRoute __FIIterator_1_Windows__CServices__CMaps__CMapRoute;
EXTERN_C const IID IID___FIIterator_1_Windows__CServices__CMaps__CMapRoute;
typedef struct __FIIterator_1_Windows__CServices__CMaps__CMapRouteVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CServices__CMaps__CMapRoute * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CMapRoute * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CMapRoute * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CMapRoute * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CMapRoute * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CMapRoute * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CMapRoute * This, __RPC__out __x_ABI_CWindows_CServices_CMaps_CIMapRoute * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CMapRoute * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CMapRoute * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CMapRoute * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CServices_CMaps_CIMapRoute * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CServices__CMaps__CMapRouteVtbl;
interface __FIIterator_1_Windows__CServices__CMaps__CMapRoute
{
    CONST_VTBL struct __FIIterator_1_Windows__CServices__CMaps__CMapRouteVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CServices__CMaps__CMapRoute __FIIterable_1_Windows__CServices__CMaps__CMapRoute;
EXTERN_C const IID IID___FIIterable_1_Windows__CServices__CMaps__CMapRoute;
typedef struct __FIIterable_1_Windows__CServices__CMaps__CMapRouteVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CServices__CMaps__CMapRoute * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__CMapRoute * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__CMapRoute * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__CMapRoute * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__CMapRoute * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__CMapRoute * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__CMapRoute * This, __RPC__deref_out_opt __FIIterator_1_Windows__CServices__CMaps__CMapRoute **first);
    END_INTERFACE
} __FIIterable_1_Windows__CServices__CMaps__CMapRouteVtbl;
interface __FIIterable_1_Windows__CServices__CMaps__CMapRoute
{
    CONST_VTBL struct __FIIterable_1_Windows__CServices__CMaps__CMapRouteVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CServices__CMaps__CMapRouteLeg __FIIterator_1_Windows__CServices__CMaps__CMapRouteLeg;
EXTERN_C const IID IID___FIIterator_1_Windows__CServices__CMaps__CMapRouteLeg;
typedef struct __FIIterator_1_Windows__CServices__CMaps__CMapRouteLegVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CServices__CMaps__CMapRouteLeg * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CMapRouteLeg * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CMapRouteLeg * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CMapRouteLeg * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CMapRouteLeg * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CMapRouteLeg * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CMapRouteLeg * This, __RPC__out __x_ABI_CWindows_CServices_CMaps_CIMapRouteLeg * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CMapRouteLeg * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CMapRouteLeg * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CMapRouteLeg * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CServices_CMaps_CIMapRouteLeg * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CServices__CMaps__CMapRouteLegVtbl;
interface __FIIterator_1_Windows__CServices__CMaps__CMapRouteLeg
{
    CONST_VTBL struct __FIIterator_1_Windows__CServices__CMaps__CMapRouteLegVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CServices__CMaps__CMapRouteLeg __FIIterable_1_Windows__CServices__CMaps__CMapRouteLeg;
EXTERN_C const IID IID___FIIterable_1_Windows__CServices__CMaps__CMapRouteLeg;
typedef struct __FIIterable_1_Windows__CServices__CMaps__CMapRouteLegVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CServices__CMaps__CMapRouteLeg * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__CMapRouteLeg * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__CMapRouteLeg * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__CMapRouteLeg * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__CMapRouteLeg * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__CMapRouteLeg * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__CMapRouteLeg * This, __RPC__deref_out_opt __FIIterator_1_Windows__CServices__CMaps__CMapRouteLeg **first);
    END_INTERFACE
} __FIIterable_1_Windows__CServices__CMaps__CMapRouteLegVtbl;
interface __FIIterable_1_Windows__CServices__CMaps__CMapRouteLeg
{
    CONST_VTBL struct __FIIterable_1_Windows__CServices__CMaps__CMapRouteLegVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CServices__CMaps__CMapRouteManeuver __FIIterator_1_Windows__CServices__CMaps__CMapRouteManeuver;
EXTERN_C const IID IID___FIIterator_1_Windows__CServices__CMaps__CMapRouteManeuver;
typedef struct __FIIterator_1_Windows__CServices__CMaps__CMapRouteManeuverVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CServices__CMaps__CMapRouteManeuver * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CMapRouteManeuver * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CMapRouteManeuver * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CMapRouteManeuver * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CMapRouteManeuver * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CMapRouteManeuver * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CMapRouteManeuver * This, __RPC__out __x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CMapRouteManeuver * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CMapRouteManeuver * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CMapRouteManeuver * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CServices__CMaps__CMapRouteManeuverVtbl;
interface __FIIterator_1_Windows__CServices__CMaps__CMapRouteManeuver
{
    CONST_VTBL struct __FIIterator_1_Windows__CServices__CMaps__CMapRouteManeuverVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CServices__CMaps__CMapRouteManeuver __FIIterable_1_Windows__CServices__CMaps__CMapRouteManeuver;
EXTERN_C const IID IID___FIIterable_1_Windows__CServices__CMaps__CMapRouteManeuver;
typedef struct __FIIterable_1_Windows__CServices__CMaps__CMapRouteManeuverVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CServices__CMaps__CMapRouteManeuver * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__CMapRouteManeuver * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__CMapRouteManeuver * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__CMapRouteManeuver * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__CMapRouteManeuver * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__CMapRouteManeuver * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__CMapRouteManeuver * This, __RPC__deref_out_opt __FIIterator_1_Windows__CServices__CMaps__CMapRouteManeuver **first);
    END_INTERFACE
} __FIIterable_1_Windows__CServices__CMaps__CMapRouteManeuverVtbl;
interface __FIIterable_1_Windows__CServices__CMaps__CMapRouteManeuver
{
    CONST_VTBL struct __FIIterable_1_Windows__CServices__CMaps__CMapRouteManeuverVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CServices__CMaps__CManeuverWarning __FIVectorView_1_Windows__CServices__CMaps__CManeuverWarning;
EXTERN_C const IID IID___FIVectorView_1_Windows__CServices__CMaps__CManeuverWarning;
typedef struct __FIVectorView_1_Windows__CServices__CMaps__CManeuverWarningVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CManeuverWarning * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CManeuverWarning * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CManeuverWarning * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CManeuverWarning * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CManeuverWarning * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CManeuverWarning * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CManeuverWarning * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CServices_CMaps_CIManeuverWarning * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CManeuverWarning * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CManeuverWarning * This,
                       __x_ABI_CWindows_CServices_CMaps_CIManeuverWarning * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CManeuverWarning * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CServices_CMaps_CIManeuverWarning * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CServices__CMaps__CManeuverWarningVtbl;
interface __FIVectorView_1_Windows__CServices__CMaps__CManeuverWarning
{
    CONST_VTBL struct __FIVectorView_1_Windows__CServices__CMaps__CManeuverWarningVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CServices__CMaps__CMapLocation __FIVectorView_1_Windows__CServices__CMaps__CMapLocation;
EXTERN_C const IID IID___FIVectorView_1_Windows__CServices__CMaps__CMapLocation;
typedef struct __FIVectorView_1_Windows__CServices__CMaps__CMapLocationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CMapLocation * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CMapLocation * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CMapLocation * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CMapLocation * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CMapLocation * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CMapLocation * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CMapLocation * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CServices_CMaps_CIMapLocation * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CMapLocation * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CMapLocation * This,
                       __x_ABI_CWindows_CServices_CMaps_CIMapLocation * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CMapLocation * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CServices_CMaps_CIMapLocation * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CServices__CMaps__CMapLocationVtbl;
interface __FIVectorView_1_Windows__CServices__CMaps__CMapLocation
{
    CONST_VTBL struct __FIVectorView_1_Windows__CServices__CMaps__CMapLocationVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CServices__CMaps__CMapRoute __FIVectorView_1_Windows__CServices__CMaps__CMapRoute;
EXTERN_C const IID IID___FIVectorView_1_Windows__CServices__CMaps__CMapRoute;
typedef struct __FIVectorView_1_Windows__CServices__CMaps__CMapRouteVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CMapRoute * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CMapRoute * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CMapRoute * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CMapRoute * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CMapRoute * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CMapRoute * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CMapRoute * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CServices_CMaps_CIMapRoute * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CMapRoute * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CMapRoute * This,
                       __x_ABI_CWindows_CServices_CMaps_CIMapRoute * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CMapRoute * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CServices_CMaps_CIMapRoute * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CServices__CMaps__CMapRouteVtbl;
interface __FIVectorView_1_Windows__CServices__CMaps__CMapRoute
{
    CONST_VTBL struct __FIVectorView_1_Windows__CServices__CMaps__CMapRouteVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CServices__CMaps__CMapRouteLeg __FIVectorView_1_Windows__CServices__CMaps__CMapRouteLeg;
EXTERN_C const IID IID___FIVectorView_1_Windows__CServices__CMaps__CMapRouteLeg;
typedef struct __FIVectorView_1_Windows__CServices__CMaps__CMapRouteLegVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CMapRouteLeg * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CMapRouteLeg * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CMapRouteLeg * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CMapRouteLeg * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CMapRouteLeg * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CMapRouteLeg * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CMapRouteLeg * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CServices_CMaps_CIMapRouteLeg * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CMapRouteLeg * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CMapRouteLeg * This,
                       __x_ABI_CWindows_CServices_CMaps_CIMapRouteLeg * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CMapRouteLeg * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CServices_CMaps_CIMapRouteLeg * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CServices__CMaps__CMapRouteLegVtbl;
interface __FIVectorView_1_Windows__CServices__CMaps__CMapRouteLeg
{
    CONST_VTBL struct __FIVectorView_1_Windows__CServices__CMaps__CMapRouteLegVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CServices__CMaps__CMapRouteManeuver __FIVectorView_1_Windows__CServices__CMaps__CMapRouteManeuver;
EXTERN_C const IID IID___FIVectorView_1_Windows__CServices__CMaps__CMapRouteManeuver;
typedef struct __FIVectorView_1_Windows__CServices__CMaps__CMapRouteManeuverVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CMapRouteManeuver * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CMapRouteManeuver * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CMapRouteManeuver * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CMapRouteManeuver * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CMapRouteManeuver * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CMapRouteManeuver * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CMapRouteManeuver * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CMapRouteManeuver * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CMapRouteManeuver * This,
                       __x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CMapRouteManeuver * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CServices__CMaps__CMapRouteManeuverVtbl;
interface __FIVectorView_1_Windows__CServices__CMaps__CMapRouteManeuver
{
    CONST_VTBL struct __FIVectorView_1_Windows__CServices__CMaps__CMapRouteManeuverVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__CMapLocationFinderResult __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__CMapLocationFinderResult;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__CMapLocationFinderResult;
typedef interface __FIAsyncOperation_1_Windows__CServices__CMaps__CMapLocationFinderResult __FIAsyncOperation_1_Windows__CServices__CMaps__CMapLocationFinderResult;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__CMapLocationFinderResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__CMapLocationFinderResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__CMapLocationFinderResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__CMapLocationFinderResult * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__CMapLocationFinderResult * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CServices__CMaps__CMapLocationFinderResult *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__CMapLocationFinderResultVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__CMapLocationFinderResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__CMapLocationFinderResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CServices__CMaps__CMapLocationFinderResult __FIAsyncOperation_1_Windows__CServices__CMaps__CMapLocationFinderResult;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CServices__CMaps__CMapLocationFinderResult;
typedef struct __FIAsyncOperation_1_Windows__CServices__CMaps__CMapLocationFinderResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CMaps__CMapLocationFinderResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CMaps__CMapLocationFinderResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CMaps__CMapLocationFinderResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CMaps__CMapLocationFinderResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CMaps__CMapLocationFinderResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CMaps__CMapLocationFinderResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CMaps__CMapLocationFinderResult * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__CMapLocationFinderResult *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CMaps__CMapLocationFinderResult * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__CMapLocationFinderResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CMaps__CMapLocationFinderResult * This, __RPC__out __x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CServices__CMaps__CMapLocationFinderResultVtbl;
interface __FIAsyncOperation_1_Windows__CServices__CMaps__CMapLocationFinderResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CServices__CMaps__CMapLocationFinderResultVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__CMapRouteFinderResult __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__CMapRouteFinderResult;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__CMapRouteFinderResult;
typedef interface __FIAsyncOperation_1_Windows__CServices__CMaps__CMapRouteFinderResult __FIAsyncOperation_1_Windows__CServices__CMaps__CMapRouteFinderResult;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__CMapRouteFinderResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__CMapRouteFinderResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__CMapRouteFinderResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__CMapRouteFinderResult * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__CMapRouteFinderResult * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CServices__CMaps__CMapRouteFinderResult *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__CMapRouteFinderResultVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__CMapRouteFinderResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__CMapRouteFinderResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CServices__CMaps__CMapRouteFinderResult __FIAsyncOperation_1_Windows__CServices__CMaps__CMapRouteFinderResult;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CServices__CMaps__CMapRouteFinderResult;
typedef struct __FIAsyncOperation_1_Windows__CServices__CMaps__CMapRouteFinderResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CMaps__CMapRouteFinderResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CMaps__CMapRouteFinderResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CMaps__CMapRouteFinderResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CMaps__CMapRouteFinderResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CMaps__CMapRouteFinderResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CMaps__CMapRouteFinderResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CMaps__CMapRouteFinderResult * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__CMapRouteFinderResult *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CMaps__CMapRouteFinderResult * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__CMapRouteFinderResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CMaps__CMapRouteFinderResult * This, __RPC__out __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CServices__CMaps__CMapRouteFinderResultVtbl;
interface __FIAsyncOperation_1_Windows__CServices__CMaps__CMapRouteFinderResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CServices__CMaps__CMapRouteFinderResultVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint;
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
typedef interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBox __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBox;
typedef interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeopath __x_ABI_CWindows_CDevices_CGeolocation_CIGeopath;
typedef interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeoshape __x_ABI_CWindows_CDevices_CGeolocation_CIGeoshape;
typedef struct __x_ABI_CWindows_CFoundation_CDateTime __x_ABI_CWindows_CFoundation_CDateTime;
typedef struct __x_ABI_CWindows_CFoundation_CRect __x_ABI_CWindows_CFoundation_CRect;
typedef struct __x_ABI_CWindows_CFoundation_CTimeSpan __x_ABI_CWindows_CFoundation_CTimeSpan;
typedef enum __x_ABI_CWindows_CUI_CPopups_CPlacement __x_ABI_CWindows_CUI_CPopups_CPlacement;
typedef enum __x_ABI_CWindows_CServices_CMaps_CManeuverWarningKind __x_ABI_CWindows_CServices_CMaps_CManeuverWarningKind;
typedef enum __x_ABI_CWindows_CServices_CMaps_CManeuverWarningSeverity __x_ABI_CWindows_CServices_CMaps_CManeuverWarningSeverity;
typedef enum __x_ABI_CWindows_CServices_CMaps_CMapLocationDesiredAccuracy __x_ABI_CWindows_CServices_CMaps_CMapLocationDesiredAccuracy;
typedef enum __x_ABI_CWindows_CServices_CMaps_CMapLocationFinderStatus __x_ABI_CWindows_CServices_CMaps_CMapLocationFinderStatus;
typedef enum __x_ABI_CWindows_CServices_CMaps_CMapManeuverNotices __x_ABI_CWindows_CServices_CMaps_CMapManeuverNotices;
typedef enum __x_ABI_CWindows_CServices_CMaps_CMapRouteFinderStatus __x_ABI_CWindows_CServices_CMaps_CMapRouteFinderStatus;
typedef enum __x_ABI_CWindows_CServices_CMaps_CMapRouteManeuverKind __x_ABI_CWindows_CServices_CMaps_CMapRouteManeuverKind;
typedef enum __x_ABI_CWindows_CServices_CMaps_CMapRouteOptimization __x_ABI_CWindows_CServices_CMaps_CMapRouteOptimization;
typedef enum __x_ABI_CWindows_CServices_CMaps_CMapRouteRestrictions __x_ABI_CWindows_CServices_CMaps_CMapRouteRestrictions;
typedef enum __x_ABI_CWindows_CServices_CMaps_CMapServiceDataUsagePreference __x_ABI_CWindows_CServices_CMaps_CMapServiceDataUsagePreference;
typedef enum __x_ABI_CWindows_CServices_CMaps_CTrafficCongestion __x_ABI_CWindows_CServices_CMaps_CTrafficCongestion;
typedef enum __x_ABI_CWindows_CServices_CMaps_CWaypointKind __x_ABI_CWindows_CServices_CMaps_CWaypointKind;
enum __x_ABI_CWindows_CServices_CMaps_CManeuverWarningKind
{
    ManeuverWarningKind_None = 0,
    ManeuverWarningKind_Accident = 1,
    ManeuverWarningKind_AdministrativeDivisionChange = 2,
    ManeuverWarningKind_Alert = 3,
    ManeuverWarningKind_BlockedRoad = 4,
    ManeuverWarningKind_CheckTimetable = 5,
    ManeuverWarningKind_Congestion = 6,
    ManeuverWarningKind_Construction = 7,
    ManeuverWarningKind_CountryChange = 8,
    ManeuverWarningKind_DisabledVehicle = 9,
    ManeuverWarningKind_GateAccess = 10,
    ManeuverWarningKind_GetOffTransit = 11,
    ManeuverWarningKind_GetOnTransit = 12,
    ManeuverWarningKind_IllegalUTurn = 13,
    ManeuverWarningKind_MassTransit = 14,
    ManeuverWarningKind_Miscellaneous = 15,
    ManeuverWarningKind_NoIncident = 16,
    ManeuverWarningKind_Other = 17,
    ManeuverWarningKind_OtherNews = 18,
    ManeuverWarningKind_OtherTrafficIncidents = 19,
    ManeuverWarningKind_PlannedEvent = 20,
    ManeuverWarningKind_PrivateRoad = 21,
    ManeuverWarningKind_RestrictedTurn = 22,
    ManeuverWarningKind_RoadClosures = 23,
    ManeuverWarningKind_RoadHazard = 24,
    ManeuverWarningKind_ScheduledConstruction = 25,
    ManeuverWarningKind_SeasonalClosures = 26,
    ManeuverWarningKind_Tollbooth = 27,
    ManeuverWarningKind_TollRoad = 28,
    ManeuverWarningKind_TollZoneEnter = 29,
    ManeuverWarningKind_TollZoneExit = 30,
    ManeuverWarningKind_TrafficFlow = 31,
    ManeuverWarningKind_TransitLineChange = 32,
    ManeuverWarningKind_UnpavedRoad = 33,
    ManeuverWarningKind_UnscheduledConstruction = 34,
    ManeuverWarningKind_Weather = 35,
};
enum __x_ABI_CWindows_CServices_CMaps_CManeuverWarningSeverity
{
    ManeuverWarningSeverity_None = 0,
    ManeuverWarningSeverity_LowImpact = 1,
    ManeuverWarningSeverity_Minor = 2,
    ManeuverWarningSeverity_Moderate = 3,
    ManeuverWarningSeverity_Serious = 4,
};
enum __x_ABI_CWindows_CServices_CMaps_CMapLocationDesiredAccuracy
{
    MapLocationDesiredAccuracy_High = 0,
    MapLocationDesiredAccuracy_Low = 1,
};
enum __x_ABI_CWindows_CServices_CMaps_CMapLocationFinderStatus
{
    MapLocationFinderStatus_Success = 0,
    MapLocationFinderStatus_UnknownError = 1,
    MapLocationFinderStatus_InvalidCredentials = 2,
    MapLocationFinderStatus_BadLocation = 3,
    MapLocationFinderStatus_IndexFailure = 4,
    MapLocationFinderStatus_NetworkFailure = 5,
    MapLocationFinderStatus_NotSupported = 6,
};
enum __x_ABI_CWindows_CServices_CMaps_CMapManeuverNotices
{
    MapManeuverNotices_None = 0,
    MapManeuverNotices_Toll = 0x1,
    MapManeuverNotices_Unpaved = 0x2,
};
enum __x_ABI_CWindows_CServices_CMaps_CMapRouteFinderStatus
{
    MapRouteFinderStatus_Success = 0,
    MapRouteFinderStatus_UnknownError = 1,
    MapRouteFinderStatus_InvalidCredentials = 2,
    MapRouteFinderStatus_NoRouteFound = 3,
    MapRouteFinderStatus_NoRouteFoundWithGivenOptions = 4,
    MapRouteFinderStatus_StartPointNotFound = 5,
    MapRouteFinderStatus_EndPointNotFound = 6,
    MapRouteFinderStatus_NoPedestrianRouteFound = 7,
    MapRouteFinderStatus_NetworkFailure = 8,
    MapRouteFinderStatus_NotSupported = 9,
};
enum __x_ABI_CWindows_CServices_CMaps_CMapRouteManeuverKind
{
    MapRouteManeuverKind_None = 0,
    MapRouteManeuverKind_Start = 1,
    MapRouteManeuverKind_Stopover = 2,
    MapRouteManeuverKind_StopoverResume = 3,
    MapRouteManeuverKind_End = 4,
    MapRouteManeuverKind_GoStraight = 5,
    MapRouteManeuverKind_UTurnLeft = 6,
    MapRouteManeuverKind_UTurnRight = 7,
    MapRouteManeuverKind_TurnKeepLeft = 8,
    MapRouteManeuverKind_TurnKeepRight = 9,
    MapRouteManeuverKind_TurnLightLeft = 10,
    MapRouteManeuverKind_TurnLightRight = 11,
    MapRouteManeuverKind_TurnLeft = 12,
    MapRouteManeuverKind_TurnRight = 13,
    MapRouteManeuverKind_TurnHardLeft = 14,
    MapRouteManeuverKind_TurnHardRight = 15,
    MapRouteManeuverKind_FreewayEnterLeft = 16,
    MapRouteManeuverKind_FreewayEnterRight = 17,
    MapRouteManeuverKind_FreewayLeaveLeft = 18,
    MapRouteManeuverKind_FreewayLeaveRight = 19,
    MapRouteManeuverKind_FreewayContinueLeft = 20,
    MapRouteManeuverKind_FreewayContinueRight = 21,
    MapRouteManeuverKind_TrafficCircleLeft = 22,
    MapRouteManeuverKind_TrafficCircleRight = 23,
    MapRouteManeuverKind_TakeFerry = 24,
};
enum __x_ABI_CWindows_CServices_CMaps_CMapRouteOptimization
{
    MapRouteOptimization_Time = 0,
    MapRouteOptimization_Distance = 1,
    MapRouteOptimization_TimeWithTraffic = 2,
    MapRouteOptimization_Scenic = 3,
};
enum __x_ABI_CWindows_CServices_CMaps_CMapRouteRestrictions
{
    MapRouteRestrictions_None = 0,
    MapRouteRestrictions_Highways = 0x1,
    MapRouteRestrictions_TollRoads = 0x2,
    MapRouteRestrictions_Ferries = 0x4,
    MapRouteRestrictions_Tunnels = 0x8,
    MapRouteRestrictions_DirtRoads = 0x10,
    MapRouteRestrictions_Motorail = 0x20,
};
enum __x_ABI_CWindows_CServices_CMaps_CMapServiceDataUsagePreference
{
    MapServiceDataUsagePreference_Default = 0,
    MapServiceDataUsagePreference_OfflineMapDataOnly = 1,
};
enum __x_ABI_CWindows_CServices_CMaps_CTrafficCongestion
{
    TrafficCongestion_Unknown = 0,
    TrafficCongestion_Light = 1,
    TrafficCongestion_Mild = 2,
    TrafficCongestion_Medium = 3,
    TrafficCongestion_Heavy = 4,
};
enum __x_ABI_CWindows_CServices_CMaps_CWaypointKind
{
    WaypointKind_Stop = 0,
    WaypointKind_Via = 1,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_IEnhancedWaypoint[] = L"Windows.Services.Maps.IEnhancedWaypoint";
typedef struct __x_ABI_CWindows_CServices_CMaps_CIEnhancedWaypointVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIEnhancedWaypoint * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIEnhancedWaypoint * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIEnhancedWaypoint * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIEnhancedWaypoint * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIEnhancedWaypoint * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIEnhancedWaypoint * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Point )(
        __x_ABI_CWindows_CServices_CMaps_CIEnhancedWaypoint * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Kind )(
        __x_ABI_CWindows_CServices_CMaps_CIEnhancedWaypoint * This,
                           __RPC__out __x_ABI_CWindows_CServices_CMaps_CWaypointKind * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CServices_CMaps_CIEnhancedWaypointVtbl;
interface __x_ABI_CWindows_CServices_CMaps_CIEnhancedWaypoint
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CMaps_CIEnhancedWaypointVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Point(This,value) )
    ( (This)->lpVtbl->get_Kind(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CIEnhancedWaypoint;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_IEnhancedWaypointFactory[] = L"Windows.Services.Maps.IEnhancedWaypointFactory";
typedef struct __x_ABI_CWindows_CServices_CMaps_CIEnhancedWaypointFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIEnhancedWaypointFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIEnhancedWaypointFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIEnhancedWaypointFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIEnhancedWaypointFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIEnhancedWaypointFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIEnhancedWaypointFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CServices_CMaps_CIEnhancedWaypointFactory * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint * point,
                  __x_ABI_CWindows_CServices_CMaps_CWaypointKind kind,
                           __RPC__deref_out_opt __x_ABI_CWindows_CServices_CMaps_CIEnhancedWaypoint * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CServices_CMaps_CIEnhancedWaypointFactoryVtbl;
interface __x_ABI_CWindows_CServices_CMaps_CIEnhancedWaypointFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CMaps_CIEnhancedWaypointFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,point,kind,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CIEnhancedWaypointFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_IManeuverWarning[] = L"Windows.Services.Maps.IManeuverWarning";
typedef struct __x_ABI_CWindows_CServices_CMaps_CIManeuverWarningVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIManeuverWarning * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIManeuverWarning * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIManeuverWarning * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIManeuverWarning * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIManeuverWarning * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIManeuverWarning * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Kind )(
        __x_ABI_CWindows_CServices_CMaps_CIManeuverWarning * This,
                           __RPC__out __x_ABI_CWindows_CServices_CMaps_CManeuverWarningKind * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Severity )(
        __x_ABI_CWindows_CServices_CMaps_CIManeuverWarning * This,
                           __RPC__out __x_ABI_CWindows_CServices_CMaps_CManeuverWarningSeverity * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CServices_CMaps_CIManeuverWarningVtbl;
interface __x_ABI_CWindows_CServices_CMaps_CIManeuverWarning
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CMaps_CIManeuverWarningVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Kind(This,value) )
    ( (This)->lpVtbl->get_Severity(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CIManeuverWarning;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_IMapAddress[] = L"Windows.Services.Maps.IMapAddress";
typedef struct __x_ABI_CWindows_CServices_CMaps_CIMapAddressVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapAddress * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapAddress * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapAddress * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapAddress * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapAddress * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapAddress * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_BuildingName )(
        __x_ABI_CWindows_CServices_CMaps_CIMapAddress * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BuildingFloor )(
        __x_ABI_CWindows_CServices_CMaps_CIMapAddress * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BuildingRoom )(
        __x_ABI_CWindows_CServices_CMaps_CIMapAddress * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BuildingWing )(
        __x_ABI_CWindows_CServices_CMaps_CIMapAddress * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_StreetNumber )(
        __x_ABI_CWindows_CServices_CMaps_CIMapAddress * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Street )(
        __x_ABI_CWindows_CServices_CMaps_CIMapAddress * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Neighborhood )(
        __x_ABI_CWindows_CServices_CMaps_CIMapAddress * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_District )(
        __x_ABI_CWindows_CServices_CMaps_CIMapAddress * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Town )(
        __x_ABI_CWindows_CServices_CMaps_CIMapAddress * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Region )(
        __x_ABI_CWindows_CServices_CMaps_CIMapAddress * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RegionCode )(
        __x_ABI_CWindows_CServices_CMaps_CIMapAddress * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Country )(
        __x_ABI_CWindows_CServices_CMaps_CIMapAddress * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CountryCode )(
        __x_ABI_CWindows_CServices_CMaps_CIMapAddress * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PostCode )(
        __x_ABI_CWindows_CServices_CMaps_CIMapAddress * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Continent )(
        __x_ABI_CWindows_CServices_CMaps_CIMapAddress * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CServices_CMaps_CIMapAddressVtbl;
interface __x_ABI_CWindows_CServices_CMaps_CIMapAddress
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CMaps_CIMapAddressVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_BuildingName(This,value) )
    ( (This)->lpVtbl->get_BuildingFloor(This,value) )
    ( (This)->lpVtbl->get_BuildingRoom(This,value) )
    ( (This)->lpVtbl->get_BuildingWing(This,value) )
    ( (This)->lpVtbl->get_StreetNumber(This,value) )
    ( (This)->lpVtbl->get_Street(This,value) )
    ( (This)->lpVtbl->get_Neighborhood(This,value) )
    ( (This)->lpVtbl->get_District(This,value) )
    ( (This)->lpVtbl->get_Town(This,value) )
    ( (This)->lpVtbl->get_Region(This,value) )
    ( (This)->lpVtbl->get_RegionCode(This,value) )
    ( (This)->lpVtbl->get_Country(This,value) )
    ( (This)->lpVtbl->get_CountryCode(This,value) )
    ( (This)->lpVtbl->get_PostCode(This,value) )
    ( (This)->lpVtbl->get_Continent(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CIMapAddress;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_IMapAddress2[] = L"Windows.Services.Maps.IMapAddress2";
typedef struct __x_ABI_CWindows_CServices_CMaps_CIMapAddress2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapAddress2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapAddress2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapAddress2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapAddress2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapAddress2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapAddress2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_FormattedAddress )(
        __x_ABI_CWindows_CServices_CMaps_CIMapAddress2 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CServices_CMaps_CIMapAddress2Vtbl;
interface __x_ABI_CWindows_CServices_CMaps_CIMapAddress2
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CMaps_CIMapAddress2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_FormattedAddress(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CIMapAddress2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_IMapLocation[] = L"Windows.Services.Maps.IMapLocation";
typedef struct __x_ABI_CWindows_CServices_CMaps_CIMapLocationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapLocation * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapLocation * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapLocation * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapLocation * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapLocation * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapLocation * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Point )(
        __x_ABI_CWindows_CServices_CMaps_CIMapLocation * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DisplayName )(
        __x_ABI_CWindows_CServices_CMaps_CIMapLocation * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Description )(
        __x_ABI_CWindows_CServices_CMaps_CIMapLocation * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Address )(
        __x_ABI_CWindows_CServices_CMaps_CIMapLocation * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CServices_CMaps_CIMapAddress * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CServices_CMaps_CIMapLocationVtbl;
interface __x_ABI_CWindows_CServices_CMaps_CIMapLocation
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CMaps_CIMapLocationVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Point(This,value) )
    ( (This)->lpVtbl->get_DisplayName(This,value) )
    ( (This)->lpVtbl->get_Description(This,value) )
    ( (This)->lpVtbl->get_Address(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CIMapLocation;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_IMapLocationFinderResult[] = L"Windows.Services.Maps.IMapLocationFinderResult";
typedef struct __x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderResult * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderResult * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderResult * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderResult * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderResult * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderResult * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Locations )(
        __x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderResult * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CServices__CMaps__CMapLocation * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderResult * This,
                           __RPC__out __x_ABI_CWindows_CServices_CMaps_CMapLocationFinderStatus * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderResultVtbl;
interface __x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderResult
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderResultVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Locations(This,value) )
    ( (This)->lpVtbl->get_Status(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderResult;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_IMapLocationFinderStatics[] = L"Windows.Services.Maps.IMapLocationFinderStatics";
typedef struct __x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *FindLocationsAtAsync )(
        __x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint * queryPoint,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CServices__CMaps__CMapLocationFinderResult * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *FindLocationsAsync )(
        __x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderStatics * This,
                  __RPC__in HSTRING searchText,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint * referencePoint,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CServices__CMaps__CMapLocationFinderResult * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *FindLocationsWithMaxCountAsync )(
        __x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderStatics * This,
                  __RPC__in HSTRING searchText,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint * referencePoint,
                  UINT32 maxCount,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CServices__CMaps__CMapLocationFinderResult * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderStaticsVtbl;
interface __x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->FindLocationsAtAsync(This,queryPoint,result) )
    ( (This)->lpVtbl->FindLocationsAsync(This,searchText,referencePoint,result) )
    ( (This)->lpVtbl->FindLocationsWithMaxCountAsync(This,searchText,referencePoint,maxCount,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_IMapLocationFinderStatics2[] = L"Windows.Services.Maps.IMapLocationFinderStatics2";
typedef struct __x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *FindLocationsAtWithAccuracyAsync )(
        __x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderStatics2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint * queryPoint,
                  __x_ABI_CWindows_CServices_CMaps_CMapLocationDesiredAccuracy accuracy,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CServices__CMaps__CMapLocationFinderResult * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderStatics2Vtbl;
interface __x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->FindLocationsAtWithAccuracyAsync(This,queryPoint,accuracy,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_IMapManagerStatics[] = L"Windows.Services.Maps.IMapManagerStatics";
typedef struct __x_ABI_CWindows_CServices_CMaps_CIMapManagerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapManagerStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapManagerStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapManagerStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapManagerStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapManagerStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapManagerStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *ShowDownloadedMapsUI )(
        __x_ABI_CWindows_CServices_CMaps_CIMapManagerStatics * This
        );
    HRESULT ( STDMETHODCALLTYPE *ShowMapsUpdateUI )(
        __x_ABI_CWindows_CServices_CMaps_CIMapManagerStatics * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CServices_CMaps_CIMapManagerStaticsVtbl;
interface __x_ABI_CWindows_CServices_CMaps_CIMapManagerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CMaps_CIMapManagerStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->ShowDownloadedMapsUI(This) )
    ( (This)->lpVtbl->ShowMapsUpdateUI(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CIMapManagerStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_IMapRoute[] = L"Windows.Services.Maps.IMapRoute";
typedef struct __x_ABI_CWindows_CServices_CMaps_CIMapRouteVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRoute * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRoute * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRoute * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRoute * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRoute * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRoute * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_BoundingBox )(
        __x_ABI_CWindows_CServices_CMaps_CIMapRoute * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBox * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LengthInMeters )(
        __x_ABI_CWindows_CServices_CMaps_CIMapRoute * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_EstimatedDuration )(
        __x_ABI_CWindows_CServices_CMaps_CIMapRoute * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Path )(
        __x_ABI_CWindows_CServices_CMaps_CIMapRoute * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeopath * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Legs )(
        __x_ABI_CWindows_CServices_CMaps_CIMapRoute * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CServices__CMaps__CMapRouteLeg * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsTrafficBased )(
        __x_ABI_CWindows_CServices_CMaps_CIMapRoute * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CServices_CMaps_CIMapRouteVtbl;
interface __x_ABI_CWindows_CServices_CMaps_CIMapRoute
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CMaps_CIMapRouteVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_BoundingBox(This,value) )
    ( (This)->lpVtbl->get_LengthInMeters(This,value) )
    ( (This)->lpVtbl->get_EstimatedDuration(This,value) )
    ( (This)->lpVtbl->get_Path(This,value) )
    ( (This)->lpVtbl->get_Legs(This,value) )
    ( (This)->lpVtbl->get_IsTrafficBased(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CIMapRoute;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_IMapRoute2[] = L"Windows.Services.Maps.IMapRoute2";
typedef struct __x_ABI_CWindows_CServices_CMaps_CIMapRoute2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRoute2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRoute2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRoute2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRoute2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRoute2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRoute2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ViolatedRestrictions )(
        __x_ABI_CWindows_CServices_CMaps_CIMapRoute2 * This,
                           __RPC__out __x_ABI_CWindows_CServices_CMaps_CMapRouteRestrictions * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HasBlockedRoads )(
        __x_ABI_CWindows_CServices_CMaps_CIMapRoute2 * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CServices_CMaps_CIMapRoute2Vtbl;
interface __x_ABI_CWindows_CServices_CMaps_CIMapRoute2
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CMaps_CIMapRoute2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ViolatedRestrictions(This,value) )
    ( (This)->lpVtbl->get_HasBlockedRoads(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CIMapRoute2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_IMapRoute3[] = L"Windows.Services.Maps.IMapRoute3";
typedef struct __x_ABI_CWindows_CServices_CMaps_CIMapRoute3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRoute3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRoute3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRoute3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRoute3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRoute3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRoute3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DurationWithoutTraffic )(
        __x_ABI_CWindows_CServices_CMaps_CIMapRoute3 * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TrafficCongestion )(
        __x_ABI_CWindows_CServices_CMaps_CIMapRoute3 * This,
                           __RPC__out __x_ABI_CWindows_CServices_CMaps_CTrafficCongestion * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CServices_CMaps_CIMapRoute3Vtbl;
interface __x_ABI_CWindows_CServices_CMaps_CIMapRoute3
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CMaps_CIMapRoute3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DurationWithoutTraffic(This,value) )
    ( (This)->lpVtbl->get_TrafficCongestion(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CIMapRoute3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_IMapRoute4[] = L"Windows.Services.Maps.IMapRoute4";
typedef struct __x_ABI_CWindows_CServices_CMaps_CIMapRoute4Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRoute4 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRoute4 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRoute4 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRoute4 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRoute4 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRoute4 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsScenic )(
        __x_ABI_CWindows_CServices_CMaps_CIMapRoute4 * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CServices_CMaps_CIMapRoute4Vtbl;
interface __x_ABI_CWindows_CServices_CMaps_CIMapRoute4
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CMaps_CIMapRoute4Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsScenic(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CIMapRoute4;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_IMapRouteDrivingOptions[] = L"Windows.Services.Maps.IMapRouteDrivingOptions";
typedef struct __x_ABI_CWindows_CServices_CMaps_CIMapRouteDrivingOptionsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRouteDrivingOptions * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRouteDrivingOptions * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRouteDrivingOptions * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRouteDrivingOptions * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRouteDrivingOptions * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRouteDrivingOptions * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_MaxAlternateRouteCount )(
        __x_ABI_CWindows_CServices_CMaps_CIMapRouteDrivingOptions * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_MaxAlternateRouteCount )(
        __x_ABI_CWindows_CServices_CMaps_CIMapRouteDrivingOptions * This,
                  UINT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_InitialHeading )(
        __x_ABI_CWindows_CServices_CMaps_CIMapRouteDrivingOptions * This,
                           __RPC__deref_out_opt __FIReference_1_double * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_InitialHeading )(
        __x_ABI_CWindows_CServices_CMaps_CIMapRouteDrivingOptions * This,
                  __RPC__in_opt __FIReference_1_double * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RouteOptimization )(
        __x_ABI_CWindows_CServices_CMaps_CIMapRouteDrivingOptions * This,
                           __RPC__out __x_ABI_CWindows_CServices_CMaps_CMapRouteOptimization * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_RouteOptimization )(
        __x_ABI_CWindows_CServices_CMaps_CIMapRouteDrivingOptions * This,
                  __x_ABI_CWindows_CServices_CMaps_CMapRouteOptimization value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RouteRestrictions )(
        __x_ABI_CWindows_CServices_CMaps_CIMapRouteDrivingOptions * This,
                           __RPC__out __x_ABI_CWindows_CServices_CMaps_CMapRouteRestrictions * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_RouteRestrictions )(
        __x_ABI_CWindows_CServices_CMaps_CIMapRouteDrivingOptions * This,
                  __x_ABI_CWindows_CServices_CMaps_CMapRouteRestrictions value
        );
    END_INTERFACE
} __x_ABI_CWindows_CServices_CMaps_CIMapRouteDrivingOptionsVtbl;
interface __x_ABI_CWindows_CServices_CMaps_CIMapRouteDrivingOptions
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CMaps_CIMapRouteDrivingOptionsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_MaxAlternateRouteCount(This,value) )
    ( (This)->lpVtbl->put_MaxAlternateRouteCount(This,value) )
    ( (This)->lpVtbl->get_InitialHeading(This,value) )
    ( (This)->lpVtbl->put_InitialHeading(This,value) )
    ( (This)->lpVtbl->get_RouteOptimization(This,value) )
    ( (This)->lpVtbl->put_RouteOptimization(This,value) )
    ( (This)->lpVtbl->get_RouteRestrictions(This,value) )
    ( (This)->lpVtbl->put_RouteRestrictions(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CIMapRouteDrivingOptions;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_IMapRouteDrivingOptions2[] = L"Windows.Services.Maps.IMapRouteDrivingOptions2";
typedef struct __x_ABI_CWindows_CServices_CMaps_CIMapRouteDrivingOptions2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRouteDrivingOptions2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRouteDrivingOptions2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRouteDrivingOptions2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRouteDrivingOptions2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRouteDrivingOptions2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRouteDrivingOptions2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DepartureTime )(
        __x_ABI_CWindows_CServices_CMaps_CIMapRouteDrivingOptions2 * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CDateTime * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DepartureTime )(
        __x_ABI_CWindows_CServices_CMaps_CIMapRouteDrivingOptions2 * This,
                  __RPC__in_opt __FIReference_1_Windows__CFoundation__CDateTime * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CServices_CMaps_CIMapRouteDrivingOptions2Vtbl;
interface __x_ABI_CWindows_CServices_CMaps_CIMapRouteDrivingOptions2
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CMaps_CIMapRouteDrivingOptions2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DepartureTime(This,value) )
    ( (This)->lpVtbl->put_DepartureTime(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CIMapRouteDrivingOptions2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_IMapRouteFinderResult[] = L"Windows.Services.Maps.IMapRouteFinderResult";
typedef struct __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderResult * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderResult * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderResult * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderResult * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderResult * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderResult * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Route )(
        __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderResult * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CServices_CMaps_CIMapRoute * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderResult * This,
                           __RPC__out __x_ABI_CWindows_CServices_CMaps_CMapRouteFinderStatus * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderResultVtbl;
interface __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderResult
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderResultVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Route(This,value) )
    ( (This)->lpVtbl->get_Status(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderResult;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_IMapRouteFinderResult2[] = L"Windows.Services.Maps.IMapRouteFinderResult2";
typedef struct __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderResult2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderResult2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderResult2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderResult2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderResult2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderResult2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderResult2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AlternateRoutes )(
        __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderResult2 * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CServices__CMaps__CMapRoute * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderResult2Vtbl;
interface __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderResult2
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderResult2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AlternateRoutes(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderResult2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_IMapRouteFinderStatics[] = L"Windows.Services.Maps.IMapRouteFinderStatics";
typedef struct __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *GetDrivingRouteAsync )(
        __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint * startPoint,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint * endPoint,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CServices__CMaps__CMapRouteFinderResult * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *GetDrivingRouteWithOptimizationAsync )(
        __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint * startPoint,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint * endPoint,
                  __x_ABI_CWindows_CServices_CMaps_CMapRouteOptimization optimization,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CServices__CMaps__CMapRouteFinderResult * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *GetDrivingRouteWithOptimizationAndRestrictionsAsync )(
        __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint * startPoint,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint * endPoint,
                  __x_ABI_CWindows_CServices_CMaps_CMapRouteOptimization optimization,
                  __x_ABI_CWindows_CServices_CMaps_CMapRouteRestrictions restrictions,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CServices__CMaps__CMapRouteFinderResult * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *GetDrivingRouteWithOptimizationRestrictionsAndHeadingAsync )(
        __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint * startPoint,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint * endPoint,
                  __x_ABI_CWindows_CServices_CMaps_CMapRouteOptimization optimization,
                  __x_ABI_CWindows_CServices_CMaps_CMapRouteRestrictions restrictions,
                  DOUBLE headingInDegrees,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CServices__CMaps__CMapRouteFinderResult * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *GetDrivingRouteFromWaypointsAsync )(
        __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics * This,
                  __RPC__in_opt __FIIterable_1_Windows__CDevices__CGeolocation__CGeopoint * wayPoints,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CServices__CMaps__CMapRouteFinderResult * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *GetDrivingRouteFromWaypointsAndOptimizationAsync )(
        __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics * This,
                  __RPC__in_opt __FIIterable_1_Windows__CDevices__CGeolocation__CGeopoint * wayPoints,
                  __x_ABI_CWindows_CServices_CMaps_CMapRouteOptimization optimization,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CServices__CMaps__CMapRouteFinderResult * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *GetDrivingRouteFromWaypointsOptimizationAndRestrictionsAsync )(
        __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics * This,
                  __RPC__in_opt __FIIterable_1_Windows__CDevices__CGeolocation__CGeopoint * wayPoints,
                  __x_ABI_CWindows_CServices_CMaps_CMapRouteOptimization optimization,
                  __x_ABI_CWindows_CServices_CMaps_CMapRouteRestrictions restrictions,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CServices__CMaps__CMapRouteFinderResult * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *GetDrivingRouteFromWaypointsOptimizationRestrictionsAndHeadingAsync )(
        __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics * This,
                  __RPC__in_opt __FIIterable_1_Windows__CDevices__CGeolocation__CGeopoint * wayPoints,
                  __x_ABI_CWindows_CServices_CMaps_CMapRouteOptimization optimization,
                  __x_ABI_CWindows_CServices_CMaps_CMapRouteRestrictions restrictions,
                  DOUBLE headingInDegrees,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CServices__CMaps__CMapRouteFinderResult * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetWalkingRouteAsync )(
        __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint * startPoint,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint * endPoint,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CServices__CMaps__CMapRouteFinderResult * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetWalkingRouteFromWaypointsAsync )(
        __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics * This,
                  __RPC__in_opt __FIIterable_1_Windows__CDevices__CGeolocation__CGeopoint * wayPoints,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CServices__CMaps__CMapRouteFinderResult * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStaticsVtbl;
interface __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetDrivingRouteAsync(This,startPoint,endPoint,result) )
    ( (This)->lpVtbl->GetDrivingRouteWithOptimizationAsync(This,startPoint,endPoint,optimization,result) )
    ( (This)->lpVtbl->GetDrivingRouteWithOptimizationAndRestrictionsAsync(This,startPoint,endPoint,optimization,restrictions,result) )
    ( (This)->lpVtbl->GetDrivingRouteWithOptimizationRestrictionsAndHeadingAsync(This,startPoint,endPoint,optimization,restrictions,headingInDegrees,result) )
    ( (This)->lpVtbl->GetDrivingRouteFromWaypointsAsync(This,wayPoints,result) )
    ( (This)->lpVtbl->GetDrivingRouteFromWaypointsAndOptimizationAsync(This,wayPoints,optimization,result) )
    ( (This)->lpVtbl->GetDrivingRouteFromWaypointsOptimizationAndRestrictionsAsync(This,wayPoints,optimization,restrictions,result) )
    ( (This)->lpVtbl->GetDrivingRouteFromWaypointsOptimizationRestrictionsAndHeadingAsync(This,wayPoints,optimization,restrictions,headingInDegrees,result) )
    ( (This)->lpVtbl->GetWalkingRouteAsync(This,startPoint,endPoint,result) )
    ( (This)->lpVtbl->GetWalkingRouteFromWaypointsAsync(This,wayPoints,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_IMapRouteFinderStatics2[] = L"Windows.Services.Maps.IMapRouteFinderStatics2";
typedef struct __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
                                  HRESULT ( STDMETHODCALLTYPE *GetDrivingRouteWithOptionsAsync )(
        __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint * startPoint,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint * endPoint,
                  __RPC__in_opt __x_ABI_CWindows_CServices_CMaps_CIMapRouteDrivingOptions * options,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CServices__CMaps__CMapRouteFinderResult * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics2Vtbl;
interface __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetDrivingRouteWithOptionsAsync(This,startPoint,endPoint,options,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_IMapRouteFinderStatics3[] = L"Windows.Services.Maps.IMapRouteFinderStatics3";
typedef struct __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *GetDrivingRouteFromEnhancedWaypointsAsync )(
        __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics3 * This,
                  __RPC__in_opt __FIIterable_1_Windows__CServices__CMaps__CEnhancedWaypoint * waypoints,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CServices__CMaps__CMapRouteFinderResult * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *GetDrivingRouteFromEnhancedWaypointsWithOptionsAsync )(
        __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics3 * This,
                  __RPC__in_opt __FIIterable_1_Windows__CServices__CMaps__CEnhancedWaypoint * waypoints,
                  __RPC__in_opt __x_ABI_CWindows_CServices_CMaps_CIMapRouteDrivingOptions * options,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CServices__CMaps__CMapRouteFinderResult * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics3Vtbl;
interface __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics3
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetDrivingRouteFromEnhancedWaypointsAsync(This,waypoints,result) )
    ( (This)->lpVtbl->GetDrivingRouteFromEnhancedWaypointsWithOptionsAsync(This,waypoints,options,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_IMapRouteLeg[] = L"Windows.Services.Maps.IMapRouteLeg";
typedef struct __x_ABI_CWindows_CServices_CMaps_CIMapRouteLegVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRouteLeg * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRouteLeg * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRouteLeg * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRouteLeg * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRouteLeg * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRouteLeg * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_BoundingBox )(
        __x_ABI_CWindows_CServices_CMaps_CIMapRouteLeg * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBox * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Path )(
        __x_ABI_CWindows_CServices_CMaps_CIMapRouteLeg * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeopath * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LengthInMeters )(
        __x_ABI_CWindows_CServices_CMaps_CIMapRouteLeg * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_EstimatedDuration )(
        __x_ABI_CWindows_CServices_CMaps_CIMapRouteLeg * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Maneuvers )(
        __x_ABI_CWindows_CServices_CMaps_CIMapRouteLeg * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CServices__CMaps__CMapRouteManeuver * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CServices_CMaps_CIMapRouteLegVtbl;
interface __x_ABI_CWindows_CServices_CMaps_CIMapRouteLeg
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CMaps_CIMapRouteLegVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_BoundingBox(This,value) )
    ( (This)->lpVtbl->get_Path(This,value) )
    ( (This)->lpVtbl->get_LengthInMeters(This,value) )
    ( (This)->lpVtbl->get_EstimatedDuration(This,value) )
    ( (This)->lpVtbl->get_Maneuvers(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CIMapRouteLeg;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_IMapRouteLeg2[] = L"Windows.Services.Maps.IMapRouteLeg2";
typedef struct __x_ABI_CWindows_CServices_CMaps_CIMapRouteLeg2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRouteLeg2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRouteLeg2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRouteLeg2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRouteLeg2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRouteLeg2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRouteLeg2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DurationWithoutTraffic )(
        __x_ABI_CWindows_CServices_CMaps_CIMapRouteLeg2 * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TrafficCongestion )(
        __x_ABI_CWindows_CServices_CMaps_CIMapRouteLeg2 * This,
                           __RPC__out __x_ABI_CWindows_CServices_CMaps_CTrafficCongestion * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CServices_CMaps_CIMapRouteLeg2Vtbl;
interface __x_ABI_CWindows_CServices_CMaps_CIMapRouteLeg2
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CMaps_CIMapRouteLeg2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DurationWithoutTraffic(This,value) )
    ( (This)->lpVtbl->get_TrafficCongestion(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CIMapRouteLeg2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_IMapRouteManeuver[] = L"Windows.Services.Maps.IMapRouteManeuver";
typedef struct __x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuverVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_StartingPoint )(
        __x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LengthInMeters )(
        __x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_InstructionText )(
        __x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Kind )(
        __x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver * This,
                           __RPC__out __x_ABI_CWindows_CServices_CMaps_CMapRouteManeuverKind * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ExitNumber )(
        __x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ManeuverNotices )(
        __x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver * This,
                           __RPC__out __x_ABI_CWindows_CServices_CMaps_CMapManeuverNotices * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuverVtbl;
interface __x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuverVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_StartingPoint(This,value) )
    ( (This)->lpVtbl->get_LengthInMeters(This,value) )
    ( (This)->lpVtbl->get_InstructionText(This,value) )
    ( (This)->lpVtbl->get_Kind(This,value) )
    ( (This)->lpVtbl->get_ExitNumber(This,value) )
    ( (This)->lpVtbl->get_ManeuverNotices(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_IMapRouteManeuver2[] = L"Windows.Services.Maps.IMapRouteManeuver2";
typedef struct __x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_StartHeading )(
        __x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver2 * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_EndHeading )(
        __x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver2 * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_StreetName )(
        __x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver2 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver2Vtbl;
interface __x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver2
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_StartHeading(This,value) )
    ( (This)->lpVtbl->get_EndHeading(This,value) )
    ( (This)->lpVtbl->get_StreetName(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_IMapRouteManeuver3[] = L"Windows.Services.Maps.IMapRouteManeuver3";
typedef struct __x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Warnings )(
        __x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver3 * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CServices__CMaps__CManeuverWarning * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver3Vtbl;
interface __x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver3
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Warnings(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_IMapServiceStatics[] = L"Windows.Services.Maps.IMapServiceStatics";
typedef struct __x_ABI_CWindows_CServices_CMaps_CIMapServiceStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_ServiceToken )(
        __x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ServiceToken )(
        __x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CServices_CMaps_CIMapServiceStaticsVtbl;
interface __x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CMaps_CIMapServiceStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_ServiceToken(This,value) )
    ( (This)->lpVtbl->get_ServiceToken(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_IMapServiceStatics2[] = L"Windows.Services.Maps.IMapServiceStatics2";
typedef struct __x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_WorldViewRegionCode )(
        __x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics2 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics2Vtbl;
interface __x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_WorldViewRegionCode(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_IMapServiceStatics3[] = L"Windows.Services.Maps.IMapServiceStatics3";
typedef struct __x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DataAttributions )(
        __x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics3 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics3Vtbl;
interface __x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics3
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DataAttributions(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_IMapServiceStatics4[] = L"Windows.Services.Maps.IMapServiceStatics4";
typedef struct __x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics4Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics4 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics4 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics4 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics4 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics4 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics4 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_DataUsagePreference )(
        __x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics4 * This,
                  __x_ABI_CWindows_CServices_CMaps_CMapServiceDataUsagePreference value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DataUsagePreference )(
        __x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics4 * This,
                           __RPC__out __x_ABI_CWindows_CServices_CMaps_CMapServiceDataUsagePreference * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics4Vtbl;
interface __x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics4
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics4Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_DataUsagePreference(This,value) )
    ( (This)->lpVtbl->get_DataUsagePreference(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics4;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_IPlaceInfo[] = L"Windows.Services.Maps.IPlaceInfo";
typedef struct __x_ABI_CWindows_CServices_CMaps_CIPlaceInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIPlaceInfo * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIPlaceInfo * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIPlaceInfo * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIPlaceInfo * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIPlaceInfo * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIPlaceInfo * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *Show )(
        __x_ABI_CWindows_CServices_CMaps_CIPlaceInfo * This,
                  __x_ABI_CWindows_CFoundation_CRect selection
        );
                    HRESULT ( STDMETHODCALLTYPE *ShowWithPreferredPlacement )(
        __x_ABI_CWindows_CServices_CMaps_CIPlaceInfo * This,
                  __x_ABI_CWindows_CFoundation_CRect selection,
                  __x_ABI_CWindows_CUI_CPopups_CPlacement preferredPlacement
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Identifier )(
        __x_ABI_CWindows_CServices_CMaps_CIPlaceInfo * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DisplayName )(
        __x_ABI_CWindows_CServices_CMaps_CIPlaceInfo * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DisplayAddress )(
        __x_ABI_CWindows_CServices_CMaps_CIPlaceInfo * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Geoshape )(
        __x_ABI_CWindows_CServices_CMaps_CIPlaceInfo * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeoshape * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CServices_CMaps_CIPlaceInfoVtbl;
interface __x_ABI_CWindows_CServices_CMaps_CIPlaceInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CMaps_CIPlaceInfoVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Show(This,selection) )
    ( (This)->lpVtbl->ShowWithPreferredPlacement(This,selection,preferredPlacement) )
    ( (This)->lpVtbl->get_Identifier(This,value) )
    ( (This)->lpVtbl->get_DisplayName(This,value) )
    ( (This)->lpVtbl->get_DisplayAddress(This,value) )
    ( (This)->lpVtbl->get_Geoshape(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CIPlaceInfo;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_IPlaceInfoCreateOptions[] = L"Windows.Services.Maps.IPlaceInfoCreateOptions";
typedef struct __x_ABI_CWindows_CServices_CMaps_CIPlaceInfoCreateOptionsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIPlaceInfoCreateOptions * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIPlaceInfoCreateOptions * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIPlaceInfoCreateOptions * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIPlaceInfoCreateOptions * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIPlaceInfoCreateOptions * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIPlaceInfoCreateOptions * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_DisplayName )(
        __x_ABI_CWindows_CServices_CMaps_CIPlaceInfoCreateOptions * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DisplayName )(
        __x_ABI_CWindows_CServices_CMaps_CIPlaceInfoCreateOptions * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DisplayAddress )(
        __x_ABI_CWindows_CServices_CMaps_CIPlaceInfoCreateOptions * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DisplayAddress )(
        __x_ABI_CWindows_CServices_CMaps_CIPlaceInfoCreateOptions * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CServices_CMaps_CIPlaceInfoCreateOptionsVtbl;
interface __x_ABI_CWindows_CServices_CMaps_CIPlaceInfoCreateOptions
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CMaps_CIPlaceInfoCreateOptionsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_DisplayName(This,value) )
    ( (This)->lpVtbl->get_DisplayName(This,value) )
    ( (This)->lpVtbl->put_DisplayAddress(This,value) )
    ( (This)->lpVtbl->get_DisplayAddress(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CIPlaceInfoCreateOptions;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_IPlaceInfoStatics[] = L"Windows.Services.Maps.IPlaceInfoStatics";
typedef struct __x_ABI_CWindows_CServices_CMaps_CIPlaceInfoStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIPlaceInfoStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIPlaceInfoStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIPlaceInfoStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIPlaceInfoStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIPlaceInfoStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIPlaceInfoStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CServices_CMaps_CIPlaceInfoStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint * referencePoint,
                           __RPC__deref_out_opt __x_ABI_CWindows_CServices_CMaps_CIPlaceInfo * * resultValue
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateWithGeopointAndOptions )(
        __x_ABI_CWindows_CServices_CMaps_CIPlaceInfoStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint * referencePoint,
                  __RPC__in_opt __x_ABI_CWindows_CServices_CMaps_CIPlaceInfoCreateOptions * options,
                           __RPC__deref_out_opt __x_ABI_CWindows_CServices_CMaps_CIPlaceInfo * * resultValue
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateFromIdentifier )(
        __x_ABI_CWindows_CServices_CMaps_CIPlaceInfoStatics * This,
                  __RPC__in HSTRING identifier,
                           __RPC__deref_out_opt __x_ABI_CWindows_CServices_CMaps_CIPlaceInfo * * resultValue
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateFromIdentifierWithOptions )(
        __x_ABI_CWindows_CServices_CMaps_CIPlaceInfoStatics * This,
                  __RPC__in HSTRING identifier,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint * defaultPoint,
                  __RPC__in_opt __x_ABI_CWindows_CServices_CMaps_CIPlaceInfoCreateOptions * options,
                           __RPC__deref_out_opt __x_ABI_CWindows_CServices_CMaps_CIPlaceInfo * * resultValue
        );
    HRESULT ( STDMETHODCALLTYPE *CreateFromMapLocation )(
        __x_ABI_CWindows_CServices_CMaps_CIPlaceInfoStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CServices_CMaps_CIMapLocation * location,
                           __RPC__deref_out_opt __x_ABI_CWindows_CServices_CMaps_CIPlaceInfo * * resultValue
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsShowSupported )(
        __x_ABI_CWindows_CServices_CMaps_CIPlaceInfoStatics * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CServices_CMaps_CIPlaceInfoStaticsVtbl;
interface __x_ABI_CWindows_CServices_CMaps_CIPlaceInfoStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CMaps_CIPlaceInfoStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,referencePoint,resultValue) )
    ( (This)->lpVtbl->CreateWithGeopointAndOptions(This,referencePoint,options,resultValue) )
    ( (This)->lpVtbl->CreateFromIdentifier(This,identifier,resultValue) )
    ( (This)->lpVtbl->CreateFromIdentifierWithOptions(This,identifier,defaultPoint,options,resultValue) )
    ( (This)->lpVtbl->CreateFromMapLocation(This,location,resultValue) )
    ( (This)->lpVtbl->get_IsShowSupported(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CIPlaceInfoStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_IPlaceInfoStatics2[] = L"Windows.Services.Maps.IPlaceInfoStatics2";
typedef struct __x_ABI_CWindows_CServices_CMaps_CIPlaceInfoStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIPlaceInfoStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIPlaceInfoStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIPlaceInfoStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIPlaceInfoStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIPlaceInfoStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIPlaceInfoStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *CreateFromAddress )(
        __x_ABI_CWindows_CServices_CMaps_CIPlaceInfoStatics2 * This,
                  __RPC__in HSTRING displayAddress,
                           __RPC__deref_out_opt __x_ABI_CWindows_CServices_CMaps_CIPlaceInfo * * resultValue
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateFromAddressWithName )(
        __x_ABI_CWindows_CServices_CMaps_CIPlaceInfoStatics2 * This,
                  __RPC__in HSTRING displayAddress,
                  __RPC__in HSTRING displayName,
                           __RPC__deref_out_opt __x_ABI_CWindows_CServices_CMaps_CIPlaceInfo * * resultValue
        );
    END_INTERFACE
} __x_ABI_CWindows_CServices_CMaps_CIPlaceInfoStatics2Vtbl;
interface __x_ABI_CWindows_CServices_CMaps_CIPlaceInfoStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CMaps_CIPlaceInfoStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateFromAddress(This,displayAddress,resultValue) )
    ( (This)->lpVtbl->CreateFromAddressWithName(This,displayAddress,displayName,resultValue) )
EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CIPlaceInfoStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Maps_EnhancedWaypoint[] = L"Windows.Services.Maps.EnhancedWaypoint";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Maps_ManeuverWarning[] = L"Windows.Services.Maps.ManeuverWarning";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Maps_MapAddress[] = L"Windows.Services.Maps.MapAddress";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Maps_MapLocation[] = L"Windows.Services.Maps.MapLocation";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Maps_MapLocationFinder[] = L"Windows.Services.Maps.MapLocationFinder";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Maps_MapLocationFinderResult[] = L"Windows.Services.Maps.MapLocationFinderResult";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Maps_MapManager[] = L"Windows.Services.Maps.MapManager";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Maps_MapRoute[] = L"Windows.Services.Maps.MapRoute";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Maps_MapRouteDrivingOptions[] = L"Windows.Services.Maps.MapRouteDrivingOptions";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Maps_MapRouteFinder[] = L"Windows.Services.Maps.MapRouteFinder";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Maps_MapRouteFinderResult[] = L"Windows.Services.Maps.MapRouteFinderResult";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Maps_MapRouteLeg[] = L"Windows.Services.Maps.MapRouteLeg";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Maps_MapRouteManeuver[] = L"Windows.Services.Maps.MapRouteManeuver";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Maps_MapService[] = L"Windows.Services.Maps.MapService";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Maps_PlaceInfo[] = L"Windows.Services.Maps.PlaceInfo";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Maps_PlaceInfoCreateOptions[] = L"Windows.Services.Maps.PlaceInfoCreateOptions";
       
       
#pragma clang diagnostic pop

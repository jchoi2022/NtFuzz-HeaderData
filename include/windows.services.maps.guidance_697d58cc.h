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
#include "Windows.Services.Maps.h"
#include "Windows.UI.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceAudioNotificationRequestedEventArgs __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceAudioNotificationRequestedEventArgs;
typedef interface __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceLaneInfo __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceLaneInfo;
typedef interface __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceManeuver __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceManeuver;
typedef interface __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceMapMatchedCoordinate __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceMapMatchedCoordinate;
typedef interface __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator;
typedef interface __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator2 __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator2;
typedef interface __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigatorStatics __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigatorStatics;
typedef interface __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigatorStatics2 __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigatorStatics2;
typedef interface __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceReroutedEventArgs __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceReroutedEventArgs;
typedef interface __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSegment __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSegment;
typedef interface __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSegment2 __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSegment2;
typedef interface __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSignpost __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSignpost;
typedef interface __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoute __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoute;
typedef interface __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRouteStatics __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRouteStatics;
typedef interface __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceTelemetryCollector __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceTelemetryCollector;
typedef interface __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceTelemetryCollectorStatics __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceTelemetryCollectorStatics;
typedef interface __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceUpdatedEventArgs __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceUpdatedEventArgs;
typedef interface __FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfo __FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfo;
EXTERN_C const IID IID___FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfo;
typedef struct __FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfo * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfo * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfo * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfo * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfo * This, __RPC__out __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceLaneInfo * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfo * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfo * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfo * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceLaneInfo * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfoVtbl;
interface __FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfo
{
    CONST_VTBL struct __FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfoVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfo __FIIterable_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfo;
EXTERN_C const IID IID___FIIterable_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfo;
typedef struct __FIIterable_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfo * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfo * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfo * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfo * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfo * This, __RPC__deref_out_opt __FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfo **first);
    END_INTERFACE
} __FIIterable_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfoVtbl;
interface __FIIterable_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfo
{
    CONST_VTBL struct __FIIterable_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfoVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuver __FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuver;
EXTERN_C const IID IID___FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuver;
typedef struct __FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuverVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuver * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuver * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuver * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuver * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuver * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuver * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuver * This, __RPC__out __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceManeuver * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuver * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuver * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuver * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceManeuver * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuverVtbl;
interface __FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuver
{
    CONST_VTBL struct __FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuverVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuver __FIIterable_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuver;
EXTERN_C const IID IID___FIIterable_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuver;
typedef struct __FIIterable_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuverVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuver * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuver * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuver * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuver * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuver * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuver * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuver * This, __RPC__deref_out_opt __FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuver **first);
    END_INTERFACE
} __FIIterable_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuverVtbl;
interface __FIIterable_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuver
{
    CONST_VTBL struct __FIIterable_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuverVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegment __FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegment;
EXTERN_C const IID IID___FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegment;
typedef struct __FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegmentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegment * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegment * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegment * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegment * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegment * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegment * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegment * This, __RPC__out __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSegment * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegment * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegment * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegment * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSegment * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegmentVtbl;
interface __FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegment
{
    CONST_VTBL struct __FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegmentVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegment __FIIterable_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegment;
EXTERN_C const IID IID___FIIterable_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegment;
typedef struct __FIIterable_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegmentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegment * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegment * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegment * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegment * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegment * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegment * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegment * This, __RPC__deref_out_opt __FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegment **first);
    END_INTERFACE
} __FIIterable_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegmentVtbl;
interface __FIIterable_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegment
{
    CONST_VTBL struct __FIIterable_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegmentVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfo __FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfo;
EXTERN_C const IID IID___FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfo;
typedef struct __FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfo * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfo * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfo * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfo * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfo * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceLaneInfo * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfo * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfo * This,
                       __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceLaneInfo * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfo * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceLaneInfo * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfoVtbl;
interface __FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfo
{
    CONST_VTBL struct __FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfoVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuver __FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuver;
EXTERN_C const IID IID___FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuver;
typedef struct __FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuverVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuver * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuver * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuver * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuver * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuver * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuver * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuver * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceManeuver * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuver * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuver * This,
                       __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceManeuver * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuver * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceManeuver * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuverVtbl;
interface __FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuver
{
    CONST_VTBL struct __FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuverVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegment __FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegment;
EXTERN_C const IID IID___FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegment;
typedef struct __FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegmentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegment * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegment * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegment * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegment * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegment * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegment * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegment * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSegment * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegment * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegment * This,
                       __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSegment * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegment * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSegment * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegmentVtbl;
interface __FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegment
{
    CONST_VTBL struct __FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegmentVtbl *lpVtbl;
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
typedef interface __FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_IInspectable __FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_IInspectable;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_IInspectable;
typedef struct __FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_IInspectable * This, __RPC__in_opt __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator * sender, __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_IInspectableVtbl;
interface __FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_Windows__CServices__CMaps__CGuidance__CGuidanceAudioNotificationRequestedEventArgs __FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_Windows__CServices__CMaps__CGuidance__CGuidanceAudioNotificationRequestedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_Windows__CServices__CMaps__CGuidance__CGuidanceAudioNotificationRequestedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_Windows__CServices__CMaps__CGuidance__CGuidanceAudioNotificationRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_Windows__CServices__CMaps__CGuidance__CGuidanceAudioNotificationRequestedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_Windows__CServices__CMaps__CGuidance__CGuidanceAudioNotificationRequestedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_Windows__CServices__CMaps__CGuidance__CGuidanceAudioNotificationRequestedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_Windows__CServices__CMaps__CGuidance__CGuidanceAudioNotificationRequestedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator * sender, __RPC__in_opt __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceAudioNotificationRequestedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_Windows__CServices__CMaps__CGuidance__CGuidanceAudioNotificationRequestedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_Windows__CServices__CMaps__CGuidance__CGuidanceAudioNotificationRequestedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_Windows__CServices__CMaps__CGuidance__CGuidanceAudioNotificationRequestedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_Windows__CServices__CMaps__CGuidance__CGuidanceReroutedEventArgs __FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_Windows__CServices__CMaps__CGuidance__CGuidanceReroutedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_Windows__CServices__CMaps__CGuidance__CGuidanceReroutedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_Windows__CServices__CMaps__CGuidance__CGuidanceReroutedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_Windows__CServices__CMaps__CGuidance__CGuidanceReroutedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_Windows__CServices__CMaps__CGuidance__CGuidanceReroutedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_Windows__CServices__CMaps__CGuidance__CGuidanceReroutedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_Windows__CServices__CMaps__CGuidance__CGuidanceReroutedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator * sender, __RPC__in_opt __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceReroutedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_Windows__CServices__CMaps__CGuidance__CGuidanceReroutedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_Windows__CServices__CMaps__CGuidance__CGuidanceReroutedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_Windows__CServices__CMaps__CGuidance__CGuidanceReroutedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_Windows__CServices__CMaps__CGuidance__CGuidanceUpdatedEventArgs __FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_Windows__CServices__CMaps__CGuidance__CGuidanceUpdatedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_Windows__CServices__CMaps__CGuidance__CGuidanceUpdatedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_Windows__CServices__CMaps__CGuidance__CGuidanceUpdatedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_Windows__CServices__CMaps__CGuidance__CGuidanceUpdatedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_Windows__CServices__CMaps__CGuidance__CGuidanceUpdatedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_Windows__CServices__CMaps__CGuidance__CGuidanceUpdatedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_Windows__CServices__CMaps__CGuidance__CGuidanceUpdatedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator * sender, __RPC__in_opt __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceUpdatedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_Windows__CServices__CMaps__CGuidance__CGuidanceUpdatedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_Windows__CServices__CMaps__CGuidance__CGuidanceUpdatedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_Windows__CServices__CMaps__CGuidance__CGuidanceUpdatedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
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
typedef struct __x_ABI_CWindows_CDevices_CGeolocation_CBasicGeoposition __x_ABI_CWindows_CDevices_CGeolocation_CBasicGeoposition;
typedef interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBox __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBox;
typedef interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinate __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinate;
typedef interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeopath __x_ABI_CWindows_CDevices_CGeolocation_CIGeopath;
typedef interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint;
typedef struct __x_ABI_CWindows_CFoundation_CTimeSpan __x_ABI_CWindows_CFoundation_CTimeSpan;
typedef interface __x_ABI_CWindows_CServices_CMaps_CIMapRoute __x_ABI_CWindows_CServices_CMaps_CIMapRoute;
typedef struct __x_ABI_CWindows_CUI_CColor __x_ABI_CWindows_CUI_CColor;
typedef enum __x_ABI_CWindows_CServices_CMaps_CGuidance_CGuidanceAudioMeasurementSystem __x_ABI_CWindows_CServices_CMaps_CGuidance_CGuidanceAudioMeasurementSystem;
typedef enum __x_ABI_CWindows_CServices_CMaps_CGuidance_CGuidanceAudioNotificationKind __x_ABI_CWindows_CServices_CMaps_CGuidance_CGuidanceAudioNotificationKind;
typedef enum __x_ABI_CWindows_CServices_CMaps_CGuidance_CGuidanceAudioNotifications __x_ABI_CWindows_CServices_CMaps_CGuidance_CGuidanceAudioNotifications;
typedef enum __x_ABI_CWindows_CServices_CMaps_CGuidance_CGuidanceLaneMarkers __x_ABI_CWindows_CServices_CMaps_CGuidance_CGuidanceLaneMarkers;
typedef enum __x_ABI_CWindows_CServices_CMaps_CGuidance_CGuidanceManeuverKind __x_ABI_CWindows_CServices_CMaps_CGuidance_CGuidanceManeuverKind;
typedef enum __x_ABI_CWindows_CServices_CMaps_CGuidance_CGuidanceMode __x_ABI_CWindows_CServices_CMaps_CGuidance_CGuidanceMode;
enum __x_ABI_CWindows_CServices_CMaps_CGuidance_CGuidanceAudioMeasurementSystem
{
    GuidanceAudioMeasurementSystem_Meters = 0,
    GuidanceAudioMeasurementSystem_MilesAndYards = 1,
    GuidanceAudioMeasurementSystem_MilesAndFeet = 2,
};
enum __x_ABI_CWindows_CServices_CMaps_CGuidance_CGuidanceAudioNotificationKind
{
    GuidanceAudioNotificationKind_Maneuver = 0,
    GuidanceAudioNotificationKind_Route = 1,
    GuidanceAudioNotificationKind_Gps = 2,
    GuidanceAudioNotificationKind_SpeedLimit = 3,
    GuidanceAudioNotificationKind_Traffic = 4,
    GuidanceAudioNotificationKind_TrafficCamera = 5,
};
enum __x_ABI_CWindows_CServices_CMaps_CGuidance_CGuidanceAudioNotifications
{
    GuidanceAudioNotifications_None = 0,
    GuidanceAudioNotifications_Maneuver = 0x1,
    GuidanceAudioNotifications_Route = 0x2,
    GuidanceAudioNotifications_Gps = 0x4,
    GuidanceAudioNotifications_SpeedLimit = 0x8,
    GuidanceAudioNotifications_Traffic = 0x10,
    GuidanceAudioNotifications_TrafficCamera = 0x20,
};
enum __x_ABI_CWindows_CServices_CMaps_CGuidance_CGuidanceLaneMarkers
{
    GuidanceLaneMarkers_None = 0,
    GuidanceLaneMarkers_LightRight = 0x1,
    GuidanceLaneMarkers_Right = 0x2,
    GuidanceLaneMarkers_HardRight = 0x4,
    GuidanceLaneMarkers_Straight = 0x8,
    GuidanceLaneMarkers_UTurnLeft = 0x10,
    GuidanceLaneMarkers_HardLeft = 0x20,
    GuidanceLaneMarkers_Left = 0x40,
    GuidanceLaneMarkers_LightLeft = 0x80,
    GuidanceLaneMarkers_UTurnRight = 0x100,
    GuidanceLaneMarkers_Unknown = 0xffffffff,
};
enum __x_ABI_CWindows_CServices_CMaps_CGuidance_CGuidanceManeuverKind
{
    GuidanceManeuverKind_None = 0,
    GuidanceManeuverKind_GoStraight = 1,
    GuidanceManeuverKind_UTurnRight = 2,
    GuidanceManeuverKind_UTurnLeft = 3,
    GuidanceManeuverKind_TurnKeepRight = 4,
    GuidanceManeuverKind_TurnLightRight = 5,
    GuidanceManeuverKind_TurnRight = 6,
    GuidanceManeuverKind_TurnHardRight = 7,
    GuidanceManeuverKind_KeepMiddle = 8,
    GuidanceManeuverKind_TurnKeepLeft = 9,
    GuidanceManeuverKind_TurnLightLeft = 10,
    GuidanceManeuverKind_TurnLeft = 11,
    GuidanceManeuverKind_TurnHardLeft = 12,
    GuidanceManeuverKind_FreewayEnterRight = 13,
    GuidanceManeuverKind_FreewayEnterLeft = 14,
    GuidanceManeuverKind_FreewayLeaveRight = 15,
    GuidanceManeuverKind_FreewayLeaveLeft = 16,
    GuidanceManeuverKind_FreewayKeepRight = 17,
    GuidanceManeuverKind_FreewayKeepLeft = 18,
    GuidanceManeuverKind_TrafficCircleRight1 = 19,
    GuidanceManeuverKind_TrafficCircleRight2 = 20,
    GuidanceManeuverKind_TrafficCircleRight3 = 21,
    GuidanceManeuverKind_TrafficCircleRight4 = 22,
    GuidanceManeuverKind_TrafficCircleRight5 = 23,
    GuidanceManeuverKind_TrafficCircleRight6 = 24,
    GuidanceManeuverKind_TrafficCircleRight7 = 25,
    GuidanceManeuverKind_TrafficCircleRight8 = 26,
    GuidanceManeuverKind_TrafficCircleRight9 = 27,
    GuidanceManeuverKind_TrafficCircleRight10 = 28,
    GuidanceManeuverKind_TrafficCircleRight11 = 29,
    GuidanceManeuverKind_TrafficCircleRight12 = 30,
    GuidanceManeuverKind_TrafficCircleLeft1 = 31,
    GuidanceManeuverKind_TrafficCircleLeft2 = 32,
    GuidanceManeuverKind_TrafficCircleLeft3 = 33,
    GuidanceManeuverKind_TrafficCircleLeft4 = 34,
    GuidanceManeuverKind_TrafficCircleLeft5 = 35,
    GuidanceManeuverKind_TrafficCircleLeft6 = 36,
    GuidanceManeuverKind_TrafficCircleLeft7 = 37,
    GuidanceManeuverKind_TrafficCircleLeft8 = 38,
    GuidanceManeuverKind_TrafficCircleLeft9 = 39,
    GuidanceManeuverKind_TrafficCircleLeft10 = 40,
    GuidanceManeuverKind_TrafficCircleLeft11 = 41,
    GuidanceManeuverKind_TrafficCircleLeft12 = 42,
    GuidanceManeuverKind_Start = 43,
    GuidanceManeuverKind_End = 44,
    GuidanceManeuverKind_TakeFerry = 45,
    GuidanceManeuverKind_PassTransitStation = 46,
    GuidanceManeuverKind_LeaveTransitStation = 47,
};
enum __x_ABI_CWindows_CServices_CMaps_CGuidance_CGuidanceMode
{
    GuidanceMode_None = 0,
    GuidanceMode_Simulation = 1,
    GuidanceMode_Navigation = 2,
    GuidanceMode_Tracking = 3,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_Guidance_IGuidanceAudioNotificationRequestedEventArgs[] = L"Windows.Services.Maps.Guidance.IGuidanceAudioNotificationRequestedEventArgs";
typedef struct __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceAudioNotificationRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceAudioNotificationRequestedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceAudioNotificationRequestedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceAudioNotificationRequestedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceAudioNotificationRequestedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceAudioNotificationRequestedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceAudioNotificationRequestedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AudioNotification )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceAudioNotificationRequestedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CServices_CMaps_CGuidance_CGuidanceAudioNotificationKind * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AudioFilePaths )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceAudioNotificationRequestedEventArgs * This,
                           __RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AudioText )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceAudioNotificationRequestedEventArgs * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceAudioNotificationRequestedEventArgsVtbl;
interface __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceAudioNotificationRequestedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceAudioNotificationRequestedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AudioNotification(This,value) )
    ( (This)->lpVtbl->get_AudioFilePaths(This,value) )
    ( (This)->lpVtbl->get_AudioText(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceAudioNotificationRequestedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_Guidance_IGuidanceLaneInfo[] = L"Windows.Services.Maps.Guidance.IGuidanceLaneInfo";
typedef struct __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceLaneInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceLaneInfo * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceLaneInfo * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceLaneInfo * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceLaneInfo * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceLaneInfo * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceLaneInfo * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_LaneMarkers )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceLaneInfo * This,
                           __RPC__out __x_ABI_CWindows_CServices_CMaps_CGuidance_CGuidanceLaneMarkers * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsOnRoute )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceLaneInfo * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceLaneInfoVtbl;
interface __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceLaneInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceLaneInfoVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_LaneMarkers(This,value) )
    ( (This)->lpVtbl->get_IsOnRoute(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceLaneInfo;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_Guidance_IGuidanceManeuver[] = L"Windows.Services.Maps.Guidance.IGuidanceManeuver";
typedef struct __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceManeuverVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceManeuver * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceManeuver * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceManeuver * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceManeuver * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceManeuver * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceManeuver * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_StartLocation )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceManeuver * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DistanceFromRouteStart )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceManeuver * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DistanceFromPreviousManeuver )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceManeuver * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DepartureRoadName )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceManeuver * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NextRoadName )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceManeuver * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DepartureShortRoadName )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceManeuver * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NextShortRoadName )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceManeuver * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Kind )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceManeuver * This,
                           __RPC__out __x_ABI_CWindows_CServices_CMaps_CGuidance_CGuidanceManeuverKind * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_StartAngle )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceManeuver * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_EndAngle )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceManeuver * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RoadSignpost )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceManeuver * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSignpost * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_InstructionText )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceManeuver * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceManeuverVtbl;
interface __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceManeuver
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceManeuverVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_StartLocation(This,value) )
    ( (This)->lpVtbl->get_DistanceFromRouteStart(This,value) )
    ( (This)->lpVtbl->get_DistanceFromPreviousManeuver(This,value) )
    ( (This)->lpVtbl->get_DepartureRoadName(This,value) )
    ( (This)->lpVtbl->get_NextRoadName(This,value) )
    ( (This)->lpVtbl->get_DepartureShortRoadName(This,value) )
    ( (This)->lpVtbl->get_NextShortRoadName(This,value) )
    ( (This)->lpVtbl->get_Kind(This,value) )
    ( (This)->lpVtbl->get_StartAngle(This,value) )
    ( (This)->lpVtbl->get_EndAngle(This,value) )
    ( (This)->lpVtbl->get_RoadSignpost(This,value) )
    ( (This)->lpVtbl->get_InstructionText(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceManeuver;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_Guidance_IGuidanceMapMatchedCoordinate[] = L"Windows.Services.Maps.Guidance.IGuidanceMapMatchedCoordinate";
typedef struct __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceMapMatchedCoordinateVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceMapMatchedCoordinate * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceMapMatchedCoordinate * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceMapMatchedCoordinate * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceMapMatchedCoordinate * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceMapMatchedCoordinate * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceMapMatchedCoordinate * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Location )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceMapMatchedCoordinate * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CurrentHeading )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceMapMatchedCoordinate * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CurrentSpeed )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceMapMatchedCoordinate * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsOnStreet )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceMapMatchedCoordinate * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Road )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceMapMatchedCoordinate * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSegment * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceMapMatchedCoordinateVtbl;
interface __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceMapMatchedCoordinate
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceMapMatchedCoordinateVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Location(This,value) )
    ( (This)->lpVtbl->get_CurrentHeading(This,value) )
    ( (This)->lpVtbl->get_CurrentSpeed(This,value) )
    ( (This)->lpVtbl->get_IsOnStreet(This,value) )
    ( (This)->lpVtbl->get_Road(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceMapMatchedCoordinate;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_Guidance_IGuidanceNavigator[] = L"Windows.Services.Maps.Guidance.IGuidanceNavigator";
typedef struct __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigatorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *StartNavigating )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator * This,
                  __RPC__in_opt __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoute * route
        );
    HRESULT ( STDMETHODCALLTYPE *StartSimulating )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator * This,
                  __RPC__in_opt __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoute * route,
                  INT32 speedInMetersPerSecond
        );
    HRESULT ( STDMETHODCALLTYPE *StartTracking )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator * This
        );
    HRESULT ( STDMETHODCALLTYPE *Pause )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator * This
        );
    HRESULT ( STDMETHODCALLTYPE *Resume )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator * This
        );
    HRESULT ( STDMETHODCALLTYPE *Stop )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator * This
        );
    HRESULT ( STDMETHODCALLTYPE *RepeatLastAudioNotification )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator * This
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AudioMeasurementSystem )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator * This,
                           __RPC__out __x_ABI_CWindows_CServices_CMaps_CGuidance_CGuidanceAudioMeasurementSystem * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AudioMeasurementSystem )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator * This,
                  __x_ABI_CWindows_CServices_CMaps_CGuidance_CGuidanceAudioMeasurementSystem value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AudioNotifications )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator * This,
                           __RPC__out __x_ABI_CWindows_CServices_CMaps_CGuidance_CGuidanceAudioNotifications * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AudioNotifications )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator * This,
                  __x_ABI_CWindows_CServices_CMaps_CGuidance_CGuidanceAudioNotifications value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_GuidanceUpdated )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_Windows__CServices__CMaps__CGuidance__CGuidanceUpdatedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_GuidanceUpdated )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_DestinationReached )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_DestinationReached )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_Rerouting )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Rerouting )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_Rerouted )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_Windows__CServices__CMaps__CGuidance__CGuidanceReroutedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Rerouted )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_RerouteFailed )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_RerouteFailed )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_UserLocationLost )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_UserLocationLost )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_UserLocationRestored )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_UserLocationRestored )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator * This,
                  EventRegistrationToken token
        );
    HRESULT ( STDMETHODCALLTYPE *SetGuidanceVoice )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator * This,
                  INT32 voiceId,
                  __RPC__in HSTRING voiceFolder
        );
                    HRESULT ( STDMETHODCALLTYPE *UpdateUserLocation )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinate * userLocation
        );
                    HRESULT ( STDMETHODCALLTYPE *UpdateUserLocationWithPositionOverride )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinate * userLocation,
                  __x_ABI_CWindows_CDevices_CGeolocation_CBasicGeoposition positionOverride
        );
    END_INTERFACE
} __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigatorVtbl;
interface __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigatorVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->StartNavigating(This,route) )
    ( (This)->lpVtbl->StartSimulating(This,route,speedInMetersPerSecond) )
    ( (This)->lpVtbl->StartTracking(This) )
    ( (This)->lpVtbl->Pause(This) )
    ( (This)->lpVtbl->Resume(This) )
    ( (This)->lpVtbl->Stop(This) )
    ( (This)->lpVtbl->RepeatLastAudioNotification(This) )
    ( (This)->lpVtbl->get_AudioMeasurementSystem(This,value) )
    ( (This)->lpVtbl->put_AudioMeasurementSystem(This,value) )
    ( (This)->lpVtbl->get_AudioNotifications(This,value) )
    ( (This)->lpVtbl->put_AudioNotifications(This,value) )
    ( (This)->lpVtbl->add_GuidanceUpdated(This,handler,token) )
    ( (This)->lpVtbl->remove_GuidanceUpdated(This,token) )
    ( (This)->lpVtbl->add_DestinationReached(This,handler,token) )
    ( (This)->lpVtbl->remove_DestinationReached(This,token) )
    ( (This)->lpVtbl->add_Rerouting(This,handler,token) )
    ( (This)->lpVtbl->remove_Rerouting(This,token) )
    ( (This)->lpVtbl->add_Rerouted(This,handler,token) )
    ( (This)->lpVtbl->remove_Rerouted(This,token) )
    ( (This)->lpVtbl->add_RerouteFailed(This,handler,token) )
    ( (This)->lpVtbl->remove_RerouteFailed(This,token) )
    ( (This)->lpVtbl->add_UserLocationLost(This,handler,token) )
    ( (This)->lpVtbl->remove_UserLocationLost(This,token) )
    ( (This)->lpVtbl->add_UserLocationRestored(This,handler,token) )
    ( (This)->lpVtbl->remove_UserLocationRestored(This,token) )
    ( (This)->lpVtbl->SetGuidanceVoice(This,voiceId,voiceFolder) )
    ( (This)->lpVtbl->UpdateUserLocation(This,userLocation) )
    ( (This)->lpVtbl->UpdateUserLocationWithPositionOverride(This,userLocation,positionOverride) )
EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_Guidance_IGuidanceNavigator2[] = L"Windows.Services.Maps.Guidance.IGuidanceNavigator2";
typedef struct __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_AudioNotificationRequested )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator2 * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_Windows__CServices__CMaps__CGuidance__CGuidanceAudioNotificationRequestedEventArgs * value,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_AudioNotificationRequested )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator2 * This,
                  EventRegistrationToken token
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsGuidanceAudioMuted )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator2 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsGuidanceAudioMuted )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator2 * This,
                  boolean value
        );
    END_INTERFACE
} __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator2Vtbl;
interface __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator2
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_AudioNotificationRequested(This,value,token) )
    ( (This)->lpVtbl->remove_AudioNotificationRequested(This,token) )
    ( (This)->lpVtbl->get_IsGuidanceAudioMuted(This,value) )
    ( (This)->lpVtbl->put_IsGuidanceAudioMuted(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_Guidance_IGuidanceNavigatorStatics[] = L"Windows.Services.Maps.Guidance.IGuidanceNavigatorStatics";
typedef struct __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigatorStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigatorStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigatorStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigatorStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigatorStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigatorStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigatorStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetCurrent )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigatorStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigatorStaticsVtbl;
interface __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigatorStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigatorStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetCurrent(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigatorStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_Guidance_IGuidanceNavigatorStatics2[] = L"Windows.Services.Maps.Guidance.IGuidanceNavigatorStatics2";
typedef struct __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigatorStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigatorStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigatorStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigatorStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigatorStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigatorStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigatorStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_UseAppProvidedVoice )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigatorStatics2 * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigatorStatics2Vtbl;
interface __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigatorStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigatorStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_UseAppProvidedVoice(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigatorStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_Guidance_IGuidanceReroutedEventArgs[] = L"Windows.Services.Maps.Guidance.IGuidanceReroutedEventArgs";
typedef struct __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceReroutedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceReroutedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceReroutedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceReroutedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceReroutedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceReroutedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceReroutedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Route )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceReroutedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoute * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceReroutedEventArgsVtbl;
interface __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceReroutedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceReroutedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Route(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceReroutedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_Guidance_IGuidanceRoadSegment[] = L"Windows.Services.Maps.Guidance.IGuidanceRoadSegment";
typedef struct __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSegmentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSegment * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSegment * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSegment * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSegment * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSegment * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSegment * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_RoadName )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSegment * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ShortRoadName )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSegment * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SpeedLimit )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSegment * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TravelTime )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSegment * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Path )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSegment * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeopath * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSegment * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsHighway )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSegment * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsTunnel )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSegment * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsTollRoad )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSegment * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSegmentVtbl;
interface __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSegment
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSegmentVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_RoadName(This,value) )
    ( (This)->lpVtbl->get_ShortRoadName(This,value) )
    ( (This)->lpVtbl->get_SpeedLimit(This,value) )
    ( (This)->lpVtbl->get_TravelTime(This,value) )
    ( (This)->lpVtbl->get_Path(This,value) )
    ( (This)->lpVtbl->get_Id(This,value) )
    ( (This)->lpVtbl->get_IsHighway(This,value) )
    ( (This)->lpVtbl->get_IsTunnel(This,value) )
    ( (This)->lpVtbl->get_IsTollRoad(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSegment;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_Guidance_IGuidanceRoadSegment2[] = L"Windows.Services.Maps.Guidance.IGuidanceRoadSegment2";
typedef struct __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSegment2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSegment2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSegment2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSegment2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSegment2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSegment2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSegment2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsScenic )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSegment2 * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSegment2Vtbl;
interface __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSegment2
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSegment2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsScenic(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSegment2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_Guidance_IGuidanceRoadSignpost[] = L"Windows.Services.Maps.Guidance.IGuidanceRoadSignpost";
typedef struct __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSignpostVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSignpost * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSignpost * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSignpost * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSignpost * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSignpost * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSignpost * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ExitNumber )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSignpost * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Exit )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSignpost * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BackgroundColor )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSignpost * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ForegroundColor )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSignpost * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ExitDirections )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSignpost * This,
                           __RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSignpostVtbl;
interface __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSignpost
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSignpostVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ExitNumber(This,value) )
    ( (This)->lpVtbl->get_Exit(This,value) )
    ( (This)->lpVtbl->get_BackgroundColor(This,value) )
    ( (This)->lpVtbl->get_ForegroundColor(This,value) )
    ( (This)->lpVtbl->get_ExitDirections(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSignpost;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_Guidance_IGuidanceRoute[] = L"Windows.Services.Maps.Guidance.IGuidanceRoute";
typedef struct __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRouteVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoute * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoute * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoute * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoute * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoute * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoute * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Duration )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoute * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Distance )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoute * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Maneuvers )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoute * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuver * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BoundingBox )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoute * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBox * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Path )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoute * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeopath * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RoadSegments )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoute * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegment * * value
        );
    HRESULT ( STDMETHODCALLTYPE *ConvertToMapRoute )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoute * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CServices_CMaps_CIMapRoute * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRouteVtbl;
interface __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoute
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRouteVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Duration(This,value) )
    ( (This)->lpVtbl->get_Distance(This,value) )
    ( (This)->lpVtbl->get_Maneuvers(This,value) )
    ( (This)->lpVtbl->get_BoundingBox(This,value) )
    ( (This)->lpVtbl->get_Path(This,value) )
    ( (This)->lpVtbl->get_RoadSegments(This,value) )
    ( (This)->lpVtbl->ConvertToMapRoute(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoute;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_Guidance_IGuidanceRouteStatics[] = L"Windows.Services.Maps.Guidance.IGuidanceRouteStatics";
typedef struct __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRouteStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRouteStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRouteStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRouteStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRouteStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRouteStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRouteStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CanCreateFromMapRoute )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRouteStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CServices_CMaps_CIMapRoute * mapRoute,
                           __RPC__out boolean * result
        );
    HRESULT ( STDMETHODCALLTYPE *TryCreateFromMapRoute )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRouteStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CServices_CMaps_CIMapRoute * mapRoute,
                           __RPC__deref_out_opt __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoute * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRouteStaticsVtbl;
interface __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRouteStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRouteStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CanCreateFromMapRoute(This,mapRoute,result) )
    ( (This)->lpVtbl->TryCreateFromMapRoute(This,mapRoute,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRouteStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_Guidance_IGuidanceTelemetryCollector[] = L"Windows.Services.Maps.Guidance.IGuidanceTelemetryCollector";
typedef struct __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceTelemetryCollectorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceTelemetryCollector * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceTelemetryCollector * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceTelemetryCollector * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceTelemetryCollector * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceTelemetryCollector * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceTelemetryCollector * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Enabled )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceTelemetryCollector * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Enabled )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceTelemetryCollector * This,
                  boolean value
        );
    HRESULT ( STDMETHODCALLTYPE *ClearLocalData )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceTelemetryCollector * This
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SpeedTrigger )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceTelemetryCollector * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_SpeedTrigger )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceTelemetryCollector * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_UploadFrequency )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceTelemetryCollector * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_UploadFrequency )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceTelemetryCollector * This,
                  INT32 value
        );
    END_INTERFACE
} __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceTelemetryCollectorVtbl;
interface __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceTelemetryCollector
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceTelemetryCollectorVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Enabled(This,value) )
    ( (This)->lpVtbl->put_Enabled(This,value) )
    ( (This)->lpVtbl->ClearLocalData(This) )
    ( (This)->lpVtbl->get_SpeedTrigger(This,value) )
    ( (This)->lpVtbl->put_SpeedTrigger(This,value) )
    ( (This)->lpVtbl->get_UploadFrequency(This,value) )
    ( (This)->lpVtbl->put_UploadFrequency(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceTelemetryCollector;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_Guidance_IGuidanceTelemetryCollectorStatics[] = L"Windows.Services.Maps.Guidance.IGuidanceTelemetryCollectorStatics";
typedef struct __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceTelemetryCollectorStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceTelemetryCollectorStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceTelemetryCollectorStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceTelemetryCollectorStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceTelemetryCollectorStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceTelemetryCollectorStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceTelemetryCollectorStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetCurrent )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceTelemetryCollectorStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceTelemetryCollector * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceTelemetryCollectorStaticsVtbl;
interface __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceTelemetryCollectorStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceTelemetryCollectorStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetCurrent(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceTelemetryCollectorStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_Guidance_IGuidanceUpdatedEventArgs[] = L"Windows.Services.Maps.Guidance.IGuidanceUpdatedEventArgs";
typedef struct __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceUpdatedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceUpdatedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceUpdatedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceUpdatedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceUpdatedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceUpdatedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceUpdatedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Mode )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceUpdatedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CServices_CMaps_CGuidance_CGuidanceMode * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NextManeuver )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceUpdatedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceManeuver * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NextManeuverDistance )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceUpdatedEventArgs * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AfterNextManeuver )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceUpdatedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceManeuver * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AfterNextManeuverDistance )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceUpdatedEventArgs * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DistanceToDestination )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceUpdatedEventArgs * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ElapsedDistance )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceUpdatedEventArgs * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ElapsedTime )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceUpdatedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TimeToDestination )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceUpdatedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RoadName )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceUpdatedEventArgs * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Route )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceUpdatedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoute * * result
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CurrentLocation )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceUpdatedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceMapMatchedCoordinate * * result
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsNewManeuver )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceUpdatedEventArgs * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LaneInfo )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceUpdatedEventArgs * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfo * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceUpdatedEventArgsVtbl;
interface __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceUpdatedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceUpdatedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Mode(This,value) )
    ( (This)->lpVtbl->get_NextManeuver(This,value) )
    ( (This)->lpVtbl->get_NextManeuverDistance(This,value) )
    ( (This)->lpVtbl->get_AfterNextManeuver(This,value) )
    ( (This)->lpVtbl->get_AfterNextManeuverDistance(This,value) )
    ( (This)->lpVtbl->get_DistanceToDestination(This,value) )
    ( (This)->lpVtbl->get_ElapsedDistance(This,value) )
    ( (This)->lpVtbl->get_ElapsedTime(This,value) )
    ( (This)->lpVtbl->get_TimeToDestination(This,value) )
    ( (This)->lpVtbl->get_RoadName(This,value) )
    ( (This)->lpVtbl->get_Route(This,result) )
    ( (This)->lpVtbl->get_CurrentLocation(This,result) )
    ( (This)->lpVtbl->get_IsNewManeuver(This,value) )
    ( (This)->lpVtbl->get_LaneInfo(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceUpdatedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Maps_Guidance_GuidanceAudioNotificationRequestedEventArgs[] = L"Windows.Services.Maps.Guidance.GuidanceAudioNotificationRequestedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Maps_Guidance_GuidanceLaneInfo[] = L"Windows.Services.Maps.Guidance.GuidanceLaneInfo";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Maps_Guidance_GuidanceManeuver[] = L"Windows.Services.Maps.Guidance.GuidanceManeuver";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Maps_Guidance_GuidanceMapMatchedCoordinate[] = L"Windows.Services.Maps.Guidance.GuidanceMapMatchedCoordinate";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Maps_Guidance_GuidanceNavigator[] = L"Windows.Services.Maps.Guidance.GuidanceNavigator";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Maps_Guidance_GuidanceReroutedEventArgs[] = L"Windows.Services.Maps.Guidance.GuidanceReroutedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Maps_Guidance_GuidanceRoadSegment[] = L"Windows.Services.Maps.Guidance.GuidanceRoadSegment";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Maps_Guidance_GuidanceRoadSignpost[] = L"Windows.Services.Maps.Guidance.GuidanceRoadSignpost";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Maps_Guidance_GuidanceRoute[] = L"Windows.Services.Maps.Guidance.GuidanceRoute";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Maps_Guidance_GuidanceTelemetryCollector[] = L"Windows.Services.Maps.Guidance.GuidanceTelemetryCollector";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Maps_Guidance_GuidanceUpdatedEventArgs[] = L"Windows.Services.Maps.Guidance.GuidanceUpdatedEventArgs";
       
       
#pragma clang diagnostic pop

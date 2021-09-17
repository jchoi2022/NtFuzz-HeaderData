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
#include "Windows.Devices.Enumeration.h"
#include "Windows.Foundation.Numerics.h"
#include "Windows.Graphics.Imaging.h"
#include "Windows.Media.h"
#include "Windows.Media.Devices.Core.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CDevices_CPerception_CIKnownCameraIntrinsicsPropertiesStatics __x_ABI_CWindows_CDevices_CPerception_CIKnownCameraIntrinsicsPropertiesStatics;
typedef interface __x_ABI_CWindows_CDevices_CPerception_CIKnownPerceptionColorFrameSourcePropertiesStatics __x_ABI_CWindows_CDevices_CPerception_CIKnownPerceptionColorFrameSourcePropertiesStatics;
typedef interface __x_ABI_CWindows_CDevices_CPerception_CIKnownPerceptionDepthFrameSourcePropertiesStatics __x_ABI_CWindows_CDevices_CPerception_CIKnownPerceptionDepthFrameSourcePropertiesStatics;
typedef interface __x_ABI_CWindows_CDevices_CPerception_CIKnownPerceptionFrameSourcePropertiesStatics __x_ABI_CWindows_CDevices_CPerception_CIKnownPerceptionFrameSourcePropertiesStatics;
typedef interface __x_ABI_CWindows_CDevices_CPerception_CIKnownPerceptionFrameSourcePropertiesStatics2 __x_ABI_CWindows_CDevices_CPerception_CIKnownPerceptionFrameSourcePropertiesStatics2;
typedef interface __x_ABI_CWindows_CDevices_CPerception_CIKnownPerceptionInfraredFrameSourcePropertiesStatics __x_ABI_CWindows_CDevices_CPerception_CIKnownPerceptionInfraredFrameSourcePropertiesStatics;
typedef interface __x_ABI_CWindows_CDevices_CPerception_CIKnownPerceptionVideoFrameSourcePropertiesStatics __x_ABI_CWindows_CDevices_CPerception_CIKnownPerceptionVideoFrameSourcePropertiesStatics;
typedef interface __x_ABI_CWindows_CDevices_CPerception_CIKnownPerceptionVideoProfilePropertiesStatics __x_ABI_CWindows_CDevices_CPerception_CIKnownPerceptionVideoProfilePropertiesStatics;
typedef interface __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrame __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrame;
typedef interface __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameArrivedEventArgs __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameArrivedEventArgs;
typedef interface __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameReader __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameReader;
typedef interface __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameSource __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameSource;
typedef interface __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameSource2 __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameSource2;
typedef interface __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameSourceAddedEventArgs __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameSourceAddedEventArgs;
typedef interface __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameSourceRemovedEventArgs __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameSourceRemovedEventArgs;
typedef interface __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameSourceStatics __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameSourceStatics;
typedef interface __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameSourceWatcher __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameSourceWatcher;
typedef interface __x_ABI_CWindows_CDevices_CPerception_CIPerceptionControlSession __x_ABI_CWindows_CDevices_CPerception_CIPerceptionControlSession;
typedef interface __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthCorrelatedCameraIntrinsics __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthCorrelatedCameraIntrinsics;
typedef interface __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthCorrelatedCoordinateMapper __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthCorrelatedCoordinateMapper;
typedef interface __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrame __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrame;
typedef interface __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameArrivedEventArgs __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameArrivedEventArgs;
typedef interface __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameReader __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameReader;
typedef interface __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameSource __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameSource;
typedef interface __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameSource2 __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameSource2;
typedef interface __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameSourceAddedEventArgs __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameSourceAddedEventArgs;
typedef interface __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameSourceRemovedEventArgs __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameSourceRemovedEventArgs;
typedef interface __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameSourceStatics __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameSourceStatics;
typedef interface __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameSourceWatcher __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameSourceWatcher;
typedef interface __x_ABI_CWindows_CDevices_CPerception_CIPerceptionFrameSourcePropertiesChangedEventArgs __x_ABI_CWindows_CDevices_CPerception_CIPerceptionFrameSourcePropertiesChangedEventArgs;
typedef interface __x_ABI_CWindows_CDevices_CPerception_CIPerceptionFrameSourcePropertyChangeResult __x_ABI_CWindows_CDevices_CPerception_CIPerceptionFrameSourcePropertyChangeResult;
typedef interface __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrame __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrame;
typedef interface __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameArrivedEventArgs __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameArrivedEventArgs;
typedef interface __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameReader __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameReader;
typedef interface __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameSource __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameSource;
typedef interface __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameSource2 __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameSource2;
typedef interface __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameSourceAddedEventArgs __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameSourceAddedEventArgs;
typedef interface __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameSourceRemovedEventArgs __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameSourceRemovedEventArgs;
typedef interface __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameSourceStatics __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameSourceStatics;
typedef interface __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameSourceWatcher __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameSourceWatcher;
typedef interface __x_ABI_CWindows_CDevices_CPerception_CIPerceptionVideoProfile __x_ABI_CWindows_CDevices_CPerception_CIPerceptionVideoProfile;
typedef interface __FIIterator_1_Windows__CDevices__CPerception__CPerceptionColorFrameSource __FIIterator_1_Windows__CDevices__CPerception__CPerceptionColorFrameSource;
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CPerception__CPerceptionColorFrameSource;
typedef struct __FIIterator_1_Windows__CDevices__CPerception__CPerceptionColorFrameSourceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CDevices__CPerception__CPerceptionColorFrameSource * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CPerception__CPerceptionColorFrameSource * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CPerception__CPerceptionColorFrameSource * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CPerception__CPerceptionColorFrameSource * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CPerception__CPerceptionColorFrameSource * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CPerception__CPerceptionColorFrameSource * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CPerception__CPerceptionColorFrameSource * This, __RPC__out __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameSource * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CPerception__CPerceptionColorFrameSource * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CPerception__CPerceptionColorFrameSource * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CPerception__CPerceptionColorFrameSource * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameSource * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CPerception__CPerceptionColorFrameSourceVtbl;
interface __FIIterator_1_Windows__CDevices__CPerception__CPerceptionColorFrameSource
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CPerception__CPerceptionColorFrameSourceVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CDevices__CPerception__CPerceptionColorFrameSource __FIIterable_1_Windows__CDevices__CPerception__CPerceptionColorFrameSource;
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CPerception__CPerceptionColorFrameSource;
typedef struct __FIIterable_1_Windows__CDevices__CPerception__CPerceptionColorFrameSourceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CDevices__CPerception__CPerceptionColorFrameSource * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CPerception__CPerceptionColorFrameSource * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CPerception__CPerceptionColorFrameSource * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CPerception__CPerceptionColorFrameSource * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CPerception__CPerceptionColorFrameSource * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CPerception__CPerceptionColorFrameSource * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CPerception__CPerceptionColorFrameSource * This, __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CPerception__CPerceptionColorFrameSource **first);
    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CPerception__CPerceptionColorFrameSourceVtbl;
interface __FIIterable_1_Windows__CDevices__CPerception__CPerceptionColorFrameSource
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CPerception__CPerceptionColorFrameSourceVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CDevices__CPerception__CPerceptionDepthFrameSource __FIIterator_1_Windows__CDevices__CPerception__CPerceptionDepthFrameSource;
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CPerception__CPerceptionDepthFrameSource;
typedef struct __FIIterator_1_Windows__CDevices__CPerception__CPerceptionDepthFrameSourceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CDevices__CPerception__CPerceptionDepthFrameSource * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CPerception__CPerceptionDepthFrameSource * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CPerception__CPerceptionDepthFrameSource * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CPerception__CPerceptionDepthFrameSource * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CPerception__CPerceptionDepthFrameSource * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CPerception__CPerceptionDepthFrameSource * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CPerception__CPerceptionDepthFrameSource * This, __RPC__out __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameSource * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CPerception__CPerceptionDepthFrameSource * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CPerception__CPerceptionDepthFrameSource * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CPerception__CPerceptionDepthFrameSource * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameSource * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CPerception__CPerceptionDepthFrameSourceVtbl;
interface __FIIterator_1_Windows__CDevices__CPerception__CPerceptionDepthFrameSource
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CPerception__CPerceptionDepthFrameSourceVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CDevices__CPerception__CPerceptionDepthFrameSource __FIIterable_1_Windows__CDevices__CPerception__CPerceptionDepthFrameSource;
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CPerception__CPerceptionDepthFrameSource;
typedef struct __FIIterable_1_Windows__CDevices__CPerception__CPerceptionDepthFrameSourceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CDevices__CPerception__CPerceptionDepthFrameSource * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CPerception__CPerceptionDepthFrameSource * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CPerception__CPerceptionDepthFrameSource * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CPerception__CPerceptionDepthFrameSource * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CPerception__CPerceptionDepthFrameSource * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CPerception__CPerceptionDepthFrameSource * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CPerception__CPerceptionDepthFrameSource * This, __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CPerception__CPerceptionDepthFrameSource **first);
    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CPerception__CPerceptionDepthFrameSourceVtbl;
interface __FIIterable_1_Windows__CDevices__CPerception__CPerceptionDepthFrameSource
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CPerception__CPerceptionDepthFrameSourceVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CDevices__CPerception__CPerceptionInfraredFrameSource __FIIterator_1_Windows__CDevices__CPerception__CPerceptionInfraredFrameSource;
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CPerception__CPerceptionInfraredFrameSource;
typedef struct __FIIterator_1_Windows__CDevices__CPerception__CPerceptionInfraredFrameSourceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CDevices__CPerception__CPerceptionInfraredFrameSource * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CPerception__CPerceptionInfraredFrameSource * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CPerception__CPerceptionInfraredFrameSource * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CPerception__CPerceptionInfraredFrameSource * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CPerception__CPerceptionInfraredFrameSource * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CPerception__CPerceptionInfraredFrameSource * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CPerception__CPerceptionInfraredFrameSource * This, __RPC__out __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameSource * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CPerception__CPerceptionInfraredFrameSource * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CPerception__CPerceptionInfraredFrameSource * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CPerception__CPerceptionInfraredFrameSource * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameSource * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CPerception__CPerceptionInfraredFrameSourceVtbl;
interface __FIIterator_1_Windows__CDevices__CPerception__CPerceptionInfraredFrameSource
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CPerception__CPerceptionInfraredFrameSourceVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CDevices__CPerception__CPerceptionInfraredFrameSource __FIIterable_1_Windows__CDevices__CPerception__CPerceptionInfraredFrameSource;
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CPerception__CPerceptionInfraredFrameSource;
typedef struct __FIIterable_1_Windows__CDevices__CPerception__CPerceptionInfraredFrameSourceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CDevices__CPerception__CPerceptionInfraredFrameSource * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CPerception__CPerceptionInfraredFrameSource * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CPerception__CPerceptionInfraredFrameSource * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CPerception__CPerceptionInfraredFrameSource * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CPerception__CPerceptionInfraredFrameSource * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CPerception__CPerceptionInfraredFrameSource * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CPerception__CPerceptionInfraredFrameSource * This, __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CPerception__CPerceptionInfraredFrameSource **first);
    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CPerception__CPerceptionInfraredFrameSourceVtbl;
interface __FIIterable_1_Windows__CDevices__CPerception__CPerceptionInfraredFrameSource
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CPerception__CPerceptionInfraredFrameSourceVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CDevices__CPerception__CPerceptionVideoProfile __FIIterator_1_Windows__CDevices__CPerception__CPerceptionVideoProfile;
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CPerception__CPerceptionVideoProfile;
typedef struct __FIIterator_1_Windows__CDevices__CPerception__CPerceptionVideoProfileVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CDevices__CPerception__CPerceptionVideoProfile * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CPerception__CPerceptionVideoProfile * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CPerception__CPerceptionVideoProfile * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CPerception__CPerceptionVideoProfile * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CPerception__CPerceptionVideoProfile * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CPerception__CPerceptionVideoProfile * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CPerception__CPerceptionVideoProfile * This, __RPC__out __x_ABI_CWindows_CDevices_CPerception_CIPerceptionVideoProfile * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CPerception__CPerceptionVideoProfile * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CPerception__CPerceptionVideoProfile * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CPerception__CPerceptionVideoProfile * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CPerception_CIPerceptionVideoProfile * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CPerception__CPerceptionVideoProfileVtbl;
interface __FIIterator_1_Windows__CDevices__CPerception__CPerceptionVideoProfile
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CPerception__CPerceptionVideoProfileVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CDevices__CPerception__CPerceptionVideoProfile __FIIterable_1_Windows__CDevices__CPerception__CPerceptionVideoProfile;
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CPerception__CPerceptionVideoProfile;
typedef struct __FIIterable_1_Windows__CDevices__CPerception__CPerceptionVideoProfileVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CDevices__CPerception__CPerceptionVideoProfile * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CPerception__CPerceptionVideoProfile * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CPerception__CPerceptionVideoProfile * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CPerception__CPerceptionVideoProfile * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CPerception__CPerceptionVideoProfile * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CPerception__CPerceptionVideoProfile * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CPerception__CPerceptionVideoProfile * This, __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CPerception__CPerceptionVideoProfile **first);
    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CPerception__CPerceptionVideoProfileVtbl;
interface __FIIterable_1_Windows__CDevices__CPerception__CPerceptionVideoProfile
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CPerception__CPerceptionVideoProfileVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CDevices__CPerception__CPerceptionColorFrameSource __FIVectorView_1_Windows__CDevices__CPerception__CPerceptionColorFrameSource;
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CPerception__CPerceptionColorFrameSource;
typedef struct __FIVectorView_1_Windows__CDevices__CPerception__CPerceptionColorFrameSourceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CPerception__CPerceptionColorFrameSource * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CPerception__CPerceptionColorFrameSource * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CPerception__CPerceptionColorFrameSource * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CPerception__CPerceptionColorFrameSource * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CPerception__CPerceptionColorFrameSource * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CPerception__CPerceptionColorFrameSource * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CPerception__CPerceptionColorFrameSource * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameSource * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CDevices__CPerception__CPerceptionColorFrameSource * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CPerception__CPerceptionColorFrameSource * This,
                       __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameSource * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CPerception__CPerceptionColorFrameSource * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameSource * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CPerception__CPerceptionColorFrameSourceVtbl;
interface __FIVectorView_1_Windows__CDevices__CPerception__CPerceptionColorFrameSource
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CPerception__CPerceptionColorFrameSourceVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CDevices__CPerception__CPerceptionDepthFrameSource __FIVectorView_1_Windows__CDevices__CPerception__CPerceptionDepthFrameSource;
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CPerception__CPerceptionDepthFrameSource;
typedef struct __FIVectorView_1_Windows__CDevices__CPerception__CPerceptionDepthFrameSourceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CPerception__CPerceptionDepthFrameSource * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CPerception__CPerceptionDepthFrameSource * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CPerception__CPerceptionDepthFrameSource * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CPerception__CPerceptionDepthFrameSource * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CPerception__CPerceptionDepthFrameSource * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CPerception__CPerceptionDepthFrameSource * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CPerception__CPerceptionDepthFrameSource * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameSource * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CDevices__CPerception__CPerceptionDepthFrameSource * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CPerception__CPerceptionDepthFrameSource * This,
                       __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameSource * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CPerception__CPerceptionDepthFrameSource * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameSource * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CPerception__CPerceptionDepthFrameSourceVtbl;
interface __FIVectorView_1_Windows__CDevices__CPerception__CPerceptionDepthFrameSource
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CPerception__CPerceptionDepthFrameSourceVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CDevices__CPerception__CPerceptionInfraredFrameSource __FIVectorView_1_Windows__CDevices__CPerception__CPerceptionInfraredFrameSource;
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CPerception__CPerceptionInfraredFrameSource;
typedef struct __FIVectorView_1_Windows__CDevices__CPerception__CPerceptionInfraredFrameSourceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CPerception__CPerceptionInfraredFrameSource * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CPerception__CPerceptionInfraredFrameSource * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CPerception__CPerceptionInfraredFrameSource * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CPerception__CPerceptionInfraredFrameSource * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CPerception__CPerceptionInfraredFrameSource * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CPerception__CPerceptionInfraredFrameSource * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CPerception__CPerceptionInfraredFrameSource * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameSource * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CDevices__CPerception__CPerceptionInfraredFrameSource * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CPerception__CPerceptionInfraredFrameSource * This,
                       __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameSource * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CPerception__CPerceptionInfraredFrameSource * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameSource * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CPerception__CPerceptionInfraredFrameSourceVtbl;
interface __FIVectorView_1_Windows__CDevices__CPerception__CPerceptionInfraredFrameSource
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CPerception__CPerceptionInfraredFrameSourceVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CDevices__CPerception__CPerceptionVideoProfile __FIVectorView_1_Windows__CDevices__CPerception__CPerceptionVideoProfile;
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CPerception__CPerceptionVideoProfile;
typedef struct __FIVectorView_1_Windows__CDevices__CPerception__CPerceptionVideoProfileVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CPerception__CPerceptionVideoProfile * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CPerception__CPerceptionVideoProfile * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CPerception__CPerceptionVideoProfile * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CPerception__CPerceptionVideoProfile * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CPerception__CPerceptionVideoProfile * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CPerception__CPerceptionVideoProfile * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CPerception__CPerceptionVideoProfile * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CDevices_CPerception_CIPerceptionVideoProfile * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CDevices__CPerception__CPerceptionVideoProfile * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CPerception__CPerceptionVideoProfile * This,
                       __x_ABI_CWindows_CDevices_CPerception_CIPerceptionVideoProfile * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CPerception__CPerceptionVideoProfile * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CPerception_CIPerceptionVideoProfile * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CPerception__CPerceptionVideoProfileVtbl;
interface __FIVectorView_1_Windows__CDevices__CPerception__CPerceptionVideoProfile
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CPerception__CPerceptionVideoProfileVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPerception__CPerceptionColorFrameSource __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPerception__CPerceptionColorFrameSource;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPerception__CPerceptionColorFrameSource;
typedef interface __FIAsyncOperation_1_Windows__CDevices__CPerception__CPerceptionColorFrameSource __FIAsyncOperation_1_Windows__CDevices__CPerception__CPerceptionColorFrameSource;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPerception__CPerceptionColorFrameSourceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPerception__CPerceptionColorFrameSource * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPerception__CPerceptionColorFrameSource * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPerception__CPerceptionColorFrameSource * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPerception__CPerceptionColorFrameSource * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CPerception__CPerceptionColorFrameSource *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPerception__CPerceptionColorFrameSourceVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPerception__CPerceptionColorFrameSource
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPerception__CPerceptionColorFrameSourceVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CDevices__CPerception__CPerceptionColorFrameSource __FIAsyncOperation_1_Windows__CDevices__CPerception__CPerceptionColorFrameSource;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CPerception__CPerceptionColorFrameSource;
typedef struct __FIAsyncOperation_1_Windows__CDevices__CPerception__CPerceptionColorFrameSourceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPerception__CPerceptionColorFrameSource * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPerception__CPerceptionColorFrameSource * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPerception__CPerceptionColorFrameSource * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPerception__CPerceptionColorFrameSource * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPerception__CPerceptionColorFrameSource * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPerception__CPerceptionColorFrameSource * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPerception__CPerceptionColorFrameSource * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPerception__CPerceptionColorFrameSource *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPerception__CPerceptionColorFrameSource * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPerception__CPerceptionColorFrameSource **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPerception__CPerceptionColorFrameSource * This, __RPC__out __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameSource * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CPerception__CPerceptionColorFrameSourceVtbl;
interface __FIAsyncOperation_1_Windows__CDevices__CPerception__CPerceptionColorFrameSource
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CPerception__CPerceptionColorFrameSourceVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPerception__CPerceptionDepthCorrelatedCameraIntrinsics __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPerception__CPerceptionDepthCorrelatedCameraIntrinsics;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPerception__CPerceptionDepthCorrelatedCameraIntrinsics;
typedef interface __FIAsyncOperation_1_Windows__CDevices__CPerception__CPerceptionDepthCorrelatedCameraIntrinsics __FIAsyncOperation_1_Windows__CDevices__CPerception__CPerceptionDepthCorrelatedCameraIntrinsics;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPerception__CPerceptionDepthCorrelatedCameraIntrinsicsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPerception__CPerceptionDepthCorrelatedCameraIntrinsics * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPerception__CPerceptionDepthCorrelatedCameraIntrinsics * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPerception__CPerceptionDepthCorrelatedCameraIntrinsics * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPerception__CPerceptionDepthCorrelatedCameraIntrinsics * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CPerception__CPerceptionDepthCorrelatedCameraIntrinsics *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPerception__CPerceptionDepthCorrelatedCameraIntrinsicsVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPerception__CPerceptionDepthCorrelatedCameraIntrinsics
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPerception__CPerceptionDepthCorrelatedCameraIntrinsicsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CDevices__CPerception__CPerceptionDepthCorrelatedCameraIntrinsics __FIAsyncOperation_1_Windows__CDevices__CPerception__CPerceptionDepthCorrelatedCameraIntrinsics;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CPerception__CPerceptionDepthCorrelatedCameraIntrinsics;
typedef struct __FIAsyncOperation_1_Windows__CDevices__CPerception__CPerceptionDepthCorrelatedCameraIntrinsicsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPerception__CPerceptionDepthCorrelatedCameraIntrinsics * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPerception__CPerceptionDepthCorrelatedCameraIntrinsics * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPerception__CPerceptionDepthCorrelatedCameraIntrinsics * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPerception__CPerceptionDepthCorrelatedCameraIntrinsics * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPerception__CPerceptionDepthCorrelatedCameraIntrinsics * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPerception__CPerceptionDepthCorrelatedCameraIntrinsics * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPerception__CPerceptionDepthCorrelatedCameraIntrinsics * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPerception__CPerceptionDepthCorrelatedCameraIntrinsics *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPerception__CPerceptionDepthCorrelatedCameraIntrinsics * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPerception__CPerceptionDepthCorrelatedCameraIntrinsics **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPerception__CPerceptionDepthCorrelatedCameraIntrinsics * This, __RPC__out __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthCorrelatedCameraIntrinsics * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CPerception__CPerceptionDepthCorrelatedCameraIntrinsicsVtbl;
interface __FIAsyncOperation_1_Windows__CDevices__CPerception__CPerceptionDepthCorrelatedCameraIntrinsics
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CPerception__CPerceptionDepthCorrelatedCameraIntrinsicsVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPerception__CPerceptionDepthCorrelatedCoordinateMapper __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPerception__CPerceptionDepthCorrelatedCoordinateMapper;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPerception__CPerceptionDepthCorrelatedCoordinateMapper;
typedef interface __FIAsyncOperation_1_Windows__CDevices__CPerception__CPerceptionDepthCorrelatedCoordinateMapper __FIAsyncOperation_1_Windows__CDevices__CPerception__CPerceptionDepthCorrelatedCoordinateMapper;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPerception__CPerceptionDepthCorrelatedCoordinateMapperVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPerception__CPerceptionDepthCorrelatedCoordinateMapper * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPerception__CPerceptionDepthCorrelatedCoordinateMapper * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPerception__CPerceptionDepthCorrelatedCoordinateMapper * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPerception__CPerceptionDepthCorrelatedCoordinateMapper * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CPerception__CPerceptionDepthCorrelatedCoordinateMapper *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPerception__CPerceptionDepthCorrelatedCoordinateMapperVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPerception__CPerceptionDepthCorrelatedCoordinateMapper
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPerception__CPerceptionDepthCorrelatedCoordinateMapperVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CDevices__CPerception__CPerceptionDepthCorrelatedCoordinateMapper __FIAsyncOperation_1_Windows__CDevices__CPerception__CPerceptionDepthCorrelatedCoordinateMapper;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CPerception__CPerceptionDepthCorrelatedCoordinateMapper;
typedef struct __FIAsyncOperation_1_Windows__CDevices__CPerception__CPerceptionDepthCorrelatedCoordinateMapperVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPerception__CPerceptionDepthCorrelatedCoordinateMapper * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPerception__CPerceptionDepthCorrelatedCoordinateMapper * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPerception__CPerceptionDepthCorrelatedCoordinateMapper * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPerception__CPerceptionDepthCorrelatedCoordinateMapper * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPerception__CPerceptionDepthCorrelatedCoordinateMapper * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPerception__CPerceptionDepthCorrelatedCoordinateMapper * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPerception__CPerceptionDepthCorrelatedCoordinateMapper * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPerception__CPerceptionDepthCorrelatedCoordinateMapper *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPerception__CPerceptionDepthCorrelatedCoordinateMapper * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPerception__CPerceptionDepthCorrelatedCoordinateMapper **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPerception__CPerceptionDepthCorrelatedCoordinateMapper * This, __RPC__out __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthCorrelatedCoordinateMapper * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CPerception__CPerceptionDepthCorrelatedCoordinateMapperVtbl;
interface __FIAsyncOperation_1_Windows__CDevices__CPerception__CPerceptionDepthCorrelatedCoordinateMapper
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CPerception__CPerceptionDepthCorrelatedCoordinateMapperVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPerception__CPerceptionDepthFrameSource __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPerception__CPerceptionDepthFrameSource;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPerception__CPerceptionDepthFrameSource;
typedef interface __FIAsyncOperation_1_Windows__CDevices__CPerception__CPerceptionDepthFrameSource __FIAsyncOperation_1_Windows__CDevices__CPerception__CPerceptionDepthFrameSource;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPerception__CPerceptionDepthFrameSourceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPerception__CPerceptionDepthFrameSource * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPerception__CPerceptionDepthFrameSource * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPerception__CPerceptionDepthFrameSource * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPerception__CPerceptionDepthFrameSource * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CPerception__CPerceptionDepthFrameSource *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPerception__CPerceptionDepthFrameSourceVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPerception__CPerceptionDepthFrameSource
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPerception__CPerceptionDepthFrameSourceVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CDevices__CPerception__CPerceptionDepthFrameSource __FIAsyncOperation_1_Windows__CDevices__CPerception__CPerceptionDepthFrameSource;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CPerception__CPerceptionDepthFrameSource;
typedef struct __FIAsyncOperation_1_Windows__CDevices__CPerception__CPerceptionDepthFrameSourceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPerception__CPerceptionDepthFrameSource * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPerception__CPerceptionDepthFrameSource * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPerception__CPerceptionDepthFrameSource * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPerception__CPerceptionDepthFrameSource * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPerception__CPerceptionDepthFrameSource * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPerception__CPerceptionDepthFrameSource * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPerception__CPerceptionDepthFrameSource * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPerception__CPerceptionDepthFrameSource *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPerception__CPerceptionDepthFrameSource * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPerception__CPerceptionDepthFrameSource **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPerception__CPerceptionDepthFrameSource * This, __RPC__out __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameSource * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CPerception__CPerceptionDepthFrameSourceVtbl;
interface __FIAsyncOperation_1_Windows__CDevices__CPerception__CPerceptionDepthFrameSource
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CPerception__CPerceptionDepthFrameSourceVtbl *lpVtbl;
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
enum __x_ABI_CWindows_CDevices_CPerception_CPerceptionFrameSourceAccessStatus;
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPerception__CPerceptionFrameSourceAccessStatus __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPerception__CPerceptionFrameSourceAccessStatus;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPerception__CPerceptionFrameSourceAccessStatus;
typedef interface __FIAsyncOperation_1_Windows__CDevices__CPerception__CPerceptionFrameSourceAccessStatus __FIAsyncOperation_1_Windows__CDevices__CPerception__CPerceptionFrameSourceAccessStatus;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPerception__CPerceptionFrameSourceAccessStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPerception__CPerceptionFrameSourceAccessStatus * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPerception__CPerceptionFrameSourceAccessStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPerception__CPerceptionFrameSourceAccessStatus * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPerception__CPerceptionFrameSourceAccessStatus * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CPerception__CPerceptionFrameSourceAccessStatus *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPerception__CPerceptionFrameSourceAccessStatusVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPerception__CPerceptionFrameSourceAccessStatus
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPerception__CPerceptionFrameSourceAccessStatusVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CDevices__CPerception__CPerceptionFrameSourceAccessStatus __FIAsyncOperation_1_Windows__CDevices__CPerception__CPerceptionFrameSourceAccessStatus;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CPerception__CPerceptionFrameSourceAccessStatus;
typedef struct __FIAsyncOperation_1_Windows__CDevices__CPerception__CPerceptionFrameSourceAccessStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPerception__CPerceptionFrameSourceAccessStatus * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPerception__CPerceptionFrameSourceAccessStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPerception__CPerceptionFrameSourceAccessStatus * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPerception__CPerceptionFrameSourceAccessStatus * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPerception__CPerceptionFrameSourceAccessStatus * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPerception__CPerceptionFrameSourceAccessStatus * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPerception__CPerceptionFrameSourceAccessStatus * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPerception__CPerceptionFrameSourceAccessStatus *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPerception__CPerceptionFrameSourceAccessStatus * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPerception__CPerceptionFrameSourceAccessStatus **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPerception__CPerceptionFrameSourceAccessStatus * This, __RPC__out enum __x_ABI_CWindows_CDevices_CPerception_CPerceptionFrameSourceAccessStatus *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CPerception__CPerceptionFrameSourceAccessStatusVtbl;
interface __FIAsyncOperation_1_Windows__CDevices__CPerception__CPerceptionFrameSourceAccessStatus
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CPerception__CPerceptionFrameSourceAccessStatusVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPerception__CPerceptionFrameSourcePropertyChangeResult __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPerception__CPerceptionFrameSourcePropertyChangeResult;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPerception__CPerceptionFrameSourcePropertyChangeResult;
typedef interface __FIAsyncOperation_1_Windows__CDevices__CPerception__CPerceptionFrameSourcePropertyChangeResult __FIAsyncOperation_1_Windows__CDevices__CPerception__CPerceptionFrameSourcePropertyChangeResult;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPerception__CPerceptionFrameSourcePropertyChangeResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPerception__CPerceptionFrameSourcePropertyChangeResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPerception__CPerceptionFrameSourcePropertyChangeResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPerception__CPerceptionFrameSourcePropertyChangeResult * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPerception__CPerceptionFrameSourcePropertyChangeResult * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CPerception__CPerceptionFrameSourcePropertyChangeResult *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPerception__CPerceptionFrameSourcePropertyChangeResultVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPerception__CPerceptionFrameSourcePropertyChangeResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPerception__CPerceptionFrameSourcePropertyChangeResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CDevices__CPerception__CPerceptionFrameSourcePropertyChangeResult __FIAsyncOperation_1_Windows__CDevices__CPerception__CPerceptionFrameSourcePropertyChangeResult;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CPerception__CPerceptionFrameSourcePropertyChangeResult;
typedef struct __FIAsyncOperation_1_Windows__CDevices__CPerception__CPerceptionFrameSourcePropertyChangeResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPerception__CPerceptionFrameSourcePropertyChangeResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPerception__CPerceptionFrameSourcePropertyChangeResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPerception__CPerceptionFrameSourcePropertyChangeResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPerception__CPerceptionFrameSourcePropertyChangeResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPerception__CPerceptionFrameSourcePropertyChangeResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPerception__CPerceptionFrameSourcePropertyChangeResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPerception__CPerceptionFrameSourcePropertyChangeResult * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPerception__CPerceptionFrameSourcePropertyChangeResult *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPerception__CPerceptionFrameSourcePropertyChangeResult * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPerception__CPerceptionFrameSourcePropertyChangeResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPerception__CPerceptionFrameSourcePropertyChangeResult * This, __RPC__out __x_ABI_CWindows_CDevices_CPerception_CIPerceptionFrameSourcePropertyChangeResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CPerception__CPerceptionFrameSourcePropertyChangeResultVtbl;
interface __FIAsyncOperation_1_Windows__CDevices__CPerception__CPerceptionFrameSourcePropertyChangeResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CPerception__CPerceptionFrameSourcePropertyChangeResultVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPerception__CPerceptionInfraredFrameSource __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPerception__CPerceptionInfraredFrameSource;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPerception__CPerceptionInfraredFrameSource;
typedef interface __FIAsyncOperation_1_Windows__CDevices__CPerception__CPerceptionInfraredFrameSource __FIAsyncOperation_1_Windows__CDevices__CPerception__CPerceptionInfraredFrameSource;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPerception__CPerceptionInfraredFrameSourceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPerception__CPerceptionInfraredFrameSource * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPerception__CPerceptionInfraredFrameSource * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPerception__CPerceptionInfraredFrameSource * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPerception__CPerceptionInfraredFrameSource * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CPerception__CPerceptionInfraredFrameSource *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPerception__CPerceptionInfraredFrameSourceVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPerception__CPerceptionInfraredFrameSource
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPerception__CPerceptionInfraredFrameSourceVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CDevices__CPerception__CPerceptionInfraredFrameSource __FIAsyncOperation_1_Windows__CDevices__CPerception__CPerceptionInfraredFrameSource;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CPerception__CPerceptionInfraredFrameSource;
typedef struct __FIAsyncOperation_1_Windows__CDevices__CPerception__CPerceptionInfraredFrameSourceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPerception__CPerceptionInfraredFrameSource * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPerception__CPerceptionInfraredFrameSource * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPerception__CPerceptionInfraredFrameSource * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPerception__CPerceptionInfraredFrameSource * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPerception__CPerceptionInfraredFrameSource * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPerception__CPerceptionInfraredFrameSource * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPerception__CPerceptionInfraredFrameSource * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPerception__CPerceptionInfraredFrameSource *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPerception__CPerceptionInfraredFrameSource * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPerception__CPerceptionInfraredFrameSource **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPerception__CPerceptionInfraredFrameSource * This, __RPC__out __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameSource * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CPerception__CPerceptionInfraredFrameSourceVtbl;
interface __FIAsyncOperation_1_Windows__CDevices__CPerception__CPerceptionInfraredFrameSource
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CPerception__CPerceptionInfraredFrameSourceVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CPerception__CPerceptionColorFrameSource __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CPerception__CPerceptionColorFrameSource;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CPerception__CPerceptionColorFrameSource;
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CPerception__CPerceptionColorFrameSource __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CPerception__CPerceptionColorFrameSource;
typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CPerception__CPerceptionColorFrameSourceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CPerception__CPerceptionColorFrameSource * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CPerception__CPerceptionColorFrameSource * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CPerception__CPerceptionColorFrameSource * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CPerception__CPerceptionColorFrameSource * This, __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CPerception__CPerceptionColorFrameSource *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CPerception__CPerceptionColorFrameSourceVtbl;
interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CPerception__CPerceptionColorFrameSource
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CPerception__CPerceptionColorFrameSourceVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CPerception__CPerceptionColorFrameSource __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CPerception__CPerceptionColorFrameSource;
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CPerception__CPerceptionColorFrameSource;
typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CPerception__CPerceptionColorFrameSourceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CPerception__CPerceptionColorFrameSource * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CPerception__CPerceptionColorFrameSource * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CPerception__CPerceptionColorFrameSource * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CPerception__CPerceptionColorFrameSource * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CPerception__CPerceptionColorFrameSource * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CPerception__CPerceptionColorFrameSource * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CPerception__CPerceptionColorFrameSource * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CPerception__CPerceptionColorFrameSource *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CPerception__CPerceptionColorFrameSource * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CPerception__CPerceptionColorFrameSource **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CPerception__CPerceptionColorFrameSource * This, __RPC__out __FIVectorView_1_Windows__CDevices__CPerception__CPerceptionColorFrameSource * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CPerception__CPerceptionColorFrameSourceVtbl;
interface __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CPerception__CPerceptionColorFrameSource
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CPerception__CPerceptionColorFrameSourceVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CPerception__CPerceptionDepthFrameSource __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CPerception__CPerceptionDepthFrameSource;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CPerception__CPerceptionDepthFrameSource;
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CPerception__CPerceptionDepthFrameSource __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CPerception__CPerceptionDepthFrameSource;
typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CPerception__CPerceptionDepthFrameSourceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CPerception__CPerceptionDepthFrameSource * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CPerception__CPerceptionDepthFrameSource * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CPerception__CPerceptionDepthFrameSource * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CPerception__CPerceptionDepthFrameSource * This, __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CPerception__CPerceptionDepthFrameSource *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CPerception__CPerceptionDepthFrameSourceVtbl;
interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CPerception__CPerceptionDepthFrameSource
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CPerception__CPerceptionDepthFrameSourceVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CPerception__CPerceptionDepthFrameSource __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CPerception__CPerceptionDepthFrameSource;
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CPerception__CPerceptionDepthFrameSource;
typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CPerception__CPerceptionDepthFrameSourceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CPerception__CPerceptionDepthFrameSource * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CPerception__CPerceptionDepthFrameSource * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CPerception__CPerceptionDepthFrameSource * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CPerception__CPerceptionDepthFrameSource * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CPerception__CPerceptionDepthFrameSource * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CPerception__CPerceptionDepthFrameSource * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CPerception__CPerceptionDepthFrameSource * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CPerception__CPerceptionDepthFrameSource *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CPerception__CPerceptionDepthFrameSource * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CPerception__CPerceptionDepthFrameSource **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CPerception__CPerceptionDepthFrameSource * This, __RPC__out __FIVectorView_1_Windows__CDevices__CPerception__CPerceptionDepthFrameSource * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CPerception__CPerceptionDepthFrameSourceVtbl;
interface __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CPerception__CPerceptionDepthFrameSource
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CPerception__CPerceptionDepthFrameSourceVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CPerception__CPerceptionInfraredFrameSource __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CPerception__CPerceptionInfraredFrameSource;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CPerception__CPerceptionInfraredFrameSource;
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CPerception__CPerceptionInfraredFrameSource __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CPerception__CPerceptionInfraredFrameSource;
typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CPerception__CPerceptionInfraredFrameSourceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CPerception__CPerceptionInfraredFrameSource * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CPerception__CPerceptionInfraredFrameSource * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CPerception__CPerceptionInfraredFrameSource * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CPerception__CPerceptionInfraredFrameSource * This, __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CPerception__CPerceptionInfraredFrameSource *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CPerception__CPerceptionInfraredFrameSourceVtbl;
interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CPerception__CPerceptionInfraredFrameSource
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CPerception__CPerceptionInfraredFrameSourceVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CPerception__CPerceptionInfraredFrameSource __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CPerception__CPerceptionInfraredFrameSource;
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CPerception__CPerceptionInfraredFrameSource;
typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CPerception__CPerceptionInfraredFrameSourceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CPerception__CPerceptionInfraredFrameSource * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CPerception__CPerceptionInfraredFrameSource * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CPerception__CPerceptionInfraredFrameSource * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CPerception__CPerceptionInfraredFrameSource * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CPerception__CPerceptionInfraredFrameSource * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CPerception__CPerceptionInfraredFrameSource * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CPerception__CPerceptionInfraredFrameSource * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CPerception__CPerceptionInfraredFrameSource *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CPerception__CPerceptionInfraredFrameSource * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CPerception__CPerceptionInfraredFrameSource **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CPerception__CPerceptionInfraredFrameSource * This, __RPC__out __FIVectorView_1_Windows__CDevices__CPerception__CPerceptionInfraredFrameSource * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CPerception__CPerceptionInfraredFrameSourceVtbl;
interface __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CPerception__CPerceptionInfraredFrameSource
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CPerception__CPerceptionInfraredFrameSourceVtbl *lpVtbl;
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
typedef interface __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionColorFrameReader_Windows__CDevices__CPerception__CPerceptionColorFrameArrivedEventArgs __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionColorFrameReader_Windows__CDevices__CPerception__CPerceptionColorFrameArrivedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionColorFrameReader_Windows__CDevices__CPerception__CPerceptionColorFrameArrivedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionColorFrameReader_Windows__CDevices__CPerception__CPerceptionColorFrameArrivedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionColorFrameReader_Windows__CDevices__CPerception__CPerceptionColorFrameArrivedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionColorFrameReader_Windows__CDevices__CPerception__CPerceptionColorFrameArrivedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionColorFrameReader_Windows__CDevices__CPerception__CPerceptionColorFrameArrivedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionColorFrameReader_Windows__CDevices__CPerception__CPerceptionColorFrameArrivedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameReader * sender, __RPC__in_opt __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameArrivedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionColorFrameReader_Windows__CDevices__CPerception__CPerceptionColorFrameArrivedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionColorFrameReader_Windows__CDevices__CPerception__CPerceptionColorFrameArrivedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionColorFrameReader_Windows__CDevices__CPerception__CPerceptionColorFrameArrivedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionColorFrameSource_IInspectable __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionColorFrameSource_IInspectable;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionColorFrameSource_IInspectable;
typedef struct __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionColorFrameSource_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionColorFrameSource_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionColorFrameSource_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionColorFrameSource_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionColorFrameSource_IInspectable * This, __RPC__in_opt __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameSource * sender, __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionColorFrameSource_IInspectableVtbl;
interface __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionColorFrameSource_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionColorFrameSource_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionColorFrameSource_Windows__CDevices__CPerception__CPerceptionFrameSourcePropertiesChangedEventArgs __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionColorFrameSource_Windows__CDevices__CPerception__CPerceptionFrameSourcePropertiesChangedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionColorFrameSource_Windows__CDevices__CPerception__CPerceptionFrameSourcePropertiesChangedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionColorFrameSource_Windows__CDevices__CPerception__CPerceptionFrameSourcePropertiesChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionColorFrameSource_Windows__CDevices__CPerception__CPerceptionFrameSourcePropertiesChangedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionColorFrameSource_Windows__CDevices__CPerception__CPerceptionFrameSourcePropertiesChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionColorFrameSource_Windows__CDevices__CPerception__CPerceptionFrameSourcePropertiesChangedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionColorFrameSource_Windows__CDevices__CPerception__CPerceptionFrameSourcePropertiesChangedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameSource * sender, __RPC__in_opt __x_ABI_CWindows_CDevices_CPerception_CIPerceptionFrameSourcePropertiesChangedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionColorFrameSource_Windows__CDevices__CPerception__CPerceptionFrameSourcePropertiesChangedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionColorFrameSource_Windows__CDevices__CPerception__CPerceptionFrameSourcePropertiesChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionColorFrameSource_Windows__CDevices__CPerception__CPerceptionFrameSourcePropertiesChangedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionColorFrameSourceWatcher_IInspectable __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionColorFrameSourceWatcher_IInspectable;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionColorFrameSourceWatcher_IInspectable;
typedef struct __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionColorFrameSourceWatcher_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionColorFrameSourceWatcher_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionColorFrameSourceWatcher_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionColorFrameSourceWatcher_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionColorFrameSourceWatcher_IInspectable * This, __RPC__in_opt __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameSourceWatcher * sender, __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionColorFrameSourceWatcher_IInspectableVtbl;
interface __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionColorFrameSourceWatcher_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionColorFrameSourceWatcher_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionColorFrameSourceWatcher_Windows__CDevices__CPerception__CPerceptionColorFrameSourceAddedEventArgs __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionColorFrameSourceWatcher_Windows__CDevices__CPerception__CPerceptionColorFrameSourceAddedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionColorFrameSourceWatcher_Windows__CDevices__CPerception__CPerceptionColorFrameSourceAddedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionColorFrameSourceWatcher_Windows__CDevices__CPerception__CPerceptionColorFrameSourceAddedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionColorFrameSourceWatcher_Windows__CDevices__CPerception__CPerceptionColorFrameSourceAddedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionColorFrameSourceWatcher_Windows__CDevices__CPerception__CPerceptionColorFrameSourceAddedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionColorFrameSourceWatcher_Windows__CDevices__CPerception__CPerceptionColorFrameSourceAddedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionColorFrameSourceWatcher_Windows__CDevices__CPerception__CPerceptionColorFrameSourceAddedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameSourceWatcher * sender, __RPC__in_opt __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameSourceAddedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionColorFrameSourceWatcher_Windows__CDevices__CPerception__CPerceptionColorFrameSourceAddedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionColorFrameSourceWatcher_Windows__CDevices__CPerception__CPerceptionColorFrameSourceAddedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionColorFrameSourceWatcher_Windows__CDevices__CPerception__CPerceptionColorFrameSourceAddedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionColorFrameSourceWatcher_Windows__CDevices__CPerception__CPerceptionColorFrameSourceRemovedEventArgs __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionColorFrameSourceWatcher_Windows__CDevices__CPerception__CPerceptionColorFrameSourceRemovedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionColorFrameSourceWatcher_Windows__CDevices__CPerception__CPerceptionColorFrameSourceRemovedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionColorFrameSourceWatcher_Windows__CDevices__CPerception__CPerceptionColorFrameSourceRemovedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionColorFrameSourceWatcher_Windows__CDevices__CPerception__CPerceptionColorFrameSourceRemovedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionColorFrameSourceWatcher_Windows__CDevices__CPerception__CPerceptionColorFrameSourceRemovedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionColorFrameSourceWatcher_Windows__CDevices__CPerception__CPerceptionColorFrameSourceRemovedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionColorFrameSourceWatcher_Windows__CDevices__CPerception__CPerceptionColorFrameSourceRemovedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameSourceWatcher * sender, __RPC__in_opt __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameSourceRemovedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionColorFrameSourceWatcher_Windows__CDevices__CPerception__CPerceptionColorFrameSourceRemovedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionColorFrameSourceWatcher_Windows__CDevices__CPerception__CPerceptionColorFrameSourceRemovedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionColorFrameSourceWatcher_Windows__CDevices__CPerception__CPerceptionColorFrameSourceRemovedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionControlSession_IInspectable __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionControlSession_IInspectable;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionControlSession_IInspectable;
typedef struct __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionControlSession_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionControlSession_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionControlSession_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionControlSession_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionControlSession_IInspectable * This, __RPC__in_opt __x_ABI_CWindows_CDevices_CPerception_CIPerceptionControlSession * sender, __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionControlSession_IInspectableVtbl;
interface __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionControlSession_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionControlSession_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionDepthFrameReader_Windows__CDevices__CPerception__CPerceptionDepthFrameArrivedEventArgs __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionDepthFrameReader_Windows__CDevices__CPerception__CPerceptionDepthFrameArrivedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionDepthFrameReader_Windows__CDevices__CPerception__CPerceptionDepthFrameArrivedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionDepthFrameReader_Windows__CDevices__CPerception__CPerceptionDepthFrameArrivedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionDepthFrameReader_Windows__CDevices__CPerception__CPerceptionDepthFrameArrivedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionDepthFrameReader_Windows__CDevices__CPerception__CPerceptionDepthFrameArrivedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionDepthFrameReader_Windows__CDevices__CPerception__CPerceptionDepthFrameArrivedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionDepthFrameReader_Windows__CDevices__CPerception__CPerceptionDepthFrameArrivedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameReader * sender, __RPC__in_opt __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameArrivedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionDepthFrameReader_Windows__CDevices__CPerception__CPerceptionDepthFrameArrivedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionDepthFrameReader_Windows__CDevices__CPerception__CPerceptionDepthFrameArrivedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionDepthFrameReader_Windows__CDevices__CPerception__CPerceptionDepthFrameArrivedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionDepthFrameSource_IInspectable __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionDepthFrameSource_IInspectable;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionDepthFrameSource_IInspectable;
typedef struct __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionDepthFrameSource_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionDepthFrameSource_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionDepthFrameSource_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionDepthFrameSource_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionDepthFrameSource_IInspectable * This, __RPC__in_opt __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameSource * sender, __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionDepthFrameSource_IInspectableVtbl;
interface __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionDepthFrameSource_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionDepthFrameSource_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionDepthFrameSource_Windows__CDevices__CPerception__CPerceptionFrameSourcePropertiesChangedEventArgs __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionDepthFrameSource_Windows__CDevices__CPerception__CPerceptionFrameSourcePropertiesChangedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionDepthFrameSource_Windows__CDevices__CPerception__CPerceptionFrameSourcePropertiesChangedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionDepthFrameSource_Windows__CDevices__CPerception__CPerceptionFrameSourcePropertiesChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionDepthFrameSource_Windows__CDevices__CPerception__CPerceptionFrameSourcePropertiesChangedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionDepthFrameSource_Windows__CDevices__CPerception__CPerceptionFrameSourcePropertiesChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionDepthFrameSource_Windows__CDevices__CPerception__CPerceptionFrameSourcePropertiesChangedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionDepthFrameSource_Windows__CDevices__CPerception__CPerceptionFrameSourcePropertiesChangedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameSource * sender, __RPC__in_opt __x_ABI_CWindows_CDevices_CPerception_CIPerceptionFrameSourcePropertiesChangedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionDepthFrameSource_Windows__CDevices__CPerception__CPerceptionFrameSourcePropertiesChangedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionDepthFrameSource_Windows__CDevices__CPerception__CPerceptionFrameSourcePropertiesChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionDepthFrameSource_Windows__CDevices__CPerception__CPerceptionFrameSourcePropertiesChangedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionDepthFrameSourceWatcher_IInspectable __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionDepthFrameSourceWatcher_IInspectable;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionDepthFrameSourceWatcher_IInspectable;
typedef struct __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionDepthFrameSourceWatcher_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionDepthFrameSourceWatcher_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionDepthFrameSourceWatcher_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionDepthFrameSourceWatcher_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionDepthFrameSourceWatcher_IInspectable * This, __RPC__in_opt __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameSourceWatcher * sender, __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionDepthFrameSourceWatcher_IInspectableVtbl;
interface __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionDepthFrameSourceWatcher_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionDepthFrameSourceWatcher_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionDepthFrameSourceWatcher_Windows__CDevices__CPerception__CPerceptionDepthFrameSourceAddedEventArgs __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionDepthFrameSourceWatcher_Windows__CDevices__CPerception__CPerceptionDepthFrameSourceAddedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionDepthFrameSourceWatcher_Windows__CDevices__CPerception__CPerceptionDepthFrameSourceAddedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionDepthFrameSourceWatcher_Windows__CDevices__CPerception__CPerceptionDepthFrameSourceAddedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionDepthFrameSourceWatcher_Windows__CDevices__CPerception__CPerceptionDepthFrameSourceAddedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionDepthFrameSourceWatcher_Windows__CDevices__CPerception__CPerceptionDepthFrameSourceAddedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionDepthFrameSourceWatcher_Windows__CDevices__CPerception__CPerceptionDepthFrameSourceAddedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionDepthFrameSourceWatcher_Windows__CDevices__CPerception__CPerceptionDepthFrameSourceAddedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameSourceWatcher * sender, __RPC__in_opt __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameSourceAddedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionDepthFrameSourceWatcher_Windows__CDevices__CPerception__CPerceptionDepthFrameSourceAddedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionDepthFrameSourceWatcher_Windows__CDevices__CPerception__CPerceptionDepthFrameSourceAddedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionDepthFrameSourceWatcher_Windows__CDevices__CPerception__CPerceptionDepthFrameSourceAddedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionDepthFrameSourceWatcher_Windows__CDevices__CPerception__CPerceptionDepthFrameSourceRemovedEventArgs __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionDepthFrameSourceWatcher_Windows__CDevices__CPerception__CPerceptionDepthFrameSourceRemovedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionDepthFrameSourceWatcher_Windows__CDevices__CPerception__CPerceptionDepthFrameSourceRemovedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionDepthFrameSourceWatcher_Windows__CDevices__CPerception__CPerceptionDepthFrameSourceRemovedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionDepthFrameSourceWatcher_Windows__CDevices__CPerception__CPerceptionDepthFrameSourceRemovedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionDepthFrameSourceWatcher_Windows__CDevices__CPerception__CPerceptionDepthFrameSourceRemovedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionDepthFrameSourceWatcher_Windows__CDevices__CPerception__CPerceptionDepthFrameSourceRemovedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionDepthFrameSourceWatcher_Windows__CDevices__CPerception__CPerceptionDepthFrameSourceRemovedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameSourceWatcher * sender, __RPC__in_opt __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameSourceRemovedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionDepthFrameSourceWatcher_Windows__CDevices__CPerception__CPerceptionDepthFrameSourceRemovedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionDepthFrameSourceWatcher_Windows__CDevices__CPerception__CPerceptionDepthFrameSourceRemovedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionDepthFrameSourceWatcher_Windows__CDevices__CPerception__CPerceptionDepthFrameSourceRemovedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionInfraredFrameReader_Windows__CDevices__CPerception__CPerceptionInfraredFrameArrivedEventArgs __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionInfraredFrameReader_Windows__CDevices__CPerception__CPerceptionInfraredFrameArrivedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionInfraredFrameReader_Windows__CDevices__CPerception__CPerceptionInfraredFrameArrivedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionInfraredFrameReader_Windows__CDevices__CPerception__CPerceptionInfraredFrameArrivedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionInfraredFrameReader_Windows__CDevices__CPerception__CPerceptionInfraredFrameArrivedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionInfraredFrameReader_Windows__CDevices__CPerception__CPerceptionInfraredFrameArrivedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionInfraredFrameReader_Windows__CDevices__CPerception__CPerceptionInfraredFrameArrivedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionInfraredFrameReader_Windows__CDevices__CPerception__CPerceptionInfraredFrameArrivedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameReader * sender, __RPC__in_opt __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameArrivedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionInfraredFrameReader_Windows__CDevices__CPerception__CPerceptionInfraredFrameArrivedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionInfraredFrameReader_Windows__CDevices__CPerception__CPerceptionInfraredFrameArrivedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionInfraredFrameReader_Windows__CDevices__CPerception__CPerceptionInfraredFrameArrivedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionInfraredFrameSource_IInspectable __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionInfraredFrameSource_IInspectable;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionInfraredFrameSource_IInspectable;
typedef struct __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionInfraredFrameSource_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionInfraredFrameSource_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionInfraredFrameSource_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionInfraredFrameSource_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionInfraredFrameSource_IInspectable * This, __RPC__in_opt __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameSource * sender, __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionInfraredFrameSource_IInspectableVtbl;
interface __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionInfraredFrameSource_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionInfraredFrameSource_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionInfraredFrameSource_Windows__CDevices__CPerception__CPerceptionFrameSourcePropertiesChangedEventArgs __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionInfraredFrameSource_Windows__CDevices__CPerception__CPerceptionFrameSourcePropertiesChangedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionInfraredFrameSource_Windows__CDevices__CPerception__CPerceptionFrameSourcePropertiesChangedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionInfraredFrameSource_Windows__CDevices__CPerception__CPerceptionFrameSourcePropertiesChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionInfraredFrameSource_Windows__CDevices__CPerception__CPerceptionFrameSourcePropertiesChangedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionInfraredFrameSource_Windows__CDevices__CPerception__CPerceptionFrameSourcePropertiesChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionInfraredFrameSource_Windows__CDevices__CPerception__CPerceptionFrameSourcePropertiesChangedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionInfraredFrameSource_Windows__CDevices__CPerception__CPerceptionFrameSourcePropertiesChangedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameSource * sender, __RPC__in_opt __x_ABI_CWindows_CDevices_CPerception_CIPerceptionFrameSourcePropertiesChangedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionInfraredFrameSource_Windows__CDevices__CPerception__CPerceptionFrameSourcePropertiesChangedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionInfraredFrameSource_Windows__CDevices__CPerception__CPerceptionFrameSourcePropertiesChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionInfraredFrameSource_Windows__CDevices__CPerception__CPerceptionFrameSourcePropertiesChangedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionInfraredFrameSourceWatcher_IInspectable __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionInfraredFrameSourceWatcher_IInspectable;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionInfraredFrameSourceWatcher_IInspectable;
typedef struct __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionInfraredFrameSourceWatcher_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionInfraredFrameSourceWatcher_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionInfraredFrameSourceWatcher_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionInfraredFrameSourceWatcher_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionInfraredFrameSourceWatcher_IInspectable * This, __RPC__in_opt __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameSourceWatcher * sender, __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionInfraredFrameSourceWatcher_IInspectableVtbl;
interface __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionInfraredFrameSourceWatcher_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionInfraredFrameSourceWatcher_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionInfraredFrameSourceWatcher_Windows__CDevices__CPerception__CPerceptionInfraredFrameSourceAddedEventArgs __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionInfraredFrameSourceWatcher_Windows__CDevices__CPerception__CPerceptionInfraredFrameSourceAddedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionInfraredFrameSourceWatcher_Windows__CDevices__CPerception__CPerceptionInfraredFrameSourceAddedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionInfraredFrameSourceWatcher_Windows__CDevices__CPerception__CPerceptionInfraredFrameSourceAddedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionInfraredFrameSourceWatcher_Windows__CDevices__CPerception__CPerceptionInfraredFrameSourceAddedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionInfraredFrameSourceWatcher_Windows__CDevices__CPerception__CPerceptionInfraredFrameSourceAddedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionInfraredFrameSourceWatcher_Windows__CDevices__CPerception__CPerceptionInfraredFrameSourceAddedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionInfraredFrameSourceWatcher_Windows__CDevices__CPerception__CPerceptionInfraredFrameSourceAddedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameSourceWatcher * sender, __RPC__in_opt __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameSourceAddedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionInfraredFrameSourceWatcher_Windows__CDevices__CPerception__CPerceptionInfraredFrameSourceAddedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionInfraredFrameSourceWatcher_Windows__CDevices__CPerception__CPerceptionInfraredFrameSourceAddedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionInfraredFrameSourceWatcher_Windows__CDevices__CPerception__CPerceptionInfraredFrameSourceAddedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionInfraredFrameSourceWatcher_Windows__CDevices__CPerception__CPerceptionInfraredFrameSourceRemovedEventArgs __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionInfraredFrameSourceWatcher_Windows__CDevices__CPerception__CPerceptionInfraredFrameSourceRemovedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionInfraredFrameSourceWatcher_Windows__CDevices__CPerception__CPerceptionInfraredFrameSourceRemovedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionInfraredFrameSourceWatcher_Windows__CDevices__CPerception__CPerceptionInfraredFrameSourceRemovedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionInfraredFrameSourceWatcher_Windows__CDevices__CPerception__CPerceptionInfraredFrameSourceRemovedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionInfraredFrameSourceWatcher_Windows__CDevices__CPerception__CPerceptionInfraredFrameSourceRemovedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionInfraredFrameSourceWatcher_Windows__CDevices__CPerception__CPerceptionInfraredFrameSourceRemovedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionInfraredFrameSourceWatcher_Windows__CDevices__CPerception__CPerceptionInfraredFrameSourceRemovedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameSourceWatcher * sender, __RPC__in_opt __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameSourceRemovedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionInfraredFrameSourceWatcher_Windows__CDevices__CPerception__CPerceptionInfraredFrameSourceRemovedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionInfraredFrameSourceWatcher_Windows__CDevices__CPerception__CPerceptionInfraredFrameSourceRemovedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionInfraredFrameSourceWatcher_Windows__CDevices__CPerception__CPerceptionInfraredFrameSourceRemovedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FIKeyValuePair_2_HSTRING_IInspectable __FIKeyValuePair_2_HSTRING_IInspectable;
EXTERN_C const IID IID___FIKeyValuePair_2_HSTRING_IInspectable;
typedef struct __FIKeyValuePair_2_HSTRING_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This,
                        __RPC__out ULONG *iidCount,
                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Key )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This, __RPC__out HSTRING *key);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This, __RPC__deref_out_opt IInspectable * *value);
    END_INTERFACE
} __FIKeyValuePair_2_HSTRING_IInspectableVtbl;
interface __FIKeyValuePair_2_HSTRING_IInspectable
{
    CONST_VTBL struct __FIKeyValuePair_2_HSTRING_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Key(This,key) )
    ( (This)->lpVtbl -> get_Value(This,value) )
typedef interface __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable;
EXTERN_C const IID IID___FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable;
typedef struct __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This, __RPC__out __FIKeyValuePair_2_HSTRING_IInspectable * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __FIKeyValuePair_2_HSTRING_IInspectable * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectableVtbl;
interface __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable
{
    CONST_VTBL struct __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectableVtbl *lpVtbl;
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
typedef interface __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable;
EXTERN_C const IID IID___FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable;
typedef struct __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable * This, __RPC__deref_out_opt __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable **first);
    END_INTERFACE
} __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectableVtbl;
interface __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable
{
    CONST_VTBL struct __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIMapView_2_HSTRING_IInspectable __FIMapView_2_HSTRING_IInspectable;
EXTERN_C const IID IID___FIMapView_2_HSTRING_IInspectable;
typedef struct __FIMapView_2_HSTRING_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This,
                   __RPC__in HSTRING key,
                            __RPC__deref_out_opt IInspectable * *value);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This, __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This, __RPC__in HSTRING key, __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *Split )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This, __RPC__deref_out_opt __FIMapView_2_HSTRING_IInspectable **firstPartition,
                    __RPC__deref_out_opt __FIMapView_2_HSTRING_IInspectable **secondPartition);
    END_INTERFACE
} __FIMapView_2_HSTRING_IInspectableVtbl;
interface __FIMapView_2_HSTRING_IInspectable
{
    CONST_VTBL struct __FIMapView_2_HSTRING_IInspectableVtbl *lpVtbl;
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
typedef enum __x_ABI_CWindows_CDevices_CEnumeration_CDeviceWatcherStatus __x_ABI_CWindows_CDevices_CEnumeration_CDeviceWatcherStatus;
typedef enum __x_ABI_CWindows_CFoundation_CCollections_CCollectionChange __x_ABI_CWindows_CFoundation_CCollections_CCollectionChange;
typedef interface __x_ABI_CWindows_CFoundation_CIAsyncAction __x_ABI_CWindows_CFoundation_CIAsyncAction;
typedef interface __x_ABI_CWindows_CFoundation_CIClosable __x_ABI_CWindows_CFoundation_CIClosable;
typedef struct __x_ABI_CWindows_CFoundation_CNumerics_CMatrix4x4 __x_ABI_CWindows_CFoundation_CNumerics_CMatrix4x4;
typedef struct __x_ABI_CWindows_CFoundation_CNumerics_CVector3 __x_ABI_CWindows_CFoundation_CNumerics_CVector3;
typedef struct __x_ABI_CWindows_CFoundation_CPoint __x_ABI_CWindows_CFoundation_CPoint;
typedef struct __x_ABI_CWindows_CFoundation_CRect __x_ABI_CWindows_CFoundation_CRect;
typedef struct __x_ABI_CWindows_CFoundation_CTimeSpan __x_ABI_CWindows_CFoundation_CTimeSpan;
typedef enum __x_ABI_CWindows_CGraphics_CImaging_CBitmapAlphaMode __x_ABI_CWindows_CGraphics_CImaging_CBitmapAlphaMode;
typedef enum __x_ABI_CWindows_CGraphics_CImaging_CBitmapPixelFormat __x_ABI_CWindows_CGraphics_CImaging_CBitmapPixelFormat;
typedef interface __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics;
typedef interface __x_ABI_CWindows_CMedia_CIVideoFrame __x_ABI_CWindows_CMedia_CIVideoFrame;
typedef enum __x_ABI_CWindows_CDevices_CPerception_CPerceptionFrameSourceAccessStatus __x_ABI_CWindows_CDevices_CPerception_CPerceptionFrameSourceAccessStatus;
typedef enum __x_ABI_CWindows_CDevices_CPerception_CPerceptionFrameSourcePropertyChangeStatus __x_ABI_CWindows_CDevices_CPerception_CPerceptionFrameSourcePropertyChangeStatus;
enum
DEPRECATED("PerceptionFrameSourceAccessStatus may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")
__x_ABI_CWindows_CDevices_CPerception_CPerceptionFrameSourceAccessStatus
{
    PerceptionFrameSourceAccessStatus_Unspecified = 0,
    PerceptionFrameSourceAccessStatus_Allowed = 1,
    PerceptionFrameSourceAccessStatus_DeniedByUser = 2,
    PerceptionFrameSourceAccessStatus_DeniedBySystem = 3,
};
enum
DEPRECATED("PerceptionFrameSourcePropertyChangeStatus may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")
__x_ABI_CWindows_CDevices_CPerception_CPerceptionFrameSourcePropertyChangeStatus
{
    PerceptionFrameSourcePropertyChangeStatus_Unknown = 0,
    PerceptionFrameSourcePropertyChangeStatus_Accepted = 1,
    PerceptionFrameSourcePropertyChangeStatus_LostControl = 2,
    PerceptionFrameSourcePropertyChangeStatus_PropertyNotSupported = 3,
    PerceptionFrameSourcePropertyChangeStatus_PropertyReadOnly = 4,
    PerceptionFrameSourcePropertyChangeStatus_ValueOutOfRange = 5,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Perception_IKnownCameraIntrinsicsPropertiesStatics[] = L"Windows.Devices.Perception.IKnownCameraIntrinsicsPropertiesStatics";
typedef struct
DEPRECATED("KnownCameraIntrinsicsProperties may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")
__x_ABI_CWindows_CDevices_CPerception_CIKnownCameraIntrinsicsPropertiesStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIKnownCameraIntrinsicsPropertiesStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIKnownCameraIntrinsicsPropertiesStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIKnownCameraIntrinsicsPropertiesStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIKnownCameraIntrinsicsPropertiesStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIKnownCameraIntrinsicsPropertiesStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIKnownCameraIntrinsicsPropertiesStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("KnownCameraIntrinsicsProperties may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_FocalLength )(
        __x_ABI_CWindows_CDevices_CPerception_CIKnownCameraIntrinsicsPropertiesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    DEPRECATED("KnownCameraIntrinsicsProperties may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_PrincipalPoint )(
        __x_ABI_CWindows_CDevices_CPerception_CIKnownCameraIntrinsicsPropertiesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    DEPRECATED("KnownCameraIntrinsicsProperties may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_RadialDistortion )(
        __x_ABI_CWindows_CDevices_CPerception_CIKnownCameraIntrinsicsPropertiesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    DEPRECATED("KnownCameraIntrinsicsProperties may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_TangentialDistortion )(
        __x_ABI_CWindows_CDevices_CPerception_CIKnownCameraIntrinsicsPropertiesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPerception_CIKnownCameraIntrinsicsPropertiesStaticsVtbl;
interface __x_ABI_CWindows_CDevices_CPerception_CIKnownCameraIntrinsicsPropertiesStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPerception_CIKnownCameraIntrinsicsPropertiesStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("KnownCameraIntrinsicsProperties may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")
    ( (This)->lpVtbl->get_FocalLength(This,value) )
DEPRECATED("KnownCameraIntrinsicsProperties may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")
    ( (This)->lpVtbl->get_PrincipalPoint(This,value) )
DEPRECATED("KnownCameraIntrinsicsProperties may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")
    ( (This)->lpVtbl->get_RadialDistortion(This,value) )
DEPRECATED("KnownCameraIntrinsicsProperties may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")
    ( (This)->lpVtbl->get_TangentialDistortion(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPerception_CIKnownCameraIntrinsicsPropertiesStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Perception_IKnownPerceptionColorFrameSourcePropertiesStatics[] = L"Windows.Devices.Perception.IKnownPerceptionColorFrameSourcePropertiesStatics";
typedef struct
DEPRECATED("KnownPerceptionColorFrameSourceProperties may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")
__x_ABI_CWindows_CDevices_CPerception_CIKnownPerceptionColorFrameSourcePropertiesStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIKnownPerceptionColorFrameSourcePropertiesStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIKnownPerceptionColorFrameSourcePropertiesStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIKnownPerceptionColorFrameSourcePropertiesStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIKnownPerceptionColorFrameSourcePropertiesStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIKnownPerceptionColorFrameSourcePropertiesStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIKnownPerceptionColorFrameSourcePropertiesStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("KnownPerceptionColorFrameSourceProperties may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_Exposure )(
        __x_ABI_CWindows_CDevices_CPerception_CIKnownPerceptionColorFrameSourcePropertiesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    DEPRECATED("KnownPerceptionColorFrameSourceProperties may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_AutoExposureEnabled )(
        __x_ABI_CWindows_CDevices_CPerception_CIKnownPerceptionColorFrameSourcePropertiesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    DEPRECATED("KnownPerceptionColorFrameSourceProperties may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_ExposureCompensation )(
        __x_ABI_CWindows_CDevices_CPerception_CIKnownPerceptionColorFrameSourcePropertiesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPerception_CIKnownPerceptionColorFrameSourcePropertiesStaticsVtbl;
interface __x_ABI_CWindows_CDevices_CPerception_CIKnownPerceptionColorFrameSourcePropertiesStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPerception_CIKnownPerceptionColorFrameSourcePropertiesStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("KnownPerceptionColorFrameSourceProperties may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")
    ( (This)->lpVtbl->get_Exposure(This,value) )
DEPRECATED("KnownPerceptionColorFrameSourceProperties may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")
    ( (This)->lpVtbl->get_AutoExposureEnabled(This,value) )
DEPRECATED("KnownPerceptionColorFrameSourceProperties may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")
    ( (This)->lpVtbl->get_ExposureCompensation(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPerception_CIKnownPerceptionColorFrameSourcePropertiesStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Perception_IKnownPerceptionDepthFrameSourcePropertiesStatics[] = L"Windows.Devices.Perception.IKnownPerceptionDepthFrameSourcePropertiesStatics";
typedef struct
DEPRECATED("KnownPerceptionDepthFrameSourceProperties may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.DepthMediaFrame instead.")
__x_ABI_CWindows_CDevices_CPerception_CIKnownPerceptionDepthFrameSourcePropertiesStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIKnownPerceptionDepthFrameSourcePropertiesStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIKnownPerceptionDepthFrameSourcePropertiesStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIKnownPerceptionDepthFrameSourcePropertiesStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIKnownPerceptionDepthFrameSourcePropertiesStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIKnownPerceptionDepthFrameSourcePropertiesStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIKnownPerceptionDepthFrameSourcePropertiesStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("KnownPerceptionDepthFrameSourceProperties may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.DepthMediaFrame instead.")
                               HRESULT ( STDMETHODCALLTYPE *get_MinDepth )(
        __x_ABI_CWindows_CDevices_CPerception_CIKnownPerceptionDepthFrameSourcePropertiesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    DEPRECATED("KnownPerceptionDepthFrameSourceProperties may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.DepthMediaFrame instead.")
                               HRESULT ( STDMETHODCALLTYPE *get_MaxDepth )(
        __x_ABI_CWindows_CDevices_CPerception_CIKnownPerceptionDepthFrameSourcePropertiesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPerception_CIKnownPerceptionDepthFrameSourcePropertiesStaticsVtbl;
interface __x_ABI_CWindows_CDevices_CPerception_CIKnownPerceptionDepthFrameSourcePropertiesStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPerception_CIKnownPerceptionDepthFrameSourcePropertiesStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("KnownPerceptionDepthFrameSourceProperties may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.DepthMediaFrame instead.")
    ( (This)->lpVtbl->get_MinDepth(This,value) )
DEPRECATED("KnownPerceptionDepthFrameSourceProperties may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.DepthMediaFrame instead.")
    ( (This)->lpVtbl->get_MaxDepth(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPerception_CIKnownPerceptionDepthFrameSourcePropertiesStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Perception_IKnownPerceptionFrameSourcePropertiesStatics[] = L"Windows.Devices.Perception.IKnownPerceptionFrameSourcePropertiesStatics";
typedef struct
DEPRECATED("KnownPerceptionFrameSourceProperties may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceInformation instead.")
__x_ABI_CWindows_CDevices_CPerception_CIKnownPerceptionFrameSourcePropertiesStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIKnownPerceptionFrameSourcePropertiesStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIKnownPerceptionFrameSourcePropertiesStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIKnownPerceptionFrameSourcePropertiesStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIKnownPerceptionFrameSourcePropertiesStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIKnownPerceptionFrameSourcePropertiesStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIKnownPerceptionFrameSourcePropertiesStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("KnownPerceptionFrameSourceProperties may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceInformation instead.")
                               HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CDevices_CPerception_CIKnownPerceptionFrameSourcePropertiesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    DEPRECATED("KnownPerceptionFrameSourceProperties may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceInformation instead.")
                               HRESULT ( STDMETHODCALLTYPE *get_PhysicalDeviceIds )(
        __x_ABI_CWindows_CDevices_CPerception_CIKnownPerceptionFrameSourcePropertiesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    DEPRECATED("KnownPerceptionFrameSourceProperties may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceInformation instead.")
                               HRESULT ( STDMETHODCALLTYPE *get_FrameKind )(
        __x_ABI_CWindows_CDevices_CPerception_CIKnownPerceptionFrameSourcePropertiesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    DEPRECATED("KnownPerceptionFrameSourceProperties may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceInformation instead.")
                               HRESULT ( STDMETHODCALLTYPE *get_DeviceModelVersion )(
        __x_ABI_CWindows_CDevices_CPerception_CIKnownPerceptionFrameSourcePropertiesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    DEPRECATED("KnownPerceptionFrameSourceProperties may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceInformation instead.")
                               HRESULT ( STDMETHODCALLTYPE *get_EnclosureLocation )(
        __x_ABI_CWindows_CDevices_CPerception_CIKnownPerceptionFrameSourcePropertiesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPerception_CIKnownPerceptionFrameSourcePropertiesStaticsVtbl;
interface __x_ABI_CWindows_CDevices_CPerception_CIKnownPerceptionFrameSourcePropertiesStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPerception_CIKnownPerceptionFrameSourcePropertiesStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("KnownPerceptionFrameSourceProperties may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceInformation instead.")
    ( (This)->lpVtbl->get_Id(This,value) )
DEPRECATED("KnownPerceptionFrameSourceProperties may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceInformation instead.")
    ( (This)->lpVtbl->get_PhysicalDeviceIds(This,value) )
DEPRECATED("KnownPerceptionFrameSourceProperties may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceInformation instead.")
    ( (This)->lpVtbl->get_FrameKind(This,value) )
DEPRECATED("KnownPerceptionFrameSourceProperties may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceInformation instead.")
    ( (This)->lpVtbl->get_DeviceModelVersion(This,value) )
DEPRECATED("KnownPerceptionFrameSourceProperties may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceInformation instead.")
    ( (This)->lpVtbl->get_EnclosureLocation(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPerception_CIKnownPerceptionFrameSourcePropertiesStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Perception_IKnownPerceptionFrameSourcePropertiesStatics2[] = L"Windows.Devices.Perception.IKnownPerceptionFrameSourcePropertiesStatics2";
typedef struct
DEPRECATED("KnownPerceptionFrameSourceProperties may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")
__x_ABI_CWindows_CDevices_CPerception_CIKnownPerceptionFrameSourcePropertiesStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIKnownPerceptionFrameSourcePropertiesStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIKnownPerceptionFrameSourcePropertiesStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIKnownPerceptionFrameSourcePropertiesStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIKnownPerceptionFrameSourcePropertiesStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIKnownPerceptionFrameSourcePropertiesStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIKnownPerceptionFrameSourcePropertiesStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("KnownPerceptionFrameSourceProperties may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_DeviceId )(
        __x_ABI_CWindows_CDevices_CPerception_CIKnownPerceptionFrameSourcePropertiesStatics2 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPerception_CIKnownPerceptionFrameSourcePropertiesStatics2Vtbl;
interface __x_ABI_CWindows_CDevices_CPerception_CIKnownPerceptionFrameSourcePropertiesStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPerception_CIKnownPerceptionFrameSourcePropertiesStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("KnownPerceptionFrameSourceProperties may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")
    ( (This)->lpVtbl->get_DeviceId(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPerception_CIKnownPerceptionFrameSourcePropertiesStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Perception_IKnownPerceptionInfraredFrameSourcePropertiesStatics[] = L"Windows.Devices.Perception.IKnownPerceptionInfraredFrameSourcePropertiesStatics";
typedef struct
DEPRECATED("KnownPerceptionInfraredFrameSourceProperties may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")
__x_ABI_CWindows_CDevices_CPerception_CIKnownPerceptionInfraredFrameSourcePropertiesStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIKnownPerceptionInfraredFrameSourcePropertiesStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIKnownPerceptionInfraredFrameSourcePropertiesStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIKnownPerceptionInfraredFrameSourcePropertiesStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIKnownPerceptionInfraredFrameSourcePropertiesStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIKnownPerceptionInfraredFrameSourcePropertiesStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIKnownPerceptionInfraredFrameSourcePropertiesStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("KnownPerceptionInfraredFrameSourceProperties.Exposure may be unavailable after Windows Creator Update.  Use Windows.Media.Devices.ExposureControl instead.")
                               HRESULT ( STDMETHODCALLTYPE *get_Exposure )(
        __x_ABI_CWindows_CDevices_CPerception_CIKnownPerceptionInfraredFrameSourcePropertiesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    DEPRECATED("KnownPerceptionInfraredFrameSourceProperties.AutoExposureEnabled may be unavailable after Windows Creator Update.  Use Windows.Media.Devices.ExposureControl.Auto instead.")
                               HRESULT ( STDMETHODCALLTYPE *get_AutoExposureEnabled )(
        __x_ABI_CWindows_CDevices_CPerception_CIKnownPerceptionInfraredFrameSourcePropertiesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    DEPRECATED("KnownPerceptionInfraredFrameSourceProperties.ExposureCompensation may be unavailable after Windows Creator Update.  Use Windows.Media.Devices.ExposureCompensationControl instead.")
                               HRESULT ( STDMETHODCALLTYPE *get_ExposureCompensation )(
        __x_ABI_CWindows_CDevices_CPerception_CIKnownPerceptionInfraredFrameSourcePropertiesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    DEPRECATED("KnownPerceptionInfraredFrameSourceProperties.ActiveIlluminationEnabled may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_ActiveIlluminationEnabled )(
        __x_ABI_CWindows_CDevices_CPerception_CIKnownPerceptionInfraredFrameSourcePropertiesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    DEPRECATED("KnownPerceptionInfraredFrameSourceProperties.AmbientSubtractionEnabled may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_AmbientSubtractionEnabled )(
        __x_ABI_CWindows_CDevices_CPerception_CIKnownPerceptionInfraredFrameSourcePropertiesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    DEPRECATED("KnownPerceptionInfraredFrameSourceProperties.StructureLightPatternEnabled may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_StructureLightPatternEnabled )(
        __x_ABI_CWindows_CDevices_CPerception_CIKnownPerceptionInfraredFrameSourcePropertiesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    DEPRECATED("KnownPerceptionInfraredFrameSourceProperties.InterleavedIlluminationEnabled may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_InterleavedIlluminationEnabled )(
        __x_ABI_CWindows_CDevices_CPerception_CIKnownPerceptionInfraredFrameSourcePropertiesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPerception_CIKnownPerceptionInfraredFrameSourcePropertiesStaticsVtbl;
interface __x_ABI_CWindows_CDevices_CPerception_CIKnownPerceptionInfraredFrameSourcePropertiesStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPerception_CIKnownPerceptionInfraredFrameSourcePropertiesStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("KnownPerceptionInfraredFrameSourceProperties.Exposure may be unavailable after Windows Creator Update.  Use Windows.Media.Devices.ExposureControl instead.")
    ( (This)->lpVtbl->get_Exposure(This,value) )
DEPRECATED("KnownPerceptionInfraredFrameSourceProperties.AutoExposureEnabled may be unavailable after Windows Creator Update.  Use Windows.Media.Devices.ExposureControl.Auto instead.")
    ( (This)->lpVtbl->get_AutoExposureEnabled(This,value) )
DEPRECATED("KnownPerceptionInfraredFrameSourceProperties.ExposureCompensation may be unavailable after Windows Creator Update.  Use Windows.Media.Devices.ExposureCompensationControl instead.")
    ( (This)->lpVtbl->get_ExposureCompensation(This,value) )
DEPRECATED("KnownPerceptionInfraredFrameSourceProperties.ActiveIlluminationEnabled may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")
    ( (This)->lpVtbl->get_ActiveIlluminationEnabled(This,value) )
DEPRECATED("KnownPerceptionInfraredFrameSourceProperties.AmbientSubtractionEnabled may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")
    ( (This)->lpVtbl->get_AmbientSubtractionEnabled(This,value) )
DEPRECATED("KnownPerceptionInfraredFrameSourceProperties.StructureLightPatternEnabled may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")
    ( (This)->lpVtbl->get_StructureLightPatternEnabled(This,value) )
DEPRECATED("KnownPerceptionInfraredFrameSourceProperties.InterleavedIlluminationEnabled may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")
    ( (This)->lpVtbl->get_InterleavedIlluminationEnabled(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPerception_CIKnownPerceptionInfraredFrameSourcePropertiesStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Perception_IKnownPerceptionVideoFrameSourcePropertiesStatics[] = L"Windows.Devices.Perception.IKnownPerceptionVideoFrameSourcePropertiesStatics";
typedef struct
DEPRECATED("KnownPerceptionVideoFrameSourceProperties may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")
__x_ABI_CWindows_CDevices_CPerception_CIKnownPerceptionVideoFrameSourcePropertiesStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIKnownPerceptionVideoFrameSourcePropertiesStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIKnownPerceptionVideoFrameSourcePropertiesStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIKnownPerceptionVideoFrameSourcePropertiesStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIKnownPerceptionVideoFrameSourcePropertiesStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIKnownPerceptionVideoFrameSourcePropertiesStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIKnownPerceptionVideoFrameSourcePropertiesStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("KnownPerceptionVideoFrameSourceProperties may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_VideoProfile )(
        __x_ABI_CWindows_CDevices_CPerception_CIKnownPerceptionVideoFrameSourcePropertiesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    DEPRECATED("KnownPerceptionVideoFrameSourceProperties may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_SupportedVideoProfiles )(
        __x_ABI_CWindows_CDevices_CPerception_CIKnownPerceptionVideoFrameSourcePropertiesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    DEPRECATED("KnownPerceptionVideoFrameSourceProperties may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_AvailableVideoProfiles )(
        __x_ABI_CWindows_CDevices_CPerception_CIKnownPerceptionVideoFrameSourcePropertiesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    DEPRECATED("KnownPerceptionVideoFrameSourceProperties may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_IsMirrored )(
        __x_ABI_CWindows_CDevices_CPerception_CIKnownPerceptionVideoFrameSourcePropertiesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    DEPRECATED("KnownPerceptionVideoFrameSourceProperties may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_CameraIntrinsics )(
        __x_ABI_CWindows_CDevices_CPerception_CIKnownPerceptionVideoFrameSourcePropertiesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPerception_CIKnownPerceptionVideoFrameSourcePropertiesStaticsVtbl;
interface __x_ABI_CWindows_CDevices_CPerception_CIKnownPerceptionVideoFrameSourcePropertiesStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPerception_CIKnownPerceptionVideoFrameSourcePropertiesStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("KnownPerceptionVideoFrameSourceProperties may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")
    ( (This)->lpVtbl->get_VideoProfile(This,value) )
DEPRECATED("KnownPerceptionVideoFrameSourceProperties may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")
    ( (This)->lpVtbl->get_SupportedVideoProfiles(This,value) )
DEPRECATED("KnownPerceptionVideoFrameSourceProperties may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")
    ( (This)->lpVtbl->get_AvailableVideoProfiles(This,value) )
DEPRECATED("KnownPerceptionVideoFrameSourceProperties may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")
    ( (This)->lpVtbl->get_IsMirrored(This,value) )
DEPRECATED("KnownPerceptionVideoFrameSourceProperties may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")
    ( (This)->lpVtbl->get_CameraIntrinsics(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPerception_CIKnownPerceptionVideoFrameSourcePropertiesStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Perception_IKnownPerceptionVideoProfilePropertiesStatics[] = L"Windows.Devices.Perception.IKnownPerceptionVideoProfilePropertiesStatics";
typedef struct
DEPRECATED("KnownPerceptionVideoProfileProperties may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")
__x_ABI_CWindows_CDevices_CPerception_CIKnownPerceptionVideoProfilePropertiesStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIKnownPerceptionVideoProfilePropertiesStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIKnownPerceptionVideoProfilePropertiesStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIKnownPerceptionVideoProfilePropertiesStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIKnownPerceptionVideoProfilePropertiesStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIKnownPerceptionVideoProfilePropertiesStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIKnownPerceptionVideoProfilePropertiesStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("KnownPerceptionVideoProfileProperties may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_BitmapPixelFormat )(
        __x_ABI_CWindows_CDevices_CPerception_CIKnownPerceptionVideoProfilePropertiesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    DEPRECATED("KnownPerceptionVideoProfileProperties may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_BitmapAlphaMode )(
        __x_ABI_CWindows_CDevices_CPerception_CIKnownPerceptionVideoProfilePropertiesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    DEPRECATED("KnownPerceptionVideoProfileProperties may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_Width )(
        __x_ABI_CWindows_CDevices_CPerception_CIKnownPerceptionVideoProfilePropertiesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    DEPRECATED("KnownPerceptionVideoProfileProperties may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_Height )(
        __x_ABI_CWindows_CDevices_CPerception_CIKnownPerceptionVideoProfilePropertiesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    DEPRECATED("KnownPerceptionVideoProfileProperties may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_FrameDuration )(
        __x_ABI_CWindows_CDevices_CPerception_CIKnownPerceptionVideoProfilePropertiesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPerception_CIKnownPerceptionVideoProfilePropertiesStaticsVtbl;
interface __x_ABI_CWindows_CDevices_CPerception_CIKnownPerceptionVideoProfilePropertiesStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPerception_CIKnownPerceptionVideoProfilePropertiesStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("KnownPerceptionVideoProfileProperties may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")
    ( (This)->lpVtbl->get_BitmapPixelFormat(This,value) )
DEPRECATED("KnownPerceptionVideoProfileProperties may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")
    ( (This)->lpVtbl->get_BitmapAlphaMode(This,value) )
DEPRECATED("KnownPerceptionVideoProfileProperties may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")
    ( (This)->lpVtbl->get_Width(This,value) )
DEPRECATED("KnownPerceptionVideoProfileProperties may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")
    ( (This)->lpVtbl->get_Height(This,value) )
DEPRECATED("KnownPerceptionVideoProfileProperties may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")
    ( (This)->lpVtbl->get_FrameDuration(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPerception_CIKnownPerceptionVideoProfilePropertiesStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Perception_IPerceptionColorFrame[] = L"Windows.Devices.Perception.IPerceptionColorFrame";
typedef struct
DEPRECATED("PerceptionColorFrame may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.VideoMediaFrame instead.")
__x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrame * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrame * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrame * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrame * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrame * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrame * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("PerceptionColorFrame may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.VideoMediaFrame instead.")
                               HRESULT ( STDMETHODCALLTYPE *get_VideoFrame )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrame * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CIVideoFrame * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameVtbl;
interface __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrame
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("PerceptionColorFrame may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.VideoMediaFrame instead.")
    ( (This)->lpVtbl->get_VideoFrame(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrame;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Perception_IPerceptionColorFrameArrivedEventArgs[] = L"Windows.Devices.Perception.IPerceptionColorFrameArrivedEventArgs";
typedef struct
DEPRECATED("PerceptionColorFrameArrivedEventArgs may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameArrivedEventArgs instead.")
__x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameArrivedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameArrivedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameArrivedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameArrivedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameArrivedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameArrivedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameArrivedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("PerceptionColorFrameArrivedEventArgs may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameArrivedEventArgs instead.")
                               HRESULT ( STDMETHODCALLTYPE *get_RelativeTime )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameArrivedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
    DEPRECATED("PerceptionColorFrameArrivedEventArgs may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameArrivedEventArgs instead.")
                      HRESULT ( STDMETHODCALLTYPE *TryOpenFrame )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameArrivedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrame * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameArrivedEventArgsVtbl;
interface __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameArrivedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameArrivedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("PerceptionColorFrameArrivedEventArgs may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameArrivedEventArgs instead.")
    ( (This)->lpVtbl->get_RelativeTime(This,value) )
DEPRECATED("PerceptionColorFrameArrivedEventArgs may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameArrivedEventArgs instead.")
    ( (This)->lpVtbl->TryOpenFrame(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameArrivedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Perception_IPerceptionColorFrameReader[] = L"Windows.Devices.Perception.IPerceptionColorFrameReader";
typedef struct
DEPRECATED("PerceptionColorFrameReader may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameReader instead.")
__x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameReaderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameReader * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameReader * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameReader * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameReader * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameReader * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameReader * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("PerceptionColorFrameReader may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameReader instead.")
                                HRESULT ( STDMETHODCALLTYPE *add_FrameArrived )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameReader * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionColorFrameReader_Windows__CDevices__CPerception__CPerceptionColorFrameArrivedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
    DEPRECATED("PerceptionColorFrameReader may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameReader instead.")
                                   HRESULT ( STDMETHODCALLTYPE *remove_FrameArrived )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameReader * This,
                  EventRegistrationToken token
        );
    DEPRECATED("PerceptionColorFrameReader may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameReader instead.")
                               HRESULT ( STDMETHODCALLTYPE *get_Source )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameReader * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameSource * * value
        );
    DEPRECATED("PerceptionColorFrameReader may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameReader instead.")
                               HRESULT ( STDMETHODCALLTYPE *get_IsPaused )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameReader * This,
                           __RPC__out boolean * value
        );
    DEPRECATED("PerceptionColorFrameReader may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameReader instead.")
                               HRESULT ( STDMETHODCALLTYPE *put_IsPaused )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameReader * This,
                  boolean value
        );
    DEPRECATED("PerceptionColorFrameReader may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameReader instead.")
                      HRESULT ( STDMETHODCALLTYPE *TryReadLatestFrame )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameReader * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrame * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameReaderVtbl;
interface __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameReader
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameReaderVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("PerceptionColorFrameReader may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameReader instead.")
    ( (This)->lpVtbl->add_FrameArrived(This,handler,token) )
DEPRECATED("PerceptionColorFrameReader may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameReader instead.")
    ( (This)->lpVtbl->remove_FrameArrived(This,token) )
DEPRECATED("PerceptionColorFrameReader may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameReader instead.")
    ( (This)->lpVtbl->get_Source(This,value) )
DEPRECATED("PerceptionColorFrameReader may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameReader instead.")
    ( (This)->lpVtbl->get_IsPaused(This,value) )
DEPRECATED("PerceptionColorFrameReader may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameReader instead.")
    ( (This)->lpVtbl->put_IsPaused(This,value) )
DEPRECATED("PerceptionColorFrameReader may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameReader instead.")
    ( (This)->lpVtbl->TryReadLatestFrame(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameReader;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Perception_IPerceptionColorFrameSource[] = L"Windows.Devices.Perception.IPerceptionColorFrameSource";
typedef struct
DEPRECATED("PerceptionColorFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
__x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameSourceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameSource * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameSource * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameSource * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameSource * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameSource * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameSource * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("PerceptionColorFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
                                HRESULT ( STDMETHODCALLTYPE *add_AvailableChanged )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameSource * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionColorFrameSource_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
    DEPRECATED("PerceptionColorFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
                                   HRESULT ( STDMETHODCALLTYPE *remove_AvailableChanged )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameSource * This,
                  EventRegistrationToken token
        );
    DEPRECATED("PerceptionColorFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
                                HRESULT ( STDMETHODCALLTYPE *add_ActiveChanged )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameSource * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionColorFrameSource_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
    DEPRECATED("PerceptionColorFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
                                   HRESULT ( STDMETHODCALLTYPE *remove_ActiveChanged )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameSource * This,
                  EventRegistrationToken token
        );
    DEPRECATED("PerceptionColorFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
                                HRESULT ( STDMETHODCALLTYPE *add_PropertiesChanged )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameSource * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionColorFrameSource_Windows__CDevices__CPerception__CPerceptionFrameSourcePropertiesChangedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
    DEPRECATED("PerceptionColorFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
                                   HRESULT ( STDMETHODCALLTYPE *remove_PropertiesChanged )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameSource * This,
                  EventRegistrationToken token
        );
    DEPRECATED("PerceptionColorFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
                                HRESULT ( STDMETHODCALLTYPE *add_VideoProfileChanged )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameSource * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionColorFrameSource_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
    DEPRECATED("PerceptionColorFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
                                   HRESULT ( STDMETHODCALLTYPE *remove_VideoProfileChanged )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameSource * This,
                  EventRegistrationToken token
        );
    DEPRECATED("PerceptionColorFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
                                HRESULT ( STDMETHODCALLTYPE *add_CameraIntrinsicsChanged )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameSource * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionColorFrameSource_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
    DEPRECATED("PerceptionColorFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
                                   HRESULT ( STDMETHODCALLTYPE *remove_CameraIntrinsicsChanged )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameSource * This,
                  EventRegistrationToken token
        );
    DEPRECATED("PerceptionColorFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
                               HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameSource * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    DEPRECATED("PerceptionColorFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
                               HRESULT ( STDMETHODCALLTYPE *get_DisplayName )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameSource * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    DEPRECATED("PerceptionColorFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
                               HRESULT ( STDMETHODCALLTYPE *get_DeviceKind )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameSource * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    DEPRECATED("PerceptionColorFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
                               HRESULT ( STDMETHODCALLTYPE *get_Available )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameSource * This,
                           __RPC__out boolean * value
        );
    DEPRECATED("PerceptionColorFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
                               HRESULT ( STDMETHODCALLTYPE *get_Active )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameSource * This,
                           __RPC__out boolean * value
        );
    DEPRECATED("PerceptionColorFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
                               HRESULT ( STDMETHODCALLTYPE *get_IsControlled )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameSource * This,
                           __RPC__out boolean * value
        );
    DEPRECATED("PerceptionColorFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
                               HRESULT ( STDMETHODCALLTYPE *get_Properties )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameSource * This,
                           __RPC__deref_out_opt __FIMapView_2_HSTRING_IInspectable * * value
        );
    DEPRECATED("PerceptionColorFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
                               HRESULT ( STDMETHODCALLTYPE *get_SupportedVideoProfiles )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameSource * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CPerception__CPerceptionVideoProfile * * value
        );
    DEPRECATED("PerceptionColorFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
                               HRESULT ( STDMETHODCALLTYPE *get_AvailableVideoProfiles )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameSource * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CPerception__CPerceptionVideoProfile * * value
        );
    DEPRECATED("PerceptionColorFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
                               HRESULT ( STDMETHODCALLTYPE *get_VideoProfile )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameSource * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CPerception_CIPerceptionVideoProfile * * value
        );
    DEPRECATED("PerceptionColorFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
                               HRESULT ( STDMETHODCALLTYPE *get_CameraIntrinsics )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameSource * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics * * value
        );
    DEPRECATED("PerceptionColorFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
                      HRESULT ( STDMETHODCALLTYPE *AcquireControlSession )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameSource * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CPerception_CIPerceptionControlSession * * value
        );
    DEPRECATED("PerceptionColorFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
                      HRESULT ( STDMETHODCALLTYPE *CanControlIndependentlyFrom )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameSource * This,
                  __RPC__in HSTRING targetId,
                           __RPC__out boolean * result
        );
    DEPRECATED("PerceptionColorFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
                      HRESULT ( STDMETHODCALLTYPE *IsCorrelatedWith )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameSource * This,
                  __RPC__in HSTRING targetId,
                           __RPC__out boolean * result
        );
    DEPRECATED("PerceptionColorFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
                      HRESULT ( STDMETHODCALLTYPE *TryGetTransformTo )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameSource * This,
                  __RPC__in HSTRING targetId,
                   __RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CMatrix4x4 * result,
                           __RPC__out boolean * hasResult
        );
    DEPRECATED("PerceptionColorFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
                      HRESULT ( STDMETHODCALLTYPE *TryGetDepthCorrelatedCameraIntrinsicsAsync )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameSource * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameSource * correlatedDepthFrameSource,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CPerception__CPerceptionDepthCorrelatedCameraIntrinsics * * result
        );
    DEPRECATED("PerceptionColorFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
                      HRESULT ( STDMETHODCALLTYPE *TryGetDepthCorrelatedCoordinateMapperAsync )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameSource * This,
                  __RPC__in HSTRING targetSourceId,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameSource * correlatedDepthFrameSource,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CPerception__CPerceptionDepthCorrelatedCoordinateMapper * * result
        );
    DEPRECATED("PerceptionColorFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
                      HRESULT ( STDMETHODCALLTYPE *TrySetVideoProfileAsync )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameSource * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CPerception_CIPerceptionControlSession * controlSession,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CPerception_CIPerceptionVideoProfile * profile,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CPerception__CPerceptionFrameSourcePropertyChangeResult * * result
        );
    DEPRECATED("PerceptionColorFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
                      HRESULT ( STDMETHODCALLTYPE *OpenReader )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameSource * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameReader * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameSourceVtbl;
interface __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameSource
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameSourceVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("PerceptionColorFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
    ( (This)->lpVtbl->add_AvailableChanged(This,handler,token) )
DEPRECATED("PerceptionColorFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
    ( (This)->lpVtbl->remove_AvailableChanged(This,token) )
DEPRECATED("PerceptionColorFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
    ( (This)->lpVtbl->add_ActiveChanged(This,handler,token) )
DEPRECATED("PerceptionColorFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
    ( (This)->lpVtbl->remove_ActiveChanged(This,token) )
DEPRECATED("PerceptionColorFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
    ( (This)->lpVtbl->add_PropertiesChanged(This,handler,token) )
DEPRECATED("PerceptionColorFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
    ( (This)->lpVtbl->remove_PropertiesChanged(This,token) )
DEPRECATED("PerceptionColorFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
    ( (This)->lpVtbl->add_VideoProfileChanged(This,handler,token) )
DEPRECATED("PerceptionColorFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
    ( (This)->lpVtbl->remove_VideoProfileChanged(This,token) )
DEPRECATED("PerceptionColorFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
    ( (This)->lpVtbl->add_CameraIntrinsicsChanged(This,handler,token) )
DEPRECATED("PerceptionColorFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
    ( (This)->lpVtbl->remove_CameraIntrinsicsChanged(This,token) )
DEPRECATED("PerceptionColorFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
    ( (This)->lpVtbl->get_Id(This,value) )
DEPRECATED("PerceptionColorFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
    ( (This)->lpVtbl->get_DisplayName(This,value) )
DEPRECATED("PerceptionColorFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
    ( (This)->lpVtbl->get_DeviceKind(This,value) )
DEPRECATED("PerceptionColorFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
    ( (This)->lpVtbl->get_Available(This,value) )
DEPRECATED("PerceptionColorFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
    ( (This)->lpVtbl->get_Active(This,value) )
DEPRECATED("PerceptionColorFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
    ( (This)->lpVtbl->get_IsControlled(This,value) )
DEPRECATED("PerceptionColorFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
    ( (This)->lpVtbl->get_Properties(This,value) )
DEPRECATED("PerceptionColorFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
    ( (This)->lpVtbl->get_SupportedVideoProfiles(This,value) )
DEPRECATED("PerceptionColorFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
    ( (This)->lpVtbl->get_AvailableVideoProfiles(This,value) )
DEPRECATED("PerceptionColorFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
    ( (This)->lpVtbl->get_VideoProfile(This,value) )
DEPRECATED("PerceptionColorFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
    ( (This)->lpVtbl->get_CameraIntrinsics(This,value) )
DEPRECATED("PerceptionColorFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
    ( (This)->lpVtbl->AcquireControlSession(This,value) )
DEPRECATED("PerceptionColorFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
    ( (This)->lpVtbl->CanControlIndependentlyFrom(This,targetId,result) )
DEPRECATED("PerceptionColorFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
    ( (This)->lpVtbl->IsCorrelatedWith(This,targetId,result) )
DEPRECATED("PerceptionColorFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
    ( (This)->lpVtbl->TryGetTransformTo(This,targetId,result,hasResult) )
DEPRECATED("PerceptionColorFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
    ( (This)->lpVtbl->TryGetDepthCorrelatedCameraIntrinsicsAsync(This,correlatedDepthFrameSource,result) )
DEPRECATED("PerceptionColorFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
    ( (This)->lpVtbl->TryGetDepthCorrelatedCoordinateMapperAsync(This,targetSourceId,correlatedDepthFrameSource,result) )
DEPRECATED("PerceptionColorFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
    ( (This)->lpVtbl->TrySetVideoProfileAsync(This,controlSession,profile,result) )
DEPRECATED("PerceptionColorFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
    ( (This)->lpVtbl->OpenReader(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameSource;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Perception_IPerceptionColorFrameSource2[] = L"Windows.Devices.Perception.IPerceptionColorFrameSource2";
typedef struct
DEPRECATED("PerceptionColorFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
__x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameSource2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameSource2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameSource2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameSource2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameSource2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameSource2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameSource2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("PerceptionColorFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
                               HRESULT ( STDMETHODCALLTYPE *get_DeviceId )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameSource2 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameSource2Vtbl;
interface __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameSource2
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameSource2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("PerceptionColorFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
    ( (This)->lpVtbl->get_DeviceId(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameSource2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Perception_IPerceptionColorFrameSourceAddedEventArgs[] = L"Windows.Devices.Perception.IPerceptionColorFrameSourceAddedEventArgs";
typedef struct
DEPRECATED("PerceptionColorFrameSourceAddedEventArgs may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")
__x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameSourceAddedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameSourceAddedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameSourceAddedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameSourceAddedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameSourceAddedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameSourceAddedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameSourceAddedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("PerceptionColorFrameSourceAddedEventArgs may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_FrameSource )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameSourceAddedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameSource * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameSourceAddedEventArgsVtbl;
interface __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameSourceAddedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameSourceAddedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("PerceptionColorFrameSourceAddedEventArgs may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")
    ( (This)->lpVtbl->get_FrameSource(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameSourceAddedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Perception_IPerceptionColorFrameSourceRemovedEventArgs[] = L"Windows.Devices.Perception.IPerceptionColorFrameSourceRemovedEventArgs";
typedef struct
DEPRECATED("PerceptionColorFrameSourceRemovedEventArgs may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")
__x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameSourceRemovedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameSourceRemovedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameSourceRemovedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameSourceRemovedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameSourceRemovedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameSourceRemovedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameSourceRemovedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("PerceptionColorFrameSourceRemovedEventArgs may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_FrameSource )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameSourceRemovedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameSource * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameSourceRemovedEventArgsVtbl;
interface __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameSourceRemovedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameSourceRemovedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("PerceptionColorFrameSourceRemovedEventArgs may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")
    ( (This)->lpVtbl->get_FrameSource(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameSourceRemovedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Perception_IPerceptionColorFrameSourceStatics[] = L"Windows.Devices.Perception.IPerceptionColorFrameSourceStatics";
typedef struct
DEPRECATED("PerceptionColorFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
__x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameSourceStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameSourceStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameSourceStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameSourceStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameSourceStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameSourceStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameSourceStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("PerceptionColorFrameSource.CreateWatcher may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceInformation.CreateWatcher instead.")
                      HRESULT ( STDMETHODCALLTYPE *CreateWatcher )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameSourceStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameSourceWatcher * * watcher
        );
    DEPRECATED("PerceptionColorFrameSource.FindAllAsync may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceInformation.FindAllAsync instead.")
                      HRESULT ( STDMETHODCALLTYPE *FindAllAsync )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameSourceStatics * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CPerception__CPerceptionColorFrameSource * * result
        );
    DEPRECATED("PerceptionColorFrameSource.FromIdAsync may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceInformation.FromIdAsync instead.")
                      HRESULT ( STDMETHODCALLTYPE *FromIdAsync )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameSourceStatics * This,
                  __RPC__in HSTRING id,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CPerception__CPerceptionColorFrameSource * * result
        );
    DEPRECATED("PerceptionColorFrameSource.RequestAccessAsync may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")
                      HRESULT ( STDMETHODCALLTYPE *RequestAccessAsync )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameSourceStatics * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CPerception__CPerceptionFrameSourceAccessStatus * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameSourceStaticsVtbl;
interface __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameSourceStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameSourceStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("PerceptionColorFrameSource.CreateWatcher may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceInformation.CreateWatcher instead.")
    ( (This)->lpVtbl->CreateWatcher(This,watcher) )
DEPRECATED("PerceptionColorFrameSource.FindAllAsync may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceInformation.FindAllAsync instead.")
    ( (This)->lpVtbl->FindAllAsync(This,result) )
DEPRECATED("PerceptionColorFrameSource.FromIdAsync may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceInformation.FromIdAsync instead.")
    ( (This)->lpVtbl->FromIdAsync(This,id,result) )
DEPRECATED("PerceptionColorFrameSource.RequestAccessAsync may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")
    ( (This)->lpVtbl->RequestAccessAsync(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameSourceStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Perception_IPerceptionColorFrameSourceWatcher[] = L"Windows.Devices.Perception.IPerceptionColorFrameSourceWatcher";
typedef struct
DEPRECATED("PerceptionColorFrameSourceWatcher may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceWatcher instead.")
__x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameSourceWatcherVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameSourceWatcher * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameSourceWatcher * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameSourceWatcher * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameSourceWatcher * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameSourceWatcher * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameSourceWatcher * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("PerceptionColorFrameSourceWatcher may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceWatcher instead.")
                                HRESULT ( STDMETHODCALLTYPE *add_SourceAdded )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameSourceWatcher * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionColorFrameSourceWatcher_Windows__CDevices__CPerception__CPerceptionColorFrameSourceAddedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
    DEPRECATED("PerceptionColorFrameSourceWatcher may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceWatcher instead.")
                                   HRESULT ( STDMETHODCALLTYPE *remove_SourceAdded )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameSourceWatcher * This,
                  EventRegistrationToken token
        );
    DEPRECATED("PerceptionColorFrameSourceWatcher may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceWatcher instead.")
                                HRESULT ( STDMETHODCALLTYPE *add_SourceRemoved )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameSourceWatcher * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionColorFrameSourceWatcher_Windows__CDevices__CPerception__CPerceptionColorFrameSourceRemovedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
    DEPRECATED("PerceptionColorFrameSourceWatcher may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceWatcher instead.")
                                   HRESULT ( STDMETHODCALLTYPE *remove_SourceRemoved )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameSourceWatcher * This,
                  EventRegistrationToken token
        );
    DEPRECATED("PerceptionColorFrameSourceWatcher may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceWatcher instead.")
                                HRESULT ( STDMETHODCALLTYPE *add_Stopped )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameSourceWatcher * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionColorFrameSourceWatcher_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
    DEPRECATED("PerceptionColorFrameSourceWatcher may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceWatcher instead.")
                                   HRESULT ( STDMETHODCALLTYPE *remove_Stopped )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameSourceWatcher * This,
                  EventRegistrationToken token
        );
    DEPRECATED("PerceptionColorFrameSourceWatcher may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceWatcher instead.")
                                HRESULT ( STDMETHODCALLTYPE *add_EnumerationCompleted )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameSourceWatcher * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionColorFrameSourceWatcher_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
    DEPRECATED("PerceptionColorFrameSourceWatcher may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceWatcher instead.")
                                   HRESULT ( STDMETHODCALLTYPE *remove_EnumerationCompleted )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameSourceWatcher * This,
                  EventRegistrationToken token
        );
    DEPRECATED("PerceptionColorFrameSourceWatcher may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceWatcher instead.")
                               HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameSourceWatcher * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CEnumeration_CDeviceWatcherStatus * value
        );
    DEPRECATED("PerceptionColorFrameSourceWatcher may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceWatcher instead.")
                      HRESULT ( STDMETHODCALLTYPE *Start )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameSourceWatcher * This
        );
    DEPRECATED("PerceptionColorFrameSourceWatcher may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceWatcher instead.")
                      HRESULT ( STDMETHODCALLTYPE *Stop )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameSourceWatcher * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameSourceWatcherVtbl;
interface __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameSourceWatcher
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameSourceWatcherVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("PerceptionColorFrameSourceWatcher may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceWatcher instead.")
    ( (This)->lpVtbl->add_SourceAdded(This,handler,token) )
DEPRECATED("PerceptionColorFrameSourceWatcher may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceWatcher instead.")
    ( (This)->lpVtbl->remove_SourceAdded(This,token) )
DEPRECATED("PerceptionColorFrameSourceWatcher may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceWatcher instead.")
    ( (This)->lpVtbl->add_SourceRemoved(This,handler,token) )
DEPRECATED("PerceptionColorFrameSourceWatcher may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceWatcher instead.")
    ( (This)->lpVtbl->remove_SourceRemoved(This,token) )
DEPRECATED("PerceptionColorFrameSourceWatcher may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceWatcher instead.")
    ( (This)->lpVtbl->add_Stopped(This,handler,token) )
DEPRECATED("PerceptionColorFrameSourceWatcher may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceWatcher instead.")
    ( (This)->lpVtbl->remove_Stopped(This,token) )
DEPRECATED("PerceptionColorFrameSourceWatcher may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceWatcher instead.")
    ( (This)->lpVtbl->add_EnumerationCompleted(This,handler,token) )
DEPRECATED("PerceptionColorFrameSourceWatcher may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceWatcher instead.")
    ( (This)->lpVtbl->remove_EnumerationCompleted(This,token) )
DEPRECATED("PerceptionColorFrameSourceWatcher may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceWatcher instead.")
    ( (This)->lpVtbl->get_Status(This,value) )
DEPRECATED("PerceptionColorFrameSourceWatcher may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceWatcher instead.")
    ( (This)->lpVtbl->Start(This) )
DEPRECATED("PerceptionColorFrameSourceWatcher may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceWatcher instead.")
    ( (This)->lpVtbl->Stop(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPerception_CIPerceptionColorFrameSourceWatcher;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Perception_IPerceptionControlSession[] = L"Windows.Devices.Perception.IPerceptionControlSession";
typedef struct
DEPRECATED("PerceptionControlSession may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")
__x_ABI_CWindows_CDevices_CPerception_CIPerceptionControlSessionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionControlSession * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionControlSession * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionControlSession * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionControlSession * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionControlSession * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionControlSession * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("PerceptionControlSession may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")
                                HRESULT ( STDMETHODCALLTYPE *add_ControlLost )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionControlSession * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionControlSession_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
    DEPRECATED("PerceptionControlSession may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")
                                   HRESULT ( STDMETHODCALLTYPE *remove_ControlLost )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionControlSession * This,
                  EventRegistrationToken token
        );
    DEPRECATED("PerceptionControlSession may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")
                      HRESULT ( STDMETHODCALLTYPE *TrySetPropertyAsync )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionControlSession * This,
                  __RPC__in HSTRING name,
                  __RPC__in_opt IInspectable * value,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CPerception__CPerceptionFrameSourcePropertyChangeResult * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPerception_CIPerceptionControlSessionVtbl;
interface __x_ABI_CWindows_CDevices_CPerception_CIPerceptionControlSession
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPerception_CIPerceptionControlSessionVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("PerceptionControlSession may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")
    ( (This)->lpVtbl->add_ControlLost(This,handler,token) )
DEPRECATED("PerceptionControlSession may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")
    ( (This)->lpVtbl->remove_ControlLost(This,token) )
DEPRECATED("PerceptionControlSession may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")
    ( (This)->lpVtbl->TrySetPropertyAsync(This,name,value,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPerception_CIPerceptionControlSession;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Perception_IPerceptionDepthCorrelatedCameraIntrinsics[] = L"Windows.Devices.Perception.IPerceptionDepthCorrelatedCameraIntrinsics";
typedef struct
DEPRECATED("PerceptionDepthCorrelatedCameraIntrinsics may be unavailable after Windows Creator Update.  Use Windows.Media.Devices.Core.DepthCorrelatedCoordinateMapper instead.")
__x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthCorrelatedCameraIntrinsicsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthCorrelatedCameraIntrinsics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthCorrelatedCameraIntrinsics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthCorrelatedCameraIntrinsics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthCorrelatedCameraIntrinsics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthCorrelatedCameraIntrinsics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthCorrelatedCameraIntrinsics * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("PerceptionDepthCorrelatedCameraIntrinsics may be unavailable after Windows Creator Update.  Use Windows.Media.Devices.Core.DepthCorrelatedCoordinateMapper instead.")
                      HRESULT ( STDMETHODCALLTYPE *UnprojectPixelAtCorrelatedDepth )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthCorrelatedCameraIntrinsics * This,
                  __x_ABI_CWindows_CFoundation_CPoint pixelCoordinate,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrame * depthFrame,
                           __RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CVector3 * result
        );
    DEPRECATED("PerceptionDepthCorrelatedCameraIntrinsics may be unavailable after Windows Creator Update.  Use Windows.Media.Devices.Core.DepthCorrelatedCoordinateMapper instead.")
                      HRESULT ( STDMETHODCALLTYPE *UnprojectPixelsAtCorrelatedDepth )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthCorrelatedCameraIntrinsics * This,
                  UINT32 __sourceCoordinatesSize,
                                                    __RPC__in_ecount_full(__sourceCoordinatesSize) __x_ABI_CWindows_CFoundation_CPoint * sourceCoordinates,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrame * depthFrame,
                  UINT32 __resultsSize,
                                           __RPC__out_ecount_full(__resultsSize) __x_ABI_CWindows_CFoundation_CNumerics_CVector3 * results
        );
    DEPRECATED("PerceptionDepthCorrelatedCameraIntrinsics may be unavailable after Windows Creator Update.  Use Windows.Media.Devices.Core.DepthCorrelatedCoordinateMapper instead.")
                      HRESULT ( STDMETHODCALLTYPE *UnprojectRegionPixelsAtCorrelatedDepthAsync )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthCorrelatedCameraIntrinsics * This,
                  __x_ABI_CWindows_CFoundation_CRect region,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrame * depthFrame,
                  UINT32 __resultsSize,
                                           __RPC__out_ecount_full(__resultsSize) __x_ABI_CWindows_CFoundation_CNumerics_CVector3 * results,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    DEPRECATED("PerceptionDepthCorrelatedCameraIntrinsics may be unavailable after Windows Creator Update.  Use Windows.Media.Devices.Core.DepthCorrelatedCoordinateMapper instead.")
                      HRESULT ( STDMETHODCALLTYPE *UnprojectAllPixelsAtCorrelatedDepthAsync )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthCorrelatedCameraIntrinsics * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrame * depthFrame,
                  UINT32 __resultsSize,
                                           __RPC__out_ecount_full(__resultsSize) __x_ABI_CWindows_CFoundation_CNumerics_CVector3 * results,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthCorrelatedCameraIntrinsicsVtbl;
interface __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthCorrelatedCameraIntrinsics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthCorrelatedCameraIntrinsicsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("PerceptionDepthCorrelatedCameraIntrinsics may be unavailable after Windows Creator Update.  Use Windows.Media.Devices.Core.DepthCorrelatedCoordinateMapper instead.")
    ( (This)->lpVtbl->UnprojectPixelAtCorrelatedDepth(This,pixelCoordinate,depthFrame,result) )
DEPRECATED("PerceptionDepthCorrelatedCameraIntrinsics may be unavailable after Windows Creator Update.  Use Windows.Media.Devices.Core.DepthCorrelatedCoordinateMapper instead.")
    ( (This)->lpVtbl->UnprojectPixelsAtCorrelatedDepth(This,__sourceCoordinatesSize,sourceCoordinates,depthFrame,__resultsSize,results) )
DEPRECATED("PerceptionDepthCorrelatedCameraIntrinsics may be unavailable after Windows Creator Update.  Use Windows.Media.Devices.Core.DepthCorrelatedCoordinateMapper instead.")
    ( (This)->lpVtbl->UnprojectRegionPixelsAtCorrelatedDepthAsync(This,region,depthFrame,__resultsSize,results,result) )
DEPRECATED("PerceptionDepthCorrelatedCameraIntrinsics may be unavailable after Windows Creator Update.  Use Windows.Media.Devices.Core.DepthCorrelatedCoordinateMapper instead.")
    ( (This)->lpVtbl->UnprojectAllPixelsAtCorrelatedDepthAsync(This,depthFrame,__resultsSize,results,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthCorrelatedCameraIntrinsics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Perception_IPerceptionDepthCorrelatedCoordinateMapper[] = L"Windows.Devices.Perception.IPerceptionDepthCorrelatedCoordinateMapper";
typedef struct
DEPRECATED("PerceptionDepthCorrelatedCoordinateMapper may be unavailable after Windows Creator Update.  Use Windows.Media.Devices.Core.DepthCorrelatedCoordinateMapper instead.")
__x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthCorrelatedCoordinateMapperVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthCorrelatedCoordinateMapper * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthCorrelatedCoordinateMapper * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthCorrelatedCoordinateMapper * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthCorrelatedCoordinateMapper * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthCorrelatedCoordinateMapper * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthCorrelatedCoordinateMapper * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("PerceptionDepthCorrelatedCoordinateMapper may be unavailable after Windows Creator Update.  Use Windows.Media.Devices.Core.DepthCorrelatedCoordinateMapper instead.")
                      HRESULT ( STDMETHODCALLTYPE *MapPixelToTarget )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthCorrelatedCoordinateMapper * This,
                  __x_ABI_CWindows_CFoundation_CPoint sourcePixelCoordinate,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrame * depthFrame,
                           __RPC__out __x_ABI_CWindows_CFoundation_CPoint * result
        );
    DEPRECATED("PerceptionDepthCorrelatedCoordinateMapper may be unavailable after Windows Creator Update.  Use Windows.Media.Devices.Core.DepthCorrelatedCoordinateMapper instead.")
                      HRESULT ( STDMETHODCALLTYPE *MapPixelsToTarget )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthCorrelatedCoordinateMapper * This,
                  UINT32 __sourceCoordinatesSize,
                                                    __RPC__in_ecount_full(__sourceCoordinatesSize) __x_ABI_CWindows_CFoundation_CPoint * sourceCoordinates,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrame * depthFrame,
                  UINT32 __resultsSize,
                                           __RPC__out_ecount_full(__resultsSize) __x_ABI_CWindows_CFoundation_CPoint * results
        );
    DEPRECATED("PerceptionDepthCorrelatedCoordinateMapper may be unavailable after Windows Creator Update.  Use Windows.Media.Devices.Core.DepthCorrelatedCoordinateMapper instead.")
                      HRESULT ( STDMETHODCALLTYPE *MapRegionOfPixelsToTargetAsync )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthCorrelatedCoordinateMapper * This,
                  __x_ABI_CWindows_CFoundation_CRect region,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrame * depthFrame,
                  UINT32 __targetCoordinatesSize,
                                                     __RPC__out_ecount_full(__targetCoordinatesSize) __x_ABI_CWindows_CFoundation_CPoint * targetCoordinates,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    DEPRECATED("PerceptionDepthCorrelatedCoordinateMapper may be unavailable after Windows Creator Update.  Use Windows.Media.Devices.Core.DepthCorrelatedCoordinateMapper instead.")
                      HRESULT ( STDMETHODCALLTYPE *MapAllPixelsToTargetAsync )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthCorrelatedCoordinateMapper * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrame * depthFrame,
                  UINT32 __targetCoordinatesSize,
                                                     __RPC__out_ecount_full(__targetCoordinatesSize) __x_ABI_CWindows_CFoundation_CPoint * targetCoordinates,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthCorrelatedCoordinateMapperVtbl;
interface __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthCorrelatedCoordinateMapper
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthCorrelatedCoordinateMapperVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("PerceptionDepthCorrelatedCoordinateMapper may be unavailable after Windows Creator Update.  Use Windows.Media.Devices.Core.DepthCorrelatedCoordinateMapper instead.")
    ( (This)->lpVtbl->MapPixelToTarget(This,sourcePixelCoordinate,depthFrame,result) )
DEPRECATED("PerceptionDepthCorrelatedCoordinateMapper may be unavailable after Windows Creator Update.  Use Windows.Media.Devices.Core.DepthCorrelatedCoordinateMapper instead.")
    ( (This)->lpVtbl->MapPixelsToTarget(This,__sourceCoordinatesSize,sourceCoordinates,depthFrame,__resultsSize,results) )
DEPRECATED("PerceptionDepthCorrelatedCoordinateMapper may be unavailable after Windows Creator Update.  Use Windows.Media.Devices.Core.DepthCorrelatedCoordinateMapper instead.")
    ( (This)->lpVtbl->MapRegionOfPixelsToTargetAsync(This,region,depthFrame,__targetCoordinatesSize,targetCoordinates,result) )
DEPRECATED("PerceptionDepthCorrelatedCoordinateMapper may be unavailable after Windows Creator Update.  Use Windows.Media.Devices.Core.DepthCorrelatedCoordinateMapper instead.")
    ( (This)->lpVtbl->MapAllPixelsToTargetAsync(This,depthFrame,__targetCoordinatesSize,targetCoordinates,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthCorrelatedCoordinateMapper;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Perception_IPerceptionDepthFrame[] = L"Windows.Devices.Perception.IPerceptionDepthFrame";
typedef struct
DEPRECATED("PerceptionDepthFrame may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.DepthMediaFrame instead.")
__x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrame * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrame * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrame * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrame * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrame * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrame * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("PerceptionDepthFrame may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.DepthMediaFrame instead.")
                               HRESULT ( STDMETHODCALLTYPE *get_VideoFrame )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrame * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CIVideoFrame * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameVtbl;
interface __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrame
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("PerceptionDepthFrame may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.DepthMediaFrame instead.")
    ( (This)->lpVtbl->get_VideoFrame(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrame;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Perception_IPerceptionDepthFrameArrivedEventArgs[] = L"Windows.Devices.Perception.IPerceptionDepthFrameArrivedEventArgs";
typedef struct
DEPRECATED("PerceptionDepthFrameArrivedEventArgs may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameArrivedEventArgs instead.")
__x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameArrivedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameArrivedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameArrivedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameArrivedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameArrivedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameArrivedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameArrivedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("PerceptionDepthFrameArrivedEventArgs may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameArrivedEventArgs instead.")
                               HRESULT ( STDMETHODCALLTYPE *get_RelativeTime )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameArrivedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
    DEPRECATED("PerceptionDepthFrameArrivedEventArgs may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameArrivedEventArgs instead.")
                      HRESULT ( STDMETHODCALLTYPE *TryOpenFrame )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameArrivedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrame * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameArrivedEventArgsVtbl;
interface __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameArrivedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameArrivedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("PerceptionDepthFrameArrivedEventArgs may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameArrivedEventArgs instead.")
    ( (This)->lpVtbl->get_RelativeTime(This,value) )
DEPRECATED("PerceptionDepthFrameArrivedEventArgs may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameArrivedEventArgs instead.")
    ( (This)->lpVtbl->TryOpenFrame(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameArrivedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Perception_IPerceptionDepthFrameReader[] = L"Windows.Devices.Perception.IPerceptionDepthFrameReader";
typedef struct
DEPRECATED("PerceptionDepthFrameReader may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameReader instead.")
__x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameReaderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameReader * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameReader * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameReader * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameReader * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameReader * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameReader * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("PerceptionDepthFrameReader may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameReader instead.")
                                HRESULT ( STDMETHODCALLTYPE *add_FrameArrived )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameReader * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionDepthFrameReader_Windows__CDevices__CPerception__CPerceptionDepthFrameArrivedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
    DEPRECATED("PerceptionDepthFrameReader may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameReader instead.")
                                   HRESULT ( STDMETHODCALLTYPE *remove_FrameArrived )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameReader * This,
                  EventRegistrationToken token
        );
    DEPRECATED("PerceptionDepthFrameReader may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameReader instead.")
                               HRESULT ( STDMETHODCALLTYPE *get_Source )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameReader * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameSource * * value
        );
    DEPRECATED("PerceptionDepthFrameReader may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameReader instead.")
                               HRESULT ( STDMETHODCALLTYPE *get_IsPaused )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameReader * This,
                           __RPC__out boolean * value
        );
    DEPRECATED("PerceptionDepthFrameReader may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameReader instead.")
                               HRESULT ( STDMETHODCALLTYPE *put_IsPaused )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameReader * This,
                  boolean value
        );
    DEPRECATED("PerceptionDepthFrameReader may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameReader instead.")
                      HRESULT ( STDMETHODCALLTYPE *TryReadLatestFrame )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameReader * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrame * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameReaderVtbl;
interface __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameReader
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameReaderVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("PerceptionDepthFrameReader may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameReader instead.")
    ( (This)->lpVtbl->add_FrameArrived(This,handler,token) )
DEPRECATED("PerceptionDepthFrameReader may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameReader instead.")
    ( (This)->lpVtbl->remove_FrameArrived(This,token) )
DEPRECATED("PerceptionDepthFrameReader may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameReader instead.")
    ( (This)->lpVtbl->get_Source(This,value) )
DEPRECATED("PerceptionDepthFrameReader may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameReader instead.")
    ( (This)->lpVtbl->get_IsPaused(This,value) )
DEPRECATED("PerceptionDepthFrameReader may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameReader instead.")
    ( (This)->lpVtbl->put_IsPaused(This,value) )
DEPRECATED("PerceptionDepthFrameReader may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameReader instead.")
    ( (This)->lpVtbl->TryReadLatestFrame(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameReader;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Perception_IPerceptionDepthFrameSource[] = L"Windows.Devices.Perception.IPerceptionDepthFrameSource";
typedef struct
DEPRECATED("PerceptionDepthFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
__x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameSourceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameSource * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameSource * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameSource * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameSource * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameSource * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameSource * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("PerceptionDepthFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
                                HRESULT ( STDMETHODCALLTYPE *add_AvailableChanged )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameSource * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionDepthFrameSource_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
    DEPRECATED("PerceptionDepthFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
                                   HRESULT ( STDMETHODCALLTYPE *remove_AvailableChanged )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameSource * This,
                  EventRegistrationToken token
        );
    DEPRECATED("PerceptionDepthFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
                                HRESULT ( STDMETHODCALLTYPE *add_ActiveChanged )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameSource * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionDepthFrameSource_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
    DEPRECATED("PerceptionDepthFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
                                   HRESULT ( STDMETHODCALLTYPE *remove_ActiveChanged )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameSource * This,
                  EventRegistrationToken token
        );
    DEPRECATED("PerceptionDepthFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
                                HRESULT ( STDMETHODCALLTYPE *add_PropertiesChanged )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameSource * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionDepthFrameSource_Windows__CDevices__CPerception__CPerceptionFrameSourcePropertiesChangedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
    DEPRECATED("PerceptionDepthFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
                                   HRESULT ( STDMETHODCALLTYPE *remove_PropertiesChanged )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameSource * This,
                  EventRegistrationToken token
        );
    DEPRECATED("PerceptionDepthFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
                                HRESULT ( STDMETHODCALLTYPE *add_VideoProfileChanged )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameSource * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionDepthFrameSource_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
    DEPRECATED("PerceptionDepthFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
                                   HRESULT ( STDMETHODCALLTYPE *remove_VideoProfileChanged )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameSource * This,
                  EventRegistrationToken token
        );
    DEPRECATED("PerceptionDepthFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
                                HRESULT ( STDMETHODCALLTYPE *add_CameraIntrinsicsChanged )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameSource * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionDepthFrameSource_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
    DEPRECATED("PerceptionDepthFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
                                   HRESULT ( STDMETHODCALLTYPE *remove_CameraIntrinsicsChanged )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameSource * This,
                  EventRegistrationToken token
        );
    DEPRECATED("PerceptionDepthFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
                               HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameSource * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    DEPRECATED("PerceptionDepthFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
                               HRESULT ( STDMETHODCALLTYPE *get_DisplayName )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameSource * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    DEPRECATED("PerceptionDepthFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
                               HRESULT ( STDMETHODCALLTYPE *get_DeviceKind )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameSource * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    DEPRECATED("PerceptionDepthFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
                               HRESULT ( STDMETHODCALLTYPE *get_Available )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameSource * This,
                           __RPC__out boolean * value
        );
    DEPRECATED("PerceptionDepthFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
                               HRESULT ( STDMETHODCALLTYPE *get_Active )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameSource * This,
                           __RPC__out boolean * value
        );
    DEPRECATED("PerceptionDepthFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
                               HRESULT ( STDMETHODCALLTYPE *get_IsControlled )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameSource * This,
                           __RPC__out boolean * value
        );
    DEPRECATED("PerceptionDepthFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
                               HRESULT ( STDMETHODCALLTYPE *get_Properties )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameSource * This,
                           __RPC__deref_out_opt __FIMapView_2_HSTRING_IInspectable * * value
        );
    DEPRECATED("PerceptionDepthFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
                               HRESULT ( STDMETHODCALLTYPE *get_SupportedVideoProfiles )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameSource * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CPerception__CPerceptionVideoProfile * * value
        );
    DEPRECATED("PerceptionDepthFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
                               HRESULT ( STDMETHODCALLTYPE *get_AvailableVideoProfiles )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameSource * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CPerception__CPerceptionVideoProfile * * value
        );
    DEPRECATED("PerceptionDepthFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
                               HRESULT ( STDMETHODCALLTYPE *get_VideoProfile )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameSource * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CPerception_CIPerceptionVideoProfile * * value
        );
    DEPRECATED("PerceptionDepthFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
                               HRESULT ( STDMETHODCALLTYPE *get_CameraIntrinsics )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameSource * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics * * value
        );
    DEPRECATED("PerceptionDepthFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
                      HRESULT ( STDMETHODCALLTYPE *AcquireControlSession )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameSource * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CPerception_CIPerceptionControlSession * * result
        );
    DEPRECATED("PerceptionDepthFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
                      HRESULT ( STDMETHODCALLTYPE *CanControlIndependentlyFrom )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameSource * This,
                  __RPC__in HSTRING targetId,
                           __RPC__out boolean * result
        );
    DEPRECATED("PerceptionDepthFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
                      HRESULT ( STDMETHODCALLTYPE *IsCorrelatedWith )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameSource * This,
                  __RPC__in HSTRING targetId,
                           __RPC__out boolean * result
        );
    DEPRECATED("PerceptionDepthFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
                      HRESULT ( STDMETHODCALLTYPE *TryGetTransformTo )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameSource * This,
                  __RPC__in HSTRING targetId,
                   __RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CMatrix4x4 * result,
                           __RPC__out boolean * hasResult
        );
    DEPRECATED("PerceptionDepthFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
                      HRESULT ( STDMETHODCALLTYPE *TryGetDepthCorrelatedCameraIntrinsicsAsync )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameSource * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameSource * target,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CPerception__CPerceptionDepthCorrelatedCameraIntrinsics * * result
        );
    DEPRECATED("PerceptionDepthFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
                      HRESULT ( STDMETHODCALLTYPE *TryGetDepthCorrelatedCoordinateMapperAsync )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameSource * This,
                  __RPC__in HSTRING targetId,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameSource * depthFrameSourceToMapWith,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CPerception__CPerceptionDepthCorrelatedCoordinateMapper * * result
        );
    DEPRECATED("PerceptionDepthFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
                      HRESULT ( STDMETHODCALLTYPE *TrySetVideoProfileAsync )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameSource * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CPerception_CIPerceptionControlSession * controlSession,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CPerception_CIPerceptionVideoProfile * profile,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CPerception__CPerceptionFrameSourcePropertyChangeResult * * result
        );
    DEPRECATED("PerceptionDepthFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
                      HRESULT ( STDMETHODCALLTYPE *OpenReader )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameSource * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameReader * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameSourceVtbl;
interface __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameSource
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameSourceVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("PerceptionDepthFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
    ( (This)->lpVtbl->add_AvailableChanged(This,handler,token) )
DEPRECATED("PerceptionDepthFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
    ( (This)->lpVtbl->remove_AvailableChanged(This,token) )
DEPRECATED("PerceptionDepthFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
    ( (This)->lpVtbl->add_ActiveChanged(This,handler,token) )
DEPRECATED("PerceptionDepthFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
    ( (This)->lpVtbl->remove_ActiveChanged(This,token) )
DEPRECATED("PerceptionDepthFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
    ( (This)->lpVtbl->add_PropertiesChanged(This,handler,token) )
DEPRECATED("PerceptionDepthFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
    ( (This)->lpVtbl->remove_PropertiesChanged(This,token) )
DEPRECATED("PerceptionDepthFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
    ( (This)->lpVtbl->add_VideoProfileChanged(This,handler,token) )
DEPRECATED("PerceptionDepthFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
    ( (This)->lpVtbl->remove_VideoProfileChanged(This,token) )
DEPRECATED("PerceptionDepthFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
    ( (This)->lpVtbl->add_CameraIntrinsicsChanged(This,handler,token) )
DEPRECATED("PerceptionDepthFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
    ( (This)->lpVtbl->remove_CameraIntrinsicsChanged(This,token) )
DEPRECATED("PerceptionDepthFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
    ( (This)->lpVtbl->get_Id(This,value) )
DEPRECATED("PerceptionDepthFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
    ( (This)->lpVtbl->get_DisplayName(This,value) )
DEPRECATED("PerceptionDepthFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
    ( (This)->lpVtbl->get_DeviceKind(This,value) )
DEPRECATED("PerceptionDepthFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
    ( (This)->lpVtbl->get_Available(This,value) )
DEPRECATED("PerceptionDepthFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
    ( (This)->lpVtbl->get_Active(This,value) )
DEPRECATED("PerceptionDepthFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
    ( (This)->lpVtbl->get_IsControlled(This,value) )
DEPRECATED("PerceptionDepthFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
    ( (This)->lpVtbl->get_Properties(This,value) )
DEPRECATED("PerceptionDepthFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
    ( (This)->lpVtbl->get_SupportedVideoProfiles(This,value) )
DEPRECATED("PerceptionDepthFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
    ( (This)->lpVtbl->get_AvailableVideoProfiles(This,value) )
DEPRECATED("PerceptionDepthFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
    ( (This)->lpVtbl->get_VideoProfile(This,value) )
DEPRECATED("PerceptionDepthFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
    ( (This)->lpVtbl->get_CameraIntrinsics(This,value) )
DEPRECATED("PerceptionDepthFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
    ( (This)->lpVtbl->AcquireControlSession(This,result) )
DEPRECATED("PerceptionDepthFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
    ( (This)->lpVtbl->CanControlIndependentlyFrom(This,targetId,result) )
DEPRECATED("PerceptionDepthFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
    ( (This)->lpVtbl->IsCorrelatedWith(This,targetId,result) )
DEPRECATED("PerceptionDepthFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
    ( (This)->lpVtbl->TryGetTransformTo(This,targetId,result,hasResult) )
DEPRECATED("PerceptionDepthFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
    ( (This)->lpVtbl->TryGetDepthCorrelatedCameraIntrinsicsAsync(This,target,result) )
DEPRECATED("PerceptionDepthFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
    ( (This)->lpVtbl->TryGetDepthCorrelatedCoordinateMapperAsync(This,targetId,depthFrameSourceToMapWith,result) )
DEPRECATED("PerceptionDepthFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
    ( (This)->lpVtbl->TrySetVideoProfileAsync(This,controlSession,profile,result) )
DEPRECATED("PerceptionDepthFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
    ( (This)->lpVtbl->OpenReader(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameSource;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Perception_IPerceptionDepthFrameSource2[] = L"Windows.Devices.Perception.IPerceptionDepthFrameSource2";
typedef struct
DEPRECATED("PerceptionDepthFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
__x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameSource2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameSource2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameSource2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameSource2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameSource2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameSource2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameSource2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("PerceptionDepthFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
                               HRESULT ( STDMETHODCALLTYPE *get_DeviceId )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameSource2 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameSource2Vtbl;
interface __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameSource2
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameSource2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("PerceptionDepthFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
    ( (This)->lpVtbl->get_DeviceId(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameSource2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Perception_IPerceptionDepthFrameSourceAddedEventArgs[] = L"Windows.Devices.Perception.IPerceptionDepthFrameSourceAddedEventArgs";
typedef struct
DEPRECATED("PerceptionDepthFrameSourceAddedEventArgs may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")
__x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameSourceAddedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameSourceAddedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameSourceAddedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameSourceAddedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameSourceAddedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameSourceAddedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameSourceAddedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("PerceptionDepthFrameSourceAddedEventArgs may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_FrameSource )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameSourceAddedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameSource * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameSourceAddedEventArgsVtbl;
interface __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameSourceAddedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameSourceAddedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("PerceptionDepthFrameSourceAddedEventArgs may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")
    ( (This)->lpVtbl->get_FrameSource(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameSourceAddedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Perception_IPerceptionDepthFrameSourceRemovedEventArgs[] = L"Windows.Devices.Perception.IPerceptionDepthFrameSourceRemovedEventArgs";
typedef struct
DEPRECATED("PerceptionDepthFrameSourceRemovedEventArgs may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")
__x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameSourceRemovedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameSourceRemovedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameSourceRemovedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameSourceRemovedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameSourceRemovedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameSourceRemovedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameSourceRemovedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("PerceptionDepthFrameSourceRemovedEventArgs may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_FrameSource )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameSourceRemovedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameSource * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameSourceRemovedEventArgsVtbl;
interface __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameSourceRemovedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameSourceRemovedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("PerceptionDepthFrameSourceRemovedEventArgs may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")
    ( (This)->lpVtbl->get_FrameSource(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameSourceRemovedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Perception_IPerceptionDepthFrameSourceStatics[] = L"Windows.Devices.Perception.IPerceptionDepthFrameSourceStatics";
typedef struct
DEPRECATED("PerceptionDepthFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
__x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameSourceStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameSourceStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameSourceStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameSourceStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameSourceStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameSourceStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameSourceStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("PerceptionDepthFrameSource.CreateWatcher may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceInformation.CreateWatcher instead.")
                      HRESULT ( STDMETHODCALLTYPE *CreateWatcher )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameSourceStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameSourceWatcher * * watcher
        );
    DEPRECATED("PerceptionDepthFrameSource.FindAllAsync may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceInformation.FindAllAsync instead.")
                      HRESULT ( STDMETHODCALLTYPE *FindAllAsync )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameSourceStatics * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CPerception__CPerceptionDepthFrameSource * * result
        );
    DEPRECATED("PerceptionDepthFrameSource.FromIdAsync may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceInformation.FromIdAsync instead.")
                      HRESULT ( STDMETHODCALLTYPE *FromIdAsync )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameSourceStatics * This,
                  __RPC__in HSTRING id,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CPerception__CPerceptionDepthFrameSource * * result
        );
    DEPRECATED("PerceptionDepthFrameSource.RequestAccessAsync may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")
                      HRESULT ( STDMETHODCALLTYPE *RequestAccessAsync )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameSourceStatics * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CPerception__CPerceptionFrameSourceAccessStatus * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameSourceStaticsVtbl;
interface __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameSourceStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameSourceStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("PerceptionDepthFrameSource.CreateWatcher may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceInformation.CreateWatcher instead.")
    ( (This)->lpVtbl->CreateWatcher(This,watcher) )
DEPRECATED("PerceptionDepthFrameSource.FindAllAsync may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceInformation.FindAllAsync instead.")
    ( (This)->lpVtbl->FindAllAsync(This,result) )
DEPRECATED("PerceptionDepthFrameSource.FromIdAsync may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceInformation.FromIdAsync instead.")
    ( (This)->lpVtbl->FromIdAsync(This,id,result) )
DEPRECATED("PerceptionDepthFrameSource.RequestAccessAsync may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")
    ( (This)->lpVtbl->RequestAccessAsync(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameSourceStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Perception_IPerceptionDepthFrameSourceWatcher[] = L"Windows.Devices.Perception.IPerceptionDepthFrameSourceWatcher";
typedef struct
DEPRECATED("PerceptionDepthFrameSourceWatcher may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceWatcher instead.")
__x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameSourceWatcherVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameSourceWatcher * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameSourceWatcher * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameSourceWatcher * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameSourceWatcher * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameSourceWatcher * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameSourceWatcher * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("PerceptionDepthFrameSourceWatcher may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceWatcher instead.")
                                HRESULT ( STDMETHODCALLTYPE *add_SourceAdded )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameSourceWatcher * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionDepthFrameSourceWatcher_Windows__CDevices__CPerception__CPerceptionDepthFrameSourceAddedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
    DEPRECATED("PerceptionDepthFrameSourceWatcher may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceWatcher instead.")
                                   HRESULT ( STDMETHODCALLTYPE *remove_SourceAdded )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameSourceWatcher * This,
                  EventRegistrationToken token
        );
    DEPRECATED("PerceptionDepthFrameSourceWatcher may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceWatcher instead.")
                                HRESULT ( STDMETHODCALLTYPE *add_SourceRemoved )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameSourceWatcher * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionDepthFrameSourceWatcher_Windows__CDevices__CPerception__CPerceptionDepthFrameSourceRemovedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
    DEPRECATED("PerceptionDepthFrameSourceWatcher may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceWatcher instead.")
                                   HRESULT ( STDMETHODCALLTYPE *remove_SourceRemoved )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameSourceWatcher * This,
                  EventRegistrationToken token
        );
    DEPRECATED("PerceptionDepthFrameSourceWatcher may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceWatcher instead.")
                                HRESULT ( STDMETHODCALLTYPE *add_Stopped )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameSourceWatcher * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionDepthFrameSourceWatcher_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
    DEPRECATED("PerceptionDepthFrameSourceWatcher may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceWatcher instead.")
                                   HRESULT ( STDMETHODCALLTYPE *remove_Stopped )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameSourceWatcher * This,
                  EventRegistrationToken token
        );
    DEPRECATED("PerceptionDepthFrameSourceWatcher may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceWatcher instead.")
                                HRESULT ( STDMETHODCALLTYPE *add_EnumerationCompleted )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameSourceWatcher * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionDepthFrameSourceWatcher_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
    DEPRECATED("PerceptionDepthFrameSourceWatcher may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceWatcher instead.")
                                   HRESULT ( STDMETHODCALLTYPE *remove_EnumerationCompleted )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameSourceWatcher * This,
                  EventRegistrationToken token
        );
    DEPRECATED("PerceptionDepthFrameSourceWatcher may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceWatcher instead.")
                               HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameSourceWatcher * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CEnumeration_CDeviceWatcherStatus * value
        );
    DEPRECATED("PerceptionDepthFrameSourceWatcher may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceWatcher instead.")
                      HRESULT ( STDMETHODCALLTYPE *Start )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameSourceWatcher * This
        );
    DEPRECATED("PerceptionDepthFrameSourceWatcher may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceWatcher instead.")
                      HRESULT ( STDMETHODCALLTYPE *Stop )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameSourceWatcher * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameSourceWatcherVtbl;
interface __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameSourceWatcher
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameSourceWatcherVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("PerceptionDepthFrameSourceWatcher may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceWatcher instead.")
    ( (This)->lpVtbl->add_SourceAdded(This,handler,token) )
DEPRECATED("PerceptionDepthFrameSourceWatcher may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceWatcher instead.")
    ( (This)->lpVtbl->remove_SourceAdded(This,token) )
DEPRECATED("PerceptionDepthFrameSourceWatcher may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceWatcher instead.")
    ( (This)->lpVtbl->add_SourceRemoved(This,handler,token) )
DEPRECATED("PerceptionDepthFrameSourceWatcher may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceWatcher instead.")
    ( (This)->lpVtbl->remove_SourceRemoved(This,token) )
DEPRECATED("PerceptionDepthFrameSourceWatcher may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceWatcher instead.")
    ( (This)->lpVtbl->add_Stopped(This,handler,token) )
DEPRECATED("PerceptionDepthFrameSourceWatcher may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceWatcher instead.")
    ( (This)->lpVtbl->remove_Stopped(This,token) )
DEPRECATED("PerceptionDepthFrameSourceWatcher may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceWatcher instead.")
    ( (This)->lpVtbl->add_EnumerationCompleted(This,handler,token) )
DEPRECATED("PerceptionDepthFrameSourceWatcher may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceWatcher instead.")
    ( (This)->lpVtbl->remove_EnumerationCompleted(This,token) )
DEPRECATED("PerceptionDepthFrameSourceWatcher may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceWatcher instead.")
    ( (This)->lpVtbl->get_Status(This,value) )
DEPRECATED("PerceptionDepthFrameSourceWatcher may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceWatcher instead.")
    ( (This)->lpVtbl->Start(This) )
DEPRECATED("PerceptionDepthFrameSourceWatcher may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceWatcher instead.")
    ( (This)->lpVtbl->Stop(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameSourceWatcher;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Perception_IPerceptionFrameSourcePropertiesChangedEventArgs[] = L"Windows.Devices.Perception.IPerceptionFrameSourcePropertiesChangedEventArgs";
typedef struct
DEPRECATED("PerceptionFrameSourcePropertiesChangedEventArgs may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")
__x_ABI_CWindows_CDevices_CPerception_CIPerceptionFrameSourcePropertiesChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionFrameSourcePropertiesChangedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionFrameSourcePropertiesChangedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionFrameSourcePropertiesChangedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionFrameSourcePropertiesChangedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionFrameSourcePropertiesChangedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionFrameSourcePropertiesChangedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("PerceptionFrameSourcePropertiesChangedEventArgs may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_CollectionChange )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionFrameSourcePropertiesChangedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CCollections_CCollectionChange * value
        );
    DEPRECATED("PerceptionFrameSourcePropertiesChangedEventArgs may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_Key )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionFrameSourcePropertiesChangedEventArgs * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPerception_CIPerceptionFrameSourcePropertiesChangedEventArgsVtbl;
interface __x_ABI_CWindows_CDevices_CPerception_CIPerceptionFrameSourcePropertiesChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPerception_CIPerceptionFrameSourcePropertiesChangedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("PerceptionFrameSourcePropertiesChangedEventArgs may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")
    ( (This)->lpVtbl->get_CollectionChange(This,value) )
DEPRECATED("PerceptionFrameSourcePropertiesChangedEventArgs may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")
    ( (This)->lpVtbl->get_Key(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPerception_CIPerceptionFrameSourcePropertiesChangedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Perception_IPerceptionFrameSourcePropertyChangeResult[] = L"Windows.Devices.Perception.IPerceptionFrameSourcePropertyChangeResult";
typedef struct
DEPRECATED("PerceptionFrameSourcePropertyChangeResult may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")
__x_ABI_CWindows_CDevices_CPerception_CIPerceptionFrameSourcePropertyChangeResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionFrameSourcePropertyChangeResult * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionFrameSourcePropertyChangeResult * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionFrameSourcePropertyChangeResult * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionFrameSourcePropertyChangeResult * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionFrameSourcePropertyChangeResult * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionFrameSourcePropertyChangeResult * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("PerceptionFrameSourcePropertyChangeResult may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionFrameSourcePropertyChangeResult * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CPerception_CPerceptionFrameSourcePropertyChangeStatus * value
        );
    DEPRECATED("PerceptionFrameSourcePropertyChangeResult may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_NewValue )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionFrameSourcePropertyChangeResult * This,
                           __RPC__deref_out_opt IInspectable * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPerception_CIPerceptionFrameSourcePropertyChangeResultVtbl;
interface __x_ABI_CWindows_CDevices_CPerception_CIPerceptionFrameSourcePropertyChangeResult
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPerception_CIPerceptionFrameSourcePropertyChangeResultVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("PerceptionFrameSourcePropertyChangeResult may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")
    ( (This)->lpVtbl->get_Status(This,value) )
DEPRECATED("PerceptionFrameSourcePropertyChangeResult may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")
    ( (This)->lpVtbl->get_NewValue(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPerception_CIPerceptionFrameSourcePropertyChangeResult;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Perception_IPerceptionInfraredFrame[] = L"Windows.Devices.Perception.IPerceptionInfraredFrame";
typedef struct
DEPRECATED("PerceptionInfraredFrame may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.InfraredMediaFrame instead.")
__x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrame * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrame * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrame * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrame * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrame * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrame * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("PerceptionInfraredFrame may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.InfraredMediaFrame instead.")
                               HRESULT ( STDMETHODCALLTYPE *get_VideoFrame )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrame * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CIVideoFrame * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameVtbl;
interface __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrame
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("PerceptionInfraredFrame may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.InfraredMediaFrame instead.")
    ( (This)->lpVtbl->get_VideoFrame(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrame;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Perception_IPerceptionInfraredFrameArrivedEventArgs[] = L"Windows.Devices.Perception.IPerceptionInfraredFrameArrivedEventArgs";
typedef struct
DEPRECATED("PerceptionInfraredFrameArrivedEventArgs may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameArrivedEventArgs instead.")
__x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameArrivedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameArrivedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameArrivedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameArrivedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameArrivedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameArrivedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameArrivedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("PerceptionInfraredFrameArrivedEventArgs may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameArrivedEventArgs instead.")
                               HRESULT ( STDMETHODCALLTYPE *get_RelativeTime )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameArrivedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
    DEPRECATED("PerceptionInfraredFrameArrivedEventArgs may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameArrivedEventArgs instead.")
                      HRESULT ( STDMETHODCALLTYPE *TryOpenFrame )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameArrivedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrame * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameArrivedEventArgsVtbl;
interface __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameArrivedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameArrivedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("PerceptionInfraredFrameArrivedEventArgs may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameArrivedEventArgs instead.")
    ( (This)->lpVtbl->get_RelativeTime(This,value) )
DEPRECATED("PerceptionInfraredFrameArrivedEventArgs may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameArrivedEventArgs instead.")
    ( (This)->lpVtbl->TryOpenFrame(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameArrivedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Perception_IPerceptionInfraredFrameReader[] = L"Windows.Devices.Perception.IPerceptionInfraredFrameReader";
typedef struct
DEPRECATED("PerceptionInfraredFrameReader may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameReader instead.")
__x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameReaderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameReader * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameReader * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameReader * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameReader * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameReader * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameReader * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("PerceptionInfraredFrameReader may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameReader instead.")
                                HRESULT ( STDMETHODCALLTYPE *add_FrameArrived )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameReader * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionInfraredFrameReader_Windows__CDevices__CPerception__CPerceptionInfraredFrameArrivedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
    DEPRECATED("PerceptionInfraredFrameReader may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameReader instead.")
                                   HRESULT ( STDMETHODCALLTYPE *remove_FrameArrived )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameReader * This,
                  EventRegistrationToken token
        );
    DEPRECATED("PerceptionInfraredFrameReader may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameReader instead.")
                               HRESULT ( STDMETHODCALLTYPE *get_Source )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameReader * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameSource * * value
        );
    DEPRECATED("PerceptionInfraredFrameReader may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameReader instead.")
                               HRESULT ( STDMETHODCALLTYPE *get_IsPaused )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameReader * This,
                           __RPC__out boolean * value
        );
    DEPRECATED("PerceptionInfraredFrameReader may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameReader instead.")
                               HRESULT ( STDMETHODCALLTYPE *put_IsPaused )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameReader * This,
                  boolean value
        );
    DEPRECATED("PerceptionInfraredFrameReader may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameReader instead.")
                      HRESULT ( STDMETHODCALLTYPE *TryReadLatestFrame )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameReader * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrame * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameReaderVtbl;
interface __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameReader
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameReaderVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("PerceptionInfraredFrameReader may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameReader instead.")
    ( (This)->lpVtbl->add_FrameArrived(This,handler,token) )
DEPRECATED("PerceptionInfraredFrameReader may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameReader instead.")
    ( (This)->lpVtbl->remove_FrameArrived(This,token) )
DEPRECATED("PerceptionInfraredFrameReader may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameReader instead.")
    ( (This)->lpVtbl->get_Source(This,value) )
DEPRECATED("PerceptionInfraredFrameReader may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameReader instead.")
    ( (This)->lpVtbl->get_IsPaused(This,value) )
DEPRECATED("PerceptionInfraredFrameReader may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameReader instead.")
    ( (This)->lpVtbl->put_IsPaused(This,value) )
DEPRECATED("PerceptionInfraredFrameReader may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameReader instead.")
    ( (This)->lpVtbl->TryReadLatestFrame(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameReader;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Perception_IPerceptionInfraredFrameSource[] = L"Windows.Devices.Perception.IPerceptionInfraredFrameSource";
typedef struct
DEPRECATED("PerceptionInfraredFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
__x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameSourceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameSource * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameSource * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameSource * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameSource * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameSource * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameSource * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("PerceptionInfraredFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
                                HRESULT ( STDMETHODCALLTYPE *add_AvailableChanged )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameSource * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionInfraredFrameSource_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
    DEPRECATED("PerceptionInfraredFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
                                   HRESULT ( STDMETHODCALLTYPE *remove_AvailableChanged )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameSource * This,
                  EventRegistrationToken token
        );
    DEPRECATED("PerceptionInfraredFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
                                HRESULT ( STDMETHODCALLTYPE *add_ActiveChanged )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameSource * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionInfraredFrameSource_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
    DEPRECATED("PerceptionInfraredFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
                                   HRESULT ( STDMETHODCALLTYPE *remove_ActiveChanged )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameSource * This,
                  EventRegistrationToken token
        );
    DEPRECATED("PerceptionInfraredFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
                                HRESULT ( STDMETHODCALLTYPE *add_PropertiesChanged )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameSource * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionInfraredFrameSource_Windows__CDevices__CPerception__CPerceptionFrameSourcePropertiesChangedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
    DEPRECATED("PerceptionInfraredFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
                                   HRESULT ( STDMETHODCALLTYPE *remove_PropertiesChanged )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameSource * This,
                  EventRegistrationToken token
        );
    DEPRECATED("PerceptionInfraredFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
                                HRESULT ( STDMETHODCALLTYPE *add_VideoProfileChanged )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameSource * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionInfraredFrameSource_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
    DEPRECATED("PerceptionInfraredFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
                                   HRESULT ( STDMETHODCALLTYPE *remove_VideoProfileChanged )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameSource * This,
                  EventRegistrationToken token
        );
    DEPRECATED("PerceptionInfraredFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
                                HRESULT ( STDMETHODCALLTYPE *add_CameraIntrinsicsChanged )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameSource * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionInfraredFrameSource_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
    DEPRECATED("PerceptionInfraredFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
                                   HRESULT ( STDMETHODCALLTYPE *remove_CameraIntrinsicsChanged )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameSource * This,
                  EventRegistrationToken token
        );
    DEPRECATED("PerceptionInfraredFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
                               HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameSource * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    DEPRECATED("PerceptionInfraredFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
                               HRESULT ( STDMETHODCALLTYPE *get_DisplayName )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameSource * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    DEPRECATED("PerceptionInfraredFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
                               HRESULT ( STDMETHODCALLTYPE *get_DeviceKind )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameSource * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    DEPRECATED("PerceptionInfraredFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
                               HRESULT ( STDMETHODCALLTYPE *get_Available )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameSource * This,
                           __RPC__out boolean * value
        );
    DEPRECATED("PerceptionInfraredFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
                               HRESULT ( STDMETHODCALLTYPE *get_Active )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameSource * This,
                           __RPC__out boolean * value
        );
    DEPRECATED("PerceptionInfraredFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
                               HRESULT ( STDMETHODCALLTYPE *get_IsControlled )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameSource * This,
                           __RPC__out boolean * value
        );
    DEPRECATED("PerceptionInfraredFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
                               HRESULT ( STDMETHODCALLTYPE *get_Properties )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameSource * This,
                           __RPC__deref_out_opt __FIMapView_2_HSTRING_IInspectable * * value
        );
    DEPRECATED("PerceptionInfraredFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
                               HRESULT ( STDMETHODCALLTYPE *get_SupportedVideoProfiles )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameSource * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CPerception__CPerceptionVideoProfile * * value
        );
    DEPRECATED("PerceptionInfraredFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
                               HRESULT ( STDMETHODCALLTYPE *get_AvailableVideoProfiles )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameSource * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CPerception__CPerceptionVideoProfile * * value
        );
    DEPRECATED("PerceptionInfraredFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
                               HRESULT ( STDMETHODCALLTYPE *get_VideoProfile )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameSource * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CPerception_CIPerceptionVideoProfile * * value
        );
    DEPRECATED("PerceptionInfraredFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
                               HRESULT ( STDMETHODCALLTYPE *get_CameraIntrinsics )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameSource * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics * * value
        );
    DEPRECATED("PerceptionInfraredFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
                      HRESULT ( STDMETHODCALLTYPE *AcquireControlSession )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameSource * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CPerception_CIPerceptionControlSession * * result
        );
    DEPRECATED("PerceptionInfraredFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
                      HRESULT ( STDMETHODCALLTYPE *CanControlIndependentlyFrom )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameSource * This,
                  __RPC__in HSTRING targetId,
                           __RPC__out boolean * result
        );
    DEPRECATED("PerceptionInfraredFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
                      HRESULT ( STDMETHODCALLTYPE *IsCorrelatedWith )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameSource * This,
                  __RPC__in HSTRING targetId,
                           __RPC__out boolean * result
        );
    DEPRECATED("PerceptionInfraredFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
                      HRESULT ( STDMETHODCALLTYPE *TryGetTransformTo )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameSource * This,
                  __RPC__in HSTRING targetId,
                   __RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CMatrix4x4 * result,
                           __RPC__out boolean * hasResult
        );
    DEPRECATED("PerceptionInfraredFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
                      HRESULT ( STDMETHODCALLTYPE *TryGetDepthCorrelatedCameraIntrinsicsAsync )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameSource * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameSource * target,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CPerception__CPerceptionDepthCorrelatedCameraIntrinsics * * result
        );
    DEPRECATED("PerceptionInfraredFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
                      HRESULT ( STDMETHODCALLTYPE *TryGetDepthCorrelatedCoordinateMapperAsync )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameSource * This,
                  __RPC__in HSTRING targetId,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CPerception_CIPerceptionDepthFrameSource * depthFrameSourceToMapWith,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CPerception__CPerceptionDepthCorrelatedCoordinateMapper * * result
        );
    DEPRECATED("PerceptionInfraredFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
                      HRESULT ( STDMETHODCALLTYPE *TrySetVideoProfileAsync )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameSource * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CPerception_CIPerceptionControlSession * controlSession,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CPerception_CIPerceptionVideoProfile * profile,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CPerception__CPerceptionFrameSourcePropertyChangeResult * * result
        );
    DEPRECATED("PerceptionInfraredFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
                      HRESULT ( STDMETHODCALLTYPE *OpenReader )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameSource * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameReader * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameSourceVtbl;
interface __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameSource
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameSourceVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("PerceptionInfraredFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
    ( (This)->lpVtbl->add_AvailableChanged(This,handler,token) )
DEPRECATED("PerceptionInfraredFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
    ( (This)->lpVtbl->remove_AvailableChanged(This,token) )
DEPRECATED("PerceptionInfraredFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
    ( (This)->lpVtbl->add_ActiveChanged(This,handler,token) )
DEPRECATED("PerceptionInfraredFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
    ( (This)->lpVtbl->remove_ActiveChanged(This,token) )
DEPRECATED("PerceptionInfraredFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
    ( (This)->lpVtbl->add_PropertiesChanged(This,handler,token) )
DEPRECATED("PerceptionInfraredFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
    ( (This)->lpVtbl->remove_PropertiesChanged(This,token) )
DEPRECATED("PerceptionInfraredFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
    ( (This)->lpVtbl->add_VideoProfileChanged(This,handler,token) )
DEPRECATED("PerceptionInfraredFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
    ( (This)->lpVtbl->remove_VideoProfileChanged(This,token) )
DEPRECATED("PerceptionInfraredFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
    ( (This)->lpVtbl->add_CameraIntrinsicsChanged(This,handler,token) )
DEPRECATED("PerceptionInfraredFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
    ( (This)->lpVtbl->remove_CameraIntrinsicsChanged(This,token) )
DEPRECATED("PerceptionInfraredFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
    ( (This)->lpVtbl->get_Id(This,value) )
DEPRECATED("PerceptionInfraredFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
    ( (This)->lpVtbl->get_DisplayName(This,value) )
DEPRECATED("PerceptionInfraredFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
    ( (This)->lpVtbl->get_DeviceKind(This,value) )
DEPRECATED("PerceptionInfraredFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
    ( (This)->lpVtbl->get_Available(This,value) )
DEPRECATED("PerceptionInfraredFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
    ( (This)->lpVtbl->get_Active(This,value) )
DEPRECATED("PerceptionInfraredFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
    ( (This)->lpVtbl->get_IsControlled(This,value) )
DEPRECATED("PerceptionInfraredFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
    ( (This)->lpVtbl->get_Properties(This,value) )
DEPRECATED("PerceptionInfraredFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
    ( (This)->lpVtbl->get_SupportedVideoProfiles(This,value) )
DEPRECATED("PerceptionInfraredFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
    ( (This)->lpVtbl->get_AvailableVideoProfiles(This,value) )
DEPRECATED("PerceptionInfraredFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
    ( (This)->lpVtbl->get_VideoProfile(This,value) )
DEPRECATED("PerceptionInfraredFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
    ( (This)->lpVtbl->get_CameraIntrinsics(This,value) )
DEPRECATED("PerceptionInfraredFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
    ( (This)->lpVtbl->AcquireControlSession(This,result) )
DEPRECATED("PerceptionInfraredFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
    ( (This)->lpVtbl->CanControlIndependentlyFrom(This,targetId,result) )
DEPRECATED("PerceptionInfraredFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
    ( (This)->lpVtbl->IsCorrelatedWith(This,targetId,result) )
DEPRECATED("PerceptionInfraredFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
    ( (This)->lpVtbl->TryGetTransformTo(This,targetId,result,hasResult) )
DEPRECATED("PerceptionInfraredFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
    ( (This)->lpVtbl->TryGetDepthCorrelatedCameraIntrinsicsAsync(This,target,result) )
DEPRECATED("PerceptionInfraredFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
    ( (This)->lpVtbl->TryGetDepthCorrelatedCoordinateMapperAsync(This,targetId,depthFrameSourceToMapWith,result) )
DEPRECATED("PerceptionInfraredFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
    ( (This)->lpVtbl->TrySetVideoProfileAsync(This,controlSession,profile,result) )
DEPRECATED("PerceptionInfraredFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
    ( (This)->lpVtbl->OpenReader(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameSource;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Perception_IPerceptionInfraredFrameSource2[] = L"Windows.Devices.Perception.IPerceptionInfraredFrameSource2";
typedef struct
DEPRECATED("PerceptionInfraredFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
__x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameSource2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameSource2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameSource2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameSource2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameSource2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameSource2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameSource2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("PerceptionInfraredFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
                               HRESULT ( STDMETHODCALLTYPE *get_DeviceId )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameSource2 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameSource2Vtbl;
interface __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameSource2
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameSource2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("PerceptionInfraredFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
    ( (This)->lpVtbl->get_DeviceId(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameSource2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Perception_IPerceptionInfraredFrameSourceAddedEventArgs[] = L"Windows.Devices.Perception.IPerceptionInfraredFrameSourceAddedEventArgs";
typedef struct
DEPRECATED("PerceptionInfraredFrameSourceAddedEventArgs may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")
__x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameSourceAddedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameSourceAddedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameSourceAddedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameSourceAddedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameSourceAddedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameSourceAddedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameSourceAddedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("PerceptionInfraredFrameSourceAddedEventArgs may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_FrameSource )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameSourceAddedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameSource * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameSourceAddedEventArgsVtbl;
interface __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameSourceAddedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameSourceAddedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("PerceptionInfraredFrameSourceAddedEventArgs may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")
    ( (This)->lpVtbl->get_FrameSource(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameSourceAddedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Perception_IPerceptionInfraredFrameSourceRemovedEventArgs[] = L"Windows.Devices.Perception.IPerceptionInfraredFrameSourceRemovedEventArgs";
typedef struct
DEPRECATED("PerceptionInfraredFrameSourceRemovedEventArgs may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")
__x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameSourceRemovedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameSourceRemovedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameSourceRemovedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameSourceRemovedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameSourceRemovedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameSourceRemovedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameSourceRemovedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("PerceptionInfraredFrameSourceRemovedEventArgs may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_FrameSource )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameSourceRemovedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameSource * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameSourceRemovedEventArgsVtbl;
interface __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameSourceRemovedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameSourceRemovedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("PerceptionInfraredFrameSourceRemovedEventArgs may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")
    ( (This)->lpVtbl->get_FrameSource(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameSourceRemovedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Perception_IPerceptionInfraredFrameSourceStatics[] = L"Windows.Devices.Perception.IPerceptionInfraredFrameSourceStatics";
typedef struct
DEPRECATED("PerceptionInfraredFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")
__x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameSourceStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameSourceStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameSourceStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameSourceStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameSourceStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameSourceStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameSourceStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("PerceptionInfraredFrameSource.CreateWatcher may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceInformation.CreateWatcher instead.")
                      HRESULT ( STDMETHODCALLTYPE *CreateWatcher )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameSourceStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameSourceWatcher * * watcher
        );
    DEPRECATED("PerceptionInfraredFrameSource.FindAllAsync may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceInformation.FindAllAsync instead.")
                      HRESULT ( STDMETHODCALLTYPE *FindAllAsync )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameSourceStatics * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CPerception__CPerceptionInfraredFrameSource * * result
        );
    DEPRECATED("PerceptionInfraredFrameSource.FromIdAsync may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceInformation.FromIdAsync instead.")
                      HRESULT ( STDMETHODCALLTYPE *FromIdAsync )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameSourceStatics * This,
                  __RPC__in HSTRING id,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CPerception__CPerceptionInfraredFrameSource * * result
        );
    DEPRECATED("PerceptionInfraredFrameSource.RequestAccessAsync may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")
                      HRESULT ( STDMETHODCALLTYPE *RequestAccessAsync )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameSourceStatics * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CPerception__CPerceptionFrameSourceAccessStatus * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameSourceStaticsVtbl;
interface __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameSourceStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameSourceStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("PerceptionInfraredFrameSource.CreateWatcher may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceInformation.CreateWatcher instead.")
    ( (This)->lpVtbl->CreateWatcher(This,watcher) )
DEPRECATED("PerceptionInfraredFrameSource.FindAllAsync may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceInformation.FindAllAsync instead.")
    ( (This)->lpVtbl->FindAllAsync(This,result) )
DEPRECATED("PerceptionInfraredFrameSource.FromIdAsync may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceInformation.FromIdAsync instead.")
    ( (This)->lpVtbl->FromIdAsync(This,id,result) )
DEPRECATED("PerceptionInfraredFrameSource.RequestAccessAsync may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")
    ( (This)->lpVtbl->RequestAccessAsync(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameSourceStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Perception_IPerceptionInfraredFrameSourceWatcher[] = L"Windows.Devices.Perception.IPerceptionInfraredFrameSourceWatcher";
typedef struct
DEPRECATED("PerceptionInfraredFrameSourceWatcher may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceWatcher instead.")
__x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameSourceWatcherVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameSourceWatcher * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameSourceWatcher * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameSourceWatcher * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameSourceWatcher * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameSourceWatcher * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameSourceWatcher * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("PerceptionInfraredFrameSourceWatcher may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceWatcher instead.")
                                HRESULT ( STDMETHODCALLTYPE *add_SourceAdded )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameSourceWatcher * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionInfraredFrameSourceWatcher_Windows__CDevices__CPerception__CPerceptionInfraredFrameSourceAddedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
    DEPRECATED("PerceptionInfraredFrameSourceWatcher may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceWatcher instead.")
                                   HRESULT ( STDMETHODCALLTYPE *remove_SourceAdded )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameSourceWatcher * This,
                  EventRegistrationToken token
        );
    DEPRECATED("PerceptionInfraredFrameSourceWatcher may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceWatcher instead.")
                                HRESULT ( STDMETHODCALLTYPE *add_SourceRemoved )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameSourceWatcher * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionInfraredFrameSourceWatcher_Windows__CDevices__CPerception__CPerceptionInfraredFrameSourceRemovedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
    DEPRECATED("PerceptionInfraredFrameSourceWatcher may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceWatcher instead.")
                                   HRESULT ( STDMETHODCALLTYPE *remove_SourceRemoved )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameSourceWatcher * This,
                  EventRegistrationToken token
        );
    DEPRECATED("PerceptionInfraredFrameSourceWatcher may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceWatcher instead.")
                                HRESULT ( STDMETHODCALLTYPE *add_Stopped )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameSourceWatcher * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionInfraredFrameSourceWatcher_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
    DEPRECATED("PerceptionInfraredFrameSourceWatcher may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceWatcher instead.")
                                   HRESULT ( STDMETHODCALLTYPE *remove_Stopped )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameSourceWatcher * This,
                  EventRegistrationToken token
        );
    DEPRECATED("PerceptionInfraredFrameSourceWatcher may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceWatcher instead.")
                                HRESULT ( STDMETHODCALLTYPE *add_EnumerationCompleted )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameSourceWatcher * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CPerception__CPerceptionInfraredFrameSourceWatcher_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
    DEPRECATED("PerceptionInfraredFrameSourceWatcher may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceWatcher instead.")
                                   HRESULT ( STDMETHODCALLTYPE *remove_EnumerationCompleted )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameSourceWatcher * This,
                  EventRegistrationToken token
        );
    DEPRECATED("PerceptionInfraredFrameSourceWatcher may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceWatcher instead.")
                               HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameSourceWatcher * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CEnumeration_CDeviceWatcherStatus * value
        );
    DEPRECATED("PerceptionInfraredFrameSourceWatcher may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceWatcher instead.")
                      HRESULT ( STDMETHODCALLTYPE *Start )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameSourceWatcher * This
        );
    DEPRECATED("PerceptionInfraredFrameSourceWatcher may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceWatcher instead.")
                      HRESULT ( STDMETHODCALLTYPE *Stop )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameSourceWatcher * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameSourceWatcherVtbl;
interface __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameSourceWatcher
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameSourceWatcherVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("PerceptionInfraredFrameSourceWatcher may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceWatcher instead.")
    ( (This)->lpVtbl->add_SourceAdded(This,handler,token) )
DEPRECATED("PerceptionInfraredFrameSourceWatcher may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceWatcher instead.")
    ( (This)->lpVtbl->remove_SourceAdded(This,token) )
DEPRECATED("PerceptionInfraredFrameSourceWatcher may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceWatcher instead.")
    ( (This)->lpVtbl->add_SourceRemoved(This,handler,token) )
DEPRECATED("PerceptionInfraredFrameSourceWatcher may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceWatcher instead.")
    ( (This)->lpVtbl->remove_SourceRemoved(This,token) )
DEPRECATED("PerceptionInfraredFrameSourceWatcher may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceWatcher instead.")
    ( (This)->lpVtbl->add_Stopped(This,handler,token) )
DEPRECATED("PerceptionInfraredFrameSourceWatcher may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceWatcher instead.")
    ( (This)->lpVtbl->remove_Stopped(This,token) )
DEPRECATED("PerceptionInfraredFrameSourceWatcher may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceWatcher instead.")
    ( (This)->lpVtbl->add_EnumerationCompleted(This,handler,token) )
DEPRECATED("PerceptionInfraredFrameSourceWatcher may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceWatcher instead.")
    ( (This)->lpVtbl->remove_EnumerationCompleted(This,token) )
DEPRECATED("PerceptionInfraredFrameSourceWatcher may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceWatcher instead.")
    ( (This)->lpVtbl->get_Status(This,value) )
DEPRECATED("PerceptionInfraredFrameSourceWatcher may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceWatcher instead.")
    ( (This)->lpVtbl->Start(This) )
DEPRECATED("PerceptionInfraredFrameSourceWatcher may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceWatcher instead.")
    ( (This)->lpVtbl->Stop(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPerception_CIPerceptionInfraredFrameSourceWatcher;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Perception_IPerceptionVideoProfile[] = L"Windows.Devices.Perception.IPerceptionVideoProfile";
typedef struct
DEPRECATED("PerceptionVideoProfile may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameFormat instead.")
__x_ABI_CWindows_CDevices_CPerception_CIPerceptionVideoProfileVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionVideoProfile * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionVideoProfile * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionVideoProfile * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionVideoProfile * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionVideoProfile * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CIPerceptionVideoProfile * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("PerceptionVideoProfile may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameFormat instead.")
                               HRESULT ( STDMETHODCALLTYPE *get_BitmapPixelFormat )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionVideoProfile * This,
                           __RPC__out __x_ABI_CWindows_CGraphics_CImaging_CBitmapPixelFormat * value
        );
    DEPRECATED("PerceptionVideoProfile may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameFormat instead.")
                               HRESULT ( STDMETHODCALLTYPE *get_BitmapAlphaMode )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionVideoProfile * This,
                           __RPC__out __x_ABI_CWindows_CGraphics_CImaging_CBitmapAlphaMode * value
        );
    DEPRECATED("PerceptionVideoProfile may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameFormat instead.")
                               HRESULT ( STDMETHODCALLTYPE *get_Width )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionVideoProfile * This,
                           __RPC__out INT32 * value
        );
    DEPRECATED("PerceptionVideoProfile may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameFormat instead.")
                               HRESULT ( STDMETHODCALLTYPE *get_Height )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionVideoProfile * This,
                           __RPC__out INT32 * value
        );
    DEPRECATED("PerceptionVideoProfile may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameFormat instead.")
                               HRESULT ( STDMETHODCALLTYPE *get_FrameDuration )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionVideoProfile * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
    DEPRECATED("PerceptionVideoProfile may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameFormat instead.")
                      HRESULT ( STDMETHODCALLTYPE *IsEqual )(
        __x_ABI_CWindows_CDevices_CPerception_CIPerceptionVideoProfile * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CPerception_CIPerceptionVideoProfile * other,
                           __RPC__out boolean * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPerception_CIPerceptionVideoProfileVtbl;
interface __x_ABI_CWindows_CDevices_CPerception_CIPerceptionVideoProfile
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPerception_CIPerceptionVideoProfileVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("PerceptionVideoProfile may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameFormat instead.")
    ( (This)->lpVtbl->get_BitmapPixelFormat(This,value) )
DEPRECATED("PerceptionVideoProfile may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameFormat instead.")
    ( (This)->lpVtbl->get_BitmapAlphaMode(This,value) )
DEPRECATED("PerceptionVideoProfile may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameFormat instead.")
    ( (This)->lpVtbl->get_Width(This,value) )
DEPRECATED("PerceptionVideoProfile may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameFormat instead.")
    ( (This)->lpVtbl->get_Height(This,value) )
DEPRECATED("PerceptionVideoProfile may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameFormat instead.")
    ( (This)->lpVtbl->get_FrameDuration(This,value) )
DEPRECATED("PerceptionVideoProfile may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameFormat instead.")
    ( (This)->lpVtbl->IsEqual(This,other,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPerception_CIPerceptionVideoProfile;
DEPRECATED("KnownCameraIntrinsicsProperties may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Perception_KnownCameraIntrinsicsProperties[] = L"Windows.Devices.Perception.KnownCameraIntrinsicsProperties";
DEPRECATED("KnownPerceptionColorFrameSourceProperties may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Perception_KnownPerceptionColorFrameSourceProperties[] = L"Windows.Devices.Perception.KnownPerceptionColorFrameSourceProperties";
DEPRECATED("KnownPerceptionDepthFrameSourceProperties may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Perception_KnownPerceptionDepthFrameSourceProperties[] = L"Windows.Devices.Perception.KnownPerceptionDepthFrameSourceProperties";
DEPRECATED("KnownPerceptionFrameSourceProperties may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Perception_KnownPerceptionFrameSourceProperties[] = L"Windows.Devices.Perception.KnownPerceptionFrameSourceProperties";
DEPRECATED("KnownPerceptionInfraredFrameSourceProperties may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Perception_KnownPerceptionInfraredFrameSourceProperties[] = L"Windows.Devices.Perception.KnownPerceptionInfraredFrameSourceProperties";
DEPRECATED("KnownPerceptionVideoFrameSourceProperties may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Perception_KnownPerceptionVideoFrameSourceProperties[] = L"Windows.Devices.Perception.KnownPerceptionVideoFrameSourceProperties";
DEPRECATED("KnownPerceptionVideoProfileProperties may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Perception_KnownPerceptionVideoProfileProperties[] = L"Windows.Devices.Perception.KnownPerceptionVideoProfileProperties";
DEPRECATED("PerceptionColorFrame may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.VideoMediaFrame instead.")
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Perception_PerceptionColorFrame[] = L"Windows.Devices.Perception.PerceptionColorFrame";
DEPRECATED("PerceptionColorFrameArrivedEventArgs may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameArrivedEventArgs instead.")
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Perception_PerceptionColorFrameArrivedEventArgs[] = L"Windows.Devices.Perception.PerceptionColorFrameArrivedEventArgs";
DEPRECATED("PerceptionColorFrameReader may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameReader instead.")
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Perception_PerceptionColorFrameReader[] = L"Windows.Devices.Perception.PerceptionColorFrameReader";
DEPRECATED("PerceptionColorFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Frames.MediaFrameSource instead.")
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Perception_PerceptionColorFrameSource[] = L"Windows.Devices.Perception.PerceptionColorFrameSource";
DEPRECATED("PerceptionColorFrameSourceAddedEventArgs may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Perception_PerceptionColorFrameSourceAddedEventArgs[] = L"Windows.Devices.Perception.PerceptionColorFrameSourceAddedEventArgs";
DEPRECATED("PerceptionColorFrameSourceRemovedEventArgs may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Perception_PerceptionColorFrameSourceRemovedEventArgs[] = L"Windows.Devices.Perception.PerceptionColorFrameSourceRemovedEventArgs";
DEPRECATED("PerceptionColorFrameSourceWatcher may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceWatcher instead.")
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Perception_PerceptionColorFrameSourceWatcher[] = L"Windows.Devices.Perception.PerceptionColorFrameSourceWatcher";
DEPRECATED("PerceptionControlSession may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Perception_PerceptionControlSession[] = L"Windows.Devices.Perception.PerceptionControlSession";
DEPRECATED("PerceptionDepthCorrelatedCameraIntrinsics may be unavailable after Windows Creator Update.  Use Windows.Media.Devices.Core.DepthCorrelatedCoordinateMapper instead.")
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Perception_PerceptionDepthCorrelatedCameraIntrinsics[] = L"Windows.Devices.Perception.PerceptionDepthCorrelatedCameraIntrinsics";
DEPRECATED("PerceptionDepthCorrelatedCoordinateMapper may be unavailable after Windows Creator Update.  Use Windows.Media.Devices.Core.DepthCorrelatedCoordinateMapper instead.")
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Perception_PerceptionDepthCorrelatedCoordinateMapper[] = L"Windows.Devices.Perception.PerceptionDepthCorrelatedCoordinateMapper";
DEPRECATED("PerceptionDepthFrame may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.DepthMediaFrame instead.")
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Perception_PerceptionDepthFrame[] = L"Windows.Devices.Perception.PerceptionDepthFrame";
DEPRECATED("PerceptionDepthFrameArrivedEventArgs may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameArrivedEventArgs instead.")
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Perception_PerceptionDepthFrameArrivedEventArgs[] = L"Windows.Devices.Perception.PerceptionDepthFrameArrivedEventArgs";
DEPRECATED("PerceptionDepthFrameReader may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameReader instead.")
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Perception_PerceptionDepthFrameReader[] = L"Windows.Devices.Perception.PerceptionDepthFrameReader";
DEPRECATED("PerceptionDepthFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Frames.MediaFrameSource instead.")
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Perception_PerceptionDepthFrameSource[] = L"Windows.Devices.Perception.PerceptionDepthFrameSource";
DEPRECATED("PerceptionDepthFrameSourceAddedEventArgs may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Perception_PerceptionDepthFrameSourceAddedEventArgs[] = L"Windows.Devices.Perception.PerceptionDepthFrameSourceAddedEventArgs";
DEPRECATED("PerceptionDepthFrameSourceRemovedEventArgs may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Perception_PerceptionDepthFrameSourceRemovedEventArgs[] = L"Windows.Devices.Perception.PerceptionDepthFrameSourceRemovedEventArgs";
DEPRECATED("PerceptionDepthFrameSourceWatcher may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceWatcher instead.")
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Perception_PerceptionDepthFrameSourceWatcher[] = L"Windows.Devices.Perception.PerceptionDepthFrameSourceWatcher";
DEPRECATED("PerceptionFrameSourcePropertiesChangedEventArgs may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Perception_PerceptionFrameSourcePropertiesChangedEventArgs[] = L"Windows.Devices.Perception.PerceptionFrameSourcePropertiesChangedEventArgs";
DEPRECATED("PerceptionFrameSourcePropertyChangeResult may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Perception_PerceptionFrameSourcePropertyChangeResult[] = L"Windows.Devices.Perception.PerceptionFrameSourcePropertyChangeResult";
DEPRECATED("PerceptionInfraredFrame may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.InfraredMediaFrame instead.")
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Perception_PerceptionInfraredFrame[] = L"Windows.Devices.Perception.PerceptionInfraredFrame";
DEPRECATED("PerceptionInfraredFrameArrivedEventArgs may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameArrivedEventArgs instead.")
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Perception_PerceptionInfraredFrameArrivedEventArgs[] = L"Windows.Devices.Perception.PerceptionInfraredFrameArrivedEventArgs";
DEPRECATED("PerceptionInfraredFrameReader may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameReader instead.")
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Perception_PerceptionInfraredFrameReader[] = L"Windows.Devices.Perception.PerceptionInfraredFrameReader";
DEPRECATED("PerceptionInfraredFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Frames.MediaFrameSource instead.")
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Perception_PerceptionInfraredFrameSource[] = L"Windows.Devices.Perception.PerceptionInfraredFrameSource";
DEPRECATED("PerceptionInfraredFrameSourceAddedEventArgs may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Perception_PerceptionInfraredFrameSourceAddedEventArgs[] = L"Windows.Devices.Perception.PerceptionInfraredFrameSourceAddedEventArgs";
DEPRECATED("PerceptionInfraredFrameSourceRemovedEventArgs may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Perception_PerceptionInfraredFrameSourceRemovedEventArgs[] = L"Windows.Devices.Perception.PerceptionInfraredFrameSourceRemovedEventArgs";
DEPRECATED("PerceptionInfraredFrameSourceWatcher may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceWatcher instead.")
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Perception_PerceptionInfraredFrameSourceWatcher[] = L"Windows.Devices.Perception.PerceptionInfraredFrameSourceWatcher";
DEPRECATED("PerceptionVideoProfile may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameFormat instead.")
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Perception_PerceptionVideoProfile[] = L"Windows.Devices.Perception.PerceptionVideoProfile";
       
       
#pragma clang diagnostic pop

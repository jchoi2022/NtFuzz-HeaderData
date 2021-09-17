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
typedef interface __x_ABI_CWindows_CDevices_CHaptics_CIKnownSimpleHapticsControllerWaveformsStatics __x_ABI_CWindows_CDevices_CHaptics_CIKnownSimpleHapticsControllerWaveformsStatics;
typedef interface __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsController __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsController;
typedef interface __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsControllerFeedback __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsControllerFeedback;
typedef interface __x_ABI_CWindows_CDevices_CHaptics_CIVibrationDevice __x_ABI_CWindows_CDevices_CHaptics_CIVibrationDevice;
typedef interface __x_ABI_CWindows_CDevices_CHaptics_CIVibrationDeviceStatics __x_ABI_CWindows_CDevices_CHaptics_CIVibrationDeviceStatics;
typedef interface __FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsController __FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsController;
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsController;
typedef struct __FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsController * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsController * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsController * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsController * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsController * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsController * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsController * This, __RPC__out __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsController * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsController * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsController * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsController * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsController * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerVtbl;
interface __FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsController
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CDevices__CHaptics__CSimpleHapticsController __FIIterable_1_Windows__CDevices__CHaptics__CSimpleHapticsController;
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CHaptics__CSimpleHapticsController;
typedef struct __FIIterable_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CDevices__CHaptics__CSimpleHapticsController * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CHaptics__CSimpleHapticsController * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CHaptics__CSimpleHapticsController * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CHaptics__CSimpleHapticsController * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CHaptics__CSimpleHapticsController * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CHaptics__CSimpleHapticsController * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CHaptics__CSimpleHapticsController * This, __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsController **first);
    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerVtbl;
interface __FIIterable_1_Windows__CDevices__CHaptics__CSimpleHapticsController
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedback __FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedback;
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedback;
typedef struct __FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedbackVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedback * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedback * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedback * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedback * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedback * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedback * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedback * This, __RPC__out __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsControllerFeedback * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedback * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedback * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedback * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsControllerFeedback * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedbackVtbl;
interface __FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedback
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedbackVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedback __FIIterable_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedback;
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedback;
typedef struct __FIIterable_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedbackVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedback * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedback * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedback * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedback * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedback * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedback * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedback * This, __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedback **first);
    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedbackVtbl;
interface __FIIterable_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedback
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedbackVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CDevices__CHaptics__CVibrationDevice __FIIterator_1_Windows__CDevices__CHaptics__CVibrationDevice;
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CHaptics__CVibrationDevice;
typedef struct __FIIterator_1_Windows__CDevices__CHaptics__CVibrationDeviceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CDevices__CHaptics__CVibrationDevice * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CHaptics__CVibrationDevice * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CHaptics__CVibrationDevice * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CHaptics__CVibrationDevice * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CHaptics__CVibrationDevice * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CHaptics__CVibrationDevice * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CHaptics__CVibrationDevice * This, __RPC__out __x_ABI_CWindows_CDevices_CHaptics_CIVibrationDevice * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CHaptics__CVibrationDevice * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CHaptics__CVibrationDevice * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CHaptics__CVibrationDevice * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CHaptics_CIVibrationDevice * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CHaptics__CVibrationDeviceVtbl;
interface __FIIterator_1_Windows__CDevices__CHaptics__CVibrationDevice
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CHaptics__CVibrationDeviceVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CDevices__CHaptics__CVibrationDevice __FIIterable_1_Windows__CDevices__CHaptics__CVibrationDevice;
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CHaptics__CVibrationDevice;
typedef struct __FIIterable_1_Windows__CDevices__CHaptics__CVibrationDeviceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CDevices__CHaptics__CVibrationDevice * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CHaptics__CVibrationDevice * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CHaptics__CVibrationDevice * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CHaptics__CVibrationDevice * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CHaptics__CVibrationDevice * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CHaptics__CVibrationDevice * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CHaptics__CVibrationDevice * This, __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CHaptics__CVibrationDevice **first);
    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CHaptics__CVibrationDeviceVtbl;
interface __FIIterable_1_Windows__CDevices__CHaptics__CVibrationDevice
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CHaptics__CVibrationDeviceVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsController __FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsController;
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsController;
typedef struct __FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsController * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsController * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsController * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsController * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsController * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsController * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsController * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsController * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsController * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsController * This,
                       __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsController * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsController * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsController * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerVtbl;
interface __FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsController
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedback __FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedback;
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedback;
typedef struct __FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedbackVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedback * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedback * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedback * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedback * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedback * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedback * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedback * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsControllerFeedback * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedback * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedback * This,
                       __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsControllerFeedback * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedback * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsControllerFeedback * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedbackVtbl;
interface __FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedback
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedbackVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDevice __FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDevice;
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDevice;
typedef struct __FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDeviceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDevice * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDevice * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDevice * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDevice * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDevice * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDevice * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDevice * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CDevices_CHaptics_CIVibrationDevice * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDevice * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDevice * This,
                       __x_ABI_CWindows_CDevices_CHaptics_CIVibrationDevice * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDevice * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CHaptics_CIVibrationDevice * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDeviceVtbl;
interface __FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDevice
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDeviceVtbl *lpVtbl;
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
enum __x_ABI_CWindows_CDevices_CHaptics_CVibrationAccessStatus;
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHaptics__CVibrationAccessStatus __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHaptics__CVibrationAccessStatus;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHaptics__CVibrationAccessStatus;
typedef interface __FIAsyncOperation_1_Windows__CDevices__CHaptics__CVibrationAccessStatus __FIAsyncOperation_1_Windows__CDevices__CHaptics__CVibrationAccessStatus;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHaptics__CVibrationAccessStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHaptics__CVibrationAccessStatus * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHaptics__CVibrationAccessStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHaptics__CVibrationAccessStatus * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHaptics__CVibrationAccessStatus * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CHaptics__CVibrationAccessStatus *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHaptics__CVibrationAccessStatusVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHaptics__CVibrationAccessStatus
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHaptics__CVibrationAccessStatusVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CDevices__CHaptics__CVibrationAccessStatus __FIAsyncOperation_1_Windows__CDevices__CHaptics__CVibrationAccessStatus;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CHaptics__CVibrationAccessStatus;
typedef struct __FIAsyncOperation_1_Windows__CDevices__CHaptics__CVibrationAccessStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CHaptics__CVibrationAccessStatus * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CHaptics__CVibrationAccessStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CHaptics__CVibrationAccessStatus * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CHaptics__CVibrationAccessStatus * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CHaptics__CVibrationAccessStatus * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CHaptics__CVibrationAccessStatus * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CHaptics__CVibrationAccessStatus * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHaptics__CVibrationAccessStatus *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CHaptics__CVibrationAccessStatus * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHaptics__CVibrationAccessStatus **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CHaptics__CVibrationAccessStatus * This, __RPC__out enum __x_ABI_CWindows_CDevices_CHaptics_CVibrationAccessStatus *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CHaptics__CVibrationAccessStatusVtbl;
interface __FIAsyncOperation_1_Windows__CDevices__CHaptics__CVibrationAccessStatus
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CHaptics__CVibrationAccessStatusVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHaptics__CVibrationDevice __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHaptics__CVibrationDevice;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHaptics__CVibrationDevice;
typedef interface __FIAsyncOperation_1_Windows__CDevices__CHaptics__CVibrationDevice __FIAsyncOperation_1_Windows__CDevices__CHaptics__CVibrationDevice;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHaptics__CVibrationDeviceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHaptics__CVibrationDevice * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHaptics__CVibrationDevice * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHaptics__CVibrationDevice * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHaptics__CVibrationDevice * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CHaptics__CVibrationDevice *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHaptics__CVibrationDeviceVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHaptics__CVibrationDevice
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHaptics__CVibrationDeviceVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CDevices__CHaptics__CVibrationDevice __FIAsyncOperation_1_Windows__CDevices__CHaptics__CVibrationDevice;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CHaptics__CVibrationDevice;
typedef struct __FIAsyncOperation_1_Windows__CDevices__CHaptics__CVibrationDeviceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CHaptics__CVibrationDevice * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CHaptics__CVibrationDevice * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CHaptics__CVibrationDevice * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CHaptics__CVibrationDevice * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CHaptics__CVibrationDevice * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CHaptics__CVibrationDevice * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CHaptics__CVibrationDevice * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHaptics__CVibrationDevice *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CHaptics__CVibrationDevice * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHaptics__CVibrationDevice **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CHaptics__CVibrationDevice * This, __RPC__out __x_ABI_CWindows_CDevices_CHaptics_CIVibrationDevice * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CHaptics__CVibrationDeviceVtbl;
interface __FIAsyncOperation_1_Windows__CDevices__CHaptics__CVibrationDevice
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CHaptics__CVibrationDeviceVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDevice __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDevice;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDevice;
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDevice __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDevice;
typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDeviceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDevice * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDevice * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDevice * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDevice * This, __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDevice *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDeviceVtbl;
interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDevice
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDeviceVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDevice __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDevice;
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDevice;
typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDeviceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDevice * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDevice * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDevice * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDevice * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDevice * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDevice * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDevice * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDevice *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDevice * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDevice **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDevice * This, __RPC__out __FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDevice * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDeviceVtbl;
interface __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDevice
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDeviceVtbl *lpVtbl;
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
typedef struct __x_ABI_CWindows_CFoundation_CTimeSpan __x_ABI_CWindows_CFoundation_CTimeSpan;
typedef enum __x_ABI_CWindows_CDevices_CHaptics_CVibrationAccessStatus __x_ABI_CWindows_CDevices_CHaptics_CVibrationAccessStatus;
enum __x_ABI_CWindows_CDevices_CHaptics_CVibrationAccessStatus
{
    VibrationAccessStatus_Allowed = 0,
    VibrationAccessStatus_DeniedByUser = 1,
    VibrationAccessStatus_DeniedBySystem = 2,
    VibrationAccessStatus_DeniedByEnergySaver = 3,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Haptics_IKnownSimpleHapticsControllerWaveformsStatics[] = L"Windows.Devices.Haptics.IKnownSimpleHapticsControllerWaveformsStatics";
typedef struct __x_ABI_CWindows_CDevices_CHaptics_CIKnownSimpleHapticsControllerWaveformsStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CHaptics_CIKnownSimpleHapticsControllerWaveformsStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CHaptics_CIKnownSimpleHapticsControllerWaveformsStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CHaptics_CIKnownSimpleHapticsControllerWaveformsStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CHaptics_CIKnownSimpleHapticsControllerWaveformsStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CHaptics_CIKnownSimpleHapticsControllerWaveformsStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CHaptics_CIKnownSimpleHapticsControllerWaveformsStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Click )(
        __x_ABI_CWindows_CDevices_CHaptics_CIKnownSimpleHapticsControllerWaveformsStatics * This,
                           __RPC__out UINT16 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BuzzContinuous )(
        __x_ABI_CWindows_CDevices_CHaptics_CIKnownSimpleHapticsControllerWaveformsStatics * This,
                           __RPC__out UINT16 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RumbleContinuous )(
        __x_ABI_CWindows_CDevices_CHaptics_CIKnownSimpleHapticsControllerWaveformsStatics * This,
                           __RPC__out UINT16 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Press )(
        __x_ABI_CWindows_CDevices_CHaptics_CIKnownSimpleHapticsControllerWaveformsStatics * This,
                           __RPC__out UINT16 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Release )(
        __x_ABI_CWindows_CDevices_CHaptics_CIKnownSimpleHapticsControllerWaveformsStatics * This,
                           __RPC__out UINT16 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CHaptics_CIKnownSimpleHapticsControllerWaveformsStaticsVtbl;
interface __x_ABI_CWindows_CDevices_CHaptics_CIKnownSimpleHapticsControllerWaveformsStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CHaptics_CIKnownSimpleHapticsControllerWaveformsStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Click(This,value) )
    ( (This)->lpVtbl->get_BuzzContinuous(This,value) )
    ( (This)->lpVtbl->get_RumbleContinuous(This,value) )
    ( (This)->lpVtbl->get_Press(This,value) )
    ( (This)->lpVtbl->get_Release(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CHaptics_CIKnownSimpleHapticsControllerWaveformsStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Haptics_ISimpleHapticsController[] = L"Windows.Devices.Haptics.ISimpleHapticsController";
typedef struct __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsControllerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsController * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsController * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsController * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsController * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsController * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsController * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsController * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SupportedFeedback )(
        __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsController * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedback * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsIntensitySupported )(
        __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsController * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsPlayCountSupported )(
        __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsController * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsPlayDurationSupported )(
        __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsController * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsReplayPauseIntervalSupported )(
        __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsController * This,
                           __RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *StopFeedback )(
        __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsController * This
        );
                    HRESULT ( STDMETHODCALLTYPE *SendHapticFeedback )(
        __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsController * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsControllerFeedback * feedback
        );
                    HRESULT ( STDMETHODCALLTYPE *SendHapticFeedbackWithIntensity )(
        __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsController * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsControllerFeedback * feedback,
                  DOUBLE intensity
        );
    HRESULT ( STDMETHODCALLTYPE *SendHapticFeedbackForDuration )(
        __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsController * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsControllerFeedback * feedback,
                  DOUBLE intensity,
                  __x_ABI_CWindows_CFoundation_CTimeSpan playDuration
        );
    HRESULT ( STDMETHODCALLTYPE *SendHapticFeedbackForPlayCount )(
        __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsController * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsControllerFeedback * feedback,
                  DOUBLE intensity,
                  INT32 playCount,
                  __x_ABI_CWindows_CFoundation_CTimeSpan replayPauseInterval
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsControllerVtbl;
interface __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsController
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsControllerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Id(This,value) )
    ( (This)->lpVtbl->get_SupportedFeedback(This,value) )
    ( (This)->lpVtbl->get_IsIntensitySupported(This,value) )
    ( (This)->lpVtbl->get_IsPlayCountSupported(This,value) )
    ( (This)->lpVtbl->get_IsPlayDurationSupported(This,value) )
    ( (This)->lpVtbl->get_IsReplayPauseIntervalSupported(This,value) )
    ( (This)->lpVtbl->StopFeedback(This) )
    ( (This)->lpVtbl->SendHapticFeedback(This,feedback) )
    ( (This)->lpVtbl->SendHapticFeedbackWithIntensity(This,feedback,intensity) )
    ( (This)->lpVtbl->SendHapticFeedbackForDuration(This,feedback,intensity,playDuration) )
    ( (This)->lpVtbl->SendHapticFeedbackForPlayCount(This,feedback,intensity,playCount,replayPauseInterval) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsController;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Haptics_ISimpleHapticsControllerFeedback[] = L"Windows.Devices.Haptics.ISimpleHapticsControllerFeedback";
typedef struct __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsControllerFeedbackVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsControllerFeedback * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsControllerFeedback * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsControllerFeedback * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsControllerFeedback * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsControllerFeedback * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsControllerFeedback * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Waveform )(
        __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsControllerFeedback * This,
                           __RPC__out UINT16 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Duration )(
        __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsControllerFeedback * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsControllerFeedbackVtbl;
interface __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsControllerFeedback
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsControllerFeedbackVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Waveform(This,value) )
    ( (This)->lpVtbl->get_Duration(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsControllerFeedback;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Haptics_IVibrationDevice[] = L"Windows.Devices.Haptics.IVibrationDevice";
typedef struct __x_ABI_CWindows_CDevices_CHaptics_CIVibrationDeviceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CHaptics_CIVibrationDevice * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CHaptics_CIVibrationDevice * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CHaptics_CIVibrationDevice * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CHaptics_CIVibrationDevice * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CHaptics_CIVibrationDevice * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CHaptics_CIVibrationDevice * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CDevices_CHaptics_CIVibrationDevice * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SimpleHapticsController )(
        __x_ABI_CWindows_CDevices_CHaptics_CIVibrationDevice * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsController * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CHaptics_CIVibrationDeviceVtbl;
interface __x_ABI_CWindows_CDevices_CHaptics_CIVibrationDevice
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CHaptics_CIVibrationDeviceVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Id(This,value) )
    ( (This)->lpVtbl->get_SimpleHapticsController(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CHaptics_CIVibrationDevice;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Haptics_IVibrationDeviceStatics[] = L"Windows.Devices.Haptics.IVibrationDeviceStatics";
typedef struct __x_ABI_CWindows_CDevices_CHaptics_CIVibrationDeviceStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CHaptics_CIVibrationDeviceStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CHaptics_CIVibrationDeviceStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CHaptics_CIVibrationDeviceStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CHaptics_CIVibrationDeviceStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CHaptics_CIVibrationDeviceStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CHaptics_CIVibrationDeviceStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *RequestAccessAsync )(
        __x_ABI_CWindows_CDevices_CHaptics_CIVibrationDeviceStatics * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CHaptics__CVibrationAccessStatus * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeviceSelector )(
        __x_ABI_CWindows_CDevices_CHaptics_CIVibrationDeviceStatics * This,
                           __RPC__deref_out_opt HSTRING * result
        );
    HRESULT ( STDMETHODCALLTYPE *FromIdAsync )(
        __x_ABI_CWindows_CDevices_CHaptics_CIVibrationDeviceStatics * This,
                  __RPC__in HSTRING deviceId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CHaptics__CVibrationDevice * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *GetDefaultAsync )(
        __x_ABI_CWindows_CDevices_CHaptics_CIVibrationDeviceStatics * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CHaptics__CVibrationDevice * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *FindAllAsync )(
        __x_ABI_CWindows_CDevices_CHaptics_CIVibrationDeviceStatics * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDevice * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CHaptics_CIVibrationDeviceStaticsVtbl;
interface __x_ABI_CWindows_CDevices_CHaptics_CIVibrationDeviceStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CHaptics_CIVibrationDeviceStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->RequestAccessAsync(This,operation) )
    ( (This)->lpVtbl->GetDeviceSelector(This,result) )
    ( (This)->lpVtbl->FromIdAsync(This,deviceId,operation) )
    ( (This)->lpVtbl->GetDefaultAsync(This,operation) )
    ( (This)->lpVtbl->FindAllAsync(This,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CHaptics_CIVibrationDeviceStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Haptics_KnownSimpleHapticsControllerWaveforms[] = L"Windows.Devices.Haptics.KnownSimpleHapticsControllerWaveforms";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Haptics_SimpleHapticsController[] = L"Windows.Devices.Haptics.SimpleHapticsController";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Haptics_SimpleHapticsControllerFeedback[] = L"Windows.Devices.Haptics.SimpleHapticsControllerFeedback";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Haptics_VibrationDevice[] = L"Windows.Devices.Haptics.VibrationDevice";
       
       
#pragma clang diagnostic pop

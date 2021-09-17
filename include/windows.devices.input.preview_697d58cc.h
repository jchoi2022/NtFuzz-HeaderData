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
#include "Windows.Devices.HumanInterfaceDevice.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeDevicePreview __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeDevicePreview;
typedef interface __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeDeviceWatcherAddedPreviewEventArgs __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeDeviceWatcherAddedPreviewEventArgs;
typedef interface __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeDeviceWatcherPreview __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeDeviceWatcherPreview;
typedef interface __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeDeviceWatcherRemovedPreviewEventArgs __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeDeviceWatcherRemovedPreviewEventArgs;
typedef interface __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeDeviceWatcherUpdatedPreviewEventArgs __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeDeviceWatcherUpdatedPreviewEventArgs;
typedef interface __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeEnteredPreviewEventArgs __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeEnteredPreviewEventArgs;
typedef interface __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeExitedPreviewEventArgs __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeExitedPreviewEventArgs;
typedef interface __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeInputSourcePreview __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeInputSourcePreview;
typedef interface __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeInputSourcePreviewStatics __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeInputSourcePreviewStatics;
typedef interface __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeMovedPreviewEventArgs __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeMovedPreviewEventArgs;
typedef interface __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazePointPreview __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazePointPreview;
typedef interface __FIIterator_1_Windows__CDevices__CInput__CPreview__CGazePointPreview __FIIterator_1_Windows__CDevices__CInput__CPreview__CGazePointPreview;
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CInput__CPreview__CGazePointPreview;
typedef struct __FIIterator_1_Windows__CDevices__CInput__CPreview__CGazePointPreviewVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CDevices__CInput__CPreview__CGazePointPreview * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CInput__CPreview__CGazePointPreview * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CInput__CPreview__CGazePointPreview * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CInput__CPreview__CGazePointPreview * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CInput__CPreview__CGazePointPreview * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CInput__CPreview__CGazePointPreview * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CInput__CPreview__CGazePointPreview * This, __RPC__out __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazePointPreview * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CInput__CPreview__CGazePointPreview * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CInput__CPreview__CGazePointPreview * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CInput__CPreview__CGazePointPreview * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazePointPreview * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CInput__CPreview__CGazePointPreviewVtbl;
interface __FIIterator_1_Windows__CDevices__CInput__CPreview__CGazePointPreview
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CInput__CPreview__CGazePointPreviewVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CDevices__CInput__CPreview__CGazePointPreview __FIIterable_1_Windows__CDevices__CInput__CPreview__CGazePointPreview;
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CInput__CPreview__CGazePointPreview;
typedef struct __FIIterable_1_Windows__CDevices__CInput__CPreview__CGazePointPreviewVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CDevices__CInput__CPreview__CGazePointPreview * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CInput__CPreview__CGazePointPreview * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CInput__CPreview__CGazePointPreview * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CInput__CPreview__CGazePointPreview * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CInput__CPreview__CGazePointPreview * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CInput__CPreview__CGazePointPreview * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CInput__CPreview__CGazePointPreview * This, __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CInput__CPreview__CGazePointPreview **first);
    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CInput__CPreview__CGazePointPreviewVtbl;
interface __FIIterable_1_Windows__CDevices__CInput__CPreview__CGazePointPreview
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CInput__CPreview__CGazePointPreviewVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CDevices__CInput__CPreview__CGazePointPreview __FIVectorView_1_Windows__CDevices__CInput__CPreview__CGazePointPreview;
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CInput__CPreview__CGazePointPreview;
typedef struct __FIVectorView_1_Windows__CDevices__CInput__CPreview__CGazePointPreviewVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CInput__CPreview__CGazePointPreview * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CInput__CPreview__CGazePointPreview * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CInput__CPreview__CGazePointPreview * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CInput__CPreview__CGazePointPreview * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CInput__CPreview__CGazePointPreview * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CInput__CPreview__CGazePointPreview * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CInput__CPreview__CGazePointPreview * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazePointPreview * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CDevices__CInput__CPreview__CGazePointPreview * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CInput__CPreview__CGazePointPreview * This,
                       __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazePointPreview * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CInput__CPreview__CGazePointPreview * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazePointPreview * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CInput__CPreview__CGazePointPreviewVtbl;
interface __FIVectorView_1_Windows__CDevices__CInput__CPreview__CGazePointPreview
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CInput__CPreview__CGazePointPreviewVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CDevices__CInput__CPreview__CGazePointPreview __FIVector_1_Windows__CDevices__CInput__CPreview__CGazePointPreview;
EXTERN_C const IID IID___FIVector_1_Windows__CDevices__CInput__CPreview__CGazePointPreview;
typedef struct __FIVector_1_Windows__CDevices__CInput__CPreview__CGazePointPreviewVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CDevices__CInput__CPreview__CGazePointPreview * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CDevices__CInput__CPreview__CGazePointPreview * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CDevices__CInput__CPreview__CGazePointPreview * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CDevices__CInput__CPreview__CGazePointPreview * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CDevices__CInput__CPreview__CGazePointPreview * This, __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazePointPreview * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CDevices__CInput__CPreview__CGazePointPreview * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CDevices__CInput__CPreview__CGazePointPreview * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazePointPreview * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CDevices__CInput__CPreview__CGazePointPreview * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CDevices__CInput__CPreview__CGazePointPreview * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CInput__CPreview__CGazePointPreview **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CDevices__CInput__CPreview__CGazePointPreview * This,
                   __RPC__in __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazePointPreview * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CDevices__CInput__CPreview__CGazePointPreview * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazePointPreview * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CDevices__CInput__CPreview__CGazePointPreview * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazePointPreview * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CDevices__CInput__CPreview__CGazePointPreview * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CDevices__CInput__CPreview__CGazePointPreview * This, __RPC__in __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazePointPreview * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CDevices__CInput__CPreview__CGazePointPreview * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CDevices__CInput__CPreview__CGazePointPreview * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CDevices__CInput__CPreview__CGazePointPreview * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazePointPreview * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CDevices__CInput__CPreview__CGazePointPreview * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazePointPreview * *value);
    END_INTERFACE
} __FIVector_1_Windows__CDevices__CInput__CPreview__CGazePointPreviewVtbl;
interface __FIVector_1_Windows__CDevices__CInput__CPreview__CGazePointPreview
{
    CONST_VTBL struct __FIVector_1_Windows__CDevices__CInput__CPreview__CGazePointPreviewVtbl *lpVtbl;
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
typedef interface __FITypedEventHandler_2_Windows__CDevices__CInput__CPreview__CGazeDeviceWatcherPreview_IInspectable __FITypedEventHandler_2_Windows__CDevices__CInput__CPreview__CGazeDeviceWatcherPreview_IInspectable;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CInput__CPreview__CGazeDeviceWatcherPreview_IInspectable;
typedef struct __FITypedEventHandler_2_Windows__CDevices__CInput__CPreview__CGazeDeviceWatcherPreview_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CInput__CPreview__CGazeDeviceWatcherPreview_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CInput__CPreview__CGazeDeviceWatcherPreview_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CInput__CPreview__CGazeDeviceWatcherPreview_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CInput__CPreview__CGazeDeviceWatcherPreview_IInspectable * This, __RPC__in_opt __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeDeviceWatcherPreview * sender, __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CInput__CPreview__CGazeDeviceWatcherPreview_IInspectableVtbl;
interface __FITypedEventHandler_2_Windows__CDevices__CInput__CPreview__CGazeDeviceWatcherPreview_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CInput__CPreview__CGazeDeviceWatcherPreview_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CDevices__CInput__CPreview__CGazeDeviceWatcherPreview_Windows__CDevices__CInput__CPreview__CGazeDeviceWatcherAddedPreviewEventArgs __FITypedEventHandler_2_Windows__CDevices__CInput__CPreview__CGazeDeviceWatcherPreview_Windows__CDevices__CInput__CPreview__CGazeDeviceWatcherAddedPreviewEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CInput__CPreview__CGazeDeviceWatcherPreview_Windows__CDevices__CInput__CPreview__CGazeDeviceWatcherAddedPreviewEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CDevices__CInput__CPreview__CGazeDeviceWatcherPreview_Windows__CDevices__CInput__CPreview__CGazeDeviceWatcherAddedPreviewEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CInput__CPreview__CGazeDeviceWatcherPreview_Windows__CDevices__CInput__CPreview__CGazeDeviceWatcherAddedPreviewEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CInput__CPreview__CGazeDeviceWatcherPreview_Windows__CDevices__CInput__CPreview__CGazeDeviceWatcherAddedPreviewEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CInput__CPreview__CGazeDeviceWatcherPreview_Windows__CDevices__CInput__CPreview__CGazeDeviceWatcherAddedPreviewEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CInput__CPreview__CGazeDeviceWatcherPreview_Windows__CDevices__CInput__CPreview__CGazeDeviceWatcherAddedPreviewEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeDeviceWatcherPreview * sender, __RPC__in_opt __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeDeviceWatcherAddedPreviewEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CInput__CPreview__CGazeDeviceWatcherPreview_Windows__CDevices__CInput__CPreview__CGazeDeviceWatcherAddedPreviewEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CDevices__CInput__CPreview__CGazeDeviceWatcherPreview_Windows__CDevices__CInput__CPreview__CGazeDeviceWatcherAddedPreviewEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CInput__CPreview__CGazeDeviceWatcherPreview_Windows__CDevices__CInput__CPreview__CGazeDeviceWatcherAddedPreviewEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CDevices__CInput__CPreview__CGazeDeviceWatcherPreview_Windows__CDevices__CInput__CPreview__CGazeDeviceWatcherRemovedPreviewEventArgs __FITypedEventHandler_2_Windows__CDevices__CInput__CPreview__CGazeDeviceWatcherPreview_Windows__CDevices__CInput__CPreview__CGazeDeviceWatcherRemovedPreviewEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CInput__CPreview__CGazeDeviceWatcherPreview_Windows__CDevices__CInput__CPreview__CGazeDeviceWatcherRemovedPreviewEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CDevices__CInput__CPreview__CGazeDeviceWatcherPreview_Windows__CDevices__CInput__CPreview__CGazeDeviceWatcherRemovedPreviewEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CInput__CPreview__CGazeDeviceWatcherPreview_Windows__CDevices__CInput__CPreview__CGazeDeviceWatcherRemovedPreviewEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CInput__CPreview__CGazeDeviceWatcherPreview_Windows__CDevices__CInput__CPreview__CGazeDeviceWatcherRemovedPreviewEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CInput__CPreview__CGazeDeviceWatcherPreview_Windows__CDevices__CInput__CPreview__CGazeDeviceWatcherRemovedPreviewEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CInput__CPreview__CGazeDeviceWatcherPreview_Windows__CDevices__CInput__CPreview__CGazeDeviceWatcherRemovedPreviewEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeDeviceWatcherPreview * sender, __RPC__in_opt __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeDeviceWatcherRemovedPreviewEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CInput__CPreview__CGazeDeviceWatcherPreview_Windows__CDevices__CInput__CPreview__CGazeDeviceWatcherRemovedPreviewEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CDevices__CInput__CPreview__CGazeDeviceWatcherPreview_Windows__CDevices__CInput__CPreview__CGazeDeviceWatcherRemovedPreviewEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CInput__CPreview__CGazeDeviceWatcherPreview_Windows__CDevices__CInput__CPreview__CGazeDeviceWatcherRemovedPreviewEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CDevices__CInput__CPreview__CGazeDeviceWatcherPreview_Windows__CDevices__CInput__CPreview__CGazeDeviceWatcherUpdatedPreviewEventArgs __FITypedEventHandler_2_Windows__CDevices__CInput__CPreview__CGazeDeviceWatcherPreview_Windows__CDevices__CInput__CPreview__CGazeDeviceWatcherUpdatedPreviewEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CInput__CPreview__CGazeDeviceWatcherPreview_Windows__CDevices__CInput__CPreview__CGazeDeviceWatcherUpdatedPreviewEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CDevices__CInput__CPreview__CGazeDeviceWatcherPreview_Windows__CDevices__CInput__CPreview__CGazeDeviceWatcherUpdatedPreviewEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CInput__CPreview__CGazeDeviceWatcherPreview_Windows__CDevices__CInput__CPreview__CGazeDeviceWatcherUpdatedPreviewEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CInput__CPreview__CGazeDeviceWatcherPreview_Windows__CDevices__CInput__CPreview__CGazeDeviceWatcherUpdatedPreviewEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CInput__CPreview__CGazeDeviceWatcherPreview_Windows__CDevices__CInput__CPreview__CGazeDeviceWatcherUpdatedPreviewEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CInput__CPreview__CGazeDeviceWatcherPreview_Windows__CDevices__CInput__CPreview__CGazeDeviceWatcherUpdatedPreviewEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeDeviceWatcherPreview * sender, __RPC__in_opt __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeDeviceWatcherUpdatedPreviewEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CInput__CPreview__CGazeDeviceWatcherPreview_Windows__CDevices__CInput__CPreview__CGazeDeviceWatcherUpdatedPreviewEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CDevices__CInput__CPreview__CGazeDeviceWatcherPreview_Windows__CDevices__CInput__CPreview__CGazeDeviceWatcherUpdatedPreviewEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CInput__CPreview__CGazeDeviceWatcherPreview_Windows__CDevices__CInput__CPreview__CGazeDeviceWatcherUpdatedPreviewEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CDevices__CInput__CPreview__CGazeInputSourcePreview_Windows__CDevices__CInput__CPreview__CGazeEnteredPreviewEventArgs __FITypedEventHandler_2_Windows__CDevices__CInput__CPreview__CGazeInputSourcePreview_Windows__CDevices__CInput__CPreview__CGazeEnteredPreviewEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CInput__CPreview__CGazeInputSourcePreview_Windows__CDevices__CInput__CPreview__CGazeEnteredPreviewEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CDevices__CInput__CPreview__CGazeInputSourcePreview_Windows__CDevices__CInput__CPreview__CGazeEnteredPreviewEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CInput__CPreview__CGazeInputSourcePreview_Windows__CDevices__CInput__CPreview__CGazeEnteredPreviewEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CInput__CPreview__CGazeInputSourcePreview_Windows__CDevices__CInput__CPreview__CGazeEnteredPreviewEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CInput__CPreview__CGazeInputSourcePreview_Windows__CDevices__CInput__CPreview__CGazeEnteredPreviewEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CInput__CPreview__CGazeInputSourcePreview_Windows__CDevices__CInput__CPreview__CGazeEnteredPreviewEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeInputSourcePreview * sender, __RPC__in_opt __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeEnteredPreviewEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CInput__CPreview__CGazeInputSourcePreview_Windows__CDevices__CInput__CPreview__CGazeEnteredPreviewEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CDevices__CInput__CPreview__CGazeInputSourcePreview_Windows__CDevices__CInput__CPreview__CGazeEnteredPreviewEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CInput__CPreview__CGazeInputSourcePreview_Windows__CDevices__CInput__CPreview__CGazeEnteredPreviewEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CDevices__CInput__CPreview__CGazeInputSourcePreview_Windows__CDevices__CInput__CPreview__CGazeExitedPreviewEventArgs __FITypedEventHandler_2_Windows__CDevices__CInput__CPreview__CGazeInputSourcePreview_Windows__CDevices__CInput__CPreview__CGazeExitedPreviewEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CInput__CPreview__CGazeInputSourcePreview_Windows__CDevices__CInput__CPreview__CGazeExitedPreviewEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CDevices__CInput__CPreview__CGazeInputSourcePreview_Windows__CDevices__CInput__CPreview__CGazeExitedPreviewEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CInput__CPreview__CGazeInputSourcePreview_Windows__CDevices__CInput__CPreview__CGazeExitedPreviewEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CInput__CPreview__CGazeInputSourcePreview_Windows__CDevices__CInput__CPreview__CGazeExitedPreviewEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CInput__CPreview__CGazeInputSourcePreview_Windows__CDevices__CInput__CPreview__CGazeExitedPreviewEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CInput__CPreview__CGazeInputSourcePreview_Windows__CDevices__CInput__CPreview__CGazeExitedPreviewEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeInputSourcePreview * sender, __RPC__in_opt __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeExitedPreviewEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CInput__CPreview__CGazeInputSourcePreview_Windows__CDevices__CInput__CPreview__CGazeExitedPreviewEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CDevices__CInput__CPreview__CGazeInputSourcePreview_Windows__CDevices__CInput__CPreview__CGazeExitedPreviewEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CInput__CPreview__CGazeInputSourcePreview_Windows__CDevices__CInput__CPreview__CGazeExitedPreviewEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CDevices__CInput__CPreview__CGazeInputSourcePreview_Windows__CDevices__CInput__CPreview__CGazeMovedPreviewEventArgs __FITypedEventHandler_2_Windows__CDevices__CInput__CPreview__CGazeInputSourcePreview_Windows__CDevices__CInput__CPreview__CGazeMovedPreviewEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CInput__CPreview__CGazeInputSourcePreview_Windows__CDevices__CInput__CPreview__CGazeMovedPreviewEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CDevices__CInput__CPreview__CGazeInputSourcePreview_Windows__CDevices__CInput__CPreview__CGazeMovedPreviewEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CInput__CPreview__CGazeInputSourcePreview_Windows__CDevices__CInput__CPreview__CGazeMovedPreviewEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CInput__CPreview__CGazeInputSourcePreview_Windows__CDevices__CInput__CPreview__CGazeMovedPreviewEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CInput__CPreview__CGazeInputSourcePreview_Windows__CDevices__CInput__CPreview__CGazeMovedPreviewEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CInput__CPreview__CGazeInputSourcePreview_Windows__CDevices__CInput__CPreview__CGazeMovedPreviewEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeInputSourcePreview * sender, __RPC__in_opt __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeMovedPreviewEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CInput__CPreview__CGazeInputSourcePreview_Windows__CDevices__CInput__CPreview__CGazeMovedPreviewEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CDevices__CInput__CPreview__CGazeInputSourcePreview_Windows__CDevices__CInput__CPreview__CGazeMovedPreviewEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CInput__CPreview__CGazeInputSourcePreview_Windows__CDevices__CInput__CPreview__CGazeMovedPreviewEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
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
typedef interface __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControlDescription __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControlDescription;
typedef interface __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription;
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription;
typedef struct __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescriptionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription * This, __RPC__out __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControlDescription * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControlDescription * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescriptionVtbl;
interface __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescriptionVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription;
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription;
typedef struct __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescriptionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription * This, __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription **first);
    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescriptionVtbl;
interface __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescriptionVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription;
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription;
typedef struct __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescriptionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControlDescription * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription * This,
                       __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControlDescription * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControlDescription * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescriptionVtbl;
interface __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescriptionVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControlDescription __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControlDescription;
typedef interface __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription;
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription;
typedef struct __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescriptionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription * This, __RPC__out __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControlDescription * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControlDescription * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescriptionVtbl;
interface __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescriptionVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription;
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription;
typedef struct __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescriptionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription * This, __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription **first);
    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescriptionVtbl;
interface __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescriptionVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription;
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription;
typedef struct __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescriptionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControlDescription * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription * This,
                       __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControlDescription * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControlDescription * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescriptionVtbl;
interface __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescriptionVtbl *lpVtbl;
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
struct __x_ABI_CWindows_CFoundation_CPoint;
typedef interface __FIReference_1_Windows__CFoundation__CPoint __FIReference_1_Windows__CFoundation__CPoint;
EXTERN_C const IID IID___FIReference_1_Windows__CFoundation__CPoint;
typedef struct __FIReference_1_Windows__CFoundation__CPointVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_Windows__CFoundation__CPoint * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_Windows__CFoundation__CPoint * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_Windows__CFoundation__CPoint * This );
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_Windows__CFoundation__CPoint * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_Windows__CFoundation__CPoint * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_Windows__CFoundation__CPoint * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_Windows__CFoundation__CPoint * This, __RPC__out struct __x_ABI_CWindows_CFoundation_CPoint *value);
    END_INTERFACE
} __FIReference_1_Windows__CFoundation__CPointVtbl;
interface __FIReference_1_Windows__CFoundation__CPoint
{
    CONST_VTBL struct __FIReference_1_Windows__CFoundation__CPointVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Value(This,value) )
typedef interface __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidInputReport __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidInputReport;
typedef struct __x_ABI_CWindows_CFoundation_CPoint __x_ABI_CWindows_CFoundation_CPoint;
typedef enum __x_ABI_CWindows_CDevices_CInput_CPreview_CGazeDeviceConfigurationStatePreview __x_ABI_CWindows_CDevices_CInput_CPreview_CGazeDeviceConfigurationStatePreview;
enum __x_ABI_CWindows_CDevices_CInput_CPreview_CGazeDeviceConfigurationStatePreview
{
    GazeDeviceConfigurationStatePreview_Unknown = 0,
    GazeDeviceConfigurationStatePreview_Ready = 1,
    GazeDeviceConfigurationStatePreview_Configuring = 2,
    GazeDeviceConfigurationStatePreview_ScreenSetupNeeded = 3,
    GazeDeviceConfigurationStatePreview_UserCalibrationNeeded = 4,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Input_Preview_IGazeDevicePreview[] = L"Windows.Devices.Input.Preview.IGazeDevicePreview";
typedef struct __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeDevicePreviewVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeDevicePreview * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeDevicePreview * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeDevicePreview * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeDevicePreview * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeDevicePreview * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeDevicePreview * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeDevicePreview * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CanTrackEyes )(
        __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeDevicePreview * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CanTrackHead )(
        __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeDevicePreview * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ConfigurationState )(
        __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeDevicePreview * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CInput_CPreview_CGazeDeviceConfigurationStatePreview * value
        );
    HRESULT ( STDMETHODCALLTYPE *RequestCalibrationAsync )(
        __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeDevicePreview * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *GetNumericControlDescriptions )(
        __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeDevicePreview * This,
                  UINT16 usagePage,
                  UINT16 usageId,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetBooleanControlDescriptions )(
        __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeDevicePreview * This,
                  UINT16 usagePage,
                  UINT16 usageId,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeDevicePreviewVtbl;
interface __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeDevicePreview
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeDevicePreviewVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Id(This,value) )
    ( (This)->lpVtbl->get_CanTrackEyes(This,value) )
    ( (This)->lpVtbl->get_CanTrackHead(This,value) )
    ( (This)->lpVtbl->get_ConfigurationState(This,value) )
    ( (This)->lpVtbl->RequestCalibrationAsync(This,operation) )
    ( (This)->lpVtbl->GetNumericControlDescriptions(This,usagePage,usageId,result) )
    ( (This)->lpVtbl->GetBooleanControlDescriptions(This,usagePage,usageId,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeDevicePreview;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Input_Preview_IGazeDeviceWatcherAddedPreviewEventArgs[] = L"Windows.Devices.Input.Preview.IGazeDeviceWatcherAddedPreviewEventArgs";
typedef struct __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeDeviceWatcherAddedPreviewEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeDeviceWatcherAddedPreviewEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeDeviceWatcherAddedPreviewEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeDeviceWatcherAddedPreviewEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeDeviceWatcherAddedPreviewEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeDeviceWatcherAddedPreviewEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeDeviceWatcherAddedPreviewEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Device )(
        __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeDeviceWatcherAddedPreviewEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeDevicePreview * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeDeviceWatcherAddedPreviewEventArgsVtbl;
interface __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeDeviceWatcherAddedPreviewEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeDeviceWatcherAddedPreviewEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Device(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeDeviceWatcherAddedPreviewEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Input_Preview_IGazeDeviceWatcherPreview[] = L"Windows.Devices.Input.Preview.IGazeDeviceWatcherPreview";
typedef struct __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeDeviceWatcherPreviewVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeDeviceWatcherPreview * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeDeviceWatcherPreview * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeDeviceWatcherPreview * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeDeviceWatcherPreview * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeDeviceWatcherPreview * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeDeviceWatcherPreview * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_Added )(
        __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeDeviceWatcherPreview * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CInput__CPreview__CGazeDeviceWatcherPreview_Windows__CDevices__CInput__CPreview__CGazeDeviceWatcherAddedPreviewEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Added )(
        __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeDeviceWatcherPreview * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_Removed )(
        __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeDeviceWatcherPreview * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CInput__CPreview__CGazeDeviceWatcherPreview_Windows__CDevices__CInput__CPreview__CGazeDeviceWatcherRemovedPreviewEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Removed )(
        __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeDeviceWatcherPreview * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_Updated )(
        __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeDeviceWatcherPreview * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CInput__CPreview__CGazeDeviceWatcherPreview_Windows__CDevices__CInput__CPreview__CGazeDeviceWatcherUpdatedPreviewEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Updated )(
        __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeDeviceWatcherPreview * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_EnumerationCompleted )(
        __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeDeviceWatcherPreview * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CInput__CPreview__CGazeDeviceWatcherPreview_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_EnumerationCompleted )(
        __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeDeviceWatcherPreview * This,
                  EventRegistrationToken token
        );
    HRESULT ( STDMETHODCALLTYPE *Start )(
        __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeDeviceWatcherPreview * This
        );
    HRESULT ( STDMETHODCALLTYPE *Stop )(
        __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeDeviceWatcherPreview * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeDeviceWatcherPreviewVtbl;
interface __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeDeviceWatcherPreview
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeDeviceWatcherPreviewVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_Added(This,handler,token) )
    ( (This)->lpVtbl->remove_Added(This,token) )
    ( (This)->lpVtbl->add_Removed(This,handler,token) )
    ( (This)->lpVtbl->remove_Removed(This,token) )
    ( (This)->lpVtbl->add_Updated(This,handler,token) )
    ( (This)->lpVtbl->remove_Updated(This,token) )
    ( (This)->lpVtbl->add_EnumerationCompleted(This,handler,token) )
    ( (This)->lpVtbl->remove_EnumerationCompleted(This,token) )
    ( (This)->lpVtbl->Start(This) )
    ( (This)->lpVtbl->Stop(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeDeviceWatcherPreview;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Input_Preview_IGazeDeviceWatcherRemovedPreviewEventArgs[] = L"Windows.Devices.Input.Preview.IGazeDeviceWatcherRemovedPreviewEventArgs";
typedef struct __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeDeviceWatcherRemovedPreviewEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeDeviceWatcherRemovedPreviewEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeDeviceWatcherRemovedPreviewEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeDeviceWatcherRemovedPreviewEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeDeviceWatcherRemovedPreviewEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeDeviceWatcherRemovedPreviewEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeDeviceWatcherRemovedPreviewEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Device )(
        __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeDeviceWatcherRemovedPreviewEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeDevicePreview * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeDeviceWatcherRemovedPreviewEventArgsVtbl;
interface __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeDeviceWatcherRemovedPreviewEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeDeviceWatcherRemovedPreviewEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Device(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeDeviceWatcherRemovedPreviewEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Input_Preview_IGazeDeviceWatcherUpdatedPreviewEventArgs[] = L"Windows.Devices.Input.Preview.IGazeDeviceWatcherUpdatedPreviewEventArgs";
typedef struct __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeDeviceWatcherUpdatedPreviewEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeDeviceWatcherUpdatedPreviewEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeDeviceWatcherUpdatedPreviewEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeDeviceWatcherUpdatedPreviewEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeDeviceWatcherUpdatedPreviewEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeDeviceWatcherUpdatedPreviewEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeDeviceWatcherUpdatedPreviewEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Device )(
        __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeDeviceWatcherUpdatedPreviewEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeDevicePreview * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeDeviceWatcherUpdatedPreviewEventArgsVtbl;
interface __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeDeviceWatcherUpdatedPreviewEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeDeviceWatcherUpdatedPreviewEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Device(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeDeviceWatcherUpdatedPreviewEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Input_Preview_IGazeEnteredPreviewEventArgs[] = L"Windows.Devices.Input.Preview.IGazeEnteredPreviewEventArgs";
typedef struct __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeEnteredPreviewEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeEnteredPreviewEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeEnteredPreviewEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeEnteredPreviewEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeEnteredPreviewEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeEnteredPreviewEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeEnteredPreviewEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Handled )(
        __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeEnteredPreviewEventArgs * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Handled )(
        __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeEnteredPreviewEventArgs * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CurrentPoint )(
        __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeEnteredPreviewEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazePointPreview * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeEnteredPreviewEventArgsVtbl;
interface __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeEnteredPreviewEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeEnteredPreviewEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Handled(This,value) )
    ( (This)->lpVtbl->put_Handled(This,value) )
    ( (This)->lpVtbl->get_CurrentPoint(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeEnteredPreviewEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Input_Preview_IGazeExitedPreviewEventArgs[] = L"Windows.Devices.Input.Preview.IGazeExitedPreviewEventArgs";
typedef struct __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeExitedPreviewEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeExitedPreviewEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeExitedPreviewEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeExitedPreviewEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeExitedPreviewEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeExitedPreviewEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeExitedPreviewEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Handled )(
        __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeExitedPreviewEventArgs * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Handled )(
        __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeExitedPreviewEventArgs * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CurrentPoint )(
        __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeExitedPreviewEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazePointPreview * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeExitedPreviewEventArgsVtbl;
interface __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeExitedPreviewEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeExitedPreviewEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Handled(This,value) )
    ( (This)->lpVtbl->put_Handled(This,value) )
    ( (This)->lpVtbl->get_CurrentPoint(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeExitedPreviewEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Input_Preview_IGazeInputSourcePreview[] = L"Windows.Devices.Input.Preview.IGazeInputSourcePreview";
typedef struct __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeInputSourcePreviewVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeInputSourcePreview * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeInputSourcePreview * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeInputSourcePreview * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeInputSourcePreview * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeInputSourcePreview * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeInputSourcePreview * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_GazeMoved )(
        __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeInputSourcePreview * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CInput__CPreview__CGazeInputSourcePreview_Windows__CDevices__CInput__CPreview__CGazeMovedPreviewEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_GazeMoved )(
        __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeInputSourcePreview * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_GazeEntered )(
        __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeInputSourcePreview * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CInput__CPreview__CGazeInputSourcePreview_Windows__CDevices__CInput__CPreview__CGazeEnteredPreviewEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_GazeEntered )(
        __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeInputSourcePreview * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_GazeExited )(
        __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeInputSourcePreview * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CInput__CPreview__CGazeInputSourcePreview_Windows__CDevices__CInput__CPreview__CGazeExitedPreviewEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_GazeExited )(
        __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeInputSourcePreview * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeInputSourcePreviewVtbl;
interface __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeInputSourcePreview
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeInputSourcePreviewVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_GazeMoved(This,handler,token) )
    ( (This)->lpVtbl->remove_GazeMoved(This,token) )
    ( (This)->lpVtbl->add_GazeEntered(This,handler,token) )
    ( (This)->lpVtbl->remove_GazeEntered(This,token) )
    ( (This)->lpVtbl->add_GazeExited(This,handler,token) )
    ( (This)->lpVtbl->remove_GazeExited(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeInputSourcePreview;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Input_Preview_IGazeInputSourcePreviewStatics[] = L"Windows.Devices.Input.Preview.IGazeInputSourcePreviewStatics";
typedef struct __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeInputSourcePreviewStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeInputSourcePreviewStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeInputSourcePreviewStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeInputSourcePreviewStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeInputSourcePreviewStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeInputSourcePreviewStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeInputSourcePreviewStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetForCurrentView )(
        __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeInputSourcePreviewStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeInputSourcePreview * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateWatcher )(
        __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeInputSourcePreviewStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeDeviceWatcherPreview * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeInputSourcePreviewStaticsVtbl;
interface __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeInputSourcePreviewStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeInputSourcePreviewStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetForCurrentView(This,result) )
    ( (This)->lpVtbl->CreateWatcher(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeInputSourcePreviewStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Input_Preview_IGazeMovedPreviewEventArgs[] = L"Windows.Devices.Input.Preview.IGazeMovedPreviewEventArgs";
typedef struct __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeMovedPreviewEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeMovedPreviewEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeMovedPreviewEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeMovedPreviewEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeMovedPreviewEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeMovedPreviewEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeMovedPreviewEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Handled )(
        __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeMovedPreviewEventArgs * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Handled )(
        __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeMovedPreviewEventArgs * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CurrentPoint )(
        __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeMovedPreviewEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazePointPreview * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetIntermediatePoints )(
        __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeMovedPreviewEventArgs * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CDevices__CInput__CPreview__CGazePointPreview * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeMovedPreviewEventArgsVtbl;
interface __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeMovedPreviewEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeMovedPreviewEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Handled(This,value) )
    ( (This)->lpVtbl->put_Handled(This,value) )
    ( (This)->lpVtbl->get_CurrentPoint(This,value) )
    ( (This)->lpVtbl->GetIntermediatePoints(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeMovedPreviewEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Input_Preview_IGazePointPreview[] = L"Windows.Devices.Input.Preview.IGazePointPreview";
typedef struct __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazePointPreviewVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazePointPreview * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazePointPreview * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazePointPreview * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazePointPreview * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazePointPreview * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazePointPreview * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_SourceDevice )(
        __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazePointPreview * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazeDevicePreview * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_EyeGazePosition )(
        __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazePointPreview * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CPoint * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HeadGazePosition )(
        __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazePointPreview * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CPoint * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Timestamp )(
        __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazePointPreview * This,
                           __RPC__out UINT64 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HidInputReport )(
        __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazePointPreview * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidInputReport * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazePointPreviewVtbl;
interface __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazePointPreview
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CInput_CPreview_CIGazePointPreviewVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_SourceDevice(This,value) )
    ( (This)->lpVtbl->get_EyeGazePosition(This,value) )
    ( (This)->lpVtbl->get_HeadGazePosition(This,value) )
    ( (This)->lpVtbl->get_Timestamp(This,value) )
    ( (This)->lpVtbl->get_HidInputReport(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CInput_CPreview_CIGazePointPreview;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Input_Preview_GazeDevicePreview[] = L"Windows.Devices.Input.Preview.GazeDevicePreview";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Input_Preview_GazeDeviceWatcherAddedPreviewEventArgs[] = L"Windows.Devices.Input.Preview.GazeDeviceWatcherAddedPreviewEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Input_Preview_GazeDeviceWatcherPreview[] = L"Windows.Devices.Input.Preview.GazeDeviceWatcherPreview";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Input_Preview_GazeDeviceWatcherRemovedPreviewEventArgs[] = L"Windows.Devices.Input.Preview.GazeDeviceWatcherRemovedPreviewEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Input_Preview_GazeDeviceWatcherUpdatedPreviewEventArgs[] = L"Windows.Devices.Input.Preview.GazeDeviceWatcherUpdatedPreviewEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Input_Preview_GazeEnteredPreviewEventArgs[] = L"Windows.Devices.Input.Preview.GazeEnteredPreviewEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Input_Preview_GazeExitedPreviewEventArgs[] = L"Windows.Devices.Input.Preview.GazeExitedPreviewEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Input_Preview_GazeInputSourcePreview[] = L"Windows.Devices.Input.Preview.GazeInputSourcePreview";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Input_Preview_GazeMovedPreviewEventArgs[] = L"Windows.Devices.Input.Preview.GazeMovedPreviewEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Input_Preview_GazePointPreview[] = L"Windows.Devices.Input.Preview.GazePointPreview";
       
       
#pragma clang diagnostic pop

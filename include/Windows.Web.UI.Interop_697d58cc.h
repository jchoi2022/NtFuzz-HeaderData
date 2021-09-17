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
#include "Windows.System.h"
#include "Windows.UI.Core.h"
#include "Windows.Web.UI.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CWeb_CUI_CInterop_CIWebViewControlAcceleratorKeyPressedEventArgs __x_ABI_CWindows_CWeb_CUI_CInterop_CIWebViewControlAcceleratorKeyPressedEventArgs;
typedef interface __x_ABI_CWindows_CWeb_CUI_CInterop_CIWebViewControlMoveFocusRequestedEventArgs __x_ABI_CWindows_CWeb_CUI_CInterop_CIWebViewControlMoveFocusRequestedEventArgs;
typedef interface __x_ABI_CWindows_CWeb_CUI_CInterop_CIWebViewControlProcess __x_ABI_CWindows_CWeb_CUI_CInterop_CIWebViewControlProcess;
typedef interface __x_ABI_CWindows_CWeb_CUI_CInterop_CIWebViewControlProcessFactory __x_ABI_CWindows_CWeb_CUI_CInterop_CIWebViewControlProcessFactory;
typedef interface __x_ABI_CWindows_CWeb_CUI_CInterop_CIWebViewControlProcessOptions __x_ABI_CWindows_CWeb_CUI_CInterop_CIWebViewControlProcessOptions;
typedef interface __x_ABI_CWindows_CWeb_CUI_CInterop_CIWebViewControlSite __x_ABI_CWindows_CWeb_CUI_CInterop_CIWebViewControlSite;
typedef interface __x_ABI_CWindows_CWeb_CUI_CInterop_CIWebViewControlSite2 __x_ABI_CWindows_CWeb_CUI_CInterop_CIWebViewControlSite2;
typedef interface __x_ABI_CWindows_CWeb_CUI_CIWebViewControl __x_ABI_CWindows_CWeb_CUI_CIWebViewControl;
typedef interface __FIIterator_1_Windows__CWeb__CUI__CInterop__CWebViewControl __FIIterator_1_Windows__CWeb__CUI__CInterop__CWebViewControl;
EXTERN_C const IID IID___FIIterator_1_Windows__CWeb__CUI__CInterop__CWebViewControl;
typedef struct __FIIterator_1_Windows__CWeb__CUI__CInterop__CWebViewControlVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CWeb__CUI__CInterop__CWebViewControl * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CWeb__CUI__CInterop__CWebViewControl * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CWeb__CUI__CInterop__CWebViewControl * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CWeb__CUI__CInterop__CWebViewControl * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CWeb__CUI__CInterop__CWebViewControl * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CWeb__CUI__CInterop__CWebViewControl * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CWeb__CUI__CInterop__CWebViewControl * This, __RPC__out __x_ABI_CWindows_CWeb_CUI_CIWebViewControl * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CWeb__CUI__CInterop__CWebViewControl * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CWeb__CUI__CInterop__CWebViewControl * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CWeb__CUI__CInterop__CWebViewControl * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CWeb_CUI_CIWebViewControl * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CWeb__CUI__CInterop__CWebViewControlVtbl;
interface __FIIterator_1_Windows__CWeb__CUI__CInterop__CWebViewControl
{
    CONST_VTBL struct __FIIterator_1_Windows__CWeb__CUI__CInterop__CWebViewControlVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CWeb__CUI__CInterop__CWebViewControl __FIIterable_1_Windows__CWeb__CUI__CInterop__CWebViewControl;
EXTERN_C const IID IID___FIIterable_1_Windows__CWeb__CUI__CInterop__CWebViewControl;
typedef struct __FIIterable_1_Windows__CWeb__CUI__CInterop__CWebViewControlVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CWeb__CUI__CInterop__CWebViewControl * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CWeb__CUI__CInterop__CWebViewControl * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CWeb__CUI__CInterop__CWebViewControl * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CWeb__CUI__CInterop__CWebViewControl * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CWeb__CUI__CInterop__CWebViewControl * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CWeb__CUI__CInterop__CWebViewControl * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CWeb__CUI__CInterop__CWebViewControl * This, __RPC__deref_out_opt __FIIterator_1_Windows__CWeb__CUI__CInterop__CWebViewControl **first);
    END_INTERFACE
} __FIIterable_1_Windows__CWeb__CUI__CInterop__CWebViewControlVtbl;
interface __FIIterable_1_Windows__CWeb__CUI__CInterop__CWebViewControl
{
    CONST_VTBL struct __FIIterable_1_Windows__CWeb__CUI__CInterop__CWebViewControlVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CWeb__CUI__CInterop__CWebViewControl __FIVectorView_1_Windows__CWeb__CUI__CInterop__CWebViewControl;
EXTERN_C const IID IID___FIVectorView_1_Windows__CWeb__CUI__CInterop__CWebViewControl;
typedef struct __FIVectorView_1_Windows__CWeb__CUI__CInterop__CWebViewControlVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CWeb__CUI__CInterop__CWebViewControl * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CWeb__CUI__CInterop__CWebViewControl * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CWeb__CUI__CInterop__CWebViewControl * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CWeb__CUI__CInterop__CWebViewControl * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CWeb__CUI__CInterop__CWebViewControl * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CWeb__CUI__CInterop__CWebViewControl * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CWeb__CUI__CInterop__CWebViewControl * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CWeb_CUI_CIWebViewControl * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CWeb__CUI__CInterop__CWebViewControl * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CWeb__CUI__CInterop__CWebViewControl * This,
                       __x_ABI_CWindows_CWeb_CUI_CIWebViewControl * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CWeb__CUI__CInterop__CWebViewControl * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CWeb_CUI_CIWebViewControl * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CWeb__CUI__CInterop__CWebViewControlVtbl;
interface __FIVectorView_1_Windows__CWeb__CUI__CInterop__CWebViewControl
{
    CONST_VTBL struct __FIVectorView_1_Windows__CWeb__CUI__CInterop__CWebViewControlVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CWeb__CUI__CInterop__CWebViewControl __FIAsyncOperationCompletedHandler_1_Windows__CWeb__CUI__CInterop__CWebViewControl;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CWeb__CUI__CInterop__CWebViewControl;
typedef interface __FIAsyncOperation_1_Windows__CWeb__CUI__CInterop__CWebViewControl __FIAsyncOperation_1_Windows__CWeb__CUI__CInterop__CWebViewControl;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CWeb__CUI__CInterop__CWebViewControlVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CWeb__CUI__CInterop__CWebViewControl * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CWeb__CUI__CInterop__CWebViewControl * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CWeb__CUI__CInterop__CWebViewControl * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CWeb__CUI__CInterop__CWebViewControl * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CWeb__CUI__CInterop__CWebViewControl *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CWeb__CUI__CInterop__CWebViewControlVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CWeb__CUI__CInterop__CWebViewControl
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CWeb__CUI__CInterop__CWebViewControlVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CWeb__CUI__CInterop__CWebViewControl __FIAsyncOperation_1_Windows__CWeb__CUI__CInterop__CWebViewControl;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CWeb__CUI__CInterop__CWebViewControl;
typedef struct __FIAsyncOperation_1_Windows__CWeb__CUI__CInterop__CWebViewControlVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CWeb__CUI__CInterop__CWebViewControl * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CWeb__CUI__CInterop__CWebViewControl * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CWeb__CUI__CInterop__CWebViewControl * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CWeb__CUI__CInterop__CWebViewControl * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CWeb__CUI__CInterop__CWebViewControl * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CWeb__CUI__CInterop__CWebViewControl * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CWeb__CUI__CInterop__CWebViewControl * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CWeb__CUI__CInterop__CWebViewControl *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CWeb__CUI__CInterop__CWebViewControl * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CWeb__CUI__CInterop__CWebViewControl **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CWeb__CUI__CInterop__CWebViewControl * This, __RPC__out __x_ABI_CWindows_CWeb_CUI_CIWebViewControl * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CWeb__CUI__CInterop__CWebViewControlVtbl;
interface __FIAsyncOperation_1_Windows__CWeb__CUI__CInterop__CWebViewControl
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CWeb__CUI__CInterop__CWebViewControlVtbl *lpVtbl;
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
typedef interface __FITypedEventHandler_2_Windows__CWeb__CUI__CInterop__CWebViewControl_IInspectable __FITypedEventHandler_2_Windows__CWeb__CUI__CInterop__CWebViewControl_IInspectable;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CWeb__CUI__CInterop__CWebViewControl_IInspectable;
typedef struct __FITypedEventHandler_2_Windows__CWeb__CUI__CInterop__CWebViewControl_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CWeb__CUI__CInterop__CWebViewControl_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CWeb__CUI__CInterop__CWebViewControl_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CWeb__CUI__CInterop__CWebViewControl_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CWeb__CUI__CInterop__CWebViewControl_IInspectable * This, __RPC__in_opt __x_ABI_CWindows_CWeb_CUI_CIWebViewControl * sender, __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CWeb__CUI__CInterop__CWebViewControl_IInspectableVtbl;
interface __FITypedEventHandler_2_Windows__CWeb__CUI__CInterop__CWebViewControl_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CWeb__CUI__CInterop__CWebViewControl_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CWeb__CUI__CInterop__CWebViewControl_Windows__CWeb__CUI__CInterop__CWebViewControlAcceleratorKeyPressedEventArgs __FITypedEventHandler_2_Windows__CWeb__CUI__CInterop__CWebViewControl_Windows__CWeb__CUI__CInterop__CWebViewControlAcceleratorKeyPressedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CWeb__CUI__CInterop__CWebViewControl_Windows__CWeb__CUI__CInterop__CWebViewControlAcceleratorKeyPressedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CWeb__CUI__CInterop__CWebViewControl_Windows__CWeb__CUI__CInterop__CWebViewControlAcceleratorKeyPressedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CWeb__CUI__CInterop__CWebViewControl_Windows__CWeb__CUI__CInterop__CWebViewControlAcceleratorKeyPressedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CWeb__CUI__CInterop__CWebViewControl_Windows__CWeb__CUI__CInterop__CWebViewControlAcceleratorKeyPressedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CWeb__CUI__CInterop__CWebViewControl_Windows__CWeb__CUI__CInterop__CWebViewControlAcceleratorKeyPressedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CWeb__CUI__CInterop__CWebViewControl_Windows__CWeb__CUI__CInterop__CWebViewControlAcceleratorKeyPressedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CWeb_CUI_CIWebViewControl * sender, __RPC__in_opt __x_ABI_CWindows_CWeb_CUI_CInterop_CIWebViewControlAcceleratorKeyPressedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CWeb__CUI__CInterop__CWebViewControl_Windows__CWeb__CUI__CInterop__CWebViewControlAcceleratorKeyPressedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CWeb__CUI__CInterop__CWebViewControl_Windows__CWeb__CUI__CInterop__CWebViewControlAcceleratorKeyPressedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CWeb__CUI__CInterop__CWebViewControl_Windows__CWeb__CUI__CInterop__CWebViewControlAcceleratorKeyPressedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CWeb__CUI__CInterop__CWebViewControl_Windows__CWeb__CUI__CInterop__CWebViewControlMoveFocusRequestedEventArgs __FITypedEventHandler_2_Windows__CWeb__CUI__CInterop__CWebViewControl_Windows__CWeb__CUI__CInterop__CWebViewControlMoveFocusRequestedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CWeb__CUI__CInterop__CWebViewControl_Windows__CWeb__CUI__CInterop__CWebViewControlMoveFocusRequestedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CWeb__CUI__CInterop__CWebViewControl_Windows__CWeb__CUI__CInterop__CWebViewControlMoveFocusRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CWeb__CUI__CInterop__CWebViewControl_Windows__CWeb__CUI__CInterop__CWebViewControlMoveFocusRequestedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CWeb__CUI__CInterop__CWebViewControl_Windows__CWeb__CUI__CInterop__CWebViewControlMoveFocusRequestedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CWeb__CUI__CInterop__CWebViewControl_Windows__CWeb__CUI__CInterop__CWebViewControlMoveFocusRequestedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CWeb__CUI__CInterop__CWebViewControl_Windows__CWeb__CUI__CInterop__CWebViewControlMoveFocusRequestedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CWeb_CUI_CIWebViewControl * sender, __RPC__in_opt __x_ABI_CWindows_CWeb_CUI_CInterop_CIWebViewControlMoveFocusRequestedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CWeb__CUI__CInterop__CWebViewControl_Windows__CWeb__CUI__CInterop__CWebViewControlMoveFocusRequestedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CWeb__CUI__CInterop__CWebViewControl_Windows__CWeb__CUI__CInterop__CWebViewControlMoveFocusRequestedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CWeb__CUI__CInterop__CWebViewControl_Windows__CWeb__CUI__CInterop__CWebViewControlMoveFocusRequestedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CWeb__CUI__CInterop__CWebViewControlProcess_IInspectable __FITypedEventHandler_2_Windows__CWeb__CUI__CInterop__CWebViewControlProcess_IInspectable;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CWeb__CUI__CInterop__CWebViewControlProcess_IInspectable;
typedef struct __FITypedEventHandler_2_Windows__CWeb__CUI__CInterop__CWebViewControlProcess_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CWeb__CUI__CInterop__CWebViewControlProcess_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CWeb__CUI__CInterop__CWebViewControlProcess_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CWeb__CUI__CInterop__CWebViewControlProcess_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CWeb__CUI__CInterop__CWebViewControlProcess_IInspectable * This, __RPC__in_opt __x_ABI_CWindows_CWeb_CUI_CInterop_CIWebViewControlProcess * sender, __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CWeb__CUI__CInterop__CWebViewControlProcess_IInspectableVtbl;
interface __FITypedEventHandler_2_Windows__CWeb__CUI__CInterop__CWebViewControlProcess_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CWeb__CUI__CInterop__CWebViewControlProcess_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef struct __x_ABI_CWindows_CFoundation_CRect __x_ABI_CWindows_CFoundation_CRect;
typedef enum __x_ABI_CWindows_CSystem_CVirtualKey __x_ABI_CWindows_CSystem_CVirtualKey;
typedef enum __x_ABI_CWindows_CUI_CCore_CCoreAcceleratorKeyEventType __x_ABI_CWindows_CUI_CCore_CCoreAcceleratorKeyEventType;
typedef struct __x_ABI_CWindows_CUI_CCore_CCorePhysicalKeyStatus __x_ABI_CWindows_CUI_CCore_CCorePhysicalKeyStatus;
typedef interface __x_ABI_CWindows_CWeb_CUI_CIWebViewControl2 __x_ABI_CWindows_CWeb_CUI_CIWebViewControl2;
typedef enum __x_ABI_CWindows_CWeb_CUI_CInterop_CWebViewControlAcceleratorKeyRoutingStage __x_ABI_CWindows_CWeb_CUI_CInterop_CWebViewControlAcceleratorKeyRoutingStage;
typedef enum __x_ABI_CWindows_CWeb_CUI_CInterop_CWebViewControlMoveFocusReason __x_ABI_CWindows_CWeb_CUI_CInterop_CWebViewControlMoveFocusReason;
typedef enum __x_ABI_CWindows_CWeb_CUI_CInterop_CWebViewControlProcessCapabilityState __x_ABI_CWindows_CWeb_CUI_CInterop_CWebViewControlProcessCapabilityState;
enum __x_ABI_CWindows_CWeb_CUI_CInterop_CWebViewControlAcceleratorKeyRoutingStage
{
    WebViewControlAcceleratorKeyRoutingStage_Tunneling = 0,
    WebViewControlAcceleratorKeyRoutingStage_Bubbling = 1,
};
enum __x_ABI_CWindows_CWeb_CUI_CInterop_CWebViewControlMoveFocusReason
{
    WebViewControlMoveFocusReason_Programmatic = 0,
    WebViewControlMoveFocusReason_Next = 1,
    WebViewControlMoveFocusReason_Previous = 2,
};
enum __x_ABI_CWindows_CWeb_CUI_CInterop_CWebViewControlProcessCapabilityState
{
    WebViewControlProcessCapabilityState_Default = 0,
    WebViewControlProcessCapabilityState_Disabled = 1,
    WebViewControlProcessCapabilityState_Enabled = 2,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_UI_Interop_IWebViewControlAcceleratorKeyPressedEventArgs[] = L"Windows.Web.UI.Interop.IWebViewControlAcceleratorKeyPressedEventArgs";
typedef struct __x_ABI_CWindows_CWeb_CUI_CInterop_CIWebViewControlAcceleratorKeyPressedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CUI_CInterop_CIWebViewControlAcceleratorKeyPressedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CUI_CInterop_CIWebViewControlAcceleratorKeyPressedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CUI_CInterop_CIWebViewControlAcceleratorKeyPressedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CUI_CInterop_CIWebViewControlAcceleratorKeyPressedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CUI_CInterop_CIWebViewControlAcceleratorKeyPressedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CUI_CInterop_CIWebViewControlAcceleratorKeyPressedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_EventType )(
        __x_ABI_CWindows_CWeb_CUI_CInterop_CIWebViewControlAcceleratorKeyPressedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CUI_CCore_CCoreAcceleratorKeyEventType * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_VirtualKey )(
        __x_ABI_CWindows_CWeb_CUI_CInterop_CIWebViewControlAcceleratorKeyPressedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CSystem_CVirtualKey * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_KeyStatus )(
        __x_ABI_CWindows_CWeb_CUI_CInterop_CIWebViewControlAcceleratorKeyPressedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CUI_CCore_CCorePhysicalKeyStatus * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RoutingStage )(
        __x_ABI_CWindows_CWeb_CUI_CInterop_CIWebViewControlAcceleratorKeyPressedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CWeb_CUI_CInterop_CWebViewControlAcceleratorKeyRoutingStage * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Handled )(
        __x_ABI_CWindows_CWeb_CUI_CInterop_CIWebViewControlAcceleratorKeyPressedEventArgs * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Handled )(
        __x_ABI_CWindows_CWeb_CUI_CInterop_CIWebViewControlAcceleratorKeyPressedEventArgs * This,
                  boolean value
        );
    END_INTERFACE
} __x_ABI_CWindows_CWeb_CUI_CInterop_CIWebViewControlAcceleratorKeyPressedEventArgsVtbl;
interface __x_ABI_CWindows_CWeb_CUI_CInterop_CIWebViewControlAcceleratorKeyPressedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CUI_CInterop_CIWebViewControlAcceleratorKeyPressedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_EventType(This,value) )
    ( (This)->lpVtbl->get_VirtualKey(This,value) )
    ( (This)->lpVtbl->get_KeyStatus(This,value) )
    ( (This)->lpVtbl->get_RoutingStage(This,value) )
    ( (This)->lpVtbl->get_Handled(This,value) )
    ( (This)->lpVtbl->put_Handled(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CUI_CInterop_CIWebViewControlAcceleratorKeyPressedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_UI_Interop_IWebViewControlMoveFocusRequestedEventArgs[] = L"Windows.Web.UI.Interop.IWebViewControlMoveFocusRequestedEventArgs";
typedef struct __x_ABI_CWindows_CWeb_CUI_CInterop_CIWebViewControlMoveFocusRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CUI_CInterop_CIWebViewControlMoveFocusRequestedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CUI_CInterop_CIWebViewControlMoveFocusRequestedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CUI_CInterop_CIWebViewControlMoveFocusRequestedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CUI_CInterop_CIWebViewControlMoveFocusRequestedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CUI_CInterop_CIWebViewControlMoveFocusRequestedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CUI_CInterop_CIWebViewControlMoveFocusRequestedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Reason )(
        __x_ABI_CWindows_CWeb_CUI_CInterop_CIWebViewControlMoveFocusRequestedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CWeb_CUI_CInterop_CWebViewControlMoveFocusReason * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CWeb_CUI_CInterop_CIWebViewControlMoveFocusRequestedEventArgsVtbl;
interface __x_ABI_CWindows_CWeb_CUI_CInterop_CIWebViewControlMoveFocusRequestedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CUI_CInterop_CIWebViewControlMoveFocusRequestedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Reason(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CUI_CInterop_CIWebViewControlMoveFocusRequestedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_UI_Interop_IWebViewControlProcess[] = L"Windows.Web.UI.Interop.IWebViewControlProcess";
typedef struct __x_ABI_CWindows_CWeb_CUI_CInterop_CIWebViewControlProcessVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CUI_CInterop_CIWebViewControlProcess * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CUI_CInterop_CIWebViewControlProcess * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CUI_CInterop_CIWebViewControlProcess * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CUI_CInterop_CIWebViewControlProcess * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CUI_CInterop_CIWebViewControlProcess * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CUI_CInterop_CIWebViewControlProcess * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ProcessId )(
        __x_ABI_CWindows_CWeb_CUI_CInterop_CIWebViewControlProcess * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_EnterpriseId )(
        __x_ABI_CWindows_CWeb_CUI_CInterop_CIWebViewControlProcess * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsPrivateNetworkClientServerCapabilityEnabled )(
        __x_ABI_CWindows_CWeb_CUI_CInterop_CIWebViewControlProcess * This,
                           __RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateWebViewControlAsync )(
        __x_ABI_CWindows_CWeb_CUI_CInterop_CIWebViewControlProcess * This,
                  INT64 hostWindowHandle,
                  __x_ABI_CWindows_CFoundation_CRect bounds,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CWeb__CUI__CInterop__CWebViewControl * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *GetWebViewControls )(
        __x_ABI_CWindows_CWeb_CUI_CInterop_CIWebViewControlProcess * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CWeb__CUI__CInterop__CWebViewControl * * result
        );
    HRESULT ( STDMETHODCALLTYPE *Terminate )(
        __x_ABI_CWindows_CWeb_CUI_CInterop_CIWebViewControlProcess * This
        );
                    HRESULT ( STDMETHODCALLTYPE *add_ProcessExited )(
        __x_ABI_CWindows_CWeb_CUI_CInterop_CIWebViewControlProcess * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CWeb__CUI__CInterop__CWebViewControlProcess_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_ProcessExited )(
        __x_ABI_CWindows_CWeb_CUI_CInterop_CIWebViewControlProcess * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CWeb_CUI_CInterop_CIWebViewControlProcessVtbl;
interface __x_ABI_CWindows_CWeb_CUI_CInterop_CIWebViewControlProcess
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CUI_CInterop_CIWebViewControlProcessVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ProcessId(This,value) )
    ( (This)->lpVtbl->get_EnterpriseId(This,value) )
    ( (This)->lpVtbl->get_IsPrivateNetworkClientServerCapabilityEnabled(This,value) )
    ( (This)->lpVtbl->CreateWebViewControlAsync(This,hostWindowHandle,bounds,operation) )
    ( (This)->lpVtbl->GetWebViewControls(This,result) )
    ( (This)->lpVtbl->Terminate(This) )
    ( (This)->lpVtbl->add_ProcessExited(This,handler,token) )
    ( (This)->lpVtbl->remove_ProcessExited(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CUI_CInterop_CIWebViewControlProcess;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_UI_Interop_IWebViewControlProcessFactory[] = L"Windows.Web.UI.Interop.IWebViewControlProcessFactory";
typedef struct __x_ABI_CWindows_CWeb_CUI_CInterop_CIWebViewControlProcessFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CUI_CInterop_CIWebViewControlProcessFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CUI_CInterop_CIWebViewControlProcessFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CUI_CInterop_CIWebViewControlProcessFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CUI_CInterop_CIWebViewControlProcessFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CUI_CInterop_CIWebViewControlProcessFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CUI_CInterop_CIWebViewControlProcessFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateWithOptions )(
        __x_ABI_CWindows_CWeb_CUI_CInterop_CIWebViewControlProcessFactory * This,
                  __RPC__in_opt __x_ABI_CWindows_CWeb_CUI_CInterop_CIWebViewControlProcessOptions * processOptions,
                           __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CUI_CInterop_CIWebViewControlProcess * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CWeb_CUI_CInterop_CIWebViewControlProcessFactoryVtbl;
interface __x_ABI_CWindows_CWeb_CUI_CInterop_CIWebViewControlProcessFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CUI_CInterop_CIWebViewControlProcessFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateWithOptions(This,processOptions,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CUI_CInterop_CIWebViewControlProcessFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_UI_Interop_IWebViewControlProcessOptions[] = L"Windows.Web.UI.Interop.IWebViewControlProcessOptions";
typedef struct __x_ABI_CWindows_CWeb_CUI_CInterop_CIWebViewControlProcessOptionsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CUI_CInterop_CIWebViewControlProcessOptions * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CUI_CInterop_CIWebViewControlProcessOptions * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CUI_CInterop_CIWebViewControlProcessOptions * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CUI_CInterop_CIWebViewControlProcessOptions * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CUI_CInterop_CIWebViewControlProcessOptions * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CUI_CInterop_CIWebViewControlProcessOptions * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_EnterpriseId )(
        __x_ABI_CWindows_CWeb_CUI_CInterop_CIWebViewControlProcessOptions * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_EnterpriseId )(
        __x_ABI_CWindows_CWeb_CUI_CInterop_CIWebViewControlProcessOptions * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_PrivateNetworkClientServerCapability )(
        __x_ABI_CWindows_CWeb_CUI_CInterop_CIWebViewControlProcessOptions * This,
                  __x_ABI_CWindows_CWeb_CUI_CInterop_CWebViewControlProcessCapabilityState value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PrivateNetworkClientServerCapability )(
        __x_ABI_CWindows_CWeb_CUI_CInterop_CIWebViewControlProcessOptions * This,
                           __RPC__out __x_ABI_CWindows_CWeb_CUI_CInterop_CWebViewControlProcessCapabilityState * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CWeb_CUI_CInterop_CIWebViewControlProcessOptionsVtbl;
interface __x_ABI_CWindows_CWeb_CUI_CInterop_CIWebViewControlProcessOptions
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CUI_CInterop_CIWebViewControlProcessOptionsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_EnterpriseId(This,value) )
    ( (This)->lpVtbl->get_EnterpriseId(This,value) )
    ( (This)->lpVtbl->put_PrivateNetworkClientServerCapability(This,value) )
    ( (This)->lpVtbl->get_PrivateNetworkClientServerCapability(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CUI_CInterop_CIWebViewControlProcessOptions;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_UI_Interop_IWebViewControlSite[] = L"Windows.Web.UI.Interop.IWebViewControlSite";
typedef struct __x_ABI_CWindows_CWeb_CUI_CInterop_CIWebViewControlSiteVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CUI_CInterop_CIWebViewControlSite * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CUI_CInterop_CIWebViewControlSite * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CUI_CInterop_CIWebViewControlSite * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CUI_CInterop_CIWebViewControlSite * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CUI_CInterop_CIWebViewControlSite * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CUI_CInterop_CIWebViewControlSite * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Process )(
        __x_ABI_CWindows_CWeb_CUI_CInterop_CIWebViewControlSite * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CUI_CInterop_CIWebViewControlProcess * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Scale )(
        __x_ABI_CWindows_CWeb_CUI_CInterop_CIWebViewControlSite * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Scale )(
        __x_ABI_CWindows_CWeb_CUI_CInterop_CIWebViewControlSite * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Bounds )(
        __x_ABI_CWindows_CWeb_CUI_CInterop_CIWebViewControlSite * This,
                  __x_ABI_CWindows_CFoundation_CRect value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Bounds )(
        __x_ABI_CWindows_CWeb_CUI_CInterop_CIWebViewControlSite * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CRect * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsVisible )(
        __x_ABI_CWindows_CWeb_CUI_CInterop_CIWebViewControlSite * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsVisible )(
        __x_ABI_CWindows_CWeb_CUI_CInterop_CIWebViewControlSite * This,
                           __RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *Close )(
        __x_ABI_CWindows_CWeb_CUI_CInterop_CIWebViewControlSite * This
        );
    HRESULT ( STDMETHODCALLTYPE *MoveFocus )(
        __x_ABI_CWindows_CWeb_CUI_CInterop_CIWebViewControlSite * This,
                  __x_ABI_CWindows_CWeb_CUI_CInterop_CWebViewControlMoveFocusReason reason
        );
                    HRESULT ( STDMETHODCALLTYPE *add_MoveFocusRequested )(
        __x_ABI_CWindows_CWeb_CUI_CInterop_CIWebViewControlSite * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CWeb__CUI__CInterop__CWebViewControl_Windows__CWeb__CUI__CInterop__CWebViewControlMoveFocusRequestedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_MoveFocusRequested )(
        __x_ABI_CWindows_CWeb_CUI_CInterop_CIWebViewControlSite * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_AcceleratorKeyPressed )(
        __x_ABI_CWindows_CWeb_CUI_CInterop_CIWebViewControlSite * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CWeb__CUI__CInterop__CWebViewControl_Windows__CWeb__CUI__CInterop__CWebViewControlAcceleratorKeyPressedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_AcceleratorKeyPressed )(
        __x_ABI_CWindows_CWeb_CUI_CInterop_CIWebViewControlSite * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CWeb_CUI_CInterop_CIWebViewControlSiteVtbl;
interface __x_ABI_CWindows_CWeb_CUI_CInterop_CIWebViewControlSite
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CUI_CInterop_CIWebViewControlSiteVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Process(This,value) )
    ( (This)->lpVtbl->put_Scale(This,value) )
    ( (This)->lpVtbl->get_Scale(This,value) )
    ( (This)->lpVtbl->put_Bounds(This,value) )
    ( (This)->lpVtbl->get_Bounds(This,value) )
    ( (This)->lpVtbl->put_IsVisible(This,value) )
    ( (This)->lpVtbl->get_IsVisible(This,value) )
    ( (This)->lpVtbl->Close(This) )
    ( (This)->lpVtbl->MoveFocus(This,reason) )
    ( (This)->lpVtbl->add_MoveFocusRequested(This,handler,token) )
    ( (This)->lpVtbl->remove_MoveFocusRequested(This,token) )
    ( (This)->lpVtbl->add_AcceleratorKeyPressed(This,handler,token) )
    ( (This)->lpVtbl->remove_AcceleratorKeyPressed(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CUI_CInterop_CIWebViewControlSite;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_UI_Interop_IWebViewControlSite2[] = L"Windows.Web.UI.Interop.IWebViewControlSite2";
typedef struct __x_ABI_CWindows_CWeb_CUI_CInterop_CIWebViewControlSite2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CUI_CInterop_CIWebViewControlSite2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CUI_CInterop_CIWebViewControlSite2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CUI_CInterop_CIWebViewControlSite2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CUI_CInterop_CIWebViewControlSite2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CUI_CInterop_CIWebViewControlSite2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CUI_CInterop_CIWebViewControlSite2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_GotFocus )(
        __x_ABI_CWindows_CWeb_CUI_CInterop_CIWebViewControlSite2 * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CWeb__CUI__CInterop__CWebViewControl_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_GotFocus )(
        __x_ABI_CWindows_CWeb_CUI_CInterop_CIWebViewControlSite2 * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_LostFocus )(
        __x_ABI_CWindows_CWeb_CUI_CInterop_CIWebViewControlSite2 * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CWeb__CUI__CInterop__CWebViewControl_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_LostFocus )(
        __x_ABI_CWindows_CWeb_CUI_CInterop_CIWebViewControlSite2 * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CWeb_CUI_CInterop_CIWebViewControlSite2Vtbl;
interface __x_ABI_CWindows_CWeb_CUI_CInterop_CIWebViewControlSite2
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CUI_CInterop_CIWebViewControlSite2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_GotFocus(This,handler,token) )
    ( (This)->lpVtbl->remove_GotFocus(This,token) )
    ( (This)->lpVtbl->add_LostFocus(This,handler,token) )
    ( (This)->lpVtbl->remove_LostFocus(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CUI_CInterop_CIWebViewControlSite2;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_UI_Interop_WebViewControl[] = L"Windows.Web.UI.Interop.WebViewControl";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_UI_Interop_WebViewControlAcceleratorKeyPressedEventArgs[] = L"Windows.Web.UI.Interop.WebViewControlAcceleratorKeyPressedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_UI_Interop_WebViewControlMoveFocusRequestedEventArgs[] = L"Windows.Web.UI.Interop.WebViewControlMoveFocusRequestedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_UI_Interop_WebViewControlProcess[] = L"Windows.Web.UI.Interop.WebViewControlProcess";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_UI_Interop_WebViewControlProcessOptions[] = L"Windows.Web.UI.Interop.WebViewControlProcessOptions";
       
       
#pragma clang diagnostic pop

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
#include "Windows.ApplicationModel.DataTransfer.h"
#include "Windows.Storage.Streams.h"
#include "Windows.UI.h"
#include "Windows.Web.h"
#include "Windows.Web.Http.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CWeb_CUI_CIWebViewControl __x_ABI_CWindows_CWeb_CUI_CIWebViewControl;
typedef interface __x_ABI_CWindows_CWeb_CUI_CIWebViewControl2 __x_ABI_CWindows_CWeb_CUI_CIWebViewControl2;
typedef interface __x_ABI_CWindows_CWeb_CUI_CIWebViewControlContentLoadingEventArgs __x_ABI_CWindows_CWeb_CUI_CIWebViewControlContentLoadingEventArgs;
typedef interface __x_ABI_CWindows_CWeb_CUI_CIWebViewControlDOMContentLoadedEventArgs __x_ABI_CWindows_CWeb_CUI_CIWebViewControlDOMContentLoadedEventArgs;
typedef interface __x_ABI_CWindows_CWeb_CUI_CIWebViewControlDeferredPermissionRequest __x_ABI_CWindows_CWeb_CUI_CIWebViewControlDeferredPermissionRequest;
typedef interface __x_ABI_CWindows_CWeb_CUI_CIWebViewControlLongRunningScriptDetectedEventArgs __x_ABI_CWindows_CWeb_CUI_CIWebViewControlLongRunningScriptDetectedEventArgs;
typedef interface __x_ABI_CWindows_CWeb_CUI_CIWebViewControlNavigationCompletedEventArgs __x_ABI_CWindows_CWeb_CUI_CIWebViewControlNavigationCompletedEventArgs;
typedef interface __x_ABI_CWindows_CWeb_CUI_CIWebViewControlNavigationStartingEventArgs __x_ABI_CWindows_CWeb_CUI_CIWebViewControlNavigationStartingEventArgs;
typedef interface __x_ABI_CWindows_CWeb_CUI_CIWebViewControlNewWindowRequestedEventArgs __x_ABI_CWindows_CWeb_CUI_CIWebViewControlNewWindowRequestedEventArgs;
typedef interface __x_ABI_CWindows_CWeb_CUI_CIWebViewControlNewWindowRequestedEventArgs2 __x_ABI_CWindows_CWeb_CUI_CIWebViewControlNewWindowRequestedEventArgs2;
typedef interface __x_ABI_CWindows_CWeb_CUI_CIWebViewControlPermissionRequest __x_ABI_CWindows_CWeb_CUI_CIWebViewControlPermissionRequest;
typedef interface __x_ABI_CWindows_CWeb_CUI_CIWebViewControlPermissionRequestedEventArgs __x_ABI_CWindows_CWeb_CUI_CIWebViewControlPermissionRequestedEventArgs;
typedef interface __x_ABI_CWindows_CWeb_CUI_CIWebViewControlScriptNotifyEventArgs __x_ABI_CWindows_CWeb_CUI_CIWebViewControlScriptNotifyEventArgs;
typedef interface __x_ABI_CWindows_CWeb_CUI_CIWebViewControlSettings __x_ABI_CWindows_CWeb_CUI_CIWebViewControlSettings;
typedef interface __x_ABI_CWindows_CWeb_CUI_CIWebViewControlUnsupportedUriSchemeIdentifiedEventArgs __x_ABI_CWindows_CWeb_CUI_CIWebViewControlUnsupportedUriSchemeIdentifiedEventArgs;
typedef interface __x_ABI_CWindows_CWeb_CUI_CIWebViewControlUnviewableContentIdentifiedEventArgs __x_ABI_CWindows_CWeb_CUI_CIWebViewControlUnviewableContentIdentifiedEventArgs;
typedef interface __x_ABI_CWindows_CWeb_CUI_CIWebViewControlWebResourceRequestedEventArgs __x_ABI_CWindows_CWeb_CUI_CIWebViewControlWebResourceRequestedEventArgs;
typedef interface __FIIterator_1_Windows__CWeb__CUI__CWebViewControlDeferredPermissionRequest __FIIterator_1_Windows__CWeb__CUI__CWebViewControlDeferredPermissionRequest;
EXTERN_C const IID IID___FIIterator_1_Windows__CWeb__CUI__CWebViewControlDeferredPermissionRequest;
typedef struct __FIIterator_1_Windows__CWeb__CUI__CWebViewControlDeferredPermissionRequestVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CWeb__CUI__CWebViewControlDeferredPermissionRequest * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CWeb__CUI__CWebViewControlDeferredPermissionRequest * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CWeb__CUI__CWebViewControlDeferredPermissionRequest * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CWeb__CUI__CWebViewControlDeferredPermissionRequest * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CWeb__CUI__CWebViewControlDeferredPermissionRequest * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CWeb__CUI__CWebViewControlDeferredPermissionRequest * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CWeb__CUI__CWebViewControlDeferredPermissionRequest * This, __RPC__out __x_ABI_CWindows_CWeb_CUI_CIWebViewControlDeferredPermissionRequest * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CWeb__CUI__CWebViewControlDeferredPermissionRequest * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CWeb__CUI__CWebViewControlDeferredPermissionRequest * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CWeb__CUI__CWebViewControlDeferredPermissionRequest * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CWeb_CUI_CIWebViewControlDeferredPermissionRequest * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CWeb__CUI__CWebViewControlDeferredPermissionRequestVtbl;
interface __FIIterator_1_Windows__CWeb__CUI__CWebViewControlDeferredPermissionRequest
{
    CONST_VTBL struct __FIIterator_1_Windows__CWeb__CUI__CWebViewControlDeferredPermissionRequestVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CWeb__CUI__CWebViewControlDeferredPermissionRequest __FIIterable_1_Windows__CWeb__CUI__CWebViewControlDeferredPermissionRequest;
EXTERN_C const IID IID___FIIterable_1_Windows__CWeb__CUI__CWebViewControlDeferredPermissionRequest;
typedef struct __FIIterable_1_Windows__CWeb__CUI__CWebViewControlDeferredPermissionRequestVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CWeb__CUI__CWebViewControlDeferredPermissionRequest * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CWeb__CUI__CWebViewControlDeferredPermissionRequest * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CWeb__CUI__CWebViewControlDeferredPermissionRequest * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CWeb__CUI__CWebViewControlDeferredPermissionRequest * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CWeb__CUI__CWebViewControlDeferredPermissionRequest * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CWeb__CUI__CWebViewControlDeferredPermissionRequest * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CWeb__CUI__CWebViewControlDeferredPermissionRequest * This, __RPC__deref_out_opt __FIIterator_1_Windows__CWeb__CUI__CWebViewControlDeferredPermissionRequest **first);
    END_INTERFACE
} __FIIterable_1_Windows__CWeb__CUI__CWebViewControlDeferredPermissionRequestVtbl;
interface __FIIterable_1_Windows__CWeb__CUI__CWebViewControlDeferredPermissionRequest
{
    CONST_VTBL struct __FIIterable_1_Windows__CWeb__CUI__CWebViewControlDeferredPermissionRequestVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CWeb__CUI__CWebViewControlDeferredPermissionRequest __FIVectorView_1_Windows__CWeb__CUI__CWebViewControlDeferredPermissionRequest;
EXTERN_C const IID IID___FIVectorView_1_Windows__CWeb__CUI__CWebViewControlDeferredPermissionRequest;
typedef struct __FIVectorView_1_Windows__CWeb__CUI__CWebViewControlDeferredPermissionRequestVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CWeb__CUI__CWebViewControlDeferredPermissionRequest * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CWeb__CUI__CWebViewControlDeferredPermissionRequest * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CWeb__CUI__CWebViewControlDeferredPermissionRequest * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CWeb__CUI__CWebViewControlDeferredPermissionRequest * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CWeb__CUI__CWebViewControlDeferredPermissionRequest * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CWeb__CUI__CWebViewControlDeferredPermissionRequest * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CWeb__CUI__CWebViewControlDeferredPermissionRequest * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CWeb_CUI_CIWebViewControlDeferredPermissionRequest * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CWeb__CUI__CWebViewControlDeferredPermissionRequest * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CWeb__CUI__CWebViewControlDeferredPermissionRequest * This,
                       __x_ABI_CWindows_CWeb_CUI_CIWebViewControlDeferredPermissionRequest * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CWeb__CUI__CWebViewControlDeferredPermissionRequest * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CWeb_CUI_CIWebViewControlDeferredPermissionRequest * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CWeb__CUI__CWebViewControlDeferredPermissionRequestVtbl;
interface __FIVectorView_1_Windows__CWeb__CUI__CWebViewControlDeferredPermissionRequest
{
    CONST_VTBL struct __FIVectorView_1_Windows__CWeb__CUI__CWebViewControlDeferredPermissionRequestVtbl *lpVtbl;
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
typedef interface __FITypedEventHandler_2_Windows__CWeb__CUI__CIWebViewControl_IInspectable __FITypedEventHandler_2_Windows__CWeb__CUI__CIWebViewControl_IInspectable;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CWeb__CUI__CIWebViewControl_IInspectable;
typedef struct __FITypedEventHandler_2_Windows__CWeb__CUI__CIWebViewControl_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CWeb__CUI__CIWebViewControl_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CWeb__CUI__CIWebViewControl_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CWeb__CUI__CIWebViewControl_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CWeb__CUI__CIWebViewControl_IInspectable * This, __RPC__in_opt __x_ABI_CWindows_CWeb_CUI_CIWebViewControl * sender, __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CWeb__CUI__CIWebViewControl_IInspectableVtbl;
interface __FITypedEventHandler_2_Windows__CWeb__CUI__CIWebViewControl_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CWeb__CUI__CIWebViewControl_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CWeb__CUI__CIWebViewControl_Windows__CWeb__CUI__CWebViewControlContentLoadingEventArgs __FITypedEventHandler_2_Windows__CWeb__CUI__CIWebViewControl_Windows__CWeb__CUI__CWebViewControlContentLoadingEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CWeb__CUI__CIWebViewControl_Windows__CWeb__CUI__CWebViewControlContentLoadingEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CWeb__CUI__CIWebViewControl_Windows__CWeb__CUI__CWebViewControlContentLoadingEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CWeb__CUI__CIWebViewControl_Windows__CWeb__CUI__CWebViewControlContentLoadingEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CWeb__CUI__CIWebViewControl_Windows__CWeb__CUI__CWebViewControlContentLoadingEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CWeb__CUI__CIWebViewControl_Windows__CWeb__CUI__CWebViewControlContentLoadingEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CWeb__CUI__CIWebViewControl_Windows__CWeb__CUI__CWebViewControlContentLoadingEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CWeb_CUI_CIWebViewControl * sender, __RPC__in_opt __x_ABI_CWindows_CWeb_CUI_CIWebViewControlContentLoadingEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CWeb__CUI__CIWebViewControl_Windows__CWeb__CUI__CWebViewControlContentLoadingEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CWeb__CUI__CIWebViewControl_Windows__CWeb__CUI__CWebViewControlContentLoadingEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CWeb__CUI__CIWebViewControl_Windows__CWeb__CUI__CWebViewControlContentLoadingEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CWeb__CUI__CIWebViewControl_Windows__CWeb__CUI__CWebViewControlDOMContentLoadedEventArgs __FITypedEventHandler_2_Windows__CWeb__CUI__CIWebViewControl_Windows__CWeb__CUI__CWebViewControlDOMContentLoadedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CWeb__CUI__CIWebViewControl_Windows__CWeb__CUI__CWebViewControlDOMContentLoadedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CWeb__CUI__CIWebViewControl_Windows__CWeb__CUI__CWebViewControlDOMContentLoadedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CWeb__CUI__CIWebViewControl_Windows__CWeb__CUI__CWebViewControlDOMContentLoadedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CWeb__CUI__CIWebViewControl_Windows__CWeb__CUI__CWebViewControlDOMContentLoadedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CWeb__CUI__CIWebViewControl_Windows__CWeb__CUI__CWebViewControlDOMContentLoadedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CWeb__CUI__CIWebViewControl_Windows__CWeb__CUI__CWebViewControlDOMContentLoadedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CWeb_CUI_CIWebViewControl * sender, __RPC__in_opt __x_ABI_CWindows_CWeb_CUI_CIWebViewControlDOMContentLoadedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CWeb__CUI__CIWebViewControl_Windows__CWeb__CUI__CWebViewControlDOMContentLoadedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CWeb__CUI__CIWebViewControl_Windows__CWeb__CUI__CWebViewControlDOMContentLoadedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CWeb__CUI__CIWebViewControl_Windows__CWeb__CUI__CWebViewControlDOMContentLoadedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CWeb__CUI__CIWebViewControl_Windows__CWeb__CUI__CWebViewControlLongRunningScriptDetectedEventArgs __FITypedEventHandler_2_Windows__CWeb__CUI__CIWebViewControl_Windows__CWeb__CUI__CWebViewControlLongRunningScriptDetectedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CWeb__CUI__CIWebViewControl_Windows__CWeb__CUI__CWebViewControlLongRunningScriptDetectedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CWeb__CUI__CIWebViewControl_Windows__CWeb__CUI__CWebViewControlLongRunningScriptDetectedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CWeb__CUI__CIWebViewControl_Windows__CWeb__CUI__CWebViewControlLongRunningScriptDetectedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CWeb__CUI__CIWebViewControl_Windows__CWeb__CUI__CWebViewControlLongRunningScriptDetectedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CWeb__CUI__CIWebViewControl_Windows__CWeb__CUI__CWebViewControlLongRunningScriptDetectedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CWeb__CUI__CIWebViewControl_Windows__CWeb__CUI__CWebViewControlLongRunningScriptDetectedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CWeb_CUI_CIWebViewControl * sender, __RPC__in_opt __x_ABI_CWindows_CWeb_CUI_CIWebViewControlLongRunningScriptDetectedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CWeb__CUI__CIWebViewControl_Windows__CWeb__CUI__CWebViewControlLongRunningScriptDetectedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CWeb__CUI__CIWebViewControl_Windows__CWeb__CUI__CWebViewControlLongRunningScriptDetectedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CWeb__CUI__CIWebViewControl_Windows__CWeb__CUI__CWebViewControlLongRunningScriptDetectedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CWeb__CUI__CIWebViewControl_Windows__CWeb__CUI__CWebViewControlNavigationCompletedEventArgs __FITypedEventHandler_2_Windows__CWeb__CUI__CIWebViewControl_Windows__CWeb__CUI__CWebViewControlNavigationCompletedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CWeb__CUI__CIWebViewControl_Windows__CWeb__CUI__CWebViewControlNavigationCompletedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CWeb__CUI__CIWebViewControl_Windows__CWeb__CUI__CWebViewControlNavigationCompletedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CWeb__CUI__CIWebViewControl_Windows__CWeb__CUI__CWebViewControlNavigationCompletedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CWeb__CUI__CIWebViewControl_Windows__CWeb__CUI__CWebViewControlNavigationCompletedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CWeb__CUI__CIWebViewControl_Windows__CWeb__CUI__CWebViewControlNavigationCompletedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CWeb__CUI__CIWebViewControl_Windows__CWeb__CUI__CWebViewControlNavigationCompletedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CWeb_CUI_CIWebViewControl * sender, __RPC__in_opt __x_ABI_CWindows_CWeb_CUI_CIWebViewControlNavigationCompletedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CWeb__CUI__CIWebViewControl_Windows__CWeb__CUI__CWebViewControlNavigationCompletedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CWeb__CUI__CIWebViewControl_Windows__CWeb__CUI__CWebViewControlNavigationCompletedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CWeb__CUI__CIWebViewControl_Windows__CWeb__CUI__CWebViewControlNavigationCompletedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CWeb__CUI__CIWebViewControl_Windows__CWeb__CUI__CWebViewControlNavigationStartingEventArgs __FITypedEventHandler_2_Windows__CWeb__CUI__CIWebViewControl_Windows__CWeb__CUI__CWebViewControlNavigationStartingEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CWeb__CUI__CIWebViewControl_Windows__CWeb__CUI__CWebViewControlNavigationStartingEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CWeb__CUI__CIWebViewControl_Windows__CWeb__CUI__CWebViewControlNavigationStartingEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CWeb__CUI__CIWebViewControl_Windows__CWeb__CUI__CWebViewControlNavigationStartingEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CWeb__CUI__CIWebViewControl_Windows__CWeb__CUI__CWebViewControlNavigationStartingEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CWeb__CUI__CIWebViewControl_Windows__CWeb__CUI__CWebViewControlNavigationStartingEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CWeb__CUI__CIWebViewControl_Windows__CWeb__CUI__CWebViewControlNavigationStartingEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CWeb_CUI_CIWebViewControl * sender, __RPC__in_opt __x_ABI_CWindows_CWeb_CUI_CIWebViewControlNavigationStartingEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CWeb__CUI__CIWebViewControl_Windows__CWeb__CUI__CWebViewControlNavigationStartingEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CWeb__CUI__CIWebViewControl_Windows__CWeb__CUI__CWebViewControlNavigationStartingEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CWeb__CUI__CIWebViewControl_Windows__CWeb__CUI__CWebViewControlNavigationStartingEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CWeb__CUI__CIWebViewControl_Windows__CWeb__CUI__CWebViewControlNewWindowRequestedEventArgs __FITypedEventHandler_2_Windows__CWeb__CUI__CIWebViewControl_Windows__CWeb__CUI__CWebViewControlNewWindowRequestedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CWeb__CUI__CIWebViewControl_Windows__CWeb__CUI__CWebViewControlNewWindowRequestedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CWeb__CUI__CIWebViewControl_Windows__CWeb__CUI__CWebViewControlNewWindowRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CWeb__CUI__CIWebViewControl_Windows__CWeb__CUI__CWebViewControlNewWindowRequestedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CWeb__CUI__CIWebViewControl_Windows__CWeb__CUI__CWebViewControlNewWindowRequestedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CWeb__CUI__CIWebViewControl_Windows__CWeb__CUI__CWebViewControlNewWindowRequestedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CWeb__CUI__CIWebViewControl_Windows__CWeb__CUI__CWebViewControlNewWindowRequestedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CWeb_CUI_CIWebViewControl * sender, __RPC__in_opt __x_ABI_CWindows_CWeb_CUI_CIWebViewControlNewWindowRequestedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CWeb__CUI__CIWebViewControl_Windows__CWeb__CUI__CWebViewControlNewWindowRequestedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CWeb__CUI__CIWebViewControl_Windows__CWeb__CUI__CWebViewControlNewWindowRequestedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CWeb__CUI__CIWebViewControl_Windows__CWeb__CUI__CWebViewControlNewWindowRequestedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CWeb__CUI__CIWebViewControl_Windows__CWeb__CUI__CWebViewControlPermissionRequestedEventArgs __FITypedEventHandler_2_Windows__CWeb__CUI__CIWebViewControl_Windows__CWeb__CUI__CWebViewControlPermissionRequestedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CWeb__CUI__CIWebViewControl_Windows__CWeb__CUI__CWebViewControlPermissionRequestedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CWeb__CUI__CIWebViewControl_Windows__CWeb__CUI__CWebViewControlPermissionRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CWeb__CUI__CIWebViewControl_Windows__CWeb__CUI__CWebViewControlPermissionRequestedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CWeb__CUI__CIWebViewControl_Windows__CWeb__CUI__CWebViewControlPermissionRequestedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CWeb__CUI__CIWebViewControl_Windows__CWeb__CUI__CWebViewControlPermissionRequestedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CWeb__CUI__CIWebViewControl_Windows__CWeb__CUI__CWebViewControlPermissionRequestedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CWeb_CUI_CIWebViewControl * sender, __RPC__in_opt __x_ABI_CWindows_CWeb_CUI_CIWebViewControlPermissionRequestedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CWeb__CUI__CIWebViewControl_Windows__CWeb__CUI__CWebViewControlPermissionRequestedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CWeb__CUI__CIWebViewControl_Windows__CWeb__CUI__CWebViewControlPermissionRequestedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CWeb__CUI__CIWebViewControl_Windows__CWeb__CUI__CWebViewControlPermissionRequestedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CWeb__CUI__CIWebViewControl_Windows__CWeb__CUI__CWebViewControlScriptNotifyEventArgs __FITypedEventHandler_2_Windows__CWeb__CUI__CIWebViewControl_Windows__CWeb__CUI__CWebViewControlScriptNotifyEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CWeb__CUI__CIWebViewControl_Windows__CWeb__CUI__CWebViewControlScriptNotifyEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CWeb__CUI__CIWebViewControl_Windows__CWeb__CUI__CWebViewControlScriptNotifyEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CWeb__CUI__CIWebViewControl_Windows__CWeb__CUI__CWebViewControlScriptNotifyEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CWeb__CUI__CIWebViewControl_Windows__CWeb__CUI__CWebViewControlScriptNotifyEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CWeb__CUI__CIWebViewControl_Windows__CWeb__CUI__CWebViewControlScriptNotifyEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CWeb__CUI__CIWebViewControl_Windows__CWeb__CUI__CWebViewControlScriptNotifyEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CWeb_CUI_CIWebViewControl * sender, __RPC__in_opt __x_ABI_CWindows_CWeb_CUI_CIWebViewControlScriptNotifyEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CWeb__CUI__CIWebViewControl_Windows__CWeb__CUI__CWebViewControlScriptNotifyEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CWeb__CUI__CIWebViewControl_Windows__CWeb__CUI__CWebViewControlScriptNotifyEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CWeb__CUI__CIWebViewControl_Windows__CWeb__CUI__CWebViewControlScriptNotifyEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CWeb__CUI__CIWebViewControl_Windows__CWeb__CUI__CWebViewControlUnsupportedUriSchemeIdentifiedEventArgs __FITypedEventHandler_2_Windows__CWeb__CUI__CIWebViewControl_Windows__CWeb__CUI__CWebViewControlUnsupportedUriSchemeIdentifiedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CWeb__CUI__CIWebViewControl_Windows__CWeb__CUI__CWebViewControlUnsupportedUriSchemeIdentifiedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CWeb__CUI__CIWebViewControl_Windows__CWeb__CUI__CWebViewControlUnsupportedUriSchemeIdentifiedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CWeb__CUI__CIWebViewControl_Windows__CWeb__CUI__CWebViewControlUnsupportedUriSchemeIdentifiedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CWeb__CUI__CIWebViewControl_Windows__CWeb__CUI__CWebViewControlUnsupportedUriSchemeIdentifiedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CWeb__CUI__CIWebViewControl_Windows__CWeb__CUI__CWebViewControlUnsupportedUriSchemeIdentifiedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CWeb__CUI__CIWebViewControl_Windows__CWeb__CUI__CWebViewControlUnsupportedUriSchemeIdentifiedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CWeb_CUI_CIWebViewControl * sender, __RPC__in_opt __x_ABI_CWindows_CWeb_CUI_CIWebViewControlUnsupportedUriSchemeIdentifiedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CWeb__CUI__CIWebViewControl_Windows__CWeb__CUI__CWebViewControlUnsupportedUriSchemeIdentifiedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CWeb__CUI__CIWebViewControl_Windows__CWeb__CUI__CWebViewControlUnsupportedUriSchemeIdentifiedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CWeb__CUI__CIWebViewControl_Windows__CWeb__CUI__CWebViewControlUnsupportedUriSchemeIdentifiedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CWeb__CUI__CIWebViewControl_Windows__CWeb__CUI__CWebViewControlUnviewableContentIdentifiedEventArgs __FITypedEventHandler_2_Windows__CWeb__CUI__CIWebViewControl_Windows__CWeb__CUI__CWebViewControlUnviewableContentIdentifiedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CWeb__CUI__CIWebViewControl_Windows__CWeb__CUI__CWebViewControlUnviewableContentIdentifiedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CWeb__CUI__CIWebViewControl_Windows__CWeb__CUI__CWebViewControlUnviewableContentIdentifiedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CWeb__CUI__CIWebViewControl_Windows__CWeb__CUI__CWebViewControlUnviewableContentIdentifiedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CWeb__CUI__CIWebViewControl_Windows__CWeb__CUI__CWebViewControlUnviewableContentIdentifiedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CWeb__CUI__CIWebViewControl_Windows__CWeb__CUI__CWebViewControlUnviewableContentIdentifiedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CWeb__CUI__CIWebViewControl_Windows__CWeb__CUI__CWebViewControlUnviewableContentIdentifiedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CWeb_CUI_CIWebViewControl * sender, __RPC__in_opt __x_ABI_CWindows_CWeb_CUI_CIWebViewControlUnviewableContentIdentifiedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CWeb__CUI__CIWebViewControl_Windows__CWeb__CUI__CWebViewControlUnviewableContentIdentifiedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CWeb__CUI__CIWebViewControl_Windows__CWeb__CUI__CWebViewControlUnviewableContentIdentifiedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CWeb__CUI__CIWebViewControl_Windows__CWeb__CUI__CWebViewControlUnviewableContentIdentifiedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CWeb__CUI__CIWebViewControl_Windows__CWeb__CUI__CWebViewControlWebResourceRequestedEventArgs __FITypedEventHandler_2_Windows__CWeb__CUI__CIWebViewControl_Windows__CWeb__CUI__CWebViewControlWebResourceRequestedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CWeb__CUI__CIWebViewControl_Windows__CWeb__CUI__CWebViewControlWebResourceRequestedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CWeb__CUI__CIWebViewControl_Windows__CWeb__CUI__CWebViewControlWebResourceRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CWeb__CUI__CIWebViewControl_Windows__CWeb__CUI__CWebViewControlWebResourceRequestedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CWeb__CUI__CIWebViewControl_Windows__CWeb__CUI__CWebViewControlWebResourceRequestedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CWeb__CUI__CIWebViewControl_Windows__CWeb__CUI__CWebViewControlWebResourceRequestedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CWeb__CUI__CIWebViewControl_Windows__CWeb__CUI__CWebViewControlWebResourceRequestedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CWeb_CUI_CIWebViewControl * sender, __RPC__in_opt __x_ABI_CWindows_CWeb_CUI_CIWebViewControlWebResourceRequestedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CWeb__CUI__CIWebViewControl_Windows__CWeb__CUI__CWebViewControlWebResourceRequestedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CWeb__CUI__CIWebViewControl_Windows__CWeb__CUI__CWebViewControlWebResourceRequestedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CWeb__CUI__CIWebViewControl_Windows__CWeb__CUI__CWebViewControlWebResourceRequestedEventArgsVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_HSTRING __FIAsyncOperationCompletedHandler_1_HSTRING;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_HSTRING;
typedef interface __FIAsyncOperation_1_HSTRING __FIAsyncOperation_1_HSTRING;
typedef struct __FIAsyncOperationCompletedHandler_1_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_HSTRING * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_HSTRING * This, __RPC__in_opt __FIAsyncOperation_1_HSTRING *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_HSTRINGVtbl;
interface __FIAsyncOperationCompletedHandler_1_HSTRING
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_HSTRINGVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_HSTRING __FIAsyncOperation_1_HSTRING;
EXTERN_C const IID IID___FIAsyncOperation_1_HSTRING;
typedef struct __FIAsyncOperation_1_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_HSTRING * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_HSTRING * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_HSTRING * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_HSTRING * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_HSTRING * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_HSTRING *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_HSTRING * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_HSTRING **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_HSTRING * This, __RPC__out HSTRING *results);
    END_INTERFACE
} __FIAsyncOperation_1_HSTRINGVtbl;
interface __FIAsyncOperation_1_HSTRING
{
    CONST_VTBL struct __FIAsyncOperation_1_HSTRINGVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage;
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CDataTransfer__CDataPackage __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CDataTransfer__CDataPackage;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CDataTransfer__CDataPackage;
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackage __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackage;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CDataTransfer__CDataPackageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CDataTransfer__CDataPackage * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CDataTransfer__CDataPackage * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CDataTransfer__CDataPackage * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CDataTransfer__CDataPackage * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackage *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CDataTransfer__CDataPackageVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CDataTransfer__CDataPackage
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CDataTransfer__CDataPackageVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackage __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackage;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackage;
typedef struct __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackage * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackage * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackage * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackage * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackage * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackage * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackage * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CDataTransfer__CDataPackage *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackage * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CDataTransfer__CDataPackage **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackage * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackageVtbl;
interface __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackage
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackageVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CFoundation_CIDeferral __x_ABI_CWindows_CFoundation_CIDeferral;
typedef interface __x_ABI_CWindows_CFoundation_CIAsyncAction __x_ABI_CWindows_CFoundation_CIAsyncAction;
typedef struct __x_ABI_CWindows_CFoundation_CTimeSpan __x_ABI_CWindows_CFoundation_CTimeSpan;
typedef interface __x_ABI_CWindows_CFoundation_CIUriRuntimeClass __x_ABI_CWindows_CFoundation_CIUriRuntimeClass;
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream;
typedef struct __x_ABI_CWindows_CUI_CColor __x_ABI_CWindows_CUI_CColor;
typedef interface __x_ABI_CWindows_CWeb_CHttp_CIHttpRequestMessage __x_ABI_CWindows_CWeb_CHttp_CIHttpRequestMessage;
typedef interface __x_ABI_CWindows_CWeb_CHttp_CIHttpResponseMessage __x_ABI_CWindows_CWeb_CHttp_CIHttpResponseMessage;
typedef interface __x_ABI_CWindows_CWeb_CIUriToStreamResolver __x_ABI_CWindows_CWeb_CIUriToStreamResolver;
typedef enum __x_ABI_CWindows_CWeb_CWebErrorStatus __x_ABI_CWindows_CWeb_CWebErrorStatus;
typedef enum __x_ABI_CWindows_CWeb_CUI_CWebViewControlPermissionState __x_ABI_CWindows_CWeb_CUI_CWebViewControlPermissionState;
typedef enum __x_ABI_CWindows_CWeb_CUI_CWebViewControlPermissionType __x_ABI_CWindows_CWeb_CUI_CWebViewControlPermissionType;
enum __x_ABI_CWindows_CWeb_CUI_CWebViewControlPermissionState
{
    WebViewControlPermissionState_Unknown = 0,
    WebViewControlPermissionState_Defer = 1,
    WebViewControlPermissionState_Allow = 2,
    WebViewControlPermissionState_Deny = 3,
};
enum __x_ABI_CWindows_CWeb_CUI_CWebViewControlPermissionType
{
    WebViewControlPermissionType_Geolocation = 0,
    WebViewControlPermissionType_UnlimitedIndexedDBQuota = 1,
    WebViewControlPermissionType_Media = 2,
    WebViewControlPermissionType_PointerLock = 3,
    WebViewControlPermissionType_WebNotifications = 4,
    WebViewControlPermissionType_Screen = 5,
    WebViewControlPermissionType_ImmersiveView = 6,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_UI_IWebViewControl[] = L"Windows.Web.UI.IWebViewControl";
typedef struct __x_ABI_CWindows_CWeb_CUI_CIWebViewControlVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CUI_CIWebViewControl * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CUI_CIWebViewControl * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CUI_CIWebViewControl * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CUI_CIWebViewControl * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CUI_CIWebViewControl * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CUI_CIWebViewControl * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Source )(
        __x_ABI_CWindows_CWeb_CUI_CIWebViewControl * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Source )(
        __x_ABI_CWindows_CWeb_CUI_CIWebViewControl * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * source
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DocumentTitle )(
        __x_ABI_CWindows_CWeb_CUI_CIWebViewControl * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CanGoBack )(
        __x_ABI_CWindows_CWeb_CUI_CIWebViewControl * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CanGoForward )(
        __x_ABI_CWindows_CWeb_CUI_CIWebViewControl * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DefaultBackgroundColor )(
        __x_ABI_CWindows_CWeb_CUI_CIWebViewControl * This,
                  __x_ABI_CWindows_CUI_CColor value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DefaultBackgroundColor )(
        __x_ABI_CWindows_CWeb_CUI_CIWebViewControl * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ContainsFullScreenElement )(
        __x_ABI_CWindows_CWeb_CUI_CIWebViewControl * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Settings )(
        __x_ABI_CWindows_CWeb_CUI_CIWebViewControl * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CUI_CIWebViewControlSettings * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DeferredPermissionRequests )(
        __x_ABI_CWindows_CWeb_CUI_CIWebViewControl * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CWeb__CUI__CWebViewControlDeferredPermissionRequest * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GoForward )(
        __x_ABI_CWindows_CWeb_CUI_CIWebViewControl * This
        );
    HRESULT ( STDMETHODCALLTYPE *GoBack )(
        __x_ABI_CWindows_CWeb_CUI_CIWebViewControl * This
        );
    HRESULT ( STDMETHODCALLTYPE *Refresh )(
        __x_ABI_CWindows_CWeb_CUI_CIWebViewControl * This
        );
    HRESULT ( STDMETHODCALLTYPE *Stop )(
        __x_ABI_CWindows_CWeb_CUI_CIWebViewControl * This
        );
    HRESULT ( STDMETHODCALLTYPE *Navigate )(
        __x_ABI_CWindows_CWeb_CUI_CIWebViewControl * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * source
        );
    HRESULT ( STDMETHODCALLTYPE *NavigateToString )(
        __x_ABI_CWindows_CWeb_CUI_CIWebViewControl * This,
                  __RPC__in HSTRING text
        );
    HRESULT ( STDMETHODCALLTYPE *NavigateToLocalStreamUri )(
        __x_ABI_CWindows_CWeb_CUI_CIWebViewControl * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * source,
                  __RPC__in_opt __x_ABI_CWindows_CWeb_CIUriToStreamResolver * streamResolver
        );
    HRESULT ( STDMETHODCALLTYPE *NavigateWithHttpRequestMessage )(
        __x_ABI_CWindows_CWeb_CUI_CIWebViewControl * This,
                  __RPC__in_opt __x_ABI_CWindows_CWeb_CHttp_CIHttpRequestMessage * requestMessage
        );
    HRESULT ( STDMETHODCALLTYPE *InvokeScriptAsync )(
        __x_ABI_CWindows_CWeb_CUI_CIWebViewControl * This,
                  __RPC__in HSTRING scriptName,
                  __RPC__in_opt __FIIterable_1_HSTRING * arguments,
                           __RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *CapturePreviewToStreamAsync )(
        __x_ABI_CWindows_CWeb_CUI_CIWebViewControl * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * stream,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *CaptureSelectedContentToDataPackageAsync )(
        __x_ABI_CWindows_CWeb_CUI_CIWebViewControl * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackage * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *BuildLocalStreamUri )(
        __x_ABI_CWindows_CWeb_CUI_CIWebViewControl * This,
                  __RPC__in HSTRING contentIdentifier,
                  __RPC__in HSTRING relativePath,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeferredPermissionRequestById )(
        __x_ABI_CWindows_CWeb_CUI_CIWebViewControl * This,
                  UINT32 id,
                   __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CUI_CIWebViewControlDeferredPermissionRequest * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *add_NavigationStarting )(
        __x_ABI_CWindows_CWeb_CUI_CIWebViewControl * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CWeb__CUI__CIWebViewControl_Windows__CWeb__CUI__CWebViewControlNavigationStartingEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_NavigationStarting )(
        __x_ABI_CWindows_CWeb_CUI_CIWebViewControl * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_ContentLoading )(
        __x_ABI_CWindows_CWeb_CUI_CIWebViewControl * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CWeb__CUI__CIWebViewControl_Windows__CWeb__CUI__CWebViewControlContentLoadingEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_ContentLoading )(
        __x_ABI_CWindows_CWeb_CUI_CIWebViewControl * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_DOMContentLoaded )(
        __x_ABI_CWindows_CWeb_CUI_CIWebViewControl * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CWeb__CUI__CIWebViewControl_Windows__CWeb__CUI__CWebViewControlDOMContentLoadedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_DOMContentLoaded )(
        __x_ABI_CWindows_CWeb_CUI_CIWebViewControl * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_NavigationCompleted )(
        __x_ABI_CWindows_CWeb_CUI_CIWebViewControl * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CWeb__CUI__CIWebViewControl_Windows__CWeb__CUI__CWebViewControlNavigationCompletedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_NavigationCompleted )(
        __x_ABI_CWindows_CWeb_CUI_CIWebViewControl * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_FrameNavigationStarting )(
        __x_ABI_CWindows_CWeb_CUI_CIWebViewControl * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CWeb__CUI__CIWebViewControl_Windows__CWeb__CUI__CWebViewControlNavigationStartingEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_FrameNavigationStarting )(
        __x_ABI_CWindows_CWeb_CUI_CIWebViewControl * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_FrameContentLoading )(
        __x_ABI_CWindows_CWeb_CUI_CIWebViewControl * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CWeb__CUI__CIWebViewControl_Windows__CWeb__CUI__CWebViewControlContentLoadingEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_FrameContentLoading )(
        __x_ABI_CWindows_CWeb_CUI_CIWebViewControl * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_FrameDOMContentLoaded )(
        __x_ABI_CWindows_CWeb_CUI_CIWebViewControl * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CWeb__CUI__CIWebViewControl_Windows__CWeb__CUI__CWebViewControlDOMContentLoadedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_FrameDOMContentLoaded )(
        __x_ABI_CWindows_CWeb_CUI_CIWebViewControl * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_FrameNavigationCompleted )(
        __x_ABI_CWindows_CWeb_CUI_CIWebViewControl * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CWeb__CUI__CIWebViewControl_Windows__CWeb__CUI__CWebViewControlNavigationCompletedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_FrameNavigationCompleted )(
        __x_ABI_CWindows_CWeb_CUI_CIWebViewControl * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_ScriptNotify )(
        __x_ABI_CWindows_CWeb_CUI_CIWebViewControl * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CWeb__CUI__CIWebViewControl_Windows__CWeb__CUI__CWebViewControlScriptNotifyEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_ScriptNotify )(
        __x_ABI_CWindows_CWeb_CUI_CIWebViewControl * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_LongRunningScriptDetected )(
        __x_ABI_CWindows_CWeb_CUI_CIWebViewControl * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CWeb__CUI__CIWebViewControl_Windows__CWeb__CUI__CWebViewControlLongRunningScriptDetectedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_LongRunningScriptDetected )(
        __x_ABI_CWindows_CWeb_CUI_CIWebViewControl * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_UnsafeContentWarningDisplaying )(
        __x_ABI_CWindows_CWeb_CUI_CIWebViewControl * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CWeb__CUI__CIWebViewControl_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_UnsafeContentWarningDisplaying )(
        __x_ABI_CWindows_CWeb_CUI_CIWebViewControl * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_UnviewableContentIdentified )(
        __x_ABI_CWindows_CWeb_CUI_CIWebViewControl * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CWeb__CUI__CIWebViewControl_Windows__CWeb__CUI__CWebViewControlUnviewableContentIdentifiedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_UnviewableContentIdentified )(
        __x_ABI_CWindows_CWeb_CUI_CIWebViewControl * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_PermissionRequested )(
        __x_ABI_CWindows_CWeb_CUI_CIWebViewControl * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CWeb__CUI__CIWebViewControl_Windows__CWeb__CUI__CWebViewControlPermissionRequestedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_PermissionRequested )(
        __x_ABI_CWindows_CWeb_CUI_CIWebViewControl * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_UnsupportedUriSchemeIdentified )(
        __x_ABI_CWindows_CWeb_CUI_CIWebViewControl * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CWeb__CUI__CIWebViewControl_Windows__CWeb__CUI__CWebViewControlUnsupportedUriSchemeIdentifiedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_UnsupportedUriSchemeIdentified )(
        __x_ABI_CWindows_CWeb_CUI_CIWebViewControl * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_NewWindowRequested )(
        __x_ABI_CWindows_CWeb_CUI_CIWebViewControl * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CWeb__CUI__CIWebViewControl_Windows__CWeb__CUI__CWebViewControlNewWindowRequestedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_NewWindowRequested )(
        __x_ABI_CWindows_CWeb_CUI_CIWebViewControl * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_ContainsFullScreenElementChanged )(
        __x_ABI_CWindows_CWeb_CUI_CIWebViewControl * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CWeb__CUI__CIWebViewControl_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_ContainsFullScreenElementChanged )(
        __x_ABI_CWindows_CWeb_CUI_CIWebViewControl * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_WebResourceRequested )(
        __x_ABI_CWindows_CWeb_CUI_CIWebViewControl * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CWeb__CUI__CIWebViewControl_Windows__CWeb__CUI__CWebViewControlWebResourceRequestedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_WebResourceRequested )(
        __x_ABI_CWindows_CWeb_CUI_CIWebViewControl * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CWeb_CUI_CIWebViewControlVtbl;
interface __x_ABI_CWindows_CWeb_CUI_CIWebViewControl
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CUI_CIWebViewControlVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Source(This,value) )
    ( (This)->lpVtbl->put_Source(This,source) )
    ( (This)->lpVtbl->get_DocumentTitle(This,value) )
    ( (This)->lpVtbl->get_CanGoBack(This,value) )
    ( (This)->lpVtbl->get_CanGoForward(This,value) )
    ( (This)->lpVtbl->put_DefaultBackgroundColor(This,value) )
    ( (This)->lpVtbl->get_DefaultBackgroundColor(This,value) )
    ( (This)->lpVtbl->get_ContainsFullScreenElement(This,value) )
    ( (This)->lpVtbl->get_Settings(This,value) )
    ( (This)->lpVtbl->get_DeferredPermissionRequests(This,value) )
    ( (This)->lpVtbl->GoForward(This) )
    ( (This)->lpVtbl->GoBack(This) )
    ( (This)->lpVtbl->Refresh(This) )
    ( (This)->lpVtbl->Stop(This) )
    ( (This)->lpVtbl->Navigate(This,source) )
    ( (This)->lpVtbl->NavigateToString(This,text) )
    ( (This)->lpVtbl->NavigateToLocalStreamUri(This,source,streamResolver) )
    ( (This)->lpVtbl->NavigateWithHttpRequestMessage(This,requestMessage) )
    ( (This)->lpVtbl->InvokeScriptAsync(This,scriptName,arguments,operation) )
    ( (This)->lpVtbl->CapturePreviewToStreamAsync(This,stream,operation) )
    ( (This)->lpVtbl->CaptureSelectedContentToDataPackageAsync(This,operation) )
    ( (This)->lpVtbl->BuildLocalStreamUri(This,contentIdentifier,relativePath,result) )
    ( (This)->lpVtbl->GetDeferredPermissionRequestById(This,id,result) )
    ( (This)->lpVtbl->add_NavigationStarting(This,handler,token) )
    ( (This)->lpVtbl->remove_NavigationStarting(This,token) )
    ( (This)->lpVtbl->add_ContentLoading(This,handler,token) )
    ( (This)->lpVtbl->remove_ContentLoading(This,token) )
    ( (This)->lpVtbl->add_DOMContentLoaded(This,handler,token) )
    ( (This)->lpVtbl->remove_DOMContentLoaded(This,token) )
    ( (This)->lpVtbl->add_NavigationCompleted(This,handler,token) )
    ( (This)->lpVtbl->remove_NavigationCompleted(This,token) )
    ( (This)->lpVtbl->add_FrameNavigationStarting(This,handler,token) )
    ( (This)->lpVtbl->remove_FrameNavigationStarting(This,token) )
    ( (This)->lpVtbl->add_FrameContentLoading(This,handler,token) )
    ( (This)->lpVtbl->remove_FrameContentLoading(This,token) )
    ( (This)->lpVtbl->add_FrameDOMContentLoaded(This,handler,token) )
    ( (This)->lpVtbl->remove_FrameDOMContentLoaded(This,token) )
    ( (This)->lpVtbl->add_FrameNavigationCompleted(This,handler,token) )
    ( (This)->lpVtbl->remove_FrameNavigationCompleted(This,token) )
    ( (This)->lpVtbl->add_ScriptNotify(This,handler,token) )
    ( (This)->lpVtbl->remove_ScriptNotify(This,token) )
    ( (This)->lpVtbl->add_LongRunningScriptDetected(This,handler,token) )
    ( (This)->lpVtbl->remove_LongRunningScriptDetected(This,token) )
    ( (This)->lpVtbl->add_UnsafeContentWarningDisplaying(This,handler,token) )
    ( (This)->lpVtbl->remove_UnsafeContentWarningDisplaying(This,token) )
    ( (This)->lpVtbl->add_UnviewableContentIdentified(This,handler,token) )
    ( (This)->lpVtbl->remove_UnviewableContentIdentified(This,token) )
    ( (This)->lpVtbl->add_PermissionRequested(This,handler,token) )
    ( (This)->lpVtbl->remove_PermissionRequested(This,token) )
    ( (This)->lpVtbl->add_UnsupportedUriSchemeIdentified(This,handler,token) )
    ( (This)->lpVtbl->remove_UnsupportedUriSchemeIdentified(This,token) )
    ( (This)->lpVtbl->add_NewWindowRequested(This,handler,token) )
    ( (This)->lpVtbl->remove_NewWindowRequested(This,token) )
    ( (This)->lpVtbl->add_ContainsFullScreenElementChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_ContainsFullScreenElementChanged(This,token) )
    ( (This)->lpVtbl->add_WebResourceRequested(This,handler,token) )
    ( (This)->lpVtbl->remove_WebResourceRequested(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CUI_CIWebViewControl;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_UI_IWebViewControl2[] = L"Windows.Web.UI.IWebViewControl2";
typedef struct __x_ABI_CWindows_CWeb_CUI_CIWebViewControl2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CUI_CIWebViewControl2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CUI_CIWebViewControl2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CUI_CIWebViewControl2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CUI_CIWebViewControl2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CUI_CIWebViewControl2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CUI_CIWebViewControl2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *AddInitializeScript )(
        __x_ABI_CWindows_CWeb_CUI_CIWebViewControl2 * This,
                  __RPC__in HSTRING script
        );
    END_INTERFACE
} __x_ABI_CWindows_CWeb_CUI_CIWebViewControl2Vtbl;
interface __x_ABI_CWindows_CWeb_CUI_CIWebViewControl2
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CUI_CIWebViewControl2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->AddInitializeScript(This,script) )
EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CUI_CIWebViewControl2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_UI_IWebViewControlContentLoadingEventArgs[] = L"Windows.Web.UI.IWebViewControlContentLoadingEventArgs";
typedef struct __x_ABI_CWindows_CWeb_CUI_CIWebViewControlContentLoadingEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CUI_CIWebViewControlContentLoadingEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CUI_CIWebViewControlContentLoadingEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CUI_CIWebViewControlContentLoadingEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CUI_CIWebViewControlContentLoadingEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CUI_CIWebViewControlContentLoadingEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CUI_CIWebViewControlContentLoadingEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Uri )(
        __x_ABI_CWindows_CWeb_CUI_CIWebViewControlContentLoadingEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CWeb_CUI_CIWebViewControlContentLoadingEventArgsVtbl;
interface __x_ABI_CWindows_CWeb_CUI_CIWebViewControlContentLoadingEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CUI_CIWebViewControlContentLoadingEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Uri(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CUI_CIWebViewControlContentLoadingEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_UI_IWebViewControlDOMContentLoadedEventArgs[] = L"Windows.Web.UI.IWebViewControlDOMContentLoadedEventArgs";
typedef struct __x_ABI_CWindows_CWeb_CUI_CIWebViewControlDOMContentLoadedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CUI_CIWebViewControlDOMContentLoadedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CUI_CIWebViewControlDOMContentLoadedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CUI_CIWebViewControlDOMContentLoadedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CUI_CIWebViewControlDOMContentLoadedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CUI_CIWebViewControlDOMContentLoadedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CUI_CIWebViewControlDOMContentLoadedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Uri )(
        __x_ABI_CWindows_CWeb_CUI_CIWebViewControlDOMContentLoadedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CWeb_CUI_CIWebViewControlDOMContentLoadedEventArgsVtbl;
interface __x_ABI_CWindows_CWeb_CUI_CIWebViewControlDOMContentLoadedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CUI_CIWebViewControlDOMContentLoadedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Uri(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CUI_CIWebViewControlDOMContentLoadedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_UI_IWebViewControlDeferredPermissionRequest[] = L"Windows.Web.UI.IWebViewControlDeferredPermissionRequest";
typedef struct __x_ABI_CWindows_CWeb_CUI_CIWebViewControlDeferredPermissionRequestVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CUI_CIWebViewControlDeferredPermissionRequest * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CUI_CIWebViewControlDeferredPermissionRequest * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CUI_CIWebViewControlDeferredPermissionRequest * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CUI_CIWebViewControlDeferredPermissionRequest * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CUI_CIWebViewControlDeferredPermissionRequest * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CUI_CIWebViewControlDeferredPermissionRequest * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CWeb_CUI_CIWebViewControlDeferredPermissionRequest * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Uri )(
        __x_ABI_CWindows_CWeb_CUI_CIWebViewControlDeferredPermissionRequest * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PermissionType )(
        __x_ABI_CWindows_CWeb_CUI_CIWebViewControlDeferredPermissionRequest * This,
                           __RPC__out __x_ABI_CWindows_CWeb_CUI_CWebViewControlPermissionType * value
        );
    HRESULT ( STDMETHODCALLTYPE *Allow )(
        __x_ABI_CWindows_CWeb_CUI_CIWebViewControlDeferredPermissionRequest * This
        );
    HRESULT ( STDMETHODCALLTYPE *Deny )(
        __x_ABI_CWindows_CWeb_CUI_CIWebViewControlDeferredPermissionRequest * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CWeb_CUI_CIWebViewControlDeferredPermissionRequestVtbl;
interface __x_ABI_CWindows_CWeb_CUI_CIWebViewControlDeferredPermissionRequest
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CUI_CIWebViewControlDeferredPermissionRequestVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Id(This,value) )
    ( (This)->lpVtbl->get_Uri(This,value) )
    ( (This)->lpVtbl->get_PermissionType(This,value) )
    ( (This)->lpVtbl->Allow(This) )
    ( (This)->lpVtbl->Deny(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CUI_CIWebViewControlDeferredPermissionRequest;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_UI_IWebViewControlLongRunningScriptDetectedEventArgs[] = L"Windows.Web.UI.IWebViewControlLongRunningScriptDetectedEventArgs";
typedef struct __x_ABI_CWindows_CWeb_CUI_CIWebViewControlLongRunningScriptDetectedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CUI_CIWebViewControlLongRunningScriptDetectedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CUI_CIWebViewControlLongRunningScriptDetectedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CUI_CIWebViewControlLongRunningScriptDetectedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CUI_CIWebViewControlLongRunningScriptDetectedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CUI_CIWebViewControlLongRunningScriptDetectedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CUI_CIWebViewControlLongRunningScriptDetectedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ExecutionTime )(
        __x_ABI_CWindows_CWeb_CUI_CIWebViewControlLongRunningScriptDetectedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_StopPageScriptExecution )(
        __x_ABI_CWindows_CWeb_CUI_CIWebViewControlLongRunningScriptDetectedEventArgs * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_StopPageScriptExecution )(
        __x_ABI_CWindows_CWeb_CUI_CIWebViewControlLongRunningScriptDetectedEventArgs * This,
                  boolean value
        );
    END_INTERFACE
} __x_ABI_CWindows_CWeb_CUI_CIWebViewControlLongRunningScriptDetectedEventArgsVtbl;
interface __x_ABI_CWindows_CWeb_CUI_CIWebViewControlLongRunningScriptDetectedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CUI_CIWebViewControlLongRunningScriptDetectedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ExecutionTime(This,value) )
    ( (This)->lpVtbl->get_StopPageScriptExecution(This,value) )
    ( (This)->lpVtbl->put_StopPageScriptExecution(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CUI_CIWebViewControlLongRunningScriptDetectedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_UI_IWebViewControlNavigationCompletedEventArgs[] = L"Windows.Web.UI.IWebViewControlNavigationCompletedEventArgs";
typedef struct __x_ABI_CWindows_CWeb_CUI_CIWebViewControlNavigationCompletedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CUI_CIWebViewControlNavigationCompletedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CUI_CIWebViewControlNavigationCompletedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CUI_CIWebViewControlNavigationCompletedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CUI_CIWebViewControlNavigationCompletedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CUI_CIWebViewControlNavigationCompletedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CUI_CIWebViewControlNavigationCompletedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Uri )(
        __x_ABI_CWindows_CWeb_CUI_CIWebViewControlNavigationCompletedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsSuccess )(
        __x_ABI_CWindows_CWeb_CUI_CIWebViewControlNavigationCompletedEventArgs * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_WebErrorStatus )(
        __x_ABI_CWindows_CWeb_CUI_CIWebViewControlNavigationCompletedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CWeb_CWebErrorStatus * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CWeb_CUI_CIWebViewControlNavigationCompletedEventArgsVtbl;
interface __x_ABI_CWindows_CWeb_CUI_CIWebViewControlNavigationCompletedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CUI_CIWebViewControlNavigationCompletedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Uri(This,value) )
    ( (This)->lpVtbl->get_IsSuccess(This,value) )
    ( (This)->lpVtbl->get_WebErrorStatus(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CUI_CIWebViewControlNavigationCompletedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_UI_IWebViewControlNavigationStartingEventArgs[] = L"Windows.Web.UI.IWebViewControlNavigationStartingEventArgs";
typedef struct __x_ABI_CWindows_CWeb_CUI_CIWebViewControlNavigationStartingEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CUI_CIWebViewControlNavigationStartingEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CUI_CIWebViewControlNavigationStartingEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CUI_CIWebViewControlNavigationStartingEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CUI_CIWebViewControlNavigationStartingEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CUI_CIWebViewControlNavigationStartingEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CUI_CIWebViewControlNavigationStartingEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Uri )(
        __x_ABI_CWindows_CWeb_CUI_CIWebViewControlNavigationStartingEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Cancel )(
        __x_ABI_CWindows_CWeb_CUI_CIWebViewControlNavigationStartingEventArgs * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Cancel )(
        __x_ABI_CWindows_CWeb_CUI_CIWebViewControlNavigationStartingEventArgs * This,
                  boolean value
        );
    END_INTERFACE
} __x_ABI_CWindows_CWeb_CUI_CIWebViewControlNavigationStartingEventArgsVtbl;
interface __x_ABI_CWindows_CWeb_CUI_CIWebViewControlNavigationStartingEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CUI_CIWebViewControlNavigationStartingEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Uri(This,value) )
    ( (This)->lpVtbl->get_Cancel(This,value) )
    ( (This)->lpVtbl->put_Cancel(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CUI_CIWebViewControlNavigationStartingEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_UI_IWebViewControlNewWindowRequestedEventArgs[] = L"Windows.Web.UI.IWebViewControlNewWindowRequestedEventArgs";
typedef struct __x_ABI_CWindows_CWeb_CUI_CIWebViewControlNewWindowRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CUI_CIWebViewControlNewWindowRequestedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CUI_CIWebViewControlNewWindowRequestedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CUI_CIWebViewControlNewWindowRequestedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CUI_CIWebViewControlNewWindowRequestedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CUI_CIWebViewControlNewWindowRequestedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CUI_CIWebViewControlNewWindowRequestedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Uri )(
        __x_ABI_CWindows_CWeb_CUI_CIWebViewControlNewWindowRequestedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Referrer )(
        __x_ABI_CWindows_CWeb_CUI_CIWebViewControlNewWindowRequestedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Handled )(
        __x_ABI_CWindows_CWeb_CUI_CIWebViewControlNewWindowRequestedEventArgs * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Handled )(
        __x_ABI_CWindows_CWeb_CUI_CIWebViewControlNewWindowRequestedEventArgs * This,
                  boolean value
        );
    END_INTERFACE
} __x_ABI_CWindows_CWeb_CUI_CIWebViewControlNewWindowRequestedEventArgsVtbl;
interface __x_ABI_CWindows_CWeb_CUI_CIWebViewControlNewWindowRequestedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CUI_CIWebViewControlNewWindowRequestedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Uri(This,value) )
    ( (This)->lpVtbl->get_Referrer(This,value) )
    ( (This)->lpVtbl->get_Handled(This,value) )
    ( (This)->lpVtbl->put_Handled(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CUI_CIWebViewControlNewWindowRequestedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_UI_IWebViewControlNewWindowRequestedEventArgs2[] = L"Windows.Web.UI.IWebViewControlNewWindowRequestedEventArgs2";
typedef struct __x_ABI_CWindows_CWeb_CUI_CIWebViewControlNewWindowRequestedEventArgs2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CUI_CIWebViewControlNewWindowRequestedEventArgs2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CUI_CIWebViewControlNewWindowRequestedEventArgs2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CUI_CIWebViewControlNewWindowRequestedEventArgs2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CUI_CIWebViewControlNewWindowRequestedEventArgs2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CUI_CIWebViewControlNewWindowRequestedEventArgs2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CUI_CIWebViewControlNewWindowRequestedEventArgs2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_NewWindow )(
        __x_ABI_CWindows_CWeb_CUI_CIWebViewControlNewWindowRequestedEventArgs2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CUI_CIWebViewControl * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_NewWindow )(
        __x_ABI_CWindows_CWeb_CUI_CIWebViewControlNewWindowRequestedEventArgs2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CWeb_CUI_CIWebViewControl * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CWeb_CUI_CIWebViewControlNewWindowRequestedEventArgs2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIDeferral * * deferral
        );
    END_INTERFACE
} __x_ABI_CWindows_CWeb_CUI_CIWebViewControlNewWindowRequestedEventArgs2Vtbl;
interface __x_ABI_CWindows_CWeb_CUI_CIWebViewControlNewWindowRequestedEventArgs2
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CUI_CIWebViewControlNewWindowRequestedEventArgs2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_NewWindow(This,value) )
    ( (This)->lpVtbl->put_NewWindow(This,value) )
    ( (This)->lpVtbl->GetDeferral(This,deferral) )
EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CUI_CIWebViewControlNewWindowRequestedEventArgs2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_UI_IWebViewControlPermissionRequest[] = L"Windows.Web.UI.IWebViewControlPermissionRequest";
typedef struct __x_ABI_CWindows_CWeb_CUI_CIWebViewControlPermissionRequestVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CUI_CIWebViewControlPermissionRequest * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CUI_CIWebViewControlPermissionRequest * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CUI_CIWebViewControlPermissionRequest * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CUI_CIWebViewControlPermissionRequest * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CUI_CIWebViewControlPermissionRequest * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CUI_CIWebViewControlPermissionRequest * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CWeb_CUI_CIWebViewControlPermissionRequest * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Uri )(
        __x_ABI_CWindows_CWeb_CUI_CIWebViewControlPermissionRequest * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PermissionType )(
        __x_ABI_CWindows_CWeb_CUI_CIWebViewControlPermissionRequest * This,
                           __RPC__out __x_ABI_CWindows_CWeb_CUI_CWebViewControlPermissionType * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_State )(
        __x_ABI_CWindows_CWeb_CUI_CIWebViewControlPermissionRequest * This,
                           __RPC__out __x_ABI_CWindows_CWeb_CUI_CWebViewControlPermissionState * value
        );
    HRESULT ( STDMETHODCALLTYPE *Defer )(
        __x_ABI_CWindows_CWeb_CUI_CIWebViewControlPermissionRequest * This
        );
    HRESULT ( STDMETHODCALLTYPE *Allow )(
        __x_ABI_CWindows_CWeb_CUI_CIWebViewControlPermissionRequest * This
        );
    HRESULT ( STDMETHODCALLTYPE *Deny )(
        __x_ABI_CWindows_CWeb_CUI_CIWebViewControlPermissionRequest * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CWeb_CUI_CIWebViewControlPermissionRequestVtbl;
interface __x_ABI_CWindows_CWeb_CUI_CIWebViewControlPermissionRequest
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CUI_CIWebViewControlPermissionRequestVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Id(This,value) )
    ( (This)->lpVtbl->get_Uri(This,value) )
    ( (This)->lpVtbl->get_PermissionType(This,value) )
    ( (This)->lpVtbl->get_State(This,value) )
    ( (This)->lpVtbl->Defer(This) )
    ( (This)->lpVtbl->Allow(This) )
    ( (This)->lpVtbl->Deny(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CUI_CIWebViewControlPermissionRequest;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_UI_IWebViewControlPermissionRequestedEventArgs[] = L"Windows.Web.UI.IWebViewControlPermissionRequestedEventArgs";
typedef struct __x_ABI_CWindows_CWeb_CUI_CIWebViewControlPermissionRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CUI_CIWebViewControlPermissionRequestedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CUI_CIWebViewControlPermissionRequestedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CUI_CIWebViewControlPermissionRequestedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CUI_CIWebViewControlPermissionRequestedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CUI_CIWebViewControlPermissionRequestedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CUI_CIWebViewControlPermissionRequestedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_PermissionRequest )(
        __x_ABI_CWindows_CWeb_CUI_CIWebViewControlPermissionRequestedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CUI_CIWebViewControlPermissionRequest * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CWeb_CUI_CIWebViewControlPermissionRequestedEventArgsVtbl;
interface __x_ABI_CWindows_CWeb_CUI_CIWebViewControlPermissionRequestedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CUI_CIWebViewControlPermissionRequestedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_PermissionRequest(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CUI_CIWebViewControlPermissionRequestedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_UI_IWebViewControlScriptNotifyEventArgs[] = L"Windows.Web.UI.IWebViewControlScriptNotifyEventArgs";
typedef struct __x_ABI_CWindows_CWeb_CUI_CIWebViewControlScriptNotifyEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CUI_CIWebViewControlScriptNotifyEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CUI_CIWebViewControlScriptNotifyEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CUI_CIWebViewControlScriptNotifyEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CUI_CIWebViewControlScriptNotifyEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CUI_CIWebViewControlScriptNotifyEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CUI_CIWebViewControlScriptNotifyEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Uri )(
        __x_ABI_CWindows_CWeb_CUI_CIWebViewControlScriptNotifyEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Value )(
        __x_ABI_CWindows_CWeb_CUI_CIWebViewControlScriptNotifyEventArgs * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CWeb_CUI_CIWebViewControlScriptNotifyEventArgsVtbl;
interface __x_ABI_CWindows_CWeb_CUI_CIWebViewControlScriptNotifyEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CUI_CIWebViewControlScriptNotifyEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Uri(This,value) )
    ( (This)->lpVtbl->get_Value(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CUI_CIWebViewControlScriptNotifyEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_UI_IWebViewControlSettings[] = L"Windows.Web.UI.IWebViewControlSettings";
typedef struct __x_ABI_CWindows_CWeb_CUI_CIWebViewControlSettingsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CUI_CIWebViewControlSettings * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CUI_CIWebViewControlSettings * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CUI_CIWebViewControlSettings * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CUI_CIWebViewControlSettings * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CUI_CIWebViewControlSettings * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CUI_CIWebViewControlSettings * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_IsJavaScriptEnabled )(
        __x_ABI_CWindows_CWeb_CUI_CIWebViewControlSettings * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsJavaScriptEnabled )(
        __x_ABI_CWindows_CWeb_CUI_CIWebViewControlSettings * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsIndexedDBEnabled )(
        __x_ABI_CWindows_CWeb_CUI_CIWebViewControlSettings * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsIndexedDBEnabled )(
        __x_ABI_CWindows_CWeb_CUI_CIWebViewControlSettings * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsScriptNotifyAllowed )(
        __x_ABI_CWindows_CWeb_CUI_CIWebViewControlSettings * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsScriptNotifyAllowed )(
        __x_ABI_CWindows_CWeb_CUI_CIWebViewControlSettings * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CWeb_CUI_CIWebViewControlSettingsVtbl;
interface __x_ABI_CWindows_CWeb_CUI_CIWebViewControlSettings
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CUI_CIWebViewControlSettingsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_IsJavaScriptEnabled(This,value) )
    ( (This)->lpVtbl->get_IsJavaScriptEnabled(This,value) )
    ( (This)->lpVtbl->put_IsIndexedDBEnabled(This,value) )
    ( (This)->lpVtbl->get_IsIndexedDBEnabled(This,value) )
    ( (This)->lpVtbl->put_IsScriptNotifyAllowed(This,value) )
    ( (This)->lpVtbl->get_IsScriptNotifyAllowed(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CUI_CIWebViewControlSettings;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_UI_IWebViewControlUnsupportedUriSchemeIdentifiedEventArgs[] = L"Windows.Web.UI.IWebViewControlUnsupportedUriSchemeIdentifiedEventArgs";
typedef struct __x_ABI_CWindows_CWeb_CUI_CIWebViewControlUnsupportedUriSchemeIdentifiedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CUI_CIWebViewControlUnsupportedUriSchemeIdentifiedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CUI_CIWebViewControlUnsupportedUriSchemeIdentifiedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CUI_CIWebViewControlUnsupportedUriSchemeIdentifiedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CUI_CIWebViewControlUnsupportedUriSchemeIdentifiedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CUI_CIWebViewControlUnsupportedUriSchemeIdentifiedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CUI_CIWebViewControlUnsupportedUriSchemeIdentifiedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Uri )(
        __x_ABI_CWindows_CWeb_CUI_CIWebViewControlUnsupportedUriSchemeIdentifiedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Handled )(
        __x_ABI_CWindows_CWeb_CUI_CIWebViewControlUnsupportedUriSchemeIdentifiedEventArgs * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Handled )(
        __x_ABI_CWindows_CWeb_CUI_CIWebViewControlUnsupportedUriSchemeIdentifiedEventArgs * This,
                  boolean value
        );
    END_INTERFACE
} __x_ABI_CWindows_CWeb_CUI_CIWebViewControlUnsupportedUriSchemeIdentifiedEventArgsVtbl;
interface __x_ABI_CWindows_CWeb_CUI_CIWebViewControlUnsupportedUriSchemeIdentifiedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CUI_CIWebViewControlUnsupportedUriSchemeIdentifiedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Uri(This,value) )
    ( (This)->lpVtbl->get_Handled(This,value) )
    ( (This)->lpVtbl->put_Handled(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CUI_CIWebViewControlUnsupportedUriSchemeIdentifiedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_UI_IWebViewControlUnviewableContentIdentifiedEventArgs[] = L"Windows.Web.UI.IWebViewControlUnviewableContentIdentifiedEventArgs";
typedef struct __x_ABI_CWindows_CWeb_CUI_CIWebViewControlUnviewableContentIdentifiedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CUI_CIWebViewControlUnviewableContentIdentifiedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CUI_CIWebViewControlUnviewableContentIdentifiedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CUI_CIWebViewControlUnviewableContentIdentifiedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CUI_CIWebViewControlUnviewableContentIdentifiedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CUI_CIWebViewControlUnviewableContentIdentifiedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CUI_CIWebViewControlUnviewableContentIdentifiedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Uri )(
        __x_ABI_CWindows_CWeb_CUI_CIWebViewControlUnviewableContentIdentifiedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Referrer )(
        __x_ABI_CWindows_CWeb_CUI_CIWebViewControlUnviewableContentIdentifiedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MediaType )(
        __x_ABI_CWindows_CWeb_CUI_CIWebViewControlUnviewableContentIdentifiedEventArgs * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CWeb_CUI_CIWebViewControlUnviewableContentIdentifiedEventArgsVtbl;
interface __x_ABI_CWindows_CWeb_CUI_CIWebViewControlUnviewableContentIdentifiedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CUI_CIWebViewControlUnviewableContentIdentifiedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Uri(This,value) )
    ( (This)->lpVtbl->get_Referrer(This,value) )
    ( (This)->lpVtbl->get_MediaType(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CUI_CIWebViewControlUnviewableContentIdentifiedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_UI_IWebViewControlWebResourceRequestedEventArgs[] = L"Windows.Web.UI.IWebViewControlWebResourceRequestedEventArgs";
typedef struct __x_ABI_CWindows_CWeb_CUI_CIWebViewControlWebResourceRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CUI_CIWebViewControlWebResourceRequestedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CUI_CIWebViewControlWebResourceRequestedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CUI_CIWebViewControlWebResourceRequestedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CUI_CIWebViewControlWebResourceRequestedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CUI_CIWebViewControlWebResourceRequestedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CUI_CIWebViewControlWebResourceRequestedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CWeb_CUI_CIWebViewControlWebResourceRequestedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIDeferral * * deferral
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Request )(
        __x_ABI_CWindows_CWeb_CUI_CIWebViewControlWebResourceRequestedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CIHttpRequestMessage * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Response )(
        __x_ABI_CWindows_CWeb_CUI_CIWebViewControlWebResourceRequestedEventArgs * This,
                  __RPC__in_opt __x_ABI_CWindows_CWeb_CHttp_CIHttpResponseMessage * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Response )(
        __x_ABI_CWindows_CWeb_CUI_CIWebViewControlWebResourceRequestedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CIHttpResponseMessage * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CWeb_CUI_CIWebViewControlWebResourceRequestedEventArgsVtbl;
interface __x_ABI_CWindows_CWeb_CUI_CIWebViewControlWebResourceRequestedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CUI_CIWebViewControlWebResourceRequestedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetDeferral(This,deferral) )
    ( (This)->lpVtbl->get_Request(This,value) )
    ( (This)->lpVtbl->put_Response(This,value) )
    ( (This)->lpVtbl->get_Response(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CUI_CIWebViewControlWebResourceRequestedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_UI_WebViewControlContentLoadingEventArgs[] = L"Windows.Web.UI.WebViewControlContentLoadingEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_UI_WebViewControlDOMContentLoadedEventArgs[] = L"Windows.Web.UI.WebViewControlDOMContentLoadedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_UI_WebViewControlDeferredPermissionRequest[] = L"Windows.Web.UI.WebViewControlDeferredPermissionRequest";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_UI_WebViewControlLongRunningScriptDetectedEventArgs[] = L"Windows.Web.UI.WebViewControlLongRunningScriptDetectedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_UI_WebViewControlNavigationCompletedEventArgs[] = L"Windows.Web.UI.WebViewControlNavigationCompletedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_UI_WebViewControlNavigationStartingEventArgs[] = L"Windows.Web.UI.WebViewControlNavigationStartingEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_UI_WebViewControlNewWindowRequestedEventArgs[] = L"Windows.Web.UI.WebViewControlNewWindowRequestedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_UI_WebViewControlPermissionRequest[] = L"Windows.Web.UI.WebViewControlPermissionRequest";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_UI_WebViewControlPermissionRequestedEventArgs[] = L"Windows.Web.UI.WebViewControlPermissionRequestedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_UI_WebViewControlScriptNotifyEventArgs[] = L"Windows.Web.UI.WebViewControlScriptNotifyEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_UI_WebViewControlSettings[] = L"Windows.Web.UI.WebViewControlSettings";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_UI_WebViewControlUnsupportedUriSchemeIdentifiedEventArgs[] = L"Windows.Web.UI.WebViewControlUnsupportedUriSchemeIdentifiedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_UI_WebViewControlUnviewableContentIdentifiedEventArgs[] = L"Windows.Web.UI.WebViewControlUnviewableContentIdentifiedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_UI_WebViewControlWebResourceRequestedEventArgs[] = L"Windows.Web.UI.WebViewControlWebResourceRequestedEventArgs";
       
       
#pragma clang diagnostic pop

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
#include "Windows.System.Diagnostics.h"
#include "Windows.Web.Http.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProvider __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProvider;
typedef interface __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestResponseCompletedEventArgs __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestResponseCompletedEventArgs;
typedef interface __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestResponseTimestamps __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestResponseTimestamps;
typedef interface __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestSentEventArgs __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestSentEventArgs;
typedef interface __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderResponseReceivedEventArgs __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderResponseReceivedEventArgs;
typedef interface __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderStatics __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderStatics;
typedef interface __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticSourceLocation __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticSourceLocation;
typedef interface __FIIterator_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocation __FIIterator_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocation;
EXTERN_C const IID IID___FIIterator_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocation;
typedef struct __FIIterator_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocation * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocation * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocation * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocation * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocation * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocation * This, __RPC__out __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticSourceLocation * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocation * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocation * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocation * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticSourceLocation * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocationVtbl;
interface __FIIterator_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocation
{
    CONST_VTBL struct __FIIterator_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocationVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocation __FIIterable_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocation;
EXTERN_C const IID IID___FIIterable_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocation;
typedef struct __FIIterable_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocation * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocation * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocation * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocation * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocation * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocation * This, __RPC__deref_out_opt __FIIterator_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocation **first);
    END_INTERFACE
} __FIIterable_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocationVtbl;
interface __FIIterable_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocation
{
    CONST_VTBL struct __FIIterable_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocationVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocation __FIVectorView_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocation;
EXTERN_C const IID IID___FIVectorView_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocation;
typedef struct __FIVectorView_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocation * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocation * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocation * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocation * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocation * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocation * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocation * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticSourceLocation * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocation * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocation * This,
                       __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticSourceLocation * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocation * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticSourceLocation * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocationVtbl;
interface __FIVectorView_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocation
{
    CONST_VTBL struct __FIVectorView_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocationVtbl *lpVtbl;
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
typedef interface __FITypedEventHandler_2_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProvider_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProviderRequestResponseCompletedEventArgs __FITypedEventHandler_2_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProvider_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProviderRequestResponseCompletedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProvider_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProviderRequestResponseCompletedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProvider_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProviderRequestResponseCompletedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProvider_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProviderRequestResponseCompletedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProvider_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProviderRequestResponseCompletedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProvider_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProviderRequestResponseCompletedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProvider_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProviderRequestResponseCompletedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProvider * sender, __RPC__in_opt __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestResponseCompletedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProvider_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProviderRequestResponseCompletedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProvider_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProviderRequestResponseCompletedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProvider_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProviderRequestResponseCompletedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProvider_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProviderRequestSentEventArgs __FITypedEventHandler_2_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProvider_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProviderRequestSentEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProvider_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProviderRequestSentEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProvider_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProviderRequestSentEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProvider_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProviderRequestSentEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProvider_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProviderRequestSentEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProvider_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProviderRequestSentEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProvider_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProviderRequestSentEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProvider * sender, __RPC__in_opt __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestSentEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProvider_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProviderRequestSentEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProvider_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProviderRequestSentEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProvider_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProviderRequestSentEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProvider_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProviderResponseReceivedEventArgs __FITypedEventHandler_2_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProvider_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProviderResponseReceivedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProvider_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProviderResponseReceivedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProvider_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProviderResponseReceivedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProvider_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProviderResponseReceivedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProvider_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProviderResponseReceivedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProvider_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProviderResponseReceivedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProvider_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProviderResponseReceivedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProvider * sender, __RPC__in_opt __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderResponseReceivedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProvider_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProviderResponseReceivedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProvider_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProviderResponseReceivedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProvider_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProviderResponseReceivedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
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
typedef struct __x_ABI_CWindows_CFoundation_CDateTime __x_ABI_CWindows_CFoundation_CDateTime;
typedef interface __x_ABI_CWindows_CFoundation_CIUriRuntimeClass __x_ABI_CWindows_CFoundation_CIUriRuntimeClass;
typedef interface __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo;
typedef interface __x_ABI_CWindows_CWeb_CHttp_CIHttpRequestMessage __x_ABI_CWindows_CWeb_CHttp_CIHttpRequestMessage;
typedef interface __x_ABI_CWindows_CWeb_CHttp_CIHttpResponseMessage __x_ABI_CWindows_CWeb_CHttp_CIHttpResponseMessage;
typedef enum __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CHttpDiagnosticRequestInitiator __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CHttpDiagnosticRequestInitiator;
enum __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CHttpDiagnosticRequestInitiator
{
    HttpDiagnosticRequestInitiator_ParsedElement = 0,
    HttpDiagnosticRequestInitiator_Script = 1,
    HttpDiagnosticRequestInitiator_Image = 2,
    HttpDiagnosticRequestInitiator_Link = 3,
    HttpDiagnosticRequestInitiator_Style = 4,
    HttpDiagnosticRequestInitiator_XmlHttpRequest = 5,
    HttpDiagnosticRequestInitiator_Media = 6,
    HttpDiagnosticRequestInitiator_HtmlDownload = 7,
    HttpDiagnosticRequestInitiator_Prefetch = 8,
    HttpDiagnosticRequestInitiator_Other = 9,
    HttpDiagnosticRequestInitiator_CrossOriginPreFlight = 10,
    HttpDiagnosticRequestInitiator_Fetch = 11,
    HttpDiagnosticRequestInitiator_Beacon = 12,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_Diagnostics_IHttpDiagnosticProvider[] = L"Windows.Web.Http.Diagnostics.IHttpDiagnosticProvider";
typedef struct __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProvider * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProvider * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProvider * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProvider * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProvider * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProvider * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Start )(
        __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProvider * This
        );
    HRESULT ( STDMETHODCALLTYPE *Stop )(
        __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProvider * This
        );
                    HRESULT ( STDMETHODCALLTYPE *add_RequestSent )(
        __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProvider * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProvider_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProviderRequestSentEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_RequestSent )(
        __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProvider * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_ResponseReceived )(
        __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProvider * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProvider_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProviderResponseReceivedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_ResponseReceived )(
        __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProvider * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_RequestResponseCompleted )(
        __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProvider * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProvider_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticProviderRequestResponseCompletedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_RequestResponseCompleted )(
        __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProvider * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderVtbl;
interface __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProvider
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Start(This) )
    ( (This)->lpVtbl->Stop(This) )
    ( (This)->lpVtbl->add_RequestSent(This,handler,token) )
    ( (This)->lpVtbl->remove_RequestSent(This,token) )
    ( (This)->lpVtbl->add_ResponseReceived(This,handler,token) )
    ( (This)->lpVtbl->remove_ResponseReceived(This,token) )
    ( (This)->lpVtbl->add_RequestResponseCompleted(This,handler,token) )
    ( (This)->lpVtbl->remove_RequestResponseCompleted(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProvider;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_Diagnostics_IHttpDiagnosticProviderRequestResponseCompletedEventArgs[] = L"Windows.Web.Http.Diagnostics.IHttpDiagnosticProviderRequestResponseCompletedEventArgs";
typedef struct __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestResponseCompletedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestResponseCompletedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestResponseCompletedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestResponseCompletedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestResponseCompletedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestResponseCompletedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestResponseCompletedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ActivityId )(
        __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestResponseCompletedEventArgs * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Timestamps )(
        __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestResponseCompletedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestResponseTimestamps * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RequestedUri )(
        __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestResponseCompletedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ProcessId )(
        __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestResponseCompletedEventArgs * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ThreadId )(
        __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestResponseCompletedEventArgs * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Initiator )(
        __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestResponseCompletedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CHttpDiagnosticRequestInitiator * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SourceLocations )(
        __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestResponseCompletedEventArgs * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocation * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestResponseCompletedEventArgsVtbl;
interface __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestResponseCompletedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestResponseCompletedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ActivityId(This,value) )
    ( (This)->lpVtbl->get_Timestamps(This,value) )
    ( (This)->lpVtbl->get_RequestedUri(This,value) )
    ( (This)->lpVtbl->get_ProcessId(This,value) )
    ( (This)->lpVtbl->get_ThreadId(This,value) )
    ( (This)->lpVtbl->get_Initiator(This,value) )
    ( (This)->lpVtbl->get_SourceLocations(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestResponseCompletedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_Diagnostics_IHttpDiagnosticProviderRequestResponseTimestamps[] = L"Windows.Web.Http.Diagnostics.IHttpDiagnosticProviderRequestResponseTimestamps";
typedef struct __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestResponseTimestampsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestResponseTimestamps * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestResponseTimestamps * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestResponseTimestamps * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestResponseTimestamps * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestResponseTimestamps * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestResponseTimestamps * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_CacheCheckedTimestamp )(
        __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestResponseTimestamps * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CDateTime * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ConnectionInitiatedTimestamp )(
        __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestResponseTimestamps * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CDateTime * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NameResolvedTimestamp )(
        __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestResponseTimestamps * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CDateTime * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SslNegotiatedTimestamp )(
        __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestResponseTimestamps * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CDateTime * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ConnectionCompletedTimestamp )(
        __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestResponseTimestamps * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CDateTime * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RequestSentTimestamp )(
        __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestResponseTimestamps * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CDateTime * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RequestCompletedTimestamp )(
        __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestResponseTimestamps * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CDateTime * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ResponseReceivedTimestamp )(
        __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestResponseTimestamps * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CDateTime * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ResponseCompletedTimestamp )(
        __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestResponseTimestamps * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CDateTime * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestResponseTimestampsVtbl;
interface __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestResponseTimestamps
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestResponseTimestampsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_CacheCheckedTimestamp(This,value) )
    ( (This)->lpVtbl->get_ConnectionInitiatedTimestamp(This,value) )
    ( (This)->lpVtbl->get_NameResolvedTimestamp(This,value) )
    ( (This)->lpVtbl->get_SslNegotiatedTimestamp(This,value) )
    ( (This)->lpVtbl->get_ConnectionCompletedTimestamp(This,value) )
    ( (This)->lpVtbl->get_RequestSentTimestamp(This,value) )
    ( (This)->lpVtbl->get_RequestCompletedTimestamp(This,value) )
    ( (This)->lpVtbl->get_ResponseReceivedTimestamp(This,value) )
    ( (This)->lpVtbl->get_ResponseCompletedTimestamp(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestResponseTimestamps;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_Diagnostics_IHttpDiagnosticProviderRequestSentEventArgs[] = L"Windows.Web.Http.Diagnostics.IHttpDiagnosticProviderRequestSentEventArgs";
typedef struct __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestSentEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestSentEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestSentEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestSentEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestSentEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestSentEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestSentEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Timestamp )(
        __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestSentEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ActivityId )(
        __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestSentEventArgs * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Message )(
        __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestSentEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CIHttpRequestMessage * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ProcessId )(
        __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestSentEventArgs * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ThreadId )(
        __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestSentEventArgs * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Initiator )(
        __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestSentEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CHttpDiagnosticRequestInitiator * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SourceLocations )(
        __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestSentEventArgs * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CWeb__CHttp__CDiagnostics__CHttpDiagnosticSourceLocation * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestSentEventArgsVtbl;
interface __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestSentEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestSentEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Timestamp(This,value) )
    ( (This)->lpVtbl->get_ActivityId(This,value) )
    ( (This)->lpVtbl->get_Message(This,value) )
    ( (This)->lpVtbl->get_ProcessId(This,value) )
    ( (This)->lpVtbl->get_ThreadId(This,value) )
    ( (This)->lpVtbl->get_Initiator(This,value) )
    ( (This)->lpVtbl->get_SourceLocations(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderRequestSentEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_Diagnostics_IHttpDiagnosticProviderResponseReceivedEventArgs[] = L"Windows.Web.Http.Diagnostics.IHttpDiagnosticProviderResponseReceivedEventArgs";
typedef struct __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderResponseReceivedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderResponseReceivedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderResponseReceivedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderResponseReceivedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderResponseReceivedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderResponseReceivedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderResponseReceivedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Timestamp )(
        __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderResponseReceivedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ActivityId )(
        __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderResponseReceivedEventArgs * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Message )(
        __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderResponseReceivedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CIHttpResponseMessage * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderResponseReceivedEventArgsVtbl;
interface __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderResponseReceivedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderResponseReceivedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Timestamp(This,value) )
    ( (This)->lpVtbl->get_ActivityId(This,value) )
    ( (This)->lpVtbl->get_Message(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderResponseReceivedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_Diagnostics_IHttpDiagnosticProviderStatics[] = L"Windows.Web.Http.Diagnostics.IHttpDiagnosticProviderStatics";
typedef struct __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateFromProcessDiagnosticInfo )(
        __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo * processDiagnosticInfo,
                           __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProvider * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderStaticsVtbl;
interface __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateFromProcessDiagnosticInfo(This,processDiagnosticInfo,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticProviderStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_Diagnostics_IHttpDiagnosticSourceLocation[] = L"Windows.Web.Http.Diagnostics.IHttpDiagnosticSourceLocation";
typedef struct __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticSourceLocationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticSourceLocation * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticSourceLocation * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticSourceLocation * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticSourceLocation * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticSourceLocation * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticSourceLocation * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_SourceUri )(
        __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticSourceLocation * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LineNumber )(
        __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticSourceLocation * This,
                           __RPC__out UINT64 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ColumnNumber )(
        __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticSourceLocation * This,
                           __RPC__out UINT64 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticSourceLocationVtbl;
interface __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticSourceLocation
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticSourceLocationVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_SourceUri(This,value) )
    ( (This)->lpVtbl->get_LineNumber(This,value) )
    ( (This)->lpVtbl->get_ColumnNumber(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CDiagnostics_CIHttpDiagnosticSourceLocation;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_Http_Diagnostics_HttpDiagnosticProvider[] = L"Windows.Web.Http.Diagnostics.HttpDiagnosticProvider";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_Http_Diagnostics_HttpDiagnosticProviderRequestResponseCompletedEventArgs[] = L"Windows.Web.Http.Diagnostics.HttpDiagnosticProviderRequestResponseCompletedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_Http_Diagnostics_HttpDiagnosticProviderRequestResponseTimestamps[] = L"Windows.Web.Http.Diagnostics.HttpDiagnosticProviderRequestResponseTimestamps";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_Http_Diagnostics_HttpDiagnosticProviderRequestSentEventArgs[] = L"Windows.Web.Http.Diagnostics.HttpDiagnosticProviderRequestSentEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_Http_Diagnostics_HttpDiagnosticProviderResponseReceivedEventArgs[] = L"Windows.Web.Http.Diagnostics.HttpDiagnosticProviderResponseReceivedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_Http_Diagnostics_HttpDiagnosticSourceLocation[] = L"Windows.Web.Http.Diagnostics.HttpDiagnosticSourceLocation";
       
       
#pragma clang diagnostic pop

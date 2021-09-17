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
#include "Windows.Storage.Streams.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CMedia_CPlayTo_CICurrentTimeChangeRequestedEventArgs __x_ABI_CWindows_CMedia_CPlayTo_CICurrentTimeChangeRequestedEventArgs;
typedef interface __x_ABI_CWindows_CMedia_CPlayTo_CIMuteChangeRequestedEventArgs __x_ABI_CWindows_CMedia_CPlayTo_CIMuteChangeRequestedEventArgs;
typedef interface __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToConnection __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToConnection;
typedef interface __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToConnectionErrorEventArgs __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToConnectionErrorEventArgs;
typedef interface __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToConnectionStateChangedEventArgs __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToConnectionStateChangedEventArgs;
typedef interface __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToConnectionTransferredEventArgs __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToConnectionTransferredEventArgs;
typedef interface __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToManager __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToManager;
typedef interface __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToManagerStatics __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToManagerStatics;
typedef interface __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToReceiver __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToReceiver;
typedef interface __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToSource __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToSource;
typedef interface __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToSourceDeferral __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToSourceDeferral;
typedef interface __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToSourceRequest __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToSourceRequest;
typedef interface __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToSourceRequestedEventArgs __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToSourceRequestedEventArgs;
typedef interface __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToSourceSelectedEventArgs __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToSourceSelectedEventArgs;
typedef interface __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToSourceWithPreferredSourceUri __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToSourceWithPreferredSourceUri;
typedef interface __x_ABI_CWindows_CMedia_CPlayTo_CIPlaybackRateChangeRequestedEventArgs __x_ABI_CWindows_CMedia_CPlayTo_CIPlaybackRateChangeRequestedEventArgs;
typedef interface __x_ABI_CWindows_CMedia_CPlayTo_CISourceChangeRequestedEventArgs __x_ABI_CWindows_CMedia_CPlayTo_CISourceChangeRequestedEventArgs;
typedef interface __x_ABI_CWindows_CMedia_CPlayTo_CIVolumeChangeRequestedEventArgs __x_ABI_CWindows_CMedia_CPlayTo_CIVolumeChangeRequestedEventArgs;
typedef interface __FITypedEventHandler_2_Windows__CMedia__CPlayTo__CPlayToConnection_Windows__CMedia__CPlayTo__CPlayToConnectionErrorEventArgs __FITypedEventHandler_2_Windows__CMedia__CPlayTo__CPlayToConnection_Windows__CMedia__CPlayTo__CPlayToConnectionErrorEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CPlayTo__CPlayToConnection_Windows__CMedia__CPlayTo__CPlayToConnectionErrorEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CPlayTo__CPlayToConnection_Windows__CMedia__CPlayTo__CPlayToConnectionErrorEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CPlayTo__CPlayToConnection_Windows__CMedia__CPlayTo__CPlayToConnectionErrorEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CPlayTo__CPlayToConnection_Windows__CMedia__CPlayTo__CPlayToConnectionErrorEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CPlayTo__CPlayToConnection_Windows__CMedia__CPlayTo__CPlayToConnectionErrorEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CPlayTo__CPlayToConnection_Windows__CMedia__CPlayTo__CPlayToConnectionErrorEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToConnection * sender, __RPC__in_opt __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToConnectionErrorEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CPlayTo__CPlayToConnection_Windows__CMedia__CPlayTo__CPlayToConnectionErrorEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CPlayTo__CPlayToConnection_Windows__CMedia__CPlayTo__CPlayToConnectionErrorEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CPlayTo__CPlayToConnection_Windows__CMedia__CPlayTo__CPlayToConnectionErrorEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CMedia__CPlayTo__CPlayToConnection_Windows__CMedia__CPlayTo__CPlayToConnectionStateChangedEventArgs __FITypedEventHandler_2_Windows__CMedia__CPlayTo__CPlayToConnection_Windows__CMedia__CPlayTo__CPlayToConnectionStateChangedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CPlayTo__CPlayToConnection_Windows__CMedia__CPlayTo__CPlayToConnectionStateChangedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CPlayTo__CPlayToConnection_Windows__CMedia__CPlayTo__CPlayToConnectionStateChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CPlayTo__CPlayToConnection_Windows__CMedia__CPlayTo__CPlayToConnectionStateChangedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CPlayTo__CPlayToConnection_Windows__CMedia__CPlayTo__CPlayToConnectionStateChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CPlayTo__CPlayToConnection_Windows__CMedia__CPlayTo__CPlayToConnectionStateChangedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CPlayTo__CPlayToConnection_Windows__CMedia__CPlayTo__CPlayToConnectionStateChangedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToConnection * sender, __RPC__in_opt __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToConnectionStateChangedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CPlayTo__CPlayToConnection_Windows__CMedia__CPlayTo__CPlayToConnectionStateChangedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CPlayTo__CPlayToConnection_Windows__CMedia__CPlayTo__CPlayToConnectionStateChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CPlayTo__CPlayToConnection_Windows__CMedia__CPlayTo__CPlayToConnectionStateChangedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CMedia__CPlayTo__CPlayToConnection_Windows__CMedia__CPlayTo__CPlayToConnectionTransferredEventArgs __FITypedEventHandler_2_Windows__CMedia__CPlayTo__CPlayToConnection_Windows__CMedia__CPlayTo__CPlayToConnectionTransferredEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CPlayTo__CPlayToConnection_Windows__CMedia__CPlayTo__CPlayToConnectionTransferredEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CPlayTo__CPlayToConnection_Windows__CMedia__CPlayTo__CPlayToConnectionTransferredEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CPlayTo__CPlayToConnection_Windows__CMedia__CPlayTo__CPlayToConnectionTransferredEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CPlayTo__CPlayToConnection_Windows__CMedia__CPlayTo__CPlayToConnectionTransferredEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CPlayTo__CPlayToConnection_Windows__CMedia__CPlayTo__CPlayToConnectionTransferredEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CPlayTo__CPlayToConnection_Windows__CMedia__CPlayTo__CPlayToConnectionTransferredEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToConnection * sender, __RPC__in_opt __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToConnectionTransferredEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CPlayTo__CPlayToConnection_Windows__CMedia__CPlayTo__CPlayToConnectionTransferredEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CPlayTo__CPlayToConnection_Windows__CMedia__CPlayTo__CPlayToConnectionTransferredEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CPlayTo__CPlayToConnection_Windows__CMedia__CPlayTo__CPlayToConnectionTransferredEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CMedia__CPlayTo__CPlayToManager_Windows__CMedia__CPlayTo__CPlayToSourceRequestedEventArgs __FITypedEventHandler_2_Windows__CMedia__CPlayTo__CPlayToManager_Windows__CMedia__CPlayTo__CPlayToSourceRequestedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CPlayTo__CPlayToManager_Windows__CMedia__CPlayTo__CPlayToSourceRequestedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CPlayTo__CPlayToManager_Windows__CMedia__CPlayTo__CPlayToSourceRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CPlayTo__CPlayToManager_Windows__CMedia__CPlayTo__CPlayToSourceRequestedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CPlayTo__CPlayToManager_Windows__CMedia__CPlayTo__CPlayToSourceRequestedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CPlayTo__CPlayToManager_Windows__CMedia__CPlayTo__CPlayToSourceRequestedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CPlayTo__CPlayToManager_Windows__CMedia__CPlayTo__CPlayToSourceRequestedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToManager * sender, __RPC__in_opt __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToSourceRequestedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CPlayTo__CPlayToManager_Windows__CMedia__CPlayTo__CPlayToSourceRequestedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CPlayTo__CPlayToManager_Windows__CMedia__CPlayTo__CPlayToSourceRequestedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CPlayTo__CPlayToManager_Windows__CMedia__CPlayTo__CPlayToSourceRequestedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CMedia__CPlayTo__CPlayToManager_Windows__CMedia__CPlayTo__CPlayToSourceSelectedEventArgs __FITypedEventHandler_2_Windows__CMedia__CPlayTo__CPlayToManager_Windows__CMedia__CPlayTo__CPlayToSourceSelectedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CPlayTo__CPlayToManager_Windows__CMedia__CPlayTo__CPlayToSourceSelectedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CPlayTo__CPlayToManager_Windows__CMedia__CPlayTo__CPlayToSourceSelectedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CPlayTo__CPlayToManager_Windows__CMedia__CPlayTo__CPlayToSourceSelectedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CPlayTo__CPlayToManager_Windows__CMedia__CPlayTo__CPlayToSourceSelectedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CPlayTo__CPlayToManager_Windows__CMedia__CPlayTo__CPlayToSourceSelectedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CPlayTo__CPlayToManager_Windows__CMedia__CPlayTo__CPlayToSourceSelectedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToManager * sender, __RPC__in_opt __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToSourceSelectedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CPlayTo__CPlayToManager_Windows__CMedia__CPlayTo__CPlayToSourceSelectedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CPlayTo__CPlayToManager_Windows__CMedia__CPlayTo__CPlayToSourceSelectedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CPlayTo__CPlayToManager_Windows__CMedia__CPlayTo__CPlayToSourceSelectedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CMedia__CPlayTo__CPlayToReceiver_IInspectable __FITypedEventHandler_2_Windows__CMedia__CPlayTo__CPlayToReceiver_IInspectable;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CPlayTo__CPlayToReceiver_IInspectable;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CPlayTo__CPlayToReceiver_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CPlayTo__CPlayToReceiver_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CPlayTo__CPlayToReceiver_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CPlayTo__CPlayToReceiver_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CPlayTo__CPlayToReceiver_IInspectable * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToReceiver * sender, __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CPlayTo__CPlayToReceiver_IInspectableVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CPlayTo__CPlayToReceiver_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CPlayTo__CPlayToReceiver_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CMedia__CPlayTo__CPlayToReceiver_Windows__CMedia__CPlayTo__CCurrentTimeChangeRequestedEventArgs __FITypedEventHandler_2_Windows__CMedia__CPlayTo__CPlayToReceiver_Windows__CMedia__CPlayTo__CCurrentTimeChangeRequestedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CPlayTo__CPlayToReceiver_Windows__CMedia__CPlayTo__CCurrentTimeChangeRequestedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CPlayTo__CPlayToReceiver_Windows__CMedia__CPlayTo__CCurrentTimeChangeRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CPlayTo__CPlayToReceiver_Windows__CMedia__CPlayTo__CCurrentTimeChangeRequestedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CPlayTo__CPlayToReceiver_Windows__CMedia__CPlayTo__CCurrentTimeChangeRequestedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CPlayTo__CPlayToReceiver_Windows__CMedia__CPlayTo__CCurrentTimeChangeRequestedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CPlayTo__CPlayToReceiver_Windows__CMedia__CPlayTo__CCurrentTimeChangeRequestedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToReceiver * sender, __RPC__in_opt __x_ABI_CWindows_CMedia_CPlayTo_CICurrentTimeChangeRequestedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CPlayTo__CPlayToReceiver_Windows__CMedia__CPlayTo__CCurrentTimeChangeRequestedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CPlayTo__CPlayToReceiver_Windows__CMedia__CPlayTo__CCurrentTimeChangeRequestedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CPlayTo__CPlayToReceiver_Windows__CMedia__CPlayTo__CCurrentTimeChangeRequestedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CMedia__CPlayTo__CPlayToReceiver_Windows__CMedia__CPlayTo__CMuteChangeRequestedEventArgs __FITypedEventHandler_2_Windows__CMedia__CPlayTo__CPlayToReceiver_Windows__CMedia__CPlayTo__CMuteChangeRequestedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CPlayTo__CPlayToReceiver_Windows__CMedia__CPlayTo__CMuteChangeRequestedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CPlayTo__CPlayToReceiver_Windows__CMedia__CPlayTo__CMuteChangeRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CPlayTo__CPlayToReceiver_Windows__CMedia__CPlayTo__CMuteChangeRequestedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CPlayTo__CPlayToReceiver_Windows__CMedia__CPlayTo__CMuteChangeRequestedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CPlayTo__CPlayToReceiver_Windows__CMedia__CPlayTo__CMuteChangeRequestedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CPlayTo__CPlayToReceiver_Windows__CMedia__CPlayTo__CMuteChangeRequestedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToReceiver * sender, __RPC__in_opt __x_ABI_CWindows_CMedia_CPlayTo_CIMuteChangeRequestedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CPlayTo__CPlayToReceiver_Windows__CMedia__CPlayTo__CMuteChangeRequestedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CPlayTo__CPlayToReceiver_Windows__CMedia__CPlayTo__CMuteChangeRequestedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CPlayTo__CPlayToReceiver_Windows__CMedia__CPlayTo__CMuteChangeRequestedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CMedia__CPlayTo__CPlayToReceiver_Windows__CMedia__CPlayTo__CPlaybackRateChangeRequestedEventArgs __FITypedEventHandler_2_Windows__CMedia__CPlayTo__CPlayToReceiver_Windows__CMedia__CPlayTo__CPlaybackRateChangeRequestedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CPlayTo__CPlayToReceiver_Windows__CMedia__CPlayTo__CPlaybackRateChangeRequestedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CPlayTo__CPlayToReceiver_Windows__CMedia__CPlayTo__CPlaybackRateChangeRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CPlayTo__CPlayToReceiver_Windows__CMedia__CPlayTo__CPlaybackRateChangeRequestedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CPlayTo__CPlayToReceiver_Windows__CMedia__CPlayTo__CPlaybackRateChangeRequestedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CPlayTo__CPlayToReceiver_Windows__CMedia__CPlayTo__CPlaybackRateChangeRequestedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CPlayTo__CPlayToReceiver_Windows__CMedia__CPlayTo__CPlaybackRateChangeRequestedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToReceiver * sender, __RPC__in_opt __x_ABI_CWindows_CMedia_CPlayTo_CIPlaybackRateChangeRequestedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CPlayTo__CPlayToReceiver_Windows__CMedia__CPlayTo__CPlaybackRateChangeRequestedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CPlayTo__CPlayToReceiver_Windows__CMedia__CPlayTo__CPlaybackRateChangeRequestedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CPlayTo__CPlayToReceiver_Windows__CMedia__CPlayTo__CPlaybackRateChangeRequestedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CMedia__CPlayTo__CPlayToReceiver_Windows__CMedia__CPlayTo__CSourceChangeRequestedEventArgs __FITypedEventHandler_2_Windows__CMedia__CPlayTo__CPlayToReceiver_Windows__CMedia__CPlayTo__CSourceChangeRequestedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CPlayTo__CPlayToReceiver_Windows__CMedia__CPlayTo__CSourceChangeRequestedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CPlayTo__CPlayToReceiver_Windows__CMedia__CPlayTo__CSourceChangeRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CPlayTo__CPlayToReceiver_Windows__CMedia__CPlayTo__CSourceChangeRequestedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CPlayTo__CPlayToReceiver_Windows__CMedia__CPlayTo__CSourceChangeRequestedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CPlayTo__CPlayToReceiver_Windows__CMedia__CPlayTo__CSourceChangeRequestedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CPlayTo__CPlayToReceiver_Windows__CMedia__CPlayTo__CSourceChangeRequestedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToReceiver * sender, __RPC__in_opt __x_ABI_CWindows_CMedia_CPlayTo_CISourceChangeRequestedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CPlayTo__CPlayToReceiver_Windows__CMedia__CPlayTo__CSourceChangeRequestedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CPlayTo__CPlayToReceiver_Windows__CMedia__CPlayTo__CSourceChangeRequestedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CPlayTo__CPlayToReceiver_Windows__CMedia__CPlayTo__CSourceChangeRequestedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CMedia__CPlayTo__CPlayToReceiver_Windows__CMedia__CPlayTo__CVolumeChangeRequestedEventArgs __FITypedEventHandler_2_Windows__CMedia__CPlayTo__CPlayToReceiver_Windows__CMedia__CPlayTo__CVolumeChangeRequestedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CPlayTo__CPlayToReceiver_Windows__CMedia__CPlayTo__CVolumeChangeRequestedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CPlayTo__CPlayToReceiver_Windows__CMedia__CPlayTo__CVolumeChangeRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CPlayTo__CPlayToReceiver_Windows__CMedia__CPlayTo__CVolumeChangeRequestedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CPlayTo__CPlayToReceiver_Windows__CMedia__CPlayTo__CVolumeChangeRequestedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CPlayTo__CPlayToReceiver_Windows__CMedia__CPlayTo__CVolumeChangeRequestedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CPlayTo__CPlayToReceiver_Windows__CMedia__CPlayTo__CVolumeChangeRequestedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToReceiver * sender, __RPC__in_opt __x_ABI_CWindows_CMedia_CPlayTo_CIVolumeChangeRequestedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CPlayTo__CPlayToReceiver_Windows__CMedia__CPlayTo__CVolumeChangeRequestedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CPlayTo__CPlayToReceiver_Windows__CMedia__CPlayTo__CVolumeChangeRequestedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CPlayTo__CPlayToReceiver_Windows__CMedia__CPlayTo__CVolumeChangeRequestedEventArgsVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet;
typedef struct __x_ABI_CWindows_CFoundation_CDateTime __x_ABI_CWindows_CFoundation_CDateTime;
typedef interface __x_ABI_CWindows_CFoundation_CIAsyncAction __x_ABI_CWindows_CFoundation_CIAsyncAction;
typedef struct __x_ABI_CWindows_CFoundation_CTimeSpan __x_ABI_CWindows_CFoundation_CTimeSpan;
typedef interface __x_ABI_CWindows_CFoundation_CIUriRuntimeClass __x_ABI_CWindows_CFoundation_CIUriRuntimeClass;
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference;
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType;
typedef enum __x_ABI_CWindows_CMedia_CPlayTo_CPlayToConnectionError __x_ABI_CWindows_CMedia_CPlayTo_CPlayToConnectionError;
typedef enum __x_ABI_CWindows_CMedia_CPlayTo_CPlayToConnectionState __x_ABI_CWindows_CMedia_CPlayTo_CPlayToConnectionState;
enum
DEPRECATED("PlayToConnectionError may be altered or unavailable for releases after Windows 10. Instead, use CastingConnectionErrorStatus.")
__x_ABI_CWindows_CMedia_CPlayTo_CPlayToConnectionError
{
    PlayToConnectionError_None = 0,
    PlayToConnectionError_DeviceNotResponding = 1,
    PlayToConnectionError_DeviceError = 2,
    PlayToConnectionError_DeviceLocked = 3,
    PlayToConnectionError_ProtectedPlaybackFailed = 4,
};
enum
DEPRECATED("PlayToConnectionState may be altered or unavailable for releases after Windows 10. Instead, use CastingConnectionState.")
__x_ABI_CWindows_CMedia_CPlayTo_CPlayToConnectionState
{
    PlayToConnectionState_Disconnected = 0,
    PlayToConnectionState_Connected = 1,
    PlayToConnectionState_Rendering = 2,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_PlayTo_ICurrentTimeChangeRequestedEventArgs[] = L"Windows.Media.PlayTo.ICurrentTimeChangeRequestedEventArgs";
typedef struct __x_ABI_CWindows_CMedia_CPlayTo_CICurrentTimeChangeRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayTo_CICurrentTimeChangeRequestedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayTo_CICurrentTimeChangeRequestedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayTo_CICurrentTimeChangeRequestedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayTo_CICurrentTimeChangeRequestedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayTo_CICurrentTimeChangeRequestedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayTo_CICurrentTimeChangeRequestedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Time )(
        __x_ABI_CWindows_CMedia_CPlayTo_CICurrentTimeChangeRequestedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CPlayTo_CICurrentTimeChangeRequestedEventArgsVtbl;
interface __x_ABI_CWindows_CMedia_CPlayTo_CICurrentTimeChangeRequestedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CPlayTo_CICurrentTimeChangeRequestedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Time(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CPlayTo_CICurrentTimeChangeRequestedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_PlayTo_IMuteChangeRequestedEventArgs[] = L"Windows.Media.PlayTo.IMuteChangeRequestedEventArgs";
typedef struct __x_ABI_CWindows_CMedia_CPlayTo_CIMuteChangeRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayTo_CIMuteChangeRequestedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayTo_CIMuteChangeRequestedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayTo_CIMuteChangeRequestedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayTo_CIMuteChangeRequestedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayTo_CIMuteChangeRequestedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayTo_CIMuteChangeRequestedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Mute )(
        __x_ABI_CWindows_CMedia_CPlayTo_CIMuteChangeRequestedEventArgs * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CPlayTo_CIMuteChangeRequestedEventArgsVtbl;
interface __x_ABI_CWindows_CMedia_CPlayTo_CIMuteChangeRequestedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CPlayTo_CIMuteChangeRequestedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Mute(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CPlayTo_CIMuteChangeRequestedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_PlayTo_IPlayToConnection[] = L"Windows.Media.PlayTo.IPlayToConnection";
typedef struct
DEPRECATED("PlayToConnection may be altered or unavailable for releases after Windows 10. Instead, use CastingConnection.")
__x_ABI_CWindows_CMedia_CPlayTo_CIPlayToConnectionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToConnection * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToConnection * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToConnection * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToConnection * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToConnection * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToConnection * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("PlayToConnection may be altered or unavailable for releases after Windows 10. Instead, use CastingConnection.")
                               HRESULT ( STDMETHODCALLTYPE *get_State )(
        __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToConnection * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CPlayTo_CPlayToConnectionState * value
        );
    DEPRECATED("PlayToConnection may be altered or unavailable for releases after Windows 10. Instead, use CastingConnection.")
                                HRESULT ( STDMETHODCALLTYPE *add_StateChanged )(
        __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToConnection * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CPlayTo__CPlayToConnection_Windows__CMedia__CPlayTo__CPlayToConnectionStateChangedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
    DEPRECATED("PlayToConnection may be altered or unavailable for releases after Windows 10. Instead, use CastingConnection.")
                                   HRESULT ( STDMETHODCALLTYPE *remove_StateChanged )(
        __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToConnection * This,
                  EventRegistrationToken token
        );
    DEPRECATED("PlayToConnection may be altered or unavailable for releases after Windows 10. Instead, use CastingConnection.")
                                HRESULT ( STDMETHODCALLTYPE *add_Transferred )(
        __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToConnection * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CPlayTo__CPlayToConnection_Windows__CMedia__CPlayTo__CPlayToConnectionTransferredEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
    DEPRECATED("PlayToConnection may be altered or unavailable for releases after Windows 10. Instead, use CastingConnection.")
                                   HRESULT ( STDMETHODCALLTYPE *remove_Transferred )(
        __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToConnection * This,
                  EventRegistrationToken token
        );
    DEPRECATED("PlayToConnection may be altered or unavailable for releases after Windows 10. Instead, use CastingConnection.")
                                HRESULT ( STDMETHODCALLTYPE *add_Error )(
        __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToConnection * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CPlayTo__CPlayToConnection_Windows__CMedia__CPlayTo__CPlayToConnectionErrorEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
    DEPRECATED("PlayToConnection may be altered or unavailable for releases after Windows 10. Instead, use CastingConnection.")
                                   HRESULT ( STDMETHODCALLTYPE *remove_Error )(
        __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToConnection * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToConnectionVtbl;
interface __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToConnection
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToConnectionVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("PlayToConnection may be altered or unavailable for releases after Windows 10. Instead, use CastingConnection.")
    ( (This)->lpVtbl->get_State(This,value) )
DEPRECATED("PlayToConnection may be altered or unavailable for releases after Windows 10. Instead, use CastingConnection.")
    ( (This)->lpVtbl->add_StateChanged(This,handler,token) )
DEPRECATED("PlayToConnection may be altered or unavailable for releases after Windows 10. Instead, use CastingConnection.")
    ( (This)->lpVtbl->remove_StateChanged(This,token) )
DEPRECATED("PlayToConnection may be altered or unavailable for releases after Windows 10. Instead, use CastingConnection.")
    ( (This)->lpVtbl->add_Transferred(This,handler,token) )
DEPRECATED("PlayToConnection may be altered or unavailable for releases after Windows 10. Instead, use CastingConnection.")
    ( (This)->lpVtbl->remove_Transferred(This,token) )
DEPRECATED("PlayToConnection may be altered or unavailable for releases after Windows 10. Instead, use CastingConnection.")
    ( (This)->lpVtbl->add_Error(This,handler,token) )
DEPRECATED("PlayToConnection may be altered or unavailable for releases after Windows 10. Instead, use CastingConnection.")
    ( (This)->lpVtbl->remove_Error(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CPlayTo_CIPlayToConnection;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_PlayTo_IPlayToConnectionErrorEventArgs[] = L"Windows.Media.PlayTo.IPlayToConnectionErrorEventArgs";
typedef struct
DEPRECATED("PlayToConnectionErrorEventArgs may be altered or unavailable for releases after Windows 10. Instead, use CastingConnectionErrorOccurredEventArgs.")
__x_ABI_CWindows_CMedia_CPlayTo_CIPlayToConnectionErrorEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToConnectionErrorEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToConnectionErrorEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToConnectionErrorEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToConnectionErrorEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToConnectionErrorEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToConnectionErrorEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("PlayToConnectionErrorEventArgs may be altered or unavailable for releases after Windows 10. Instead, use CastingConnectionErrorOccurredEventArgs.")
                               HRESULT ( STDMETHODCALLTYPE *get_Code )(
        __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToConnectionErrorEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CPlayTo_CPlayToConnectionError * value
        );
    DEPRECATED("PlayToConnectionErrorEventArgs may be altered or unavailable for releases after Windows 10. Instead, use CastingConnectionErrorOccurredEventArgs.")
                               HRESULT ( STDMETHODCALLTYPE *get_Message )(
        __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToConnectionErrorEventArgs * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToConnectionErrorEventArgsVtbl;
interface __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToConnectionErrorEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToConnectionErrorEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("PlayToConnectionErrorEventArgs may be altered or unavailable for releases after Windows 10. Instead, use CastingConnectionErrorOccurredEventArgs.")
    ( (This)->lpVtbl->get_Code(This,value) )
DEPRECATED("PlayToConnectionErrorEventArgs may be altered or unavailable for releases after Windows 10. Instead, use CastingConnectionErrorOccurredEventArgs.")
    ( (This)->lpVtbl->get_Message(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CPlayTo_CIPlayToConnectionErrorEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_PlayTo_IPlayToConnectionStateChangedEventArgs[] = L"Windows.Media.PlayTo.IPlayToConnectionStateChangedEventArgs";
typedef struct
DEPRECATED("PlayToConnectionStateChangedEventArgs may be altered or unavailable for releases after Windows 10.")
__x_ABI_CWindows_CMedia_CPlayTo_CIPlayToConnectionStateChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToConnectionStateChangedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToConnectionStateChangedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToConnectionStateChangedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToConnectionStateChangedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToConnectionStateChangedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToConnectionStateChangedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("PlayToConnectionStateChangedEventArgs may be altered or unavailable for releases after Windows 10.")
                               HRESULT ( STDMETHODCALLTYPE *get_PreviousState )(
        __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToConnectionStateChangedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CPlayTo_CPlayToConnectionState * value
        );
    DEPRECATED("PlayToConnectionStateChangedEventArgs may be altered or unavailable for releases after Windows 10.")
                               HRESULT ( STDMETHODCALLTYPE *get_CurrentState )(
        __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToConnectionStateChangedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CPlayTo_CPlayToConnectionState * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToConnectionStateChangedEventArgsVtbl;
interface __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToConnectionStateChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToConnectionStateChangedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("PlayToConnectionStateChangedEventArgs may be altered or unavailable for releases after Windows 10.")
    ( (This)->lpVtbl->get_PreviousState(This,value) )
DEPRECATED("PlayToConnectionStateChangedEventArgs may be altered or unavailable for releases after Windows 10.")
    ( (This)->lpVtbl->get_CurrentState(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CPlayTo_CIPlayToConnectionStateChangedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_PlayTo_IPlayToConnectionTransferredEventArgs[] = L"Windows.Media.PlayTo.IPlayToConnectionTransferredEventArgs";
typedef struct
DEPRECATED("PlayToConnectionTransferredEventArgs may be altered or unavailable for releases after Windows 10.")
__x_ABI_CWindows_CMedia_CPlayTo_CIPlayToConnectionTransferredEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToConnectionTransferredEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToConnectionTransferredEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToConnectionTransferredEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToConnectionTransferredEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToConnectionTransferredEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToConnectionTransferredEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("PlayToConnectionTransferredEventArgs may be altered or unavailable for releases after Windows 10.")
                               HRESULT ( STDMETHODCALLTYPE *get_PreviousSource )(
        __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToConnectionTransferredEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToSource * * value
        );
    DEPRECATED("PlayToConnectionTransferredEventArgs may be altered or unavailable for releases after Windows 10.")
                               HRESULT ( STDMETHODCALLTYPE *get_CurrentSource )(
        __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToConnectionTransferredEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToSource * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToConnectionTransferredEventArgsVtbl;
interface __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToConnectionTransferredEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToConnectionTransferredEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("PlayToConnectionTransferredEventArgs may be altered or unavailable for releases after Windows 10.")
    ( (This)->lpVtbl->get_PreviousSource(This,value) )
DEPRECATED("PlayToConnectionTransferredEventArgs may be altered or unavailable for releases after Windows 10.")
    ( (This)->lpVtbl->get_CurrentSource(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CPlayTo_CIPlayToConnectionTransferredEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_PlayTo_IPlayToManager[] = L"Windows.Media.PlayTo.IPlayToManager";
typedef struct
DEPRECATED("PlayToManager may be altered or unavailable for releases after Windows 10.")
__x_ABI_CWindows_CMedia_CPlayTo_CIPlayToManagerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToManager * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToManager * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToManager * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToManager * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToManager * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToManager * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("PlayToManager may be altered or unavailable for releases after Windows 10.")
                                HRESULT ( STDMETHODCALLTYPE *add_SourceRequested )(
        __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToManager * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CPlayTo__CPlayToManager_Windows__CMedia__CPlayTo__CPlayToSourceRequestedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
    DEPRECATED("PlayToManager may be altered or unavailable for releases after Windows 10.")
                                   HRESULT ( STDMETHODCALLTYPE *remove_SourceRequested )(
        __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToManager * This,
                  EventRegistrationToken token
        );
    DEPRECATED("PlayToManager may be altered or unavailable for releases after Windows 10.")
                                HRESULT ( STDMETHODCALLTYPE *add_SourceSelected )(
        __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToManager * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CPlayTo__CPlayToManager_Windows__CMedia__CPlayTo__CPlayToSourceSelectedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
    DEPRECATED("PlayToManager may be altered or unavailable for releases after Windows 10.")
                                   HRESULT ( STDMETHODCALLTYPE *remove_SourceSelected )(
        __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToManager * This,
                  EventRegistrationToken token
        );
    DEPRECATED("PlayToManager may be altered or unavailable for releases after Windows 10.")
                               HRESULT ( STDMETHODCALLTYPE *put_DefaultSourceSelection )(
        __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToManager * This,
                  boolean value
        );
    DEPRECATED("PlayToManager may be altered or unavailable for releases after Windows 10.")
                               HRESULT ( STDMETHODCALLTYPE *get_DefaultSourceSelection )(
        __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToManager * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToManagerVtbl;
interface __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToManager
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToManagerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("PlayToManager may be altered or unavailable for releases after Windows 10.")
    ( (This)->lpVtbl->add_SourceRequested(This,handler,token) )
DEPRECATED("PlayToManager may be altered or unavailable for releases after Windows 10.")
    ( (This)->lpVtbl->remove_SourceRequested(This,token) )
DEPRECATED("PlayToManager may be altered or unavailable for releases after Windows 10.")
    ( (This)->lpVtbl->add_SourceSelected(This,handler,token) )
DEPRECATED("PlayToManager may be altered or unavailable for releases after Windows 10.")
    ( (This)->lpVtbl->remove_SourceSelected(This,token) )
DEPRECATED("PlayToManager may be altered or unavailable for releases after Windows 10.")
    ( (This)->lpVtbl->put_DefaultSourceSelection(This,value) )
DEPRECATED("PlayToManager may be altered or unavailable for releases after Windows 10.")
    ( (This)->lpVtbl->get_DefaultSourceSelection(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CPlayTo_CIPlayToManager;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_PlayTo_IPlayToManagerStatics[] = L"Windows.Media.PlayTo.IPlayToManagerStatics";
typedef struct
DEPRECATED("PlayToManager may be altered or unavailable for releases after Windows 10.")
__x_ABI_CWindows_CMedia_CPlayTo_CIPlayToManagerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToManagerStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToManagerStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToManagerStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToManagerStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToManagerStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToManagerStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("PlayToManager may be altered or unavailable for releases after Windows 10.")
                      HRESULT ( STDMETHODCALLTYPE *GetForCurrentView )(
        __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToManagerStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToManager * * playToManager
        );
    DEPRECATED("PlayToManager may be altered or unavailable for releases after Windows 10.")
                      HRESULT ( STDMETHODCALLTYPE *ShowPlayToUI )(
        __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToManagerStatics * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToManagerStaticsVtbl;
interface __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToManagerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToManagerStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("PlayToManager may be altered or unavailable for releases after Windows 10.")
    ( (This)->lpVtbl->GetForCurrentView(This,playToManager) )
DEPRECATED("PlayToManager may be altered or unavailable for releases after Windows 10.")
    ( (This)->lpVtbl->ShowPlayToUI(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CPlayTo_CIPlayToManagerStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_PlayTo_IPlayToReceiver[] = L"Windows.Media.PlayTo.IPlayToReceiver";
typedef struct __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToReceiverVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToReceiver * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToReceiver * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToReceiver * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToReceiver * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToReceiver * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToReceiver * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_PlayRequested )(
        __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToReceiver * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CPlayTo__CPlayToReceiver_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_PlayRequested )(
        __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToReceiver * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_PauseRequested )(
        __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToReceiver * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CPlayTo__CPlayToReceiver_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_PauseRequested )(
        __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToReceiver * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_SourceChangeRequested )(
        __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToReceiver * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CPlayTo__CPlayToReceiver_Windows__CMedia__CPlayTo__CSourceChangeRequestedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_SourceChangeRequested )(
        __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToReceiver * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_PlaybackRateChangeRequested )(
        __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToReceiver * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CPlayTo__CPlayToReceiver_Windows__CMedia__CPlayTo__CPlaybackRateChangeRequestedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_PlaybackRateChangeRequested )(
        __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToReceiver * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_CurrentTimeChangeRequested )(
        __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToReceiver * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CPlayTo__CPlayToReceiver_Windows__CMedia__CPlayTo__CCurrentTimeChangeRequestedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_CurrentTimeChangeRequested )(
        __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToReceiver * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_MuteChangeRequested )(
        __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToReceiver * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CPlayTo__CPlayToReceiver_Windows__CMedia__CPlayTo__CMuteChangeRequestedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_MuteChangeRequested )(
        __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToReceiver * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_VolumeChangeRequested )(
        __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToReceiver * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CPlayTo__CPlayToReceiver_Windows__CMedia__CPlayTo__CVolumeChangeRequestedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_VolumeChangeRequested )(
        __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToReceiver * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_TimeUpdateRequested )(
        __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToReceiver * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CPlayTo__CPlayToReceiver_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_TimeUpdateRequested )(
        __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToReceiver * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_StopRequested )(
        __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToReceiver * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CPlayTo__CPlayToReceiver_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_StopRequested )(
        __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToReceiver * This,
                  EventRegistrationToken token
        );
    HRESULT ( STDMETHODCALLTYPE *NotifyVolumeChange )(
        __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToReceiver * This,
                  DOUBLE volume,
                  boolean mute
        );
    HRESULT ( STDMETHODCALLTYPE *NotifyRateChange )(
        __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToReceiver * This,
                  DOUBLE rate
        );
    HRESULT ( STDMETHODCALLTYPE *NotifyLoadedMetadata )(
        __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToReceiver * This
        );
    HRESULT ( STDMETHODCALLTYPE *NotifyTimeUpdate )(
        __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToReceiver * This,
                  __x_ABI_CWindows_CFoundation_CTimeSpan currentTime
        );
    HRESULT ( STDMETHODCALLTYPE *NotifyDurationChange )(
        __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToReceiver * This,
                  __x_ABI_CWindows_CFoundation_CTimeSpan duration
        );
    HRESULT ( STDMETHODCALLTYPE *NotifySeeking )(
        __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToReceiver * This
        );
    HRESULT ( STDMETHODCALLTYPE *NotifySeeked )(
        __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToReceiver * This
        );
    HRESULT ( STDMETHODCALLTYPE *NotifyPaused )(
        __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToReceiver * This
        );
    HRESULT ( STDMETHODCALLTYPE *NotifyPlaying )(
        __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToReceiver * This
        );
    HRESULT ( STDMETHODCALLTYPE *NotifyEnded )(
        __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToReceiver * This
        );
    HRESULT ( STDMETHODCALLTYPE *NotifyError )(
        __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToReceiver * This
        );
    HRESULT ( STDMETHODCALLTYPE *NotifyStopped )(
        __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToReceiver * This
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FriendlyName )(
        __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToReceiver * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_FriendlyName )(
        __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToReceiver * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_SupportsImage )(
        __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToReceiver * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SupportsImage )(
        __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToReceiver * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_SupportsAudio )(
        __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToReceiver * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SupportsAudio )(
        __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToReceiver * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_SupportsVideo )(
        __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToReceiver * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SupportsVideo )(
        __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToReceiver * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Properties )(
        __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToReceiver * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet * * value
        );
    HRESULT ( STDMETHODCALLTYPE *StartAsync )(
        __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToReceiver * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * action
        );
    HRESULT ( STDMETHODCALLTYPE *StopAsync )(
        __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToReceiver * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * action
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToReceiverVtbl;
interface __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToReceiver
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToReceiverVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_PlayRequested(This,handler,token) )
    ( (This)->lpVtbl->remove_PlayRequested(This,token) )
    ( (This)->lpVtbl->add_PauseRequested(This,handler,token) )
    ( (This)->lpVtbl->remove_PauseRequested(This,token) )
    ( (This)->lpVtbl->add_SourceChangeRequested(This,handler,token) )
    ( (This)->lpVtbl->remove_SourceChangeRequested(This,token) )
    ( (This)->lpVtbl->add_PlaybackRateChangeRequested(This,handler,token) )
    ( (This)->lpVtbl->remove_PlaybackRateChangeRequested(This,token) )
    ( (This)->lpVtbl->add_CurrentTimeChangeRequested(This,handler,token) )
    ( (This)->lpVtbl->remove_CurrentTimeChangeRequested(This,token) )
    ( (This)->lpVtbl->add_MuteChangeRequested(This,handler,token) )
    ( (This)->lpVtbl->remove_MuteChangeRequested(This,token) )
    ( (This)->lpVtbl->add_VolumeChangeRequested(This,handler,token) )
    ( (This)->lpVtbl->remove_VolumeChangeRequested(This,token) )
    ( (This)->lpVtbl->add_TimeUpdateRequested(This,handler,token) )
    ( (This)->lpVtbl->remove_TimeUpdateRequested(This,token) )
    ( (This)->lpVtbl->add_StopRequested(This,handler,token) )
    ( (This)->lpVtbl->remove_StopRequested(This,token) )
    ( (This)->lpVtbl->NotifyVolumeChange(This,volume,mute) )
    ( (This)->lpVtbl->NotifyRateChange(This,rate) )
    ( (This)->lpVtbl->NotifyLoadedMetadata(This) )
    ( (This)->lpVtbl->NotifyTimeUpdate(This,currentTime) )
    ( (This)->lpVtbl->NotifyDurationChange(This,duration) )
    ( (This)->lpVtbl->NotifySeeking(This) )
    ( (This)->lpVtbl->NotifySeeked(This) )
    ( (This)->lpVtbl->NotifyPaused(This) )
    ( (This)->lpVtbl->NotifyPlaying(This) )
    ( (This)->lpVtbl->NotifyEnded(This) )
    ( (This)->lpVtbl->NotifyError(This) )
    ( (This)->lpVtbl->NotifyStopped(This) )
    ( (This)->lpVtbl->get_FriendlyName(This,value) )
    ( (This)->lpVtbl->put_FriendlyName(This,value) )
    ( (This)->lpVtbl->put_SupportsImage(This,value) )
    ( (This)->lpVtbl->get_SupportsImage(This,value) )
    ( (This)->lpVtbl->put_SupportsAudio(This,value) )
    ( (This)->lpVtbl->get_SupportsAudio(This,value) )
    ( (This)->lpVtbl->put_SupportsVideo(This,value) )
    ( (This)->lpVtbl->get_SupportsVideo(This,value) )
    ( (This)->lpVtbl->get_Properties(This,value) )
    ( (This)->lpVtbl->StartAsync(This,action) )
    ( (This)->lpVtbl->StopAsync(This,action) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CPlayTo_CIPlayToReceiver;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_PlayTo_IPlayToSource[] = L"Windows.Media.PlayTo.IPlayToSource";
typedef struct
DEPRECATED("PlayToSource may be altered or unavailable for releases after Windows 10. Instead, use CastingSource.")
__x_ABI_CWindows_CMedia_CPlayTo_CIPlayToSourceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToSource * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToSource * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToSource * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToSource * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToSource * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToSource * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("PlayToSource may be altered or unavailable for releases after Windows 10. Instead, use CastingSource.")
                               HRESULT ( STDMETHODCALLTYPE *get_Connection )(
        __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToSource * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToConnection * * value
        );
    DEPRECATED("PlayToSource may be altered or unavailable for releases after Windows 10. Instead, use CastingSource.")
                               HRESULT ( STDMETHODCALLTYPE *get_Next )(
        __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToSource * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToSource * * value
        );
    DEPRECATED("PlayToSource may be altered or unavailable for releases after Windows 10. Instead, use CastingSource.")
                               HRESULT ( STDMETHODCALLTYPE *put_Next )(
        __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToSource * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToSource * value
        );
    DEPRECATED("PlayToSource may be altered or unavailable for releases after Windows 10. Instead, use CastingSource.")
                      HRESULT ( STDMETHODCALLTYPE *PlayNext )(
        __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToSource * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToSourceVtbl;
interface __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToSource
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToSourceVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("PlayToSource may be altered or unavailable for releases after Windows 10. Instead, use CastingSource.")
    ( (This)->lpVtbl->get_Connection(This,value) )
DEPRECATED("PlayToSource may be altered or unavailable for releases after Windows 10. Instead, use CastingSource.")
    ( (This)->lpVtbl->get_Next(This,value) )
DEPRECATED("PlayToSource may be altered or unavailable for releases after Windows 10. Instead, use CastingSource.")
    ( (This)->lpVtbl->put_Next(This,value) )
DEPRECATED("PlayToSource may be altered or unavailable for releases after Windows 10. Instead, use CastingSource.")
    ( (This)->lpVtbl->PlayNext(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CPlayTo_CIPlayToSource;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_PlayTo_IPlayToSourceDeferral[] = L"Windows.Media.PlayTo.IPlayToSourceDeferral";
typedef struct
DEPRECATED("PlayToSourceDeferral may be altered or unavailable for releases after Windows 10.")
__x_ABI_CWindows_CMedia_CPlayTo_CIPlayToSourceDeferralVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToSourceDeferral * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToSourceDeferral * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToSourceDeferral * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToSourceDeferral * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToSourceDeferral * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToSourceDeferral * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("PlayToSourceDeferral may be altered or unavailable for releases after Windows 10.")
                      HRESULT ( STDMETHODCALLTYPE *Complete )(
        __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToSourceDeferral * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToSourceDeferralVtbl;
interface __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToSourceDeferral
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToSourceDeferralVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("PlayToSourceDeferral may be altered or unavailable for releases after Windows 10.")
    ( (This)->lpVtbl->Complete(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CPlayTo_CIPlayToSourceDeferral;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_PlayTo_IPlayToSourceRequest[] = L"Windows.Media.PlayTo.IPlayToSourceRequest";
typedef struct
DEPRECATED("PlayToSourceRequest may be altered or unavailable for releases after Windows 10.")
__x_ABI_CWindows_CMedia_CPlayTo_CIPlayToSourceRequestVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToSourceRequest * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToSourceRequest * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToSourceRequest * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToSourceRequest * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToSourceRequest * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToSourceRequest * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("PlayToSourceRequest may be altered or unavailable for releases after Windows 10.")
                               HRESULT ( STDMETHODCALLTYPE *get_Deadline )(
        __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToSourceRequest * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
    DEPRECATED("PlayToSourceRequest may be altered or unavailable for releases after Windows 10.")
                      HRESULT ( STDMETHODCALLTYPE *DisplayErrorString )(
        __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToSourceRequest * This,
                  __RPC__in HSTRING errorString
        );
    DEPRECATED("PlayToSourceRequest may be altered or unavailable for releases after Windows 10.")
                      HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToSourceRequest * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToSourceDeferral * * deferral
        );
    DEPRECATED("PlayToSourceRequest may be altered or unavailable for releases after Windows 10.")
                      HRESULT ( STDMETHODCALLTYPE *SetSource )(
        __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToSourceRequest * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToSource * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToSourceRequestVtbl;
interface __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToSourceRequest
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToSourceRequestVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("PlayToSourceRequest may be altered or unavailable for releases after Windows 10.")
    ( (This)->lpVtbl->get_Deadline(This,value) )
DEPRECATED("PlayToSourceRequest may be altered or unavailable for releases after Windows 10.")
    ( (This)->lpVtbl->DisplayErrorString(This,errorString) )
DEPRECATED("PlayToSourceRequest may be altered or unavailable for releases after Windows 10.")
    ( (This)->lpVtbl->GetDeferral(This,deferral) )
DEPRECATED("PlayToSourceRequest may be altered or unavailable for releases after Windows 10.")
    ( (This)->lpVtbl->SetSource(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CPlayTo_CIPlayToSourceRequest;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_PlayTo_IPlayToSourceRequestedEventArgs[] = L"Windows.Media.PlayTo.IPlayToSourceRequestedEventArgs";
typedef struct
DEPRECATED("PlayToSourceRequestedEventArgs may be altered or unavailable for releases after Windows 10.")
__x_ABI_CWindows_CMedia_CPlayTo_CIPlayToSourceRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToSourceRequestedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToSourceRequestedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToSourceRequestedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToSourceRequestedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToSourceRequestedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToSourceRequestedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("PlayToSourceRequestedEventArgs may be altered or unavailable for releases after Windows 10.")
                               HRESULT ( STDMETHODCALLTYPE *get_SourceRequest )(
        __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToSourceRequestedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToSourceRequest * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToSourceRequestedEventArgsVtbl;
interface __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToSourceRequestedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToSourceRequestedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("PlayToSourceRequestedEventArgs may be altered or unavailable for releases after Windows 10.")
    ( (This)->lpVtbl->get_SourceRequest(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CPlayTo_CIPlayToSourceRequestedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_PlayTo_IPlayToSourceSelectedEventArgs[] = L"Windows.Media.PlayTo.IPlayToSourceSelectedEventArgs";
typedef struct
DEPRECATED("PlayToSourceSelectedEventArgs may be altered or unavailable for releases after Windows 10.")
__x_ABI_CWindows_CMedia_CPlayTo_CIPlayToSourceSelectedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToSourceSelectedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToSourceSelectedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToSourceSelectedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToSourceSelectedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToSourceSelectedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToSourceSelectedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("PlayToSourceSelectedEventArgs may be altered or unavailable for releases after Windows 10.")
                               HRESULT ( STDMETHODCALLTYPE *get_FriendlyName )(
        __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToSourceSelectedEventArgs * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    DEPRECATED("PlayToSourceSelectedEventArgs may be altered or unavailable for releases after Windows 10.")
                               HRESULT ( STDMETHODCALLTYPE *get_Icon )(
        __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToSourceSelectedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType * * value
        );
    DEPRECATED("PlayToSourceSelectedEventArgs may be altered or unavailable for releases after Windows 10.")
                               HRESULT ( STDMETHODCALLTYPE *get_SupportsImage )(
        __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToSourceSelectedEventArgs * This,
                           __RPC__out boolean * value
        );
    DEPRECATED("PlayToSourceSelectedEventArgs may be altered or unavailable for releases after Windows 10.")
                               HRESULT ( STDMETHODCALLTYPE *get_SupportsAudio )(
        __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToSourceSelectedEventArgs * This,
                           __RPC__out boolean * value
        );
    DEPRECATED("PlayToSourceSelectedEventArgs may be altered or unavailable for releases after Windows 10.")
                               HRESULT ( STDMETHODCALLTYPE *get_SupportsVideo )(
        __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToSourceSelectedEventArgs * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToSourceSelectedEventArgsVtbl;
interface __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToSourceSelectedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToSourceSelectedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("PlayToSourceSelectedEventArgs may be altered or unavailable for releases after Windows 10.")
    ( (This)->lpVtbl->get_FriendlyName(This,value) )
DEPRECATED("PlayToSourceSelectedEventArgs may be altered or unavailable for releases after Windows 10.")
    ( (This)->lpVtbl->get_Icon(This,value) )
DEPRECATED("PlayToSourceSelectedEventArgs may be altered or unavailable for releases after Windows 10.")
    ( (This)->lpVtbl->get_SupportsImage(This,value) )
DEPRECATED("PlayToSourceSelectedEventArgs may be altered or unavailable for releases after Windows 10.")
    ( (This)->lpVtbl->get_SupportsAudio(This,value) )
DEPRECATED("PlayToSourceSelectedEventArgs may be altered or unavailable for releases after Windows 10.")
    ( (This)->lpVtbl->get_SupportsVideo(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CPlayTo_CIPlayToSourceSelectedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_PlayTo_IPlayToSourceWithPreferredSourceUri[] = L"Windows.Media.PlayTo.IPlayToSourceWithPreferredSourceUri";
typedef struct
DEPRECATED("PlayToSourceWithPreferredSourceUri may be altered or unavailable for releases after Windows 10. Instead, use CastingSource.")
__x_ABI_CWindows_CMedia_CPlayTo_CIPlayToSourceWithPreferredSourceUriVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToSourceWithPreferredSourceUri * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToSourceWithPreferredSourceUri * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToSourceWithPreferredSourceUri * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToSourceWithPreferredSourceUri * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToSourceWithPreferredSourceUri * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToSourceWithPreferredSourceUri * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("PlayToSourceWithPreferredSourceUri may be altered or unavailable for releases after Windows 10. Instead, use CastingSource.")
                               HRESULT ( STDMETHODCALLTYPE *get_PreferredSourceUri )(
        __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToSourceWithPreferredSourceUri * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
    DEPRECATED("PlayToSourceWithPreferredSourceUri may be altered or unavailable for releases after Windows 10. Instead, use CastingSource.")
                               HRESULT ( STDMETHODCALLTYPE *put_PreferredSourceUri )(
        __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToSourceWithPreferredSourceUri * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToSourceWithPreferredSourceUriVtbl;
interface __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToSourceWithPreferredSourceUri
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CPlayTo_CIPlayToSourceWithPreferredSourceUriVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("PlayToSourceWithPreferredSourceUri may be altered or unavailable for releases after Windows 10. Instead, use CastingSource.")
    ( (This)->lpVtbl->get_PreferredSourceUri(This,value) )
DEPRECATED("PlayToSourceWithPreferredSourceUri may be altered or unavailable for releases after Windows 10. Instead, use CastingSource.")
    ( (This)->lpVtbl->put_PreferredSourceUri(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CPlayTo_CIPlayToSourceWithPreferredSourceUri;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_PlayTo_IPlaybackRateChangeRequestedEventArgs[] = L"Windows.Media.PlayTo.IPlaybackRateChangeRequestedEventArgs";
typedef struct __x_ABI_CWindows_CMedia_CPlayTo_CIPlaybackRateChangeRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayTo_CIPlaybackRateChangeRequestedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayTo_CIPlaybackRateChangeRequestedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayTo_CIPlaybackRateChangeRequestedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayTo_CIPlaybackRateChangeRequestedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayTo_CIPlaybackRateChangeRequestedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayTo_CIPlaybackRateChangeRequestedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Rate )(
        __x_ABI_CWindows_CMedia_CPlayTo_CIPlaybackRateChangeRequestedEventArgs * This,
                           __RPC__out DOUBLE * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CPlayTo_CIPlaybackRateChangeRequestedEventArgsVtbl;
interface __x_ABI_CWindows_CMedia_CPlayTo_CIPlaybackRateChangeRequestedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CPlayTo_CIPlaybackRateChangeRequestedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Rate(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CPlayTo_CIPlaybackRateChangeRequestedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_PlayTo_ISourceChangeRequestedEventArgs[] = L"Windows.Media.PlayTo.ISourceChangeRequestedEventArgs";
typedef struct __x_ABI_CWindows_CMedia_CPlayTo_CISourceChangeRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayTo_CISourceChangeRequestedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayTo_CISourceChangeRequestedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayTo_CISourceChangeRequestedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayTo_CISourceChangeRequestedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayTo_CISourceChangeRequestedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayTo_CISourceChangeRequestedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Stream )(
        __x_ABI_CWindows_CMedia_CPlayTo_CISourceChangeRequestedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Title )(
        __x_ABI_CWindows_CMedia_CPlayTo_CISourceChangeRequestedEventArgs * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Author )(
        __x_ABI_CWindows_CMedia_CPlayTo_CISourceChangeRequestedEventArgs * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Album )(
        __x_ABI_CWindows_CMedia_CPlayTo_CISourceChangeRequestedEventArgs * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Genre )(
        __x_ABI_CWindows_CMedia_CPlayTo_CISourceChangeRequestedEventArgs * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Description )(
        __x_ABI_CWindows_CMedia_CPlayTo_CISourceChangeRequestedEventArgs * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Date )(
        __x_ABI_CWindows_CMedia_CPlayTo_CISourceChangeRequestedEventArgs * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CDateTime * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Thumbnail )(
        __x_ABI_CWindows_CMedia_CPlayTo_CISourceChangeRequestedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Rating )(
        __x_ABI_CWindows_CMedia_CPlayTo_CISourceChangeRequestedEventArgs * This,
                           __RPC__deref_out_opt __FIReference_1_UINT32 * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Properties )(
        __x_ABI_CWindows_CMedia_CPlayTo_CISourceChangeRequestedEventArgs * This,
                           __RPC__deref_out_opt __FIMapView_2_HSTRING_IInspectable * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CPlayTo_CISourceChangeRequestedEventArgsVtbl;
interface __x_ABI_CWindows_CMedia_CPlayTo_CISourceChangeRequestedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CPlayTo_CISourceChangeRequestedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Stream(This,value) )
    ( (This)->lpVtbl->get_Title(This,value) )
    ( (This)->lpVtbl->get_Author(This,value) )
    ( (This)->lpVtbl->get_Album(This,value) )
    ( (This)->lpVtbl->get_Genre(This,value) )
    ( (This)->lpVtbl->get_Description(This,value) )
    ( (This)->lpVtbl->get_Date(This,value) )
    ( (This)->lpVtbl->get_Thumbnail(This,value) )
    ( (This)->lpVtbl->get_Rating(This,value) )
    ( (This)->lpVtbl->get_Properties(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CPlayTo_CISourceChangeRequestedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_PlayTo_IVolumeChangeRequestedEventArgs[] = L"Windows.Media.PlayTo.IVolumeChangeRequestedEventArgs";
typedef struct __x_ABI_CWindows_CMedia_CPlayTo_CIVolumeChangeRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayTo_CIVolumeChangeRequestedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayTo_CIVolumeChangeRequestedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayTo_CIVolumeChangeRequestedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayTo_CIVolumeChangeRequestedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayTo_CIVolumeChangeRequestedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayTo_CIVolumeChangeRequestedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Volume )(
        __x_ABI_CWindows_CMedia_CPlayTo_CIVolumeChangeRequestedEventArgs * This,
                           __RPC__out DOUBLE * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CPlayTo_CIVolumeChangeRequestedEventArgsVtbl;
interface __x_ABI_CWindows_CMedia_CPlayTo_CIVolumeChangeRequestedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CPlayTo_CIVolumeChangeRequestedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Volume(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CPlayTo_CIVolumeChangeRequestedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_PlayTo_CurrentTimeChangeRequestedEventArgs[] = L"Windows.Media.PlayTo.CurrentTimeChangeRequestedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_PlayTo_MuteChangeRequestedEventArgs[] = L"Windows.Media.PlayTo.MuteChangeRequestedEventArgs";
DEPRECATED("PlayToConnection may be altered or unavailable for releases after Windows 10. Instead, use CastingConnection.")
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_PlayTo_PlayToConnection[] = L"Windows.Media.PlayTo.PlayToConnection";
DEPRECATED("PlayToConnectionErrorEventArgs may be altered or unavailable for releases after Windows 10. Instead, use CastingConnectionErrorOccurredEventArgs.")
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_PlayTo_PlayToConnectionErrorEventArgs[] = L"Windows.Media.PlayTo.PlayToConnectionErrorEventArgs";
DEPRECATED("PlayToConnectionStateChangedEventArgs may be altered or unavailable for releases after Windows 10.")
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_PlayTo_PlayToConnectionStateChangedEventArgs[] = L"Windows.Media.PlayTo.PlayToConnectionStateChangedEventArgs";
DEPRECATED("PlayToConnectionTransferredEventArgs may be altered or unavailable for releases after Windows 10.")
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_PlayTo_PlayToConnectionTransferredEventArgs[] = L"Windows.Media.PlayTo.PlayToConnectionTransferredEventArgs";
DEPRECATED("PlayToManager may be altered or unavailable for releases after Windows 10.")
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_PlayTo_PlayToManager[] = L"Windows.Media.PlayTo.PlayToManager";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_PlayTo_PlayToReceiver[] = L"Windows.Media.PlayTo.PlayToReceiver";
DEPRECATED("PlayToSource may be altered or unavailable for releases after Windows 10. Instead, use CastingSource.")
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_PlayTo_PlayToSource[] = L"Windows.Media.PlayTo.PlayToSource";
DEPRECATED("PlayToSourceDeferral may be altered or unavailable for releases after Windows 10.")
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_PlayTo_PlayToSourceDeferral[] = L"Windows.Media.PlayTo.PlayToSourceDeferral";
DEPRECATED("PlayToSourceRequest may be altered or unavailable for releases after Windows 10.")
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_PlayTo_PlayToSourceRequest[] = L"Windows.Media.PlayTo.PlayToSourceRequest";
DEPRECATED("PlayToSourceRequestedEventArgs may be altered or unavailable for releases after Windows 10.")
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_PlayTo_PlayToSourceRequestedEventArgs[] = L"Windows.Media.PlayTo.PlayToSourceRequestedEventArgs";
DEPRECATED("PlayToSourceSelectedEventArgs may be altered or unavailable for releases after Windows 10.")
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_PlayTo_PlayToSourceSelectedEventArgs[] = L"Windows.Media.PlayTo.PlayToSourceSelectedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_PlayTo_PlaybackRateChangeRequestedEventArgs[] = L"Windows.Media.PlayTo.PlaybackRateChangeRequestedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_PlayTo_SourceChangeRequestedEventArgs[] = L"Windows.Media.PlayTo.SourceChangeRequestedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_PlayTo_VolumeChangeRequestedEventArgs[] = L"Windows.Media.PlayTo.VolumeChangeRequestedEventArgs";
       
       
#pragma clang diagnostic pop

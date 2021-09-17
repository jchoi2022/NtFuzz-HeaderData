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
#include "Windows.Media.Audio.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CApplicationModel_CConversationalAgent_CIConversationalAgentSession __x_ABI_CWindows_CApplicationModel_CConversationalAgent_CIConversationalAgentSession;
typedef interface __x_ABI_CWindows_CApplicationModel_CConversationalAgent_CIConversationalAgentSessionInterruptedEventArgs __x_ABI_CWindows_CApplicationModel_CConversationalAgent_CIConversationalAgentSessionInterruptedEventArgs;
typedef interface __x_ABI_CWindows_CApplicationModel_CConversationalAgent_CIConversationalAgentSessionStatics __x_ABI_CWindows_CApplicationModel_CConversationalAgent_CIConversationalAgentSessionStatics;
typedef interface __x_ABI_CWindows_CApplicationModel_CConversationalAgent_CIConversationalAgentSignal __x_ABI_CWindows_CApplicationModel_CConversationalAgent_CIConversationalAgentSignal;
typedef interface __x_ABI_CWindows_CApplicationModel_CConversationalAgent_CIConversationalAgentSignalDetectedEventArgs __x_ABI_CWindows_CApplicationModel_CConversationalAgent_CIConversationalAgentSignalDetectedEventArgs;
typedef interface __x_ABI_CWindows_CApplicationModel_CConversationalAgent_CIConversationalAgentSystemStateChangedEventArgs __x_ABI_CWindows_CApplicationModel_CConversationalAgent_CIConversationalAgentSystemStateChangedEventArgs;
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CConversationalAgent__CConversationalAgentSession __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CConversationalAgent__CConversationalAgentSession;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CConversationalAgent__CConversationalAgentSession;
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CConversationalAgent__CConversationalAgentSession __FIAsyncOperation_1_Windows__CApplicationModel__CConversationalAgent__CConversationalAgentSession;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CConversationalAgent__CConversationalAgentSessionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CConversationalAgent__CConversationalAgentSession * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CConversationalAgent__CConversationalAgentSession * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CConversationalAgent__CConversationalAgentSession * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CConversationalAgent__CConversationalAgentSession * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CApplicationModel__CConversationalAgent__CConversationalAgentSession *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CConversationalAgent__CConversationalAgentSessionVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CConversationalAgent__CConversationalAgentSession
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CConversationalAgent__CConversationalAgentSessionVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CConversationalAgent__CConversationalAgentSession __FIAsyncOperation_1_Windows__CApplicationModel__CConversationalAgent__CConversationalAgentSession;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CApplicationModel__CConversationalAgent__CConversationalAgentSession;
typedef struct __FIAsyncOperation_1_Windows__CApplicationModel__CConversationalAgent__CConversationalAgentSessionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CConversationalAgent__CConversationalAgentSession * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CConversationalAgent__CConversationalAgentSession * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CConversationalAgent__CConversationalAgentSession * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CConversationalAgent__CConversationalAgentSession * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CConversationalAgent__CConversationalAgentSession * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CConversationalAgent__CConversationalAgentSession * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CConversationalAgent__CConversationalAgentSession * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CConversationalAgent__CConversationalAgentSession *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CConversationalAgent__CConversationalAgentSession * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CConversationalAgent__CConversationalAgentSession **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CConversationalAgent__CConversationalAgentSession * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CConversationalAgent_CIConversationalAgentSession * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CApplicationModel__CConversationalAgent__CConversationalAgentSessionVtbl;
interface __FIAsyncOperation_1_Windows__CApplicationModel__CConversationalAgent__CConversationalAgentSession
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CApplicationModel__CConversationalAgent__CConversationalAgentSessionVtbl *lpVtbl;
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
enum __x_ABI_CWindows_CApplicationModel_CConversationalAgent_CConversationalAgentSessionUpdateResponse;
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CConversationalAgent__CConversationalAgentSessionUpdateResponse __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CConversationalAgent__CConversationalAgentSessionUpdateResponse;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CConversationalAgent__CConversationalAgentSessionUpdateResponse;
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CConversationalAgent__CConversationalAgentSessionUpdateResponse __FIAsyncOperation_1_Windows__CApplicationModel__CConversationalAgent__CConversationalAgentSessionUpdateResponse;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CConversationalAgent__CConversationalAgentSessionUpdateResponseVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CConversationalAgent__CConversationalAgentSessionUpdateResponse * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CConversationalAgent__CConversationalAgentSessionUpdateResponse * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CConversationalAgent__CConversationalAgentSessionUpdateResponse * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CConversationalAgent__CConversationalAgentSessionUpdateResponse * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CApplicationModel__CConversationalAgent__CConversationalAgentSessionUpdateResponse *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CConversationalAgent__CConversationalAgentSessionUpdateResponseVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CConversationalAgent__CConversationalAgentSessionUpdateResponse
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CConversationalAgent__CConversationalAgentSessionUpdateResponseVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CConversationalAgent__CConversationalAgentSessionUpdateResponse __FIAsyncOperation_1_Windows__CApplicationModel__CConversationalAgent__CConversationalAgentSessionUpdateResponse;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CApplicationModel__CConversationalAgent__CConversationalAgentSessionUpdateResponse;
typedef struct __FIAsyncOperation_1_Windows__CApplicationModel__CConversationalAgent__CConversationalAgentSessionUpdateResponseVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CConversationalAgent__CConversationalAgentSessionUpdateResponse * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CConversationalAgent__CConversationalAgentSessionUpdateResponse * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CConversationalAgent__CConversationalAgentSessionUpdateResponse * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CConversationalAgent__CConversationalAgentSessionUpdateResponse * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CConversationalAgent__CConversationalAgentSessionUpdateResponse * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CConversationalAgent__CConversationalAgentSessionUpdateResponse * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CConversationalAgent__CConversationalAgentSessionUpdateResponse * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CConversationalAgent__CConversationalAgentSessionUpdateResponse *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CConversationalAgent__CConversationalAgentSessionUpdateResponse * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CConversationalAgent__CConversationalAgentSessionUpdateResponse **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CConversationalAgent__CConversationalAgentSessionUpdateResponse * This, __RPC__out enum __x_ABI_CWindows_CApplicationModel_CConversationalAgent_CConversationalAgentSessionUpdateResponse *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CApplicationModel__CConversationalAgent__CConversationalAgentSessionUpdateResponseVtbl;
interface __FIAsyncOperation_1_Windows__CApplicationModel__CConversationalAgent__CConversationalAgentSessionUpdateResponse
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CApplicationModel__CConversationalAgent__CConversationalAgentSessionUpdateResponseVtbl *lpVtbl;
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
typedef interface __FITypedEventHandler_2_Windows__CApplicationModel__CConversationalAgent__CConversationalAgentSession_Windows__CApplicationModel__CConversationalAgent__CConversationalAgentSessionInterruptedEventArgs __FITypedEventHandler_2_Windows__CApplicationModel__CConversationalAgent__CConversationalAgentSession_Windows__CApplicationModel__CConversationalAgent__CConversationalAgentSessionInterruptedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CApplicationModel__CConversationalAgent__CConversationalAgentSession_Windows__CApplicationModel__CConversationalAgent__CConversationalAgentSessionInterruptedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CApplicationModel__CConversationalAgent__CConversationalAgentSession_Windows__CApplicationModel__CConversationalAgent__CConversationalAgentSessionInterruptedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CConversationalAgent__CConversationalAgentSession_Windows__CApplicationModel__CConversationalAgent__CConversationalAgentSessionInterruptedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CConversationalAgent__CConversationalAgentSession_Windows__CApplicationModel__CConversationalAgent__CConversationalAgentSessionInterruptedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CConversationalAgent__CConversationalAgentSession_Windows__CApplicationModel__CConversationalAgent__CConversationalAgentSessionInterruptedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CConversationalAgent__CConversationalAgentSession_Windows__CApplicationModel__CConversationalAgent__CConversationalAgentSessionInterruptedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CConversationalAgent_CIConversationalAgentSession * sender, __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CConversationalAgent_CIConversationalAgentSessionInterruptedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CApplicationModel__CConversationalAgent__CConversationalAgentSession_Windows__CApplicationModel__CConversationalAgent__CConversationalAgentSessionInterruptedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CApplicationModel__CConversationalAgent__CConversationalAgentSession_Windows__CApplicationModel__CConversationalAgent__CConversationalAgentSessionInterruptedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CApplicationModel__CConversationalAgent__CConversationalAgentSession_Windows__CApplicationModel__CConversationalAgent__CConversationalAgentSessionInterruptedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CApplicationModel__CConversationalAgent__CConversationalAgentSession_Windows__CApplicationModel__CConversationalAgent__CConversationalAgentSignalDetectedEventArgs __FITypedEventHandler_2_Windows__CApplicationModel__CConversationalAgent__CConversationalAgentSession_Windows__CApplicationModel__CConversationalAgent__CConversationalAgentSignalDetectedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CApplicationModel__CConversationalAgent__CConversationalAgentSession_Windows__CApplicationModel__CConversationalAgent__CConversationalAgentSignalDetectedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CApplicationModel__CConversationalAgent__CConversationalAgentSession_Windows__CApplicationModel__CConversationalAgent__CConversationalAgentSignalDetectedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CConversationalAgent__CConversationalAgentSession_Windows__CApplicationModel__CConversationalAgent__CConversationalAgentSignalDetectedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CConversationalAgent__CConversationalAgentSession_Windows__CApplicationModel__CConversationalAgent__CConversationalAgentSignalDetectedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CConversationalAgent__CConversationalAgentSession_Windows__CApplicationModel__CConversationalAgent__CConversationalAgentSignalDetectedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CConversationalAgent__CConversationalAgentSession_Windows__CApplicationModel__CConversationalAgent__CConversationalAgentSignalDetectedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CConversationalAgent_CIConversationalAgentSession * sender, __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CConversationalAgent_CIConversationalAgentSignalDetectedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CApplicationModel__CConversationalAgent__CConversationalAgentSession_Windows__CApplicationModel__CConversationalAgent__CConversationalAgentSignalDetectedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CApplicationModel__CConversationalAgent__CConversationalAgentSession_Windows__CApplicationModel__CConversationalAgent__CConversationalAgentSignalDetectedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CApplicationModel__CConversationalAgent__CConversationalAgentSession_Windows__CApplicationModel__CConversationalAgent__CConversationalAgentSignalDetectedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CApplicationModel__CConversationalAgent__CConversationalAgentSession_Windows__CApplicationModel__CConversationalAgent__CConversationalAgentSystemStateChangedEventArgs __FITypedEventHandler_2_Windows__CApplicationModel__CConversationalAgent__CConversationalAgentSession_Windows__CApplicationModel__CConversationalAgent__CConversationalAgentSystemStateChangedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CApplicationModel__CConversationalAgent__CConversationalAgentSession_Windows__CApplicationModel__CConversationalAgent__CConversationalAgentSystemStateChangedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CApplicationModel__CConversationalAgent__CConversationalAgentSession_Windows__CApplicationModel__CConversationalAgent__CConversationalAgentSystemStateChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CConversationalAgent__CConversationalAgentSession_Windows__CApplicationModel__CConversationalAgent__CConversationalAgentSystemStateChangedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CConversationalAgent__CConversationalAgentSession_Windows__CApplicationModel__CConversationalAgent__CConversationalAgentSystemStateChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CConversationalAgent__CConversationalAgentSession_Windows__CApplicationModel__CConversationalAgent__CConversationalAgentSystemStateChangedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CConversationalAgent__CConversationalAgentSession_Windows__CApplicationModel__CConversationalAgent__CConversationalAgentSystemStateChangedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CConversationalAgent_CIConversationalAgentSession * sender, __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CConversationalAgent_CIConversationalAgentSystemStateChangedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CApplicationModel__CConversationalAgent__CConversationalAgentSession_Windows__CApplicationModel__CConversationalAgent__CConversationalAgentSystemStateChangedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CApplicationModel__CConversationalAgent__CConversationalAgentSession_Windows__CApplicationModel__CConversationalAgent__CConversationalAgentSystemStateChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CApplicationModel__CConversationalAgent__CConversationalAgentSession_Windows__CApplicationModel__CConversationalAgent__CConversationalAgentSystemStateChangedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FIAsyncOperationCompletedHandler_1_IInspectable __FIAsyncOperationCompletedHandler_1_IInspectable;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_IInspectable;
typedef interface __FIAsyncOperation_1_IInspectable __FIAsyncOperation_1_IInspectable;
typedef struct __FIAsyncOperationCompletedHandler_1_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_IInspectable * This, __RPC__in_opt __FIAsyncOperation_1_IInspectable *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_IInspectableVtbl;
interface __FIAsyncOperationCompletedHandler_1_IInspectable
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_IInspectable __FIAsyncOperation_1_IInspectable;
EXTERN_C const IID IID___FIAsyncOperation_1_IInspectable;
typedef struct __FIAsyncOperation_1_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_IInspectable * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_IInspectable * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_IInspectable * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_IInspectable * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_IInspectable *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_IInspectable * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_IInspectable **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_IInspectable * This, __RPC__out IInspectable * *results);
    END_INTERFACE
} __FIAsyncOperation_1_IInspectableVtbl;
interface __FIAsyncOperation_1_IInspectable
{
    CONST_VTBL struct __FIAsyncOperation_1_IInspectableVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CMedia_CAudio_CIAudioDeviceInputNode __x_ABI_CWindows_CMedia_CAudio_CIAudioDeviceInputNode;
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CAudioDeviceInputNode __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CAudioDeviceInputNode;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CAudioDeviceInputNode;
typedef interface __FIAsyncOperation_1_Windows__CMedia__CAudio__CAudioDeviceInputNode __FIAsyncOperation_1_Windows__CMedia__CAudio__CAudioDeviceInputNode;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CAudioDeviceInputNodeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CAudioDeviceInputNode * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CAudioDeviceInputNode * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CAudioDeviceInputNode * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CAudioDeviceInputNode * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CMedia__CAudio__CAudioDeviceInputNode *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CAudioDeviceInputNodeVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CAudioDeviceInputNode
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CAudioDeviceInputNodeVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CMedia__CAudio__CAudioDeviceInputNode __FIAsyncOperation_1_Windows__CMedia__CAudio__CAudioDeviceInputNode;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CMedia__CAudio__CAudioDeviceInputNode;
typedef struct __FIAsyncOperation_1_Windows__CMedia__CAudio__CAudioDeviceInputNodeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAudio__CAudioDeviceInputNode * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAudio__CAudioDeviceInputNode * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAudio__CAudioDeviceInputNode * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAudio__CAudioDeviceInputNode * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAudio__CAudioDeviceInputNode * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAudio__CAudioDeviceInputNode * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAudio__CAudioDeviceInputNode * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CAudioDeviceInputNode *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAudio__CAudioDeviceInputNode * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CAudioDeviceInputNode **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAudio__CAudioDeviceInputNode * This, __RPC__out __x_ABI_CWindows_CMedia_CAudio_CIAudioDeviceInputNode * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CMedia__CAudio__CAudioDeviceInputNodeVtbl;
interface __FIAsyncOperation_1_Windows__CMedia__CAudio__CAudioDeviceInputNode
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CMedia__CAudio__CAudioDeviceInputNodeVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_UINT32 __FIAsyncOperationCompletedHandler_1_UINT32;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_UINT32;
typedef interface __FIAsyncOperation_1_UINT32 __FIAsyncOperation_1_UINT32;
typedef struct __FIAsyncOperationCompletedHandler_1_UINT32Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_UINT32 * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_UINT32 * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_UINT32 * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_UINT32 * This, __RPC__in_opt __FIAsyncOperation_1_UINT32 *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_UINT32Vtbl;
interface __FIAsyncOperationCompletedHandler_1_UINT32
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_UINT32Vtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_UINT32 __FIAsyncOperation_1_UINT32;
EXTERN_C const IID IID___FIAsyncOperation_1_UINT32;
typedef struct __FIAsyncOperation_1_UINT32Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_UINT32 * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_UINT32 * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_UINT32 * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_UINT32 * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_UINT32 * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_UINT32 * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_UINT32 * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_UINT32 *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_UINT32 * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_UINT32 **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_UINT32 * This, __RPC__out unsigned int *results);
    END_INTERFACE
} __FIAsyncOperation_1_UINT32Vtbl;
interface __FIAsyncOperation_1_UINT32
{
    CONST_VTBL struct __FIAsyncOperation_1_UINT32Vtbl *lpVtbl;
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
typedef interface __FIIterator_1_UINT32 __FIIterator_1_UINT32;
EXTERN_C const IID IID___FIIterator_1_UINT32;
typedef struct __FIIterator_1_UINT32Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_UINT32 * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_UINT32 * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_UINT32 * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_UINT32 * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_UINT32 * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_UINT32 * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_UINT32 * This, __RPC__out unsigned int *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_UINT32 * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_UINT32 * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_UINT32 * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) unsigned int *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_UINT32Vtbl;
interface __FIIterator_1_UINT32
{
    CONST_VTBL struct __FIIterator_1_UINT32Vtbl *lpVtbl;
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
typedef interface __FIIterable_1_UINT32 __FIIterable_1_UINT32;
EXTERN_C const IID IID___FIIterable_1_UINT32;
typedef struct __FIIterable_1_UINT32Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_UINT32 * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_UINT32 * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_UINT32 * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_UINT32 * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_UINT32 * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_UINT32 * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_UINT32 * This, __RPC__deref_out_opt __FIIterator_1_UINT32 **first);
    END_INTERFACE
} __FIIterable_1_UINT32Vtbl;
interface __FIIterable_1_UINT32
{
    CONST_VTBL struct __FIIterable_1_UINT32Vtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_UINT32 __FIVectorView_1_UINT32;
EXTERN_C const IID IID___FIVectorView_1_UINT32;
typedef struct __FIVectorView_1_UINT32Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_UINT32 * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_UINT32 * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_UINT32 * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_UINT32 * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_UINT32 * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_UINT32 * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_UINT32 * This,
                                                    unsigned int index,
                                                             __RPC__out unsigned int *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_UINT32 * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_UINT32 * This,
                       unsigned int item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_UINT32 * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) unsigned int *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_UINT32Vtbl;
interface __FIVectorView_1_UINT32
{
    CONST_VTBL struct __FIVectorView_1_UINT32Vtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_UINT32 __FIAsyncOperationCompletedHandler_1___FIVectorView_1_UINT32;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_UINT32;
typedef interface __FIAsyncOperation_1___FIVectorView_1_UINT32 __FIAsyncOperation_1___FIVectorView_1_UINT32;
typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_UINT32Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_UINT32 * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_UINT32 * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_UINT32 * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_UINT32 * This, __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_UINT32 *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_UINT32Vtbl;
interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_UINT32
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_UINT32Vtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1___FIVectorView_1_UINT32 __FIAsyncOperation_1___FIVectorView_1_UINT32;
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_UINT32;
typedef struct __FIAsyncOperation_1___FIVectorView_1_UINT32Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_UINT32 * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_UINT32 * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_UINT32 * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_UINT32 * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_UINT32 * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_UINT32 * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_UINT32 * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_UINT32 *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_UINT32 * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_UINT32 **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_UINT32 * This, __RPC__out __FIVectorView_1_UINT32 * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_UINT32Vtbl;
interface __FIAsyncOperation_1___FIVectorView_1_UINT32
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_UINT32Vtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CFoundation_CIClosable __x_ABI_CWindows_CFoundation_CIClosable;
typedef struct __x_ABI_CWindows_CFoundation_CTimeSpan __x_ABI_CWindows_CFoundation_CTimeSpan;
typedef interface __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph;
typedef enum __x_ABI_CWindows_CApplicationModel_CConversationalAgent_CConversationalAgentSessionUpdateResponse __x_ABI_CWindows_CApplicationModel_CConversationalAgent_CConversationalAgentSessionUpdateResponse;
typedef enum __x_ABI_CWindows_CApplicationModel_CConversationalAgent_CConversationalAgentState __x_ABI_CWindows_CApplicationModel_CConversationalAgent_CConversationalAgentState;
typedef enum __x_ABI_CWindows_CApplicationModel_CConversationalAgent_CConversationalAgentSystemStateChangeType __x_ABI_CWindows_CApplicationModel_CConversationalAgent_CConversationalAgentSystemStateChangeType;
enum __x_ABI_CWindows_CApplicationModel_CConversationalAgent_CConversationalAgentSessionUpdateResponse
{
    ConversationalAgentSessionUpdateResponse_Success = 0,
    ConversationalAgentSessionUpdateResponse_Failed = 1,
};
enum __x_ABI_CWindows_CApplicationModel_CConversationalAgent_CConversationalAgentState
{
    ConversationalAgentState_Inactive = 0,
    ConversationalAgentState_Detecting = 1,
    ConversationalAgentState_Listening = 2,
    ConversationalAgentState_Working = 3,
    ConversationalAgentState_Speaking = 4,
    ConversationalAgentState_ListeningAndSpeaking = 5,
};
enum __x_ABI_CWindows_CApplicationModel_CConversationalAgent_CConversationalAgentSystemStateChangeType
{
    ConversationalAgentSystemStateChangeType_UserAuthentication = 0,
    ConversationalAgentSystemStateChangeType_ScreenAvailability = 1,
    ConversationalAgentSystemStateChangeType_IndicatorLightAvailability = 2,
    ConversationalAgentSystemStateChangeType_VoiceActivationAvailability = 3,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_ConversationalAgent_IConversationalAgentSession[] = L"Windows.ApplicationModel.ConversationalAgent.IConversationalAgentSession";
typedef struct __x_ABI_CWindows_CApplicationModel_CConversationalAgent_CIConversationalAgentSessionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CConversationalAgent_CIConversationalAgentSession * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CConversationalAgent_CIConversationalAgentSession * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CConversationalAgent_CIConversationalAgentSession * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CConversationalAgent_CIConversationalAgentSession * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CConversationalAgent_CIConversationalAgentSession * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CConversationalAgent_CIConversationalAgentSession * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_SessionInterrupted )(
        __x_ABI_CWindows_CApplicationModel_CConversationalAgent_CIConversationalAgentSession * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CConversationalAgent__CConversationalAgentSession_Windows__CApplicationModel__CConversationalAgent__CConversationalAgentSessionInterruptedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_SessionInterrupted )(
        __x_ABI_CWindows_CApplicationModel_CConversationalAgent_CIConversationalAgentSession * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_SignalDetected )(
        __x_ABI_CWindows_CApplicationModel_CConversationalAgent_CIConversationalAgentSession * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CConversationalAgent__CConversationalAgentSession_Windows__CApplicationModel__CConversationalAgent__CConversationalAgentSignalDetectedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_SignalDetected )(
        __x_ABI_CWindows_CApplicationModel_CConversationalAgent_CIConversationalAgentSession * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_SystemStateChanged )(
        __x_ABI_CWindows_CApplicationModel_CConversationalAgent_CIConversationalAgentSession * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CConversationalAgent__CConversationalAgentSession_Windows__CApplicationModel__CConversationalAgent__CConversationalAgentSystemStateChangedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_SystemStateChanged )(
        __x_ABI_CWindows_CApplicationModel_CConversationalAgent_CIConversationalAgentSession * This,
                  EventRegistrationToken token
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AgentState )(
        __x_ABI_CWindows_CApplicationModel_CConversationalAgent_CIConversationalAgentSession * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CConversationalAgent_CConversationalAgentState * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Signal )(
        __x_ABI_CWindows_CApplicationModel_CConversationalAgent_CIConversationalAgentSession * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CConversationalAgent_CIConversationalAgentSignal * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsIndicatorLightAvailable )(
        __x_ABI_CWindows_CApplicationModel_CConversationalAgent_CIConversationalAgentSession * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsScreenAvailable )(
        __x_ABI_CWindows_CApplicationModel_CConversationalAgent_CIConversationalAgentSession * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsUserAuthenticated )(
        __x_ABI_CWindows_CApplicationModel_CConversationalAgent_CIConversationalAgentSession * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsVoiceActivationAvailable )(
        __x_ABI_CWindows_CApplicationModel_CConversationalAgent_CIConversationalAgentSession * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsInterruptible )(
        __x_ABI_CWindows_CApplicationModel_CConversationalAgent_CIConversationalAgentSession * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsInterrupted )(
        __x_ABI_CWindows_CApplicationModel_CConversationalAgent_CIConversationalAgentSession * This,
                           __RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *RequestInterruptibleAsync )(
        __x_ABI_CWindows_CApplicationModel_CConversationalAgent_CIConversationalAgentSession * This,
                  boolean interruptible,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CConversationalAgent__CConversationalAgentSessionUpdateResponse * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *RequestInterruptible )(
        __x_ABI_CWindows_CApplicationModel_CConversationalAgent_CIConversationalAgentSession * This,
                  boolean interruptible,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CConversationalAgent_CConversationalAgentSessionUpdateResponse * result
        );
    HRESULT ( STDMETHODCALLTYPE *RequestAgentStateChangeAsync )(
        __x_ABI_CWindows_CApplicationModel_CConversationalAgent_CIConversationalAgentSession * This,
                  __x_ABI_CWindows_CApplicationModel_CConversationalAgent_CConversationalAgentState state,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CConversationalAgent__CConversationalAgentSessionUpdateResponse * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *RequestAgentStateChange )(
        __x_ABI_CWindows_CApplicationModel_CConversationalAgent_CIConversationalAgentSession * This,
                  __x_ABI_CWindows_CApplicationModel_CConversationalAgent_CConversationalAgentState state,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CConversationalAgent_CConversationalAgentSessionUpdateResponse * result
        );
    HRESULT ( STDMETHODCALLTYPE *RequestForegroundActivationAsync )(
        __x_ABI_CWindows_CApplicationModel_CConversationalAgent_CIConversationalAgentSession * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CConversationalAgent__CConversationalAgentSessionUpdateResponse * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *RequestForegroundActivation )(
        __x_ABI_CWindows_CApplicationModel_CConversationalAgent_CIConversationalAgentSession * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CConversationalAgent_CConversationalAgentSessionUpdateResponse * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetAudioClientAsync )(
        __x_ABI_CWindows_CApplicationModel_CConversationalAgent_CIConversationalAgentSession * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_IInspectable * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *GetAudioClient )(
        __x_ABI_CWindows_CApplicationModel_CConversationalAgent_CIConversationalAgentSession * This,
                           __RPC__deref_out_opt IInspectable * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateAudioDeviceInputNodeAsync )(
        __x_ABI_CWindows_CApplicationModel_CConversationalAgent_CIConversationalAgentSession * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph * graph,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CAudio__CAudioDeviceInputNode * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *CreateAudioDeviceInputNode )(
        __x_ABI_CWindows_CApplicationModel_CConversationalAgent_CIConversationalAgentSession * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph * graph,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CAudio_CIAudioDeviceInputNode * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetAudioCaptureDeviceIdAsync )(
        __x_ABI_CWindows_CApplicationModel_CConversationalAgent_CIConversationalAgentSession * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *GetAudioCaptureDeviceId )(
        __x_ABI_CWindows_CApplicationModel_CConversationalAgent_CIConversationalAgentSession * This,
                           __RPC__deref_out_opt HSTRING * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetAudioRenderDeviceIdAsync )(
        __x_ABI_CWindows_CApplicationModel_CConversationalAgent_CIConversationalAgentSession * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *GetAudioRenderDeviceId )(
        __x_ABI_CWindows_CApplicationModel_CConversationalAgent_CIConversationalAgentSession * This,
                           __RPC__deref_out_opt HSTRING * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetSignalModelIdAsync )(
        __x_ABI_CWindows_CApplicationModel_CConversationalAgent_CIConversationalAgentSession * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_UINT32 * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *GetSignalModelId )(
        __x_ABI_CWindows_CApplicationModel_CConversationalAgent_CIConversationalAgentSession * This,
                           __RPC__out UINT32 * result
        );
    HRESULT ( STDMETHODCALLTYPE *SetSignalModelIdAsync )(
        __x_ABI_CWindows_CApplicationModel_CConversationalAgent_CIConversationalAgentSession * This,
                  UINT32 signalModelId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *SetSignalModelId )(
        __x_ABI_CWindows_CApplicationModel_CConversationalAgent_CIConversationalAgentSession * This,
                  UINT32 signalModelId,
                           __RPC__out boolean * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetSupportedSignalModelIdsAsync )(
        __x_ABI_CWindows_CApplicationModel_CConversationalAgent_CIConversationalAgentSession * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_UINT32 * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *GetSupportedSignalModelIds )(
        __x_ABI_CWindows_CApplicationModel_CConversationalAgent_CIConversationalAgentSession * This,
                           __RPC__deref_out_opt __FIVectorView_1_UINT32 * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CConversationalAgent_CIConversationalAgentSessionVtbl;
interface __x_ABI_CWindows_CApplicationModel_CConversationalAgent_CIConversationalAgentSession
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CConversationalAgent_CIConversationalAgentSessionVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_SessionInterrupted(This,handler,token) )
    ( (This)->lpVtbl->remove_SessionInterrupted(This,token) )
    ( (This)->lpVtbl->add_SignalDetected(This,handler,token) )
    ( (This)->lpVtbl->remove_SignalDetected(This,token) )
    ( (This)->lpVtbl->add_SystemStateChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_SystemStateChanged(This,token) )
    ( (This)->lpVtbl->get_AgentState(This,value) )
    ( (This)->lpVtbl->get_Signal(This,value) )
    ( (This)->lpVtbl->get_IsIndicatorLightAvailable(This,value) )
    ( (This)->lpVtbl->get_IsScreenAvailable(This,value) )
    ( (This)->lpVtbl->get_IsUserAuthenticated(This,value) )
    ( (This)->lpVtbl->get_IsVoiceActivationAvailable(This,value) )
    ( (This)->lpVtbl->get_IsInterruptible(This,value) )
    ( (This)->lpVtbl->get_IsInterrupted(This,value) )
    ( (This)->lpVtbl->RequestInterruptibleAsync(This,interruptible,operation) )
    ( (This)->lpVtbl->RequestInterruptible(This,interruptible,result) )
    ( (This)->lpVtbl->RequestAgentStateChangeAsync(This,state,operation) )
    ( (This)->lpVtbl->RequestAgentStateChange(This,state,result) )
    ( (This)->lpVtbl->RequestForegroundActivationAsync(This,operation) )
    ( (This)->lpVtbl->RequestForegroundActivation(This,result) )
    ( (This)->lpVtbl->GetAudioClientAsync(This,operation) )
    ( (This)->lpVtbl->GetAudioClient(This,result) )
    ( (This)->lpVtbl->CreateAudioDeviceInputNodeAsync(This,graph,operation) )
    ( (This)->lpVtbl->CreateAudioDeviceInputNode(This,graph,result) )
    ( (This)->lpVtbl->GetAudioCaptureDeviceIdAsync(This,operation) )
    ( (This)->lpVtbl->GetAudioCaptureDeviceId(This,result) )
    ( (This)->lpVtbl->GetAudioRenderDeviceIdAsync(This,operation) )
    ( (This)->lpVtbl->GetAudioRenderDeviceId(This,result) )
    ( (This)->lpVtbl->GetSignalModelIdAsync(This,operation) )
    ( (This)->lpVtbl->GetSignalModelId(This,result) )
    ( (This)->lpVtbl->SetSignalModelIdAsync(This,signalModelId,operation) )
    ( (This)->lpVtbl->SetSignalModelId(This,signalModelId,result) )
    ( (This)->lpVtbl->GetSupportedSignalModelIdsAsync(This,operation) )
    ( (This)->lpVtbl->GetSupportedSignalModelIds(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CConversationalAgent_CIConversationalAgentSession;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_ConversationalAgent_IConversationalAgentSessionInterruptedEventArgs[] = L"Windows.ApplicationModel.ConversationalAgent.IConversationalAgentSessionInterruptedEventArgs";
typedef struct __x_ABI_CWindows_CApplicationModel_CConversationalAgent_CIConversationalAgentSessionInterruptedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CConversationalAgent_CIConversationalAgentSessionInterruptedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CConversationalAgent_CIConversationalAgentSessionInterruptedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CConversationalAgent_CIConversationalAgentSessionInterruptedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CConversationalAgent_CIConversationalAgentSessionInterruptedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CConversationalAgent_CIConversationalAgentSessionInterruptedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CConversationalAgent_CIConversationalAgentSessionInterruptedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CConversationalAgent_CIConversationalAgentSessionInterruptedEventArgsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CConversationalAgent_CIConversationalAgentSessionInterruptedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CConversationalAgent_CIConversationalAgentSessionInterruptedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CConversationalAgent_CIConversationalAgentSessionInterruptedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_ConversationalAgent_IConversationalAgentSessionStatics[] = L"Windows.ApplicationModel.ConversationalAgent.IConversationalAgentSessionStatics";
typedef struct __x_ABI_CWindows_CApplicationModel_CConversationalAgent_CIConversationalAgentSessionStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CConversationalAgent_CIConversationalAgentSessionStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CConversationalAgent_CIConversationalAgentSessionStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CConversationalAgent_CIConversationalAgentSessionStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CConversationalAgent_CIConversationalAgentSessionStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CConversationalAgent_CIConversationalAgentSessionStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CConversationalAgent_CIConversationalAgentSessionStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetCurrentSessionAsync )(
        __x_ABI_CWindows_CApplicationModel_CConversationalAgent_CIConversationalAgentSessionStatics * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CConversationalAgent__CConversationalAgentSession * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *GetCurrentSessionSync )(
        __x_ABI_CWindows_CApplicationModel_CConversationalAgent_CIConversationalAgentSessionStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CConversationalAgent_CIConversationalAgentSession * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CConversationalAgent_CIConversationalAgentSessionStaticsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CConversationalAgent_CIConversationalAgentSessionStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CConversationalAgent_CIConversationalAgentSessionStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetCurrentSessionAsync(This,operation) )
    ( (This)->lpVtbl->GetCurrentSessionSync(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CConversationalAgent_CIConversationalAgentSessionStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_ConversationalAgent_IConversationalAgentSignal[] = L"Windows.ApplicationModel.ConversationalAgent.IConversationalAgentSignal";
typedef struct __x_ABI_CWindows_CApplicationModel_CConversationalAgent_CIConversationalAgentSignalVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CConversationalAgent_CIConversationalAgentSignal * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CConversationalAgent_CIConversationalAgentSignal * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CConversationalAgent_CIConversationalAgentSignal * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CConversationalAgent_CIConversationalAgentSignal * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CConversationalAgent_CIConversationalAgentSignal * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CConversationalAgent_CIConversationalAgentSignal * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsSignalVerificationRequired )(
        __x_ABI_CWindows_CApplicationModel_CConversationalAgent_CIConversationalAgentSignal * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsSignalVerificationRequired )(
        __x_ABI_CWindows_CApplicationModel_CConversationalAgent_CIConversationalAgentSignal * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SignalId )(
        __x_ABI_CWindows_CApplicationModel_CConversationalAgent_CIConversationalAgentSignal * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_SignalId )(
        __x_ABI_CWindows_CApplicationModel_CConversationalAgent_CIConversationalAgentSignal * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SignalName )(
        __x_ABI_CWindows_CApplicationModel_CConversationalAgent_CIConversationalAgentSignal * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_SignalName )(
        __x_ABI_CWindows_CApplicationModel_CConversationalAgent_CIConversationalAgentSignal * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SignalContext )(
        __x_ABI_CWindows_CApplicationModel_CConversationalAgent_CIConversationalAgentSignal * This,
                           __RPC__deref_out_opt IInspectable * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_SignalContext )(
        __x_ABI_CWindows_CApplicationModel_CConversationalAgent_CIConversationalAgentSignal * This,
                  __RPC__in_opt IInspectable * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SignalStart )(
        __x_ABI_CWindows_CApplicationModel_CConversationalAgent_CIConversationalAgentSignal * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_SignalStart )(
        __x_ABI_CWindows_CApplicationModel_CConversationalAgent_CIConversationalAgentSignal * This,
                  __x_ABI_CWindows_CFoundation_CTimeSpan value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SignalEnd )(
        __x_ABI_CWindows_CApplicationModel_CConversationalAgent_CIConversationalAgentSignal * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_SignalEnd )(
        __x_ABI_CWindows_CApplicationModel_CConversationalAgent_CIConversationalAgentSignal * This,
                  __x_ABI_CWindows_CFoundation_CTimeSpan value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CConversationalAgent_CIConversationalAgentSignalVtbl;
interface __x_ABI_CWindows_CApplicationModel_CConversationalAgent_CIConversationalAgentSignal
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CConversationalAgent_CIConversationalAgentSignalVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsSignalVerificationRequired(This,value) )
    ( (This)->lpVtbl->put_IsSignalVerificationRequired(This,value) )
    ( (This)->lpVtbl->get_SignalId(This,value) )
    ( (This)->lpVtbl->put_SignalId(This,value) )
    ( (This)->lpVtbl->get_SignalName(This,value) )
    ( (This)->lpVtbl->put_SignalName(This,value) )
    ( (This)->lpVtbl->get_SignalContext(This,value) )
    ( (This)->lpVtbl->put_SignalContext(This,value) )
    ( (This)->lpVtbl->get_SignalStart(This,value) )
    ( (This)->lpVtbl->put_SignalStart(This,value) )
    ( (This)->lpVtbl->get_SignalEnd(This,value) )
    ( (This)->lpVtbl->put_SignalEnd(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CConversationalAgent_CIConversationalAgentSignal;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_ConversationalAgent_IConversationalAgentSignalDetectedEventArgs[] = L"Windows.ApplicationModel.ConversationalAgent.IConversationalAgentSignalDetectedEventArgs";
typedef struct __x_ABI_CWindows_CApplicationModel_CConversationalAgent_CIConversationalAgentSignalDetectedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CConversationalAgent_CIConversationalAgentSignalDetectedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CConversationalAgent_CIConversationalAgentSignalDetectedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CConversationalAgent_CIConversationalAgentSignalDetectedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CConversationalAgent_CIConversationalAgentSignalDetectedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CConversationalAgent_CIConversationalAgentSignalDetectedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CConversationalAgent_CIConversationalAgentSignalDetectedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CConversationalAgent_CIConversationalAgentSignalDetectedEventArgsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CConversationalAgent_CIConversationalAgentSignalDetectedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CConversationalAgent_CIConversationalAgentSignalDetectedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CConversationalAgent_CIConversationalAgentSignalDetectedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_ConversationalAgent_IConversationalAgentSystemStateChangedEventArgs[] = L"Windows.ApplicationModel.ConversationalAgent.IConversationalAgentSystemStateChangedEventArgs";
typedef struct __x_ABI_CWindows_CApplicationModel_CConversationalAgent_CIConversationalAgentSystemStateChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CConversationalAgent_CIConversationalAgentSystemStateChangedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CConversationalAgent_CIConversationalAgentSystemStateChangedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CConversationalAgent_CIConversationalAgentSystemStateChangedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CConversationalAgent_CIConversationalAgentSystemStateChangedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CConversationalAgent_CIConversationalAgentSystemStateChangedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CConversationalAgent_CIConversationalAgentSystemStateChangedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_SystemStateChangeType )(
        __x_ABI_CWindows_CApplicationModel_CConversationalAgent_CIConversationalAgentSystemStateChangedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CConversationalAgent_CConversationalAgentSystemStateChangeType * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CConversationalAgent_CIConversationalAgentSystemStateChangedEventArgsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CConversationalAgent_CIConversationalAgentSystemStateChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CConversationalAgent_CIConversationalAgentSystemStateChangedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_SystemStateChangeType(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CConversationalAgent_CIConversationalAgentSystemStateChangedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_ConversationalAgent_ConversationalAgentSession[] = L"Windows.ApplicationModel.ConversationalAgent.ConversationalAgentSession";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_ConversationalAgent_ConversationalAgentSessionInterruptedEventArgs[] = L"Windows.ApplicationModel.ConversationalAgent.ConversationalAgentSessionInterruptedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_ConversationalAgent_ConversationalAgentSignal[] = L"Windows.ApplicationModel.ConversationalAgent.ConversationalAgentSignal";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_ConversationalAgent_ConversationalAgentSignalDetectedEventArgs[] = L"Windows.ApplicationModel.ConversationalAgent.ConversationalAgentSignalDetectedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_ConversationalAgent_ConversationalAgentSystemStateChangedEventArgs[] = L"Windows.ApplicationModel.ConversationalAgent.ConversationalAgentSystemStateChangedEventArgs";
       
       
#pragma clang diagnostic pop

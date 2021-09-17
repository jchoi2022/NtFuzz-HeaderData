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
typedef interface __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CIExtendedExecutionRevokedEventArgs __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CIExtendedExecutionRevokedEventArgs;
typedef interface __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CIExtendedExecutionSession __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CIExtendedExecutionSession;
enum __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CExtendedExecutionResult;
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CExtendedExecution__CExtendedExecutionResult __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CExtendedExecution__CExtendedExecutionResult;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CExtendedExecution__CExtendedExecutionResult;
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CExtendedExecution__CExtendedExecutionResult __FIAsyncOperation_1_Windows__CApplicationModel__CExtendedExecution__CExtendedExecutionResult;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CExtendedExecution__CExtendedExecutionResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CExtendedExecution__CExtendedExecutionResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CExtendedExecution__CExtendedExecutionResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CExtendedExecution__CExtendedExecutionResult * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CExtendedExecution__CExtendedExecutionResult * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CApplicationModel__CExtendedExecution__CExtendedExecutionResult *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CExtendedExecution__CExtendedExecutionResultVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CExtendedExecution__CExtendedExecutionResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CExtendedExecution__CExtendedExecutionResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CExtendedExecution__CExtendedExecutionResult __FIAsyncOperation_1_Windows__CApplicationModel__CExtendedExecution__CExtendedExecutionResult;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CApplicationModel__CExtendedExecution__CExtendedExecutionResult;
typedef struct __FIAsyncOperation_1_Windows__CApplicationModel__CExtendedExecution__CExtendedExecutionResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CExtendedExecution__CExtendedExecutionResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CExtendedExecution__CExtendedExecutionResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CExtendedExecution__CExtendedExecutionResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CExtendedExecution__CExtendedExecutionResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CExtendedExecution__CExtendedExecutionResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CExtendedExecution__CExtendedExecutionResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CExtendedExecution__CExtendedExecutionResult * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CExtendedExecution__CExtendedExecutionResult *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CExtendedExecution__CExtendedExecutionResult * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CExtendedExecution__CExtendedExecutionResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CExtendedExecution__CExtendedExecutionResult * This, __RPC__out enum __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CExtendedExecutionResult *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CApplicationModel__CExtendedExecution__CExtendedExecutionResultVtbl;
interface __FIAsyncOperation_1_Windows__CApplicationModel__CExtendedExecution__CExtendedExecutionResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CApplicationModel__CExtendedExecution__CExtendedExecutionResultVtbl *lpVtbl;
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
typedef interface __FITypedEventHandler_2_IInspectable_Windows__CApplicationModel__CExtendedExecution__CExtendedExecutionRevokedEventArgs __FITypedEventHandler_2_IInspectable_Windows__CApplicationModel__CExtendedExecution__CExtendedExecutionRevokedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_IInspectable_Windows__CApplicationModel__CExtendedExecution__CExtendedExecutionRevokedEventArgs;
typedef struct __FITypedEventHandler_2_IInspectable_Windows__CApplicationModel__CExtendedExecution__CExtendedExecutionRevokedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_IInspectable_Windows__CApplicationModel__CExtendedExecution__CExtendedExecutionRevokedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_IInspectable_Windows__CApplicationModel__CExtendedExecution__CExtendedExecutionRevokedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_IInspectable_Windows__CApplicationModel__CExtendedExecution__CExtendedExecutionRevokedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_IInspectable_Windows__CApplicationModel__CExtendedExecution__CExtendedExecutionRevokedEventArgs * This, __RPC__in_opt IInspectable * sender, __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CIExtendedExecutionRevokedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_IInspectable_Windows__CApplicationModel__CExtendedExecution__CExtendedExecutionRevokedEventArgsVtbl;
interface __FITypedEventHandler_2_IInspectable_Windows__CApplicationModel__CExtendedExecution__CExtendedExecutionRevokedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_IInspectable_Windows__CApplicationModel__CExtendedExecution__CExtendedExecutionRevokedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __x_ABI_CWindows_CFoundation_CIClosable __x_ABI_CWindows_CFoundation_CIClosable;
typedef enum __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CExtendedExecutionReason __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CExtendedExecutionReason;
typedef enum __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CExtendedExecutionResult __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CExtendedExecutionResult;
typedef enum __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CExtendedExecutionRevokedReason __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CExtendedExecutionRevokedReason;
enum __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CExtendedExecutionReason
{
    ExtendedExecutionReason_Unspecified = 0,
    ExtendedExecutionReason_LocationTracking = 1,
    ExtendedExecutionReason_SavingData = 2,
};
enum __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CExtendedExecutionResult
{
    ExtendedExecutionResult_Allowed = 0,
    ExtendedExecutionResult_Denied = 1,
};
enum __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CExtendedExecutionRevokedReason
{
    ExtendedExecutionRevokedReason_Resumed = 0,
    ExtendedExecutionRevokedReason_SystemPolicy = 1,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_ExtendedExecution_IExtendedExecutionRevokedEventArgs[] = L"Windows.ApplicationModel.ExtendedExecution.IExtendedExecutionRevokedEventArgs";
typedef struct __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CIExtendedExecutionRevokedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CIExtendedExecutionRevokedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CIExtendedExecutionRevokedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CIExtendedExecutionRevokedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CIExtendedExecutionRevokedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CIExtendedExecutionRevokedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CIExtendedExecutionRevokedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Reason )(
        __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CIExtendedExecutionRevokedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CExtendedExecutionRevokedReason * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CIExtendedExecutionRevokedEventArgsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CIExtendedExecutionRevokedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CIExtendedExecutionRevokedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Reason(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CExtendedExecution_CIExtendedExecutionRevokedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_ExtendedExecution_IExtendedExecutionSession[] = L"Windows.ApplicationModel.ExtendedExecution.IExtendedExecutionSession";
typedef struct __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CIExtendedExecutionSessionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CIExtendedExecutionSession * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CIExtendedExecutionSession * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CIExtendedExecutionSession * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CIExtendedExecutionSession * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CIExtendedExecutionSession * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CIExtendedExecutionSession * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Reason )(
        __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CIExtendedExecutionSession * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CExtendedExecutionReason * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Reason )(
        __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CIExtendedExecutionSession * This,
                  __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CExtendedExecutionReason value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Description )(
        __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CIExtendedExecutionSession * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Description )(
        __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CIExtendedExecutionSession * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PercentProgress )(
        __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CIExtendedExecutionSession * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_PercentProgress )(
        __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CIExtendedExecutionSession * This,
                  UINT32 value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_Revoked )(
        __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CIExtendedExecutionSession * This,
                  __RPC__in_opt __FITypedEventHandler_2_IInspectable_Windows__CApplicationModel__CExtendedExecution__CExtendedExecutionRevokedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Revoked )(
        __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CIExtendedExecutionSession * This,
                  EventRegistrationToken token
        );
    HRESULT ( STDMETHODCALLTYPE *RequestExtensionAsync )(
        __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CIExtendedExecutionSession * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CExtendedExecution__CExtendedExecutionResult * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CIExtendedExecutionSessionVtbl;
interface __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CIExtendedExecutionSession
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CIExtendedExecutionSessionVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Reason(This,value) )
    ( (This)->lpVtbl->put_Reason(This,value) )
    ( (This)->lpVtbl->get_Description(This,value) )
    ( (This)->lpVtbl->put_Description(This,value) )
    ( (This)->lpVtbl->get_PercentProgress(This,value) )
    ( (This)->lpVtbl->put_PercentProgress(This,value) )
    ( (This)->lpVtbl->add_Revoked(This,handler,token) )
    ( (This)->lpVtbl->remove_Revoked(This,token) )
    ( (This)->lpVtbl->RequestExtensionAsync(This,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CExtendedExecution_CIExtendedExecutionSession;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_ExtendedExecution_ExtendedExecutionRevokedEventArgs[] = L"Windows.ApplicationModel.ExtendedExecution.ExtendedExecutionRevokedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_ExtendedExecution_ExtendedExecutionSession[] = L"Windows.ApplicationModel.ExtendedExecution.ExtendedExecutionSession";
       
       
#pragma clang diagnostic pop

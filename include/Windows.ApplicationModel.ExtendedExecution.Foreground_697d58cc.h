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
typedef interface __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CForeground_CIExtendedExecutionForegroundRevokedEventArgs __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CForeground_CIExtendedExecutionForegroundRevokedEventArgs;
typedef interface __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CForeground_CIExtendedExecutionForegroundSession __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CForeground_CIExtendedExecutionForegroundSession;
enum __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CForeground_CExtendedExecutionForegroundResult;
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundResult __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundResult;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundResult;
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundResult __FIAsyncOperation_1_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundResult;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundResult * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundResult * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundResult *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundResultVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundResult __FIAsyncOperation_1_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundResult;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundResult;
typedef struct __FIAsyncOperation_1_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundResult * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundResult *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundResult * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundResult * This, __RPC__out enum __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CForeground_CExtendedExecutionForegroundResult *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundResultVtbl;
interface __FIAsyncOperation_1_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundResultVtbl *lpVtbl;
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
typedef interface __FITypedEventHandler_2_IInspectable_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundRevokedEventArgs __FITypedEventHandler_2_IInspectable_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundRevokedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_IInspectable_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundRevokedEventArgs;
typedef struct __FITypedEventHandler_2_IInspectable_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundRevokedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_IInspectable_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundRevokedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_IInspectable_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundRevokedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_IInspectable_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundRevokedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_IInspectable_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundRevokedEventArgs * This, __RPC__in_opt IInspectable * sender, __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CForeground_CIExtendedExecutionForegroundRevokedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_IInspectable_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundRevokedEventArgsVtbl;
interface __FITypedEventHandler_2_IInspectable_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundRevokedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_IInspectable_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundRevokedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __x_ABI_CWindows_CFoundation_CIClosable __x_ABI_CWindows_CFoundation_CIClosable;
typedef enum __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CForeground_CExtendedExecutionForegroundReason __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CForeground_CExtendedExecutionForegroundReason;
typedef enum __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CForeground_CExtendedExecutionForegroundResult __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CForeground_CExtendedExecutionForegroundResult;
typedef enum __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CForeground_CExtendedExecutionForegroundRevokedReason __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CForeground_CExtendedExecutionForegroundRevokedReason;
enum __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CForeground_CExtendedExecutionForegroundReason
{
    ExtendedExecutionForegroundReason_Unspecified = 0,
    ExtendedExecutionForegroundReason_SavingData = 1,
    ExtendedExecutionForegroundReason_BackgroundAudio = 2,
    ExtendedExecutionForegroundReason_Unconstrained = 3,
};
enum __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CForeground_CExtendedExecutionForegroundResult
{
    ExtendedExecutionForegroundResult_Allowed = 0,
    ExtendedExecutionForegroundResult_Denied = 1,
};
enum __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CForeground_CExtendedExecutionForegroundRevokedReason
{
    ExtendedExecutionForegroundRevokedReason_Resumed = 0,
    ExtendedExecutionForegroundRevokedReason_SystemPolicy = 1,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_ExtendedExecution_Foreground_IExtendedExecutionForegroundRevokedEventArgs[] = L"Windows.ApplicationModel.ExtendedExecution.Foreground.IExtendedExecutionForegroundRevokedEventArgs";
typedef struct __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CForeground_CIExtendedExecutionForegroundRevokedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CForeground_CIExtendedExecutionForegroundRevokedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CForeground_CIExtendedExecutionForegroundRevokedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CForeground_CIExtendedExecutionForegroundRevokedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CForeground_CIExtendedExecutionForegroundRevokedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CForeground_CIExtendedExecutionForegroundRevokedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CForeground_CIExtendedExecutionForegroundRevokedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Reason )(
        __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CForeground_CIExtendedExecutionForegroundRevokedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CForeground_CExtendedExecutionForegroundRevokedReason * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CForeground_CIExtendedExecutionForegroundRevokedEventArgsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CForeground_CIExtendedExecutionForegroundRevokedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CForeground_CIExtendedExecutionForegroundRevokedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Reason(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CExtendedExecution_CForeground_CIExtendedExecutionForegroundRevokedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_ExtendedExecution_Foreground_IExtendedExecutionForegroundSession[] = L"Windows.ApplicationModel.ExtendedExecution.Foreground.IExtendedExecutionForegroundSession";
typedef struct __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CForeground_CIExtendedExecutionForegroundSessionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CForeground_CIExtendedExecutionForegroundSession * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CForeground_CIExtendedExecutionForegroundSession * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CForeground_CIExtendedExecutionForegroundSession * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CForeground_CIExtendedExecutionForegroundSession * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CForeground_CIExtendedExecutionForegroundSession * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CForeground_CIExtendedExecutionForegroundSession * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Description )(
        __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CForeground_CIExtendedExecutionForegroundSession * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Description )(
        __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CForeground_CIExtendedExecutionForegroundSession * This,
                  __RPC__in HSTRING value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_Revoked )(
        __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CForeground_CIExtendedExecutionForegroundSession * This,
                  __RPC__in_opt __FITypedEventHandler_2_IInspectable_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundRevokedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Revoked )(
        __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CForeground_CIExtendedExecutionForegroundSession * This,
                  EventRegistrationToken token
        );
    HRESULT ( STDMETHODCALLTYPE *RequestExtensionAsync )(
        __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CForeground_CIExtendedExecutionForegroundSession * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundResult * * operation
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Reason )(
        __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CForeground_CIExtendedExecutionForegroundSession * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CForeground_CExtendedExecutionForegroundReason * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Reason )(
        __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CForeground_CIExtendedExecutionForegroundSession * This,
                  __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CForeground_CExtendedExecutionForegroundReason value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CForeground_CIExtendedExecutionForegroundSessionVtbl;
interface __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CForeground_CIExtendedExecutionForegroundSession
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CForeground_CIExtendedExecutionForegroundSessionVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Description(This,value) )
    ( (This)->lpVtbl->put_Description(This,value) )
    ( (This)->lpVtbl->add_Revoked(This,handler,token) )
    ( (This)->lpVtbl->remove_Revoked(This,token) )
    ( (This)->lpVtbl->RequestExtensionAsync(This,operation) )
    ( (This)->lpVtbl->get_Reason(This,value) )
    ( (This)->lpVtbl->put_Reason(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CExtendedExecution_CForeground_CIExtendedExecutionForegroundSession;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_ExtendedExecution_Foreground_ExtendedExecutionForegroundRevokedEventArgs[] = L"Windows.ApplicationModel.ExtendedExecution.Foreground.ExtendedExecutionForegroundRevokedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_ExtendedExecution_Foreground_ExtendedExecutionForegroundSession[] = L"Windows.ApplicationModel.ExtendedExecution.Foreground.ExtendedExecutionForegroundSession";
       
       
#pragma clang diagnostic pop

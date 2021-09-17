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
#include "Windows.System.Threading.h"
typedef interface __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalHandler __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalHandler;
typedef interface __x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItem __x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItem;
typedef interface __x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItemFactory __x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItemFactory;
typedef interface __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifier __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifier;
typedef interface __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifierStatics __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifierStatics;
typedef interface __x_ABI_CWindows_CFoundation_CIAsyncAction __x_ABI_CWindows_CFoundation_CIAsyncAction;
typedef struct __x_ABI_CWindows_CFoundation_CTimeSpan __x_ABI_CWindows_CFoundation_CTimeSpan;
typedef interface __x_ABI_CWindows_CSystem_CThreading_CIWorkItemHandler __x_ABI_CWindows_CSystem_CThreading_CIWorkItemHandler;
typedef enum __x_ABI_CWindows_CSystem_CThreading_CWorkItemOptions __x_ABI_CWindows_CSystem_CThreading_CWorkItemOptions;
typedef enum __x_ABI_CWindows_CSystem_CThreading_CWorkItemPriority __x_ABI_CWindows_CSystem_CThreading_CWorkItemPriority;
typedef struct __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalHandler * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject);
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalHandler * This);
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalHandler * This,
                  __RPC__in_opt __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifier * signalNotifier,
                  boolean timedOut
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalHandlerVtbl;
interface __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalHandlerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
    ( (This)->lpVtbl->Invoke(This,signalNotifier,timedOut) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CThreading_CCore_CISignalHandler;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Threading_Core_IPreallocatedWorkItem[] = L"Windows.System.Threading.Core.IPreallocatedWorkItem";
typedef struct __x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItemVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItem * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItem * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItem * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItem * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItem * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItem * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *RunAsync )(
        __x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItem * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItemVtbl;
interface __x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItem
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItemVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->RunAsync(This,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItem;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Threading_Core_IPreallocatedWorkItemFactory[] = L"Windows.System.Threading.Core.IPreallocatedWorkItemFactory";
typedef struct __x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItemFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItemFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItemFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItemFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItemFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItemFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItemFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateWorkItem )(
        __x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItemFactory * This,
                  __RPC__in_opt __x_ABI_CWindows_CSystem_CThreading_CIWorkItemHandler * handler,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItem * * workItem
        );
    HRESULT ( STDMETHODCALLTYPE *CreateWorkItemWithPriority )(
        __x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItemFactory * This,
                  __RPC__in_opt __x_ABI_CWindows_CSystem_CThreading_CIWorkItemHandler * handler,
                  __x_ABI_CWindows_CSystem_CThreading_CWorkItemPriority priority,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItem * * WorkItem
        );
    HRESULT ( STDMETHODCALLTYPE *CreateWorkItemWithPriorityAndOptions )(
        __x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItemFactory * This,
                  __RPC__in_opt __x_ABI_CWindows_CSystem_CThreading_CIWorkItemHandler * handler,
                  __x_ABI_CWindows_CSystem_CThreading_CWorkItemPriority priority,
                  __x_ABI_CWindows_CSystem_CThreading_CWorkItemOptions options,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItem * * WorkItem
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItemFactoryVtbl;
interface __x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItemFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItemFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateWorkItem(This,handler,workItem) )
    ( (This)->lpVtbl->CreateWorkItemWithPriority(This,handler,priority,WorkItem) )
    ( (This)->lpVtbl->CreateWorkItemWithPriorityAndOptions(This,handler,priority,options,WorkItem) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItemFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Threading_Core_ISignalNotifier[] = L"Windows.System.Threading.Core.ISignalNotifier";
typedef struct __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifierVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifier * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifier * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifier * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifier * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifier * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifier * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Enable )(
        __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifier * This
        );
    HRESULT ( STDMETHODCALLTYPE *Terminate )(
        __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifier * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifierVtbl;
interface __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifier
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifierVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Enable(This) )
    ( (This)->lpVtbl->Terminate(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifier;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Threading_Core_ISignalNotifierStatics[] = L"Windows.System.Threading.Core.ISignalNotifierStatics";
typedef struct __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifierStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifierStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifierStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifierStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifierStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifierStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifierStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *AttachToEvent )(
        __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifierStatics * This,
                  __RPC__in HSTRING name,
                  __RPC__in_opt __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalHandler * handler,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifier * * signalNotifier
        );
                    HRESULT ( STDMETHODCALLTYPE *AttachToEventWithTimeout )(
        __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifierStatics * This,
                  __RPC__in HSTRING name,
                  __RPC__in_opt __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalHandler * handler,
                  __x_ABI_CWindows_CFoundation_CTimeSpan timeout,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifier * * signalNotifier
        );
                    HRESULT ( STDMETHODCALLTYPE *AttachToSemaphore )(
        __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifierStatics * This,
                  __RPC__in HSTRING name,
                  __RPC__in_opt __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalHandler * handler,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifier * * signalNotifier
        );
                    HRESULT ( STDMETHODCALLTYPE *AttachToSemaphoreWithTimeout )(
        __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifierStatics * This,
                  __RPC__in HSTRING name,
                  __RPC__in_opt __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalHandler * handler,
                  __x_ABI_CWindows_CFoundation_CTimeSpan timeout,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifier * * signalNotifier
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifierStaticsVtbl;
interface __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifierStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifierStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->AttachToEvent(This,name,handler,signalNotifier) )
    ( (This)->lpVtbl->AttachToEventWithTimeout(This,name,handler,timeout,signalNotifier) )
    ( (This)->lpVtbl->AttachToSemaphore(This,name,handler,signalNotifier) )
    ( (This)->lpVtbl->AttachToSemaphoreWithTimeout(This,name,handler,timeout,signalNotifier) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifierStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_Threading_Core_PreallocatedWorkItem[] = L"Windows.System.Threading.Core.PreallocatedWorkItem";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_Threading_Core_SignalNotifier[] = L"Windows.System.Threading.Core.SignalNotifier";
       
       
#pragma clang diagnostic pop

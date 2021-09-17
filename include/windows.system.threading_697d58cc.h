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
typedef interface __x_ABI_CWindows_CSystem_CThreading_CITimerDestroyedHandler __x_ABI_CWindows_CSystem_CThreading_CITimerDestroyedHandler;
typedef interface __x_ABI_CWindows_CSystem_CThreading_CITimerElapsedHandler __x_ABI_CWindows_CSystem_CThreading_CITimerElapsedHandler;
typedef interface __x_ABI_CWindows_CSystem_CThreading_CIWorkItemHandler __x_ABI_CWindows_CSystem_CThreading_CIWorkItemHandler;
typedef interface __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolStatics __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolStatics;
typedef interface __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimer __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimer;
typedef interface __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimerStatics __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimerStatics;
typedef interface __x_ABI_CWindows_CFoundation_CIAsyncAction __x_ABI_CWindows_CFoundation_CIAsyncAction;
typedef struct __x_ABI_CWindows_CFoundation_CTimeSpan __x_ABI_CWindows_CFoundation_CTimeSpan;
typedef enum __x_ABI_CWindows_CSystem_CThreading_CWorkItemOptions __x_ABI_CWindows_CSystem_CThreading_CWorkItemOptions;
typedef enum __x_ABI_CWindows_CSystem_CThreading_CWorkItemPriority __x_ABI_CWindows_CSystem_CThreading_CWorkItemPriority;
enum __x_ABI_CWindows_CSystem_CThreading_CWorkItemOptions
{
    WorkItemOptions_None = 0,
    WorkItemOptions_TimeSliced = 0x1,
};
enum __x_ABI_CWindows_CSystem_CThreading_CWorkItemPriority
{
    WorkItemPriority_Low = -1,
    WorkItemPriority_Normal = 0,
    WorkItemPriority_High = 1,
};
typedef struct __x_ABI_CWindows_CSystem_CThreading_CITimerDestroyedHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CSystem_CThreading_CITimerDestroyedHandler * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject);
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CThreading_CITimerDestroyedHandler * This);
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CThreading_CITimerDestroyedHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CSystem_CThreading_CITimerDestroyedHandler * This,
                  __RPC__in_opt __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimer * timer
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CThreading_CITimerDestroyedHandlerVtbl;
interface __x_ABI_CWindows_CSystem_CThreading_CITimerDestroyedHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CThreading_CITimerDestroyedHandlerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
    ( (This)->lpVtbl->Invoke(This,timer) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CThreading_CITimerDestroyedHandler;
typedef struct __x_ABI_CWindows_CSystem_CThreading_CITimerElapsedHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CSystem_CThreading_CITimerElapsedHandler * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject);
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CThreading_CITimerElapsedHandler * This);
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CThreading_CITimerElapsedHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CSystem_CThreading_CITimerElapsedHandler * This,
                  __RPC__in_opt __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimer * timer
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CThreading_CITimerElapsedHandlerVtbl;
interface __x_ABI_CWindows_CSystem_CThreading_CITimerElapsedHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CThreading_CITimerElapsedHandlerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
    ( (This)->lpVtbl->Invoke(This,timer) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CThreading_CITimerElapsedHandler;
typedef struct __x_ABI_CWindows_CSystem_CThreading_CIWorkItemHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CSystem_CThreading_CIWorkItemHandler * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject);
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CThreading_CIWorkItemHandler * This);
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CThreading_CIWorkItemHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CSystem_CThreading_CIWorkItemHandler * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CThreading_CIWorkItemHandlerVtbl;
interface __x_ABI_CWindows_CSystem_CThreading_CIWorkItemHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CThreading_CIWorkItemHandlerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
    ( (This)->lpVtbl->Invoke(This,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CThreading_CIWorkItemHandler;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Threading_IThreadPoolStatics[] = L"Windows.System.Threading.IThreadPoolStatics";
typedef struct __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *RunAsync )(
        __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CSystem_CThreading_CIWorkItemHandler * handler,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *RunWithPriorityAsync )(
        __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CSystem_CThreading_CIWorkItemHandler * handler,
                  __x_ABI_CWindows_CSystem_CThreading_CWorkItemPriority priority,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *RunWithPriorityAndOptionsAsync )(
        __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CSystem_CThreading_CIWorkItemHandler * handler,
                  __x_ABI_CWindows_CSystem_CThreading_CWorkItemPriority priority,
                  __x_ABI_CWindows_CSystem_CThreading_CWorkItemOptions options,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolStaticsVtbl;
interface __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->RunAsync(This,handler,operation) )
    ( (This)->lpVtbl->RunWithPriorityAsync(This,handler,priority,operation) )
    ( (This)->lpVtbl->RunWithPriorityAndOptionsAsync(This,handler,priority,options,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CThreading_CIThreadPoolStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Threading_IThreadPoolTimer[] = L"Windows.System.Threading.IThreadPoolTimer";
typedef struct __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimer * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimer * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimer * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimer * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimer * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimer * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Period )(
        __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimer * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Delay )(
        __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimer * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
    HRESULT ( STDMETHODCALLTYPE *Cancel )(
        __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimer * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimerVtbl;
interface __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimer
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Period(This,value) )
    ( (This)->lpVtbl->get_Delay(This,value) )
    ( (This)->lpVtbl->Cancel(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimer;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Threading_IThreadPoolTimerStatics[] = L"Windows.System.Threading.IThreadPoolTimerStatics";
typedef struct __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimerStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimerStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimerStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimerStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimerStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimerStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *CreatePeriodicTimer )(
        __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimerStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CSystem_CThreading_CITimerElapsedHandler * handler,
                  __x_ABI_CWindows_CFoundation_CTimeSpan period,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimer * * timer
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateTimer )(
        __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimerStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CSystem_CThreading_CITimerElapsedHandler * handler,
                  __x_ABI_CWindows_CFoundation_CTimeSpan delay,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimer * * timer
        );
                    HRESULT ( STDMETHODCALLTYPE *CreatePeriodicTimerWithCompletion )(
        __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimerStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CSystem_CThreading_CITimerElapsedHandler * handler,
                  __x_ABI_CWindows_CFoundation_CTimeSpan period,
                  __RPC__in_opt __x_ABI_CWindows_CSystem_CThreading_CITimerDestroyedHandler * destroyed,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimer * * timer
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateTimerWithCompletion )(
        __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimerStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CSystem_CThreading_CITimerElapsedHandler * handler,
                  __x_ABI_CWindows_CFoundation_CTimeSpan delay,
                  __RPC__in_opt __x_ABI_CWindows_CSystem_CThreading_CITimerDestroyedHandler * destroyed,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimer * * timer
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimerStaticsVtbl;
interface __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimerStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreatePeriodicTimer(This,handler,period,timer) )
    ( (This)->lpVtbl->CreateTimer(This,handler,delay,timer) )
    ( (This)->lpVtbl->CreatePeriodicTimerWithCompletion(This,handler,period,destroyed,timer) )
    ( (This)->lpVtbl->CreateTimerWithCompletion(This,handler,delay,destroyed,timer) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimerStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_Threading_ThreadPool[] = L"Windows.System.Threading.ThreadPool";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_Threading_ThreadPoolTimer[] = L"Windows.System.Threading.ThreadPoolTimer";
       
       
#pragma clang diagnostic pop

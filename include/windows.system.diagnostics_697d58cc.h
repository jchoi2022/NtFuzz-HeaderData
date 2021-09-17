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
#include "Windows.Data.Json.h"
#include "Windows.System.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticActionResult __x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticActionResult;
typedef interface __x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticInvoker __x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticInvoker;
typedef interface __x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticInvoker2 __x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticInvoker2;
typedef interface __x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticInvokerStatics __x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticInvokerStatics;
typedef interface __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessCpuUsage __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessCpuUsage;
typedef interface __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessCpuUsageReport __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessCpuUsageReport;
typedef interface __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo;
typedef interface __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo2 __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo2;
typedef interface __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfoStatics __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfoStatics;
typedef interface __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfoStatics2 __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfoStatics2;
typedef interface __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiskUsage __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiskUsage;
typedef interface __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiskUsageReport __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiskUsageReport;
typedef interface __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessMemoryUsage __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessMemoryUsage;
typedef interface __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessMemoryUsageReport __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessMemoryUsageReport;
typedef interface __x_ABI_CWindows_CSystem_CDiagnostics_CISystemCpuUsage __x_ABI_CWindows_CSystem_CDiagnostics_CISystemCpuUsage;
typedef interface __x_ABI_CWindows_CSystem_CDiagnostics_CISystemCpuUsageReport __x_ABI_CWindows_CSystem_CDiagnostics_CISystemCpuUsageReport;
typedef interface __x_ABI_CWindows_CSystem_CDiagnostics_CISystemDiagnosticInfo __x_ABI_CWindows_CSystem_CDiagnostics_CISystemDiagnosticInfo;
typedef interface __x_ABI_CWindows_CSystem_CDiagnostics_CISystemDiagnosticInfoStatics __x_ABI_CWindows_CSystem_CDiagnostics_CISystemDiagnosticInfoStatics;
typedef interface __x_ABI_CWindows_CSystem_CDiagnostics_CISystemMemoryUsage __x_ABI_CWindows_CSystem_CDiagnostics_CISystemMemoryUsage;
typedef interface __x_ABI_CWindows_CSystem_CDiagnostics_CISystemMemoryUsageReport __x_ABI_CWindows_CSystem_CDiagnostics_CISystemMemoryUsageReport;
typedef interface __FIIterator_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo __FIIterator_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo;
EXTERN_C const IID IID___FIIterator_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo;
typedef struct __FIIterator_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo * This, __RPC__out __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfoVtbl;
interface __FIIterator_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo
{
    CONST_VTBL struct __FIIterator_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfoVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo __FIIterable_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo;
EXTERN_C const IID IID___FIIterable_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo;
typedef struct __FIIterable_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo * This, __RPC__deref_out_opt __FIIterator_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo **first);
    END_INTERFACE
} __FIIterable_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfoVtbl;
interface __FIIterable_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo
{
    CONST_VTBL struct __FIIterable_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfoVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo __FIVectorView_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo;
EXTERN_C const IID IID___FIVectorView_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo;
typedef struct __FIVectorView_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo * This,
                       __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfoVtbl;
interface __FIVectorView_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo
{
    CONST_VTBL struct __FIVectorView_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfoVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo __FIVector_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo;
EXTERN_C const IID IID___FIVector_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo;
typedef struct __FIVector_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo * This, __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo * This,
                   __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo * This, __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo * *value);
    END_INTERFACE
} __FIVector_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfoVtbl;
interface __FIVector_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo
{
    CONST_VTBL struct __FIVector_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfoVtbl *lpVtbl;
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
enum __x_ABI_CWindows_CSystem_CDiagnostics_CDiagnosticActionState;
typedef interface __FIAsyncOperationProgressHandler_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionState __FIAsyncOperationProgressHandler_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionState;
EXTERN_C const IID IID___FIAsyncOperationProgressHandler_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionState;
typedef interface __FIAsyncOperationWithProgress_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionState __FIAsyncOperationWithProgress_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionState;
typedef struct __FIAsyncOperationProgressHandler_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionStateVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionState * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionState * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionState * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionState * This, __RPC__in_opt __FIAsyncOperationWithProgress_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionState *asyncInfo, enum __x_ABI_CWindows_CSystem_CDiagnostics_CDiagnosticActionState progressInfo);
    END_INTERFACE
} __FIAsyncOperationProgressHandler_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionStateVtbl;
interface __FIAsyncOperationProgressHandler_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionState
{
    CONST_VTBL struct __FIAsyncOperationProgressHandler_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionStateVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,progressInfo) )
typedef interface __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionState __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionState;
EXTERN_C const IID IID___FIAsyncOperationWithProgressCompletedHandler_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionState;
typedef interface __FIAsyncOperationWithProgress_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionState __FIAsyncOperationWithProgress_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionState;
typedef struct __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionStateVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionState * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionState * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionState * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionState * This, __RPC__in_opt __FIAsyncOperationWithProgress_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionState *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionStateVtbl;
interface __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionState
{
    CONST_VTBL struct __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionStateVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperationWithProgress_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionState __FIAsyncOperationWithProgress_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionState;
EXTERN_C const IID IID___FIAsyncOperationWithProgress_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionState;
typedef struct __FIAsyncOperationWithProgress_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionStateVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionState * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionState * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionState * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionState * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionState * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionState * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Progress )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionState * This, __RPC__in_opt __FIAsyncOperationProgressHandler_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionState *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Progress )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionState * This, __RPC__deref_out_opt __FIAsyncOperationProgressHandler_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionState **handler);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionState * This, __RPC__in_opt __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionState *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionState * This, __RPC__deref_out_opt __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionState **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionState * This, __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticActionResult * *results);
    END_INTERFACE
} __FIAsyncOperationWithProgress_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionStateVtbl;
interface __FIAsyncOperationWithProgress_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionState
{
    CONST_VTBL struct __FIAsyncOperationWithProgress_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionStateVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> put_Progress(This,handler) )
    ( (This)->lpVtbl -> get_Progress(This,handler) )
    ( (This)->lpVtbl -> put_Completed(This,handler) )
    ( (This)->lpVtbl -> get_Completed(This,handler) )
    ( (This)->lpVtbl -> GetResults(This,results) )
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
typedef interface __FIMap_2_HSTRING_IInspectable __FIMap_2_HSTRING_IInspectable;
EXTERN_C const IID IID___FIMap_2_HSTRING_IInspectable;
typedef struct __FIMap_2_HSTRING_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMap_2_HSTRING_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMap_2_HSTRING_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMap_2_HSTRING_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMap_2_HSTRING_IInspectable * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMap_2_HSTRING_IInspectable * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMap_2_HSTRING_IInspectable * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMap_2_HSTRING_IInspectable * This,
                   HSTRING key,
                            __RPC__deref_out_opt IInspectable * **value);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMap_2_HSTRING_IInspectable * This, __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMap_2_HSTRING_IInspectable * This, HSTRING key, __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIMap_2_HSTRING_IInspectable * This, __RPC__deref_out_opt __FIMapView_2_HSTRING_IInspectable **view);
    HRESULT ( STDMETHODCALLTYPE *Insert )(__RPC__in __FIMap_2_HSTRING_IInspectable * This,
                   HSTRING key,
                   __RPC__in_opt IInspectable * *value,
                            __RPC__out boolean *replaced);
    HRESULT ( STDMETHODCALLTYPE *Remove )(__RPC__in __FIMap_2_HSTRING_IInspectable * This, HSTRING key);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIMap_2_HSTRING_IInspectable * This);
    END_INTERFACE
} __FIMap_2_HSTRING_IInspectableVtbl;
interface __FIMap_2_HSTRING_IInspectable
{
    CONST_VTBL struct __FIMap_2_HSTRING_IInspectableVtbl *lpVtbl;
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
    ( (This)->lpVtbl -> GetView(This,view) )
    ( (This)->lpVtbl -> Insert(This,key,value,replaced) )
    ( (This)->lpVtbl -> Remove(This,key) )
    ( (This)->lpVtbl -> Clear(This) )
typedef interface __FIMapChangedEventArgs_1_HSTRING __FIMapChangedEventArgs_1_HSTRING;
EXTERN_C const IID IID___FIMapChangedEventArgs_1_HSTRING;
typedef struct __FIMapChangedEventArgs_1_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMapChangedEventArgs_1_HSTRING * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMapChangedEventArgs_1_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMapChangedEventArgs_1_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMapChangedEventArgs_1_HSTRING * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMapChangedEventArgs_1_HSTRING * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMapChangedEventArgs_1_HSTRING * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_CollectionChange )(__RPC__in __FIMapChangedEventArgs_1_HSTRING * This, __RPC__out __x_ABI_CWindows_CFoundation_CCollections_CCollectionChange *value);
                    HRESULT ( STDMETHODCALLTYPE *get_Key )(__RPC__in __FIMapChangedEventArgs_1_HSTRING * This, __RPC__deref_out_opt HSTRING *value);
    END_INTERFACE
} __FIMapChangedEventArgs_1_HSTRINGVtbl;
interface __FIMapChangedEventArgs_1_HSTRING
{
    CONST_VTBL struct __FIMapChangedEventArgs_1_HSTRINGVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_CollectionChange(This,value) )
    ( (This)->lpVtbl -> get_Key(This,value) )
typedef interface __FMapChangedEventHandler_2_HSTRING_IInspectable __FMapChangedEventHandler_2_HSTRING_IInspectable;
EXTERN_C const IID IID___FMapChangedEventHandler_2_HSTRING_IInspectable;
typedef interface __FIObservableMap_2_HSTRING_IInspectable __FIObservableMap_2_HSTRING_IInspectable;
typedef interface __FIMapChangedEventArgs_1_HSTRING __FIMapChangedEventArgs_1_HSTRING;
typedef struct __FMapChangedEventHandler_2_HSTRING_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FMapChangedEventHandler_2_HSTRING_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FMapChangedEventHandler_2_HSTRING_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FMapChangedEventHandler_2_HSTRING_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FMapChangedEventHandler_2_HSTRING_IInspectable * This,
                   __RPC__in_opt __FIObservableMap_2_HSTRING_IInspectable *sender,
                   __RPC__in_opt __FIMapChangedEventArgs_1_HSTRING *e);
    END_INTERFACE
} __FMapChangedEventHandler_2_HSTRING_IInspectableVtbl;
interface __FMapChangedEventHandler_2_HSTRING_IInspectable
{
    CONST_VTBL struct __FMapChangedEventHandler_2_HSTRING_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FIObservableMap_2_HSTRING_IInspectable __FIObservableMap_2_HSTRING_IInspectable;
EXTERN_C const IID IID___FIObservableMap_2_HSTRING_IInspectable;
typedef struct __FIObservableMap_2_HSTRING_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIObservableMap_2_HSTRING_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIObservableMap_2_HSTRING_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIObservableMap_2_HSTRING_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIObservableMap_2_HSTRING_IInspectable * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIObservableMap_2_HSTRING_IInspectable * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIObservableMap_2_HSTRING_IInspectable * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *add_MapChanged )(__RPC__in __FIObservableMap_2_HSTRING_IInspectable * This,
                   __RPC__in_opt __FMapChangedEventHandler_2_HSTRING_IInspectable *handler,
                            __RPC__out EventRegistrationToken *token);
    HRESULT ( STDMETHODCALLTYPE *remove_MapChanged )(__RPC__in __FIObservableMap_2_HSTRING_IInspectable * This,
                   EventRegistrationToken token);
    END_INTERFACE
} __FIObservableMap_2_HSTRING_IInspectableVtbl;
interface __FIObservableMap_2_HSTRING_IInspectable
{
    CONST_VTBL struct __FIObservableMap_2_HSTRING_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> add_MapChanged(This,handler,token) )
    ( (This)->lpVtbl -> remove_MapChanged(This,token) )
typedef interface __x_ABI_CWindows_CData_CJson_CIJsonValue __x_ABI_CWindows_CData_CJson_CIJsonValue;
typedef interface __FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue __FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue;
EXTERN_C const IID IID___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue;
typedef struct __FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValueVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue * This,
                        __RPC__out ULONG *iidCount,
                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Key )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue * This, __RPC__out HSTRING *key);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue * This, __RPC__deref_out_opt __x_ABI_CWindows_CData_CJson_CIJsonValue * *value);
    END_INTERFACE
} __FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValueVtbl;
interface __FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue
{
    CONST_VTBL struct __FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValueVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Key(This,key) )
    ( (This)->lpVtbl -> get_Value(This,value) )
typedef interface __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue;
EXTERN_C const IID IID___FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue;
typedef struct __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValueVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue * This, __RPC__out __FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValueVtbl;
interface __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue
{
    CONST_VTBL struct __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValueVtbl *lpVtbl;
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
typedef interface __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue;
EXTERN_C const IID IID___FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue;
typedef struct __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValueVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue * This, __RPC__deref_out_opt __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue **first);
    END_INTERFACE
} __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValueVtbl;
interface __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue
{
    CONST_VTBL struct __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValueVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIMapView_2_HSTRING_Windows__CData__CJson__CIJsonValue __FIMapView_2_HSTRING_Windows__CData__CJson__CIJsonValue;
EXTERN_C const IID IID___FIMapView_2_HSTRING_Windows__CData__CJson__CIJsonValue;
typedef struct __FIMapView_2_HSTRING_Windows__CData__CJson__CIJsonValueVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMapView_2_HSTRING_Windows__CData__CJson__CIJsonValue * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMapView_2_HSTRING_Windows__CData__CJson__CIJsonValue * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMapView_2_HSTRING_Windows__CData__CJson__CIJsonValue * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMapView_2_HSTRING_Windows__CData__CJson__CIJsonValue * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMapView_2_HSTRING_Windows__CData__CJson__CIJsonValue * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMapView_2_HSTRING_Windows__CData__CJson__CIJsonValue * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMapView_2_HSTRING_Windows__CData__CJson__CIJsonValue * This,
                   __RPC__in HSTRING key,
                            __RPC__deref_out_opt __x_ABI_CWindows_CData_CJson_CIJsonValue * *value);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMapView_2_HSTRING_Windows__CData__CJson__CIJsonValue * This, __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMapView_2_HSTRING_Windows__CData__CJson__CIJsonValue * This, __RPC__in HSTRING key, __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *Split )(__RPC__in __FIMapView_2_HSTRING_Windows__CData__CJson__CIJsonValue * This, __RPC__deref_out_opt __FIMapView_2_HSTRING_Windows__CData__CJson__CIJsonValue **firstPartition,
                    __RPC__deref_out_opt __FIMapView_2_HSTRING_Windows__CData__CJson__CIJsonValue **secondPartition);
    END_INTERFACE
} __FIMapView_2_HSTRING_Windows__CData__CJson__CIJsonValueVtbl;
interface __FIMapView_2_HSTRING_Windows__CData__CJson__CIJsonValue
{
    CONST_VTBL struct __FIMapView_2_HSTRING_Windows__CData__CJson__CIJsonValueVtbl *lpVtbl;
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
typedef interface __FIMap_2_HSTRING_Windows__CData__CJson__CIJsonValue __FIMap_2_HSTRING_Windows__CData__CJson__CIJsonValue;
EXTERN_C const IID IID___FIMap_2_HSTRING_Windows__CData__CJson__CIJsonValue;
typedef struct __FIMap_2_HSTRING_Windows__CData__CJson__CIJsonValueVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMap_2_HSTRING_Windows__CData__CJson__CIJsonValue * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMap_2_HSTRING_Windows__CData__CJson__CIJsonValue * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMap_2_HSTRING_Windows__CData__CJson__CIJsonValue * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMap_2_HSTRING_Windows__CData__CJson__CIJsonValue * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMap_2_HSTRING_Windows__CData__CJson__CIJsonValue * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMap_2_HSTRING_Windows__CData__CJson__CIJsonValue * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMap_2_HSTRING_Windows__CData__CJson__CIJsonValue * This,
                   HSTRING key,
                            __RPC__deref_out_opt __x_ABI_CWindows_CData_CJson_CIJsonValue * **value);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMap_2_HSTRING_Windows__CData__CJson__CIJsonValue * This, __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMap_2_HSTRING_Windows__CData__CJson__CIJsonValue * This, HSTRING key, __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIMap_2_HSTRING_Windows__CData__CJson__CIJsonValue * This, __RPC__deref_out_opt __FIMapView_2_HSTRING_Windows__CData__CJson__CIJsonValue **view);
    HRESULT ( STDMETHODCALLTYPE *Insert )(__RPC__in __FIMap_2_HSTRING_Windows__CData__CJson__CIJsonValue * This,
                   HSTRING key,
                   __RPC__in_opt __x_ABI_CWindows_CData_CJson_CIJsonValue * *value,
                            __RPC__out boolean *replaced);
    HRESULT ( STDMETHODCALLTYPE *Remove )(__RPC__in __FIMap_2_HSTRING_Windows__CData__CJson__CIJsonValue * This, HSTRING key);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIMap_2_HSTRING_Windows__CData__CJson__CIJsonValue * This);
    END_INTERFACE
} __FIMap_2_HSTRING_Windows__CData__CJson__CIJsonValueVtbl;
interface __FIMap_2_HSTRING_Windows__CData__CJson__CIJsonValue
{
    CONST_VTBL struct __FIMap_2_HSTRING_Windows__CData__CJson__CIJsonValueVtbl *lpVtbl;
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
    ( (This)->lpVtbl -> GetView(This,view) )
    ( (This)->lpVtbl -> Insert(This,key,value,replaced) )
    ( (This)->lpVtbl -> Remove(This,key) )
    ( (This)->lpVtbl -> Clear(This) )
typedef interface __x_ABI_CWindows_CSystem_CIAppDiagnosticInfo __x_ABI_CWindows_CSystem_CIAppDiagnosticInfo;
typedef interface __FIIterator_1_Windows__CSystem__CAppDiagnosticInfo __FIIterator_1_Windows__CSystem__CAppDiagnosticInfo;
EXTERN_C const IID IID___FIIterator_1_Windows__CSystem__CAppDiagnosticInfo;
typedef struct __FIIterator_1_Windows__CSystem__CAppDiagnosticInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CSystem__CAppDiagnosticInfo * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CSystem__CAppDiagnosticInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CSystem__CAppDiagnosticInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CSystem__CAppDiagnosticInfo * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CSystem__CAppDiagnosticInfo * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CSystem__CAppDiagnosticInfo * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CSystem__CAppDiagnosticInfo * This, __RPC__out __x_ABI_CWindows_CSystem_CIAppDiagnosticInfo * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CSystem__CAppDiagnosticInfo * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CSystem__CAppDiagnosticInfo * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CSystem__CAppDiagnosticInfo * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CSystem_CIAppDiagnosticInfo * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CSystem__CAppDiagnosticInfoVtbl;
interface __FIIterator_1_Windows__CSystem__CAppDiagnosticInfo
{
    CONST_VTBL struct __FIIterator_1_Windows__CSystem__CAppDiagnosticInfoVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CSystem__CAppDiagnosticInfo __FIIterable_1_Windows__CSystem__CAppDiagnosticInfo;
EXTERN_C const IID IID___FIIterable_1_Windows__CSystem__CAppDiagnosticInfo;
typedef struct __FIIterable_1_Windows__CSystem__CAppDiagnosticInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CSystem__CAppDiagnosticInfo * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CSystem__CAppDiagnosticInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CSystem__CAppDiagnosticInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CSystem__CAppDiagnosticInfo * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CSystem__CAppDiagnosticInfo * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CSystem__CAppDiagnosticInfo * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CSystem__CAppDiagnosticInfo * This, __RPC__deref_out_opt __FIIterator_1_Windows__CSystem__CAppDiagnosticInfo **first);
    END_INTERFACE
} __FIIterable_1_Windows__CSystem__CAppDiagnosticInfoVtbl;
interface __FIIterable_1_Windows__CSystem__CAppDiagnosticInfo
{
    CONST_VTBL struct __FIIterable_1_Windows__CSystem__CAppDiagnosticInfoVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CSystem__CAppDiagnosticInfo __FIVectorView_1_Windows__CSystem__CAppDiagnosticInfo;
EXTERN_C const IID IID___FIVectorView_1_Windows__CSystem__CAppDiagnosticInfo;
typedef struct __FIVectorView_1_Windows__CSystem__CAppDiagnosticInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CSystem__CAppDiagnosticInfo * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CSystem__CAppDiagnosticInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CSystem__CAppDiagnosticInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CSystem__CAppDiagnosticInfo * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CSystem__CAppDiagnosticInfo * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CSystem__CAppDiagnosticInfo * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CSystem__CAppDiagnosticInfo * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CSystem_CIAppDiagnosticInfo * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CSystem__CAppDiagnosticInfo * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CSystem__CAppDiagnosticInfo * This,
                       __x_ABI_CWindows_CSystem_CIAppDiagnosticInfo * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CSystem__CAppDiagnosticInfo * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CSystem_CIAppDiagnosticInfo * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CSystem__CAppDiagnosticInfoVtbl;
interface __FIVectorView_1_Windows__CSystem__CAppDiagnosticInfo
{
    CONST_VTBL struct __FIVectorView_1_Windows__CSystem__CAppDiagnosticInfoVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CSystem__CAppDiagnosticInfo __FIVector_1_Windows__CSystem__CAppDiagnosticInfo;
EXTERN_C const IID IID___FIVector_1_Windows__CSystem__CAppDiagnosticInfo;
typedef struct __FIVector_1_Windows__CSystem__CAppDiagnosticInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CSystem__CAppDiagnosticInfo * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CSystem__CAppDiagnosticInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CSystem__CAppDiagnosticInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CSystem__CAppDiagnosticInfo * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CSystem__CAppDiagnosticInfo * This, __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CIAppDiagnosticInfo * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CSystem__CAppDiagnosticInfo * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CSystem__CAppDiagnosticInfo * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CIAppDiagnosticInfo * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CSystem__CAppDiagnosticInfo * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CSystem__CAppDiagnosticInfo * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CSystem__CAppDiagnosticInfo **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CSystem__CAppDiagnosticInfo * This,
                   __RPC__in __x_ABI_CWindows_CSystem_CIAppDiagnosticInfo * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CSystem__CAppDiagnosticInfo * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CSystem_CIAppDiagnosticInfo * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CSystem__CAppDiagnosticInfo * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CSystem_CIAppDiagnosticInfo * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CSystem__CAppDiagnosticInfo * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CSystem__CAppDiagnosticInfo * This, __RPC__in __x_ABI_CWindows_CSystem_CIAppDiagnosticInfo * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CSystem__CAppDiagnosticInfo * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CSystem__CAppDiagnosticInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CSystem__CAppDiagnosticInfo * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CSystem_CIAppDiagnosticInfo * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CSystem__CAppDiagnosticInfo * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CSystem_CIAppDiagnosticInfo * *value);
    END_INTERFACE
} __FIVector_1_Windows__CSystem__CAppDiagnosticInfoVtbl;
interface __FIVector_1_Windows__CSystem__CAppDiagnosticInfo
{
    CONST_VTBL struct __FIVector_1_Windows__CSystem__CAppDiagnosticInfoVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CData_CJson_CIJsonObject __x_ABI_CWindows_CData_CJson_CIJsonObject;
typedef interface __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet;
typedef struct __x_ABI_CWindows_CFoundation_CDateTime __x_ABI_CWindows_CFoundation_CDateTime;
typedef struct __x_ABI_CWindows_CFoundation_CTimeSpan __x_ABI_CWindows_CFoundation_CTimeSpan;
typedef interface __x_ABI_CWindows_CSystem_CIUser __x_ABI_CWindows_CSystem_CIUser;
typedef enum __x_ABI_CWindows_CSystem_CDiagnostics_CDiagnosticActionState __x_ABI_CWindows_CSystem_CDiagnostics_CDiagnosticActionState;
enum __x_ABI_CWindows_CSystem_CDiagnostics_CDiagnosticActionState
{
    DiagnosticActionState_Initializing = 0,
    DiagnosticActionState_Downloading = 1,
    DiagnosticActionState_VerifyingTrust = 2,
    DiagnosticActionState_Detecting = 3,
    DiagnosticActionState_Resolving = 4,
    DiagnosticActionState_VerifyingResolution = 5,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Diagnostics_IDiagnosticActionResult[] = L"Windows.System.Diagnostics.IDiagnosticActionResult";
typedef struct __x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticActionResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticActionResult * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticActionResult * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticActionResult * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticActionResult * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticActionResult * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticActionResult * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ExtendedError )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticActionResult * This,
                           __RPC__out HRESULT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Results )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticActionResult * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticActionResultVtbl;
interface __x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticActionResult
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticActionResultVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ExtendedError(This,value) )
    ( (This)->lpVtbl->get_Results(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticActionResult;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Diagnostics_IDiagnosticInvoker[] = L"Windows.System.Diagnostics.IDiagnosticInvoker";
typedef struct __x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticInvokerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticInvoker * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticInvoker * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticInvoker * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticInvoker * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticInvoker * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticInvoker * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *RunDiagnosticActionAsync )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticInvoker * This,
                  __RPC__in_opt __x_ABI_CWindows_CData_CJson_CIJsonObject * context,
                           __RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionState * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticInvokerVtbl;
interface __x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticInvoker
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticInvokerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->RunDiagnosticActionAsync(This,context,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticInvoker;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Diagnostics_IDiagnosticInvoker2[] = L"Windows.System.Diagnostics.IDiagnosticInvoker2";
typedef struct __x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticInvoker2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticInvoker2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticInvoker2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticInvoker2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticInvoker2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticInvoker2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticInvoker2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *RunDiagnosticActionFromStringAsync )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticInvoker2 * This,
                  __RPC__in HSTRING context,
                           __RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionState * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticInvoker2Vtbl;
interface __x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticInvoker2
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticInvoker2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->RunDiagnosticActionFromStringAsync(This,context,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticInvoker2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Diagnostics_IDiagnosticInvokerStatics[] = L"Windows.System.Diagnostics.IDiagnosticInvokerStatics";
typedef struct __x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticInvokerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticInvokerStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticInvokerStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticInvokerStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticInvokerStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticInvokerStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticInvokerStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetDefault )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticInvokerStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticInvoker * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetForUser )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticInvokerStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CSystem_CIUser * user,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticInvoker * * result
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsSupported )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticInvokerStatics * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticInvokerStaticsVtbl;
interface __x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticInvokerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticInvokerStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetDefault(This,result) )
    ( (This)->lpVtbl->GetForUser(This,user,result) )
    ( (This)->lpVtbl->get_IsSupported(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticInvokerStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Diagnostics_IProcessCpuUsage[] = L"Windows.System.Diagnostics.IProcessCpuUsage";
typedef struct __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessCpuUsageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessCpuUsage * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessCpuUsage * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessCpuUsage * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessCpuUsage * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessCpuUsage * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessCpuUsage * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetReport )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessCpuUsage * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessCpuUsageReport * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessCpuUsageVtbl;
interface __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessCpuUsage
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessCpuUsageVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetReport(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CDiagnostics_CIProcessCpuUsage;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Diagnostics_IProcessCpuUsageReport[] = L"Windows.System.Diagnostics.IProcessCpuUsageReport";
typedef struct __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessCpuUsageReportVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessCpuUsageReport * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessCpuUsageReport * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessCpuUsageReport * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessCpuUsageReport * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessCpuUsageReport * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessCpuUsageReport * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_KernelTime )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessCpuUsageReport * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_UserTime )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessCpuUsageReport * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessCpuUsageReportVtbl;
interface __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessCpuUsageReport
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessCpuUsageReportVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_KernelTime(This,value) )
    ( (This)->lpVtbl->get_UserTime(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CDiagnostics_CIProcessCpuUsageReport;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Diagnostics_IProcessDiagnosticInfo[] = L"Windows.System.Diagnostics.IProcessDiagnosticInfo";
typedef struct __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ProcessId )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ExecutableFileName )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Parent )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ProcessStartTime )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DiskUsage )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiskUsage * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MemoryUsage )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessMemoryUsage * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CpuUsage )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessCpuUsage * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfoVtbl;
interface __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfoVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ProcessId(This,value) )
    ( (This)->lpVtbl->get_ExecutableFileName(This,value) )
    ( (This)->lpVtbl->get_Parent(This,value) )
    ( (This)->lpVtbl->get_ProcessStartTime(This,value) )
    ( (This)->lpVtbl->get_DiskUsage(This,value) )
    ( (This)->lpVtbl->get_MemoryUsage(This,value) )
    ( (This)->lpVtbl->get_CpuUsage(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Diagnostics_IProcessDiagnosticInfo2[] = L"Windows.System.Diagnostics.IProcessDiagnosticInfo2";
typedef struct __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetAppDiagnosticInfos )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo2 * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CSystem__CAppDiagnosticInfo * * result
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsPackaged )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo2 * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo2Vtbl;
interface __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo2
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetAppDiagnosticInfos(This,result) )
    ( (This)->lpVtbl->get_IsPackaged(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Diagnostics_IProcessDiagnosticInfoStatics[] = L"Windows.System.Diagnostics.IProcessDiagnosticInfoStatics";
typedef struct __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfoStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfoStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfoStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfoStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfoStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfoStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfoStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetForProcesses )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfoStatics * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo * * processes
        );
    HRESULT ( STDMETHODCALLTYPE *GetForCurrentProcess )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfoStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo * * processes
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfoStaticsVtbl;
interface __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfoStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfoStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetForProcesses(This,processes) )
    ( (This)->lpVtbl->GetForCurrentProcess(This,processes) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfoStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Diagnostics_IProcessDiagnosticInfoStatics2[] = L"Windows.System.Diagnostics.IProcessDiagnosticInfoStatics2";
typedef struct __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfoStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfoStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfoStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfoStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfoStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfoStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfoStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *TryGetForProcessId )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfoStatics2 * This,
                  UINT32 processId,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfoStatics2Vtbl;
interface __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfoStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfoStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->TryGetForProcessId(This,processId,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfoStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Diagnostics_IProcessDiskUsage[] = L"Windows.System.Diagnostics.IProcessDiskUsage";
typedef struct __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiskUsageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiskUsage * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiskUsage * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiskUsage * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiskUsage * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiskUsage * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiskUsage * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetReport )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiskUsage * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiskUsageReport * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiskUsageVtbl;
interface __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiskUsage
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiskUsageVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetReport(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiskUsage;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Diagnostics_IProcessDiskUsageReport[] = L"Windows.System.Diagnostics.IProcessDiskUsageReport";
typedef struct __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiskUsageReportVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiskUsageReport * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiskUsageReport * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiskUsageReport * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiskUsageReport * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiskUsageReport * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiskUsageReport * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ReadOperationCount )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiskUsageReport * This,
                           __RPC__out INT64 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_WriteOperationCount )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiskUsageReport * This,
                           __RPC__out INT64 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_OtherOperationCount )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiskUsageReport * This,
                           __RPC__out INT64 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BytesReadCount )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiskUsageReport * This,
                           __RPC__out INT64 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BytesWrittenCount )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiskUsageReport * This,
                           __RPC__out INT64 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_OtherBytesCount )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiskUsageReport * This,
                           __RPC__out INT64 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiskUsageReportVtbl;
interface __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiskUsageReport
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiskUsageReportVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ReadOperationCount(This,value) )
    ( (This)->lpVtbl->get_WriteOperationCount(This,value) )
    ( (This)->lpVtbl->get_OtherOperationCount(This,value) )
    ( (This)->lpVtbl->get_BytesReadCount(This,value) )
    ( (This)->lpVtbl->get_BytesWrittenCount(This,value) )
    ( (This)->lpVtbl->get_OtherBytesCount(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiskUsageReport;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Diagnostics_IProcessMemoryUsage[] = L"Windows.System.Diagnostics.IProcessMemoryUsage";
typedef struct __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessMemoryUsageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessMemoryUsage * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessMemoryUsage * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessMemoryUsage * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessMemoryUsage * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessMemoryUsage * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessMemoryUsage * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetReport )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessMemoryUsage * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessMemoryUsageReport * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessMemoryUsageVtbl;
interface __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessMemoryUsage
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessMemoryUsageVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetReport(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CDiagnostics_CIProcessMemoryUsage;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Diagnostics_IProcessMemoryUsageReport[] = L"Windows.System.Diagnostics.IProcessMemoryUsageReport";
typedef struct __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessMemoryUsageReportVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessMemoryUsageReport * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessMemoryUsageReport * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessMemoryUsageReport * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessMemoryUsageReport * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessMemoryUsageReport * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessMemoryUsageReport * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_NonPagedPoolSizeInBytes )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessMemoryUsageReport * This,
                           __RPC__out UINT64 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PageFaultCount )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessMemoryUsageReport * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PageFileSizeInBytes )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessMemoryUsageReport * This,
                           __RPC__out UINT64 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PagedPoolSizeInBytes )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessMemoryUsageReport * This,
                           __RPC__out UINT64 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PeakNonPagedPoolSizeInBytes )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessMemoryUsageReport * This,
                           __RPC__out UINT64 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PeakPageFileSizeInBytes )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessMemoryUsageReport * This,
                           __RPC__out UINT64 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PeakPagedPoolSizeInBytes )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessMemoryUsageReport * This,
                           __RPC__out UINT64 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PeakVirtualMemorySizeInBytes )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessMemoryUsageReport * This,
                           __RPC__out UINT64 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PeakWorkingSetSizeInBytes )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessMemoryUsageReport * This,
                           __RPC__out UINT64 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PrivatePageCount )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessMemoryUsageReport * This,
                           __RPC__out UINT64 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_VirtualMemorySizeInBytes )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessMemoryUsageReport * This,
                           __RPC__out UINT64 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_WorkingSetSizeInBytes )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessMemoryUsageReport * This,
                           __RPC__out UINT64 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessMemoryUsageReportVtbl;
interface __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessMemoryUsageReport
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessMemoryUsageReportVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_NonPagedPoolSizeInBytes(This,value) )
    ( (This)->lpVtbl->get_PageFaultCount(This,value) )
    ( (This)->lpVtbl->get_PageFileSizeInBytes(This,value) )
    ( (This)->lpVtbl->get_PagedPoolSizeInBytes(This,value) )
    ( (This)->lpVtbl->get_PeakNonPagedPoolSizeInBytes(This,value) )
    ( (This)->lpVtbl->get_PeakPageFileSizeInBytes(This,value) )
    ( (This)->lpVtbl->get_PeakPagedPoolSizeInBytes(This,value) )
    ( (This)->lpVtbl->get_PeakVirtualMemorySizeInBytes(This,value) )
    ( (This)->lpVtbl->get_PeakWorkingSetSizeInBytes(This,value) )
    ( (This)->lpVtbl->get_PrivatePageCount(This,value) )
    ( (This)->lpVtbl->get_VirtualMemorySizeInBytes(This,value) )
    ( (This)->lpVtbl->get_WorkingSetSizeInBytes(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CDiagnostics_CIProcessMemoryUsageReport;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Diagnostics_ISystemCpuUsage[] = L"Windows.System.Diagnostics.ISystemCpuUsage";
typedef struct __x_ABI_CWindows_CSystem_CDiagnostics_CISystemCpuUsageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CISystemCpuUsage * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CISystemCpuUsage * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CISystemCpuUsage * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CISystemCpuUsage * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CISystemCpuUsage * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CISystemCpuUsage * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetReport )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CISystemCpuUsage * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CDiagnostics_CISystemCpuUsageReport * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CDiagnostics_CISystemCpuUsageVtbl;
interface __x_ABI_CWindows_CSystem_CDiagnostics_CISystemCpuUsage
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CDiagnostics_CISystemCpuUsageVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetReport(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CDiagnostics_CISystemCpuUsage;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Diagnostics_ISystemCpuUsageReport[] = L"Windows.System.Diagnostics.ISystemCpuUsageReport";
typedef struct __x_ABI_CWindows_CSystem_CDiagnostics_CISystemCpuUsageReportVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CISystemCpuUsageReport * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CISystemCpuUsageReport * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CISystemCpuUsageReport * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CISystemCpuUsageReport * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CISystemCpuUsageReport * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CISystemCpuUsageReport * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_KernelTime )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CISystemCpuUsageReport * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_UserTime )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CISystemCpuUsageReport * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IdleTime )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CISystemCpuUsageReport * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CDiagnostics_CISystemCpuUsageReportVtbl;
interface __x_ABI_CWindows_CSystem_CDiagnostics_CISystemCpuUsageReport
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CDiagnostics_CISystemCpuUsageReportVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_KernelTime(This,value) )
    ( (This)->lpVtbl->get_UserTime(This,value) )
    ( (This)->lpVtbl->get_IdleTime(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CDiagnostics_CISystemCpuUsageReport;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Diagnostics_ISystemDiagnosticInfo[] = L"Windows.System.Diagnostics.ISystemDiagnosticInfo";
typedef struct __x_ABI_CWindows_CSystem_CDiagnostics_CISystemDiagnosticInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CISystemDiagnosticInfo * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CISystemDiagnosticInfo * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CISystemDiagnosticInfo * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CISystemDiagnosticInfo * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CISystemDiagnosticInfo * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CISystemDiagnosticInfo * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_MemoryUsage )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CISystemDiagnosticInfo * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CDiagnostics_CISystemMemoryUsage * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CpuUsage )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CISystemDiagnosticInfo * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CDiagnostics_CISystemCpuUsage * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CDiagnostics_CISystemDiagnosticInfoVtbl;
interface __x_ABI_CWindows_CSystem_CDiagnostics_CISystemDiagnosticInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CDiagnostics_CISystemDiagnosticInfoVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_MemoryUsage(This,value) )
    ( (This)->lpVtbl->get_CpuUsage(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CDiagnostics_CISystemDiagnosticInfo;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Diagnostics_ISystemDiagnosticInfoStatics[] = L"Windows.System.Diagnostics.ISystemDiagnosticInfoStatics";
typedef struct __x_ABI_CWindows_CSystem_CDiagnostics_CISystemDiagnosticInfoStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CISystemDiagnosticInfoStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CISystemDiagnosticInfoStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CISystemDiagnosticInfoStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CISystemDiagnosticInfoStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CISystemDiagnosticInfoStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CISystemDiagnosticInfoStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetForCurrentSystem )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CISystemDiagnosticInfoStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CDiagnostics_CISystemDiagnosticInfo * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CDiagnostics_CISystemDiagnosticInfoStaticsVtbl;
interface __x_ABI_CWindows_CSystem_CDiagnostics_CISystemDiagnosticInfoStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CDiagnostics_CISystemDiagnosticInfoStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetForCurrentSystem(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CDiagnostics_CISystemDiagnosticInfoStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Diagnostics_ISystemMemoryUsage[] = L"Windows.System.Diagnostics.ISystemMemoryUsage";
typedef struct __x_ABI_CWindows_CSystem_CDiagnostics_CISystemMemoryUsageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CISystemMemoryUsage * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CISystemMemoryUsage * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CISystemMemoryUsage * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CISystemMemoryUsage * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CISystemMemoryUsage * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CISystemMemoryUsage * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetReport )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CISystemMemoryUsage * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CDiagnostics_CISystemMemoryUsageReport * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CDiagnostics_CISystemMemoryUsageVtbl;
interface __x_ABI_CWindows_CSystem_CDiagnostics_CISystemMemoryUsage
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CDiagnostics_CISystemMemoryUsageVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetReport(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CDiagnostics_CISystemMemoryUsage;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Diagnostics_ISystemMemoryUsageReport[] = L"Windows.System.Diagnostics.ISystemMemoryUsageReport";
typedef struct __x_ABI_CWindows_CSystem_CDiagnostics_CISystemMemoryUsageReportVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CISystemMemoryUsageReport * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CISystemMemoryUsageReport * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CISystemMemoryUsageReport * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CISystemMemoryUsageReport * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CISystemMemoryUsageReport * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CISystemMemoryUsageReport * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_TotalPhysicalSizeInBytes )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CISystemMemoryUsageReport * This,
                           __RPC__out UINT64 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AvailableSizeInBytes )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CISystemMemoryUsageReport * This,
                           __RPC__out UINT64 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CommittedSizeInBytes )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CISystemMemoryUsageReport * This,
                           __RPC__out UINT64 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CDiagnostics_CISystemMemoryUsageReportVtbl;
interface __x_ABI_CWindows_CSystem_CDiagnostics_CISystemMemoryUsageReport
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CDiagnostics_CISystemMemoryUsageReportVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_TotalPhysicalSizeInBytes(This,value) )
    ( (This)->lpVtbl->get_AvailableSizeInBytes(This,value) )
    ( (This)->lpVtbl->get_CommittedSizeInBytes(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CDiagnostics_CISystemMemoryUsageReport;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_Diagnostics_DiagnosticActionResult[] = L"Windows.System.Diagnostics.DiagnosticActionResult";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_Diagnostics_DiagnosticInvoker[] = L"Windows.System.Diagnostics.DiagnosticInvoker";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_Diagnostics_ProcessCpuUsage[] = L"Windows.System.Diagnostics.ProcessCpuUsage";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_Diagnostics_ProcessCpuUsageReport[] = L"Windows.System.Diagnostics.ProcessCpuUsageReport";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_Diagnostics_ProcessDiagnosticInfo[] = L"Windows.System.Diagnostics.ProcessDiagnosticInfo";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_Diagnostics_ProcessDiskUsage[] = L"Windows.System.Diagnostics.ProcessDiskUsage";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_Diagnostics_ProcessDiskUsageReport[] = L"Windows.System.Diagnostics.ProcessDiskUsageReport";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_Diagnostics_ProcessMemoryUsage[] = L"Windows.System.Diagnostics.ProcessMemoryUsage";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_Diagnostics_ProcessMemoryUsageReport[] = L"Windows.System.Diagnostics.ProcessMemoryUsageReport";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_Diagnostics_SystemCpuUsage[] = L"Windows.System.Diagnostics.SystemCpuUsage";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_Diagnostics_SystemCpuUsageReport[] = L"Windows.System.Diagnostics.SystemCpuUsageReport";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_Diagnostics_SystemDiagnosticInfo[] = L"Windows.System.Diagnostics.SystemDiagnosticInfo";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_Diagnostics_SystemMemoryUsage[] = L"Windows.System.Diagnostics.SystemMemoryUsage";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_Diagnostics_SystemMemoryUsageReport[] = L"Windows.System.Diagnostics.SystemMemoryUsageReport";
       
       
#pragma clang diagnostic pop

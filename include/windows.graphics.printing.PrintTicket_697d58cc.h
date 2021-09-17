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
#include "Windows.Data.Xml.Dom.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketCapabilities __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketCapabilities;
typedef interface __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketFeature __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketFeature;
typedef interface __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketOption __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketOption;
typedef interface __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketParameterDefinition __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketParameterDefinition;
typedef interface __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketParameterInitializer __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketParameterInitializer;
typedef interface __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketValue __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketValue;
typedef interface __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicket __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicket;
typedef interface __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicketValidationResult __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicketValidationResult;
typedef interface __FIIterator_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOption __FIIterator_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOption;
EXTERN_C const IID IID___FIIterator_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOption;
typedef struct __FIIterator_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOptionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOption * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOption * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOption * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOption * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOption * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOption * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOption * This, __RPC__out __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketOption * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOption * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOption * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOption * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketOption * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOptionVtbl;
interface __FIIterator_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOption
{
    CONST_VTBL struct __FIIterator_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOptionVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOption __FIIterable_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOption;
EXTERN_C const IID IID___FIIterable_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOption;
typedef struct __FIIterable_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOptionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOption * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOption * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOption * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOption * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOption * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOption * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOption * This, __RPC__deref_out_opt __FIIterator_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOption **first);
    END_INTERFACE
} __FIIterable_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOptionVtbl;
interface __FIIterable_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOption
{
    CONST_VTBL struct __FIIterable_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOptionVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOption __FIVectorView_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOption;
EXTERN_C const IID IID___FIVectorView_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOption;
typedef struct __FIVectorView_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOptionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOption * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOption * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOption * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOption * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOption * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOption * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOption * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketOption * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOption * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOption * This,
                       __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketOption * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOption * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketOption * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOptionVtbl;
interface __FIVectorView_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOption
{
    CONST_VTBL struct __FIVectorView_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOptionVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicket __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicket;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicket;
typedef interface __FIAsyncOperation_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicket __FIAsyncOperation_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicket;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicketVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicket * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicket * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicket * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicket * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicket *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicketVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicket
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicketVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicket __FIAsyncOperation_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicket;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicket;
typedef struct __FIAsyncOperation_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicketVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicket * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicket * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicket * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicket * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicket * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicket * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicket * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicket *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicket * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicket **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicket * This, __RPC__out __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicket * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicketVtbl;
interface __FIAsyncOperation_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicket
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicketVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicketValidationResult __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicketValidationResult;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicketValidationResult;
typedef interface __FIAsyncOperation_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicketValidationResult __FIAsyncOperation_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicketValidationResult;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicketValidationResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicketValidationResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicketValidationResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicketValidationResult * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicketValidationResult * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicketValidationResult *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicketValidationResultVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicketValidationResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicketValidationResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicketValidationResult __FIAsyncOperation_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicketValidationResult;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicketValidationResult;
typedef struct __FIAsyncOperation_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicketValidationResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicketValidationResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicketValidationResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicketValidationResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicketValidationResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicketValidationResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicketValidationResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicketValidationResult * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicketValidationResult *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicketValidationResult * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicketValidationResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicketValidationResult * This, __RPC__out __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicketValidationResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicketValidationResultVtbl;
interface __FIAsyncOperation_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicketValidationResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicketValidationResultVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode;
typedef interface __x_ABI_CWindows_CFoundation_CIAsyncAction __x_ABI_CWindows_CFoundation_CIAsyncAction;
typedef enum __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CPrintTicketFeatureSelectionType __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CPrintTicketFeatureSelectionType;
typedef enum __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CPrintTicketParameterDataType __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CPrintTicketParameterDataType;
typedef enum __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CPrintTicketValueType __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CPrintTicketValueType;
enum __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CPrintTicketFeatureSelectionType
{
    PrintTicketFeatureSelectionType_PickOne = 0,
    PrintTicketFeatureSelectionType_PickMany = 1,
};
enum __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CPrintTicketParameterDataType
{
    PrintTicketParameterDataType_Integer = 0,
    PrintTicketParameterDataType_NumericString = 1,
    PrintTicketParameterDataType_String = 2,
};
enum __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CPrintTicketValueType
{
    PrintTicketValueType_Integer = 0,
    PrintTicketValueType_String = 1,
    PrintTicketValueType_Unknown = 2,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_PrintTicket_IPrintTicketCapabilities[] = L"Windows.Graphics.Printing.PrintTicket.IPrintTicketCapabilities";
typedef struct __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketCapabilitiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketCapabilities * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketCapabilities * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketCapabilities * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketCapabilities * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketCapabilities * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketCapabilities * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Name )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketCapabilities * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_XmlNamespace )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketCapabilities * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_XmlNode )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketCapabilities * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DocumentBindingFeature )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketCapabilities * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketFeature * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DocumentCollateFeature )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketCapabilities * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketFeature * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DocumentDuplexFeature )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketCapabilities * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketFeature * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DocumentHolePunchFeature )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketCapabilities * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketFeature * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DocumentInputBinFeature )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketCapabilities * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketFeature * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DocumentNUpFeature )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketCapabilities * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketFeature * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DocumentStapleFeature )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketCapabilities * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketFeature * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_JobPasscodeFeature )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketCapabilities * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketFeature * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PageBorderlessFeature )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketCapabilities * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketFeature * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PageMediaSizeFeature )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketCapabilities * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketFeature * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PageMediaTypeFeature )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketCapabilities * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketFeature * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PageOrientationFeature )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketCapabilities * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketFeature * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PageOutputColorFeature )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketCapabilities * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketFeature * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PageOutputQualityFeature )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketCapabilities * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketFeature * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PageResolutionFeature )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketCapabilities * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketFeature * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetFeature )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketCapabilities * This,
                  __RPC__in HSTRING name,
                  __RPC__in HSTRING xmlNamespace,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketFeature * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetParameterDefinition )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketCapabilities * This,
                  __RPC__in HSTRING name,
                  __RPC__in HSTRING xmlNamespace,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketParameterDefinition * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketCapabilitiesVtbl;
interface __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketCapabilities
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketCapabilitiesVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Name(This,value) )
    ( (This)->lpVtbl->get_XmlNamespace(This,value) )
    ( (This)->lpVtbl->get_XmlNode(This,value) )
    ( (This)->lpVtbl->get_DocumentBindingFeature(This,value) )
    ( (This)->lpVtbl->get_DocumentCollateFeature(This,value) )
    ( (This)->lpVtbl->get_DocumentDuplexFeature(This,value) )
    ( (This)->lpVtbl->get_DocumentHolePunchFeature(This,value) )
    ( (This)->lpVtbl->get_DocumentInputBinFeature(This,value) )
    ( (This)->lpVtbl->get_DocumentNUpFeature(This,value) )
    ( (This)->lpVtbl->get_DocumentStapleFeature(This,value) )
    ( (This)->lpVtbl->get_JobPasscodeFeature(This,value) )
    ( (This)->lpVtbl->get_PageBorderlessFeature(This,value) )
    ( (This)->lpVtbl->get_PageMediaSizeFeature(This,value) )
    ( (This)->lpVtbl->get_PageMediaTypeFeature(This,value) )
    ( (This)->lpVtbl->get_PageOrientationFeature(This,value) )
    ( (This)->lpVtbl->get_PageOutputColorFeature(This,value) )
    ( (This)->lpVtbl->get_PageOutputQualityFeature(This,value) )
    ( (This)->lpVtbl->get_PageResolutionFeature(This,value) )
    ( (This)->lpVtbl->GetFeature(This,name,xmlNamespace,result) )
    ( (This)->lpVtbl->GetParameterDefinition(This,name,xmlNamespace,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketCapabilities;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_PrintTicket_IPrintTicketFeature[] = L"Windows.Graphics.Printing.PrintTicket.IPrintTicketFeature";
typedef struct __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketFeatureVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketFeature * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketFeature * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketFeature * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketFeature * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketFeature * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketFeature * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Name )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketFeature * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_XmlNamespace )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketFeature * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_XmlNode )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketFeature * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DisplayName )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketFeature * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetOption )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketFeature * This,
                  __RPC__in HSTRING name,
                  __RPC__in HSTRING xmlNamespace,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketOption * * result
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Options )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketFeature * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOption * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetSelectedOption )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketFeature * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketOption * * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetSelectedOption )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketFeature * This,
                  __RPC__in_opt __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketOption * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SelectionType )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketFeature * This,
                           __RPC__out __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CPrintTicketFeatureSelectionType * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketFeatureVtbl;
interface __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketFeature
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketFeatureVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Name(This,value) )
    ( (This)->lpVtbl->get_XmlNamespace(This,value) )
    ( (This)->lpVtbl->get_XmlNode(This,value) )
    ( (This)->lpVtbl->get_DisplayName(This,value) )
    ( (This)->lpVtbl->GetOption(This,name,xmlNamespace,result) )
    ( (This)->lpVtbl->get_Options(This,result) )
    ( (This)->lpVtbl->GetSelectedOption(This,value) )
    ( (This)->lpVtbl->SetSelectedOption(This,value) )
    ( (This)->lpVtbl->get_SelectionType(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketFeature;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_PrintTicket_IPrintTicketOption[] = L"Windows.Graphics.Printing.PrintTicket.IPrintTicketOption";
typedef struct __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketOptionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketOption * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketOption * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketOption * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketOption * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketOption * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketOption * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Name )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketOption * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_XmlNamespace )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketOption * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_XmlNode )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketOption * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DisplayName )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketOption * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetPropertyNode )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketOption * This,
                  __RPC__in HSTRING name,
                  __RPC__in HSTRING xmlNamespace,
                           __RPC__deref_out_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetScoredPropertyNode )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketOption * This,
                  __RPC__in HSTRING name,
                  __RPC__in HSTRING xmlNamespace,
                           __RPC__deref_out_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetPropertyValue )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketOption * This,
                  __RPC__in HSTRING name,
                  __RPC__in HSTRING xmlNamespace,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketValue * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetScoredPropertyValue )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketOption * This,
                  __RPC__in HSTRING name,
                  __RPC__in HSTRING xmlNamespace,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketValue * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketOptionVtbl;
interface __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketOption
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketOptionVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Name(This,value) )
    ( (This)->lpVtbl->get_XmlNamespace(This,value) )
    ( (This)->lpVtbl->get_XmlNode(This,value) )
    ( (This)->lpVtbl->get_DisplayName(This,value) )
    ( (This)->lpVtbl->GetPropertyNode(This,name,xmlNamespace,result) )
    ( (This)->lpVtbl->GetScoredPropertyNode(This,name,xmlNamespace,result) )
    ( (This)->lpVtbl->GetPropertyValue(This,name,xmlNamespace,result) )
    ( (This)->lpVtbl->GetScoredPropertyValue(This,name,xmlNamespace,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketOption;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_PrintTicket_IPrintTicketParameterDefinition[] = L"Windows.Graphics.Printing.PrintTicket.IPrintTicketParameterDefinition";
typedef struct __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketParameterDefinitionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketParameterDefinition * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketParameterDefinition * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketParameterDefinition * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketParameterDefinition * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketParameterDefinition * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketParameterDefinition * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Name )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketParameterDefinition * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_XmlNamespace )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketParameterDefinition * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_XmlNode )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketParameterDefinition * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DataType )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketParameterDefinition * This,
                           __RPC__out __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CPrintTicketParameterDataType * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_UnitType )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketParameterDefinition * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RangeMin )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketParameterDefinition * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RangeMax )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketParameterDefinition * This,
                           __RPC__out INT32 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketParameterDefinitionVtbl;
interface __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketParameterDefinition
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketParameterDefinitionVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Name(This,value) )
    ( (This)->lpVtbl->get_XmlNamespace(This,value) )
    ( (This)->lpVtbl->get_XmlNode(This,value) )
    ( (This)->lpVtbl->get_DataType(This,value) )
    ( (This)->lpVtbl->get_UnitType(This,value) )
    ( (This)->lpVtbl->get_RangeMin(This,value) )
    ( (This)->lpVtbl->get_RangeMax(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketParameterDefinition;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_PrintTicket_IPrintTicketParameterInitializer[] = L"Windows.Graphics.Printing.PrintTicket.IPrintTicketParameterInitializer";
typedef struct __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketParameterInitializerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketParameterInitializer * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketParameterInitializer * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketParameterInitializer * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketParameterInitializer * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketParameterInitializer * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketParameterInitializer * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Name )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketParameterInitializer * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_XmlNamespace )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketParameterInitializer * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_XmlNode )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketParameterInitializer * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Value )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketParameterInitializer * This,
                  __RPC__in_opt __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketValue * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Value )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketParameterInitializer * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketValue * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketParameterInitializerVtbl;
interface __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketParameterInitializer
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketParameterInitializerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Name(This,value) )
    ( (This)->lpVtbl->get_XmlNamespace(This,value) )
    ( (This)->lpVtbl->get_XmlNode(This,value) )
    ( (This)->lpVtbl->put_Value(This,value) )
    ( (This)->lpVtbl->get_Value(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketParameterInitializer;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_PrintTicket_IPrintTicketValue[] = L"Windows.Graphics.Printing.PrintTicket.IPrintTicketValue";
typedef struct __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketValueVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketValue * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketValue * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketValue * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketValue * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketValue * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketValue * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Type )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketValue * This,
                           __RPC__out __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CPrintTicketValueType * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetValueAsInteger )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketValue * This,
                           __RPC__out INT32 * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetValueAsString )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketValue * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketValueVtbl;
interface __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketValue
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketValueVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Type(This,value) )
    ( (This)->lpVtbl->GetValueAsInteger(This,value) )
    ( (This)->lpVtbl->GetValueAsString(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketValue;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_PrintTicket_IWorkflowPrintTicket[] = L"Windows.Graphics.Printing.PrintTicket.IWorkflowPrintTicket";
typedef struct __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicketVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicket * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicket * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicket * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicket * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicket * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicket * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Name )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicket * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_XmlNamespace )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicket * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_XmlNode )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicket * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetCapabilities )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicket * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketCapabilities * * result
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DocumentBindingFeature )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicket * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketFeature * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DocumentCollateFeature )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicket * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketFeature * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DocumentDuplexFeature )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicket * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketFeature * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DocumentHolePunchFeature )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicket * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketFeature * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DocumentInputBinFeature )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicket * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketFeature * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DocumentNUpFeature )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicket * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketFeature * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DocumentStapleFeature )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicket * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketFeature * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_JobPasscodeFeature )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicket * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketFeature * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PageBorderlessFeature )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicket * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketFeature * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PageMediaSizeFeature )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicket * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketFeature * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PageMediaTypeFeature )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicket * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketFeature * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PageOrientationFeature )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicket * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketFeature * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PageOutputColorFeature )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicket * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketFeature * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PageOutputQualityFeature )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicket * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketFeature * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PageResolutionFeature )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicket * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketFeature * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetFeature )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicket * This,
                  __RPC__in HSTRING name,
                  __RPC__in HSTRING xmlNamespace,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketFeature * * result
        );
    HRESULT ( STDMETHODCALLTYPE *NotifyXmlChangedAsync )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicket * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *ValidateAsync )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicket * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicketValidationResult * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *GetParameterInitializer )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicket * This,
                  __RPC__in HSTRING name,
                  __RPC__in HSTRING xmlNamespace,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketParameterInitializer * * result
        );
    HRESULT ( STDMETHODCALLTYPE *SetParameterInitializerAsInteger )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicket * This,
                  __RPC__in HSTRING name,
                  __RPC__in HSTRING xmlNamespace,
                  INT32 integerValue,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketParameterInitializer * * result
        );
    HRESULT ( STDMETHODCALLTYPE *SetParameterInitializerAsString )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicket * This,
                  __RPC__in HSTRING name,
                  __RPC__in HSTRING xmlNamespace,
                  __RPC__in HSTRING stringValue,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketParameterInitializer * * result
        );
    HRESULT ( STDMETHODCALLTYPE *MergeAndValidateTicket )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicket * This,
                  __RPC__in_opt __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicket * deltaShemaTicket,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicket * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicketVtbl;
interface __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicket
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicketVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Name(This,value) )
    ( (This)->lpVtbl->get_XmlNamespace(This,value) )
    ( (This)->lpVtbl->get_XmlNode(This,value) )
    ( (This)->lpVtbl->GetCapabilities(This,result) )
    ( (This)->lpVtbl->get_DocumentBindingFeature(This,value) )
    ( (This)->lpVtbl->get_DocumentCollateFeature(This,value) )
    ( (This)->lpVtbl->get_DocumentDuplexFeature(This,value) )
    ( (This)->lpVtbl->get_DocumentHolePunchFeature(This,value) )
    ( (This)->lpVtbl->get_DocumentInputBinFeature(This,value) )
    ( (This)->lpVtbl->get_DocumentNUpFeature(This,value) )
    ( (This)->lpVtbl->get_DocumentStapleFeature(This,value) )
    ( (This)->lpVtbl->get_JobPasscodeFeature(This,value) )
    ( (This)->lpVtbl->get_PageBorderlessFeature(This,value) )
    ( (This)->lpVtbl->get_PageMediaSizeFeature(This,value) )
    ( (This)->lpVtbl->get_PageMediaTypeFeature(This,value) )
    ( (This)->lpVtbl->get_PageOrientationFeature(This,value) )
    ( (This)->lpVtbl->get_PageOutputColorFeature(This,value) )
    ( (This)->lpVtbl->get_PageOutputQualityFeature(This,value) )
    ( (This)->lpVtbl->get_PageResolutionFeature(This,value) )
    ( (This)->lpVtbl->GetFeature(This,name,xmlNamespace,result) )
    ( (This)->lpVtbl->NotifyXmlChangedAsync(This,operation) )
    ( (This)->lpVtbl->ValidateAsync(This,operation) )
    ( (This)->lpVtbl->GetParameterInitializer(This,name,xmlNamespace,result) )
    ( (This)->lpVtbl->SetParameterInitializerAsInteger(This,name,xmlNamespace,integerValue,result) )
    ( (This)->lpVtbl->SetParameterInitializerAsString(This,name,xmlNamespace,stringValue,result) )
    ( (This)->lpVtbl->MergeAndValidateTicket(This,deltaShemaTicket,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicket;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_PrintTicket_IWorkflowPrintTicketValidationResult[] = L"Windows.Graphics.Printing.PrintTicket.IWorkflowPrintTicketValidationResult";
typedef struct __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicketValidationResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicketValidationResult * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicketValidationResult * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicketValidationResult * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicketValidationResult * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicketValidationResult * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicketValidationResult * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Validated )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicketValidationResult * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ExtendedError )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicketValidationResult * This,
                           __RPC__out HRESULT * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicketValidationResultVtbl;
interface __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicketValidationResult
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicketValidationResultVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Validated(This,value) )
    ( (This)->lpVtbl->get_ExtendedError(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicketValidationResult;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing_PrintTicket_PrintTicketCapabilities[] = L"Windows.Graphics.Printing.PrintTicket.PrintTicketCapabilities";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing_PrintTicket_PrintTicketFeature[] = L"Windows.Graphics.Printing.PrintTicket.PrintTicketFeature";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing_PrintTicket_PrintTicketOption[] = L"Windows.Graphics.Printing.PrintTicket.PrintTicketOption";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing_PrintTicket_PrintTicketParameterDefinition[] = L"Windows.Graphics.Printing.PrintTicket.PrintTicketParameterDefinition";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing_PrintTicket_PrintTicketParameterInitializer[] = L"Windows.Graphics.Printing.PrintTicket.PrintTicketParameterInitializer";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing_PrintTicket_PrintTicketValue[] = L"Windows.Graphics.Printing.PrintTicket.PrintTicketValue";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing_PrintTicket_WorkflowPrintTicket[] = L"Windows.Graphics.Printing.PrintTicket.WorkflowPrintTicket";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing_PrintTicket_WorkflowPrintTicketValidationResult[] = L"Windows.Graphics.Printing.PrintTicket.WorkflowPrintTicketValidationResult";
       
       
#pragma clang diagnostic pop

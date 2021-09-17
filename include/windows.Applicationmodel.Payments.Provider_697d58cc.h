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
#include "Windows.ApplicationModel.Payments.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CApplicationModel_CPayments_CProvider_CIPaymentAppCanMakePaymentTriggerDetails __x_ABI_CWindows_CApplicationModel_CPayments_CProvider_CIPaymentAppCanMakePaymentTriggerDetails;
typedef interface __x_ABI_CWindows_CApplicationModel_CPayments_CProvider_CIPaymentAppManager __x_ABI_CWindows_CApplicationModel_CPayments_CProvider_CIPaymentAppManager;
typedef interface __x_ABI_CWindows_CApplicationModel_CPayments_CProvider_CIPaymentAppManagerStatics __x_ABI_CWindows_CApplicationModel_CPayments_CProvider_CIPaymentAppManagerStatics;
typedef interface __x_ABI_CWindows_CApplicationModel_CPayments_CProvider_CIPaymentTransaction __x_ABI_CWindows_CApplicationModel_CPayments_CProvider_CIPaymentTransaction;
typedef interface __x_ABI_CWindows_CApplicationModel_CPayments_CProvider_CIPaymentTransactionAcceptResult __x_ABI_CWindows_CApplicationModel_CPayments_CProvider_CIPaymentTransactionAcceptResult;
typedef interface __x_ABI_CWindows_CApplicationModel_CPayments_CProvider_CIPaymentTransactionStatics __x_ABI_CWindows_CApplicationModel_CPayments_CProvider_CIPaymentTransactionStatics;
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CProvider__CPaymentTransaction __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CProvider__CPaymentTransaction;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CProvider__CPaymentTransaction;
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CProvider__CPaymentTransaction __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CProvider__CPaymentTransaction;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CProvider__CPaymentTransactionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CProvider__CPaymentTransaction * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CProvider__CPaymentTransaction * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CProvider__CPaymentTransaction * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CProvider__CPaymentTransaction * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CProvider__CPaymentTransaction *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CProvider__CPaymentTransactionVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CProvider__CPaymentTransaction
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CProvider__CPaymentTransactionVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CProvider__CPaymentTransaction __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CProvider__CPaymentTransaction;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CProvider__CPaymentTransaction;
typedef struct __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CProvider__CPaymentTransactionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CProvider__CPaymentTransaction * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CProvider__CPaymentTransaction * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CProvider__CPaymentTransaction * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CProvider__CPaymentTransaction * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CProvider__CPaymentTransaction * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CProvider__CPaymentTransaction * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CProvider__CPaymentTransaction * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CProvider__CPaymentTransaction *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CProvider__CPaymentTransaction * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CProvider__CPaymentTransaction **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CProvider__CPaymentTransaction * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CPayments_CProvider_CIPaymentTransaction * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CProvider__CPaymentTransactionVtbl;
interface __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CProvider__CPaymentTransaction
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CProvider__CPaymentTransactionVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CProvider__CPaymentTransactionAcceptResult __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CProvider__CPaymentTransactionAcceptResult;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CProvider__CPaymentTransactionAcceptResult;
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CProvider__CPaymentTransactionAcceptResult __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CProvider__CPaymentTransactionAcceptResult;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CProvider__CPaymentTransactionAcceptResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CProvider__CPaymentTransactionAcceptResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CProvider__CPaymentTransactionAcceptResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CProvider__CPaymentTransactionAcceptResult * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CProvider__CPaymentTransactionAcceptResult * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CProvider__CPaymentTransactionAcceptResult *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CProvider__CPaymentTransactionAcceptResultVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CProvider__CPaymentTransactionAcceptResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CProvider__CPaymentTransactionAcceptResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CProvider__CPaymentTransactionAcceptResult __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CProvider__CPaymentTransactionAcceptResult;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CProvider__CPaymentTransactionAcceptResult;
typedef struct __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CProvider__CPaymentTransactionAcceptResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CProvider__CPaymentTransactionAcceptResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CProvider__CPaymentTransactionAcceptResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CProvider__CPaymentTransactionAcceptResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CProvider__CPaymentTransactionAcceptResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CProvider__CPaymentTransactionAcceptResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CProvider__CPaymentTransactionAcceptResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CProvider__CPaymentTransactionAcceptResult * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CProvider__CPaymentTransactionAcceptResult *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CProvider__CPaymentTransactionAcceptResult * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CProvider__CPaymentTransactionAcceptResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CProvider__CPaymentTransactionAcceptResult * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CPayments_CProvider_CIPaymentTransactionAcceptResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CProvider__CPaymentTransactionAcceptResultVtbl;
interface __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CProvider__CPaymentTransactionAcceptResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CProvider__CPaymentTransactionAcceptResultVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedResult __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedResult;
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CPaymentRequestChangedResult __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CPaymentRequestChangedResult;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CPaymentRequestChangedResult;
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentRequestChangedResult __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentRequestChangedResult;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CPaymentRequestChangedResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CPaymentRequestChangedResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CPaymentRequestChangedResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CPaymentRequestChangedResult * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CPaymentRequestChangedResult * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentRequestChangedResult *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CPaymentRequestChangedResultVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CPaymentRequestChangedResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CPaymentRequestChangedResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentRequestChangedResult __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentRequestChangedResult;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentRequestChangedResult;
typedef struct __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentRequestChangedResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentRequestChangedResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentRequestChangedResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentRequestChangedResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentRequestChangedResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentRequestChangedResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentRequestChangedResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentRequestChangedResult * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CPaymentRequestChangedResult *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentRequestChangedResult * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CPaymentRequestChangedResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentRequestChangedResult * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentRequestChangedResultVtbl;
interface __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentRequestChangedResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentRequestChangedResultVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentAddress __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentAddress;
typedef interface __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCanMakePaymentResult __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCanMakePaymentResult;
typedef interface __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequest __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequest;
typedef enum __x_ABI_CWindows_CApplicationModel_CPayments_CPaymentRequestCompletionStatus __x_ABI_CWindows_CApplicationModel_CPayments_CPaymentRequestCompletionStatus;
typedef interface __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentShippingOption __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentShippingOption;
typedef interface __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentToken __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentToken;
typedef interface __x_ABI_CWindows_CFoundation_CIAsyncAction __x_ABI_CWindows_CFoundation_CIAsyncAction;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Payments_Provider_IPaymentAppCanMakePaymentTriggerDetails[] = L"Windows.ApplicationModel.Payments.Provider.IPaymentAppCanMakePaymentTriggerDetails";
typedef struct __x_ABI_CWindows_CApplicationModel_CPayments_CProvider_CIPaymentAppCanMakePaymentTriggerDetailsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CProvider_CIPaymentAppCanMakePaymentTriggerDetails * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CProvider_CIPaymentAppCanMakePaymentTriggerDetails * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CProvider_CIPaymentAppCanMakePaymentTriggerDetails * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CProvider_CIPaymentAppCanMakePaymentTriggerDetails * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CProvider_CIPaymentAppCanMakePaymentTriggerDetails * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CProvider_CIPaymentAppCanMakePaymentTriggerDetails * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Request )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CProvider_CIPaymentAppCanMakePaymentTriggerDetails * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequest * * result
        );
    HRESULT ( STDMETHODCALLTYPE *ReportCanMakePaymentResult )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CProvider_CIPaymentAppCanMakePaymentTriggerDetails * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCanMakePaymentResult * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CPayments_CProvider_CIPaymentAppCanMakePaymentTriggerDetailsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CPayments_CProvider_CIPaymentAppCanMakePaymentTriggerDetails
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CPayments_CProvider_CIPaymentAppCanMakePaymentTriggerDetailsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Request(This,result) )
    ( (This)->lpVtbl->ReportCanMakePaymentResult(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CPayments_CProvider_CIPaymentAppCanMakePaymentTriggerDetails;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Payments_Provider_IPaymentAppManager[] = L"Windows.ApplicationModel.Payments.Provider.IPaymentAppManager";
typedef struct __x_ABI_CWindows_CApplicationModel_CPayments_CProvider_CIPaymentAppManagerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CProvider_CIPaymentAppManager * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CProvider_CIPaymentAppManager * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CProvider_CIPaymentAppManager * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CProvider_CIPaymentAppManager * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CProvider_CIPaymentAppManager * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CProvider_CIPaymentAppManager * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *RegisterAsync )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CProvider_CIPaymentAppManager * This,
                  __RPC__in_opt __FIIterable_1_HSTRING * supportedPaymentMethodIds,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    HRESULT ( STDMETHODCALLTYPE *UnregisterAsync )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CProvider_CIPaymentAppManager * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CPayments_CProvider_CIPaymentAppManagerVtbl;
interface __x_ABI_CWindows_CApplicationModel_CPayments_CProvider_CIPaymentAppManager
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CPayments_CProvider_CIPaymentAppManagerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->RegisterAsync(This,supportedPaymentMethodIds,result) )
    ( (This)->lpVtbl->UnregisterAsync(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CPayments_CProvider_CIPaymentAppManager;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Payments_Provider_IPaymentAppManagerStatics[] = L"Windows.ApplicationModel.Payments.Provider.IPaymentAppManagerStatics";
typedef struct __x_ABI_CWindows_CApplicationModel_CPayments_CProvider_CIPaymentAppManagerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CProvider_CIPaymentAppManagerStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CProvider_CIPaymentAppManagerStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CProvider_CIPaymentAppManagerStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CProvider_CIPaymentAppManagerStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CProvider_CIPaymentAppManagerStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CProvider_CIPaymentAppManagerStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Current )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CProvider_CIPaymentAppManagerStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CPayments_CProvider_CIPaymentAppManager * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CPayments_CProvider_CIPaymentAppManagerStaticsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CPayments_CProvider_CIPaymentAppManagerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CPayments_CProvider_CIPaymentAppManagerStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Current(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CPayments_CProvider_CIPaymentAppManagerStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Payments_Provider_IPaymentTransaction[] = L"Windows.ApplicationModel.Payments.Provider.IPaymentTransaction";
typedef struct __x_ABI_CWindows_CApplicationModel_CPayments_CProvider_CIPaymentTransactionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CProvider_CIPaymentTransaction * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CProvider_CIPaymentTransaction * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CProvider_CIPaymentTransaction * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CProvider_CIPaymentTransaction * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CProvider_CIPaymentTransaction * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CProvider_CIPaymentTransaction * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_PaymentRequest )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CProvider_CIPaymentTransaction * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequest * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PayerEmail )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CProvider_CIPaymentTransaction * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_PayerEmail )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CProvider_CIPaymentTransaction * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PayerName )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CProvider_CIPaymentTransaction * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_PayerName )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CProvider_CIPaymentTransaction * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PayerPhoneNumber )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CProvider_CIPaymentTransaction * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_PayerPhoneNumber )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CProvider_CIPaymentTransaction * This,
                  __RPC__in HSTRING value
        );
    HRESULT ( STDMETHODCALLTYPE *UpdateShippingAddressAsync )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CProvider_CIPaymentTransaction * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentAddress * shippingAddress,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentRequestChangedResult * * result
        );
    HRESULT ( STDMETHODCALLTYPE *UpdateSelectedShippingOptionAsync )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CProvider_CIPaymentTransaction * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentShippingOption * selectedShippingOption,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentRequestChangedResult * * result
        );
    HRESULT ( STDMETHODCALLTYPE *AcceptAsync )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CProvider_CIPaymentTransaction * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentToken * paymentToken,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CProvider__CPaymentTransactionAcceptResult * * result
        );
    HRESULT ( STDMETHODCALLTYPE *Reject )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CProvider_CIPaymentTransaction * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CPayments_CProvider_CIPaymentTransactionVtbl;
interface __x_ABI_CWindows_CApplicationModel_CPayments_CProvider_CIPaymentTransaction
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CPayments_CProvider_CIPaymentTransactionVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_PaymentRequest(This,value) )
    ( (This)->lpVtbl->get_PayerEmail(This,value) )
    ( (This)->lpVtbl->put_PayerEmail(This,value) )
    ( (This)->lpVtbl->get_PayerName(This,value) )
    ( (This)->lpVtbl->put_PayerName(This,value) )
    ( (This)->lpVtbl->get_PayerPhoneNumber(This,value) )
    ( (This)->lpVtbl->put_PayerPhoneNumber(This,value) )
    ( (This)->lpVtbl->UpdateShippingAddressAsync(This,shippingAddress,result) )
    ( (This)->lpVtbl->UpdateSelectedShippingOptionAsync(This,selectedShippingOption,result) )
    ( (This)->lpVtbl->AcceptAsync(This,paymentToken,result) )
    ( (This)->lpVtbl->Reject(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CPayments_CProvider_CIPaymentTransaction;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Payments_Provider_IPaymentTransactionAcceptResult[] = L"Windows.ApplicationModel.Payments.Provider.IPaymentTransactionAcceptResult";
typedef struct __x_ABI_CWindows_CApplicationModel_CPayments_CProvider_CIPaymentTransactionAcceptResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CProvider_CIPaymentTransactionAcceptResult * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CProvider_CIPaymentTransactionAcceptResult * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CProvider_CIPaymentTransactionAcceptResult * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CProvider_CIPaymentTransactionAcceptResult * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CProvider_CIPaymentTransactionAcceptResult * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CProvider_CIPaymentTransactionAcceptResult * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CProvider_CIPaymentTransactionAcceptResult * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CPayments_CPaymentRequestCompletionStatus * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CPayments_CProvider_CIPaymentTransactionAcceptResultVtbl;
interface __x_ABI_CWindows_CApplicationModel_CPayments_CProvider_CIPaymentTransactionAcceptResult
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CPayments_CProvider_CIPaymentTransactionAcceptResultVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Status(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CPayments_CProvider_CIPaymentTransactionAcceptResult;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Payments_Provider_IPaymentTransactionStatics[] = L"Windows.ApplicationModel.Payments.Provider.IPaymentTransactionStatics";
typedef struct __x_ABI_CWindows_CApplicationModel_CPayments_CProvider_CIPaymentTransactionStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CProvider_CIPaymentTransactionStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CProvider_CIPaymentTransactionStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CProvider_CIPaymentTransactionStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CProvider_CIPaymentTransactionStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CProvider_CIPaymentTransactionStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CProvider_CIPaymentTransactionStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *FromIdAsync )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CProvider_CIPaymentTransactionStatics * This,
                  __RPC__in HSTRING id,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CProvider__CPaymentTransaction * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CPayments_CProvider_CIPaymentTransactionStaticsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CPayments_CProvider_CIPaymentTransactionStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CPayments_CProvider_CIPaymentTransactionStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->FromIdAsync(This,id,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CPayments_CProvider_CIPaymentTransactionStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Payments_Provider_PaymentAppCanMakePaymentTriggerDetails[] = L"Windows.ApplicationModel.Payments.Provider.PaymentAppCanMakePaymentTriggerDetails";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Payments_Provider_PaymentAppManager[] = L"Windows.ApplicationModel.Payments.Provider.PaymentAppManager";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Payments_Provider_PaymentTransaction[] = L"Windows.ApplicationModel.Payments.Provider.PaymentTransaction";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Payments_Provider_PaymentTransactionAcceptResult[] = L"Windows.ApplicationModel.Payments.Provider.PaymentTransactionAcceptResult";
       
       
#pragma clang diagnostic pop

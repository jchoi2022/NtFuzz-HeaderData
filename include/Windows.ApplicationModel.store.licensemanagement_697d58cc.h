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
typedef interface __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseManagerStatics __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseManagerStatics;
typedef interface __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseManagerStatics2 __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseManagerStatics2;
typedef interface __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseSatisfactionInfo __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseSatisfactionInfo;
typedef interface __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseSatisfactionResult __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseSatisfactionResult;
typedef interface __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo;
EXTERN_C const IID IID___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo;
typedef struct __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo * This,
                        __RPC__out ULONG *iidCount,
                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Key )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo * This, __RPC__out HSTRING *key);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo * This, __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseSatisfactionInfo * *value);
    END_INTERFACE
} __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfoVtbl;
interface __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo
{
    CONST_VTBL struct __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfoVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Key(This,key) )
    ( (This)->lpVtbl -> get_Value(This,value) )
typedef interface __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo;
EXTERN_C const IID IID___FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo;
typedef struct __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo * This, __RPC__out __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfoVtbl;
interface __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo
{
    CONST_VTBL struct __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfoVtbl *lpVtbl;
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
typedef interface __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo;
EXTERN_C const IID IID___FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo;
typedef struct __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo * This, __RPC__deref_out_opt __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo **first);
    END_INTERFACE
} __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfoVtbl;
interface __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo
{
    CONST_VTBL struct __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfoVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo;
EXTERN_C const IID IID___FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo;
typedef struct __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo * This,
                   __RPC__in HSTRING key,
                            __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseSatisfactionInfo * *value);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo * This, __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo * This, __RPC__in HSTRING key, __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *Split )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo * This, __RPC__deref_out_opt __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo **firstPartition,
                    __RPC__deref_out_opt __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo **secondPartition);
    END_INTERFACE
} __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfoVtbl;
interface __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo
{
    CONST_VTBL struct __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfoVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionResult __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionResult;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionResult;
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionResult __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionResult;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionResult * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionResult * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionResult *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionResultVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionResult __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionResult;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionResult;
typedef struct __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionResult * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionResult *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionResult * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionResult * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseSatisfactionResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionResultVtbl;
interface __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionResultVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CFoundation_CIAsyncAction __x_ABI_CWindows_CFoundation_CIAsyncAction;
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIBuffer __x_ABI_CWindows_CStorage_CStreams_CIBuffer;
typedef enum __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CLicenseRefreshOption __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CLicenseRefreshOption;
enum __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CLicenseRefreshOption
{
    LicenseRefreshOption_RunningLicenses = 0,
    LicenseRefreshOption_AllLicenses = 1,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_LicenseManagement_ILicenseManagerStatics[] = L"Windows.ApplicationModel.Store.LicenseManagement.ILicenseManagerStatics";
typedef struct __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseManagerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseManagerStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseManagerStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseManagerStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseManagerStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseManagerStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseManagerStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *AddLicenseAsync )(
        __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseManagerStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * license,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * action
        );
    HRESULT ( STDMETHODCALLTYPE *GetSatisfactionInfosAsync )(
        __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseManagerStatics * This,
                  __RPC__in_opt __FIIterable_1_HSTRING * contentIds,
                  __RPC__in_opt __FIIterable_1_HSTRING * keyIds,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionResult * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseManagerStaticsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseManagerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseManagerStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->AddLicenseAsync(This,license,action) )
    ( (This)->lpVtbl->GetSatisfactionInfosAsync(This,contentIds,keyIds,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseManagerStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_LicenseManagement_ILicenseManagerStatics2[] = L"Windows.ApplicationModel.Store.LicenseManagement.ILicenseManagerStatics2";
typedef struct __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseManagerStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseManagerStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseManagerStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseManagerStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseManagerStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseManagerStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseManagerStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *RefreshLicensesAsync )(
        __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseManagerStatics2 * This,
                  __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CLicenseRefreshOption refreshOption,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * action
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseManagerStatics2Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseManagerStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseManagerStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->RefreshLicensesAsync(This,refreshOption,action) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseManagerStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_LicenseManagement_ILicenseSatisfactionInfo[] = L"Windows.ApplicationModel.Store.LicenseManagement.ILicenseSatisfactionInfo";
typedef struct __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseSatisfactionInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseSatisfactionInfo * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseSatisfactionInfo * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseSatisfactionInfo * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseSatisfactionInfo * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseSatisfactionInfo * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseSatisfactionInfo * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_SatisfiedByDevice )(
        __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseSatisfactionInfo * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SatisfiedByOpenLicense )(
        __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseSatisfactionInfo * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SatisfiedByTrial )(
        __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseSatisfactionInfo * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SatisfiedByPass )(
        __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseSatisfactionInfo * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SatisfiedByInstallMedia )(
        __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseSatisfactionInfo * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SatisfiedBySignedInUser )(
        __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseSatisfactionInfo * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsSatisfied )(
        __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseSatisfactionInfo * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseSatisfactionInfoVtbl;
interface __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseSatisfactionInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseSatisfactionInfoVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_SatisfiedByDevice(This,value) )
    ( (This)->lpVtbl->get_SatisfiedByOpenLicense(This,value) )
    ( (This)->lpVtbl->get_SatisfiedByTrial(This,value) )
    ( (This)->lpVtbl->get_SatisfiedByPass(This,value) )
    ( (This)->lpVtbl->get_SatisfiedByInstallMedia(This,value) )
    ( (This)->lpVtbl->get_SatisfiedBySignedInUser(This,value) )
    ( (This)->lpVtbl->get_IsSatisfied(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseSatisfactionInfo;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_LicenseManagement_ILicenseSatisfactionResult[] = L"Windows.ApplicationModel.Store.LicenseManagement.ILicenseSatisfactionResult";
typedef struct __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseSatisfactionResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseSatisfactionResult * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseSatisfactionResult * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseSatisfactionResult * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseSatisfactionResult * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseSatisfactionResult * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseSatisfactionResult * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_LicenseSatisfactionInfos )(
        __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseSatisfactionResult * This,
                           __RPC__deref_out_opt __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CLicenseManagement__CLicenseSatisfactionInfo * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ExtendedError )(
        __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseSatisfactionResult * This,
                           __RPC__out HRESULT * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseSatisfactionResultVtbl;
interface __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseSatisfactionResult
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseSatisfactionResultVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_LicenseSatisfactionInfos(This,value) )
    ( (This)->lpVtbl->get_ExtendedError(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CLicenseManagement_CILicenseSatisfactionResult;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Store_LicenseManagement_LicenseManager[] = L"Windows.ApplicationModel.Store.LicenseManagement.LicenseManager";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Store_LicenseManagement_LicenseSatisfactionInfo[] = L"Windows.ApplicationModel.Store.LicenseManagement.LicenseSatisfactionInfo";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Store_LicenseManagement_LicenseSatisfactionResult[] = L"Windows.ApplicationModel.Store.LicenseManagement.LicenseSatisfactionResult";
       
       
#pragma clang diagnostic pop

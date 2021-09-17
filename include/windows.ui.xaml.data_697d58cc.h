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
#include "Windows.UI.Xaml.h"
#include "Windows.UI.Xaml.Interop.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventHandler __x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventHandler;
typedef interface __x_ABI_CWindows_CUI_CXaml_CData_CIPropertyChangedEventHandler __x_ABI_CWindows_CUI_CXaml_CData_CIPropertyChangedEventHandler;
typedef interface __x_ABI_CWindows_CUI_CXaml_CData_CIBinding __x_ABI_CWindows_CUI_CXaml_CData_CIBinding;
typedef interface __x_ABI_CWindows_CUI_CXaml_CData_CIBinding2 __x_ABI_CWindows_CUI_CXaml_CData_CIBinding2;
typedef interface __x_ABI_CWindows_CUI_CXaml_CData_CIBindingBase __x_ABI_CWindows_CUI_CXaml_CData_CIBindingBase;
typedef interface __x_ABI_CWindows_CUI_CXaml_CData_CIBindingBaseFactory __x_ABI_CWindows_CUI_CXaml_CData_CIBindingBaseFactory;
typedef interface __x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpression __x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpression;
typedef interface __x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpressionBase __x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpressionBase;
typedef interface __x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpressionBaseFactory __x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpressionBaseFactory;
typedef interface __x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpressionFactory __x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpressionFactory;
typedef interface __x_ABI_CWindows_CUI_CXaml_CData_CIBindingFactory __x_ABI_CWindows_CUI_CXaml_CData_CIBindingFactory;
typedef interface __x_ABI_CWindows_CUI_CXaml_CData_CIBindingOperations __x_ABI_CWindows_CUI_CXaml_CData_CIBindingOperations;
typedef interface __x_ABI_CWindows_CUI_CXaml_CData_CIBindingOperationsStatics __x_ABI_CWindows_CUI_CXaml_CData_CIBindingOperationsStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CData_CICollectionView __x_ABI_CWindows_CUI_CXaml_CData_CICollectionView;
typedef interface __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewFactory __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewFactory;
typedef interface __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewGroup __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewGroup;
typedef interface __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewSource __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewSource;
typedef interface __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewSourceStatics __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewSourceStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventArgs __x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventArgs;
typedef interface __x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventArgsFactory __x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventArgsFactory;
typedef interface __x_ABI_CWindows_CUI_CXaml_CData_CICustomProperty __x_ABI_CWindows_CUI_CXaml_CData_CICustomProperty;
typedef interface __x_ABI_CWindows_CUI_CXaml_CData_CICustomPropertyProvider __x_ABI_CWindows_CUI_CXaml_CData_CICustomPropertyProvider;
typedef interface __x_ABI_CWindows_CUI_CXaml_CData_CIItemIndexRange __x_ABI_CWindows_CUI_CXaml_CData_CIItemIndexRange;
typedef interface __x_ABI_CWindows_CUI_CXaml_CData_CIItemIndexRangeFactory __x_ABI_CWindows_CUI_CXaml_CData_CIItemIndexRangeFactory;
typedef interface __x_ABI_CWindows_CUI_CXaml_CData_CIItemsRangeInfo __x_ABI_CWindows_CUI_CXaml_CData_CIItemsRangeInfo;
typedef interface __x_ABI_CWindows_CUI_CXaml_CData_CINotifyPropertyChanged __x_ABI_CWindows_CUI_CXaml_CData_CINotifyPropertyChanged;
typedef interface __x_ABI_CWindows_CUI_CXaml_CData_CIPropertyChangedEventArgs __x_ABI_CWindows_CUI_CXaml_CData_CIPropertyChangedEventArgs;
typedef interface __x_ABI_CWindows_CUI_CXaml_CData_CIPropertyChangedEventArgsFactory __x_ABI_CWindows_CUI_CXaml_CData_CIPropertyChangedEventArgsFactory;
typedef interface __x_ABI_CWindows_CUI_CXaml_CData_CIRelativeSource __x_ABI_CWindows_CUI_CXaml_CData_CIRelativeSource;
typedef interface __x_ABI_CWindows_CUI_CXaml_CData_CIRelativeSourceFactory __x_ABI_CWindows_CUI_CXaml_CData_CIRelativeSourceFactory;
typedef interface __x_ABI_CWindows_CUI_CXaml_CData_CISelectionInfo __x_ABI_CWindows_CUI_CXaml_CData_CISelectionInfo;
typedef interface __x_ABI_CWindows_CUI_CXaml_CData_CISupportIncrementalLoading __x_ABI_CWindows_CUI_CXaml_CData_CISupportIncrementalLoading;
typedef interface __x_ABI_CWindows_CUI_CXaml_CData_CIValueConverter __x_ABI_CWindows_CUI_CXaml_CData_CIValueConverter;
typedef interface __FIIterator_1_Windows__CUI__CXaml__CData__CItemIndexRange __FIIterator_1_Windows__CUI__CXaml__CData__CItemIndexRange;
EXTERN_C const IID IID___FIIterator_1_Windows__CUI__CXaml__CData__CItemIndexRange;
typedef struct __FIIterator_1_Windows__CUI__CXaml__CData__CItemIndexRangeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CUI__CXaml__CData__CItemIndexRange * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CData__CItemIndexRange * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CData__CItemIndexRange * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CData__CItemIndexRange * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CData__CItemIndexRange * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CData__CItemIndexRange * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CData__CItemIndexRange * This, __RPC__out __x_ABI_CWindows_CUI_CXaml_CData_CIItemIndexRange * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CData__CItemIndexRange * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CData__CItemIndexRange * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CData__CItemIndexRange * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CXaml_CData_CIItemIndexRange * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CUI__CXaml__CData__CItemIndexRangeVtbl;
interface __FIIterator_1_Windows__CUI__CXaml__CData__CItemIndexRange
{
    CONST_VTBL struct __FIIterator_1_Windows__CUI__CXaml__CData__CItemIndexRangeVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CUI__CXaml__CData__CItemIndexRange __FIIterable_1_Windows__CUI__CXaml__CData__CItemIndexRange;
EXTERN_C const IID IID___FIIterable_1_Windows__CUI__CXaml__CData__CItemIndexRange;
typedef struct __FIIterable_1_Windows__CUI__CXaml__CData__CItemIndexRangeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CUI__CXaml__CData__CItemIndexRange * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CData__CItemIndexRange * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CData__CItemIndexRange * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CData__CItemIndexRange * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CData__CItemIndexRange * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CData__CItemIndexRange * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CData__CItemIndexRange * This, __RPC__deref_out_opt __FIIterator_1_Windows__CUI__CXaml__CData__CItemIndexRange **first);
    END_INTERFACE
} __FIIterable_1_Windows__CUI__CXaml__CData__CItemIndexRangeVtbl;
interface __FIIterable_1_Windows__CUI__CXaml__CData__CItemIndexRange
{
    CONST_VTBL struct __FIIterable_1_Windows__CUI__CXaml__CData__CItemIndexRangeVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CUI__CXaml__CData__CItemIndexRange __FIVectorView_1_Windows__CUI__CXaml__CData__CItemIndexRange;
EXTERN_C const IID IID___FIVectorView_1_Windows__CUI__CXaml__CData__CItemIndexRange;
typedef struct __FIVectorView_1_Windows__CUI__CXaml__CData__CItemIndexRangeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CData__CItemIndexRange * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CData__CItemIndexRange * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CData__CItemIndexRange * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CData__CItemIndexRange * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CData__CItemIndexRange * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CData__CItemIndexRange * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CData__CItemIndexRange * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CUI_CXaml_CData_CIItemIndexRange * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CData__CItemIndexRange * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CData__CItemIndexRange * This,
                       __x_ABI_CWindows_CUI_CXaml_CData_CIItemIndexRange * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CData__CItemIndexRange * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CXaml_CData_CIItemIndexRange * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CUI__CXaml__CData__CItemIndexRangeVtbl;
interface __FIVectorView_1_Windows__CUI__CXaml__CData__CItemIndexRange
{
    CONST_VTBL struct __FIVectorView_1_Windows__CUI__CXaml__CData__CItemIndexRangeVtbl *lpVtbl;
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
struct __x_ABI_CWindows_CUI_CXaml_CData_CLoadMoreItemsResult;
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CData__CLoadMoreItemsResult __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CData__CLoadMoreItemsResult;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CData__CLoadMoreItemsResult;
typedef interface __FIAsyncOperation_1_Windows__CUI__CXaml__CData__CLoadMoreItemsResult __FIAsyncOperation_1_Windows__CUI__CXaml__CData__CLoadMoreItemsResult;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CData__CLoadMoreItemsResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CData__CLoadMoreItemsResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CData__CLoadMoreItemsResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CData__CLoadMoreItemsResult * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CData__CLoadMoreItemsResult * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CUI__CXaml__CData__CLoadMoreItemsResult *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CData__CLoadMoreItemsResultVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CData__CLoadMoreItemsResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CData__CLoadMoreItemsResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CUI__CXaml__CData__CLoadMoreItemsResult __FIAsyncOperation_1_Windows__CUI__CXaml__CData__CLoadMoreItemsResult;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CUI__CXaml__CData__CLoadMoreItemsResult;
typedef struct __FIAsyncOperation_1_Windows__CUI__CXaml__CData__CLoadMoreItemsResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CXaml__CData__CLoadMoreItemsResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CXaml__CData__CLoadMoreItemsResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CXaml__CData__CLoadMoreItemsResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CXaml__CData__CLoadMoreItemsResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CXaml__CData__CLoadMoreItemsResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CXaml__CData__CLoadMoreItemsResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CXaml__CData__CLoadMoreItemsResult * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CData__CLoadMoreItemsResult *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CXaml__CData__CLoadMoreItemsResult * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CData__CLoadMoreItemsResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CXaml__CData__CLoadMoreItemsResult * This, __RPC__out struct __x_ABI_CWindows_CUI_CXaml_CData_CLoadMoreItemsResult *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CUI__CXaml__CData__CLoadMoreItemsResultVtbl;
interface __FIAsyncOperation_1_Windows__CUI__CXaml__CData__CLoadMoreItemsResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CUI__CXaml__CData__CLoadMoreItemsResultVtbl *lpVtbl;
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
typedef interface __FIIterator_1_IInspectable __FIIterator_1_IInspectable;
EXTERN_C const IID IID___FIIterator_1_IInspectable;
typedef struct __FIIterator_1_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_IInspectable * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_IInspectable * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_IInspectable * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_IInspectable * This, __RPC__out IInspectable * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_IInspectable * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_IInspectable * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_IInspectable * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) IInspectable * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_IInspectableVtbl;
interface __FIIterator_1_IInspectable
{
    CONST_VTBL struct __FIIterator_1_IInspectableVtbl *lpVtbl;
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
typedef interface __FIIterable_1_IInspectable __FIIterable_1_IInspectable;
EXTERN_C const IID IID___FIIterable_1_IInspectable;
typedef struct __FIIterable_1_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_IInspectable * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_IInspectable * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_IInspectable * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_IInspectable * This, __RPC__deref_out_opt __FIIterator_1_IInspectable **first);
    END_INTERFACE
} __FIIterable_1_IInspectableVtbl;
interface __FIIterable_1_IInspectable
{
    CONST_VTBL struct __FIIterable_1_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_IInspectable __FIVectorView_1_IInspectable;
EXTERN_C const IID IID___FIVectorView_1_IInspectable;
typedef struct __FIVectorView_1_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_IInspectable * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_IInspectable * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_IInspectable * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_IInspectable * This,
                                                    unsigned int index,
                                                             __RPC__out IInspectable * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_IInspectable * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_IInspectable * This,
                       IInspectable * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_IInspectable * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) IInspectable * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_IInspectableVtbl;
interface __FIVectorView_1_IInspectable
{
    CONST_VTBL struct __FIVectorView_1_IInspectableVtbl *lpVtbl;
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
typedef interface __FIVector_1_IInspectable __FIVector_1_IInspectable;
EXTERN_C const IID IID___FIVector_1_IInspectable;
typedef struct __FIVector_1_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_IInspectable * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_IInspectable * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_IInspectable * This, __RPC__deref_out_opt IInspectable * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_IInspectable * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_IInspectable * This,
                   unsigned int index,
                            __RPC__deref_out_opt IInspectable * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_IInspectable * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_IInspectable * This, __RPC__deref_out_opt __FIVectorView_1_IInspectable **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_IInspectable * This,
                   __RPC__in IInspectable * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_IInspectable * This,
                   unsigned int index,
                   __RPC__in IInspectable * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_IInspectable * This,
                   unsigned int index,
                   __RPC__in IInspectable * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_IInspectable * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_IInspectable * This, __RPC__in IInspectable * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_IInspectable * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) IInspectable * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_IInspectable * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) IInspectable * *value);
    END_INTERFACE
} __FIVector_1_IInspectableVtbl;
interface __FIVector_1_IInspectable
{
    CONST_VTBL struct __FIVector_1_IInspectableVtbl *lpVtbl;
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
typedef interface __FVectorChangedEventHandler_1_IInspectable __FVectorChangedEventHandler_1_IInspectable;
EXTERN_C const IID IID___FVectorChangedEventHandler_1_IInspectable;
typedef interface __FIObservableVector_1_IInspectable __FIObservableVector_1_IInspectable;
typedef struct __FVectorChangedEventHandler_1_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FVectorChangedEventHandler_1_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FVectorChangedEventHandler_1_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FVectorChangedEventHandler_1_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FVectorChangedEventHandler_1_IInspectable * This,
                   __RPC__in_opt __FIObservableVector_1_IInspectable *sender,
                   __RPC__in_opt __x_ABI_CWindows_CFoundation_CCollections_CIVectorChangedEventArgs *e);
    END_INTERFACE
} __FVectorChangedEventHandler_1_IInspectableVtbl;
interface __FVectorChangedEventHandler_1_IInspectable
{
    CONST_VTBL struct __FVectorChangedEventHandler_1_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FIObservableVector_1_IInspectable __FIObservableVector_1_IInspectable;
EXTERN_C const IID IID___FIObservableVector_1_IInspectable;
typedef struct __FIObservableVector_1_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIObservableVector_1_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIObservableVector_1_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIObservableVector_1_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIObservableVector_1_IInspectable * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIObservableVector_1_IInspectable * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIObservableVector_1_IInspectable * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *add_VectorChanged )(__RPC__in __FIObservableVector_1_IInspectable * This,
                   __RPC__in_opt __FVectorChangedEventHandler_1_IInspectable *handler,
                            __RPC__out EventRegistrationToken *token);
    HRESULT ( STDMETHODCALLTYPE *remove_VectorChanged )(__RPC__in __FIObservableVector_1_IInspectable * This, EventRegistrationToken token);
    END_INTERFACE
} __FIObservableVector_1_IInspectableVtbl;
interface __FIObservableVector_1_IInspectable
{
    CONST_VTBL struct __FIObservableVector_1_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> add_VectorChanged(This,handler,token) )
    ( (This)->lpVtbl -> remove_VectorChanged(This,token) )
typedef interface __FIEventHandler_1_IInspectable __FIEventHandler_1_IInspectable;
EXTERN_C const IID IID___FIEventHandler_1_IInspectable;
typedef struct __FIEventHandler_1_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIEventHandler_1_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIEventHandler_1_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIEventHandler_1_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIEventHandler_1_IInspectable * This, __RPC__in_opt IInspectable *sender, __RPC__in_opt IInspectable * *e);
    END_INTERFACE
} __FIEventHandler_1_IInspectableVtbl;
interface __FIEventHandler_1_IInspectable
{
    CONST_VTBL struct __FIEventHandler_1_IInspectableVtbl *lpVtbl;
};
        ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl -> AddRef(This) )
        ( (This)->lpVtbl -> Release(This) )
        ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __x_ABI_CWindows_CFoundation_CIClosable __x_ABI_CWindows_CFoundation_CIClosable;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIDependencyObject __x_ABI_CWindows_CUI_CXaml_CIDependencyObject;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty;
typedef struct __x_ABI_CWindows_CUI_CXaml_CInterop_CTypeName __x_ABI_CWindows_CUI_CXaml_CInterop_CTypeName;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIPropertyPath __x_ABI_CWindows_CUI_CXaml_CIPropertyPath;
typedef enum __x_ABI_CWindows_CUI_CXaml_CData_CBindingMode __x_ABI_CWindows_CUI_CXaml_CData_CBindingMode;
typedef enum __x_ABI_CWindows_CUI_CXaml_CData_CRelativeSourceMode __x_ABI_CWindows_CUI_CXaml_CData_CRelativeSourceMode;
typedef enum __x_ABI_CWindows_CUI_CXaml_CData_CUpdateSourceTrigger __x_ABI_CWindows_CUI_CXaml_CData_CUpdateSourceTrigger;
typedef struct __x_ABI_CWindows_CUI_CXaml_CData_CLoadMoreItemsResult __x_ABI_CWindows_CUI_CXaml_CData_CLoadMoreItemsResult;
enum __x_ABI_CWindows_CUI_CXaml_CData_CBindingMode
{
    BindingMode_OneWay = 1,
    BindingMode_OneTime = 2,
    BindingMode_TwoWay = 3,
};
enum __x_ABI_CWindows_CUI_CXaml_CData_CRelativeSourceMode
{
    RelativeSourceMode_None = 0,
    RelativeSourceMode_TemplatedParent = 1,
    RelativeSourceMode_Self = 2,
};
enum __x_ABI_CWindows_CUI_CXaml_CData_CUpdateSourceTrigger
{
    UpdateSourceTrigger_Default = 0,
    UpdateSourceTrigger_PropertyChanged = 1,
    UpdateSourceTrigger_Explicit = 2,
    UpdateSourceTrigger_LostFocus = 3,
};
struct __x_ABI_CWindows_CUI_CXaml_CData_CLoadMoreItemsResult
{
    UINT32 Count;
};
typedef struct __x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventHandler * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject);
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventHandler * This);
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventHandler * This,
                  __RPC__in_opt IInspectable * sender,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventArgs * e
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventHandlerVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventHandlerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
    ( (This)->lpVtbl->Invoke(This,sender,e) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventHandler;
typedef struct __x_ABI_CWindows_CUI_CXaml_CData_CIPropertyChangedEventHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIPropertyChangedEventHandler * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject);
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIPropertyChangedEventHandler * This);
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIPropertyChangedEventHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CUI_CXaml_CData_CIPropertyChangedEventHandler * This,
                  __RPC__in_opt IInspectable * sender,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CData_CIPropertyChangedEventArgs * e
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CData_CIPropertyChangedEventHandlerVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CData_CIPropertyChangedEventHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CData_CIPropertyChangedEventHandlerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
    ( (This)->lpVtbl->Invoke(This,sender,e) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CData_CIPropertyChangedEventHandler;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Data_IBinding[] = L"Windows.UI.Xaml.Data.IBinding";
typedef struct __x_ABI_CWindows_CUI_CXaml_CData_CIBindingVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIBinding * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIBinding * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIBinding * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIBinding * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIBinding * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIBinding * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Path )(
        __x_ABI_CWindows_CUI_CXaml_CData_CIBinding * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIPropertyPath * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Path )(
        __x_ABI_CWindows_CUI_CXaml_CData_CIBinding * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIPropertyPath * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Mode )(
        __x_ABI_CWindows_CUI_CXaml_CData_CIBinding * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CData_CBindingMode * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Mode )(
        __x_ABI_CWindows_CUI_CXaml_CData_CIBinding * This,
                  __x_ABI_CWindows_CUI_CXaml_CData_CBindingMode value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Source )(
        __x_ABI_CWindows_CUI_CXaml_CData_CIBinding * This,
                           __RPC__deref_out_opt IInspectable * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Source )(
        __x_ABI_CWindows_CUI_CXaml_CData_CIBinding * This,
                  __RPC__in_opt IInspectable * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RelativeSource )(
        __x_ABI_CWindows_CUI_CXaml_CData_CIBinding * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CData_CIRelativeSource * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_RelativeSource )(
        __x_ABI_CWindows_CUI_CXaml_CData_CIBinding * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CData_CIRelativeSource * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ElementName )(
        __x_ABI_CWindows_CUI_CXaml_CData_CIBinding * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ElementName )(
        __x_ABI_CWindows_CUI_CXaml_CData_CIBinding * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Converter )(
        __x_ABI_CWindows_CUI_CXaml_CData_CIBinding * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CData_CIValueConverter * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Converter )(
        __x_ABI_CWindows_CUI_CXaml_CData_CIBinding * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CData_CIValueConverter * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ConverterParameter )(
        __x_ABI_CWindows_CUI_CXaml_CData_CIBinding * This,
                           __RPC__deref_out_opt IInspectable * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ConverterParameter )(
        __x_ABI_CWindows_CUI_CXaml_CData_CIBinding * This,
                  __RPC__in_opt IInspectable * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ConverterLanguage )(
        __x_ABI_CWindows_CUI_CXaml_CData_CIBinding * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ConverterLanguage )(
        __x_ABI_CWindows_CUI_CXaml_CData_CIBinding * This,
                  __RPC__in HSTRING value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CData_CIBindingVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CData_CIBinding
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CData_CIBindingVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Path(This,value) )
    ( (This)->lpVtbl->put_Path(This,value) )
    ( (This)->lpVtbl->get_Mode(This,value) )
    ( (This)->lpVtbl->put_Mode(This,value) )
    ( (This)->lpVtbl->get_Source(This,value) )
    ( (This)->lpVtbl->put_Source(This,value) )
    ( (This)->lpVtbl->get_RelativeSource(This,value) )
    ( (This)->lpVtbl->put_RelativeSource(This,value) )
    ( (This)->lpVtbl->get_ElementName(This,value) )
    ( (This)->lpVtbl->put_ElementName(This,value) )
    ( (This)->lpVtbl->get_Converter(This,value) )
    ( (This)->lpVtbl->put_Converter(This,value) )
    ( (This)->lpVtbl->get_ConverterParameter(This,value) )
    ( (This)->lpVtbl->put_ConverterParameter(This,value) )
    ( (This)->lpVtbl->get_ConverterLanguage(This,value) )
    ( (This)->lpVtbl->put_ConverterLanguage(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CData_CIBinding;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Data_IBinding2[] = L"Windows.UI.Xaml.Data.IBinding2";
typedef struct __x_ABI_CWindows_CUI_CXaml_CData_CIBinding2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIBinding2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIBinding2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIBinding2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIBinding2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIBinding2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIBinding2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_FallbackValue )(
        __x_ABI_CWindows_CUI_CXaml_CData_CIBinding2 * This,
                           __RPC__deref_out_opt IInspectable * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_FallbackValue )(
        __x_ABI_CWindows_CUI_CXaml_CData_CIBinding2 * This,
                  __RPC__in_opt IInspectable * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TargetNullValue )(
        __x_ABI_CWindows_CUI_CXaml_CData_CIBinding2 * This,
                           __RPC__deref_out_opt IInspectable * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_TargetNullValue )(
        __x_ABI_CWindows_CUI_CXaml_CData_CIBinding2 * This,
                  __RPC__in_opt IInspectable * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_UpdateSourceTrigger )(
        __x_ABI_CWindows_CUI_CXaml_CData_CIBinding2 * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CData_CUpdateSourceTrigger * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_UpdateSourceTrigger )(
        __x_ABI_CWindows_CUI_CXaml_CData_CIBinding2 * This,
                  __x_ABI_CWindows_CUI_CXaml_CData_CUpdateSourceTrigger value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CData_CIBinding2Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CData_CIBinding2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CData_CIBinding2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_FallbackValue(This,value) )
    ( (This)->lpVtbl->put_FallbackValue(This,value) )
    ( (This)->lpVtbl->get_TargetNullValue(This,value) )
    ( (This)->lpVtbl->put_TargetNullValue(This,value) )
    ( (This)->lpVtbl->get_UpdateSourceTrigger(This,value) )
    ( (This)->lpVtbl->put_UpdateSourceTrigger(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CData_CIBinding2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Data_IBindingBase[] = L"Windows.UI.Xaml.Data.IBindingBase";
typedef struct __x_ABI_CWindows_CUI_CXaml_CData_CIBindingBaseVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIBindingBase * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIBindingBase * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIBindingBase * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIBindingBase * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIBindingBase * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIBindingBase * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CData_CIBindingBaseVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CData_CIBindingBase
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CData_CIBindingBaseVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CData_CIBindingBase;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Data_IBindingBaseFactory[] = L"Windows.UI.Xaml.Data.IBindingBaseFactory";
typedef struct __x_ABI_CWindows_CUI_CXaml_CData_CIBindingBaseFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIBindingBaseFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIBindingBaseFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIBindingBaseFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIBindingBaseFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIBindingBaseFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIBindingBaseFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CUI_CXaml_CData_CIBindingBaseFactory * This,
                  __RPC__in_opt IInspectable * baseInterface,
                   __RPC__deref_out_opt IInspectable * * innerInterface,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CData_CIBindingBase * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CData_CIBindingBaseFactoryVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CData_CIBindingBaseFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CData_CIBindingBaseFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateInstance(This,baseInterface,innerInterface,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CData_CIBindingBaseFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Data_IBindingExpression[] = L"Windows.UI.Xaml.Data.IBindingExpression";
typedef struct __x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpressionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpression * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpression * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpression * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpression * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpression * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpression * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DataItem )(
        __x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpression * This,
                           __RPC__deref_out_opt IInspectable * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ParentBinding )(
        __x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpression * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CData_CIBinding * * value
        );
    HRESULT ( STDMETHODCALLTYPE *UpdateSource )(
        __x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpression * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpressionVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpression
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpressionVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DataItem(This,value) )
    ( (This)->lpVtbl->get_ParentBinding(This,value) )
    ( (This)->lpVtbl->UpdateSource(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpression;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Data_IBindingExpressionBase[] = L"Windows.UI.Xaml.Data.IBindingExpressionBase";
typedef struct __x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpressionBaseVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpressionBase * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpressionBase * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpressionBase * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpressionBase * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpressionBase * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpressionBase * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpressionBaseVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpressionBase
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpressionBaseVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpressionBase;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Data_IBindingExpressionBaseFactory[] = L"Windows.UI.Xaml.Data.IBindingExpressionBaseFactory";
typedef struct __x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpressionBaseFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpressionBaseFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpressionBaseFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpressionBaseFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpressionBaseFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpressionBaseFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpressionBaseFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpressionBaseFactoryVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpressionBaseFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpressionBaseFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpressionBaseFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Data_IBindingExpressionFactory[] = L"Windows.UI.Xaml.Data.IBindingExpressionFactory";
typedef struct __x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpressionFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpressionFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpressionFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpressionFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpressionFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpressionFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpressionFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpressionFactoryVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpressionFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpressionFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpressionFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Data_IBindingFactory[] = L"Windows.UI.Xaml.Data.IBindingFactory";
typedef struct __x_ABI_CWindows_CUI_CXaml_CData_CIBindingFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIBindingFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIBindingFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIBindingFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIBindingFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIBindingFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIBindingFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CUI_CXaml_CData_CIBindingFactory * This,
                  __RPC__in_opt IInspectable * baseInterface,
                   __RPC__deref_out_opt IInspectable * * innerInterface,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CData_CIBinding * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CData_CIBindingFactoryVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CData_CIBindingFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CData_CIBindingFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateInstance(This,baseInterface,innerInterface,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CData_CIBindingFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Data_IBindingOperations[] = L"Windows.UI.Xaml.Data.IBindingOperations";
typedef struct __x_ABI_CWindows_CUI_CXaml_CData_CIBindingOperationsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIBindingOperations * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIBindingOperations * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIBindingOperations * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIBindingOperations * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIBindingOperations * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIBindingOperations * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CData_CIBindingOperationsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CData_CIBindingOperations
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CData_CIBindingOperationsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CData_CIBindingOperations;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Data_IBindingOperationsStatics[] = L"Windows.UI.Xaml.Data.IBindingOperationsStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CData_CIBindingOperationsStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIBindingOperationsStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIBindingOperationsStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIBindingOperationsStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIBindingOperationsStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIBindingOperationsStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIBindingOperationsStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *SetBinding )(
        __x_ABI_CWindows_CUI_CXaml_CData_CIBindingOperationsStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * target,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * dp,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CData_CIBindingBase * binding
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CData_CIBindingOperationsStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CData_CIBindingOperationsStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CData_CIBindingOperationsStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->SetBinding(This,target,dp,binding) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CData_CIBindingOperationsStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Data_ICollectionView[] = L"Windows.UI.Xaml.Data.ICollectionView";
typedef struct __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CICollectionView * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CICollectionView * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CICollectionView * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CICollectionView * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CICollectionView * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CICollectionView * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_CurrentItem )(
        __x_ABI_CWindows_CUI_CXaml_CData_CICollectionView * This,
                           __RPC__deref_out_opt IInspectable * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CurrentPosition )(
        __x_ABI_CWindows_CUI_CXaml_CData_CICollectionView * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsCurrentAfterLast )(
        __x_ABI_CWindows_CUI_CXaml_CData_CICollectionView * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsCurrentBeforeFirst )(
        __x_ABI_CWindows_CUI_CXaml_CData_CICollectionView * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CollectionGroups )(
        __x_ABI_CWindows_CUI_CXaml_CData_CICollectionView * This,
                           __RPC__deref_out_opt __FIObservableVector_1_IInspectable * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HasMoreItems )(
        __x_ABI_CWindows_CUI_CXaml_CData_CICollectionView * This,
                           __RPC__out boolean * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_CurrentChanged )(
        __x_ABI_CWindows_CUI_CXaml_CData_CICollectionView * This,
                  __RPC__in_opt __FIEventHandler_1_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_CurrentChanged )(
        __x_ABI_CWindows_CUI_CXaml_CData_CICollectionView * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_CurrentChanging )(
        __x_ABI_CWindows_CUI_CXaml_CData_CICollectionView * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventHandler * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_CurrentChanging )(
        __x_ABI_CWindows_CUI_CXaml_CData_CICollectionView * This,
                  EventRegistrationToken token
        );
    HRESULT ( STDMETHODCALLTYPE *MoveCurrentTo )(
        __x_ABI_CWindows_CUI_CXaml_CData_CICollectionView * This,
                  __RPC__in_opt IInspectable * item,
                           __RPC__out boolean * result
        );
    HRESULT ( STDMETHODCALLTYPE *MoveCurrentToPosition )(
        __x_ABI_CWindows_CUI_CXaml_CData_CICollectionView * This,
                  INT32 index,
                           __RPC__out boolean * result
        );
    HRESULT ( STDMETHODCALLTYPE *MoveCurrentToFirst )(
        __x_ABI_CWindows_CUI_CXaml_CData_CICollectionView * This,
                           __RPC__out boolean * result
        );
    HRESULT ( STDMETHODCALLTYPE *MoveCurrentToLast )(
        __x_ABI_CWindows_CUI_CXaml_CData_CICollectionView * This,
                           __RPC__out boolean * result
        );
    HRESULT ( STDMETHODCALLTYPE *MoveCurrentToNext )(
        __x_ABI_CWindows_CUI_CXaml_CData_CICollectionView * This,
                           __RPC__out boolean * result
        );
    HRESULT ( STDMETHODCALLTYPE *MoveCurrentToPrevious )(
        __x_ABI_CWindows_CUI_CXaml_CData_CICollectionView * This,
                           __RPC__out boolean * result
        );
    HRESULT ( STDMETHODCALLTYPE *LoadMoreItemsAsync )(
        __x_ABI_CWindows_CUI_CXaml_CData_CICollectionView * This,
                  UINT32 count,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CUI__CXaml__CData__CLoadMoreItemsResult * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CData_CICollectionView
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_CurrentItem(This,value) )
    ( (This)->lpVtbl->get_CurrentPosition(This,value) )
    ( (This)->lpVtbl->get_IsCurrentAfterLast(This,value) )
    ( (This)->lpVtbl->get_IsCurrentBeforeFirst(This,value) )
    ( (This)->lpVtbl->get_CollectionGroups(This,value) )
    ( (This)->lpVtbl->get_HasMoreItems(This,value) )
    ( (This)->lpVtbl->add_CurrentChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_CurrentChanged(This,token) )
    ( (This)->lpVtbl->add_CurrentChanging(This,handler,token) )
    ( (This)->lpVtbl->remove_CurrentChanging(This,token) )
    ( (This)->lpVtbl->MoveCurrentTo(This,item,result) )
    ( (This)->lpVtbl->MoveCurrentToPosition(This,index,result) )
    ( (This)->lpVtbl->MoveCurrentToFirst(This,result) )
    ( (This)->lpVtbl->MoveCurrentToLast(This,result) )
    ( (This)->lpVtbl->MoveCurrentToNext(This,result) )
    ( (This)->lpVtbl->MoveCurrentToPrevious(This,result) )
    ( (This)->lpVtbl->LoadMoreItemsAsync(This,count,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CData_CICollectionView;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Data_ICollectionViewFactory[] = L"Windows.UI.Xaml.Data.ICollectionViewFactory";
typedef struct __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateView )(
        __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewFactory * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CData_CICollectionView * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewFactoryVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateView(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Data_ICollectionViewGroup[] = L"Windows.UI.Xaml.Data.ICollectionViewGroup";
typedef struct __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewGroupVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewGroup * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewGroup * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewGroup * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewGroup * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewGroup * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewGroup * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Group )(
        __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewGroup * This,
                           __RPC__deref_out_opt IInspectable * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_GroupItems )(
        __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewGroup * This,
                           __RPC__deref_out_opt __FIObservableVector_1_IInspectable * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewGroupVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewGroup
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewGroupVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Group(This,value) )
    ( (This)->lpVtbl->get_GroupItems(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewGroup;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Data_ICollectionViewSource[] = L"Windows.UI.Xaml.Data.ICollectionViewSource";
typedef struct __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewSourceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewSource * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewSource * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewSource * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewSource * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewSource * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewSource * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Source )(
        __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewSource * This,
                           __RPC__deref_out_opt IInspectable * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Source )(
        __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewSource * This,
                  __RPC__in_opt IInspectable * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_View )(
        __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewSource * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CData_CICollectionView * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsSourceGrouped )(
        __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewSource * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsSourceGrouped )(
        __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewSource * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ItemsPath )(
        __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewSource * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIPropertyPath * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ItemsPath )(
        __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewSource * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIPropertyPath * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewSourceVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewSource
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewSourceVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Source(This,value) )
    ( (This)->lpVtbl->put_Source(This,value) )
    ( (This)->lpVtbl->get_View(This,value) )
    ( (This)->lpVtbl->get_IsSourceGrouped(This,value) )
    ( (This)->lpVtbl->put_IsSourceGrouped(This,value) )
    ( (This)->lpVtbl->get_ItemsPath(This,value) )
    ( (This)->lpVtbl->put_ItemsPath(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewSource;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Data_ICollectionViewSourceStatics[] = L"Windows.UI.Xaml.Data.ICollectionViewSourceStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewSourceStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewSourceStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewSourceStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewSourceStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewSourceStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewSourceStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewSourceStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_SourceProperty )(
        __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewSourceStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ViewProperty )(
        __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewSourceStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsSourceGroupedProperty )(
        __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewSourceStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ItemsPathProperty )(
        __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewSourceStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewSourceStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewSourceStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewSourceStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_SourceProperty(This,value) )
    ( (This)->lpVtbl->get_ViewProperty(This,value) )
    ( (This)->lpVtbl->get_IsSourceGroupedProperty(This,value) )
    ( (This)->lpVtbl->get_ItemsPathProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewSourceStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Data_ICurrentChangingEventArgs[] = L"Windows.UI.Xaml.Data.ICurrentChangingEventArgs";
typedef struct __x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Cancel )(
        __x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventArgs * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Cancel )(
        __x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventArgs * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsCancelable )(
        __x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventArgs * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Cancel(This,value) )
    ( (This)->lpVtbl->put_Cancel(This,value) )
    ( (This)->lpVtbl->get_IsCancelable(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Data_ICurrentChangingEventArgsFactory[] = L"Windows.UI.Xaml.Data.ICurrentChangingEventArgsFactory";
typedef struct __x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventArgsFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventArgsFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventArgsFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventArgsFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventArgsFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventArgsFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventArgsFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventArgsFactory * This,
                  __RPC__in_opt IInspectable * baseInterface,
                   __RPC__deref_out_opt IInspectable * * innerInterface,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventArgs * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateWithCancelableParameter )(
        __x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventArgsFactory * This,
                  boolean isCancelable,
                  __RPC__in_opt IInspectable * baseInterface,
                   __RPC__deref_out_opt IInspectable * * innerInterface,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventArgs * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventArgsFactoryVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventArgsFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventArgsFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateInstance(This,baseInterface,innerInterface,value) )
    ( (This)->lpVtbl->CreateWithCancelableParameter(This,isCancelable,baseInterface,innerInterface,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventArgsFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Data_ICustomProperty[] = L"Windows.UI.Xaml.Data.ICustomProperty";
typedef struct __x_ABI_CWindows_CUI_CXaml_CData_CICustomPropertyVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CICustomProperty * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CICustomProperty * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CICustomProperty * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CICustomProperty * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CICustomProperty * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CICustomProperty * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Type )(
        __x_ABI_CWindows_CUI_CXaml_CData_CICustomProperty * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CInterop_CTypeName * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Name )(
        __x_ABI_CWindows_CUI_CXaml_CData_CICustomProperty * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetValue )(
        __x_ABI_CWindows_CUI_CXaml_CData_CICustomProperty * This,
                  __RPC__in_opt IInspectable * target,
                           __RPC__deref_out_opt IInspectable * * result
        );
    HRESULT ( STDMETHODCALLTYPE *SetValue )(
        __x_ABI_CWindows_CUI_CXaml_CData_CICustomProperty * This,
                  __RPC__in_opt IInspectable * target,
                  __RPC__in_opt IInspectable * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetIndexedValue )(
        __x_ABI_CWindows_CUI_CXaml_CData_CICustomProperty * This,
                  __RPC__in_opt IInspectable * target,
                  __RPC__in_opt IInspectable * index,
                           __RPC__deref_out_opt IInspectable * * result
        );
    HRESULT ( STDMETHODCALLTYPE *SetIndexedValue )(
        __x_ABI_CWindows_CUI_CXaml_CData_CICustomProperty * This,
                  __RPC__in_opt IInspectable * target,
                  __RPC__in_opt IInspectable * value,
                  __RPC__in_opt IInspectable * index
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CanWrite )(
        __x_ABI_CWindows_CUI_CXaml_CData_CICustomProperty * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CanRead )(
        __x_ABI_CWindows_CUI_CXaml_CData_CICustomProperty * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CData_CICustomPropertyVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CData_CICustomProperty
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CData_CICustomPropertyVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Type(This,value) )
    ( (This)->lpVtbl->get_Name(This,value) )
    ( (This)->lpVtbl->GetValue(This,target,result) )
    ( (This)->lpVtbl->SetValue(This,target,value) )
    ( (This)->lpVtbl->GetIndexedValue(This,target,index,result) )
    ( (This)->lpVtbl->SetIndexedValue(This,target,value,index) )
    ( (This)->lpVtbl->get_CanWrite(This,value) )
    ( (This)->lpVtbl->get_CanRead(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CData_CICustomProperty;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Data_ICustomPropertyProvider[] = L"Windows.UI.Xaml.Data.ICustomPropertyProvider";
typedef struct __x_ABI_CWindows_CUI_CXaml_CData_CICustomPropertyProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CICustomPropertyProvider * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CICustomPropertyProvider * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CICustomPropertyProvider * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CICustomPropertyProvider * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CICustomPropertyProvider * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CICustomPropertyProvider * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetCustomProperty )(
        __x_ABI_CWindows_CUI_CXaml_CData_CICustomPropertyProvider * This,
                  __RPC__in HSTRING name,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CData_CICustomProperty * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetIndexedProperty )(
        __x_ABI_CWindows_CUI_CXaml_CData_CICustomPropertyProvider * This,
                  __RPC__in HSTRING name,
                  __x_ABI_CWindows_CUI_CXaml_CInterop_CTypeName type,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CData_CICustomProperty * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetStringRepresentation )(
        __x_ABI_CWindows_CUI_CXaml_CData_CICustomPropertyProvider * This,
                           __RPC__deref_out_opt HSTRING * result
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Type )(
        __x_ABI_CWindows_CUI_CXaml_CData_CICustomPropertyProvider * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CInterop_CTypeName * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CData_CICustomPropertyProviderVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CData_CICustomPropertyProvider
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CData_CICustomPropertyProviderVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetCustomProperty(This,name,result) )
    ( (This)->lpVtbl->GetIndexedProperty(This,name,type,result) )
    ( (This)->lpVtbl->GetStringRepresentation(This,result) )
    ( (This)->lpVtbl->get_Type(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CData_CICustomPropertyProvider;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Data_IItemIndexRange[] = L"Windows.UI.Xaml.Data.IItemIndexRange";
typedef struct __x_ABI_CWindows_CUI_CXaml_CData_CIItemIndexRangeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIItemIndexRange * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIItemIndexRange * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIItemIndexRange * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIItemIndexRange * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIItemIndexRange * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIItemIndexRange * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_FirstIndex )(
        __x_ABI_CWindows_CUI_CXaml_CData_CIItemIndexRange * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Length )(
        __x_ABI_CWindows_CUI_CXaml_CData_CIItemIndexRange * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LastIndex )(
        __x_ABI_CWindows_CUI_CXaml_CData_CIItemIndexRange * This,
                           __RPC__out INT32 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CData_CIItemIndexRangeVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CData_CIItemIndexRange
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CData_CIItemIndexRangeVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_FirstIndex(This,value) )
    ( (This)->lpVtbl->get_Length(This,value) )
    ( (This)->lpVtbl->get_LastIndex(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CData_CIItemIndexRange;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Data_IItemIndexRangeFactory[] = L"Windows.UI.Xaml.Data.IItemIndexRangeFactory";
typedef struct __x_ABI_CWindows_CUI_CXaml_CData_CIItemIndexRangeFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIItemIndexRangeFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIItemIndexRangeFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIItemIndexRangeFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIItemIndexRangeFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIItemIndexRangeFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIItemIndexRangeFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CUI_CXaml_CData_CIItemIndexRangeFactory * This,
                  INT32 firstIndex,
                  UINT32 length,
                  __RPC__in_opt IInspectable * baseInterface,
                   __RPC__deref_out_opt IInspectable * * innerInterface,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CData_CIItemIndexRange * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CData_CIItemIndexRangeFactoryVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CData_CIItemIndexRangeFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CData_CIItemIndexRangeFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateInstance(This,firstIndex,length,baseInterface,innerInterface,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CData_CIItemIndexRangeFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Data_IItemsRangeInfo[] = L"Windows.UI.Xaml.Data.IItemsRangeInfo";
typedef struct __x_ABI_CWindows_CUI_CXaml_CData_CIItemsRangeInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIItemsRangeInfo * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIItemsRangeInfo * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIItemsRangeInfo * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIItemsRangeInfo * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIItemsRangeInfo * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIItemsRangeInfo * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *RangesChanged )(
        __x_ABI_CWindows_CUI_CXaml_CData_CIItemsRangeInfo * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CData_CIItemIndexRange * visibleRange,
                  __RPC__in_opt __FIVectorView_1_Windows__CUI__CXaml__CData__CItemIndexRange * trackedItems
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CData_CIItemsRangeInfoVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CData_CIItemsRangeInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CData_CIItemsRangeInfoVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->RangesChanged(This,visibleRange,trackedItems) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CData_CIItemsRangeInfo;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Data_INotifyPropertyChanged[] = L"Windows.UI.Xaml.Data.INotifyPropertyChanged";
typedef struct __x_ABI_CWindows_CUI_CXaml_CData_CINotifyPropertyChangedVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CINotifyPropertyChanged * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CINotifyPropertyChanged * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CINotifyPropertyChanged * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CINotifyPropertyChanged * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CINotifyPropertyChanged * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CINotifyPropertyChanged * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_PropertyChanged )(
        __x_ABI_CWindows_CUI_CXaml_CData_CINotifyPropertyChanged * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CData_CIPropertyChangedEventHandler * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_PropertyChanged )(
        __x_ABI_CWindows_CUI_CXaml_CData_CINotifyPropertyChanged * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CData_CINotifyPropertyChangedVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CData_CINotifyPropertyChanged
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CData_CINotifyPropertyChangedVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_PropertyChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_PropertyChanged(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CData_CINotifyPropertyChanged;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Data_IPropertyChangedEventArgs[] = L"Windows.UI.Xaml.Data.IPropertyChangedEventArgs";
typedef struct __x_ABI_CWindows_CUI_CXaml_CData_CIPropertyChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIPropertyChangedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIPropertyChangedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIPropertyChangedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIPropertyChangedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIPropertyChangedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIPropertyChangedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_PropertyName )(
        __x_ABI_CWindows_CUI_CXaml_CData_CIPropertyChangedEventArgs * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CData_CIPropertyChangedEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CData_CIPropertyChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CData_CIPropertyChangedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_PropertyName(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CData_CIPropertyChangedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Data_IPropertyChangedEventArgsFactory[] = L"Windows.UI.Xaml.Data.IPropertyChangedEventArgsFactory";
typedef struct __x_ABI_CWindows_CUI_CXaml_CData_CIPropertyChangedEventArgsFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIPropertyChangedEventArgsFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIPropertyChangedEventArgsFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIPropertyChangedEventArgsFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIPropertyChangedEventArgsFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIPropertyChangedEventArgsFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIPropertyChangedEventArgsFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CUI_CXaml_CData_CIPropertyChangedEventArgsFactory * This,
                  __RPC__in HSTRING name,
                  __RPC__in_opt IInspectable * baseInterface,
                   __RPC__deref_out_opt IInspectable * * innerInterface,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CData_CIPropertyChangedEventArgs * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CData_CIPropertyChangedEventArgsFactoryVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CData_CIPropertyChangedEventArgsFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CData_CIPropertyChangedEventArgsFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateInstance(This,name,baseInterface,innerInterface,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CData_CIPropertyChangedEventArgsFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Data_IRelativeSource[] = L"Windows.UI.Xaml.Data.IRelativeSource";
typedef struct __x_ABI_CWindows_CUI_CXaml_CData_CIRelativeSourceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIRelativeSource * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIRelativeSource * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIRelativeSource * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIRelativeSource * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIRelativeSource * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIRelativeSource * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Mode )(
        __x_ABI_CWindows_CUI_CXaml_CData_CIRelativeSource * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CData_CRelativeSourceMode * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Mode )(
        __x_ABI_CWindows_CUI_CXaml_CData_CIRelativeSource * This,
                  __x_ABI_CWindows_CUI_CXaml_CData_CRelativeSourceMode value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CData_CIRelativeSourceVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CData_CIRelativeSource
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CData_CIRelativeSourceVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Mode(This,value) )
    ( (This)->lpVtbl->put_Mode(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CData_CIRelativeSource;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Data_IRelativeSourceFactory[] = L"Windows.UI.Xaml.Data.IRelativeSourceFactory";
typedef struct __x_ABI_CWindows_CUI_CXaml_CData_CIRelativeSourceFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIRelativeSourceFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIRelativeSourceFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIRelativeSourceFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIRelativeSourceFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIRelativeSourceFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIRelativeSourceFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CUI_CXaml_CData_CIRelativeSourceFactory * This,
                  __RPC__in_opt IInspectable * baseInterface,
                   __RPC__deref_out_opt IInspectable * * innerInterface,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CData_CIRelativeSource * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CData_CIRelativeSourceFactoryVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CData_CIRelativeSourceFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CData_CIRelativeSourceFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateInstance(This,baseInterface,innerInterface,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CData_CIRelativeSourceFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Data_ISelectionInfo[] = L"Windows.UI.Xaml.Data.ISelectionInfo";
typedef struct __x_ABI_CWindows_CUI_CXaml_CData_CISelectionInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CISelectionInfo * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CISelectionInfo * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CISelectionInfo * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CISelectionInfo * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CISelectionInfo * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CISelectionInfo * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *SelectRange )(
        __x_ABI_CWindows_CUI_CXaml_CData_CISelectionInfo * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CData_CIItemIndexRange * itemIndexRange
        );
    HRESULT ( STDMETHODCALLTYPE *DeselectRange )(
        __x_ABI_CWindows_CUI_CXaml_CData_CISelectionInfo * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CData_CIItemIndexRange * itemIndexRange
        );
    HRESULT ( STDMETHODCALLTYPE *IsSelected )(
        __x_ABI_CWindows_CUI_CXaml_CData_CISelectionInfo * This,
                  INT32 index,
                           __RPC__out boolean * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetSelectedRanges )(
        __x_ABI_CWindows_CUI_CXaml_CData_CISelectionInfo * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CUI__CXaml__CData__CItemIndexRange * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CData_CISelectionInfoVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CData_CISelectionInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CData_CISelectionInfoVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->SelectRange(This,itemIndexRange) )
    ( (This)->lpVtbl->DeselectRange(This,itemIndexRange) )
    ( (This)->lpVtbl->IsSelected(This,index,result) )
    ( (This)->lpVtbl->GetSelectedRanges(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CData_CISelectionInfo;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Data_ISupportIncrementalLoading[] = L"Windows.UI.Xaml.Data.ISupportIncrementalLoading";
typedef struct __x_ABI_CWindows_CUI_CXaml_CData_CISupportIncrementalLoadingVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CISupportIncrementalLoading * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CISupportIncrementalLoading * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CISupportIncrementalLoading * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CISupportIncrementalLoading * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CISupportIncrementalLoading * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CISupportIncrementalLoading * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *LoadMoreItemsAsync )(
        __x_ABI_CWindows_CUI_CXaml_CData_CISupportIncrementalLoading * This,
                  UINT32 count,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CUI__CXaml__CData__CLoadMoreItemsResult * * operation
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HasMoreItems )(
        __x_ABI_CWindows_CUI_CXaml_CData_CISupportIncrementalLoading * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CData_CISupportIncrementalLoadingVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CData_CISupportIncrementalLoading
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CData_CISupportIncrementalLoadingVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->LoadMoreItemsAsync(This,count,operation) )
    ( (This)->lpVtbl->get_HasMoreItems(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CData_CISupportIncrementalLoading;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Data_IValueConverter[] = L"Windows.UI.Xaml.Data.IValueConverter";
typedef struct __x_ABI_CWindows_CUI_CXaml_CData_CIValueConverterVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIValueConverter * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIValueConverter * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIValueConverter * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIValueConverter * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIValueConverter * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIValueConverter * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Convert )(
        __x_ABI_CWindows_CUI_CXaml_CData_CIValueConverter * This,
                  __RPC__in_opt IInspectable * value,
                  __x_ABI_CWindows_CUI_CXaml_CInterop_CTypeName targetType,
                  __RPC__in_opt IInspectable * parameter,
                  __RPC__in HSTRING language,
                           __RPC__deref_out_opt IInspectable * * result
        );
    HRESULT ( STDMETHODCALLTYPE *ConvertBack )(
        __x_ABI_CWindows_CUI_CXaml_CData_CIValueConverter * This,
                  __RPC__in_opt IInspectable * value,
                  __x_ABI_CWindows_CUI_CXaml_CInterop_CTypeName targetType,
                  __RPC__in_opt IInspectable * parameter,
                  __RPC__in HSTRING language,
                           __RPC__deref_out_opt IInspectable * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CData_CIValueConverterVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CData_CIValueConverter
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CData_CIValueConverterVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Convert(This,value,targetType,parameter,language,result) )
    ( (This)->lpVtbl->ConvertBack(This,value,targetType,parameter,language,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CData_CIValueConverter;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Data_Binding[] = L"Windows.UI.Xaml.Data.Binding";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Data_BindingBase[] = L"Windows.UI.Xaml.Data.BindingBase";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Data_BindingExpression[] = L"Windows.UI.Xaml.Data.BindingExpression";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Data_BindingExpressionBase[] = L"Windows.UI.Xaml.Data.BindingExpressionBase";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Data_BindingOperations[] = L"Windows.UI.Xaml.Data.BindingOperations";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Data_CollectionViewSource[] = L"Windows.UI.Xaml.Data.CollectionViewSource";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Data_CurrentChangingEventArgs[] = L"Windows.UI.Xaml.Data.CurrentChangingEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Data_ItemIndexRange[] = L"Windows.UI.Xaml.Data.ItemIndexRange";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Data_PropertyChangedEventArgs[] = L"Windows.UI.Xaml.Data.PropertyChangedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Data_RelativeSource[] = L"Windows.UI.Xaml.Data.RelativeSource";
       
       
#pragma clang diagnostic pop

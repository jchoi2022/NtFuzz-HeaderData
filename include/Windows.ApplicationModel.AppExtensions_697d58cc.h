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
#include "Windows.ApplicationModel.h"
#include "Windows.Storage.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtension __x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtension;
typedef interface __x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtensionCatalog __x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtensionCatalog;
typedef interface __x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtensionCatalogStatics __x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtensionCatalogStatics;
typedef interface __x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtensionPackageInstalledEventArgs __x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtensionPackageInstalledEventArgs;
typedef interface __x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtensionPackageStatusChangedEventArgs __x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtensionPackageStatusChangedEventArgs;
typedef interface __x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtensionPackageUninstallingEventArgs __x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtensionPackageUninstallingEventArgs;
typedef interface __x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtensionPackageUpdatedEventArgs __x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtensionPackageUpdatedEventArgs;
typedef interface __x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtensionPackageUpdatingEventArgs __x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtensionPackageUpdatingEventArgs;
typedef interface __FIIterator_1_Windows__CApplicationModel__CAppExtensions__CAppExtension __FIIterator_1_Windows__CApplicationModel__CAppExtensions__CAppExtension;
EXTERN_C const IID IID___FIIterator_1_Windows__CApplicationModel__CAppExtensions__CAppExtension;
typedef struct __FIIterator_1_Windows__CApplicationModel__CAppExtensions__CAppExtensionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CApplicationModel__CAppExtensions__CAppExtension * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppExtensions__CAppExtension * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppExtensions__CAppExtension * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppExtensions__CAppExtension * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppExtensions__CAppExtension * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppExtensions__CAppExtension * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppExtensions__CAppExtension * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtension * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppExtensions__CAppExtension * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppExtensions__CAppExtension * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppExtensions__CAppExtension * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtension * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CApplicationModel__CAppExtensions__CAppExtensionVtbl;
interface __FIIterator_1_Windows__CApplicationModel__CAppExtensions__CAppExtension
{
    CONST_VTBL struct __FIIterator_1_Windows__CApplicationModel__CAppExtensions__CAppExtensionVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CApplicationModel__CAppExtensions__CAppExtension __FIIterable_1_Windows__CApplicationModel__CAppExtensions__CAppExtension;
EXTERN_C const IID IID___FIIterable_1_Windows__CApplicationModel__CAppExtensions__CAppExtension;
typedef struct __FIIterable_1_Windows__CApplicationModel__CAppExtensions__CAppExtensionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CApplicationModel__CAppExtensions__CAppExtension * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CAppExtensions__CAppExtension * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CAppExtensions__CAppExtension * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CAppExtensions__CAppExtension * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CAppExtensions__CAppExtension * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CAppExtensions__CAppExtension * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CAppExtensions__CAppExtension * This, __RPC__deref_out_opt __FIIterator_1_Windows__CApplicationModel__CAppExtensions__CAppExtension **first);
    END_INTERFACE
} __FIIterable_1_Windows__CApplicationModel__CAppExtensions__CAppExtensionVtbl;
interface __FIIterable_1_Windows__CApplicationModel__CAppExtensions__CAppExtension
{
    CONST_VTBL struct __FIIterable_1_Windows__CApplicationModel__CAppExtensions__CAppExtensionVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CApplicationModel__CAppExtensions__CAppExtension __FIVectorView_1_Windows__CApplicationModel__CAppExtensions__CAppExtension;
EXTERN_C const IID IID___FIVectorView_1_Windows__CApplicationModel__CAppExtensions__CAppExtension;
typedef struct __FIVectorView_1_Windows__CApplicationModel__CAppExtensions__CAppExtensionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppExtensions__CAppExtension * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppExtensions__CAppExtension * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppExtensions__CAppExtension * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppExtensions__CAppExtension * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppExtensions__CAppExtension * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppExtensions__CAppExtension * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppExtensions__CAppExtension * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtension * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppExtensions__CAppExtension * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppExtensions__CAppExtension * This,
                       __x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtension * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppExtensions__CAppExtension * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtension * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CApplicationModel__CAppExtensions__CAppExtensionVtbl;
interface __FIVectorView_1_Windows__CApplicationModel__CAppExtensions__CAppExtension
{
    CONST_VTBL struct __FIVectorView_1_Windows__CApplicationModel__CAppExtensions__CAppExtensionVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppExtensions__CAppExtension __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppExtensions__CAppExtension;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppExtensions__CAppExtension;
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppExtensions__CAppExtension __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppExtensions__CAppExtension;
typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppExtensions__CAppExtensionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppExtensions__CAppExtension * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppExtensions__CAppExtension * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppExtensions__CAppExtension * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppExtensions__CAppExtension * This, __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppExtensions__CAppExtension *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppExtensions__CAppExtensionVtbl;
interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppExtensions__CAppExtension
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppExtensions__CAppExtensionVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppExtensions__CAppExtension __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppExtensions__CAppExtension;
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppExtensions__CAppExtension;
typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppExtensions__CAppExtensionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppExtensions__CAppExtension * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppExtensions__CAppExtension * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppExtensions__CAppExtension * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppExtensions__CAppExtension * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppExtensions__CAppExtension * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppExtensions__CAppExtension * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppExtensions__CAppExtension * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppExtensions__CAppExtension *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppExtensions__CAppExtension * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppExtensions__CAppExtension **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppExtensions__CAppExtension * This, __RPC__out __FIVectorView_1_Windows__CApplicationModel__CAppExtensions__CAppExtension * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppExtensions__CAppExtensionVtbl;
interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppExtensions__CAppExtension
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppExtensions__CAppExtensionVtbl *lpVtbl;
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
typedef interface __FITypedEventHandler_2_Windows__CApplicationModel__CAppExtensions__CAppExtensionCatalog_Windows__CApplicationModel__CAppExtensions__CAppExtensionPackageInstalledEventArgs __FITypedEventHandler_2_Windows__CApplicationModel__CAppExtensions__CAppExtensionCatalog_Windows__CApplicationModel__CAppExtensions__CAppExtensionPackageInstalledEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CApplicationModel__CAppExtensions__CAppExtensionCatalog_Windows__CApplicationModel__CAppExtensions__CAppExtensionPackageInstalledEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CApplicationModel__CAppExtensions__CAppExtensionCatalog_Windows__CApplicationModel__CAppExtensions__CAppExtensionPackageInstalledEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CAppExtensions__CAppExtensionCatalog_Windows__CApplicationModel__CAppExtensions__CAppExtensionPackageInstalledEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CAppExtensions__CAppExtensionCatalog_Windows__CApplicationModel__CAppExtensions__CAppExtensionPackageInstalledEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CAppExtensions__CAppExtensionCatalog_Windows__CApplicationModel__CAppExtensions__CAppExtensionPackageInstalledEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CAppExtensions__CAppExtensionCatalog_Windows__CApplicationModel__CAppExtensions__CAppExtensionPackageInstalledEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtensionCatalog * sender, __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtensionPackageInstalledEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CApplicationModel__CAppExtensions__CAppExtensionCatalog_Windows__CApplicationModel__CAppExtensions__CAppExtensionPackageInstalledEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CApplicationModel__CAppExtensions__CAppExtensionCatalog_Windows__CApplicationModel__CAppExtensions__CAppExtensionPackageInstalledEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CApplicationModel__CAppExtensions__CAppExtensionCatalog_Windows__CApplicationModel__CAppExtensions__CAppExtensionPackageInstalledEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CApplicationModel__CAppExtensions__CAppExtensionCatalog_Windows__CApplicationModel__CAppExtensions__CAppExtensionPackageStatusChangedEventArgs __FITypedEventHandler_2_Windows__CApplicationModel__CAppExtensions__CAppExtensionCatalog_Windows__CApplicationModel__CAppExtensions__CAppExtensionPackageStatusChangedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CApplicationModel__CAppExtensions__CAppExtensionCatalog_Windows__CApplicationModel__CAppExtensions__CAppExtensionPackageStatusChangedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CApplicationModel__CAppExtensions__CAppExtensionCatalog_Windows__CApplicationModel__CAppExtensions__CAppExtensionPackageStatusChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CAppExtensions__CAppExtensionCatalog_Windows__CApplicationModel__CAppExtensions__CAppExtensionPackageStatusChangedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CAppExtensions__CAppExtensionCatalog_Windows__CApplicationModel__CAppExtensions__CAppExtensionPackageStatusChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CAppExtensions__CAppExtensionCatalog_Windows__CApplicationModel__CAppExtensions__CAppExtensionPackageStatusChangedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CAppExtensions__CAppExtensionCatalog_Windows__CApplicationModel__CAppExtensions__CAppExtensionPackageStatusChangedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtensionCatalog * sender, __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtensionPackageStatusChangedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CApplicationModel__CAppExtensions__CAppExtensionCatalog_Windows__CApplicationModel__CAppExtensions__CAppExtensionPackageStatusChangedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CApplicationModel__CAppExtensions__CAppExtensionCatalog_Windows__CApplicationModel__CAppExtensions__CAppExtensionPackageStatusChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CApplicationModel__CAppExtensions__CAppExtensionCatalog_Windows__CApplicationModel__CAppExtensions__CAppExtensionPackageStatusChangedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CApplicationModel__CAppExtensions__CAppExtensionCatalog_Windows__CApplicationModel__CAppExtensions__CAppExtensionPackageUninstallingEventArgs __FITypedEventHandler_2_Windows__CApplicationModel__CAppExtensions__CAppExtensionCatalog_Windows__CApplicationModel__CAppExtensions__CAppExtensionPackageUninstallingEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CApplicationModel__CAppExtensions__CAppExtensionCatalog_Windows__CApplicationModel__CAppExtensions__CAppExtensionPackageUninstallingEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CApplicationModel__CAppExtensions__CAppExtensionCatalog_Windows__CApplicationModel__CAppExtensions__CAppExtensionPackageUninstallingEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CAppExtensions__CAppExtensionCatalog_Windows__CApplicationModel__CAppExtensions__CAppExtensionPackageUninstallingEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CAppExtensions__CAppExtensionCatalog_Windows__CApplicationModel__CAppExtensions__CAppExtensionPackageUninstallingEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CAppExtensions__CAppExtensionCatalog_Windows__CApplicationModel__CAppExtensions__CAppExtensionPackageUninstallingEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CAppExtensions__CAppExtensionCatalog_Windows__CApplicationModel__CAppExtensions__CAppExtensionPackageUninstallingEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtensionCatalog * sender, __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtensionPackageUninstallingEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CApplicationModel__CAppExtensions__CAppExtensionCatalog_Windows__CApplicationModel__CAppExtensions__CAppExtensionPackageUninstallingEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CApplicationModel__CAppExtensions__CAppExtensionCatalog_Windows__CApplicationModel__CAppExtensions__CAppExtensionPackageUninstallingEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CApplicationModel__CAppExtensions__CAppExtensionCatalog_Windows__CApplicationModel__CAppExtensions__CAppExtensionPackageUninstallingEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CApplicationModel__CAppExtensions__CAppExtensionCatalog_Windows__CApplicationModel__CAppExtensions__CAppExtensionPackageUpdatedEventArgs __FITypedEventHandler_2_Windows__CApplicationModel__CAppExtensions__CAppExtensionCatalog_Windows__CApplicationModel__CAppExtensions__CAppExtensionPackageUpdatedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CApplicationModel__CAppExtensions__CAppExtensionCatalog_Windows__CApplicationModel__CAppExtensions__CAppExtensionPackageUpdatedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CApplicationModel__CAppExtensions__CAppExtensionCatalog_Windows__CApplicationModel__CAppExtensions__CAppExtensionPackageUpdatedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CAppExtensions__CAppExtensionCatalog_Windows__CApplicationModel__CAppExtensions__CAppExtensionPackageUpdatedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CAppExtensions__CAppExtensionCatalog_Windows__CApplicationModel__CAppExtensions__CAppExtensionPackageUpdatedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CAppExtensions__CAppExtensionCatalog_Windows__CApplicationModel__CAppExtensions__CAppExtensionPackageUpdatedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CAppExtensions__CAppExtensionCatalog_Windows__CApplicationModel__CAppExtensions__CAppExtensionPackageUpdatedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtensionCatalog * sender, __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtensionPackageUpdatedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CApplicationModel__CAppExtensions__CAppExtensionCatalog_Windows__CApplicationModel__CAppExtensions__CAppExtensionPackageUpdatedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CApplicationModel__CAppExtensions__CAppExtensionCatalog_Windows__CApplicationModel__CAppExtensions__CAppExtensionPackageUpdatedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CApplicationModel__CAppExtensions__CAppExtensionCatalog_Windows__CApplicationModel__CAppExtensions__CAppExtensionPackageUpdatedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CApplicationModel__CAppExtensions__CAppExtensionCatalog_Windows__CApplicationModel__CAppExtensions__CAppExtensionPackageUpdatingEventArgs __FITypedEventHandler_2_Windows__CApplicationModel__CAppExtensions__CAppExtensionCatalog_Windows__CApplicationModel__CAppExtensions__CAppExtensionPackageUpdatingEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CApplicationModel__CAppExtensions__CAppExtensionCatalog_Windows__CApplicationModel__CAppExtensions__CAppExtensionPackageUpdatingEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CApplicationModel__CAppExtensions__CAppExtensionCatalog_Windows__CApplicationModel__CAppExtensions__CAppExtensionPackageUpdatingEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CAppExtensions__CAppExtensionCatalog_Windows__CApplicationModel__CAppExtensions__CAppExtensionPackageUpdatingEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CAppExtensions__CAppExtensionCatalog_Windows__CApplicationModel__CAppExtensions__CAppExtensionPackageUpdatingEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CAppExtensions__CAppExtensionCatalog_Windows__CApplicationModel__CAppExtensions__CAppExtensionPackageUpdatingEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CAppExtensions__CAppExtensionCatalog_Windows__CApplicationModel__CAppExtensions__CAppExtensionPackageUpdatingEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtensionCatalog * sender, __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtensionPackageUpdatingEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CApplicationModel__CAppExtensions__CAppExtensionCatalog_Windows__CApplicationModel__CAppExtensions__CAppExtensionPackageUpdatingEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CApplicationModel__CAppExtensions__CAppExtensionCatalog_Windows__CApplicationModel__CAppExtensions__CAppExtensionPackageUpdatingEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CApplicationModel__CAppExtensions__CAppExtensionCatalog_Windows__CApplicationModel__CAppExtensions__CAppExtensionPackageUpdatingEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet;
typedef interface __FIAsyncOperationCompletedHandler_1___F__CIPropertySet __FIAsyncOperationCompletedHandler_1___F__CIPropertySet;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___F__CIPropertySet;
typedef interface __FIAsyncOperation_1___F__CIPropertySet __FIAsyncOperation_1___F__CIPropertySet;
typedef struct __FIAsyncOperationCompletedHandler_1___F__CIPropertySetVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___F__CIPropertySet * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___F__CIPropertySet * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___F__CIPropertySet * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___F__CIPropertySet * This, __RPC__in_opt __FIAsyncOperation_1___F__CIPropertySet *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___F__CIPropertySetVtbl;
interface __FIAsyncOperationCompletedHandler_1___F__CIPropertySet
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___F__CIPropertySetVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1___F__CIPropertySet __FIAsyncOperation_1___F__CIPropertySet;
EXTERN_C const IID IID___FIAsyncOperation_1___F__CIPropertySet;
typedef struct __FIAsyncOperation_1___F__CIPropertySetVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___F__CIPropertySet * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___F__CIPropertySet * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___F__CIPropertySet * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___F__CIPropertySet * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___F__CIPropertySet * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___F__CIPropertySet * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___F__CIPropertySet * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1___F__CIPropertySet *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___F__CIPropertySet * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___F__CIPropertySet **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___F__CIPropertySet * This, __RPC__out __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet * *results);
    END_INTERFACE
} __FIAsyncOperation_1___F__CIPropertySetVtbl;
interface __FIAsyncOperation_1___F__CIPropertySet
{
    CONST_VTBL struct __FIAsyncOperation_1___F__CIPropertySetVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CStorage_CIStorageFolder __x_ABI_CWindows_CStorage_CIStorageFolder;
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFolder __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFolder;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFolder;
typedef interface __FIAsyncOperation_1_Windows__CStorage__CStorageFolder __FIAsyncOperation_1_Windows__CStorage__CStorageFolder;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFolderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFolder * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFolder * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFolder * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFolder * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CStorage__CStorageFolder *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFolderVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFolder
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFolderVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CStorage__CStorageFolder __FIAsyncOperation_1_Windows__CStorage__CStorageFolder;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CStorage__CStorageFolder;
typedef struct __FIAsyncOperation_1_Windows__CStorage__CStorageFolderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStorageFolder * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStorageFolder * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStorageFolder * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStorageFolder * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStorageFolder * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStorageFolder * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStorageFolder * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFolder *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStorageFolder * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFolder **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStorageFolder * This, __RPC__out __x_ABI_CWindows_CStorage_CIStorageFolder * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CStorage__CStorageFolderVtbl;
interface __FIAsyncOperation_1_Windows__CStorage__CStorageFolder
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CStorage__CStorageFolderVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CApplicationModel_CIAppInfo __x_ABI_CWindows_CApplicationModel_CIAppInfo;
typedef interface __x_ABI_CWindows_CApplicationModel_CIPackage __x_ABI_CWindows_CApplicationModel_CIPackage;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_AppExtensions_IAppExtension[] = L"Windows.ApplicationModel.AppExtensions.IAppExtension";
typedef struct __x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtensionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtension * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtension * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtension * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtension * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtension * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtension * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtension * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DisplayName )(
        __x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtension * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Description )(
        __x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtension * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Package )(
        __x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtension * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CIPackage * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AppInfo )(
        __x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtension * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CIAppInfo * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetExtensionPropertiesAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtension * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1___F__CIPropertySet * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *GetPublicFolderAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtension * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStorageFolder * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtensionVtbl;
interface __x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtension
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtensionVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Id(This,value) )
    ( (This)->lpVtbl->get_DisplayName(This,value) )
    ( (This)->lpVtbl->get_Description(This,value) )
    ( (This)->lpVtbl->get_Package(This,value) )
    ( (This)->lpVtbl->get_AppInfo(This,value) )
    ( (This)->lpVtbl->GetExtensionPropertiesAsync(This,operation) )
    ( (This)->lpVtbl->GetPublicFolderAsync(This,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtension;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_AppExtensions_IAppExtensionCatalog[] = L"Windows.ApplicationModel.AppExtensions.IAppExtensionCatalog";
typedef struct __x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtensionCatalogVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtensionCatalog * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtensionCatalog * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtensionCatalog * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtensionCatalog * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtensionCatalog * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtensionCatalog * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *FindAllAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtensionCatalog * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppExtensions__CAppExtension * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *RequestRemovePackageAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtensionCatalog * This,
                  __RPC__in HSTRING packageFullName,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *add_PackageInstalled )(
        __x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtensionCatalog * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CAppExtensions__CAppExtensionCatalog_Windows__CApplicationModel__CAppExtensions__CAppExtensionPackageInstalledEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_PackageInstalled )(
        __x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtensionCatalog * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_PackageUpdating )(
        __x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtensionCatalog * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CAppExtensions__CAppExtensionCatalog_Windows__CApplicationModel__CAppExtensions__CAppExtensionPackageUpdatingEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_PackageUpdating )(
        __x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtensionCatalog * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_PackageUpdated )(
        __x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtensionCatalog * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CAppExtensions__CAppExtensionCatalog_Windows__CApplicationModel__CAppExtensions__CAppExtensionPackageUpdatedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_PackageUpdated )(
        __x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtensionCatalog * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_PackageUninstalling )(
        __x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtensionCatalog * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CAppExtensions__CAppExtensionCatalog_Windows__CApplicationModel__CAppExtensions__CAppExtensionPackageUninstallingEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_PackageUninstalling )(
        __x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtensionCatalog * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_PackageStatusChanged )(
        __x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtensionCatalog * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CAppExtensions__CAppExtensionCatalog_Windows__CApplicationModel__CAppExtensions__CAppExtensionPackageStatusChangedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_PackageStatusChanged )(
        __x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtensionCatalog * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtensionCatalogVtbl;
interface __x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtensionCatalog
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtensionCatalogVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->FindAllAsync(This,operation) )
    ( (This)->lpVtbl->RequestRemovePackageAsync(This,packageFullName,operation) )
    ( (This)->lpVtbl->add_PackageInstalled(This,handler,token) )
    ( (This)->lpVtbl->remove_PackageInstalled(This,token) )
    ( (This)->lpVtbl->add_PackageUpdating(This,handler,token) )
    ( (This)->lpVtbl->remove_PackageUpdating(This,token) )
    ( (This)->lpVtbl->add_PackageUpdated(This,handler,token) )
    ( (This)->lpVtbl->remove_PackageUpdated(This,token) )
    ( (This)->lpVtbl->add_PackageUninstalling(This,handler,token) )
    ( (This)->lpVtbl->remove_PackageUninstalling(This,token) )
    ( (This)->lpVtbl->add_PackageStatusChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_PackageStatusChanged(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtensionCatalog;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_AppExtensions_IAppExtensionCatalogStatics[] = L"Windows.ApplicationModel.AppExtensions.IAppExtensionCatalogStatics";
typedef struct __x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtensionCatalogStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtensionCatalogStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtensionCatalogStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtensionCatalogStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtensionCatalogStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtensionCatalogStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtensionCatalogStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Open )(
        __x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtensionCatalogStatics * This,
                  __RPC__in HSTRING appExtensionName,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtensionCatalog * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtensionCatalogStaticsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtensionCatalogStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtensionCatalogStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Open(This,appExtensionName,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtensionCatalogStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_AppExtensions_IAppExtensionPackageInstalledEventArgs[] = L"Windows.ApplicationModel.AppExtensions.IAppExtensionPackageInstalledEventArgs";
typedef struct __x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtensionPackageInstalledEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtensionPackageInstalledEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtensionPackageInstalledEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtensionPackageInstalledEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtensionPackageInstalledEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtensionPackageInstalledEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtensionPackageInstalledEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AppExtensionName )(
        __x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtensionPackageInstalledEventArgs * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Package )(
        __x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtensionPackageInstalledEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CIPackage * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Extensions )(
        __x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtensionPackageInstalledEventArgs * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CApplicationModel__CAppExtensions__CAppExtension * * values
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtensionPackageInstalledEventArgsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtensionPackageInstalledEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtensionPackageInstalledEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AppExtensionName(This,value) )
    ( (This)->lpVtbl->get_Package(This,value) )
    ( (This)->lpVtbl->get_Extensions(This,values) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtensionPackageInstalledEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_AppExtensions_IAppExtensionPackageStatusChangedEventArgs[] = L"Windows.ApplicationModel.AppExtensions.IAppExtensionPackageStatusChangedEventArgs";
typedef struct __x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtensionPackageStatusChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtensionPackageStatusChangedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtensionPackageStatusChangedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtensionPackageStatusChangedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtensionPackageStatusChangedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtensionPackageStatusChangedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtensionPackageStatusChangedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AppExtensionName )(
        __x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtensionPackageStatusChangedEventArgs * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Package )(
        __x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtensionPackageStatusChangedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CIPackage * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtensionPackageStatusChangedEventArgsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtensionPackageStatusChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtensionPackageStatusChangedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AppExtensionName(This,value) )
    ( (This)->lpVtbl->get_Package(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtensionPackageStatusChangedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_AppExtensions_IAppExtensionPackageUninstallingEventArgs[] = L"Windows.ApplicationModel.AppExtensions.IAppExtensionPackageUninstallingEventArgs";
typedef struct __x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtensionPackageUninstallingEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtensionPackageUninstallingEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtensionPackageUninstallingEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtensionPackageUninstallingEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtensionPackageUninstallingEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtensionPackageUninstallingEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtensionPackageUninstallingEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AppExtensionName )(
        __x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtensionPackageUninstallingEventArgs * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Package )(
        __x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtensionPackageUninstallingEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CIPackage * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtensionPackageUninstallingEventArgsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtensionPackageUninstallingEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtensionPackageUninstallingEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AppExtensionName(This,value) )
    ( (This)->lpVtbl->get_Package(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtensionPackageUninstallingEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_AppExtensions_IAppExtensionPackageUpdatedEventArgs[] = L"Windows.ApplicationModel.AppExtensions.IAppExtensionPackageUpdatedEventArgs";
typedef struct __x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtensionPackageUpdatedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtensionPackageUpdatedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtensionPackageUpdatedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtensionPackageUpdatedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtensionPackageUpdatedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtensionPackageUpdatedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtensionPackageUpdatedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AppExtensionName )(
        __x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtensionPackageUpdatedEventArgs * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Package )(
        __x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtensionPackageUpdatedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CIPackage * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Extensions )(
        __x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtensionPackageUpdatedEventArgs * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CApplicationModel__CAppExtensions__CAppExtension * * values
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtensionPackageUpdatedEventArgsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtensionPackageUpdatedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtensionPackageUpdatedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AppExtensionName(This,value) )
    ( (This)->lpVtbl->get_Package(This,value) )
    ( (This)->lpVtbl->get_Extensions(This,values) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtensionPackageUpdatedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_AppExtensions_IAppExtensionPackageUpdatingEventArgs[] = L"Windows.ApplicationModel.AppExtensions.IAppExtensionPackageUpdatingEventArgs";
typedef struct __x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtensionPackageUpdatingEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtensionPackageUpdatingEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtensionPackageUpdatingEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtensionPackageUpdatingEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtensionPackageUpdatingEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtensionPackageUpdatingEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtensionPackageUpdatingEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AppExtensionName )(
        __x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtensionPackageUpdatingEventArgs * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Package )(
        __x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtensionPackageUpdatingEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CIPackage * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtensionPackageUpdatingEventArgsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtensionPackageUpdatingEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtensionPackageUpdatingEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AppExtensionName(This,value) )
    ( (This)->lpVtbl->get_Package(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppExtensions_CIAppExtensionPackageUpdatingEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_AppExtensions_AppExtension[] = L"Windows.ApplicationModel.AppExtensions.AppExtension";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_AppExtensions_AppExtensionCatalog[] = L"Windows.ApplicationModel.AppExtensions.AppExtensionCatalog";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_AppExtensions_AppExtensionPackageInstalledEventArgs[] = L"Windows.ApplicationModel.AppExtensions.AppExtensionPackageInstalledEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_AppExtensions_AppExtensionPackageStatusChangedEventArgs[] = L"Windows.ApplicationModel.AppExtensions.AppExtensionPackageStatusChangedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_AppExtensions_AppExtensionPackageUninstallingEventArgs[] = L"Windows.ApplicationModel.AppExtensions.AppExtensionPackageUninstallingEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_AppExtensions_AppExtensionPackageUpdatedEventArgs[] = L"Windows.ApplicationModel.AppExtensions.AppExtensionPackageUpdatedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_AppExtensions_AppExtensionPackageUpdatingEventArgs[] = L"Windows.ApplicationModel.AppExtensions.AppExtensionPackageUpdatingEventArgs";
       
       
#pragma clang diagnostic pop

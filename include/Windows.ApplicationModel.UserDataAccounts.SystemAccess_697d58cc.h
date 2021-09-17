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
#include "Windows.Security.Credentials.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration;
typedef interface __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2 __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2;
typedef interface __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIUserDataAccountSystemAccessManagerStatics __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIUserDataAccountSystemAccessManagerStatics;
typedef interface __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIUserDataAccountSystemAccessManagerStatics2 __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIUserDataAccountSystemAccessManagerStatics2;
typedef interface __FIIterator_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration __FIIterator_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration;
EXTERN_C const IID IID___FIIterator_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration;
typedef struct __FIIterator_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfigurationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfigurationVtbl;
interface __FIIterator_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration
{
    CONST_VTBL struct __FIIterator_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfigurationVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration __FIIterable_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration;
EXTERN_C const IID IID___FIIterable_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration;
typedef struct __FIIterable_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfigurationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration * This, __RPC__deref_out_opt __FIIterator_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration **first);
    END_INTERFACE
} __FIIterable_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfigurationVtbl;
interface __FIIterable_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration
{
    CONST_VTBL struct __FIIterable_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfigurationVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration;
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfigurationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfigurationVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfigurationVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration;
typedef struct __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfigurationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfigurationVtbl;
interface __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfigurationVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_HSTRING __FIVectorView_1_HSTRING;
EXTERN_C const IID IID___FIVectorView_1_HSTRING;
typedef struct __FIVectorView_1_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_HSTRING * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_HSTRING * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_HSTRING * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_HSTRING * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_HSTRING * This,
                                                    unsigned int index,
                                                             __RPC__out HSTRING *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_HSTRING * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_HSTRING * This,
                       HSTRING item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_HSTRING * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) HSTRING *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_HSTRINGVtbl;
interface __FIVectorView_1_HSTRING
{
    CONST_VTBL struct __FIVectorView_1_HSTRINGVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_HSTRING __FIAsyncOperationCompletedHandler_1___FIVectorView_1_HSTRING;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_HSTRING;
typedef interface __FIAsyncOperation_1___FIVectorView_1_HSTRING __FIAsyncOperation_1___FIVectorView_1_HSTRING;
typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_HSTRING * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_HSTRING * This, __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_HSTRING *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_HSTRINGVtbl;
interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_HSTRING
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_HSTRINGVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1___FIVectorView_1_HSTRING __FIAsyncOperation_1___FIVectorView_1_HSTRING;
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_HSTRING;
typedef struct __FIAsyncOperation_1___FIVectorView_1_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_HSTRING * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_HSTRING * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_HSTRING * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_HSTRING * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_HSTRING * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_HSTRING *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_HSTRING * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_HSTRING **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_HSTRING * This, __RPC__out __FIVectorView_1_HSTRING * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_HSTRINGVtbl;
interface __FIAsyncOperation_1___FIVectorView_1_HSTRING
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_HSTRINGVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_HSTRING __FIAsyncOperationCompletedHandler_1_HSTRING;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_HSTRING;
typedef interface __FIAsyncOperation_1_HSTRING __FIAsyncOperation_1_HSTRING;
typedef struct __FIAsyncOperationCompletedHandler_1_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_HSTRING * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_HSTRING * This, __RPC__in_opt __FIAsyncOperation_1_HSTRING *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_HSTRINGVtbl;
interface __FIAsyncOperationCompletedHandler_1_HSTRING
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_HSTRINGVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_HSTRING __FIAsyncOperation_1_HSTRING;
EXTERN_C const IID IID___FIAsyncOperation_1_HSTRING;
typedef struct __FIAsyncOperation_1_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_HSTRING * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_HSTRING * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_HSTRING * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_HSTRING * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_HSTRING * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_HSTRING *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_HSTRING * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_HSTRING **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_HSTRING * This, __RPC__out HSTRING *results);
    END_INTERFACE
} __FIAsyncOperation_1_HSTRINGVtbl;
interface __FIAsyncOperation_1_HSTRING
{
    CONST_VTBL struct __FIAsyncOperation_1_HSTRINGVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CFoundation_CIAsyncAction __x_ABI_CWindows_CFoundation_CIAsyncAction;
typedef interface __x_ABI_CWindows_CFoundation_CIUriRuntimeClass __x_ABI_CWindows_CFoundation_CIUriRuntimeClass;
typedef interface __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential;
typedef enum __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CDeviceAccountAuthenticationType __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CDeviceAccountAuthenticationType;
typedef enum __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CDeviceAccountIconId __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CDeviceAccountIconId;
typedef enum __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CDeviceAccountMailAgeFilter __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CDeviceAccountMailAgeFilter;
typedef enum __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CDeviceAccountServerType __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CDeviceAccountServerType;
typedef enum __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CDeviceAccountSyncScheduleKind __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CDeviceAccountSyncScheduleKind;
enum __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CDeviceAccountAuthenticationType
{
    DeviceAccountAuthenticationType_Basic = 0,
    DeviceAccountAuthenticationType_OAuth = 1,
    DeviceAccountAuthenticationType_SingleSignOn = 2,
};
enum __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CDeviceAccountIconId
{
    DeviceAccountIconId_Exchange = 0,
    DeviceAccountIconId_Msa = 1,
    DeviceAccountIconId_Outlook = 2,
    DeviceAccountIconId_Generic = 3,
};
enum __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CDeviceAccountMailAgeFilter
{
    DeviceAccountMailAgeFilter_All = 0,
    DeviceAccountMailAgeFilter_Last1Day = 1,
    DeviceAccountMailAgeFilter_Last3Days = 2,
    DeviceAccountMailAgeFilter_Last7Days = 3,
    DeviceAccountMailAgeFilter_Last14Days = 4,
    DeviceAccountMailAgeFilter_Last30Days = 5,
    DeviceAccountMailAgeFilter_Last90Days = 6,
};
enum __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CDeviceAccountServerType
{
    DeviceAccountServerType_Exchange = 0,
    DeviceAccountServerType_Pop = 1,
    DeviceAccountServerType_Imap = 2,
};
enum __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CDeviceAccountSyncScheduleKind
{
    DeviceAccountSyncScheduleKind_Manual = 0,
    DeviceAccountSyncScheduleKind_Every15Minutes = 1,
    DeviceAccountSyncScheduleKind_Every30Minutes = 2,
    DeviceAccountSyncScheduleKind_Every60Minutes = 3,
    DeviceAccountSyncScheduleKind_Every2Hours = 4,
    DeviceAccountSyncScheduleKind_Daily = 5,
    DeviceAccountSyncScheduleKind_AsItemsArrive = 6,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_UserDataAccounts_SystemAccess_IDeviceAccountConfiguration[] = L"Windows.ApplicationModel.UserDataAccounts.SystemAccess.IDeviceAccountConfiguration";
typedef struct __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfigurationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AccountName )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AccountName )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DeviceAccountTypeId )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DeviceAccountTypeId )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ServerType )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CDeviceAccountServerType * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ServerType )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration * This,
                  __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CDeviceAccountServerType value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_EmailAddress )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_EmailAddress )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Domain )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Domain )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_EmailSyncEnabled )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_EmailSyncEnabled )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ContactsSyncEnabled )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ContactsSyncEnabled )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CalendarSyncEnabled )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CalendarSyncEnabled )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IncomingServerAddress )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IncomingServerAddress )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IncomingServerPort )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IncomingServerPort )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration * This,
                  INT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IncomingServerRequiresSsl )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IncomingServerRequiresSsl )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IncomingServerUsername )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IncomingServerUsername )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_OutgoingServerAddress )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_OutgoingServerAddress )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_OutgoingServerPort )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_OutgoingServerPort )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration * This,
                  INT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_OutgoingServerRequiresSsl )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_OutgoingServerRequiresSsl )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_OutgoingServerUsername )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_OutgoingServerUsername )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration * This,
                  __RPC__in HSTRING value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfigurationVtbl;
interface __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfigurationVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AccountName(This,value) )
    ( (This)->lpVtbl->put_AccountName(This,value) )
    ( (This)->lpVtbl->get_DeviceAccountTypeId(This,value) )
    ( (This)->lpVtbl->put_DeviceAccountTypeId(This,value) )
    ( (This)->lpVtbl->get_ServerType(This,value) )
    ( (This)->lpVtbl->put_ServerType(This,value) )
    ( (This)->lpVtbl->get_EmailAddress(This,value) )
    ( (This)->lpVtbl->put_EmailAddress(This,value) )
    ( (This)->lpVtbl->get_Domain(This,value) )
    ( (This)->lpVtbl->put_Domain(This,value) )
    ( (This)->lpVtbl->get_EmailSyncEnabled(This,value) )
    ( (This)->lpVtbl->put_EmailSyncEnabled(This,value) )
    ( (This)->lpVtbl->get_ContactsSyncEnabled(This,value) )
    ( (This)->lpVtbl->put_ContactsSyncEnabled(This,value) )
    ( (This)->lpVtbl->get_CalendarSyncEnabled(This,value) )
    ( (This)->lpVtbl->put_CalendarSyncEnabled(This,value) )
    ( (This)->lpVtbl->get_IncomingServerAddress(This,value) )
    ( (This)->lpVtbl->put_IncomingServerAddress(This,value) )
    ( (This)->lpVtbl->get_IncomingServerPort(This,value) )
    ( (This)->lpVtbl->put_IncomingServerPort(This,value) )
    ( (This)->lpVtbl->get_IncomingServerRequiresSsl(This,value) )
    ( (This)->lpVtbl->put_IncomingServerRequiresSsl(This,value) )
    ( (This)->lpVtbl->get_IncomingServerUsername(This,value) )
    ( (This)->lpVtbl->put_IncomingServerUsername(This,value) )
    ( (This)->lpVtbl->get_OutgoingServerAddress(This,value) )
    ( (This)->lpVtbl->put_OutgoingServerAddress(This,value) )
    ( (This)->lpVtbl->get_OutgoingServerPort(This,value) )
    ( (This)->lpVtbl->put_OutgoingServerPort(This,value) )
    ( (This)->lpVtbl->get_OutgoingServerRequiresSsl(This,value) )
    ( (This)->lpVtbl->put_OutgoingServerRequiresSsl(This,value) )
    ( (This)->lpVtbl->get_OutgoingServerUsername(This,value) )
    ( (This)->lpVtbl->put_OutgoingServerUsername(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_UserDataAccounts_SystemAccess_IDeviceAccountConfiguration2[] = L"Windows.ApplicationModel.UserDataAccounts.SystemAccess.IDeviceAccountConfiguration2";
typedef struct __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IncomingServerCredential )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IncomingServerCredential )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_OutgoingServerCredential )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_OutgoingServerCredential )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_OAuthRefreshToken )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_OAuthRefreshToken )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2 * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsExternallyManaged )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsExternallyManaged )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2 * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AccountIconId )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2 * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CDeviceAccountIconId * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AccountIconId )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2 * This,
                  __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CDeviceAccountIconId value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AuthenticationType )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2 * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CDeviceAccountAuthenticationType * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AuthenticationType )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2 * This,
                  __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CDeviceAccountAuthenticationType value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsSsoAuthenticationSupported )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SsoAccountId )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_SsoAccountId )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2 * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AlwaysDownloadFullMessage )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AlwaysDownloadFullMessage )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2 * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DoesPolicyAllowMailSync )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SyncScheduleKind )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2 * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CDeviceAccountSyncScheduleKind * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_SyncScheduleKind )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2 * This,
                  __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CDeviceAccountSyncScheduleKind value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MailAgeFilter )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2 * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CDeviceAccountMailAgeFilter * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_MailAgeFilter )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2 * This,
                  __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CDeviceAccountMailAgeFilter value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsClientAuthenticationCertificateRequired )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsClientAuthenticationCertificateRequired )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2 * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AutoSelectAuthenticationCertificate )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AutoSelectAuthenticationCertificate )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2 * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AuthenticationCertificateId )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AuthenticationCertificateId )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2 * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CardDavSyncScheduleKind )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2 * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CDeviceAccountSyncScheduleKind * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CardDavSyncScheduleKind )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2 * This,
                  __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CDeviceAccountSyncScheduleKind value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CalDavSyncScheduleKind )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2 * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CDeviceAccountSyncScheduleKind * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CalDavSyncScheduleKind )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2 * This,
                  __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CDeviceAccountSyncScheduleKind value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CardDavServerUrl )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CardDavServerUrl )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CardDavRequiresSsl )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CardDavRequiresSsl )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2 * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CalDavServerUrl )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CalDavServerUrl )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CalDavRequiresSsl )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CalDavRequiresSsl )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2 * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_WasModifiedByUser )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_WasModifiedByUser )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2 * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_WasIncomingServerCertificateHashConfirmed )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_WasIncomingServerCertificateHashConfirmed )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2 * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IncomingServerCertificateHash )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IncomingServerCertificateHash )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2 * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsOutgoingServerAuthenticationRequired )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsOutgoingServerAuthenticationRequired )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2 * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsOutgoingServerAuthenticationEnabled )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsOutgoingServerAuthenticationEnabled )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2 * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_WasOutgoingServerCertificateHashConfirmed )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_WasOutgoingServerCertificateHashConfirmed )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2 * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_OutgoingServerCertificateHash )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_OutgoingServerCertificateHash )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2 * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsSyncScheduleManagedBySystem )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsSyncScheduleManagedBySystem )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2 * This,
                  boolean value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IncomingServerCredential(This,value) )
    ( (This)->lpVtbl->put_IncomingServerCredential(This,value) )
    ( (This)->lpVtbl->get_OutgoingServerCredential(This,value) )
    ( (This)->lpVtbl->put_OutgoingServerCredential(This,value) )
    ( (This)->lpVtbl->get_OAuthRefreshToken(This,value) )
    ( (This)->lpVtbl->put_OAuthRefreshToken(This,value) )
    ( (This)->lpVtbl->get_IsExternallyManaged(This,value) )
    ( (This)->lpVtbl->put_IsExternallyManaged(This,value) )
    ( (This)->lpVtbl->get_AccountIconId(This,value) )
    ( (This)->lpVtbl->put_AccountIconId(This,value) )
    ( (This)->lpVtbl->get_AuthenticationType(This,value) )
    ( (This)->lpVtbl->put_AuthenticationType(This,value) )
    ( (This)->lpVtbl->get_IsSsoAuthenticationSupported(This,value) )
    ( (This)->lpVtbl->get_SsoAccountId(This,value) )
    ( (This)->lpVtbl->put_SsoAccountId(This,value) )
    ( (This)->lpVtbl->get_AlwaysDownloadFullMessage(This,value) )
    ( (This)->lpVtbl->put_AlwaysDownloadFullMessage(This,value) )
    ( (This)->lpVtbl->get_DoesPolicyAllowMailSync(This,value) )
    ( (This)->lpVtbl->get_SyncScheduleKind(This,value) )
    ( (This)->lpVtbl->put_SyncScheduleKind(This,value) )
    ( (This)->lpVtbl->get_MailAgeFilter(This,value) )
    ( (This)->lpVtbl->put_MailAgeFilter(This,value) )
    ( (This)->lpVtbl->get_IsClientAuthenticationCertificateRequired(This,value) )
    ( (This)->lpVtbl->put_IsClientAuthenticationCertificateRequired(This,value) )
    ( (This)->lpVtbl->get_AutoSelectAuthenticationCertificate(This,value) )
    ( (This)->lpVtbl->put_AutoSelectAuthenticationCertificate(This,value) )
    ( (This)->lpVtbl->get_AuthenticationCertificateId(This,value) )
    ( (This)->lpVtbl->put_AuthenticationCertificateId(This,value) )
    ( (This)->lpVtbl->get_CardDavSyncScheduleKind(This,value) )
    ( (This)->lpVtbl->put_CardDavSyncScheduleKind(This,value) )
    ( (This)->lpVtbl->get_CalDavSyncScheduleKind(This,value) )
    ( (This)->lpVtbl->put_CalDavSyncScheduleKind(This,value) )
    ( (This)->lpVtbl->get_CardDavServerUrl(This,value) )
    ( (This)->lpVtbl->put_CardDavServerUrl(This,value) )
    ( (This)->lpVtbl->get_CardDavRequiresSsl(This,value) )
    ( (This)->lpVtbl->put_CardDavRequiresSsl(This,value) )
    ( (This)->lpVtbl->get_CalDavServerUrl(This,value) )
    ( (This)->lpVtbl->put_CalDavServerUrl(This,value) )
    ( (This)->lpVtbl->get_CalDavRequiresSsl(This,value) )
    ( (This)->lpVtbl->put_CalDavRequiresSsl(This,value) )
    ( (This)->lpVtbl->get_WasModifiedByUser(This,value) )
    ( (This)->lpVtbl->put_WasModifiedByUser(This,value) )
    ( (This)->lpVtbl->get_WasIncomingServerCertificateHashConfirmed(This,value) )
    ( (This)->lpVtbl->put_WasIncomingServerCertificateHashConfirmed(This,value) )
    ( (This)->lpVtbl->get_IncomingServerCertificateHash(This,value) )
    ( (This)->lpVtbl->put_IncomingServerCertificateHash(This,value) )
    ( (This)->lpVtbl->get_IsOutgoingServerAuthenticationRequired(This,value) )
    ( (This)->lpVtbl->put_IsOutgoingServerAuthenticationRequired(This,value) )
    ( (This)->lpVtbl->get_IsOutgoingServerAuthenticationEnabled(This,value) )
    ( (This)->lpVtbl->put_IsOutgoingServerAuthenticationEnabled(This,value) )
    ( (This)->lpVtbl->get_WasOutgoingServerCertificateHashConfirmed(This,value) )
    ( (This)->lpVtbl->put_WasOutgoingServerCertificateHashConfirmed(This,value) )
    ( (This)->lpVtbl->get_OutgoingServerCertificateHash(This,value) )
    ( (This)->lpVtbl->put_OutgoingServerCertificateHash(This,value) )
    ( (This)->lpVtbl->get_IsSyncScheduleManagedBySystem(This,value) )
    ( (This)->lpVtbl->put_IsSyncScheduleManagedBySystem(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_UserDataAccounts_SystemAccess_IUserDataAccountSystemAccessManagerStatics[] = L"Windows.ApplicationModel.UserDataAccounts.SystemAccess.IUserDataAccountSystemAccessManagerStatics";
typedef struct __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIUserDataAccountSystemAccessManagerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIUserDataAccountSystemAccessManagerStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIUserDataAccountSystemAccessManagerStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIUserDataAccountSystemAccessManagerStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIUserDataAccountSystemAccessManagerStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIUserDataAccountSystemAccessManagerStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIUserDataAccountSystemAccessManagerStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *AddAndShowDeviceAccountsAsync )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIUserDataAccountSystemAccessManagerStatics * This,
                  __RPC__in_opt __FIIterable_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration * accounts,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_HSTRING * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIUserDataAccountSystemAccessManagerStaticsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIUserDataAccountSystemAccessManagerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIUserDataAccountSystemAccessManagerStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->AddAndShowDeviceAccountsAsync(This,accounts,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIUserDataAccountSystemAccessManagerStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_UserDataAccounts_SystemAccess_IUserDataAccountSystemAccessManagerStatics2[] = L"Windows.ApplicationModel.UserDataAccounts.SystemAccess.IUserDataAccountSystemAccessManagerStatics2";
typedef struct __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIUserDataAccountSystemAccessManagerStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIUserDataAccountSystemAccessManagerStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIUserDataAccountSystemAccessManagerStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIUserDataAccountSystemAccessManagerStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIUserDataAccountSystemAccessManagerStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIUserDataAccountSystemAccessManagerStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIUserDataAccountSystemAccessManagerStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *SuppressLocalAccountWithAccountAsync )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIUserDataAccountSystemAccessManagerStatics2 * This,
                  __RPC__in HSTRING userDataAccountId,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateDeviceAccountAsync )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIUserDataAccountSystemAccessManagerStatics2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIDeviceAccountConfiguration * account,
                           __RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * result
        );
    HRESULT ( STDMETHODCALLTYPE *DeleteDeviceAccountAsync )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIUserDataAccountSystemAccessManagerStatics2 * This,
                  __RPC__in HSTRING accountId,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeviceAccountConfigurationAsync )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIUserDataAccountSystemAccessManagerStatics2 * This,
                  __RPC__in HSTRING accountId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataAccounts__CSystemAccess__CDeviceAccountConfiguration * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIUserDataAccountSystemAccessManagerStatics2Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIUserDataAccountSystemAccessManagerStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIUserDataAccountSystemAccessManagerStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->SuppressLocalAccountWithAccountAsync(This,userDataAccountId,result) )
    ( (This)->lpVtbl->CreateDeviceAccountAsync(This,account,result) )
    ( (This)->lpVtbl->DeleteDeviceAccountAsync(This,accountId,result) )
    ( (This)->lpVtbl->GetDeviceAccountConfigurationAsync(This,accountId,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CSystemAccess_CIUserDataAccountSystemAccessManagerStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_UserDataAccounts_SystemAccess_DeviceAccountConfiguration[] = L"Windows.ApplicationModel.UserDataAccounts.SystemAccess.DeviceAccountConfiguration";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_UserDataAccounts_SystemAccess_UserDataAccountSystemAccessManager[] = L"Windows.ApplicationModel.UserDataAccounts.SystemAccess.UserDataAccountSystemAccessManager";
       
       
#pragma clang diagnostic pop

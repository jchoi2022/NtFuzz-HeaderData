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
#include "Windows.System.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIFindAllAccountsResult __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIFindAllAccountsResult;
typedef interface __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAccountEventArgs __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAccountEventArgs;
typedef interface __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAccountMonitor __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAccountMonitor;
typedef interface __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics;
typedef interface __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics2 __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics2;
typedef interface __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics3 __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics3;
typedef interface __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics4 __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics4;
typedef interface __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebProviderError __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebProviderError;
typedef interface __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebProviderErrorFactory __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebProviderErrorFactory;
typedef interface __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest;
typedef interface __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest2 __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest2;
typedef interface __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest3 __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest3;
typedef interface __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequestFactory __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequestFactory;
typedef interface __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequestResult __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequestResult;
typedef interface __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenResponse __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenResponse;
typedef interface __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenResponseFactory __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenResponseFactory;
typedef interface __FIIterator_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponse __FIIterator_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponse;
EXTERN_C const IID IID___FIIterator_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponse;
typedef struct __FIIterator_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponseVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponse * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponse * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponse * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponse * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponse * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponse * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponse * This, __RPC__out __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenResponse * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponse * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponse * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponse * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenResponse * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponseVtbl;
interface __FIIterator_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponse
{
    CONST_VTBL struct __FIIterator_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponseVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponse __FIIterable_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponse;
EXTERN_C const IID IID___FIIterable_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponse;
typedef struct __FIIterable_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponseVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponse * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponse * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponse * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponse * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponse * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponse * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponse * This, __RPC__deref_out_opt __FIIterator_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponse **first);
    END_INTERFACE
} __FIIterable_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponseVtbl;
interface __FIIterable_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponse
{
    CONST_VTBL struct __FIIterable_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponseVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponse __FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponse;
EXTERN_C const IID IID___FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponse;
typedef struct __FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponseVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponse * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponse * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponse * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponse * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponse * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponse * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponse * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenResponse * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponse * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponse * This,
                       __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenResponse * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponse * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenResponse * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponseVtbl;
interface __FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponse
{
    CONST_VTBL struct __FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponseVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CFindAllAccountsResult __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CFindAllAccountsResult;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CFindAllAccountsResult;
typedef interface __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CFindAllAccountsResult __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CFindAllAccountsResult;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CFindAllAccountsResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CFindAllAccountsResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CFindAllAccountsResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CFindAllAccountsResult * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CFindAllAccountsResult * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CFindAllAccountsResult *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CFindAllAccountsResultVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CFindAllAccountsResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CFindAllAccountsResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CFindAllAccountsResult __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CFindAllAccountsResult;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CFindAllAccountsResult;
typedef struct __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CFindAllAccountsResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CFindAllAccountsResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CFindAllAccountsResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CFindAllAccountsResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CFindAllAccountsResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CFindAllAccountsResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CFindAllAccountsResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CFindAllAccountsResult * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CFindAllAccountsResult *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CFindAllAccountsResult * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CFindAllAccountsResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CFindAllAccountsResult * This, __RPC__out __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIFindAllAccountsResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CFindAllAccountsResultVtbl;
interface __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CFindAllAccountsResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CFindAllAccountsResultVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult;
typedef interface __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResultVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult;
typedef struct __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult * This, __RPC__out __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequestResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResultVtbl;
interface __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResultVtbl *lpVtbl;
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
typedef interface __FITypedEventHandler_2_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebAccountMonitor_IInspectable __FITypedEventHandler_2_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebAccountMonitor_IInspectable;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebAccountMonitor_IInspectable;
typedef struct __FITypedEventHandler_2_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebAccountMonitor_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebAccountMonitor_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebAccountMonitor_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebAccountMonitor_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebAccountMonitor_IInspectable * This, __RPC__in_opt __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAccountMonitor * sender, __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebAccountMonitor_IInspectableVtbl;
interface __FITypedEventHandler_2_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebAccountMonitor_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebAccountMonitor_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebAccountMonitor_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebAccountEventArgs __FITypedEventHandler_2_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebAccountMonitor_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebAccountEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebAccountMonitor_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebAccountEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebAccountMonitor_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebAccountEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebAccountMonitor_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebAccountEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebAccountMonitor_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebAccountEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebAccountMonitor_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebAccountEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebAccountMonitor_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebAccountEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAccountMonitor * sender, __RPC__in_opt __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAccountEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebAccountMonitor_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebAccountEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebAccountMonitor_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebAccountEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebAccountMonitor_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebAccountEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccount __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccount;
typedef interface __FIIterator_1_Windows__CSecurity__CCredentials__CWebAccount __FIIterator_1_Windows__CSecurity__CCredentials__CWebAccount;
EXTERN_C const IID IID___FIIterator_1_Windows__CSecurity__CCredentials__CWebAccount;
typedef struct __FIIterator_1_Windows__CSecurity__CCredentials__CWebAccountVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CSecurity__CCredentials__CWebAccount * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CSecurity__CCredentials__CWebAccount * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CSecurity__CCredentials__CWebAccount * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CSecurity__CCredentials__CWebAccount * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CSecurity__CCredentials__CWebAccount * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CSecurity__CCredentials__CWebAccount * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CSecurity__CCredentials__CWebAccount * This, __RPC__out __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccount * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CSecurity__CCredentials__CWebAccount * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CSecurity__CCredentials__CWebAccount * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CSecurity__CCredentials__CWebAccount * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccount * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CSecurity__CCredentials__CWebAccountVtbl;
interface __FIIterator_1_Windows__CSecurity__CCredentials__CWebAccount
{
    CONST_VTBL struct __FIIterator_1_Windows__CSecurity__CCredentials__CWebAccountVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CSecurity__CCredentials__CWebAccount __FIIterable_1_Windows__CSecurity__CCredentials__CWebAccount;
EXTERN_C const IID IID___FIIterable_1_Windows__CSecurity__CCredentials__CWebAccount;
typedef struct __FIIterable_1_Windows__CSecurity__CCredentials__CWebAccountVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CSecurity__CCredentials__CWebAccount * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CSecurity__CCredentials__CWebAccount * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CSecurity__CCredentials__CWebAccount * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CSecurity__CCredentials__CWebAccount * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CSecurity__CCredentials__CWebAccount * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CSecurity__CCredentials__CWebAccount * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CSecurity__CCredentials__CWebAccount * This, __RPC__deref_out_opt __FIIterator_1_Windows__CSecurity__CCredentials__CWebAccount **first);
    END_INTERFACE
} __FIIterable_1_Windows__CSecurity__CCredentials__CWebAccountVtbl;
interface __FIIterable_1_Windows__CSecurity__CCredentials__CWebAccount
{
    CONST_VTBL struct __FIIterable_1_Windows__CSecurity__CCredentials__CWebAccountVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount __FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount;
EXTERN_C const IID IID___FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount;
typedef struct __FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccountVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccount * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount * This,
                       __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccount * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccount * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccountVtbl;
interface __FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount
{
    CONST_VTBL struct __FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccountVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CWebAccount __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CWebAccount;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CWebAccount;
typedef interface __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccount __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccount;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CWebAccountVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CWebAccount * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CWebAccount * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CWebAccount * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CWebAccount * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccount *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CWebAccountVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CWebAccount
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CWebAccountVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccount __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccount;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccount;
typedef struct __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccountVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccount * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccount * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccount * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccount * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccount * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccount * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccount * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CWebAccount *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccount * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CWebAccount **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccount * This, __RPC__out __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccount * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccountVtbl;
interface __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccount
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccountVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountProvider __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountProvider;
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CWebAccountProvider __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CWebAccountProvider;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CWebAccountProvider;
typedef interface __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccountProvider __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccountProvider;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CWebAccountProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CWebAccountProvider * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CWebAccountProvider * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CWebAccountProvider * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CWebAccountProvider * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccountProvider *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CWebAccountProviderVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CWebAccountProvider
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CWebAccountProviderVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccountProvider __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccountProvider;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccountProvider;
typedef struct __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccountProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccountProvider * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccountProvider * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccountProvider * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccountProvider * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccountProvider * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccountProvider * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccountProvider * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CWebAccountProvider *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccountProvider * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CWebAccountProvider **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccountProvider * This, __RPC__out __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountProvider * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccountProviderVtbl;
interface __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccountProvider
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccountProviderVtbl *lpVtbl;
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
typedef interface __FIKeyValuePair_2_HSTRING_HSTRING __FIKeyValuePair_2_HSTRING_HSTRING;
EXTERN_C const IID IID___FIKeyValuePair_2_HSTRING_HSTRING;
typedef struct __FIKeyValuePair_2_HSTRING_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This,
                        __RPC__out ULONG *iidCount,
                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Key )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This, __RPC__out HSTRING *key);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This, __RPC__deref_out_opt HSTRING *value);
    END_INTERFACE
} __FIKeyValuePair_2_HSTRING_HSTRINGVtbl;
interface __FIKeyValuePair_2_HSTRING_HSTRING
{
    CONST_VTBL struct __FIKeyValuePair_2_HSTRING_HSTRINGVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Key(This,key) )
    ( (This)->lpVtbl -> get_Value(This,value) )
typedef interface __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING;
EXTERN_C const IID IID___FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING;
typedef struct __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This, __RPC__out __FIKeyValuePair_2_HSTRING_HSTRING * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __FIKeyValuePair_2_HSTRING_HSTRING * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRINGVtbl;
interface __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING
{
    CONST_VTBL struct __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRINGVtbl *lpVtbl;
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
typedef interface __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING;
EXTERN_C const IID IID___FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING;
typedef struct __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * This, __RPC__deref_out_opt __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING **first);
    END_INTERFACE
} __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRINGVtbl;
interface __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING
{
    CONST_VTBL struct __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRINGVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIMapView_2_HSTRING_HSTRING __FIMapView_2_HSTRING_HSTRING;
EXTERN_C const IID IID___FIMapView_2_HSTRING_HSTRING;
typedef struct __FIMapView_2_HSTRING_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This,
                   __RPC__in HSTRING key,
                            __RPC__deref_out_opt HSTRING *value);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This, __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This, __RPC__in HSTRING key, __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *Split )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This, __RPC__deref_out_opt __FIMapView_2_HSTRING_HSTRING **firstPartition,
                    __RPC__deref_out_opt __FIMapView_2_HSTRING_HSTRING **secondPartition);
    END_INTERFACE
} __FIMapView_2_HSTRING_HSTRINGVtbl;
interface __FIMapView_2_HSTRING_HSTRING
{
    CONST_VTBL struct __FIMapView_2_HSTRING_HSTRINGVtbl *lpVtbl;
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
typedef interface __FIMap_2_HSTRING_HSTRING __FIMap_2_HSTRING_HSTRING;
EXTERN_C const IID IID___FIMap_2_HSTRING_HSTRING;
typedef struct __FIMap_2_HSTRING_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMap_2_HSTRING_HSTRING * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMap_2_HSTRING_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMap_2_HSTRING_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMap_2_HSTRING_HSTRING * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMap_2_HSTRING_HSTRING * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMap_2_HSTRING_HSTRING * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMap_2_HSTRING_HSTRING * This,
                   HSTRING key,
                            __RPC__deref_out_opt HSTRING **value);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMap_2_HSTRING_HSTRING * This, __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMap_2_HSTRING_HSTRING * This, HSTRING key, __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIMap_2_HSTRING_HSTRING * This, __RPC__deref_out_opt __FIMapView_2_HSTRING_HSTRING **view);
    HRESULT ( STDMETHODCALLTYPE *Insert )(__RPC__in __FIMap_2_HSTRING_HSTRING * This,
                   HSTRING key,
                   __RPC__in_opt HSTRING *value,
                            __RPC__out boolean *replaced);
    HRESULT ( STDMETHODCALLTYPE *Remove )(__RPC__in __FIMap_2_HSTRING_HSTRING * This, HSTRING key);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIMap_2_HSTRING_HSTRING * This);
    END_INTERFACE
} __FIMap_2_HSTRING_HSTRINGVtbl;
interface __FIMap_2_HSTRING_HSTRING
{
    CONST_VTBL struct __FIMap_2_HSTRING_HSTRINGVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CFoundation_CIAsyncAction __x_ABI_CWindows_CFoundation_CIAsyncAction;
typedef interface __x_ABI_CWindows_CSystem_CIUser __x_ABI_CWindows_CSystem_CIUser;
typedef enum __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CFindAllWebAccountsStatus __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CFindAllWebAccountsStatus;
typedef enum __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CWebTokenRequestPromptType __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CWebTokenRequestPromptType;
typedef enum __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CWebTokenRequestStatus __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CWebTokenRequestStatus;
enum __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CFindAllWebAccountsStatus
{
    FindAllWebAccountsStatus_Success = 0,
    FindAllWebAccountsStatus_NotAllowedByProvider = 1,
    FindAllWebAccountsStatus_NotSupportedByProvider = 2,
    FindAllWebAccountsStatus_ProviderError = 3,
};
enum __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CWebTokenRequestPromptType
{
    WebTokenRequestPromptType_Default = 0,
    WebTokenRequestPromptType_ForceAuthentication = 1,
};
enum __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CWebTokenRequestStatus
{
    WebTokenRequestStatus_Success = 0,
    WebTokenRequestStatus_UserCancel = 1,
    WebTokenRequestStatus_AccountSwitch = 2,
    WebTokenRequestStatus_UserInteractionRequired = 3,
    WebTokenRequestStatus_AccountProviderNotAvailable = 4,
    WebTokenRequestStatus_ProviderError = 5,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_Web_Core_IFindAllAccountsResult[] = L"Windows.Security.Authentication.Web.Core.IFindAllAccountsResult";
typedef struct __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIFindAllAccountsResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIFindAllAccountsResult * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIFindAllAccountsResult * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIFindAllAccountsResult * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIFindAllAccountsResult * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIFindAllAccountsResult * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIFindAllAccountsResult * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Accounts )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIFindAllAccountsResult * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIFindAllAccountsResult * This,
                           __RPC__out __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CFindAllWebAccountsStatus * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ProviderError )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIFindAllAccountsResult * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebProviderError * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIFindAllAccountsResultVtbl;
interface __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIFindAllAccountsResult
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIFindAllAccountsResultVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Accounts(This,value) )
    ( (This)->lpVtbl->get_Status(This,value) )
    ( (This)->lpVtbl->get_ProviderError(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIFindAllAccountsResult;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_Web_Core_IWebAccountEventArgs[] = L"Windows.Security.Authentication.Web.Core.IWebAccountEventArgs";
typedef struct __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAccountEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAccountEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAccountEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAccountEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAccountEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAccountEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAccountEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Account )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAccountEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccount * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAccountEventArgsVtbl;
interface __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAccountEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAccountEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Account(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAccountEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_Web_Core_IWebAccountMonitor[] = L"Windows.Security.Authentication.Web.Core.IWebAccountMonitor";
typedef struct __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAccountMonitorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAccountMonitor * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAccountMonitor * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAccountMonitor * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAccountMonitor * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAccountMonitor * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAccountMonitor * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_Updated )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAccountMonitor * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebAccountMonitor_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebAccountEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Updated )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAccountMonitor * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_Removed )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAccountMonitor * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebAccountMonitor_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebAccountEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Removed )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAccountMonitor * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_DefaultSignInAccountChanged )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAccountMonitor * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebAccountMonitor_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_DefaultSignInAccountChanged )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAccountMonitor * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAccountMonitorVtbl;
interface __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAccountMonitor
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAccountMonitorVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_Updated(This,handler,token) )
    ( (This)->lpVtbl->remove_Updated(This,token) )
    ( (This)->lpVtbl->add_Removed(This,handler,token) )
    ( (This)->lpVtbl->remove_Removed(This,token) )
    ( (This)->lpVtbl->add_DefaultSignInAccountChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_DefaultSignInAccountChanged(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAccountMonitor;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_Web_Core_IWebAuthenticationCoreManagerStatics[] = L"Windows.Security.Authentication.Web.Core.IWebAuthenticationCoreManagerStatics";
typedef struct __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *GetTokenSilentlyAsync )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest * request,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult * * asyncInfo
        );
                    HRESULT ( STDMETHODCALLTYPE *GetTokenSilentlyWithWebAccountAsync )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest * request,
                  __RPC__in_opt __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccount * webAccount,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult * * asyncInfo
        );
                    HRESULT ( STDMETHODCALLTYPE *RequestTokenAsync )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest * request,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult * * asyncInfo
        );
                    HRESULT ( STDMETHODCALLTYPE *RequestTokenWithWebAccountAsync )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest * request,
                  __RPC__in_opt __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccount * webAccount,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult * * asyncInfo
        );
    HRESULT ( STDMETHODCALLTYPE *FindAccountAsync )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountProvider * provider,
                  __RPC__in HSTRING webAccountId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccount * * asyncInfo
        );
                    HRESULT ( STDMETHODCALLTYPE *FindAccountProviderAsync )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics * This,
                  __RPC__in HSTRING webAccountProviderId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccountProvider * * asyncInfo
        );
                    HRESULT ( STDMETHODCALLTYPE *FindAccountProviderWithAuthorityAsync )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics * This,
                  __RPC__in HSTRING webAccountProviderId,
                  __RPC__in HSTRING authority,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccountProvider * * asyncInfo
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStaticsVtbl;
interface __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetTokenSilentlyAsync(This,request,asyncInfo) )
    ( (This)->lpVtbl->GetTokenSilentlyWithWebAccountAsync(This,request,webAccount,asyncInfo) )
    ( (This)->lpVtbl->RequestTokenAsync(This,request,asyncInfo) )
    ( (This)->lpVtbl->RequestTokenWithWebAccountAsync(This,request,webAccount,asyncInfo) )
    ( (This)->lpVtbl->FindAccountAsync(This,provider,webAccountId,asyncInfo) )
    ( (This)->lpVtbl->FindAccountProviderAsync(This,webAccountProviderId,asyncInfo) )
    ( (This)->lpVtbl->FindAccountProviderWithAuthorityAsync(This,webAccountProviderId,authority,asyncInfo) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_Web_Core_IWebAuthenticationCoreManagerStatics2[] = L"Windows.Security.Authentication.Web.Core.IWebAuthenticationCoreManagerStatics2";
typedef struct __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *FindAccountProviderWithAuthorityForUserAsync )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics2 * This,
                  __RPC__in HSTRING webAccountProviderId,
                  __RPC__in HSTRING authority,
                  __RPC__in_opt __x_ABI_CWindows_CSystem_CIUser * user,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccountProvider * * asyncInfo
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics2Vtbl;
interface __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->FindAccountProviderWithAuthorityForUserAsync(This,webAccountProviderId,authority,user,asyncInfo) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_Web_Core_IWebAuthenticationCoreManagerStatics3[] = L"Windows.Security.Authentication.Web.Core.IWebAuthenticationCoreManagerStatics3";
typedef struct __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateWebAccountMonitor )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics3 * This,
                  __RPC__in_opt __FIIterable_1_Windows__CSecurity__CCredentials__CWebAccount * webAccounts,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAccountMonitor * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics3Vtbl;
interface __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics3
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateWebAccountMonitor(This,webAccounts,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_Web_Core_IWebAuthenticationCoreManagerStatics4[] = L"Windows.Security.Authentication.Web.Core.IWebAuthenticationCoreManagerStatics4";
typedef struct __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics4Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics4 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics4 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics4 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics4 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics4 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics4 * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *FindAllAccountsAsync )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics4 * This,
                  __RPC__in_opt __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountProvider * provider,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CFindAllAccountsResult * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *FindAllAccountsWithClientIdAsync )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics4 * This,
                  __RPC__in_opt __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountProvider * provider,
                  __RPC__in HSTRING clientId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CFindAllAccountsResult * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *FindSystemAccountProviderAsync )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics4 * This,
                  __RPC__in HSTRING webAccountProviderId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccountProvider * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *FindSystemAccountProviderWithAuthorityAsync )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics4 * This,
                  __RPC__in HSTRING webAccountProviderId,
                  __RPC__in HSTRING authority,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccountProvider * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *FindSystemAccountProviderWithAuthorityForUserAsync )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics4 * This,
                  __RPC__in HSTRING webAccountProviderId,
                  __RPC__in HSTRING authority,
                  __RPC__in_opt __x_ABI_CWindows_CSystem_CIUser * user,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccountProvider * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics4Vtbl;
interface __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics4
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics4Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->FindAllAccountsAsync(This,provider,operation) )
    ( (This)->lpVtbl->FindAllAccountsWithClientIdAsync(This,provider,clientId,operation) )
    ( (This)->lpVtbl->FindSystemAccountProviderAsync(This,webAccountProviderId,operation) )
    ( (This)->lpVtbl->FindSystemAccountProviderWithAuthorityAsync(This,webAccountProviderId,authority,operation) )
    ( (This)->lpVtbl->FindSystemAccountProviderWithAuthorityForUserAsync(This,webAccountProviderId,authority,user,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics4;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_Web_Core_IWebProviderError[] = L"Windows.Security.Authentication.Web.Core.IWebProviderError";
typedef struct __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebProviderErrorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebProviderError * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebProviderError * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebProviderError * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebProviderError * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebProviderError * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebProviderError * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ErrorCode )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebProviderError * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ErrorMessage )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebProviderError * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Properties )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebProviderError * This,
                           __RPC__deref_out_opt __FIMap_2_HSTRING_HSTRING * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebProviderErrorVtbl;
interface __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebProviderError
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebProviderErrorVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ErrorCode(This,value) )
    ( (This)->lpVtbl->get_ErrorMessage(This,value) )
    ( (This)->lpVtbl->get_Properties(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebProviderError;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_Web_Core_IWebProviderErrorFactory[] = L"Windows.Security.Authentication.Web.Core.IWebProviderErrorFactory";
typedef struct __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebProviderErrorFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebProviderErrorFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebProviderErrorFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebProviderErrorFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebProviderErrorFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebProviderErrorFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebProviderErrorFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebProviderErrorFactory * This,
                  UINT32 errorCode,
                  __RPC__in HSTRING errorMessage,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebProviderError * * webProviderError
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebProviderErrorFactoryVtbl;
interface __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebProviderErrorFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebProviderErrorFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,errorCode,errorMessage,webProviderError) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebProviderErrorFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_Web_Core_IWebTokenRequest[] = L"Windows.Security.Authentication.Web.Core.IWebTokenRequest";
typedef struct __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequestVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_WebAccountProvider )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountProvider * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Scope )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ClientId )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PromptType )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest * This,
                           __RPC__out __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CWebTokenRequestPromptType * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Properties )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest * This,
                           __RPC__deref_out_opt __FIMap_2_HSTRING_HSTRING * * requestProperties
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequestVtbl;
interface __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequestVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_WebAccountProvider(This,value) )
    ( (This)->lpVtbl->get_Scope(This,value) )
    ( (This)->lpVtbl->get_ClientId(This,value) )
    ( (This)->lpVtbl->get_PromptType(This,value) )
    ( (This)->lpVtbl->get_Properties(This,requestProperties) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_Web_Core_IWebTokenRequest2[] = L"Windows.Security.Authentication.Web.Core.IWebTokenRequest2";
typedef struct __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AppProperties )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest2 * This,
                           __RPC__deref_out_opt __FIMap_2_HSTRING_HSTRING * * requestProperties
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest2Vtbl;
interface __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest2
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AppProperties(This,requestProperties) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_Web_Core_IWebTokenRequest3[] = L"Windows.Security.Authentication.Web.Core.IWebTokenRequest3";
typedef struct __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_CorrelationId )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest3 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CorrelationId )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest3 * This,
                  __RPC__in HSTRING value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest3Vtbl;
interface __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest3
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_CorrelationId(This,value) )
    ( (This)->lpVtbl->put_CorrelationId(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_Web_Core_IWebTokenRequestFactory[] = L"Windows.Security.Authentication.Web.Core.IWebTokenRequestFactory";
typedef struct __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequestFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequestFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequestFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequestFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequestFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequestFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequestFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequestFactory * This,
                  __RPC__in_opt __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountProvider * provider,
                  __RPC__in HSTRING scope,
                  __RPC__in HSTRING clientId,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest * * webTokenRequest
        );
    HRESULT ( STDMETHODCALLTYPE *CreateWithPromptType )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequestFactory * This,
                  __RPC__in_opt __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountProvider * provider,
                  __RPC__in HSTRING scope,
                  __RPC__in HSTRING clientId,
                  __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CWebTokenRequestPromptType promptType,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest * * webTokenRequest
        );
    HRESULT ( STDMETHODCALLTYPE *CreateWithProvider )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequestFactory * This,
                  __RPC__in_opt __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountProvider * provider,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest * * webTokenRequest
        );
    HRESULT ( STDMETHODCALLTYPE *CreateWithScope )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequestFactory * This,
                  __RPC__in_opt __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountProvider * provider,
                  __RPC__in HSTRING scope,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest * * webTokenRequest
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequestFactoryVtbl;
interface __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequestFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequestFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,provider,scope,clientId,webTokenRequest) )
    ( (This)->lpVtbl->CreateWithPromptType(This,provider,scope,clientId,promptType,webTokenRequest) )
    ( (This)->lpVtbl->CreateWithProvider(This,provider,webTokenRequest) )
    ( (This)->lpVtbl->CreateWithScope(This,provider,scope,webTokenRequest) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequestFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_Web_Core_IWebTokenRequestResult[] = L"Windows.Security.Authentication.Web.Core.IWebTokenRequestResult";
typedef struct __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequestResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequestResult * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequestResult * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequestResult * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequestResult * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequestResult * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequestResult * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ResponseData )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequestResult * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenResponse * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ResponseStatus )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequestResult * This,
                           __RPC__out __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CWebTokenRequestStatus * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ResponseError )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequestResult * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebProviderError * * value
        );
    HRESULT ( STDMETHODCALLTYPE *InvalidateCacheAsync )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequestResult * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * asyncInfo
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequestResultVtbl;
interface __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequestResult
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequestResultVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ResponseData(This,value) )
    ( (This)->lpVtbl->get_ResponseStatus(This,value) )
    ( (This)->lpVtbl->get_ResponseError(This,value) )
    ( (This)->lpVtbl->InvalidateCacheAsync(This,asyncInfo) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequestResult;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_Web_Core_IWebTokenResponse[] = L"Windows.Security.Authentication.Web.Core.IWebTokenResponse";
typedef struct __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenResponseVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenResponse * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenResponse * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenResponse * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenResponse * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenResponse * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenResponse * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Token )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenResponse * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ProviderError )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenResponse * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebProviderError * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_WebAccount )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenResponse * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccount * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Properties )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenResponse * This,
                           __RPC__deref_out_opt __FIMap_2_HSTRING_HSTRING * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenResponseVtbl;
interface __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenResponse
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenResponseVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Token(This,value) )
    ( (This)->lpVtbl->get_ProviderError(This,value) )
    ( (This)->lpVtbl->get_WebAccount(This,value) )
    ( (This)->lpVtbl->get_Properties(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenResponse;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_Web_Core_IWebTokenResponseFactory[] = L"Windows.Security.Authentication.Web.Core.IWebTokenResponseFactory";
typedef struct __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenResponseFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenResponseFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenResponseFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenResponseFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenResponseFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenResponseFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenResponseFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateWithToken )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenResponseFactory * This,
                  __RPC__in HSTRING token,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenResponse * * webTokenResponse
        );
    HRESULT ( STDMETHODCALLTYPE *CreateWithTokenAndAccount )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenResponseFactory * This,
                  __RPC__in HSTRING token,
                  __RPC__in_opt __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccount * webAccount,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenResponse * * webTokenResponse
        );
    HRESULT ( STDMETHODCALLTYPE *CreateWithTokenAccountAndError )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenResponseFactory * This,
                  __RPC__in HSTRING token,
                  __RPC__in_opt __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccount * webAccount,
                  __RPC__in_opt __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebProviderError * error,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenResponse * * webTokenResponse
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenResponseFactoryVtbl;
interface __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenResponseFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenResponseFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateWithToken(This,token,webTokenResponse) )
    ( (This)->lpVtbl->CreateWithTokenAndAccount(This,token,webAccount,webTokenResponse) )
    ( (This)->lpVtbl->CreateWithTokenAccountAndError(This,token,webAccount,error,webTokenResponse) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenResponseFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Authentication_Web_Core_FindAllAccountsResult[] = L"Windows.Security.Authentication.Web.Core.FindAllAccountsResult";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Authentication_Web_Core_WebAccountEventArgs[] = L"Windows.Security.Authentication.Web.Core.WebAccountEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Authentication_Web_Core_WebAccountMonitor[] = L"Windows.Security.Authentication.Web.Core.WebAccountMonitor";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Authentication_Web_Core_WebAuthenticationCoreManager[] = L"Windows.Security.Authentication.Web.Core.WebAuthenticationCoreManager";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Authentication_Web_Core_WebProviderError[] = L"Windows.Security.Authentication.Web.Core.WebProviderError";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Authentication_Web_Core_WebTokenRequest[] = L"Windows.Security.Authentication.Web.Core.WebTokenRequest";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Authentication_Web_Core_WebTokenRequestResult[] = L"Windows.Security.Authentication.Web.Core.WebTokenRequestResult";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Authentication_Web_Core_WebTokenResponse[] = L"Windows.Security.Authentication.Web.Core.WebTokenResponse";
       
       
#pragma clang diagnostic pop

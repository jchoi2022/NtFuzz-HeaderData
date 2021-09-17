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
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorAuthenticationManager __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorAuthenticationManager;
typedef interface __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorAuthenticatorStatics __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorAuthenticatorStatics;
typedef interface __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorGetSessionsResult __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorGetSessionsResult;
typedef interface __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorOneTimeCodedInfo __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorOneTimeCodedInfo;
typedef interface __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorSessionInfo __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorSessionInfo;
typedef interface __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo;
typedef interface __FIIterator_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfo __FIIterator_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfo;
EXTERN_C const IID IID___FIIterator_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfo;
typedef struct __FIIterator_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfo * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfo * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfo * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfo * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfo * This, __RPC__out __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorSessionInfo * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfo * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfo * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfo * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorSessionInfo * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfoVtbl;
interface __FIIterator_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfo
{
    CONST_VTBL struct __FIIterator_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfoVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfo __FIIterable_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfo;
EXTERN_C const IID IID___FIIterable_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfo;
typedef struct __FIIterable_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfo * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfo * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfo * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfo * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfo * This, __RPC__deref_out_opt __FIIterator_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfo **first);
    END_INTERFACE
} __FIIterable_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfoVtbl;
interface __FIIterable_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfo
{
    CONST_VTBL struct __FIIterable_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfoVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfo __FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfo;
EXTERN_C const IID IID___FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfo;
typedef struct __FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfo * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfo * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfo * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfo * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfo * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorSessionInfo * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfo * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfo * This,
                       __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorSessionInfo * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfo * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorSessionInfo * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfoVtbl;
interface __FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfo
{
    CONST_VTBL struct __FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfoVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorGetSessionsResult __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorGetSessionsResult;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorGetSessionsResult;
typedef interface __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorGetSessionsResult __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorGetSessionsResult;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorGetSessionsResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorGetSessionsResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorGetSessionsResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorGetSessionsResult * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorGetSessionsResult * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorGetSessionsResult *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorGetSessionsResultVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorGetSessionsResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorGetSessionsResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorGetSessionsResult __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorGetSessionsResult;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorGetSessionsResult;
typedef struct __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorGetSessionsResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorGetSessionsResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorGetSessionsResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorGetSessionsResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorGetSessionsResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorGetSessionsResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorGetSessionsResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorGetSessionsResult * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorGetSessionsResult *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorGetSessionsResult * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorGetSessionsResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorGetSessionsResult * This, __RPC__out __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorGetSessionsResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorGetSessionsResultVtbl;
interface __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorGetSessionsResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorGetSessionsResultVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorOneTimeCodedInfo __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorOneTimeCodedInfo;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorOneTimeCodedInfo;
typedef interface __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorOneTimeCodedInfo __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorOneTimeCodedInfo;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorOneTimeCodedInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorOneTimeCodedInfo * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorOneTimeCodedInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorOneTimeCodedInfo * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorOneTimeCodedInfo * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorOneTimeCodedInfo *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorOneTimeCodedInfoVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorOneTimeCodedInfo
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorOneTimeCodedInfoVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorOneTimeCodedInfo __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorOneTimeCodedInfo;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorOneTimeCodedInfo;
typedef struct __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorOneTimeCodedInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorOneTimeCodedInfo * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorOneTimeCodedInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorOneTimeCodedInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorOneTimeCodedInfo * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorOneTimeCodedInfo * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorOneTimeCodedInfo * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorOneTimeCodedInfo * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorOneTimeCodedInfo *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorOneTimeCodedInfo * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorOneTimeCodedInfo **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorOneTimeCodedInfo * This, __RPC__out __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorOneTimeCodedInfo * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorOneTimeCodedInfoVtbl;
interface __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorOneTimeCodedInfo
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorOneTimeCodedInfoVtbl *lpVtbl;
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
enum __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CMicrosoftAccountMultiFactorServiceResponse;
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorServiceResponse __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorServiceResponse;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorServiceResponse;
typedef interface __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorServiceResponse __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorServiceResponse;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorServiceResponseVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorServiceResponse * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorServiceResponse * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorServiceResponse * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorServiceResponse * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorServiceResponse *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorServiceResponseVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorServiceResponse
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorServiceResponseVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorServiceResponse __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorServiceResponse;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorServiceResponse;
typedef struct __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorServiceResponseVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorServiceResponse * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorServiceResponse * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorServiceResponse * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorServiceResponse * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorServiceResponse * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorServiceResponse * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorServiceResponse * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorServiceResponse *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorServiceResponse * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorServiceResponse **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorServiceResponse * This, __RPC__out enum __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CMicrosoftAccountMultiFactorServiceResponse *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorServiceResponseVtbl;
interface __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorServiceResponse
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorServiceResponseVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo;
typedef interface __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfoVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfoVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo;
typedef struct __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo * This, __RPC__out __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfoVtbl;
interface __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfoVtbl *lpVtbl;
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
typedef struct __x_ABI_CWindows_CFoundation_CDateTime __x_ABI_CWindows_CFoundation_CDateTime;
typedef struct __x_ABI_CWindows_CFoundation_CTimeSpan __x_ABI_CWindows_CFoundation_CTimeSpan;
typedef enum __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CMicrosoftAccountMultiFactorAuthenticationType __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CMicrosoftAccountMultiFactorAuthenticationType;
typedef enum __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CMicrosoftAccountMultiFactorServiceResponse __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CMicrosoftAccountMultiFactorServiceResponse;
typedef enum __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CMicrosoftAccountMultiFactorSessionApprovalStatus __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CMicrosoftAccountMultiFactorSessionApprovalStatus;
typedef enum __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CMicrosoftAccountMultiFactorSessionAuthenticationStatus __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CMicrosoftAccountMultiFactorSessionAuthenticationStatus;
enum __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CMicrosoftAccountMultiFactorAuthenticationType
{
    MicrosoftAccountMultiFactorAuthenticationType_User = 0,
    MicrosoftAccountMultiFactorAuthenticationType_Device = 1,
};
enum __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CMicrosoftAccountMultiFactorServiceResponse
{
    MicrosoftAccountMultiFactorServiceResponse_Success = 0,
    MicrosoftAccountMultiFactorServiceResponse_Error = 1,
    MicrosoftAccountMultiFactorServiceResponse_NoNetworkConnection = 2,
    MicrosoftAccountMultiFactorServiceResponse_ServiceUnavailable = 3,
    MicrosoftAccountMultiFactorServiceResponse_TotpSetupDenied = 4,
    MicrosoftAccountMultiFactorServiceResponse_NgcNotSetup = 5,
    MicrosoftAccountMultiFactorServiceResponse_SessionAlreadyDenied = 6,
    MicrosoftAccountMultiFactorServiceResponse_SessionAlreadyApproved = 7,
    MicrosoftAccountMultiFactorServiceResponse_SessionExpired = 8,
    MicrosoftAccountMultiFactorServiceResponse_NgcNonceExpired = 9,
    MicrosoftAccountMultiFactorServiceResponse_InvalidSessionId = 10,
    MicrosoftAccountMultiFactorServiceResponse_InvalidSessionType = 11,
    MicrosoftAccountMultiFactorServiceResponse_InvalidOperation = 12,
    MicrosoftAccountMultiFactorServiceResponse_InvalidStateTransition = 13,
    MicrosoftAccountMultiFactorServiceResponse_DeviceNotFound = 14,
    MicrosoftAccountMultiFactorServiceResponse_FlowDisabled = 15,
    MicrosoftAccountMultiFactorServiceResponse_SessionNotApproved = 16,
    MicrosoftAccountMultiFactorServiceResponse_OperationCanceledByUser = 17,
    MicrosoftAccountMultiFactorServiceResponse_NgcDisabledByServer = 18,
    MicrosoftAccountMultiFactorServiceResponse_NgcKeyNotFoundOnServer = 19,
    MicrosoftAccountMultiFactorServiceResponse_UIRequired = 20,
    MicrosoftAccountMultiFactorServiceResponse_DeviceIdChanged = 21,
};
enum __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CMicrosoftAccountMultiFactorSessionApprovalStatus
{
    MicrosoftAccountMultiFactorSessionApprovalStatus_Pending = 0,
    MicrosoftAccountMultiFactorSessionApprovalStatus_Approved = 1,
    MicrosoftAccountMultiFactorSessionApprovalStatus_Denied = 2,
};
enum __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CMicrosoftAccountMultiFactorSessionAuthenticationStatus
{
    MicrosoftAccountMultiFactorSessionAuthenticationStatus_Authenticated = 0,
    MicrosoftAccountMultiFactorSessionAuthenticationStatus_Unauthenticated = 1,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_Identity_Core_IMicrosoftAccountMultiFactorAuthenticationManager[] = L"Windows.Security.Authentication.Identity.Core.IMicrosoftAccountMultiFactorAuthenticationManager";
typedef struct __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorAuthenticationManagerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorAuthenticationManager * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorAuthenticationManager * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorAuthenticationManager * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorAuthenticationManager * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorAuthenticationManager * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorAuthenticationManager * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetOneTimePassCodeAsync )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorAuthenticationManager * This,
                  __RPC__in HSTRING userAccountId,
                  UINT32 codeLength,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorOneTimeCodedInfo * * asyncOperation
        );
    HRESULT ( STDMETHODCALLTYPE *AddDeviceAsync )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorAuthenticationManager * This,
                  __RPC__in HSTRING userAccountId,
                  __RPC__in HSTRING authenticationToken,
                  __RPC__in HSTRING wnsChannelId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorServiceResponse * * asyncOperation
        );
    HRESULT ( STDMETHODCALLTYPE *RemoveDeviceAsync )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorAuthenticationManager * This,
                  __RPC__in HSTRING userAccountId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorServiceResponse * * asyncOperation
        );
    HRESULT ( STDMETHODCALLTYPE *UpdateWnsChannelAsync )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorAuthenticationManager * This,
                  __RPC__in HSTRING userAccountId,
                  __RPC__in HSTRING channelUri,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorServiceResponse * * asyncOperation
        );
    HRESULT ( STDMETHODCALLTYPE *GetSessionsAsync )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorAuthenticationManager * This,
                  __RPC__in_opt __FIIterable_1_HSTRING * userAccountIdList,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorGetSessionsResult * * asyncOperation
        );
    HRESULT ( STDMETHODCALLTYPE *GetSessionsAndUnregisteredAccountsAsync )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorAuthenticationManager * This,
                  __RPC__in_opt __FIIterable_1_HSTRING * userAccountIdList,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo * * asyncOperation
        );
                    HRESULT ( STDMETHODCALLTYPE *ApproveSessionUsingAuthSessionInfoAsync )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorAuthenticationManager * This,
                  __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CMicrosoftAccountMultiFactorSessionAuthenticationStatus sessionAuthentictionStatus,
                  __RPC__in_opt __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorSessionInfo * authenticationSessionInfo,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorServiceResponse * * asyncOperation
        );
                    HRESULT ( STDMETHODCALLTYPE *ApproveSessionAsync )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorAuthenticationManager * This,
                  __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CMicrosoftAccountMultiFactorSessionAuthenticationStatus sessionAuthentictionStatus,
                  __RPC__in HSTRING userAccountId,
                  __RPC__in HSTRING sessionId,
                  __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CMicrosoftAccountMultiFactorAuthenticationType sessionAuthenticationType,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorServiceResponse * * asyncOperation
        );
                    HRESULT ( STDMETHODCALLTYPE *DenySessionUsingAuthSessionInfoAsync )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorAuthenticationManager * This,
                  __RPC__in_opt __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorSessionInfo * authenticationSessionInfo,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorServiceResponse * * asyncOperation
        );
                    HRESULT ( STDMETHODCALLTYPE *DenySessionAsync )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorAuthenticationManager * This,
                  __RPC__in HSTRING userAccountId,
                  __RPC__in HSTRING sessionId,
                  __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CMicrosoftAccountMultiFactorAuthenticationType sessionAuthenticationType,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorServiceResponse * * asyncOperation
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorAuthenticationManagerVtbl;
interface __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorAuthenticationManager
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorAuthenticationManagerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetOneTimePassCodeAsync(This,userAccountId,codeLength,asyncOperation) )
    ( (This)->lpVtbl->AddDeviceAsync(This,userAccountId,authenticationToken,wnsChannelId,asyncOperation) )
    ( (This)->lpVtbl->RemoveDeviceAsync(This,userAccountId,asyncOperation) )
    ( (This)->lpVtbl->UpdateWnsChannelAsync(This,userAccountId,channelUri,asyncOperation) )
    ( (This)->lpVtbl->GetSessionsAsync(This,userAccountIdList,asyncOperation) )
    ( (This)->lpVtbl->GetSessionsAndUnregisteredAccountsAsync(This,userAccountIdList,asyncOperation) )
    ( (This)->lpVtbl->ApproveSessionUsingAuthSessionInfoAsync(This,sessionAuthentictionStatus,authenticationSessionInfo,asyncOperation) )
    ( (This)->lpVtbl->ApproveSessionAsync(This,sessionAuthentictionStatus,userAccountId,sessionId,sessionAuthenticationType,asyncOperation) )
    ( (This)->lpVtbl->DenySessionUsingAuthSessionInfoAsync(This,authenticationSessionInfo,asyncOperation) )
    ( (This)->lpVtbl->DenySessionAsync(This,userAccountId,sessionId,sessionAuthenticationType,asyncOperation) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorAuthenticationManager;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_Identity_Core_IMicrosoftAccountMultiFactorAuthenticatorStatics[] = L"Windows.Security.Authentication.Identity.Core.IMicrosoftAccountMultiFactorAuthenticatorStatics";
typedef struct __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorAuthenticatorStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorAuthenticatorStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorAuthenticatorStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorAuthenticatorStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorAuthenticatorStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorAuthenticatorStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorAuthenticatorStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Current )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorAuthenticatorStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorAuthenticationManager * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorAuthenticatorStaticsVtbl;
interface __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorAuthenticatorStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorAuthenticatorStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Current(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorAuthenticatorStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_Identity_Core_IMicrosoftAccountMultiFactorGetSessionsResult[] = L"Windows.Security.Authentication.Identity.Core.IMicrosoftAccountMultiFactorGetSessionsResult";
typedef struct __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorGetSessionsResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorGetSessionsResult * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorGetSessionsResult * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorGetSessionsResult * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorGetSessionsResult * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorGetSessionsResult * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorGetSessionsResult * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Sessions )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorGetSessionsResult * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfo * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ServiceResponse )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorGetSessionsResult * This,
                           __RPC__out __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CMicrosoftAccountMultiFactorServiceResponse * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorGetSessionsResultVtbl;
interface __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorGetSessionsResult
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorGetSessionsResultVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Sessions(This,value) )
    ( (This)->lpVtbl->get_ServiceResponse(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorGetSessionsResult;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_Identity_Core_IMicrosoftAccountMultiFactorOneTimeCodedInfo[] = L"Windows.Security.Authentication.Identity.Core.IMicrosoftAccountMultiFactorOneTimeCodedInfo";
typedef struct __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorOneTimeCodedInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorOneTimeCodedInfo * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorOneTimeCodedInfo * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorOneTimeCodedInfo * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorOneTimeCodedInfo * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorOneTimeCodedInfo * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorOneTimeCodedInfo * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Code )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorOneTimeCodedInfo * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TimeInterval )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorOneTimeCodedInfo * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TimeToLive )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorOneTimeCodedInfo * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ServiceResponse )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorOneTimeCodedInfo * This,
                           __RPC__out __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CMicrosoftAccountMultiFactorServiceResponse * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorOneTimeCodedInfoVtbl;
interface __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorOneTimeCodedInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorOneTimeCodedInfoVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Code(This,value) )
    ( (This)->lpVtbl->get_TimeInterval(This,value) )
    ( (This)->lpVtbl->get_TimeToLive(This,value) )
    ( (This)->lpVtbl->get_ServiceResponse(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorOneTimeCodedInfo;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_Identity_Core_IMicrosoftAccountMultiFactorSessionInfo[] = L"Windows.Security.Authentication.Identity.Core.IMicrosoftAccountMultiFactorSessionInfo";
typedef struct __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorSessionInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorSessionInfo * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorSessionInfo * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorSessionInfo * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorSessionInfo * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorSessionInfo * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorSessionInfo * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_UserAccountId )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorSessionInfo * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SessionId )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorSessionInfo * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DisplaySessionId )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorSessionInfo * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ApprovalStatus )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorSessionInfo * This,
                           __RPC__out __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CMicrosoftAccountMultiFactorSessionApprovalStatus * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AuthenticationType )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorSessionInfo * This,
                           __RPC__out __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CMicrosoftAccountMultiFactorAuthenticationType * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RequestTime )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorSessionInfo * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ExpirationTime )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorSessionInfo * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorSessionInfoVtbl;
interface __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorSessionInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorSessionInfoVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_UserAccountId(This,value) )
    ( (This)->lpVtbl->get_SessionId(This,value) )
    ( (This)->lpVtbl->get_DisplaySessionId(This,value) )
    ( (This)->lpVtbl->get_ApprovalStatus(This,value) )
    ( (This)->lpVtbl->get_AuthenticationType(This,value) )
    ( (This)->lpVtbl->get_RequestTime(This,value) )
    ( (This)->lpVtbl->get_ExpirationTime(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorSessionInfo;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_Identity_Core_IMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo[] = L"Windows.Security.Authentication.Identity.Core.IMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo";
typedef struct __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Sessions )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfo * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_UnregisteredAccounts )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo * This,
                           __RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ServiceResponse )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo * This,
                           __RPC__out __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CMicrosoftAccountMultiFactorServiceResponse * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfoVtbl;
interface __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfoVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Sessions(This,value) )
    ( (This)->lpVtbl->get_UnregisteredAccounts(This,value) )
    ( (This)->lpVtbl->get_ServiceResponse(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Authentication_Identity_Core_MicrosoftAccountMultiFactorAuthenticationManager[] = L"Windows.Security.Authentication.Identity.Core.MicrosoftAccountMultiFactorAuthenticationManager";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Authentication_Identity_Core_MicrosoftAccountMultiFactorGetSessionsResult[] = L"Windows.Security.Authentication.Identity.Core.MicrosoftAccountMultiFactorGetSessionsResult";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Authentication_Identity_Core_MicrosoftAccountMultiFactorOneTimeCodedInfo[] = L"Windows.Security.Authentication.Identity.Core.MicrosoftAccountMultiFactorOneTimeCodedInfo";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Authentication_Identity_Core_MicrosoftAccountMultiFactorSessionInfo[] = L"Windows.Security.Authentication.Identity.Core.MicrosoftAccountMultiFactorSessionInfo";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Authentication_Identity_Core_MicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo[] = L"Windows.Security.Authentication.Identity.Core.MicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo";
       
       
#pragma clang diagnostic pop

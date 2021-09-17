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
#include "Windows.Security.Cryptography.Core.h"
#include "Windows.Storage.Streams.h"
#include "Windows.System.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CSecurity_CCredentials_CICredentialFactory __x_ABI_CWindows_CSecurity_CCredentials_CICredentialFactory;
typedef interface __x_ABI_CWindows_CSecurity_CCredentials_CIKeyCredential __x_ABI_CWindows_CSecurity_CCredentials_CIKeyCredential;
typedef interface __x_ABI_CWindows_CSecurity_CCredentials_CIKeyCredentialAttestationResult __x_ABI_CWindows_CSecurity_CCredentials_CIKeyCredentialAttestationResult;
typedef interface __x_ABI_CWindows_CSecurity_CCredentials_CIKeyCredentialManagerStatics __x_ABI_CWindows_CSecurity_CCredentials_CIKeyCredentialManagerStatics;
typedef interface __x_ABI_CWindows_CSecurity_CCredentials_CIKeyCredentialOperationResult __x_ABI_CWindows_CSecurity_CCredentials_CIKeyCredentialOperationResult;
typedef interface __x_ABI_CWindows_CSecurity_CCredentials_CIKeyCredentialRetrievalResult __x_ABI_CWindows_CSecurity_CCredentials_CIKeyCredentialRetrievalResult;
typedef interface __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential;
typedef interface __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordVault __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordVault;
typedef interface __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccount __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccount;
typedef interface __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccount2 __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccount2;
typedef interface __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountFactory __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountFactory;
typedef interface __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountProvider __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountProvider;
typedef interface __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountProvider2 __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountProvider2;
typedef interface __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountProvider3 __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountProvider3;
typedef interface __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountProvider4 __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountProvider4;
typedef interface __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountProviderFactory __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountProviderFactory;
typedef interface __FIIterator_1_Windows__CSecurity__CCredentials__CPasswordCredential __FIIterator_1_Windows__CSecurity__CCredentials__CPasswordCredential;
EXTERN_C const IID IID___FIIterator_1_Windows__CSecurity__CCredentials__CPasswordCredential;
typedef struct __FIIterator_1_Windows__CSecurity__CCredentials__CPasswordCredentialVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CSecurity__CCredentials__CPasswordCredential * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CSecurity__CCredentials__CPasswordCredential * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CSecurity__CCredentials__CPasswordCredential * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CSecurity__CCredentials__CPasswordCredential * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CSecurity__CCredentials__CPasswordCredential * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CSecurity__CCredentials__CPasswordCredential * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CSecurity__CCredentials__CPasswordCredential * This, __RPC__out __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CSecurity__CCredentials__CPasswordCredential * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CSecurity__CCredentials__CPasswordCredential * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CSecurity__CCredentials__CPasswordCredential * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CSecurity__CCredentials__CPasswordCredentialVtbl;
interface __FIIterator_1_Windows__CSecurity__CCredentials__CPasswordCredential
{
    CONST_VTBL struct __FIIterator_1_Windows__CSecurity__CCredentials__CPasswordCredentialVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CSecurity__CCredentials__CPasswordCredential __FIIterable_1_Windows__CSecurity__CCredentials__CPasswordCredential;
EXTERN_C const IID IID___FIIterable_1_Windows__CSecurity__CCredentials__CPasswordCredential;
typedef struct __FIIterable_1_Windows__CSecurity__CCredentials__CPasswordCredentialVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CSecurity__CCredentials__CPasswordCredential * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CSecurity__CCredentials__CPasswordCredential * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CSecurity__CCredentials__CPasswordCredential * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CSecurity__CCredentials__CPasswordCredential * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CSecurity__CCredentials__CPasswordCredential * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CSecurity__CCredentials__CPasswordCredential * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CSecurity__CCredentials__CPasswordCredential * This, __RPC__deref_out_opt __FIIterator_1_Windows__CSecurity__CCredentials__CPasswordCredential **first);
    END_INTERFACE
} __FIIterable_1_Windows__CSecurity__CCredentials__CPasswordCredentialVtbl;
interface __FIIterable_1_Windows__CSecurity__CCredentials__CPasswordCredential
{
    CONST_VTBL struct __FIIterable_1_Windows__CSecurity__CCredentials__CPasswordCredentialVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
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
typedef interface __FIVectorView_1_Windows__CSecurity__CCredentials__CPasswordCredential __FIVectorView_1_Windows__CSecurity__CCredentials__CPasswordCredential;
EXTERN_C const IID IID___FIVectorView_1_Windows__CSecurity__CCredentials__CPasswordCredential;
typedef struct __FIVectorView_1_Windows__CSecurity__CCredentials__CPasswordCredentialVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CSecurity__CCredentials__CPasswordCredential * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CSecurity__CCredentials__CPasswordCredential * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CSecurity__CCredentials__CPasswordCredential * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CSecurity__CCredentials__CPasswordCredential * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CSecurity__CCredentials__CPasswordCredential * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CSecurity__CCredentials__CPasswordCredential * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CSecurity__CCredentials__CPasswordCredential * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CSecurity__CCredentials__CPasswordCredential * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CSecurity__CCredentials__CPasswordCredential * This,
                       __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CSecurity__CCredentials__CPasswordCredential * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CSecurity__CCredentials__CPasswordCredentialVtbl;
interface __FIVectorView_1_Windows__CSecurity__CCredentials__CPasswordCredential
{
    CONST_VTBL struct __FIVectorView_1_Windows__CSecurity__CCredentials__CPasswordCredentialVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount;
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount;
typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccountVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount * This, __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccountVtbl;
interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccountVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount;
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount;
typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccountVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount * This, __RPC__out __FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccountVtbl;
interface __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccountVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CKeyCredentialAttestationResult __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CKeyCredentialAttestationResult;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CKeyCredentialAttestationResult;
typedef interface __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CKeyCredentialAttestationResult __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CKeyCredentialAttestationResult;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CKeyCredentialAttestationResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CKeyCredentialAttestationResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CKeyCredentialAttestationResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CKeyCredentialAttestationResult * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CKeyCredentialAttestationResult * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CKeyCredentialAttestationResult *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CKeyCredentialAttestationResultVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CKeyCredentialAttestationResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CKeyCredentialAttestationResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CKeyCredentialAttestationResult __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CKeyCredentialAttestationResult;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CSecurity__CCredentials__CKeyCredentialAttestationResult;
typedef struct __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CKeyCredentialAttestationResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CKeyCredentialAttestationResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CKeyCredentialAttestationResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CKeyCredentialAttestationResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CKeyCredentialAttestationResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CKeyCredentialAttestationResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CKeyCredentialAttestationResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CKeyCredentialAttestationResult * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CKeyCredentialAttestationResult *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CKeyCredentialAttestationResult * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CKeyCredentialAttestationResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CKeyCredentialAttestationResult * This, __RPC__out __x_ABI_CWindows_CSecurity_CCredentials_CIKeyCredentialAttestationResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CKeyCredentialAttestationResultVtbl;
interface __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CKeyCredentialAttestationResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CKeyCredentialAttestationResultVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CKeyCredentialOperationResult __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CKeyCredentialOperationResult;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CKeyCredentialOperationResult;
typedef interface __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CKeyCredentialOperationResult __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CKeyCredentialOperationResult;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CKeyCredentialOperationResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CKeyCredentialOperationResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CKeyCredentialOperationResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CKeyCredentialOperationResult * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CKeyCredentialOperationResult * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CKeyCredentialOperationResult *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CKeyCredentialOperationResultVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CKeyCredentialOperationResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CKeyCredentialOperationResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CKeyCredentialOperationResult __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CKeyCredentialOperationResult;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CSecurity__CCredentials__CKeyCredentialOperationResult;
typedef struct __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CKeyCredentialOperationResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CKeyCredentialOperationResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CKeyCredentialOperationResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CKeyCredentialOperationResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CKeyCredentialOperationResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CKeyCredentialOperationResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CKeyCredentialOperationResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CKeyCredentialOperationResult * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CKeyCredentialOperationResult *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CKeyCredentialOperationResult * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CKeyCredentialOperationResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CKeyCredentialOperationResult * This, __RPC__out __x_ABI_CWindows_CSecurity_CCredentials_CIKeyCredentialOperationResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CKeyCredentialOperationResultVtbl;
interface __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CKeyCredentialOperationResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CKeyCredentialOperationResultVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CKeyCredentialRetrievalResult __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CKeyCredentialRetrievalResult;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CKeyCredentialRetrievalResult;
typedef interface __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CKeyCredentialRetrievalResult __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CKeyCredentialRetrievalResult;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CKeyCredentialRetrievalResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CKeyCredentialRetrievalResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CKeyCredentialRetrievalResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CKeyCredentialRetrievalResult * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CKeyCredentialRetrievalResult * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CKeyCredentialRetrievalResult *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CKeyCredentialRetrievalResultVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CKeyCredentialRetrievalResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CKeyCredentialRetrievalResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CKeyCredentialRetrievalResult __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CKeyCredentialRetrievalResult;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CSecurity__CCredentials__CKeyCredentialRetrievalResult;
typedef struct __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CKeyCredentialRetrievalResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CKeyCredentialRetrievalResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CKeyCredentialRetrievalResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CKeyCredentialRetrievalResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CKeyCredentialRetrievalResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CKeyCredentialRetrievalResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CKeyCredentialRetrievalResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CKeyCredentialRetrievalResult * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CKeyCredentialRetrievalResult *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CKeyCredentialRetrievalResult * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CKeyCredentialRetrievalResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CKeyCredentialRetrievalResult * This, __RPC__out __x_ABI_CWindows_CSecurity_CCredentials_CIKeyCredentialRetrievalResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CKeyCredentialRetrievalResultVtbl;
interface __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CKeyCredentialRetrievalResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CKeyCredentialRetrievalResultVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream;
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStream __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStream;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStream;
typedef interface __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStream * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStream * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStream * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStream * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStream
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream;
typedef struct __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStream *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStream **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream * This, __RPC__out __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamVtbl;
interface __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet;
typedef interface __x_ABI_CWindows_CFoundation_CIAsyncAction __x_ABI_CWindows_CFoundation_CIAsyncAction;
typedef interface __x_ABI_CWindows_CFoundation_CIUriRuntimeClass __x_ABI_CWindows_CFoundation_CIUriRuntimeClass;
typedef enum __x_ABI_CWindows_CSecurity_CCryptography_CCore_CCryptographicPublicKeyBlobType __x_ABI_CWindows_CSecurity_CCryptography_CCore_CCryptographicPublicKeyBlobType;
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIBuffer __x_ABI_CWindows_CStorage_CStreams_CIBuffer;
typedef interface __x_ABI_CWindows_CSystem_CIUser __x_ABI_CWindows_CSystem_CIUser;
typedef enum __x_ABI_CWindows_CSecurity_CCredentials_CKeyCredentialAttestationStatus __x_ABI_CWindows_CSecurity_CCredentials_CKeyCredentialAttestationStatus;
typedef enum __x_ABI_CWindows_CSecurity_CCredentials_CKeyCredentialCreationOption __x_ABI_CWindows_CSecurity_CCredentials_CKeyCredentialCreationOption;
typedef enum __x_ABI_CWindows_CSecurity_CCredentials_CKeyCredentialStatus __x_ABI_CWindows_CSecurity_CCredentials_CKeyCredentialStatus;
typedef enum __x_ABI_CWindows_CSecurity_CCredentials_CWebAccountPictureSize __x_ABI_CWindows_CSecurity_CCredentials_CWebAccountPictureSize;
typedef enum __x_ABI_CWindows_CSecurity_CCredentials_CWebAccountState __x_ABI_CWindows_CSecurity_CCredentials_CWebAccountState;
enum __x_ABI_CWindows_CSecurity_CCredentials_CKeyCredentialAttestationStatus
{
    KeyCredentialAttestationStatus_Success = 0,
    KeyCredentialAttestationStatus_UnknownError = 1,
    KeyCredentialAttestationStatus_NotSupported = 2,
    KeyCredentialAttestationStatus_TemporaryFailure = 3,
};
enum __x_ABI_CWindows_CSecurity_CCredentials_CKeyCredentialCreationOption
{
    KeyCredentialCreationOption_ReplaceExisting = 0,
    KeyCredentialCreationOption_FailIfExists = 1,
};
enum __x_ABI_CWindows_CSecurity_CCredentials_CKeyCredentialStatus
{
    KeyCredentialStatus_Success = 0,
    KeyCredentialStatus_UnknownError = 1,
    KeyCredentialStatus_NotFound = 2,
    KeyCredentialStatus_UserCanceled = 3,
    KeyCredentialStatus_UserPrefersPassword = 4,
    KeyCredentialStatus_CredentialAlreadyExists = 5,
    KeyCredentialStatus_SecurityDeviceLocked = 6,
};
enum __x_ABI_CWindows_CSecurity_CCredentials_CWebAccountPictureSize
{
    WebAccountPictureSize_Size64x64 = 64,
    WebAccountPictureSize_Size208x208 = 208,
    WebAccountPictureSize_Size424x424 = 424,
    WebAccountPictureSize_Size1080x1080 = 1080,
};
enum __x_ABI_CWindows_CSecurity_CCredentials_CWebAccountState
{
    WebAccountState_None = 0,
    WebAccountState_Connected = 1,
    WebAccountState_Error = 2,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Credentials_ICredentialFactory[] = L"Windows.Security.Credentials.ICredentialFactory";
typedef struct __x_ABI_CWindows_CSecurity_CCredentials_CICredentialFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCredentials_CICredentialFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCredentials_CICredentialFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCredentials_CICredentialFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCredentials_CICredentialFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCredentials_CICredentialFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCredentials_CICredentialFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreatePasswordCredential )(
        __x_ABI_CWindows_CSecurity_CCredentials_CICredentialFactory * This,
                  __RPC__in HSTRING resource,
                  __RPC__in HSTRING userName,
                  __RPC__in HSTRING password,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential * * credential
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CCredentials_CICredentialFactoryVtbl;
interface __x_ABI_CWindows_CSecurity_CCredentials_CICredentialFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCredentials_CICredentialFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreatePasswordCredential(This,resource,userName,password,credential) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCredentials_CICredentialFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Credentials_IKeyCredential[] = L"Windows.Security.Credentials.IKeyCredential";
typedef struct __x_ABI_CWindows_CSecurity_CCredentials_CIKeyCredentialVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCredentials_CIKeyCredential * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCredentials_CIKeyCredential * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCredentials_CIKeyCredential * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCredentials_CIKeyCredential * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCredentials_CIKeyCredential * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCredentials_CIKeyCredential * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Name )(
        __x_ABI_CWindows_CSecurity_CCredentials_CIKeyCredential * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                    HRESULT ( STDMETHODCALLTYPE *RetrievePublicKeyWithDefaultBlobType )(
        __x_ABI_CWindows_CSecurity_CCredentials_CIKeyCredential * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
                    HRESULT ( STDMETHODCALLTYPE *RetrievePublicKeyWithBlobType )(
        __x_ABI_CWindows_CSecurity_CCredentials_CIKeyCredential * This,
                  __x_ABI_CWindows_CSecurity_CCryptography_CCore_CCryptographicPublicKeyBlobType blobType,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
    HRESULT ( STDMETHODCALLTYPE *RequestSignAsync )(
        __x_ABI_CWindows_CSecurity_CCredentials_CIKeyCredential * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * data,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CKeyCredentialOperationResult * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetAttestationAsync )(
        __x_ABI_CWindows_CSecurity_CCredentials_CIKeyCredential * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CKeyCredentialAttestationResult * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CCredentials_CIKeyCredentialVtbl;
interface __x_ABI_CWindows_CSecurity_CCredentials_CIKeyCredential
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCredentials_CIKeyCredentialVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Name(This,value) )
    ( (This)->lpVtbl->RetrievePublicKeyWithDefaultBlobType(This,value) )
    ( (This)->lpVtbl->RetrievePublicKeyWithBlobType(This,blobType,value) )
    ( (This)->lpVtbl->RequestSignAsync(This,data,value) )
    ( (This)->lpVtbl->GetAttestationAsync(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCredentials_CIKeyCredential;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Credentials_IKeyCredentialAttestationResult[] = L"Windows.Security.Credentials.IKeyCredentialAttestationResult";
typedef struct __x_ABI_CWindows_CSecurity_CCredentials_CIKeyCredentialAttestationResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCredentials_CIKeyCredentialAttestationResult * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCredentials_CIKeyCredentialAttestationResult * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCredentials_CIKeyCredentialAttestationResult * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCredentials_CIKeyCredentialAttestationResult * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCredentials_CIKeyCredentialAttestationResult * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCredentials_CIKeyCredentialAttestationResult * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_CertificateChainBuffer )(
        __x_ABI_CWindows_CSecurity_CCredentials_CIKeyCredentialAttestationResult * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AttestationBuffer )(
        __x_ABI_CWindows_CSecurity_CCredentials_CIKeyCredentialAttestationResult * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CSecurity_CCredentials_CIKeyCredentialAttestationResult * This,
                           __RPC__out __x_ABI_CWindows_CSecurity_CCredentials_CKeyCredentialAttestationStatus * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CCredentials_CIKeyCredentialAttestationResultVtbl;
interface __x_ABI_CWindows_CSecurity_CCredentials_CIKeyCredentialAttestationResult
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCredentials_CIKeyCredentialAttestationResultVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_CertificateChainBuffer(This,value) )
    ( (This)->lpVtbl->get_AttestationBuffer(This,value) )
    ( (This)->lpVtbl->get_Status(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCredentials_CIKeyCredentialAttestationResult;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Credentials_IKeyCredentialManagerStatics[] = L"Windows.Security.Credentials.IKeyCredentialManagerStatics";
typedef struct __x_ABI_CWindows_CSecurity_CCredentials_CIKeyCredentialManagerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCredentials_CIKeyCredentialManagerStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCredentials_CIKeyCredentialManagerStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCredentials_CIKeyCredentialManagerStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCredentials_CIKeyCredentialManagerStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCredentials_CIKeyCredentialManagerStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCredentials_CIKeyCredentialManagerStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *IsSupportedAsync )(
        __x_ABI_CWindows_CSecurity_CCredentials_CIKeyCredentialManagerStatics * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * value
        );
    HRESULT ( STDMETHODCALLTYPE *RenewAttestationAsync )(
        __x_ABI_CWindows_CSecurity_CCredentials_CIKeyCredentialManagerStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *RequestCreateAsync )(
        __x_ABI_CWindows_CSecurity_CCredentials_CIKeyCredentialManagerStatics * This,
                  __RPC__in HSTRING name,
                  __x_ABI_CWindows_CSecurity_CCredentials_CKeyCredentialCreationOption option,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CKeyCredentialRetrievalResult * * value
        );
    HRESULT ( STDMETHODCALLTYPE *OpenAsync )(
        __x_ABI_CWindows_CSecurity_CCredentials_CIKeyCredentialManagerStatics * This,
                  __RPC__in HSTRING name,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CKeyCredentialRetrievalResult * * value
        );
    HRESULT ( STDMETHODCALLTYPE *DeleteAsync )(
        __x_ABI_CWindows_CSecurity_CCredentials_CIKeyCredentialManagerStatics * This,
                  __RPC__in HSTRING name,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CCredentials_CIKeyCredentialManagerStaticsVtbl;
interface __x_ABI_CWindows_CSecurity_CCredentials_CIKeyCredentialManagerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCredentials_CIKeyCredentialManagerStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->IsSupportedAsync(This,value) )
    ( (This)->lpVtbl->RenewAttestationAsync(This,operation) )
    ( (This)->lpVtbl->RequestCreateAsync(This,name,option,value) )
    ( (This)->lpVtbl->OpenAsync(This,name,value) )
    ( (This)->lpVtbl->DeleteAsync(This,name,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCredentials_CIKeyCredentialManagerStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Credentials_IKeyCredentialOperationResult[] = L"Windows.Security.Credentials.IKeyCredentialOperationResult";
typedef struct __x_ABI_CWindows_CSecurity_CCredentials_CIKeyCredentialOperationResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCredentials_CIKeyCredentialOperationResult * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCredentials_CIKeyCredentialOperationResult * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCredentials_CIKeyCredentialOperationResult * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCredentials_CIKeyCredentialOperationResult * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCredentials_CIKeyCredentialOperationResult * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCredentials_CIKeyCredentialOperationResult * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Result )(
        __x_ABI_CWindows_CSecurity_CCredentials_CIKeyCredentialOperationResult * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CSecurity_CCredentials_CIKeyCredentialOperationResult * This,
                           __RPC__out __x_ABI_CWindows_CSecurity_CCredentials_CKeyCredentialStatus * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CCredentials_CIKeyCredentialOperationResultVtbl;
interface __x_ABI_CWindows_CSecurity_CCredentials_CIKeyCredentialOperationResult
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCredentials_CIKeyCredentialOperationResultVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Result(This,value) )
    ( (This)->lpVtbl->get_Status(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCredentials_CIKeyCredentialOperationResult;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Credentials_IKeyCredentialRetrievalResult[] = L"Windows.Security.Credentials.IKeyCredentialRetrievalResult";
typedef struct __x_ABI_CWindows_CSecurity_CCredentials_CIKeyCredentialRetrievalResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCredentials_CIKeyCredentialRetrievalResult * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCredentials_CIKeyCredentialRetrievalResult * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCredentials_CIKeyCredentialRetrievalResult * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCredentials_CIKeyCredentialRetrievalResult * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCredentials_CIKeyCredentialRetrievalResult * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCredentials_CIKeyCredentialRetrievalResult * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Credential )(
        __x_ABI_CWindows_CSecurity_CCredentials_CIKeyCredentialRetrievalResult * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCredentials_CIKeyCredential * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CSecurity_CCredentials_CIKeyCredentialRetrievalResult * This,
                           __RPC__out __x_ABI_CWindows_CSecurity_CCredentials_CKeyCredentialStatus * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CCredentials_CIKeyCredentialRetrievalResultVtbl;
interface __x_ABI_CWindows_CSecurity_CCredentials_CIKeyCredentialRetrievalResult
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCredentials_CIKeyCredentialRetrievalResultVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Credential(This,value) )
    ( (This)->lpVtbl->get_Status(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCredentials_CIKeyCredentialRetrievalResult;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Credentials_IPasswordCredential[] = L"Windows.Security.Credentials.IPasswordCredential";
typedef struct __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredentialVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Resource )(
        __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential * This,
                           __RPC__deref_out_opt HSTRING * resource
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Resource )(
        __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential * This,
                  __RPC__in HSTRING resource
        );
                   HRESULT ( STDMETHODCALLTYPE *get_UserName )(
        __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential * This,
                           __RPC__deref_out_opt HSTRING * userName
        );
                   HRESULT ( STDMETHODCALLTYPE *put_UserName )(
        __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential * This,
                  __RPC__in HSTRING userName
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Password )(
        __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential * This,
                           __RPC__deref_out_opt HSTRING * password
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Password )(
        __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential * This,
                  __RPC__in HSTRING password
        );
    HRESULT ( STDMETHODCALLTYPE *RetrievePassword )(
        __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential * This
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Properties )(
        __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet * * props
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredentialVtbl;
interface __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredentialVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Resource(This,resource) )
    ( (This)->lpVtbl->put_Resource(This,resource) )
    ( (This)->lpVtbl->get_UserName(This,userName) )
    ( (This)->lpVtbl->put_UserName(This,userName) )
    ( (This)->lpVtbl->get_Password(This,password) )
    ( (This)->lpVtbl->put_Password(This,password) )
    ( (This)->lpVtbl->RetrievePassword(This) )
    ( (This)->lpVtbl->get_Properties(This,props) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Credentials_IPasswordVault[] = L"Windows.Security.Credentials.IPasswordVault";
typedef struct __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordVaultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordVault * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordVault * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordVault * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordVault * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordVault * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordVault * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Add )(
        __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordVault * This,
                  __RPC__in_opt __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential * credential
        );
    HRESULT ( STDMETHODCALLTYPE *Remove )(
        __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordVault * This,
                  __RPC__in_opt __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential * credential
        );
    HRESULT ( STDMETHODCALLTYPE *Retrieve )(
        __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordVault * This,
                  __RPC__in HSTRING resource,
                  __RPC__in HSTRING userName,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential * * credential
        );
    HRESULT ( STDMETHODCALLTYPE *FindAllByResource )(
        __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordVault * This,
                  __RPC__in HSTRING resource,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CSecurity__CCredentials__CPasswordCredential * * credentials
        );
    HRESULT ( STDMETHODCALLTYPE *FindAllByUserName )(
        __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordVault * This,
                  __RPC__in HSTRING userName,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CSecurity__CCredentials__CPasswordCredential * * credentials
        );
    HRESULT ( STDMETHODCALLTYPE *RetrieveAll )(
        __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordVault * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CSecurity__CCredentials__CPasswordCredential * * credentials
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordVaultVtbl;
interface __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordVault
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordVaultVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Add(This,credential) )
    ( (This)->lpVtbl->Remove(This,credential) )
    ( (This)->lpVtbl->Retrieve(This,resource,userName,credential) )
    ( (This)->lpVtbl->FindAllByResource(This,resource,credentials) )
    ( (This)->lpVtbl->FindAllByUserName(This,userName,credentials) )
    ( (This)->lpVtbl->RetrieveAll(This,credentials) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCredentials_CIPasswordVault;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Credentials_IWebAccount[] = L"Windows.Security.Credentials.IWebAccount";
typedef struct __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccount * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccount * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccount * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccount * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccount * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccount * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_WebAccountProvider )(
        __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccount * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountProvider * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_UserName )(
        __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccount * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_State )(
        __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccount * This,
                           __RPC__out __x_ABI_CWindows_CSecurity_CCredentials_CWebAccountState * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountVtbl;
interface __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccount
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_WebAccountProvider(This,value) )
    ( (This)->lpVtbl->get_UserName(This,value) )
    ( (This)->lpVtbl->get_State(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCredentials_CIWebAccount;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Credentials_IWebAccount2[] = L"Windows.Security.Credentials.IWebAccount2";
typedef struct __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccount2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccount2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccount2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccount2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccount2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccount2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccount2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccount2 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Properties )(
        __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccount2 * This,
                           __RPC__deref_out_opt __FIMapView_2_HSTRING_HSTRING * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetPictureAsync )(
        __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccount2 * This,
                  __x_ABI_CWindows_CSecurity_CCredentials_CWebAccountPictureSize desizedSize,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream * * asyncInfo
        );
                    HRESULT ( STDMETHODCALLTYPE *SignOutAsync )(
        __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccount2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * asyncInfo
        );
                    HRESULT ( STDMETHODCALLTYPE *SignOutWithClientIdAsync )(
        __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccount2 * This,
                  __RPC__in HSTRING clientId,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * asyncInfo
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccount2Vtbl;
interface __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccount2
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccount2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Id(This,value) )
    ( (This)->lpVtbl->get_Properties(This,value) )
    ( (This)->lpVtbl->GetPictureAsync(This,desizedSize,asyncInfo) )
    ( (This)->lpVtbl->SignOutAsync(This,asyncInfo) )
    ( (This)->lpVtbl->SignOutWithClientIdAsync(This,clientId,asyncInfo) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCredentials_CIWebAccount2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Credentials_IWebAccountFactory[] = L"Windows.Security.Credentials.IWebAccountFactory";
typedef struct __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateWebAccount )(
        __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountFactory * This,
                  __RPC__in_opt __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountProvider * webAccountProvider,
                  __RPC__in HSTRING userName,
                  __x_ABI_CWindows_CSecurity_CCredentials_CWebAccountState state,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccount * * instance
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountFactoryVtbl;
interface __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateWebAccount(This,webAccountProvider,userName,state,instance) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Credentials_IWebAccountProvider[] = L"Windows.Security.Credentials.IWebAccountProvider";
typedef struct __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountProvider * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountProvider * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountProvider * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountProvider * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountProvider * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountProvider * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountProvider * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DisplayName )(
        __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountProvider * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    DEPRECATED("IconUri may be altered or unavailable for releases after Windows 8.2. Instead, use Icon.")
                               HRESULT ( STDMETHODCALLTYPE *get_IconUri )(
        __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountProvider * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountProviderVtbl;
interface __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountProvider
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountProviderVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Id(This,value) )
    ( (This)->lpVtbl->get_DisplayName(This,value) )
DEPRECATED("IconUri may be altered or unavailable for releases after Windows 8.2. Instead, use Icon.")
    ( (This)->lpVtbl->get_IconUri(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountProvider;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Credentials_IWebAccountProvider2[] = L"Windows.Security.Credentials.IWebAccountProvider2";
typedef struct __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountProvider2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountProvider2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountProvider2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountProvider2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountProvider2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountProvider2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountProvider2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DisplayPurpose )(
        __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountProvider2 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Authority )(
        __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountProvider2 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountProvider2Vtbl;
interface __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountProvider2
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountProvider2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DisplayPurpose(This,value) )
    ( (This)->lpVtbl->get_Authority(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountProvider2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Credentials_IWebAccountProvider3[] = L"Windows.Security.Credentials.IWebAccountProvider3";
typedef struct __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountProvider3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountProvider3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountProvider3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountProvider3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountProvider3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountProvider3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountProvider3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_User )(
        __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountProvider3 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CIUser * * user
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountProvider3Vtbl;
interface __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountProvider3
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountProvider3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_User(This,user) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountProvider3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Credentials_IWebAccountProvider4[] = L"Windows.Security.Credentials.IWebAccountProvider4";
typedef struct __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountProvider4Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountProvider4 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountProvider4 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountProvider4 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountProvider4 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountProvider4 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountProvider4 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsSystemProvider )(
        __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountProvider4 * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountProvider4Vtbl;
interface __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountProvider4
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountProvider4Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsSystemProvider(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountProvider4;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Credentials_IWebAccountProviderFactory[] = L"Windows.Security.Credentials.IWebAccountProviderFactory";
typedef struct __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountProviderFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountProviderFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountProviderFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountProviderFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountProviderFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountProviderFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountProviderFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateWebAccountProvider )(
        __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountProviderFactory * This,
                  __RPC__in HSTRING id,
                  __RPC__in HSTRING displayName,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * iconUri,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountProvider * * instance
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountProviderFactoryVtbl;
interface __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountProviderFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountProviderFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateWebAccountProvider(This,id,displayName,iconUri,instance) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountProviderFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Credentials_KeyCredential[] = L"Windows.Security.Credentials.KeyCredential";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Credentials_KeyCredentialAttestationResult[] = L"Windows.Security.Credentials.KeyCredentialAttestationResult";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Credentials_KeyCredentialManager[] = L"Windows.Security.Credentials.KeyCredentialManager";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Credentials_KeyCredentialOperationResult[] = L"Windows.Security.Credentials.KeyCredentialOperationResult";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Credentials_KeyCredentialRetrievalResult[] = L"Windows.Security.Credentials.KeyCredentialRetrievalResult";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Credentials_PasswordCredential[] = L"Windows.Security.Credentials.PasswordCredential";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Credentials_PasswordCredentialPropertyStore[] = L"Windows.Security.Credentials.PasswordCredentialPropertyStore";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Credentials_PasswordVault[] = L"Windows.Security.Credentials.PasswordVault";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Credentials_WebAccount[] = L"Windows.Security.Credentials.WebAccount";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Credentials_WebAccountProvider[] = L"Windows.Security.Credentials.WebAccountProvider";
       
       
#pragma clang diagnostic pop

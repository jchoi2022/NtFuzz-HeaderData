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
typedef interface __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CIEnterpriseKeyCredentialRegistrationInfo __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CIEnterpriseKeyCredentialRegistrationInfo;
typedef interface __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CIEnterpriseKeyCredentialRegistrationManager __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CIEnterpriseKeyCredentialRegistrationManager;
typedef interface __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CIEnterpriseKeyCredentialRegistrationManagerStatics __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CIEnterpriseKeyCredentialRegistrationManagerStatics;
typedef interface __FIIterator_1_Windows__CSecurity__CAuthentication__CIdentity__CEnterpriseKeyCredentialRegistrationInfo __FIIterator_1_Windows__CSecurity__CAuthentication__CIdentity__CEnterpriseKeyCredentialRegistrationInfo;
EXTERN_C const IID IID___FIIterator_1_Windows__CSecurity__CAuthentication__CIdentity__CEnterpriseKeyCredentialRegistrationInfo;
typedef struct __FIIterator_1_Windows__CSecurity__CAuthentication__CIdentity__CEnterpriseKeyCredentialRegistrationInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CSecurity__CAuthentication__CIdentity__CEnterpriseKeyCredentialRegistrationInfo * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CSecurity__CAuthentication__CIdentity__CEnterpriseKeyCredentialRegistrationInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CSecurity__CAuthentication__CIdentity__CEnterpriseKeyCredentialRegistrationInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CSecurity__CAuthentication__CIdentity__CEnterpriseKeyCredentialRegistrationInfo * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CSecurity__CAuthentication__CIdentity__CEnterpriseKeyCredentialRegistrationInfo * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CSecurity__CAuthentication__CIdentity__CEnterpriseKeyCredentialRegistrationInfo * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CSecurity__CAuthentication__CIdentity__CEnterpriseKeyCredentialRegistrationInfo * This, __RPC__out __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CIEnterpriseKeyCredentialRegistrationInfo * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CSecurity__CAuthentication__CIdentity__CEnterpriseKeyCredentialRegistrationInfo * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CSecurity__CAuthentication__CIdentity__CEnterpriseKeyCredentialRegistrationInfo * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CSecurity__CAuthentication__CIdentity__CEnterpriseKeyCredentialRegistrationInfo * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CIEnterpriseKeyCredentialRegistrationInfo * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CSecurity__CAuthentication__CIdentity__CEnterpriseKeyCredentialRegistrationInfoVtbl;
interface __FIIterator_1_Windows__CSecurity__CAuthentication__CIdentity__CEnterpriseKeyCredentialRegistrationInfo
{
    CONST_VTBL struct __FIIterator_1_Windows__CSecurity__CAuthentication__CIdentity__CEnterpriseKeyCredentialRegistrationInfoVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CSecurity__CAuthentication__CIdentity__CEnterpriseKeyCredentialRegistrationInfo __FIIterable_1_Windows__CSecurity__CAuthentication__CIdentity__CEnterpriseKeyCredentialRegistrationInfo;
EXTERN_C const IID IID___FIIterable_1_Windows__CSecurity__CAuthentication__CIdentity__CEnterpriseKeyCredentialRegistrationInfo;
typedef struct __FIIterable_1_Windows__CSecurity__CAuthentication__CIdentity__CEnterpriseKeyCredentialRegistrationInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CSecurity__CAuthentication__CIdentity__CEnterpriseKeyCredentialRegistrationInfo * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CSecurity__CAuthentication__CIdentity__CEnterpriseKeyCredentialRegistrationInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CSecurity__CAuthentication__CIdentity__CEnterpriseKeyCredentialRegistrationInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CSecurity__CAuthentication__CIdentity__CEnterpriseKeyCredentialRegistrationInfo * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CSecurity__CAuthentication__CIdentity__CEnterpriseKeyCredentialRegistrationInfo * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CSecurity__CAuthentication__CIdentity__CEnterpriseKeyCredentialRegistrationInfo * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CSecurity__CAuthentication__CIdentity__CEnterpriseKeyCredentialRegistrationInfo * This, __RPC__deref_out_opt __FIIterator_1_Windows__CSecurity__CAuthentication__CIdentity__CEnterpriseKeyCredentialRegistrationInfo **first);
    END_INTERFACE
} __FIIterable_1_Windows__CSecurity__CAuthentication__CIdentity__CEnterpriseKeyCredentialRegistrationInfoVtbl;
interface __FIIterable_1_Windows__CSecurity__CAuthentication__CIdentity__CEnterpriseKeyCredentialRegistrationInfo
{
    CONST_VTBL struct __FIIterable_1_Windows__CSecurity__CAuthentication__CIdentity__CEnterpriseKeyCredentialRegistrationInfoVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CEnterpriseKeyCredentialRegistrationInfo __FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CEnterpriseKeyCredentialRegistrationInfo;
EXTERN_C const IID IID___FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CEnterpriseKeyCredentialRegistrationInfo;
typedef struct __FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CEnterpriseKeyCredentialRegistrationInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CEnterpriseKeyCredentialRegistrationInfo * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CEnterpriseKeyCredentialRegistrationInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CEnterpriseKeyCredentialRegistrationInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CEnterpriseKeyCredentialRegistrationInfo * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CEnterpriseKeyCredentialRegistrationInfo * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CEnterpriseKeyCredentialRegistrationInfo * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CEnterpriseKeyCredentialRegistrationInfo * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CIEnterpriseKeyCredentialRegistrationInfo * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CEnterpriseKeyCredentialRegistrationInfo * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CEnterpriseKeyCredentialRegistrationInfo * This,
                       __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CIEnterpriseKeyCredentialRegistrationInfo * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CEnterpriseKeyCredentialRegistrationInfo * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CIEnterpriseKeyCredentialRegistrationInfo * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CEnterpriseKeyCredentialRegistrationInfoVtbl;
interface __FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CEnterpriseKeyCredentialRegistrationInfo
{
    CONST_VTBL struct __FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CEnterpriseKeyCredentialRegistrationInfoVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CEnterpriseKeyCredentialRegistrationInfo __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CEnterpriseKeyCredentialRegistrationInfo;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CEnterpriseKeyCredentialRegistrationInfo;
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CEnterpriseKeyCredentialRegistrationInfo __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CEnterpriseKeyCredentialRegistrationInfo;
typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CEnterpriseKeyCredentialRegistrationInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CEnterpriseKeyCredentialRegistrationInfo * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CEnterpriseKeyCredentialRegistrationInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CEnterpriseKeyCredentialRegistrationInfo * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CEnterpriseKeyCredentialRegistrationInfo * This, __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CEnterpriseKeyCredentialRegistrationInfo *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CEnterpriseKeyCredentialRegistrationInfoVtbl;
interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CEnterpriseKeyCredentialRegistrationInfo
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CEnterpriseKeyCredentialRegistrationInfoVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CEnterpriseKeyCredentialRegistrationInfo __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CEnterpriseKeyCredentialRegistrationInfo;
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CEnterpriseKeyCredentialRegistrationInfo;
typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CEnterpriseKeyCredentialRegistrationInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CEnterpriseKeyCredentialRegistrationInfo * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CEnterpriseKeyCredentialRegistrationInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CEnterpriseKeyCredentialRegistrationInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CEnterpriseKeyCredentialRegistrationInfo * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CEnterpriseKeyCredentialRegistrationInfo * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CEnterpriseKeyCredentialRegistrationInfo * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CEnterpriseKeyCredentialRegistrationInfo * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CEnterpriseKeyCredentialRegistrationInfo *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CEnterpriseKeyCredentialRegistrationInfo * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CEnterpriseKeyCredentialRegistrationInfo **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CEnterpriseKeyCredentialRegistrationInfo * This, __RPC__out __FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CEnterpriseKeyCredentialRegistrationInfo * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CEnterpriseKeyCredentialRegistrationInfoVtbl;
interface __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CEnterpriseKeyCredentialRegistrationInfo
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CEnterpriseKeyCredentialRegistrationInfoVtbl *lpVtbl;
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
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_Identity_IEnterpriseKeyCredentialRegistrationInfo[] = L"Windows.Security.Authentication.Identity.IEnterpriseKeyCredentialRegistrationInfo";
typedef struct __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CIEnterpriseKeyCredentialRegistrationInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CIEnterpriseKeyCredentialRegistrationInfo * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CIEnterpriseKeyCredentialRegistrationInfo * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CIEnterpriseKeyCredentialRegistrationInfo * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CIEnterpriseKeyCredentialRegistrationInfo * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CIEnterpriseKeyCredentialRegistrationInfo * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CIEnterpriseKeyCredentialRegistrationInfo * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_TenantId )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CIEnterpriseKeyCredentialRegistrationInfo * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TenantName )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CIEnterpriseKeyCredentialRegistrationInfo * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Subject )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CIEnterpriseKeyCredentialRegistrationInfo * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_KeyId )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CIEnterpriseKeyCredentialRegistrationInfo * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_KeyName )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CIEnterpriseKeyCredentialRegistrationInfo * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CIEnterpriseKeyCredentialRegistrationInfoVtbl;
interface __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CIEnterpriseKeyCredentialRegistrationInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CIEnterpriseKeyCredentialRegistrationInfoVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_TenantId(This,value) )
    ( (This)->lpVtbl->get_TenantName(This,value) )
    ( (This)->lpVtbl->get_Subject(This,value) )
    ( (This)->lpVtbl->get_KeyId(This,value) )
    ( (This)->lpVtbl->get_KeyName(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CIEnterpriseKeyCredentialRegistrationInfo;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_Identity_IEnterpriseKeyCredentialRegistrationManager[] = L"Windows.Security.Authentication.Identity.IEnterpriseKeyCredentialRegistrationManager";
typedef struct __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CIEnterpriseKeyCredentialRegistrationManagerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CIEnterpriseKeyCredentialRegistrationManager * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CIEnterpriseKeyCredentialRegistrationManager * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CIEnterpriseKeyCredentialRegistrationManager * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CIEnterpriseKeyCredentialRegistrationManager * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CIEnterpriseKeyCredentialRegistrationManager * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CIEnterpriseKeyCredentialRegistrationManager * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetRegistrationsAsync )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CIEnterpriseKeyCredentialRegistrationManager * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CEnterpriseKeyCredentialRegistrationInfo * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CIEnterpriseKeyCredentialRegistrationManagerVtbl;
interface __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CIEnterpriseKeyCredentialRegistrationManager
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CIEnterpriseKeyCredentialRegistrationManagerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetRegistrationsAsync(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CIEnterpriseKeyCredentialRegistrationManager;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_Identity_IEnterpriseKeyCredentialRegistrationManagerStatics[] = L"Windows.Security.Authentication.Identity.IEnterpriseKeyCredentialRegistrationManagerStatics";
typedef struct __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CIEnterpriseKeyCredentialRegistrationManagerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CIEnterpriseKeyCredentialRegistrationManagerStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CIEnterpriseKeyCredentialRegistrationManagerStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CIEnterpriseKeyCredentialRegistrationManagerStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CIEnterpriseKeyCredentialRegistrationManagerStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CIEnterpriseKeyCredentialRegistrationManagerStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CIEnterpriseKeyCredentialRegistrationManagerStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Current )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CIEnterpriseKeyCredentialRegistrationManagerStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CIEnterpriseKeyCredentialRegistrationManager * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CIEnterpriseKeyCredentialRegistrationManagerStaticsVtbl;
interface __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CIEnterpriseKeyCredentialRegistrationManagerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CIEnterpriseKeyCredentialRegistrationManagerStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Current(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CIEnterpriseKeyCredentialRegistrationManagerStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Authentication_Identity_EnterpriseKeyCredentialRegistrationInfo[] = L"Windows.Security.Authentication.Identity.EnterpriseKeyCredentialRegistrationInfo";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Authentication_Identity_EnterpriseKeyCredentialRegistrationManager[] = L"Windows.Security.Authentication.Identity.EnterpriseKeyCredentialRegistrationManager";
       
       
#pragma clang diagnostic pop

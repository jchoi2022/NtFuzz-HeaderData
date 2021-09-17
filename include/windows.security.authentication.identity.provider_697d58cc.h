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
typedef interface __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthentication __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthentication;
typedef interface __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationResult __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationResult;
typedef interface __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStageChangedEventArgs __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStageChangedEventArgs;
typedef interface __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStageInfo __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStageInfo;
typedef interface __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStatics __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStatics;
typedef interface __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatics __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatics;
typedef interface __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorInfo __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorInfo;
typedef interface __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorInfo2 __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorInfo2;
typedef interface __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistration __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistration;
typedef interface __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistrationResult __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistrationResult;
typedef interface __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistrationStatics __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistrationStatics;
typedef interface __FIIterator_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo __FIIterator_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo;
EXTERN_C const IID IID___FIIterator_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo;
typedef struct __FIIterator_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo * This, __RPC__out __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorInfo * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorInfo * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfoVtbl;
interface __FIIterator_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo
{
    CONST_VTBL struct __FIIterator_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfoVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo __FIIterable_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo;
EXTERN_C const IID IID___FIIterable_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo;
typedef struct __FIIterable_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo * This, __RPC__deref_out_opt __FIIterator_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo **first);
    END_INTERFACE
} __FIIterable_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfoVtbl;
interface __FIIterable_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo
{
    CONST_VTBL struct __FIIterable_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfoVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo __FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo;
EXTERN_C const IID IID___FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo;
typedef struct __FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorInfo * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo * This,
                       __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorInfo * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorInfo * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfoVtbl;
interface __FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo
{
    CONST_VTBL struct __FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfoVtbl *lpVtbl;
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
typedef interface __FIEventHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationStageChangedEventArgs __FIEventHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationStageChangedEventArgs;
EXTERN_C const IID IID___FIEventHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationStageChangedEventArgs;
typedef struct __FIEventHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationStageChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIEventHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationStageChangedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIEventHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationStageChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIEventHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationStageChangedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIEventHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationStageChangedEventArgs * This, __RPC__in_opt IInspectable *sender, __RPC__in_opt __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStageChangedEventArgs * *e);
    END_INTERFACE
} __FIEventHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationStageChangedEventArgsVtbl;
interface __FIEventHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationStageChangedEventArgs
{
    CONST_VTBL struct __FIEventHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationStageChangedEventArgsVtbl *lpVtbl;
};
        ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl -> AddRef(This) )
        ( (This)->lpVtbl -> Release(This) )
        ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo;
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo;
typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo * This, __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfoVtbl;
interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfoVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo;
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo;
typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo * This, __RPC__out __FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfoVtbl;
interface __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfoVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationResult __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationResult;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationResult;
typedef interface __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationResult __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationResult;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationResult * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationResult * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationResult *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationResultVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationResult __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationResult;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationResult;
typedef struct __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationResult * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationResult *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationResult * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationResult * This, __RPC__out __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationResultVtbl;
interface __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationResultVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationStageInfo __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationStageInfo;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationStageInfo;
typedef interface __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationStageInfo __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationStageInfo;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationStageInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationStageInfo * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationStageInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationStageInfo * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationStageInfo * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationStageInfo *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationStageInfoVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationStageInfo
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationStageInfoVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationStageInfo __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationStageInfo;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationStageInfo;
typedef struct __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationStageInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationStageInfo * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationStageInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationStageInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationStageInfo * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationStageInfo * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationStageInfo * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationStageInfo * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationStageInfo *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationStageInfo * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationStageInfo **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationStageInfo * This, __RPC__out __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStageInfo * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationStageInfoVtbl;
interface __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationStageInfo
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationStageInfoVtbl *lpVtbl;
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
enum __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CSecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus;
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus;
typedef interface __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatusVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatusVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus;
typedef struct __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus * This, __RPC__out enum __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CSecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatusVtbl;
interface __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatusVtbl *lpVtbl;
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
enum __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CSecondaryAuthenticationFactorFinishAuthenticationStatus;
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorFinishAuthenticationStatus __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorFinishAuthenticationStatus;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorFinishAuthenticationStatus;
typedef interface __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorFinishAuthenticationStatus __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorFinishAuthenticationStatus;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorFinishAuthenticationStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorFinishAuthenticationStatus * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorFinishAuthenticationStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorFinishAuthenticationStatus * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorFinishAuthenticationStatus * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorFinishAuthenticationStatus *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorFinishAuthenticationStatusVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorFinishAuthenticationStatus
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorFinishAuthenticationStatusVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorFinishAuthenticationStatus __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorFinishAuthenticationStatus;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorFinishAuthenticationStatus;
typedef struct __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorFinishAuthenticationStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorFinishAuthenticationStatus * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorFinishAuthenticationStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorFinishAuthenticationStatus * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorFinishAuthenticationStatus * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorFinishAuthenticationStatus * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorFinishAuthenticationStatus * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorFinishAuthenticationStatus * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorFinishAuthenticationStatus *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorFinishAuthenticationStatus * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorFinishAuthenticationStatus **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorFinishAuthenticationStatus * This, __RPC__out enum __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CSecondaryAuthenticationFactorFinishAuthenticationStatus *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorFinishAuthenticationStatusVtbl;
interface __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorFinishAuthenticationStatus
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorFinishAuthenticationStatusVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorRegistrationResult __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorRegistrationResult;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorRegistrationResult;
typedef interface __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorRegistrationResult __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorRegistrationResult;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorRegistrationResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorRegistrationResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorRegistrationResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorRegistrationResult * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorRegistrationResult * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorRegistrationResult *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorRegistrationResultVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorRegistrationResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorRegistrationResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorRegistrationResult __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorRegistrationResult;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorRegistrationResult;
typedef struct __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorRegistrationResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorRegistrationResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorRegistrationResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorRegistrationResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorRegistrationResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorRegistrationResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorRegistrationResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorRegistrationResult * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorRegistrationResult *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorRegistrationResult * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorRegistrationResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorRegistrationResult * This, __RPC__out __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistrationResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorRegistrationResultVtbl;
interface __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorRegistrationResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorRegistrationResultVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIBuffer __x_ABI_CWindows_CStorage_CStreams_CIBuffer;
typedef enum __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CSecondaryAuthenticationFactorAuthenticationMessage __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CSecondaryAuthenticationFactorAuthenticationMessage;
typedef enum __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CSecondaryAuthenticationFactorAuthenticationScenario __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CSecondaryAuthenticationFactorAuthenticationScenario;
typedef enum __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CSecondaryAuthenticationFactorAuthenticationStage __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CSecondaryAuthenticationFactorAuthenticationStage;
typedef enum __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CSecondaryAuthenticationFactorAuthenticationStatus __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CSecondaryAuthenticationFactorAuthenticationStatus;
typedef enum __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CSecondaryAuthenticationFactorDeviceCapabilities __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CSecondaryAuthenticationFactorDeviceCapabilities;
typedef enum __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CSecondaryAuthenticationFactorDeviceFindScope __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CSecondaryAuthenticationFactorDeviceFindScope;
typedef enum __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CSecondaryAuthenticationFactorDevicePresence __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CSecondaryAuthenticationFactorDevicePresence;
typedef enum __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CSecondaryAuthenticationFactorDevicePresenceMonitoringMode __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CSecondaryAuthenticationFactorDevicePresenceMonitoringMode;
typedef enum __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CSecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CSecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus;
typedef enum __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CSecondaryAuthenticationFactorFinishAuthenticationStatus __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CSecondaryAuthenticationFactorFinishAuthenticationStatus;
typedef enum __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CSecondaryAuthenticationFactorRegistrationStatus __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CSecondaryAuthenticationFactorRegistrationStatus;
enum __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CSecondaryAuthenticationFactorAuthenticationMessage
{
    SecondaryAuthenticationFactorAuthenticationMessage_Invalid = 0,
    SecondaryAuthenticationFactorAuthenticationMessage_SwipeUpWelcome = 1,
    SecondaryAuthenticationFactorAuthenticationMessage_TapWelcome = 2,
    SecondaryAuthenticationFactorAuthenticationMessage_DeviceNeedsAttention = 3,
    SecondaryAuthenticationFactorAuthenticationMessage_LookingForDevice = 4,
    SecondaryAuthenticationFactorAuthenticationMessage_LookingForDevicePluggedin = 5,
    SecondaryAuthenticationFactorAuthenticationMessage_BluetoothIsDisabled = 6,
    SecondaryAuthenticationFactorAuthenticationMessage_NfcIsDisabled = 7,
    SecondaryAuthenticationFactorAuthenticationMessage_WiFiIsDisabled = 8,
    SecondaryAuthenticationFactorAuthenticationMessage_ExtraTapIsRequired = 9,
    SecondaryAuthenticationFactorAuthenticationMessage_DisabledByPolicy = 10,
    SecondaryAuthenticationFactorAuthenticationMessage_TapOnDeviceRequired = 11,
    SecondaryAuthenticationFactorAuthenticationMessage_HoldFinger = 12,
    SecondaryAuthenticationFactorAuthenticationMessage_ScanFinger = 13,
    SecondaryAuthenticationFactorAuthenticationMessage_UnauthorizedUser = 14,
    SecondaryAuthenticationFactorAuthenticationMessage_ReregisterRequired = 15,
    SecondaryAuthenticationFactorAuthenticationMessage_TryAgain = 16,
    SecondaryAuthenticationFactorAuthenticationMessage_SayPassphrase = 17,
    SecondaryAuthenticationFactorAuthenticationMessage_ReadyToSignIn = 18,
    SecondaryAuthenticationFactorAuthenticationMessage_UseAnotherSignInOption = 19,
    SecondaryAuthenticationFactorAuthenticationMessage_ConnectionRequired = 20,
    SecondaryAuthenticationFactorAuthenticationMessage_TimeLimitExceeded = 21,
    SecondaryAuthenticationFactorAuthenticationMessage_CanceledByUser = 22,
    SecondaryAuthenticationFactorAuthenticationMessage_CenterHand = 23,
    SecondaryAuthenticationFactorAuthenticationMessage_MoveHandCloser = 24,
    SecondaryAuthenticationFactorAuthenticationMessage_MoveHandFarther = 25,
    SecondaryAuthenticationFactorAuthenticationMessage_PlaceHandAbove = 26,
    SecondaryAuthenticationFactorAuthenticationMessage_RecognitionFailed = 27,
    SecondaryAuthenticationFactorAuthenticationMessage_DeviceUnavailable = 28,
};
enum __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CSecondaryAuthenticationFactorAuthenticationScenario
{
    SecondaryAuthenticationFactorAuthenticationScenario_SignIn = 0,
    SecondaryAuthenticationFactorAuthenticationScenario_CredentialPrompt = 1,
};
enum __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CSecondaryAuthenticationFactorAuthenticationStage
{
    SecondaryAuthenticationFactorAuthenticationStage_NotStarted = 0,
    SecondaryAuthenticationFactorAuthenticationStage_WaitingForUserConfirmation = 1,
    SecondaryAuthenticationFactorAuthenticationStage_CollectingCredential = 2,
    SecondaryAuthenticationFactorAuthenticationStage_SuspendingAuthentication = 3,
    SecondaryAuthenticationFactorAuthenticationStage_CredentialCollected = 4,
    SecondaryAuthenticationFactorAuthenticationStage_CredentialAuthenticated = 5,
    SecondaryAuthenticationFactorAuthenticationStage_StoppingAuthentication = 6,
    SecondaryAuthenticationFactorAuthenticationStage_ReadyForLock = 7,
    SecondaryAuthenticationFactorAuthenticationStage_CheckingDevicePresence
    DEPRECATEDENUMERATOR("CheckingDevicePresence is deprecated and might not work on all platforms. For more info, see MSDN.")
     = 8,
};
enum __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CSecondaryAuthenticationFactorAuthenticationStatus
{
    SecondaryAuthenticationFactorAuthenticationStatus_Failed = 0,
    SecondaryAuthenticationFactorAuthenticationStatus_Started = 1,
    SecondaryAuthenticationFactorAuthenticationStatus_UnknownDevice = 2,
    SecondaryAuthenticationFactorAuthenticationStatus_DisabledByPolicy = 3,
    SecondaryAuthenticationFactorAuthenticationStatus_InvalidAuthenticationStage = 4,
};
enum __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CSecondaryAuthenticationFactorDeviceCapabilities
{
    SecondaryAuthenticationFactorDeviceCapabilities_None = 0,
    SecondaryAuthenticationFactorDeviceCapabilities_SecureStorage = 0x1,
    SecondaryAuthenticationFactorDeviceCapabilities_StoreKeys = 0x2,
    SecondaryAuthenticationFactorDeviceCapabilities_ConfirmUserIntentToAuthenticate = 0x4,
    SecondaryAuthenticationFactorDeviceCapabilities_SupportSecureUserPresenceCheck
    DEPRECATEDENUMERATOR("SupportSecureUserPresenceCheck is deprecated and might not work on all platforms. For more info, see MSDN.")
     = 0x8,
    SecondaryAuthenticationFactorDeviceCapabilities_TransmittedDataIsEncrypted = 0x10,
    SecondaryAuthenticationFactorDeviceCapabilities_HMacSha256 = 0x20,
    SecondaryAuthenticationFactorDeviceCapabilities_CloseRangeDataTransmission = 0x40,
};
enum __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CSecondaryAuthenticationFactorDeviceFindScope
{
    SecondaryAuthenticationFactorDeviceFindScope_User = 0,
    SecondaryAuthenticationFactorDeviceFindScope_AllUsers = 1,
};
enum
DEPRECATED("SecondaryAuthenticationFactorDevicePresence is deprecated and might not work on all platforms. For more info, see MSDN.")
__x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CSecondaryAuthenticationFactorDevicePresence
{
    SecondaryAuthenticationFactorDevicePresence_Absent = 0,
    SecondaryAuthenticationFactorDevicePresence_Present = 1,
};
enum
DEPRECATED("SecondaryAuthenticationFactorDevicePresenceMonitoringMode is deprecated and might not work on all platforms. For more info, see MSDN.")
__x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CSecondaryAuthenticationFactorDevicePresenceMonitoringMode
{
    SecondaryAuthenticationFactorDevicePresenceMonitoringMode_Unsupported = 0,
    SecondaryAuthenticationFactorDevicePresenceMonitoringMode_AppManaged = 1,
    SecondaryAuthenticationFactorDevicePresenceMonitoringMode_SystemManaged = 2,
};
enum
DEPRECATED("SecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus is deprecated and might not work on all platforms. For more info, see MSDN.")
__x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CSecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus
{
    SecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus_Unsupported = 0,
    SecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus_Succeeded = 1,
    SecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus_DisabledByPolicy = 2,
};
enum __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CSecondaryAuthenticationFactorFinishAuthenticationStatus
{
    SecondaryAuthenticationFactorFinishAuthenticationStatus_Failed = 0,
    SecondaryAuthenticationFactorFinishAuthenticationStatus_Completed = 1,
    SecondaryAuthenticationFactorFinishAuthenticationStatus_NonceExpired = 2,
};
enum __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CSecondaryAuthenticationFactorRegistrationStatus
{
    SecondaryAuthenticationFactorRegistrationStatus_Failed = 0,
    SecondaryAuthenticationFactorRegistrationStatus_Started = 1,
    SecondaryAuthenticationFactorRegistrationStatus_CanceledByUser = 2,
    SecondaryAuthenticationFactorRegistrationStatus_PinSetupRequired = 3,
    SecondaryAuthenticationFactorRegistrationStatus_DisabledByPolicy = 4,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_Identity_Provider_ISecondaryAuthenticationFactorAuthentication[] = L"Windows.Security.Authentication.Identity.Provider.ISecondaryAuthenticationFactorAuthentication";
typedef struct __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthentication * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthentication * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthentication * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthentication * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthentication * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthentication * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ServiceAuthenticationHmac )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthentication * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SessionNonce )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthentication * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DeviceNonce )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthentication * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DeviceConfigurationData )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthentication * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
    HRESULT ( STDMETHODCALLTYPE *FinishAuthenticationAsync )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthentication * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * deviceHmac,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * sessionHmac,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorFinishAuthenticationStatus * * result
        );
    HRESULT ( STDMETHODCALLTYPE *AbortAuthenticationAsync )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthentication * This,
                  __RPC__in HSTRING errorLogMessage,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationVtbl;
interface __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthentication
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ServiceAuthenticationHmac(This,value) )
    ( (This)->lpVtbl->get_SessionNonce(This,value) )
    ( (This)->lpVtbl->get_DeviceNonce(This,value) )
    ( (This)->lpVtbl->get_DeviceConfigurationData(This,value) )
    ( (This)->lpVtbl->FinishAuthenticationAsync(This,deviceHmac,sessionHmac,result) )
    ( (This)->lpVtbl->AbortAuthenticationAsync(This,errorLogMessage,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthentication;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_Identity_Provider_ISecondaryAuthenticationFactorAuthenticationResult[] = L"Windows.Security.Authentication.Identity.Provider.ISecondaryAuthenticationFactorAuthenticationResult";
typedef struct __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationResult * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationResult * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationResult * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationResult * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationResult * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationResult * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationResult * This,
                           __RPC__out __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CSecondaryAuthenticationFactorAuthenticationStatus * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Authentication )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationResult * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthentication * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationResultVtbl;
interface __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationResult
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationResultVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Status(This,value) )
    ( (This)->lpVtbl->get_Authentication(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationResult;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_Identity_Provider_ISecondaryAuthenticationFactorAuthenticationStageChangedEventArgs[] = L"Windows.Security.Authentication.Identity.Provider.ISecondaryAuthenticationFactorAuthenticationStageChangedEventArgs";
typedef struct __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStageChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStageChangedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStageChangedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStageChangedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStageChangedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStageChangedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStageChangedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_StageInfo )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStageChangedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStageInfo * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStageChangedEventArgsVtbl;
interface __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStageChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStageChangedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_StageInfo(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStageChangedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_Identity_Provider_ISecondaryAuthenticationFactorAuthenticationStageInfo[] = L"Windows.Security.Authentication.Identity.Provider.ISecondaryAuthenticationFactorAuthenticationStageInfo";
typedef struct __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStageInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStageInfo * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStageInfo * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStageInfo * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStageInfo * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStageInfo * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStageInfo * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Stage )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStageInfo * This,
                           __RPC__out __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CSecondaryAuthenticationFactorAuthenticationStage * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Scenario )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStageInfo * This,
                           __RPC__out __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CSecondaryAuthenticationFactorAuthenticationScenario * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DeviceId )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStageInfo * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStageInfoVtbl;
interface __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStageInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStageInfoVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Stage(This,value) )
    ( (This)->lpVtbl->get_Scenario(This,value) )
    ( (This)->lpVtbl->get_DeviceId(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStageInfo;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_Identity_Provider_ISecondaryAuthenticationFactorAuthenticationStatics[] = L"Windows.Security.Authentication.Identity.Provider.ISecondaryAuthenticationFactorAuthenticationStatics";
typedef struct __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *ShowNotificationMessageAsync )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStatics * This,
                  __RPC__in HSTRING deviceName,
                  __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CSecondaryAuthenticationFactorAuthenticationMessage message,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    HRESULT ( STDMETHODCALLTYPE *StartAuthenticationAsync )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStatics * This,
                  __RPC__in HSTRING deviceId,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * serviceAuthenticationNonce,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationResult * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *add_AuthenticationStageChanged )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStatics * This,
                  __RPC__in_opt __FIEventHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationStageChangedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_AuthenticationStageChanged )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStatics * This,
                  EventRegistrationToken token
        );
    HRESULT ( STDMETHODCALLTYPE *GetAuthenticationStageInfoAsync )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStatics * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorAuthenticationStageInfo * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStaticsVtbl;
interface __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->ShowNotificationMessageAsync(This,deviceName,message,result) )
    ( (This)->lpVtbl->StartAuthenticationAsync(This,deviceId,serviceAuthenticationNonce,operation) )
    ( (This)->lpVtbl->add_AuthenticationStageChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_AuthenticationStageChanged(This,token) )
    ( (This)->lpVtbl->GetAuthenticationStageInfoAsync(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorAuthenticationStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_Identity_Provider_ISecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatics[] = L"Windows.Security.Authentication.Identity.Provider.ISecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatics";
typedef struct __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("RegisterDevicePresenceMonitoringAsync is deprecated and might not work on all platforms. For more info, see MSDN.")
                                HRESULT ( STDMETHODCALLTYPE *RegisterDevicePresenceMonitoringAsync )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatics * This,
                  __RPC__in HSTRING deviceId,
                  __RPC__in HSTRING deviceInstancePath,
                  __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CSecondaryAuthenticationFactorDevicePresenceMonitoringMode monitoringMode,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus * * operation
        );
    DEPRECATED("RegisterDevicePresenceMonitoringWithNewDeviceAsync is deprecated and might not work on all platforms. For more info, see MSDN.")
                                HRESULT ( STDMETHODCALLTYPE *RegisterDevicePresenceMonitoringWithNewDeviceAsync )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatics * This,
                  __RPC__in HSTRING deviceId,
                  __RPC__in HSTRING deviceInstancePath,
                  __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CSecondaryAuthenticationFactorDevicePresenceMonitoringMode monitoringMode,
                  __RPC__in HSTRING deviceFriendlyName,
                  __RPC__in HSTRING deviceModelNumber,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * deviceConfigurationData,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus * * operation
        );
    DEPRECATED("UnregisterDevicePresenceMonitoringAsync is deprecated and might not work on all platforms. For more info, see MSDN.")
                      HRESULT ( STDMETHODCALLTYPE *UnregisterDevicePresenceMonitoringAsync )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatics * This,
                  __RPC__in HSTRING deviceId,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    DEPRECATED("IsDevicePresenceMonitoringSupported is deprecated and might not work on all platforms. For more info, see MSDN.")
                      HRESULT ( STDMETHODCALLTYPE *IsDevicePresenceMonitoringSupported )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatics * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStaticsVtbl;
interface __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("RegisterDevicePresenceMonitoringAsync is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->RegisterDevicePresenceMonitoringAsync(This,deviceId,deviceInstancePath,monitoringMode,operation) )
DEPRECATED("RegisterDevicePresenceMonitoringWithNewDeviceAsync is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->RegisterDevicePresenceMonitoringWithNewDeviceAsync(This,deviceId,deviceInstancePath,monitoringMode,deviceFriendlyName,deviceModelNumber,deviceConfigurationData,operation) )
DEPRECATED("UnregisterDevicePresenceMonitoringAsync is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->UnregisterDevicePresenceMonitoringAsync(This,deviceId,result) )
DEPRECATED("IsDevicePresenceMonitoringSupported is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->IsDevicePresenceMonitoringSupported(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_Identity_Provider_ISecondaryAuthenticationFactorInfo[] = L"Windows.Security.Authentication.Identity.Provider.ISecondaryAuthenticationFactorInfo";
typedef struct __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorInfo * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorInfo * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorInfo * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorInfo * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorInfo * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorInfo * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DeviceId )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorInfo * This,
                           __RPC__deref_out_opt HSTRING * deviceId
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DeviceFriendlyName )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorInfo * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DeviceModelNumber )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorInfo * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DeviceConfigurationData )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorInfo * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorInfoVtbl;
interface __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorInfoVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DeviceId(This,deviceId) )
    ( (This)->lpVtbl->get_DeviceFriendlyName(This,value) )
    ( (This)->lpVtbl->get_DeviceModelNumber(This,value) )
    ( (This)->lpVtbl->get_DeviceConfigurationData(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorInfo;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_Identity_Provider_ISecondaryAuthenticationFactorInfo2[] = L"Windows.Security.Authentication.Identity.Provider.ISecondaryAuthenticationFactorInfo2";
typedef struct __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorInfo2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorInfo2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorInfo2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorInfo2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorInfo2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorInfo2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorInfo2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("PresenceMonitoringMode is deprecated and might not work on all platforms. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_PresenceMonitoringMode )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorInfo2 * This,
                           __RPC__out __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CSecondaryAuthenticationFactorDevicePresenceMonitoringMode * value
        );
    DEPRECATED("UpdateDevicePresenceAsync is deprecated and might not work on all platforms. For more info, see MSDN.")
                      HRESULT ( STDMETHODCALLTYPE *UpdateDevicePresenceAsync )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorInfo2 * This,
                  __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CSecondaryAuthenticationFactorDevicePresence presenceState,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    DEPRECATED("IsAuthenticationSupported is deprecated and might not work on all platforms. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_IsAuthenticationSupported )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorInfo2 * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorInfo2Vtbl;
interface __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorInfo2
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorInfo2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("PresenceMonitoringMode is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->get_PresenceMonitoringMode(This,value) )
DEPRECATED("UpdateDevicePresenceAsync is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->UpdateDevicePresenceAsync(This,presenceState,result) )
DEPRECATED("IsAuthenticationSupported is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->get_IsAuthenticationSupported(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorInfo2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_Identity_Provider_ISecondaryAuthenticationFactorRegistration[] = L"Windows.Security.Authentication.Identity.Provider.ISecondaryAuthenticationFactorRegistration";
typedef struct __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistrationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistration * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistration * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistration * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistration * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistration * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistration * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *FinishRegisteringDeviceAsync )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistration * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * deviceConfigurationData,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    HRESULT ( STDMETHODCALLTYPE *AbortRegisteringDeviceAsync )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistration * This,
                  __RPC__in HSTRING errorLogMessage,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistrationVtbl;
interface __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistration
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistrationVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->FinishRegisteringDeviceAsync(This,deviceConfigurationData,result) )
    ( (This)->lpVtbl->AbortRegisteringDeviceAsync(This,errorLogMessage,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistration;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_Identity_Provider_ISecondaryAuthenticationFactorRegistrationResult[] = L"Windows.Security.Authentication.Identity.Provider.ISecondaryAuthenticationFactorRegistrationResult";
typedef struct __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistrationResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistrationResult * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistrationResult * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistrationResult * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistrationResult * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistrationResult * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistrationResult * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistrationResult * This,
                           __RPC__out __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CSecondaryAuthenticationFactorRegistrationStatus * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Registration )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistrationResult * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistration * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistrationResultVtbl;
interface __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistrationResult
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistrationResultVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Status(This,value) )
    ( (This)->lpVtbl->get_Registration(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistrationResult;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_Identity_Provider_ISecondaryAuthenticationFactorRegistrationStatics[] = L"Windows.Security.Authentication.Identity.Provider.ISecondaryAuthenticationFactorRegistrationStatics";
typedef struct __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistrationStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistrationStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistrationStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistrationStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistrationStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistrationStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistrationStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *RequestStartRegisteringDeviceAsync )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistrationStatics * This,
                  __RPC__in HSTRING deviceId,
                  __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CSecondaryAuthenticationFactorDeviceCapabilities capabilities,
                  __RPC__in HSTRING deviceFriendlyName,
                  __RPC__in HSTRING deviceModelNumber,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * deviceKey,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * mutualAuthenticationKey,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorRegistrationResult * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *FindAllRegisteredDeviceInfoAsync )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistrationStatics * This,
                  __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CSecondaryAuthenticationFactorDeviceFindScope queryType,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CProvider__CSecondaryAuthenticationFactorInfo * * deviceInfoList
        );
    HRESULT ( STDMETHODCALLTYPE *UnregisterDeviceAsync )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistrationStatics * This,
                  __RPC__in HSTRING deviceId,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    HRESULT ( STDMETHODCALLTYPE *UpdateDeviceConfigurationDataAsync )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistrationStatics * This,
                  __RPC__in HSTRING deviceId,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * deviceConfigurationData,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistrationStaticsVtbl;
interface __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistrationStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistrationStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->RequestStartRegisteringDeviceAsync(This,deviceId,capabilities,deviceFriendlyName,deviceModelNumber,deviceKey,mutualAuthenticationKey,operation) )
    ( (This)->lpVtbl->FindAllRegisteredDeviceInfoAsync(This,queryType,deviceInfoList) )
    ( (This)->lpVtbl->UnregisterDeviceAsync(This,deviceId,result) )
    ( (This)->lpVtbl->UpdateDeviceConfigurationDataAsync(This,deviceId,deviceConfigurationData,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CProvider_CISecondaryAuthenticationFactorRegistrationStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Authentication_Identity_Provider_SecondaryAuthenticationFactorAuthentication[] = L"Windows.Security.Authentication.Identity.Provider.SecondaryAuthenticationFactorAuthentication";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Authentication_Identity_Provider_SecondaryAuthenticationFactorAuthenticationResult[] = L"Windows.Security.Authentication.Identity.Provider.SecondaryAuthenticationFactorAuthenticationResult";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Authentication_Identity_Provider_SecondaryAuthenticationFactorAuthenticationStageChangedEventArgs[] = L"Windows.Security.Authentication.Identity.Provider.SecondaryAuthenticationFactorAuthenticationStageChangedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Authentication_Identity_Provider_SecondaryAuthenticationFactorAuthenticationStageInfo[] = L"Windows.Security.Authentication.Identity.Provider.SecondaryAuthenticationFactorAuthenticationStageInfo";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Authentication_Identity_Provider_SecondaryAuthenticationFactorInfo[] = L"Windows.Security.Authentication.Identity.Provider.SecondaryAuthenticationFactorInfo";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Authentication_Identity_Provider_SecondaryAuthenticationFactorRegistration[] = L"Windows.Security.Authentication.Identity.Provider.SecondaryAuthenticationFactorRegistration";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Authentication_Identity_Provider_SecondaryAuthenticationFactorRegistrationResult[] = L"Windows.Security.Authentication.Identity.Provider.SecondaryAuthenticationFactorRegistrationResult";
       
       
#pragma clang diagnostic pop

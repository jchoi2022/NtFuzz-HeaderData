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
#include "Windows.Storage.h"
#include "Windows.Storage.Streams.h"
#include "Windows.System.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CSecurity_CDataProtection_CIUserDataAvailabilityStateChangedEventArgs __x_ABI_CWindows_CSecurity_CDataProtection_CIUserDataAvailabilityStateChangedEventArgs;
typedef interface __x_ABI_CWindows_CSecurity_CDataProtection_CIUserDataBufferUnprotectResult __x_ABI_CWindows_CSecurity_CDataProtection_CIUserDataBufferUnprotectResult;
typedef interface __x_ABI_CWindows_CSecurity_CDataProtection_CIUserDataProtectionManager __x_ABI_CWindows_CSecurity_CDataProtection_CIUserDataProtectionManager;
typedef interface __x_ABI_CWindows_CSecurity_CDataProtection_CIUserDataProtectionManagerStatics __x_ABI_CWindows_CSecurity_CDataProtection_CIUserDataProtectionManagerStatics;
typedef interface __x_ABI_CWindows_CSecurity_CDataProtection_CIUserDataStorageItemProtectionInfo __x_ABI_CWindows_CSecurity_CDataProtection_CIUserDataStorageItemProtectionInfo;
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CDataProtection__CUserDataBufferUnprotectResult __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CDataProtection__CUserDataBufferUnprotectResult;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CDataProtection__CUserDataBufferUnprotectResult;
typedef interface __FIAsyncOperation_1_Windows__CSecurity__CDataProtection__CUserDataBufferUnprotectResult __FIAsyncOperation_1_Windows__CSecurity__CDataProtection__CUserDataBufferUnprotectResult;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CDataProtection__CUserDataBufferUnprotectResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CDataProtection__CUserDataBufferUnprotectResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CDataProtection__CUserDataBufferUnprotectResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CDataProtection__CUserDataBufferUnprotectResult * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CDataProtection__CUserDataBufferUnprotectResult * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CSecurity__CDataProtection__CUserDataBufferUnprotectResult *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CDataProtection__CUserDataBufferUnprotectResultVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CDataProtection__CUserDataBufferUnprotectResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CDataProtection__CUserDataBufferUnprotectResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CSecurity__CDataProtection__CUserDataBufferUnprotectResult __FIAsyncOperation_1_Windows__CSecurity__CDataProtection__CUserDataBufferUnprotectResult;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CSecurity__CDataProtection__CUserDataBufferUnprotectResult;
typedef struct __FIAsyncOperation_1_Windows__CSecurity__CDataProtection__CUserDataBufferUnprotectResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CDataProtection__CUserDataBufferUnprotectResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CDataProtection__CUserDataBufferUnprotectResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CDataProtection__CUserDataBufferUnprotectResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CDataProtection__CUserDataBufferUnprotectResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CDataProtection__CUserDataBufferUnprotectResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CDataProtection__CUserDataBufferUnprotectResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CDataProtection__CUserDataBufferUnprotectResult * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CDataProtection__CUserDataBufferUnprotectResult *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CDataProtection__CUserDataBufferUnprotectResult * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CDataProtection__CUserDataBufferUnprotectResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CDataProtection__CUserDataBufferUnprotectResult * This, __RPC__out __x_ABI_CWindows_CSecurity_CDataProtection_CIUserDataBufferUnprotectResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CSecurity__CDataProtection__CUserDataBufferUnprotectResultVtbl;
interface __FIAsyncOperation_1_Windows__CSecurity__CDataProtection__CUserDataBufferUnprotectResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CSecurity__CDataProtection__CUserDataBufferUnprotectResultVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CDataProtection__CUserDataStorageItemProtectionInfo __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CDataProtection__CUserDataStorageItemProtectionInfo;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CDataProtection__CUserDataStorageItemProtectionInfo;
typedef interface __FIAsyncOperation_1_Windows__CSecurity__CDataProtection__CUserDataStorageItemProtectionInfo __FIAsyncOperation_1_Windows__CSecurity__CDataProtection__CUserDataStorageItemProtectionInfo;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CDataProtection__CUserDataStorageItemProtectionInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CDataProtection__CUserDataStorageItemProtectionInfo * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CDataProtection__CUserDataStorageItemProtectionInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CDataProtection__CUserDataStorageItemProtectionInfo * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CDataProtection__CUserDataStorageItemProtectionInfo * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CSecurity__CDataProtection__CUserDataStorageItemProtectionInfo *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CDataProtection__CUserDataStorageItemProtectionInfoVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CDataProtection__CUserDataStorageItemProtectionInfo
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CDataProtection__CUserDataStorageItemProtectionInfoVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CSecurity__CDataProtection__CUserDataStorageItemProtectionInfo __FIAsyncOperation_1_Windows__CSecurity__CDataProtection__CUserDataStorageItemProtectionInfo;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CSecurity__CDataProtection__CUserDataStorageItemProtectionInfo;
typedef struct __FIAsyncOperation_1_Windows__CSecurity__CDataProtection__CUserDataStorageItemProtectionInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CDataProtection__CUserDataStorageItemProtectionInfo * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CDataProtection__CUserDataStorageItemProtectionInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CDataProtection__CUserDataStorageItemProtectionInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CDataProtection__CUserDataStorageItemProtectionInfo * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CDataProtection__CUserDataStorageItemProtectionInfo * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CDataProtection__CUserDataStorageItemProtectionInfo * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CDataProtection__CUserDataStorageItemProtectionInfo * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CDataProtection__CUserDataStorageItemProtectionInfo *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CDataProtection__CUserDataStorageItemProtectionInfo * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CDataProtection__CUserDataStorageItemProtectionInfo **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CDataProtection__CUserDataStorageItemProtectionInfo * This, __RPC__out __x_ABI_CWindows_CSecurity_CDataProtection_CIUserDataStorageItemProtectionInfo * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CSecurity__CDataProtection__CUserDataStorageItemProtectionInfoVtbl;
interface __FIAsyncOperation_1_Windows__CSecurity__CDataProtection__CUserDataStorageItemProtectionInfo
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CSecurity__CDataProtection__CUserDataStorageItemProtectionInfoVtbl *lpVtbl;
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
enum __x_ABI_CWindows_CSecurity_CDataProtection_CUserDataStorageItemProtectionStatus;
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CDataProtection__CUserDataStorageItemProtectionStatus __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CDataProtection__CUserDataStorageItemProtectionStatus;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CDataProtection__CUserDataStorageItemProtectionStatus;
typedef interface __FIAsyncOperation_1_Windows__CSecurity__CDataProtection__CUserDataStorageItemProtectionStatus __FIAsyncOperation_1_Windows__CSecurity__CDataProtection__CUserDataStorageItemProtectionStatus;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CDataProtection__CUserDataStorageItemProtectionStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CDataProtection__CUserDataStorageItemProtectionStatus * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CDataProtection__CUserDataStorageItemProtectionStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CDataProtection__CUserDataStorageItemProtectionStatus * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CDataProtection__CUserDataStorageItemProtectionStatus * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CSecurity__CDataProtection__CUserDataStorageItemProtectionStatus *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CDataProtection__CUserDataStorageItemProtectionStatusVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CDataProtection__CUserDataStorageItemProtectionStatus
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CDataProtection__CUserDataStorageItemProtectionStatusVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CSecurity__CDataProtection__CUserDataStorageItemProtectionStatus __FIAsyncOperation_1_Windows__CSecurity__CDataProtection__CUserDataStorageItemProtectionStatus;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CSecurity__CDataProtection__CUserDataStorageItemProtectionStatus;
typedef struct __FIAsyncOperation_1_Windows__CSecurity__CDataProtection__CUserDataStorageItemProtectionStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CDataProtection__CUserDataStorageItemProtectionStatus * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CDataProtection__CUserDataStorageItemProtectionStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CDataProtection__CUserDataStorageItemProtectionStatus * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CDataProtection__CUserDataStorageItemProtectionStatus * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CDataProtection__CUserDataStorageItemProtectionStatus * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CDataProtection__CUserDataStorageItemProtectionStatus * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CDataProtection__CUserDataStorageItemProtectionStatus * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CDataProtection__CUserDataStorageItemProtectionStatus *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CDataProtection__CUserDataStorageItemProtectionStatus * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CDataProtection__CUserDataStorageItemProtectionStatus **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CDataProtection__CUserDataStorageItemProtectionStatus * This, __RPC__out enum __x_ABI_CWindows_CSecurity_CDataProtection_CUserDataStorageItemProtectionStatus *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CSecurity__CDataProtection__CUserDataStorageItemProtectionStatusVtbl;
interface __FIAsyncOperation_1_Windows__CSecurity__CDataProtection__CUserDataStorageItemProtectionStatus
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CSecurity__CDataProtection__CUserDataStorageItemProtectionStatusVtbl *lpVtbl;
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
typedef interface __FITypedEventHandler_2_Windows__CSecurity__CDataProtection__CUserDataProtectionManager_Windows__CSecurity__CDataProtection__CUserDataAvailabilityStateChangedEventArgs __FITypedEventHandler_2_Windows__CSecurity__CDataProtection__CUserDataProtectionManager_Windows__CSecurity__CDataProtection__CUserDataAvailabilityStateChangedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CSecurity__CDataProtection__CUserDataProtectionManager_Windows__CSecurity__CDataProtection__CUserDataAvailabilityStateChangedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CSecurity__CDataProtection__CUserDataProtectionManager_Windows__CSecurity__CDataProtection__CUserDataAvailabilityStateChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CSecurity__CDataProtection__CUserDataProtectionManager_Windows__CSecurity__CDataProtection__CUserDataAvailabilityStateChangedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CSecurity__CDataProtection__CUserDataProtectionManager_Windows__CSecurity__CDataProtection__CUserDataAvailabilityStateChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CSecurity__CDataProtection__CUserDataProtectionManager_Windows__CSecurity__CDataProtection__CUserDataAvailabilityStateChangedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CSecurity__CDataProtection__CUserDataProtectionManager_Windows__CSecurity__CDataProtection__CUserDataAvailabilityStateChangedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CSecurity_CDataProtection_CIUserDataProtectionManager * sender, __RPC__in_opt __x_ABI_CWindows_CSecurity_CDataProtection_CIUserDataAvailabilityStateChangedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CSecurity__CDataProtection__CUserDataProtectionManager_Windows__CSecurity__CDataProtection__CUserDataAvailabilityStateChangedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CSecurity__CDataProtection__CUserDataProtectionManager_Windows__CSecurity__CDataProtection__CUserDataAvailabilityStateChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CSecurity__CDataProtection__CUserDataProtectionManager_Windows__CSecurity__CDataProtection__CUserDataAvailabilityStateChangedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIBuffer __x_ABI_CWindows_CStorage_CStreams_CIBuffer;
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer;
typedef interface __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBufferVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBufferVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBufferVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer;
typedef struct __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBufferVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer * This, __RPC__out __x_ABI_CWindows_CStorage_CStreams_CIBuffer * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBufferVtbl;
interface __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBufferVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CFoundation_CIDeferral __x_ABI_CWindows_CFoundation_CIDeferral;
typedef interface __x_ABI_CWindows_CStorage_CIStorageItem __x_ABI_CWindows_CStorage_CIStorageItem;
typedef interface __x_ABI_CWindows_CSystem_CIUser __x_ABI_CWindows_CSystem_CIUser;
typedef enum __x_ABI_CWindows_CSecurity_CDataProtection_CUserDataAvailability __x_ABI_CWindows_CSecurity_CDataProtection_CUserDataAvailability;
typedef enum __x_ABI_CWindows_CSecurity_CDataProtection_CUserDataBufferUnprotectStatus __x_ABI_CWindows_CSecurity_CDataProtection_CUserDataBufferUnprotectStatus;
typedef enum __x_ABI_CWindows_CSecurity_CDataProtection_CUserDataStorageItemProtectionStatus __x_ABI_CWindows_CSecurity_CDataProtection_CUserDataStorageItemProtectionStatus;
enum __x_ABI_CWindows_CSecurity_CDataProtection_CUserDataAvailability
{
    UserDataAvailability_Always = 0,
    UserDataAvailability_AfterFirstUnlock = 1,
    UserDataAvailability_WhileUnlocked = 2,
};
enum __x_ABI_CWindows_CSecurity_CDataProtection_CUserDataBufferUnprotectStatus
{
    UserDataBufferUnprotectStatus_Succeeded = 0,
    UserDataBufferUnprotectStatus_Unavailable = 1,
};
enum __x_ABI_CWindows_CSecurity_CDataProtection_CUserDataStorageItemProtectionStatus
{
    UserDataStorageItemProtectionStatus_Succeeded = 0,
    UserDataStorageItemProtectionStatus_NotProtectable = 1,
    UserDataStorageItemProtectionStatus_DataUnavailable = 2,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_DataProtection_IUserDataAvailabilityStateChangedEventArgs[] = L"Windows.Security.DataProtection.IUserDataAvailabilityStateChangedEventArgs";
typedef struct __x_ABI_CWindows_CSecurity_CDataProtection_CIUserDataAvailabilityStateChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CDataProtection_CIUserDataAvailabilityStateChangedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CDataProtection_CIUserDataAvailabilityStateChangedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CDataProtection_CIUserDataAvailabilityStateChangedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CDataProtection_CIUserDataAvailabilityStateChangedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CDataProtection_CIUserDataAvailabilityStateChangedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CDataProtection_CIUserDataAvailabilityStateChangedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CSecurity_CDataProtection_CIUserDataAvailabilityStateChangedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIDeferral * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CDataProtection_CIUserDataAvailabilityStateChangedEventArgsVtbl;
interface __x_ABI_CWindows_CSecurity_CDataProtection_CIUserDataAvailabilityStateChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CDataProtection_CIUserDataAvailabilityStateChangedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetDeferral(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CDataProtection_CIUserDataAvailabilityStateChangedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_DataProtection_IUserDataBufferUnprotectResult[] = L"Windows.Security.DataProtection.IUserDataBufferUnprotectResult";
typedef struct __x_ABI_CWindows_CSecurity_CDataProtection_CIUserDataBufferUnprotectResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CDataProtection_CIUserDataBufferUnprotectResult * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CDataProtection_CIUserDataBufferUnprotectResult * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CDataProtection_CIUserDataBufferUnprotectResult * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CDataProtection_CIUserDataBufferUnprotectResult * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CDataProtection_CIUserDataBufferUnprotectResult * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CDataProtection_CIUserDataBufferUnprotectResult * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CSecurity_CDataProtection_CIUserDataBufferUnprotectResult * This,
                           __RPC__out __x_ABI_CWindows_CSecurity_CDataProtection_CUserDataBufferUnprotectStatus * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_UnprotectedBuffer )(
        __x_ABI_CWindows_CSecurity_CDataProtection_CIUserDataBufferUnprotectResult * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CDataProtection_CIUserDataBufferUnprotectResultVtbl;
interface __x_ABI_CWindows_CSecurity_CDataProtection_CIUserDataBufferUnprotectResult
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CDataProtection_CIUserDataBufferUnprotectResultVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Status(This,value) )
    ( (This)->lpVtbl->get_UnprotectedBuffer(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CDataProtection_CIUserDataBufferUnprotectResult;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_DataProtection_IUserDataProtectionManager[] = L"Windows.Security.DataProtection.IUserDataProtectionManager";
typedef struct __x_ABI_CWindows_CSecurity_CDataProtection_CIUserDataProtectionManagerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CDataProtection_CIUserDataProtectionManager * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CDataProtection_CIUserDataProtectionManager * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CDataProtection_CIUserDataProtectionManager * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CDataProtection_CIUserDataProtectionManager * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CDataProtection_CIUserDataProtectionManager * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CDataProtection_CIUserDataProtectionManager * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *ProtectStorageItemAsync )(
        __x_ABI_CWindows_CSecurity_CDataProtection_CIUserDataProtectionManager * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageItem * storageItem,
                  __x_ABI_CWindows_CSecurity_CDataProtection_CUserDataAvailability availability,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CDataProtection__CUserDataStorageItemProtectionStatus * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetStorageItemProtectionInfoAsync )(
        __x_ABI_CWindows_CSecurity_CDataProtection_CIUserDataProtectionManager * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageItem * storageItem,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CDataProtection__CUserDataStorageItemProtectionInfo * * result
        );
    HRESULT ( STDMETHODCALLTYPE *ProtectBufferAsync )(
        __x_ABI_CWindows_CSecurity_CDataProtection_CIUserDataProtectionManager * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * unprotectedBuffer,
                  __x_ABI_CWindows_CSecurity_CDataProtection_CUserDataAvailability availability,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer * * result
        );
    HRESULT ( STDMETHODCALLTYPE *UnprotectBufferAsync )(
        __x_ABI_CWindows_CSecurity_CDataProtection_CIUserDataProtectionManager * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * protectedBuffer,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CDataProtection__CUserDataBufferUnprotectResult * * result
        );
    HRESULT ( STDMETHODCALLTYPE *IsContinuedDataAvailabilityExpected )(
        __x_ABI_CWindows_CSecurity_CDataProtection_CIUserDataProtectionManager * This,
                  __x_ABI_CWindows_CSecurity_CDataProtection_CUserDataAvailability availability,
                           __RPC__out boolean * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_DataAvailabilityStateChanged )(
        __x_ABI_CWindows_CSecurity_CDataProtection_CIUserDataProtectionManager * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CSecurity__CDataProtection__CUserDataProtectionManager_Windows__CSecurity__CDataProtection__CUserDataAvailabilityStateChangedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_DataAvailabilityStateChanged )(
        __x_ABI_CWindows_CSecurity_CDataProtection_CIUserDataProtectionManager * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CDataProtection_CIUserDataProtectionManagerVtbl;
interface __x_ABI_CWindows_CSecurity_CDataProtection_CIUserDataProtectionManager
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CDataProtection_CIUserDataProtectionManagerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->ProtectStorageItemAsync(This,storageItem,availability,result) )
    ( (This)->lpVtbl->GetStorageItemProtectionInfoAsync(This,storageItem,result) )
    ( (This)->lpVtbl->ProtectBufferAsync(This,unprotectedBuffer,availability,result) )
    ( (This)->lpVtbl->UnprotectBufferAsync(This,protectedBuffer,result) )
    ( (This)->lpVtbl->IsContinuedDataAvailabilityExpected(This,availability,value) )
    ( (This)->lpVtbl->add_DataAvailabilityStateChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_DataAvailabilityStateChanged(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CDataProtection_CIUserDataProtectionManager;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_DataProtection_IUserDataProtectionManagerStatics[] = L"Windows.Security.DataProtection.IUserDataProtectionManagerStatics";
typedef struct __x_ABI_CWindows_CSecurity_CDataProtection_CIUserDataProtectionManagerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CDataProtection_CIUserDataProtectionManagerStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CDataProtection_CIUserDataProtectionManagerStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CDataProtection_CIUserDataProtectionManagerStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CDataProtection_CIUserDataProtectionManagerStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CDataProtection_CIUserDataProtectionManagerStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CDataProtection_CIUserDataProtectionManagerStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *TryGetDefault )(
        __x_ABI_CWindows_CSecurity_CDataProtection_CIUserDataProtectionManagerStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CDataProtection_CIUserDataProtectionManager * * result
        );
    HRESULT ( STDMETHODCALLTYPE *TryGetForUser )(
        __x_ABI_CWindows_CSecurity_CDataProtection_CIUserDataProtectionManagerStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CSystem_CIUser * user,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CDataProtection_CIUserDataProtectionManager * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CDataProtection_CIUserDataProtectionManagerStaticsVtbl;
interface __x_ABI_CWindows_CSecurity_CDataProtection_CIUserDataProtectionManagerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CDataProtection_CIUserDataProtectionManagerStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->TryGetDefault(This,result) )
    ( (This)->lpVtbl->TryGetForUser(This,user,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CDataProtection_CIUserDataProtectionManagerStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_DataProtection_IUserDataStorageItemProtectionInfo[] = L"Windows.Security.DataProtection.IUserDataStorageItemProtectionInfo";
typedef struct __x_ABI_CWindows_CSecurity_CDataProtection_CIUserDataStorageItemProtectionInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CDataProtection_CIUserDataStorageItemProtectionInfo * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CDataProtection_CIUserDataStorageItemProtectionInfo * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CDataProtection_CIUserDataStorageItemProtectionInfo * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CDataProtection_CIUserDataStorageItemProtectionInfo * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CDataProtection_CIUserDataStorageItemProtectionInfo * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CDataProtection_CIUserDataStorageItemProtectionInfo * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Availability )(
        __x_ABI_CWindows_CSecurity_CDataProtection_CIUserDataStorageItemProtectionInfo * This,
                           __RPC__out __x_ABI_CWindows_CSecurity_CDataProtection_CUserDataAvailability * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CDataProtection_CIUserDataStorageItemProtectionInfoVtbl;
interface __x_ABI_CWindows_CSecurity_CDataProtection_CIUserDataStorageItemProtectionInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CDataProtection_CIUserDataStorageItemProtectionInfoVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Availability(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CDataProtection_CIUserDataStorageItemProtectionInfo;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_DataProtection_UserDataAvailabilityStateChangedEventArgs[] = L"Windows.Security.DataProtection.UserDataAvailabilityStateChangedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_DataProtection_UserDataBufferUnprotectResult[] = L"Windows.Security.DataProtection.UserDataBufferUnprotectResult";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_DataProtection_UserDataProtectionManager[] = L"Windows.Security.DataProtection.UserDataProtectionManager";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_DataProtection_UserDataStorageItemProtectionInfo[] = L"Windows.Security.DataProtection.UserDataStorageItemProtectionInfo";
       
       
#pragma clang diagnostic pop

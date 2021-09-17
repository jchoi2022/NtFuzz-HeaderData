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
#include "Windows.Networking.h"
#include "Windows.Storage.h"
#include "Windows.Storage.Streams.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CSecurity_CEnterpriseData_CIBufferProtectUnprotectResult __x_ABI_CWindows_CSecurity_CEnterpriseData_CIBufferProtectUnprotectResult;
typedef interface __x_ABI_CWindows_CSecurity_CEnterpriseData_CIDataProtectionInfo __x_ABI_CWindows_CSecurity_CEnterpriseData_CIDataProtectionInfo;
typedef interface __x_ABI_CWindows_CSecurity_CEnterpriseData_CIDataProtectionManagerStatics __x_ABI_CWindows_CSecurity_CEnterpriseData_CIDataProtectionManagerStatics;
typedef interface __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionInfo __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionInfo;
typedef interface __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionInfo2 __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionInfo2;
typedef interface __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics;
typedef interface __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics2 __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics2;
typedef interface __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics3 __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics3;
typedef interface __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileRevocationManagerStatics __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileRevocationManagerStatics;
typedef interface __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileUnprotectOptions __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileUnprotectOptions;
typedef interface __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileUnprotectOptionsFactory __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileUnprotectOptionsFactory;
typedef interface __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedAccessResumedEventArgs __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedAccessResumedEventArgs;
typedef interface __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedAccessSuspendingEventArgs __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedAccessSuspendingEventArgs;
typedef interface __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContainerExportResult __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContainerExportResult;
typedef interface __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContainerImportResult __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContainerImportResult;
typedef interface __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContentRevokedEventArgs __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContentRevokedEventArgs;
typedef interface __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedFileCreateResult __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedFileCreateResult;
typedef interface __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyAuditInfo __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyAuditInfo;
typedef interface __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyAuditInfoFactory __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyAuditInfoFactory;
typedef interface __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManager __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManager;
typedef interface __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManager2 __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManager2;
typedef interface __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics;
typedef interface __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics2 __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics2;
typedef interface __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics3 __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics3;
typedef interface __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics4 __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics4;
typedef interface __x_ABI_CWindows_CSecurity_CEnterpriseData_CIThreadNetworkContext __x_ABI_CWindows_CSecurity_CEnterpriseData_CIThreadNetworkContext;
typedef interface __FIEventHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedAccessResumedEventArgs __FIEventHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedAccessResumedEventArgs;
EXTERN_C const IID IID___FIEventHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedAccessResumedEventArgs;
typedef struct __FIEventHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedAccessResumedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIEventHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedAccessResumedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIEventHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedAccessResumedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIEventHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedAccessResumedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIEventHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedAccessResumedEventArgs * This, __RPC__in_opt IInspectable *sender, __RPC__in_opt __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedAccessResumedEventArgs * *e);
    END_INTERFACE
} __FIEventHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedAccessResumedEventArgsVtbl;
interface __FIEventHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedAccessResumedEventArgs
{
    CONST_VTBL struct __FIEventHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedAccessResumedEventArgsVtbl *lpVtbl;
};
        ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl -> AddRef(This) )
        ( (This)->lpVtbl -> Release(This) )
        ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FIEventHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedAccessSuspendingEventArgs __FIEventHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedAccessSuspendingEventArgs;
EXTERN_C const IID IID___FIEventHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedAccessSuspendingEventArgs;
typedef struct __FIEventHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedAccessSuspendingEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIEventHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedAccessSuspendingEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIEventHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedAccessSuspendingEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIEventHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedAccessSuspendingEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIEventHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedAccessSuspendingEventArgs * This, __RPC__in_opt IInspectable *sender, __RPC__in_opt __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedAccessSuspendingEventArgs * *e);
    END_INTERFACE
} __FIEventHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedAccessSuspendingEventArgsVtbl;
interface __FIEventHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedAccessSuspendingEventArgs
{
    CONST_VTBL struct __FIEventHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedAccessSuspendingEventArgsVtbl *lpVtbl;
};
        ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl -> AddRef(This) )
        ( (This)->lpVtbl -> Release(This) )
        ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FIEventHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedContentRevokedEventArgs __FIEventHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedContentRevokedEventArgs;
EXTERN_C const IID IID___FIEventHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedContentRevokedEventArgs;
typedef struct __FIEventHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedContentRevokedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIEventHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedContentRevokedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIEventHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedContentRevokedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIEventHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedContentRevokedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIEventHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedContentRevokedEventArgs * This, __RPC__in_opt IInspectable *sender, __RPC__in_opt __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContentRevokedEventArgs * *e);
    END_INTERFACE
} __FIEventHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedContentRevokedEventArgsVtbl;
interface __FIEventHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedContentRevokedEventArgs
{
    CONST_VTBL struct __FIEventHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedContentRevokedEventArgsVtbl *lpVtbl;
};
        ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl -> AddRef(This) )
        ( (This)->lpVtbl -> Release(This) )
        ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CBufferProtectUnprotectResult __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CBufferProtectUnprotectResult;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CBufferProtectUnprotectResult;
typedef interface __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CBufferProtectUnprotectResult __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CBufferProtectUnprotectResult;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CBufferProtectUnprotectResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CBufferProtectUnprotectResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CBufferProtectUnprotectResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CBufferProtectUnprotectResult * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CBufferProtectUnprotectResult * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CBufferProtectUnprotectResult *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CBufferProtectUnprotectResultVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CBufferProtectUnprotectResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CBufferProtectUnprotectResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CBufferProtectUnprotectResult __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CBufferProtectUnprotectResult;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CBufferProtectUnprotectResult;
typedef struct __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CBufferProtectUnprotectResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CBufferProtectUnprotectResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CBufferProtectUnprotectResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CBufferProtectUnprotectResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CBufferProtectUnprotectResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CBufferProtectUnprotectResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CBufferProtectUnprotectResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CBufferProtectUnprotectResult * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CBufferProtectUnprotectResult *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CBufferProtectUnprotectResult * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CBufferProtectUnprotectResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CBufferProtectUnprotectResult * This, __RPC__out __x_ABI_CWindows_CSecurity_CEnterpriseData_CIBufferProtectUnprotectResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CBufferProtectUnprotectResultVtbl;
interface __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CBufferProtectUnprotectResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CBufferProtectUnprotectResultVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CDataProtectionInfo __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CDataProtectionInfo;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CDataProtectionInfo;
typedef interface __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CDataProtectionInfo __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CDataProtectionInfo;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CDataProtectionInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CDataProtectionInfo * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CDataProtectionInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CDataProtectionInfo * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CDataProtectionInfo * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CDataProtectionInfo *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CDataProtectionInfoVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CDataProtectionInfo
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CDataProtectionInfoVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CDataProtectionInfo __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CDataProtectionInfo;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CDataProtectionInfo;
typedef struct __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CDataProtectionInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CDataProtectionInfo * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CDataProtectionInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CDataProtectionInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CDataProtectionInfo * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CDataProtectionInfo * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CDataProtectionInfo * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CDataProtectionInfo * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CDataProtectionInfo *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CDataProtectionInfo * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CDataProtectionInfo **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CDataProtectionInfo * This, __RPC__out __x_ABI_CWindows_CSecurity_CEnterpriseData_CIDataProtectionInfo * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CDataProtectionInfoVtbl;
interface __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CDataProtectionInfo
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CDataProtectionInfoVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CFileProtectionInfo __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CFileProtectionInfo;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CFileProtectionInfo;
typedef interface __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionInfo __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionInfo;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CFileProtectionInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CFileProtectionInfo * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CFileProtectionInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CFileProtectionInfo * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CFileProtectionInfo * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionInfo *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CFileProtectionInfoVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CFileProtectionInfo
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CFileProtectionInfoVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionInfo __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionInfo;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionInfo;
typedef struct __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionInfo * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionInfo * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionInfo * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionInfo * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionInfo * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CFileProtectionInfo *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionInfo * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CFileProtectionInfo **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionInfo * This, __RPC__out __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionInfo * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionInfoVtbl;
interface __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionInfo
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionInfoVtbl *lpVtbl;
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
enum __x_ABI_CWindows_CSecurity_CEnterpriseData_CFileProtectionStatus;
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus;
typedef interface __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatusVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatusVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus;
typedef struct __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus * This, __RPC__out enum __x_ABI_CWindows_CSecurity_CEnterpriseData_CFileProtectionStatus *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatusVtbl;
interface __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatusVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerExportResult __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerExportResult;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerExportResult;
typedef interface __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerExportResult __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerExportResult;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerExportResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerExportResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerExportResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerExportResult * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerExportResult * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerExportResult *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerExportResultVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerExportResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerExportResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerExportResult __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerExportResult;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerExportResult;
typedef struct __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerExportResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerExportResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerExportResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerExportResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerExportResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerExportResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerExportResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerExportResult * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerExportResult *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerExportResult * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerExportResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerExportResult * This, __RPC__out __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContainerExportResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerExportResultVtbl;
interface __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerExportResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerExportResultVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerImportResult __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerImportResult;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerImportResult;
typedef interface __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerImportResult __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerImportResult;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerImportResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerImportResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerImportResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerImportResult * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerImportResult * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerImportResult *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerImportResultVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerImportResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerImportResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerImportResult __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerImportResult;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerImportResult;
typedef struct __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerImportResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerImportResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerImportResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerImportResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerImportResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerImportResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerImportResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerImportResult * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerImportResult *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerImportResult * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerImportResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerImportResult * This, __RPC__out __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContainerImportResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerImportResultVtbl;
interface __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerImportResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerImportResultVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedFileCreateResult __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedFileCreateResult;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedFileCreateResult;
typedef interface __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedFileCreateResult __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedFileCreateResult;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedFileCreateResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedFileCreateResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedFileCreateResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedFileCreateResult * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedFileCreateResult * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedFileCreateResult *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedFileCreateResultVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedFileCreateResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedFileCreateResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedFileCreateResult __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedFileCreateResult;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedFileCreateResult;
typedef struct __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedFileCreateResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedFileCreateResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedFileCreateResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedFileCreateResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedFileCreateResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedFileCreateResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedFileCreateResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedFileCreateResult * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedFileCreateResult *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedFileCreateResult * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedFileCreateResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedFileCreateResult * This, __RPC__out __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedFileCreateResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedFileCreateResultVtbl;
interface __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedFileCreateResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedFileCreateResultVtbl *lpVtbl;
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
enum __x_ABI_CWindows_CSecurity_CEnterpriseData_CProtectionPolicyEvaluationResult;
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectionPolicyEvaluationResult __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectionPolicyEvaluationResult;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectionPolicyEvaluationResult;
typedef interface __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectionPolicyEvaluationResult __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectionPolicyEvaluationResult;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectionPolicyEvaluationResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectionPolicyEvaluationResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectionPolicyEvaluationResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectionPolicyEvaluationResult * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectionPolicyEvaluationResult * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectionPolicyEvaluationResult *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectionPolicyEvaluationResultVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectionPolicyEvaluationResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectionPolicyEvaluationResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectionPolicyEvaluationResult __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectionPolicyEvaluationResult;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectionPolicyEvaluationResult;
typedef struct __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectionPolicyEvaluationResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectionPolicyEvaluationResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectionPolicyEvaluationResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectionPolicyEvaluationResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectionPolicyEvaluationResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectionPolicyEvaluationResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectionPolicyEvaluationResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectionPolicyEvaluationResult * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectionPolicyEvaluationResult *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectionPolicyEvaluationResult * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectionPolicyEvaluationResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectionPolicyEvaluationResult * This, __RPC__out enum __x_ABI_CWindows_CSecurity_CEnterpriseData_CProtectionPolicyEvaluationResult *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectionPolicyEvaluationResultVtbl;
interface __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectionPolicyEvaluationResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectionPolicyEvaluationResultVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CStorage_CIStorageItem __x_ABI_CWindows_CStorage_CIStorageItem;
typedef interface __FIIterator_1_Windows__CStorage__CIStorageItem __FIIterator_1_Windows__CStorage__CIStorageItem;
EXTERN_C const IID IID___FIIterator_1_Windows__CStorage__CIStorageItem;
typedef struct __FIIterator_1_Windows__CStorage__CIStorageItemVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CStorage__CIStorageItem * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CStorage__CIStorageItem * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CStorage__CIStorageItem * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CStorage__CIStorageItem * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CStorage__CIStorageItem * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CStorage__CIStorageItem * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CStorage__CIStorageItem * This, __RPC__out __x_ABI_CWindows_CStorage_CIStorageItem * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CStorage__CIStorageItem * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CStorage__CIStorageItem * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CStorage__CIStorageItem * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CStorage_CIStorageItem * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CStorage__CIStorageItemVtbl;
interface __FIIterator_1_Windows__CStorage__CIStorageItem
{
    CONST_VTBL struct __FIIterator_1_Windows__CStorage__CIStorageItemVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CStorage__CIStorageItem __FIIterable_1_Windows__CStorage__CIStorageItem;
EXTERN_C const IID IID___FIIterable_1_Windows__CStorage__CIStorageItem;
typedef struct __FIIterable_1_Windows__CStorage__CIStorageItemVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CStorage__CIStorageItem * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CStorage__CIStorageItem * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CStorage__CIStorageItem * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CStorage__CIStorageItem * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CStorage__CIStorageItem * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CStorage__CIStorageItem * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CStorage__CIStorageItem * This, __RPC__deref_out_opt __FIIterator_1_Windows__CStorage__CIStorageItem **first);
    END_INTERFACE
} __FIIterable_1_Windows__CStorage__CIStorageItemVtbl;
interface __FIIterable_1_Windows__CStorage__CIStorageItem
{
    CONST_VTBL struct __FIIterable_1_Windows__CStorage__CIStorageItemVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef struct __x_ABI_CWindows_CFoundation_CDateTime __x_ABI_CWindows_CFoundation_CDateTime;
typedef interface __x_ABI_CWindows_CFoundation_CIDeferral __x_ABI_CWindows_CFoundation_CIDeferral;
typedef interface __x_ABI_CWindows_CFoundation_CIClosable __x_ABI_CWindows_CFoundation_CIClosable;
typedef interface __x_ABI_CWindows_CNetworking_CIHostName __x_ABI_CWindows_CNetworking_CIHostName;
typedef enum __x_ABI_CWindows_CStorage_CCreationCollisionOption __x_ABI_CWindows_CStorage_CCreationCollisionOption;
typedef interface __x_ABI_CWindows_CStorage_CIStorageFile __x_ABI_CWindows_CStorage_CIStorageFile;
typedef interface __x_ABI_CWindows_CStorage_CIStorageFolder __x_ABI_CWindows_CStorage_CIStorageFolder;
typedef enum __x_ABI_CWindows_CStorage_CNameCollisionOption __x_ABI_CWindows_CStorage_CNameCollisionOption;
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIBuffer __x_ABI_CWindows_CStorage_CStreams_CIBuffer;
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIInputStream __x_ABI_CWindows_CStorage_CStreams_CIInputStream;
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIOutputStream __x_ABI_CWindows_CStorage_CStreams_CIOutputStream;
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream;
typedef enum __x_ABI_CWindows_CSecurity_CEnterpriseData_CDataProtectionStatus __x_ABI_CWindows_CSecurity_CEnterpriseData_CDataProtectionStatus;
typedef enum __x_ABI_CWindows_CSecurity_CEnterpriseData_CEnforcementLevel __x_ABI_CWindows_CSecurity_CEnterpriseData_CEnforcementLevel;
typedef enum __x_ABI_CWindows_CSecurity_CEnterpriseData_CFileProtectionStatus __x_ABI_CWindows_CSecurity_CEnterpriseData_CFileProtectionStatus;
typedef enum __x_ABI_CWindows_CSecurity_CEnterpriseData_CProtectedImportExportStatus __x_ABI_CWindows_CSecurity_CEnterpriseData_CProtectedImportExportStatus;
typedef enum __x_ABI_CWindows_CSecurity_CEnterpriseData_CProtectionPolicyAuditAction __x_ABI_CWindows_CSecurity_CEnterpriseData_CProtectionPolicyAuditAction;
typedef enum __x_ABI_CWindows_CSecurity_CEnterpriseData_CProtectionPolicyEvaluationResult __x_ABI_CWindows_CSecurity_CEnterpriseData_CProtectionPolicyEvaluationResult;
typedef enum __x_ABI_CWindows_CSecurity_CEnterpriseData_CProtectionPolicyRequestAccessBehavior __x_ABI_CWindows_CSecurity_CEnterpriseData_CProtectionPolicyRequestAccessBehavior;
enum __x_ABI_CWindows_CSecurity_CEnterpriseData_CDataProtectionStatus
{
    DataProtectionStatus_ProtectedToOtherIdentity = 0,
    DataProtectionStatus_Protected = 1,
    DataProtectionStatus_Revoked = 2,
    DataProtectionStatus_Unprotected = 3,
    DataProtectionStatus_LicenseExpired = 4,
    DataProtectionStatus_AccessSuspended = 5,
};
enum __x_ABI_CWindows_CSecurity_CEnterpriseData_CEnforcementLevel
{
    EnforcementLevel_NoProtection = 0,
    EnforcementLevel_Silent = 1,
    EnforcementLevel_Override = 2,
    EnforcementLevel_Block = 3,
};
enum __x_ABI_CWindows_CSecurity_CEnterpriseData_CFileProtectionStatus
{
    FileProtectionStatus_Undetermined
    DEPRECATEDENUMERATOR("Undetermined might be unavailable after Windows 10. Instead, use Unknown.")
     = 0,
    FileProtectionStatus_Unknown = 0,
    FileProtectionStatus_Unprotected = 1,
    FileProtectionStatus_Revoked = 2,
    FileProtectionStatus_Protected = 3,
    FileProtectionStatus_ProtectedByOtherUser
    DEPRECATEDENUMERATOR("ProtectedByOtherUser might be unavailable after Windows 10. Instead, use ProtectedToOtherIdentity.")
     = 4,
    FileProtectionStatus_ProtectedToOtherEnterprise
    DEPRECATEDENUMERATOR("ProtectedToOtherEnterprise might be unavailable after Windows 10. Instead, use ProtectedToOtherIdentity.")
     = 5,
    FileProtectionStatus_NotProtectable = 6,
    FileProtectionStatus_ProtectedToOtherIdentity = 7,
    FileProtectionStatus_LicenseExpired = 8,
    FileProtectionStatus_AccessSuspended = 9,
    FileProtectionStatus_FileInUse = 10,
};
enum __x_ABI_CWindows_CSecurity_CEnterpriseData_CProtectedImportExportStatus
{
    ProtectedImportExportStatus_Ok = 0,
    ProtectedImportExportStatus_Undetermined = 1,
    ProtectedImportExportStatus_Unprotected = 2,
    ProtectedImportExportStatus_Revoked = 3,
    ProtectedImportExportStatus_NotRoamable = 4,
    ProtectedImportExportStatus_ProtectedToOtherIdentity = 5,
    ProtectedImportExportStatus_LicenseExpired = 6,
    ProtectedImportExportStatus_AccessSuspended = 7,
};
enum __x_ABI_CWindows_CSecurity_CEnterpriseData_CProtectionPolicyAuditAction
{
    ProtectionPolicyAuditAction_Decrypt = 0,
    ProtectionPolicyAuditAction_CopyToLocation = 1,
    ProtectionPolicyAuditAction_SendToRecipient = 2,
    ProtectionPolicyAuditAction_Other = 3,
};
enum __x_ABI_CWindows_CSecurity_CEnterpriseData_CProtectionPolicyEvaluationResult
{
    ProtectionPolicyEvaluationResult_Allowed = 0,
    ProtectionPolicyEvaluationResult_Blocked = 1,
    ProtectionPolicyEvaluationResult_ConsentRequired = 2,
};
enum __x_ABI_CWindows_CSecurity_CEnterpriseData_CProtectionPolicyRequestAccessBehavior
{
    ProtectionPolicyRequestAccessBehavior_Decrypt = 0,
    ProtectionPolicyRequestAccessBehavior_TreatOverridePolicyAsBlock = 1,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_EnterpriseData_IBufferProtectUnprotectResult[] = L"Windows.Security.EnterpriseData.IBufferProtectUnprotectResult";
typedef struct __x_ABI_CWindows_CSecurity_CEnterpriseData_CIBufferProtectUnprotectResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIBufferProtectUnprotectResult * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIBufferProtectUnprotectResult * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIBufferProtectUnprotectResult * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIBufferProtectUnprotectResult * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIBufferProtectUnprotectResult * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIBufferProtectUnprotectResult * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Buffer )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIBufferProtectUnprotectResult * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ProtectionInfo )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIBufferProtectUnprotectResult * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CEnterpriseData_CIDataProtectionInfo * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CEnterpriseData_CIBufferProtectUnprotectResultVtbl;
interface __x_ABI_CWindows_CSecurity_CEnterpriseData_CIBufferProtectUnprotectResult
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CEnterpriseData_CIBufferProtectUnprotectResultVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Buffer(This,value) )
    ( (This)->lpVtbl->get_ProtectionInfo(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CEnterpriseData_CIBufferProtectUnprotectResult;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_EnterpriseData_IDataProtectionInfo[] = L"Windows.Security.EnterpriseData.IDataProtectionInfo";
typedef struct __x_ABI_CWindows_CSecurity_CEnterpriseData_CIDataProtectionInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIDataProtectionInfo * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIDataProtectionInfo * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIDataProtectionInfo * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIDataProtectionInfo * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIDataProtectionInfo * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIDataProtectionInfo * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIDataProtectionInfo * This,
                           __RPC__out __x_ABI_CWindows_CSecurity_CEnterpriseData_CDataProtectionStatus * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Identity )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIDataProtectionInfo * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CEnterpriseData_CIDataProtectionInfoVtbl;
interface __x_ABI_CWindows_CSecurity_CEnterpriseData_CIDataProtectionInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CEnterpriseData_CIDataProtectionInfoVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Status(This,value) )
    ( (This)->lpVtbl->get_Identity(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CEnterpriseData_CIDataProtectionInfo;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_EnterpriseData_IDataProtectionManagerStatics[] = L"Windows.Security.EnterpriseData.IDataProtectionManagerStatics";
typedef struct __x_ABI_CWindows_CSecurity_CEnterpriseData_CIDataProtectionManagerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIDataProtectionManagerStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIDataProtectionManagerStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIDataProtectionManagerStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIDataProtectionManagerStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIDataProtectionManagerStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIDataProtectionManagerStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *ProtectAsync )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIDataProtectionManagerStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * data,
                  __RPC__in HSTRING identity,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CBufferProtectUnprotectResult * * result
        );
    HRESULT ( STDMETHODCALLTYPE *UnprotectAsync )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIDataProtectionManagerStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * data,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CBufferProtectUnprotectResult * * result
        );
    HRESULT ( STDMETHODCALLTYPE *ProtectStreamAsync )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIDataProtectionManagerStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIInputStream * unprotectedStream,
                  __RPC__in HSTRING identity,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIOutputStream * protectedStream,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CDataProtectionInfo * * result
        );
    HRESULT ( STDMETHODCALLTYPE *UnprotectStreamAsync )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIDataProtectionManagerStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIInputStream * protectedStream,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIOutputStream * unprotectedStream,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CDataProtectionInfo * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetProtectionInfoAsync )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIDataProtectionManagerStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * protectedData,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CDataProtectionInfo * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetStreamProtectionInfoAsync )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIDataProtectionManagerStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIInputStream * protectedStream,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CDataProtectionInfo * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CEnterpriseData_CIDataProtectionManagerStaticsVtbl;
interface __x_ABI_CWindows_CSecurity_CEnterpriseData_CIDataProtectionManagerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CEnterpriseData_CIDataProtectionManagerStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->ProtectAsync(This,data,identity,result) )
    ( (This)->lpVtbl->UnprotectAsync(This,data,result) )
    ( (This)->lpVtbl->ProtectStreamAsync(This,unprotectedStream,identity,protectedStream,result) )
    ( (This)->lpVtbl->UnprotectStreamAsync(This,protectedStream,unprotectedStream,result) )
    ( (This)->lpVtbl->GetProtectionInfoAsync(This,protectedData,result) )
    ( (This)->lpVtbl->GetStreamProtectionInfoAsync(This,protectedStream,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CEnterpriseData_CIDataProtectionManagerStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_EnterpriseData_IFileProtectionInfo[] = L"Windows.Security.EnterpriseData.IFileProtectionInfo";
typedef struct __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionInfo * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionInfo * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionInfo * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionInfo * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionInfo * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionInfo * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionInfo * This,
                           __RPC__out __x_ABI_CWindows_CSecurity_CEnterpriseData_CFileProtectionStatus * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsRoamable )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionInfo * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Identity )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionInfo * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionInfoVtbl;
interface __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionInfoVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Status(This,value) )
    ( (This)->lpVtbl->get_IsRoamable(This,value) )
    ( (This)->lpVtbl->get_Identity(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionInfo;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_EnterpriseData_IFileProtectionInfo2[] = L"Windows.Security.EnterpriseData.IFileProtectionInfo2";
typedef struct __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionInfo2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionInfo2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionInfo2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionInfo2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionInfo2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionInfo2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionInfo2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsProtectWhileOpenSupported )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionInfo2 * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionInfo2Vtbl;
interface __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionInfo2
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionInfo2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsProtectWhileOpenSupported(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionInfo2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_EnterpriseData_IFileProtectionManagerStatics[] = L"Windows.Security.EnterpriseData.IFileProtectionManagerStatics";
typedef struct __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *ProtectAsync )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageItem * target,
                  __RPC__in HSTRING identity,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionInfo * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CopyProtectionAsync )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageItem * source,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageItem * target,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetProtectionInfoAsync )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageItem * source,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionInfo * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *SaveFileAsContainerAsync )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * protectedFile,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerExportResult * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *LoadFileFromContainerAsync )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * containerFile,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerImportResult * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *LoadFileFromContainerWithTargetAsync )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * containerFile,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageItem * target,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerImportResult * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateProtectedAndOpenAsync )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFolder * parentFolder,
                  __RPC__in HSTRING desiredName,
                  __RPC__in HSTRING identity,
                  __x_ABI_CWindows_CStorage_CCreationCollisionOption collisionOption,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedFileCreateResult * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStaticsVtbl;
interface __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->ProtectAsync(This,target,identity,result) )
    ( (This)->lpVtbl->CopyProtectionAsync(This,source,target,result) )
    ( (This)->lpVtbl->GetProtectionInfoAsync(This,source,result) )
    ( (This)->lpVtbl->SaveFileAsContainerAsync(This,protectedFile,result) )
    ( (This)->lpVtbl->LoadFileFromContainerAsync(This,containerFile,result) )
    ( (This)->lpVtbl->LoadFileFromContainerWithTargetAsync(This,containerFile,target,result) )
    ( (This)->lpVtbl->CreateProtectedAndOpenAsync(This,parentFolder,desiredName,identity,collisionOption,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_EnterpriseData_IFileProtectionManagerStatics2[] = L"Windows.Security.EnterpriseData.IFileProtectionManagerStatics2";
typedef struct __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *IsContainerAsync )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * file,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * result
        );
                                      HRESULT ( STDMETHODCALLTYPE *LoadFileFromContainerWithTargetAndNameCollisionOptionAsync )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * containerFile,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageItem * target,
                  __x_ABI_CWindows_CStorage_CNameCollisionOption collisionOption,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerImportResult * * result
        );
                                      HRESULT ( STDMETHODCALLTYPE *SaveFileAsContainerWithSharingAsync )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * protectedFile,
                  __RPC__in_opt __FIIterable_1_HSTRING * sharedWithIdentities,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerExportResult * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics2Vtbl;
interface __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->IsContainerAsync(This,file,result) )
    ( (This)->lpVtbl->LoadFileFromContainerWithTargetAndNameCollisionOptionAsync(This,containerFile,target,collisionOption,result) )
    ( (This)->lpVtbl->SaveFileAsContainerWithSharingAsync(This,protectedFile,sharedWithIdentities,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_EnterpriseData_IFileProtectionManagerStatics3[] = L"Windows.Security.EnterpriseData.IFileProtectionManagerStatics3";
typedef struct __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *UnprotectAsync )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics3 * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageItem * target,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionInfo * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *UnprotectWithOptionsAsync )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics3 * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageItem * target,
                  __RPC__in_opt __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileUnprotectOptions * options,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionInfo * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics3Vtbl;
interface __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics3
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->UnprotectAsync(This,target,result) )
    ( (This)->lpVtbl->UnprotectWithOptionsAsync(This,target,options,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_EnterpriseData_IFileRevocationManagerStatics[] = L"Windows.Security.EnterpriseData.IFileRevocationManagerStatics";
typedef struct
DEPRECATED("FileRevocationManager might be unavailable after Windows 10. Instead, use FileProtectionManager.")
__x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileRevocationManagerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileRevocationManagerStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileRevocationManagerStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileRevocationManagerStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileRevocationManagerStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileRevocationManagerStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileRevocationManagerStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("FileRevocationManager might be unavailable after Windows 10. Instead, use FileProtectionManager.")
                      HRESULT ( STDMETHODCALLTYPE *ProtectAsync )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileRevocationManagerStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageItem * storageItem,
                  __RPC__in HSTRING enterpriseIdentity,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus * * result
        );
    DEPRECATED("FileRevocationManager might be unavailable after Windows 10. Instead, use FileProtectionManager.")
                      HRESULT ( STDMETHODCALLTYPE *CopyProtectionAsync )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileRevocationManagerStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageItem * sourceStorageItem,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageItem * targetStorageItem,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * result
        );
    DEPRECATED("FileRevocationManager might be unavailable after Windows 10. Instead, use FileProtectionManager.")
                      HRESULT ( STDMETHODCALLTYPE *Revoke )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileRevocationManagerStatics * This,
                  __RPC__in HSTRING enterpriseIdentity
        );
    DEPRECATED("FileRevocationManager might be unavailable after Windows 10. Instead, use FileProtectionManager.")
                      HRESULT ( STDMETHODCALLTYPE *GetStatusAsync )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileRevocationManagerStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageItem * storageItem,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileRevocationManagerStaticsVtbl;
interface __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileRevocationManagerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileRevocationManagerStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("FileRevocationManager might be unavailable after Windows 10. Instead, use FileProtectionManager.")
    ( (This)->lpVtbl->ProtectAsync(This,storageItem,enterpriseIdentity,result) )
DEPRECATED("FileRevocationManager might be unavailable after Windows 10. Instead, use FileProtectionManager.")
    ( (This)->lpVtbl->CopyProtectionAsync(This,sourceStorageItem,targetStorageItem,result) )
DEPRECATED("FileRevocationManager might be unavailable after Windows 10. Instead, use FileProtectionManager.")
    ( (This)->lpVtbl->Revoke(This,enterpriseIdentity) )
DEPRECATED("FileRevocationManager might be unavailable after Windows 10. Instead, use FileProtectionManager.")
    ( (This)->lpVtbl->GetStatusAsync(This,storageItem,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileRevocationManagerStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_EnterpriseData_IFileUnprotectOptions[] = L"Windows.Security.EnterpriseData.IFileUnprotectOptions";
typedef struct __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileUnprotectOptionsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileUnprotectOptions * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileUnprotectOptions * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileUnprotectOptions * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileUnprotectOptions * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileUnprotectOptions * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileUnprotectOptions * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_Audit )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileUnprotectOptions * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Audit )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileUnprotectOptions * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileUnprotectOptionsVtbl;
interface __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileUnprotectOptions
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileUnprotectOptionsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_Audit(This,value) )
    ( (This)->lpVtbl->get_Audit(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileUnprotectOptions;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_EnterpriseData_IFileUnprotectOptionsFactory[] = L"Windows.Security.EnterpriseData.IFileUnprotectOptionsFactory";
typedef struct __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileUnprotectOptionsFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileUnprotectOptionsFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileUnprotectOptionsFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileUnprotectOptionsFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileUnprotectOptionsFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileUnprotectOptionsFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileUnprotectOptionsFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileUnprotectOptionsFactory * This,
                  boolean audit,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileUnprotectOptions * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileUnprotectOptionsFactoryVtbl;
interface __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileUnprotectOptionsFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileUnprotectOptionsFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,audit,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileUnprotectOptionsFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_EnterpriseData_IProtectedAccessResumedEventArgs[] = L"Windows.Security.EnterpriseData.IProtectedAccessResumedEventArgs";
typedef struct __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedAccessResumedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedAccessResumedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedAccessResumedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedAccessResumedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedAccessResumedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedAccessResumedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedAccessResumedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Identities )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedAccessResumedEventArgs * This,
                           __RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedAccessResumedEventArgsVtbl;
interface __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedAccessResumedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedAccessResumedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Identities(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedAccessResumedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_EnterpriseData_IProtectedAccessSuspendingEventArgs[] = L"Windows.Security.EnterpriseData.IProtectedAccessSuspendingEventArgs";
typedef struct __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedAccessSuspendingEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedAccessSuspendingEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedAccessSuspendingEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedAccessSuspendingEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedAccessSuspendingEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedAccessSuspendingEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedAccessSuspendingEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Identities )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedAccessSuspendingEventArgs * This,
                           __RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Deadline )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedAccessSuspendingEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedAccessSuspendingEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIDeferral * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedAccessSuspendingEventArgsVtbl;
interface __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedAccessSuspendingEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedAccessSuspendingEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Identities(This,value) )
    ( (This)->lpVtbl->get_Deadline(This,value) )
    ( (This)->lpVtbl->GetDeferral(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedAccessSuspendingEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_EnterpriseData_IProtectedContainerExportResult[] = L"Windows.Security.EnterpriseData.IProtectedContainerExportResult";
typedef struct __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContainerExportResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContainerExportResult * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContainerExportResult * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContainerExportResult * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContainerExportResult * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContainerExportResult * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContainerExportResult * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContainerExportResult * This,
                           __RPC__out __x_ABI_CWindows_CSecurity_CEnterpriseData_CProtectedImportExportStatus * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_File )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContainerExportResult * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CIStorageFile * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContainerExportResultVtbl;
interface __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContainerExportResult
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContainerExportResultVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Status(This,value) )
    ( (This)->lpVtbl->get_File(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContainerExportResult;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_EnterpriseData_IProtectedContainerImportResult[] = L"Windows.Security.EnterpriseData.IProtectedContainerImportResult";
typedef struct __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContainerImportResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContainerImportResult * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContainerImportResult * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContainerImportResult * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContainerImportResult * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContainerImportResult * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContainerImportResult * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContainerImportResult * This,
                           __RPC__out __x_ABI_CWindows_CSecurity_CEnterpriseData_CProtectedImportExportStatus * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_File )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContainerImportResult * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CIStorageFile * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContainerImportResultVtbl;
interface __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContainerImportResult
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContainerImportResultVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Status(This,value) )
    ( (This)->lpVtbl->get_File(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContainerImportResult;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_EnterpriseData_IProtectedContentRevokedEventArgs[] = L"Windows.Security.EnterpriseData.IProtectedContentRevokedEventArgs";
typedef struct __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContentRevokedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContentRevokedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContentRevokedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContentRevokedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContentRevokedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContentRevokedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContentRevokedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Identities )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContentRevokedEventArgs * This,
                           __RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContentRevokedEventArgsVtbl;
interface __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContentRevokedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContentRevokedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Identities(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContentRevokedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_EnterpriseData_IProtectedFileCreateResult[] = L"Windows.Security.EnterpriseData.IProtectedFileCreateResult";
typedef struct __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedFileCreateResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedFileCreateResult * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedFileCreateResult * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedFileCreateResult * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedFileCreateResult * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedFileCreateResult * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedFileCreateResult * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_File )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedFileCreateResult * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CIStorageFile * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Stream )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedFileCreateResult * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ProtectionInfo )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedFileCreateResult * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionInfo * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedFileCreateResultVtbl;
interface __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedFileCreateResult
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedFileCreateResultVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_File(This,value) )
    ( (This)->lpVtbl->get_Stream(This,value) )
    ( (This)->lpVtbl->get_ProtectionInfo(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedFileCreateResult;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_EnterpriseData_IProtectionPolicyAuditInfo[] = L"Windows.Security.EnterpriseData.IProtectionPolicyAuditInfo";
typedef struct __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyAuditInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyAuditInfo * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyAuditInfo * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyAuditInfo * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyAuditInfo * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyAuditInfo * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyAuditInfo * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_Action )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyAuditInfo * This,
                  __x_ABI_CWindows_CSecurity_CEnterpriseData_CProtectionPolicyAuditAction value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Action )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyAuditInfo * This,
                           __RPC__out __x_ABI_CWindows_CSecurity_CEnterpriseData_CProtectionPolicyAuditAction * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DataDescription )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyAuditInfo * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DataDescription )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyAuditInfo * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_SourceDescription )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyAuditInfo * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SourceDescription )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyAuditInfo * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_TargetDescription )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyAuditInfo * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TargetDescription )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyAuditInfo * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyAuditInfoVtbl;
interface __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyAuditInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyAuditInfoVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_Action(This,value) )
    ( (This)->lpVtbl->get_Action(This,value) )
    ( (This)->lpVtbl->put_DataDescription(This,value) )
    ( (This)->lpVtbl->get_DataDescription(This,value) )
    ( (This)->lpVtbl->put_SourceDescription(This,value) )
    ( (This)->lpVtbl->get_SourceDescription(This,value) )
    ( (This)->lpVtbl->put_TargetDescription(This,value) )
    ( (This)->lpVtbl->get_TargetDescription(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyAuditInfo;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_EnterpriseData_IProtectionPolicyAuditInfoFactory[] = L"Windows.Security.EnterpriseData.IProtectionPolicyAuditInfoFactory";
typedef struct __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyAuditInfoFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyAuditInfoFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyAuditInfoFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyAuditInfoFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyAuditInfoFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyAuditInfoFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyAuditInfoFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyAuditInfoFactory * This,
                  __x_ABI_CWindows_CSecurity_CEnterpriseData_CProtectionPolicyAuditAction action,
                  __RPC__in HSTRING dataDescription,
                  __RPC__in HSTRING sourceDescription,
                  __RPC__in HSTRING targetDescription,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyAuditInfo * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateWithActionAndDataDescription )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyAuditInfoFactory * This,
                  __x_ABI_CWindows_CSecurity_CEnterpriseData_CProtectionPolicyAuditAction action,
                  __RPC__in HSTRING dataDescription,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyAuditInfo * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyAuditInfoFactoryVtbl;
interface __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyAuditInfoFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyAuditInfoFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,action,dataDescription,sourceDescription,targetDescription,result) )
    ( (This)->lpVtbl->CreateWithActionAndDataDescription(This,action,dataDescription,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyAuditInfoFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_EnterpriseData_IProtectionPolicyManager[] = L"Windows.Security.EnterpriseData.IProtectionPolicyManager";
typedef struct __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManager * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManager * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManager * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManager * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManager * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManager * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_Identity )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManager * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Identity )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManager * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerVtbl;
interface __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManager
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_Identity(This,value) )
    ( (This)->lpVtbl->get_Identity(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManager;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_EnterpriseData_IProtectionPolicyManager2[] = L"Windows.Security.EnterpriseData.IProtectionPolicyManager2";
typedef struct __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManager2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManager2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManager2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManager2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManager2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManager2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManager2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_ShowEnterpriseIndicator )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManager2 * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ShowEnterpriseIndicator )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManager2 * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManager2Vtbl;
interface __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManager2
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManager2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_ShowEnterpriseIndicator(This,value) )
    ( (This)->lpVtbl->get_ShowEnterpriseIndicator(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManager2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_EnterpriseData_IProtectionPolicyManagerStatics[] = L"Windows.Security.EnterpriseData.IProtectionPolicyManagerStatics";
typedef struct __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *IsIdentityManaged )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics * This,
                  __RPC__in HSTRING identity,
                           __RPC__out boolean * result
        );
    HRESULT ( STDMETHODCALLTYPE *TryApplyProcessUIPolicy )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics * This,
                  __RPC__in HSTRING identity,
                           __RPC__out boolean * result
        );
    HRESULT ( STDMETHODCALLTYPE *ClearProcessUIPolicy )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics * This
        );
    HRESULT ( STDMETHODCALLTYPE *CreateCurrentThreadNetworkContext )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics * This,
                  __RPC__in HSTRING identity,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CEnterpriseData_CIThreadNetworkContext * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetPrimaryManagedIdentityForNetworkEndpointAsync )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CNetworking_CIHostName * endpointHost,
                           __RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * result
        );
    HRESULT ( STDMETHODCALLTYPE *RevokeContent )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics * This,
                  __RPC__in HSTRING identity
        );
    HRESULT ( STDMETHODCALLTYPE *GetForCurrentView )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManager * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *add_ProtectedAccessSuspending )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics * This,
                  __RPC__in_opt __FIEventHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedAccessSuspendingEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_ProtectedAccessSuspending )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_ProtectedAccessResumed )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics * This,
                  __RPC__in_opt __FIEventHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedAccessResumedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_ProtectedAccessResumed )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_ProtectedContentRevoked )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics * This,
                  __RPC__in_opt __FIEventHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedContentRevokedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_ProtectedContentRevoked )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics * This,
                  EventRegistrationToken token
        );
    HRESULT ( STDMETHODCALLTYPE *CheckAccess )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics * This,
                  __RPC__in HSTRING sourceIdentity,
                  __RPC__in HSTRING targetIdentity,
                           __RPC__out __x_ABI_CWindows_CSecurity_CEnterpriseData_CProtectionPolicyEvaluationResult * result
        );
                    HRESULT ( STDMETHODCALLTYPE *RequestAccessAsync )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics * This,
                  __RPC__in HSTRING sourceIdentity,
                  __RPC__in HSTRING targetIdentity,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectionPolicyEvaluationResult * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStaticsVtbl;
interface __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->IsIdentityManaged(This,identity,result) )
    ( (This)->lpVtbl->TryApplyProcessUIPolicy(This,identity,result) )
    ( (This)->lpVtbl->ClearProcessUIPolicy(This) )
    ( (This)->lpVtbl->CreateCurrentThreadNetworkContext(This,identity,result) )
    ( (This)->lpVtbl->GetPrimaryManagedIdentityForNetworkEndpointAsync(This,endpointHost,result) )
    ( (This)->lpVtbl->RevokeContent(This,identity) )
    ( (This)->lpVtbl->GetForCurrentView(This,result) )
    ( (This)->lpVtbl->add_ProtectedAccessSuspending(This,handler,token) )
    ( (This)->lpVtbl->remove_ProtectedAccessSuspending(This,token) )
    ( (This)->lpVtbl->add_ProtectedAccessResumed(This,handler,token) )
    ( (This)->lpVtbl->remove_ProtectedAccessResumed(This,token) )
    ( (This)->lpVtbl->add_ProtectedContentRevoked(This,handler,token) )
    ( (This)->lpVtbl->remove_ProtectedContentRevoked(This,token) )
    ( (This)->lpVtbl->CheckAccess(This,sourceIdentity,targetIdentity,result) )
    ( (This)->lpVtbl->RequestAccessAsync(This,sourceIdentity,targetIdentity,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_EnterpriseData_IProtectionPolicyManagerStatics2[] = L"Windows.Security.EnterpriseData.IProtectionPolicyManagerStatics2";
typedef struct __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *HasContentBeenRevokedSince )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics2 * This,
                  __RPC__in HSTRING identity,
                  __x_ABI_CWindows_CFoundation_CDateTime since,
                           __RPC__out boolean * result
        );
    HRESULT ( STDMETHODCALLTYPE *CheckAccessForApp )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics2 * This,
                  __RPC__in HSTRING sourceIdentity,
                  __RPC__in HSTRING appPackageFamilyName,
                           __RPC__out __x_ABI_CWindows_CSecurity_CEnterpriseData_CProtectionPolicyEvaluationResult * result
        );
                    HRESULT ( STDMETHODCALLTYPE *RequestAccessForAppAsync )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics2 * This,
                  __RPC__in HSTRING sourceIdentity,
                  __RPC__in HSTRING appPackageFamilyName,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectionPolicyEvaluationResult * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetEnforcementLevel )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics2 * This,
                  __RPC__in HSTRING identity,
                           __RPC__out __x_ABI_CWindows_CSecurity_CEnterpriseData_CEnforcementLevel * value
        );
    HRESULT ( STDMETHODCALLTYPE *IsUserDecryptionAllowed )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics2 * This,
                  __RPC__in HSTRING identity,
                           __RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *IsProtectionUnderLockRequired )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics2 * This,
                  __RPC__in HSTRING identity,
                           __RPC__out boolean * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_PolicyChanged )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics2 * This,
                  __RPC__in_opt __FIEventHandler_1_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_PolicyChanged )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics2 * This,
                  EventRegistrationToken token
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsProtectionEnabled )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics2 * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics2Vtbl;
interface __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->HasContentBeenRevokedSince(This,identity,since,result) )
    ( (This)->lpVtbl->CheckAccessForApp(This,sourceIdentity,appPackageFamilyName,result) )
    ( (This)->lpVtbl->RequestAccessForAppAsync(This,sourceIdentity,appPackageFamilyName,result) )
    ( (This)->lpVtbl->GetEnforcementLevel(This,identity,value) )
    ( (This)->lpVtbl->IsUserDecryptionAllowed(This,identity,value) )
    ( (This)->lpVtbl->IsProtectionUnderLockRequired(This,identity,value) )
    ( (This)->lpVtbl->add_PolicyChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_PolicyChanged(This,token) )
    ( (This)->lpVtbl->get_IsProtectionEnabled(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_EnterpriseData_IProtectionPolicyManagerStatics3[] = L"Windows.Security.EnterpriseData.IProtectionPolicyManagerStatics3";
typedef struct __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *RequestAccessWithAuditingInfoAsync )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics3 * This,
                  __RPC__in HSTRING sourceIdentity,
                  __RPC__in HSTRING targetIdentity,
                  __RPC__in_opt __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyAuditInfo * auditInfo,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectionPolicyEvaluationResult * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *RequestAccessWithMessageAsync )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics3 * This,
                  __RPC__in HSTRING sourceIdentity,
                  __RPC__in HSTRING targetIdentity,
                  __RPC__in_opt __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyAuditInfo * auditInfo,
                  __RPC__in HSTRING messageFromApp,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectionPolicyEvaluationResult * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *RequestAccessForAppWithAuditingInfoAsync )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics3 * This,
                  __RPC__in HSTRING sourceIdentity,
                  __RPC__in HSTRING appPackageFamilyName,
                  __RPC__in_opt __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyAuditInfo * auditInfo,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectionPolicyEvaluationResult * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *RequestAccessForAppWithMessageAsync )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics3 * This,
                  __RPC__in HSTRING sourceIdentity,
                  __RPC__in HSTRING appPackageFamilyName,
                  __RPC__in_opt __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyAuditInfo * auditInfo,
                  __RPC__in HSTRING messageFromApp,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectionPolicyEvaluationResult * * result
        );
    HRESULT ( STDMETHODCALLTYPE *LogAuditEvent )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics3 * This,
                  __RPC__in HSTRING sourceIdentity,
                  __RPC__in HSTRING targetIdentity,
                  __RPC__in_opt __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyAuditInfo * auditInfo
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics3Vtbl;
interface __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics3
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->RequestAccessWithAuditingInfoAsync(This,sourceIdentity,targetIdentity,auditInfo,result) )
    ( (This)->lpVtbl->RequestAccessWithMessageAsync(This,sourceIdentity,targetIdentity,auditInfo,messageFromApp,result) )
    ( (This)->lpVtbl->RequestAccessForAppWithAuditingInfoAsync(This,sourceIdentity,appPackageFamilyName,auditInfo,result) )
    ( (This)->lpVtbl->RequestAccessForAppWithMessageAsync(This,sourceIdentity,appPackageFamilyName,auditInfo,messageFromApp,result) )
    ( (This)->lpVtbl->LogAuditEvent(This,sourceIdentity,targetIdentity,auditInfo) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_EnterpriseData_IProtectionPolicyManagerStatics4[] = L"Windows.Security.EnterpriseData.IProtectionPolicyManagerStatics4";
typedef struct __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics4Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics4 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics4 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics4 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics4 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics4 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics4 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *IsRoamableProtectionEnabled )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics4 * This,
                  __RPC__in HSTRING identity,
                           __RPC__out boolean * value
        );
                    HRESULT ( STDMETHODCALLTYPE *RequestAccessWithBehaviorAsync )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics4 * This,
                  __RPC__in HSTRING sourceIdentity,
                  __RPC__in HSTRING targetIdentity,
                  __RPC__in_opt __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyAuditInfo * auditInfo,
                  __RPC__in HSTRING messageFromApp,
                  __x_ABI_CWindows_CSecurity_CEnterpriseData_CProtectionPolicyRequestAccessBehavior behavior,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectionPolicyEvaluationResult * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *RequestAccessForAppWithBehaviorAsync )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics4 * This,
                  __RPC__in HSTRING sourceIdentity,
                  __RPC__in HSTRING appPackageFamilyName,
                  __RPC__in_opt __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyAuditInfo * auditInfo,
                  __RPC__in HSTRING messageFromApp,
                  __x_ABI_CWindows_CSecurity_CEnterpriseData_CProtectionPolicyRequestAccessBehavior behavior,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectionPolicyEvaluationResult * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *RequestAccessToFilesForAppAsync )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics4 * This,
                  __RPC__in_opt __FIIterable_1_Windows__CStorage__CIStorageItem * sourceItemList,
                  __RPC__in HSTRING appPackageFamilyName,
                  __RPC__in_opt __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyAuditInfo * auditInfo,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectionPolicyEvaluationResult * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *RequestAccessToFilesForAppWithMessageAndBehaviorAsync )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics4 * This,
                  __RPC__in_opt __FIIterable_1_Windows__CStorage__CIStorageItem * sourceItemList,
                  __RPC__in HSTRING appPackageFamilyName,
                  __RPC__in_opt __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyAuditInfo * auditInfo,
                  __RPC__in HSTRING messageFromApp,
                  __x_ABI_CWindows_CSecurity_CEnterpriseData_CProtectionPolicyRequestAccessBehavior behavior,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectionPolicyEvaluationResult * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *RequestAccessToFilesForProcessAsync )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics4 * This,
                  __RPC__in_opt __FIIterable_1_Windows__CStorage__CIStorageItem * sourceItemList,
                  UINT32 processId,
                  __RPC__in_opt __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyAuditInfo * auditInfo,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectionPolicyEvaluationResult * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *RequestAccessToFilesForProcessWithMessageAndBehaviorAsync )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics4 * This,
                  __RPC__in_opt __FIIterable_1_Windows__CStorage__CIStorageItem * sourceItemList,
                  UINT32 processId,
                  __RPC__in_opt __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyAuditInfo * auditInfo,
                  __RPC__in HSTRING messageFromApp,
                  __x_ABI_CWindows_CSecurity_CEnterpriseData_CProtectionPolicyRequestAccessBehavior behavior,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectionPolicyEvaluationResult * * result
        );
    HRESULT ( STDMETHODCALLTYPE *IsFileProtectionRequiredAsync )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics4 * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageItem * target,
                  __RPC__in HSTRING identity,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * result
        );
    HRESULT ( STDMETHODCALLTYPE *IsFileProtectionRequiredForNewFileAsync )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics4 * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFolder * parentFolder,
                  __RPC__in HSTRING identity,
                  __RPC__in HSTRING desiredName,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * result
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PrimaryManagedIdentity )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics4 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetPrimaryManagedIdentityForIdentity )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics4 * This,
                  __RPC__in HSTRING identity,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics4Vtbl;
interface __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics4
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics4Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->IsRoamableProtectionEnabled(This,identity,value) )
    ( (This)->lpVtbl->RequestAccessWithBehaviorAsync(This,sourceIdentity,targetIdentity,auditInfo,messageFromApp,behavior,result) )
    ( (This)->lpVtbl->RequestAccessForAppWithBehaviorAsync(This,sourceIdentity,appPackageFamilyName,auditInfo,messageFromApp,behavior,result) )
    ( (This)->lpVtbl->RequestAccessToFilesForAppAsync(This,sourceItemList,appPackageFamilyName,auditInfo,result) )
    ( (This)->lpVtbl->RequestAccessToFilesForAppWithMessageAndBehaviorAsync(This,sourceItemList,appPackageFamilyName,auditInfo,messageFromApp,behavior,result) )
    ( (This)->lpVtbl->RequestAccessToFilesForProcessAsync(This,sourceItemList,processId,auditInfo,result) )
    ( (This)->lpVtbl->RequestAccessToFilesForProcessWithMessageAndBehaviorAsync(This,sourceItemList,processId,auditInfo,messageFromApp,behavior,result) )
    ( (This)->lpVtbl->IsFileProtectionRequiredAsync(This,target,identity,result) )
    ( (This)->lpVtbl->IsFileProtectionRequiredForNewFileAsync(This,parentFolder,identity,desiredName,result) )
    ( (This)->lpVtbl->get_PrimaryManagedIdentity(This,value) )
    ( (This)->lpVtbl->GetPrimaryManagedIdentityForIdentity(This,identity,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics4;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_EnterpriseData_IThreadNetworkContext[] = L"Windows.Security.EnterpriseData.IThreadNetworkContext";
typedef struct __x_ABI_CWindows_CSecurity_CEnterpriseData_CIThreadNetworkContextVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIThreadNetworkContext * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIThreadNetworkContext * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIThreadNetworkContext * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIThreadNetworkContext * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIThreadNetworkContext * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIThreadNetworkContext * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CSecurity_CEnterpriseData_CIThreadNetworkContextVtbl;
interface __x_ABI_CWindows_CSecurity_CEnterpriseData_CIThreadNetworkContext
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CEnterpriseData_CIThreadNetworkContextVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CEnterpriseData_CIThreadNetworkContext;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_EnterpriseData_BufferProtectUnprotectResult[] = L"Windows.Security.EnterpriseData.BufferProtectUnprotectResult";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_EnterpriseData_DataProtectionInfo[] = L"Windows.Security.EnterpriseData.DataProtectionInfo";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_EnterpriseData_DataProtectionManager[] = L"Windows.Security.EnterpriseData.DataProtectionManager";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_EnterpriseData_FileProtectionInfo[] = L"Windows.Security.EnterpriseData.FileProtectionInfo";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_EnterpriseData_FileProtectionManager[] = L"Windows.Security.EnterpriseData.FileProtectionManager";
DEPRECATED("FileRevocationManager might be unavailable after Windows 10. Instead, use FileProtectionManager.")
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_EnterpriseData_FileRevocationManager[] = L"Windows.Security.EnterpriseData.FileRevocationManager";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_EnterpriseData_FileUnprotectOptions[] = L"Windows.Security.EnterpriseData.FileUnprotectOptions";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_EnterpriseData_ProtectedAccessResumedEventArgs[] = L"Windows.Security.EnterpriseData.ProtectedAccessResumedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_EnterpriseData_ProtectedAccessSuspendingEventArgs[] = L"Windows.Security.EnterpriseData.ProtectedAccessSuspendingEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_EnterpriseData_ProtectedContainerExportResult[] = L"Windows.Security.EnterpriseData.ProtectedContainerExportResult";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_EnterpriseData_ProtectedContainerImportResult[] = L"Windows.Security.EnterpriseData.ProtectedContainerImportResult";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_EnterpriseData_ProtectedContentRevokedEventArgs[] = L"Windows.Security.EnterpriseData.ProtectedContentRevokedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_EnterpriseData_ProtectedFileCreateResult[] = L"Windows.Security.EnterpriseData.ProtectedFileCreateResult";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_EnterpriseData_ProtectionPolicyAuditInfo[] = L"Windows.Security.EnterpriseData.ProtectionPolicyAuditInfo";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_EnterpriseData_ProtectionPolicyManager[] = L"Windows.Security.EnterpriseData.ProtectionPolicyManager";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_EnterpriseData_ThreadNetworkContext[] = L"Windows.Security.EnterpriseData.ThreadNetworkContext";
       
       
#pragma clang diagnostic pop
